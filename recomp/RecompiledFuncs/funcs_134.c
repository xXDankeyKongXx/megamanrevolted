#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80227324_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227324: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227328: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022732C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80227330: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80227334: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80227338: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022733C: lh          $a0, 0x64($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X64);
    // 0x80227340: lh          $a1, 0x56($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X56);
    // 0x80227344: lb          $a2, 0xF($s1)
    ctx->r6 = MEM_B(ctx->r17, 0XF);
    // 0x80227348: jal         0x8004FA7C
    // 0x8022734C: addiu       $s0, $s1, 0x348
    ctx->r16 = ADD32(ctx->r17, 0X348);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022734C: addiu       $s0, $s1, 0x348
    ctx->r16 = ADD32(ctx->r17, 0X348);
    after_0:
    // 0x80227350: lh          $a1, 0x362($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X362);
    // 0x80227354: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80227358: sll         $v1, $s2, 16
    ctx->r3 = S32(ctx->r18 << 16);
    // 0x8022735C: sra         $a0, $v1, 16
    ctx->r4 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80227360: srl         $v1, $a0, 31
    ctx->r3 = S32(U32(ctx->r4) >> 31);
    // 0x80227364: sltiu       $v0, $a1, 0x1
    ctx->r2 = ctx->r5 < 0X1 ? 1 : 0;
    // 0x80227368: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022736C: bnel        $v0, $zero, L_8022738C
    if (ctx->r2 != 0) {
        // 0x80227370: negu        $s2, $s2
        ctx->r18 = SUB32(0, ctx->r18);
            goto L_8022738C;
    }
    goto skip_0;
    // 0x80227370: negu        $s2, $s2
    ctx->r18 = SUB32(0, ctx->r18);
    skip_0:
    // 0x80227374: sltu        $v0, $zero, $a1
    ctx->r2 = 0 < ctx->r5 ? 1 : 0;
    // 0x80227378: slt         $v1, $zero, $a0
    ctx->r3 = SIGNED(0) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8022737C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80227380: beq         $v0, $zero, L_80227390
    if (ctx->r2 == 0) {
        // 0x80227384: sll         $v0, $s2, 16
        ctx->r2 = S32(ctx->r18 << 16);
            goto L_80227390;
    }
    // 0x80227384: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
    // 0x80227388: negu        $s2, $s2
    ctx->r18 = SUB32(0, ctx->r18);
L_8022738C:
    // 0x8022738C: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
L_80227390:
    // 0x80227390: bne         $v0, $zero, L_802273C0
    if (ctx->r2 != 0) {
        // 0x80227394: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802273C0;
    }
    // 0x80227394: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227398: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x8022739C: lhu         $a0, 0x1E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X1E);
    // 0x802273A0: lhu         $a1, 0x16($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X16);
    // 0x802273A4: subu        $v1, $v0, $v1
    ctx->r3 = SUB32(ctx->r2, ctx->r3);
    // 0x802273A8: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x802273AC: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x802273B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802273B4: sh          $v1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r3;
    // 0x802273B8: j           L_80227418
    // 0x802273BC: sh          $a0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r4;
        goto L_80227418;
    // 0x802273BC: sh          $a0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r4;
L_802273C0:
    // 0x802273C0: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x802273C4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802273C8: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x802273CC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802273D0: beq         $v0, $zero, L_80227414
    if (ctx->r2 == 0) {
        // 0x802273D4: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80227414;
    }
    // 0x802273D4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802273D8: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x802273DC: jal         0x80228B14
    // 0x802273E0: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_80228B14_ovl19(rdram, ctx);
        goto after_1;
    // 0x802273E0: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_1:
    // 0x802273E4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802273E8: beq         $v0, $zero, L_80227420
    if (ctx->r2 == 0) {
        // 0x802273EC: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80227420;
    }
    // 0x802273EC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802273F0: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x802273F4: jal         0x80228A78
    // 0x802273F8: nop

    func_80228A78_ovl19(rdram, ctx);
        goto after_2;
    // 0x802273F8: nop

    after_2:
    // 0x802273FC: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x80227400: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80227404: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x80227408: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022740C: j           L_80227440
    // 0x80227410: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_80227440;
    // 0x80227410: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_80227414:
    // 0x80227414: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80227418:
    // 0x80227418: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8022741C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_80227420:
    // 0x80227420: lhu         $v0, 0x56($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X56);
    // 0x80227424: lh          $a1, 0x44($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X44);
    // 0x80227428: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022742C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80227430: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80227434: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80227438: jal         0x8004DA90
    // 0x8022743C: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x8022743C: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    after_3:
L_80227440:
    // 0x80227440: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80227444: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80227448: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022744C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227450: jr          $ra
    // 0x80227454: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227454: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80229DF8_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229DF8: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80229DFC: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x80229E00: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80229E04: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x80229E08: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x80229E0C: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x80229E10: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x80229E14: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x80229E18: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80229E1C: andi        $v1, $v0, 0xF
    ctx->r3 = ctx->r2 & 0XF;
    // 0x80229E20: bne         $v1, $zero, L_80229F80
    if (ctx->r3 != 0) {
        // 0x80229E24: addiu       $s2, $s1, 0x2E8
        ctx->r18 = ADD32(ctx->r17, 0X2E8);
            goto L_80229F80;
    }
    // 0x80229E24: addiu       $s2, $s1, 0x2E8
    ctx->r18 = ADD32(ctx->r17, 0X2E8);
    // 0x80229E28: lbu         $v0, 0x332($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X332);
    // 0x80229E2C: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x80229E30: beq         $v0, $zero, L_8022A2BC
    if (ctx->r2 == 0) {
        // 0x80229E34: addiu       $s4, $s1, 0x14
        ctx->r20 = ADD32(ctx->r17, 0X14);
            goto L_8022A2BC;
    }
    // 0x80229E34: addiu       $s4, $s1, 0x14
    ctx->r20 = ADD32(ctx->r17, 0X14);
    // 0x80229E38: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x80229E3C: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80229E40: addiu       $s0, $s0, 0x49C4
    ctx->r16 = ADD32(ctx->r16, 0X49C4);
    // 0x80229E44: lhu         $a2, 0x56($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X56);
    // 0x80229E48: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80229E4C: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    // 0x80229E50: jal         0x8004F820
    // 0x80229E54: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80229E54: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_0:
    // 0x80229E58: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x80229E5C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x80229E60: lhu         $a2, 0x56($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X56);
    // 0x80229E64: lhu         $v0, 0x32C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X32C);
    // 0x80229E68: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80229E6C: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    // 0x80229E70: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x80229E74: jal         0x8004F820
    // 0x80229E78: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x80229E78: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_1:
    // 0x80229E7C: lhu         $v1, 0x56($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X56);
    // 0x80229E80: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80229E84: sll         $v0, $s3, 16
    ctx->r2 = S32(ctx->r19 << 16);
    // 0x80229E88: addu        $v1, $v1, $s3
    ctx->r3 = ADD32(ctx->r3, ctx->r19);
    // 0x80229E8C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80229E90: beq         $v0, $zero, L_80229EC8
    if (ctx->r2 == 0) {
        // 0x80229E94: sh          $v1, 0x56($s1)
        MEM_H(0X56, ctx->r17) = ctx->r3;
            goto L_80229EC8;
    }
    // 0x80229E94: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
    // 0x80229E98: lb          $v0, 0x330($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X330);
    // 0x80229E9C: bne         $v0, $zero, L_80229EBC
    if (ctx->r2 != 0) {
        // 0x80229EA0: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80229EBC;
    }
    // 0x80229EA0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80229EA4: addiu       $a0, $zero, 0xDB
    ctx->r4 = ADD32(0, 0XDB);
    // 0x80229EA8: jal         0x8002A33C
    // 0x80229EAC: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x80229EAC: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_2:
    // 0x80229EB0: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x80229EB4: j           L_80229ECC
    // 0x80229EB8: sb          $v0, 0x330($s1)
    MEM_B(0X330, ctx->r17) = ctx->r2;
        goto L_80229ECC;
    // 0x80229EB8: sb          $v0, 0x330($s1)
    MEM_B(0X330, ctx->r17) = ctx->r2;
L_80229EBC:
    // 0x80229EBC: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80229EC0: j           L_80229ECC
    // 0x80229EC4: sb          $v0, 0x330($s1)
    MEM_B(0X330, ctx->r17) = ctx->r2;
        goto L_80229ECC;
    // 0x80229EC4: sb          $v0, 0x330($s1)
    MEM_B(0X330, ctx->r17) = ctx->r2;
L_80229EC8:
    // 0x80229EC8: sb          $zero, 0x330($s1)
    MEM_B(0X330, ctx->r17) = 0;
L_80229ECC:
    // 0x80229ECC: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
    // 0x80229ED0: beql        $v0, $zero, L_80229F04
    if (ctx->r2 == 0) {
        // 0x80229ED4: sb          $zero, 0x49($s2)
        MEM_B(0X49, ctx->r18) = 0;
            goto L_80229F04;
    }
    goto skip_0;
    // 0x80229ED4: sb          $zero, 0x49($s2)
    MEM_B(0X49, ctx->r18) = 0;
    skip_0:
    // 0x80229ED8: lb          $v0, 0x49($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X49);
    // 0x80229EDC: bne         $v0, $zero, L_80229EFC
    if (ctx->r2 != 0) {
        // 0x80229EE0: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80229EFC;
    }
    // 0x80229EE0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80229EE4: addiu       $a0, $zero, 0xDC
    ctx->r4 = ADD32(0, 0XDC);
    // 0x80229EE8: jal         0x8002A33C
    // 0x80229EEC: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x80229EEC: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_3:
    // 0x80229EF0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80229EF4: j           L_80229F04
    // 0x80229EF8: sb          $v0, 0x49($s2)
    MEM_B(0X49, ctx->r18) = ctx->r2;
        goto L_80229F04;
    // 0x80229EF8: sb          $v0, 0x49($s2)
    MEM_B(0X49, ctx->r18) = ctx->r2;
L_80229EFC:
    // 0x80229EFC: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80229F00: sb          $v0, 0x49($s2)
    MEM_B(0X49, ctx->r18) = ctx->r2;
L_80229F04:
    // 0x80229F04: sll         $v1, $s0, 16
    ctx->r3 = S32(ctx->r16 << 16);
    // 0x80229F08: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80229F0C: sll         $v0, $s3, 16
    ctx->r2 = S32(ctx->r19 << 16);
    // 0x80229F10: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80229F14: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80229F18: mflo        $v1
    ctx->r3 = lo;
    // 0x80229F1C: nop

    // 0x80229F20: nop

    // 0x80229F24: blez        $v1, L_80229F44
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80229F28: addiu       $a0, $s1, 0x14
        ctx->r4 = ADD32(ctx->r17, 0X14);
            goto L_80229F44;
    }
    // 0x80229F28: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x80229F2C: lhu         $a2, 0x56($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X56);
    // 0x80229F30: lhu         $v0, 0x44($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X44);
    // 0x80229F34: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80229F38: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80229F3C: j           L_80229F58
    // 0x80229F40: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
        goto L_80229F58;
    // 0x80229F40: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
L_80229F44:
    // 0x80229F44: lhu         $a2, 0x56($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X56);
    // 0x80229F48: lhu         $v0, 0x44($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X44);
    // 0x80229F4C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80229F50: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80229F54: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
L_80229F58:
    // 0x80229F58: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x80229F5C: jal         0x8004F820
    // 0x80229F60: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_4;
    // 0x80229F60: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_4:
    // 0x80229F64: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80229F68: lhu         $v0, 0x44($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X44);
    // 0x80229F6C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80229F70: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x80229F74: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80229F78: j           L_8022A2B4
    // 0x80229F7C: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
        goto L_8022A2B4;
    // 0x80229F7C: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
L_80229F80:
    // 0x80229F80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229F84: bne         $v1, $v0, L_8022A17C
    if (ctx->r3 != ctx->r2) {
        // 0x80229F88: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022A17C;
    }
    // 0x80229F88: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80229F8C: lbu         $v0, 0x332($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X332);
    // 0x80229F90: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x80229F94: beq         $v0, $zero, L_8022A2BC
    if (ctx->r2 == 0) {
        // 0x80229F98: nop
    
            goto L_8022A2BC;
    }
    // 0x80229F98: nop

    // 0x80229F9C: lbu         $v0, 0x336($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X336);
    // 0x80229FA0: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x80229FA4: bne         $v0, $zero, L_80229FDC
    if (ctx->r2 != 0) {
        // 0x80229FA8: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_80229FDC;
    }
    // 0x80229FA8: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x80229FAC: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x80229FB0: lhu         $a2, 0x56($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X56);
    // 0x80229FB4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80229FB8: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80229FBC: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    // 0x80229FC0: jal         0x8004F820
    // 0x80229FC4: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_5;
    // 0x80229FC4: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_5:
    // 0x80229FC8: lhu         $v1, 0x56($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X56);
    // 0x80229FCC: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x80229FD0: addu        $v1, $v1, $s3
    ctx->r3 = ADD32(ctx->r3, ctx->r19);
    // 0x80229FD4: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80229FD8: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
L_80229FDC:
    // 0x80229FDC: addiu       $s4, $s1, 0x14
    ctx->r20 = ADD32(ctx->r17, 0X14);
    // 0x80229FE0: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x80229FE4: lhu         $a2, 0x56($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X56);
    // 0x80229FE8: lhu         $v0, 0x44($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X44);
    // 0x80229FEC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80229FF0: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80229FF4: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    // 0x80229FF8: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x80229FFC: jal         0x8004F820
    // 0x8022A000: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_6;
    // 0x8022A000: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_6:
    // 0x8022A004: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022A008: sll         $v0, $s3, 16
    ctx->r2 = S32(ctx->r19 << 16);
    // 0x8022A00C: beql        $v0, $zero, L_8022A040
    if (ctx->r2 == 0) {
        // 0x8022A010: sb          $zero, 0x48($s2)
        MEM_B(0X48, ctx->r18) = 0;
            goto L_8022A040;
    }
    goto skip_1;
    // 0x8022A010: sb          $zero, 0x48($s2)
    MEM_B(0X48, ctx->r18) = 0;
    skip_1:
    // 0x8022A014: lb          $v0, 0x48($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X48);
    // 0x8022A018: bne         $v0, $zero, L_8022A038
    if (ctx->r2 != 0) {
        // 0x8022A01C: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022A038;
    }
    // 0x8022A01C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022A020: addiu       $a0, $zero, 0xDB
    ctx->r4 = ADD32(0, 0XDB);
    // 0x8022A024: jal         0x8002A33C
    // 0x8022A028: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_7;
    // 0x8022A028: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_7:
    // 0x8022A02C: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x8022A030: j           L_8022A040
    // 0x8022A034: sb          $v0, 0x48($s2)
    MEM_B(0X48, ctx->r18) = ctx->r2;
        goto L_8022A040;
    // 0x8022A034: sb          $v0, 0x48($s2)
    MEM_B(0X48, ctx->r18) = ctx->r2;
L_8022A038:
    // 0x8022A038: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022A03C: sb          $v0, 0x48($s2)
    MEM_B(0X48, ctx->r18) = ctx->r2;
L_8022A040:
    // 0x8022A040: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
    // 0x8022A044: beql        $v0, $zero, L_8022A078
    if (ctx->r2 == 0) {
        // 0x8022A048: sb          $zero, 0x49($s2)
        MEM_B(0X49, ctx->r18) = 0;
            goto L_8022A078;
    }
    goto skip_2;
    // 0x8022A048: sb          $zero, 0x49($s2)
    MEM_B(0X49, ctx->r18) = 0;
    skip_2:
    // 0x8022A04C: lb          $v0, 0x49($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X49);
    // 0x8022A050: bne         $v0, $zero, L_8022A070
    if (ctx->r2 != 0) {
        // 0x8022A054: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022A070;
    }
    // 0x8022A054: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022A058: addiu       $a0, $zero, 0xDC
    ctx->r4 = ADD32(0, 0XDC);
    // 0x8022A05C: jal         0x8002A33C
    // 0x8022A060: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_8;
    // 0x8022A060: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_8:
    // 0x8022A064: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022A068: j           L_8022A078
    // 0x8022A06C: sb          $v0, 0x49($s2)
    MEM_B(0X49, ctx->r18) = ctx->r2;
        goto L_8022A078;
    // 0x8022A06C: sb          $v0, 0x49($s2)
    MEM_B(0X49, ctx->r18) = ctx->r2;
L_8022A070:
    // 0x8022A070: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022A074: sb          $v0, 0x49($s2)
    MEM_B(0X49, ctx->r18) = ctx->r2;
L_8022A078:
    // 0x8022A078: sll         $v0, $s3, 16
    ctx->r2 = S32(ctx->r19 << 16);
    // 0x8022A07C: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022A080: beq         $v1, $zero, L_8022A0E0
    if (ctx->r3 == 0) {
        // 0x8022A084: sll         $v0, $s0, 16
        ctx->r2 = S32(ctx->r16 << 16);
            goto L_8022A0E0;
    }
    // 0x8022A084: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
    // 0x8022A088: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022A08C: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022A090: mflo        $v0
    ctx->r2 = lo;
    // 0x8022A094: nop

    // 0x8022A098: nop

    // 0x8022A09C: blez        $v0, L_8022A0BC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8022A0A0: addiu       $a0, $s1, 0x14
        ctx->r4 = ADD32(ctx->r17, 0X14);
            goto L_8022A0BC;
    }
    // 0x8022A0A0: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8022A0A4: lhu         $a2, 0x56($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X56);
    // 0x8022A0A8: lhu         $v0, 0x44($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X44);
    // 0x8022A0AC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022A0B0: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022A0B4: j           L_8022A0D0
    // 0x8022A0B8: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
        goto L_8022A0D0;
    // 0x8022A0B8: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
L_8022A0BC:
    // 0x8022A0BC: lhu         $a2, 0x56($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X56);
    // 0x8022A0C0: lhu         $v0, 0x44($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X44);
    // 0x8022A0C4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022A0C8: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022A0CC: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
L_8022A0D0:
    // 0x8022A0D0: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8022A0D4: jal         0x8004F820
    // 0x8022A0D8: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_9;
    // 0x8022A0D8: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_9:
    // 0x8022A0DC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
L_8022A0E0:
    // 0x8022A0E0: lhu         $v0, 0x44($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X44);
    // 0x8022A0E4: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x8022A0E8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022A0EC: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    // 0x8022A0F0: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x8022A0F4: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x8022A0F8: lb          $v0, 0x48($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X48);
    // 0x8022A0FC: bne         $v0, $zero, L_8022A118
    if (ctx->r2 != 0) {
        // 0x8022A100: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022A118;
    }
    // 0x8022A100: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022A104: addiu       $a0, $zero, 0xDB
    ctx->r4 = ADD32(0, 0XDB);
    // 0x8022A108: jal         0x8002A33C
    // 0x8022A10C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_10;
    // 0x8022A10C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_10:
    // 0x8022A110: j           L_8022A11C
    // 0x8022A114: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
        goto L_8022A11C;
    // 0x8022A114: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_8022A118:
    // 0x8022A118: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
L_8022A11C:
    // 0x8022A11C: sb          $v0, 0x48($s2)
    MEM_B(0X48, ctx->r18) = ctx->r2;
    // 0x8022A120: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022A124: lh          $a1, 0x44($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X44);
    // 0x8022A128: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022A12C: jal         0x8004DA90
    // 0x8022A130: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_11;
    // 0x8022A130: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_11:
    // 0x8022A134: jal         0x80040F30
    // 0x8022A138: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_12;
    // 0x8022A138: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_12:
    // 0x8022A13C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022A140: andi        $v0, $s0, 0x3000
    ctx->r2 = ctx->r16 & 0X3000;
    // 0x8022A144: bne         $v0, $zero, L_8022A164
    if (ctx->r2 != 0) {
        // 0x8022A148: andi        $v0, $s0, 0xF00
        ctx->r2 = ctx->r16 & 0XF00;
            goto L_8022A164;
    }
    // 0x8022A148: andi        $v0, $s0, 0xF00
    ctx->r2 = ctx->r16 & 0XF00;
    // 0x8022A14C: jal         0x8003E934
    // 0x8022A150: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_13;
    // 0x8022A150: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_13:
    // 0x8022A154: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x8022A158: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A15C: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x8022A160: andi        $v0, $s0, 0xF00
    ctx->r2 = ctx->r16 & 0XF00;
L_8022A164:
    // 0x8022A164: beq         $v0, $zero, L_8022A2B0
    if (ctx->r2 == 0) {
        // 0x8022A168: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022A2B0;
    }
    // 0x8022A168: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022A16C: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x8022A170: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8022A174: j           L_8022A2BC
    // 0x8022A178: sh          $v0, 0x46($s2)
    MEM_H(0X46, ctx->r18) = ctx->r2;
        goto L_8022A2BC;
    // 0x8022A178: sh          $v0, 0x46($s2)
    MEM_H(0X46, ctx->r18) = ctx->r2;
L_8022A17C:
    // 0x8022A17C: bne         $v1, $v0, L_8022A2BC
    if (ctx->r3 != ctx->r2) {
        // 0x8022A180: addiu       $s3, $s1, 0x14
        ctx->r19 = ADD32(ctx->r17, 0X14);
            goto L_8022A2BC;
    }
    // 0x8022A180: addiu       $s3, $s1, 0x14
    ctx->r19 = ADD32(ctx->r17, 0X14);
    // 0x8022A184: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8022A188: lbu         $v1, 0xE($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XE);
    // 0x8022A18C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022A190: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022A194: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    // 0x8022A198: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x8022A19C: lhu         $a2, 0x32C($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X32C);
    // 0x8022A1A0: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x8022A1A4: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x8022A1A8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022A1AC: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022A1B0: addu        $a2, $v0, $a2
    ctx->r6 = ADD32(ctx->r2, ctx->r6);
    // 0x8022A1B4: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    // 0x8022A1B8: jal         0x8004F820
    // 0x8022A1BC: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_14;
    // 0x8022A1BC: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
    after_14:
    // 0x8022A1C0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022A1C4: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
    // 0x8022A1C8: beql        $v0, $zero, L_8022A1FC
    if (ctx->r2 == 0) {
        // 0x8022A1CC: sb          $zero, 0x331($s1)
        MEM_B(0X331, ctx->r17) = 0;
            goto L_8022A1FC;
    }
    goto skip_3;
    // 0x8022A1CC: sb          $zero, 0x331($s1)
    MEM_B(0X331, ctx->r17) = 0;
    skip_3:
    // 0x8022A1D0: lb          $v0, 0x331($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X331);
    // 0x8022A1D4: bne         $v0, $zero, L_8022A1F4
    if (ctx->r2 != 0) {
        // 0x8022A1D8: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022A1F4;
    }
    // 0x8022A1D8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022A1DC: addiu       $a0, $zero, 0xDC
    ctx->r4 = ADD32(0, 0XDC);
    // 0x8022A1E0: jal         0x8002A33C
    // 0x8022A1E4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_15;
    // 0x8022A1E4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_15:
    // 0x8022A1E8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022A1EC: j           L_8022A1FC
    // 0x8022A1F0: sb          $v0, 0x331($s1)
    MEM_B(0X331, ctx->r17) = ctx->r2;
        goto L_8022A1FC;
    // 0x8022A1F0: sb          $v0, 0x331($s1)
    MEM_B(0X331, ctx->r17) = ctx->r2;
