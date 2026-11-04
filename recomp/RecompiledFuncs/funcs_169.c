#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80227634_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227634: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227638: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022763C: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x80227640: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227644: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80227648: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022764C: lw          $v0, -0x6744($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6744);
    // 0x80227650: jalr        $v0
    // 0x80227654: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80227654: nop

    after_0:
    // 0x80227658: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022765C: jr          $ra
    // 0x80227660: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227660: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80237220_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237220: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80237224: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80237228: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023722C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80237230: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80237234: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80237238: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023723C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80237240: jal         0x8009A3B4
    // 0x80237244: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80237244: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x80237248: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8023724C: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80237250: jal         0x8009A3B4
    // 0x80237254: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80237254: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80237258: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8023725C: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80237260: jal         0x8009A3B4
    // 0x80237264: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80237264: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80237268: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8023726C: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80237270: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80237274: lui         $s2, 0x801C
    ctx->r18 = S32(0X801C << 16);
    // 0x80237278: addiu       $s2, $s2, -0x3A50
    ctx->r18 = ADD32(ctx->r18, -0X3A50);
    // 0x8023727C: bne         $v0, $zero, L_802372EC
    if (ctx->r2 != 0) {
        // 0x80237280: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_802372EC;
    }
    // 0x80237280: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x80237284: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237288: jal         0x8004D5D4
    // 0x8023728C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_3;
    // 0x8023728C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x80237290: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237294: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80237298: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023729C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802372A0: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x802372A4: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x802372A8: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x802372AC: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x802372B0: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x802372B4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802372B8: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x802372BC: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x802372C0: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x802372C4: sh          $zero, 0x4E2($s0)
    MEM_H(0X4E2, ctx->r16) = 0;
    // 0x802372C8: jal         0x80237984
    // 0x802372CC: sh          $zero, 0x4E0($s0)
    MEM_H(0X4E0, ctx->r16) = 0;
    func_80237984_ovl27(rdram, ctx);
        goto after_4;
    // 0x802372CC: sh          $zero, 0x4E0($s0)
    MEM_H(0X4E0, ctx->r16) = 0;
    after_4:
    // 0x802372D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802372D4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802372D8: jal         0x8023795C
    // 0x802372DC: addiu       $a2, $zero, 0x1B
    ctx->r6 = ADD32(0, 0X1B);
    func_8023795C_ovl27(rdram, ctx);
        goto after_5;
    // 0x802372DC: addiu       $a2, $zero, 0x1B
    ctx->r6 = ADD32(0, 0X1B);
    after_5:
    // 0x802372E0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802372E4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802372E8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_802372EC:
    // 0x802372EC: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802372F0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802372F4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802372F8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802372FC: lw          $v0, -0x3D44($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3D44);
    // 0x80237300: jalr        $v0
    // 0x80237304: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_6;
    // 0x80237304: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x80237308: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8023730C: lbu         $v1, -0x3A48($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A48);
    // 0x80237310: sltiu       $v0, $v1, 0x12
    ctx->r2 = ctx->r3 < 0X12 ? 1 : 0;
    // 0x80237314: beq         $v0, $zero, L_8023792C
    if (ctx->r2 == 0) {
        // 0x80237318: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8023792C;
    }
    // 0x80237318: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8023731C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80237320: addu        $at, $at, $v0
    gpr jr_addend_80237328 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80237324: lw          $v0, -0x3818($at)
    ctx->r2 = ADD32(ctx->r1, -0X3818);
    // 0x80237328: jr          $v0
    // 0x8023732C: nop

    switch (jr_addend_80237328 >> 2) {
        case 0: goto L_80237330; break;
        case 1: goto L_8023745C; break;
        case 2: goto L_8023792C; break;
        case 3: goto L_802374CC; break;
        case 4: goto L_802374F8; break;
        case 5: goto L_8023792C; break;
        case 6: goto L_80237578; break;
        case 7: goto L_80237668; break;
        case 8: goto L_802376A4; break;
        case 9: goto L_80237794; break;
        case 10: goto L_8023792C; break;
        case 11: goto L_8023792C; break;
        case 12: goto L_8023792C; break;
        case 13: goto L_8023792C; break;
        case 14: goto L_8023792C; break;
        case 15: goto L_80237844; break;
        case 16: goto L_8023792C; break;
        case 17: goto L_802378DC; break;
        default: switch_error(__func__, 0x80237328, 0x8023C7E8);
    }
    // 0x8023732C: nop

L_80237330:
    // 0x80237330: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x80237334: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237338: bne         $v1, $v0, L_80237358
    if (ctx->r3 != ctx->r2) {
        // 0x8023733C: addiu       $v0, $zero, 0x32
        ctx->r2 = ADD32(0, 0X32);
            goto L_80237358;
    }
    // 0x8023733C: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x80237340: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237344: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80237348: jal         0x80237984
    // 0x8023734C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80237984_ovl27(rdram, ctx);
        goto after_7;
    // 0x8023734C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x80237350: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x80237354: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
L_80237358:
    // 0x80237358: bne         $v1, $v0, L_8023736C
    if (ctx->r3 != ctx->r2) {
        // 0x8023735C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023736C;
    }
    // 0x8023735C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237360: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80237364: jal         0x8023795C
    // 0x80237368: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8023795C_ovl27(rdram, ctx);
        goto after_8;
    // 0x80237368: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_8:
L_8023736C:
    // 0x8023736C: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x80237370: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x80237374: bne         $v1, $v0, L_80237394
    if (ctx->r3 != ctx->r2) {
        // 0x80237378: addiu       $v0, $zero, 0x5A
        ctx->r2 = ADD32(0, 0X5A);
            goto L_80237394;
    }
    // 0x80237378: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    // 0x8023737C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237380: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80237384: jal         0x8023795C
    // 0x80237388: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8023795C_ovl27(rdram, ctx);
        goto after_9;
    // 0x80237388: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_9:
    // 0x8023738C: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x80237390: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
L_80237394:
    // 0x80237394: bne         $v1, $v0, L_802373A8
    if (ctx->r3 != ctx->r2) {
        // 0x80237398: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802373A8;
    }
    // 0x80237398: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023739C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802373A0: jal         0x8023795C
    // 0x802373A4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8023795C_ovl27(rdram, ctx);
        goto after_10;
    // 0x802373A4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_10:
L_802373A8:
    // 0x802373A8: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x802373AC: addiu       $v0, $zero, 0x6E
    ctx->r2 = ADD32(0, 0X6E);
    // 0x802373B0: bne         $v1, $v0, L_802373D0
    if (ctx->r3 != ctx->r2) {
        // 0x802373B4: addiu       $v0, $zero, 0x82
        ctx->r2 = ADD32(0, 0X82);
            goto L_802373D0;
    }
    // 0x802373B4: addiu       $v0, $zero, 0x82
    ctx->r2 = ADD32(0, 0X82);
    // 0x802373B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802373BC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802373C0: jal         0x8023795C
    // 0x802373C4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8023795C_ovl27(rdram, ctx);
        goto after_11;
    // 0x802373C4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_11:
    // 0x802373C8: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x802373CC: addiu       $v0, $zero, 0x82
    ctx->r2 = ADD32(0, 0X82);
L_802373D0:
    // 0x802373D0: bne         $v1, $v0, L_802373E4
    if (ctx->r3 != ctx->r2) {
        // 0x802373D4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802373E4;
    }
    // 0x802373D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802373D8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802373DC: jal         0x8023795C
    // 0x802373E0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8023795C_ovl27(rdram, ctx);
        goto after_12;
    // 0x802373E0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_12:
L_802373E4:
    // 0x802373E4: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x802373E8: addiu       $v0, $zero, 0x96
    ctx->r2 = ADD32(0, 0X96);
    // 0x802373EC: bne         $v1, $v0, L_8023740C
    if (ctx->r3 != ctx->r2) {
        // 0x802373F0: addiu       $v0, $zero, 0xD2
        ctx->r2 = ADD32(0, 0XD2);
            goto L_8023740C;
    }
    // 0x802373F0: addiu       $v0, $zero, 0xD2
    ctx->r2 = ADD32(0, 0XD2);
    // 0x802373F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802373F8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802373FC: jal         0x8023795C
    // 0x80237400: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8023795C_ovl27(rdram, ctx);
        goto after_13;
    // 0x80237400: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_13:
    // 0x80237404: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x80237408: addiu       $v0, $zero, 0xD2
    ctx->r2 = ADD32(0, 0XD2);
L_8023740C:
    // 0x8023740C: bne         $v1, $v0, L_80237420
    if (ctx->r3 != ctx->r2) {
        // 0x80237410: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80237420;
    }
    // 0x80237410: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237414: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80237418: jal         0x8023795C
    // 0x8023741C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8023795C_ovl27(rdram, ctx);
        goto after_14;
    // 0x8023741C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_14:
L_80237420:
    // 0x80237420: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x80237424: addiu       $v0, $zero, 0xE6
    ctx->r2 = ADD32(0, 0XE6);
    // 0x80237428: bne         $v1, $v0, L_80237448
    if (ctx->r3 != ctx->r2) {
        // 0x8023742C: addiu       $v0, $zero, 0xFA
        ctx->r2 = ADD32(0, 0XFA);
            goto L_80237448;
    }
    // 0x8023742C: addiu       $v0, $zero, 0xFA
    ctx->r2 = ADD32(0, 0XFA);
    // 0x80237430: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237434: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80237438: jal         0x8023795C
    // 0x8023743C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8023795C_ovl27(rdram, ctx);
        goto after_15;
    // 0x8023743C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_15:
    // 0x80237440: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x80237444: addiu       $v0, $zero, 0xFA
    ctx->r2 = ADD32(0, 0XFA);
L_80237448:
    // 0x80237448: bne         $v1, $v0, L_80237930
    if (ctx->r3 != ctx->r2) {
        // 0x8023744C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80237930;
    }
    // 0x8023744C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237450: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80237454: j           L_80237924
    // 0x80237458: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
        goto L_80237924;
    // 0x80237458: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_8023745C:
    // 0x8023745C: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x80237460: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237464: bne         $v1, $v0, L_80237484
    if (ctx->r3 != ctx->r2) {
        // 0x80237468: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_80237484;
    }
    // 0x80237468: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8023746C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237470: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80237474: jal         0x8023795C
    // 0x80237478: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8023795C_ovl27(rdram, ctx);
        goto after_16;
    // 0x80237478: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_16:
    // 0x8023747C: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x80237480: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_80237484:
    // 0x80237484: bne         $v1, $v0, L_80237498
    if (ctx->r3 != ctx->r2) {
        // 0x80237488: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80237498;
    }
    // 0x80237488: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023748C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80237490: jal         0x8023795C
    // 0x80237494: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8023795C_ovl27(rdram, ctx);
        goto after_17;
    // 0x80237494: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_17:
L_80237498:
    // 0x80237498: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x8023749C: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x802374A0: bne         $v1, $v0, L_80237930
    if (ctx->r3 != ctx->r2) {
        // 0x802374A4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80237930;
    }
    // 0x802374A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802374A8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802374AC: jal         0x8023795C
    // 0x802374B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8023795C_ovl27(rdram, ctx);
        goto after_18;
    // 0x802374B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_18:
    // 0x802374B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802374B8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802374BC: jal         0x80237984
    // 0x802374C0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80237984_ovl27(rdram, ctx);
        goto after_19;
    // 0x802374C0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_19:
    // 0x802374C4: j           L_80237930
    // 0x802374C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_80237930;
    // 0x802374C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_802374CC:
    // 0x802374CC: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x802374D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802374D4: bne         $v1, $v0, L_80237930
    if (ctx->r3 != ctx->r2) {
        // 0x802374D8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80237930;
    }
    // 0x802374D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802374DC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802374E0: jal         0x80237984
    // 0x802374E4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_80237984_ovl27(rdram, ctx);
        goto after_20;
    // 0x802374E4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_20:
    // 0x802374E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802374EC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802374F0: j           L_80237924
    // 0x802374F4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
        goto L_80237924;
    // 0x802374F4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
L_802374F8:
    // 0x802374F8: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x802374FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237500: bne         $v1, $v0, L_80237530
    if (ctx->r3 != ctx->r2) {
        // 0x80237504: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_80237530;
    }
    // 0x80237504: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80237508: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023750C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80237510: jal         0x8023795C
    // 0x80237514: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8023795C_ovl27(rdram, ctx);
        goto after_21;
    // 0x80237514: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_21:
    // 0x80237518: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023751C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80237520: jal         0x80237984
    // 0x80237524: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_80237984_ovl27(rdram, ctx);
        goto after_22;
    // 0x80237524: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_22:
    // 0x80237528: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x8023752C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_80237530:
    // 0x80237530: bne         $v1, $v0, L_80237544
    if (ctx->r3 != ctx->r2) {
        // 0x80237534: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80237544;
    }
    // 0x80237534: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237538: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023753C: jal         0x8023795C
    // 0x80237540: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8023795C_ovl27(rdram, ctx);
        goto after_23;
    // 0x80237540: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_23:
L_80237544:
    // 0x80237544: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x80237548: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8023754C: bne         $v1, $v0, L_80237930
    if (ctx->r3 != ctx->r2) {
        // 0x80237550: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80237930;
    }
    // 0x80237550: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237554: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80237558: jal         0x8023795C
    // 0x8023755C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_8023795C_ovl27(rdram, ctx);
        goto after_24;
    // 0x8023755C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_24:
    // 0x80237560: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237564: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80237568: jal         0x80237984
    // 0x8023756C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80237984_ovl27(rdram, ctx);
        goto after_25;
    // 0x8023756C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_25:
    // 0x80237570: j           L_80237930
    // 0x80237574: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_80237930;
    // 0x80237574: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80237578:
    // 0x80237578: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x8023757C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237580: bne         $v1, $v0, L_802375A0
    if (ctx->r3 != ctx->r2) {
        // 0x80237584: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_802375A0;
    }
    // 0x80237584: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80237588: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023758C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80237590: jal         0x80237984
    // 0x80237594: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_80237984_ovl27(rdram, ctx);
        goto after_26;
    // 0x80237594: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_26:
    // 0x80237598: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x8023759C: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
L_802375A0:
    // 0x802375A0: bne         $v1, $v0, L_802375B4
    if (ctx->r3 != ctx->r2) {
        // 0x802375A4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802375B4;
    }
    // 0x802375A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802375A8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802375AC: jal         0x8023795C
    // 0x802375B0: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_8023795C_ovl27(rdram, ctx);
        goto after_27;
    // 0x802375B0: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_27:
L_802375B4:
    // 0x802375B4: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x802375B8: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x802375BC: bne         $v1, $v0, L_802375DC
    if (ctx->r3 != ctx->r2) {
        // 0x802375C0: addiu       $v0, $zero, 0x5A
        ctx->r2 = ADD32(0, 0X5A);
            goto L_802375DC;
    }
    // 0x802375C0: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    // 0x802375C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802375C8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802375CC: jal         0x8023795C
    // 0x802375D0: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    func_8023795C_ovl27(rdram, ctx);
        goto after_28;
    // 0x802375D0: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    after_28:
    // 0x802375D4: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x802375D8: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
L_802375DC:
    // 0x802375DC: bne         $v1, $v0, L_802375F0
    if (ctx->r3 != ctx->r2) {
        // 0x802375E0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802375F0;
    }
    // 0x802375E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802375E4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802375E8: jal         0x8023795C
    // 0x802375EC: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    func_8023795C_ovl27(rdram, ctx);
        goto after_29;
    // 0x802375EC: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    after_29:
L_802375F0:
    // 0x802375F0: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x802375F4: addiu       $v0, $zero, 0xC8
    ctx->r2 = ADD32(0, 0XC8);
    // 0x802375F8: bne         $v1, $v0, L_80237618
    if (ctx->r3 != ctx->r2) {
        // 0x802375FC: addiu       $v0, $zero, 0x118
        ctx->r2 = ADD32(0, 0X118);
            goto L_80237618;
    }
    // 0x802375FC: addiu       $v0, $zero, 0x118
    ctx->r2 = ADD32(0, 0X118);
    // 0x80237600: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237604: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80237608: jal         0x8023795C
    // 0x8023760C: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    func_8023795C_ovl27(rdram, ctx);
        goto after_30;
    // 0x8023760C: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    after_30:
    // 0x80237610: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x80237614: addiu       $v0, $zero, 0x118
    ctx->r2 = ADD32(0, 0X118);
L_80237618:
    // 0x80237618: bne         $v1, $v0, L_8023762C
    if (ctx->r3 != ctx->r2) {
        // 0x8023761C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023762C;
    }
    // 0x8023761C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237620: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80237624: jal         0x8023795C
    // 0x80237628: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    func_8023795C_ovl27(rdram, ctx);
        goto after_31;
    // 0x80237628: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    after_31:
L_8023762C:
    // 0x8023762C: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x80237630: addiu       $v0, $zero, 0x145
    ctx->r2 = ADD32(0, 0X145);
    // 0x80237634: bne         $v1, $v0, L_80237654
    if (ctx->r3 != ctx->r2) {
        // 0x80237638: addiu       $v0, $zero, 0x186
        ctx->r2 = ADD32(0, 0X186);
            goto L_80237654;
    }
    // 0x80237638: addiu       $v0, $zero, 0x186
    ctx->r2 = ADD32(0, 0X186);
    // 0x8023763C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237640: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80237644: jal         0x8023795C
    // 0x80237648: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    func_8023795C_ovl27(rdram, ctx);
        goto after_32;
    // 0x80237648: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    after_32:
    // 0x8023764C: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x80237650: addiu       $v0, $zero, 0x186
    ctx->r2 = ADD32(0, 0X186);
L_80237654:
    // 0x80237654: bne         $v1, $v0, L_80237930
    if (ctx->r3 != ctx->r2) {
        // 0x80237658: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80237930;
    }
    // 0x80237658: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023765C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80237660: j           L_80237924
    // 0x80237664: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
        goto L_80237924;
    // 0x80237664: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
L_80237668:
    // 0x80237668: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x8023766C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237670: bne         $v1, $v0, L_80237690
    if (ctx->r3 != ctx->r2) {
        // 0x80237674: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80237690;
    }
    // 0x80237674: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80237678: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023767C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80237680: jal         0x80237984
    // 0x80237684: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_80237984_ovl27(rdram, ctx);
        goto after_33;
    // 0x80237684: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_33:
    // 0x80237688: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x8023768C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_80237690:
    // 0x80237690: bne         $v1, $v0, L_80237930
    if (ctx->r3 != ctx->r2) {
        // 0x80237694: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80237930;
    }
    // 0x80237694: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237698: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023769C: j           L_80237924
    // 0x802376A0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
        goto L_80237924;
    // 0x802376A0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
