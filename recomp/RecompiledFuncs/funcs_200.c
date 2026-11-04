#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_802584C0_ovl36(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802584C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802584C4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802584C8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x802584CC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802584D0: lui         $at, 0x8026
    ctx->r1 = S32(0X8026 << 16);
    // 0x802584D4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802584D8: lw          $v0, -0x7780($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7780);
    // 0x802584DC: jalr        $v0
    // 0x802584E0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802584E0: nop

    after_0:
    // 0x802584E4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802584E8: jr          $ra
    // 0x802584EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802584EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80258534_ovl36(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80258534: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x80258538: sw          $ra, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r31;
    // 0x8025853C: sw          $fp, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r30;
    // 0x80258540: sw          $s7, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r23;
    // 0x80258544: sw          $s6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r22;
    // 0x80258548: sw          $s5, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r21;
    // 0x8025854C: sw          $s4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r20;
    // 0x80258550: sw          $s3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r19;
    // 0x80258554: sw          $s2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r18;
    // 0x80258558: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    // 0x8025855C: sw          $s0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r16;
    // 0x80258560: sw          $a0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r4;
    // 0x80258564: lbu         $a0, 0xC($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0XC);
    // 0x80258568: addiu       $t0, $sp, 0x18
    ctx->r8 = ADD32(ctx->r29, 0X18);
    // 0x8025856C: sw          $t0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r8;
    // 0x80258570: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x80258574: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
    // 0x80258578: addiu       $fp, $sp, 0x20
    ctx->r30 = ADD32(ctx->r29, 0X20);
    // 0x8025857C: lbu         $v0, 0xB($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0XB);
    // 0x80258580: addiu       $s7, $sp, 0x28
    ctx->r23 = ADD32(ctx->r29, 0X28);
    // 0x80258584: addu        $s5, $zero, $zero
    ctx->r21 = ADD32(0, 0);
    // 0x80258588: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8025858C: jal         0x80053ED8
    // 0x80258590: sb          $v0, 0xB($t0)
    MEM_B(0XB, ctx->r8) = ctx->r2;
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_0;
    // 0x80258590: sb          $v0, 0xB($t0)
    MEM_B(0XB, ctx->r8) = ctx->r2;
    after_0:
    // 0x80258594: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80258598: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x8025859C: addiu       $a1, $v0, 0x14
    ctx->r5 = ADD32(ctx->r2, 0X14);
    // 0x802585A0: jal         0x8009A3B4
    // 0x802585A4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802585A4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x802585A8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x802585AC: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x802585B0: jal         0x800710B8
    // 0x802585B4: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_800710B8_4C4B8(rdram, ctx);
        goto after_2;
    // 0x802585B4: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_2:
    // 0x802585B8: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x802585BC: lb          $v1, 0x4EE0($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X4EE0);
    // 0x802585C0: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x802585C4: sll         $s4, $s2, 1
    ctx->r20 = S32(ctx->r18 << 1);
    // 0x802585C8: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x802585CC: lui         $s3, 0x8026
    ctx->r19 = S32(0X8026 << 16);
    // 0x802585D0: addu        $s3, $s3, $v1
    ctx->r19 = ADD32(ctx->r19, ctx->r3);
    // 0x802585D4: lh          $s3, -0x7778($s3)
    ctx->r19 = MEM_H(ctx->r19, -0X7778);