L_8022A1F4:
    // 0x8022A1F4: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022A1F8: sb          $v0, 0x331($s1)
    MEM_B(0X331, ctx->r17) = ctx->r2;
L_8022A1FC:
    // 0x8022A1FC: lb          $v1, 0xE($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XE);
    // 0x8022A200: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
    // 0x8022A204: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022A208: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022A20C: mflo        $v0
    ctx->r2 = lo;
    // 0x8022A210: nop

    // 0x8022A214: nop

    // 0x8022A218: blez        $v0, L_8022A238
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8022A21C: addiu       $a0, $s1, 0x14
        ctx->r4 = ADD32(ctx->r17, 0X14);
            goto L_8022A238;
    }
    // 0x8022A21C: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8022A220: lhu         $a2, 0x56($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X56);
    // 0x8022A224: lhu         $v0, 0x44($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X44);
    // 0x8022A228: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022A22C: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022A230: j           L_8022A24C
    // 0x8022A234: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
        goto L_8022A24C;
    // 0x8022A234: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
L_8022A238:
    // 0x8022A238: lhu         $a2, 0x56($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X56);
    // 0x8022A23C: lhu         $v0, 0x44($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X44);
    // 0x8022A240: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022A244: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022A248: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
L_8022A24C:
    // 0x8022A24C: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8022A250: jal         0x8004F820
    // 0x8022A254: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_16;
    // 0x8022A254: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_16:
    // 0x8022A258: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022A25C: lhu         $v0, 0x44($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X44);
    // 0x8022A260: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x8022A264: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022A268: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    // 0x8022A26C: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x8022A270: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x8022A274: lb          $v0, 0x48($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X48);
    // 0x8022A278: bne         $v0, $zero, L_8022A294
    if (ctx->r2 != 0) {
        // 0x8022A27C: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022A294;
    }
    // 0x8022A27C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022A280: addiu       $a0, $zero, 0xDB
    ctx->r4 = ADD32(0, 0XDB);
    // 0x8022A284: jal         0x8002A33C
    // 0x8022A288: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_17;
    // 0x8022A288: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_17:
    // 0x8022A28C: j           L_8022A298
    // 0x8022A290: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
        goto L_8022A298;
    // 0x8022A290: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
L_8022A294:
    // 0x8022A294: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
L_8022A298:
    // 0x8022A298: sb          $v0, 0x48($s2)
    MEM_B(0X48, ctx->r18) = ctx->r2;
    // 0x8022A29C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022A2A0: lh          $a1, 0x44($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X44);
    // 0x8022A2A4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022A2A8: jal         0x8004DA90
    // 0x8022A2AC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_18;
    // 0x8022A2AC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_18:
L_8022A2B0:
    // 0x8022A2B0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_8022A2B4:
    // 0x8022A2B4: jal         0x8022AA4C
    // 0x8022A2B8: nop

    func_8022AA4C_ovl19(rdram, ctx);
        goto after_19;
    // 0x8022A2B8: nop

    after_19:
L_8022A2BC:
    // 0x8022A2BC: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x8022A2C0: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x8022A2C4: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x8022A2C8: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x8022A2CC: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x8022A2D0: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x8022A2D4: jr          $ra
    // 0x8022A2D8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x8022A2D8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80226830_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226830: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226834: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80226838: jal         0x8004F418
    // 0x8022683C: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8022683C: nop

    after_0:
    // 0x80226840: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80226844: jr          $ra
    // 0x80226848: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226848: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A434_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A434: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022A438: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022A43C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022A440: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8022A444: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8022A448: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8022A44C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8022A450: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8022A454: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022A458: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022A45C: lbu         $v0, 0xAD($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XAD);
    // 0x8022A460: lbu         $a1, 0xAC($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0XAC);
    // 0x8022A464: addiu       $s0, $s2, 0x2E8
    ctx->r16 = ADD32(ctx->r18, 0X2E8);
    // 0x8022A468: lui         $s4, 0x8020
    ctx->r20 = S32(0X8020 << 16);
    // 0x8022A46C: addiu       $s4, $s4, 0x49B0
    ctx->r20 = ADD32(ctx->r20, 0X49B0);
    // 0x8022A470: beq         $v0, $a1, L_8022A66C
    if (ctx->r2 == ctx->r5) {
        // 0x8022A474: sb          $zero, 0x330($s2)
        MEM_B(0X330, ctx->r18) = 0;
            goto L_8022A66C;
    }
    // 0x8022A474: sb          $zero, 0x330($s2)
    MEM_B(0X330, ctx->r18) = 0;
    // 0x8022A478: lbu         $t0, 0x33B($s2)
    ctx->r8 = MEM_BU(ctx->r18, 0X33B);
    // 0x8022A47C: bne         $t0, $zero, L_8022A5FC
    if (ctx->r8 != 0) {
        // 0x8022A480: addiu       $t0, $t0, -0x1
        ctx->r8 = ADD32(ctx->r8, -0X1);
            goto L_8022A5FC;
    }
    // 0x8022A480: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x8022A484: jal         0x800502EC
    // 0x8022A488: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800502EC_2B6EC(rdram, ctx);
        goto after_0;
    // 0x8022A488: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022A48C: lbu         $v0, 0xAC($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XAC);
    // 0x8022A490: jal         0x8004EFE4
    // 0x8022A494: sb          $v0, 0xAD($s2)
    MEM_B(0XAD, ctx->r18) = ctx->r2;
    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_1;
    // 0x8022A494: sb          $v0, 0xAD($s2)
    MEM_B(0XAD, ctx->r18) = ctx->r2;
    after_1:
    // 0x8022A498: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x8022A49C: beq         $s3, $zero, L_8022A714
    if (ctx->r19 == 0) {
        // 0x8022A4A0: addiu       $a0, $zero, 0xDD
        ctx->r4 = ADD32(0, 0XDD);
            goto L_8022A714;
    }
    // 0x8022A4A0: addiu       $a0, $zero, 0xDD
    ctx->r4 = ADD32(0, 0XDD);
    // 0x8022A4A4: jal         0x8002A33C
    // 0x8022A4A8: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x8022A4A8: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    after_2:
    // 0x8022A4AC: addiu       $s5, $zero, 0x3
    ctx->r21 = ADD32(0, 0X3);
    // 0x8022A4B0: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    // 0x8022A4B4: sb          $s5, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r21;
    // 0x8022A4B8: sb          $s6, 0x2($s3)
    MEM_B(0X2, ctx->r19) = ctx->r22;
    // 0x8022A4BC: sb          $zero, 0x4($s3)
    MEM_B(0X4, ctx->r19) = 0;
    // 0x8022A4C0: sb          $s5, 0xF($s3)
    MEM_B(0XF, ctx->r19) = ctx->r21;
    // 0x8022A4C4: lhu         $v0, 0x188($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X188);
    // 0x8022A4C8: sh          $v0, 0x14($s3)
    MEM_H(0X14, ctx->r19) = ctx->r2;
    // 0x8022A4CC: lhu         $v0, 0x18A($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X18A);
    // 0x8022A4D0: addiu       $v0, $v0, -0x41
    ctx->r2 = ADD32(ctx->r2, -0X41);
    // 0x8022A4D4: sh          $v0, 0x16($s3)
    MEM_H(0X16, ctx->r19) = ctx->r2;
    // 0x8022A4D8: lhu         $v0, 0x18C($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X18C);
    // 0x8022A4DC: lh          $v1, 0x16($s3)
    ctx->r3 = MEM_H(ctx->r19, 0X16);
    // 0x8022A4E0: addiu       $s1, $s3, 0x14
    ctx->r17 = ADD32(ctx->r19, 0X14);
    // 0x8022A4E4: sh          $v0, 0x18($s3)
    MEM_H(0X18, ctx->r19) = ctx->r2;
    // 0x8022A4E8: lh          $v0, 0x14($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X14);
    // 0x8022A4EC: lh          $a1, 0x18($s3)
    ctx->r5 = MEM_H(ctx->r19, 0X18);
    // 0x8022A4F0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022A4F4: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022A4F8: sw          $v1, 0x20($s3)
    MEM_W(0X20, ctx->r19) = ctx->r3;
    // 0x8022A4FC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A500: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8022A504: sw          $v0, 0x1C($s3)
    MEM_W(0X1C, ctx->r19) = ctx->r2;
    // 0x8022A508: sw          $a1, 0x24($s3)
    MEM_W(0X24, ctx->r19) = ctx->r5;
    // 0x8022A50C: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x8022A510: lh          $v0, 0x32C($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X32C);
    // 0x8022A514: addiu       $a3, $zero, 0xC00
    ctx->r7 = ADD32(0, 0XC00);
    // 0x8022A518: addiu       $a1, $s3, 0x1C
    ctx->r5 = ADD32(ctx->r19, 0X1C);
    // 0x8022A51C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8022A520: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8022A524: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8022A528: jal         0x8004DBA0
    // 0x8022A52C: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_3;
    // 0x8022A52C: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_3:
    // 0x8022A530: addiu       $s0, $s4, 0xC4
    ctx->r16 = ADD32(ctx->r20, 0XC4);
    // 0x8022A534: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A538: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022A53C: jal         0x8009A3B4
    // 0x8022A540: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022A540: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x8022A544: lh          $v0, 0xC4($s4)
    ctx->r2 = MEM_H(ctx->r20, 0XC4);
    // 0x8022A548: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A54C: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x8022A550: addiu       $a1, $s2, 0x318
    ctx->r5 = ADD32(ctx->r18, 0X318);
    // 0x8022A554: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A558: sw          $v0, 0x318($s2)
    MEM_W(0X318, ctx->r18) = ctx->r2;
    // 0x8022A55C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022A560: lh          $v0, 0x4A76($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X4A76);
    // 0x8022A564: lh          $v1, 0x32C($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X32C);
    // 0x8022A568: addiu       $a3, $zero, 0x2000
    ctx->r7 = ADD32(0, 0X2000);
    // 0x8022A56C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A570: sw          $v0, 0x31C($s2)
    MEM_W(0X31C, ctx->r18) = ctx->r2;
    // 0x8022A574: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022A578: lh          $v0, 0x4A78($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X4A78);
    // 0x8022A57C: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x8022A580: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    // 0x8022A584: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A588: sw          $v0, 0x320($s2)
    MEM_W(0X320, ctx->r18) = ctx->r2;
    // 0x8022A58C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8022A590: jal         0x8004DBA0
    // 0x8022A594: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_5;
    // 0x8022A594: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_5:
    // 0x8022A598: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8022A59C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022A5A0: lhu         $v0, 0x4A76($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4A76);
    // 0x8022A5A4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022A5A8: addiu       $v0, $v0, 0x50
    ctx->r2 = ADD32(ctx->r2, 0X50);
    // 0x8022A5AC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A5B0: sh          $v0, 0x4A76($at)
    MEM_H(0X4A76, ctx->r1) = ctx->r2;
    // 0x8022A5B4: jal         0x8004E99C
    // 0x8022A5B8: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    func_8004E99C_29D9C(rdram, ctx);
        goto after_6;
    // 0x8022A5B8: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    after_6:
    // 0x8022A5BC: jal         0x8004F144
    // 0x8022A5C0: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_7;
    // 0x8022A5C0: nop

    after_7:
    // 0x8022A5C4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022A5C8: beq         $v1, $zero, L_8022A714
    if (ctx->r3 == 0) {
        // 0x8022A5CC: addiu       $v0, $zero, 0xF
        ctx->r2 = ADD32(0, 0XF);
            goto L_8022A714;
    }
    // 0x8022A5CC: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x8022A5D0: sb          $s5, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r21;
    // 0x8022A5D4: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8022A5D8: sb          $s5, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r21;
    // 0x8022A5DC: sb          $s6, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r22;
    // 0x8022A5E0: lhu         $v0, 0x14($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X14);
    // 0x8022A5E4: sh          $v0, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = ctx->r2;
    // 0x8022A5E8: lhu         $v0, 0x16($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X16);
    // 0x8022A5EC: sh          $v0, 0x1E($v1)
    MEM_H(0X1E, ctx->r3) = ctx->r2;
    // 0x8022A5F0: lhu         $v0, 0x18($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X18);
    // 0x8022A5F4: j           L_8022A714
    // 0x8022A5F8: sh          $v0, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r2;
        goto L_8022A714;
    // 0x8022A5F8: sh          $v0, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r2;
L_8022A5FC:
    // 0x8022A5FC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022A600: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x8022A604: lhu         $v0, 0x56($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X56);
    // 0x8022A608: lhu         $v1, 0x32C($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X32C);
    // 0x8022A60C: addiu       $a2, $s2, 0x310
    ctx->r6 = ADD32(ctx->r18, 0X310);
    // 0x8022A610: addiu       $a3, $s2, 0x318
    ctx->r7 = ADD32(ctx->r18, 0X318);
    // 0x8022A614: sb          $t0, 0x33B($s2)
    MEM_B(0X33B, ctx->r18) = ctx->r8;
    // 0x8022A618: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022A61C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A620: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022A624: jal         0x8004E150
    // 0x8022A628: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8004E150_29550(rdram, ctx);
        goto after_8;
    // 0x8022A628: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_8:
    // 0x8022A62C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022A630: bne         $v0, $zero, L_8022A714
    if (ctx->r2 != 0) {
        // 0x8022A634: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_8022A714;
    }
    // 0x8022A634: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022A638: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022A63C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022A640: jal         0x800502EC
    // 0x8022A644: sb          $zero, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = 0;
    func_800502EC_2B6EC(rdram, ctx);
        goto after_9;
    // 0x8022A644: sb          $zero, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = 0;
    after_9:
    // 0x8022A648: lbu         $v1, 0xAC($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XAC);
    // 0x8022A64C: lbu         $a0, 0x334($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X334);
    // 0x8022A650: lbu         $a1, 0x335($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X335);
    // 0x8022A654: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8022A658: sb          $v0, 0x33B($s2)
    MEM_B(0X33B, ctx->r18) = ctx->r2;
    // 0x8022A65C: sb          $v1, 0xAD($s2)
    MEM_B(0XAD, ctx->r18) = ctx->r3;
    // 0x8022A660: sb          $a0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r4;
    // 0x8022A664: j           L_8022A714
    // 0x8022A668: sb          $a1, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r5;
        goto L_8022A714;
    // 0x8022A668: sb          $a1, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r5;
L_8022A66C:
    // 0x8022A66C: lb          $v1, 0xA7($s2)
    ctx->r3 = MEM_B(ctx->r18, 0XA7);
    // 0x8022A670: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022A674: bne         $v1, $v0, L_8022A714
    if (ctx->r3 != ctx->r2) {
        // 0x8022A678: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_8022A714;
    }
    // 0x8022A678: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022A67C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x8022A680: lhu         $v0, 0x56($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X56);
    // 0x8022A684: lhu         $v1, 0x32C($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X32C);
    // 0x8022A688: addiu       $a2, $s2, 0x310
    ctx->r6 = ADD32(ctx->r18, 0X310);
    // 0x8022A68C: addiu       $a3, $s2, 0x318
    ctx->r7 = ADD32(ctx->r18, 0X318);
    // 0x8022A690: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022A694: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A698: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022A69C: jal         0x8004E150
    // 0x8022A6A0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8004E150_29550(rdram, ctx);
        goto after_10;
    // 0x8022A6A0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_10:
    // 0x8022A6A4: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022A6A8: beq         $v0, $zero, L_8022A6E4
    if (ctx->r2 == 0) {
        // 0x8022A6AC: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_8022A6E4;
    }
    // 0x8022A6AC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022A6B0: lbu         $v0, 0x33A($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X33A);
    // 0x8022A6B4: bne         $v0, $zero, L_8022A6E8
    if (ctx->r2 != 0) {
        // 0x8022A6B8: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_8022A6E8;
    }
    // 0x8022A6B8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022A6BC: lbu         $v0, 0x336($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X336);
    // 0x8022A6C0: lbu         $a0, 0x33A($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X33A);
    // 0x8022A6C4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022A6C8: sb          $zero, 0xAD($s2)
    MEM_B(0XAD, ctx->r18) = 0;
    // 0x8022A6CC: sb          $v1, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r3;
    // 0x8022A6D0: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x8022A6D4: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x8022A6D8: sb          $v0, 0x336($s2)
    MEM_B(0X336, ctx->r18) = ctx->r2;
    // 0x8022A6DC: j           L_8022A714
    // 0x8022A6E0: sb          $a0, 0x33A($s2)
    MEM_B(0X33A, ctx->r18) = ctx->r4;
        goto L_8022A714;
    // 0x8022A6E0: sb          $a0, 0x33A($s2)
    MEM_B(0X33A, ctx->r18) = ctx->r4;
L_8022A6E4:
    // 0x8022A6E4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_8022A6E8:
    // 0x8022A6E8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022A6EC: jal         0x800502EC
    // 0x8022A6F0: sb          $zero, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = 0;
    func_800502EC_2B6EC(rdram, ctx);
        goto after_11;
    // 0x8022A6F0: sb          $zero, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = 0;
    after_11:
    // 0x8022A6F4: lbu         $v0, 0xAC($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XAC);
    // 0x8022A6F8: sb          $v0, 0xAD($s2)
    MEM_B(0XAD, ctx->r18) = ctx->r2;
    // 0x8022A6FC: lbu         $v0, 0x4C($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4C);
    // 0x8022A700: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x8022A704: lbu         $v0, 0x4D($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4D);
    // 0x8022A708: sb          $v0, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r2;
    // 0x8022A70C: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8022A710: sb          $v0, 0x53($s0)
    MEM_B(0X53, ctx->r16) = ctx->r2;
L_8022A714:
    // 0x8022A714: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8022A718: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8022A71C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8022A720: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8022A724: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8022A728: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022A72C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022A730: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022A734: jr          $ra
    // 0x8022A738: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022A738: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_802266C4_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802266C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802266C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802266CC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802266D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802266D4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802266D8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802266DC: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x802266E0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802266E4: lhu         $a2, 0x368($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X368);
    // 0x802266E8: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x802266EC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802266F0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802266F4: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x802266F8: addiu       $v1, $v1, -0x2150
    ctx->r3 = ADD32(ctx->r3, -0X2150);
    // 0x802266FC: jal         0x80228B14
    // 0x80226700: addu        $s1, $v0, $v1
    ctx->r17 = ADD32(ctx->r2, ctx->r3);
    func_80228B14_ovl19(rdram, ctx);
        goto after_0;
    // 0x80226700: addu        $s1, $v0, $v1
    ctx->r17 = ADD32(ctx->r2, ctx->r3);
    after_0:
    // 0x80226704: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80226708: beq         $v0, $zero, L_80226818
    if (ctx->r2 == 0) {
        // 0x8022670C: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_80226818;
    }
    // 0x8022670C: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x80226710: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80226714: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x80226718: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022671C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80226720: jal         0x8009A3B4
    // 0x80226724: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80226724: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_1:
    // 0x80226728: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022672C: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80226730: jal         0x8009A3B4
    // 0x80226734: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80226734: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x80226738: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022673C: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80226740: jal         0x8009A3B4
    // 0x80226744: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80226744: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x80226748: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022674C: addiu       $v1, $zero, 0x4210
    ctx->r3 = ADD32(0, 0X4210);
    // 0x80226750: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80226754: beq         $v0, $zero, L_80226764
    if (ctx->r2 == 0) {
        // 0x80226758: sh          $v1, 0x15E($s0)
        MEM_H(0X15E, ctx->r16) = ctx->r3;
            goto L_80226764;
    }
    // 0x80226758: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x8022675C: jal         0x8022897C
    // 0x80226760: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022897C_ovl19(rdram, ctx);
        goto after_4;
    // 0x80226760: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_80226764:
    // 0x80226764: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80226768: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022676C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226770: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226774: lw          $v0, -0x1BE8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1BE8);
    // 0x80226778: jalr        $v0
    // 0x8022677C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x8022677C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80226780: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80226784: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x80226788: bne         $v0, $zero, L_802267A4
    if (ctx->r2 != 0) {
        // 0x8022678C: nop
    
            goto L_802267A4;
    }
    // 0x8022678C: nop

    // 0x80226790: jal         0x8003E934
    // 0x80226794: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_6;
    // 0x80226794: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x80226798: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022679C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802267A0: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_802267A4:
    // 0x802267A4: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x802267A8: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x802267AC: beq         $v0, $a1, L_802267C4
    if (ctx->r2 == ctx->r5) {
        // 0x802267B0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802267C4;
    }
    // 0x802267B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802267B4: jal         0x80050294
    // 0x802267B8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_7;
    // 0x802267B8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x802267BC: j           L_802267CC
    // 0x802267C0: nop

        goto L_802267CC;
    // 0x802267C0: nop

L_802267C4:
    // 0x802267C4: jal         0x8005044C
    // 0x802267C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_8;
    // 0x802267C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
L_802267CC:
    // 0x802267CC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802267D0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x802267D4: beq         $v0, $zero, L_802267F0
    if (ctx->r2 == 0) {
        // 0x802267D8: nop
    
            goto L_802267F0;
    }
    // 0x802267D8: nop

    // 0x802267DC: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x802267E0: lw          $a2, 0x4($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X4);
    // 0x802267E4: lw          $a3, 0x8($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X8);
    // 0x802267E8: jal         0x8003B564
    // 0x802267EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_9;
    // 0x802267EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
L_802267F0:
    // 0x802267F0: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x802267F4: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x802267F8: beq         $v0, $zero, L_80226808
    if (ctx->r2 == 0) {
        // 0x802267FC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80226808;
    }
    // 0x802267FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226800: j           L_8022680C
    // 0x80226804: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_8022680C;
    // 0x80226804: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_80226808:
    // 0x80226808: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