L_802376A4:
    // 0x802376A4: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x802376A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802376AC: bne         $v1, $v0, L_802376CC
    if (ctx->r3 != ctx->r2) {
        // 0x802376B0: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_802376CC;
    }
    // 0x802376B0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802376B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802376B8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802376BC: jal         0x80237984
    // 0x802376C0: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_80237984_ovl27(rdram, ctx);
        goto after_34;
    // 0x802376C0: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_34:
    // 0x802376C4: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x802376C8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_802376CC:
    // 0x802376CC: bne         $v1, $v0, L_802376E0
    if (ctx->r3 != ctx->r2) {
        // 0x802376D0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802376E0;
    }
    // 0x802376D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802376D4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802376D8: jal         0x8023795C
    // 0x802376DC: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    func_8023795C_ovl27(rdram, ctx);
        goto after_35;
    // 0x802376DC: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_35:
L_802376E0:
    // 0x802376E0: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x802376E4: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x802376E8: bne         $v1, $v0, L_80237708
    if (ctx->r3 != ctx->r2) {
        // 0x802376EC: addiu       $v0, $zero, 0x46
        ctx->r2 = ADD32(0, 0X46);
            goto L_80237708;
    }
    // 0x802376EC: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x802376F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802376F4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802376F8: jal         0x8023795C
    // 0x802376FC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_8023795C_ovl27(rdram, ctx);
        goto after_36;
    // 0x802376FC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_36:
    // 0x80237700: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x80237704: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
L_80237708:
    // 0x80237708: bne         $v1, $v0, L_8023771C
    if (ctx->r3 != ctx->r2) {
        // 0x8023770C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023771C;
    }
    // 0x8023770C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237710: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80237714: jal         0x8023795C
    // 0x80237718: addiu       $a2, $zero, 0x15
    ctx->r6 = ADD32(0, 0X15);
    func_8023795C_ovl27(rdram, ctx);
        goto after_37;
    // 0x80237718: addiu       $a2, $zero, 0x15
    ctx->r6 = ADD32(0, 0X15);
    after_37:
L_8023771C:
    // 0x8023771C: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x80237720: addiu       $v0, $zero, 0xAA
    ctx->r2 = ADD32(0, 0XAA);
    // 0x80237724: bne         $v1, $v0, L_80237744
    if (ctx->r3 != ctx->r2) {
        // 0x80237728: addiu       $v0, $zero, 0xFA
        ctx->r2 = ADD32(0, 0XFA);
            goto L_80237744;
    }
    // 0x80237728: addiu       $v0, $zero, 0xFA
    ctx->r2 = ADD32(0, 0XFA);
    // 0x8023772C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237730: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80237734: jal         0x8023795C
    // 0x80237738: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    func_8023795C_ovl27(rdram, ctx);
        goto after_38;
    // 0x80237738: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    after_38:
    // 0x8023773C: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x80237740: addiu       $v0, $zero, 0xFA
    ctx->r2 = ADD32(0, 0XFA);
L_80237744:
    // 0x80237744: bne         $v1, $v0, L_80237758
    if (ctx->r3 != ctx->r2) {
        // 0x80237748: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80237758;
    }
    // 0x80237748: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023774C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80237750: jal         0x8023795C
    // 0x80237754: addiu       $a2, $zero, 0x17
    ctx->r6 = ADD32(0, 0X17);
    func_8023795C_ovl27(rdram, ctx);
        goto after_39;
    // 0x80237754: addiu       $a2, $zero, 0x17
    ctx->r6 = ADD32(0, 0X17);
    after_39:
L_80237758:
    // 0x80237758: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x8023775C: addiu       $v0, $zero, 0x12C
    ctx->r2 = ADD32(0, 0X12C);
    // 0x80237760: bne         $v1, $v0, L_80237780
    if (ctx->r3 != ctx->r2) {
        // 0x80237764: addiu       $v0, $zero, 0x17C
        ctx->r2 = ADD32(0, 0X17C);
            goto L_80237780;
    }
    // 0x80237764: addiu       $v0, $zero, 0x17C
    ctx->r2 = ADD32(0, 0X17C);
    // 0x80237768: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023776C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80237770: jal         0x8023795C
    // 0x80237774: addiu       $a2, $zero, 0x17
    ctx->r6 = ADD32(0, 0X17);
    func_8023795C_ovl27(rdram, ctx);
        goto after_40;
    // 0x80237774: addiu       $a2, $zero, 0x17
    ctx->r6 = ADD32(0, 0X17);
    after_40:
    // 0x80237778: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x8023777C: addiu       $v0, $zero, 0x17C
    ctx->r2 = ADD32(0, 0X17C);
L_80237780:
    // 0x80237780: bne         $v1, $v0, L_80237930
    if (ctx->r3 != ctx->r2) {
        // 0x80237784: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80237930;
    }
    // 0x80237784: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237788: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023778C: j           L_80237924
    // 0x80237790: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
        goto L_80237924;
    // 0x80237790: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
L_80237794:
    // 0x80237794: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x80237798: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023779C: bne         $v1, $v0, L_802377CC
    if (ctx->r3 != ctx->r2) {
        // 0x802377A0: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_802377CC;
    }
    // 0x802377A0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x802377A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802377A8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802377AC: jal         0x8023795C
    // 0x802377B0: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    func_8023795C_ovl27(rdram, ctx);
        goto after_41;
    // 0x802377B0: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_41:
    // 0x802377B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802377B8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802377BC: jal         0x80237984
    // 0x802377C0: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    func_80237984_ovl27(rdram, ctx);
        goto after_42;
    // 0x802377C0: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_42:
    // 0x802377C4: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x802377C8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_802377CC:
    // 0x802377CC: bne         $v1, $v0, L_802377E0
    if (ctx->r3 != ctx->r2) {
        // 0x802377D0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802377E0;
    }
    // 0x802377D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802377D4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802377D8: jal         0x8023795C
    // 0x802377DC: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_8023795C_ovl27(rdram, ctx);
        goto after_43;
    // 0x802377DC: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_43:
L_802377E0:
    // 0x802377E0: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x802377E4: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x802377E8: bne         $v1, $v0, L_80237818
    if (ctx->r3 != ctx->r2) {
        // 0x802377EC: addiu       $v0, $zero, 0x32
        ctx->r2 = ADD32(0, 0X32);
            goto L_80237818;
    }
    // 0x802377EC: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x802377F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802377F4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802377F8: jal         0x8023795C
    // 0x802377FC: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    func_8023795C_ovl27(rdram, ctx);
        goto after_44;
    // 0x802377FC: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_44:
    // 0x80237800: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237804: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80237808: jal         0x80237984
    // 0x8023780C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_80237984_ovl27(rdram, ctx);
        goto after_45;
    // 0x8023780C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_45:
    // 0x80237810: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x80237814: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
L_80237818:
    // 0x80237818: bne         $v1, $v0, L_80237930
    if (ctx->r3 != ctx->r2) {
        // 0x8023781C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80237930;
    }
    // 0x8023781C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237820: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80237824: jal         0x8023795C
    // 0x80237828: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    func_8023795C_ovl27(rdram, ctx);
        goto after_46;
    // 0x80237828: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    after_46:
    // 0x8023782C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237830: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80237834: jal         0x80237984
    // 0x80237838: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    func_80237984_ovl27(rdram, ctx);
        goto after_47;
    // 0x80237838: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_47:
    // 0x8023783C: j           L_80237930
    // 0x80237840: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_80237930;
    // 0x80237840: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80237844:
    // 0x80237844: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x80237848: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023784C: bne         $v1, $v0, L_8023787C
    if (ctx->r3 != ctx->r2) {
        // 0x80237850: addiu       $v0, $zero, 0x28
        ctx->r2 = ADD32(0, 0X28);
            goto L_8023787C;
    }
    // 0x80237850: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x80237854: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237858: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023785C: jal         0x8023795C
    // 0x80237860: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    func_8023795C_ovl27(rdram, ctx);
        goto after_48;
    // 0x80237860: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_48:
    // 0x80237864: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237868: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023786C: jal         0x80237984
    // 0x80237870: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    func_80237984_ovl27(rdram, ctx);
        goto after_49;
    // 0x80237870: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_49:
    // 0x80237874: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x80237878: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
L_8023787C:
    // 0x8023787C: bne         $v1, $v0, L_802378A0
    if (ctx->r3 != ctx->r2) {
        // 0x80237880: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802378A0;
    }
    // 0x80237880: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237884: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80237888: jal         0x8023795C
    // 0x8023788C: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    func_8023795C_ovl27(rdram, ctx);
        goto after_50;
    // 0x8023788C: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    after_50:
    // 0x80237890: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237894: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80237898: jal         0x80237984
    // 0x8023789C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_80237984_ovl27(rdram, ctx);
        goto after_51;
    // 0x8023789C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_51:
L_802378A0:
    // 0x802378A0: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x802378A4: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x802378A8: bne         $v1, $v0, L_802378C8
    if (ctx->r3 != ctx->r2) {
        // 0x802378AC: addiu       $v0, $zero, 0x6E
        ctx->r2 = ADD32(0, 0X6E);
            goto L_802378C8;
    }
    // 0x802378AC: addiu       $v0, $zero, 0x6E
    ctx->r2 = ADD32(0, 0X6E);
    // 0x802378B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802378B4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802378B8: jal         0x8023795C
    // 0x802378BC: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    func_8023795C_ovl27(rdram, ctx);
        goto after_52;
    // 0x802378BC: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    after_52:
    // 0x802378C0: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x802378C4: addiu       $v0, $zero, 0x6E
    ctx->r2 = ADD32(0, 0X6E);
L_802378C8:
    // 0x802378C8: bne         $v1, $v0, L_80237930
    if (ctx->r3 != ctx->r2) {
        // 0x802378CC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80237930;
    }
    // 0x802378CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802378D0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802378D4: j           L_80237924
    // 0x802378D8: addiu       $a2, $zero, 0x1A
    ctx->r6 = ADD32(0, 0X1A);
        goto L_80237924;
    // 0x802378D8: addiu       $a2, $zero, 0x1A
    ctx->r6 = ADD32(0, 0X1A);
L_802378DC:
    // 0x802378DC: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x802378E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802378E4: bne         $v1, $v0, L_80237914
    if (ctx->r3 != ctx->r2) {
        // 0x802378E8: addiu       $v0, $zero, 0xE6
        ctx->r2 = ADD32(0, 0XE6);
            goto L_80237914;
    }
    // 0x802378E8: addiu       $v0, $zero, 0xE6
    ctx->r2 = ADD32(0, 0XE6);
    // 0x802378EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802378F0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802378F4: jal         0x8023795C
    // 0x802378F8: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_8023795C_ovl27(rdram, ctx);
        goto after_53;
    // 0x802378F8: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_53:
    // 0x802378FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237900: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80237904: jal         0x80237984
    // 0x80237908: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    func_80237984_ovl27(rdram, ctx);
        goto after_54;
    // 0x80237908: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    after_54:
    // 0x8023790C: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x80237910: addiu       $v0, $zero, 0xE6
    ctx->r2 = ADD32(0, 0XE6);
L_80237914:
    // 0x80237914: bne         $v1, $v0, L_80237930
    if (ctx->r3 != ctx->r2) {
        // 0x80237918: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80237930;
    }
    // 0x80237918: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023791C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80237920: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
L_80237924:
    // 0x80237924: jal         0x8023795C
    // 0x80237928: nop

    func_8023795C_ovl27(rdram, ctx);
        goto after_55;
    // 0x80237928: nop

    after_55:
L_8023792C:
    // 0x8023792C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80237930:
    // 0x80237930: jal         0x802379AC
    // 0x80237934: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_802379AC_ovl27(rdram, ctx);
        goto after_56;
    // 0x80237934: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_56:
    // 0x80237938: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023793C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80237940: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x80237944: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80237948: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8023794C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80237950: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80237954: jr          $ra
    // 0x80237958: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80237958: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022A844_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A844: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022A848: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8022A84C: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x8022A850: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x8022A854: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8022A858: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8022A85C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8022A860: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8022A864: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022A868: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022A86C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022A870: lb          $v1, 0xA7($s3)
    ctx->r3 = MEM_B(ctx->r19, 0XA7);
    // 0x8022A874: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022A878: bne         $v1, $v0, L_8022AA30
    if (ctx->r3 != ctx->r2) {
        // 0x8022A87C: addiu       $s2, $s3, 0x2E8
        ctx->r18 = ADD32(ctx->r19, 0X2E8);
            goto L_8022AA30;
    }
    // 0x8022A87C: addiu       $s2, $s3, 0x2E8
    ctx->r18 = ADD32(ctx->r19, 0X2E8);
    // 0x8022A880: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022A884: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022A888: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x8022A88C: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    // 0x8022A890: addiu       $s5, $zero, 0x200
    ctx->r21 = ADD32(0, 0X200);
    // 0x8022A894: lbu         $v0, 0x9($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X9);
    // 0x8022A898: addiu       $s6, $zero, 0x3
    ctx->r22 = ADD32(0, 0X3);
    // 0x8022A89C: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x8022A8A0: sb          $v1, 0xAD($s3)
    MEM_B(0XAD, ctx->r19) = ctx->r3;
    // 0x8022A8A4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022A8A8: sb          $v1, 0xAC($s3)
    MEM_B(0XAC, ctx->r19) = ctx->r3;
    // 0x8022A8AC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A8B0: jal         0x800502EC
    // 0x8022A8B4: sb          $v0, 0x9($s3)
    MEM_B(0X9, ctx->r19) = ctx->r2;
    func_800502EC_2B6EC(rdram, ctx);
        goto after_0;
    // 0x8022A8B4: sb          $v0, 0x9($s3)
    MEM_B(0X9, ctx->r19) = ctx->r2;
    after_0:
    // 0x8022A8B8: addiu       $a0, $zero, 0x1B2
    ctx->r4 = ADD32(0, 0X1B2);
    // 0x8022A8BC: jal         0x8002A33C
    // 0x8022A8C0: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x8022A8C0: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    after_1:
L_8022A8C4:
    // 0x8022A8C4: jal         0x8004EFE4
    // 0x8022A8C8: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_2;
    // 0x8022A8C8: nop

    after_2:
    // 0x8022A8CC: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022A8D0: beq         $s1, $zero, L_8022A9D4
    if (ctx->r17 == 0) {
        // 0x8022A8D4: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8022A9D4;
    }
    // 0x8022A8D4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022A8D8: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    // 0x8022A8DC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022A8E0: addiu       $v0, $v0, 0x4D58
    ctx->r2 = ADD32(ctx->r2, 0X4D58);
    // 0x8022A8E4: sll         $a1, $s4, 24
    ctx->r5 = S32(ctx->r20 << 24);
    // 0x8022A8E8: sra         $a1, $a1, 24
    ctx->r5 = S32(SIGNED(ctx->r5) >> 24);
    // 0x8022A8EC: sll         $v1, $a1, 1
    ctx->r3 = S32(ctx->r5 << 1);
    // 0x8022A8F0: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8022A8F4: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x8022A8F8: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8022A8FC: addu        $v1, $s3, $v1
    ctx->r3 = ADD32(ctx->r19, ctx->r3);
    // 0x8022A900: sb          $s7, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r23;
    // 0x8022A904: sb          $zero, 0x2($s1)
    MEM_B(0X2, ctx->r17) = 0;
    // 0x8022A908: sw          $v0, 0xB8($s1)
    MEM_W(0XB8, ctx->r17) = ctx->r2;
    // 0x8022A90C: lhu         $v0, 0x180($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X180);
    // 0x8022A910: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
    // 0x8022A914: lhu         $v0, 0x182($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X182);
    // 0x8022A918: addiu       $v0, $v0, -0x50
    ctx->r2 = ADD32(ctx->r2, -0X50);
    // 0x8022A91C: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x8022A920: lhu         $v0, 0x184($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X184);
    // 0x8022A924: lh          $v1, 0x16($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X16);
    // 0x8022A928: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    // 0x8022A92C: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x8022A930: lh          $a0, 0x18($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X18);
    // 0x8022A934: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022A938: sw          $v1, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r3;
    // 0x8022A93C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A940: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022A944: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x8022A948: bne         $a1, $zero, L_8022A968
    if (ctx->r5 != 0) {
        // 0x8022A94C: sw          $a0, 0x24($s1)
        MEM_W(0X24, ctx->r17) = ctx->r4;
            goto L_8022A968;
    }
    // 0x8022A94C: sw          $a0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r4;
    // 0x8022A950: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8022A954: lhu         $a2, 0x56($s3)
    ctx->r6 = MEM_HU(ctx->r19, 0X56);
    // 0x8022A958: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x8022A95C: addiu       $a3, $zero, 0xA30
    ctx->r7 = ADD32(0, 0XA30);
    // 0x8022A960: j           L_8022A97C
    // 0x8022A964: addiu       $v0, $zero, 0xB0
    ctx->r2 = ADD32(0, 0XB0);
        goto L_8022A97C;
    // 0x8022A964: addiu       $v0, $zero, 0xB0
    ctx->r2 = ADD32(0, 0XB0);
L_8022A968:
    // 0x8022A968: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8022A96C: lhu         $a2, 0x56($s3)
    ctx->r6 = MEM_HU(ctx->r19, 0X56);
    // 0x8022A970: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x8022A974: addiu       $a3, $zero, 0xA30
    ctx->r7 = ADD32(0, 0XA30);
    // 0x8022A978: addiu       $v0, $zero, -0xB0
    ctx->r2 = ADD32(0, -0XB0);