L_802585D8:
    // 0x802585D8: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x802585DC: addiu       $v0, $v0, -0x2290
    ctx->r2 = ADD32(ctx->r2, -0X2290);
    // 0x802585E0: addu        $s0, $s5, $v0
    ctx->r16 = ADD32(ctx->r21, ctx->r2);
    // 0x802585E4: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x802585E8: beq         $v0, $zero, L_8025876C
    if (ctx->r2 == 0) {
        // 0x802585EC: addiu       $v0, $zero, 0x87
        ctx->r2 = ADD32(0, 0X87);
            goto L_8025876C;
    }
    // 0x802585EC: addiu       $v0, $zero, 0x87
    ctx->r2 = ADD32(0, 0X87);
    // 0x802585F0: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x802585F4: bnel        $v1, $v0, L_80258770
    if (ctx->r3 != ctx->r2) {
        // 0x802585F8: addiu       $s6, $s6, 0x1
        ctx->r22 = ADD32(ctx->r22, 0X1);
            goto L_80258770;
    }
    goto skip_0;
    // 0x802585F8: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    skip_0:
    // 0x802585FC: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80258600: sltiu       $v0, $v0, 0x5
    ctx->r2 = ctx->r2 < 0X5 ? 1 : 0;
    // 0x80258604: beq         $v0, $zero, L_8025876C
    if (ctx->r2 == 0) {
        // 0x80258608: addiu       $s1, $s0, 0x38
        ctx->r17 = ADD32(ctx->r16, 0X38);
            goto L_8025876C;
    }
    // 0x80258608: addiu       $s1, $s0, 0x38
    ctx->r17 = ADD32(ctx->r16, 0X38);
    // 0x8025860C: lw          $a0, 0x54($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X54);
    // 0x80258610: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80258614: jal         0x8009A3B4
    // 0x80258618: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80258618: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x8025861C: lh          $v1, 0x10($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X10);
    // 0x80258620: lh          $v0, 0x18($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X18);
    // 0x80258624: subu        $a2, $v1, $v0
    ctx->r6 = SUB32(ctx->r3, ctx->r2);
    // 0x80258628: addu        $v0, $a2, $s2
    ctx->r2 = ADD32(ctx->r6, ctx->r18);
    // 0x8025862C: sltu        $v0, $s4, $v0
    ctx->r2 = ctx->r20 < ctx->r2 ? 1 : 0;
    // 0x80258630: bne         $v0, $zero, L_8025876C
    if (ctx->r2 != 0) {
        // 0x80258634: sw          $a2, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r6;
            goto L_8025876C;
    }
    // 0x80258634: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80258638: lh          $v1, 0x12($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X12);
    // 0x8025863C: lh          $v0, 0x1A($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X1A);
    // 0x80258640: subu        $a1, $v1, $v0
    ctx->r5 = SUB32(ctx->r3, ctx->r2);
    // 0x80258644: addu        $v0, $a1, $s2
    ctx->r2 = ADD32(ctx->r5, ctx->r18);
    // 0x80258648: sltu        $v0, $s4, $v0
    ctx->r2 = ctx->r20 < ctx->r2 ? 1 : 0;
    // 0x8025864C: bne         $v0, $zero, L_8025876C
    if (ctx->r2 != 0) {
        // 0x80258650: sw          $a1, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r5;
            goto L_8025876C;
    }
    // 0x80258650: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80258654: lh          $v1, 0x14($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X14);
    // 0x80258658: lh          $v0, 0x1C($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X1C);
    // 0x8025865C: subu        $a0, $v1, $v0
    ctx->r4 = SUB32(ctx->r3, ctx->r2);
    // 0x80258660: addu        $v0, $a0, $s2
    ctx->r2 = ADD32(ctx->r4, ctx->r18);
    // 0x80258664: sltu        $v0, $s4, $v0
    ctx->r2 = ctx->r20 < ctx->r2 ? 1 : 0;
    // 0x80258668: bne         $v0, $zero, L_8025876C
    if (ctx->r2 != 0) {
        // 0x8025866C: sw          $a0, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r4;
            goto L_8025876C;
    }
    // 0x8025866C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80258670: nop

    // 0x80258674: mult        $a2, $a2
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80258678: mflo        $v0
    ctx->r2 = lo;
    // 0x8025867C: nop

    // 0x80258680: nop

    // 0x80258684: mult        $a1, $a1
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80258688: mflo        $v1
    ctx->r3 = lo;
    // 0x8025868C: nop

    // 0x80258690: nop

    // 0x80258694: mult        $a0, $a0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80258698: mflo        $a0
    ctx->r4 = lo;
    // 0x8025869C: nop

    // 0x802586A0: nop

    // 0x802586A4: mult        $s2, $s2
    result = S64(S32(ctx->r18)) * S64(S32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802586A8: mflo        $a1
    ctx->r5 = lo;
    // 0x802586AC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802586B0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x802586B4: sltu        $v0, $v0, $a1
    ctx->r2 = ctx->r2 < ctx->r5 ? 1 : 0;
    // 0x802586B8: beql        $v0, $zero, L_80258770
    if (ctx->r2 == 0) {
        // 0x802586BC: addiu       $s6, $s6, 0x1
        ctx->r22 = ADD32(ctx->r22, 0X1);
            goto L_80258770;
    }
    goto skip_1;
    // 0x802586BC: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    skip_1:
    // 0x802586C0: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x802586C4: jal         0x80032308
    // 0x802586C8: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    func_80032308_D708(rdram, ctx);
        goto after_4;
    // 0x802586C8: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_4:
    // 0x802586CC: addu        $a0, $fp, $zero
    ctx->r4 = ADD32(ctx->r30, 0);
    // 0x802586D0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802586D4: jal         0x8009A3B4
    // 0x802586D8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x802586D8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x802586DC: blez        $s3, L_802587A4
    if (SIGNED(ctx->r19) <= 0) {
        // 0x802586E0: addu        $a0, $s7, $zero
        ctx->r4 = ADD32(ctx->r23, 0);
            goto L_802587A4;
    }
    // 0x802586E0: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    // 0x802586E4: lh          $v0, 0x18($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X18);
    // 0x802586E8: mult        $v0, $s3
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802586EC: mflo        $v0
    ctx->r2 = lo;
    // 0x802586F0: lhu         $v1, 0x38($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X38);
    // 0x802586F4: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x802586F8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802586FC: sh          $v1, 0x38($s0)
    MEM_H(0X38, ctx->r16) = ctx->r3;
    // 0x80258700: lh          $v1, 0x1C($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X1C);
    // 0x80258704: mult        $v1, $s3
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80258708: mflo        $v1
    ctx->r3 = lo;
    // 0x8025870C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80258710: lhu         $v0, 0x3C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X3C);
    // 0x80258714: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80258718: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x8025871C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80258720: jal         0x8009A3B4
    // 0x80258724: sh          $v0, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x80258724: sh          $v0, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r2;
    after_6:
    // 0x80258728: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    // 0x8025872C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80258730: addu        $a1, $fp, $zero
    ctx->r5 = ADD32(ctx->r30, 0);
    // 0x80258734: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80258738: sll         $a3, $v0, 1
    ctx->r7 = S32(ctx->r2 << 1);
    // 0x8025873C: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x80258740: sll         $a3, $a3, 2
    ctx->r7 = S32(ctx->r7 << 2);
    // 0x80258744: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80258748: addiu       $v0, $v0, -0x3244
    ctx->r2 = ADD32(ctx->r2, -0X3244);
    // 0x8025874C: jal         0x800410F0
    // 0x80258750: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    func_800410F0_1C4F0(rdram, ctx);
        goto after_7;
    // 0x80258750: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    after_7:
    // 0x80258754: lhu         $v0, 0x28($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X28);
    // 0x80258758: sh          $v0, 0x38($s0)
    MEM_H(0X38, ctx->r16) = ctx->r2;
    // 0x8025875C: lhu         $v0, 0x2A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X2A);
    // 0x80258760: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    // 0x80258764: lhu         $v0, 0x2C($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X2C);
    // 0x80258768: sh          $v0, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r2;
L_8025876C:
    // 0x8025876C: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
L_80258770:
    // 0x80258770: sltiu       $v0, $s6, 0x40
    ctx->r2 = ctx->r22 < 0X40 ? 1 : 0;
    // 0x80258774: bne         $v0, $zero, L_802585D8
    if (ctx->r2 != 0) {
        // 0x80258778: addiu       $s5, $s5, 0x58
        ctx->r21 = ADD32(ctx->r21, 0X58);
            goto L_802585D8;
    }
    // 0x80258778: addiu       $s5, $s5, 0x58
    ctx->r21 = ADD32(ctx->r21, 0X58);
L_8025877C:
    // 0x8025877C: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x80258780: lb          $v1, 0x170($t0)
    ctx->r3 = MEM_B(ctx->r8, 0X170);
    // 0x80258784: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80258788: bne         $v1, $v0, L_80258844
    if (ctx->r3 != ctx->r2) {
        // 0x8025878C: nop
    
            goto L_80258844;
    }
    // 0x8025878C: nop

    // 0x80258790: lh          $a0, 0x532($t0)
    ctx->r4 = MEM_H(ctx->r8, 0X532);
    // 0x80258794: bne         $a0, $zero, L_80258808
    if (ctx->r4 != 0) {
        // 0x80258798: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_80258808;
    }
    // 0x80258798: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x8025879C: j           L_80258838
    // 0x802587A0: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
        goto L_80258838;
    // 0x802587A0: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
L_802587A4:
    // 0x802587A4: jal         0x800A3450
    // 0x802587A8: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_8;
    // 0x802587A8: nop

    after_8:
    // 0x802587AC: lh          $v1, 0x18($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X18);
    // 0x802587B0: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x802587B4: addiu       $v0, $v0, -0x10
    ctx->r2 = ADD32(ctx->r2, -0X10);
    // 0x802587B8: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802587BC: mflo        $v1
    ctx->r3 = lo;
    // 0x802587C0: lhu         $v0, 0x10($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X10);
    // 0x802587C4: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x802587C8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x802587CC: sh          $v0, 0x38($s0)
    MEM_H(0X38, ctx->r16) = ctx->r2;
    // 0x802587D0: lhu         $v0, 0x12($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X12);
    // 0x802587D4: addiu       $v0, $v0, -0x8C
    ctx->r2 = ADD32(ctx->r2, -0X8C);
    // 0x802587D8: jal         0x800A3450
    // 0x802587DC: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_9;
    // 0x802587DC: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    after_9:
    // 0x802587E0: lh          $v1, 0x1C($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X1C);
    // 0x802587E4: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x802587E8: addiu       $v0, $v0, -0x10
    ctx->r2 = ADD32(ctx->r2, -0X10);
    // 0x802587EC: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802587F0: mflo        $v1
    ctx->r3 = lo;
    // 0x802587F4: lhu         $v0, 0x14($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X14);
    // 0x802587F8: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x802587FC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80258800: j           L_8025877C
    // 0x80258804: sh          $v0, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r2;
        goto L_8025877C;
    // 0x80258804: sh          $v0, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r2;
L_80258808:
    // 0x80258808: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x8025880C: beq         $a0, $v0, L_8025881C
    if (ctx->r4 == ctx->r2) {
        // 0x80258810: addiu       $v0, $v1, -0x1
        ctx->r2 = ADD32(ctx->r3, -0X1);
            goto L_8025881C;
    }
    // 0x80258810: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80258814: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x80258818: sh          $v0, 0x532($t0)
    MEM_H(0X532, ctx->r8) = ctx->r2;
L_8025881C:
    // 0x8025881C: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x80258820: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80258824: lbu         $v0, 0x314A($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X314A);
    // 0x80258828: lbu         $v1, 0x100($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0X100);
    // 0x8025882C: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80258830: beq         $v0, $zero, L_80258850
    if (ctx->r2 == 0) {
        // 0x80258834: addiu       $a0, $zero, 0x12C
        ctx->r4 = ADD32(0, 0X12C);
            goto L_80258850;
    }
    // 0x80258834: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
L_80258838:
    // 0x80258838: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8025883C: jal         0x8002A2F8
    // 0x80258840: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_10;
    // 0x80258840: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_10:
L_80258844:
    // 0x80258844: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x80258848: jal         0x8004F568
    // 0x8025884C: nop

    func_8004F568_2A968(rdram, ctx);
        goto after_11;
    // 0x8025884C: nop

    after_11:
L_80258850:
    // 0x80258850: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
    // 0x80258854: lw          $fp, 0x80($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X80);
    // 0x80258858: lw          $s7, 0x7C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X7C);
    // 0x8025885C: lw          $s6, 0x78($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X78);
    // 0x80258860: lw          $s5, 0x74($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X74);
    // 0x80258864: lw          $s4, 0x70($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X70);
    // 0x80258868: lw          $s3, 0x6C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X6C);
    // 0x8025886C: lw          $s2, 0x68($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X68);
    // 0x80258870: lw          $s1, 0x64($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X64);
    // 0x80258874: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x80258878: jr          $ra
    // 0x8025887C: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    TRACE_RETURN()
    return;
    // 0x8025887C: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_80258A04_ovl37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80258A04: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80258A08: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x80258A0C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80258A10: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80258A14: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x80258A18: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80258A1C: jal         0x80071060
    // 0x80258A20: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80071060_4C460(rdram, ctx);
        goto after_0;
    // 0x80258A20: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x80258A24: lhu         $v1, 0x2C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X2C);
    // 0x80258A28: sh          $v1, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r3;
    // 0x80258A2C: lhu         $v1, 0x2E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X2E);
    // 0x80258A30: sh          $v1, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r3;
    // 0x80258A34: lhu         $v1, 0x30($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X30);
    // 0x80258A38: sh          $v1, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r3;
    // 0x80258A3C: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x80258A40: beq         $v1, $zero, L_80258A64
    if (ctx->r3 == 0) {
        // 0x80258A44: addu        $t0, $v0, $zero
        ctx->r8 = ADD32(ctx->r2, 0);
            goto L_80258A64;
    }
    // 0x80258A44: addu        $t0, $v0, $zero
    ctx->r8 = ADD32(ctx->r2, 0);
    // 0x80258A48: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80258A4C: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x80258A50: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x80258A54: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80258A58: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80258A5C: j           L_80258A7C
    // 0x80258A60: addiu       $v0, $zero, 0x6000
    ctx->r2 = ADD32(0, 0X6000);
        goto L_80258A7C;
    // 0x80258A60: addiu       $v0, $zero, 0x6000
    ctx->r2 = ADD32(0, 0X6000);
L_80258A64:
    // 0x80258A64: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80258A68: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x80258A6C: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x80258A70: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80258A74: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80258A78: addiu       $v0, $zero, 0x4000
    ctx->r2 = ADD32(0, 0X4000);
L_80258A7C:
    // 0x80258A7C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80258A80: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80258A84: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    // 0x80258A88: addiu       $v0, $s0, 0xC8
    ctx->r2 = ADD32(ctx->r16, 0XC8);
    // 0x80258A8C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80258A90: lui         $v0, 0x8800
    ctx->r2 = S32(0X8800 << 16);
    // 0x80258A94: or          $v0, $t0, $v0
    ctx->r2 = ctx->r8 | ctx->r2;
    // 0x80258A98: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80258A9C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80258AA0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80258AA4: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80258AA8: jal         0x80051F9C
    // 0x80258AAC: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051F9C_2D39C(rdram, ctx);
        goto after_1;
    // 0x80258AAC: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_1:
    // 0x80258AB0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80258AB4: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x80258AB8: jr          $ra
    // 0x80258ABC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80258ABC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80258AC0_ovl37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80258AC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80258AC4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80258AC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80258ACC: jal         0x8004F144
    // 0x80258AD0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80258AD0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80258AD4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80258AD8: beq         $a0, $zero, L_80258B2C
    if (ctx->r4 == 0) {
        // 0x80258ADC: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80258B2C;
    }
    // 0x80258ADC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80258AE0: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x80258AE4: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80258AE8: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x80258AEC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80258AF0: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
    // 0x80258AF4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80258AF8: lb          $v0, 0x4EE4($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4EE4);
    // 0x80258AFC: lui         $v1, 0x8026
    ctx->r3 = S32(0X8026 << 16);
    // 0x80258B00: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80258B04: lbu         $v1, -0x733C($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X733C);
    // 0x80258B08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80258B0C: sb          $v0, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r2;
    // 0x80258B10: sb          $v1, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r3;
    // 0x80258B14: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x80258B18: sh          $v0, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r2;
    // 0x80258B1C: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x80258B20: sh          $v0, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r2;
    // 0x80258B24: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x80258B28: sh          $v0, 0x3C($a0)
    MEM_H(0X3C, ctx->r4) = ctx->r2;
L_80258B2C:
    // 0x80258B2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80258B30: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80258B34: jr          $ra
    // 0x80258B38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80258B38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80258734_ovl37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80258734: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80258738: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x8025873C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80258740: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x80258744: sw          $ra, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r31;
    // 0x80258748: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x8025874C: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x80258750: jal         0x80071110
    // 0x80258754: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    func_80071110_4C510(rdram, ctx);
        goto after_0;
    // 0x80258754: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    after_0:
    // 0x80258758: bne         $v0, $zero, L_8025876C
    if (ctx->r2 != 0) {
        // 0x8025875C: nop
    
            goto L_8025876C;
    }
    // 0x8025875C: nop

    // 0x80258760: lh          $v0, 0x7C($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X7C);
    // 0x80258764: beq         $v0, $zero, L_80258798
    if (ctx->r2 == 0) {
        // 0x80258768: addiu       $a0, $s2, 0x34
        ctx->r4 = ADD32(ctx->r18, 0X34);
            goto L_80258798;
    }
    // 0x80258768: addiu       $a0, $s2, 0x34
    ctx->r4 = ADD32(ctx->r18, 0X34);
L_8025876C:
    // 0x8025876C: jal         0x8004F568
    // 0x80258770: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8004F568_2A968(rdram, ctx);
        goto after_1;
    // 0x80258770: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x80258774: lbu         $v0, 0x3($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X3);
    // 0x80258778: sltiu       $v0, $v0, 0x80
    ctx->r2 = ctx->r2 < 0X80 ? 1 : 0;
    // 0x8025877C: bne         $v0, $zero, L_8025878C
    if (ctx->r2 != 0) {
        // 0x80258780: nop
    
            goto L_8025878C;
    }
    // 0x80258780: nop

    // 0x80258784: jal         0x800530E8
    // 0x80258788: lb          $a0, 0xD($s2)
    ctx->r4 = MEM_B(ctx->r18, 0XD);
    func_800530E8_2E4E8(rdram, ctx);
        goto after_2;
    // 0x80258788: lb          $a0, 0xD($s2)
    ctx->r4 = MEM_B(ctx->r18, 0XD);
    after_2:
L_8025878C:
    // 0x8025878C: jal         0x80258AC0
    // 0x80258790: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_80258AC0_ovl37(rdram, ctx);
        goto after_3;
    // 0x80258790: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_3:
    // 0x80258794: addiu       $a0, $s2, 0x34
    ctx->r4 = ADD32(ctx->r18, 0X34);
L_80258798:
    // 0x80258798: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    // 0x8025879C: jal         0x8009A3B4
    // 0x802587A0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x802587A0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_4:
    // 0x802587A4: addiu       $a0, $s2, 0x2C
    ctx->r4 = ADD32(ctx->r18, 0X2C);
    // 0x802587A8: addiu       $s1, $s2, 0x14
    ctx->r17 = ADD32(ctx->r18, 0X14);
    // 0x802587AC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802587B0: jal         0x8009A3B4
    // 0x802587B4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x802587B4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x802587B8: addiu       $a0, $s2, 0xF0
    ctx->r4 = ADD32(ctx->r18, 0XF0);
    // 0x802587BC: addiu       $s0, $s2, 0xE8
    ctx->r16 = ADD32(ctx->r18, 0XE8);
    // 0x802587C0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802587C4: jal         0x8009A3B4
    // 0x802587C8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x802587C8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x802587CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802587D0: addiu       $s0, $s2, 0xE0
    ctx->r16 = ADD32(ctx->r18, 0XE0);
    // 0x802587D4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802587D8: jal         0x8009A3B4
    // 0x802587DC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x802587DC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_7:
    // 0x802587E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802587E4: addiu       $s0, $s2, 0xD8
    ctx->r16 = ADD32(ctx->r18, 0XD8);
    // 0x802587E8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802587EC: jal         0x8009A3B4
    // 0x802587F0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x802587F0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
    // 0x802587F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802587F8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802587FC: jal         0x8009A3B4
    // 0x80258800: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x80258800: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_9:
    // 0x80258804: lbu         $v1, 0xB($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XB);
    // 0x80258808: addiu       $s3, $s2, 0x88
    ctx->r19 = ADD32(ctx->r18, 0X88);
    // 0x8025880C: addiu       $v0, $v1, 0xFF
    ctx->r2 = ADD32(ctx->r3, 0XFF);
    // 0x80258810: beq         $v1, $zero, L_802589B0
    if (ctx->r3 == 0) {
        // 0x80258814: sb          $v0, 0xB($s2)
        MEM_B(0XB, ctx->r18) = ctx->r2;
            goto L_802589B0;
    }
    // 0x80258814: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
    // 0x80258818: lbu         $v0, 0x3($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X3);
    // 0x8025881C: sltiu       $v0, $v0, 0x80
    ctx->r2 = ctx->r2 < 0X80 ? 1 : 0;
    // 0x80258820: bne         $v0, $zero, L_80258914
    if (ctx->r2 != 0) {
        // 0x80258824: nop
    
            goto L_80258914;
    }
    // 0x80258824: nop

    // 0x80258828: lw          $v0, 0xC0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XC0);
    // 0x8025882C: lw          $v1, 0xC4($s2)
    ctx->r3 = MEM_W(ctx->r18, 0XC4);
    // 0x80258830: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80258834: beq         $v0, $zero, L_80258908
    if (ctx->r2 == 0) {
        // 0x80258838: ori         $a1, $zero, 0xD0FC
        ctx->r5 = 0 | 0XD0FC;
            goto L_80258908;
    }
    // 0x80258838: ori         $a1, $zero, 0xD0FC
    ctx->r5 = 0 | 0XD0FC;
    // 0x8025883C: lh          $v1, 0xC0($s2)
    ctx->r3 = MEM_H(ctx->r18, 0XC0);
    // 0x80258840: lh          $v0, 0x14($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X14);
    // 0x80258844: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80258848: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x8025884C: lh          $a0, 0xC2($s2)
    ctx->r4 = MEM_H(ctx->r18, 0XC2);
    // 0x80258850: lh          $v0, 0x16($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X16);
    // 0x80258854: subu        $a2, $a0, $v0
    ctx->r6 = SUB32(ctx->r4, ctx->r2);
    // 0x80258858: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x8025885C: lh          $a0, 0xC4($s2)
    ctx->r4 = MEM_H(ctx->r18, 0XC4);
    // 0x80258860: lh          $v0, 0x18($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X18);
    // 0x80258864: addiu       $v1, $v1, 0x687E
    ctx->r3 = ADD32(ctx->r3, 0X687E);
    // 0x80258868: sltu        $v1, $a1, $v1
    ctx->r3 = ctx->r5 < ctx->r3 ? 1 : 0;
    // 0x8025886C: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x80258870: bne         $v1, $zero, L_80258894
    if (ctx->r3 != 0) {
        // 0x80258874: sw          $a0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r4;
            goto L_80258894;
    }
    // 0x80258874: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80258878: addiu       $v0, $a2, 0x687E
    ctx->r2 = ADD32(ctx->r6, 0X687E);
    // 0x8025887C: sltu        $v0, $a1, $v0
    ctx->r2 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x80258880: bne         $v0, $zero, L_80258894
    if (ctx->r2 != 0) {
        // 0x80258884: addiu       $v0, $a0, 0x687E
        ctx->r2 = ADD32(ctx->r4, 0X687E);
            goto L_80258894;
    }
    // 0x80258884: addiu       $v0, $a0, 0x687E
    ctx->r2 = ADD32(ctx->r4, 0X687E);
    // 0x80258888: sltu        $v0, $a1, $v0
    ctx->r2 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x8025888C: beq         $v0, $zero, L_802588BC
    if (ctx->r2 == 0) {
        // 0x80258890: addiu       $a0, $sp, 0x18
        ctx->r4 = ADD32(ctx->r29, 0X18);
            goto L_802588BC;
    }
    // 0x80258890: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
L_80258894:
    // 0x80258894: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x80258898: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8025889C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802588A0: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
    // 0x802588A4: sra         $v1, $v1, 2
    ctx->r3 = S32(SIGNED(ctx->r3) >> 2);
    // 0x802588A8: sra         $a0, $a0, 2
    ctx->r4 = S32(SIGNED(ctx->r4) >> 2);
    // 0x802588AC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x802588B0: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x802588B4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802588B8: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
L_802588BC:
    // 0x802588BC: addiu       $s0, $sp, 0x28
    ctx->r16 = ADD32(ctx->r29, 0X28);
    // 0x802588C0: jal         0x80032308
    // 0x802588C4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80032308_D708(rdram, ctx);
        goto after_10;
    // 0x802588C4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_10:
    // 0x802588C8: lui         $v0, 0xF74
    ctx->r2 = S32(0XF74 << 16);
    // 0x802588CC: ori         $v0, $v0, 0x6EA4
    ctx->r2 = ctx->r2 | 0X6EA4;
    // 0x802588D0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x802588D4: addiu       $s1, $sp, 0x30
    ctx->r17 = ADD32(ctx->r29, 0X30);
    // 0x802588D8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802588DC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802588E0: addiu       $s0, $s2, 0x44
    ctx->r16 = ADD32(ctx->r18, 0X44);
    // 0x802588E4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x802588E8: jal         0x80051B48
    // 0x802588EC: addiu       $a3, $zero, 0x424
    ctx->r7 = ADD32(0, 0X424);
    func_80051B48_2CF48(rdram, ctx);
        goto after_11;
    // 0x802588EC: addiu       $a3, $zero, 0x424
    ctx->r7 = ADD32(0, 0X424);
    after_11:
    // 0x802588F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802588F4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802588F8: jal         0x8009A3B4
    // 0x802588FC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_12;
    // 0x802588FC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_12:
    // 0x80258900: j           L_80258914
    // 0x80258904: nop

        goto L_80258914;
    // 0x80258904: nop

L_80258908:
    // 0x80258908: jal         0x800530E8
    // 0x8025890C: lb          $a0, 0xD($s2)
    ctx->r4 = MEM_B(ctx->r18, 0XD);
    func_800530E8_2E4E8(rdram, ctx);
        goto after_13;
    // 0x8025890C: lb          $a0, 0xD($s2)
    ctx->r4 = MEM_B(ctx->r18, 0XD);
    after_13:
    // 0x80258910: sb          $zero, 0x3($s2)
    MEM_B(0X3, ctx->r18) = 0;
L_80258914:
    // 0x80258914: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80258918: lb          $v0, 0x4EE6($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4EE6);
    // 0x8025891C: lh          $v1, 0x44($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X44);
    // 0x80258920: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80258924: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x80258928: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8025892C: lhu         $a0, -0x7354($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X7354);
    // 0x80258930: mult        $v1, $a0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80258934: mflo        $v1
    ctx->r3 = lo;
    // 0x80258938: lh          $a1, 0x46($s2)
    ctx->r5 = MEM_H(ctx->r18, 0X46);
    // 0x8025893C: nop

    // 0x80258940: mult        $a1, $a0
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80258944: mflo        $a1
    ctx->r5 = lo;
    // 0x80258948: lh          $a2, 0x48($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X48);
    // 0x8025894C: nop

    // 0x80258950: mult        $a2, $a0
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80258954: mflo        $a2
    ctx->r6 = lo;
    // 0x80258958: lw          $v0, 0x1C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X1C);
    // 0x8025895C: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    // 0x80258960: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x80258964: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80258968: sll         $a1, $a1, 4
    ctx->r5 = S32(ctx->r5 << 4);
    // 0x8025896C: sw          $v0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r2;
    // 0x80258970: lw          $v0, 0x24($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X24);
    // 0x80258974: lhu         $v1, 0x1C($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X1C);
    // 0x80258978: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x8025897C: sll         $a2, $a2, 4
    ctx->r6 = S32(ctx->r6 << 4);
    // 0x80258980: sw          $a0, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r4;
    // 0x80258984: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80258988: sw          $v0, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r2;
    // 0x8025898C: sh          $v1, 0x14($s2)
    MEM_H(0X14, ctx->r18) = ctx->r3;
    // 0x80258990: sh          $v1, 0x24($s3)
    MEM_H(0X24, ctx->r19) = ctx->r3;
    // 0x80258994: lhu         $v0, 0x20($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X20);
    // 0x80258998: sh          $v0, 0x16($s2)
    MEM_H(0X16, ctx->r18) = ctx->r2;
    // 0x8025899C: sh          $v0, 0x26($s3)
    MEM_H(0X26, ctx->r19) = ctx->r2;
    // 0x802589A0: lhu         $v0, 0x24($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X24);
    // 0x802589A4: sh          $v0, 0x18($s2)
    MEM_H(0X18, ctx->r18) = ctx->r2;
    // 0x802589A8: j           L_802589D8
    // 0x802589AC: sh          $v0, 0x28($s3)
    MEM_H(0X28, ctx->r19) = ctx->r2;
        goto L_802589D8;
    // 0x802589AC: sh          $v0, 0x28($s3)
    MEM_H(0X28, ctx->r19) = ctx->r2;
L_802589B0:
    // 0x802589B0: jal         0x8004F568
    // 0x802589B4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8004F568_2A968(rdram, ctx);
        goto after_14;
    // 0x802589B4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_14:
    // 0x802589B8: lbu         $v0, 0x3($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X3);
    // 0x802589BC: sltiu       $v0, $v0, 0x80
    ctx->r2 = ctx->r2 < 0X80 ? 1 : 0;
    // 0x802589C0: bne         $v0, $zero, L_802589E8
    if (ctx->r2 != 0) {
        // 0x802589C4: nop
    
            goto L_802589E8;
    }
    // 0x802589C4: nop

    // 0x802589C8: jal         0x800530E8
    // 0x802589CC: lb          $a0, 0xD($s2)
    ctx->r4 = MEM_B(ctx->r18, 0XD);
    func_800530E8_2E4E8(rdram, ctx);
        goto after_15;
    // 0x802589CC: lb          $a0, 0xD($s2)
    ctx->r4 = MEM_B(ctx->r18, 0XD);
    after_15:
    // 0x802589D0: j           L_802589E8
    // 0x802589D4: nop

        goto L_802589E8;
    // 0x802589D4: nop

L_802589D8:
    // 0x802589D8: jal         0x80258A04
    // 0x802589DC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_80258A04_ovl37(rdram, ctx);
        goto after_16;
    // 0x802589DC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_16:
    // 0x802589E0: jal         0x80258B3C
    // 0x802589E4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_80258B3C_ovl37(rdram, ctx);
        goto after_17;
    // 0x802589E4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_17:
L_802589E8:
    // 0x802589E8: lw          $ra, 0x48($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X48);
    // 0x802589EC: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x802589F0: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x802589F4: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x802589F8: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x802589FC: jr          $ra
    // 0x80258A00: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x80258A00: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80258504_ovl37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80258504: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80258508: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x8025850C: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x80258510: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x80258514: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80258518: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8025851C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80258520: lbu         $v1, 0x0($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X0);
    // 0x80258524: lbu         $a0, 0x6($s3)
    ctx->r4 = MEM_BU(ctx->r19, 0X6);
    // 0x80258528: lui         $v0, 0x8026
    ctx->r2 = S32(0X8026 << 16);
    // 0x8025852C: addiu       $v0, $v0, -0x7360
    ctx->r2 = ADD32(ctx->r2, -0X7360);
    // 0x80258530: sw          $zero, 0xC8($s3)
    MEM_W(0XC8, ctx->r19) = 0;
    // 0x80258534: sw          $zero, 0xCC($s3)
    MEM_W(0XCC, ctx->r19) = 0;
    // 0x80258538: sw          $v0, 0x78($s3)
    MEM_W(0X78, ctx->r19) = ctx->r2;
    // 0x8025853C: ori         $v1, $v1, 0x6
    ctx->r3 = ctx->r3 | 0X6;
    // 0x80258540: ori         $a0, $a0, 0x20
    ctx->r4 = ctx->r4 | 0X20;
    // 0x80258544: sb          $v1, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r3;
    // 0x80258548: jal         0x80034B34
    // 0x8025854C: sb          $a0, 0x6($s3)
    MEM_B(0X6, ctx->r19) = ctx->r4;
    func_80034B34_FF34(rdram, ctx);
        goto after_0;
    // 0x8025854C: sb          $a0, 0x6($s3)
    MEM_B(0X6, ctx->r19) = ctx->r4;
    after_0:
    // 0x80258550: jal         0x800A3450
    // 0x80258554: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80258554: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_1:
    // 0x80258558: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8025855C: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x80258560: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80258564: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x80258568: jal         0x800A3450
    // 0x8025856C: sh          $s0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r16;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x8025856C: sh          $s0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r16;
    after_2:
    // 0x80258570: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80258574: lhu         $v1, 0x64($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X64);
    // 0x80258578: addiu       $s0, $s3, 0x8C
    ctx->r16 = ADD32(ctx->r19, 0X8C);
    // 0x8025857C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80258580: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80258584: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x80258588: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8025858C: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    // 0x80258590: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80258594: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80258598: jal         0x80031600
    // 0x8025859C: sh          $v1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r3;
    func_80031600_CA00(rdram, ctx);
        goto after_3;
    // 0x8025859C: sh          $v1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r3;
    after_3:
    // 0x802585A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802585A4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x802585A8: addiu       $s1, $sp, 0x18
    ctx->r17 = ADD32(ctx->r29, 0X18);
    // 0x802585AC: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x802585B0: addiu       $v0, $zero, -0x1000
    ctx->r2 = ADD32(0, -0X1000);
    // 0x802585B4: sh          $zero, 0x10($sp)
    MEM_H(0X10, ctx->r29) = 0;
    // 0x802585B8: sh          $zero, 0x12($sp)
    MEM_H(0X12, ctx->r29) = 0;
    // 0x802585BC: jal         0x800308E8
    // 0x802585C0: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_800308E8_BCE8(rdram, ctx);
        goto after_4;
    // 0x802585C0: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_4:
    // 0x802585C4: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x802585C8: sh          $v0, 0x44($s3)
    MEM_H(0X44, ctx->r19) = ctx->r2;
    // 0x802585CC: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x802585D0: sh          $v0, 0x46($s3)
    MEM_H(0X46, ctx->r19) = ctx->r2;
    // 0x802585D4: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x802585D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802585DC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802585E0: sh          $v0, 0x48($s3)
    MEM_H(0X48, ctx->r19) = ctx->r2;
    // 0x802585E4: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802585E8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x802585EC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x802585F0: jal         0x80031DA8
    // 0x802585F4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_5;
    // 0x802585F4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_5:
    // 0x802585F8: addiu       $a0, $s3, 0x34
    ctx->r4 = ADD32(ctx->r19, 0X34);
    // 0x802585FC: lhu         $v0, 0x1C($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X1C);
    // 0x80258600: lhu         $v1, 0x20($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X20);
    // 0x80258604: lhu         $a3, 0x24($s3)
    ctx->r7 = MEM_HU(ctx->r19, 0X24);
    // 0x80258608: addiu       $a1, $s3, 0x1C
    ctx->r5 = ADD32(ctx->r19, 0X1C);
    // 0x8025860C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80258610: sh          $zero, 0x4C($s3)
    MEM_H(0X4C, ctx->r19) = 0;
    // 0x80258614: sh          $zero, 0x4E($s3)
    MEM_H(0X4E, ctx->r19) = 0;
    // 0x80258618: sh          $zero, 0x50($s3)
    MEM_H(0X50, ctx->r19) = 0;
    // 0x8025861C: sh          $zero, 0x7C($s3)
    MEM_H(0X7C, ctx->r19) = 0;
    // 0x80258620: sh          $v0, 0x14($s3)
    MEM_H(0X14, ctx->r19) = ctx->r2;
    // 0x80258624: sh          $v0, 0xAC($s3)
    MEM_H(0XAC, ctx->r19) = ctx->r2;
    // 0x80258628: sh          $v1, 0x16($s3)
    MEM_H(0X16, ctx->r19) = ctx->r3;
    // 0x8025862C: sh          $v1, 0xAE($s3)
    MEM_H(0XAE, ctx->r19) = ctx->r3;
    // 0x80258630: sh          $a3, 0x18($s3)
    MEM_H(0X18, ctx->r19) = ctx->r7;
    // 0x80258634: jal         0x8009A3B4
    // 0x80258638: sh          $a3, 0xB0($s3)
    MEM_H(0XB0, ctx->r19) = ctx->r7;
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x80258638: sh          $a3, 0xB0($s3)
    MEM_H(0XB0, ctx->r19) = ctx->r7;
    after_6:
    // 0x8025863C: addiu       $a0, $s3, 0x2C
    ctx->r4 = ADD32(ctx->r19, 0X2C);
    // 0x80258640: addiu       $s0, $s3, 0x14
    ctx->r16 = ADD32(ctx->r19, 0X14);
    // 0x80258644: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80258648: jal         0x8009A3B4
    // 0x8025864C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x8025864C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_7:
    // 0x80258650: addiu       $s1, $s3, 0xD8
    ctx->r17 = ADD32(ctx->r19, 0XD8);
    // 0x80258654: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80258658: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8025865C: jal         0x8009A3B4
    // 0x80258660: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x80258660: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
    // 0x80258664: addiu       $s2, $s3, 0xE0
    ctx->r18 = ADD32(ctx->r19, 0XE0);
    // 0x80258668: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8025866C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80258670: jal         0x8009A3B4
    // 0x80258674: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x80258674: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_9:
    // 0x80258678: addiu       $s0, $s3, 0xE8
    ctx->r16 = ADD32(ctx->r19, 0XE8);
    // 0x8025867C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80258680: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80258684: jal         0x8009A3B4
    // 0x80258688: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_10;
    // 0x80258688: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_10:
    // 0x8025868C: addiu       $a0, $s3, 0xF0
    ctx->r4 = ADD32(ctx->r19, 0XF0);
    // 0x80258690: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80258694: jal         0x8009A3B4
    // 0x80258698: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_11;
    // 0x80258698: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_11:
    // 0x8025869C: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x802586A0: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x802586A4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x802586A8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802586AC: jal         0x8004D5D4
    // 0x802586B0: sw          $v0, 0xB4($s3)
    MEM_W(0XB4, ctx->r19) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_12;
    // 0x802586B0: sw          $v0, 0xB4($s3)
    MEM_W(0XB4, ctx->r19) = ctx->r2;
    after_12:
    // 0x802586B4: lbu         $v0, 0x3($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X3);
    // 0x802586B8: sltiu       $v0, $v0, 0x80
    ctx->r2 = ctx->r2 < 0X80 ? 1 : 0;
    // 0x802586BC: bne         $v0, $zero, L_802586E4
    if (ctx->r2 != 0) {
        // 0x802586C0: nop
    
            goto L_802586E4;
    }
    // 0x802586C0: nop

    // 0x802586C4: lw          $v0, 0xC0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XC0);
    // 0x802586C8: lw          $v1, 0xC4($s3)
    ctx->r3 = MEM_W(ctx->r19, 0XC4);
    // 0x802586CC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x802586D0: bne         $v0, $zero, L_802586E4
    if (ctx->r2 != 0) {
        // 0x802586D4: nop
    
            goto L_802586E4;
    }
    // 0x802586D4: nop

    // 0x802586D8: jal         0x800530E8
    // 0x802586DC: lb          $a0, 0xD($s3)
    ctx->r4 = MEM_B(ctx->r19, 0XD);
    func_800530E8_2E4E8(rdram, ctx);
        goto after_13;
    // 0x802586DC: lb          $a0, 0xD($s3)
    ctx->r4 = MEM_B(ctx->r19, 0XD);
    after_13:
    // 0x802586E0: sb          $zero, 0x3($s3)
    MEM_B(0X3, ctx->r19) = 0;
L_802586E4:
    // 0x802586E4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x802586E8: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x802586EC: jal         0x800710B8
    // 0x802586F0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_800710B8_4C4B8(rdram, ctx);
        goto after_14;
    // 0x802586F0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_14:
    // 0x802586F4: lbu         $v1, 0x8($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X8);
    // 0x802586F8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x802586FC: sb          $v0, 0xB($s3)
    MEM_B(0XB, ctx->r19) = ctx->r2;
    // 0x80258700: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80258704: jal         0x80258A04
    // 0x80258708: sb          $v1, 0x8($s3)
    MEM_B(0X8, ctx->r19) = ctx->r3;
    func_80258A04_ovl37(rdram, ctx);
        goto after_15;
    // 0x80258708: sb          $v1, 0x8($s3)
    MEM_B(0X8, ctx->r19) = ctx->r3;
    after_15:
    // 0x8025870C: addiu       $a0, $zero, 0x12D
    ctx->r4 = ADD32(0, 0X12D);
    // 0x80258710: jal         0x8002A33C
    // 0x80258714: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_16;
    // 0x80258714: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    after_16:
    // 0x80258718: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x8025871C: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80258720: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80258724: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80258728: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8025872C: jr          $ra
    // 0x80258730: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80258730: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80258B3C_ovl37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80258B3C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80258B40: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80258B44: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80258B48: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80258B4C: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x80258B50: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80258B54: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80258B58: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80258B5C: jal         0x8003B8FC
    // 0x80258B60: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_8003B8FC_16CFC(rdram, ctx);
        goto after_0;
    // 0x80258B60: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x80258B64: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80258B68: beq         $a1, $zero, L_80258BD8
    if (ctx->r5 == 0) {
        // 0x80258B6C: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_80258BD8;
    }
    // 0x80258B6C: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x80258B70: lh          $v0, 0x16($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X16);
    // 0x80258B74: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x80258B78: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80258B7C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80258B80: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x80258B84: lui         $v0, 0x8026
    ctx->r2 = S32(0X8026 << 16);
    // 0x80258B88: lw          $v0, -0x7330($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7330);
    // 0x80258B8C: lui         $v1, 0x5200
    ctx->r3 = S32(0X5200 << 16);
    // 0x80258B90: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80258B94: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x80258B98: lw          $v0, 0xD8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD8);
    // 0x80258B9C: srl         $v1, $v0, 16
    ctx->r3 = S32(U32(ctx->r2) >> 16);
    // 0x80258BA0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80258BA4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80258BA8: sw          $v1, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r3;
    // 0x80258BAC: lui         $v0, 0x8026
    ctx->r2 = S32(0X8026 << 16);
    // 0x80258BB0: lw          $v0, -0x7334($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7334);
    // 0x80258BB4: sw          $v0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r2;
    // 0x80258BB8: lh          $v0, 0x18($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X18);
    // 0x80258BBC: lhu         $a0, 0xDC($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XDC);
    // 0x80258BC0: lui         $v1, 0xE100
    ctx->r3 = S32(0XE100 << 16);
    // 0x80258BC4: ori         $v1, $v1, 0x20
    ctx->r3 = ctx->r3 | 0X20;
    // 0x80258BC8: sw          $v1, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r3;
    // 0x80258BCC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80258BD0: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x80258BD4: sw          $v0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r2;
L_80258BD8:
    // 0x80258BD8: lui         $s5, 0x5200
    ctx->r21 = S32(0X5200 << 16);
    // 0x80258BDC: lui         $s4, 0xE100
    ctx->r20 = S32(0XE100 << 16);
    // 0x80258BE0: ori         $s4, $s4, 0x20
    ctx->r20 = ctx->r20 | 0X20;
    // 0x80258BE4: lui         $v0, 0x8026
    ctx->r2 = S32(0X8026 << 16);
    // 0x80258BE8: addiu       $v0, $v0, -0x732C
    ctx->r2 = ADD32(ctx->r2, -0X732C);
    // 0x80258BEC: addiu       $s2, $v0, -0x4
    ctx->r18 = ADD32(ctx->r2, -0X4);
    // 0x80258BF0: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
L_80258BF4:
    // 0x80258BF4: jal         0x8003B8FC
    // 0x80258BF8: nop

    func_8003B8FC_16CFC(rdram, ctx);
        goto after_1;
    // 0x80258BF8: nop

    after_1:
    // 0x80258BFC: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80258C00: beql        $a1, $zero, L_80258C60
    if (ctx->r5 == 0) {
        // 0x80258C04: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_80258C60;
    }
    goto skip_0;
    // 0x80258C04: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    skip_0:
    // 0x80258C08: lw          $v0, 0xD8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD8);
    // 0x80258C0C: srl         $v1, $v0, 16
    ctx->r3 = S32(U32(ctx->r2) >> 16);
    // 0x80258C10: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80258C14: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80258C18: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x80258C1C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80258C20: or          $v0, $v0, $s5
    ctx->r2 = ctx->r2 | ctx->r21;
    // 0x80258C24: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x80258C28: lw          $v0, 0xE0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XE0);
    // 0x80258C2C: srl         $v1, $v0, 16
    ctx->r3 = S32(U32(ctx->r2) >> 16);
    // 0x80258C30: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80258C34: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80258C38: sw          $v1, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r3;
    // 0x80258C3C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x80258C40: sw          $v0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r2;
    // 0x80258C44: lh          $v0, 0xDC($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XDC);
    // 0x80258C48: lhu         $v1, 0xE4($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XE4);
    // 0x80258C4C: sw          $s4, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r20;
    // 0x80258C50: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80258C54: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80258C58: sw          $v0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r2;
    // 0x80258C5C: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
L_80258C60:
    // 0x80258C60: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80258C64: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80258C68: slti        $v0, $s3, 0x3
    ctx->r2 = SIGNED(ctx->r19) < 0X3 ? 1 : 0;
    // 0x80258C6C: bne         $v0, $zero, L_80258BF4
    if (ctx->r2 != 0) {
        // 0x80258C70: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_80258BF4;
    }
    // 0x80258C70: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80258C74: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80258C78: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x80258C7C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80258C80: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80258C84: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80258C88: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80258C8C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80258C90: jr          $ra
    // 0x80258C94: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80258C94: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80258C98: nop

    // 0x80258C9C: nop

;}
RECOMP_FUNC void func_802584C0_ovl37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802584C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802584C4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802584C8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802584CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802584D0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802584D4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802584D8: lui         $at, 0x8026
    ctx->r1 = S32(0X8026 << 16);
    // 0x802584DC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802584E0: lw          $v0, -0x7344($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7344);
    // 0x802584E4: jalr        $v0
    // 0x802584E8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802584E8: nop

    after_0:
    // 0x802584EC: jal         0x800472C0
    // 0x802584F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800472C0_226C0(rdram, ctx);
        goto after_1;
    // 0x802584F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802584F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802584F8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802584FC: jr          $ra
    // 0x80258500: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80258500: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80258AAC_ovl38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80258AAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80258AB0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80258AB4: lbu         $v0, 0xD($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD);
    // 0x80258AB8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80258ABC: sb          $v0, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r2;
    // 0x80258AC0: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80258AC4: sra         $v0, $v0, 23
    ctx->r2 = S32(SIGNED(ctx->r2) >> 23);
    // 0x80258AC8: lui         $v1, 0x8026
    ctx->r3 = S32(0X8026 << 16);
    // 0x80258ACC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80258AD0: lbu         $v1, -0x6DF4($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X6DF4);
    // 0x80258AD4: lb          $v0, 0xD($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD);
    // 0x80258AD8: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80258ADC: sb          $v1, 0x96($a0)
    MEM_B(0X96, ctx->r4) = ctx->r3;
    // 0x80258AE0: lui         $v1, 0x8026
    ctx->r3 = S32(0X8026 << 16);
    // 0x80258AE4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80258AE8: lbu         $v1, -0x6DF3($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X6DF3);
    // 0x80258AEC: lb          $v0, 0xD($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD);
    // 0x80258AF0: slti        $v0, $v0, 0x6
    ctx->r2 = SIGNED(ctx->r2) < 0X6 ? 1 : 0;
    // 0x80258AF4: bne         $v0, $zero, L_80258B04
    if (ctx->r2 != 0) {
        // 0x80258AF8: sb          $v1, 0x97($a0)
        MEM_B(0X97, ctx->r4) = ctx->r3;
            goto L_80258B04;
    }
    // 0x80258AF8: sb          $v1, 0x97($a0)
    MEM_B(0X97, ctx->r4) = ctx->r3;
    // 0x80258AFC: jal         0x8004F568
    // 0x80258B00: nop

    func_8004F568_2A968(rdram, ctx);
        goto after_0;
    // 0x80258B00: nop

    after_0:
L_80258B04:
    // 0x80258B04: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80258B08: jr          $ra
    // 0x80258B0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80258B0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802584C0_ovl38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802584C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802584C4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802584C8: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x802584CC: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x802584D0: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
    // 0x802584D4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802584D8: lui         $at, 0x8026
    ctx->r1 = S32(0X8026 << 16);
    // 0x802584DC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802584E0: lw          $v0, -0x6DE8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6DE8);
    // 0x802584E4: jalr        $v0
    // 0x802584E8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802584E8: nop

    after_0:
    // 0x802584EC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802584F0: jr          $ra
    // 0x802584F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802584F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80258FB0_ovl38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80258FB0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80258FB4: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80258FB8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80258FBC: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x80258FC0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80258FC4: addiu       $a1, $a1, 0x4D58
    ctx->r5 = ADD32(ctx->r5, 0X4D58);
    // 0x80258FC8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80258FCC: jal         0x8009A3B4
    // 0x80258FD0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80258FD0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80258FD4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80258FD8: jal         0x802590F8
    // 0x80258FDC: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    func_802590F8_ovl38(rdram, ctx);
        goto after_1;
    // 0x80258FDC: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    after_1:
    // 0x80258FE0: lh          $v0, 0x18($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X18);
    // 0x80258FE4: lh          $v1, 0x10($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X10);
    // 0x80258FE8: lh          $a1, 0x1A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X1A);
    // 0x80258FEC: lh          $a0, 0x14($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X14);
    // 0x80258FF0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80258FF4: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x80258FF8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80258FFC: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80259000: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80259004: lh          $v0, 0x12($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X12);
    // 0x80259008: lh          $v1, 0x1C($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X1C);
    // 0x8025900C: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x80259010: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80259014: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80259018: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8025901C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80259020: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80259024: jal         0x8004F094
    // 0x80259028: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    func_8004F094_2A494(rdram, ctx);
        goto after_2;
    // 0x80259028: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    after_2:
    // 0x8025902C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80259030: beq         $a0, $zero, L_8025906C
    if (ctx->r4 == 0) {
        // 0x80259034: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8025906C;
    }
    // 0x80259034: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80259038: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x8025903C: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80259040: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80259044: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
    // 0x80259048: sb          $v1, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r3;
    // 0x8025904C: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x80259050: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
    // 0x80259054: lh          $v0, 0x20($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X20);
    // 0x80259058: sh          $v0, 0x90($a0)
    MEM_H(0X90, ctx->r4) = ctx->r2;
    // 0x8025905C: lh          $v0, 0x24($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X24);
    // 0x80259060: sh          $v0, 0x92($a0)
    MEM_H(0X92, ctx->r4) = ctx->r2;
    // 0x80259064: lh          $v0, 0x28($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X28);
    // 0x80259068: sh          $v0, 0x94($a0)
    MEM_H(0X94, ctx->r4) = ctx->r2;
L_8025906C:
    // 0x8025906C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80259070: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80259074: jr          $ra
    // 0x80259078: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80259078: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80258F68_ovl38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80258F68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80258F6C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80258F70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80258F74: jal         0x8004F094
    // 0x80258F78: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8004F094_2A494(rdram, ctx);
        goto after_0;
    // 0x80258F78: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80258F7C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80258F80: beq         $a0, $zero, L_80258FA0
    if (ctx->r4 == 0) {
        // 0x80258F84: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80258FA0;
    }
    // 0x80258F84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80258F88: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x80258F8C: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80258F90: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
    // 0x80258F94: sb          $v1, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r3;
    // 0x80258F98: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x80258F9C: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
L_80258FA0:
    // 0x80258FA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80258FA4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80258FA8: jr          $ra
    // 0x80258FAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80258FAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8025907C_ovl38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8025907C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80259080: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80259084: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80259088: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8025908C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80259090: addiu       $a1, $a1, 0x4D78
    ctx->r5 = ADD32(ctx->r5, 0X4D78);
    // 0x80259094: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80259098: jal         0x8009A3B4
    // 0x8025909C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8025909C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x802590A0: lh          $v0, 0x10($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X10);
    // 0x802590A4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802590A8: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x802590AC: lh          $v0, 0x12($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X12);
    // 0x802590B0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802590B4: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x802590B8: lh          $v0, 0x14($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X14);
    // 0x802590BC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802590C0: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x802590C4: lhu         $v0, 0x10($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X10);
    // 0x802590C8: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x802590CC: sh          $v0, 0xAC($s0)
    MEM_H(0XAC, ctx->r16) = ctx->r2;
    // 0x802590D0: lhu         $v0, 0x12($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X12);
    // 0x802590D4: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x802590D8: sh          $v0, 0xAE($s0)
    MEM_H(0XAE, ctx->r16) = ctx->r2;
    // 0x802590DC: lhu         $v0, 0x14($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X14);
    // 0x802590E0: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x802590E4: sh          $v0, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r2;
    // 0x802590E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802590EC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802590F0: jr          $ra
    // 0x802590F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802590F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802586B8_ovl38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802586B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802586BC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802586C0: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x802586C4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802586C8: lui         $at, 0x8026
    ctx->r1 = S32(0X8026 << 16);
    // 0x802586CC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802586D0: lw          $v0, -0x6DD4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6DD4);
    // 0x802586D4: jalr        $v0
    // 0x802586D8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802586D8: nop

    after_0:
    // 0x802586DC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802586E0: jr          $ra
    // 0x802586E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802586E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802586E8_ovl38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802586E8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802586EC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802586F0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802586F4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802586F8: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x802586FC: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80258700: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80258704: lbu         $a0, 0x6($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X6);
    // 0x80258708: lui         $v0, 0x8026
    ctx->r2 = S32(0X8026 << 16);
    // 0x8025870C: addiu       $v0, $v0, -0x6E20
    ctx->r2 = ADD32(ctx->r2, -0X6E20);
    // 0x80258710: sw          $zero, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = 0;
    // 0x80258714: sw          $zero, 0xCC($s0)
    MEM_W(0XCC, ctx->r16) = 0;
    // 0x80258718: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x8025871C: ori         $v1, $v1, 0x6
    ctx->r3 = ctx->r3 | 0X6;
    // 0x80258720: ori         $a0, $a0, 0x20
    ctx->r4 = ctx->r4 | 0X20;
    // 0x80258724: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x80258728: jal         0x80034B34
    // 0x8025872C: sb          $a0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r4;
    func_80034B34_FF34(rdram, ctx);
        goto after_0;
    // 0x8025872C: sb          $a0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r4;
    after_0:
    // 0x80258730: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80258734: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x80258738: addiu       $s2, $s2, 0x4A06
    ctx->r18 = ADD32(ctx->r18, 0X4A06);
    // 0x8025873C: sh          $v0, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r2;
    // 0x80258740: lhu         $v1, 0x0($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X0);
    // 0x80258744: addiu       $s1, $s0, 0x8C
    ctx->r17 = ADD32(ctx->r16, 0X8C);
    // 0x80258748: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8025874C: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x80258750: addiu       $v0, $zero, 0x680
    ctx->r2 = ADD32(0, 0X680);
    // 0x80258754: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80258758: sh          $v1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r3;
    // 0x8025875C: sh          $v0, 0x58($s0)
    MEM_H(0X58, ctx->r16) = ctx->r2;
    // 0x80258760: jal         0x80031600
    // 0x80258764: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_80031600_CA00(rdram, ctx);
        goto after_1;
    // 0x80258764: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_1:
    // 0x80258768: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8025876C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x80258770: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80258774: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80258778: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8025877C: jal         0x80031DA8
    // 0x80258780: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_2;
    // 0x80258780: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_2:
    // 0x80258784: addiu       $a0, $s0, 0x44
    ctx->r4 = ADD32(ctx->r16, 0X44);
    // 0x80258788: jal         0x802590F8
    // 0x8025878C: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    func_802590F8_ovl38(rdram, ctx);
        goto after_3;
    // 0x8025878C: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    after_3:
    // 0x80258790: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x80258794: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80258798: addiu       $a1, $s2, 0x372
    ctx->r5 = ADD32(ctx->r18, 0X372);
    // 0x8025879C: jal         0x8009A3B4
    // 0x802587A0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x802587A0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x802587A4: addiu       $a0, $s0, 0xAC
    ctx->r4 = ADD32(ctx->r16, 0XAC);
    // 0x802587A8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802587AC: jal         0x8009A3B4
    // 0x802587B0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x802587B0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x802587B4: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x802587B8: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x802587BC: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x802587C0: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x802587C4: lh          $a3, 0x18($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X18);
    // 0x802587C8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x802587CC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802587D0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802587D4: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x802587D8: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x802587DC: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x802587E0: jal         0x8009A3B4
    // 0x802587E4: sw          $a3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r7;
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x802587E4: sw          $a3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r7;
    after_6:
    // 0x802587E8: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x802587EC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802587F0: jal         0x8009A3B4
    // 0x802587F4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x802587F4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_7:
    // 0x802587F8: lui         $v0, 0x280
    ctx->r2 = S32(0X280 << 16);
    // 0x802587FC: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x80258800: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80258804: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x80258808: jal         0x8004D5D4
    // 0x8025880C: sw          $v0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_8;
    // 0x8025880C: sw          $v0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r2;
    after_8:
    // 0x80258810: jal         0x80258ED8
    // 0x80258814: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80258ED8_ovl38(rdram, ctx);
        goto after_9;
    // 0x80258814: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x80258818: addiu       $a0, $s2, -0x56
    ctx->r4 = ADD32(ctx->r18, -0X56);
    // 0x8025881C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x80258820: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80258824: jal         0x800710B8
    // 0x80258828: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    func_800710B8_4C4B8(rdram, ctx);
        goto after_10;
    // 0x80258828: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    after_10:
    // 0x8025882C: lui         $v1, 0x51EB
    ctx->r3 = S32(0X51EB << 16);
    // 0x80258830: ori         $v1, $v1, 0x851F
    ctx->r3 = ctx->r3 | 0X851F;
    // 0x80258834: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80258838: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8025883C: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x80258840: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x80258844: mfhi        $t0
    ctx->r8 = hi;
    // 0x80258848: sra         $v1, $t0, 4
    ctx->r3 = S32(SIGNED(ctx->r8) >> 4);
    // 0x8025884C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80258850: sb          $v1, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r3;
    // 0x80258854: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80258858: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8025885C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80258860: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80258864: jr          $ra
    // 0x80258868: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80258868: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80258944_ovl38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80258944: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80258948: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8025894C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80258950: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x80258954: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80258958: lb          $v0, 0xE($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XE);
    // 0x8025895C: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x80258960: sll         $a1, $v0, 5
    ctx->r5 = S32(ctx->r2 << 5);
    // 0x80258964: sll         $a0, $v0, 21
    ctx->r4 = S32(ctx->r2 << 21);
    // 0x80258968: sll         $v0, $v0, 13
    ctx->r2 = S32(ctx->r2 << 13);
    // 0x8025896C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80258970: lhu         $v1, 0x54($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X54);
    // 0x80258974: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x80258978: or          $a0, $a0, $a1
    ctx->r4 = ctx->r4 | ctx->r5;
    // 0x8025897C: sw          $a0, 0xB4($s1)
    MEM_W(0XB4, ctx->r17) = ctx->r4;
    // 0x80258980: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    // 0x80258984: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x80258988: addiu       $s0, $s1, 0x8C
    ctx->r16 = ADD32(ctx->r17, 0X8C);
    // 0x8025898C: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x80258990: lhu         $v0, 0x58($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X58);
    // 0x80258994: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80258998: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8025899C: jal         0x80031600
    // 0x802589A0: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_80031600_CA00(rdram, ctx);
        goto after_0;
    // 0x802589A0: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_0:
    // 0x802589A4: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802589A8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x802589AC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x802589B0: lb          $v0, 0xE($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XE);
    // 0x802589B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802589B8: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x802589BC: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x802589C0: addiu       $v0, $v0, 0x100
    ctx->r2 = ADD32(ctx->r2, 0X100);
    // 0x802589C4: jal         0x80031DA8
    // 0x802589C8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_1;
    // 0x802589C8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_1:
    // 0x802589CC: lbu         $v0, 0xE($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XE);
    // 0x802589D0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802589D4: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
    // 0x802589D8: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802589DC: bne         $v0, $zero, L_802589EC
    if (ctx->r2 != 0) {
        // 0x802589E0: nop
    
            goto L_802589EC;
    }
    // 0x802589E0: nop

    // 0x802589E4: jal         0x8004F568
    // 0x802589E8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F568_2A968(rdram, ctx);
        goto after_2;
    // 0x802589E8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
L_802589EC:
    // 0x802589EC: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x802589F0: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x802589F4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802589F8: jr          $ra
    // 0x802589FC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x802589FC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_802584F8_ovl38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802584F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802584FC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80258500: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80258504: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80258508: lui         $at, 0x8026
    ctx->r1 = S32(0X8026 << 16);
    // 0x8025850C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80258510: lw          $v0, -0x6DDC($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6DDC);
    // 0x80258514: jalr        $v0
    // 0x80258518: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80258518: nop

    after_0:
    // 0x8025851C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80258520: jr          $ra
    // 0x80258524: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80258524: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80258528_ovl38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80258528: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8025852C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80258530: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80258534: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80258538: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8025853C: lb          $a0, 0xD($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XD);
    // 0x80258540: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80258544: lbu         $a1, 0x6($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X6);
    // 0x80258548: lui         $v0, 0x8026
    ctx->r2 = S32(0X8026 << 16);
    // 0x8025854C: addiu       $v0, $v0, -0x6E20
    ctx->r2 = ADD32(ctx->r2, -0X6E20);
    // 0x80258550: sw          $zero, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = 0;
    // 0x80258554: sw          $zero, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = 0;
    // 0x80258558: sw          $zero, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = 0;
    // 0x8025855C: sw          $zero, 0xCC($s0)
    MEM_W(0XCC, ctx->r16) = 0;
    // 0x80258560: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x80258564: ori         $v1, $v1, 0x6
    ctx->r3 = ctx->r3 | 0X6;
    // 0x80258568: ori         $a1, $a1, 0x20
    ctx->r5 = ctx->r5 | 0X20;
    // 0x8025856C: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x80258570: jal         0x800530E8
    // 0x80258574: sb          $a1, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r5;
    func_800530E8_2E4E8(rdram, ctx);
        goto after_0;
    // 0x80258574: sb          $a1, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r5;
    after_0:
    // 0x80258578: jal         0x8025907C
    // 0x8025857C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8025907C_ovl38(rdram, ctx);
        goto after_1;
    // 0x8025857C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80258580: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80258584: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80258588: jal         0x8009A3B4
    // 0x8025858C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8025858C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x80258590: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80258594: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x80258598: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8025859C: jal         0x8009A3B4
    // 0x802585A0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x802585A0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x802585A4: lui         $v0, 0x280
    ctx->r2 = S32(0X280 << 16);
    // 0x802585A8: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x802585AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802585B0: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x802585B4: jal         0x8004D5D4
    // 0x802585B8: sw          $v0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_4;
    // 0x802585B8: sw          $v0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r2;
    after_4:
    // 0x802585BC: jal         0x80258B10
    // 0x802585C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80258B10_ovl38(rdram, ctx);
        goto after_5;
    // 0x802585C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x802585C4: addiu       $a0, $zero, 0x12E
    ctx->r4 = ADD32(0, 0X12E);
    // 0x802585C8: jal         0x8002A33C
    // 0x802585CC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_6;
    // 0x802585CC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_6:
    // 0x802585D0: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x802585D4: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    // 0x802585D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802585DC: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x802585E0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802585E4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802585E8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802585EC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802585F0: jr          $ra
    // 0x802585F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802585F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80258D80_ovl38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80258D80: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80258D84: sw          $s1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r17;
    // 0x80258D88: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80258D8C: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x80258D90: sw          $s0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r16;
    // 0x80258D94: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80258D98: addiu       $s0, $s0, 0x49CC
    ctx->r16 = ADD32(ctx->r16, 0X49CC);
    // 0x80258D9C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80258DA0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80258DA4: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x80258DA8: jal         0x8009A3B4
    // 0x80258DAC: sw          $s2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r18;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80258DAC: sw          $s2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r18;
    after_0:
    // 0x80258DB0: addiu       $a0, $s0, -0x1C
    ctx->r4 = ADD32(ctx->r16, -0X1C);
    // 0x80258DB4: lw          $v0, 0x4C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4C);
    // 0x80258DB8: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x80258DBC: lb          $a2, 0x4EEC($a2)
    ctx->r6 = MEM_B(ctx->r6, 0X4EEC);
    // 0x80258DC0: lui         $v1, 0xFFB0
    ctx->r3 = S32(0XFFB0 << 16);
    // 0x80258DC4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80258DC8: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x80258DCC: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x80258DD0: lui         $s2, 0x8026
    ctx->r18 = S32(0X8026 << 16);
    // 0x80258DD4: addu        $s2, $s2, $a2
    ctx->r18 = ADD32(ctx->r18, ctx->r6);
    // 0x80258DD8: lw          $s2, -0x6D40($s2)
    ctx->r18 = MEM_W(ctx->r18, -0X6D40);
    // 0x80258DDC: jal         0x80071060
    // 0x80258DE0: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80071060_4C460(rdram, ctx);
        goto after_1;
    // 0x80258DE0: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_1:
    // 0x80258DE4: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x80258DE8: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x80258DEC: jal         0x802590F8
    // 0x80258DF0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_802590F8_ovl38(rdram, ctx);
        goto after_2;
    // 0x80258DF0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_2:
    // 0x80258DF4: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x80258DF8: lh          $t1, 0x30($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X30);
    // 0x80258DFC: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    // 0x80258E00: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x80258E04: lh          $t2, 0x32($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X32);
    // 0x80258E08: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
    // 0x80258E0C: lh          $t0, 0x34($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X34);
    // 0x80258E10: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x80258E14: sll         $v0, $t1, 9
    ctx->r2 = S32(ctx->r9 << 9);
    // 0x80258E18: addu        $v0, $a3, $v0
    ctx->r2 = ADD32(ctx->r7, ctx->r2);
    // 0x80258E1C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80258E20: sh          $v0, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r2;
    // 0x80258E24: sll         $v0, $t2, 9
    ctx->r2 = S32(ctx->r10 << 9);
    // 0x80258E28: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x80258E2C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80258E30: sh          $v0, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = ctx->r2;
    // 0x80258E34: sll         $v0, $t0, 9
    ctx->r2 = S32(ctx->r8 << 9);
    // 0x80258E38: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x80258E3C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80258E40: sll         $t1, $t1, 8
    ctx->r9 = S32(ctx->r9 << 8);
    // 0x80258E44: addu        $a3, $a3, $t1
    ctx->r7 = ADD32(ctx->r7, ctx->r9);
    // 0x80258E48: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    // 0x80258E4C: sll         $t2, $t2, 8
    ctx->r10 = S32(ctx->r10 << 8);
    // 0x80258E50: addu        $v1, $v1, $t2
    ctx->r3 = ADD32(ctx->r3, ctx->r10);
    // 0x80258E54: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80258E58: sll         $t0, $t0, 8
    ctx->r8 = S32(ctx->r8 << 8);
    // 0x80258E5C: addu        $a1, $a1, $t0
    ctx->r5 = ADD32(ctx->r5, ctx->r8);
    // 0x80258E60: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80258E64: sh          $v0, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = ctx->r2;
    // 0x80258E68: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80258E6C: sh          $a3, 0x40($sp)
    MEM_H(0X40, ctx->r29) = ctx->r7;
    // 0x80258E70: sh          $v1, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r3;
    // 0x80258E74: sh          $a1, 0x44($sp)
    MEM_H(0X44, ctx->r29) = ctx->r5;
    // 0x80258E78: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80258E7C: addiu       $v0, $zero, 0x4000
    ctx->r2 = ADD32(0, 0X4000);
    // 0x80258E80: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80258E84: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x80258E88: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80258E8C: addiu       $v0, $s1, 0xC8
    ctx->r2 = ADD32(ctx->r17, 0XC8);
    // 0x80258E90: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80258E94: lui         $v0, 0x2800
    ctx->r2 = S32(0X2800 << 16);
    // 0x80258E98: or          $s0, $s0, $v0
    ctx->r16 = ctx->r16 | ctx->r2;
    // 0x80258E9C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80258EA0: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    // 0x80258EA4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80258EA8: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80258EAC: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80258EB0: jal         0x80051F9C
    // 0x80258EB4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051F9C_2D39C(rdram, ctx);
        goto after_3;
    // 0x80258EB4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_3:
    // 0x80258EB8: sw          $zero, 0xC8($s1)
    MEM_W(0XC8, ctx->r17) = 0;
    // 0x80258EBC: sw          $zero, 0xCC($s1)
    MEM_W(0XCC, ctx->r17) = 0;
    // 0x80258EC0: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x80258EC4: lw          $s2, 0x60($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X60);
    // 0x80258EC8: lw          $s1, 0x5C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X5C);
    // 0x80258ECC: lw          $s0, 0x58($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X58);
    // 0x80258ED0: jr          $ra
    // 0x80258ED4: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    TRACE_RETURN()
    return;
    // 0x80258ED4: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_80258B10_ovl38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80258B10: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x80258B14: sw          $s3, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r19;
    // 0x80258B18: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x80258B1C: sw          $s0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r16;
    // 0x80258B20: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80258B24: addiu       $s0, $s0, 0x4EEC
    ctx->r16 = ADD32(ctx->r16, 0X4EEC);
    // 0x80258B28: addiu       $a0, $s0, -0x53C
    ctx->r4 = ADD32(ctx->r16, -0X53C);
    // 0x80258B2C: sw          $ra, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r31;
    // 0x80258B30: sw          $s6, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r22;
    // 0x80258B34: sw          $s5, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r21;
    // 0x80258B38: sw          $s4, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r20;
    // 0x80258B3C: sw          $s2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r18;
    // 0x80258B40: sw          $s1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r17;
    // 0x80258B44: lb          $s1, 0x0($s0)
    ctx->r17 = MEM_B(ctx->r16, 0X0);
    // 0x80258B48: jal         0x80071060
    // 0x80258B4C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80071060_4C460(rdram, ctx);
        goto after_0;
    // 0x80258B4C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_0:
    // 0x80258B50: addiu       $s2, $sp, 0x30
    ctx->r18 = ADD32(ctx->r29, 0X30);
    // 0x80258B54: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80258B58: addiu       $a1, $s0, -0x2F4
    ctx->r5 = ADD32(ctx->r16, -0X2F4);
    // 0x80258B5C: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x80258B60: jal         0x8009A3B4
    // 0x80258B64: addu        $s5, $v0, $zero
    ctx->r21 = ADD32(ctx->r2, 0);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80258B64: addu        $s5, $v0, $zero
    ctx->r21 = ADD32(ctx->r2, 0);
    after_1:
    // 0x80258B68: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x80258B6C: addiu       $a1, $s0, -0x174
    ctx->r5 = ADD32(ctx->r16, -0X174);
    // 0x80258B70: jal         0x8009A3B4
    // 0x80258B74: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80258B74: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80258B78: addiu       $s0, $s3, 0x8C
    ctx->r16 = ADD32(ctx->r19, 0X8C);
    // 0x80258B7C: jal         0x8002C654
    // 0x80258B80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_3;
    // 0x80258B80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80258B84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80258B88: addiu       $s4, $sp, 0x60
    ctx->r20 = ADD32(ctx->r29, 0X60);
    // 0x80258B8C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x80258B90: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x80258B94: sw          $v0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r2;
    // 0x80258B98: sw          $v0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r2;
    // 0x80258B9C: jal         0x80031DA8
    // 0x80258BA0: sw          $v0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_4;
    // 0x80258BA0: sw          $v0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r2;
    after_4:
    // 0x80258BA4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80258BA8: jal         0x80030834
    // 0x80258BAC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80030834_BC34(rdram, ctx);
        goto after_5;
    // 0x80258BAC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80258BB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80258BB4: addiu       $s6, $sp, 0x50
    ctx->r22 = ADD32(ctx->r29, 0X50);
    // 0x80258BB8: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    // 0x80258BBC: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    // 0x80258BC0: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x80258BC4: sh          $zero, 0x50($sp)
    MEM_H(0X50, ctx->r29) = 0;
    // 0x80258BC8: sh          $v0, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r2;
    // 0x80258BCC: jal         0x800308E8
    // 0x80258BD0: sh          $zero, 0x54($sp)
    MEM_H(0X54, ctx->r29) = 0;
    func_800308E8_BCE8(rdram, ctx);
        goto after_6;
    // 0x80258BD0: sh          $zero, 0x54($sp)
    MEM_H(0X54, ctx->r29) = 0;
    after_6:
    // 0x80258BD4: lw          $v1, 0x60($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X60);
    // 0x80258BD8: lui         $a3, 0x8026
    ctx->r7 = S32(0X8026 << 16);
    // 0x80258BDC: addiu       $a3, $a3, -0x6DC0
    ctx->r7 = ADD32(ctx->r7, -0X6DC0);
    // 0x80258BE0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80258BE4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80258BE8: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x80258BEC: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80258BF0: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x80258BF4: sll         $s2, $s1, 2
    ctx->r18 = S32(ctx->r17 << 2);
    // 0x80258BF8: addu        $a3, $s2, $a3
    ctx->r7 = ADD32(ctx->r18, ctx->r7);
    // 0x80258BFC: sh          $v0, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r2;
    // 0x80258C00: sll         $a0, $v1, 2
    ctx->r4 = S32(ctx->r3 << 2);
    // 0x80258C04: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x80258C08: lw          $v1, 0x68($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X68);
    // 0x80258C0C: sll         $a0, $a0, 4
    ctx->r4 = S32(ctx->r4 << 4);
    // 0x80258C10: sra         $a0, $a0, 4
    ctx->r4 = S32(SIGNED(ctx->r4) >> 4);
    // 0x80258C14: sh          $a0, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r4;
    // 0x80258C18: sll         $a2, $v1, 2
    ctx->r6 = S32(ctx->r3 << 2);
    // 0x80258C1C: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x80258C20: sll         $a2, $a2, 4
    ctx->r6 = S32(ctx->r6 << 4);
    // 0x80258C24: sra         $a2, $a2, 4
    ctx->r6 = S32(SIGNED(ctx->r6) >> 4);
    // 0x80258C28: sh          $a2, 0x54($sp)
    MEM_H(0X54, ctx->r29) = ctx->r6;
    // 0x80258C2C: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x80258C30: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80258C34: sra         $v0, $v0, 8
    ctx->r2 = S32(SIGNED(ctx->r2) >> 8);
    // 0x80258C38: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80258C3C: mflo        $v0
    ctx->r2 = lo;
    // 0x80258C40: lh          $a1, 0x58($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X58);
    // 0x80258C44: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80258C48: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80258C4C: sw          $a1, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r5;
    // 0x80258C50: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x80258C54: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80258C58: sra         $a0, $a0, 8
    ctx->r4 = S32(SIGNED(ctx->r4) >> 8);
    // 0x80258C5C: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80258C60: mflo        $a0
    ctx->r4 = lo;
    // 0x80258C64: lh          $v1, 0x5A($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X5A);
    // 0x80258C68: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80258C6C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80258C70: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    // 0x80258C74: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x80258C78: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x80258C7C: sra         $a2, $a2, 8
    ctx->r6 = S32(SIGNED(ctx->r6) >> 8);
    // 0x80258C80: mult        $a2, $v0
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80258C84: mflo        $a2
    ctx->r6 = lo;
    // 0x80258C88: sll         $s1, $s1, 3
    ctx->r17 = S32(ctx->r17 << 3);
    // 0x80258C8C: lh          $v0, 0x5C($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X5C);
    // 0x80258C90: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80258C94: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80258C98: sh          $a1, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r5;
    // 0x80258C9C: sh          $v1, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r3;
    // 0x80258CA0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80258CA4: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80258CA8: sw          $v0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r2;
    // 0x80258CAC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80258CB0: sh          $v0, 0x54($sp)
    MEM_H(0X54, ctx->r29) = ctx->r2;
    // 0x80258CB4: lui         $v0, 0x8026
    ctx->r2 = S32(0X8026 << 16);
    // 0x80258CB8: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80258CBC: lw          $v0, -0x6D7C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6D7C);
    // 0x80258CC0: addiu       $v0, $v0, 0x1000
    ctx->r2 = ADD32(ctx->r2, 0X1000);
    // 0x80258CC4: sw          $v0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r2;
    // 0x80258CC8: lui         $v0, 0x8026
    ctx->r2 = S32(0X8026 << 16);
    // 0x80258CCC: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80258CD0: lw          $v0, -0x6D7C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6D7C);
    // 0x80258CD4: addiu       $v0, $v0, 0x1000
    ctx->r2 = ADD32(ctx->r2, 0X1000);
    // 0x80258CD8: sw          $v0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r2;
    // 0x80258CDC: lui         $v0, 0x8026
    ctx->r2 = S32(0X8026 << 16);
    // 0x80258CE0: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80258CE4: lw          $v0, -0x6D80($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6D80);
    // 0x80258CE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80258CEC: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x80258CF0: addiu       $v0, $v0, 0x1000
    ctx->r2 = ADD32(ctx->r2, 0X1000);
    // 0x80258CF4: jal         0x80031DA8
    // 0x80258CF8: sw          $v0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_7;
    // 0x80258CF8: sw          $v0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r2;
    after_7:
    // 0x80258CFC: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80258D00: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80258D04: addiu       $v0, $zero, 0x4000
    ctx->r2 = ADD32(0, 0X4000);
    // 0x80258D08: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80258D0C: lbu         $v1, 0x1($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X1);
    // 0x80258D10: addiu       $v0, $s3, 0xC0
    ctx->r2 = ADD32(ctx->r19, 0XC0);
    // 0x80258D14: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80258D18: lui         $v0, 0x2800
    ctx->r2 = S32(0X2800 << 16);
    // 0x80258D1C: or          $s5, $s5, $v0
    ctx->r21 = ctx->r21 | ctx->r2;
    // 0x80258D20: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80258D24: sw          $s5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r21;
    // 0x80258D28: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80258D2C: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80258D30: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x80258D34: lui         $a1, 0x8026
    ctx->r5 = S32(0X8026 << 16);
    // 0x80258D38: addu        $a1, $a1, $s2
    ctx->r5 = ADD32(ctx->r5, ctx->r18);
    // 0x80258D3C: lw          $a1, -0x6DA0($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X6DA0);
    // 0x80258D40: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x80258D44: addiu       $a2, $s3, 0x14
    ctx->r6 = ADD32(ctx->r19, 0X14);
    // 0x80258D48: jal         0x80051F9C
    // 0x80258D4C: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    func_80051F9C_2D39C(rdram, ctx);
        goto after_8;
    // 0x80258D4C: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    after_8:
    // 0x80258D50: sw          $zero, 0xC0($s3)
    MEM_W(0XC0, ctx->r19) = 0;
    // 0x80258D54: sw          $zero, 0xC4($s3)
    MEM_W(0XC4, ctx->r19) = 0;
    // 0x80258D58: lw          $ra, 0x8C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X8C);
    // 0x80258D5C: lw          $s6, 0x88($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X88);
    // 0x80258D60: lw          $s5, 0x84($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X84);
    // 0x80258D64: lw          $s4, 0x80($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X80);
    // 0x80258D68: lw          $s3, 0x7C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X7C);
    // 0x80258D6C: lw          $s2, 0x78($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X78);
    // 0x80258D70: lw          $s1, 0x74($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X74);
    // 0x80258D74: lw          $s0, 0x70($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X70);
    // 0x80258D78: jr          $ra
    // 0x80258D7C: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    TRACE_RETURN()
    return;
    // 0x80258D7C: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void func_802585F8_ovl38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802585F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802585FC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80258600: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80258604: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80258608: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8025860C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80258610: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    // 0x80258614: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80258618: sra         $v1, $v0, 24
    ctx->r3 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8025861C: bne         $v1, $zero, L_80258634
    if (ctx->r3 != 0) {
        // 0x80258620: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_80258634;
    }
    // 0x80258620: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80258624: jal         0x8004F568
    // 0x80258628: nop

    func_8004F568_2A968(rdram, ctx);
        goto after_0;
    // 0x80258628: nop

    after_0:
    // 0x8025862C: j           L_802586A8
    // 0x80258630: nop

        goto L_802586A8;
    // 0x80258630: nop