L_8022680C:
    // 0x8022680C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80226810: jal         0x80047284
    // 0x80226814: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_10;
    // 0x80226814: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_10:
L_80226818:
    // 0x80226818: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022681C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80226820: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226824: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226828: jr          $ra
    // 0x8022682C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022682C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80228C4C_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228C4C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80228C50: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80228C54: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228C58: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80228C5C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80228C60: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80228C64: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80228C68: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x80228C6C: sltiu       $v0, $v1, 0x9
    ctx->r2 = ctx->r3 < 0X9 ? 1 : 0;
    // 0x80228C70: beq         $v0, $zero, L_802290EC
    if (ctx->r2 == 0) {
        // 0x80228C74: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_802290EC;
    }
    // 0x80228C74: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80228C78: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80228C7C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228C80: addu        $at, $at, $v0
    gpr jr_addend_80228C88 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228C84: lw          $v0, -0x1750($at)
    ctx->r2 = ADD32(ctx->r1, -0X1750);
    // 0x80228C88: jr          $v0
    // 0x80228C8C: nop

    switch (jr_addend_80228C88 >> 2) {
        case 0: goto L_80228C90; break;
        case 1: goto L_80228D74; break;
        case 2: goto L_80228E1C; break;
        case 3: goto L_80228E60; break;
        case 4: goto L_80228EDC; break;
        case 5: goto L_80228F84; break;
        case 6: goto L_80229000; break;
        case 7: goto L_802290EC; break;
        case 8: goto L_802290AC; break;
        default: switch_error(__func__, 0x80228C88, 0x8022E8B0);
    }
    // 0x80228C8C: nop

L_80228C90:
    // 0x80228C90: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80228C94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228C98: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80228C9C: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80228CA0: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80228CA4: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80228CA8: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80228CAC: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80228CB0: jal         0x8004D5D4
    // 0x80228CB4: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80228CB4: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x80228CB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228CBC: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80228CC0: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80228CC4: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80228CC8: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80228CCC: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80228CD0: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80228CD4: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80228CD8: addiu       $v0, $v0, -0x19B0
    ctx->r2 = ADD32(ctx->r2, -0X19B0);
    // 0x80228CDC: jal         0x8003E934
    // 0x80228CE0: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x80228CE0: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    after_1:
    // 0x80228CE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228CE8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80228CEC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80228CF0: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80228CF4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228CF8: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80228CFC: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80228D00: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    // 0x80228D04: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80228D08: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80228D0C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80228D10: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x80228D14: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x80228D18: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x80228D1C: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x80228D20: sh          $zero, 0x362($s0)
    MEM_H(0X362, ctx->r16) = 0;
    // 0x80228D24: sh          $zero, 0x364($s0)
    MEM_H(0X364, ctx->r16) = 0;
    // 0x80228D28: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
    // 0x80228D2C: sw          $zero, 0x348($s0)
    MEM_W(0X348, ctx->r16) = 0;
    // 0x80228D30: sw          $zero, 0x34C($s0)
    MEM_W(0X34C, ctx->r16) = 0;
    // 0x80228D34: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80228D38: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80228D3C: sw          $zero, 0x350($s0)
    MEM_W(0X350, ctx->r16) = 0;
    // 0x80228D40: sw          $v0, 0x354($s0)
    MEM_W(0X354, ctx->r16) = ctx->r2;
    // 0x80228D44: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80228D48: jal         0x80050294
    // 0x80228D4C: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x80228D4C: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    after_2:
    // 0x80228D50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228D54: jal         0x80229468
    // 0x80228D58: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80229468_ovl19(rdram, ctx);
        goto after_3;
    // 0x80228D58: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x80228D5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228D60: jal         0x80229448
    // 0x80228D64: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80229448_ovl19(rdram, ctx);
        goto after_4;
    // 0x80228D64: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x80228D68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228D6C: j           L_802290EC
    // 0x80228D70: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_802290EC;
    // 0x80228D70: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80228D74:
    // 0x80228D74: lhu         $v0, 0x54($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X54);
    // 0x80228D78: lhu         $v1, 0x18($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X18);
    // 0x80228D7C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80228D80: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80228D84: sh          $v0, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r2;
    // 0x80228D88: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80228D8C: lhu         $v1, 0x1A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1A);
    // 0x80228D90: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80228D94: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80228D98: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80228D9C: lhu         $v0, 0x58($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X58);
    // 0x80228DA0: lhu         $v1, 0x1C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1C);
    // 0x80228DA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228DA8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80228DAC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80228DB0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80228DB4: jal         0x80229628
    // 0x80228DB8: sh          $v0, 0x58($s0)
    MEM_H(0X58, ctx->r16) = ctx->r2;
    func_80229628_ovl19(rdram, ctx);
        goto after_5;
    // 0x80228DB8: sh          $v0, 0x58($s0)
    MEM_H(0X58, ctx->r16) = ctx->r2;
    after_5:
    // 0x80228DBC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80228DC0: bne         $v0, $zero, L_802290F0
    if (ctx->r2 != 0) {
        // 0x80228DC4: nop
    
            goto L_802290F0;
    }
    // 0x80228DC4: nop

    // 0x80228DC8: jal         0x8003E934
    // 0x80228DCC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_6;
    // 0x80228DCC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x80228DD0: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x80228DD4: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80228DD8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228DDC: beq         $a1, $zero, L_80228DEC
    if (ctx->r5 == 0) {
        // 0x80228DE0: sw          $v0, 0x20($s0)
        MEM_W(0X20, ctx->r16) = ctx->r2;
            goto L_80228DEC;
    }
    // 0x80228DE0: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80228DE4: jal         0x8022930C
    // 0x80228DE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022930C_ovl19(rdram, ctx);
        goto after_7;
    // 0x80228DE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
L_80228DEC:
    // 0x80228DEC: jal         0x8022938C
    // 0x80228DF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022938C_ovl19(rdram, ctx);
        goto after_8;
    // 0x80228DF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x80228DF4: jal         0x8005044C
    // 0x80228DF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_9;
    // 0x80228DF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x80228DFC: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80228E00: bne         $v0, $zero, L_80228E14
    if (ctx->r2 != 0) {
        // 0x80228E04: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_80228E14;
    }
    // 0x80228E04: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228E08: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80228E0C: j           L_802290EC
    // 0x80228E10: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_802290EC;
    // 0x80228E10: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80228E14:
    // 0x80228E14: j           L_802290EC
    // 0x80228E18: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_802290EC;
    // 0x80228E18: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80228E1C:
    // 0x80228E1C: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80228E20: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80228E24: bne         $v1, $v0, L_80228E48
    if (ctx->r3 != ctx->r2) {
        // 0x80228E28: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80228E48;
    }
    // 0x80228E28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228E2C: jal         0x8022930C
    // 0x80228E30: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8022930C_ovl19(rdram, ctx);
        goto after_10;
    // 0x80228E30: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_10:
    // 0x80228E34: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228E38: jal         0x800A3450
    // 0x80228E3C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_11;
    // 0x80228E3C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    after_11:
    // 0x80228E40: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80228E44: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80228E48:
    // 0x80228E48: jal         0x8022938C
    // 0x80228E4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022938C_ovl19(rdram, ctx);
        goto after_12;
    // 0x80228E4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_12:
    // 0x80228E50: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80228E54: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228E58: j           L_802290EC
    // 0x80228E5C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_802290EC;
    // 0x80228E5C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80228E60:
    // 0x80228E60: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80228E64: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x80228E68: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x80228E6C: jal         0x8004F820
    // 0x80228E70: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_13;
    // 0x80228E70: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_13:
    // 0x80228E74: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228E78: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80228E7C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80228E80: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228E84: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80228E88: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80228E8C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80228E90: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80228E94: jal         0x80229628
    // 0x80228E98: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_80229628_ovl19(rdram, ctx);
        goto after_14;
    // 0x80228E98: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_14:
    // 0x80228E9C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80228EA0: bne         $v0, $zero, L_802290F0
    if (ctx->r2 != 0) {
        // 0x80228EA4: nop
    
            goto L_802290F0;
    }
    // 0x80228EA4: nop

    // 0x80228EA8: jal         0x8003E934
    // 0x80228EAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_15;
    // 0x80228EAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_15:
    // 0x80228EB0: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x80228EB4: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80228EB8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228EBC: beq         $a1, $zero, L_80228ECC
    if (ctx->r5 == 0) {
        // 0x80228EC0: sw          $v0, 0x20($s0)
        MEM_W(0X20, ctx->r16) = ctx->r2;
            goto L_80228ECC;
    }
    // 0x80228EC0: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80228EC4: jal         0x8022930C
    // 0x80228EC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022930C_ovl19(rdram, ctx);
        goto after_16;
    // 0x80228EC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_16:
L_80228ECC:
    // 0x80228ECC: jal         0x8022938C
    // 0x80228ED0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022938C_ovl19(rdram, ctx);
        goto after_17;
    // 0x80228ED0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_17:
    // 0x80228ED4: j           L_802290E4
    // 0x80228ED8: nop

        goto L_802290E4;
    // 0x80228ED8: nop

L_80228EDC:
    // 0x80228EDC: lbu         $v0, 0xA4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA4);
    // 0x80228EE0: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80228EE4: xori        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 ^ 0X8;
    // 0x80228EE8: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80228EEC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80228EF0: beq         $v1, $zero, L_80228F48
    if (ctx->r3 == 0) {
        // 0x80228EF4: addiu       $a0, $zero, 0x109
        ctx->r4 = ADD32(0, 0X109);
            goto L_80228F48;
    }
    // 0x80228EF4: addiu       $a0, $zero, 0x109
    ctx->r4 = ADD32(0, 0X109);
    // 0x80228EF8: jal         0x8002A33C
    // 0x80228EFC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_18;
    // 0x80228EFC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_18:
    // 0x80228F00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228F04: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80228F08: jal         0x80050294
    // 0x80228F0C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_19;
    // 0x80228F0C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_19:
    // 0x80228F10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228F14: jal         0x80229468
    // 0x80228F18: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80229468_ovl19(rdram, ctx);
        goto after_20;
    // 0x80228F18: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_20:
    // 0x80228F1C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228F20: jal         0x80229448
    // 0x80228F24: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80229448_ovl19(rdram, ctx);
        goto after_21;
    // 0x80228F24: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_21:
    // 0x80228F28: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80228F2C: addiu       $v1, $zero, -0x100
    ctx->r3 = ADD32(0, -0X100);
    // 0x80228F30: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    // 0x80228F34: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80228F38: sb          $v1, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r3;
    // 0x80228F3C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228F40: j           L_80228F50
    // 0x80228F44: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_80228F50;
    // 0x80228F44: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80228F48:
    // 0x80228F48: jal         0x8005044C
    // 0x80228F4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_22;
    // 0x80228F4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_22:
L_80228F50:
    // 0x80228F50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228F54: jal         0x80229628
    // 0x80228F58: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_80229628_ovl19(rdram, ctx);
        goto after_23;
    // 0x80228F58: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_23:
    // 0x80228F5C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80228F60: bne         $v0, $zero, L_802290F0
    if (ctx->r2 != 0) {
        // 0x80228F64: nop
    
            goto L_802290F0;
    }
    // 0x80228F64: nop

    // 0x80228F68: jal         0x8003E934
    // 0x80228F6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_24;
    // 0x80228F6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_24:
    // 0x80228F70: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x80228F74: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80228F78: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228F7C: j           L_80228FE8
    // 0x80228F80: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
        goto L_80228FE8;
    // 0x80228F80: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_80228F84:
    // 0x80228F84: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x80228F88: bgez        $v0, L_80228FC4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80228F8C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80228FC4;
    }
    // 0x80228F8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228F90: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80228F94: jal         0x80050294
    // 0x80228F98: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_25;
    // 0x80228F98: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_25:
    // 0x80228F9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228FA0: jal         0x80229468
    // 0x80228FA4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80229468_ovl19(rdram, ctx);
        goto after_26;
    // 0x80228FA4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_26:
    // 0x80228FA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228FAC: jal         0x80229448
    // 0x80228FB0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80229448_ovl19(rdram, ctx);
        goto after_27;
    // 0x80228FB0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_27:
    // 0x80228FB4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80228FB8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228FBC: j           L_80228FCC
    // 0x80228FC0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_80228FCC;
    // 0x80228FC0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80228FC4:
    // 0x80228FC4: jal         0x8005044C
    // 0x80228FC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_28;
    // 0x80228FC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_28:
L_80228FCC:
    // 0x80228FCC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228FD0: jal         0x80229628
    // 0x80228FD4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_80229628_ovl19(rdram, ctx);
        goto after_29;
    // 0x80228FD4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_29:
    // 0x80228FD8: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80228FDC: bne         $v0, $zero, L_802290F0
    if (ctx->r2 != 0) {
        // 0x80228FE0: nop
    
            goto L_802290F0;
    }
    // 0x80228FE0: nop

    // 0x80228FE4: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
L_80228FE8:
    // 0x80228FE8: beql        $a1, $zero, L_802290F0
    if (ctx->r5 == 0) {
        // 0x80228FEC: sw          $zero, 0x0($s1)
        MEM_W(0X0, ctx->r17) = 0;
            goto L_802290F0;
    }
    goto skip_0;
    // 0x80228FEC: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    skip_0:
    // 0x80228FF0: jal         0x8022930C
    // 0x80228FF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022930C_ovl19(rdram, ctx);
        goto after_30;
    // 0x80228FF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_30:
    // 0x80228FF8: j           L_802290F0
    // 0x80228FFC: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
        goto L_802290F0;
    // 0x80228FFC: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
L_80229000:
    // 0x80229000: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80229004: lhu         $v1, 0x1A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1A);
    // 0x80229008: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022900C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229010: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80229014: jal         0x8003E934
    // 0x80229018: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_31;
    // 0x80229018: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_31:
    // 0x8022901C: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x80229020: addiu       $v1, $v0, -0x258
    ctx->r3 = ADD32(ctx->r2, -0X258);
    // 0x80229024: sltu        $v0, $v1, $a0
    ctx->r2 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x80229028: beq         $v0, $zero, L_8022903C
    if (ctx->r2 == 0) {
        // 0x8022902C: sw          $v1, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r3;
            goto L_8022903C;
    }
    // 0x8022902C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80229030: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
    // 0x80229034: j           L_80229054
    // 0x80229038: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
        goto L_80229054;
    // 0x80229038: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_8022903C:
    // 0x8022903C: sltu        $v0, $a0, $v1
    ctx->r2 = ctx->r4 < ctx->r3 ? 1 : 0;
    // 0x80229040: beq         $v0, $zero, L_80229050
    if (ctx->r2 == 0) {
        // 0x80229044: addiu       $v0, $zero, 0x40
        ctx->r2 = ADD32(0, 0X40);
            goto L_80229050;
    }
    // 0x80229044: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80229048: j           L_80229054
    // 0x8022904C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
        goto L_80229054;
    // 0x8022904C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_80229050:
    // 0x80229050: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
L_80229054:
    // 0x80229054: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229058: jal         0x80229628
    // 0x8022905C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_80229628_ovl19(rdram, ctx);
        goto after_32;
    // 0x8022905C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_32:
    // 0x80229060: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80229064: bne         $v0, $zero, L_802290F0
    if (ctx->r2 != 0) {
        // 0x80229068: nop
    
            goto L_802290F0;
    }
    // 0x80229068: nop

    // 0x8022906C: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x80229070: bne         $a1, $zero, L_80229088
    if (ctx->r5 != 0) {
        // 0x80229074: nop
    
            goto L_80229088;
    }
    // 0x80229074: nop

    // 0x80229078: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022907C: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80229080: bne         $v0, $zero, L_80229094
    if (ctx->r2 != 0) {
        // 0x80229084: nop
    
            goto L_80229094;
    }
    // 0x80229084: nop

L_80229088:
    // 0x80229088: jal         0x8022930C
    // 0x8022908C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022930C_ovl19(rdram, ctx);
        goto after_33;
    // 0x8022908C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_33:
    // 0x80229090: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
L_80229094:
    // 0x80229094: jal         0x802295BC
    // 0x80229098: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802295BC_ovl19(rdram, ctx);
        goto after_34;
    // 0x80229098: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_34:
    // 0x8022909C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802290A0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802290A4: j           L_802290E4
    // 0x802290A8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_802290E4;
    // 0x802290A8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_802290AC:
    // 0x802290AC: lh          $a0, 0x66($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X66);
    // 0x802290B0: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x802290B4: jal         0x8004FA7C
    // 0x802290B8: lh          $a2, 0x64($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X64);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_35;
    // 0x802290B8: lh          $a2, 0x64($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X64);
    after_35:
    // 0x802290BC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802290C0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802290C4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802290C8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x802290CC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802290D0: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802290D4: bne         $v0, $zero, L_802290E4
    if (ctx->r2 != 0) {
        // 0x802290D8: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_802290E4;
    }
    // 0x802290D8: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x802290DC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802290E0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_802290E4:
    // 0x802290E4: jal         0x8005044C
    // 0x802290E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_36;
    // 0x802290E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_36:
L_802290EC:
    // 0x802290EC: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
L_802290F0:
    // 0x802290F0: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x802290F4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802290F8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802290FC: jr          $ra
    // 0x80229100: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80229100: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022B93C_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B93C: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    // 0x8022B940: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8022B944: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8022B948: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x8022B94C: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022B950: subu        $v0, $a1, $v1
    ctx->r2 = SUB32(ctx->r5, ctx->r3);
    // 0x8022B954: bltzl       $v0, L_8022B95C
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022B958: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_8022B95C;
    }
    goto skip_0;
    // 0x8022B958: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_0:
L_8022B95C:
    // 0x8022B95C: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022B960: bnel        $v0, $zero, L_8022B984
    if (ctx->r2 != 0) {
        // 0x8022B964: sh          $a3, 0x328($a0)
        MEM_H(0X328, ctx->r4) = ctx->r7;
            goto L_8022B984;
    }
    goto skip_1;
    // 0x8022B964: sh          $a3, 0x328($a0)
    MEM_H(0X328, ctx->r4) = ctx->r7;
    skip_1:
    // 0x8022B968: slt         $v0, $v1, $a1
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8022B96C: beq         $v0, $zero, L_8022B97C
    if (ctx->r2 == 0) {
        // 0x8022B970: addiu       $v0, $a2, 0x20
        ctx->r2 = ADD32(ctx->r6, 0X20);
            goto L_8022B97C;
    }
    // 0x8022B970: addiu       $v0, $a2, 0x20
    ctx->r2 = ADD32(ctx->r6, 0X20);
    // 0x8022B974: j           L_8022B984
    // 0x8022B978: sh          $v0, 0x328($a0)
    MEM_H(0X328, ctx->r4) = ctx->r2;
        goto L_8022B984;
    // 0x8022B978: sh          $v0, 0x328($a0)
    MEM_H(0X328, ctx->r4) = ctx->r2;
L_8022B97C:
    // 0x8022B97C: addiu       $v0, $a2, -0x20
    ctx->r2 = ADD32(ctx->r6, -0X20);
    // 0x8022B980: sh          $v0, 0x328($a0)
    MEM_H(0X328, ctx->r4) = ctx->r2;
L_8022B984:
    // 0x8022B984: jr          $ra
    // 0x8022B988: nop

    TRACE_RETURN()
    return;
    // 0x8022B988: nop

;}
RECOMP_FUNC void func_8022D3AC_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D3AC: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8022D3B0: lhu         $v0, -0x730C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X730C);
    // 0x8022D3B4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022D3B8: andi        $v0, $v0, 0x60
    ctx->r2 = ctx->r2 & 0X60;
    // 0x8022D3BC: jr          $ra
    // 0x8022D3C0: sb          $v0, 0x22($a0)
    MEM_B(0X22, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x8022D3C0: sb          $v0, 0x22($a0)
    MEM_B(0X22, ctx->r4) = ctx->r2;
    // 0x8022D3C4: nop

    // 0x8022D3C8: nop

    // 0x8022D3CC: nop

;}
RECOMP_FUNC void func_8022A800_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A800: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022A804: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022A808: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A80C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022A810: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022A814: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A818: beq         $v1, $v0, L_8022A87C
    if (ctx->r3 == ctx->r2) {
        // 0x8022A81C: sb          $zero, 0x330($s0)
        MEM_B(0X330, ctx->r16) = 0;
            goto L_8022A87C;
    }
    // 0x8022A81C: sb          $zero, 0x330($s0)
    MEM_B(0X330, ctx->r16) = 0;
    // 0x8022A820: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022A824: beql        $v0, $zero, L_8022A83C
    if (ctx->r2 == 0) {
        // 0x8022A828: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022A83C;
    }
    goto skip_0;
    // 0x8022A828: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022A82C: beq         $v1, $zero, L_8022A84C
    if (ctx->r3 == 0) {
        // 0x8022A830: nop
    
            goto L_8022A84C;
    }
    // 0x8022A830: nop

    // 0x8022A834: j           L_8022A938
    // 0x8022A838: nop

        goto L_8022A938;
    // 0x8022A838: nop

L_8022A83C:
    // 0x8022A83C: beq         $v1, $v0, L_8022A8DC
    if (ctx->r3 == ctx->r2) {
        // 0x8022A840: nop
    
            goto L_8022A8DC;
    }
    // 0x8022A840: nop

    // 0x8022A844: j           L_8022A938
    // 0x8022A848: nop

        goto L_8022A938;
    // 0x8022A848: nop

L_8022A84C:
    // 0x8022A84C: lbu         $v0, 0x333($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X333);
    // 0x8022A850: beq         $v0, $zero, L_8022A8BC
    if (ctx->r2 == 0) {
        // 0x8022A854: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8022A8BC;
    }
    // 0x8022A854: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022A858: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022A85C: lh          $a3, 0x44($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X44);
    // 0x8022A860: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022A864: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022A868: sb          $v0, 0x333($s0)
    MEM_B(0X333, ctx->r16) = ctx->r2;
    // 0x8022A86C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8022A870: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8022A874: j           L_8022A8A4
    // 0x8022A878: addiu       $a2, $a2, 0x800
    ctx->r6 = ADD32(ctx->r6, 0X800);
        goto L_8022A8A4;
    // 0x8022A878: addiu       $a2, $a2, 0x800
    ctx->r6 = ADD32(ctx->r6, 0X800);
L_8022A87C:
    // 0x8022A87C: lbu         $v0, 0x333($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X333);
    // 0x8022A880: beq         $v0, $zero, L_8022A8BC
    if (ctx->r2 == 0) {
        // 0x8022A884: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8022A8BC;
    }
    // 0x8022A884: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022A888: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022A88C: lh          $a3, 0x44($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X44);
    // 0x8022A890: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022A894: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022A898: sb          $v0, 0x333($s0)
    MEM_B(0X333, ctx->r16) = ctx->r2;
    // 0x8022A89C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8022A8A0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