L_8022A97C:
    // 0x8022A97C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8022A980: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022A984: jal         0x8004DBA0
    // 0x8022A988: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_3;
    // 0x8022A988: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_3:
    // 0x8022A98C: jal         0x800A3450
    // 0x8022A990: sh          $zero, 0x28($s2)
    MEM_H(0X28, ctx->r18) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x8022A990: sh          $zero, 0x28($s2)
    MEM_H(0X28, ctx->r18) = 0;
    after_4:
    // 0x8022A994: andi        $v0, $v0, 0x3FF
    ctx->r2 = ctx->r2 & 0X3FF;
    // 0x8022A998: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022A99C: jal         0x800A3450
    // 0x8022A9A0: sh          $v0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_5;
    // 0x8022A9A0: sh          $v0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r2;
    after_5:
    // 0x8022A9A4: addiu       $a0, $s2, 0x24
    ctx->r4 = ADD32(ctx->r18, 0X24);
    // 0x8022A9A8: addiu       $s0, $s1, 0x8C
    ctx->r16 = ADD32(ctx->r17, 0X8C);
    // 0x8022A9AC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022A9B0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022A9B4: jal         0x80031600
    // 0x8022A9B8: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
    func_80031600_CA00(rdram, ctx);
        goto after_6;
    // 0x8022A9B8: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
    after_6:
    // 0x8022A9BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A9C0: addiu       $a1, $s2, 0xC
    ctx->r5 = ADD32(ctx->r18, 0XC);
    // 0x8022A9C4: sw          $s5, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r21;
    // 0x8022A9C8: sw          $s5, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r21;
    // 0x8022A9CC: jal         0x80031DA8
    // 0x8022A9D0: sw          $s5, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r21;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_7;
    // 0x8022A9D0: sw          $s5, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r21;
    after_7:
L_8022A9D4:
    // 0x8022A9D4: jal         0x8004F144
    // 0x8022A9D8: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_8;
    // 0x8022A9D8: nop

    after_8:
    // 0x8022A9DC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022A9E0: beq         $v1, $zero, L_8022AA18
    if (ctx->r3 == 0) {
        // 0x8022A9E4: addiu       $v0, $s4, 0x1
        ctx->r2 = ADD32(ctx->r20, 0X1);
            goto L_8022AA18;
    }
    // 0x8022A9E4: addiu       $v0, $s4, 0x1
    ctx->r2 = ADD32(ctx->r20, 0X1);
    // 0x8022A9E8: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x8022A9EC: sb          $s6, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r22;
    // 0x8022A9F0: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8022A9F4: sb          $s6, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r22;
    // 0x8022A9F8: sb          $s7, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r23;
    // 0x8022A9FC: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x8022AA00: sh          $v0, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = ctx->r2;
    // 0x8022AA04: lhu         $v0, 0x16($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X16);
    // 0x8022AA08: sh          $v0, 0x1E($v1)
    MEM_H(0X1E, ctx->r3) = ctx->r2;
    // 0x8022AA0C: lhu         $v0, 0x18($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18);
    // 0x8022AA10: sh          $v0, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r2;
    // 0x8022AA14: addiu       $v0, $s4, 0x1
    ctx->r2 = ADD32(ctx->r20, 0X1);
L_8022AA18:
    // 0x8022AA18: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    // 0x8022AA1C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022AA20: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022AA24: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x8022AA28: bne         $v0, $zero, L_8022A8C4
    if (ctx->r2 != 0) {
        // 0x8022AA2C: nop
    
            goto L_8022A8C4;
    }
    // 0x8022AA2C: nop

L_8022AA30:
    // 0x8022AA30: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x8022AA34: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8022AA38: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8022AA3C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8022AA40: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8022AA44: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8022AA48: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022AA4C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022AA50: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022AA54: jr          $ra
    // 0x8022AA58: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8022AA58: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8023028C_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023028C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80230290: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80230294: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80230298: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x8023029C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x802302A0: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x802302A4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802302A8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802302AC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802302B0: lw          $v0, -0x5E84($at)
    ctx->r2 = MEM_W(ctx->r1, -0X5E84);
    // 0x802302B4: jalr        $v0
    // 0x802302B8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802302B8: nop

    after_0:
    // 0x802302BC: lbu         $v1, 0x3($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X3);
    // 0x802302C0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802302C4: beq         $v1, $v0, L_80230338
    if (ctx->r3 == ctx->r2) {
        // 0x802302C8: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80230338;
    }
    // 0x802302C8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802302CC: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x802302D0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802302D4: jal         0x80047284
    // 0x802302D8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_1;
    // 0x802302D8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x802302DC: addiu       $s0, $sp, 0x28
    ctx->r16 = ADD32(ctx->r29, 0X28);
    // 0x802302E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802302E4: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    // 0x802302E8: jal         0x8009A3B4
    // 0x802302EC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x802302EC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x802302F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802302F4: lhu         $v0, 0x2A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X2A);
    // 0x802302F8: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x802302FC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80230300: addiu       $v0, $v0, -0x2D
    ctx->r2 = ADD32(ctx->r2, -0X2D);
    // 0x80230304: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x80230308: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x8023030C: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80230310: addiu       $v0, $s1, 0x4C
    ctx->r2 = ADD32(ctx->r17, 0X4C);
    // 0x80230314: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80230318: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x8023031C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80230320: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80230324: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80230328: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8023032C: jal         0x80051E18
    // 0x80230330: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_3;
    // 0x80230330: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_3:
    // 0x80230334: sw          $zero, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = 0;
L_80230338:
    // 0x80230338: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x8023033C: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80230340: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80230344: jr          $ra
    // 0x80230348: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80230348: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8023065C_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023065C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80230660: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80230664: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80230668: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023066C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230670: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x80230674: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80230678: beq         $v0, $zero, L_802307B0
    if (ctx->r2 == 0) {
        // 0x8023067C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_802307B0;
    }
    // 0x8023067C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80230680: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80230684: addu        $at, $at, $v0
    gpr jr_addend_8023068C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80230688: lw          $v0, -0x3910($at)
    ctx->r2 = ADD32(ctx->r1, -0X3910);
    // 0x8023068C: jr          $v0
    // 0x80230690: nop

    switch (jr_addend_8023068C >> 2) {
        case 0: goto L_80230694; break;
        case 1: goto L_802306C8; break;
        case 2: goto L_802306D4; break;
        case 3: goto L_80230754; break;
        case 4: goto L_8023078C; break;
        default: switch_error(__func__, 0x8023068C, 0x8023C6F0);
    }
    // 0x80230690: nop

L_80230694:
    // 0x80230694: lb          $v1, 0xD($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XD);
    // 0x80230698: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023069C: beq         $v1, $v0, L_802306AC
    if (ctx->r3 == ctx->r2) {
        // 0x802306A0: addiu       $a0, $zero, 0x13C
        ctx->r4 = ADD32(0, 0X13C);
            goto L_802306AC;
    }
    // 0x802306A0: addiu       $a0, $zero, 0x13C
    ctx->r4 = ADD32(0, 0X13C);
    // 0x802306A4: jal         0x8002A33C
    // 0x802306A8: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x802306A8: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    after_0:
L_802306AC:
    // 0x802306AC: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x802306B0: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x802306B4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802306B8: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x802306BC: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x802306C0: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
    // 0x802306C4: sb          $v1, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r3;
L_802306C8:
    // 0x802306C8: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x802306CC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802306D0: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_802306D4:
    // 0x802306D4: lb          $v1, 0xF($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XF);
    // 0x802306D8: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x802306DC: beq         $v1, $v0, L_80230738
    if (ctx->r3 == ctx->r2) {
        // 0x802306E0: addiu       $s0, $s1, 0x18
        ctx->r16 = ADD32(ctx->r17, 0X18);
            goto L_80230738;
    }
    // 0x802306E0: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x802306E4: jal         0x8002C654
    // 0x802306E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_1;
    // 0x802306E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802306EC: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x802306F0: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x802306F4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802306F8: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x802306FC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80230700: lhu         $a0, -0x5E60($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X5E60);
    // 0x80230704: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80230708: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8023070C: jal         0x80031BB4
    // 0x80230710: sra         $a0, $a0, 18
    ctx->r4 = S32(SIGNED(ctx->r4) >> 18);
    func_80031BB4_CFB4(rdram, ctx);
        goto after_2;
    // 0x80230710: sra         $a0, $a0, 18
    ctx->r4 = S32(SIGNED(ctx->r4) >> 18);
    after_2:
    // 0x80230714: lbu         $a0, 0xB($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XB);
    // 0x80230718: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023071C: jal         0x800319B4
    // 0x80230720: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    func_800319B4_CDB4(rdram, ctx);
        goto after_3;
    // 0x80230720: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    after_3:
    // 0x80230724: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x80230728: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023072C: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80230730: j           L_802307B0
    // 0x80230734: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
        goto L_802307B0;
    // 0x80230734: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
L_80230738:
    // 0x80230738: lbu         $a0, 0xA($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XA);
    // 0x8023073C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80230740: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x80230744: bne         $v1, $v0, L_802307B0
    if (ctx->r3 != ctx->r2) {
        // 0x80230748: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_802307B0;
    }
    // 0x80230748: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8023074C: j           L_802307B0
    // 0x80230750: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_802307B0;
    // 0x80230750: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_80230754:
    // 0x80230754: lb          $v1, 0xD($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XD);
    // 0x80230758: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023075C: bne         $v1, $v0, L_8023077C
    if (ctx->r3 != ctx->r2) {
        // 0x80230760: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8023077C;
    }
    // 0x80230760: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80230764: lb          $a3, 0xE($s1)
    ctx->r7 = MEM_B(ctx->r17, 0XE);
    // 0x80230768: beq         $a3, $v0, L_8023077C
    if (ctx->r7 == ctx->r2) {
        // 0x8023076C: addiu       $a0, $s1, 0x38
        ctx->r4 = ADD32(ctx->r17, 0X38);
            goto L_8023077C;
    }
    // 0x8023076C: addiu       $a0, $s1, 0x38
    ctx->r4 = ADD32(ctx->r17, 0X38);
    // 0x80230770: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80230774: jal         0x800610AC
    // 0x80230778: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_4;
    // 0x80230778: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
L_8023077C:
    // 0x8023077C: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80230780: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230784: j           L_802307B0
    // 0x80230788: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_802307B0;
    // 0x80230788: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_8023078C:
    // 0x8023078C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80230790: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80230794: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80230798: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8023079C: bne         $v0, $zero, L_802307B0
    if (ctx->r2 != 0) {
        // 0x802307A0: nop
    
            goto L_802307B0;
    }
    // 0x802307A0: nop

    // 0x802307A4: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x802307A8: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    // 0x802307AC: sw          $zero, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = 0;
L_802307B0:
    // 0x802307B0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802307B4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802307B8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802307BC: jr          $ra
    // 0x802307C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802307C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80237C74_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237C74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80237C78: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80237C7C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80237C80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80237C84: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80237C88: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x80237C8C: beq         $v0, $zero, L_80237CFC
    if (ctx->r2 == 0) {
        // 0x80237C90: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80237CFC;
    }
    // 0x80237C90: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80237C94: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80237C98: addu        $at, $at, $v0
    gpr jr_addend_80237CA0 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80237C9C: lw          $v0, -0x37D0($at)
    ctx->r2 = ADD32(ctx->r1, -0X37D0);
    // 0x80237CA0: jr          $v0
    // 0x80237CA4: nop

    switch (jr_addend_80237CA0 >> 2) {
        case 0: goto L_80237CA8; break;
        case 1: goto L_80237CFC; break;
        case 2: goto L_80237CB4; break;
        case 3: goto L_80237CC0; break;
        case 4: goto L_80237CCC; break;
        case 5: goto L_80237CD8; break;
        case 6: goto L_80237CE4; break;
        default: switch_error(__func__, 0x80237CA0, 0x8023C830);
    }
    // 0x80237CA4: nop

L_80237CA8:
    // 0x80237CA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237CAC: j           L_80237CEC
    // 0x80237CB0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
        goto L_80237CEC;
    // 0x80237CB0: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
L_80237CB4:
    // 0x80237CB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237CB8: j           L_80237CEC
    // 0x80237CBC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
        goto L_80237CEC;
    // 0x80237CBC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
L_80237CC0:
    // 0x80237CC0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237CC4: j           L_80237CEC
    // 0x80237CC8: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
        goto L_80237CEC;
    // 0x80237CC8: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
L_80237CCC:
    // 0x80237CCC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237CD0: j           L_80237CEC
    // 0x80237CD4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
        goto L_80237CEC;
    // 0x80237CD4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
L_80237CD8:
    // 0x80237CD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237CDC: j           L_80237CEC
    // 0x80237CE0: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
        goto L_80237CEC;
    // 0x80237CE0: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
L_80237CE4:
    // 0x80237CE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237CE8: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
L_80237CEC:
    // 0x80237CEC: jal         0x80050294
    // 0x80237CF0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80237CF0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80237CF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237CF8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80237CFC:
    // 0x80237CFC: jal         0x8005044C
    // 0x80237D00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x80237D00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80237D04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80237D08: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80237D0C: jr          $ra
    // 0x80237D10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80237D10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F0B8_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F0B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F0BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F0C0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F0C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022F0C8: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x8022F0CC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022F0D0: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x8022F0D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F0D8: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x8022F0DC: beq         $v1, $v0, L_8022F118
    if (ctx->r3 == ctx->r2) {
        // 0x8022F0E0: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8022F118;
    }
    // 0x8022F0E0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022F0E4: beql        $v0, $zero, L_8022F0FC
    if (ctx->r2 == 0) {
        // 0x8022F0E8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022F0FC;
    }
    goto skip_0;
    // 0x8022F0E8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022F0EC: beq         $v1, $zero, L_8022F10C
    if (ctx->r3 == 0) {
        // 0x8022F0F0: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8022F10C;
    }
    // 0x8022F0F0: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8022F0F4: j           L_8022F154
    // 0x8022F0F8: nop

        goto L_8022F154;
    // 0x8022F0F8: nop

L_8022F0FC:
    // 0x8022F0FC: beq         $v1, $v0, L_8022F140
    if (ctx->r3 == ctx->r2) {
        // 0x8022F100: nop
    
            goto L_8022F140;
    }
    // 0x8022F100: nop

    // 0x8022F104: j           L_8022F154
    // 0x8022F108: nop

        goto L_8022F154;
    // 0x8022F108: nop

L_8022F10C:
    // 0x8022F10C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022F110: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x8022F114: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
L_8022F118:
    // 0x8022F118: lw          $v0, 0x184($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X184);
    // 0x8022F11C: bne         $v0, $s0, L_8022F154
    if (ctx->r2 != ctx->r16) {
        // 0x8022F120: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022F154;
    }
    // 0x8022F120: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022F124: lb          $a3, 0xC($s0)
    ctx->r7 = MEM_B(ctx->r16, 0XC);
    // 0x8022F128: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022F12C: jal         0x800610AC
    // 0x8022F130: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_0;
    // 0x8022F130: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022F134: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022F138: j           L_8022F150
    // 0x8022F13C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022F150;
    // 0x8022F13C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022F140:
    // 0x8022F140: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022F144: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x8022F148: bne         $v0, $zero, L_8022F154
    if (ctx->r2 != 0) {
        // 0x8022F14C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022F154;
    }
    // 0x8022F14C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022F150:
    // 0x8022F150: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022F154:
    // 0x8022F154: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022F158: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F15C: jr          $ra
    // 0x8022F160: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F160: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022EDA0_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EDA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022EDA4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022EDA8: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x8022EDAC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022EDB0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022EDB4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022EDB8: lw          $v0, -0x5F30($at)
    ctx->r2 = MEM_W(ctx->r1, -0X5F30);
    // 0x8022EDBC: jalr        $v0
    // 0x8022EDC0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022EDC0: nop

    after_0:
    // 0x8022EDC4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022EDC8: jr          $ra
    // 0x8022EDCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022EDCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80237D1C_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237D1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80237D20: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80237D24: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80237D28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80237D2C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80237D30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237D34: beq         $v1, $v0, L_80237D84
    if (ctx->r3 == ctx->r2) {
        // 0x80237D38: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80237D84;
    }
    // 0x80237D38: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80237D3C: beql        $v0, $zero, L_80237D54
    if (ctx->r2 == 0) {
        // 0x80237D40: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80237D54;
    }
    goto skip_0;
    // 0x80237D40: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80237D44: beq         $v1, $zero, L_80237D64
    if (ctx->r3 == 0) {
        // 0x80237D48: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80237D64;
    }
    // 0x80237D48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237D4C: j           L_80237DA4
    // 0x80237D50: nop

        goto L_80237DA4;
    // 0x80237D50: nop

L_80237D54:
    // 0x80237D54: beq         $v1, $v0, L_80237D9C
    if (ctx->r3 == ctx->r2) {
        // 0x80237D58: nop
    
            goto L_80237D9C;
    }
    // 0x80237D58: nop

    // 0x80237D5C: j           L_80237DA4
    // 0x80237D60: nop

        goto L_80237DA4;
    // 0x80237D60: nop

L_80237D64:
    // 0x80237D64: addiu       $v0, $zero, -0x200
    ctx->r2 = ADD32(0, -0X200);
    // 0x80237D68: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x80237D6C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80237D70: jal         0x80050294
    // 0x80237D74: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80237D74: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_0:
    // 0x80237D78: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80237D7C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80237D80: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80237D84:
    // 0x80237D84: jal         0x80051770
    // 0x80237D88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051770_2CB70(rdram, ctx);
        goto after_1;
    // 0x80237D88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80237D8C: jal         0x80051248
    // 0x80237D90: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051248_2C648(rdram, ctx);
        goto after_2;
    // 0x80237D90: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80237D94: j           L_80237DA4
    // 0x80237D98: nop

        goto L_80237DA4;
    // 0x80237D98: nop