L_80258634:
    // 0x80258634: bne         $v1, $v0, L_80258660
    if (ctx->r3 != ctx->r2) {
        // 0x80258638: addiu       $a0, $s0, 0x34
        ctx->r4 = ADD32(ctx->r16, 0X34);
            goto L_80258660;
    }
    // 0x80258638: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8025863C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80258640: lb          $v0, 0x4EEE($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4EEE);
    // 0x80258644: beq         $v0, $zero, L_80258654
    if (ctx->r2 == 0) {
        // 0x80258648: nop
    
            goto L_80258654;
    }
    // 0x80258648: nop

    // 0x8025864C: jal         0x80258F68
    // 0x80258650: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80258F68_ovl38(rdram, ctx);
        goto after_1;
    // 0x80258650: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_80258654:
    // 0x80258654: jal         0x80258FB0
    // 0x80258658: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80258FB0_ovl38(rdram, ctx);
        goto after_2;
    // 0x80258658: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8025865C: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
L_80258660:
    // 0x80258660: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80258664: jal         0x8009A3B4
    // 0x80258668: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80258668: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_3:
    // 0x8025866C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80258670: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80258674: jal         0x8009A3B4
    // 0x80258678: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80258678: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x8025867C: jal         0x8025907C
    // 0x80258680: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8025907C_ovl38(rdram, ctx);
        goto after_5;
    // 0x80258680: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80258684: jal         0x80258B10
    // 0x80258688: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80258B10_ovl38(rdram, ctx);
        goto after_6;
    // 0x80258688: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x8025868C: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x80258690: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x80258694: sltiu       $v0, $v0, 0x3
    ctx->r2 = ctx->r2 < 0X3 ? 1 : 0;
    // 0x80258698: beq         $v0, $zero, L_802586A8
    if (ctx->r2 == 0) {
        // 0x8025869C: nop
    
            goto L_802586A8;
    }
    // 0x8025869C: nop

    // 0x802586A0: jal         0x80258D80
    // 0x802586A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80258D80_ovl38(rdram, ctx);
        goto after_7;
    // 0x802586A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
L_802586A8:
    // 0x802586A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802586AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802586B0: jr          $ra
    // 0x802586B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802586B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802590F8_ovl38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802590F8: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x802590FC: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x80259100: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80259104: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x80259108: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8025910C: sw          $ra, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r31;
    // 0x80259110: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x80259114: jal         0x80034B34
    // 0x80259118: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    func_80034B34_FF34(rdram, ctx);
        goto after_0;
    // 0x80259118: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    after_0:
    // 0x8025911C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80259120: lhu         $v1, 0x4A06($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X4A06);
    // 0x80259124: addiu       $s3, $sp, 0x30
    ctx->r19 = ADD32(ctx->r29, 0X30);
    // 0x80259128: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8025912C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80259130: sh          $v0, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r2;
    // 0x80259134: sh          $zero, 0x34($sp)
    MEM_H(0X34, ctx->r29) = 0;
    // 0x80259138: jal         0x80031600
    // 0x8025913C: sh          $v1, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r3;
    func_80031600_CA00(rdram, ctx);
        goto after_1;
    // 0x8025913C: sh          $v1, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r3;
    after_1:
    // 0x80259140: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80259144: addiu       $s0, $sp, 0x38
    ctx->r16 = ADD32(ctx->r29, 0X38);
    // 0x80259148: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8025914C: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x80259150: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x80259154: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x80259158: jal         0x80031DA8
    // 0x8025915C: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_2;
    // 0x8025915C: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    after_2:
    // 0x80259160: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80259164: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80259168: addiu       $v0, $zero, -0x1000
    ctx->r2 = ADD32(0, -0X1000);
    // 0x8025916C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x80259170: sh          $zero, 0x30($sp)
    MEM_H(0X30, ctx->r29) = 0;
    // 0x80259174: sh          $zero, 0x32($sp)
    MEM_H(0X32, ctx->r29) = 0;
    // 0x80259178: jal         0x800308E8
    // 0x8025917C: sh          $v0, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r2;
    func_800308E8_BCE8(rdram, ctx);
        goto after_3;
    // 0x8025917C: sh          $v0, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r2;
    after_3:
    // 0x80259180: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x80259184: mult        $v0, $s1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80259188: mflo        $v0
    ctx->r2 = lo;
    // 0x8025918C: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x80259190: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
    // 0x80259194: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x80259198: mult        $v0, $s1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8025919C: mflo        $v0
    ctx->r2 = lo;
    // 0x802591A0: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x802591A4: sh          $v0, 0x2($s2)
    MEM_H(0X2, ctx->r18) = ctx->r2;
    // 0x802591A8: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x802591AC: mult        $v0, $s1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802591B0: mflo        $v0
    ctx->r2 = lo;
    // 0x802591B4: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x802591B8: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
    // 0x802591BC: lw          $ra, 0x58($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X58);
    // 0x802591C0: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x802591C4: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x802591C8: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x802591CC: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x802591D0: jr          $ra
    // 0x802591D4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x802591D4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x802591D8: nop

    // 0x802591DC: nop

;}
RECOMP_FUNC void func_80258ED8_ovl38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80258ED8: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80258EDC: lbu         $v1, 0x4EEC($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4EEC);
    // 0x80258EE0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80258EE4: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80258EE8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80258EEC: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80258EF0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80258EF4: addiu       $v0, $zero, 0x4000
    ctx->r2 = ADD32(0, 0X4000);
    // 0x80258EF8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80258EFC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80258F00: lbu         $a0, 0x1($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X1);
    // 0x80258F04: addiu       $v0, $s0, 0xC8
    ctx->r2 = ADD32(ctx->r16, 0XC8);
    // 0x80258F08: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80258F0C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80258F10: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80258F14: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x80258F18: sra         $v1, $v1, 22
    ctx->r3 = S32(SIGNED(ctx->r3) >> 22);
    // 0x80258F1C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80258F20: lui         $at, 0x8026
    ctx->r1 = S32(0X8026 << 16);
    // 0x80258F24: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80258F28: lw          $v1, -0x6E14($at)
    ctx->r3 = MEM_W(ctx->r1, -0X6E14);
    // 0x80258F2C: addiu       $a2, $s0, 0x2C
    ctx->r6 = ADD32(ctx->r16, 0X2C);
    // 0x80258F30: addiu       $a3, $zero, 0x5C
    ctx->r7 = ADD32(0, 0X5C);
    // 0x80258F34: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80258F38: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x80258F3C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80258F40: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80258F44: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80258F48: jal         0x80051F9C
    // 0x80258F4C: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    func_80051F9C_2D39C(rdram, ctx);
        goto after_0;
    // 0x80258F4C: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    after_0:
    // 0x80258F50: sw          $zero, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = 0;
    // 0x80258F54: sw          $zero, 0xCC($s0)
    MEM_W(0XCC, ctx->r16) = 0;
    // 0x80258F58: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80258F5C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80258F60: jr          $ra
    // 0x80258F64: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80258F64: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80258A30_ovl38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80258A30: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80258A34: lui         $a3, 0x3D48
    ctx->r7 = S32(0X3D48 << 16);
    // 0x80258A38: sb          $zero, 0xD($a0)
    MEM_B(0XD, ctx->r4) = 0;
    // 0x80258A3C: lb          $a1, 0xD($a0)
    ctx->r5 = MEM_B(ctx->r4, 0XD);
    // 0x80258A40: ori         $a3, $a3, 0x2C
    ctx->r7 = ctx->r7 | 0X2C;
    // 0x80258A44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80258A48: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    // 0x80258A4C: addiu       $v0, $zero, 0x70
    ctx->r2 = ADD32(0, 0X70);
    // 0x80258A50: sw          $v0, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->r2;
    // 0x80258A54: lb          $v0, 0xD($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD);
    // 0x80258A58: lui         $a2, 0xAEC0
    ctx->r6 = S32(0XAEC0 << 16);
    // 0x80258A5C: ori         $a2, $a2, 0xC0C0
    ctx->r6 = ctx->r6 | 0XC0C0;
    // 0x80258A60: sw          $a3, 0x88($a0)
    MEM_W(0X88, ctx->r4) = ctx->r7;
    // 0x80258A64: sw          $a2, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->r6;
    // 0x80258A68: ori         $v1, $v1, 0x22
    ctx->r3 = ctx->r3 | 0X22;
    // 0x80258A6C: sll         $a1, $a1, 1
    ctx->r5 = S32(ctx->r5 << 1);
    // 0x80258A70: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
    // 0x80258A74: lui         $v1, 0x8026
    ctx->r3 = S32(0X8026 << 16);
    // 0x80258A78: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80258A7C: lbu         $v1, -0x6DF4($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X6DF4);
    // 0x80258A80: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80258A84: sb          $v1, 0x96($a0)
    MEM_B(0X96, ctx->r4) = ctx->r3;
    // 0x80258A88: lui         $v1, 0x8026
    ctx->r3 = S32(0X8026 << 16);
    // 0x80258A8C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80258A90: lbu         $v1, -0x6DF3($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X6DF3);
    // 0x80258A94: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x80258A98: sh          $v0, 0x98($a0)
    MEM_H(0X98, ctx->r4) = ctx->r2;
    // 0x80258A9C: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80258AA0: sh          $v0, 0x9A($a0)
    MEM_H(0X9A, ctx->r4) = ctx->r2;
    // 0x80258AA4: jr          $ra
    // 0x80258AA8: sb          $v1, 0x97($a0)
    MEM_B(0X97, ctx->r4) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x80258AA8: sb          $v1, 0x97($a0)
    MEM_B(0X97, ctx->r4) = ctx->r3;
;}
RECOMP_FUNC void func_8025886C_ovl38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8025886C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80258870: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80258874: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80258878: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8025887C: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x80258880: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80258884: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    // 0x80258888: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8025888C: beq         $v0, $zero, L_802588A4
    if (ctx->r2 == 0) {
        // 0x80258890: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802588A4;
    }
    // 0x80258890: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80258894: jal         0x80071110
    // 0x80258898: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80071110_4C510(rdram, ctx);
        goto after_0;
    // 0x80258898: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x8025889C: beq         $v0, $zero, L_802588B0
    if (ctx->r2 == 0) {
        // 0x802588A0: addiu       $a0, $s0, 0x34
        ctx->r4 = ADD32(ctx->r16, 0X34);
            goto L_802588B0;
    }
    // 0x802588A0: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
L_802588A4:
    // 0x802588A4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802588A8: j           L_80258934
    // 0x802588AC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_80258934;
    // 0x802588AC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_802588B0:
    // 0x802588B0: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x802588B4: jal         0x8009A3B4
    // 0x802588B8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802588B8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x802588BC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x802588C0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802588C4: jal         0x8009A3B4
    // 0x802588C8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x802588C8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x802588CC: lh          $v0, 0x44($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X44);
    // 0x802588D0: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x802588D4: lh          $a0, 0x48($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X48);
    // 0x802588D8: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x802588DC: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x802588E0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802588E4: lh          $v0, 0x46($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X46);
    // 0x802588E8: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x802588EC: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x802588F0: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x802588F4: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x802588F8: sw          $a1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r5;
    // 0x802588FC: lhu         $a1, 0x24($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X24);
    // 0x80258900: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80258904: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80258908: lhu         $v0, 0x1C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1C);
    // 0x8025890C: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80258910: lhu         $v1, 0x20($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X20);
    // 0x80258914: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80258918: sh          $a1, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r5;
    // 0x8025891C: sh          $a1, 0xB0($a0)
    MEM_H(0XB0, ctx->r4) = ctx->r5;
    // 0x80258920: sh          $v0, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r2;
    // 0x80258924: sh          $v0, 0xAC($a0)
    MEM_H(0XAC, ctx->r4) = ctx->r2;
    // 0x80258928: sh          $v1, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r3;
    // 0x8025892C: jal         0x80258ED8
    // 0x80258930: sh          $v1, 0xAE($a0)
    MEM_H(0XAE, ctx->r4) = ctx->r3;
    func_80258ED8_ovl38(rdram, ctx);
        goto after_3;
    // 0x80258930: sh          $v1, 0xAE($a0)
    MEM_H(0XAE, ctx->r4) = ctx->r3;
    after_3:
L_80258934:
    // 0x80258934: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80258938: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8025893C: jr          $ra
    // 0x80258940: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80258940: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80258A00_ovl38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80258A00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80258A04: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80258A08: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80258A0C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80258A10: lui         $at, 0x8026
    ctx->r1 = S32(0X8026 << 16);
    // 0x80258A14: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80258A18: lw          $v0, -0x6DC8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6DC8);
    // 0x80258A1C: jalr        $v0
    // 0x80258A20: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80258A20: nop

    after_0:
    // 0x80258A24: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80258A28: jr          $ra
    // 0x80258A2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80258A2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802586F0_ovl39(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802586F0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802586F4: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x802586F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802586FC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80258700: jal         0x80071110
    // 0x80258704: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_80071110_4C510(rdram, ctx);
        goto after_0;
    // 0x80258704: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_0:
    // 0x80258708: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8025870C: bne         $v1, $zero, L_80258720
    if (ctx->r3 != 0) {
        // 0x80258710: nop
    
            goto L_80258720;
    }
    // 0x80258710: nop

    // 0x80258714: lh          $v0, 0x7C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X7C);
    // 0x80258718: beq         $v0, $zero, L_80258744
    if (ctx->r2 == 0) {
        // 0x8025871C: addiu       $a0, $s0, 0x34
        ctx->r4 = ADD32(ctx->r16, 0X34);
            goto L_80258744;
    }
    // 0x8025871C: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
L_80258720:
    // 0x80258720: jal         0x8025881C
    // 0x80258724: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8025881C_ovl39(rdram, ctx);
        goto after_1;
    // 0x80258724: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80258728: addiu       $a0, $zero, 0x130
    ctx->r4 = ADD32(0, 0X130);
    // 0x8025872C: jal         0x8002A33C
    // 0x80258730: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x80258730: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x80258734: jal         0x8004F568
    // 0x80258738: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F568_2A968(rdram, ctx);
        goto after_3;
    // 0x80258738: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8025873C: j           L_8025880C
    // 0x80258740: nop

        goto L_8025880C;
    // 0x80258740: nop

L_80258744:
    // 0x80258744: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80258748: jal         0x8009A3B4
    // 0x8025874C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8025874C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_4:
    // 0x80258750: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80258754: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80258758: jal         0x8009A3B4
    // 0x8025875C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8025875C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x80258760: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x80258764: lhu         $a1, 0x4E($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X4E);
    // 0x80258768: lh          $v1, 0x44($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X44);
    // 0x8025876C: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x80258770: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80258774: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x80258778: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x8025877C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80258780: lh          $a1, 0x46($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X46);
    // 0x80258784: lh          $v0, 0x48($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X48);
    // 0x80258788: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x8025878C: sw          $a0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r4;
    // 0x80258790: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    // 0x80258794: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80258798: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8025879C: sll         $a1, $a1, 8
    ctx->r5 = S32(ctx->r5 << 8);
    // 0x802587A0: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x802587A4: sw          $a0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r4;
    // 0x802587A8: lhu         $a0, 0x1C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X1C);
    // 0x802587AC: lhu         $a1, 0x20($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X20);
    // 0x802587B0: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x802587B4: sw          $v1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r3;
    // 0x802587B8: lhu         $v1, 0x24($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X24);
    // 0x802587BC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802587C0: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x802587C4: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x802587C8: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802587CC: sh          $a0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r4;
    // 0x802587D0: sh          $a0, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r4;
    // 0x802587D4: sh          $v1, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r3;
    // 0x802587D8: sh          $v1, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r3;
    // 0x802587DC: sh          $a1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r5;
    // 0x802587E0: sh          $a1, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r5;
    // 0x802587E4: lui         $v1, 0x8026
    ctx->r3 = S32(0X8026 << 16);
    // 0x802587E8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802587EC: lbu         $v1, -0x74A4($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X74A4);
    // 0x802587F0: sb          $v1, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r3;
    // 0x802587F4: lui         $at, 0x8026
    ctx->r1 = S32(0X8026 << 16);
    // 0x802587F8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802587FC: lbu         $v0, -0x74A3($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X74A3);
    // 0x80258800: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80258804: jal         0x80258A70
    // 0x80258808: sb          $v0, 0x97($a0)
    MEM_B(0X97, ctx->r4) = ctx->r2;
    func_80258A70_ovl39(rdram, ctx);
        goto after_6;
    // 0x80258808: sb          $v0, 0x97($a0)
    MEM_B(0X97, ctx->r4) = ctx->r2;
    after_6:
L_8025880C:
    // 0x8025880C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80258810: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80258814: jr          $ra
    // 0x80258818: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80258818: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_802584C0_ovl39(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802584C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802584C4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802584C8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802584CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802584D0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802584D4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802584D8: lui         $at, 0x8026
    ctx->r1 = S32(0X8026 << 16);
    // 0x802584DC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802584E0: lw          $v0, -0x7494($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7494);
    // 0x802584E4: jalr        $v0
    // 0x802584E8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802584E8: nop

    after_0:
    // 0x802584EC: jal         0x800472C0
    // 0x802584F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800472C0_226C0(rdram, ctx);
        goto after_1;
    // 0x802584F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802584F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802584F8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802584FC: jr          $ra
    // 0x80258500: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80258500: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80258A70_ovl39(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80258A70: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80258A74: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80258A78: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80258A7C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80258A80: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x80258A84: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x80258A88: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80258A8C: lhu         $s1, 0x98($s0)
    ctx->r17 = MEM_HU(ctx->r16, 0X98);
    // 0x80258A90: jal         0x80071060
    // 0x80258A94: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80071060_4C460(rdram, ctx);
        goto after_0;
    // 0x80258A94: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80258A98: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x80258A9C: beq         $v1, $zero, L_80258AC0
    if (ctx->r3 == 0) {
        // 0x80258AA0: addu        $t0, $v0, $zero
        ctx->r8 = ADD32(ctx->r2, 0);
            goto L_80258AC0;
    }
    // 0x80258AA0: addu        $t0, $v0, $zero
    ctx->r8 = ADD32(ctx->r2, 0);
    // 0x80258AA4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80258AA8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80258AAC: addiu       $a2, $s0, 0x2C
    ctx->r6 = ADD32(ctx->r16, 0X2C);
    // 0x80258AB0: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80258AB4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80258AB8: j           L_80258AD8
    // 0x80258ABC: addiu       $v0, $zero, 0x6000
    ctx->r2 = ADD32(0, 0X6000);
        goto L_80258AD8;
    // 0x80258ABC: addiu       $v0, $zero, 0x6000
    ctx->r2 = ADD32(0, 0X6000);
L_80258AC0:
    // 0x80258AC0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80258AC4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80258AC8: addiu       $a2, $s0, 0x2C
    ctx->r6 = ADD32(ctx->r16, 0X2C);
    // 0x80258ACC: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80258AD0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80258AD4: addiu       $v0, $zero, 0x4000
    ctx->r2 = ADD32(0, 0X4000);