L_8022A8A4:
    // 0x8022A8A4: jal         0x8004DBA0
    // 0x8022A8A8: nop

    func_8004DBA0_28FA0(rdram, ctx);
        goto after_0;
    // 0x8022A8A8: nop

    after_0:
    // 0x8022A8AC: lhu         $v0, 0x44($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X44);
    // 0x8022A8B0: addiu       $v0, $v0, -0xA
    ctx->r2 = ADD32(ctx->r2, -0XA);
    // 0x8022A8B4: j           L_8022A938
    // 0x8022A8B8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
        goto L_8022A938;
    // 0x8022A8B8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
L_8022A8BC:
    // 0x8022A8BC: lbu         $v1, 0x332($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X332);
    // 0x8022A8C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A8C4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022A8C8: sb          $zero, 0x336($s0)
    MEM_B(0X336, ctx->r16) = 0;
    // 0x8022A8CC: sb          $zero, 0x33B($s0)
    MEM_B(0X33B, ctx->r16) = 0;
    // 0x8022A8D0: andi        $v1, $v1, 0xFB
    ctx->r3 = ctx->r3 & 0XFB;
    // 0x8022A8D4: j           L_8022A938
    // 0x8022A8D8: sb          $v1, 0x332($s0)
    MEM_B(0X332, ctx->r16) = ctx->r3;
        goto L_8022A938;
    // 0x8022A8D8: sb          $v1, 0x332($s0)
    MEM_B(0X332, ctx->r16) = ctx->r3;
L_8022A8DC:
    // 0x8022A8DC: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x8022A8E0: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022A8E4: beq         $v0, $a1, L_8022A8F4
    if (ctx->r2 == ctx->r5) {
        // 0x8022A8E8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022A8F4;
    }
    // 0x8022A8E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A8EC: j           L_8022A928
    // 0x8022A8F0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
        goto L_8022A928;
    // 0x8022A8F0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_8022A8F4:
    // 0x8022A8F4: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x8022A8F8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022A8FC: bne         $v1, $v0, L_8022A938
    if (ctx->r3 != ctx->r2) {
        // 0x8022A900: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_8022A938;
    }
    // 0x8022A900: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022A904: lbu         $v0, 0x332($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X332);
    // 0x8022A908: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022A90C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022A910: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x8022A914: sb          $zero, 0x336($s0)
    MEM_B(0X336, ctx->r16) = 0;
    // 0x8022A918: sb          $zero, 0x33B($s0)
    MEM_B(0X33B, ctx->r16) = 0;
    // 0x8022A91C: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x8022A920: andi        $v0, $v0, 0xFB
    ctx->r2 = ctx->r2 & 0XFB;
    // 0x8022A924: sb          $v0, 0x332($s0)
    MEM_B(0X332, ctx->r16) = ctx->r2;
L_8022A928:
    // 0x8022A928: jal         0x800502EC
    // 0x8022A92C: nop

    func_800502EC_2B6EC(rdram, ctx);
        goto after_1;
    // 0x8022A92C: nop

    after_1:
    // 0x8022A930: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022A934: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
L_8022A938:
    // 0x8022A938: jal         0x80040F30
    // 0x8022A93C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_2;
    // 0x8022A93C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022A940: andi        $v0, $v0, 0x3000
    ctx->r2 = ctx->r2 & 0X3000;
    // 0x8022A944: bne         $v0, $zero, L_8022A960
    if (ctx->r2 != 0) {
        // 0x8022A948: nop
    
            goto L_8022A960;
    }
    // 0x8022A948: nop

    // 0x8022A94C: jal         0x8003E934
    // 0x8022A950: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_3;
    // 0x8022A950: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022A954: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022A958: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A95C: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_8022A960:
    // 0x8022A960: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022A964: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022A968: jr          $ra
    // 0x8022A96C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022A96C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225E14_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225E14: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80225E18: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80225E1C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225E20: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80225E24: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80225E28: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80225E2C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80225E30: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80225E34: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80225E38: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80225E3C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80225E40: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80225E44: beq         $v0, $zero, L_80226124
    if (ctx->r2 == 0) {
        // 0x80225E48: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_80226124;
    }
    // 0x80225E48: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x80225E4C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80225E50: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80225E54: addu        $at, $at, $v0
    gpr jr_addend_80225E5C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225E58: lw          $v0, -0x1768($at)
    ctx->r2 = ADD32(ctx->r1, -0X1768);
    // 0x80225E5C: jr          $v0
    // 0x80225E60: nop

    switch (jr_addend_80225E5C >> 2) {
        case 0: goto L_80225FB4; break;
        case 1: goto L_80226020; break;
        case 2: goto L_80226020; break;
        case 3: goto L_80226100; break;
        case 4: goto L_80225E64; break;
        default: switch_error(__func__, 0x80225E5C, 0x8022E898);
    }
    // 0x80225E60: nop

L_80225E64:
    // 0x80225E64: lw          $v0, 0x14($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X14);
    // 0x80225E68: lui         $v1, 0x2000
    ctx->r3 = S32(0X2000 << 16);
    // 0x80225E6C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80225E70: bne         $v0, $zero, L_80225F7C
    if (ctx->r2 != 0) {
        // 0x80225E74: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80225F7C;
    }
    // 0x80225E74: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80225E78: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80225E7C: lh          $v1, 0x4($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X4);
    // 0x80225E80: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80225E84: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225E88: lbu         $v0, -0x2174($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X2174);
    // 0x80225E8C: bne         $v1, $v0, L_80225F68
    if (ctx->r3 != ctx->r2) {
        // 0x80225E90: nop
    
            goto L_80225F68;
    }
    // 0x80225E90: nop

    // 0x80225E94: lh          $v0, 0x34($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X34);
    // 0x80225E98: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x80225E9C: beq         $v0, $zero, L_80225F68
    if (ctx->r2 == 0) {
        // 0x80225EA0: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_80225F68;
    }
    // 0x80225EA0: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x80225EA4: addiu       $s6, $zero, 0x3
    ctx->r22 = ADD32(0, 0X3);
    // 0x80225EA8: addiu       $s5, $zero, 0x83
    ctx->r21 = ADD32(0, 0X83);
    // 0x80225EAC: lui         $s4, 0x8023
    ctx->r20 = S32(0X8023 << 16);
    // 0x80225EB0: addiu       $s4, $s4, -0x2170
    ctx->r20 = ADD32(ctx->r20, -0X2170);
    // 0x80225EB4: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
L_80225EB8:
    // 0x80225EB8: jal         0x8004F144
    // 0x80225EBC: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80225EBC: nop

    after_0:
    // 0x80225EC0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80225EC4: beq         $v1, $zero, L_80225F58
    if (ctx->r3 == 0) {
        // 0x80225EC8: nop
    
            goto L_80225F58;
    }
    // 0x80225EC8: nop

    // 0x80225ECC: sb          $s6, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r22;
    // 0x80225ED0: sb          $s5, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r21;
    // 0x80225ED4: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    // 0x80225ED8: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80225EDC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225EE0: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x80225EE4: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80225EE8: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80225EEC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80225EF0: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x80225EF4: lhu         $v0, 0x180($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X180);
    // 0x80225EF8: sh          $v0, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = ctx->r2;
    // 0x80225EFC: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80225F00: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225F04: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x80225F08: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80225F0C: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80225F10: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80225F14: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x80225F18: lhu         $v0, 0x182($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X182);
    // 0x80225F1C: subu        $v0, $v0, $s3
    ctx->r2 = SUB32(ctx->r2, ctx->r19);
    // 0x80225F20: sh          $v0, 0x1E($v1)
    MEM_H(0X1E, ctx->r3) = ctx->r2;
    // 0x80225F24: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80225F28: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225F2C: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x80225F30: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80225F34: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80225F38: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80225F3C: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x80225F40: lhu         $v0, 0x184($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X184);
    // 0x80225F44: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80225F48: sh          $v0, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r2;
    // 0x80225F4C: slti        $v0, $s1, 0x4
    ctx->r2 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x80225F50: bne         $v0, $zero, L_80225EB8
    if (ctx->r2 != 0) {
        // 0x80225F54: addiu       $s3, $s3, 0xC
        ctx->r19 = ADD32(ctx->r19, 0XC);
            goto L_80225EB8;
    }
    // 0x80225F54: addiu       $s3, $s3, 0xC
    ctx->r19 = ADD32(ctx->r19, 0XC);
L_80225F58:
    // 0x80225F58: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80225F5C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225F60: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80225F64: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_80225F68:
    // 0x80225F68: lhu         $v0, 0x4($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X4);
    // 0x80225F6C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225F70: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80225F74: j           L_80226124
    // 0x80225F78: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
        goto L_80226124;
    // 0x80225F78: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
L_80225F7C:
    // 0x80225F7C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80225F80: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    // 0x80225F84: jal         0x8004FEA0
    // 0x80225F88: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004FEA0_2B2A0(rdram, ctx);
        goto after_1;
    // 0x80225F88: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x80225F8C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80225F90: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x80225F94: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80225F98: beq         $v0, $zero, L_80225FAC
    if (ctx->r2 == 0) {
        // 0x80225F9C: addiu       $v0, $v1, 0x800
        ctx->r2 = ADD32(ctx->r3, 0X800);
            goto L_80225FAC;
    }
    // 0x80225F9C: addiu       $v0, $v1, 0x800
    ctx->r2 = ADD32(ctx->r3, 0X800);
    // 0x80225FA0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80225FA4: j           L_80225FB0
    // 0x80225FA8: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
        goto L_80225FB0;
    // 0x80225FA8: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_80225FAC:
    // 0x80225FAC: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_80225FB0:
    // 0x80225FB0: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_80225FB4:
    // 0x80225FB4: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80225FB8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80225FBC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80225FC0: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
    // 0x80225FC4: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80225FC8: addiu       $v0, $zero, 0x300
    ctx->r2 = ADD32(0, 0X300);
    // 0x80225FCC: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80225FD0: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80225FD4: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x80225FD8: sb          $v0, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r2;
    // 0x80225FDC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80225FE0: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x80225FE4: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80225FE8: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
    // 0x80225FEC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80225FF0: sh          $zero, 0x8($s2)
    MEM_H(0X8, ctx->r18) = 0;
    // 0x80225FF4: sh          $zero, 0x4($s2)
    MEM_H(0X4, ctx->r18) = 0;
    // 0x80225FF8: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x80225FFC: andi        $v0, $v0, 0xFFB3
    ctx->r2 = ctx->r2 & 0XFFB3;
    // 0x80226000: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
    // 0x80226004: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x80226008: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022600C: addiu       $v0, $zero, -0x300
    ctx->r2 = ADD32(0, -0X300);
    // 0x80226010: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80226014: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80226018: jal         0x8002A33C
    // 0x8022601C: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x8022601C: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    after_2:
L_80226020:
    // 0x80226020: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80226024: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x80226028: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022602C: jal         0x8004DA90
    // 0x80226030: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x80226030: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
    // 0x80226034: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x80226038: lhu         $v1, 0x4E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4E);
    // 0x8022603C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226040: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80226044: jal         0x80040F30
    // 0x80226048: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    func_80040F30_1C330(rdram, ctx);
        goto after_4;
    // 0x80226048: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    after_4:
    // 0x8022604C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80226050: beq         $v1, $zero, L_80226124
    if (ctx->r3 == 0) {
        // 0x80226054: andi        $v0, $v1, 0xF00
        ctx->r2 = ctx->r3 & 0XF00;
            goto L_80226124;
    }
    // 0x80226054: andi        $v0, $v1, 0xF00
    ctx->r2 = ctx->r3 & 0XF00;
    // 0x80226058: beq         $v0, $zero, L_80226074
    if (ctx->r2 == 0) {
        // 0x8022605C: andi        $v0, $v1, 0x1000
        ctx->r2 = ctx->r3 & 0X1000;
            goto L_80226074;
    }
    // 0x8022605C: andi        $v0, $v1, 0x1000
    ctx->r2 = ctx->r3 & 0X1000;
    // 0x80226060: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80226064: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80226068: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022606C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80226070: andi        $v0, $v1, 0x1000
    ctx->r2 = ctx->r3 & 0X1000;
L_80226074:
    // 0x80226074: beq         $v0, $zero, L_80226128
    if (ctx->r2 == 0) {
        // 0x80226078: addiu       $v0, $zero, 0x190C
        ctx->r2 = ADD32(0, 0X190C);
            goto L_80226128;
    }
    // 0x80226078: addiu       $v0, $zero, 0x190C
    ctx->r2 = ADD32(0, 0X190C);
    // 0x8022607C: lhu         $v1, 0x0($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X0);
    // 0x80226080: andi        $v0, $v1, 0x40
    ctx->r2 = ctx->r3 & 0X40;
    // 0x80226084: bne         $v0, $zero, L_802260D8
    if (ctx->r2 != 0) {
        // 0x80226088: addiu       $a0, $zero, 0xDA
        ctx->r4 = ADD32(0, 0XDA);
            goto L_802260D8;
    }
    // 0x80226088: addiu       $a0, $zero, 0xDA
    ctx->r4 = ADD32(0, 0XDA);
    // 0x8022608C: ori         $v0, $v1, 0x40
    ctx->r2 = ctx->r3 | 0X40;
    // 0x80226090: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
    // 0x80226094: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80226098: beq         $v0, $zero, L_802260C8
    if (ctx->r2 == 0) {
        // 0x8022609C: nop
    
            goto L_802260C8;
    }
    // 0x8022609C: nop

    // 0x802260A0: lh          $v0, 0x34($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X34);
    // 0x802260A4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802260A8: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x802260AC: beq         $v0, $zero, L_802260C8
    if (ctx->r2 == 0) {
        // 0x802260B0: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_802260C8;
    }
    // 0x802260B0: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x802260B4: sh          $v0, 0x34($s2)
    MEM_H(0X34, ctx->r18) = ctx->r2;
    // 0x802260B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802260BC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802260C0: jal         0x8007A290
    // 0x802260C4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8007A290_55690(rdram, ctx);
        goto after_5;
    // 0x802260C4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
L_802260C8:
    // 0x802260C8: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x802260CC: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x802260D0: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
    // 0x802260D4: addiu       $a0, $zero, 0xDA
    ctx->r4 = ADD32(0, 0XDA);
L_802260D8:
    // 0x802260D8: jal         0x8002A33C
    // 0x802260DC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_6;
    // 0x802260DC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_6:
    // 0x802260E0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802260E4: addiu       $v1, $zero, 0x60
    ctx->r3 = ADD32(0, 0X60);
    // 0x802260E8: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x802260EC: addiu       $v1, $zero, -0x200
    ctx->r3 = ADD32(0, -0X200);
    // 0x802260F0: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    // 0x802260F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802260F8: j           L_80226124
    // 0x802260FC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80226124;
    // 0x802260FC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80226100:
    // 0x80226100: lbu         $v0, 0xA4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA4);
    // 0x80226104: bne         $v0, $zero, L_80226128
    if (ctx->r2 != 0) {
        // 0x80226108: addiu       $v0, $zero, 0x190C
        ctx->r2 = ADD32(0, 0X190C);
            goto L_80226128;
    }
    // 0x80226108: addiu       $v0, $zero, 0x190C
    ctx->r2 = ADD32(0, 0X190C);
    // 0x8022610C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80226110: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80226114: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x80226118: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022611C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80226120: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_80226124:
    // 0x80226124: addiu       $v0, $zero, 0x190C
    ctx->r2 = ADD32(0, 0X190C);
L_80226128:
    // 0x80226128: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022612C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80226130: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80226134: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80226138: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8022613C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80226140: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80226144: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80226148: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022614C: jr          $ra
    // 0x80226150: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80226150: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80229958_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229958: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022995C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80229960: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80229964: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80229968: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022996C: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80229970: sh          $zero, 0x54($s1)
    MEM_H(0X54, ctx->r17) = 0;
    // 0x80229974: sh          $zero, 0x58($s1)
    MEM_H(0X58, ctx->r17) = 0;
    // 0x80229978: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022997C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80229980: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80229984: lw          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3BC8);
    // 0x80229988: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x8022998C: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80229990: lui         $v0, 0xA00
    ctx->r2 = S32(0XA00 << 16);
    // 0x80229994: bne         $v1, $v0, L_802299AC
    if (ctx->r3 != ctx->r2) {
        // 0x80229998: addiu       $s0, $s1, 0x2E8
        ctx->r16 = ADD32(ctx->r17, 0X2E8);
            goto L_802299AC;
    }
    // 0x80229998: addiu       $s0, $s1, 0x2E8
    ctx->r16 = ADD32(ctx->r17, 0X2E8);
    // 0x8022999C: jal         0x8004D5FC
    // 0x802299A0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5FC_289FC(rdram, ctx);
        goto after_0;
    // 0x802299A0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x802299A4: j           L_802299BC
    // 0x802299A8: addiu       $v0, $zero, 0x300
    ctx->r2 = ADD32(0, 0X300);
        goto L_802299BC;
    // 0x802299A8: addiu       $v0, $zero, 0x300
    ctx->r2 = ADD32(0, 0X300);
L_802299AC:
    // 0x802299AC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802299B0: jal         0x8004D5D4
    // 0x802299B4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x802299B4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
    // 0x802299B8: addiu       $v0, $zero, 0x300
    ctx->r2 = ADD32(0, 0X300);
L_802299BC:
    // 0x802299BC: sh          $v0, 0x15C($s1)
    MEM_H(0X15C, ctx->r17) = ctx->r2;
    // 0x802299C0: sh          $v0, 0x15A($s1)
    MEM_H(0X15A, ctx->r17) = ctx->r2;
    // 0x802299C4: sh          $v0, 0x158($s1)
    MEM_H(0X158, ctx->r17) = ctx->r2;
    // 0x802299C8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802299CC: sb          $v0, 0x4A($s0)
    MEM_B(0X4A, ctx->r16) = ctx->r2;
    // 0x802299D0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802299D4: sh          $v0, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r2;
    // 0x802299D8: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x802299DC: sh          $v0, 0x2A($s0)
    MEM_H(0X2A, ctx->r16) = ctx->r2;
    // 0x802299E0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802299E4: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x802299E8: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x802299EC: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x802299F0: sh          $v0, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r2;
    // 0x802299F4: sb          $zero, 0x50($s0)
    MEM_B(0X50, ctx->r16) = 0;
    // 0x802299F8: sb          $zero, 0x53($s0)
    MEM_B(0X53, ctx->r16) = 0;
    // 0x802299FC: sb          $zero, 0x54($s0)
    MEM_B(0X54, ctx->r16) = 0;
    // 0x80229A00: sb          $zero, 0x4E($s0)
    MEM_B(0X4E, ctx->r16) = 0;
    // 0x80229A04: sb          $zero, 0x48($s0)
    MEM_B(0X48, ctx->r16) = 0;
    // 0x80229A08: sb          $zero, 0x49($s0)
    MEM_B(0X49, ctx->r16) = 0;
    // 0x80229A0C: sh          $zero, 0x40($s0)
    MEM_H(0X40, ctx->r16) = 0;
    // 0x80229A10: lbu         $v1, 0x3($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X3);
    // 0x80229A14: beq         $v1, $zero, L_80229A2C
    if (ctx->r3 == 0) {
        // 0x80229A18: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80229A2C;
    }
    // 0x80229A18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229A1C: bnel        $v1, $v0, L_80229A30
    if (ctx->r3 != ctx->r2) {
        // 0x80229A20: addiu       $a0, $s0, 0x18
        ctx->r4 = ADD32(ctx->r16, 0X18);
            goto L_80229A30;
    }
    goto skip_0;
    // 0x80229A20: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
    skip_0:
    // 0x80229A24: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x80229A28: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
L_80229A2C:
    // 0x80229A2C: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