L_80237D9C:
    // 0x80237D9C: jal         0x8005044C
    // 0x80237DA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_3;
    // 0x80237DA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_80237DA4:
    // 0x80237DA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80237DA8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80237DAC: jr          $ra
    // 0x80237DB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80237DB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225D2C_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225D2C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80225D30: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80225D34: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80225D38: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80225D3C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225D40: lbu         $s0, 0xE($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0XE);
    // 0x80225D44: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x80225D48: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80225D4C: addiu       $v0, $v0, -0x6904
    ctx->r2 = ADD32(ctx->r2, -0X6904);
    // 0x80225D50: andi        $s0, $s0, 0x3
    ctx->r16 = ctx->r16 & 0X3;
    // 0x80225D54: sll         $s0, $s0, 4
    ctx->r16 = S32(ctx->r16 << 4);
    // 0x80225D58: jal         0x80227F28
    // 0x80225D5C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    func_80227F28_ovl27(rdram, ctx);
        goto after_0;
    // 0x80225D5C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    after_0:
    // 0x80225D60: jal         0x800A3450
    // 0x80225D64: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80225D64: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    after_1:
    // 0x80225D68: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80225D6C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x80225D70: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80225D74: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80225D78: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225D7C: sh          $v1, 0x350($s1)
    MEM_H(0X350, ctx->r17) = ctx->r3;
    // 0x80225D80: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x80225D84: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80225D88: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80225D8C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225D90: jr          $ra
    // 0x80225D94: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80225D94: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80237B7C_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237B7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80237B80: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80237B84: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80237B88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80237B8C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80237B90: bne         $v0, $zero, L_80237BAC
    if (ctx->r2 != 0) {
        // 0x80237B94: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_80237BAC;
    }
    // 0x80237B94: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80237B98: jal         0x80050294
    // 0x80237B9C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80237B9C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80237BA0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80237BA4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80237BA8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80237BAC:
    // 0x80237BAC: jal         0x8005044C
    // 0x80237BB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x80237BB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80237BB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80237BB8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80237BBC: jr          $ra
    // 0x80237BC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80237BC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E700_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E700: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022E704: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8022E708: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x8022E70C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E710: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8022E714: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022E718: lui         $s3, 0x2E80
    ctx->r19 = S32(0X2E80 << 16);
    // 0x8022E71C: ori         $s3, $s3, 0xC080
    ctx->r19 = ctx->r19 | 0XC080;
    // 0x8022E720: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022E724: lui         $s2, 0x3D48
    ctx->r18 = S32(0X3D48 << 16);
    // 0x8022E728: ori         $s2, $s2, 0x2080
    ctx->r18 = ctx->r18 | 0X2080;
    // 0x8022E72C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022E730: lui         $s1, 0x2E
    ctx->r17 = S32(0X2E << 16);
    // 0x8022E734: ori         $s1, $s1, 0x209F
    ctx->r17 = ctx->r17 | 0X209F;
    // 0x8022E738: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x8022E73C: addiu       $s7, $zero, 0x3F80
    ctx->r23 = ADD32(0, 0X3F80);
    // 0x8022E740: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x8022E744: addiu       $s6, $zero, 0x3F9F
    ctx->r22 = ADD32(0, 0X3F9F);
    // 0x8022E748: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x8022E74C: addiu       $s5, $zero, 0xC0
    ctx->r21 = ADD32(0, 0XC0);
    // 0x8022E750: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
L_8022E754:
    // 0x8022E754: jal         0x8003B878
    // 0x8022E758: nop

    func_8003B878_16C78(rdram, ctx);
        goto after_0;
    // 0x8022E758: nop

    after_0:
    // 0x8022E75C: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    // 0x8022E760: sll         $a0, $a1, 3
    ctx->r4 = S32(ctx->r5 << 3);
    // 0x8022E764: addu        $a0, $a0, $s4
    ctx->r4 = ADD32(ctx->r4, ctx->r20);
    // 0x8022E768: sw          $s3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r19;
    // 0x8022E76C: lw          $v1, 0xD8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XD8);
    // 0x8022E770: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8022E774: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x8022E778: lw          $a0, 0xDC($a0)
    ctx->r4 = MEM_W(ctx->r4, 0XDC);
    // 0x8022E77C: sll         $v1, $a1, 1
    ctx->r3 = S32(ctx->r5 << 1);
    // 0x8022E780: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8022E784: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8022E788: subu        $v1, $s5, $v1
    ctx->r3 = SUB32(ctx->r21, ctx->r3);
    // 0x8022E78C: sw          $s2, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r18;
    // 0x8022E790: sw          $s1, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r17;
    // 0x8022E794: sw          $s7, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r23;
    // 0x8022E798: sw          $s6, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r22;
    // 0x8022E79C: sw          $v1, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r3;
    // 0x8022E7A0: sw          $zero, 0x20($v0)
    MEM_W(0X20, ctx->r2) = 0;
    // 0x8022E7A4: sw          $a0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r4;
    // 0x8022E7A8: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x8022E7AC: sltiu       $v0, $v0, 0x6
    ctx->r2 = ctx->r2 < 0X6 ? 1 : 0;
    // 0x8022E7B0: bne         $v0, $zero, L_8022E754
    if (ctx->r2 != 0) {
        // 0x8022E7B4: nop
    
            goto L_8022E754;
    }
    // 0x8022E7B4: nop

    // 0x8022E7B8: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8022E7BC: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x8022E7C0: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x8022E7C4: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x8022E7C8: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8022E7CC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022E7D0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022E7D4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022E7D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E7DC: jr          $ra
    // 0x8022E7E0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022E7E0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022B838_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B838: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8022B83C: bne         $v0, $zero, L_8022B854
    if (ctx->r2 != 0) {
        // 0x8022B840: nop
    
            goto L_8022B854;
    }
    // 0x8022B840: nop

    // 0x8022B844: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8022B848: sb          $zero, 0xD($a0)
    MEM_B(0XD, ctx->r4) = 0;
    // 0x8022B84C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B850: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_8022B854:
    // 0x8022B854: jr          $ra
    // 0x8022B858: nop

    TRACE_RETURN()
    return;
    // 0x8022B858: nop

;}
RECOMP_FUNC void func_80226F30_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226F30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226F34: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226F38: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226F3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226F40: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x80226F44: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80226F48: jal         0x8004FA7C
    // 0x80226F4C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80226F4C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x80226F50: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80226F54: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x80226F58: bne         $v0, $zero, L_80226F68
    if (ctx->r2 != 0) {
        // 0x80226F5C: nop
    
            goto L_80226F68;
    }
    // 0x80226F5C: nop

    // 0x80226F60: lhu         $v0, 0x366($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X366);
    // 0x80226F64: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80226F68:
    // 0x80226F68: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80226F6C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80226F70: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80226F74: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80226F78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226F7C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226F80: jr          $ra
    // 0x80226F84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226F84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226100_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226100: lhu         $v0, 0x350($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X350);
    // 0x80226104: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226108: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x8022610C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226110: bne         $v0, $zero, L_8022611C
    if (ctx->r2 != 0) {
        // 0x80226114: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022611C;
    }
    // 0x80226114: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226118: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_8022611C:
    // 0x8022611C: jr          $ra
    // 0x80226120: nop

    TRACE_RETURN()
    return;
    // 0x80226120: nop

;}
RECOMP_FUNC void func_80227664_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227664: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80227668: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022766C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227670: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80227674: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80227678: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022767C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227680: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80227684: lbu         $v1, 0xAC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAC);
    // 0x80227688: addiu       $a1, $zero, 0xFA
    ctx->r5 = ADD32(0, 0XFA);
    // 0x8022768C: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    // 0x80227690: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    // 0x80227694: jal         0x80227FC4
    // 0x80227698: sb          $v1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r3;
    func_80227FC4_ovl27(rdram, ctx);
        goto after_0;
    // 0x80227698: sb          $v1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022769C: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x802276A0: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x802276A4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802276A8: beq         $v0, $zero, L_8022773C
    if (ctx->r2 == 0) {
        // 0x802276AC: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_8022773C;
    }
    // 0x802276AC: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x802276B0: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x802276B4: jal         0x80227F28
    // 0x802276B8: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    func_80227F28_ovl27(rdram, ctx);
        goto after_1;
    // 0x802276B8: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x802276BC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802276C0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802276C4: addiu       $s2, $s2, 0x14
    ctx->r18 = ADD32(ctx->r18, 0X14);
    // 0x802276C8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802276CC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x802276D0: jal         0x8004F820
    // 0x802276D4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x802276D4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_2:
    // 0x802276D8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802276DC: bgez        $v0, L_80227708
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802276E0: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80227708;
    }
    // 0x802276E0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802276E4: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802276E8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802276EC: jal         0x8004F820
    // 0x802276F0: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x802276F0: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_3:
    // 0x802276F4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802276F8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802276FC: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80227700: j           L_80227720
    // 0x80227704: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
        goto L_80227720;
    // 0x80227704: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
L_80227708:
    // 0x80227708: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022770C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80227710: jal         0x8004F820
    // 0x80227714: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_4;
    // 0x80227714: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_4:
    // 0x80227718: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022771C: sra         $v1, $v0, 19
    ctx->r3 = S32(SIGNED(ctx->r2) >> 19);
L_80227720:
    // 0x80227720: lbu         $v0, 0x3($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X3);
    // 0x80227724: sh          $v1, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r3;
    // 0x80227728: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022772C: sb          $v0, 0x3($s3)
    MEM_B(0X3, ctx->r19) = ctx->r2;
    // 0x80227730: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x80227734: j           L_80227784
    // 0x80227738: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
        goto L_80227784;
    // 0x80227738: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_8022773C:
    // 0x8022773C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80227740: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80227744: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x80227748: jal         0x8004F820
    // 0x8022774C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_8004F820_2AC20(rdram, ctx);
        goto after_5;
    // 0x8022774C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_5:
    // 0x80227750: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227754: slt         $v0, $zero, $v0
    ctx->r2 = SIGNED(0) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80227758: beq         $v0, $zero, L_80227768
    if (ctx->r2 == 0) {
        // 0x8022775C: sh          $v0, 0x34E($s0)
        MEM_H(0X34E, ctx->r16) = ctx->r2;
            goto L_80227768;
    }
    // 0x8022775C: sh          $v0, 0x34E($s0)
    MEM_H(0X34E, ctx->r16) = ctx->r2;
    // 0x80227760: j           L_8022776C
    // 0x80227764: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_8022776C;
    // 0x80227764: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80227768:
    // 0x80227768: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_8022776C:
    // 0x8022776C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227770: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80227774: sb          $v0, 0x3($s3)
    MEM_B(0X3, ctx->r19) = ctx->r2;
    // 0x80227778: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8022777C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227780: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_80227784:
    // 0x80227784: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80227788: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022778C: jal         0x800610AC
    // 0x80227790: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    func_800610AC_3C4AC(rdram, ctx);
        goto after_6;
    // 0x80227790: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    after_6:
    // 0x80227794: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80227798: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022779C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802277A0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802277A4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802277A8: jr          $ra
    // 0x802277AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802277AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80226E70_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226E70: lhu         $v0, 0x350($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X350);
    // 0x80226E74: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226E78: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x80226E7C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226E80: bne         $v0, $zero, L_80226E8C
    if (ctx->r2 != 0) {
        // 0x80226E84: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226E8C;
    }
    // 0x80226E84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226E88: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_80226E8C:
    // 0x80226E8C: jr          $ra
    // 0x80226E90: nop

    TRACE_RETURN()
    return;
    // 0x80226E90: nop

;}
RECOMP_FUNC void func_80230F9C_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230F9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230FA0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230FA4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230FA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80230FAC: lw          $a0, 0x44($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X44);
    // 0x80230FB0: beq         $a0, $zero, L_80230FC8
    if (ctx->r4 == 0) {
        // 0x80230FB4: nop
    
            goto L_80230FC8;
    }
    // 0x80230FB4: nop

    // 0x80230FB8: jal         0x8006033C
    // 0x80230FBC: nop

    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80230FBC: nop

    after_0:
    // 0x80230FC0: beq         $v0, $zero, L_80230FF0
    if (ctx->r2 == 0) {
        // 0x80230FC4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80230FF0;
    }
    // 0x80230FC4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80230FC8:
    // 0x80230FC8: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    // 0x80230FCC: jal         0x8006033C
    // 0x80230FD0: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80230FD0: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    after_1:
    // 0x80230FD4: bne         $v0, $zero, L_80230FF0
    if (ctx->r2 != 0) {
        // 0x80230FD8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80230FF0;
    }
    // 0x80230FD8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80230FDC: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x80230FE0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80230FE4: bne         $v1, $v0, L_80230FF0
    if (ctx->r3 != ctx->r2) {
        // 0x80230FE8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80230FF0;
    }
    // 0x80230FE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230FEC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80230FF0:
    // 0x80230FF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80230FF4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230FF8: jr          $ra
    // 0x80230FFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230FFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80230C90_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230C90: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80230C94: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80230C98: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230C9C: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80230CA0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80230CA4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80230CA8: lh          $v1, 0x3E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X3E);
    // 0x80230CAC: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x80230CB0: sh          $zero, 0x3E($s0)
    MEM_H(0X3E, ctx->r16) = 0;
    // 0x80230CB4: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x80230CB8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80230CBC: jal         0x8004D5D4
    // 0x80230CC0: sw          $v1, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80230CC0: sw          $v1, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r3;
    after_0:
    // 0x80230CC4: addiu       $s1, $s0, 0x18
    ctx->r17 = ADD32(ctx->r16, 0X18);
    // 0x80230CC8: jal         0x8002C654
    // 0x80230CCC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_1;
    // 0x80230CCC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x80230CD0: lb          $a0, 0xF($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XF);
    // 0x80230CD4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80230CD8: jal         0x800319B4
    // 0x80230CDC: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_2;
    // 0x80230CDC: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    after_2:
    // 0x80230CE0: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80230CE4: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80230CE8: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x80230CEC: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    // 0x80230CF0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80230CF4: addiu       $v0, $v0, -0x5E40
    ctx->r2 = ADD32(ctx->r2, -0X5E40);
    // 0x80230CF8: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x80230CFC: sw          $zero, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = 0;
    // 0x80230D00: sw          $zero, 0x50($s0)
    MEM_W(0X50, ctx->r16) = 0;
    // 0x80230D04: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80230D08: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x80230D0C: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80230D10: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80230D14: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80230D18: jr          $ra
    // 0x80230D1C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80230D1C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80229340_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229340: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80229344: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80229348: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022934C: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80229350: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80229354: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80229358: jal         0x802291A4
    // 0x8022935C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    func_802291A4_ovl27(rdram, ctx);
        goto after_0;
    // 0x8022935C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    after_0:
    // 0x80229360: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80229364: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80229368: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022936C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229370: lw          $v0, -0x66CC($at)
    ctx->r2 = MEM_W(ctx->r1, -0X66CC);
    // 0x80229374: jalr        $v0
    // 0x80229378: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x80229378: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022937C: addiu       $s1, $s0, 0x2D8
    ctx->r17 = ADD32(ctx->r16, 0X2D8);
    // 0x80229380: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80229384: addiu       $a1, $s0, 0x188
    ctx->r5 = ADD32(ctx->r16, 0X188);
    // 0x80229388: jal         0x8009A3B4
    // 0x8022938C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022938C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80229390: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80229394: addiu       $s3, $s0, 0x314
    ctx->r19 = ADD32(ctx->r16, 0X314);
    // 0x80229398: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8022939C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x802293A0: lh          $v0, 0x2D8($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X2D8);
    // 0x802293A4: lhu         $a2, 0x56($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X56);
    // 0x802293A8: lh          $v1, 0x2DA($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2DA);
    // 0x802293AC: lh          $t0, 0x2DC($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X2DC);
    // 0x802293B0: addiu       $s2, $zero, -0xD40
    ctx->r18 = ADD32(0, -0XD40);
    // 0x802293B4: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    // 0x802293B8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802293BC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802293C0: sll         $t0, $t0, 16
    ctx->r8 = S32(ctx->r8 << 16);
    // 0x802293C4: sw          $v0, 0x314($s0)
    MEM_W(0X314, ctx->r16) = ctx->r2;
    // 0x802293C8: addiu       $v0, $zero, -0x698
    ctx->r2 = ADD32(0, -0X698);
    // 0x802293CC: sw          $v1, 0x318($s0)
    MEM_W(0X318, ctx->r16) = ctx->r3;
    // 0x802293D0: sw          $t0, 0x31C($s0)
    MEM_W(0X31C, ctx->r16) = ctx->r8;
    // 0x802293D4: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x802293D8: jal         0x8004DBA0
    // 0x802293DC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_3;
    // 0x802293DC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_3:
    // 0x802293E0: addiu       $s1, $s0, 0x2E0
    ctx->r17 = ADD32(ctx->r16, 0X2E0);
    // 0x802293E4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802293E8: addiu       $a1, $s0, 0x198
    ctx->r5 = ADD32(ctx->r16, 0X198);
    // 0x802293EC: jal         0x8009A3B4
    // 0x802293F0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x802293F0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x802293F4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802293F8: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x802293FC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80229400: lh          $v0, 0x2E0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X2E0);
    // 0x80229404: lhu         $a2, 0x56($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X56);
    // 0x80229408: lh          $v1, 0x2E2($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E2);
    // 0x8022940C: lh          $t0, 0x2E4($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X2E4);
    // 0x80229410: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    // 0x80229414: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229418: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022941C: sll         $t0, $t0, 16
    ctx->r8 = S32(ctx->r8 << 16);
    // 0x80229420: sw          $v0, 0x314($s0)
    MEM_W(0X314, ctx->r16) = ctx->r2;
    // 0x80229424: addiu       $v0, $zero, 0x698
    ctx->r2 = ADD32(0, 0X698);
    // 0x80229428: sw          $v1, 0x318($s0)
    MEM_W(0X318, ctx->r16) = ctx->r3;
    // 0x8022942C: sw          $t0, 0x31C($s0)
    MEM_W(0X31C, ctx->r16) = ctx->r8;
    // 0x80229430: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x80229434: jal         0x8004DBA0
    // 0x80229438: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_5;
    // 0x80229438: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_5:
    // 0x8022943C: jal         0x800504EC
    // 0x80229440: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800504EC_2B8EC(rdram, ctx);
        goto after_6;
    // 0x80229440: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x80229444: lhu         $v0, 0x330($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X330);
    // 0x80229448: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8022944C: sh          $v0, -0x3D80($at)
    MEM_H(-0X3D80, ctx->r1) = ctx->r2;
    // 0x80229450: lhu         $v0, 0x332($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X332);
    // 0x80229454: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80229458: sh          $v0, -0x3D70($at)
    MEM_H(-0X3D70, ctx->r1) = ctx->r2;
    // 0x8022945C: jal         0x80051248
    // 0x80229460: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051248_2C648(rdram, ctx);
        goto after_7;
    // 0x80229460: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x80229464: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80229468: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8022946C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80229470: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80229474: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80229478: jr          $ra
    // 0x8022947C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022947C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80225E68_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225E68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225E6C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225E70: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80225E74: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225E78: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80225E7C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225E80: lw          $v0, -0x68C4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X68C4);
    // 0x80225E84: jalr        $v0
    // 0x80225E88: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80225E88: nop

    after_0:
    // 0x80225E8C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225E90: jr          $ra
    // 0x80225E94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225E94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232280_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232280: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232284: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80232288: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x8023228C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232290: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80232294: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80232298: lw          $v0, -0x5C8C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X5C8C);
    // 0x8023229C: jalr        $v0
    // 0x802322A0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802322A0: nop

    after_0:
    // 0x802322A4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802322A8: jr          $ra
    // 0x802322AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802322AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233678_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233678: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023367C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80233680: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80233684: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80233688: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x8023368C: bne         $v0, $zero, L_802336D4
    if (ctx->r2 != 0) {
        // 0x80233690: addiu       $v0, $zero, 0x12C
        ctx->r2 = ADD32(0, 0X12C);
            goto L_802336D4;
    }
    // 0x80233690: addiu       $v0, $zero, 0x12C
    ctx->r2 = ADD32(0, 0X12C);
    // 0x80233694: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80233698: sh          $v0, 0x4DEC($at)
    MEM_H(0X4DEC, ctx->r1) = ctx->r2;
    // 0x8023369C: lui         $v0, 0x12C
    ctx->r2 = S32(0X12C << 16);
    // 0x802336A0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802336A4: sw          $v0, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = ctx->r2;
    // 0x802336A8: addiu       $v0, $zero, 0x84
    ctx->r2 = ADD32(0, 0X84);
    // 0x802336AC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802336B0: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x802336B4: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x802336B8: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x802336BC: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x802336C0: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x802336C4: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x802336C8: addiu       $a0, $a0, -0x5BD0
    ctx->r4 = ADD32(ctx->r4, -0X5BD0);
    // 0x802336CC: jal         0x8005FA7C
    // 0x802336D0: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_0;
    // 0x802336D0: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
    after_0:
L_802336D4:
    // 0x802336D4: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x802336D8: addiu       $v0, $zero, 0x262
    ctx->r2 = ADD32(0, 0X262);
    // 0x802336DC: bne         $v1, $v0, L_802336EC
    if (ctx->r3 != ctx->r2) {
        // 0x802336E0: nop
    
            goto L_802336EC;
    }
    // 0x802336E0: nop

    // 0x802336E4: jal         0x8004F488
    // 0x802336E8: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    func_8004F488_2A888(rdram, ctx);
        goto after_1;
    // 0x802336E8: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    after_1:
L_802336EC:
    // 0x802336EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802336F0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802336F4: jr          $ra
    // 0x802336F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802336F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802255A8_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802255A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802255AC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802255B0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802255B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802255B8: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802255BC: bne         $v0, $zero, L_802255D8
    if (ctx->r2 != 0) {
        // 0x802255C0: nop
    
            goto L_802255D8;
    }
    // 0x802255C0: nop

    // 0x802255C4: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x802255C8: jal         0x800607C4
    // 0x802255CC: addiu       $a0, $a0, -0x6F30
    ctx->r4 = ADD32(ctx->r4, -0X6F30);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x802255CC: addiu       $a0, $a0, -0x6F30
    ctx->r4 = ADD32(ctx->r4, -0X6F30);
    after_0:
    // 0x802255D0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802255D4: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802255D8:
    // 0x802255D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802255DC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802255E0: jr          $ra
    // 0x802255E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802255E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226034_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226034: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226038: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022603C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226040: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226044: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80226048: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022604C: jal         0x8004DA90
    // 0x80226050: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80226050: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x80226054: lhu         $v0, 0x35E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X35E);
    // 0x80226058: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022605C: sh          $v0, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r2;
    // 0x80226060: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226064: bne         $v0, $zero, L_8022609C
    if (ctx->r2 != 0) {
        // 0x80226068: nop
    
            goto L_8022609C;
    }
    // 0x80226068: nop

    // 0x8022606C: lh          $v0, 0x35C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35C);
    // 0x80226070: beq         $v0, $zero, L_80226084
    if (ctx->r2 == 0) {
        // 0x80226074: nop
    
            goto L_80226084;
    }
    // 0x80226074: nop

    // 0x80226078: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8022607C: j           L_8022608C
    // 0x80226080: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
        goto L_8022608C;
    // 0x80226080: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
L_80226084:
    // 0x80226084: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x80226088: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
L_8022608C:
    // 0x8022608C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80226090: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80226094: j           L_802260EC
    // 0x80226098: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_802260EC;
    // 0x80226098: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_8022609C:
    // 0x8022609C: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x802260A0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802260A4: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x802260A8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802260AC: bne         $v0, $zero, L_802260BC
    if (ctx->r2 != 0) {
        // 0x802260B0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802260BC;
    }
    // 0x802260B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802260B4: j           L_802260EC
    // 0x802260B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802260EC;
    // 0x802260B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802260BC:
    // 0x802260BC: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x802260C0: jal         0x80227FC4
    // 0x802260C4: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_80227FC4_ovl27(rdram, ctx);
        goto after_1;
    // 0x802260C4: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_1:
    // 0x802260C8: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802260CC: beq         $v0, $zero, L_802260F0
    if (ctx->r2 == 0) {
        // 0x802260D0: nop
    
            goto L_802260F0;
    }
    // 0x802260D0: nop

    // 0x802260D4: jal         0x80227F28
    // 0x802260D8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_80227F28_ovl27(rdram, ctx);
        goto after_2;
    // 0x802260D8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_2:
    // 0x802260DC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802260E0: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x802260E4: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x802260E8: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_802260EC:
    // 0x802260EC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802260F0:
    // 0x802260F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802260F4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802260F8: jr          $ra
    // 0x802260FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802260FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D3F4_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D3F4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8022D3F8: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x8022D3FC: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022D400: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8022D404: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x8022D408: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x8022D40C: lbu         $v1, 0x3($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X3);
    // 0x8022D410: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8022D414: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022D418: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D41C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022D420: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D424: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x8022D428: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8022D42C: jal         0x80071110
    // 0x8022D430: lbu         $a1, -0x618E($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X618E);
    func_80071110_4C510(rdram, ctx);
        goto after_0;
    // 0x8022D430: lbu         $a1, -0x618E($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X618E);
    after_0:
    // 0x8022D434: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022D438: beq         $v1, $zero, L_8022D4A8
    if (ctx->r3 == 0) {
        // 0x8022D43C: addiu       $v0, $zero, 0x7FFF
        ctx->r2 = ADD32(0, 0X7FFF);
            goto L_8022D4A8;
    }
    // 0x8022D43C: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x8022D440: bne         $v1, $v0, L_8022D710
    if (ctx->r3 != ctx->r2) {
        // 0x8022D444: nop
    
            goto L_8022D710;
    }
    // 0x8022D444: nop

    // 0x8022D448: lbu         $v1, 0x3($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X3);
    // 0x8022D44C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8022D450: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022D454: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D458: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022D45C: sll         $a0, $v0, 2
    ctx->r4 = S32(ctx->r2 << 2);
    // 0x8022D460: lw          $v0, 0xC8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XC8);
    // 0x8022D464: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8022D468: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022D46C: lw          $v1, -0x618C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X618C);
    // 0x8022D470: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022D474: beql        $v0, $zero, L_8022D4AC
    if (ctx->r2 == 0) {
        // 0x8022D478: addiu       $a0, $s2, 0x34
        ctx->r4 = ADD32(ctx->r18, 0X34);
            goto L_8022D4AC;
    }
    goto skip_0;
    // 0x8022D478: addiu       $a0, $s2, 0x34
    ctx->r4 = ADD32(ctx->r18, 0X34);
    skip_0:
    // 0x8022D47C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022D480: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022D484: lbu         $v0, -0x6194($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X6194);
    // 0x8022D488: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D48C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022D490: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D494: lw          $v0, -0x606C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X606C);
    // 0x8022D498: jalr        $v0
    // 0x8022D49C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x8022D49C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x8022D4A0: jal         0x8004F4F8
    // 0x8022D4A4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_2;
    // 0x8022D4A4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_2:
L_8022D4A8:
    // 0x8022D4A8: addiu       $a0, $s2, 0x34
    ctx->r4 = ADD32(ctx->r18, 0X34);
L_8022D4AC:
    // 0x8022D4AC: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    // 0x8022D4B0: jal         0x8009A3B4
    // 0x8022D4B4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022D4B4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_3:
    // 0x8022D4B8: addiu       $a0, $s2, 0x2C
    ctx->r4 = ADD32(ctx->r18, 0X2C);
    // 0x8022D4BC: addiu       $s1, $s2, 0x14
    ctx->r17 = ADD32(ctx->r18, 0X14);
    // 0x8022D4C0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022D4C4: jal         0x8009A3B4
    // 0x8022D4C8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022D4C8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x8022D4CC: addiu       $a0, $s2, 0xF0
    ctx->r4 = ADD32(ctx->r18, 0XF0);
    // 0x8022D4D0: addiu       $s0, $s2, 0xE8
    ctx->r16 = ADD32(ctx->r18, 0XE8);
    // 0x8022D4D4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022D4D8: jal         0x8009A3B4
    // 0x8022D4DC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8022D4DC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x8022D4E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D4E4: addiu       $s0, $s2, 0xE0
    ctx->r16 = ADD32(ctx->r18, 0XE0);
    // 0x8022D4E8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022D4EC: jal         0x8009A3B4
    // 0x8022D4F0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8022D4F0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x8022D4F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D4F8: addiu       $s0, $s2, 0xD8
    ctx->r16 = ADD32(ctx->r18, 0XD8);
    // 0x8022D4FC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022D500: jal         0x8009A3B4
    // 0x8022D504: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x8022D504: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_7:
    // 0x8022D508: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D50C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022D510: jal         0x8009A3B4
    // 0x8022D514: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x8022D514: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
    // 0x8022D518: lbu         $v1, 0xB($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XB);
    // 0x8022D51C: addiu       $v0, $v1, 0xFF
    ctx->r2 = ADD32(ctx->r3, 0XFF);
    // 0x8022D520: beq         $v1, $zero, L_8022D710
    if (ctx->r3 == 0) {
        // 0x8022D524: sb          $v0, 0xB($s2)
        MEM_B(0XB, ctx->r18) = ctx->r2;
            goto L_8022D710;
    }
    // 0x8022D524: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
    // 0x8022D528: lw          $v0, 0xB8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XB8);
    // 0x8022D52C: lh          $v1, 0x0($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X0);
    // 0x8022D530: lh          $v0, 0x14($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X14);
    // 0x8022D534: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022D538: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    // 0x8022D53C: lw          $v0, 0xB8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XB8);
    // 0x8022D540: lh          $a0, 0x2($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X2);
    // 0x8022D544: lh          $v0, 0x16($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X16);
    // 0x8022D548: subu        $a2, $a0, $v0
    ctx->r6 = SUB32(ctx->r4, ctx->r2);
    // 0x8022D54C: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    // 0x8022D550: lw          $v0, 0xB8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XB8);
    // 0x8022D554: ori         $a1, $zero, 0xD0FC
    ctx->r5 = 0 | 0XD0FC;
    // 0x8022D558: lh          $a0, 0x4($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X4);
    // 0x8022D55C: lh          $v0, 0x18($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X18);
    // 0x8022D560: addiu       $v1, $v1, 0x687E
    ctx->r3 = ADD32(ctx->r3, 0X687E);
    // 0x8022D564: sltu        $v1, $a1, $v1
    ctx->r3 = ctx->r5 < ctx->r3 ? 1 : 0;
    // 0x8022D568: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x8022D56C: bne         $v1, $zero, L_8022D590
    if (ctx->r3 != 0) {
        // 0x8022D570: sw          $a0, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r4;
            goto L_8022D590;
    }
    // 0x8022D570: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8022D574: addiu       $v0, $a2, 0x687E
    ctx->r2 = ADD32(ctx->r6, 0X687E);
    // 0x8022D578: sltu        $v0, $a1, $v0
    ctx->r2 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x8022D57C: bne         $v0, $zero, L_8022D590
    if (ctx->r2 != 0) {
        // 0x8022D580: addiu       $v0, $a0, 0x687E
        ctx->r2 = ADD32(ctx->r4, 0X687E);
            goto L_8022D590;
    }
    // 0x8022D580: addiu       $v0, $a0, 0x687E
    ctx->r2 = ADD32(ctx->r4, 0X687E);
    // 0x8022D584: sltu        $v0, $a1, $v0
    ctx->r2 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x8022D588: beq         $v0, $zero, L_8022D5B8
    if (ctx->r2 == 0) {
        // 0x8022D58C: addiu       $a0, $sp, 0x28
        ctx->r4 = ADD32(ctx->r29, 0X28);
            goto L_8022D5B8;
    }
    // 0x8022D58C: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
L_8022D590:
    // 0x8022D590: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x8022D594: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x8022D598: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8022D59C: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
    // 0x8022D5A0: sra         $v1, $v1, 2
    ctx->r3 = S32(SIGNED(ctx->r3) >> 2);
    // 0x8022D5A4: sra         $a0, $a0, 2
    ctx->r4 = S32(SIGNED(ctx->r4) >> 2);
    // 0x8022D5A8: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x8022D5AC: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x8022D5B0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8022D5B4: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
L_8022D5B8:
    // 0x8022D5B8: addiu       $s0, $sp, 0x20
    ctx->r16 = ADD32(ctx->r29, 0X20);
    // 0x8022D5BC: jal         0x80032308
    // 0x8022D5C0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80032308_D708(rdram, ctx);
        goto after_9;
    // 0x8022D5C0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_9:
    // 0x8022D5C4: lbu         $v1, 0x3($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X3);
    // 0x8022D5C8: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x8022D5CC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022D5D0: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8022D5D4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022D5D8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D5DC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022D5E0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D5E4: lui         $a3, 0x8024
    ctx->r7 = S32(0X8024 << 16);
    // 0x8022D5E8: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x8022D5EC: lw          $a3, -0x61A8($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X61A8);
    // 0x8022D5F0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022D5F4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D5F8: lw          $v0, -0x61A4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X61A4);
    // 0x8022D5FC: addiu       $s0, $s2, 0xD0
    ctx->r16 = ADD32(ctx->r18, 0XD0);
    // 0x8022D600: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x8022D604: jal         0x80051B48
    // 0x8022D608: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80051B48_2CF48(rdram, ctx);
        goto after_10;
    // 0x8022D608: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_10:
    // 0x8022D60C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D610: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x8022D614: jal         0x8009A3B4
    // 0x8022D618: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_11;
    // 0x8022D618: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_11:
    // 0x8022D61C: lh          $a0, 0x6E($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X6E);
    // 0x8022D620: lh          $v0, 0x18($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X18);
    // 0x8022D624: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022D628: mflo        $v0
    ctx->r2 = lo;
    // 0x8022D62C: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8022D630: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    // 0x8022D634: lh          $v0, 0x1A($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X1A);
    // 0x8022D638: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022D63C: mflo        $v0
    ctx->r2 = lo;
    // 0x8022D640: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8022D644: sh          $v0, 0x46($s2)
    MEM_H(0X46, ctx->r18) = ctx->r2;
    // 0x8022D648: lh          $v0, 0x1C($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X1C);
    // 0x8022D64C: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022D650: mflo        $v0
    ctx->r2 = lo;
    // 0x8022D654: lbu         $v1, 0x3($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X3);
    // 0x8022D658: lh          $a0, 0x6E($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X6E);
    // 0x8022D65C: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8022D660: sh          $v0, 0x48($s2)
    MEM_H(0X48, ctx->r18) = ctx->r2;
    // 0x8022D664: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8022D668: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022D66C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D670: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022D674: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D678: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8022D67C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022D680: lh          $v1, -0x61AC($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X61AC);
    // 0x8022D684: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x8022D688: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8022D68C: lhu         $a1, -0x61AA($a1)
    ctx->r5 = MEM_HU(ctx->r5, -0X61AA);
    // 0x8022D690: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x8022D694: slt         $v0, $a0, $a1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8022D698: bnel        $v0, $zero, L_8022D6A4
    if (ctx->r2 != 0) {
        // 0x8022D69C: sh          $a0, 0x6E($s2)
        MEM_H(0X6E, ctx->r18) = ctx->r4;
            goto L_8022D6A4;
    }
    goto skip_1;
    // 0x8022D69C: sh          $a0, 0x6E($s2)
    MEM_H(0X6E, ctx->r18) = ctx->r4;
    skip_1:
    // 0x8022D6A0: sh          $a1, 0x6E($s2)
    MEM_H(0X6E, ctx->r18) = ctx->r5;
L_8022D6A4:
    // 0x8022D6A4: jal         0x8022D940
    // 0x8022D6A8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8022D940_ovl27(rdram, ctx);
        goto after_12;
    // 0x8022D6A8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_12:
    // 0x8022D6AC: lh          $v0, 0x44($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X44);
    // 0x8022D6B0: lw          $v1, 0x1C($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X1C);
    // 0x8022D6B4: lh          $a0, 0x48($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X48);
    // 0x8022D6B8: lw          $a1, 0x24($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X24);
    // 0x8022D6BC: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8022D6C0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022D6C4: lh          $v0, 0x46($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X46);
    // 0x8022D6C8: sw          $v1, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r3;
    // 0x8022D6CC: lw          $v1, 0x20($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X20);
    // 0x8022D6D0: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x8022D6D4: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x8022D6D8: sw          $a1, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r5;
    // 0x8022D6DC: lhu         $a0, 0x24($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X24);
    // 0x8022D6E0: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8022D6E4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022D6E8: lhu         $v0, 0x1C($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X1C);
    // 0x8022D6EC: sw          $v1, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r3;
    // 0x8022D6F0: lhu         $v1, 0x20($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X20);
    // 0x8022D6F4: sh          $a0, 0x18($s2)
    MEM_H(0X18, ctx->r18) = ctx->r4;
    // 0x8022D6F8: sh          $a0, 0xB0($s2)
    MEM_H(0XB0, ctx->r18) = ctx->r4;
    // 0x8022D6FC: sh          $v0, 0x14($s2)
    MEM_H(0X14, ctx->r18) = ctx->r2;
    // 0x8022D700: sh          $v0, 0xAC($s2)
    MEM_H(0XAC, ctx->r18) = ctx->r2;
    // 0x8022D704: sh          $v1, 0x16($s2)
    MEM_H(0X16, ctx->r18) = ctx->r3;
    // 0x8022D708: j           L_8022D75C
    // 0x8022D70C: sh          $v1, 0xAE($s2)
    MEM_H(0XAE, ctx->r18) = ctx->r3;
        goto L_8022D75C;
    // 0x8022D70C: sh          $v1, 0xAE($s2)
    MEM_H(0XAE, ctx->r18) = ctx->r3;