L_80258AD8:
    // 0x80258AD8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80258ADC: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80258AE0: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    // 0x80258AE4: addiu       $v0, $s0, 0xC8
    ctx->r2 = ADD32(ctx->r16, 0XC8);
    // 0x80258AE8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80258AEC: lui         $v0, 0x8800
    ctx->r2 = S32(0X8800 << 16);
    // 0x80258AF0: or          $v0, $t0, $v0
    ctx->r2 = ctx->r8 | ctx->r2;
    // 0x80258AF4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80258AF8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80258AFC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80258B00: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80258B04: jal         0x80051F9C
    // 0x80258B08: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051F9C_2D39C(rdram, ctx);
        goto after_1;
    // 0x80258B08: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_1:
    // 0x80258B0C: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x80258B10: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80258B14: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80258B18: jr          $ra
    // 0x80258B1C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80258B1C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80258504_ovl39(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80258504: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80258508: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x8025850C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80258510: sw          $ra, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r31;
    // 0x80258514: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x80258518: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8025851C: lbu         $v1, 0x6($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X6);
    // 0x80258520: lb          $a0, 0xD($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XD);
    // 0x80258524: ori         $v0, $v0, 0xA
    ctx->r2 = ctx->r2 | 0XA;
    // 0x80258528: ori         $v1, $v1, 0x20
    ctx->r3 = ctx->r3 | 0X20;
    // 0x8025852C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80258530: jal         0x800530E8
    // 0x80258534: sb          $v1, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r3;
    func_800530E8_2E4E8(rdram, ctx);
        goto after_0;
    // 0x80258534: sb          $v1, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r3;
    after_0:
    // 0x80258538: lui         $v0, 0x8026
    ctx->r2 = S32(0X8026 << 16);
    // 0x8025853C: addiu       $v0, $v0, -0x74E0
    ctx->r2 = ADD32(ctx->r2, -0X74E0);
    // 0x80258540: sw          $zero, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = 0;
    // 0x80258544: sw          $zero, 0xCC($s0)
    MEM_W(0XCC, ctx->r16) = 0;
    // 0x80258548: jal         0x80034B34
    // 0x8025854C: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    func_80034B34_FF34(rdram, ctx);
        goto after_1;
    // 0x8025854C: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    after_1:
    // 0x80258550: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80258554: addiu       $v0, $v0, -0x80
    ctx->r2 = ADD32(ctx->r2, -0X80);
    // 0x80258558: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x8025855C: lhu         $v0, 0x64($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X64);
    // 0x80258560: addiu       $s1, $sp, 0x28
    ctx->r17 = ADD32(ctx->r29, 0X28);
    // 0x80258564: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80258568: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    // 0x8025856C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80258570: jal         0x80031600
    // 0x80258574: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    func_80031600_CA00(rdram, ctx);
        goto after_2;
    // 0x80258574: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    after_2:
    // 0x80258578: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8025857C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80258580: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x80258584: addiu       $v0, $zero, -0x1000
    ctx->r2 = ADD32(0, -0X1000);
    // 0x80258588: sh          $zero, 0x10($sp)
    MEM_H(0X10, ctx->r29) = 0;
    // 0x8025858C: sh          $zero, 0x12($sp)
    MEM_H(0X12, ctx->r29) = 0;
    // 0x80258590: jal         0x800308E8
    // 0x80258594: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_800308E8_BCE8(rdram, ctx);
        goto after_3;
    // 0x80258594: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_3:
    // 0x80258598: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x8025859C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x802585A0: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x802585A4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x802585A8: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x802585AC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x802585B0: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x802585B4: sh          $v1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r3;
    // 0x802585B8: jal         0x800710B8
    // 0x802585BC: sh          $a2, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r6;
    func_800710B8_4C4B8(rdram, ctx);
        goto after_4;
    // 0x802585BC: sh          $a2, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r6;
    after_4:
    // 0x802585C0: lh          $v1, 0x10($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X10);
    // 0x802585C4: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802585C8: mflo        $v1
    ctx->r3 = lo;
    // 0x802585CC: sra         $v1, $v1, 4
    ctx->r3 = S32(SIGNED(ctx->r3) >> 4);
    // 0x802585D0: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x802585D4: lh          $v1, 0x12($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X12);
    // 0x802585D8: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802585DC: mflo        $v1
    ctx->r3 = lo;
    // 0x802585E0: sra         $v1, $v1, 4
    ctx->r3 = S32(SIGNED(ctx->r3) >> 4);
    // 0x802585E4: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    // 0x802585E8: lh          $v1, 0x14($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X14);
    // 0x802585EC: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802585F0: mflo        $v1
    ctx->r3 = lo;
    // 0x802585F4: addiu       $a0, $s0, 0xA4
    ctx->r4 = ADD32(ctx->r16, 0XA4);
    // 0x802585F8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x802585FC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80258600: sra         $v1, $v1, 4
    ctx->r3 = S32(SIGNED(ctx->r3) >> 4);
    // 0x80258604: jal         0x8009A3B4
    // 0x80258608: sh          $v1, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80258608: sh          $v1, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r3;
    after_5:
    // 0x8025860C: lui         $t1, 0x2C80
    ctx->r9 = S32(0X2C80 << 16);
    // 0x80258610: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80258614: sh          $zero, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = 0;
    // 0x80258618: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    // 0x8025861C: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    // 0x80258620: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80258624: lb          $v0, 0x4EF4($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4EF4);
    // 0x80258628: ori         $t1, $t1, 0x8080
    ctx->r9 = ctx->r9 | 0X8080;
    // 0x8025862C: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80258630: lhu         $v1, 0x20($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X20);
    // 0x80258634: lhu         $a3, 0x24($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X24);
    // 0x80258638: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8025863C: lui         $t0, 0x8026
    ctx->r8 = S32(0X8026 << 16);
    // 0x80258640: addu        $t0, $t0, $v0
    ctx->r8 = ADD32(ctx->r8, ctx->r2);
    // 0x80258644: lw          $t0, -0x74C4($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X74C4);
    // 0x80258648: lhu         $v0, 0x1C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1C);
    // 0x8025864C: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80258650: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80258654: sw          $t1, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r9;
    // 0x80258658: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x8025865C: sh          $v1, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r3;
    // 0x80258660: sh          $a3, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r7;
    // 0x80258664: sh          $a3, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r7;
    // 0x80258668: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x8025866C: sh          $v0, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r2;
    // 0x80258670: jal         0x8009A3B4
    // 0x80258674: sw          $t0, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r8;
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x80258674: sw          $t0, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r8;
    after_6:
    // 0x80258678: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8025867C: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x80258680: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80258684: jal         0x8009A3B4
    // 0x80258688: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x80258688: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_7:
    // 0x8025868C: sb          $zero, 0x96($s0)
    MEM_B(0X96, ctx->r16) = 0;
    // 0x80258690: sb          $zero, 0x97($s0)
    MEM_B(0X97, ctx->r16) = 0;
    // 0x80258694: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80258698: lb          $v0, 0x4EF4($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4EF4);
    // 0x8025869C: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x802586A0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802586A4: lui         $at, 0x8026
    ctx->r1 = S32(0X8026 << 16);
    // 0x802586A8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802586AC: lhu         $v0, -0x74D4($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X74D4);
    // 0x802586B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802586B4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802586B8: sh          $zero, 0x7C($a0)
    MEM_H(0X7C, ctx->r4) = 0;
    // 0x802586BC: sb          $zero, 0xB($a0)
    MEM_B(0XB, ctx->r4) = 0;
    // 0x802586C0: sb          $v1, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r3;
    // 0x802586C4: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x802586C8: jal         0x80258A70
    // 0x802586CC: sh          $v0, 0x98($a0)
    MEM_H(0X98, ctx->r4) = ctx->r2;
    func_80258A70_ovl39(rdram, ctx);
        goto after_8;
    // 0x802586CC: sh          $v0, 0x98($a0)
    MEM_H(0X98, ctx->r4) = ctx->r2;
    after_8:
    // 0x802586D0: addiu       $a0, $zero, 0x12F
    ctx->r4 = ADD32(0, 0X12F);
    // 0x802586D4: jal         0x8002A33C
    // 0x802586D8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_9;
    // 0x802586D8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_9:
    // 0x802586DC: lw          $ra, 0x50($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X50);
    // 0x802586E0: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x802586E4: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x802586E8: jr          $ra
    // 0x802586EC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x802586EC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8025881C_ovl39(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8025881C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80258820: lb          $v0, 0x4EF4($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4EF4);
    // 0x80258824: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80258828: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8025882C: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x80258830: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x80258834: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x80258838: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x8025883C: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x80258840: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80258844: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80258848: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8025884C: bne         $v0, $zero, L_80258950
    if (ctx->r2 != 0) {
        // 0x80258850: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_80258950;
    }
    // 0x80258850: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80258854: jal         0x8004F144
    // 0x80258858: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80258858: nop

    after_0:
    // 0x8025885C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80258860: beq         $s1, $zero, L_80258898
    if (ctx->r17 == 0) {
        // 0x80258864: addiu       $a0, $s1, 0x38
        ctx->r4 = ADD32(ctx->r17, 0X38);
            goto L_80258898;
    }
    // 0x80258864: addiu       $a0, $s1, 0x38
    ctx->r4 = ADD32(ctx->r17, 0X38);
    // 0x80258868: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    // 0x8025886C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80258870: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80258874: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80258878: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8025887C: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x80258880: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80258884: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    // 0x80258888: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8025888C: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    // 0x80258890: jal         0x8009A3B4
    // 0x80258894: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80258894: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
    after_1:
L_80258898:
    // 0x80258898: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8025889C: addiu       $s7, $zero, 0x5
    ctx->r23 = ADD32(0, 0X5);
    // 0x802588A0: addiu       $s6, $zero, 0x80
    ctx->r22 = ADD32(0, 0X80);
    // 0x802588A4: addiu       $s5, $zero, 0x2
    ctx->r21 = ADD32(0, 0X2);
    // 0x802588A8: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
L_802588AC:
    // 0x802588AC: jal         0x8004F144
    // 0x802588B0: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_2;
    // 0x802588B0: nop

    after_2:
    // 0x802588B4: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x802588B8: beql        $s1, $zero, L_8025893C
    if (ctx->r17 == 0) {
        // 0x802588BC: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_8025893C;
    }
    goto skip_0;
    // 0x802588BC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_0:
    // 0x802588C0: sll         $s0, $s2, 10
    ctx->r16 = S32(ctx->r18 << 10);
    // 0x802588C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802588C8: sb          $s7, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r23;
    // 0x802588CC: sb          $s6, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r22;
    // 0x802588D0: sb          $s5, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r21;
    // 0x802588D4: sb          $zero, 0xD($s1)
    MEM_B(0XD, ctx->r17) = 0;
    // 0x802588D8: jal         0x80032498
    // 0x802588DC: sb          $s4, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r20;
    func_80032498_D898(rdram, ctx);
        goto after_3;
    // 0x802588DC: sb          $s4, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r20;
    after_3:
    // 0x802588E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802588E4: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x802588E8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802588EC: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x802588F0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x802588F4: lhu         $v1, 0x14($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X14);
    // 0x802588F8: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802588FC: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80258900: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80258904: jal         0x800324B4
    // 0x80258908: sh          $v1, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r3;
    func_800324B4_D8B4(rdram, ctx);
        goto after_4;
    // 0x80258908: sh          $v1, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r3;
    after_4:
    // 0x8025890C: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x80258910: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80258914: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x80258918: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8025891C: lhu         $v1, 0x18($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X18);
    // 0x80258920: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80258924: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80258928: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8025892C: sh          $v1, 0x3C($s1)
    MEM_H(0X3C, ctx->r17) = ctx->r3;
    // 0x80258930: lhu         $v0, 0x16($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X16);
    // 0x80258934: sh          $v0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r2;
    // 0x80258938: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8025893C:
    // 0x8025893C: slti        $v0, $s2, 0x4
    ctx->r2 = SIGNED(ctx->r18) < 0X4 ? 1 : 0;
    // 0x80258940: beq         $v0, $zero, L_80258A44
    if (ctx->r2 == 0) {
        // 0x80258944: nop
    
            goto L_80258A44;
    }
    // 0x80258944: nop

    // 0x80258948: j           L_802588AC
    // 0x8025894C: nop

        goto L_802588AC;
    // 0x8025894C: nop

L_80258950:
    // 0x80258950: jal         0x8004F144
    // 0x80258954: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_5;
    // 0x80258954: nop

    after_5:
    // 0x80258958: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8025895C: beq         $s1, $zero, L_80258994
    if (ctx->r17 == 0) {
        // 0x80258960: addiu       $a0, $s1, 0x38
        ctx->r4 = ADD32(ctx->r17, 0X38);
            goto L_80258994;
    }
    // 0x80258960: addiu       $a0, $s1, 0x38
    ctx->r4 = ADD32(ctx->r17, 0X38);
    // 0x80258964: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    // 0x80258968: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8025896C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80258970: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80258974: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80258978: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x8025897C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80258980: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    // 0x80258984: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    // 0x80258988: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8025898C: jal         0x8009A3B4
    // 0x80258990: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x80258990: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
    after_6:
L_80258994:
    // 0x80258994: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x80258998: addiu       $s7, $zero, 0x5
    ctx->r23 = ADD32(0, 0X5);
    // 0x8025899C: addiu       $s6, $zero, 0x80
    ctx->r22 = ADD32(0, 0X80);
    // 0x802589A0: addiu       $s5, $zero, 0x2
    ctx->r21 = ADD32(0, 0X2);
    // 0x802589A4: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
L_802589A8:
    // 0x802589A8: jal         0x8004F144
    // 0x802589AC: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_7;
    // 0x802589AC: nop

    after_7:
    // 0x802589B0: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x802589B4: beql        $s1, $zero, L_80258A38
    if (ctx->r17 == 0) {
        // 0x802589B8: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_80258A38;
    }
    goto skip_1;
    // 0x802589B8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_1:
    // 0x802589BC: sll         $s0, $s2, 9
    ctx->r16 = S32(ctx->r18 << 9);
    // 0x802589C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802589C4: sb          $s7, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r23;
    // 0x802589C8: sb          $s6, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r22;
    // 0x802589CC: sb          $s5, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r21;
    // 0x802589D0: sb          $s4, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r20;
    // 0x802589D4: jal         0x80032498
    // 0x802589D8: sb          $s4, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r20;
    func_80032498_D898(rdram, ctx);
        goto after_8;
    // 0x802589D8: sb          $s4, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r20;
    after_8:
    // 0x802589DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802589E0: sll         $v1, $v0, 5
    ctx->r3 = S32(ctx->r2 << 5);
    // 0x802589E4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x802589E8: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802589EC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802589F0: lhu         $v0, 0x14($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X14);
    // 0x802589F4: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x802589F8: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x802589FC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80258A00: jal         0x800324B4
    // 0x80258A04: sh          $v0, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r2;
    func_800324B4_D8B4(rdram, ctx);
        goto after_9;
    // 0x80258A04: sh          $v0, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r2;
    after_9:
    // 0x80258A08: sll         $v1, $v0, 5
    ctx->r3 = S32(ctx->r2 << 5);
    // 0x80258A0C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80258A10: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80258A14: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80258A18: lhu         $v0, 0x18($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X18);
    // 0x80258A1C: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80258A20: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x80258A24: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80258A28: sh          $v0, 0x3C($s1)
    MEM_H(0X3C, ctx->r17) = ctx->r2;
    // 0x80258A2C: lhu         $v0, 0x16($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X16);
    // 0x80258A30: sh          $v0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r2;
    // 0x80258A34: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_80258A38:
    // 0x80258A38: slti        $v0, $s2, 0x8
    ctx->r2 = SIGNED(ctx->r18) < 0X8 ? 1 : 0;
    // 0x80258A3C: bne         $v0, $zero, L_802589A8
    if (ctx->r2 != 0) {
        // 0x80258A40: nop
    
            goto L_802589A8;
    }
    // 0x80258A40: nop

L_80258A44:
    // 0x80258A44: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80258A48: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x80258A4C: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x80258A50: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x80258A54: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80258A58: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80258A5C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80258A60: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80258A64: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80258A68: jr          $ra
    // 0x80258A6C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80258A6C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80258744_ovl40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80258744: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80258748: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8025874C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80258750: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80258754: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80258758: jal         0x80071110
    // 0x8025875C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_80071110_4C510(rdram, ctx);
        goto after_0;
    // 0x8025875C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x80258760: addiu       $v1, $zero, 0x7FFF
    ctx->r3 = ADD32(0, 0X7FFF);
    // 0x80258764: beq         $v0, $v1, L_80258788
    if (ctx->r2 == ctx->r3) {
        // 0x80258768: nop
    
            goto L_80258788;
    }
    // 0x80258768: nop

    // 0x8025876C: lh          $v0, 0x7C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X7C);
    // 0x80258770: bne         $v0, $zero, L_80258788
    if (ctx->r2 != 0) {
        // 0x80258774: addiu       $s1, $s0, 0x14
        ctx->r17 = ADD32(ctx->r16, 0X14);
            goto L_80258788;
    }
    // 0x80258774: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x80258778: jal         0x8003E6BC
    // 0x8025877C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_1;
    // 0x8025877C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x80258780: bne         $v0, $zero, L_802587A0
    if (ctx->r2 != 0) {
        // 0x80258784: addiu       $a0, $s0, 0x34
        ctx->r4 = ADD32(ctx->r16, 0X34);
            goto L_802587A0;
    }
    // 0x80258784: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
L_80258788:
    // 0x80258788: jal         0x80258B40
    // 0x8025878C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80258B40_ovl40(rdram, ctx);
        goto after_2;
    // 0x8025878C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80258790: jal         0x8004F568
    // 0x80258794: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F568_2A968(rdram, ctx);
        goto after_3;
    // 0x80258794: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80258798: j           L_80258878
    // 0x8025879C: nop

        goto L_80258878;
    // 0x8025879C: nop

L_802587A0:
    // 0x802587A0: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x802587A4: jal         0x8009A3B4
    // 0x802587A8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x802587A8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_4:
    // 0x802587AC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x802587B0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802587B4: jal         0x8009A3B4
    // 0x802587B8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x802587B8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x802587BC: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x802587C0: lhu         $a1, 0x4E($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X4E);
    // 0x802587C4: lh          $v1, 0x44($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X44);
    // 0x802587C8: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x802587CC: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x802587D0: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x802587D4: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x802587D8: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x802587DC: lh          $a1, 0x46($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X46);
    // 0x802587E0: lh          $v0, 0x48($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X48);
    // 0x802587E4: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x802587E8: sw          $a0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r4;
    // 0x802587EC: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    // 0x802587F0: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x802587F4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802587F8: lhu         $v0, 0x1C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1C);
    // 0x802587FC: sll         $a1, $a1, 8
    ctx->r5 = S32(ctx->r5 << 8);
    // 0x80258800: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x80258804: sw          $a0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r4;
    // 0x80258808: lhu         $a1, 0x20($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X20);
    // 0x8025880C: sw          $v1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r3;
    // 0x80258810: lhu         $v1, 0x24($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X24);
    // 0x80258814: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80258818: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x8025881C: sh          $v0, 0xAC($s0)
    MEM_H(0XAC, ctx->r16) = ctx->r2;
    // 0x80258820: sh          $v1, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r3;
    // 0x80258824: sh          $v1, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r3;
    // 0x80258828: sh          $a1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r5;
    // 0x8025882C: jal         0x80040F30
    // 0x80258830: sh          $a1, 0xAE($s0)
    MEM_H(0XAE, ctx->r16) = ctx->r5;
    func_80040F30_1C330(rdram, ctx);
        goto after_6;
    // 0x80258830: sh          $a1, 0xAE($s0)
    MEM_H(0XAE, ctx->r16) = ctx->r5;
    after_6:
    // 0x80258834: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80258838: bltz        $a1, L_80258860
    if (SIGNED(ctx->r5) < 0) {
        // 0x8025883C: andi        $v0, $a1, 0x1000
        ctx->r2 = ctx->r5 & 0X1000;
            goto L_80258860;
    }
    // 0x8025883C: andi        $v0, $a1, 0x1000
    ctx->r2 = ctx->r5 & 0X1000;
    // 0x80258840: beq         $v0, $zero, L_80258850
    if (ctx->r2 == 0) {
        // 0x80258844: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80258850;
    }
    // 0x80258844: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80258848: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
    // 0x8025884C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80258850:
    // 0x80258850: jal         0x80040834
    // 0x80258854: addiu       $a0, $s0, 0x44
    ctx->r4 = ADD32(ctx->r16, 0X44);
    func_80040834_1BC34(rdram, ctx);
        goto after_7;
    // 0x80258854: addiu       $a0, $s0, 0x44
    ctx->r4 = ADD32(ctx->r16, 0X44);
    after_7:
    // 0x80258858: j           L_80258870
    // 0x8025885C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_80258870;
    // 0x8025885C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80258860:
    // 0x80258860: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80258864: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
    // 0x80258868: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8025886C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80258870:
    // 0x80258870: jal         0x80258AB4
    // 0x80258874: addiu       $a1, $zero, 0x4000
    ctx->r5 = ADD32(0, 0X4000);
    func_80258AB4_ovl40(rdram, ctx);
        goto after_8;
    // 0x80258874: addiu       $a1, $zero, 0x4000
    ctx->r5 = ADD32(0, 0X4000);
    after_8:
L_80258878:
    // 0x80258878: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8025887C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80258880: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80258884: jr          $ra
    // 0x80258888: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80258888: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80258504_ovl40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80258504: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80258508: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8025850C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80258510: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80258514: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80258518: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8025851C: lb          $a0, 0xD($s2)
    ctx->r4 = MEM_B(ctx->r18, 0XD);
    // 0x80258520: jal         0x800530E8
    // 0x80258524: addiu       $s0, $s2, 0x8C
    ctx->r16 = ADD32(ctx->r18, 0X8C);
    func_800530E8_2E4E8(rdram, ctx);
        goto after_0;
    // 0x80258524: addiu       $s0, $s2, 0x8C
    ctx->r16 = ADD32(ctx->r18, 0X8C);
    after_0:
    // 0x80258528: lbu         $v1, 0x0($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X0);
    // 0x8025852C: lbu         $a0, 0x6($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X6);
    // 0x80258530: lui         $v0, 0x8026
    ctx->r2 = S32(0X8026 << 16);
    // 0x80258534: addiu       $v0, $v0, -0x7440
    ctx->r2 = ADD32(ctx->r2, -0X7440);
    // 0x80258538: sw          $v0, 0x78($s2)
    MEM_W(0X78, ctx->r18) = ctx->r2;
    // 0x8025853C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80258540: sb          $v0, 0x74($s2)
    MEM_B(0X74, ctx->r18) = ctx->r2;
    // 0x80258544: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
    // 0x80258548: sw          $zero, 0xC0($s2)
    MEM_W(0XC0, ctx->r18) = 0;
    // 0x8025854C: sw          $zero, 0xC4($s2)
    MEM_W(0XC4, ctx->r18) = 0;
    // 0x80258550: sw          $zero, 0xC8($s2)
    MEM_W(0XC8, ctx->r18) = 0;
    // 0x80258554: sw          $zero, 0xCC($s2)
    MEM_W(0XCC, ctx->r18) = 0;
    // 0x80258558: sw          $v0, 0xD0($s2)
    MEM_W(0XD0, ctx->r18) = ctx->r2;
    // 0x8025855C: ori         $v1, $v1, 0x6
    ctx->r3 = ctx->r3 | 0X6;
    // 0x80258560: ori         $a0, $a0, 0x20
    ctx->r4 = ctx->r4 | 0X20;
    // 0x80258564: sb          $a0, 0x6($s2)
    MEM_B(0X6, ctx->r18) = ctx->r4;
    // 0x80258568: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8025856C: addiu       $a0, $a0, 0x4EFC
    ctx->r4 = ADD32(ctx->r4, 0X4EFC);
    // 0x80258570: sb          $v1, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r3;
    // 0x80258574: lb          $v0, 0x0($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X0);
    // 0x80258578: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x8025857C: addiu       $a0, $a0, -0x54C
    ctx->r4 = ADD32(ctx->r4, -0X54C);
    // 0x80258580: jal         0x80071060
    // 0x80258584: sw          $v0, 0xD4($s2)
    MEM_W(0XD4, ctx->r18) = ctx->r2;
    func_80071060_4C460(rdram, ctx);
        goto after_1;
    // 0x80258584: sw          $v0, 0xD4($s2)
    MEM_W(0XD4, ctx->r18) = ctx->r2;
    after_1:
    // 0x80258588: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8025858C: sw          $v0, 0xD8($s2)
    MEM_W(0XD8, ctx->r18) = ctx->r2;
    // 0x80258590: sh          $zero, 0x10($sp)
    MEM_H(0X10, ctx->r29) = 0;
    // 0x80258594: lhu         $v0, 0x64($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X64);
    // 0x80258598: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8025859C: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    // 0x802585A0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802585A4: jal         0x80031600
    // 0x802585A8: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    func_80031600_CA00(rdram, ctx);
        goto after_2;
    // 0x802585A8: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    after_2:
    // 0x802585AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802585B0: addiu       $s1, $sp, 0x18
    ctx->r17 = ADD32(ctx->r29, 0X18);
    // 0x802585B4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802585B8: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x802585BC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x802585C0: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x802585C4: jal         0x80031DA8
    // 0x802585C8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_3;
    // 0x802585C8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_3:
    // 0x802585CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802585D0: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x802585D4: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x802585D8: addiu       $v0, $zero, -0x1000
    ctx->r2 = ADD32(0, -0X1000);
    // 0x802585DC: sh          $zero, 0x10($sp)
    MEM_H(0X10, ctx->r29) = 0;
    // 0x802585E0: sh          $zero, 0x12($sp)
    MEM_H(0X12, ctx->r29) = 0;
    // 0x802585E4: jal         0x800308E8
    // 0x802585E8: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_800308E8_BCE8(rdram, ctx);
        goto after_4;
    // 0x802585E8: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_4:
    // 0x802585EC: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x802585F0: addiu       $a0, $s2, 0x34
    ctx->r4 = ADD32(ctx->r18, 0X34);
    // 0x802585F4: lhu         $a3, 0x20($s2)
    ctx->r7 = MEM_HU(ctx->r18, 0X20);
    // 0x802585F8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802585FC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80258600: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x80258604: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    // 0x80258608: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8025860C: lhu         $t0, 0x24($s2)
    ctx->r8 = MEM_HU(ctx->r18, 0X24);
    // 0x80258610: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    // 0x80258614: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80258618: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8025861C: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x80258620: sh          $v0, 0x46($s2)
    MEM_H(0X46, ctx->r18) = ctx->r2;
    // 0x80258624: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80258628: lhu         $v1, 0x1C($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X1C);
    // 0x8025862C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80258630: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80258634: sh          $zero, 0x4C($s2)
    MEM_H(0X4C, ctx->r18) = 0;
    // 0x80258638: sh          $v0, 0x4E($s2)
    MEM_H(0X4E, ctx->r18) = ctx->r2;
    // 0x8025863C: sh          $zero, 0x50($s2)
    MEM_H(0X50, ctx->r18) = 0;
    // 0x80258640: sh          $a3, 0x16($s2)
    MEM_H(0X16, ctx->r18) = ctx->r7;
    // 0x80258644: sh          $a3, 0xAE($s2)
    MEM_H(0XAE, ctx->r18) = ctx->r7;
    // 0x80258648: sh          $t0, 0x18($s2)
    MEM_H(0X18, ctx->r18) = ctx->r8;
    // 0x8025864C: sh          $t0, 0xB0($s2)
    MEM_H(0XB0, ctx->r18) = ctx->r8;
    // 0x80258650: sll         $v0, $t1, 2
    ctx->r2 = S32(ctx->r9 << 2);
    // 0x80258654: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x80258658: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x8025865C: sh          $v1, 0x14($s2)
    MEM_H(0X14, ctx->r18) = ctx->r3;
    // 0x80258660: sh          $v1, 0xAC($s2)
    MEM_H(0XAC, ctx->r18) = ctx->r3;
    // 0x80258664: jal         0x8009A3B4
    // 0x80258668: sh          $v0, 0x48($s2)
    MEM_H(0X48, ctx->r18) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80258668: sh          $v0, 0x48($s2)
    MEM_H(0X48, ctx->r18) = ctx->r2;
    after_5:
    // 0x8025866C: lh          $v0, 0x44($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X44);
    // 0x80258670: lw          $v1, 0x34($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X34);
    // 0x80258674: lh          $a0, 0x48($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X48);
    // 0x80258678: lw          $a1, 0x3C($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X3C);
    // 0x8025867C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80258680: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80258684: lh          $v0, 0x46($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X46);
    // 0x80258688: sw          $v1, 0x34($s2)
    MEM_W(0X34, ctx->r18) = ctx->r3;
    // 0x8025868C: lw          $v1, 0x38($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X38);
    // 0x80258690: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x80258694: subu        $a1, $a1, $a0
    ctx->r5 = SUB32(ctx->r5, ctx->r4);
    // 0x80258698: sw          $a1, 0x3C($s2)
    MEM_W(0X3C, ctx->r18) = ctx->r5;
    // 0x8025869C: lh          $a2, 0x3C($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X3C);
    // 0x802586A0: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x802586A4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x802586A8: lh          $v0, 0x34($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X34);
    // 0x802586AC: sh          $zero, 0x7C($s2)
    MEM_H(0X7C, ctx->r18) = 0;
    // 0x802586B0: sw          $v1, 0x38($s2)
    MEM_W(0X38, ctx->r18) = ctx->r3;
    // 0x802586B4: lh          $v1, 0x38($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X38);
    // 0x802586B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802586BC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802586C0: sh          $a2, 0x30($s2)
    MEM_H(0X30, ctx->r18) = ctx->r6;
    // 0x802586C4: sh          $v0, 0x2C($s2)
    MEM_H(0X2C, ctx->r18) = ctx->r2;
    // 0x802586C8: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802586CC: sh          $v1, 0x2E($s2)
    MEM_H(0X2E, ctx->r18) = ctx->r3;
    // 0x802586D0: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x802586D4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x802586D8: addiu       $v0, $zero, 0x300
    ctx->r2 = ADD32(0, 0X300);
    // 0x802586DC: jal         0x80031DA8
    // 0x802586E0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_6;
    // 0x802586E0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_6:
    // 0x802586E4: lw          $v0, 0xD4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XD4);
    // 0x802586E8: beq         $v0, $zero, L_802586F8
    if (ctx->r2 == 0) {
        // 0x802586EC: lui         $v0, 0x80
        ctx->r2 = S32(0X80 << 16);
            goto L_802586F8;
    }
    // 0x802586EC: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x802586F0: j           L_802586FC
    // 0x802586F4: ori         $v0, $v0, 0x80C0
    ctx->r2 = ctx->r2 | 0X80C0;
        goto L_802586FC;
    // 0x802586F4: ori         $v0, $v0, 0x80C0
    ctx->r2 = ctx->r2 | 0X80C0;