L_80229A30:
    // 0x80229A30: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x80229A34: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    // 0x80229A38: jal         0x800540BC
    // 0x80229A3C: sh          $zero, 0x42($s0)
    MEM_H(0X42, ctx->r16) = 0;
    func_800540BC_2F4BC(rdram, ctx);
        goto after_2;
    // 0x80229A3C: sh          $zero, 0x42($s0)
    MEM_H(0X42, ctx->r16) = 0;
    after_2:
    // 0x80229A40: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x80229A44: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80229A48: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x80229A4C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80229A50: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229A54: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80229A58: lbu         $v1, 0x8($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X8);
    // 0x80229A5C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80229A60: sb          $zero, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = 0;
    // 0x80229A64: lbu         $a1, 0xAC($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XAC);
    // 0x80229A68: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80229A6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229A70: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x80229A74: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80229A78: sh          $v0, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r2;
    // 0x80229A7C: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80229A80: addiu       $v0, $v0, -0x1990
    ctx->r2 = ADD32(ctx->r2, -0X1990);
    // 0x80229A84: sb          $zero, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = 0;
    // 0x80229A88: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x80229A8C: sb          $zero, 0x74($s1)
    MEM_B(0X74, ctx->r17) = 0;
    // 0x80229A90: sw          $v0, 0x78($s1)
    MEM_W(0X78, ctx->r17) = ctx->r2;
    // 0x80229A94: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x80229A98: sh          $v1, 0x6E($s1)
    MEM_H(0X6E, ctx->r17) = ctx->r3;
    // 0x80229A9C: sh          $v1, 0xB0($s1)
    MEM_H(0XB0, ctx->r17) = ctx->r3;
    // 0x80229AA0: jal         0x800502EC
    // 0x80229AA4: sh          $v1, 0xB2($s1)
    MEM_H(0XB2, ctx->r17) = ctx->r3;
    func_800502EC_2B6EC(rdram, ctx);
        goto after_3;
    // 0x80229AA4: sh          $v1, 0xB2($s1)
    MEM_H(0XB2, ctx->r17) = ctx->r3;
    after_3:
    // 0x80229AA8: jal         0x80051248
    // 0x80229AAC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80051248_2C648(rdram, ctx);
        goto after_4;
    // 0x80229AAC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x80229AB0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80229AB4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229AB8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229ABC: jr          $ra
    // 0x80229AC0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80229AC0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225408_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225408: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022540C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225410: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225414: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225418: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022541C: bne         $v0, $zero, L_8022543C
    if (ctx->r2 != 0) {
        // 0x80225420: nop
    
            goto L_8022543C;
    }
    // 0x80225420: nop

    // 0x80225424: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225428: jal         0x800607C4
    // 0x8022542C: addiu       $a0, $a0, -0x223C
    ctx->r4 = ADD32(ctx->r4, -0X223C);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x8022542C: addiu       $a0, $a0, -0x223C
    ctx->r4 = ADD32(ctx->r4, -0X223C);
    after_0:
    // 0x80225430: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225434: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225438: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022543C:
    // 0x8022543C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225440: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225444: jr          $ra
    // 0x80225448: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225448: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227ED0_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227ED0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80227ED4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227ED8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227EDC: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80227EE0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80227EE4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80227EE8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227EEC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80227EF0: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x80227EF4: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80227EF8: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80227EFC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227F00: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
    // 0x80227F04: sh          $v1, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r3;
    // 0x80227F08: jal         0x80228A78
    // 0x80227F0C: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    func_80228A78_ovl19(rdram, ctx);
        goto after_0;
    // 0x80227F0C: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    after_0:
    // 0x80227F10: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x80227F14: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80227F18: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80227F1C: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x80227F20: addiu       $s2, $s2, 0x49C4
    ctx->r18 = ADD32(ctx->r18, 0X49C4);
    // 0x80227F24: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80227F28: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x80227F2C: jal         0x8004F820
    // 0x80227F30: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x80227F30: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_1:
    // 0x80227F34: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227F38: bgez        $v0, L_80227F68
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80227F3C: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_80227F68;
    }
    // 0x80227F3C: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x80227F40: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80227F44: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80227F48: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80227F4C: jal         0x8004F820
    // 0x80227F50: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80227F50: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x80227F54: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227F58: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80227F5C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80227F60: j           L_80227F84
    // 0x80227F64: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_80227F84;
    // 0x80227F64: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_80227F68:
    // 0x80227F68: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80227F6C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80227F70: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80227F74: jal         0x8004F820
    // 0x80227F78: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x80227F78: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_3:
    // 0x80227F7C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227F80: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_80227F84:
    // 0x80227F84: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80227F88: sh          $v0, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r2;
    // 0x80227F8C: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x80227F90: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80227F94: jal         0x800610AC
    // 0x80227F98: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_4;
    // 0x80227F98: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x80227F9C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80227FA0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80227FA4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80227FA8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227FAC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227FB0: jr          $ra
    // 0x80227FB4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80227FB4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80227A80_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227A80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227A84: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227A88: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227A8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227A90: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x80227A94: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80227A98: jal         0x8004FA7C
    // 0x80227A9C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80227A9C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x80227AA0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80227AA4: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x80227AA8: bne         $v0, $zero, L_80227AB8
    if (ctx->r2 != 0) {
        // 0x80227AAC: nop
    
            goto L_80227AB8;
    }
    // 0x80227AAC: nop

    // 0x80227AB0: lhu         $v0, 0x366($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X366);
    // 0x80227AB4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227AB8:
    // 0x80227AB8: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80227ABC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227AC0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80227AC4: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80227AC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227ACC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227AD0: jr          $ra
    // 0x80227AD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227AD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228BC0_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228BC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228BC4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228BC8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228BCC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80228BD0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80228BD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228BD8: jal         0x8009A3B4
    // 0x80228BDC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80228BDC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80228BE0: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80228BE4: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80228BE8: jal         0x8009A3B4
    // 0x80228BEC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80228BEC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80228BF0: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80228BF4: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80228BF8: jal         0x8009A3B4
    // 0x80228BFC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80228BFC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80228C00: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80228C04: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80228C08: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228C0C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228C10: lw          $v0, -0x19A4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X19A4);
    // 0x80228C14: jalr        $v0
    // 0x80228C18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x80228C18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80228C1C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80228C20: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80228C24: beq         $v0, $zero, L_80228C3C
    if (ctx->r2 == 0) {
        // 0x80228C28: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80228C3C;
    }
    // 0x80228C28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228C2C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x80228C30: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80228C34: jal         0x8003B564
    // 0x80228C38: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_4;
    // 0x80228C38: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
L_80228C3C:
    // 0x80228C3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228C40: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228C44: jr          $ra
    // 0x80228C48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228C48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022897C_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022897C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80228980: lw          $a1, 0x4B34($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4B34);
    // 0x80228984: bne         $a1, $a0, L_802289D8
    if (ctx->r5 != ctx->r4) {
        // 0x80228988: addiu       $a2, $a0, 0x348
        ctx->r6 = ADD32(ctx->r4, 0X348);
            goto L_802289D8;
    }
    // 0x80228988: addiu       $a2, $a0, 0x348
    ctx->r6 = ADD32(ctx->r4, 0X348);
    // 0x8022898C: lbu         $v1, 0x2($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X2);
    // 0x80228990: addiu       $v0, $zero, 0x34
    ctx->r2 = ADD32(0, 0X34);
    // 0x80228994: bne         $v1, $v0, L_802289A4
    if (ctx->r3 != ctx->r2) {
        // 0x80228998: addiu       $v0, $zero, 0x11
        ctx->r2 = ADD32(0, 0X11);
            goto L_802289A4;
    }
    // 0x80228998: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x8022899C: j           L_802289C0
    // 0x802289A0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_802289C0;
    // 0x802289A0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_802289A4:
    // 0x802289A4: bne         $v1, $v0, L_802289B4
    if (ctx->r3 != ctx->r2) {
        // 0x802289A8: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_802289B4;
    }
    // 0x802289A8: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x802289AC: j           L_802289C0
    // 0x802289B0: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
        goto L_802289C0;
    // 0x802289B0: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_802289B4:
    // 0x802289B4: bne         $v1, $v0, L_802289C0
    if (ctx->r3 != ctx->r2) {
        // 0x802289B8: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_802289C0;
    }
    // 0x802289B8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802289BC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_802289C0:
    // 0x802289C0: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x802289C4: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x802289C8: sb          $zero, 0x3($a2)
    MEM_B(0X3, ctx->r6) = 0;
    // 0x802289CC: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x802289D0: andi        $v0, $v0, 0xFFFD
    ctx->r2 = ctx->r2 & 0XFFFD;
    // 0x802289D4: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
L_802289D8:
    // 0x802289D8: jr          $ra
    // 0x802289DC: nop

    TRACE_RETURN()
    return;
    // 0x802289DC: nop

;}
RECOMP_FUNC void func_80225A14_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225A14: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80225A18: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x80225A1C: beq         $v1, $zero, L_80225A38
    if (ctx->r3 == 0) {
        // 0x80225A20: addiu       $a1, $a0, 0x348
        ctx->r5 = ADD32(ctx->r4, 0X348);
            goto L_80225A38;
    }
    // 0x80225A20: addiu       $a1, $a0, 0x348
    ctx->r5 = ADD32(ctx->r4, 0X348);
    // 0x80225A24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225A28: beq         $v1, $v0, L_80225A44
    if (ctx->r3 == ctx->r2) {
        // 0x80225A2C: nop
    
            goto L_80225A44;
    }
    // 0x80225A2C: nop

    // 0x80225A30: j           L_80225A70
    // 0x80225A34: nop

        goto L_80225A70;
    // 0x80225A34: nop

L_80225A38:
    // 0x80225A38: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225A3C: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x80225A40: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
L_80225A44:
    // 0x80225A44: lhu         $a0, 0x0($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X0);
    // 0x80225A48: andi        $v0, $a0, 0x10
    ctx->r2 = ctx->r4 & 0X10;
    // 0x80225A4C: bne         $v0, $zero, L_80225A6C
    if (ctx->r2 != 0) {
        // 0x80225A50: ori         $v0, $a0, 0x1
        ctx->r2 = ctx->r4 | 0X1;
            goto L_80225A6C;
    }
    // 0x80225A50: ori         $v0, $a0, 0x1
    ctx->r2 = ctx->r4 | 0X1;
    // 0x80225A54: lw          $v0, 0x14($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X14);
    // 0x80225A58: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x80225A5C: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x80225A60: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80225A64: beq         $v0, $zero, L_80225A70
    if (ctx->r2 == 0) {
        // 0x80225A68: ori         $v0, $a0, 0x1
        ctx->r2 = ctx->r4 | 0X1;
            goto L_80225A70;
    }
    // 0x80225A68: ori         $v0, $a0, 0x1
    ctx->r2 = ctx->r4 | 0X1;
L_80225A6C:
    // 0x80225A6C: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
L_80225A70:
    // 0x80225A70: jr          $ra
    // 0x80225A74: nop

    TRACE_RETURN()
    return;
    // 0x80225A74: nop

;}
RECOMP_FUNC void func_8022CC00_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CC00: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022CC04: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022CC08: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022CC0C: addiu       $a0, $s1, 0x38
    ctx->r4 = ADD32(ctx->r17, 0X38);
    // 0x8022CC10: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022CC14: jal         0x8003E6BC
    // 0x8022CC18: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_0;
    // 0x8022CC18: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x8022CC1C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022CC20: addiu       $a0, $a0, 0x49C4
    ctx->r4 = ADD32(ctx->r4, 0X49C4);
    // 0x8022CC24: jal         0x8003E6BC
    // 0x8022CC28: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_1;
    // 0x8022CC28: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_1:
    // 0x8022CC2C: bne         $s0, $v0, L_8022CC54
    if (ctx->r16 != ctx->r2) {
        // 0x8022CC30: nop
    
            goto L_8022CC54;
    }
    // 0x8022CC30: nop

    // 0x8022CC34: jal         0x8006033C
    // 0x8022CC38: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x8022CC38: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    after_2:
    // 0x8022CC3C: beq         $v0, $zero, L_8022CC54
    if (ctx->r2 == 0) {
        // 0x8022CC40: addiu       $v1, $zero, 0x18
        ctx->r3 = ADD32(0, 0X18);
            goto L_8022CC54;
    }
    // 0x8022CC40: addiu       $v1, $zero, 0x18
    ctx->r3 = ADD32(0, 0X18);
    // 0x8022CC44: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8022CC48: sb          $v1, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r3;
    // 0x8022CC4C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022CC50: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_8022CC54:
    // 0x8022CC54: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022CC58: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022CC5C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022CC60: jr          $ra
    // 0x8022CC64: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022CC64: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80229DA0_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229DA0: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x80229DA4: andi        $v0, $v0, 0xF0
    ctx->r2 = ctx->r2 & 0XF0;
    // 0x80229DA8: bne         $v0, $zero, L_80229DC8
    if (ctx->r2 != 0) {
        // 0x80229DAC: nop
    
            goto L_80229DC8;
    }
    // 0x80229DAC: nop

    // 0x80229DB0: lbu         $v0, 0x332($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X332);
    // 0x80229DB4: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x80229DB8: beq         $v0, $zero, L_80229DF0
    if (ctx->r2 == 0) {
        // 0x80229DBC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80229DF0;
    }
    // 0x80229DBC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229DC0: j           L_80229DF0
    // 0x80229DC4: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
        goto L_80229DF0;
    // 0x80229DC4: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_80229DC8:
    // 0x80229DC8: lbu         $v0, 0x332($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X332);
    // 0x80229DCC: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x80229DD0: beq         $v0, $zero, L_80229DF0
    if (ctx->r2 == 0) {
        // 0x80229DD4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80229DF0;
    }
    // 0x80229DD4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80229DD8: lb          $v1, 0xD($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XD);
    // 0x80229DDC: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x80229DE0: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x80229DE4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80229DE8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80229DEC: sh          $v0, 0x32E($a0)
    MEM_H(0X32E, ctx->r4) = ctx->r2;
L_80229DF0:
    // 0x80229DF0: jr          $ra
    // 0x80229DF4: nop

    TRACE_RETURN()
    return;
    // 0x80229DF4: nop

;}
RECOMP_FUNC void func_8022CAA4_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CAA4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022CAA8: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8022CAAC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022CAB0: lh          $v0, 0x24($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X24);
    // 0x8022CAB4: bgtz        $v0, L_8022CACC
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022CAB8: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_8022CACC;
    }
    // 0x8022CAB8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022CABC: jal         0x8004F5C4
    // 0x8022CAC0: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x8022CAC0: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8022CAC4: j           L_8022CAE4
    // 0x8022CAC8: nop

        goto L_8022CAE4;
    // 0x8022CAC8: nop

L_8022CACC:
    // 0x8022CACC: lhu         $v0, 0x26($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X26);
    // 0x8022CAD0: lw          $v1, 0x18($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X18);
    // 0x8022CAD4: addiu       $a0, $a0, -0x8
    ctx->r4 = ADD32(ctx->r4, -0X8);
    // 0x8022CAD8: sh          $a0, 0x24($a1)
    MEM_H(0X24, ctx->r5) = ctx->r4;
    // 0x8022CADC: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022CAE0: sw          $v1, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r3;
L_8022CAE4:
    // 0x8022CAE4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022CAE8: jr          $ra
    // 0x8022CAEC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022CAEC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802271B4_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802271B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802271B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802271BC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802271C0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802271C4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802271C8: lh          $v0, 0x362($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X362);
    // 0x802271CC: bne         $v0, $zero, L_8022720C
    if (ctx->r2 != 0) {
        // 0x802271D0: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022720C;
    }
    // 0x802271D0: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x802271D4: lh          $v0, 0x35C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35C);
    // 0x802271D8: bne         $v0, $zero, L_80227200
    if (ctx->r2 != 0) {
        // 0x802271DC: nop
    
            goto L_80227200;
    }
    // 0x802271DC: nop

    // 0x802271E0: lh          $v1, 0x360($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X360);
    // 0x802271E4: lh          $v0, 0x366($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X366);
    // 0x802271E8: bne         $v1, $v0, L_80227200
    if (ctx->r3 != ctx->r2) {
        // 0x802271EC: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80227200;
    }
    // 0x802271EC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802271F0: lhu         $v0, 0x352($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X352);
    // 0x802271F4: addiu       $a1, $s0, 0x354
    ctx->r5 = ADD32(ctx->r16, 0X354);
    // 0x802271F8: j           L_8022723C
    // 0x802271FC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
        goto L_8022723C;
    // 0x802271FC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
L_80227200:
    // 0x80227200: lh          $v0, 0x1A($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X1A);
    // 0x80227204: beq         $v0, $zero, L_8022726C
    if (ctx->r2 == 0) {
        // 0x80227208: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022726C;
    }
    // 0x80227208: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022720C:
    // 0x8022720C: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x80227210: bne         $v0, $zero, L_8022726C
    if (ctx->r2 != 0) {
        // 0x80227214: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022726C;
    }
    // 0x80227214: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227218: lh          $v1, 0x18($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X18);
    // 0x8022721C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227220: bne         $v1, $v0, L_8022726C
    if (ctx->r3 != ctx->r2) {
        // 0x80227224: addiu       $a1, $s1, 0xC
        ctx->r5 = ADD32(ctx->r17, 0XC);
            goto L_8022726C;
    }
    // 0x80227224: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    // 0x80227228: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022722C: lhu         $v0, 0xA($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA);
    // 0x80227230: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80227234: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80227238: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
L_8022723C:
    // 0x8022723C: jal         0x8009A3B4
    // 0x80227240: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80227240: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_0:
    // 0x80227244: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80227248: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8022724C: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x80227250: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227254: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80227258: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022725C: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80227260: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80227264: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x80227268: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022726C:
    // 0x8022726C: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80227270: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227274: jal         0x8004DA90
    // 0x80227278: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x80227278: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x8022727C: lhu         $v0, 0x18($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18);
    // 0x80227280: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227284: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    // 0x80227288: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022728C: bne         $v0, $zero, L_802272BC
    if (ctx->r2 != 0) {
        // 0x80227290: nop
    
            goto L_802272BC;
    }
    // 0x80227290: nop

    // 0x80227294: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80227298: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022729C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802272A0: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x802272A4: lhu         $v1, 0x16($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X16);
    // 0x802272A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802272AC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x802272B0: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x802272B4: j           L_8022730C
    // 0x802272B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022730C;
    // 0x802272B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802272BC:
    // 0x802272BC: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x802272C0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802272C4: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x802272C8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802272CC: bne         $v0, $zero, L_802272DC
    if (ctx->r2 != 0) {
        // 0x802272D0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802272DC;
    }
    // 0x802272D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802272D4: j           L_8022730C
    // 0x802272D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022730C;
    // 0x802272D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802272DC:
    // 0x802272DC: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x802272E0: jal         0x80228B14
    // 0x802272E4: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_80228B14_ovl19(rdram, ctx);
        goto after_2;
    // 0x802272E4: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_2:
    // 0x802272E8: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802272EC: beq         $v0, $zero, L_80227310
    if (ctx->r2 == 0) {
        // 0x802272F0: nop
    
            goto L_80227310;
    }
    // 0x802272F0: nop

    // 0x802272F4: jal         0x80228A78
    // 0x802272F8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_80228A78_ovl19(rdram, ctx);
        goto after_3;
    // 0x802272F8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_3:
    // 0x802272FC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227300: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80227304: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x80227308: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_8022730C:
    // 0x8022730C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227310:
    // 0x80227310: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227314: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227318: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022731C: jr          $ra
    // 0x80227320: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227320: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802275C4_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802275C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802275C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802275CC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802275D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802275D4: jal         0x80228AC8
    // 0x802275D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80228AC8_ovl19(rdram, ctx);
        goto after_0;
    // 0x802275D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x802275DC: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x802275E0: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x802275E4: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x802275E8: lbu         $v1, 0xF($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XF);
    // 0x802275EC: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x802275F0: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x802275F4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x802275F8: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x802275FC: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x80227600: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
    // 0x80227604: sh          $v1, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r3;
    // 0x80227608: sb          $a0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r4;
    // 0x8022760C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227610: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227614: jr          $ra
    // 0x80227618: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227618: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226E80_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226E80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226E84: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226E88: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226E8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226E90: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x80226E94: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80226E98: jal         0x8004FA7C
    // 0x80226E9C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80226E9C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x80226EA0: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80226EA4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80226EA8: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80226EAC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226EB0: bne         $v0, $zero, L_80226F14
    if (ctx->r2 != 0) {
        // 0x80226EB4: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80226F14;
    }
    // 0x80226EB4: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80226EB8: lh          $v1, 0x35C($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X35C);
    // 0x80226EBC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226EC0: beq         $v1, $zero, L_80226F04
    if (ctx->r3 == 0) {
        // 0x80226EC4: sb          $v0, 0xA($s0)
        MEM_B(0XA, ctx->r16) = ctx->r2;
            goto L_80226F04;
    }
    // 0x80226EC4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80226EC8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80226ECC: addiu       $a1, $s0, 0x354
    ctx->r5 = ADD32(ctx->r16, 0X354);
    // 0x80226ED0: jal         0x8009A3B4
    // 0x80226ED4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80226ED4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80226ED8: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80226EDC: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x80226EE0: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x80226EE4: lhu         $a1, 0x352($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X352);
    // 0x80226EE8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226EEC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80226EF0: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80226EF4: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80226EF8: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80226EFC: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x80226F00: sh          $a1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r5;
L_80226F04:
    // 0x80226F04: lhu         $v1, 0x35C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X35C);
    // 0x80226F08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226F0C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80226F10: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
L_80226F14:
    // 0x80226F14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226F18: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226F1C: jr          $ra
    // 0x80226F20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226F20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B654_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B654: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B658: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B65C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B660: jal         0x8004F144
    // 0x8022B664: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8022B664: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8022B668: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022B66C: beq         $v1, $zero, L_8022B6A4
    if (ctx->r3 == 0) {
        // 0x8022B670: addiu       $a0, $v1, 0x38
        ctx->r4 = ADD32(ctx->r3, 0X38);
            goto L_8022B6A4;
    }
    // 0x8022B670: addiu       $a0, $v1, 0x38
    ctx->r4 = ADD32(ctx->r3, 0X38);
    // 0x8022B674: addiu       $a1, $s0, 0x190
    ctx->r5 = ADD32(ctx->r16, 0X190);
    // 0x8022B678: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022B67C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022B680: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022B684: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022B688: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8022B68C: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022B690: jal         0x8009A3B4
    // 0x8022B694: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022B694: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    after_1:
    // 0x8022B698: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B69C: jal         0x8007A1B8
    // 0x8022B6A0: addiu       $a1, $s0, 0x180
    ctx->r5 = ADD32(ctx->r16, 0X180);
    func_8007A1B8_555B8(rdram, ctx);
        goto after_2;
    // 0x8022B6A0: addiu       $a1, $s0, 0x180
    ctx->r5 = ADD32(ctx->r16, 0X180);
    after_2:
L_8022B6A4:
    // 0x8022B6A4: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022B6A8: bne         $v0, $zero, L_8022B72C
    if (ctx->r2 != 0) {
        // 0x8022B6AC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022B72C;
    }
    // 0x8022B6AC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022B6B0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022B6B4: addiu       $a1, $s0, 0x190
    ctx->r5 = ADD32(ctx->r16, 0X190);
    // 0x8022B6B8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022B6BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B6C0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022B6C4: sb          $zero, 0x2($s0)
    MEM_B(0X2, ctx->r16) = 0;
    // 0x8022B6C8: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x8022B6CC: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x8022B6D0: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x8022B6D4: jal         0x8009A3B4
    // 0x8022B6D8: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022B6D8: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    after_3:
    // 0x8022B6DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B6E0: addiu       $a1, $zero, -0x300
    ctx->r5 = ADD32(0, -0X300);
    // 0x8022B6E4: lh          $v0, 0x190($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X190);
    // 0x8022B6E8: lh          $v1, 0x192($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X192);
    // 0x8022B6EC: lh          $a3, 0x194($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X194);
    // 0x8022B6F0: addiu       $a2, $zero, -0x400
    ctx->r6 = ADD32(0, -0X400);
    // 0x8022B6F4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B6F8: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022B6FC: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x8022B700: sw          $a3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r7;
    // 0x8022B704: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022B708: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8022B70C: jal         0x8004DA90
    // 0x8022B710: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_4;
    // 0x8022B710: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    after_4:
    // 0x8022B714: addiu       $a0, $s0, 0x54
    ctx->r4 = ADD32(ctx->r16, 0X54);
    // 0x8022B718: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8022B71C: jal         0x8009A3B4
    // 0x8022B720: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8022B720: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x8022B724: j           L_8022B730
    // 0x8022B728: nop

        goto L_8022B730;
    // 0x8022B728: nop