L_8022D710:
    // 0x8022D710: lbu         $v1, 0x3($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X3);
    // 0x8022D714: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8022D718: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022D71C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D720: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022D724: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D728: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022D72C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D730: lbu         $v0, -0x6194($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X6194);
    // 0x8022D734: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D738: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022D73C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D740: lw          $v0, -0x606C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X606C);
    // 0x8022D744: jalr        $v0
    // 0x8022D748: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_13;
    // 0x8022D748: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_13:
    // 0x8022D74C: jal         0x8004F4F8
    // 0x8022D750: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_14;
    // 0x8022D750: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_14:
    // 0x8022D754: j           L_8022D7A8
    // 0x8022D758: nop

        goto L_8022D7A8;
    // 0x8022D758: nop

L_8022D75C:
    // 0x8022D75C: jal         0x8022D89C
    // 0x8022D760: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8022D89C_ovl27(rdram, ctx);
        goto after_15;
    // 0x8022D760: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_15:
    // 0x8022D764: jal         0x8022DA4C
    // 0x8022D768: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8022DA4C_ovl27(rdram, ctx);
        goto after_16;
    // 0x8022D768: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_16:
    // 0x8022D76C: lbu         $v1, 0x3($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X3);
    // 0x8022D770: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8022D774: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022D778: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D77C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022D780: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D784: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022D788: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D78C: lbu         $v0, -0x6194($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X6194);
    // 0x8022D790: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D794: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022D798: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D79C: lw          $v0, -0x6074($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6074);
    // 0x8022D7A0: jalr        $v0
    // 0x8022D7A4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_17;
    // 0x8022D7A4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_17:
L_8022D7A8:
    // 0x8022D7A8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8022D7AC: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x8022D7B0: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x8022D7B4: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8022D7B8: jr          $ra
    // 0x8022D7BC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x8022D7BC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80237C14_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237C14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80237C18: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80237C1C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80237C20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80237C24: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80237C28: bne         $v0, $zero, L_80237C44
    if (ctx->r2 != 0) {
        // 0x80237C2C: addiu       $a1, $zero, 0x4
        ctx->r5 = ADD32(0, 0X4);
            goto L_80237C44;
    }
    // 0x80237C2C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80237C30: jal         0x80050294
    // 0x80237C34: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80237C34: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80237C38: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80237C3C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80237C40: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80237C44:
    // 0x80237C44: jal         0x8005044C
    // 0x80237C48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x80237C48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80237C4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80237C50: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80237C54: jr          $ra
    // 0x80237C58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80237C58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233BC4_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233BC4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80233BC8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80233BCC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80233BD0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80233BD4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80233BD8: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x80233BDC: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80233BE0: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80233BE4: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x80233BE8: beq         $v1, $v0, L_80233C68
    if (ctx->r3 == ctx->r2) {
        // 0x80233BEC: slti        $v0, $v1, 0x51
        ctx->r2 = SIGNED(ctx->r3) < 0X51 ? 1 : 0;
            goto L_80233C68;
    }
    // 0x80233BEC: slti        $v0, $v1, 0x51
    ctx->r2 = SIGNED(ctx->r3) < 0X51 ? 1 : 0;
    // 0x80233BF0: beql        $v0, $zero, L_80233C08
    if (ctx->r2 == 0) {
        // 0x80233BF4: addiu       $v0, $zero, 0x55
        ctx->r2 = ADD32(0, 0X55);
            goto L_80233C08;
    }
    goto skip_0;
    // 0x80233BF4: addiu       $v0, $zero, 0x55
    ctx->r2 = ADD32(0, 0X55);
    skip_0:
    // 0x80233BF8: beq         $v1, $zero, L_80233C18
    if (ctx->r3 == 0) {
        // 0x80233BFC: nop
    
            goto L_80233C18;
    }
    // 0x80233BFC: nop

    // 0x80233C00: j           L_80233C80
    // 0x80233C04: nop

        goto L_80233C80;
    // 0x80233C04: nop

L_80233C08:
    // 0x80233C08: beq         $v1, $v0, L_80233C78
    if (ctx->r3 == ctx->r2) {
        // 0x80233C0C: nop
    
            goto L_80233C78;
    }
    // 0x80233C0C: nop

    // 0x80233C10: j           L_80233C80
    // 0x80233C14: nop

        goto L_80233C80;
    // 0x80233C14: nop

L_80233C18:
    // 0x80233C18: jal         0x8004F418
    // 0x80233C1C: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x80233C1C: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    after_0:
    // 0x80233C20: jal         0x8004F418
    // 0x80233C24: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    func_8004F418_2A818(rdram, ctx);
        goto after_1;
    // 0x80233C24: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    after_1:
    // 0x80233C28: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80233C2C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80233C30: lh          $v0, 0x4DE8($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X4DE8);
    // 0x80233C34: addiu       $v1, $zero, -0xD02
    ctx->r3 = ADD32(0, -0XD02);
    // 0x80233C38: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80233C3C: sh          $v1, 0x4DEC($at)
    MEM_H(0X4DEC, ctx->r1) = ctx->r3;
    // 0x80233C40: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80233C44: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80233C48: sb          $v1, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r3;
    // 0x80233C4C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80233C50: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80233C54: sw          $v0, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = ctx->r2;
    // 0x80233C58: jal         0x80234028
    // 0x80233C5C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80234028_ovl27(rdram, ctx);
        goto after_2;
    // 0x80233C5C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_2:
    // 0x80233C60: j           L_80233C80
    // 0x80233C64: nop

        goto L_80233C80;
    // 0x80233C64: nop

L_80233C68:
    // 0x80233C68: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80233C6C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80233C70: j           L_80233C80
    // 0x80233C74: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
        goto L_80233C80;
    // 0x80233C74: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
L_80233C78:
    // 0x80233C78: jal         0x80036E48
    // 0x80233C7C: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    func_80036E48_12248(rdram, ctx);
        goto after_3;
    // 0x80233C7C: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    after_3:
L_80233C80:
    // 0x80233C80: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80233C84: lhu         $v0, -0x730C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X730C);
    // 0x80233C88: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80233C8C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80233C90: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80233C94: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80233C98: lh          $v0, -0x5270($at)
    ctx->r2 = MEM_H(ctx->r1, -0X5270);
    // 0x80233C9C: sll         $v0, $v0, 17
    ctx->r2 = S32(ctx->r2 << 17);
    // 0x80233CA0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80233CA4: sw          $v0, 0xA74($at)
    MEM_W(0XA74, ctx->r1) = ctx->r2;
    // 0x80233CA8: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x80233CAC: slti        $v0, $v0, 0x51
    ctx->r2 = SIGNED(ctx->r2) < 0X51 ? 1 : 0;
    // 0x80233CB0: bne         $v0, $zero, L_80233CD8
    if (ctx->r2 != 0) {
        // 0x80233CB4: nop
    
            goto L_80233CD8;
    }
    // 0x80233CB4: nop

    // 0x80233CB8: jal         0x800A3450
    // 0x80233CBC: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x80233CBC: nop

    after_4:
    // 0x80233CC0: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80233CC4: bne         $v0, $zero, L_80233CD8
    if (ctx->r2 != 0) {
        // 0x80233CC8: addiu       $a0, $zero, 0xA1
        ctx->r4 = ADD32(0, 0XA1);
            goto L_80233CD8;
    }
    // 0x80233CC8: addiu       $a0, $zero, 0xA1
    ctx->r4 = ADD32(0, 0XA1);
    // 0x80233CCC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80233CD0: jal         0x8002A2F8
    // 0x80233CD4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_5;
    // 0x80233CD4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
L_80233CD8:
    // 0x80233CD8: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x80233CDC: slti        $v0, $v0, 0x64
    ctx->r2 = SIGNED(ctx->r2) < 0X64 ? 1 : 0;
    // 0x80233CE0: beq         $v0, $zero, L_80233CFC
    if (ctx->r2 == 0) {
        // 0x80233CE4: nop
    
            goto L_80233CFC;
    }
    // 0x80233CE4: nop

    // 0x80233CE8: lhu         $v0, 0x43C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X43C);
    // 0x80233CEC: addiu       $v0, $v0, 0x18
    ctx->r2 = ADD32(ctx->r2, 0X18);
    // 0x80233CF0: sh          $v0, 0x43C($s1)
    MEM_H(0X43C, ctx->r17) = ctx->r2;
    // 0x80233CF4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80233CF8: sw          $v0, 0x430($s1)
    MEM_W(0X430, ctx->r17) = ctx->r2;
L_80233CFC:
    // 0x80233CFC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80233D00: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80233D04: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233D08: jr          $ra
    // 0x80233D0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80233D0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802346B8_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802346B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802346BC: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x802346C0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802346C4: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x802346C8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x802346CC: bne         $v1, $v0, L_80234730
    if (ctx->r3 != ctx->r2) {
        // 0x802346D0: addiu       $v0, $zero, 0x19
        ctx->r2 = ADD32(0, 0X19);
            goto L_80234730;
    }
    // 0x802346D0: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    // 0x802346D4: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802346D8: lw          $v0, -0x4A38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4A38);
    // 0x802346DC: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x802346E0: lw          $a0, -0x4944($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4944);
    // 0x802346E4: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x802346E8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802346EC: sb          $zero, -0x3762($at)
    MEM_B(-0X3762, ctx->r1) = 0;
    // 0x802346F0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802346F4: sb          $zero, -0x3764($at)
    MEM_B(-0X3764, ctx->r1) = 0;
    // 0x802346F8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802346FC: sb          $v1, -0x3763($at)
    MEM_B(-0X3763, ctx->r1) = ctx->r3;
    // 0x80234700: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234704: sb          $zero, -0x375F($at)
    MEM_B(-0X375F, ctx->r1) = 0;
    // 0x80234708: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023470C: sb          $zero, -0x3761($at)
    MEM_B(-0X3761, ctx->r1) = 0;
    // 0x80234710: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234714: sb          $v1, -0x3760($at)
    MEM_B(-0X3760, ctx->r1) = ctx->r3;
    // 0x80234718: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023471C: sw          $v0, -0x376C($at)
    MEM_W(-0X376C, ctx->r1) = ctx->r2;
    // 0x80234720: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234724: sw          $a0, -0x3768($at)
    MEM_W(-0X3768, ctx->r1) = ctx->r4;
    // 0x80234728: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x8023472C: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
L_80234730:
    // 0x80234730: bne         $v1, $v0, L_80234744
    if (ctx->r3 != ctx->r2) {
        // 0x80234734: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_80234744;
    }
    // 0x80234734: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80234738: lw          $v1, 0x28($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X28);
    // 0x8023473C: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80234740: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_80234744:
    // 0x80234744: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80234748: addiu       $v0, $zero, 0xAA
    ctx->r2 = ADD32(0, 0XAA);
    // 0x8023474C: bne         $v1, $v0, L_80234770
    if (ctx->r3 != ctx->r2) {
        // 0x80234750: addiu       $v0, $zero, 0xB6
        ctx->r2 = ADD32(0, 0XB6);
            goto L_80234770;
    }
    // 0x80234750: addiu       $v0, $zero, 0xB6
    ctx->r2 = ADD32(0, 0XB6);
    // 0x80234754: lw          $v1, 0x28($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X28);
    // 0x80234758: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8023475C: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80234760: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80234764: sb          $v0, 0xA($v1)
    MEM_B(0XA, ctx->r3) = ctx->r2;
    // 0x80234768: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x8023476C: addiu       $v0, $zero, 0xB6
    ctx->r2 = ADD32(0, 0XB6);
L_80234770:
    // 0x80234770: bne         $v1, $v0, L_80234788
    if (ctx->r3 != ctx->r2) {
        // 0x80234774: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_80234788;
    }
    // 0x80234774: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80234778: lw          $v1, 0x28($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X28);
    // 0x8023477C: sb          $v0, 0x10C($v1)
    MEM_B(0X10C, ctx->r3) = ctx->r2;
    // 0x80234780: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x80234784: sb          $v0, 0x118($v1)
    MEM_B(0X118, ctx->r3) = ctx->r2;
L_80234788:
    // 0x80234788: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x8023478C: addiu       $v0, $zero, 0xDC
    ctx->r2 = ADD32(0, 0XDC);
    // 0x80234790: bne         $v1, $v0, L_802347B4
    if (ctx->r3 != ctx->r2) {
        // 0x80234794: addiu       $v0, $zero, 0x15E
        ctx->r2 = ADD32(0, 0X15E);
            goto L_802347B4;
    }
    // 0x80234794: addiu       $v0, $zero, 0x15E
    ctx->r2 = ADD32(0, 0X15E);
    // 0x80234798: lw          $v1, 0x28($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X28);
    // 0x8023479C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802347A0: sb          $v0, 0x10C($v1)
    MEM_B(0X10C, ctx->r3) = ctx->r2;
    // 0x802347A4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802347A8: sb          $v0, 0x118($v1)
    MEM_B(0X118, ctx->r3) = ctx->r2;
    // 0x802347AC: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x802347B0: addiu       $v0, $zero, 0x15E
    ctx->r2 = ADD32(0, 0X15E);
L_802347B4:
    // 0x802347B4: bne         $v1, $v0, L_802347CC
    if (ctx->r3 != ctx->r2) {
        // 0x802347B8: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_802347CC;
    }
    // 0x802347B8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802347BC: lw          $v1, 0x28($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X28);
    // 0x802347C0: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x802347C4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802347C8: sb          $v0, 0xA($v1)
    MEM_B(0XA, ctx->r3) = ctx->r2;
L_802347CC:
    // 0x802347CC: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x802347D0: addiu       $v0, $zero, 0x1B8
    ctx->r2 = ADD32(0, 0X1B8);
    // 0x802347D4: bne         $v1, $v0, L_802347EC
    if (ctx->r3 != ctx->r2) {
        // 0x802347D8: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_802347EC;
    }
    // 0x802347D8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802347DC: lw          $v1, 0x28($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X28);
    // 0x802347E0: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x802347E4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802347E8: sb          $v0, 0xA($v1)
    MEM_B(0XA, ctx->r3) = ctx->r2;
L_802347EC:
    // 0x802347EC: jal         0x80234340
    // 0x802347F0: nop

    func_80234340_ovl27(rdram, ctx);
        goto after_0;
    // 0x802347F0: nop

    after_0:
    // 0x802347F4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802347F8: jr          $ra
    // 0x802347FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802347FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D7C8_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D7C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D7CC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022D7D0: addiu       $a1, $a0, 0x14
    ctx->r5 = ADD32(ctx->r4, 0X14);
    // 0x8022D7D4: jal         0x8002A33C
    // 0x8022D7D8: addiu       $a0, $zero, 0x144
    ctx->r4 = ADD32(0, 0X144);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8022D7D8: addiu       $a0, $zero, 0x144
    ctx->r4 = ADD32(0, 0X144);
    after_0:
    // 0x8022D7DC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022D7E0: jr          $ra
    // 0x8022D7E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D7E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80235210_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235210: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80235214: bne         $v0, $zero, L_80235248
    if (ctx->r2 != 0) {
        // 0x80235218: addiu       $v0, $zero, 0xF
        ctx->r2 = ADD32(0, 0XF);
            goto L_80235248;
    }
    // 0x80235218: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x8023521C: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x80235220: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80235224: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x80235228: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x8023522C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80235230: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80235234: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x80235238: lw          $v1, 0x30($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X30);
    // 0x8023523C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80235240: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80235244: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_80235248:
    // 0x80235248: jr          $ra
    // 0x8023524C: nop

    TRACE_RETURN()
    return;
    // 0x8023524C: nop

;}
RECOMP_FUNC void func_802333B4_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802333B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802333B8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802333BC: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x802333C0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x802333C4: beq         $v1, $v0, L_8023340C
    if (ctx->r3 == ctx->r2) {
        // 0x802333C8: slti        $v0, $v1, 0xB
        ctx->r2 = SIGNED(ctx->r3) < 0XB ? 1 : 0;
            goto L_8023340C;
    }
    // 0x802333C8: slti        $v0, $v1, 0xB
    ctx->r2 = SIGNED(ctx->r3) < 0XB ? 1 : 0;
    // 0x802333CC: beql        $v0, $zero, L_802333E4
    if (ctx->r2 == 0) {
        // 0x802333D0: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_802333E4;
    }
    goto skip_0;
    // 0x802333D0: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    skip_0:
    // 0x802333D4: beq         $v1, $zero, L_802333F4
    if (ctx->r3 == 0) {
        // 0x802333D8: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_802333F4;
    }
    // 0x802333D8: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x802333DC: j           L_80233424
    // 0x802333E0: nop

        goto L_80233424;
    // 0x802333E0: nop

L_802333E4:
    // 0x802333E4: beq         $v1, $v0, L_8023341C
    if (ctx->r3 == ctx->r2) {
        // 0x802333E8: addiu       $a0, $zero, 0xC
        ctx->r4 = ADD32(0, 0XC);
            goto L_8023341C;
    }
    // 0x802333E8: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x802333EC: j           L_80233424
    // 0x802333F0: nop

        goto L_80233424;
    // 0x802333F0: nop

L_802333F4:
    // 0x802333F4: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x802333F8: sb          $v1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r3;
    // 0x802333FC: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x80233400: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x80233404: j           L_8023341C
    // 0x80233408: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
        goto L_8023341C;
    // 0x80233408: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
L_8023340C:
    // 0x8023340C: addiu       $v0, $zero, 0x84
    ctx->r2 = ADD32(0, 0X84);
    // 0x80233410: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80233414: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x80233418: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
L_8023341C:
    // 0x8023341C: jal         0x802340E8
    // 0x80233420: nop

    func_802340E8_ovl27(rdram, ctx);
        goto after_0;
    // 0x80233420: nop

    after_0:
L_80233424:
    // 0x80233424: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80233428: jal         0x80234148
    // 0x8023342C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_80234148_ovl27(rdram, ctx);
        goto after_1;
    // 0x8023342C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_1:
    // 0x80233430: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80233434: jr          $ra
    // 0x80233438: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80233438: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229510_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229510: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80229514: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80229518: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022951C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80229520: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229524: lh          $a2, 0x46($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X46);
    // 0x80229528: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022952C: jal         0x8004DA90
    // 0x80229530: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80229530: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x80229534: lhu         $v0, 0x46($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X46);
    // 0x80229538: lhu         $v1, 0x4E($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X4E);
    // 0x8022953C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80229540: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229544: jal         0x80040F30
    // 0x80229548: sh          $v0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r2;
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x80229548: sh          $v0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r2;
    after_1:
    // 0x8022954C: andi        $v0, $v0, 0x3000
    ctx->r2 = ctx->r2 & 0X3000;
    // 0x80229550: beq         $v0, $zero, L_802295AC
    if (ctx->r2 == 0) {
        // 0x80229554: addiu       $a0, $zero, 0x1B5
        ctx->r4 = ADD32(0, 0X1B5);
            goto L_802295AC;
    }
    // 0x80229554: addiu       $a0, $zero, 0x1B5
    ctx->r4 = ADD32(0, 0X1B5);
    // 0x80229558: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x8022955C: jal         0x8002A33C
    // 0x80229560: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x80229560: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80229564: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80229568: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022956C: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80229570: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80229574: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80229578: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x8022957C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80229580: jal         0x80050294
    // 0x80229584: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x80229584: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
    after_3:
    // 0x80229588: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x8022958C: addiu       $a1, $zero, 0x7D0
    ctx->r5 = ADD32(0, 0X7D0);
    // 0x80229590: addiu       $a2, $zero, 0x1388
    ctx->r6 = ADD32(0, 0X1388);
    // 0x80229594: jal         0x8003491C
    // 0x80229598: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_8003491C_FD1C(rdram, ctx);
        goto after_4;
    // 0x80229598: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022959C: lhu         $v0, 0x16($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X16);
    // 0x802295A0: sh          $zero, 0x334($s1)
    MEM_H(0X334, ctx->r17) = 0;
    // 0x802295A4: addiu       $v0, $v0, 0x120
    ctx->r2 = ADD32(ctx->r2, 0X120);
    // 0x802295A8: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
L_802295AC:
    // 0x802295AC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802295B0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802295B4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802295B8: jr          $ra
    // 0x802295BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802295BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80232D80_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232D80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232D84: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232D88: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232D8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80232D90: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80232D94: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80232D98: beq         $v1, $v0, L_80232DCC
    if (ctx->r3 == ctx->r2) {
        // 0x80232D9C: nop
    
            goto L_80232DCC;
    }
    // 0x80232D9C: nop

    // 0x80232DA0: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x80232DA4: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80232DA8: jalr        $v0
    // 0x80232DAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80232DAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80232DB0: jal         0x8006072C
    // 0x80232DB4: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_1;
    // 0x80232DB4: nop

    after_1:
    // 0x80232DB8: bne         $v0, $zero, L_80232DCC
    if (ctx->r2 != 0) {
        // 0x80232DBC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80232DCC;
    }
    // 0x80232DBC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232DC0: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80232DC4: bne         $v1, $v0, L_80232DE4
    if (ctx->r3 != ctx->r2) {
        // 0x80232DC8: nop
    
            goto L_80232DE4;
    }
    // 0x80232DC8: nop

L_80232DCC:
    // 0x80232DCC: jal         0x80036E48
    // 0x80232DD0: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80036E48_12248(rdram, ctx);
        goto after_2;
    // 0x80232DD0: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_2:
    // 0x80232DD4: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80232DD8: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x80232DDC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232DE0: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80232DE4:
    // 0x80232DE4: jal         0x8005FB90
    // 0x80232DE8: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_3;
    // 0x80232DE8: nop

    after_3:
    // 0x80232DEC: jal         0x80060018
    // 0x80232DF0: nop

    func_80060018_3B418(rdram, ctx);
        goto after_4;
    // 0x80232DF0: nop

    after_4:
    // 0x80232DF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80232DF8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232DFC: jr          $ra
    // 0x80232E00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232E00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80231910_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231910: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231914: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231918: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023191C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80231920: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x80231924: sll         $v1, $v0, 24
    ctx->r3 = S32(ctx->r2 << 24);
    // 0x80231928: sra         $a0, $v1, 24
    ctx->r4 = S32(SIGNED(ctx->r3) >> 24);
    // 0x8023192C: blez        $a0, L_80231A24
    if (SIGNED(ctx->r4) <= 0) {
        // 0x80231930: lui         $v0, 0x2AAA
        ctx->r2 = S32(0X2AAA << 16);
            goto L_80231A24;
    }
    // 0x80231930: lui         $v0, 0x2AAA
    ctx->r2 = S32(0X2AAA << 16);
    // 0x80231934: ori         $v0, $v0, 0xAAAB
    ctx->r2 = ctx->r2 | 0XAAAB;
    // 0x80231938: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023193C: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x80231940: mfhi        $a1
    ctx->r5 = hi;
    // 0x80231944: subu        $v1, $a1, $v1
    ctx->r3 = SUB32(ctx->r5, ctx->r3);
    // 0x80231948: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8023194C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80231950: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80231954: subu        $v0, $a0, $v0
    ctx->r2 = SUB32(ctx->r4, ctx->r2);
    // 0x80231958: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8023195C: bne         $v0, $zero, L_8023197C
    if (ctx->r2 != 0) {
        // 0x80231960: nop
    
            goto L_8023197C;
    }
    // 0x80231960: nop

    // 0x80231964: lbu         $v1, 0x22($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X22);
    // 0x80231968: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x8023196C: sltiu       $v0, $v0, 0x80
    ctx->r2 = ctx->r2 < 0X80 ? 1 : 0;
    // 0x80231970: beq         $v0, $zero, L_8023197C
    if (ctx->r2 == 0) {
        // 0x80231974: addiu       $v0, $v1, 0x20
        ctx->r2 = ADD32(ctx->r3, 0X20);
            goto L_8023197C;
    }
    // 0x80231974: addiu       $v0, $v1, 0x20
    ctx->r2 = ADD32(ctx->r3, 0X20);
    // 0x80231978: sb          $v0, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r2;
L_8023197C:
    // 0x8023197C: jal         0x800A3450
    // 0x80231980: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80231980: nop

    after_0:
    // 0x80231984: lhu         $v1, 0x1C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1C);
    // 0x80231988: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8023198C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80231990: jal         0x800A3450
    // 0x80231994: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80231994: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    after_1:
    // 0x80231998: lhu         $v1, 0x20($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X20);
    // 0x8023199C: lbu         $a0, 0xE($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XE);
    // 0x802319A0: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802319A4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802319A8: andi        $a0, $a0, 0x1
    ctx->r4 = ctx->r4 & 0X1;
    // 0x802319AC: bne         $a0, $zero, L_802319CC
    if (ctx->r4 != 0) {
        // 0x802319B0: sh          $v1, 0x20($s0)
        MEM_H(0X20, ctx->r16) = ctx->r3;
            goto L_802319CC;
    }
    // 0x802319B0: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    // 0x802319B4: jal         0x800A3450
    // 0x802319B8: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x802319B8: nop

    after_2:
    // 0x802319BC: lhu         $v1, 0x1E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1E);
    // 0x802319C0: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802319C4: j           L_802319E0
    // 0x802319C8: addiu       $v1, $v1, -0x2
    ctx->r3 = ADD32(ctx->r3, -0X2);
        goto L_802319E0;
    // 0x802319C8: addiu       $v1, $v1, -0x2
    ctx->r3 = ADD32(ctx->r3, -0X2);
L_802319CC:
    // 0x802319CC: jal         0x800A3450
    // 0x802319D0: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x802319D0: nop

    after_3:
    // 0x802319D4: lhu         $v1, 0x1E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1E);
    // 0x802319D8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802319DC: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
L_802319E0:
    // 0x802319E0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x802319E4: sh          $v1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r3;
    // 0x802319E8: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x802319EC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802319F0: bne         $v0, $zero, L_80231A04
    if (ctx->r2 != 0) {
        // 0x802319F4: lui         $a0, 0xFFFD
        ctx->r4 = S32(0XFFFD << 16);
            goto L_80231A04;
    }
    // 0x802319F4: lui         $a0, 0xFFFD
    ctx->r4 = S32(0XFFFD << 16);
    // 0x802319F8: lhu         $v0, 0x24($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X24);
    // 0x802319FC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231A00: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
L_80231A04:
    // 0x80231A04: lbu         $v1, 0xE($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XE);
    // 0x80231A08: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x80231A0C: ori         $a0, $a0, 0xFDFE
    ctx->r4 = ctx->r4 | 0XFDFE;
    // 0x80231A10: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80231A14: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80231A18: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x80231A1C: j           L_80231A2C
    // 0x80231A20: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
        goto L_80231A2C;
    // 0x80231A20: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
L_80231A24:
    // 0x80231A24: jal         0x8004F5C4
    // 0x80231A28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_4;
    // 0x80231A28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_80231A2C:
    // 0x80231A2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80231A30: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231A34: jr          $ra
    // 0x80231A38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231A38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232994_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232994: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80232998: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023299C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802329A0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802329A4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802329A8: lb          $v0, 0xE($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XE);
    // 0x802329AC: blez        $v0, L_80232AD0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x802329B0: nop
    
            goto L_80232AD0;
    }
    // 0x802329B0: nop

    // 0x802329B4: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x802329B8: lbu         $s0, 0xC($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0XC);
    // 0x802329BC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802329C0: jal         0x800A3450
    // 0x802329C4: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x802329C4: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    after_0:
    // 0x802329C8: sll         $s0, $s0, 24
    ctx->r16 = S32(ctx->r16 << 24);
    // 0x802329CC: sra         $s0, $s0, 20
    ctx->r16 = S32(SIGNED(ctx->r16) >> 20);
    // 0x802329D0: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x802329D4: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    // 0x802329D8: lbu         $a0, -0x5C47($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X5C47);
    // 0x802329DC: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802329E0: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    // 0x802329E4: lbu         $v1, -0x5C43($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X5C43);
    // 0x802329E8: lhu         $a1, 0x1C($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X1C);
    // 0x802329EC: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x802329F0: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x802329F4: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x802329F8: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x802329FC: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80232A00: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x80232A04: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x80232A08: jal         0x800A3450
    // 0x80232A0C: sh          $a1, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r5;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80232A0C: sh          $a1, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r5;
    after_1:
    // 0x80232A10: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80232A14: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    // 0x80232A18: lbu         $a0, -0x5C46($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X5C46);
    // 0x80232A1C: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80232A20: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    // 0x80232A24: lbu         $v1, -0x5C42($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X5C42);
    // 0x80232A28: lhu         $a1, 0x1E($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X1E);
    // 0x80232A2C: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x80232A30: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80232A34: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x80232A38: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x80232A3C: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80232A40: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x80232A44: subu        $a1, $a1, $a0
    ctx->r5 = SUB32(ctx->r5, ctx->r4);
    // 0x80232A48: jal         0x800A3450
    // 0x80232A4C: sh          $a1, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r5;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x80232A4C: sh          $a1, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r5;
    after_2:
    // 0x80232A50: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80232A54: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    // 0x80232A58: lbu         $a0, -0x5C45($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X5C45);
    // 0x80232A5C: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80232A60: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    // 0x80232A64: lbu         $v1, -0x5C41($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X5C41);
    // 0x80232A68: lhu         $a1, 0x20($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X20);
    // 0x80232A6C: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x80232A70: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80232A74: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x80232A78: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x80232A7C: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80232A80: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x80232A84: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x80232A88: lbu         $a0, 0xE($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XE);
    // 0x80232A8C: lw          $v0, 0x18($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X18);
    // 0x80232A90: lui         $a2, 0xFFFE
    ctx->r6 = S32(0XFFFE << 16);
    // 0x80232A94: ori         $a2, $a2, 0xFEFF
    ctx->r6 = ctx->r6 | 0XFEFF;
    // 0x80232A98: sh          $a1, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r5;
    // 0x80232A9C: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80232AA0: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    // 0x80232AA4: lbu         $v1, -0x5C44($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X5C44);
    // 0x80232AA8: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x80232AAC: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80232AB0: sw          $v0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r2;
    // 0x80232AB4: lhu         $v0, 0x24($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X24);
    // 0x80232AB8: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x80232ABC: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x80232AC0: sb          $a0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r4;
    // 0x80232AC4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80232AC8: j           L_80232AD8
    // 0x80232ACC: sh          $v0, 0x24($s1)
    MEM_H(0X24, ctx->r17) = ctx->r2;
        goto L_80232AD8;
    // 0x80232ACC: sh          $v0, 0x24($s1)
    MEM_H(0X24, ctx->r17) = ctx->r2;
L_80232AD0:
    // 0x80232AD0: jal         0x8004F5C4
    // 0x80232AD4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_3;
    // 0x80232AD4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
L_80232AD8:
    // 0x80232AD8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80232ADC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80232AE0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232AE4: jr          $ra
    // 0x80232AE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80232AE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80230BE0_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230BE0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80230BE4: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80230BE8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230BEC: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80230BF0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80230BF4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80230BF8: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x80230BFC: jal         0x80047284
    // 0x80230C00: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    func_80047284_22684(rdram, ctx);
        goto after_0;
    // 0x80230C00: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    after_0:
    // 0x80230C04: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80230C08: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80230C0C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80230C10: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80230C14: lw          $v0, -0x5E50($at)
    ctx->r2 = MEM_W(ctx->r1, -0X5E50);
    // 0x80230C18: jalr        $v0
    // 0x80230C1C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x80230C1C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80230C20: addiu       $s1, $sp, 0x28
    ctx->r17 = ADD32(ctx->r29, 0X28);
    // 0x80230C24: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80230C28: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    // 0x80230C2C: jal         0x8009A3B4
    // 0x80230C30: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80230C30: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80230C34: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80230C38: lhu         $v0, 0x2A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X2A);
    // 0x80230C3C: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x80230C40: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80230C44: addiu       $v0, $v0, -0x2D
    ctx->r2 = ADD32(ctx->r2, -0X2D);
    // 0x80230C48: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x80230C4C: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80230C50: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80230C54: addiu       $v0, $s0, 0x4C
    ctx->r2 = ADD32(ctx->r16, 0X4C);
    // 0x80230C58: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80230C5C: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x80230C60: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80230C64: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80230C68: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80230C6C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80230C70: jal         0x80051E18
    // 0x80230C74: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_3;
    // 0x80230C74: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_3:
    // 0x80230C78: sw          $zero, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = 0;
    // 0x80230C7C: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x80230C80: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80230C84: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80230C88: jr          $ra
    // 0x80230C8C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80230C8C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8022AE1C_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AE1C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8022AE20: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8022AE24: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x8022AE28: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x8022AE2C: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x8022AE30: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x8022AE34: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x8022AE38: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8022AE3C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8022AE40: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022AE44: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022AE48: lb          $v1, 0xA7($s3)
    ctx->r3 = MEM_B(ctx->r19, 0XA7);
    // 0x8022AE4C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022AE50: bne         $v1, $v0, L_8022B000
    if (ctx->r3 != ctx->r2) {
        // 0x8022AE54: addiu       $s2, $s3, 0x2E8
        ctx->r18 = ADD32(ctx->r19, 0X2E8);
            goto L_8022B000;
    }
    // 0x8022AE54: addiu       $s2, $s3, 0x2E8
    ctx->r18 = ADD32(ctx->r19, 0X2E8);
    // 0x8022AE58: lh          $v0, 0x35C($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X35C);
    // 0x8022AE5C: sb          $zero, 0x9($s3)
    MEM_B(0X9, ctx->r19) = 0;
    // 0x8022AE60: bne         $v0, $zero, L_8022AFF8
    if (ctx->r2 != 0) {
        // 0x8022AE64: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022AFF8;
    }
    // 0x8022AE64: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022AE68: addiu       $a0, $zero, 0x1B2
    ctx->r4 = ADD32(0, 0X1B2);
    // 0x8022AE6C: jal         0x8002A33C
    // 0x8022AE70: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8022AE70: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    after_0:
    // 0x8022AE74: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x8022AE78: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    // 0x8022AE7C: addiu       $s5, $zero, 0x200
    ctx->r21 = ADD32(0, 0X200);
    // 0x8022AE80: addiu       $s6, $zero, 0x3
    ctx->r22 = ADD32(0, 0X3);
L_8022AE84:
    // 0x8022AE84: jal         0x8004EFE4
    // 0x8022AE88: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_1;
    // 0x8022AE88: nop

    after_1:
    // 0x8022AE8C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022AE90: beq         $s1, $zero, L_8022AF94
    if (ctx->r17 == 0) {
        // 0x8022AE94: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8022AF94;
    }
    // 0x8022AE94: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022AE98: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    // 0x8022AE9C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022AEA0: addiu       $v0, $v0, 0x4D58
    ctx->r2 = ADD32(ctx->r2, 0X4D58);
    // 0x8022AEA4: sll         $a1, $s4, 24
    ctx->r5 = S32(ctx->r20 << 24);
    // 0x8022AEA8: sra         $a1, $a1, 24
    ctx->r5 = S32(SIGNED(ctx->r5) >> 24);
    // 0x8022AEAC: sll         $v1, $a1, 1
    ctx->r3 = S32(ctx->r5 << 1);
    // 0x8022AEB0: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8022AEB4: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x8022AEB8: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8022AEBC: addu        $v1, $s3, $v1
    ctx->r3 = ADD32(ctx->r19, ctx->r3);
    // 0x8022AEC0: sb          $s7, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r23;
    // 0x8022AEC4: sb          $zero, 0x2($s1)
    MEM_B(0X2, ctx->r17) = 0;
    // 0x8022AEC8: sw          $v0, 0xB8($s1)
    MEM_W(0XB8, ctx->r17) = ctx->r2;
    // 0x8022AECC: lhu         $v0, 0x180($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X180);
    // 0x8022AED0: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
    // 0x8022AED4: lhu         $v0, 0x182($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X182);
    // 0x8022AED8: addiu       $v0, $v0, -0x50
    ctx->r2 = ADD32(ctx->r2, -0X50);
    // 0x8022AEDC: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x8022AEE0: lhu         $v0, 0x184($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X184);
    // 0x8022AEE4: lh          $v1, 0x16($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X16);
    // 0x8022AEE8: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    // 0x8022AEEC: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x8022AEF0: lh          $a0, 0x18($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X18);
    // 0x8022AEF4: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022AEF8: sw          $v1, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r3;
    // 0x8022AEFC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022AF00: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022AF04: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x8022AF08: bne         $a1, $zero, L_8022AF28
    if (ctx->r5 != 0) {
        // 0x8022AF0C: sw          $a0, 0x24($s1)
        MEM_W(0X24, ctx->r17) = ctx->r4;
            goto L_8022AF28;
    }
    // 0x8022AF0C: sw          $a0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r4;
    // 0x8022AF10: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8022AF14: lhu         $a2, 0x56($s3)
    ctx->r6 = MEM_HU(ctx->r19, 0X56);
    // 0x8022AF18: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x8022AF1C: addiu       $a3, $zero, 0xA30
    ctx->r7 = ADD32(0, 0XA30);
    // 0x8022AF20: j           L_8022AF3C
    // 0x8022AF24: addiu       $v0, $zero, 0xB0
    ctx->r2 = ADD32(0, 0XB0);
        goto L_8022AF3C;
    // 0x8022AF24: addiu       $v0, $zero, 0xB0
    ctx->r2 = ADD32(0, 0XB0);