L_802586F8:
    // 0x802586F8: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
L_802586FC:
    // 0x802586FC: sw          $v0, 0xB4($s2)
    MEM_W(0XB4, ctx->r18) = ctx->r2;
    // 0x80258700: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80258704: jal         0x8004D5D4
    // 0x80258708: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_7;
    // 0x80258708: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_7:
    // 0x8025870C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80258710: jal         0x80258AB4
    // 0x80258714: addiu       $a1, $zero, 0x4000
    ctx->r5 = ADD32(0, 0X4000);
    func_80258AB4_ovl40(rdram, ctx);
        goto after_8;
    // 0x80258714: addiu       $a1, $zero, 0x4000
    ctx->r5 = ADD32(0, 0X4000);
    after_8:
    // 0x80258718: addiu       $a0, $zero, 0x132
    ctx->r4 = ADD32(0, 0X132);
    // 0x8025871C: jal         0x8002A33C
    // 0x80258720: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_9;
    // 0x80258720: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    after_9:
    // 0x80258724: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80258728: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x8025872C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80258730: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80258734: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80258738: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8025873C: jr          $ra
    // 0x80258740: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80258740: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80258B40_ovl40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80258B40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80258B44: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80258B48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80258B4C: jal         0x8004F144
    // 0x80258B50: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80258B50: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80258B54: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80258B58: beq         $a0, $zero, L_80258BA4
    if (ctx->r4 == 0) {
        // 0x80258B5C: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80258BA4;
    }
    // 0x80258B5C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80258B60: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x80258B64: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80258B68: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x80258B6C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80258B70: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80258B74: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
    // 0x80258B78: sb          $v1, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r3;
    // 0x80258B7C: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x80258B80: lui         $at, 0x8026
    ctx->r1 = S32(0X8026 << 16);
    // 0x80258B84: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80258B88: lbu         $v0, -0x7424($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X7424);
    // 0x80258B8C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80258B90: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80258B94: sb          $v1, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r3;
    // 0x80258B98: sb          $v0, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r2;
    // 0x80258B9C: jal         0x8009A3B4
    // 0x80258BA0: addiu       $a0, $a0, 0x38
    ctx->r4 = ADD32(ctx->r4, 0X38);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80258BA0: addiu       $a0, $a0, 0x38
    ctx->r4 = ADD32(ctx->r4, 0X38);
    after_1:
L_80258BA4:
    // 0x80258BA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80258BA8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80258BAC: jr          $ra
    // 0x80258BB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80258BB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80258BB4: nop

    // 0x80258BB8: nop

    // 0x80258BBC: nop

;}
RECOMP_FUNC void func_8025888C_ovl40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8025888C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80258890: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80258894: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80258898: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8025889C: jal         0x80071110
    // 0x802588A0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80071110_4C510(rdram, ctx);
        goto after_0;
    // 0x802588A0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x802588A4: addiu       $v1, $zero, 0x7FFF
    ctx->r3 = ADD32(0, 0X7FFF);
    // 0x802588A8: bne         $v0, $v1, L_802588C8
    if (ctx->r2 != ctx->r3) {
        // 0x802588AC: addiu       $a0, $s0, 0x34
        ctx->r4 = ADD32(ctx->r16, 0X34);
            goto L_802588C8;
    }
    // 0x802588AC: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x802588B0: jal         0x80258B40
    // 0x802588B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80258B40_ovl40(rdram, ctx);
        goto after_1;
    // 0x802588B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802588B8: jal         0x8004F568
    // 0x802588BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F568_2A968(rdram, ctx);
        goto after_2;
    // 0x802588BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x802588C0: j           L_8025894C
    // 0x802588C4: nop

        goto L_8025894C;
    // 0x802588C4: nop

L_802588C8:
    // 0x802588C8: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x802588CC: jal         0x8009A3B4
    // 0x802588D0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x802588D0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_3:
    // 0x802588D4: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x802588D8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802588DC: jal         0x8009A3B4
    // 0x802588E0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x802588E0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x802588E4: jal         0x80046470
    // 0x802588E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80046470_21870(rdram, ctx);
        goto after_5;
    // 0x802588E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x802588EC: jal         0x80040F30
    // 0x802588F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_6;
    // 0x802588F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x802588F4: jal         0x8003E934
    // 0x802588F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_7;
    // 0x802588F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x802588FC: lhu         $a0, 0x14($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X14);
    // 0x80258900: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80258904: lhu         $a1, 0x16($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X16);
    // 0x80258908: lhu         $a2, 0x18($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X18);
    // 0x8025890C: lw          $v1, 0xD0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XD0);
    // 0x80258910: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80258914: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80258918: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8025891C: sh          $a0, 0xAC($s0)
    MEM_H(0XAC, ctx->r16) = ctx->r4;
    // 0x80258920: sh          $a1, 0xAE($s0)
    MEM_H(0XAE, ctx->r16) = ctx->r5;
    // 0x80258924: sh          $a2, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r6;
    // 0x80258928: bne         $v1, $zero, L_80258940
    if (ctx->r3 != 0) {
        // 0x8025892C: sw          $v1, 0xD0($s0)
        MEM_W(0XD0, ctx->r16) = ctx->r3;
            goto L_80258940;
    }
    // 0x8025892C: sw          $v1, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->r3;
    // 0x80258930: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80258934: sw          $v0, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = ctx->r2;
    // 0x80258938: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8025893C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80258940:
    // 0x80258940: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80258944: jal         0x80258AB4
    // 0x80258948: addiu       $a1, $zero, 0x6000
    ctx->r5 = ADD32(0, 0X6000);
    func_80258AB4_ovl40(rdram, ctx);
        goto after_8;
    // 0x80258948: addiu       $a1, $zero, 0x6000
    ctx->r5 = ADD32(0, 0X6000);
    after_8:
L_8025894C:
    // 0x8025894C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80258950: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80258954: jr          $ra
    // 0x80258958: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80258958: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802584C0_ovl40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802584C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802584C4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802584C8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802584CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802584D0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802584D4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802584D8: lui         $at, 0x8026
    ctx->r1 = S32(0X8026 << 16);
    // 0x802584DC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802584E0: lw          $v0, -0x7434($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7434);
    // 0x802584E4: jalr        $v0
    // 0x802584E8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802584E8: nop

    after_0:
    // 0x802584EC: jal         0x800472C0
    // 0x802584F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800472C0_226C0(rdram, ctx);
        goto after_1;
    // 0x802584F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802584F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802584F8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802584FC: jr          $ra
    // 0x80258500: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80258500: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80258AB4_ovl40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80258AB4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80258AB8: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80258ABC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80258AC0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80258AC4: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x80258AC8: sh          $v0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r2;
    // 0x80258ACC: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x80258AD0: addiu       $v0, $v0, -0x28
    ctx->r2 = ADD32(ctx->r2, -0X28);
    // 0x80258AD4: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x80258AD8: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x80258ADC: andi        $a3, $a1, 0xFFFF
    ctx->r7 = ctx->r5 & 0XFFFF;
    // 0x80258AE0: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80258AE4: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
    // 0x80258AE8: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80258AEC: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x80258AF0: addiu       $v0, $s0, 0xC8
    ctx->r2 = ADD32(ctx->r16, 0XC8);
    // 0x80258AF4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80258AF8: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80258AFC: lw          $v1, 0xD8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XD8);
    // 0x80258B00: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80258B04: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80258B08: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80258B0C: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x80258B10: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80258B14: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80258B18: jal         0x80051E18
    // 0x80258B1C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_0;
    // 0x80258B1C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_0:
    // 0x80258B20: sw          $zero, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = 0;
    // 0x80258B24: sw          $zero, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = 0;
    // 0x80258B28: sw          $zero, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = 0;
    // 0x80258B2C: sw          $zero, 0xCC($s0)
    MEM_W(0XCC, ctx->r16) = 0;
    // 0x80258B30: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80258B34: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80258B38: jr          $ra
    // 0x80258B3C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80258B3C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8025895C_ovl40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8025895C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80258960: lbu         $v1, -0x3A4F($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A4F);
    // 0x80258964: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80258968: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8025896C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80258970: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80258974: addiu       $s2, $s0, 0xD0
    ctx->r18 = ADD32(ctx->r16, 0XD0);
    // 0x80258978: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8025897C: xori        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 ^ 0XFF;
    // 0x80258980: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x80258984: xori        $v1, $v1, 0x11
    ctx->r3 = ctx->r3 ^ 0X11;
    // 0x80258988: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8025898C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80258990: beq         $v0, $zero, L_802589A8
    if (ctx->r2 == 0) {
        // 0x80258994: sw          $s1, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r17;
            goto L_802589A8;
    }
    // 0x80258994: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80258998: jal         0x8004F568
    // 0x8025899C: nop

    func_8004F568_2A968(rdram, ctx);
        goto after_0;
    // 0x8025899C: nop

    after_0:
    // 0x802589A0: j           L_80258A9C
    // 0x802589A4: nop

        goto L_80258A9C;
    // 0x802589A4: nop

L_802589A8:
    // 0x802589A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802589AC: jal         0x80071110
    // 0x802589B0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80071110_4C510(rdram, ctx);
        goto after_1;
    // 0x802589B0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
    // 0x802589B4: addiu       $v1, $zero, 0x7FFF
    ctx->r3 = ADD32(0, 0X7FFF);
    // 0x802589B8: beq         $v0, $v1, L_80258A78
    if (ctx->r2 == ctx->r3) {
        // 0x802589BC: addiu       $a0, $s0, 0x34
        ctx->r4 = ADD32(ctx->r16, 0X34);
            goto L_80258A78;
    }
    // 0x802589BC: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x802589C0: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x802589C4: jal         0x8009A3B4
    // 0x802589C8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x802589C8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x802589CC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x802589D0: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x802589D4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802589D8: jal         0x8009A3B4
    // 0x802589DC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x802589DC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x802589E0: jal         0x80046470
    // 0x802589E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80046470_21870(rdram, ctx);
        goto after_4;
    // 0x802589E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x802589E8: jal         0x80040F30
    // 0x802589EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_5;
    // 0x802589EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x802589F0: jal         0x8003E934
    // 0x802589F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_6;
    // 0x802589F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x802589F8: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x802589FC: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80258A00: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    // 0x80258A04: lhu         $a1, 0x18($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X18);
    // 0x80258A08: lui         $a2, 0x801E
    ctx->r6 = S32(0X801E << 16);
    // 0x80258A0C: lhu         $a2, -0x730C($a2)
    ctx->r6 = MEM_HU(ctx->r6, -0X730C);
    // 0x80258A10: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80258A14: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80258A18: andi        $v0, $a2, 0x2
    ctx->r2 = ctx->r6 & 0X2;
    // 0x80258A1C: sh          $v1, 0xAC($s0)
    MEM_H(0XAC, ctx->r16) = ctx->r3;
    // 0x80258A20: sh          $a0, 0xAE($s0)
    MEM_H(0XAE, ctx->r16) = ctx->r4;
    // 0x80258A24: beq         $v0, $zero, L_80258A4C
    if (ctx->r2 == 0) {
        // 0x80258A28: sh          $a1, 0xB0($s0)
        MEM_H(0XB0, ctx->r16) = ctx->r5;
            goto L_80258A4C;
    }
    // 0x80258A28: sh          $a1, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r5;
    // 0x80258A2C: andi        $v0, $a2, 0x1
    ctx->r2 = ctx->r6 & 0X1;
    // 0x80258A30: beq         $v0, $zero, L_80258A40
    if (ctx->r2 == 0) {
        // 0x80258A34: addiu       $a0, $zero, 0x133
        ctx->r4 = ADD32(0, 0X133);
            goto L_80258A40;
    }
    // 0x80258A34: addiu       $a0, $zero, 0x133
    ctx->r4 = ADD32(0, 0X133);
    // 0x80258A38: jal         0x8002A33C
    // 0x80258A3C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_7;
    // 0x80258A3C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_7:
L_80258A40:
    // 0x80258A40: lui         $v0, 0xE0
    ctx->r2 = S32(0XE0 << 16);
    // 0x80258A44: j           L_80258A64
    // 0x80258A48: ori         $v0, $v0, 0xE0E0
    ctx->r2 = ctx->r2 | 0XE0E0;
        goto L_80258A64;
    // 0x80258A48: ori         $v0, $v0, 0xE0E0
    ctx->r2 = ctx->r2 | 0XE0E0;
L_80258A4C:
    // 0x80258A4C: lw          $v0, 0xD4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD4);
    // 0x80258A50: beq         $v0, $zero, L_80258A60
    if (ctx->r2 == 0) {
        // 0x80258A54: lui         $v0, 0x80
        ctx->r2 = S32(0X80 << 16);
            goto L_80258A60;
    }
    // 0x80258A54: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80258A58: j           L_80258A64
    // 0x80258A5C: ori         $v0, $v0, 0x80C0
    ctx->r2 = ctx->r2 | 0X80C0;
        goto L_80258A64;
    // 0x80258A5C: ori         $v0, $v0, 0x80C0
    ctx->r2 = ctx->r2 | 0X80C0;
L_80258A60:
    // 0x80258A60: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
L_80258A64:
    // 0x80258A64: sw          $v0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r2;
    // 0x80258A68: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x80258A6C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80258A70: bne         $v0, $zero, L_80258A90
    if (ctx->r2 != 0) {
        // 0x80258A74: sw          $v0, 0x0($s2)
        MEM_W(0X0, ctx->r18) = ctx->r2;
            goto L_80258A90;
    }
    // 0x80258A74: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
L_80258A78:
    // 0x80258A78: jal         0x80258B40
    // 0x80258A7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80258B40_ovl40(rdram, ctx);
        goto after_8;
    // 0x80258A7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x80258A80: jal         0x8004F568
    // 0x80258A84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F568_2A968(rdram, ctx);
        goto after_9;
    // 0x80258A84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x80258A88: j           L_80258A9C
    // 0x80258A8C: nop

        goto L_80258A9C;
    // 0x80258A8C: nop

L_80258A90:
    // 0x80258A90: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80258A94: jal         0x80258AB4
    // 0x80258A98: addiu       $a1, $zero, 0x6000
    ctx->r5 = ADD32(0, 0X6000);
    func_80258AB4_ovl40(rdram, ctx);
        goto after_10;
    // 0x80258A98: addiu       $a1, $zero, 0x6000
    ctx->r5 = ADD32(0, 0X6000);
    after_10:
L_80258A9C:
    // 0x80258A9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80258AA0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80258AA4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80258AA8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80258AAC: jr          $ra
    // 0x80258AB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80258AB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80258998_ovl41(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80258998: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8025899C: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x802589A0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802589A4: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x802589A8: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x802589AC: lh          $v1, 0x44($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X44);
    // 0x802589B0: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x802589B4: lui         $a2, 0x200
    ctx->r6 = S32(0X200 << 16);
    // 0x802589B8: sll         $v1, $v1, 10
    ctx->r3 = S32(ctx->r3 << 10);
    // 0x802589BC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802589C0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802589C4: sh          $v0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r2;
    // 0x802589C8: lh          $v1, 0x46($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X46);
    // 0x802589CC: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x802589D0: ori         $a2, $a2, 0x1
    ctx->r6 = ctx->r6 | 0X1;
    // 0x802589D4: sll         $v1, $v1, 10
    ctx->r3 = S32(ctx->r3 << 10);
    // 0x802589D8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802589DC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802589E0: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x802589E4: lh          $v1, 0x48($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X48);
    // 0x802589E8: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x802589EC: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x802589F0: sll         $v1, $v1, 10
    ctx->r3 = S32(ctx->r3 << 10);
    // 0x802589F4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802589F8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802589FC: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
    // 0x80258A00: lb          $v1, 0xF($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XF);
    // 0x80258A04: lbu         $a1, 0x1($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X1);
    // 0x80258A08: addiu       $s1, $zero, 0x80
    ctx->r17 = ADD32(0, 0X80);
    // 0x80258A0C: addiu       $v0, $s0, 0xC8
    ctx->r2 = ADD32(ctx->r16, 0XC8);
    // 0x80258A10: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80258A14: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x80258A18: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80258A1C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80258A20: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80258A24: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    // 0x80258A28: lui         $a1, 0x8026
    ctx->r5 = S32(0X8026 << 16);
    // 0x80258A2C: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x80258A30: lw          $a1, -0x7374($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X7374);
    // 0x80258A34: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80258A38: jal         0x80051E18
    // 0x80258A3C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80051E18_2D218(rdram, ctx);
        goto after_0;
    // 0x80258A3C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80258A40: lui         $a1, 0x2800
    ctx->r5 = S32(0X2800 << 16);
    // 0x80258A44: ori         $a1, $a1, 0x1
    ctx->r5 = ctx->r5 | 0X1;
    // 0x80258A48: lb          $v1, 0xF($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XF);
    // 0x80258A4C: lbu         $a2, 0x1($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X1);
    // 0x80258A50: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80258A54: addiu       $v0, $s0, 0xC0
    ctx->r2 = ADD32(ctx->r16, 0XC0);
    // 0x80258A58: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80258A5C: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x80258A60: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80258A64: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80258A68: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80258A6C: sw          $a2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r6;
    // 0x80258A70: lui         $a1, 0x8026
    ctx->r5 = S32(0X8026 << 16);
    // 0x80258A74: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x80258A78: lw          $a1, -0x7374($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X7374);
    // 0x80258A7C: addiu       $a3, $zero, 0x4000
    ctx->r7 = ADD32(0, 0X4000);
    // 0x80258A80: jal         0x80051E18
    // 0x80258A84: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80051E18_2D218(rdram, ctx);
        goto after_1;
    // 0x80258A84: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80258A88: sw          $zero, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = 0;
    // 0x80258A8C: sw          $zero, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = 0;
    // 0x80258A90: sw          $zero, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = 0;
    // 0x80258A94: sw          $zero, 0xCC($s0)
    MEM_W(0XCC, ctx->r16) = 0;
    // 0x80258A98: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x80258A9C: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x80258AA0: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x80258AA4: jr          $ra
    // 0x80258AA8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x80258AA8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80258704_ovl41(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80258704: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80258708: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x8025870C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80258710: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80258714: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x80258718: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x8025871C: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x80258720: jal         0x80258954
    // 0x80258724: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    func_80258954_ovl41(rdram, ctx);
        goto after_0;
    // 0x80258724: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    after_0:
    // 0x80258728: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8025872C: bne         $v0, $zero, L_802587AC
    if (ctx->r2 != 0) {
        // 0x80258730: addiu       $s4, $s2, 0x88
        ctx->r20 = ADD32(ctx->r18, 0X88);
            goto L_802587AC;
    }
    // 0x80258730: addiu       $s4, $s2, 0x88
    ctx->r20 = ADD32(ctx->r18, 0X88);
    // 0x80258734: lw          $v0, 0xC8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XC8);
    // 0x80258738: lui         $v1, 0x280
    ctx->r3 = S32(0X280 << 16);
    // 0x8025873C: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x80258740: sw          $v1, 0xB4($s2)
    MEM_W(0XB4, ctx->r18) = ctx->r3;
    // 0x80258744: lui         $v1, 0xC00
    ctx->r3 = S32(0XC00 << 16);
    // 0x80258748: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8025874C: beq         $v0, $zero, L_80258770
    if (ctx->r2 == 0) {
        // 0x80258750: lui         $v0, 0x2E0
        ctx->r2 = S32(0X2E0 << 16);
            goto L_80258770;
    }
    // 0x80258750: lui         $v0, 0x2E0
    ctx->r2 = S32(0X2E0 << 16);
    // 0x80258754: ori         $v0, $v0, 0xE0E0
    ctx->r2 = ctx->r2 | 0XE0E0;
    // 0x80258758: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8025875C: addiu       $v1, $v1, 0x4DFC
    ctx->r3 = ADD32(ctx->r3, 0X4DFC);
    // 0x80258760: sw          $v0, 0xB4($s2)
    MEM_W(0XB4, ctx->r18) = ctx->r2;
    // 0x80258764: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80258768: j           L_80258794
    // 0x8025876C: ori         $v0, $v0, 0x3
    ctx->r2 = ctx->r2 | 0X3;
        goto L_80258794;
    // 0x8025876C: ori         $v0, $v0, 0x3
    ctx->r2 = ctx->r2 | 0X3;
L_80258770:
    // 0x80258770: jal         0x80258AAC
    // 0x80258774: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_80258AAC_ovl41(rdram, ctx);
        goto after_1;
    // 0x80258774: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x80258778: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8025877C: beq         $v0, $zero, L_80258798
    if (ctx->r2 == 0) {
        // 0x80258780: nop
    
            goto L_80258798;
    }
    // 0x80258780: nop

    // 0x80258784: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80258788: addiu       $v1, $v1, 0x4DFC
    ctx->r3 = ADD32(ctx->r3, 0X4DFC);
    // 0x8025878C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80258790: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
L_80258794:
    // 0x80258794: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
L_80258798:
    // 0x80258798: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x8025879C: addiu       $s3, $s3, 0x4F0A
    ctx->r19 = ADD32(ctx->r19, 0X4F0A);
    // 0x802587A0: lh          $a0, 0x0($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X0);
    // 0x802587A4: bne         $a0, $zero, L_802587C8
    if (ctx->r4 != 0) {
        // 0x802587A8: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_802587C8;
    }
    // 0x802587A8: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
L_802587AC:
    // 0x802587AC: addiu       $a0, $zero, 0x135
    ctx->r4 = ADD32(0, 0X135);
    // 0x802587B0: jal         0x8002A33C
    // 0x802587B4: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x802587B4: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    after_2:
    // 0x802587B8: jal         0x8004F568
    // 0x802587BC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8004F568_2A968(rdram, ctx);
        goto after_3;
    // 0x802587BC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_3:
    // 0x802587C0: j           L_80258934
    // 0x802587C4: nop

        goto L_80258934;
    // 0x802587C4: nop