L_8022B72C:
    // 0x8022B72C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022B730:
    // 0x8022B730: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B734: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B738: jr          $ra
    // 0x8022B73C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B73C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022938C_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022938C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229390: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229394: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229398: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022939C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x802293A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802293A4: jal         0x8004DDE8
    // 0x802293A8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8004DDE8_291E8(rdram, ctx);
        goto after_0;
    // 0x802293A8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x802293AC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802293B0: sltiu       $v0, $v1, 0x258
    ctx->r2 = ctx->r3 < 0X258 ? 1 : 0;
    // 0x802293B4: beq         $v0, $zero, L_802293F8
    if (ctx->r2 == 0) {
        // 0x802293B8: sltiu       $v0, $v1, 0x190
        ctx->r2 = ctx->r3 < 0X190 ? 1 : 0;
            goto L_802293F8;
    }
    // 0x802293B8: sltiu       $v0, $v1, 0x190
    ctx->r2 = ctx->r3 < 0X190 ? 1 : 0;
    // 0x802293BC: beq         $v0, $zero, L_802293D8
    if (ctx->r2 == 0) {
        // 0x802293C0: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_802293D8;
    }
    // 0x802293C0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802293C4: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x802293C8: beq         $v1, $v0, L_80229438
    if (ctx->r3 == ctx->r2) {
        // 0x802293CC: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80229438;
    }
    // 0x802293CC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802293D0: j           L_80229438
    // 0x802293D4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_80229438;
    // 0x802293D4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_802293D8:
    // 0x802293D8: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x802293DC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802293E0: beq         $v1, $v0, L_80229438
    if (ctx->r3 == ctx->r2) {
        // 0x802293E4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80229438;
    }
    // 0x802293E4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802293E8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802293EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802293F0: j           L_80229418
    // 0x802293F4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
        goto L_80229418;
    // 0x802293F4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_802293F8:
    // 0x802293F8: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802293FC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80229400: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x80229404: bne         $v0, $zero, L_80229438
    if (ctx->r2 != 0) {
        // 0x80229408: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80229438;
    }
    // 0x80229408: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022940C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80229410: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229414: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_80229418:
    // 0x80229418: jal         0x80050294
    // 0x8022941C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8022941C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80229420: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229424: jal         0x80229468
    // 0x80229428: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80229468_ovl19(rdram, ctx);
        goto after_2;
    // 0x80229428: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_2:
    // 0x8022942C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229430: jal         0x80229448
    // 0x80229434: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80229448_ovl19(rdram, ctx);
        goto after_3;
    // 0x80229434: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
L_80229438:
    // 0x80229438: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022943C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229440: jr          $ra
    // 0x80229444: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229444: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022CB60_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CB60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022CB64: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022CB68: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022CB6C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022CB70: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022CB74: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022CB78: lw          $v0, -0x18C0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X18C0);
    // 0x8022CB7C: jalr        $v0
    // 0x8022CB80: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022CB80: nop

    after_0:
    // 0x8022CB84: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022CB88: jr          $ra
    // 0x8022CB8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022CB8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802254E4_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802254E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802254E8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802254EC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802254F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802254F4: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802254F8: bne         $v0, $zero, L_80225518
    if (ctx->r2 != 0) {
        // 0x802254FC: nop
    
            goto L_80225518;
    }
    // 0x802254FC: nop

    // 0x80225500: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225504: jal         0x800607C4
    // 0x80225508: addiu       $a0, $a0, -0x222C
    ctx->r4 = ADD32(ctx->r4, -0X222C);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x80225508: addiu       $a0, $a0, -0x222C
    ctx->r4 = ADD32(ctx->r4, -0X222C);
    after_0:
    // 0x8022550C: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225510: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225514: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225518:
    // 0x80225518: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022551C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225520: jr          $ra
    // 0x80225524: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225524: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802285A8_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802285A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802285AC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802285B0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802285B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802285B8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802285BC: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x802285C0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802285C4: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x802285C8: jal         0x8004F820
    // 0x802285CC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x802285CC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x802285D0: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802285D4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802285D8: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802285DC: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x802285E0: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x802285E4: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x802285E8: bne         $v0, $zero, L_80228620
    if (ctx->r2 != 0) {
        // 0x802285EC: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80228620;
    }
    // 0x802285EC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802285F0: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x802285F4: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x802285F8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x802285FC: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x80228600: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x80228604: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x80228608: jal         0x80228A78
    // 0x8022860C: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
    func_80228A78_ovl19(rdram, ctx);
        goto after_1;
    // 0x8022860C: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
    after_1:
    // 0x80228610: jal         0x80034E3C
    // 0x80228614: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80034E3C_1023C(rdram, ctx);
        goto after_2;
    // 0x80228614: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_2:
    // 0x80228618: j           L_8022863C
    // 0x8022861C: nop

        goto L_8022863C;
    // 0x8022861C: nop

L_80228620:
    // 0x80228620: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80228624: lb          $v1, -0x3C18($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3C18);
    // 0x80228628: bne         $v1, $v0, L_8022863C
    if (ctx->r3 != ctx->r2) {
        // 0x8022862C: nop
    
            goto L_8022863C;
    }
    // 0x8022862C: nop

    // 0x80228630: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x80228634: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228638: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
L_8022863C:
    // 0x8022863C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228640: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228644: jr          $ra
    // 0x80228648: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228648: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226530_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226530: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226534: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226538: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022653C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80226540: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226544: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80226548: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022654C: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80226550: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80226554: beq         $v1, $zero, L_80226564
    if (ctx->r3 == 0) {
        // 0x80226558: sb          $v0, 0x0($s0)
        MEM_B(0X0, ctx->r16) = ctx->r2;
            goto L_80226564;
    }
    // 0x80226558: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022655C: j           L_8022656C
    // 0x80226560: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
        goto L_8022656C;
    // 0x80226560: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
L_80226564:
    // 0x80226564: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226568: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_8022656C:
    // 0x8022656C: jal         0x8004D5D4
    // 0x80226570: nop

    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80226570: nop

    after_0:
    // 0x80226574: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80226578: addiu       $v0, $zero, 0x26
    ctx->r2 = ADD32(0, 0X26);
    // 0x8022657C: bne         $a0, $v0, L_8022658C
    if (ctx->r4 != ctx->r2) {
        // 0x80226580: xori        $v1, $a0, 0x24
        ctx->r3 = ctx->r4 ^ 0X24;
            goto L_8022658C;
    }
    // 0x80226580: xori        $v1, $a0, 0x24
    ctx->r3 = ctx->r4 ^ 0X24;
    // 0x80226584: j           L_80226600
    // 0x80226588: addiu       $v0, $zero, 0x1D7
    ctx->r2 = ADD32(0, 0X1D7);
        goto L_80226600;
    // 0x80226588: addiu       $v0, $zero, 0x1D7
    ctx->r2 = ADD32(0, 0X1D7);
L_8022658C:
    // 0x8022658C: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80226590: xori        $v0, $a0, 0x30
    ctx->r2 = ctx->r4 ^ 0X30;
    // 0x80226594: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80226598: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022659C: bne         $v1, $zero, L_80226600
    if (ctx->r3 != 0) {
        // 0x802265A0: addiu       $v0, $zero, 0x21A
        ctx->r2 = ADD32(0, 0X21A);
            goto L_80226600;
    }
    // 0x802265A0: addiu       $v0, $zero, 0x21A
    ctx->r2 = ADD32(0, 0X21A);
    // 0x802265A4: xori        $v1, $a0, 0x42
    ctx->r3 = ctx->r4 ^ 0X42;
    // 0x802265A8: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x802265AC: xori        $v0, $a0, 0x53
    ctx->r2 = ctx->r4 ^ 0X53;
    // 0x802265B0: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x802265B4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x802265B8: bne         $v1, $zero, L_80226600
    if (ctx->r3 != 0) {
        // 0x802265BC: addiu       $v0, $zero, 0x21A
        ctx->r2 = ADD32(0, 0X21A);
            goto L_80226600;
    }
    // 0x802265BC: addiu       $v0, $zero, 0x21A
    ctx->r2 = ADD32(0, 0X21A);
    // 0x802265C0: xori        $v1, $a0, 0x5C
    ctx->r3 = ctx->r4 ^ 0X5C;
    // 0x802265C4: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x802265C8: xori        $v0, $a0, 0x44
    ctx->r2 = ctx->r4 ^ 0X44;
    // 0x802265CC: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x802265D0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x802265D4: bne         $v1, $zero, L_80226600
    if (ctx->r3 != 0) {
        // 0x802265D8: addiu       $v0, $zero, 0x21A
        ctx->r2 = ADD32(0, 0X21A);
            goto L_80226600;
    }
    // 0x802265D8: addiu       $v0, $zero, 0x21A
    ctx->r2 = ADD32(0, 0X21A);
    // 0x802265DC: addiu       $v0, $zero, 0x5E
    ctx->r2 = ADD32(0, 0X5E);
    // 0x802265E0: bnel        $a0, $v0, L_80226600
    if (ctx->r4 != ctx->r2) {
        // 0x802265E4: addiu       $v0, $zero, 0x200
        ctx->r2 = ADD32(0, 0X200);
            goto L_80226600;
    }
    goto skip_0;
    // 0x802265E4: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    skip_0:
    // 0x802265E8: addiu       $v0, $zero, 0x1C0
    ctx->r2 = ADD32(0, 0X1C0);
    // 0x802265EC: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x802265F0: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802265F4: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x802265F8: j           L_80226608
    // 0x802265FC: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
        goto L_80226608;
    // 0x802265FC: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
L_80226600:
    // 0x80226600: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80226604: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
L_80226608:
    // 0x80226608: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022660C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80226610: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80226614: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80226618: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8022661C: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    // 0x80226620: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80226624: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x80226628: bne         $v0, $zero, L_80226634
    if (ctx->r2 != 0) {
        // 0x8022662C: addiu       $v0, $zero, 0x2710
        ctx->r2 = ADD32(0, 0X2710);
            goto L_80226634;
    }
    // 0x8022662C: addiu       $v0, $zero, 0x2710
    ctx->r2 = ADD32(0, 0X2710);
    // 0x80226630: addiu       $v0, $zero, 0x1388
    ctx->r2 = ADD32(0, 0X1388);
L_80226634:
    // 0x80226634: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    // 0x80226638: addiu       $a0, $s1, 0xC
    ctx->r4 = ADD32(ctx->r17, 0XC);
    // 0x8022663C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80226640: jal         0x8009A3B4
    // 0x80226644: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80226644: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80226648: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022664C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226650: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80226654: sh          $v0, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r2;
    // 0x80226658: lbu         $v1, 0xD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XD);
    // 0x8022665C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226660: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80226664: addiu       $v0, $v0, -0x1C00
    ctx->r2 = ADD32(ctx->r2, -0X1C00);
    // 0x80226668: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x8022666C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226670: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80226674: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80226678: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x8022667C: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80226680: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x80226684: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x80226688: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x8022668C: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80226690: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80226694: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80226698: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8022669C: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x802266A0: jal         0x80050294
    // 0x802266A4: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x802266A4: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    after_2:
    // 0x802266A8: jal         0x802266C4
    // 0x802266AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802266C4_ovl19(rdram, ctx);
        goto after_3;
    // 0x802266AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x802266B0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802266B4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802266B8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802266BC: jr          $ra
    // 0x802266C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802266C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022B17C_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B17C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B180: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022B184: jal         0x8004F418
    // 0x8022B188: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8022B188: nop

    after_0:
    // 0x8022B18C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022B190: jr          $ra
    // 0x8022B194: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B194: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C6B0_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C6B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C6B4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022C6B8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022C6BC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022C6C0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022C6C4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022C6C8: lw          $v0, -0x18E0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X18E0);
    // 0x8022C6CC: jalr        $v0
    // 0x8022C6D0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022C6D0: nop

    after_0:
    // 0x8022C6D4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022C6D8: jr          $ra
    // 0x8022C6DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C6DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022CCF4_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CCF4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022CCF8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022CCFC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022CD00: addiu       $a0, $s1, 0x38
    ctx->r4 = ADD32(ctx->r17, 0X38);
    // 0x8022CD04: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022CD08: jal         0x8003E6BC
    // 0x8022CD0C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_0;
    // 0x8022CD0C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x8022CD10: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022CD14: addiu       $a0, $a0, 0x49C4
    ctx->r4 = ADD32(ctx->r4, 0X49C4);
    // 0x8022CD18: jal         0x8003E6BC
    // 0x8022CD1C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_1;
    // 0x8022CD1C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_1:
    // 0x8022CD20: bne         $s0, $v0, L_8022CD48
    if (ctx->r16 != ctx->r2) {
        // 0x8022CD24: nop
    
            goto L_8022CD48;
    }
    // 0x8022CD24: nop

    // 0x8022CD28: jal         0x8006033C
    // 0x8022CD2C: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x8022CD2C: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    after_2:
    // 0x8022CD30: bne         $v0, $zero, L_8022CD48
    if (ctx->r2 != 0) {
        // 0x8022CD34: nop
    
            goto L_8022CD48;
    }
    // 0x8022CD34: nop

    // 0x8022CD38: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8022CD3C: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
    // 0x8022CD40: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022CD44: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_8022CD48:
    // 0x8022CD48: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022CD4C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022CD50: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022CD54: jr          $ra
    // 0x8022CD58: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022CD58: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022684C_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022684C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226850: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80226854: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80226858: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022685C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226860: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226864: lw          $v0, -0x1BC4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1BC4);
    // 0x80226868: jalr        $v0
    // 0x8022686C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022686C: nop

    after_0:
    // 0x80226870: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80226874: jr          $ra
    // 0x80226878: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226878: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A2DC_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A2DC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022A2E0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022A2E4: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022A2E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022A2EC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022A2F0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A2F4: lh          $v0, 0x32E($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X32E);
    // 0x8022A2F8: beq         $v0, $zero, L_8022A3C8
    if (ctx->r2 == 0) {
        // 0x8022A2FC: addiu       $v1, $zero, 0x18
        ctx->r3 = ADD32(0, 0X18);
            goto L_8022A3C8;
    }
    // 0x8022A2FC: addiu       $v1, $zero, 0x18
    ctx->r3 = ADD32(0, 0X18);
    // 0x8022A300: lbu         $v0, 0x333($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X333);
    // 0x8022A304: andi        $v0, $v0, 0x18
    ctx->r2 = ctx->r2 & 0X18;
    // 0x8022A308: bne         $v0, $v1, L_8022A320
    if (ctx->r2 != ctx->r3) {
        // 0x8022A30C: addiu       $s1, $s2, 0x14
        ctx->r17 = ADD32(ctx->r18, 0X14);
            goto L_8022A320;
    }
    // 0x8022A30C: addiu       $s1, $s2, 0x14
    ctx->r17 = ADD32(ctx->r18, 0X14);
    // 0x8022A310: addiu       $a0, $zero, 0xDB
    ctx->r4 = ADD32(0, 0XDB);
    // 0x8022A314: jal         0x8002A33C
    // 0x8022A318: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8022A318: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    after_0:
    // 0x8022A31C: addiu       $s1, $s2, 0x14
    ctx->r17 = ADD32(ctx->r18, 0X14);
L_8022A320:
    // 0x8022A320: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022A324: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8022A328: addiu       $s0, $s0, 0x49C4
    ctx->r16 = ADD32(ctx->r16, 0X49C4);
    // 0x8022A32C: lhu         $a2, 0x56($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X56);
    // 0x8022A330: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022A334: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    // 0x8022A338: jal         0x8004F820
    // 0x8022A33C: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022A33C: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_1:
    // 0x8022A340: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022A344: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022A348: lhu         $v1, 0x56($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X56);
    // 0x8022A34C: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    // 0x8022A350: lhu         $a2, 0x32C($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X32C);
    // 0x8022A354: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022A358: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022A35C: addu        $a2, $v1, $a2
    ctx->r6 = ADD32(ctx->r3, ctx->r6);
    // 0x8022A360: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    // 0x8022A364: jal         0x8004F820
    // 0x8022A368: sh          $v1, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r3;
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8022A368: sh          $v1, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r3;
    after_2:
    // 0x8022A36C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022A370: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x8022A374: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022A378: lhu         $v1, 0x32C($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X32C);
    // 0x8022A37C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022A380: addiu       $t0, $zero, 0xA0
    ctx->r8 = ADD32(0, 0XA0);
    // 0x8022A384: sh          $t0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r8;
    // 0x8022A388: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022A38C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022A390: jal         0x8004DA90
    // 0x8022A394: sh          $v1, 0x32C($s2)
    MEM_H(0X32C, ctx->r18) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x8022A394: sh          $v1, 0x32C($s2)
    MEM_H(0X32C, ctx->r18) = ctx->r3;
    after_3:
    // 0x8022A398: lhu         $v0, 0x32E($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X32E);
    // 0x8022A39C: lbu         $v1, 0x332($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X332);
    // 0x8022A3A0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022A3A4: andi        $v1, $v1, 0x10
    ctx->r3 = ctx->r3 & 0X10;
    // 0x8022A3A8: beq         $v1, $zero, L_8022A41C
    if (ctx->r3 == 0) {
        // 0x8022A3AC: sh          $v0, 0x32E($s2)
        MEM_H(0X32E, ctx->r18) = ctx->r2;
            goto L_8022A41C;
    }
    // 0x8022A3AC: sh          $v0, 0x32E($s2)
    MEM_H(0X32E, ctx->r18) = ctx->r2;
    // 0x8022A3B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A3B4: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x8022A3B8: jal         0x80229DF8
    // 0x8022A3BC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_80229DF8_ovl19(rdram, ctx);
        goto after_4;
    // 0x8022A3BC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_4:
    // 0x8022A3C0: j           L_8022A41C
    // 0x8022A3C4: nop

        goto L_8022A41C;
    // 0x8022A3C4: nop

L_8022A3C8:
    // 0x8022A3C8: lbu         $v0, 0x3($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X3);
    // 0x8022A3CC: sb          $zero, 0x9($s2)
    MEM_B(0X9, ctx->r18) = 0;
    // 0x8022A3D0: andi        $v0, $v0, 0xF0
    ctx->r2 = ctx->r2 & 0XF0;
    // 0x8022A3D4: bne         $v0, $zero, L_8022A3F4
    if (ctx->r2 != 0) {
        // 0x8022A3D8: sb          $zero, 0x330($s2)
        MEM_B(0X330, ctx->r18) = 0;
            goto L_8022A3F4;
    }
    // 0x8022A3D8: sb          $zero, 0x330($s2)
    MEM_B(0X330, ctx->r18) = 0;
    // 0x8022A3DC: lbu         $v0, 0x332($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X332);
    // 0x8022A3E0: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022A3E4: beq         $v0, $zero, L_8022A41C
    if (ctx->r2 == 0) {
        // 0x8022A3E8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022A41C;
    }
    // 0x8022A3E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A3EC: j           L_8022A41C
    // 0x8022A3F0: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
        goto L_8022A41C;
    // 0x8022A3F0: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
L_8022A3F4:
    // 0x8022A3F4: lbu         $v0, 0x332($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X332);
    // 0x8022A3F8: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022A3FC: beq         $v0, $zero, L_8022A41C
    if (ctx->r2 == 0) {
        // 0x8022A400: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022A41C;
    }
    // 0x8022A400: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022A404: lb          $v1, 0xD($s2)
    ctx->r3 = MEM_B(ctx->r18, 0XD);
    // 0x8022A408: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x8022A40C: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x8022A410: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022A414: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022A418: sh          $v0, 0x32E($s2)
    MEM_H(0X32E, ctx->r18) = ctx->r2;
L_8022A41C:
    // 0x8022A41C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022A420: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022A424: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022A428: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A42C: jr          $ra
    // 0x8022A430: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022A430: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022B98C_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B98C: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x8022B990: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022B994: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8022B998: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8022B99C: subu        $v0, $v1, $a2
    ctx->r2 = SUB32(ctx->r3, ctx->r6);
    // 0x8022B9A0: bltzl       $v0, L_8022B9A8
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022B9A4: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_8022B9A8;
    }
    goto skip_0;
    // 0x8022B9A4: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_0:
L_8022B9A8:
    // 0x8022B9A8: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022B9AC: bne         $v0, $zero, L_8022B9C4
    if (ctx->r2 != 0) {
        // 0x8022B9B0: slt         $v0, $a2, $v1
        ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_8022B9C4;
    }
    // 0x8022B9B0: slt         $v0, $a2, $v1
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022B9B4: bne         $v0, $zero, L_8022B9C0
    if (ctx->r2 != 0) {
        // 0x8022B9B8: addiu       $v0, $a1, 0x20
        ctx->r2 = ADD32(ctx->r5, 0X20);
            goto L_8022B9C0;
    }
    // 0x8022B9B8: addiu       $v0, $a1, 0x20
    ctx->r2 = ADD32(ctx->r5, 0X20);
    // 0x8022B9BC: addiu       $v0, $a1, -0x20
    ctx->r2 = ADD32(ctx->r5, -0X20);
L_8022B9C0:
    // 0x8022B9C0: sh          $v0, 0x328($a0)
    MEM_H(0X328, ctx->r4) = ctx->r2;
L_8022B9C4:
    // 0x8022B9C4: jr          $ra
    // 0x8022B9C8: nop

    TRACE_RETURN()
    return;
    // 0x8022B9C8: nop