L_8022AF28:
    // 0x8022AF28: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8022AF2C: lhu         $a2, 0x56($s3)
    ctx->r6 = MEM_HU(ctx->r19, 0X56);
    // 0x8022AF30: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x8022AF34: addiu       $a3, $zero, 0xA30
    ctx->r7 = ADD32(0, 0XA30);
    // 0x8022AF38: addiu       $v0, $zero, -0xB0
    ctx->r2 = ADD32(0, -0XB0);
L_8022AF3C:
    // 0x8022AF3C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8022AF40: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022AF44: jal         0x8004DBA0
    // 0x8022AF48: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_2;
    // 0x8022AF48: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_2:
    // 0x8022AF4C: jal         0x800A3450
    // 0x8022AF50: sh          $zero, 0x28($s2)
    MEM_H(0X28, ctx->r18) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x8022AF50: sh          $zero, 0x28($s2)
    MEM_H(0X28, ctx->r18) = 0;
    after_3:
    // 0x8022AF54: andi        $v0, $v0, 0x3FF
    ctx->r2 = ctx->r2 & 0X3FF;
    // 0x8022AF58: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022AF5C: jal         0x800A3450
    // 0x8022AF60: sh          $v0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x8022AF60: sh          $v0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r2;
    after_4:
    // 0x8022AF64: addiu       $a0, $s2, 0x24
    ctx->r4 = ADD32(ctx->r18, 0X24);
    // 0x8022AF68: addiu       $s0, $s1, 0x8C
    ctx->r16 = ADD32(ctx->r17, 0X8C);
    // 0x8022AF6C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022AF70: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022AF74: jal         0x80031600
    // 0x8022AF78: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
    func_80031600_CA00(rdram, ctx);
        goto after_5;
    // 0x8022AF78: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
    after_5:
    // 0x8022AF7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022AF80: addiu       $a1, $s2, 0xC
    ctx->r5 = ADD32(ctx->r18, 0XC);
    // 0x8022AF84: sw          $s5, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r21;
    // 0x8022AF88: sw          $s5, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r21;
    // 0x8022AF8C: jal         0x80031DA8
    // 0x8022AF90: sw          $s5, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r21;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_6;
    // 0x8022AF90: sw          $s5, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r21;
    after_6:
L_8022AF94:
    // 0x8022AF94: jal         0x8004F144
    // 0x8022AF98: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_7;
    // 0x8022AF98: nop

    after_7:
    // 0x8022AF9C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022AFA0: beq         $v1, $zero, L_8022AFD8
    if (ctx->r3 == 0) {
        // 0x8022AFA4: addiu       $v0, $s4, 0x1
        ctx->r2 = ADD32(ctx->r20, 0X1);
            goto L_8022AFD8;
    }
    // 0x8022AFA4: addiu       $v0, $s4, 0x1
    ctx->r2 = ADD32(ctx->r20, 0X1);
    // 0x8022AFA8: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x8022AFAC: sb          $s6, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r22;
    // 0x8022AFB0: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8022AFB4: sb          $s6, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r22;
    // 0x8022AFB8: sb          $s7, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r23;
    // 0x8022AFBC: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x8022AFC0: sh          $v0, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = ctx->r2;
    // 0x8022AFC4: lhu         $v0, 0x16($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X16);
    // 0x8022AFC8: sh          $v0, 0x1E($v1)
    MEM_H(0X1E, ctx->r3) = ctx->r2;
    // 0x8022AFCC: lhu         $v0, 0x18($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18);
    // 0x8022AFD0: sh          $v0, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r2;
    // 0x8022AFD4: addiu       $v0, $s4, 0x1
    ctx->r2 = ADD32(ctx->r20, 0X1);
L_8022AFD8:
    // 0x8022AFD8: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    // 0x8022AFDC: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022AFE0: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022AFE4: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x8022AFE8: bne         $v0, $zero, L_8022AE84
    if (ctx->r2 != 0) {
        // 0x8022AFEC: addiu       $v0, $zero, 0xB4
        ctx->r2 = ADD32(0, 0XB4);
            goto L_8022AE84;
    }
    // 0x8022AFEC: addiu       $v0, $zero, 0xB4
    ctx->r2 = ADD32(0, 0XB4);
    // 0x8022AFF0: j           L_8022B000
    // 0x8022AFF4: sh          $v0, 0x74($s2)
    MEM_H(0X74, ctx->r18) = ctx->r2;
        goto L_8022B000;
    // 0x8022AFF4: sh          $v0, 0x74($s2)
    MEM_H(0X74, ctx->r18) = ctx->r2;
L_8022AFF8:
    // 0x8022AFF8: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022AFFC: sh          $v0, 0x35C($s3)
    MEM_H(0X35C, ctx->r19) = ctx->r2;
L_8022B000:
    // 0x8022B000: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x8022B004: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x8022B008: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x8022B00C: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8022B010: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8022B014: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8022B018: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8022B01C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022B020: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022B024: jr          $ra
    // 0x8022B028: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x8022B028: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80236C8C_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236C8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236C90: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236C94: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80236C98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80236C9C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80236CA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236CA4: beq         $v1, $v0, L_80236D04
    if (ctx->r3 == ctx->r2) {
        // 0x80236CA8: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80236D04;
    }
    // 0x80236CA8: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80236CAC: beql        $v0, $zero, L_80236CC4
    if (ctx->r2 == 0) {
        // 0x80236CB0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80236CC4;
    }
    goto skip_0;
    // 0x80236CB0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80236CB4: beq         $v1, $zero, L_80236CD4
    if (ctx->r3 == 0) {
        // 0x80236CB8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80236CD4;
    }
    // 0x80236CB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236CBC: j           L_80236D24
    // 0x80236CC0: nop

        goto L_80236D24;
    // 0x80236CC0: nop

L_80236CC4:
    // 0x80236CC4: beq         $v1, $v0, L_80236D1C
    if (ctx->r3 == ctx->r2) {
        // 0x80236CC8: nop
    
            goto L_80236D1C;
    }
    // 0x80236CC8: nop

    // 0x80236CCC: j           L_80236D24
    // 0x80236CD0: nop

        goto L_80236D24;
    // 0x80236CD0: nop

L_80236CD4:
    // 0x80236CD4: addiu       $v0, $zero, -0x672
    ctx->r2 = ADD32(0, -0X672);
    // 0x80236CD8: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80236CDC: addiu       $v0, $zero, -0xA
    ctx->r2 = ADD32(0, -0XA);
    // 0x80236CE0: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80236CE4: addiu       $v0, $zero, 0x28A
    ctx->r2 = ADD32(0, 0X28A);
    // 0x80236CE8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80236CEC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80236CF0: jal         0x80050294
    // 0x80236CF4: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80236CF4: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    after_0:
    // 0x80236CF8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80236CFC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236D00: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80236D04:
    // 0x80236D04: jal         0x80051770
    // 0x80236D08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051770_2CB70(rdram, ctx);
        goto after_1;
    // 0x80236D08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80236D0C: jal         0x80051248
    // 0x80236D10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051248_2C648(rdram, ctx);
        goto after_2;
    // 0x80236D10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80236D14: j           L_80236D24
    // 0x80236D18: nop

        goto L_80236D24;
    // 0x80236D18: nop

L_80236D1C:
    // 0x80236D1C: jal         0x8005044C
    // 0x80236D20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_3;
    // 0x80236D20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_80236D24:
    // 0x80236D24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80236D28: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80236D2C: jr          $ra
    // 0x80236D30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80236D30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D0A0_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D0A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D0A4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022D0A8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022D0AC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D0B0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022D0B4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D0B8: lw          $v0, -0x605C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X605C);
    // 0x8022D0BC: jalr        $v0
    // 0x8022D0C0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022D0C0: nop

    after_0:
    // 0x8022D0C4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022D0C8: jr          $ra
    // 0x8022D0CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D0CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227350_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227350: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227354: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80227358: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x8022735C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227360: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80227364: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227368: lw          $v0, -0x6750($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6750);
    // 0x8022736C: jalr        $v0
    // 0x80227370: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80227370: nop

    after_0:
    // 0x80227374: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80227378: jr          $ra
    // 0x8022737C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022737C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802299A0_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802299A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802299A4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802299A8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802299AC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802299B0: addiu       $s1, $s0, 0x2E8
    ctx->r17 = ADD32(ctx->r16, 0X2E8);
    // 0x802299B4: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x802299B8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802299BC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802299C0: jal         0x8009A3B4
    // 0x802299C4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802299C4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x802299C8: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x802299CC: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x802299D0: jal         0x8009A3B4
    // 0x802299D4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802299D4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x802299D8: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x802299DC: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x802299E0: jal         0x8009A3B4
    // 0x802299E4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x802299E4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x802299E8: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x802299EC: addiu       $a0, $zero, 0x4210
    ctx->r4 = ADD32(0, 0X4210);
    // 0x802299F0: sh          $zero, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = 0;
    // 0x802299F4: sll         $v0, $v1, 24
    ctx->r2 = S32(ctx->r3 << 24);
L_802299F8:
    // 0x802299F8: sra         $v0, $v0, 21
    ctx->r2 = S32(SIGNED(ctx->r2) >> 21);
    // 0x802299FC: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x80229A00: sh          $a0, 0x186($v0)
    MEM_H(0X186, ctx->r2) = ctx->r4;
    // 0x80229A04: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80229A08: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80229A0C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80229A10: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80229A14: slti        $v0, $v0, 0x8
    ctx->r2 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x80229A18: bne         $v0, $zero, L_802299F8
    if (ctx->r2 != 0) {
        // 0x80229A1C: sll         $v0, $v1, 24
        ctx->r2 = S32(ctx->r3 << 24);
            goto L_802299F8;
    }
    // 0x80229A1C: sll         $v0, $v1, 24
    ctx->r2 = S32(ctx->r3 << 24);
    // 0x80229A20: jal         0x800A3450
    // 0x80229A24: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80229A24: nop

    after_3:
    // 0x80229A28: sh          $v0, 0x78($s1)
    MEM_H(0X78, ctx->r17) = ctx->r2;
    // 0x80229A2C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80229A30: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80229A34: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80229A38: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229A3C: lw          $v0, -0x6584($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6584);
    // 0x80229A40: jalr        $v0
    // 0x80229A44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x80229A44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80229A48: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80229A4C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229A50: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229A54: jr          $ra
    // 0x80229A58: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80229A58: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80237B34_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237B34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80237B38: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80237B3C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80237B40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80237B44: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80237B48: bne         $v0, $zero, L_80237B64
    if (ctx->r2 != 0) {
        // 0x80237B4C: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_80237B64;
    }
    // 0x80237B4C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80237B50: jal         0x80050294
    // 0x80237B54: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80237B54: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80237B58: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80237B5C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80237B60: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80237B64:
    // 0x80237B64: jal         0x8005044C
    // 0x80237B68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x80237B68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80237B6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80237B70: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80237B74: jr          $ra
    // 0x80237B78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80237B78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226A44_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226A44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226A48: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80226A4C: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80226A50: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226A54: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80226A58: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226A5C: lw          $v0, -0x67CC($at)
    ctx->r2 = MEM_W(ctx->r1, -0X67CC);
    // 0x80226A60: jalr        $v0
    // 0x80226A64: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80226A64: nop

    after_0:
    // 0x80226A68: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80226A6C: jr          $ra
    // 0x80226A70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226A70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F1B0_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F1B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022F1B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F1B8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F1BC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022F1C0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022F1C4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022F1C8: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x8022F1CC: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x8022F1D0: jal         0x8004D5D4
    // 0x8022F1D4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022F1D4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022F1D8: addiu       $s1, $s0, 0x18
    ctx->r17 = ADD32(ctx->r16, 0X18);
    // 0x8022F1DC: jal         0x8002C678
    // 0x8022F1E0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8002C678_7A78(rdram, ctx);
        goto after_1;
    // 0x8022F1E0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x8022F1E4: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    // 0x8022F1E8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022F1EC: jal         0x800319B4
    // 0x8022F1F0: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_2;
    // 0x8022F1F0: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    after_2:
    // 0x8022F1F4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022F1F8: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x8022F1FC: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x8022F200: sw          $v1, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r3;
    // 0x8022F204: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022F208: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022F20C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022F210: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022F214: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F218: jr          $ra
    // 0x8022F21C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022F21C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022AE04_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AE04: lb          $v1, 0xA7($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XA7);
    // 0x8022AE08: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022AE0C: beql        $v1, $v0, L_8022AE14
    if (ctx->r3 == ctx->r2) {
        // 0x8022AE10: sb          $zero, 0x9($a0)
        MEM_B(0X9, ctx->r4) = 0;
            goto L_8022AE14;
    }
    goto skip_0;
    // 0x8022AE10: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    skip_0:
L_8022AE14:
    // 0x8022AE14: jr          $ra
    // 0x8022AE18: nop

    TRACE_RETURN()
    return;
    // 0x8022AE18: nop

;}
RECOMP_FUNC void func_802317FC_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802317FC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80231800: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80231804: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80231808: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023180C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231810: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80231814: sltiu       $v0, $v1, 0x30
    ctx->r2 = ctx->r3 < 0X30 ? 1 : 0;
    // 0x80231818: beq         $v0, $zero, L_802318F4
    if (ctx->r2 == 0) {
        // 0x8023181C: andi        $v0, $v1, 0xF
        ctx->r2 = ctx->r3 & 0XF;
            goto L_802318F4;
    }
    // 0x8023181C: andi        $v0, $v1, 0xF
    ctx->r2 = ctx->r3 & 0XF;
    // 0x80231820: bne         $v0, $zero, L_802318D8
    if (ctx->r2 != 0) {
        // 0x80231824: nop
    
            goto L_802318D8;
    }
    // 0x80231824: nop

    // 0x80231828: jal         0x8004F144
    // 0x8023182C: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8023182C: nop

    after_0:
    // 0x80231830: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80231834: beq         $s0, $zero, L_802318D8
    if (ctx->r16 == 0) {
        // 0x80231838: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802318D8;
    }
    // 0x80231838: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023183C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80231840: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x80231844: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80231848: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8023184C: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x80231850: lbu         $v1, 0xC($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XC);
    // 0x80231854: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231858: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x8023185C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80231860: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x80231864: jal         0x800A3450
    // 0x80231868: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80231868: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
    after_1:
    // 0x8023186C: lhu         $v1, 0x20($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X20);
    // 0x80231870: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80231874: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80231878: jal         0x800A3450
    // 0x8023187C: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x8023187C: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    after_2:
    // 0x80231880: lhu         $v1, 0x1C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1C);
    // 0x80231884: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80231888: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023188C: jal         0x800A3450
    // 0x80231890: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80231890: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    after_3:
    // 0x80231894: lui         $a1, 0x3D48
    ctx->r5 = S32(0X3D48 << 16);
    // 0x80231898: ori         $a1, $a1, 0x4E
    ctx->r5 = ctx->r5 | 0X4E;
    // 0x8023189C: lhu         $a0, 0x1E($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X1E);
    // 0x802318A0: lui         $v1, 0x2E40
    ctx->r3 = S32(0X2E40 << 16);
    // 0x802318A4: ori         $v1, $v1, 0x4040
    ctx->r3 = ctx->r3 | 0X4040;
    // 0x802318A8: sw          $v1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r3;
    // 0x802318AC: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x802318B0: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x802318B4: sw          $a1, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r5;
    // 0x802318B8: sb          $v1, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r3;
    // 0x802318BC: sb          $zero, 0x23($s0)
    MEM_B(0X23, ctx->r16) = 0;
    // 0x802318C0: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x802318C4: jal         0x800A3450
    // 0x802318C8: sh          $a0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r4;
    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x802318C8: sh          $a0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r4;
    after_4:
    // 0x802318CC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802318D0: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x802318D4: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
L_802318D8:
    // 0x802318D8: jal         0x800A3450
    // 0x802318DC: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_5;
    // 0x802318DC: nop

    after_5:
    // 0x802318E0: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x802318E4: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x802318E8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802318EC: j           L_802318FC
    // 0x802318F0: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
        goto L_802318FC;
    // 0x802318F0: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
L_802318F4:
    // 0x802318F4: jal         0x8004F5C4
    // 0x802318F8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_6;
    // 0x802318F8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
L_802318FC:
    // 0x802318FC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80231900: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80231904: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231908: jr          $ra
    // 0x8023190C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023190C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225E98_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225E98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225E9C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225EA0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225EA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225EA8: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x80225EAC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80225EB0: sh          $zero, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = 0;
    // 0x80225EB4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80225EB8: sh          $v0, 0x366($s0)
    MEM_H(0X366, ctx->r16) = ctx->r2;
    // 0x80225EBC: jal         0x80227F78
    // 0x80225EC0: sh          $v0, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r2;
    func_80227F78_ovl27(rdram, ctx);
        goto after_0;
    // 0x80225EC0: sh          $v0, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r2;
    after_0:
    // 0x80225EC4: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80225EC8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80225ECC: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80225ED0: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80225ED4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80225ED8: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x80225EDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225EE0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225EE4: jr          $ra
    // 0x80225EE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225EE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D864_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D864: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D868: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022D86C: jal         0x8022D9F0
    // 0x8022D870: nop

    func_8022D9F0_ovl27(rdram, ctx);
        goto after_0;
    // 0x8022D870: nop

    after_0:
    // 0x8022D874: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022D878: jr          $ra
    // 0x8022D87C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D87C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802351D8_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802351D8: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x802351DC: bne         $v0, $zero, L_802351F0
    if (ctx->r2 != 0) {
        // 0x802351E0: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_802351F0;
    }
    // 0x802351E0: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x802351E4: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x802351E8: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x802351EC: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_802351F0:
    // 0x802351F0: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x802351F4: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x802351F8: bne         $v1, $v0, L_80235208
    if (ctx->r3 != ctx->r2) {
        // 0x802351FC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80235208;
    }
    // 0x802351FC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80235200: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x80235204: sb          $v0, 0xA($v1)
    MEM_B(0XA, ctx->r3) = ctx->r2;
L_80235208:
    // 0x80235208: jr          $ra
    // 0x8023520C: nop

    TRACE_RETURN()
    return;
    // 0x8023520C: nop

;}