L_802587C8:
    // 0x802587C8: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x802587CC: beq         $a0, $v0, L_802587D8
    if (ctx->r4 == ctx->r2) {
        // 0x802587D0: addiu       $v0, $v1, -0x1
        ctx->r2 = ADD32(ctx->r3, -0X1);
            goto L_802587D8;
    }
    // 0x802587D0: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x802587D4: sh          $v0, 0x0($s3)
    MEM_H(0X0, ctx->r19) = ctx->r2;
L_802587D8:
    // 0x802587D8: jal         0x80034B34
    // 0x802587DC: addiu       $s0, $s2, 0x8C
    ctx->r16 = ADD32(ctx->r18, 0X8C);
    func_80034B34_FF34(rdram, ctx);
        goto after_4;
    // 0x802587DC: addiu       $s0, $s2, 0x8C
    ctx->r16 = ADD32(ctx->r18, 0X8C);
    after_4:
    // 0x802587E0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x802587E4: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x802587E8: lhu         $v1, 0x4A06($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X4A06);
    // 0x802587EC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802587F0: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x802587F4: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    // 0x802587F8: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802587FC: jal         0x80031600
    // 0x80258800: sh          $v1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r3;
    func_80031600_CA00(rdram, ctx);
        goto after_5;
    // 0x80258800: sh          $v1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r3;
    after_5:
    // 0x80258804: lb          $v0, 0xF($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XF);
    // 0x80258808: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8025880C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80258810: lui         $at, 0x8026
    ctx->r1 = S32(0X8026 << 16);
    // 0x80258814: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80258818: lw          $v0, -0x7394($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7394);
    // 0x8025881C: addiu       $s1, $sp, 0x20
    ctx->r17 = ADD32(ctx->r29, 0X20);
    // 0x80258820: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80258824: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80258828: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8025882C: jal         0x80031DA8
    // 0x80258830: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_6;
    // 0x80258830: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_6:
    // 0x80258834: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80258838: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8025883C: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x80258840: addiu       $v0, $zero, -0x1000
    ctx->r2 = ADD32(0, -0X1000);
    // 0x80258844: sh          $zero, 0x10($sp)
    MEM_H(0X10, ctx->r29) = 0;
    // 0x80258848: sh          $zero, 0x12($sp)
    MEM_H(0X12, ctx->r29) = 0;
    // 0x8025884C: jal         0x800308E8
    // 0x80258850: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_800308E8_BCE8(rdram, ctx);
        goto after_7;
    // 0x80258850: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_7:
    // 0x80258854: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x80258858: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8025885C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80258860: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x80258864: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    // 0x80258868: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x8025886C: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x80258870: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80258874: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80258878: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x8025887C: sh          $v0, 0x46($s2)
    MEM_H(0X46, ctx->r18) = ctx->r2;
    // 0x80258880: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x80258884: addiu       $a1, $s3, -0x192
    ctx->r5 = ADD32(ctx->r19, -0X192);
    // 0x80258888: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8025888C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80258890: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80258894: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x80258898: jal         0x8009A3B4
    // 0x8025889C: sh          $v0, 0x48($s2)
    MEM_H(0X48, ctx->r18) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x8025889C: sh          $v0, 0x48($s2)
    MEM_H(0X48, ctx->r18) = ctx->r2;
    after_8:
    // 0x802588A0: lh          $v1, 0x18($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X18);
    // 0x802588A4: lh          $v0, 0x44($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X44);
    // 0x802588A8: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802588AC: sll         $v0, $v0, 10
    ctx->r2 = S32(ctx->r2 << 10);
    // 0x802588B0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802588B4: sw          $v1, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r3;
    // 0x802588B8: lh          $v1, 0x1A($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X1A);
    // 0x802588BC: lh          $v0, 0x46($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X46);
    // 0x802588C0: lhu         $a0, 0x1C($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X1C);
    // 0x802588C4: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802588C8: sll         $v0, $v0, 10
    ctx->r2 = S32(ctx->r2 << 10);
    // 0x802588CC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802588D0: sw          $v1, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r3;
    // 0x802588D4: lh          $v0, 0x1C($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X1C);
    // 0x802588D8: lh          $v1, 0x48($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X48);
    // 0x802588DC: sh          $a0, 0x14($s2)
    MEM_H(0X14, ctx->r18) = ctx->r4;
    // 0x802588E0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802588E4: sll         $v1, $v1, 10
    ctx->r3 = S32(ctx->r3 << 10);
    // 0x802588E8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802588EC: sw          $v0, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r2;
    // 0x802588F0: sh          $a0, 0x24($s4)
    MEM_H(0X24, ctx->r20) = ctx->r4;
    // 0x802588F4: lhu         $v0, 0x20($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X20);
    // 0x802588F8: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    // 0x802588FC: sh          $v0, 0x16($s2)
    MEM_H(0X16, ctx->r18) = ctx->r2;
    // 0x80258900: sh          $v0, 0x26($s4)
    MEM_H(0X26, ctx->r20) = ctx->r2;
    // 0x80258904: lhu         $v0, 0x24($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X24);
    // 0x80258908: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x8025890C: addiu       $a0, $s2, 0x34
    ctx->r4 = ADD32(ctx->r18, 0X34);
    // 0x80258910: sh          $v0, 0x18($s2)
    MEM_H(0X18, ctx->r18) = ctx->r2;
    // 0x80258914: jal         0x8009A3B4
    // 0x80258918: sh          $v0, 0x28($s4)
    MEM_H(0X28, ctx->r20) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x80258918: sh          $v0, 0x28($s4)
    MEM_H(0X28, ctx->r20) = ctx->r2;
    after_9:
    // 0x8025891C: addiu       $a0, $s2, 0x2C
    ctx->r4 = ADD32(ctx->r18, 0X2C);
    // 0x80258920: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x80258924: jal         0x8009A3B4
    // 0x80258928: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_10;
    // 0x80258928: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_10:
    // 0x8025892C: jal         0x80258998
    // 0x80258930: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_80258998_ovl41(rdram, ctx);
        goto after_11;
    // 0x80258930: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_11:
L_80258934:
    // 0x80258934: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80258938: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x8025893C: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x80258940: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x80258944: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x80258948: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8025894C: jr          $ra
    // 0x80258950: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x80258950: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_802584F0_ovl41(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802584F0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x802584F4: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x802584F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802584FC: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x80258500: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x80258504: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x80258508: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8025850C: lb          $a0, 0xD($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XD);
    // 0x80258510: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80258514: lbu         $a1, 0x6($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X6);
    // 0x80258518: lui         $v0, 0x8026
    ctx->r2 = S32(0X8026 << 16);
    // 0x8025851C: addiu       $v0, $v0, -0x73A0
    ctx->r2 = ADD32(ctx->r2, -0X73A0);
    // 0x80258520: sw          $zero, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = 0;
    // 0x80258524: sw          $zero, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = 0;
    // 0x80258528: sw          $zero, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = 0;
    // 0x8025852C: sw          $zero, 0xCC($s0)
    MEM_W(0XCC, ctx->r16) = 0;
    // 0x80258530: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x80258534: ori         $v1, $v1, 0x6
    ctx->r3 = ctx->r3 | 0X6;
    // 0x80258538: ori         $a1, $a1, 0x20
    ctx->r5 = ctx->r5 | 0X20;
    // 0x8025853C: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x80258540: jal         0x800530E8
    // 0x80258544: sb          $a1, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r5;
    func_800530E8_2E4E8(rdram, ctx);
        goto after_0;
    // 0x80258544: sb          $a1, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r5;
    after_0:
    // 0x80258548: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x8025854C: addiu       $s3, $s3, 0x4F08
    ctx->r19 = ADD32(ctx->r19, 0X4F08);
    // 0x80258550: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x80258554: jal         0x80034B34
    // 0x80258558: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    func_80034B34_FF34(rdram, ctx);
        goto after_1;
    // 0x80258558: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    after_1:
    // 0x8025855C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80258560: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80258564: lhu         $v1, 0x4A06($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X4A06);
    // 0x80258568: addiu       $s1, $s0, 0x8C
    ctx->r17 = ADD32(ctx->r16, 0X8C);
    // 0x8025856C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80258570: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x80258574: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    // 0x80258578: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8025857C: jal         0x80031600
    // 0x80258580: sh          $v1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r3;
    func_80031600_CA00(rdram, ctx);
        goto after_2;
    // 0x80258580: sh          $v1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r3;
    after_2:
    // 0x80258584: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x80258588: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8025858C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80258590: lui         $at, 0x8026
    ctx->r1 = S32(0X8026 << 16);
    // 0x80258594: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80258598: lw          $v0, -0x7394($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7394);
    // 0x8025859C: addiu       $s2, $sp, 0x20
    ctx->r18 = ADD32(ctx->r29, 0X20);
    // 0x802585A0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802585A4: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x802585A8: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x802585AC: jal         0x80031DA8
    // 0x802585B0: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_3;
    // 0x802585B0: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_3:
    // 0x802585B4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802585B8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x802585BC: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x802585C0: addiu       $v0, $zero, -0x1000
    ctx->r2 = ADD32(0, -0X1000);
    // 0x802585C4: sh          $zero, 0x10($sp)
    MEM_H(0X10, ctx->r29) = 0;
    // 0x802585C8: sh          $zero, 0x12($sp)
    MEM_H(0X12, ctx->r29) = 0;
    // 0x802585CC: jal         0x800308E8
    // 0x802585D0: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_800308E8_BCE8(rdram, ctx);
        goto after_4;
    // 0x802585D0: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_4:
    // 0x802585D4: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x802585D8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802585DC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802585E0: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x802585E4: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x802585E8: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x802585EC: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x802585F0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802585F4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802585F8: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x802585FC: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80258600: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x80258604: addiu       $a1, $s3, -0x190
    ctx->r5 = ADD32(ctx->r19, -0X190);
    // 0x80258608: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8025860C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80258610: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80258614: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x80258618: jal         0x8009A3B4
    // 0x8025861C: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8025861C: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
    after_5:
    // 0x80258620: lh          $v1, 0x18($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X18);
    // 0x80258624: lh          $v0, 0x44($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X44);
    // 0x80258628: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8025862C: sll         $v0, $v0, 10
    ctx->r2 = S32(ctx->r2 << 10);
    // 0x80258630: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80258634: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x80258638: lh          $v1, 0x1A($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X1A);
    // 0x8025863C: lh          $v0, 0x46($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X46);
    // 0x80258640: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80258644: sll         $v0, $v0, 10
    ctx->r2 = S32(ctx->r2 << 10);
    // 0x80258648: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8025864C: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80258650: lh          $v0, 0x1C($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X1C);
    // 0x80258654: lh          $v1, 0x48($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X48);
    // 0x80258658: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8025865C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80258660: sll         $v1, $v1, 10
    ctx->r3 = S32(ctx->r3 << 10);
    // 0x80258664: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80258668: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x8025866C: lhu         $v0, 0x1C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1C);
    // 0x80258670: lhu         $v1, 0x20($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X20);
    // 0x80258674: lhu         $a3, 0x24($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X24);
    // 0x80258678: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8025867C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80258680: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80258684: sh          $v0, 0xAC($s0)
    MEM_H(0XAC, ctx->r16) = ctx->r2;
    // 0x80258688: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x8025868C: sh          $v1, 0xAE($s0)
    MEM_H(0XAE, ctx->r16) = ctx->r3;
    // 0x80258690: sh          $a3, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r7;
    // 0x80258694: jal         0x8009A3B4
    // 0x80258698: sh          $a3, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r7;
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x80258698: sh          $a3, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r7;
    after_6:
    // 0x8025869C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x802586A0: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x802586A4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802586A8: jal         0x8009A3B4
    // 0x802586AC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x802586AC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_7:
    // 0x802586B0: lui         $v0, 0x280
    ctx->r2 = S32(0X280 << 16);
    // 0x802586B4: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x802586B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802586BC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802586C0: jal         0x8004D5D4
    // 0x802586C4: sw          $v0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_8;
    // 0x802586C4: sw          $v0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r2;
    after_8:
    // 0x802586C8: jal         0x80258998
    // 0x802586CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80258998_ovl41(rdram, ctx);
        goto after_9;
    // 0x802586CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x802586D0: addiu       $a0, $zero, 0x134
    ctx->r4 = ADD32(0, 0X134);
    // 0x802586D4: jal         0x8002A33C
    // 0x802586D8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_10;
    // 0x802586D8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_10:
    // 0x802586DC: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802586E0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802586E4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802586E8: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x802586EC: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x802586F0: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x802586F4: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x802586F8: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x802586FC: jr          $ra
    // 0x80258700: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x80258700: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80258AAC_ovl41(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80258AAC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80258AB0: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x80258AB4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80258AB8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80258ABC: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x80258AC0: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80258AC4: addiu       $s0, $s0, 0x49C4
    ctx->r16 = ADD32(ctx->r16, 0X49C4);
    // 0x80258AC8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80258ACC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80258AD0: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80258AD4: jal         0x8009A3B4
    // 0x80258AD8: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80258AD8: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    after_0:
    // 0x80258ADC: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x80258AE0: addiu       $a1, $s0, 0x40
    ctx->r5 = ADD32(ctx->r16, 0X40);
    // 0x80258AE4: jal         0x8009A3B4
    // 0x80258AE8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80258AE8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80258AEC: lb          $v0, 0xF($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XF);
    // 0x80258AF0: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x80258AF4: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x80258AF8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80258AFC: lui         $s0, 0x8026
    ctx->r16 = S32(0X8026 << 16);
    // 0x80258B00: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x80258B04: lw          $s0, -0x7354($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X7354);
L_80258B08:
    // 0x80258B08: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80258B0C: addiu       $v0, $v0, -0x2100
    ctx->r2 = ADD32(ctx->r2, -0X2100);
    // 0x80258B10: addu        $a1, $s1, $v0
    ctx->r5 = ADD32(ctx->r17, ctx->r2);
    // 0x80258B14: lb          $v0, 0x0($a1)
    ctx->r2 = MEM_B(ctx->r5, 0X0);
    // 0x80258B18: beq         $v0, $zero, L_80258C2C
    if (ctx->r2 == 0) {
        // 0x80258B1C: addiu       $a0, $sp, 0x20
        ctx->r4 = ADD32(ctx->r29, 0X20);
            goto L_80258C2C;
    }
    // 0x80258B1C: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x80258B20: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    // 0x80258B24: jal         0x8009A3B4
    // 0x80258B28: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80258B28: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80258B2C: lh          $v1, 0x10($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X10);
    // 0x80258B30: lh          $v0, 0x20($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X20);
    // 0x80258B34: subu        $a3, $v1, $v0
    ctx->r7 = SUB32(ctx->r3, ctx->r2);
    // 0x80258B38: addiu       $v0, $a3, 0x7D0
    ctx->r2 = ADD32(ctx->r7, 0X7D0);
    // 0x80258B3C: sltiu       $v0, $v0, 0xFA1
    ctx->r2 = ctx->r2 < 0XFA1 ? 1 : 0;
    // 0x80258B40: beq         $v0, $zero, L_80258C2C
    if (ctx->r2 == 0) {
        // 0x80258B44: sw          $a3, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r7;
            goto L_80258C2C;
    }
    // 0x80258B44: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    // 0x80258B48: lh          $v1, 0x12($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X12);
    // 0x80258B4C: lh          $v0, 0x22($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X22);
    // 0x80258B50: subu        $a0, $v1, $v0
    ctx->r4 = SUB32(ctx->r3, ctx->r2);
    // 0x80258B54: addiu       $v0, $a0, 0x7D0
    ctx->r2 = ADD32(ctx->r4, 0X7D0);
    // 0x80258B58: sltiu       $v0, $v0, 0xFA1
    ctx->r2 = ctx->r2 < 0XFA1 ? 1 : 0;
    // 0x80258B5C: beq         $v0, $zero, L_80258C2C
    if (ctx->r2 == 0) {
        // 0x80258B60: sw          $a0, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r4;
            goto L_80258C2C;
    }
    // 0x80258B60: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    // 0x80258B64: lh          $v1, 0x14($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X14);
    // 0x80258B68: lh          $v0, 0x24($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X24);
    // 0x80258B6C: subu        $a2, $v1, $v0
    ctx->r6 = SUB32(ctx->r3, ctx->r2);
    // 0x80258B70: addiu       $v0, $a2, 0x7D0
    ctx->r2 = ADD32(ctx->r6, 0X7D0);
    // 0x80258B74: sltiu       $v0, $v0, 0xFA1
    ctx->r2 = ctx->r2 < 0XFA1 ? 1 : 0;
    // 0x80258B78: beq         $v0, $zero, L_80258C2C
    if (ctx->r2 == 0) {
        // 0x80258B7C: sw          $a2, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r6;
            goto L_80258C2C;
    }
    // 0x80258B7C: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80258B80: nop

    // 0x80258B84: mult        $a3, $a3
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80258B88: mflo        $v0
    ctx->r2 = lo;
    // 0x80258B8C: nop

    // 0x80258B90: nop

    // 0x80258B94: mult        $a0, $a0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80258B98: mflo        $a0
    ctx->r4 = lo;
    // 0x80258B9C: nop

    // 0x80258BA0: nop

    // 0x80258BA4: mult        $a2, $a2
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80258BA8: mflo        $a1
    ctx->r5 = lo;
    // 0x80258BAC: lui         $v1, 0xF
    ctx->r3 = S32(0XF << 16);
    // 0x80258BB0: ori         $v1, $v1, 0x423F
    ctx->r3 = ctx->r3 | 0X423F;
    // 0x80258BB4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80258BB8: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80258BBC: sltu        $v1, $v1, $v0
    ctx->r3 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x80258BC0: bnel        $v1, $zero, L_80258C30
    if (ctx->r3 != 0) {
        // 0x80258BC4: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_80258C30;
    }
    goto skip_0;
    // 0x80258BC4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_0:
    // 0x80258BC8: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
    // 0x80258BCC: jal         0x80032664
    // 0x80258BD0: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    func_80032664_DA64(rdram, ctx);
        goto after_3;
    // 0x80258BD0: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    after_3:
    // 0x80258BD4: lh          $v1, 0x1A($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X1A);
    // 0x80258BD8: andi        $a2, $v0, 0xFFF
    ctx->r6 = ctx->r2 & 0XFFF;
    // 0x80258BDC: addu        $v0, $v1, $s0
    ctx->r2 = ADD32(ctx->r3, ctx->r16);
    // 0x80258BE0: andi        $a0, $v0, 0xFFF
    ctx->r4 = ctx->r2 & 0XFFF;
    // 0x80258BE4: sltu        $v0, $a0, $v1
    ctx->r2 = ctx->r4 < ctx->r3 ? 1 : 0;
    // 0x80258BE8: bne         $v0, $zero, L_80258C04
    if (ctx->r2 != 0) {
        // 0x80258BEC: sltu        $v0, $a2, $a0
        ctx->r2 = ctx->r6 < ctx->r4 ? 1 : 0;
            goto L_80258C04;
    }
    // 0x80258BEC: sltu        $v0, $a2, $a0
    ctx->r2 = ctx->r6 < ctx->r4 ? 1 : 0;
    // 0x80258BF0: subu        $v0, $v1, $s0
    ctx->r2 = SUB32(ctx->r3, ctx->r16);
    // 0x80258BF4: andi        $a1, $v0, 0xFFF
    ctx->r5 = ctx->r2 & 0XFFF;
    // 0x80258BF8: sltu        $v0, $v1, $a1
    ctx->r2 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x80258BFC: beq         $v0, $zero, L_80258C1C
    if (ctx->r2 == 0) {
        // 0x80258C00: sltu        $v0, $a2, $a0
        ctx->r2 = ctx->r6 < ctx->r4 ? 1 : 0;
            goto L_80258C1C;
    }
    // 0x80258C00: sltu        $v0, $a2, $a0
    ctx->r2 = ctx->r6 < ctx->r4 ? 1 : 0;
L_80258C04:
    // 0x80258C04: bnel        $v0, $zero, L_80258C40
    if (ctx->r2 != 0) {
        // 0x80258C08: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80258C40;
    }
    goto skip_1;
    // 0x80258C08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_1:
    // 0x80258C0C: subu        $v0, $v1, $s0
    ctx->r2 = SUB32(ctx->r3, ctx->r16);
    // 0x80258C10: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80258C14: j           L_80258C24
    // 0x80258C18: sltu        $v0, $v0, $a2
    ctx->r2 = ctx->r2 < ctx->r6 ? 1 : 0;
        goto L_80258C24;
    // 0x80258C18: sltu        $v0, $v0, $a2
    ctx->r2 = ctx->r2 < ctx->r6 ? 1 : 0;
L_80258C1C:
    // 0x80258C1C: beq         $v0, $zero, L_80258C2C
    if (ctx->r2 == 0) {
        // 0x80258C20: sltu        $v0, $a1, $a2
        ctx->r2 = ctx->r5 < ctx->r6 ? 1 : 0;
            goto L_80258C2C;
    }
    // 0x80258C20: sltu        $v0, $a1, $a2
    ctx->r2 = ctx->r5 < ctx->r6 ? 1 : 0;
L_80258C24:
    // 0x80258C24: bne         $v0, $zero, L_80258C40
    if (ctx->r2 != 0) {
        // 0x80258C28: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80258C40;
    }
    // 0x80258C28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80258C2C:
    // 0x80258C2C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_80258C30:
    // 0x80258C30: sltiu       $v0, $s2, 0x20
    ctx->r2 = ctx->r18 < 0X20 ? 1 : 0;
    // 0x80258C34: bne         $v0, $zero, L_80258B08
    if (ctx->r2 != 0) {
        // 0x80258C38: addiu       $s1, $s1, 0x118
        ctx->r17 = ADD32(ctx->r17, 0X118);
            goto L_80258B08;
    }
    // 0x80258C38: addiu       $s1, $s1, 0x118
    ctx->r17 = ADD32(ctx->r17, 0X118);
    // 0x80258C3C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80258C40:
    // 0x80258C40: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80258C44: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x80258C48: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x80258C4C: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x80258C50: jr          $ra
    // 0x80258C54: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x80258C54: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80258C58: nop

    // 0x80258C5C: nop