;}
RECOMP_FUNC void func_80226FC0_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226FC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226FC4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226FC8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226FCC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226FD0: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x80226FD4: bgez        $v0, L_80226FEC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80226FD8: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_80226FEC;
    }
    // 0x80226FD8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80226FDC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80226FE0: jal         0x80228A88
    // 0x80226FE4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    func_80228A88_ovl19(rdram, ctx);
        goto after_0;
    // 0x80226FE4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    after_0:
    // 0x80226FE8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80226FEC:
    // 0x80226FEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226FF0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226FF4: jr          $ra
    // 0x80226FF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226FF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B300_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B300: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022B304: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022B308: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022B30C: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8022B310: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8022B314: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8022B318: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8022B31C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022B320: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022B324: lb          $v0, 0x36D($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X36D);
    // 0x8022B328: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x8022B32C: addiu       $s3, $s3, 0x49B0
    ctx->r19 = ADD32(ctx->r19, 0X49B0);
    // 0x8022B330: beq         $v0, $zero, L_8022B570
    if (ctx->r2 == 0) {
        // 0x8022B334: addiu       $s4, $s1, 0x308
        ctx->r20 = ADD32(ctx->r17, 0X308);
            goto L_8022B570;
    }
    // 0x8022B334: addiu       $s4, $s1, 0x308
    ctx->r20 = ADD32(ctx->r17, 0X308);
    // 0x8022B338: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x8022B33C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B340: addiu       $s5, $s3, 0x14
    ctx->r21 = ADD32(ctx->r19, 0X14);
    // 0x8022B344: lhu         $a2, 0x56($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X56);
    // 0x8022B348: lhu         $v0, 0x322($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X322);
    // 0x8022B34C: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x8022B350: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x8022B354: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8022B358: jal         0x8004F820
    // 0x8022B35C: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022B35C: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_0:
    // 0x8022B360: lhu         $v1, 0x322($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X322);
    // 0x8022B364: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022B368: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022B36C: jal         0x8004EFE4
    // 0x8022B370: sh          $v1, 0x322($s1)
    MEM_H(0X322, ctx->r17) = ctx->r3;
    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_1;
    // 0x8022B370: sh          $v1, 0x322($s1)
    MEM_H(0X322, ctx->r17) = ctx->r3;
    after_1:
    // 0x8022B374: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x8022B378: beq         $s2, $zero, L_8022B554
    if (ctx->r18 == 0) {
        // 0x8022B37C: addiu       $a0, $zero, 0x148
        ctx->r4 = ADD32(0, 0X148);
            goto L_8022B554;
    }
    // 0x8022B37C: addiu       $a0, $zero, 0x148
    ctx->r4 = ADD32(0, 0X148);
    // 0x8022B380: jal         0x8002A33C
    // 0x8022B384: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x8022B384: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022B388: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8022B38C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B390: sb          $v1, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r3;
    // 0x8022B394: sb          $v0, 0x2($s2)
    MEM_B(0X2, ctx->r18) = ctx->r2;
    // 0x8022B398: sb          $zero, 0x4($s2)
    MEM_B(0X4, ctx->r18) = 0;
    // 0x8022B39C: sb          $v1, 0xF($s2)
    MEM_B(0XF, ctx->r18) = ctx->r3;
    // 0x8022B3A0: lhu         $v0, 0x198($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X198);
    // 0x8022B3A4: sh          $v0, 0x14($s2)
    MEM_H(0X14, ctx->r18) = ctx->r2;
    // 0x8022B3A8: lhu         $v0, 0x19A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X19A);
    // 0x8022B3AC: sh          $v0, 0x16($s2)
    MEM_H(0X16, ctx->r18) = ctx->r2;
    // 0x8022B3B0: lhu         $v0, 0x19C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X19C);
    // 0x8022B3B4: lh          $v1, 0x16($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X16);
    // 0x8022B3B8: addiu       $a0, $s3, 0xC4
    ctx->r4 = ADD32(ctx->r19, 0XC4);
    // 0x8022B3BC: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x8022B3C0: sh          $v0, 0x18($s2)
    MEM_H(0X18, ctx->r18) = ctx->r2;
    // 0x8022B3C4: lh          $v0, 0x14($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X14);
    // 0x8022B3C8: lh          $a3, 0x18($s2)
    ctx->r7 = MEM_H(ctx->r18, 0X18);
    // 0x8022B3CC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022B3D0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022B3D4: sw          $v1, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r3;
    // 0x8022B3D8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B3DC: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x8022B3E0: sw          $v0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r2;
    // 0x8022B3E4: jal         0x8009A3B4
    // 0x8022B3E8: sw          $a3, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r7;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022B3E8: sw          $a3, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r7;
    after_3:
    // 0x8022B3EC: addiu       $a0, $s1, 0xC4
    ctx->r4 = ADD32(ctx->r17, 0XC4);
    // 0x8022B3F0: addiu       $a1, $s1, 0x190
    ctx->r5 = ADD32(ctx->r17, 0X190);
    // 0x8022B3F4: jal         0x8009A3B4
    // 0x8022B3F8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022B3F8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x8022B3FC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022B400: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8022B404: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x8022B408: lhu         $v1, 0x322($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X322);
    // 0x8022B40C: addiu       $a2, $s1, 0x34C
    ctx->r6 = ADD32(ctx->r17, 0X34C);
    // 0x8022B410: addiu       $a3, $s1, 0x354
    ctx->r7 = ADD32(ctx->r17, 0X354);
    // 0x8022B414: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022B418: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B41C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022B420: jal         0x8004E150
    // 0x8022B424: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8004E150_29550(rdram, ctx);
        goto after_5;
    // 0x8022B424: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_5:
    // 0x8022B428: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022B42C: beq         $v0, $zero, L_8022B468
    if (ctx->r2 == 0) {
        // 0x8022B430: nop
    
            goto L_8022B468;
    }
    // 0x8022B430: nop

    // 0x8022B434: lhu         $v0, 0x14($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X14);
    // 0x8022B438: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022B43C: lhu         $v1, 0x49C6($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X49C6);
    // 0x8022B440: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022B444: lhu         $a0, 0x49C8($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X49C8);
    // 0x8022B448: addiu       $v1, $v1, -0x50
    ctx->r3 = ADD32(ctx->r3, -0X50);
    // 0x8022B44C: sh          $v0, 0xC4($s3)
    MEM_H(0XC4, ctx->r19) = ctx->r2;
    // 0x8022B450: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B454: sh          $v1, 0x4A76($at)
    MEM_H(0X4A76, ctx->r1) = ctx->r3;
    // 0x8022B458: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B45C: sh          $a0, 0x4A78($at)
    MEM_H(0X4A78, ctx->r1) = ctx->r4;
    // 0x8022B460: j           L_8022B4F8
    // 0x8022B464: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
        goto L_8022B4F8;
    // 0x8022B464: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_8022B468:
    // 0x8022B468: lw          $a0, 0x80($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X80);
    // 0x8022B46C: jal         0x80032424
    // 0x8022B470: nop

    func_80032424_D824(rdram, ctx);
        goto after_6;
    // 0x8022B470: nop

    after_6:
    // 0x8022B474: lh          $v1, 0x56($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X56);
    // 0x8022B478: lh          $a0, 0x322($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X322);
    // 0x8022B47C: sw          $v0, 0x80($s1)
    MEM_W(0X80, ctx->r17) = ctx->r2;
    // 0x8022B480: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    // 0x8022B484: jal         0x80032498
    // 0x8022B488: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    func_80032498_D898(rdram, ctx);
        goto after_7;
    // 0x8022B488: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    after_7:
    // 0x8022B48C: lh          $a0, 0x322($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X322);
    // 0x8022B490: lh          $v1, 0x56($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X56);
    // 0x8022B494: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022B498: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    // 0x8022B49C: jal         0x800324B4
    // 0x8022B4A0: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    func_800324B4_D8B4(rdram, ctx);
        goto after_8;
    // 0x8022B4A0: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    after_8:
    // 0x8022B4A4: lw          $v1, 0x80($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X80);
    // 0x8022B4A8: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022B4AC: mflo        $v0
    ctx->r2 = lo;
    // 0x8022B4B0: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022B4B4: lhu         $v1, 0x49C6($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X49C6);
    // 0x8022B4B8: lhu         $a0, 0x14($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X14);
    // 0x8022B4BC: addiu       $v1, $v1, -0x50
    ctx->r3 = ADD32(ctx->r3, -0X50);
    // 0x8022B4C0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B4C4: sh          $v1, 0x4A76($at)
    MEM_H(0X4A76, ctx->r1) = ctx->r3;
    // 0x8022B4C8: srl         $v0, $v0, 12
    ctx->r2 = S32(U32(ctx->r2) >> 12);
    // 0x8022B4CC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8022B4D0: sh          $a0, 0xC4($s3)
    MEM_H(0XC4, ctx->r19) = ctx->r4;
    // 0x8022B4D4: lw          $v0, 0x80($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X80);
    // 0x8022B4D8: mult        $s0, $v0
    result = S64(S32(ctx->r16)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022B4DC: mflo        $s0
    ctx->r16 = lo;
    // 0x8022B4E0: lhu         $v0, 0x18($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18);
    // 0x8022B4E4: srl         $s0, $s0, 12
    ctx->r16 = S32(U32(ctx->r16) >> 12);
    // 0x8022B4E8: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x8022B4EC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B4F0: sh          $v0, 0x4A78($at)
    MEM_H(0X4A78, ctx->r1) = ctx->r2;
    // 0x8022B4F4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_8022B4F8:
    // 0x8022B4F8: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8022B4FC: lh          $a2, 0x5E($s4)
    ctx->r6 = MEM_H(ctx->r20, 0X5E);
    // 0x8022B500: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022B504: addiu       $v0, $zero, 0xAC
    ctx->r2 = ADD32(0, 0XAC);
    // 0x8022B508: jal         0x8004E458
    // 0x8022B50C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8004E458_29858(rdram, ctx);
        goto after_9;
    // 0x8022B50C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_9:
    // 0x8022B510: jal         0x8022B740
    // 0x8022B514: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8022B740_ovl19(rdram, ctx);
        goto after_10;
    // 0x8022B514: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_10:
    // 0x8022B518: jal         0x8004F144
    // 0x8022B51C: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_11;
    // 0x8022B51C: nop

    after_11:
    // 0x8022B520: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022B524: beq         $v1, $zero, L_8022B554
    if (ctx->r3 == 0) {
        // 0x8022B528: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022B554;
    }
    // 0x8022B528: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022B52C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022B530: addiu       $v0, $zero, 0x83
    ctx->r2 = ADD32(0, 0X83);
    // 0x8022B534: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8022B538: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    // 0x8022B53C: lhu         $v0, 0x198($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X198);
    // 0x8022B540: sh          $v0, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = ctx->r2;
    // 0x8022B544: lhu         $v0, 0x19A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X19A);
    // 0x8022B548: sh          $v0, 0x1E($v1)
    MEM_H(0X1E, ctx->r3) = ctx->r2;
    // 0x8022B54C: lhu         $v0, 0x19C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X19C);
    // 0x8022B550: sh          $v0, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r2;
L_8022B554:
    // 0x8022B554: lbu         $v0, 0x65($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X65);
    // 0x8022B558: addiu       $v1, $zero, 0x46
    ctx->r3 = ADD32(0, 0X46);
    // 0x8022B55C: sb          $v1, 0x66($s4)
    MEM_B(0X66, ctx->r20) = ctx->r3;
    // 0x8022B560: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022B564: sb          $v0, 0x65($s4)
    MEM_B(0X65, ctx->r20) = ctx->r2;
    // 0x8022B568: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022B56C: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_8022B570:
    // 0x8022B570: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8022B574: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8022B578: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8022B57C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8022B580: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022B584: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022B588: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022B58C: jr          $ra
    // 0x8022B590: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022B590: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022CB90_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CB90: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022CB94: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022CB98: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022CB9C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022CBA0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022CBA4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022CBA8: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x8022CBAC: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x8022CBB0: jal         0x8004D5D4
    // 0x8022CBB4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022CBB4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022CBB8: addiu       $s1, $s0, 0x18
    ctx->r17 = ADD32(ctx->r16, 0X18);
    // 0x8022CBBC: jal         0x8002C678
    // 0x8022CBC0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8002C678_7A78(rdram, ctx);
        goto after_1;
    // 0x8022CBC0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x8022CBC4: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    // 0x8022CBC8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022CBCC: jal         0x800319B4
    // 0x8022CBD0: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_2;
    // 0x8022CBD0: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    after_2:
    // 0x8022CBD4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022CBD8: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x8022CBDC: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x8022CBE0: sw          $v1, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r3;
    // 0x8022CBE4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022CBE8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022CBEC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022CBF0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022CBF4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022CBF8: jr          $ra
    // 0x8022CBFC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022CBFC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022B9CC_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B9CC: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x8022B9D0: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022B9D4: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8022B9D8: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8022B9DC: subu        $v0, $v1, $a2
    ctx->r2 = SUB32(ctx->r3, ctx->r6);
    // 0x8022B9E0: bltzl       $v0, L_8022B9E8
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022B9E4: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_8022B9E8;
    }
    goto skip_0;
    // 0x8022B9E4: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_0:
L_8022B9E8:
    // 0x8022B9E8: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x8022B9EC: bne         $v0, $zero, L_8022BA04
    if (ctx->r2 != 0) {
        // 0x8022B9F0: slt         $v0, $a2, $v1
        ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_8022BA04;
    }
    // 0x8022B9F0: slt         $v0, $a2, $v1
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022B9F4: bne         $v0, $zero, L_8022BA00
    if (ctx->r2 != 0) {
        // 0x8022B9F8: addiu       $v0, $a1, -0x20
        ctx->r2 = ADD32(ctx->r5, -0X20);
            goto L_8022BA00;
    }
    // 0x8022B9F8: addiu       $v0, $a1, -0x20
    ctx->r2 = ADD32(ctx->r5, -0X20);
    // 0x8022B9FC: addiu       $v0, $a1, 0x20
    ctx->r2 = ADD32(ctx->r5, 0X20);
L_8022BA00:
    // 0x8022BA00: sh          $v0, 0x328($a0)
    MEM_H(0X328, ctx->r4) = ctx->r2;
L_8022BA04:
    // 0x8022BA04: jr          $ra
    // 0x8022BA08: nop

    TRACE_RETURN()
    return;
    // 0x8022BA08: nop

    // 0x8022BA0C: nop

;}
RECOMP_FUNC void func_80229694_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229694: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229698: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022969C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802296A0: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x802296A4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802296A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802296AC: jal         0x8009A3B4
    // 0x802296B0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802296B0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x802296B4: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x802296B8: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x802296BC: jal         0x8009A3B4
    // 0x802296C0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802296C0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x802296C4: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x802296C8: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x802296CC: jal         0x8009A3B4
    // 0x802296D0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x802296D0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x802296D4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802296D8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802296DC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802296E0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802296E4: lw          $v0, -0x199C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X199C);
    // 0x802296E8: jalr        $v0
    // 0x802296EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x802296EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x802296F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802296F4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802296F8: jr          $ra
    // 0x802296FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802296FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225378_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225378: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022537C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225380: jal         0x8006033C
    // 0x80225384: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80225384: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    after_0:
    // 0x80225388: bne         $v0, $zero, L_802253B4
    if (ctx->r2 != 0) {
        // 0x8022538C: nop
    
            goto L_802253B4;
    }
    // 0x8022538C: nop

    // 0x80225390: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80225394: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x80225398: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022539C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802253A0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802253A4: lw          $v0, -0x2484($at)
    ctx->r2 = MEM_W(ctx->r1, -0X2484);
    // 0x802253A8: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x802253AC: jalr        $v0
    // 0x802253B0: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x802253B0: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    after_1:
L_802253B4:
    // 0x802253B4: jal         0x8006033C
    // 0x802253B8: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x802253B8: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    after_2:
    // 0x802253BC: beq         $v0, $zero, L_802253FC
    if (ctx->r2 == 0) {
        // 0x802253C0: nop
    
            goto L_802253FC;
    }
    // 0x802253C0: nop

    // 0x802253C4: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802253C8: lb          $v1, -0x3BC6($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC6);
    // 0x802253CC: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802253D0: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x802253D4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802253D8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802253DC: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x802253E0: lw          $v1, -0x24C4($at)
    ctx->r3 = MEM_W(ctx->r1, -0X24C4);
    // 0x802253E4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802253E8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802253EC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x802253F0: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x802253F4: jalr        $v0
    // 0x802253F8: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x802253F8: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    after_3:
L_802253FC:
    // 0x802253FC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225400: jr          $ra
    // 0x80225404: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225404: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226D5C_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226D5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226D60: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226D64: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226D68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226D6C: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x80226D70: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226D74: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80226D78: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226D7C: bne         $v0, $zero, L_80226DA4
    if (ctx->r2 != 0) {
        // 0x80226D80: nop
    
            goto L_80226DA4;
    }
    // 0x80226D80: nop

    // 0x80226D84: jal         0x802289E0
    // 0x80226D88: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_802289E0_ovl19(rdram, ctx);
        goto after_0;
    // 0x80226D88: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_0:
    // 0x80226D8C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80226D90: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80226D94: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x80226D98: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80226D9C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80226DA0: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_80226DA4:
    // 0x80226DA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226DA8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226DAC: jr          $ra
    // 0x80226DB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226DB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022AA4C_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AA4C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022AA50: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022AA54: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022AA58: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022AA5C: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022AA60: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x8022AA64: addiu       $a0, $s2, 0xC4
    ctx->r4 = ADD32(ctx->r18, 0XC4);
    // 0x8022AA68: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x8022AA6C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022AA70: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022AA74: jal         0x8009A3B4
    // 0x8022AA78: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022AA78: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    after_0:
    // 0x8022AA7C: addiu       $a0, $s0, 0xC4
    ctx->r4 = ADD32(ctx->r16, 0XC4);
    // 0x8022AA80: addiu       $a1, $s0, 0x188
    ctx->r5 = ADD32(ctx->r16, 0X188);
    // 0x8022AA84: jal         0x8009A3B4
    // 0x8022AA88: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022AA88: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8022AA8C: lui         $v0, 0x7F
    ctx->r2 = S32(0X7F << 16);
    // 0x8022AA90: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x8022AA94: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8022AA98: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022AA9C: bne         $v0, $zero, L_8022AB30
    if (ctx->r2 != 0) {
        // 0x8022AAA0: addiu       $s1, $s0, 0x2E8
        ctx->r17 = ADD32(ctx->r16, 0X2E8);
            goto L_8022AB30;
    }
    // 0x8022AAA0: addiu       $s1, $s0, 0x2E8
    ctx->r17 = ADD32(ctx->r16, 0X2E8);
    // 0x8022AAA4: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x8022AAA8: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8022AAAC: beq         $v0, $zero, L_8022AB30
    if (ctx->r2 == 0) {
        // 0x8022AAB0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022AB30;
    }
    // 0x8022AAB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022AAB4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022AAB8: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022AABC: lhu         $v1, 0x32C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X32C);
    // 0x8022AAC0: addiu       $a2, $s0, 0x310
    ctx->r6 = ADD32(ctx->r16, 0X310);
    // 0x8022AAC4: addiu       $a3, $s0, 0x318
    ctx->r7 = ADD32(ctx->r16, 0X318);
    // 0x8022AAC8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022AACC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022AAD0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022AAD4: jal         0x8004E150
    // 0x8022AAD8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8004E150_29550(rdram, ctx);
        goto after_2;
    // 0x8022AAD8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_2:
    // 0x8022AADC: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022AAE0: beq         $v0, $zero, L_8022AB18
    if (ctx->r2 == 0) {
        // 0x8022AAE4: nop
    
            goto L_8022AB18;
    }
    // 0x8022AAE4: nop

    // 0x8022AAE8: lbu         $v0, 0x33B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X33B);
    // 0x8022AAEC: bne         $v0, $zero, L_8022AB24
    if (ctx->r2 != 0) {
        // 0x8022AAF0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022AB24;
    }
    // 0x8022AAF0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022AAF4: lbu         $a0, 0x9($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X9);
    // 0x8022AAF8: lbu         $a1, 0xA($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XA);
    // 0x8022AAFC: lbu         $v1, 0x336($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X336);
    // 0x8022AB00: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022AB04: ori         $v1, $v1, 0x4
    ctx->r3 = ctx->r3 | 0X4;
    // 0x8022AB08: sb          $a0, 0x334($s0)
    MEM_B(0X334, ctx->r16) = ctx->r4;
    // 0x8022AB0C: sb          $a1, 0x335($s0)
    MEM_B(0X335, ctx->r16) = ctx->r5;
    // 0x8022AB10: j           L_8022AB30
    // 0x8022AB14: sb          $v1, 0x336($s0)
    MEM_B(0X336, ctx->r16) = ctx->r3;
        goto L_8022AB30;
    // 0x8022AB14: sb          $v1, 0x336($s0)
    MEM_B(0X336, ctx->r16) = ctx->r3;
L_8022AB18:
    // 0x8022AB18: lbu         $v0, 0x33B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X33B);
    // 0x8022AB1C: beq         $v0, $zero, L_8022AB30
    if (ctx->r2 == 0) {
        // 0x8022AB20: nop
    
            goto L_8022AB30;
    }
    // 0x8022AB20: nop

L_8022AB24:
    // 0x8022AB24: lbu         $v0, 0x53($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X53);
    // 0x8022AB28: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022AB2C: sb          $v0, 0x53($s1)
    MEM_B(0X53, ctx->r17) = ctx->r2;
L_8022AB30:
    // 0x8022AB30: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022AB34: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022AB38: beq         $v1, $v0, L_8022ABA4
    if (ctx->r3 == ctx->r2) {
        // 0x8022AB3C: addiu       $a0, $s0, 0xC4
        ctx->r4 = ADD32(ctx->r16, 0XC4);
            goto L_8022ABA4;
    }
    // 0x8022AB3C: addiu       $a0, $s0, 0xC4
    ctx->r4 = ADD32(ctx->r16, 0XC4);
    // 0x8022AB40: addiu       $a1, $s0, 0x180
    ctx->r5 = ADD32(ctx->r16, 0X180);
    // 0x8022AB44: jal         0x8009A3B4
    // 0x8022AB48: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022AB48: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x8022AB4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022AB50: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022AB54: addiu       $a2, $s1, 0x28
    ctx->r6 = ADD32(ctx->r17, 0X28);
    // 0x8022AB58: jal         0x8004DF78
    // 0x8022AB5C: addiu       $a3, $s1, 0x30
    ctx->r7 = ADD32(ctx->r17, 0X30);
    func_8004DF78_29378(rdram, ctx);
        goto after_4;
    // 0x8022AB5C: addiu       $a3, $s1, 0x30
    ctx->r7 = ADD32(ctx->r17, 0X30);
    after_4:
    // 0x8022AB60: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022AB64: beq         $v0, $zero, L_8022AB94
    if (ctx->r2 == 0) {
        // 0x8022AB68: nop
    
            goto L_8022AB94;
    }
    // 0x8022AB68: nop

    // 0x8022AB6C: lbu         $v1, 0x4E($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X4E);
    // 0x8022AB70: andi        $v0, $v1, 0xA
    ctx->r2 = ctx->r3 & 0XA;
    // 0x8022AB74: bne         $v0, $zero, L_8022AB94
    if (ctx->r2 != 0) {
        // 0x8022AB78: ori         $v0, $v1, 0x2
        ctx->r2 = ctx->r3 | 0X2;
            goto L_8022AB94;
    }
    // 0x8022AB78: ori         $v0, $v1, 0x2
    ctx->r2 = ctx->r3 | 0X2;
    // 0x8022AB7C: sb          $v0, 0x4E($s1)
    MEM_B(0X4E, ctx->r17) = ctx->r2;
    // 0x8022AB80: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8022AB84: sb          $v0, 0x50($s1)
    MEM_B(0X50, ctx->r17) = ctx->r2;
    // 0x8022AB88: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022AB8C: sb          $v0, 0x4F($s1)
    MEM_B(0X4F, ctx->r17) = ctx->r2;
    // 0x8022AB90: sb          $zero, 0x51($s1)
    MEM_B(0X51, ctx->r17) = 0;
L_8022AB94:
    // 0x8022AB94: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022AB98: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022AB9C: bne         $v1, $v0, L_8022ABD4
    if (ctx->r3 != ctx->r2) {
        // 0x8022ABA0: nop
    
            goto L_8022ABD4;
    }
    // 0x8022ABA0: nop

L_8022ABA4:
    // 0x8022ABA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022ABA8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022ABAC: lbu         $v1, 0x4E($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X4E);
    // 0x8022ABB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022ABB4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022ABB8: sb          $v0, 0x52($s1)
    MEM_B(0X52, ctx->r17) = ctx->r2;
    // 0x8022ABBC: sb          $zero, 0x53($s1)
    MEM_B(0X53, ctx->r17) = 0;
    // 0x8022ABC0: andi        $v1, $v1, 0xF5
    ctx->r3 = ctx->r3 & 0XF5;
    // 0x8022ABC4: jal         0x8022A434
    // 0x8022ABC8: sb          $v1, 0x4E($s1)
    MEM_B(0X4E, ctx->r17) = ctx->r3;
    func_8022A434_ovl19(rdram, ctx);
        goto after_5;
    // 0x8022ABC8: sb          $v1, 0x4E($s1)
    MEM_B(0X4E, ctx->r17) = ctx->r3;
    after_5:
    // 0x8022ABCC: j           L_8022ABDC
    // 0x8022ABD0: nop

        goto L_8022ABDC;
    // 0x8022ABD0: nop

L_8022ABD4:
    // 0x8022ABD4: jal         0x8022ABF4
    // 0x8022ABD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022ABF4_ovl19(rdram, ctx);
        goto after_6;
    // 0x8022ABD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_8022ABDC:
    // 0x8022ABDC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022ABE0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022ABE4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022ABE8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022ABEC: jr          $ra
    // 0x8022ABF0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022ABF0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022694C_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022694C: lh          $v0, 0x350($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X350);
    // 0x80226950: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80226954: beq         $v0, $zero, L_80226970
    if (ctx->r2 == 0) {
        // 0x80226958: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80226970;
    }
    // 0x80226958: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022695C: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80226960: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x80226964: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226968: bne         $v0, $zero, L_8022699C
    if (ctx->r2 != 0) {
        // 0x8022696C: nop
    
            goto L_8022699C;
    }
    // 0x8022696C: nop

L_80226970:
    // 0x80226970: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x80226974: bgez        $v0, L_8022699C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80226978: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_8022699C;
    }
    // 0x80226978: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x8022697C: lbu         $v1, 0x2($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X2);
    // 0x80226980: bnel        $v1, $v0, L_8022699C
    if (ctx->r3 != ctx->r2) {
        // 0x80226984: sb          $zero, 0xA($a0)
        MEM_B(0XA, ctx->r4) = 0;
            goto L_8022699C;
    }
    goto skip_0;
    // 0x80226984: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    skip_0:
    // 0x80226988: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8022698C: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
    // 0x80226990: sb          $v1, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r3;
    // 0x80226994: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226998: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_8022699C:
    // 0x8022699C: jr          $ra
    // 0x802269A0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x802269A0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8022A970_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A970: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A974: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A978: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A97C: jal         0x8004F144
    // 0x8022A980: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8022A980: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8022A984: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022A988: beq         $v1, $zero, L_8022A9C0
    if (ctx->r3 == 0) {
        // 0x8022A98C: addiu       $a0, $v1, 0x38
        ctx->r4 = ADD32(ctx->r3, 0X38);
            goto L_8022A9C0;
    }
    // 0x8022A98C: addiu       $a0, $v1, 0x38
    ctx->r4 = ADD32(ctx->r3, 0X38);
    // 0x8022A990: addiu       $a1, $s0, 0x188
    ctx->r5 = ADD32(ctx->r16, 0X188);
    // 0x8022A994: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022A998: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022A99C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022A9A0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022A9A4: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8022A9A8: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022A9AC: jal         0x8009A3B4
    // 0x8022A9B0: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022A9B0: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    after_1:
    // 0x8022A9B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A9B8: jal         0x8007A1B8
    // 0x8022A9BC: addiu       $a1, $s0, 0x180
    ctx->r5 = ADD32(ctx->r16, 0X180);
    func_8007A1B8_555B8(rdram, ctx);
        goto after_2;
    // 0x8022A9BC: addiu       $a1, $s0, 0x180
    ctx->r5 = ADD32(ctx->r16, 0X180);
    after_2:
L_8022A9C0:
    // 0x8022A9C0: jal         0x80047B3C
    // 0x8022A9C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80047B3C_22F3C(rdram, ctx);
        goto after_3;
    // 0x8022A9C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022A9C8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022A9CC: addiu       $a1, $s0, 0x190
    ctx->r5 = ADD32(ctx->r16, 0X190);
    // 0x8022A9D0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022A9D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A9D8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022A9DC: sb          $zero, 0x2($s0)
    MEM_B(0X2, ctx->r16) = 0;
    // 0x8022A9E0: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x8022A9E4: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x8022A9E8: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x8022A9EC: jal         0x8009A3B4
    // 0x8022A9F0: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022A9F0: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    after_4:
    // 0x8022A9F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A9F8: addiu       $a1, $zero, -0x300
    ctx->r5 = ADD32(0, -0X300);
    // 0x8022A9FC: lh          $v0, 0x188($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X188);
    // 0x8022AA00: lh          $v1, 0x18A($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18A);
    // 0x8022AA04: lh          $a3, 0x18C($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X18C);
    // 0x8022AA08: addiu       $a2, $zero, -0x400
    ctx->r6 = ADD32(0, -0X400);
    // 0x8022AA0C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022AA10: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022AA14: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x8022AA18: sw          $a3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r7;
    // 0x8022AA1C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022AA20: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8022AA24: jal         0x8004DA90
    // 0x8022AA28: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_5;
    // 0x8022AA28: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    after_5:
    // 0x8022AA2C: addiu       $a0, $s0, 0x54
    ctx->r4 = ADD32(ctx->r16, 0X54);
    // 0x8022AA30: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8022AA34: jal         0x8009A3B4
    // 0x8022AA38: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8022AA38: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x8022AA3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022AA40: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022AA44: jr          $ra
    // 0x8022AA48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022AA48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022687C_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022687C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226880: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226884: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80226888: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022688C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226890: lbu         $s0, 0xE($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0XE);
    // 0x80226894: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x80226898: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022689C: addiu       $v0, $v0, -0x1BB4
    ctx->r2 = ADD32(ctx->r2, -0X1BB4);
    // 0x802268A0: andi        $s0, $s0, 0x3
    ctx->r16 = ctx->r16 & 0X3;
    // 0x802268A4: sll         $s0, $s0, 4
    ctx->r16 = S32(ctx->r16 << 4);
    // 0x802268A8: jal         0x80228A78
    // 0x802268AC: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    func_80228A78_ovl19(rdram, ctx);
        goto after_0;
    // 0x802268AC: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    after_0:
    // 0x802268B0: jal         0x800A3450
    // 0x802268B4: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x802268B4: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    after_1:
    // 0x802268B8: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x802268BC: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x802268C0: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x802268C4: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x802268C8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802268CC: sh          $v1, 0x350($s1)
    MEM_H(0X350, ctx->r17) = ctx->r3;
    // 0x802268D0: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x802268D4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802268D8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802268DC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802268E0: jr          $ra
    // 0x802268E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802268E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80227FB8_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227FB8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227FBC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227FC0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227FC4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80227FC8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227FCC: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80227FD0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80227FD4: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x80227FD8: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x80227FDC: bne         $v0, $zero, L_80228038
    if (ctx->r2 != 0) {
        // 0x80227FE0: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_80228038;
    }
    // 0x80227FE0: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80227FE4: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80227FE8: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x80227FEC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80227FF0: jal         0x8004F820
    // 0x80227FF4: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80227FF4: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_0:
    // 0x80227FF8: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80227FFC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80228000: lw          $a0, 0x3FF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3FF0);
    // 0x80228004: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80228008: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022800C: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x80228010: and         $a0, $a0, $v0
    ctx->r4 = ctx->r4 & ctx->r2;
    // 0x80228014: beq         $a0, $zero, L_80228038
    if (ctx->r4 == 0) {
        // 0x80228018: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80228038;
    }
    // 0x80228018: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022801C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80228020: jal         0x802289E0
    // 0x80228024: nop

    func_802289E0_ovl19(rdram, ctx);
        goto after_1;
    // 0x80228024: nop

    after_1:
    // 0x80228028: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022802C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80228030: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80228034: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
L_80228038:
    // 0x80228038: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022803C: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x80228040: bne         $v0, $zero, L_80228064
    if (ctx->r2 != 0) {
        // 0x80228044: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_80228064;
    }
    // 0x80228044: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80228048: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022804C: sb          $v1, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r3;
    // 0x80228050: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x80228054: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x80228058: jal         0x80228A78
    // 0x8022805C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_80228A78_ovl19(rdram, ctx);
        goto after_2;
    // 0x8022805C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_2:
    // 0x80228060: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80228064:
    // 0x80228064: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80228068: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022806C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228070: jr          $ra
    // 0x80228074: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80228074: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225670_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225670: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225674: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225678: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022567C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225680: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80225684: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80225688: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022568C: jal         0x8004D5D4
    // 0x80225690: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80225690: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80225694: addiu       $a0, $s0, 0x36C
    ctx->r4 = ADD32(ctx->r16, 0X36C);
    // 0x80225698: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022569C: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    // 0x802256A0: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802256A4: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x802256A8: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x802256AC: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x802256B0: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x802256B4: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x802256B8: addiu       $v0, $zero, 0x10E
    ctx->r2 = ADD32(0, 0X10E);
    // 0x802256BC: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x802256C0: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x802256C4: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x802256C8: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x802256CC: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x802256D0: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x802256D4: sw          $zero, 0x34C($s0)
    MEM_W(0X34C, ctx->r16) = 0;
    // 0x802256D8: sw          $zero, 0x350($s0)
    MEM_W(0X350, ctx->r16) = 0;
    // 0x802256DC: sw          $zero, 0x35C($s0)
    MEM_W(0X35C, ctx->r16) = 0;
    // 0x802256E0: sw          $zero, 0x360($s0)
    MEM_W(0X360, ctx->r16) = 0;
    // 0x802256E4: jal         0x800540BC
    // 0x802256E8: sh          $zero, 0x37C($s0)
    MEM_H(0X37C, ctx->r16) = 0;
    func_800540BC_2F4BC(rdram, ctx);
        goto after_1;
    // 0x802256E8: sh          $zero, 0x37C($s0)
    MEM_H(0X37C, ctx->r16) = 0;
    after_1:
    // 0x802256EC: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x802256F0: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802256F4: lw          $a0, 0x298($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X298);
    // 0x802256F8: addiu       $v1, $zero, 0x12C
    ctx->r3 = ADD32(0, 0X12C);
    // 0x802256FC: sh          $v1, 0x37E($s0)
    MEM_H(0X37E, ctx->r16) = ctx->r3;
    // 0x80225700: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225704: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80225708: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022570C: lbu         $a0, 0x3($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X3);
    // 0x80225710: lbu         $v1, 0x18($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X18);
    // 0x80225714: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225718: addiu       $v0, $v0, -0x2180
    ctx->r2 = ADD32(ctx->r2, -0X2180);
    // 0x8022571C: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x80225720: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225724: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x80225728: sh          $v1, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r3;
    // 0x8022572C: sh          $v1, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r3;
    // 0x80225730: beq         $a0, $v0, L_8022577C
    if (ctx->r4 == ctx->r2) {
        // 0x80225734: sh          $v1, 0xB2($s0)
        MEM_H(0XB2, ctx->r16) = ctx->r3;
            goto L_8022577C;
    }
    // 0x80225734: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    // 0x80225738: slti        $v0, $a0, 0x2
    ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x8022573C: beql        $v0, $zero, L_80225754
    if (ctx->r2 == 0) {
        // 0x80225740: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80225754;
    }
    goto skip_0;
    // 0x80225740: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80225744: beq         $a0, $zero, L_80225764
    if (ctx->r4 == 0) {
        // 0x80225748: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80225764;
    }
    // 0x80225748: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022574C: j           L_802257D0
    // 0x80225750: nop

        goto L_802257D0;
    // 0x80225750: nop

L_80225754:
    // 0x80225754: beq         $a0, $v0, L_802257B0
    if (ctx->r4 == ctx->r2) {
        // 0x80225758: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802257B0;
    }
    // 0x80225758: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022575C: j           L_802257D0
    // 0x80225760: nop

        goto L_802257D0;
    // 0x80225760: nop

L_80225764:
    // 0x80225764: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80225768: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022576C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225770: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80225774: j           L_802257C8
    // 0x80225778: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
        goto L_802257C8;
    // 0x80225778: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_8022577C:
    // 0x8022577C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80225780: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80225784: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80225788: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022578C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80225790: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225794: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80225798: jal         0x80050294
    // 0x8022579C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x8022579C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    after_2:
    // 0x802257A0: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x802257A4: andi        $v0, $v0, 0xFEFF
    ctx->r2 = ctx->r2 & 0XFEFF;
    // 0x802257A8: j           L_802257D0
    // 0x802257AC: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
        goto L_802257D0;
    // 0x802257AC: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
L_802257B0:
    // 0x802257B0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802257B4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802257B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802257BC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802257C0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802257C4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_802257C8:
    // 0x802257C8: jal         0x80050294
    // 0x802257CC: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x802257CC: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    after_3:
L_802257D0:
    // 0x802257D0: jal         0x802257E8
    // 0x802257D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802257E8_ovl19(rdram, ctx);
        goto after_4;
    // 0x802257D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x802257D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802257DC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802257E0: jr          $ra
    // 0x802257E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802257E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B594_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B594: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022B598: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B59C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B5A0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022B5A4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022B5A8: lbu         $v0, 0x36A($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X36A);
    // 0x8022B5AC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022B5B0: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x8022B5B4: andi        $v0, $v0, 0x14
    ctx->r2 = ctx->r2 & 0X14;
    // 0x8022B5B8: beq         $v0, $zero, L_8022B604
    if (ctx->r2 == 0) {
        // 0x8022B5BC: addiu       $s1, $s0, 0x308
        ctx->r17 = ADD32(ctx->r16, 0X308);
            goto L_8022B604;
    }
    // 0x8022B5BC: addiu       $s1, $s0, 0x308
    ctx->r17 = ADD32(ctx->r16, 0X308);
    // 0x8022B5C0: lbu         $v0, 0x36E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X36E);
    // 0x8022B5C4: sltiu       $v0, $v0, 0x3C
    ctx->r2 = ctx->r2 < 0X3C ? 1 : 0;
    // 0x8022B5C8: beq         $v0, $zero, L_8022B604
    if (ctx->r2 == 0) {
        // 0x8022B5CC: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022B604;
    }
    // 0x8022B5CC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022B5D0: lhu         $a2, 0x56($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B5D4: lhu         $v0, 0x322($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X322);
    // 0x8022B5D8: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    // 0x8022B5DC: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x8022B5E0: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8022B5E4: jal         0x8004F820
    // 0x8022B5E8: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022B5E8: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_0:
    // 0x8022B5EC: lhu         $v1, 0x322($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X322);
    // 0x8022B5F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B5F4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022B5F8: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022B5FC: jal         0x8022B740
    // 0x8022B600: sh          $v1, 0x322($s0)
    MEM_H(0X322, ctx->r16) = ctx->r3;
    func_8022B740_ovl19(rdram, ctx);
        goto after_1;
    // 0x8022B600: sh          $v1, 0x322($s0)
    MEM_H(0X322, ctx->r16) = ctx->r3;
    after_1:
L_8022B604:
    // 0x8022B604: lbu         $v0, 0x66($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X66);
    // 0x8022B608: bne         $v0, $zero, L_8022B63C
    if (ctx->r2 != 0) {
        // 0x8022B60C: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8022B63C;
    }
    // 0x8022B60C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022B610: lb          $v0, 0x65($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X65);
    // 0x8022B614: beq         $v0, $zero, L_8022B624
    if (ctx->r2 == 0) {
        // 0x8022B618: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022B624;
    }
    // 0x8022B618: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B61C: j           L_8022B640
    // 0x8022B620: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022B640;
    // 0x8022B620: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022B624:
    // 0x8022B624: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022B628: sb          $v0, 0x65($s1)
    MEM_B(0X65, ctx->r17) = ctx->r2;
    // 0x8022B62C: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8022B630: sb          $v0, 0x64($s1)
    MEM_B(0X64, ctx->r17) = ctx->r2;
    // 0x8022B634: j           L_8022B640
    // 0x8022B638: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
        goto L_8022B640;
    // 0x8022B638: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_8022B63C:
    // 0x8022B63C: sb          $v0, 0x66($s1)
    MEM_B(0X66, ctx->r17) = ctx->r2;
L_8022B640:
    // 0x8022B640: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022B644: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022B648: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B64C: jr          $ra
    // 0x8022B650: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022B650: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80229104_ovl19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229104: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80229108: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022910C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229110: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80229114: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80229118: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022911C: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80229120: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80229124: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80229128: beq         $v0, $zero, L_802292E4
    if (ctx->r2 == 0) {
        // 0x8022912C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_802292E4;
    }
    // 0x8022912C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80229130: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80229134: addu        $at, $at, $v0
    gpr jr_addend_8022913C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229138: lw          $v0, -0x1728($at)
    ctx->r2 = ADD32(ctx->r1, -0X1728);
    // 0x8022913C: jr          $v0
    // 0x80229140: nop

    switch (jr_addend_8022913C >> 2) {
        case 0: goto L_80229144; break;
        case 1: goto L_80229204; break;
        case 2: goto L_80229220; break;
        case 3: goto L_80229288; break;
        case 4: goto L_802292B4; break;
        default: switch_error(__func__, 0x8022913C, 0x8022E8D8);
    }
    // 0x80229140: nop

L_80229144:
    // 0x80229144: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80229148: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022914C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80229150: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80229154: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80229158: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022915C: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80229160: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80229164: jal         0x8004D5D4
    // 0x80229168: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80229168: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022916C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229170: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80229174: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80229178: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022917C: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80229180: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80229184: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80229188: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022918C: addiu       $v0, $v0, -0x19B0
    ctx->r2 = ADD32(ctx->r2, -0X19B0);
    // 0x80229190: jal         0x8003E934
    // 0x80229194: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x80229194: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    after_1:
    // 0x80229198: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022919C: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x802291A0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802291A4: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x802291A8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x802291AC: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    // 0x802291B0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802291B4: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x802291B8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802291BC: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x802291C0: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x802291C4: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x802291C8: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x802291CC: sh          $zero, 0x362($s0)
    MEM_H(0X362, ctx->r16) = 0;
    // 0x802291D0: sh          $zero, 0x364($s0)
    MEM_H(0X364, ctx->r16) = 0;
    // 0x802291D4: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
    // 0x802291D8: sw          $zero, 0x348($s0)
    MEM_W(0X348, ctx->r16) = 0;
    // 0x802291DC: sw          $zero, 0x34C($s0)
    MEM_W(0X34C, ctx->r16) = 0;
    // 0x802291E0: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x802291E4: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x802291E8: sw          $zero, 0x350($s0)
    MEM_W(0X350, ctx->r16) = 0;
    // 0x802291EC: sw          $v0, 0x354($s0)
    MEM_W(0X354, ctx->r16) = ctx->r2;
    // 0x802291F0: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x802291F4: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x802291F8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802291FC: j           L_802292E4
    // 0x80229200: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
        goto L_802292E4;
    // 0x80229200: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
L_80229204:
    // 0x80229204: jal         0x80229490
    // 0x80229208: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80229490_ovl19(rdram, ctx);
        goto after_2;
    // 0x80229208: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022920C: beq         $v0, $zero, L_802292E8
    if (ctx->r2 == 0) {
        // 0x80229210: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802292E8;
    }
    // 0x80229210: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229214: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80229218: j           L_802292E0
    // 0x8022921C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_802292E0;
    // 0x8022921C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80229220:
    // 0x80229220: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80229224: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x80229228: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022922C: jal         0x8004F820
    // 0x80229230: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x80229230: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_3:
    // 0x80229234: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80229238: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022923C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80229240: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229244: bne         $v0, $zero, L_802292E4
    if (ctx->r2 != 0) {
        // 0x80229248: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_802292E4;
    }
    // 0x80229248: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022924C: jal         0x8003516C
    // 0x80229250: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_4;
    // 0x80229250: nop

    after_4:
    // 0x80229254: bne         $v0, $zero, L_802292E8
    if (ctx->r2 != 0) {
        // 0x80229258: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802292E8;
    }
    // 0x80229258: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022925C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80229260: jal         0x800616FC
    // 0x80229264: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_5;
    // 0x80229264: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    after_5:
    // 0x80229268: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022926C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80229270: jal         0x80050294
    // 0x80229274: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_6;
    // 0x80229274: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_6:
    // 0x80229278: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022927C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80229280: j           L_802292E0
    // 0x80229284: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_802292E0;
    // 0x80229284: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80229288:
    // 0x80229288: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022928C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80229290: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80229294: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80229298: bne         $v0, $zero, L_802292E8
    if (ctx->r2 != 0) {
        // 0x8022929C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802292E8;
    }
    // 0x8022929C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802292A0: jal         0x80034E3C
    // 0x802292A4: nop

    func_80034E3C_1023C(rdram, ctx);
        goto after_7;
    // 0x802292A4: nop

    after_7:
    // 0x802292A8: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802292AC: j           L_802292E0
    // 0x802292B0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_802292E0;
    // 0x802292B0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802292B4:
    // 0x802292B4: jal         0x8003516C
    // 0x802292B8: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_8;
    // 0x802292B8: nop

    after_8:
    // 0x802292BC: bne         $v0, $zero, L_802292E8
    if (ctx->r2 != 0) {
        // 0x802292C0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802292E8;
    }
    // 0x802292C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802292C4: lbu         $v0, 0xBD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XBD);
    // 0x802292C8: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x802292CC: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x802292D0: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x802292D4: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
    // 0x802292D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802292DC: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
L_802292E0:
    // 0x802292E0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_802292E4:
    // 0x802292E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_802292E8:
    // 0x802292E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802292EC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x802292F0: jal         0x80047284
    // 0x802292F4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_9;
    // 0x802292F4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_9:
    // 0x802292F8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802292FC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229300: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229304: jr          $ra
    // 0x80229308: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80229308: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