;}
RECOMP_FUNC void func_80258954_ovl41(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80258954: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80258958: lhu         $v1, 0x4ACC($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X4ACC);
    // 0x8025895C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80258960: lhu         $v0, 0x4AEC($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4AEC);
    // 0x80258964: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80258968: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8025896C: beq         $v0, $zero, L_80258988
    if (ctx->r2 == 0) {
        // 0x80258970: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_80258988;
    }
    // 0x80258970: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80258974: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80258978: jal         0x80070E54
    // 0x8025897C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_80070E54_4C254(rdram, ctx);
        goto after_0;
    // 0x8025897C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_0:
    // 0x80258980: bne         $v0, $zero, L_8025898C
    if (ctx->r2 != 0) {
        // 0x80258984: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8025898C;
    }
    // 0x80258984: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80258988:
    // 0x80258988: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8025898C:
    // 0x8025898C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80258990: jr          $ra
    // 0x80258994: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80258994: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802584C0_ovl41(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802584C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802584C4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802584C8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x802584CC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802584D0: lui         $at, 0x8026
    ctx->r1 = S32(0X8026 << 16);
    // 0x802584D4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802584D8: lw          $v0, -0x7334($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7334);
    // 0x802584DC: jalr        $v0
    // 0x802584E0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802584E0: nop

    after_0:
    // 0x802584E4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802584E8: jr          $ra
    // 0x802584EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802584EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80258704_ovl42(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80258704: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80258708: lhu         $v1, 0x4ACC($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X4ACC);
    // 0x8025870C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80258710: lhu         $v0, 0x4AEC($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4AEC);
    // 0x80258714: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80258718: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8025871C: beq         $v0, $zero, L_80258738
    if (ctx->r2 == 0) {
        // 0x80258720: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_80258738;
    }
    // 0x80258720: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80258724: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80258728: jal         0x80070E54
    // 0x8025872C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_80070E54_4C254(rdram, ctx);
        goto after_0;
    // 0x8025872C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_0:
    // 0x80258730: bne         $v0, $zero, L_8025873C
    if (ctx->r2 != 0) {
        // 0x80258734: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8025873C;
    }
    // 0x80258734: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80258738:
    // 0x80258738: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8025873C:
    // 0x8025873C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80258740: jr          $ra
    // 0x80258744: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80258744: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802584C0_ovl42(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802584C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802584C4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802584C8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x802584CC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802584D0: lui         $at, 0x8026
    ctx->r1 = S32(0X8026 << 16);
    // 0x802584D4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802584D8: lw          $v0, -0x7160($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7160);
    // 0x802584DC: jalr        $v0
    // 0x802584E0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802584E0: nop

    after_0:
    // 0x802584E4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802584E8: jr          $ra
    // 0x802584EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802584EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8025894C_ovl42(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8025894C: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80258950: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x80258954: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80258958: sw          $ra, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r31;
    // 0x8025895C: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x80258960: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x80258964: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x80258968: lh          $v0, 0x44($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X44);
    // 0x8025896C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80258970: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80258974: lh          $v0, 0x46($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X46);
    // 0x80258978: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8025897C: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x80258980: lh          $v0, 0x48($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X48);
    // 0x80258984: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80258988: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x8025898C: lbu         $v0, 0xC1($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC1);
    // 0x80258990: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x80258994: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
    // 0x80258998: beq         $v0, $zero, L_80258ADC
    if (ctx->r2 == 0) {
        // 0x8025899C: addiu       $s3, $s1, 0xC0
        ctx->r19 = ADD32(ctx->r17, 0XC0);
            goto L_80258ADC;
    }
    // 0x8025899C: addiu       $s3, $s1, 0xC0
    ctx->r19 = ADD32(ctx->r17, 0XC0);
    // 0x802589A0: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
L_802589A4:
    // 0x802589A4: sll         $s0, $a0, 3
    ctx->r16 = S32(ctx->r4 << 3);
    // 0x802589A8: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x802589AC: ori         $t2, $s0, 0x6
    ctx->r10 = ctx->r16 | 0X6;
    // 0x802589B0: andi        $v1, $t2, 0xFF
    ctx->r3 = ctx->r10 & 0XFF;
    // 0x802589B4: mult        $a2, $v1
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802589B8: mflo        $a1
    ctx->r5 = lo;
    // 0x802589BC: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x802589C0: nop

    // 0x802589C4: mult        $a3, $v1
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802589C8: mflo        $t1
    ctx->r9 = lo;
    // 0x802589CC: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x802589D0: nop

    // 0x802589D4: mult        $t0, $v1
    result = S64(S32(ctx->r8)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802589D8: mflo        $v1
    ctx->r3 = lo;
    // 0x802589DC: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x802589E0: ori         $t2, $s0, 0x1
    ctx->r10 = ctx->r16 | 0X1;
    // 0x802589E4: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x802589E8: andi        $a1, $t2, 0xFF
    ctx->r5 = ctx->r10 & 0XFF;
    // 0x802589EC: mult        $a2, $a1
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802589F0: mflo        $a2
    ctx->r6 = lo;
    // 0x802589F4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802589F8: sh          $v0, 0x40($sp)
    MEM_H(0X40, ctx->r29) = ctx->r2;
    // 0x802589FC: lw          $v0, 0x20($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X20);
    // 0x80258A00: mult        $a3, $a1
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80258A04: mflo        $a3
    ctx->r7 = lo;
    // 0x80258A08: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x80258A0C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80258A10: sh          $v0, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r2;
    // 0x80258A14: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x80258A18: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80258A1C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80258A20: sh          $v0, 0x44($sp)
    MEM_H(0X44, ctx->r29) = ctx->r2;
    // 0x80258A24: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x80258A28: mult        $t0, $a1
    result = S64(S32(ctx->r8)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80258A2C: mflo        $t0
    ctx->r8 = lo;
    // 0x80258A30: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80258A34: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80258A38: sh          $v0, 0x48($sp)
    MEM_H(0X48, ctx->r29) = ctx->r2;
    // 0x80258A3C: lw          $v0, 0x20($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X20);
    // 0x80258A40: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x80258A44: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80258A48: sh          $v0, 0x4A($sp)
    MEM_H(0X4A, ctx->r29) = ctx->r2;
    // 0x80258A4C: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x80258A50: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x80258A54: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x80258A58: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80258A5C: sh          $v0, 0x4C($sp)
    MEM_H(0X4C, ctx->r29) = ctx->r2;
    // 0x80258A60: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80258A64: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80258A68: addiu       $v0, $zero, 0x4000
    ctx->r2 = ADD32(0, 0X4000);
    // 0x80258A6C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80258A70: lbu         $v0, 0x1($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X1);
    // 0x80258A74: addiu       $a0, $a0, 0xD0
    ctx->r4 = ADD32(ctx->r4, 0XD0);
    // 0x80258A78: addu        $a0, $s1, $a0
    ctx->r4 = ADD32(ctx->r17, ctx->r4);
    // 0x80258A7C: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    // 0x80258A80: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80258A84: lw          $v1, 0x8($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X8);
    // 0x80258A88: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80258A8C: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80258A90: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x80258A94: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80258A98: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80258A9C: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    // 0x80258AA0: lw          $a1, 0x4($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4);
    // 0x80258AA4: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    // 0x80258AA8: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x80258AAC: jal         0x80051F9C
    // 0x80258AB0: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    func_80051F9C_2D39C(rdram, ctx);
        goto after_0;
    // 0x80258AB0: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    after_0:
    // 0x80258AB4: addu        $s0, $s0, $s1
    ctx->r16 = ADD32(ctx->r16, ctx->r17);
    // 0x80258AB8: sw          $zero, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = 0;
    // 0x80258ABC: sw          $zero, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = 0;
    // 0x80258AC0: lbu         $v1, 0x1($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X1);
    // 0x80258AC4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80258AC8: andi        $v0, $s2, 0xFF
    ctx->r2 = ctx->r18 & 0XFF;
    // 0x80258ACC: srl         $v1, $v1, 3
    ctx->r3 = S32(U32(ctx->r3) >> 3);
    // 0x80258AD0: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80258AD4: bne         $v0, $zero, L_802589A4
    if (ctx->r2 != 0) {
        // 0x80258AD8: andi        $a0, $s2, 0xFF
        ctx->r4 = ctx->r18 & 0XFF;
            goto L_802589A4;
    }
    // 0x80258AD8: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
L_80258ADC:
    // 0x80258ADC: lbu         $v0, 0x1($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X1);
    // 0x80258AE0: andi        $t1, $s2, 0xFF
    ctx->r9 = ctx->r18 & 0XFF;
    // 0x80258AE4: sltiu       $v1, $t1, 0x8
    ctx->r3 = ctx->r9 < 0X8 ? 1 : 0;
    // 0x80258AE8: andi        $a0, $v0, 0x7
    ctx->r4 = ctx->r2 & 0X7;
    // 0x80258AEC: sltu        $v0, $zero, $a0
    ctx->r2 = 0 < ctx->r4 ? 1 : 0;
    // 0x80258AF0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80258AF4: beq         $v0, $zero, L_80258C10
    if (ctx->r2 == 0) {
        // 0x80258AF8: sll         $s0, $t1, 3
        ctx->r16 = S32(ctx->r9 << 3);
            goto L_80258C10;
    }
    // 0x80258AF8: sll         $s0, $t1, 3
    ctx->r16 = S32(ctx->r9 << 3);
    // 0x80258AFC: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x80258B00: or          $t2, $s0, $a0
    ctx->r10 = ctx->r16 | ctx->r4;
    // 0x80258B04: andi        $v1, $t2, 0xFF
    ctx->r3 = ctx->r10 & 0XFF;
    // 0x80258B08: mult        $a1, $v1
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80258B0C: mflo        $a0
    ctx->r4 = lo;
    // 0x80258B10: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x80258B14: nop

    // 0x80258B18: mult        $a2, $v1
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80258B1C: mflo        $t0
    ctx->r8 = lo;
    // 0x80258B20: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x80258B24: nop

    // 0x80258B28: mult        $a3, $v1
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80258B2C: mflo        $v1
    ctx->r3 = lo;
    // 0x80258B30: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x80258B34: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80258B38: andi        $a0, $s0, 0xF8
    ctx->r4 = ctx->r16 & 0XF8;
    // 0x80258B3C: mult        $a1, $a0
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80258B40: mflo        $a1
    ctx->r5 = lo;
    // 0x80258B44: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80258B48: sh          $v0, 0x40($sp)
    MEM_H(0X40, ctx->r29) = ctx->r2;
    // 0x80258B4C: lw          $v0, 0x20($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X20);
    // 0x80258B50: mult        $a2, $a0
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80258B54: mflo        $a2
    ctx->r6 = lo;
    // 0x80258B58: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x80258B5C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80258B60: sh          $v0, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r2;
    // 0x80258B64: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x80258B68: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80258B6C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80258B70: sh          $v0, 0x44($sp)
    MEM_H(0X44, ctx->r29) = ctx->r2;
    // 0x80258B74: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x80258B78: mult        $a3, $a0
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80258B7C: mflo        $a3
    ctx->r7 = lo;
    // 0x80258B80: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80258B84: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80258B88: sh          $v0, 0x48($sp)
    MEM_H(0X48, ctx->r29) = ctx->r2;
    // 0x80258B8C: lw          $v0, 0x20($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X20);
    // 0x80258B90: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80258B94: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80258B98: sh          $v0, 0x4A($sp)
    MEM_H(0X4A, ctx->r29) = ctx->r2;
    // 0x80258B9C: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x80258BA0: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x80258BA4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80258BA8: sh          $v0, 0x4C($sp)
    MEM_H(0X4C, ctx->r29) = ctx->r2;
    // 0x80258BAC: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80258BB0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80258BB4: addiu       $v0, $zero, 0x4000
    ctx->r2 = ADD32(0, 0X4000);
    // 0x80258BB8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80258BBC: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x80258BC0: sll         $v0, $t1, 2
    ctx->r2 = S32(ctx->r9 << 2);
    // 0x80258BC4: addiu       $v0, $v0, 0xD0
    ctx->r2 = ADD32(ctx->r2, 0XD0);
    // 0x80258BC8: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x80258BCC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80258BD0: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x80258BD4: lw          $v1, 0x8($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X8);
    // 0x80258BD8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80258BDC: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80258BE0: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x80258BE4: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80258BE8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80258BEC: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    // 0x80258BF0: lw          $a1, 0x4($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X4);
    // 0x80258BF4: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x80258BF8: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    // 0x80258BFC: jal         0x80051F9C
    // 0x80258C00: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    func_80051F9C_2D39C(rdram, ctx);
        goto after_1;
    // 0x80258C00: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    after_1:
    // 0x80258C04: addu        $s0, $s0, $s1
    ctx->r16 = ADD32(ctx->r16, ctx->r17);
    // 0x80258C08: sw          $zero, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = 0;
    // 0x80258C0C: sw          $zero, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = 0;
L_80258C10:
    // 0x80258C10: lw          $ra, 0x60($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X60);
    // 0x80258C14: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x80258C18: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x80258C1C: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x80258C20: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x80258C24: jr          $ra
    // 0x80258C28: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    TRACE_RETURN()
    return;
    // 0x80258C28: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_80258630_ovl42(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80258630: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80258634: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80258638: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8025863C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80258640: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80258644: lbu         $v1, 0xC1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XC1);
    // 0x80258648: sltiu       $v0, $v1, 0x40
    ctx->r2 = ctx->r3 < 0X40 ? 1 : 0;
    // 0x8025864C: beq         $v0, $zero, L_8025865C
    if (ctx->r2 == 0) {
        // 0x80258650: addiu       $s1, $s0, 0xC0
        ctx->r17 = ADD32(ctx->r16, 0XC0);
            goto L_8025865C;
    }
    // 0x80258650: addiu       $s1, $s0, 0xC0
    ctx->r17 = ADD32(ctx->r16, 0XC0);
    // 0x80258654: j           L_80258660
    // 0x80258658: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
        goto L_80258660;
    // 0x80258658: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
L_8025865C:
    // 0x8025865C: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
L_80258660:
    // 0x80258660: sb          $v0, 0xC1($s0)
    MEM_B(0XC1, ctx->r16) = ctx->r2;
    // 0x80258664: jal         0x80258704
    // 0x80258668: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80258704_ovl42(rdram, ctx);
        goto after_0;
    // 0x80258668: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8025866C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80258670: bne         $v0, $zero, L_802586B8
    if (ctx->r2 != 0) {
        // 0x80258674: addiu       $a0, $zero, 0x137
        ctx->r4 = ADD32(0, 0X137);
            goto L_802586B8;
    }
    // 0x80258674: addiu       $a0, $zero, 0x137
    ctx->r4 = ADD32(0, 0X137);
    // 0x80258678: jal         0x80258C2C
    // 0x8025867C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80258C2C_ovl42(rdram, ctx);
        goto after_1;
    // 0x8025867C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80258680: bnel        $v0, $zero, L_80258688
    if (ctx->r2 != 0) {
        // 0x80258684: sb          $v0, 0x1($s1)
        MEM_B(0X1, ctx->r17) = ctx->r2;
            goto L_80258688;
    }
    goto skip_0;
    // 0x80258684: sb          $v0, 0x1($s1)
    MEM_B(0X1, ctx->r17) = ctx->r2;
    skip_0:
L_80258688:
    // 0x80258688: jal         0x80258DE8
    // 0x8025868C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80258DE8_ovl42(rdram, ctx);
        goto after_2;
    // 0x8025868C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80258690: beq         $v0, $zero, L_802586A0
    if (ctx->r2 == 0) {
        // 0x80258694: lui         $v0, 0x280
        ctx->r2 = S32(0X280 << 16);
            goto L_802586A0;
    }
    // 0x80258694: lui         $v0, 0x280
    ctx->r2 = S32(0X280 << 16);
    // 0x80258698: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x8025869C: sw          $v0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r2;
L_802586A0:
    // 0x802586A0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802586A4: addiu       $a1, $a1, 0x4F12
    ctx->r5 = ADD32(ctx->r5, 0X4F12);
    // 0x802586A8: lh          $a0, 0x0($a1)
    ctx->r4 = MEM_H(ctx->r5, 0X0);
    // 0x802586AC: bne         $a0, $zero, L_802586D0
    if (ctx->r4 != 0) {
        // 0x802586B0: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_802586D0;
    }
    // 0x802586B0: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x802586B4: addiu       $a0, $zero, 0x137
    ctx->r4 = ADD32(0, 0X137);
L_802586B8:
    // 0x802586B8: jal         0x8002A33C
    // 0x802586BC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x802586BC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_3:
    // 0x802586C0: jal         0x8004F568
    // 0x802586C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F568_2A968(rdram, ctx);
        goto after_4;
    // 0x802586C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x802586C8: j           L_802586F0
    // 0x802586CC: nop

        goto L_802586F0;
    // 0x802586CC: nop

L_802586D0:
    // 0x802586D0: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x802586D4: beq         $a0, $v0, L_802586E0
    if (ctx->r4 == ctx->r2) {
        // 0x802586D8: addiu       $v0, $v1, -0x1
        ctx->r2 = ADD32(ctx->r3, -0X1);
            goto L_802586E0;
    }
    // 0x802586D8: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x802586DC: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
L_802586E0:
    // 0x802586E0: jal         0x80258748
    // 0x802586E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80258748_ovl42(rdram, ctx);
        goto after_5;
    // 0x802586E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x802586E8: jal         0x8025894C
    // 0x802586EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8025894C_ovl42(rdram, ctx);
        goto after_6;
    // 0x802586EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_802586F0:
    // 0x802586F0: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x802586F4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802586F8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802586FC: jr          $ra
    // 0x80258700: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80258700: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802584F0_ovl42(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802584F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802584F4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802584F8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802584FC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80258500: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80258504: jal         0x800530E8
    // 0x80258508: lb          $a0, 0xD($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XD);
    func_800530E8_2E4E8(rdram, ctx);
        goto after_0;
    // 0x80258508: lb          $a0, 0xD($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XD);
    after_0:
    // 0x8025850C: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x80258510: lbu         $a0, 0x6($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X6);
    // 0x80258514: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80258518: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x8025851C: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x80258520: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    // 0x80258524: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
    // 0x80258528: sb          $zero, 0xC($s1)
    MEM_B(0XC, ctx->r17) = 0;
    // 0x8025852C: sb          $zero, 0xD($s1)
    MEM_B(0XD, ctx->r17) = 0;
    // 0x80258530: sb          $zero, 0xE($s1)
    MEM_B(0XE, ctx->r17) = 0;
    // 0x80258534: sb          $zero, 0xF($s1)
    MEM_B(0XF, ctx->r17) = 0;
    // 0x80258538: ori         $v1, $v1, 0x6
    ctx->r3 = ctx->r3 | 0X6;
    // 0x8025853C: ori         $a0, $a0, 0x20
    ctx->r4 = ctx->r4 | 0X20;
    // 0x80258540: sb          $a0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r4;
    // 0x80258544: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80258548: addiu       $a0, $a0, 0x4F0E
    ctx->r4 = ADD32(ctx->r4, 0X4F0E);
    // 0x8025854C: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
    // 0x80258550: lbu         $s0, 0x0($a0)
    ctx->r16 = MEM_BU(ctx->r4, 0X0);
    // 0x80258554: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80258558: sb          $v0, 0xC1($s1)
    MEM_B(0XC1, ctx->r17) = ctx->r2;
    // 0x8025855C: andi        $s0, $s0, 0xFF
    ctx->r16 = ctx->r16 & 0XFF;
    // 0x80258560: lui         $v0, 0x8026
    ctx->r2 = S32(0X8026 << 16);
    // 0x80258564: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x80258568: lbu         $v0, -0x71B4($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X71B4);
    // 0x8025856C: sb          $v0, 0xC2($s1)
    MEM_B(0XC2, ctx->r17) = ctx->r2;
    // 0x80258570: lui         $v0, 0x8026
    ctx->r2 = S32(0X8026 << 16);
    // 0x80258574: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x80258578: lbu         $v0, -0x71C0($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X71C0);
    // 0x8025857C: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    // 0x80258580: sb          $v0, 0xC3($s1)
    MEM_B(0XC3, ctx->r17) = ctx->r2;
    // 0x80258584: lui         $v0, 0x8026
    ctx->r2 = S32(0X8026 << 16);
    // 0x80258588: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x8025858C: lw          $v0, -0x71AC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X71AC);
    // 0x80258590: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x80258594: addiu       $a0, $a0, -0x55E
    ctx->r4 = ADD32(ctx->r4, -0X55E);
    // 0x80258598: jal         0x80071060
    // 0x8025859C: sw          $v0, 0xC4($s1)
    MEM_W(0XC4, ctx->r17) = ctx->r2;
    func_80071060_4C460(rdram, ctx);
        goto after_1;
    // 0x8025859C: sw          $v0, 0xC4($s1)
    MEM_W(0XC4, ctx->r17) = ctx->r2;
    after_1:
    // 0x802585A0: sw          $v0, 0xC8($s1)
    MEM_W(0XC8, ctx->r17) = ctx->r2;
    // 0x802585A4: lui         $v0, 0x8026
    ctx->r2 = S32(0X8026 << 16);
    // 0x802585A8: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x802585AC: lw          $v0, -0x718C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X718C);
    // 0x802585B0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802585B4: jal         0x80258748
    // 0x802585B8: sw          $v0, 0xCC($s1)
    MEM_W(0XCC, ctx->r17) = ctx->r2;
    func_80258748_ovl42(rdram, ctx);
        goto after_2;
    // 0x802585B8: sw          $v0, 0xCC($s1)
    MEM_W(0XCC, ctx->r17) = ctx->r2;
    after_2:
    // 0x802585BC: lui         $v0, 0x280
    ctx->r2 = S32(0X280 << 16);
    // 0x802585C0: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x802585C4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802585C8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802585CC: jal         0x8004D5D4
    // 0x802585D0: sw          $v0, 0xB4($s1)
    MEM_W(0XB4, ctx->r17) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_3;
    // 0x802585D0: sw          $v0, 0xB4($s1)
    MEM_W(0XB4, ctx->r17) = ctx->r2;
    after_3:
    // 0x802585D4: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x802585D8: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
L_802585DC:
    // 0x802585DC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802585E0: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x802585E4: sw          $zero, 0xD0($v0)
    MEM_W(0XD0, ctx->r2) = 0;
    // 0x802585E8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802585EC: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x802585F0: sltiu       $v0, $v0, 0x10
    ctx->r2 = ctx->r2 < 0X10 ? 1 : 0;
    // 0x802585F4: bne         $v0, $zero, L_802585DC
    if (ctx->r2 != 0) {
        // 0x802585F8: andi        $v0, $v1, 0xFF
        ctx->r2 = ctx->r3 & 0XFF;
            goto L_802585DC;
    }
    // 0x802585F8: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x802585FC: lui         $v0, 0x8026
    ctx->r2 = S32(0X8026 << 16);
    // 0x80258600: addiu       $v0, $v0, -0x716C
    ctx->r2 = ADD32(ctx->r2, -0X716C);
    // 0x80258604: sw          $v0, 0x78($s1)
    MEM_W(0X78, ctx->r17) = ctx->r2;
    // 0x80258608: jal         0x8025894C
    // 0x8025860C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8025894C_ovl42(rdram, ctx);
        goto after_4;
    // 0x8025860C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x80258610: addiu       $a0, $zero, 0x136
    ctx->r4 = ADD32(0, 0X136);
    // 0x80258614: jal         0x8002A33C
    // 0x80258618: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_5;
    // 0x80258618: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_5:
    // 0x8025861C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80258620: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80258624: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80258628: jr          $ra
    // 0x8025862C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8025862C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80258C2C_ovl42(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80258C2C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80258C30: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80258C34: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80258C38: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80258C3C: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x80258C40: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x80258C44: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x80258C48: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80258C4C: lh          $v0, 0x44($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X44);
    // 0x80258C50: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80258C54: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80258C58: lh          $v0, 0x46($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X46);
    // 0x80258C5C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80258C60: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80258C64: lh          $v0, 0x48($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X48);
    // 0x80258C68: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80258C6C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80258C70: lbu         $v0, 0xC1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC1);
    // 0x80258C74: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x80258C78: beq         $v0, $zero, L_80258DC4
    if (ctx->r2 == 0) {
        // 0x80258C7C: addiu       $s4, $s0, 0xC0
        ctx->r20 = ADD32(ctx->r16, 0XC0);
            goto L_80258DC4;
    }
    // 0x80258C7C: addiu       $s4, $s0, 0xC0
    ctx->r20 = ADD32(ctx->r16, 0XC0);
    // 0x80258C80: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_80258C84:
    // 0x80258C84: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x80258C88: addiu       $s2, $s1, 0x1
    ctx->r18 = ADD32(ctx->r17, 0X1);
    // 0x80258C8C: andi        $v1, $s2, 0xFF
    ctx->r3 = ctx->r18 & 0XFF;
    // 0x80258C90: mult        $a1, $v1
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80258C94: mflo        $a0
    ctx->r4 = lo;
    // 0x80258C98: lw          $a2, 0x14($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X14);
    // 0x80258C9C: nop

    // 0x80258CA0: mult        $a2, $v1
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80258CA4: mflo        $t0
    ctx->r8 = lo;
    // 0x80258CA8: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80258CAC: nop

    // 0x80258CB0: mult        $a3, $v1
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80258CB4: mflo        $v1
    ctx->r3 = lo;
    // 0x80258CB8: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x80258CBC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80258CC0: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    // 0x80258CC4: mult        $a1, $a0
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80258CC8: mflo        $a1
    ctx->r5 = lo;
    // 0x80258CCC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80258CD0: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    // 0x80258CD4: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x80258CD8: mult        $a2, $a0
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80258CDC: mflo        $a2
    ctx->r6 = lo;
    // 0x80258CE0: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x80258CE4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80258CE8: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x80258CEC: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x80258CF0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80258CF4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80258CF8: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    // 0x80258CFC: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x80258D00: mult        $a3, $a0
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80258D04: mflo        $a3
    ctx->r7 = lo;
    // 0x80258D08: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80258D0C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80258D10: sh          $v0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r2;
    // 0x80258D14: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x80258D18: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x80258D1C: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80258D20: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80258D24: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x80258D28: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x80258D2C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80258D30: lui         $a2, 0x8026
    ctx->r6 = S32(0X8026 << 16);
    // 0x80258D34: addiu       $a2, $a2, -0x716C
    ctx->r6 = ADD32(ctx->r6, -0X716C);
    // 0x80258D38: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x80258D3C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80258D40: ori         $a3, $zero, 0xFFFF
    ctx->r7 = 0 | 0XFFFF;
    // 0x80258D44: jal         0x8003F780
    // 0x80258D48: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
    func_8003F780_1AB80(rdram, ctx);
        goto after_0;
    // 0x80258D48: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
    after_0:
    // 0x80258D4C: beql        $v0, $zero, L_80258DB0
    if (ctx->r2 == 0) {
        // 0x80258D50: addu        $s1, $s2, $zero
        ctx->r17 = ADD32(ctx->r18, 0);
            goto L_80258DB0;
    }
    goto skip_0;
    // 0x80258D50: addu        $s1, $s2, $zero
    ctx->r17 = ADD32(ctx->r18, 0);
    skip_0:
    // 0x80258D54: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80258D58: lhu         $v0, -0x730C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X730C);
    // 0x80258D5C: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80258D60: bne         $v0, $zero, L_80258DA8
    if (ctx->r2 != 0) {
        // 0x80258D64: andi        $v0, $s1, 0xFF
        ctx->r2 = ctx->r17 & 0XFF;
            goto L_80258DA8;
    }
    // 0x80258D64: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x80258D68: jal         0x8004F144
    // 0x80258D6C: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_1;
    // 0x80258D6C: nop

    after_1:
    // 0x80258D70: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80258D74: beql        $v1, $zero, L_80258DA8
    if (ctx->r3 == 0) {
        // 0x80258D78: andi        $v0, $s1, 0xFF
        ctx->r2 = ctx->r17 & 0XFF;
            goto L_80258DA8;
    }
    goto skip_1;
    // 0x80258D78: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    skip_1:
    // 0x80258D7C: addiu       $v0, $zero, 0x8A
    ctx->r2 = ADD32(0, 0X8A);
    // 0x80258D80: sb          $s3, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r19;
    // 0x80258D84: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80258D88: sb          $s3, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r19;
    // 0x80258D8C: lhu         $v0, 0x28($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X28);
    // 0x80258D90: sh          $v0, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = ctx->r2;
    // 0x80258D94: lhu         $v0, 0x2A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X2A);
    // 0x80258D98: sh          $v0, 0x1E($v1)
    MEM_H(0X1E, ctx->r3) = ctx->r2;
    // 0x80258D9C: lhu         $v0, 0x2C($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X2C);
    // 0x80258DA0: sh          $v0, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r2;
    // 0x80258DA4: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
L_80258DA8:
    // 0x80258DA8: j           L_80258DC8
    // 0x80258DAC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80258DC8;
    // 0x80258DAC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80258DB0:
    // 0x80258DB0: lbu         $v1, 0x1($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X1);
    // 0x80258DB4: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x80258DB8: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80258DBC: bne         $v0, $zero, L_80258C84
    if (ctx->r2 != 0) {
        // 0x80258DC0: nop
    
            goto L_80258C84;
    }
    // 0x80258DC0: nop

L_80258DC4:
    // 0x80258DC4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80258DC8:
    // 0x80258DC8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80258DCC: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x80258DD0: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x80258DD4: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80258DD8: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80258DDC: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80258DE0: jr          $ra
    // 0x80258DE4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x80258DE4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
