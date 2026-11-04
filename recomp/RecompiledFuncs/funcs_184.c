#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_802493B0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802493B0: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x802493B4: sw          $s2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r18;
    // 0x802493B8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x802493BC: sw          $ra, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r31;
    // 0x802493C0: sw          $s1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r17;
    // 0x802493C4: sw          $s0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r16;
    // 0x802493C8: lbu         $v0, 0x3($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X3);
    // 0x802493CC: addiu       $s0, $sp, 0x70
    ctx->r16 = ADD32(ctx->r29, 0X70);
    // 0x802493D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802493D4: sh          $zero, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = 0;
    // 0x802493D8: sh          $zero, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = 0;
    // 0x802493DC: xori        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 ^ 0X4;
    // 0x802493E0: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x802493E4: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x802493E8: andi        $v0, $v0, 0x300
    ctx->r2 = ctx->r2 & 0X300;
    // 0x802493EC: ori         $v0, $v0, 0x200
    ctx->r2 = ctx->r2 | 0X200;
    // 0x802493F0: jal         0x8002C678
    // 0x802493F4: sh          $v0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r2;
    func_8002C678_7A78(rdram, ctx);
        goto after_0;
    // 0x802493F4: sh          $v0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r2;
    after_0:
    // 0x802493F8: lb          $a0, 0xD($s2)
    ctx->r4 = MEM_B(ctx->r18, 0XD);
    // 0x802493FC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80249400: sltu        $a0, $zero, $a0
    ctx->r4 = 0 < ctx->r4 ? 1 : 0;
    // 0x80249404: jal         0x800319B4
    // 0x80249408: sll         $a0, $a0, 11
    ctx->r4 = S32(ctx->r4 << 11);
    func_800319B4_CDB4(rdram, ctx);
        goto after_1;
    // 0x80249408: sll         $a0, $a0, 11
    ctx->r4 = S32(ctx->r4 << 11);
    after_1:
    // 0x8024940C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80249410: addiu       $s1, $sp, 0x28
    ctx->r17 = ADD32(ctx->r29, 0X28);
    // 0x80249414: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80249418: jal         0x800308E8
    // 0x8024941C: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    func_800308E8_BCE8(rdram, ctx);
        goto after_2;
    // 0x8024941C: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_2:
    // 0x80249420: lh          $v1, 0x38($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X38);
    // 0x80249424: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x80249428: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024942C: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80249430: sh          $v0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r2;
    // 0x80249434: lh          $v1, 0x3A($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X3A);
    // 0x80249438: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x8024943C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80249440: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x80249444: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x80249448: lh          $v1, 0x3C($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X3C);
    // 0x8024944C: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x80249450: lui         $s0, 0x801D
    ctx->r16 = S32(0X801D << 16);
    // 0x80249454: addiu       $s0, $s0, 0x4760
    ctx->r16 = ADD32(ctx->r16, 0X4760);
    // 0x80249458: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8024945C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80249460: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x80249464: jal         0x80031E5C
    // 0x80249468: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
    func_80031E5C_D25C(rdram, ctx);
        goto after_3;
    // 0x80249468: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
    after_3:
    // 0x8024946C: jal         0x80031E94
    // 0x80249470: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80031E94_D294(rdram, ctx);
        goto after_4;
    // 0x80249470: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80249474: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80249478: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x8024947C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80249480: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80249484: jal         0x8009A3B4
    // 0x80249488: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80249488: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x8024948C: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80249490: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x80249494: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80249498: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x8024949C: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x802494A0: addiu       $a2, $a2, -0x236C
    ctx->r6 = ADD32(ctx->r6, -0X236C);
    // 0x802494A4: lui         $a3, 0x801E
    ctx->r7 = S32(0X801E << 16);
    // 0x802494A8: jal         0x80031F0C
    // 0x802494AC: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    func_80031F0C_D30C(rdram, ctx);
        goto after_6;
    // 0x802494AC: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    after_6:
    // 0x802494B0: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x802494B4: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x802494B8: addiu       $a1, $a1, -0x3F58
    ctx->r5 = ADD32(ctx->r5, -0X3F58);
    // 0x802494BC: jal         0x8009A3B4
    // 0x802494C0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x802494C0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_7:
    // 0x802494C4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x802494C8: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802494CC: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x802494D0: jal         0x8009A3B4
    // 0x802494D4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x802494D4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_8:
    // 0x802494D8: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x802494DC: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x802494E0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802494E4: jal         0x8009A3B4
    // 0x802494E8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x802494E8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_9:
    // 0x802494EC: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x802494F0: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x802494F4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802494F8: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x802494FC: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x80249500: addiu       $a2, $a2, -0x236C
    ctx->r6 = ADD32(ctx->r6, -0X236C);
    // 0x80249504: lui         $a3, 0x801E
    ctx->r7 = S32(0X801E << 16);
    // 0x80249508: jal         0x80031F0C
    // 0x8024950C: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    func_80031F0C_D30C(rdram, ctx);
        goto after_10;
    // 0x8024950C: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    after_10:
    // 0x80249510: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x80249514: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x80249518: addiu       $a1, $a1, -0x3F58
    ctx->r5 = ADD32(ctx->r5, -0X3F58);
    // 0x8024951C: jal         0x8009A3B4
    // 0x80249520: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_11;
    // 0x80249520: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_11:
    // 0x80249524: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x80249528: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8024952C: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x80249530: jal         0x8009A3B4
    // 0x80249534: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    memcpy_recomp(rdram, ctx);
        goto after_12;
    // 0x80249534: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_12:
    // 0x80249538: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8024953C: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x80249540: addiu       $a1, $s2, 0x38
    ctx->r5 = ADD32(ctx->r18, 0X38);
    // 0x80249544: jal         0x8009A3B4
    // 0x80249548: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_13;
    // 0x80249548: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_13:
    // 0x8024954C: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80249550: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x80249554: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80249558: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x8024955C: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x80249560: addiu       $a2, $a2, -0x236C
    ctx->r6 = ADD32(ctx->r6, -0X236C);
    // 0x80249564: lui         $a3, 0x801E
    ctx->r7 = S32(0X801E << 16);
    // 0x80249568: jal         0x80031F0C
    // 0x8024956C: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    func_80031F0C_D30C(rdram, ctx);
        goto after_14;
    // 0x8024956C: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    after_14:
    // 0x80249570: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x80249574: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x80249578: addiu       $a1, $a1, -0x3F58
    ctx->r5 = ADD32(ctx->r5, -0X3F58);
    // 0x8024957C: jal         0x8009A3B4
    // 0x80249580: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_15;
    // 0x80249580: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_15:
    // 0x80249584: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x80249588: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8024958C: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x80249590: jal         0x8009A3B4
    // 0x80249594: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    memcpy_recomp(rdram, ctx);
        goto after_16;
    // 0x80249594: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_16:
    // 0x80249598: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    // 0x8024959C: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x802495A0: beq         $a2, $a1, L_80249658
    if (ctx->r6 == ctx->r5) {
        // 0x802495A4: lui         $v0, 0x80
        ctx->r2 = S32(0X80 << 16);
            goto L_80249658;
    }
    // 0x802495A4: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x802495A8: lw          $v0, 0x68($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X68);
    // 0x802495AC: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x802495B0: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x802495B4: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x802495B8: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x802495BC: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802495C0: mflo        $v0
    ctx->r2 = lo;
    // 0x802495C4: subu        $v1, $a2, $a1
    ctx->r3 = SUB32(ctx->r6, ctx->r5);
    // 0x802495C8: nop

    // 0x802495CC: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x802495D0: bne         $v1, $zero, L_802495DC
    if (ctx->r3 != 0) {
        // 0x802495D4: nop
    
            goto L_802495DC;
    }
    // 0x802495D4: nop

    // 0x802495D8: break       7
    do_break(2149881304);
L_802495DC:
    // 0x802495DC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802495E0: bne         $v1, $at, L_802495F4
    if (ctx->r3 != ctx->r1) {
        // 0x802495E4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_802495F4;
    }
    // 0x802495E4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802495E8: bne         $v0, $at, L_802495F4
    if (ctx->r2 != ctx->r1) {
        // 0x802495EC: nop
    
            goto L_802495F4;
    }
    // 0x802495EC: nop

    // 0x802495F0: break       6
    do_break(2149881328);
L_802495F4:
    // 0x802495F4: mflo        $v0
    ctx->r2 = lo;
    // 0x802495F8: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x802495FC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80249600: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80249604: beq         $v0, $zero, L_80249658
    if (ctx->r2 == 0) {
        // 0x80249608: lui         $v0, 0x80
        ctx->r2 = S32(0X80 << 16);
            goto L_80249658;
    }
    // 0x80249608: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8024960C: lh          $v1, 0x10($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X10);
    // 0x80249610: lh          $a0, 0x18($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X18);
    // 0x80249614: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80249618: beq         $v0, $zero, L_80249634
    if (ctx->r2 == 0) {
        // 0x8024961C: slt         $v0, $a0, $v1
        ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_80249634;
    }
    // 0x8024961C: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80249620: lh          $v0, 0x20($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X20);
    // 0x80249624: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80249628: bne         $v0, $zero, L_8024964C
    if (ctx->r2 != 0) {
        // 0x8024962C: lui         $v0, 0x240
        ctx->r2 = S32(0X240 << 16);
            goto L_8024964C;
    }
    // 0x8024962C: lui         $v0, 0x240
    ctx->r2 = S32(0X240 << 16);
    // 0x80249630: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
L_80249634:
    // 0x80249634: beq         $v0, $zero, L_80249658
    if (ctx->r2 == 0) {
        // 0x80249638: lui         $v0, 0x80
        ctx->r2 = S32(0X80 << 16);
            goto L_80249658;
    }
    // 0x80249638: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8024963C: lh          $v0, 0x20($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X20);
    // 0x80249640: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80249644: beq         $v0, $zero, L_80249654
    if (ctx->r2 == 0) {
        // 0x80249648: lui         $v0, 0x240
        ctx->r2 = S32(0X240 << 16);
            goto L_80249654;
    }
    // 0x80249648: lui         $v0, 0x240
    ctx->r2 = S32(0X240 << 16);
L_8024964C:
    // 0x8024964C: j           L_8024965C
    // 0x80249650: ori         $v0, $v0, 0x4040
    ctx->r2 = ctx->r2 | 0X4040;
        goto L_8024965C;
    // 0x80249650: ori         $v0, $v0, 0x4040
    ctx->r2 = ctx->r2 | 0X4040;
L_80249654:
    // 0x80249654: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
L_80249658:
    // 0x80249658: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
L_8024965C:
    // 0x8024965C: sw          $v0, 0x40($s2)
    MEM_W(0X40, ctx->r18) = ctx->r2;
    // 0x80249660: lw          $ra, 0x9C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X9C);
    // 0x80249664: lw          $s2, 0x98($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X98);
    // 0x80249668: lw          $s1, 0x94($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X94);
    // 0x8024966C: lw          $s0, 0x90($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X90);
    // 0x80249670: jr          $ra
    // 0x80249674: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    TRACE_RETURN()
    return;
    // 0x80249674: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    // 0x80249678: nop

    // 0x8024967C: nop

;}
RECOMP_FUNC void func_8024DA78_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024DA78: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8024DA7C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8024DA80: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024DA84: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8024DA88: addiu       $s2, $sp, 0x10
    ctx->r18 = ADD32(ctx->r29, 0X10);
    // 0x8024DA8C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8024DA90: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x8024DA94: addiu       $a1, $a1, 0x6388
    ctx->r5 = ADD32(ctx->r5, 0X6388);
    // 0x8024DA98: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x8024DA9C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8024DAA0: jal         0x8009A3B4
    // 0x8024DAA4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8024DAA4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    after_0:
    // 0x8024DAA8: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8024DAAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024DAB0: beq         $v1, $v0, L_8024DB38
    if (ctx->r3 == ctx->r2) {
        // 0x8024DAB4: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8024DB38;
    }
    // 0x8024DAB4: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8024DAB8: beql        $v0, $zero, L_8024DAD0
    if (ctx->r2 == 0) {
        // 0x8024DABC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8024DAD0;
    }
    goto skip_0;
    // 0x8024DABC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8024DAC0: beq         $v1, $zero, L_8024DAE8
    if (ctx->r3 == 0) {
        // 0x8024DAC4: nop
    
            goto L_8024DAE8;
    }
    // 0x8024DAC4: nop

    // 0x8024DAC8: j           L_8024DBB4
    // 0x8024DACC: nop

        goto L_8024DBB4;
    // 0x8024DACC: nop

L_8024DAD0:
    // 0x8024DAD0: beq         $v1, $v0, L_8024DB68
    if (ctx->r3 == ctx->r2) {
        // 0x8024DAD4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8024DB68;
    }
    // 0x8024DAD4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8024DAD8: beq         $v1, $v0, L_8024DB98
    if (ctx->r3 == ctx->r2) {
        // 0x8024DADC: lui         $v1, 0x80
        ctx->r3 = S32(0X80 << 16);
            goto L_8024DB98;
    }
    // 0x8024DADC: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x8024DAE0: j           L_8024DBB4
    // 0x8024DAE4: nop

        goto L_8024DBB4;
    // 0x8024DAE4: nop

L_8024DAE8:
    // 0x8024DAE8: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x8024DAEC: addiu       $s1, $s1, -0x3A9E
    ctx->r17 = ADD32(ctx->r17, -0X3A9E);
    // 0x8024DAF0: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8024DAF4: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8024DAF8: bne         $v0, $zero, L_8024DB10
    if (ctx->r2 != 0) {
        // 0x8024DAFC: nop
    
            goto L_8024DB10;
    }
    // 0x8024DAFC: nop

    // 0x8024DB00: jal         0x8006033C
    // 0x8024DB04: addiu       $a0, $zero, 0x56
    ctx->r4 = ADD32(0, 0X56);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x8024DB04: addiu       $a0, $zero, 0x56
    ctx->r4 = ADD32(0, 0X56);
    after_1:
    // 0x8024DB08: beq         $v0, $zero, L_8024DB20
    if (ctx->r2 == 0) {
        // 0x8024DB0C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8024DB20;
    }
    // 0x8024DB0C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8024DB10:
    // 0x8024DB10: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8024DB14: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x8024DB18: j           L_8024DBAC
    // 0x8024DB1C: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
        goto L_8024DBAC;
    // 0x8024DB1C: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8024DB20:
    // 0x8024DB20: jal         0x8024DD2C
    // 0x8024DB24: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_8024DD2C_ovl28(rdram, ctx);
        goto after_2;
    // 0x8024DB24: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_2:
    // 0x8024DB28: beq         $v0, $zero, L_8024DBB4
    if (ctx->r2 == 0) {
        // 0x8024DB2C: nop
    
            goto L_8024DBB4;
    }
    // 0x8024DB2C: nop

    // 0x8024DB30: j           L_8024DB88
    // 0x8024DB34: nop

        goto L_8024DB88;
    // 0x8024DB34: nop

L_8024DB38:
    // 0x8024DB38: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8024DB3C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8024DB40: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x8024DB44: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8024DB48: bne         $v0, $zero, L_8024DBB4
    if (ctx->r2 != 0) {
        // 0x8024DB4C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8024DBB4;
    }
    // 0x8024DB4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8024DB50: jal         0x8024DD2C
    // 0x8024DB54: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_8024DD2C_ovl28(rdram, ctx);
        goto after_3;
    // 0x8024DB54: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_3:
    // 0x8024DB58: bne         $v0, $zero, L_8024DB88
    if (ctx->r2 != 0) {
        // 0x8024DB5C: nop
    
            goto L_8024DB88;
    }
    // 0x8024DB5C: nop

    // 0x8024DB60: j           L_8024DBB4
    // 0x8024DB64: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
        goto L_8024DBB4;
    // 0x8024DB64: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_8024DB68:
    // 0x8024DB68: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x8024DB6C: jal         0x800616FC
    // 0x8024DB70: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_4;
    // 0x8024DB70: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_4:
    // 0x8024DB74: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8024DB78: addiu       $v0, $v0, -0x3A9E
    ctx->r2 = ADD32(ctx->r2, -0X3A9E);
    // 0x8024DB7C: lhu         $v1, 0x0($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X0);
    // 0x8024DB80: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x8024DB84: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
L_8024DB88:
    // 0x8024DB88: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8024DB8C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024DB90: j           L_8024DBB4
    // 0x8024DB94: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8024DBB4;
    // 0x8024DB94: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8024DB98:
    // 0x8024DB98: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8024DB9C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8024DBA0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8024DBA4: bne         $v0, $zero, L_8024DBB4
    if (ctx->r2 != 0) {
        // 0x8024DBA8: nop
    
            goto L_8024DBB4;
    }
    // 0x8024DBA8: nop

L_8024DBAC:
    // 0x8024DBAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024DBB0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8024DBB4:
    // 0x8024DBB4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8024DBB8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8024DBBC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8024DBC0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8024DBC4: jr          $ra
    // 0x8024DBC8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8024DBC8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802392B0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802392B0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802392B4: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x802392B8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802392BC: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x802392C0: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x802392C4: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x802392C8: sltiu       $v0, $v1, 0x17
    ctx->r2 = ctx->r3 < 0X17 ? 1 : 0;
    // 0x802392CC: beq         $v0, $zero, L_80239CA0
    if (ctx->r2 == 0) {
        // 0x802392D0: addu        $s1, $a2, $zero
        ctx->r17 = ADD32(ctx->r6, 0);
            goto L_80239CA0;
    }
    // 0x802392D0: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x802392D4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802392D8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x802392DC: addu        $at, $at, $v0
    gpr jr_addend_802392E4 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802392E0: lw          $v0, 0x5F30($at)
    ctx->r2 = ADD32(ctx->r1, 0X5F30);
    // 0x802392E4: jr          $v0
    // 0x802392E8: nop

    switch (jr_addend_802392E4 >> 2) {
        case 0: goto L_802392EC; break;
        case 1: goto L_80239314; break;
        case 2: goto L_80239490; break;
        case 3: goto L_802394C0; break;
        case 4: goto L_802394E0; break;
        case 5: goto L_80239520; break;
        case 6: goto L_80239540; break;
        case 7: goto L_8023961C; break;
        case 8: goto L_802396E4; break;
        case 9: goto L_80239720; break;
        case 10: goto L_80239754; break;
        case 11: goto L_802397DC; break;
        case 12: goto L_80239814; break;
        case 13: goto L_80239840; break;
        case 14: goto L_80239884; break;
        case 15: goto L_802398D0; break;
        case 16: goto L_8023991C; break;
        case 17: goto L_80239944; break;
        case 18: goto L_80239A4C; break;
        case 19: goto L_80239AB0; break;
        case 20: goto L_80239AF0; break;
        case 21: goto L_80239BD0; break;
        case 22: goto L_80239C24; break;
        default: switch_error(__func__, 0x802392E4, 0x80255F30);
    }
    // 0x802392E8: nop

L_802392EC:
    // 0x802392EC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802392F0: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x802392F4: lbu         $v0, 0x9($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X9);
    // 0x802392F8: bne         $v0, $zero, L_80239CA0
    if (ctx->r2 != 0) {
        // 0x802392FC: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_80239CA0;
    }
    // 0x802392FC: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80239300: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80239304: beq         $v1, $v0, L_80239C14
    if (ctx->r3 == ctx->r2) {
        // 0x80239308: nop
    
            goto L_80239C14;
    }
    // 0x80239308: nop

    // 0x8023930C: j           L_80239CA0
    // 0x80239310: nop

        goto L_80239CA0;
    // 0x80239310: nop

L_80239314:
    // 0x80239314: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x80239318: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023931C: bne         $v1, $v0, L_80239CA0
    if (ctx->r3 != ctx->r2) {
        // 0x80239320: addiu       $v0, $zero, 0x6E
        ctx->r2 = ADD32(0, 0X6E);
            goto L_80239CA0;
    }
    // 0x80239320: addiu       $v0, $zero, 0x6E
    ctx->r2 = ADD32(0, 0X6E);
    // 0x80239324: lw          $a1, 0x10($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X10);
    // 0x80239328: beq         $a1, $v0, L_80239408
    if (ctx->r5 == ctx->r2) {
        // 0x8023932C: slti        $v0, $a1, 0x6F
        ctx->r2 = SIGNED(ctx->r5) < 0X6F ? 1 : 0;
            goto L_80239408;
    }
    // 0x8023932C: slti        $v0, $a1, 0x6F
    ctx->r2 = SIGNED(ctx->r5) < 0X6F ? 1 : 0;
    // 0x80239330: beq         $v0, $zero, L_80239370
    if (ctx->r2 == 0) {
        // 0x80239334: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_80239370;
    }
    // 0x80239334: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80239338: beq         $a1, $v0, L_802393E8
    if (ctx->r5 == ctx->r2) {
        // 0x8023933C: slti        $v0, $a1, 0xB
        ctx->r2 = SIGNED(ctx->r5) < 0XB ? 1 : 0;
            goto L_802393E8;
    }
    // 0x8023933C: slti        $v0, $a1, 0xB
    ctx->r2 = SIGNED(ctx->r5) < 0XB ? 1 : 0;
    // 0x80239340: beql        $v0, $zero, L_80239358
    if (ctx->r2 == 0) {
        // 0x80239344: addiu       $v0, $zero, 0x28
        ctx->r2 = ADD32(0, 0X28);
            goto L_80239358;
    }
    goto skip_0;
    // 0x80239344: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    skip_0:
    // 0x80239348: beq         $a1, $v1, L_802393B0
    if (ctx->r5 == ctx->r3) {
        // 0x8023934C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802393B0;
    }
    // 0x8023934C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239350: j           L_80239CA0
    // 0x80239354: nop

        goto L_80239CA0;
    // 0x80239354: nop

L_80239358:
    // 0x80239358: beq         $a1, $v0, L_80239660
    if (ctx->r5 == ctx->r2) {
        // 0x8023935C: addiu       $v0, $zero, 0x5A
        ctx->r2 = ADD32(0, 0X5A);
            goto L_80239660;
    }
    // 0x8023935C: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    // 0x80239360: beq         $a1, $v0, L_802393BC
    if (ctx->r5 == ctx->r2) {
        // 0x80239364: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802393BC;
    }
    // 0x80239364: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239368: j           L_80239CA0
    // 0x8023936C: nop

        goto L_80239CA0;
    // 0x8023936C: nop

L_80239370:
    // 0x80239370: addiu       $v0, $zero, 0xAA
    ctx->r2 = ADD32(0, 0XAA);
    // 0x80239374: beq         $a1, $v0, L_80239444
    if (ctx->r5 == ctx->r2) {
        // 0x80239378: slti        $v0, $a1, 0xAB
        ctx->r2 = SIGNED(ctx->r5) < 0XAB ? 1 : 0;
            goto L_80239444;
    }
    // 0x80239378: slti        $v0, $a1, 0xAB
    ctx->r2 = SIGNED(ctx->r5) < 0XAB ? 1 : 0;
    // 0x8023937C: beq         $v0, $zero, L_80239394
    if (ctx->r2 == 0) {
        // 0x80239380: addiu       $v0, $zero, 0x96
        ctx->r2 = ADD32(0, 0X96);
            goto L_80239394;
    }
    // 0x80239380: addiu       $v0, $zero, 0x96
    ctx->r2 = ADD32(0, 0X96);
    // 0x80239384: beq         $a1, $v0, L_80239428
    if (ctx->r5 == ctx->r2) {
        // 0x80239388: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80239428;
    }
    // 0x80239388: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023938C: j           L_80239CA0
    // 0x80239390: nop

        goto L_80239CA0;
    // 0x80239390: nop

L_80239394:
    // 0x80239394: addiu       $v0, $zero, 0x107
    ctx->r2 = ADD32(0, 0X107);
    // 0x80239398: beq         $a1, $v0, L_80239464
    if (ctx->r5 == ctx->r2) {
        // 0x8023939C: addiu       $v0, $zero, 0x125
        ctx->r2 = ADD32(0, 0X125);
            goto L_80239464;
    }
    // 0x8023939C: addiu       $v0, $zero, 0x125
    ctx->r2 = ADD32(0, 0X125);
    // 0x802393A0: beq         $a1, $v0, L_80239484
    if (ctx->r5 == ctx->r2) {
        // 0x802393A4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80239484;
    }
    // 0x802393A4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802393A8: j           L_80239CA0
    // 0x802393AC: nop

        goto L_80239CA0;
    // 0x802393AC: nop

L_802393B0:
    // 0x802393B0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802393B4: j           L_80239C98
    // 0x802393B8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_80239C98;
    // 0x802393B8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_802393BC:
    // 0x802393BC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802393C0: jal         0x80239CB4
    // 0x802393C4: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    func_80239CB4_ovl28(rdram, ctx);
        goto after_0;
    // 0x802393C4: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    after_0:
    // 0x802393C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802393CC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802393D0: jal         0x80239CDC
    // 0x802393D4: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    func_80239CDC_ovl28(rdram, ctx);
        goto after_1;
    // 0x802393D4: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_1:
    // 0x802393D8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802393DC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802393E0: j           L_80239CA0
    // 0x802393E4: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
        goto L_80239CA0;
    // 0x802393E4: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
L_802393E8:
    // 0x802393E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802393EC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802393F0: jal         0x80239CB4
    // 0x802393F4: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    func_80239CB4_ovl28(rdram, ctx);
        goto after_2;
    // 0x802393F4: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_2:
    // 0x802393F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802393FC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80239400: j           L_80239C98
    // 0x80239404: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_80239C98;
    // 0x80239404: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_80239408:
    // 0x80239408: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023940C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80239410: jal         0x80239CB4
    // 0x80239414: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    func_80239CB4_ovl28(rdram, ctx);
        goto after_3;
    // 0x80239414: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    after_3:
    // 0x80239418: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023941C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80239420: j           L_80239C98
    // 0x80239424: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
        goto L_80239C98;
    // 0x80239424: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
L_80239428:
    // 0x80239428: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023942C: jal         0x80239CB4
    // 0x80239430: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    func_80239CB4_ovl28(rdram, ctx);
        goto after_4;
    // 0x80239430: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_4:
    // 0x80239434: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239438: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023943C: j           L_80239C98
    // 0x80239440: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_80239C98;
    // 0x80239440: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_80239444:
    // 0x80239444: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239448: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023944C: jal         0x80239CB4
    // 0x80239450: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    func_80239CB4_ovl28(rdram, ctx);
        goto after_5;
    // 0x80239450: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    after_5:
    // 0x80239454: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239458: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023945C: j           L_80239C98
    // 0x80239460: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
        goto L_80239C98;
    // 0x80239460: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
L_80239464:
    // 0x80239464: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239468: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023946C: jal         0x80239CB4
    // 0x80239470: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    func_80239CB4_ovl28(rdram, ctx);
        goto after_6;
    // 0x80239470: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_6:
    // 0x80239474: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239478: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023947C: j           L_80239C98
    // 0x80239480: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_80239C98;
    // 0x80239480: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_80239484:
    // 0x80239484: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80239488: j           L_80239C14
    // 0x8023948C: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
        goto L_80239C14;
    // 0x8023948C: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
L_80239490:
    // 0x80239490: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x80239494: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80239498: bne         $v1, $v0, L_80239CA0
    if (ctx->r3 != ctx->r2) {
        // 0x8023949C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80239CA0;
    }
    // 0x8023949C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802394A0: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x802394A4: bne         $v1, $v0, L_80239CA0
    if (ctx->r3 != ctx->r2) {
        // 0x802394A8: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80239CA0;
    }
    // 0x802394A8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802394AC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802394B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802394B4: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    // 0x802394B8: j           L_80239C14
    // 0x802394BC: sb          $v0, 0x12($s1)
    MEM_B(0X12, ctx->r17) = ctx->r2;
        goto L_80239C14;
    // 0x802394BC: sb          $v0, 0x12($s1)
    MEM_B(0X12, ctx->r17) = ctx->r2;
L_802394C0:
    // 0x802394C0: lbu         $v1, 0xA4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA4);
    // 0x802394C4: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x802394C8: bne         $v1, $v0, L_80239CA0
    if (ctx->r3 != ctx->r2) {
        // 0x802394CC: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80239CA0;
    }
    // 0x802394CC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802394D0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802394D4: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x802394D8: j           L_80239C14
    // 0x802394DC: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
        goto L_80239C14;
    // 0x802394DC: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
L_802394E0:
    // 0x802394E0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802394E4: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x802394E8: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x802394EC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802394F0: bne         $v1, $v0, L_80239CA0
    if (ctx->r3 != ctx->r2) {
        // 0x802394F4: addiu       $v0, $zero, 0x9B
        ctx->r2 = ADD32(0, 0X9B);
            goto L_80239CA0;
    }
    // 0x802394F4: addiu       $v0, $zero, 0x9B
    ctx->r2 = ADD32(0, 0X9B);
    // 0x802394F8: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x802394FC: bne         $v1, $v0, L_80239CA0
    if (ctx->r3 != ctx->r2) {
        // 0x80239500: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80239CA0;
    }
    // 0x80239500: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239504: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80239508: jal         0x80239CB4
    // 0x8023950C: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    func_80239CB4_ovl28(rdram, ctx);
        goto after_7;
    // 0x8023950C: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_7:
    // 0x80239510: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239514: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80239518: j           L_80239C0C
    // 0x8023951C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
        goto L_80239C0C;
    // 0x8023951C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
L_80239520:
    // 0x80239520: lbu         $v1, 0xA4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA4);
    // 0x80239524: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x80239528: bne         $v1, $v0, L_80239CA0
    if (ctx->r3 != ctx->r2) {
        // 0x8023952C: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80239CA0;
    }
    // 0x8023952C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80239530: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80239534: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x80239538: j           L_80239C14
    // 0x8023953C: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
        goto L_80239C14;
    // 0x8023953C: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
L_80239540:
    // 0x80239540: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80239544: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80239548: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x8023954C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80239550: bne         $v1, $v0, L_80239CA0
    if (ctx->r3 != ctx->r2) {
        // 0x80239554: addiu       $v0, $zero, 0x136
        ctx->r2 = ADD32(0, 0X136);
            goto L_80239CA0;
    }
    // 0x80239554: addiu       $v0, $zero, 0x136
    ctx->r2 = ADD32(0, 0X136);
    // 0x80239558: lw          $a1, 0x10($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X10);
    // 0x8023955C: beq         $a1, $v0, L_802395DC
    if (ctx->r5 == ctx->r2) {
        // 0x80239560: slti        $v0, $a1, 0x137
        ctx->r2 = SIGNED(ctx->r5) < 0X137 ? 1 : 0;
            goto L_802395DC;
    }
    // 0x80239560: slti        $v0, $a1, 0x137
    ctx->r2 = SIGNED(ctx->r5) < 0X137 ? 1 : 0;
    // 0x80239564: beq         $v0, $zero, L_80239584
    if (ctx->r2 == 0) {
        // 0x80239568: addiu       $v0, $zero, 0xB4
        ctx->r2 = ADD32(0, 0XB4);
            goto L_80239584;
    }
    // 0x80239568: addiu       $v0, $zero, 0xB4
    ctx->r2 = ADD32(0, 0XB4);
    // 0x8023956C: beq         $a1, $v0, L_802395A0
    if (ctx->r5 == ctx->r2) {
        // 0x80239570: addiu       $v0, $zero, 0xC8
        ctx->r2 = ADD32(0, 0XC8);
            goto L_802395A0;
    }
    // 0x80239570: addiu       $v0, $zero, 0xC8
    ctx->r2 = ADD32(0, 0XC8);
    // 0x80239574: beq         $a1, $v0, L_802395C0
    if (ctx->r5 == ctx->r2) {
        // 0x80239578: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802395C0;
    }
    // 0x80239578: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023957C: j           L_80239CA0
    // 0x80239580: nop

        goto L_80239CA0;
    // 0x80239580: nop

L_80239584:
    // 0x80239584: addiu       $v0, $zero, 0x1EA
    ctx->r2 = ADD32(0, 0X1EA);
    // 0x80239588: beq         $a1, $v0, L_802395FC
    if (ctx->r5 == ctx->r2) {
        // 0x8023958C: addiu       $v0, $zero, 0x1F4
        ctx->r2 = ADD32(0, 0X1F4);
            goto L_802395FC;
    }
    // 0x8023958C: addiu       $v0, $zero, 0x1F4
    ctx->r2 = ADD32(0, 0X1F4);
    // 0x80239590: beq         $a1, $v0, L_80239C14
    if (ctx->r5 == ctx->r2) {
        // 0x80239594: nop
    
            goto L_80239C14;
    }
    // 0x80239594: nop

    // 0x80239598: j           L_80239CA0
    // 0x8023959C: nop

        goto L_80239CA0;
    // 0x8023959C: nop

L_802395A0:
    // 0x802395A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802395A4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802395A8: jal         0x80239CB4
    // 0x802395AC: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    func_80239CB4_ovl28(rdram, ctx);
        goto after_8;
    // 0x802395AC: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_8:
    // 0x802395B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802395B4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802395B8: j           L_80239C98
    // 0x802395BC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_80239C98;
    // 0x802395BC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_802395C0:
    // 0x802395C0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802395C4: jal         0x80239CB4
    // 0x802395C8: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    func_80239CB4_ovl28(rdram, ctx);
        goto after_9;
    // 0x802395C8: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_9:
    // 0x802395CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802395D0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802395D4: j           L_80239C98
    // 0x802395D8: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
        goto L_80239C98;
    // 0x802395D8: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
L_802395DC:
    // 0x802395DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802395E0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802395E4: jal         0x80239CB4
    // 0x802395E8: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    func_80239CB4_ovl28(rdram, ctx);
        goto after_10;
    // 0x802395E8: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_10:
    // 0x802395EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802395F0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802395F4: j           L_80239C98
    // 0x802395F8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_80239C98;
    // 0x802395F8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_802395FC:
    // 0x802395FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239600: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80239604: jal         0x80239CB4
    // 0x80239608: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80239CB4_ovl28(rdram, ctx);
        goto after_11;
    // 0x80239608: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_11:
    // 0x8023960C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239610: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80239614: j           L_80239C98
    // 0x80239618: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
        goto L_80239C98;
    // 0x80239618: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
L_8023961C:
    // 0x8023961C: lw          $a1, 0x10($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X10);
    // 0x80239620: addiu       $v0, $zero, 0x21C
    ctx->r2 = ADD32(0, 0X21C);
    // 0x80239624: beq         $a1, $v0, L_80239678
    if (ctx->r5 == ctx->r2) {
        // 0x80239628: slti        $v0, $a1, 0x21D
        ctx->r2 = SIGNED(ctx->r5) < 0X21D ? 1 : 0;
            goto L_80239678;
    }
    // 0x80239628: slti        $v0, $a1, 0x21D
    ctx->r2 = SIGNED(ctx->r5) < 0X21D ? 1 : 0;
    // 0x8023962C: beq         $v0, $zero, L_80239644
    if (ctx->r2 == 0) {
        // 0x80239630: addiu       $v0, $zero, 0x212
        ctx->r2 = ADD32(0, 0X212);
            goto L_80239644;
    }
    // 0x80239630: addiu       $v0, $zero, 0x212
    ctx->r2 = ADD32(0, 0X212);
    // 0x80239634: beq         $a1, $v0, L_80239664
    if (ctx->r5 == ctx->r2) {
        // 0x80239638: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80239664;
    }
    // 0x80239638: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023963C: j           L_80239CA0
    // 0x80239640: nop

        goto L_80239CA0;
    // 0x80239640: nop

L_80239644:
    // 0x80239644: addiu       $v0, $zero, 0x244
    ctx->r2 = ADD32(0, 0X244);
    // 0x80239648: beq         $a1, $v0, L_80239698
    if (ctx->r5 == ctx->r2) {
        // 0x8023964C: addiu       $v0, $zero, 0x24E
        ctx->r2 = ADD32(0, 0X24E);
            goto L_80239698;
    }
    // 0x8023964C: addiu       $v0, $zero, 0x24E
    ctx->r2 = ADD32(0, 0X24E);
    // 0x80239650: beq         $a1, $v0, L_802396B8
    if (ctx->r5 == ctx->r2) {
        // 0x80239654: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802396B8;
    }
    // 0x80239654: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239658: j           L_80239CA0
    // 0x8023965C: nop

        goto L_80239CA0;
    // 0x8023965C: nop

L_80239660:
    // 0x80239660: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80239664:
    // 0x80239664: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80239668: jal         0x80239CB4
    // 0x8023966C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_80239CB4_ovl28(rdram, ctx);
        goto after_12;
    // 0x8023966C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_12:
    // 0x80239670: j           L_80239CA0
    // 0x80239674: nop

        goto L_80239CA0;
    // 0x80239674: nop

L_80239678:
    // 0x80239678: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023967C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80239680: jal         0x80239CB4
    // 0x80239684: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    func_80239CB4_ovl28(rdram, ctx);
        goto after_13;
    // 0x80239684: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_13:
    // 0x80239688: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023968C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80239690: j           L_80239C98
    // 0x80239694: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
        goto L_80239C98;
    // 0x80239694: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
L_80239698:
    // 0x80239698: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023969C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802396A0: jal         0x80239CB4
    // 0x802396A4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80239CB4_ovl28(rdram, ctx);
        goto after_14;
    // 0x802396A4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_14:
    // 0x802396A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802396AC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802396B0: j           L_80239C98
    // 0x802396B4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
        goto L_80239C98;
    // 0x802396B4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
L_802396B8:
    // 0x802396B8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802396BC: jal         0x80239CB4
    // 0x802396C0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_80239CB4_ovl28(rdram, ctx);
        goto after_15;
    // 0x802396C0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_15:
    // 0x802396C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802396C8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802396CC: jal         0x80239CDC
    // 0x802396D0: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    func_80239CDC_ovl28(rdram, ctx);
        goto after_16;
    // 0x802396D0: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    after_16:
    // 0x802396D4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802396D8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802396DC: j           L_80239C14
    // 0x802396E0: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
        goto L_80239C14;
    // 0x802396E0: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
L_802396E4:
    // 0x802396E4: lbu         $v1, 0xA4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA4);
    // 0x802396E8: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
    // 0x802396EC: bne         $v1, $v0, L_80239CA0
    if (ctx->r3 != ctx->r2) {
        // 0x802396F0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80239CA0;
    }
    // 0x802396F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802396F4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802396F8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x802396FC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80239700: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80239704: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
    // 0x80239708: jal         0x80239CB4
    // 0x8023970C: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
    func_80239CB4_ovl28(rdram, ctx);
        goto after_17;
    // 0x8023970C: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
    after_17:
    // 0x80239710: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239714: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80239718: j           L_80239C0C
    // 0x8023971C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
        goto L_80239C0C;
    // 0x8023971C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
L_80239720:
    // 0x80239720: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80239724: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80239728: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x8023972C: addiu       $v0, $zero, 0x28F
    ctx->r2 = ADD32(0, 0X28F);
    // 0x80239730: bne         $v1, $v0, L_80239CA0
    if (ctx->r3 != ctx->r2) {
        // 0x80239734: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80239CA0;
    }
    // 0x80239734: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239738: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023973C: jal         0x80239CB4
    // 0x80239740: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_80239CB4_ovl28(rdram, ctx);
        goto after_18;
    // 0x80239740: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_18:
    // 0x80239744: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239748: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023974C: j           L_80239C0C
    // 0x80239750: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
        goto L_80239C0C;
    // 0x80239750: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
L_80239754:
    // 0x80239754: lbu         $v0, 0xA4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA4);
    // 0x80239758: sltiu       $v0, $v0, 0x25
    ctx->r2 = ctx->r2 < 0X25 ? 1 : 0;
    // 0x8023975C: bne         $v0, $zero, L_80239CA0
    if (ctx->r2 != 0) {
        // 0x80239760: addiu       $a0, $sp, 0x18
        ctx->r4 = ADD32(ctx->r29, 0X18);
            goto L_80239CA0;
    }
    // 0x80239760: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x80239764: addiu       $a1, $zero, 0xC00
    ctx->r5 = ADD32(0, 0XC00);
    // 0x80239768: addiu       $a2, $zero, 0xA4
    ctx->r6 = ADD32(0, 0XA4);
    // 0x8023976C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80239770: jal         0x8004DC2C
    // 0x80239774: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8004DC2C_2902C(rdram, ctx);
        goto after_19;
    // 0x80239774: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_19:
    // 0x80239778: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x8023977C: jal         0x8004DD04
    // 0x80239780: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_8004DD04_29104(rdram, ctx);
        goto after_20;
    // 0x80239780: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_20:
    // 0x80239784: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x80239788: lhu         $v1, 0x28($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X28);
    // 0x8023978C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80239790: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80239794: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x80239798: lhu         $v1, 0x2C($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X2C);
    // 0x8023979C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802397A0: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x802397A4: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x802397A8: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x802397AC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802397B0: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x802397B4: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x802397B8: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x802397BC: lb          $a0, 0xA7($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XA7);
    // 0x802397C0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802397C4: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x802397C8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802397CC: beq         $a0, $v0, L_80239C14
    if (ctx->r4 == ctx->r2) {
        // 0x802397D0: nop
    
            goto L_80239C14;
    }
    // 0x802397D0: nop

    // 0x802397D4: j           L_80239CA0
    // 0x802397D8: nop

        goto L_80239CA0;
    // 0x802397D8: nop

L_802397DC:
    // 0x802397DC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802397E0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802397E4: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    // 0x802397E8: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x802397EC: lbu         $a0, 0x9($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X9);
    // 0x802397F0: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
    // 0x802397F4: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x802397F8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x802397FC: addiu       $v1, $v1, 0xA
    ctx->r3 = ADD32(ctx->r3, 0XA);
    // 0x80239800: sh          $v1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r3;
    // 0x80239804: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80239808: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x8023980C: j           L_80239CA0
    // 0x80239810: sb          $a0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r4;
        goto L_80239CA0;
    // 0x80239810: sb          $a0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r4;
L_80239814:
    // 0x80239814: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x80239818: addiu       $v0, $v0, 0xA
    ctx->r2 = ADD32(ctx->r2, 0XA);
    // 0x8023981C: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80239820: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80239824: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80239828: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x8023982C: addiu       $v0, $zero, 0x2CE
    ctx->r2 = ADD32(0, 0X2CE);
    // 0x80239830: beq         $v1, $v0, L_80239C14
    if (ctx->r3 == ctx->r2) {
        // 0x80239834: nop
    
            goto L_80239C14;
    }
    // 0x80239834: nop

    // 0x80239838: j           L_80239CA0
    // 0x8023983C: nop

        goto L_80239CA0;
    // 0x8023983C: nop

L_80239840:
    // 0x80239840: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x80239844: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80239848: bne         $v1, $v0, L_80239CA0
    if (ctx->r3 != ctx->r2) {
        // 0x8023984C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80239CA0;
    }
    // 0x8023984C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80239850: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80239854: bne         $v1, $v0, L_80239CA0
    if (ctx->r3 != ctx->r2) {
        // 0x80239858: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80239CA0;
    }
    // 0x80239858: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023985C: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x80239860: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80239864: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80239868: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8023986C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80239870: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80239874: jal         0x8004DA90
    // 0x80239878: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_21;
    // 0x80239878: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
    after_21:
    // 0x8023987C: j           L_80239C14
    // 0x80239880: nop

        goto L_80239C14;
    // 0x80239880: nop

L_80239884:
    // 0x80239884: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239888: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x8023988C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80239890: jal         0x8004DA90
    // 0x80239894: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_22;
    // 0x80239894: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_22:
    // 0x80239898: lbu         $v1, 0xA4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA4);
    // 0x8023989C: addiu       $v0, $zero, 0x27
    ctx->r2 = ADD32(0, 0X27);
    // 0x802398A0: bne         $v1, $v0, L_80239CA0
    if (ctx->r3 != ctx->r2) {
        // 0x802398A4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80239CA0;
    }
    // 0x802398A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802398A8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802398AC: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x802398B0: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x802398B4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802398B8: jal         0x80239CB4
    // 0x802398BC: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    func_80239CB4_ovl28(rdram, ctx);
        goto after_23;
    // 0x802398BC: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    after_23:
    // 0x802398C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802398C4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802398C8: j           L_80239C0C
    // 0x802398CC: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
        goto L_80239C0C;
    // 0x802398CC: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
L_802398D0:
    // 0x802398D0: lbu         $v0, 0xA4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA4);
    // 0x802398D4: sltiu       $v0, $v0, 0x28
    ctx->r2 = ctx->r2 < 0X28 ? 1 : 0;
    // 0x802398D8: beq         $v0, $zero, L_802398F0
    if (ctx->r2 == 0) {
        // 0x802398DC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802398F0;
    }
    // 0x802398DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802398E0: addiu       $a1, $zero, 0x2E
    ctx->r5 = ADD32(0, 0X2E);
    // 0x802398E4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802398E8: jal         0x8004DA90
    // 0x802398EC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_24;
    // 0x802398EC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_24:
L_802398F0:
    // 0x802398F0: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x802398F4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802398F8: bne         $v1, $v0, L_80239CA0
    if (ctx->r3 != ctx->r2) {
        // 0x802398FC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80239CA0;
    }
    // 0x802398FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239900: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80239904: jal         0x80239CB4
    // 0x80239908: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80239CB4_ovl28(rdram, ctx);
        goto after_25;
    // 0x80239908: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_25:
    // 0x8023990C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239910: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80239914: j           L_80239C0C
    // 0x80239918: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
        goto L_80239C0C;
    // 0x80239918: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
L_8023991C:
    // 0x8023991C: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x80239920: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80239924: bne         $v1, $v0, L_80239CA0
    if (ctx->r3 != ctx->r2) {
        // 0x80239928: addiu       $v0, $zero, 0x73
        ctx->r2 = ADD32(0, 0X73);
            goto L_80239CA0;
    }
    // 0x80239928: addiu       $v0, $zero, 0x73
    ctx->r2 = ADD32(0, 0X73);
    // 0x8023992C: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80239930: bne         $v1, $v0, L_80239CA0
    if (ctx->r3 != ctx->r2) {
        // 0x80239934: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_80239CA0;
    }
    // 0x80239934: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80239938: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8023993C: j           L_80239C14
    // 0x80239940: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
        goto L_80239C14;
    // 0x80239940: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
L_80239944:
    // 0x80239944: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x80239948: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023994C: bne         $v1, $v0, L_80239A10
    if (ctx->r3 != ctx->r2) {
        // 0x80239950: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80239A10;
    }
    // 0x80239950: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80239954: lw          $a1, 0x10($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X10);
    // 0x80239958: addiu       $v0, $zero, 0xB9
    ctx->r2 = ADD32(0, 0XB9);
    // 0x8023995C: beq         $a1, $v0, L_802399B4
    if (ctx->r5 == ctx->r2) {
        // 0x80239960: slti        $v0, $a1, 0xBA
        ctx->r2 = SIGNED(ctx->r5) < 0XBA ? 1 : 0;
            goto L_802399B4;
    }
    // 0x80239960: slti        $v0, $a1, 0xBA
    ctx->r2 = SIGNED(ctx->r5) < 0XBA ? 1 : 0;
    // 0x80239964: beq         $v0, $zero, L_8023997C
    if (ctx->r2 == 0) {
        // 0x80239968: addiu       $v0, $zero, 0xA5
        ctx->r2 = ADD32(0, 0XA5);
            goto L_8023997C;
    }
    // 0x80239968: addiu       $v0, $zero, 0xA5
    ctx->r2 = ADD32(0, 0XA5);
    // 0x8023996C: beq         $a1, $v0, L_80239998
    if (ctx->r5 == ctx->r2) {
        // 0x80239970: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80239998;
    }
    // 0x80239970: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239974: j           L_80239CA0
    // 0x80239978: nop

        goto L_80239CA0;
    // 0x80239978: nop

L_8023997C:
    // 0x8023997C: addiu       $v0, $zero, 0xC8
    ctx->r2 = ADD32(0, 0XC8);
    // 0x80239980: beq         $a1, $v0, L_802399D4
    if (ctx->r5 == ctx->r2) {
        // 0x80239984: addiu       $v0, $zero, 0xF0
        ctx->r2 = ADD32(0, 0XF0);
            goto L_802399D4;
    }
    // 0x80239984: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
    // 0x80239988: beq         $a1, $v0, L_802399F4
    if (ctx->r5 == ctx->r2) {
        // 0x8023998C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802399F4;
    }
    // 0x8023998C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239990: j           L_80239CA0
    // 0x80239994: nop

        goto L_80239CA0;
    // 0x80239994: nop

L_80239998:
    // 0x80239998: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023999C: jal         0x80239CB4
    // 0x802399A0: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    func_80239CB4_ovl28(rdram, ctx);
        goto after_26;
    // 0x802399A0: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    after_26:
    // 0x802399A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802399A8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802399AC: j           L_80239C98
    // 0x802399B0: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
        goto L_80239C98;
    // 0x802399B0: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
L_802399B4:
    // 0x802399B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802399B8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802399BC: jal         0x80239CB4
    // 0x802399C0: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_80239CB4_ovl28(rdram, ctx);
        goto after_27;
    // 0x802399C0: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_27:
    // 0x802399C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802399C8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802399CC: j           L_80239C98
    // 0x802399D0: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
        goto L_80239C98;
    // 0x802399D0: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
L_802399D4:
    // 0x802399D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802399D8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802399DC: jal         0x80239CB4
    // 0x802399E0: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    func_80239CB4_ovl28(rdram, ctx);
        goto after_28;
    // 0x802399E0: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    after_28:
    // 0x802399E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802399E8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802399EC: j           L_80239C98
    // 0x802399F0: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
        goto L_80239C98;
    // 0x802399F0: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
L_802399F4:
    // 0x802399F4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802399F8: jal         0x80239CB4
    // 0x802399FC: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_80239CB4_ovl28(rdram, ctx);
        goto after_29;
    // 0x802399FC: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_29:
    // 0x80239A00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239A04: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80239A08: j           L_80239C98
    // 0x80239A0C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
        goto L_80239C98;
    // 0x80239A0C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
L_80239A10:
    // 0x80239A10: bne         $v1, $v0, L_80239CA0
    if (ctx->r3 != ctx->r2) {
        // 0x80239A14: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80239CA0;
    }
    // 0x80239A14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80239A18: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80239A1C: bne         $v1, $v0, L_80239CA0
    if (ctx->r3 != ctx->r2) {
        // 0x80239A20: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80239CA0;
    }
    // 0x80239A20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239A24: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80239A28: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80239A2C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80239A30: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80239A34: jal         0x80239CB4
    // 0x80239A38: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    func_80239CB4_ovl28(rdram, ctx);
        goto after_30;
    // 0x80239A38: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    after_30:
    // 0x80239A3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239A40: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80239A44: j           L_80239C0C
    // 0x80239A48: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
        goto L_80239C0C;
    // 0x80239A48: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
L_80239A4C:
    // 0x80239A4C: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x80239A50: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80239A54: bne         $v1, $v0, L_80239A98
    if (ctx->r3 != ctx->r2) {
        // 0x80239A58: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80239A98;
    }
    // 0x80239A58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239A5C: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80239A60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80239A64: bne         $v1, $v0, L_80239A9C
    if (ctx->r3 != ctx->r2) {
        // 0x80239A68: addiu       $a1, $zero, 0xA4
        ctx->r5 = ADD32(0, 0XA4);
            goto L_80239A9C;
    }
    // 0x80239A68: addiu       $a1, $zero, 0xA4
    ctx->r5 = ADD32(0, 0XA4);
    // 0x80239A6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239A70: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80239A74: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x80239A78: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80239A7C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80239A80: jal         0x80239CB4
    // 0x80239A84: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    func_80239CB4_ovl28(rdram, ctx);
        goto after_31;
    // 0x80239A84: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    after_31:
    // 0x80239A88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239A8C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80239A90: j           L_80239C0C
    // 0x80239A94: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
        goto L_80239C0C;
    // 0x80239A94: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
L_80239A98:
    // 0x80239A98: addiu       $a1, $zero, 0xA4
    ctx->r5 = ADD32(0, 0XA4);
L_80239A9C:
    // 0x80239A9C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80239AA0: jal         0x8004DA90
    // 0x80239AA4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_32;
    // 0x80239AA4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_32:
    // 0x80239AA8: j           L_80239CA0
    // 0x80239AAC: nop

        goto L_80239CA0;
    // 0x80239AAC: nop

L_80239AB0:
    // 0x80239AB0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80239AB4: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80239AB8: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x80239ABC: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80239AC0: bne         $v1, $v0, L_80239CA0
    if (ctx->r3 != ctx->r2) {
        // 0x80239AC4: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_80239CA0;
    }
    // 0x80239AC4: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80239AC8: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80239ACC: bne         $v1, $v0, L_80239CA0
    if (ctx->r3 != ctx->r2) {
        // 0x80239AD0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80239CA0;
    }
    // 0x80239AD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239AD4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80239AD8: jal         0x80239CB4
    // 0x80239ADC: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    func_80239CB4_ovl28(rdram, ctx);
        goto after_33;
    // 0x80239ADC: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    after_33:
    // 0x80239AE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239AE4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80239AE8: j           L_80239C0C
    // 0x80239AEC: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
        goto L_80239C0C;
    // 0x80239AEC: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
L_80239AF0:
    // 0x80239AF0: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x80239AF4: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80239AF8: bne         $v1, $v0, L_80239B94
    if (ctx->r3 != ctx->r2) {
        // 0x80239AFC: addiu       $v0, $zero, 0xC
        ctx->r2 = ADD32(0, 0XC);
            goto L_80239B94;
    }
    // 0x80239AFC: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80239B00: lw          $a1, 0x10($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X10);
    // 0x80239B04: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80239B08: beq         $a1, $v0, L_80239B58
    if (ctx->r5 == ctx->r2) {
        // 0x80239B0C: slti        $v0, $a1, 0x3D
        ctx->r2 = SIGNED(ctx->r5) < 0X3D ? 1 : 0;
            goto L_80239B58;
    }
    // 0x80239B0C: slti        $v0, $a1, 0x3D
    ctx->r2 = SIGNED(ctx->r5) < 0X3D ? 1 : 0;
    // 0x80239B10: beq         $v0, $zero, L_80239B28
    if (ctx->r2 == 0) {
        // 0x80239B14: addiu       $v0, $zero, 0x28
        ctx->r2 = ADD32(0, 0X28);
            goto L_80239B28;
    }
    // 0x80239B14: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x80239B18: beq         $a1, $v0, L_80239B3C
    if (ctx->r5 == ctx->r2) {
        // 0x80239B1C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80239B3C;
    }
    // 0x80239B1C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239B20: j           L_80239CA0
    // 0x80239B24: nop

        goto L_80239CA0;
    // 0x80239B24: nop

L_80239B28:
    // 0x80239B28: addiu       $v0, $zero, 0x5F
    ctx->r2 = ADD32(0, 0X5F);
    // 0x80239B2C: beq         $a1, $v0, L_80239B78
    if (ctx->r5 == ctx->r2) {
        // 0x80239B30: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80239B78;
    }
    // 0x80239B30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239B34: j           L_80239CA0
    // 0x80239B38: nop

        goto L_80239CA0;
    // 0x80239B38: nop

L_80239B3C:
    // 0x80239B3C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80239B40: jal         0x80239CB4
    // 0x80239B44: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_80239CB4_ovl28(rdram, ctx);
        goto after_34;
    // 0x80239B44: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_34:
    // 0x80239B48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239B4C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80239B50: j           L_80239C98
    // 0x80239B54: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
        goto L_80239C98;
    // 0x80239B54: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
L_80239B58:
    // 0x80239B58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239B5C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80239B60: jal         0x80239CB4
    // 0x80239B64: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    func_80239CB4_ovl28(rdram, ctx);
        goto after_35;
    // 0x80239B64: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    after_35:
    // 0x80239B68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239B6C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80239B70: j           L_80239C98
    // 0x80239B74: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
        goto L_80239C98;
    // 0x80239B74: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
L_80239B78:
    // 0x80239B78: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80239B7C: jal         0x80239CB4
    // 0x80239B80: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_80239CB4_ovl28(rdram, ctx);
        goto after_36;
    // 0x80239B80: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_36:
    // 0x80239B84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239B88: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80239B8C: j           L_80239C98
    // 0x80239B90: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
        goto L_80239C98;
    // 0x80239B90: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
L_80239B94:
    // 0x80239B94: bne         $v1, $v0, L_80239CA0
    if (ctx->r3 != ctx->r2) {
        // 0x80239B98: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80239CA0;
    }
    // 0x80239B98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80239B9C: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80239BA0: bne         $v1, $v0, L_80239CA0
    if (ctx->r3 != ctx->r2) {
        // 0x80239BA4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80239CA0;
    }
    // 0x80239BA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239BA8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80239BAC: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x80239BB0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80239BB4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80239BB8: jal         0x80239CB4
    // 0x80239BBC: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    func_80239CB4_ovl28(rdram, ctx);
        goto after_37;
    // 0x80239BBC: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    after_37:
    // 0x80239BC0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239BC4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80239BC8: j           L_80239C0C
    // 0x80239BCC: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
        goto L_80239C0C;
    // 0x80239BCC: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
L_80239BD0:
    // 0x80239BD0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80239BD4: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80239BD8: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x80239BDC: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80239BE0: bne         $v1, $v0, L_80239CA0
    if (ctx->r3 != ctx->r2) {
        // 0x80239BE4: addiu       $v0, $zero, 0x1E
        ctx->r2 = ADD32(0, 0X1E);
            goto L_80239CA0;
    }
    // 0x80239BE4: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80239BE8: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80239BEC: bne         $v1, $v0, L_80239CA0
    if (ctx->r3 != ctx->r2) {
        // 0x80239BF0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80239CA0;
    }
    // 0x80239BF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239BF4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80239BF8: jal         0x80239CB4
    // 0x80239BFC: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_80239CB4_ovl28(rdram, ctx);
        goto after_38;
    // 0x80239BFC: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_38:
    // 0x80239C00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239C04: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80239C08: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
L_80239C0C:
    // 0x80239C0C: jal         0x80239CDC
    // 0x80239C10: nop

    func_80239CDC_ovl28(rdram, ctx);
        goto after_39;
    // 0x80239C10: nop

    after_39:
L_80239C14:
    // 0x80239C14: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80239C18: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80239C1C: j           L_80239CA0
    // 0x80239C20: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80239CA0;
    // 0x80239C20: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80239C24:
    // 0x80239C24: lw          $a1, 0x10($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X10);
    // 0x80239C28: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x80239C2C: beq         $a1, $v0, L_80239C60
    if (ctx->r5 == ctx->r2) {
        // 0x80239C30: slti        $v0, $a1, 0x65
        ctx->r2 = SIGNED(ctx->r5) < 0X65 ? 1 : 0;
            goto L_80239C60;
    }
    // 0x80239C30: slti        $v0, $a1, 0x65
    ctx->r2 = SIGNED(ctx->r5) < 0X65 ? 1 : 0;
    // 0x80239C34: beq         $v0, $zero, L_80239C4C
    if (ctx->r2 == 0) {
        // 0x80239C38: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_80239C4C;
    }
    // 0x80239C38: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x80239C3C: beq         $a1, $v0, L_80239C80
    if (ctx->r5 == ctx->r2) {
        // 0x80239C40: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80239C80;
    }
    // 0x80239C40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239C44: j           L_80239CA0
    // 0x80239C48: nop

        goto L_80239CA0;
    // 0x80239C48: nop

L_80239C4C:
    // 0x80239C4C: addiu       $v0, $zero, 0x96
    ctx->r2 = ADD32(0, 0X96);
    // 0x80239C50: beq         $a1, $v0, L_80239C80
    if (ctx->r5 == ctx->r2) {
        // 0x80239C54: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80239C80;
    }
    // 0x80239C54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239C58: j           L_80239CA0
    // 0x80239C5C: nop

        goto L_80239CA0;
    // 0x80239C5C: nop

L_80239C60:
    // 0x80239C60: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239C64: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80239C68: jal         0x80239CB4
    // 0x80239C6C: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_80239CB4_ovl28(rdram, ctx);
        goto after_40;
    // 0x80239C6C: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_40:
    // 0x80239C70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239C74: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80239C78: j           L_80239C98
    // 0x80239C7C: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
        goto L_80239C98;
    // 0x80239C7C: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
L_80239C80:
    // 0x80239C80: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80239C84: jal         0x80239CB4
    // 0x80239C88: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    func_80239CB4_ovl28(rdram, ctx);
        goto after_41;
    // 0x80239C88: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_41:
    // 0x80239C8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239C90: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80239C94: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
L_80239C98:
    // 0x80239C98: jal         0x80239CDC
    // 0x80239C9C: nop

    func_80239CDC_ovl28(rdram, ctx);
        goto after_42;
    // 0x80239C9C: nop

    after_42:
L_80239CA0:
    // 0x80239CA0: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x80239CA4: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80239CA8: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80239CAC: jr          $ra
    // 0x80239CB0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80239CB0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80236DEC_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236DEC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80236DF0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80236DF4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80236DF8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236DFC: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x80236E00: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80236E04: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x80236E08: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x80236E0C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80236E10: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80236E14: jal         0x8009A3B4
    // 0x80236E18: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80236E18: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80236E1C: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x80236E20: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x80236E24: jal         0x8009A3B4
    // 0x80236E28: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80236E28: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80236E2C: addiu       $a0, $s1, 0x5C
    ctx->r4 = ADD32(ctx->r17, 0X5C);
    // 0x80236E30: addiu       $a1, $s1, 0x54
    ctx->r5 = ADD32(ctx->r17, 0X54);
    // 0x80236E34: jal         0x8009A3B4
    // 0x80236E38: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80236E38: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80236E3C: lbu         $v0, 0xAC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAC);
    // 0x80236E40: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80236E44: sb          $v0, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r2;
    // 0x80236E48: sltiu       $v0, $v1, 0x11
    ctx->r2 = ctx->r3 < 0X11 ? 1 : 0;
    // 0x80236E4C: beq         $v0, $zero, L_802376D0
    if (ctx->r2 == 0) {
        // 0x80236E50: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_802376D0;
    }
    // 0x80236E50: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80236E54: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80236E58: addu        $at, $at, $v0
    gpr jr_addend_80236E60 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80236E5C: lw          $v0, 0x5E28($at)
    ctx->r2 = ADD32(ctx->r1, 0X5E28);
    // 0x80236E60: jr          $v0
    // 0x80236E64: nop

    switch (jr_addend_80236E60 >> 2) {
        case 0: goto L_80236E68; break;
        case 1: goto L_80236E98; break;
        case 2: goto L_80236F9C; break;
        case 3: goto L_80236FE4; break;
        case 4: goto L_802370CC; break;
        case 5: goto L_80237170; break;
        case 6: goto L_802371B8; break;
        case 7: goto L_802372C4; break;
        case 8: goto L_80237328; break;
        case 9: goto L_802373A0; break;
        case 10: goto L_80237420; break;
        case 11: goto L_80237450; break;
        case 12: goto L_80237484; break;
        case 13: goto L_80237530; break;
        case 14: goto L_802375B0; break;
        case 15: goto L_802375E0; break;
        case 16: goto L_80237638; break;
        default: switch_error(__func__, 0x80236E60, 0x80255E28);
    }
    // 0x80236E64: nop

L_80236E68:
    // 0x80236E68: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80236E6C: sb          $v0, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r2;
    // 0x80236E70: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80236E74: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80236E78: bne         $v1, $v0, L_802376D4
    if (ctx->r3 != ctx->r2) {
        // 0x80236E7C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802376D4;
    }
    // 0x80236E7C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80236E80: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x80236E84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236E88: beq         $v1, $v0, L_80237628
    if (ctx->r3 == ctx->r2) {
        // 0x80236E8C: nop
    
            goto L_80237628;
    }
    // 0x80236E8C: nop

    // 0x80236E90: j           L_802376D4
    // 0x80236E94: nop

        goto L_802376D4;
    // 0x80236E94: nop

L_80236E98:
    // 0x80236E98: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80236E9C: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80236EA0: bne         $v1, $v0, L_80236F24
    if (ctx->r3 != ctx->r2) {
        // 0x80236EA4: addiu       $v0, $zero, 0xC
        ctx->r2 = ADD32(0, 0XC);
            goto L_80236F24;
    }
    // 0x80236EA4: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80236EA8: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    // 0x80236EAC: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80236EB0: beq         $a1, $v0, L_80236EF8
    if (ctx->r5 == ctx->r2) {
        // 0x80236EB4: slti        $v0, $a1, 0x15
        ctx->r2 = SIGNED(ctx->r5) < 0X15 ? 1 : 0;
            goto L_80236EF8;
    }
    // 0x80236EB4: slti        $v0, $a1, 0x15
    ctx->r2 = SIGNED(ctx->r5) < 0X15 ? 1 : 0;
    // 0x80236EB8: beq         $v0, $zero, L_80236ED0
    if (ctx->r2 == 0) {
        // 0x80236EBC: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_80236ED0;
    }
    // 0x80236EBC: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80236EC0: beq         $a1, $v0, L_80236EEC
    if (ctx->r5 == ctx->r2) {
        // 0x80236EC4: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80236EEC;
    }
    // 0x80236EC4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80236EC8: j           L_802376D0
    // 0x80236ECC: nop

        goto L_802376D0;
    // 0x80236ECC: nop

L_80236ED0:
    // 0x80236ED0: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80236ED4: beq         $a1, $v0, L_80236F08
    if (ctx->r5 == ctx->r2) {
        // 0x80236ED8: addiu       $v0, $zero, 0x64
        ctx->r2 = ADD32(0, 0X64);
            goto L_80236F08;
    }
    // 0x80236ED8: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x80236EDC: beq         $a1, $v0, L_80236F18
    if (ctx->r5 == ctx->r2) {
        // 0x80236EE0: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80236F18;
    }
    // 0x80236EE0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80236EE4: j           L_802376D0
    // 0x80236EE8: nop

        goto L_802376D0;
    // 0x80236EE8: nop

L_80236EEC:
    // 0x80236EEC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80236EF0: j           L_802376C8
    // 0x80236EF4: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
        goto L_802376C8;
    // 0x80236EF4: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
L_80236EF8:
    // 0x80236EF8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80236EFC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80236F00: j           L_802376C8
    // 0x80236F04: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_802376C8;
    // 0x80236F04: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_80236F08:
    // 0x80236F08: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80236F0C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80236F10: j           L_802376C8
    // 0x80236F14: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
        goto L_802376C8;
    // 0x80236F14: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
L_80236F18:
    // 0x80236F18: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80236F1C: j           L_802376C8
    // 0x80236F20: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_802376C8;
    // 0x80236F20: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_80236F24:
    // 0x80236F24: bne         $v1, $v0, L_80236F54
    if (ctx->r3 != ctx->r2) {
        // 0x80236F28: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80236F54;
    }
    // 0x80236F28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236F2C: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x80236F30: bne         $v1, $v0, L_80236F54
    if (ctx->r3 != ctx->r2) {
        // 0x80236F34: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80236F54;
    }
    // 0x80236F34: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80236F38: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80236F3C: jal         0x80237D60
    // 0x80236F40: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80237D60_ovl28(rdram, ctx);
        goto after_3;
    // 0x80236F40: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_3:
    // 0x80236F44: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80236F48: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80236F4C: j           L_802376C8
    // 0x80236F50: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
        goto L_802376C8;
    // 0x80236F50: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_80236F54:
    // 0x80236F54: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80236F58: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x80236F5C: bne         $v1, $v0, L_802376D4
    if (ctx->r3 != ctx->r2) {
        // 0x80236F60: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802376D4;
    }
    // 0x80236F60: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80236F64: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x80236F68: addiu       $v0, $zero, 0x12C
    ctx->r2 = ADD32(0, 0X12C);
    // 0x80236F6C: bne         $v1, $v0, L_802376D4
    if (ctx->r3 != ctx->r2) {
        // 0x80236F70: addu        $a1, $s2, $zero
        ctx->r5 = ADD32(ctx->r18, 0);
            goto L_802376D4;
    }
    // 0x80236F70: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80236F74: jal         0x80237D60
    // 0x80236F78: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    func_80237D60_ovl28(rdram, ctx);
        goto after_4;
    // 0x80236F78: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    after_4:
    // 0x80236F7C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80236F80: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80236F84: jal         0x80237D88
    // 0x80236F88: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    func_80237D88_ovl28(rdram, ctx);
        goto after_5;
    // 0x80236F88: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    after_5:
    // 0x80236F8C: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x80236F90: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x80236F94: j           L_80237628
    // 0x80236F98: sh          $zero, 0x2($s2)
    MEM_H(0X2, ctx->r18) = 0;
        goto L_80237628;
    // 0x80236F98: sh          $zero, 0x2($s2)
    MEM_H(0X2, ctx->r18) = 0;
L_80236F9C:
    // 0x80236F9C: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80236FA0: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x80236FA4: bne         $v1, $v0, L_802376D4
    if (ctx->r3 != ctx->r2) {
        // 0x80236FA8: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802376D4;
    }
    // 0x80236FA8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80236FAC: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x80236FB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236FB4: bne         $v1, $v0, L_802376D4
    if (ctx->r3 != ctx->r2) {
        // 0x80236FB8: addu        $a1, $s2, $zero
        ctx->r5 = ADD32(ctx->r18, 0);
            goto L_802376D4;
    }
    // 0x80236FB8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80236FBC: jal         0x80237D60
    // 0x80236FC0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_80237D60_ovl28(rdram, ctx);
        goto after_6;
    // 0x80236FC0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_6:
    // 0x80236FC4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80236FC8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80236FCC: jal         0x80237D88
    // 0x80236FD0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80237D88_ovl28(rdram, ctx);
        goto after_7;
    // 0x80236FD0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x80236FD4: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x80236FD8: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x80236FDC: j           L_80237628
    // 0x80236FE0: sh          $zero, 0x2($s2)
    MEM_H(0X2, ctx->r18) = 0;
        goto L_80237628;
    // 0x80236FE0: sh          $zero, 0x2($s2)
    MEM_H(0X2, ctx->r18) = 0;
L_80236FE4:
    // 0x80236FE4: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80236FE8: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x80236FEC: bne         $v1, $v0, L_80237068
    if (ctx->r3 != ctx->r2) {
        // 0x80236FF0: addiu       $v0, $zero, 0x11
        ctx->r2 = ADD32(0, 0X11);
            goto L_80237068;
    }
    // 0x80236FF0: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x80236FF4: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    // 0x80236FF8: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80236FFC: beq         $a1, $v0, L_80237050
    if (ctx->r5 == ctx->r2) {
        // 0x80237000: slti        $v0, $a1, 0x15
        ctx->r2 = SIGNED(ctx->r5) < 0X15 ? 1 : 0;
            goto L_80237050;
    }
    // 0x80237000: slti        $v0, $a1, 0x15
    ctx->r2 = SIGNED(ctx->r5) < 0X15 ? 1 : 0;
    // 0x80237004: beq         $v0, $zero, L_8023701C
    if (ctx->r2 == 0) {
        // 0x80237008: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8023701C;
    }
    // 0x80237008: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8023700C: beq         $a1, $v0, L_8023703C
    if (ctx->r5 == ctx->r2) {
        // 0x80237010: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8023703C;
    }
    // 0x80237010: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80237014: j           L_802370A4
    // 0x80237018: nop

        goto L_802370A4;
    // 0x80237018: nop

L_8023701C:
    // 0x8023701C: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x80237020: beq         $a1, $v0, L_80237038
    if (ctx->r5 == ctx->r2) {
        // 0x80237024: addiu       $v0, $zero, 0x50
        ctx->r2 = ADD32(0, 0X50);
            goto L_80237038;
    }
    // 0x80237024: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x80237028: beq         $a1, $v0, L_80237054
    if (ctx->r5 == ctx->r2) {
        // 0x8023702C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80237054;
    }
    // 0x8023702C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80237030: j           L_802370A4
    // 0x80237034: nop

        goto L_802370A4;
    // 0x80237034: nop

L_80237038:
    // 0x80237038: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_8023703C:
    // 0x8023703C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80237040: jal         0x80237D88
    // 0x80237044: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    func_80237D88_ovl28(rdram, ctx);
        goto after_8;
    // 0x80237044: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    after_8:
    // 0x80237048: j           L_802370A4
    // 0x8023704C: nop

        goto L_802370A4;
    // 0x8023704C: nop

L_80237050:
    // 0x80237050: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_80237054:
    // 0x80237054: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80237058: jal         0x80237D88
    // 0x8023705C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80237D88_ovl28(rdram, ctx);
        goto after_9;
    // 0x8023705C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
    // 0x80237060: j           L_802370A4
    // 0x80237064: nop

        goto L_802370A4;
    // 0x80237064: nop

L_80237068:
    // 0x80237068: bne         $v1, $v0, L_802370A4
    if (ctx->r3 != ctx->r2) {
        // 0x8023706C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802370A4;
    }
    // 0x8023706C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237070: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x80237074: bne         $v1, $v0, L_802370A4
    if (ctx->r3 != ctx->r2) {
        // 0x80237078: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802370A4;
    }
    // 0x80237078: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023707C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80237080: jal         0x80237D60
    // 0x80237084: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80237D60_ovl28(rdram, ctx);
        goto after_10;
    // 0x80237084: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_10:
    // 0x80237088: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023708C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80237090: jal         0x80237D88
    // 0x80237094: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_80237D88_ovl28(rdram, ctx);
        goto after_11;
    // 0x80237094: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_11:
    // 0x80237098: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x8023709C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802370A0: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_802370A4:
    // 0x802370A4: lb          $v1, 0xA7($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XA7);
    // 0x802370A8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802370AC: beq         $v1, $v0, L_802376D0
    if (ctx->r3 == ctx->r2) {
        // 0x802370B0: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802376D0;
    }
    // 0x802370B0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802370B4: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x802370B8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802370BC: jal         0x8004DA90
    // 0x802370C0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_12;
    // 0x802370C0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_12:
    // 0x802370C4: j           L_802376D4
    // 0x802370C8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
        goto L_802376D4;
    // 0x802370C8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_802370CC:
    // 0x802370CC: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x802370D0: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x802370D4: bne         $v1, $v0, L_80237138
    if (ctx->r3 != ctx->r2) {
        // 0x802370D8: addiu       $v0, $zero, 0x12
        ctx->r2 = ADD32(0, 0X12);
            goto L_80237138;
    }
    // 0x802370D8: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x802370DC: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    // 0x802370E0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x802370E4: bne         $a1, $v0, L_80237104
    if (ctx->r5 != ctx->r2) {
        // 0x802370E8: addiu       $v0, $zero, 0x1E
        ctx->r2 = ADD32(0, 0X1E);
            goto L_80237104;
    }
    // 0x802370E8: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x802370EC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802370F0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802370F4: jal         0x80237D60
    // 0x802370F8: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_80237D60_ovl28(rdram, ctx);
        goto after_13;
    // 0x802370F8: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_13:
    // 0x802370FC: j           L_802376D4
    // 0x80237100: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
        goto L_802376D4;
    // 0x80237100: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_80237104:
    // 0x80237104: bne         $a1, $v0, L_802376D4
    if (ctx->r5 != ctx->r2) {
        // 0x80237108: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802376D4;
    }
    // 0x80237108: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023710C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80237110: jal         0x80237D60
    // 0x80237114: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80237D60_ovl28(rdram, ctx);
        goto after_14;
    // 0x80237114: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_14:
    // 0x80237118: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023711C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80237120: jal         0x80237D88
    // 0x80237124: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80237D88_ovl28(rdram, ctx);
        goto after_15;
    // 0x80237124: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_15:
    // 0x80237128: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8023712C: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x80237130: j           L_802376D0
    // 0x80237134: sh          $zero, 0x2($s2)
    MEM_H(0X2, ctx->r18) = 0;
        goto L_802376D0;
    // 0x80237134: sh          $zero, 0x2($s2)
    MEM_H(0X2, ctx->r18) = 0;
L_80237138:
    // 0x80237138: bne         $v1, $v0, L_802376D4
    if (ctx->r3 != ctx->r2) {
        // 0x8023713C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802376D4;
    }
    // 0x8023713C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80237140: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x80237144: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237148: bne         $v1, $v0, L_802376D4
    if (ctx->r3 != ctx->r2) {
        // 0x8023714C: addu        $a1, $s2, $zero
        ctx->r5 = ADD32(ctx->r18, 0);
            goto L_802376D4;
    }
    // 0x8023714C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80237150: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80237154: addiu       $v0, $zero, 0x700
    ctx->r2 = ADD32(0, 0X700);
    // 0x80237158: jal         0x80237D60
    // 0x8023715C: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
    func_80237D60_ovl28(rdram, ctx);
        goto after_16;
    // 0x8023715C: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
    after_16:
    // 0x80237160: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80237164: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80237168: j           L_80237620
    // 0x8023716C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
        goto L_80237620;
    // 0x8023716C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
L_80237170:
    // 0x80237170: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80237174: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x80237178: bne         $v1, $v0, L_802376D4
    if (ctx->r3 != ctx->r2) {
        // 0x8023717C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802376D4;
    }
    // 0x8023717C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80237180: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x80237184: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80237188: bne         $v1, $v0, L_802376D4
    if (ctx->r3 != ctx->r2) {
        // 0x8023718C: addu        $a1, $s2, $zero
        ctx->r5 = ADD32(ctx->r18, 0);
            goto L_802376D4;
    }
    // 0x8023718C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80237190: jal         0x80237D60
    // 0x80237194: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_80237D60_ovl28(rdram, ctx);
        goto after_17;
    // 0x80237194: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_17:
    // 0x80237198: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023719C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802371A0: jal         0x80237D88
    // 0x802371A4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80237D88_ovl28(rdram, ctx);
        goto after_18;
    // 0x802371A4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_18:
    // 0x802371A8: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x802371AC: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x802371B0: j           L_80237628
    // 0x802371B4: sh          $zero, 0x2($s2)
    MEM_H(0X2, ctx->r18) = 0;
        goto L_80237628;
    // 0x802371B4: sh          $zero, 0x2($s2)
    MEM_H(0X2, ctx->r18) = 0;
L_802371B8:
    // 0x802371B8: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x802371BC: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x802371C0: bne         $v1, $v0, L_80237284
    if (ctx->r3 != ctx->r2) {
        // 0x802371C4: addiu       $v0, $zero, 0x15
        ctx->r2 = ADD32(0, 0X15);
            goto L_80237284;
    }
    // 0x802371C4: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x802371C8: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    // 0x802371CC: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x802371D0: beq         $a1, $v0, L_8023724C
    if (ctx->r5 == ctx->r2) {
        // 0x802371D4: slti        $v0, $a1, 0x29
        ctx->r2 = SIGNED(ctx->r5) < 0X29 ? 1 : 0;
            goto L_8023724C;
    }
    // 0x802371D4: slti        $v0, $a1, 0x29
    ctx->r2 = SIGNED(ctx->r5) < 0X29 ? 1 : 0;
    // 0x802371D8: beq         $v0, $zero, L_802371F8
    if (ctx->r2 == 0) {
        // 0x802371DC: addiu       $v0, $zero, 0xF
        ctx->r2 = ADD32(0, 0XF);
            goto L_802371F8;
    }
    // 0x802371DC: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x802371E0: beq         $a1, $v0, L_80237230
    if (ctx->r5 == ctx->r2) {
        // 0x802371E4: addiu       $v0, $zero, 0x1E
        ctx->r2 = ADD32(0, 0X1E);
            goto L_80237230;
    }
    // 0x802371E4: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x802371E8: beq         $a1, $v0, L_80237240
    if (ctx->r5 == ctx->r2) {
        // 0x802371EC: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80237240;
    }
    // 0x802371EC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802371F0: j           L_802376D0
    // 0x802371F4: nop

        goto L_802376D0;
    // 0x802371F4: nop

L_802371F8:
    // 0x802371F8: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x802371FC: beq         $a1, $v0, L_80237268
    if (ctx->r5 == ctx->r2) {
        // 0x80237200: slti        $v0, $a1, 0x51
        ctx->r2 = SIGNED(ctx->r5) < 0X51 ? 1 : 0;
            goto L_80237268;
    }
    // 0x80237200: slti        $v0, $a1, 0x51
    ctx->r2 = SIGNED(ctx->r5) < 0X51 ? 1 : 0;
    // 0x80237204: beq         $v0, $zero, L_8023721C
    if (ctx->r2 == 0) {
        // 0x80237208: addiu       $v0, $zero, 0x37
        ctx->r2 = ADD32(0, 0X37);
            goto L_8023721C;
    }
    // 0x80237208: addiu       $v0, $zero, 0x37
    ctx->r2 = ADD32(0, 0X37);
    // 0x8023720C: beq         $a1, $v0, L_8023725C
    if (ctx->r5 == ctx->r2) {
        // 0x80237210: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8023725C;
    }
    // 0x80237210: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80237214: j           L_802376D0
    // 0x80237218: nop

        goto L_802376D0;
    // 0x80237218: nop

L_8023721C:
    // 0x8023721C: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x80237220: beq         $a1, $v0, L_80237278
    if (ctx->r5 == ctx->r2) {
        // 0x80237224: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80237278;
    }
    // 0x80237224: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80237228: j           L_802376D0
    // 0x8023722C: nop

        goto L_802376D0;
    // 0x8023722C: nop

L_80237230:
    // 0x80237230: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80237234: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80237238: j           L_802376C8
    // 0x8023723C: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
        goto L_802376C8;
    // 0x8023723C: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
L_80237240:
    // 0x80237240: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80237244: j           L_802376C8
    // 0x80237248: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
        goto L_802376C8;
    // 0x80237248: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
L_8023724C:
    // 0x8023724C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80237250: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80237254: j           L_802376C8
    // 0x80237258: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
        goto L_802376C8;
    // 0x80237258: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
L_8023725C:
    // 0x8023725C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80237260: j           L_802376C8
    // 0x80237264: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
        goto L_802376C8;
    // 0x80237264: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
L_80237268:
    // 0x80237268: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023726C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80237270: j           L_802376C8
    // 0x80237274: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
        goto L_802376C8;
    // 0x80237274: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
L_80237278:
    // 0x80237278: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8023727C: j           L_802376C8
    // 0x80237280: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
        goto L_802376C8;
    // 0x80237280: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
L_80237284:
    // 0x80237284: bne         $v1, $v0, L_802376D4
    if (ctx->r3 != ctx->r2) {
        // 0x80237288: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802376D4;
    }
    // 0x80237288: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023728C: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x80237290: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237294: bne         $v1, $v0, L_802376D4
    if (ctx->r3 != ctx->r2) {
        // 0x80237298: addu        $a1, $s2, $zero
        ctx->r5 = ADD32(ctx->r18, 0);
            goto L_802376D4;
    }
    // 0x80237298: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8023729C: jal         0x80237D60
    // 0x802372A0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80237D60_ovl28(rdram, ctx);
        goto after_19;
    // 0x802372A0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_19:
    // 0x802372A4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802372A8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802372AC: jal         0x80237D88
    // 0x802372B0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80237D88_ovl28(rdram, ctx);
        goto after_20;
    // 0x802372B0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_20:
    // 0x802372B4: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
    // 0x802372B8: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x802372BC: j           L_80237628
    // 0x802372C0: sh          $zero, 0x2($s2)
    MEM_H(0X2, ctx->r18) = 0;
        goto L_80237628;
    // 0x802372C0: sh          $zero, 0x2($s2)
    MEM_H(0X2, ctx->r18) = 0;
L_802372C4:
    // 0x802372C4: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x802372C8: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x802372CC: bne         $v1, $v0, L_802372FC
    if (ctx->r3 != ctx->r2) {
        // 0x802372D0: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_802372FC;
    }
    // 0x802372D0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x802372D4: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x802372D8: bne         $v1, $v0, L_802372FC
    if (ctx->r3 != ctx->r2) {
        // 0x802372DC: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802372FC;
    }
    // 0x802372DC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802372E0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802372E4: jal         0x80237D60
    // 0x802372E8: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    func_80237D60_ovl28(rdram, ctx);
        goto after_21;
    // 0x802372E8: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    after_21:
    // 0x802372EC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802372F0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802372F4: jal         0x80237D88
    // 0x802372F8: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    func_80237D88_ovl28(rdram, ctx);
        goto after_22;
    // 0x802372F8: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    after_22:
L_802372FC:
    // 0x802372FC: lbu         $v1, 0xA4($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA4);
    // 0x80237300: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x80237304: bne         $v1, $v0, L_802376D4
    if (ctx->r3 != ctx->r2) {
        // 0x80237308: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802376D4;
    }
    // 0x80237308: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023730C: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
    // 0x80237310: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x80237314: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80237318: sb          $v0, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r2;
    // 0x8023731C: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x80237320: j           L_80237628
    // 0x80237324: sh          $v0, 0x2($s2)
    MEM_H(0X2, ctx->r18) = ctx->r2;
        goto L_80237628;
    // 0x80237324: sh          $v0, 0x2($s2)
    MEM_H(0X2, ctx->r18) = ctx->r2;
L_80237328:
    // 0x80237328: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8023732C: sb          $v0, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r2;
    // 0x80237330: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80237334: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x80237338: bne         $v1, $v0, L_802376D4
    if (ctx->r3 != ctx->r2) {
        // 0x8023733C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802376D4;
    }
    // 0x8023733C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80237340: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    // 0x80237344: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x80237348: beq         $a1, $v0, L_80237360
    if (ctx->r5 == ctx->r2) {
        // 0x8023734C: addiu       $v0, $zero, 0x46
        ctx->r2 = ADD32(0, 0X46);
            goto L_80237360;
    }
    // 0x8023734C: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x80237350: beq         $a1, $v0, L_8023737C
    if (ctx->r5 == ctx->r2) {
        // 0x80237354: addu        $a1, $s2, $zero
        ctx->r5 = ADD32(ctx->r18, 0);
            goto L_8023737C;
    }
    // 0x80237354: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80237358: j           L_802376D0
    // 0x8023735C: nop

        goto L_802376D0;
    // 0x8023735C: nop

L_80237360:
    // 0x80237360: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80237364: jal         0x80237D60
    // 0x80237368: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_80237D60_ovl28(rdram, ctx);
        goto after_23;
    // 0x80237368: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_23:
    // 0x8023736C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80237370: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80237374: j           L_802376C8
    // 0x80237378: addiu       $a2, $zero, 0x15
    ctx->r6 = ADD32(0, 0X15);
        goto L_802376C8;
    // 0x80237378: addiu       $a2, $zero, 0x15
    ctx->r6 = ADD32(0, 0X15);
L_8023737C:
    // 0x8023737C: jal         0x80237D60
    // 0x80237380: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    func_80237D60_ovl28(rdram, ctx);
        goto after_24;
    // 0x80237380: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    after_24:
    // 0x80237384: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80237388: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8023738C: jal         0x80237D88
    // 0x80237390: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    func_80237D88_ovl28(rdram, ctx);
        goto after_25;
    // 0x80237390: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    after_25:
    // 0x80237394: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x80237398: j           L_80237628
    // 0x8023739C: sh          $v0, 0x2($s2)
    MEM_H(0X2, ctx->r18) = ctx->r2;
        goto L_80237628;
    // 0x8023739C: sh          $v0, 0x2($s2)
    MEM_H(0X2, ctx->r18) = ctx->r2;
L_802373A0:
    // 0x802373A0: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x802373A4: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x802373A8: bne         $v1, $v0, L_802373E4
    if (ctx->r3 != ctx->r2) {
        // 0x802373AC: addiu       $v0, $zero, 0x16
        ctx->r2 = ADD32(0, 0X16);
            goto L_802373E4;
    }
    // 0x802373AC: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
    // 0x802373B0: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x802373B4: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x802373B8: bne         $v1, $v0, L_802373E0
    if (ctx->r3 != ctx->r2) {
        // 0x802373BC: addiu       $v0, $zero, 0x16
        ctx->r2 = ADD32(0, 0X16);
            goto L_802373E0;
    }
    // 0x802373BC: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
    // 0x802373C0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802373C4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802373C8: jal         0x80237D60
    // 0x802373CC: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    func_80237D60_ovl28(rdram, ctx);
        goto after_26;
    // 0x802373CC: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_26:
    // 0x802373D0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802373D4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802373D8: j           L_802376C8
    // 0x802373DC: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
        goto L_802376C8;
    // 0x802373DC: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
L_802373E0:
    // 0x802373E0: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
L_802373E4:
    // 0x802373E4: bne         $v1, $v0, L_802376D4
    if (ctx->r3 != ctx->r2) {
        // 0x802373E8: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802376D4;
    }
    // 0x802373E8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802373EC: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x802373F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802373F4: bne         $v1, $v0, L_802376D4
    if (ctx->r3 != ctx->r2) {
        // 0x802373F8: addu        $a1, $s2, $zero
        ctx->r5 = ADD32(ctx->r18, 0);
            goto L_802376D4;
    }
    // 0x802373F8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802373FC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80237400: addiu       $v0, $zero, 0x17
    ctx->r2 = ADD32(0, 0X17);
    // 0x80237404: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x80237408: jal         0x80237D60
    // 0x8023740C: sh          $zero, 0x2($s2)
    MEM_H(0X2, ctx->r18) = 0;
    func_80237D60_ovl28(rdram, ctx);
        goto after_27;
    // 0x8023740C: sh          $zero, 0x2($s2)
    MEM_H(0X2, ctx->r18) = 0;
    after_27:
    // 0x80237410: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80237414: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80237418: j           L_80237620
    // 0x8023741C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
        goto L_80237620;
    // 0x8023741C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
L_80237420:
    // 0x80237420: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80237424: sb          $v0, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r2;
    // 0x80237428: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8023742C: addiu       $v0, $zero, 0x17
    ctx->r2 = ADD32(0, 0X17);
    // 0x80237430: bne         $v1, $v0, L_802376D4
    if (ctx->r3 != ctx->r2) {
        // 0x80237434: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802376D4;
    }
    // 0x80237434: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80237438: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x8023743C: addiu       $v0, $zero, 0x69
    ctx->r2 = ADD32(0, 0X69);
    // 0x80237440: bne         $v1, $v0, L_802376D4
    if (ctx->r3 != ctx->r2) {
        // 0x80237444: addu        $a1, $s2, $zero
        ctx->r5 = ADD32(ctx->r18, 0);
            goto L_802376D4;
    }
    // 0x80237444: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80237448: j           L_80237620
    // 0x8023744C: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
        goto L_80237620;
    // 0x8023744C: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
L_80237450:
    // 0x80237450: lbu         $v1, 0xA4($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA4);
    // 0x80237454: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80237458: bne         $v1, $v0, L_802376D4
    if (ctx->r3 != ctx->r2) {
        // 0x8023745C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802376D4;
    }
    // 0x8023745C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80237460: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80237464: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x80237468: addiu       $v0, $zero, 0x17
    ctx->r2 = ADD32(0, 0X17);
    // 0x8023746C: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x80237470: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80237474: sb          $v0, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r2;
    // 0x80237478: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8023747C: j           L_80237620
    // 0x80237480: sh          $v0, 0x2($s2)
    MEM_H(0X2, ctx->r18) = ctx->r2;
        goto L_80237620;
    // 0x80237480: sh          $v0, 0x2($s2)
    MEM_H(0X2, ctx->r18) = ctx->r2;
L_80237484:
    // 0x80237484: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80237488: sb          $v0, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r2;
    // 0x8023748C: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    // 0x80237490: addiu       $v0, $zero, 0xD2
    ctx->r2 = ADD32(0, 0XD2);
    // 0x80237494: beq         $a1, $v0, L_802374F4
    if (ctx->r5 == ctx->r2) {
        // 0x80237498: slti        $v0, $a1, 0xD3
        ctx->r2 = SIGNED(ctx->r5) < 0XD3 ? 1 : 0;
            goto L_802374F4;
    }
    // 0x80237498: slti        $v0, $a1, 0xD3
    ctx->r2 = SIGNED(ctx->r5) < 0XD3 ? 1 : 0;
    // 0x8023749C: beq         $v0, $zero, L_802374BC
    if (ctx->r2 == 0) {
        // 0x802374A0: addiu       $v0, $zero, 0x78
        ctx->r2 = ADD32(0, 0X78);
            goto L_802374BC;
    }
    // 0x802374A0: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x802374A4: beq         $a1, $v0, L_802374D8
    if (ctx->r5 == ctx->r2) {
        // 0x802374A8: addiu       $v0, $zero, 0xBE
        ctx->r2 = ADD32(0, 0XBE);
            goto L_802374D8;
    }
    // 0x802374A8: addiu       $v0, $zero, 0xBE
    ctx->r2 = ADD32(0, 0XBE);
    // 0x802374AC: beq         $a1, $v0, L_802374E8
    if (ctx->r5 == ctx->r2) {
        // 0x802374B0: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802374E8;
    }
    // 0x802374B0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802374B4: j           L_802376D0
    // 0x802374B8: nop

        goto L_802376D0;
    // 0x802374B8: nop

L_802374BC:
    // 0x802374BC: addiu       $v0, $zero, 0x104
    ctx->r2 = ADD32(0, 0X104);
    // 0x802374C0: beq         $a1, $v0, L_80237504
    if (ctx->r5 == ctx->r2) {
        // 0x802374C4: addiu       $v0, $zero, 0x118
        ctx->r2 = ADD32(0, 0X118);
            goto L_80237504;
    }
    // 0x802374C4: addiu       $v0, $zero, 0x118
    ctx->r2 = ADD32(0, 0X118);
    // 0x802374C8: beq         $a1, $v0, L_80237514
    if (ctx->r5 == ctx->r2) {
        // 0x802374CC: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80237514;
    }
    // 0x802374CC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802374D0: j           L_802376D0
    // 0x802374D4: nop

        goto L_802376D0;
    // 0x802374D4: nop

L_802374D8:
    // 0x802374D8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802374DC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802374E0: j           L_802376C8
    // 0x802374E4: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
        goto L_802376C8;
    // 0x802374E4: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
L_802374E8:
    // 0x802374E8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802374EC: j           L_802376C8
    // 0x802374F0: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
        goto L_802376C8;
    // 0x802374F0: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
L_802374F4:
    // 0x802374F4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802374F8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802374FC: j           L_802376C8
    // 0x80237500: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
        goto L_802376C8;
    // 0x80237500: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
L_80237504:
    // 0x80237504: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80237508: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8023750C: j           L_802376C8
    // 0x80237510: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
        goto L_802376C8;
    // 0x80237510: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
L_80237514:
    // 0x80237514: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80237518: jal         0x80237D60
    // 0x8023751C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_80237D60_ovl28(rdram, ctx);
        goto after_28;
    // 0x8023751C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_28:
    // 0x80237520: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80237524: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80237528: j           L_80237620
    // 0x8023752C: addiu       $a2, $zero, 0x17
    ctx->r6 = ADD32(0, 0X17);
        goto L_80237620;
    // 0x8023752C: addiu       $a2, $zero, 0x17
    ctx->r6 = ADD32(0, 0X17);
L_80237530:
    // 0x80237530: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80237534: addiu       $v0, $zero, 0x17
    ctx->r2 = ADD32(0, 0X17);
    // 0x80237538: bne         $v1, $v0, L_80237564
    if (ctx->r3 != ctx->r2) {
        // 0x8023753C: addiu       $v0, $zero, 0x18
        ctx->r2 = ADD32(0, 0X18);
            goto L_80237564;
    }
    // 0x8023753C: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x80237540: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x80237544: addiu       $v0, $zero, 0x122
    ctx->r2 = ADD32(0, 0X122);
    // 0x80237548: bne         $v1, $v0, L_80237560
    if (ctx->r3 != ctx->r2) {
        // 0x8023754C: addiu       $v0, $zero, 0x18
        ctx->r2 = ADD32(0, 0X18);
            goto L_80237560;
    }
    // 0x8023754C: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x80237550: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80237554: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80237558: j           L_802376C8
    // 0x8023755C: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
        goto L_802376C8;
    // 0x8023755C: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
L_80237560:
    // 0x80237560: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
L_80237564:
    // 0x80237564: bne         $v1, $v0, L_802376D4
    if (ctx->r3 != ctx->r2) {
        // 0x80237568: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802376D4;
    }
    // 0x80237568: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023756C: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x80237570: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237574: bne         $v1, $v0, L_802376D4
    if (ctx->r3 != ctx->r2) {
        // 0x80237578: addu        $a1, $s2, $zero
        ctx->r5 = ADD32(ctx->r18, 0);
            goto L_802376D4;
    }
    // 0x80237578: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8023757C: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x80237580: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x80237584: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x80237588: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8023758C: sh          $zero, 0x2($s2)
    MEM_H(0X2, ctx->r18) = 0;
    // 0x80237590: sb          $v0, 0x108($s1)
    MEM_B(0X108, ctx->r17) = ctx->r2;
    // 0x80237594: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x80237598: jal         0x80237D60
    // 0x8023759C: sb          $v0, 0x114($s1)
    MEM_B(0X114, ctx->r17) = ctx->r2;
    func_80237D60_ovl28(rdram, ctx);
        goto after_29;
    // 0x8023759C: sb          $v0, 0x114($s1)
    MEM_B(0X114, ctx->r17) = ctx->r2;
    after_29:
    // 0x802375A0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802375A4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802375A8: j           L_80237620
    // 0x802375AC: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
        goto L_80237620;
    // 0x802375AC: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
L_802375B0:
    // 0x802375B0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802375B4: sb          $v0, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r2;
    // 0x802375B8: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x802375BC: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    // 0x802375C0: bne         $v1, $v0, L_802376D4
    if (ctx->r3 != ctx->r2) {
        // 0x802375C4: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802376D4;
    }
    // 0x802375C4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802375C8: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x802375CC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802375D0: beq         $v1, $v0, L_80237628
    if (ctx->r3 == ctx->r2) {
        // 0x802375D4: nop
    
            goto L_80237628;
    }
    // 0x802375D4: nop

    // 0x802375D8: j           L_802376D4
    // 0x802375DC: nop

        goto L_802376D4;
    // 0x802375DC: nop

L_802375E0:
    // 0x802375E0: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x802375E4: addiu       $v0, $zero, 0x1D
    ctx->r2 = ADD32(0, 0X1D);
    // 0x802375E8: bne         $v1, $v0, L_802376D4
    if (ctx->r3 != ctx->r2) {
        // 0x802375EC: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802376D4;
    }
    // 0x802375EC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802375F0: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x802375F4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802375F8: bne         $v1, $v0, L_802376D4
    if (ctx->r3 != ctx->r2) {
        // 0x802375FC: addu        $a1, $s2, $zero
        ctx->r5 = ADD32(ctx->r18, 0);
            goto L_802376D4;
    }
    // 0x802375FC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80237600: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x80237604: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    // 0x80237608: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x8023760C: jal         0x80237D60
    // 0x80237610: sh          $zero, 0x2($s2)
    MEM_H(0X2, ctx->r18) = 0;
    func_80237D60_ovl28(rdram, ctx);
        goto after_30;
    // 0x80237610: sh          $zero, 0x2($s2)
    MEM_H(0X2, ctx->r18) = 0;
    after_30:
    // 0x80237614: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80237618: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8023761C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
L_80237620:
    // 0x80237620: jal         0x80237D88
    // 0x80237624: nop

    func_80237D88_ovl28(rdram, ctx);
        goto after_31;
    // 0x80237624: nop

    after_31:
L_80237628:
    // 0x80237628: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x8023762C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80237630: j           L_802376D0
    // 0x80237634: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
        goto L_802376D0;
    // 0x80237634: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_80237638:
    // 0x80237638: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8023763C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80237640: bne         $v1, $v0, L_802376D4
    if (ctx->r3 != ctx->r2) {
        // 0x80237644: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802376D4;
    }
    // 0x80237644: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80237648: lw          $a1, 0x10($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X10);
    // 0x8023764C: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x80237650: beq         $a1, $v0, L_802376C0
    if (ctx->r5 == ctx->r2) {
        // 0x80237654: slti        $v0, $a1, 0x29
        ctx->r2 = SIGNED(ctx->r5) < 0X29 ? 1 : 0;
            goto L_802376C0;
    }
    // 0x80237654: slti        $v0, $a1, 0x29
    ctx->r2 = SIGNED(ctx->r5) < 0X29 ? 1 : 0;
    // 0x80237658: beq         $v0, $zero, L_80237670
    if (ctx->r2 == 0) {
        // 0x8023765C: addiu       $v0, $zero, 0x1E
        ctx->r2 = ADD32(0, 0X1E);
            goto L_80237670;
    }
    // 0x8023765C: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80237660: beq         $a1, $v0, L_8023768C
    if (ctx->r5 == ctx->r2) {
        // 0x80237664: addu        $a1, $s2, $zero
        ctx->r5 = ADD32(ctx->r18, 0);
            goto L_8023768C;
    }
    // 0x80237664: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80237668: j           L_802376D0
    // 0x8023766C: nop

        goto L_802376D0;
    // 0x8023766C: nop

L_80237670:
    // 0x80237670: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80237674: beq         $a1, $v0, L_802376B0
    if (ctx->r5 == ctx->r2) {
        // 0x80237678: addiu       $v0, $zero, 0x55
        ctx->r2 = ADD32(0, 0X55);
            goto L_802376B0;
    }
    // 0x80237678: addiu       $v0, $zero, 0x55
    ctx->r2 = ADD32(0, 0X55);
    // 0x8023767C: beq         $a1, $v0, L_802376C0
    if (ctx->r5 == ctx->r2) {
        // 0x80237680: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802376C0;
    }
    // 0x80237680: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80237684: j           L_802376D0
    // 0x80237688: nop

        goto L_802376D0;
    // 0x80237688: nop

L_8023768C:
    // 0x8023768C: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    // 0x80237690: addiu       $v0, $zero, 0x1A
    ctx->r2 = ADD32(0, 0X1A);
    // 0x80237694: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x80237698: jal         0x80237D60
    // 0x8023769C: sh          $zero, 0x2($s2)
    MEM_H(0X2, ctx->r18) = 0;
    func_80237D60_ovl28(rdram, ctx);
        goto after_32;
    // 0x8023769C: sh          $zero, 0x2($s2)
    MEM_H(0X2, ctx->r18) = 0;
    after_32:
    // 0x802376A0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802376A4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802376A8: j           L_802376C8
    // 0x802376AC: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
        goto L_802376C8;
    // 0x802376AC: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
L_802376B0:
    // 0x802376B0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802376B4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802376B8: j           L_802376C8
    // 0x802376BC: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
        goto L_802376C8;
    // 0x802376BC: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
L_802376C0:
    // 0x802376C0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802376C4: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
L_802376C8:
    // 0x802376C8: jal         0x80237D88
    // 0x802376CC: nop

    func_80237D88_ovl28(rdram, ctx);
        goto after_33;
    // 0x802376CC: nop

    after_33:
L_802376D0:
    // 0x802376D0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_802376D4:
    // 0x802376D4: jal         0x80237DB0
    // 0x802376D8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_80237DB0_ovl28(rdram, ctx);
        goto after_34;
    // 0x802376D8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_34:
    // 0x802376DC: lbu         $a1, 0xAC($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XAC);
    // 0x802376E0: lbu         $v0, 0xAD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAD);
    // 0x802376E4: beq         $a1, $v0, L_80237700
    if (ctx->r5 == ctx->r2) {
        // 0x802376E8: nop
    
            goto L_80237700;
    }
    // 0x802376E8: nop

    // 0x802376EC: lh          $a2, 0x2($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X2);
    // 0x802376F0: jal         0x80050294
    // 0x802376F4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_35;
    // 0x802376F4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_35:
    // 0x802376F8: j           L_80237708
    // 0x802376FC: nop

        goto L_80237708;
    // 0x802376FC: nop

L_80237700:
    // 0x80237700: jal         0x8005044C
    // 0x80237704: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_36;
    // 0x80237704: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_36:
L_80237708:
    // 0x80237708: lbu         $v0, 0x12($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X12);
    // 0x8023770C: beq         $v0, $zero, L_80237724
    if (ctx->r2 == 0) {
        // 0x80237710: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80237724;
    }
    // 0x80237710: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80237714: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x80237718: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8023771C: jal         0x8003B564
    // 0x80237720: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_37;
    // 0x80237720: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_37:
L_80237724:
    // 0x80237724: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80237728: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8023772C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80237730: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80237734: jr          $ra
    // 0x80237738: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80237738: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802350C4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802350C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802350C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802350CC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802350D0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802350D4: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x802350D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802350DC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802350E0: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802350E4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802350E8: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802350EC: jal         0x8004D5D4
    // 0x802350F0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x802350F0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x802350F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802350F8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802350FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80235100: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80235104: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80235108: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8023510C: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80235110: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80235114: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80235118: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8023511C: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x80235120: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80235124: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x80235128: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x8023512C: sh          $zero, 0x2($s1)
    MEM_H(0X2, ctx->r17) = 0;
    // 0x80235130: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
    // 0x80235134: jal         0x802356E4
    // 0x80235138: sb          $s2, 0x12($s1)
    MEM_B(0X12, ctx->r17) = ctx->r18;
    func_802356E4_ovl28(rdram, ctx);
        goto after_1;
    // 0x80235138: sb          $s2, 0x12($s1)
    MEM_B(0X12, ctx->r17) = ctx->r18;
    after_1:
    // 0x8023513C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235140: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80235144: jal         0x8023570C
    // 0x80235148: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8023570C_ovl28(rdram, ctx);
        goto after_2;
    // 0x80235148: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x8023514C: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x80235150: sb          $s2, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r18;
    // 0x80235154: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80235158: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8023515C: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x80235160: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80235164: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80235168: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023516C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80235170: jr          $ra
    // 0x80235174: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80235174: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022E45C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E45C: lbu         $v0, 0xE($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XE);
    // 0x8022E460: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x8022E464: sh          $zero, 0x35C($a0)
    MEM_H(0X35C, ctx->r4) = 0;
    // 0x8022E468: sh          $zero, 0x35E($a0)
    MEM_H(0X35E, ctx->r4) = 0;
    // 0x8022E46C: sh          $zero, 0x362($a0)
    MEM_H(0X362, ctx->r4) = 0;
    // 0x8022E470: sh          $zero, 0x46($a0)
    MEM_H(0X46, ctx->r4) = 0;
    // 0x8022E474: sh          $zero, 0x48($a0)
    MEM_H(0X48, ctx->r4) = 0;
    // 0x8022E478: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022E47C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022E480: sh          $v0, 0x366($a0)
    MEM_H(0X366, ctx->r4) = ctx->r2;
    // 0x8022E484: sh          $v0, 0x360($a0)
    MEM_H(0X360, ctx->r4) = ctx->r2;
    // 0x8022E488: jr          $ra
    // 0x8022E48C: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x8022E48C: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
;}
RECOMP_FUNC void func_80226934_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226934: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x80226938: lw          $v0, 0x10($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X10);
    // 0x8022693C: bne         $v0, $zero, L_802269BC
    if (ctx->r2 != 0) {
        // 0x80226940: addiu       $v1, $zero, 0x300
        ctx->r3 = ADD32(0, 0X300);
            goto L_802269BC;
    }
    // 0x80226940: addiu       $v1, $zero, 0x300
    ctx->r3 = ADD32(0, 0X300);
    // 0x80226944: lw          $a2, 0x28($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X28);
    // 0x80226948: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x8022694C: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
    // 0x80226950: lui         $a0, 0xFFFF
    ctx->r4 = S32(0XFFFF << 16);
    // 0x80226954: sh          $v0, 0x18($a2)
    MEM_H(0X18, ctx->r6) = ctx->r2;
    // 0x80226958: lui         $v0, 0x300
    ctx->r2 = S32(0X300 << 16);
    // 0x8022695C: sw          $v0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->r2;
    // 0x80226960: lui         $v0, 0xFF00
    ctx->r2 = S32(0XFF00 << 16);
    // 0x80226964: sh          $v1, 0x14($a2)
    MEM_H(0X14, ctx->r6) = ctx->r3;
    // 0x80226968: sh          $a1, 0x16($a2)
    MEM_H(0X16, ctx->r6) = ctx->r5;
    // 0x8022696C: sw          $a0, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->r4;
    // 0x80226970: sw          $v0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->r2;
    // 0x80226974: sh          $zero, 0x58($a2)
    MEM_H(0X58, ctx->r6) = 0;
    // 0x80226978: sh          $zero, 0x54($a2)
    MEM_H(0X54, ctx->r6) = 0;
    // 0x8022697C: sh          $v1, 0x56($a2)
    MEM_H(0X56, ctx->r6) = ctx->r3;
    // 0x80226980: lw          $a2, 0x2C($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X2C);
    // 0x80226984: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80226988: sh          $v0, 0x14($a2)
    MEM_H(0X14, ctx->r6) = ctx->r2;
    // 0x8022698C: addiu       $v0, $zero, -0x2C0
    ctx->r2 = ADD32(0, -0X2C0);
    // 0x80226990: sh          $v0, 0x18($a2)
    MEM_H(0X18, ctx->r6) = ctx->r2;
    // 0x80226994: lui         $v0, 0x200
    ctx->r2 = S32(0X200 << 16);
    // 0x80226998: sw          $v0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->r2;
    // 0x8022699C: lui         $v0, 0xFD40
    ctx->r2 = S32(0XFD40 << 16);
    // 0x802269A0: sw          $v0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->r2;
    // 0x802269A4: addiu       $v0, $zero, 0x500
    ctx->r2 = ADD32(0, 0X500);
    // 0x802269A8: sh          $a1, 0x16($a2)
    MEM_H(0X16, ctx->r6) = ctx->r5;
    // 0x802269AC: sw          $a0, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->r4;
    // 0x802269B0: sh          $zero, 0x58($a2)
    MEM_H(0X58, ctx->r6) = 0;
    // 0x802269B4: sh          $zero, 0x54($a2)
    MEM_H(0X54, ctx->r6) = 0;
    // 0x802269B8: sh          $v0, 0x56($a2)
    MEM_H(0X56, ctx->r6) = ctx->r2;
L_802269BC:
    // 0x802269BC: jr          $ra
    // 0x802269C0: nop

    TRACE_RETURN()
    return;
    // 0x802269C0: nop

;}
RECOMP_FUNC void func_8023A430_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A430: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023A434: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023A438: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8023A43C: bne         $v0, $zero, L_8023A454
    if (ctx->r2 != 0) {
        // 0x8023A440: nop
    
            goto L_8023A454;
    }
    // 0x8023A440: nop

    // 0x8023A444: jal         0x8023A468
    // 0x8023A448: nop

    func_8023A468_ovl28(rdram, ctx);
        goto after_0;
    // 0x8023A448: nop

    after_0:
    // 0x8023A44C: j           L_8023A45C
    // 0x8023A450: nop

        goto L_8023A45C;
    // 0x8023A450: nop

L_8023A454:
    // 0x8023A454: jal         0x8023A4C8
    // 0x8023A458: nop

    func_8023A4C8_ovl28(rdram, ctx);
        goto after_1;
    // 0x8023A458: nop

    after_1:
L_8023A45C:
    // 0x8023A45C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023A460: jr          $ra
    // 0x8023A464: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023A464: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8024388C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024388C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80243890: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80243894: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80243898: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8024389C: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x802438A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802438A4: bne         $v1, $v0, L_802438E4
    if (ctx->r3 != ctx->r2) {
        // 0x802438A8: lui         $v0, 0x2FF
        ctx->r2 = S32(0X2FF << 16);
            goto L_802438E4;
    }
    // 0x802438A8: lui         $v0, 0x2FF
    ctx->r2 = S32(0X2FF << 16);
    // 0x802438AC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802438B0: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x802438B4: lh          $a2, 0x66($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X66);
    // 0x802438B8: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x802438BC: lhu         $v1, 0x54($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X54);
    // 0x802438C0: addiu       $a3, $zero, 0x200
    ctx->r7 = ADD32(0, 0X200);
    // 0x802438C4: addiu       $v0, $v0, 0x190
    ctx->r2 = ADD32(ctx->r2, 0X190);
    // 0x802438C8: addiu       $v1, $v1, 0x190
    ctx->r3 = ADD32(ctx->r3, 0X190);
    // 0x802438CC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x802438D0: sh          $v1, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r3;
    // 0x802438D4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802438D8: jal         0x8004DBA0
    // 0x802438DC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_0;
    // 0x802438DC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_0:
    // 0x802438E0: lui         $v0, 0x2FF
    ctx->r2 = S32(0X2FF << 16);
L_802438E4:
    // 0x802438E4: lw          $v1, 0xE8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XE8);
    // 0x802438E8: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x802438EC: lui         $a0, 0x33
    ctx->r4 = S32(0X33 << 16);
    // 0x802438F0: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x802438F4: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x802438F8: beq         $v0, $zero, L_8024394C
    if (ctx->r2 == 0) {
        // 0x802438FC: sw          $v1, 0xE8($s0)
        MEM_W(0XE8, ctx->r16) = ctx->r3;
            goto L_8024394C;
    }
    // 0x802438FC: sw          $v1, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r3;
    // 0x80243900: jal         0x8004F144
    // 0x80243904: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_1;
    // 0x80243904: nop

    after_1:
    // 0x80243908: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8024390C: beq         $v1, $zero, L_80243938
    if (ctx->r3 == 0) {
        // 0x80243910: addiu       $a1, $s0, 0x14
        ctx->r5 = ADD32(ctx->r16, 0X14);
            goto L_80243938;
    }
    // 0x80243910: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80243914: addiu       $a0, $v1, 0x38
    ctx->r4 = ADD32(ctx->r3, 0X38);
    // 0x80243918: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8024391C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80243920: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80243924: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80243928: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8024392C: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
    // 0x80243930: jal         0x8009A3B4
    // 0x80243934: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80243934: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    after_2:
L_80243938:
    // 0x80243938: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8024393C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80243940: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80243944: jal         0x8007A1B8
    // 0x80243948: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8007A1B8_555B8(rdram, ctx);
        goto after_3;
    // 0x80243948: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_3:
L_8024394C:
    // 0x8024394C: jal         0x80040F30
    // 0x80243950: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_4;
    // 0x80243950: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80243954: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80243958: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8024395C: jr          $ra
    // 0x80243960: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80243960: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022AC48_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AC48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022AC4C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022AC50: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x8022AC54: addiu       $v0, $zero, 0x2D
    ctx->r2 = ADD32(0, 0X2D);
    // 0x8022AC58: beq         $v1, $v0, L_8022ACB8
    if (ctx->r3 == ctx->r2) {
        // 0x8022AC5C: slti        $v0, $v1, 0x2E
        ctx->r2 = SIGNED(ctx->r3) < 0X2E ? 1 : 0;
            goto L_8022ACB8;
    }
    // 0x8022AC5C: slti        $v0, $v1, 0x2E
    ctx->r2 = SIGNED(ctx->r3) < 0X2E ? 1 : 0;
    // 0x8022AC60: beql        $v0, $zero, L_8022AC80
    if (ctx->r2 == 0) {
        // 0x8022AC64: addiu       $v0, $zero, 0x46
        ctx->r2 = ADD32(0, 0X46);
            goto L_8022AC80;
    }
    goto skip_0;
    // 0x8022AC64: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    skip_0:
    // 0x8022AC68: beq         $v1, $zero, L_8022AC98
    if (ctx->r3 == 0) {
        // 0x8022AC6C: addiu       $v0, $zero, 0x1E
        ctx->r2 = ADD32(0, 0X1E);
            goto L_8022AC98;
    }
    // 0x8022AC6C: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8022AC70: beq         $v1, $v0, L_8022ACA8
    if (ctx->r3 == ctx->r2) {
        // 0x8022AC74: nop
    
            goto L_8022ACA8;
    }
    // 0x8022AC74: nop

    // 0x8022AC78: j           L_8022ACD8
    // 0x8022AC7C: nop

        goto L_8022ACD8;
    // 0x8022AC7C: nop

L_8022AC80:
    // 0x8022AC80: beq         $v1, $v0, L_8022ACC0
    if (ctx->r3 == ctx->r2) {
        // 0x8022AC84: addiu       $v0, $zero, 0x5F
        ctx->r2 = ADD32(0, 0X5F);
            goto L_8022ACC0;
    }
    // 0x8022AC84: addiu       $v0, $zero, 0x5F
    ctx->r2 = ADD32(0, 0X5F);
    // 0x8022AC88: beq         $v1, $v0, L_8022ACD0
    if (ctx->r3 == ctx->r2) {
        // 0x8022AC8C: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_8022ACD0;
    }
    // 0x8022AC8C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x8022AC90: j           L_8022ACD8
    // 0x8022AC94: nop

        goto L_8022ACD8;
    // 0x8022AC94: nop

L_8022AC98:
    // 0x8022AC98: jal         0x8022B750
    // 0x8022AC9C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_8022B750_ovl28(rdram, ctx);
        goto after_0;
    // 0x8022AC9C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_0:
    // 0x8022ACA0: j           L_8022ACD0
    // 0x8022ACA4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
        goto L_8022ACD0;
    // 0x8022ACA4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
L_8022ACA8:
    // 0x8022ACA8: jal         0x8022B750
    // 0x8022ACAC: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_8022B750_ovl28(rdram, ctx);
        goto after_1;
    // 0x8022ACAC: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_1:
    // 0x8022ACB0: j           L_8022ACD8
    // 0x8022ACB4: nop

        goto L_8022ACD8;
    // 0x8022ACB4: nop

L_8022ACB8:
    // 0x8022ACB8: j           L_8022ACD0
    // 0x8022ACBC: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
        goto L_8022ACD0;
    // 0x8022ACBC: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
L_8022ACC0:
    // 0x8022ACC0: addiu       $v0, $zero, 0x88
    ctx->r2 = ADD32(0, 0X88);
    // 0x8022ACC4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022ACC8: j           L_8022ACD8
    // 0x8022ACCC: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
        goto L_8022ACD8;
    // 0x8022ACCC: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
L_8022ACD0:
    // 0x8022ACD0: jal         0x8022B784
    // 0x8022ACD4: nop

    func_8022B784_ovl28(rdram, ctx);
        goto after_2;
    // 0x8022ACD4: nop

    after_2:
L_8022ACD8:
    // 0x8022ACD8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022ACDC: jr          $ra
    // 0x8022ACE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022ACE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80239D04_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239D04: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80239D08: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80239D0C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x80239D10: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80239D14: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80239D18: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x80239D1C: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x80239D20: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80239D24: addu        $v1, $v0, $v1
    ctx->r3 = ADD32(ctx->r2, ctx->r3);
    // 0x80239D28: lb          $a0, 0x1($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X1);
    // 0x80239D2C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80239D30: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x80239D34: beq         $a0, $v0, L_80239D50
    if (ctx->r4 == ctx->r2) {
        // 0x80239D38: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_80239D50;
    }
    // 0x80239D38: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x80239D3C: bne         $a0, $v0, L_80239D4C
    if (ctx->r4 != ctx->r2) {
        // 0x80239D40: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80239D4C;
    }
    // 0x80239D40: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80239D44: j           L_80239D50
    // 0x80239D48: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
        goto L_80239D50;
    // 0x80239D48: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
L_80239D4C:
    // 0x80239D4C: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_80239D50:
    // 0x80239D50: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x80239D54: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x80239D58: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80239D5C: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80239D60: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x80239D64: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x80239D68: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80239D6C: sra         $a0, $v0, 24
    ctx->r4 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80239D70: beq         $a0, $v1, L_80239D98
    if (ctx->r4 == ctx->r3) {
        // 0x80239D74: addiu       $a1, $zero, 0x2A
        ctx->r5 = ADD32(0, 0X2A);
            goto L_80239D98;
    }
    // 0x80239D74: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x80239D78: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x80239D7C: jal         0x8003B85C
    // 0x80239D80: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x80239D80: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_0:
    // 0x80239D84: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x80239D88: lui         $a1, 0x11
    ctx->r5 = S32(0X11 << 16);
    // 0x80239D8C: ori         $a1, $a1, 0x10
    ctx->r5 = ctx->r5 | 0X10;
    // 0x80239D90: jal         0x8003B840
    // 0x80239D94: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x80239D94: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
L_80239D98:
    // 0x80239D98: lb          $a0, 0x11($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X11);
    // 0x80239D9C: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x80239DA0: lbu         $v1, 0xC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XC);
    // 0x80239DA4: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x80239DA8: sb          $v1, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r3;
    // 0x80239DAC: lb          $v1, 0x1($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X1);
    // 0x80239DB0: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x80239DB4: beq         $v1, $v0, L_80239DD0
    if (ctx->r3 == ctx->r2) {
        // 0x80239DB8: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_80239DD0;
    }
    // 0x80239DB8: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x80239DBC: bne         $v1, $v0, L_80239DCC
    if (ctx->r3 != ctx->r2) {
        // 0x80239DC0: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_80239DCC;
    }
    // 0x80239DC0: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80239DC4: j           L_80239DD0
    // 0x80239DC8: sb          $zero, 0x11($s0)
    MEM_B(0X11, ctx->r16) = 0;
        goto L_80239DD0;
    // 0x80239DC8: sb          $zero, 0x11($s0)
    MEM_B(0X11, ctx->r16) = 0;
L_80239DCC:
    // 0x80239DCC: sb          $v0, 0x11($s0)
    MEM_B(0X11, ctx->r16) = ctx->r2;
L_80239DD0:
    // 0x80239DD0: lb          $v1, 0x11($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X11);
    // 0x80239DD4: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x80239DD8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80239DDC: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80239DE0: lb          $v1, 0x10($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X10);
    // 0x80239DE4: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    // 0x80239DE8: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80239DEC: sra         $a0, $v0, 24
    ctx->r4 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80239DF0: beq         $a0, $v1, L_80239E18
    if (ctx->r4 == ctx->r3) {
        // 0x80239DF4: addiu       $a1, $zero, 0x2A
        ctx->r5 = ADD32(0, 0X2A);
            goto L_80239E18;
    }
    // 0x80239DF4: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x80239DF8: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x80239DFC: jal         0x8003B85C
    // 0x80239E00: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x80239E00: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_2:
    // 0x80239E04: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x80239E08: lui         $a1, 0x13
    ctx->r5 = S32(0X13 << 16);
    // 0x80239E0C: ori         $a1, $a1, 0x12
    ctx->r5 = ctx->r5 | 0X12;
    // 0x80239E10: jal         0x8003B840
    // 0x80239E14: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x80239E14: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
L_80239E18:
    // 0x80239E18: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x80239E1C: sb          $v0, 0x10($s0)
    MEM_B(0X10, ctx->r16) = ctx->r2;
    // 0x80239E20: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80239E24: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80239E28: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80239E2C: jr          $ra
    // 0x80239E30: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80239E30: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80239E34: nop

    // 0x80239E38: nop

    // 0x80239E3C: nop

;}
RECOMP_FUNC void func_80249DD8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80249DD8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80249DDC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80249DE0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80249DE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80249DE8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80249DEC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80249DF0: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x80249DF4: jal         0x8004D5D4
    // 0x80249DF8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80249DF8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80249DFC: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80249E00: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x80249E04: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    // 0x80249E08: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80249E0C: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x80249E10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80249E14: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80249E18: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80249E1C: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80249E20: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x80249E24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80249E28: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80249E2C: jr          $ra
    // 0x80249E30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80249E30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8024C294_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024C294: jr          $ra
    // 0x8024C298: nop

    TRACE_RETURN()
    return;
    // 0x8024C298: nop

;}
RECOMP_FUNC void func_80235E40_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235E40: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80235E44: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80235E48: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80235E4C: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x80235E50: lhu         $a0, -0x730C($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X730C);
    // 0x80235E54: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80235E58: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x80235E5C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80235E60: andi        $a0, $a0, 0x7C
    ctx->r4 = ctx->r4 & 0X7C;
    // 0x80235E64: jal         0x800324B4
    // 0x80235E68: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    func_800324B4_D8B4(rdram, ctx);
        goto after_0;
    // 0x80235E68: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    after_0:
    // 0x80235E6C: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x80235E70: lui         $v1, 0xFED5
    ctx->r3 = S32(0XFED5 << 16);
    // 0x80235E74: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80235E78: sw          $v1, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r3;
    // 0x80235E7C: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80235E80: sh          $v1, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r3;
    // 0x80235E84: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80235E88: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x80235E8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235E90: bne         $v1, $v0, L_80235EAC
    if (ctx->r3 != ctx->r2) {
        // 0x80235E94: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80235EAC;
    }
    // 0x80235E94: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80235E98: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80235E9C: jal         0x80050294
    // 0x80235EA0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80235EA0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80235EA4: j           L_80235EB4
    // 0x80235EA8: nop

        goto L_80235EB4;
    // 0x80235EA8: nop

L_80235EAC:
    // 0x80235EAC: jal         0x8005044C
    // 0x80235EB0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_2;
    // 0x80235EB0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
L_80235EB4:
    // 0x80235EB4: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80235EB8: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x80235EBC: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80235EC0: beq         $v1, $v0, L_80235F1C
    if (ctx->r3 == ctx->r2) {
        // 0x80235EC4: slti        $v0, $v1, 0x3D
        ctx->r2 = SIGNED(ctx->r3) < 0X3D ? 1 : 0;
            goto L_80235F1C;
    }
    // 0x80235EC4: slti        $v0, $v1, 0x3D
    ctx->r2 = SIGNED(ctx->r3) < 0X3D ? 1 : 0;
    // 0x80235EC8: beq         $v0, $zero, L_80235EE0
    if (ctx->r2 == 0) {
        // 0x80235ECC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80235EE0;
    }
    // 0x80235ECC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235ED0: beql        $v1, $v0, L_80235EF4
    if (ctx->r3 == ctx->r2) {
        // 0x80235ED4: sb          $zero, 0xA($s0)
        MEM_B(0XA, ctx->r16) = 0;
            goto L_80235EF4;
    }
    goto skip_0;
    // 0x80235ED4: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    skip_0:
    // 0x80235ED8: j           L_80235F40
    // 0x80235EDC: nop

        goto L_80235F40;
    // 0x80235EDC: nop

L_80235EE0:
    // 0x80235EE0: addiu       $v0, $zero, 0xAA
    ctx->r2 = ADD32(0, 0XAA);
    // 0x80235EE4: beql        $v1, $v0, L_80235F30
    if (ctx->r3 == ctx->r2) {
        // 0x80235EE8: sb          $zero, 0xA($s0)
        MEM_B(0XA, ctx->r16) = 0;
            goto L_80235F30;
    }
    goto skip_1;
    // 0x80235EE8: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    skip_1:
    // 0x80235EEC: j           L_80235F40
    // 0x80235EF0: nop

        goto L_80235F40;
    // 0x80235EF0: nop

L_80235EF4:
    // 0x80235EF4: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80235EF8: lw          $v0, 0x3C40($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3C40);
    // 0x80235EFC: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x80235F00: sb          $zero, 0x8($s0)
    MEM_B(0X8, ctx->r16) = 0;
    // 0x80235F04: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x80235F08: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80235F0C: lw          $v0, 0x3BEC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3BEC);
    // 0x80235F10: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80235F14: j           L_80235F40
    // 0x80235F18: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
        goto L_80235F40;
    // 0x80235F18: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
L_80235F1C:
    // 0x80235F1C: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80235F20: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80235F24: lw          $v0, 0x3C50($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3C50);
    // 0x80235F28: j           L_80235F3C
    // 0x80235F2C: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
        goto L_80235F3C;
    // 0x80235F2C: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_80235F30:
    // 0x80235F30: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80235F34: lw          $v0, 0x3C40($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3C40);
    // 0x80235F38: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_80235F3C:
    // 0x80235F3C: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
L_80235F40:
    // 0x80235F40: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80235F44: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80235F48: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80235F4C: jr          $ra
    // 0x80235F50: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80235F50: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802451EC_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802451EC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802451F0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x802451F4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802451F8: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x802451FC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80245200: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x80245204: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80245208: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    // 0x8024520C: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80245210: lbu         $v1, 0xB($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XB);
    // 0x80245214: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80245218: sltiu       $v1, $v1, 0xF0
    ctx->r3 = ctx->r3 < 0XF0 ? 1 : 0;
    // 0x8024521C: bne         $v1, $zero, L_8024522C
    if (ctx->r3 != 0) {
        // 0x80245220: sb          $v0, 0xA($s1)
        MEM_B(0XA, ctx->r17) = ctx->r2;
            goto L_8024522C;
    }
    // 0x80245220: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x80245224: jal         0x8004F4F8
    // 0x80245228: nop

    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_0;
    // 0x80245228: nop

    after_0:
L_8024522C:
    // 0x8024522C: lui         $s0, 0x801D
    ctx->r16 = S32(0X801D << 16);
    // 0x80245230: addiu       $s0, $s0, 0x4760
    ctx->r16 = ADD32(ctx->r16, 0X4760);
    // 0x80245234: jal         0x80031E5C
    // 0x80245238: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80031E5C_D25C(rdram, ctx);
        goto after_1;
    // 0x80245238: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8024523C: jal         0x80031E94
    // 0x80245240: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80031E94_D294(rdram, ctx);
        goto after_2;
    // 0x80245240: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80245244: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80245248: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x8024524C: addiu       $a1, $s1, 0xAC
    ctx->r5 = ADD32(ctx->r17, 0XAC);
    // 0x80245250: jal         0x8009A3B4
    // 0x80245254: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80245254: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x80245258: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8024525C: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x80245260: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80245264: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x80245268: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x8024526C: addiu       $a2, $a2, -0x236C
    ctx->r6 = ADD32(ctx->r6, -0X236C);
    // 0x80245270: lui         $a3, 0x801E
    ctx->r7 = S32(0X801E << 16);
    // 0x80245274: jal         0x80031F0C
    // 0x80245278: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    func_80031F0C_D30C(rdram, ctx);
        goto after_4;
    // 0x80245278: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    after_4:
    // 0x8024527C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80245280: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80245284: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x80245288: jal         0x8009A3B4
    // 0x8024528C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8024528C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_5:
    // 0x80245290: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80245294: lw          $v0, -0x3F50($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3F50);
    // 0x80245298: blez        $v0, L_802452FC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8024529C: sw          $v0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r2;
            goto L_802452FC;
    }
    // 0x8024529C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x802452A0: jal         0x800281C8
    // 0x802452A4: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_800281C8_35C8(rdram, ctx);
        goto after_6;
    // 0x802452A4: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_6:
    // 0x802452A8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x802452AC: beq         $s0, $zero, L_802452FC
    if (ctx->r16 == 0) {
        // 0x802452B0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802452FC;
    }
    // 0x802452B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802452B4: jal         0x8009A2B0
    // 0x802452B8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    bzero_recomp(rdram, ctx);
        goto after_7;
    // 0x802452B8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_7:
    // 0x802452BC: lhu         $v0, 0x10($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X10);
    // 0x802452C0: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    // 0x802452C4: lhu         $v0, 0x12($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X12);
    // 0x802452C8: sh          $v0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r2;
    // 0x802452CC: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x802452D0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802452D4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802452D8: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802452DC: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x802452E0: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x802452E4: lui         $a2, 0x8008
    ctx->r6 = S32(0X8008 << 16);
    // 0x802452E8: addiu       $a2, $a2, -0xCA0
    ctx->r6 = ADD32(ctx->r6, -0XCA0);
    // 0x802452EC: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x802452F0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802452F4: jal         0x800283A8
    // 0x802452F8: sh          $v0, 0x6($a3)
    MEM_H(0X6, ctx->r7) = ctx->r2;
    func_800283A8_37A8(rdram, ctx);
        goto after_8;
    // 0x802452F8: sh          $v0, 0x6($a3)
    MEM_H(0X6, ctx->r7) = ctx->r2;
    after_8:
L_802452FC:
    // 0x802452FC: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80245300: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80245304: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80245308: jr          $ra
    // 0x8024530C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8024530C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022A21C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A21C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A220: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022A224: jal         0x8022B884
    // 0x8022A228: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8022B884_ovl28(rdram, ctx);
        goto after_0;
    // 0x8022A228: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x8022A22C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022A230: jr          $ra
    // 0x8022A234: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A234: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233434_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233434: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80233438: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023343C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80233440: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80233444: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80233448: beq         $v0, $zero, L_80233470
    if (ctx->r2 == 0) {
        // 0x8023344C: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80233470;
    }
    // 0x8023344C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80233450: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80233454: addiu       $a1, $s0, 0x398
    ctx->r5 = ADD32(ctx->r16, 0X398);
    // 0x80233458: jal         0x8004F820
    // 0x8023345C: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8023345C: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    after_0:
    // 0x80233460: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80233464: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80233468: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8023346C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_80233470:
    // 0x80233470: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80233474: lbu         $a0, 0x9($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X9);
    // 0x80233478: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x8023347C: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80233480: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80233484: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80233488: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x8023348C: sb          $a0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r4;
    // 0x80233490: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80233494: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233498: jr          $ra
    // 0x8023349C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023349C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E940_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E940: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E944: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E948: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E94C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022E950: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x8022E954: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022E958: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022E95C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E960: bne         $v0, $zero, L_8022E9B4
    if (ctx->r2 != 0) {
        // 0x8022E964: addiu       $a1, $zero, 0x40
        ctx->r5 = ADD32(0, 0X40);
            goto L_8022E9B4;
    }
    // 0x8022E964: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8022E968: jal         0x8022FF44
    // 0x8022E96C: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_8022FF44_ovl28(rdram, ctx);
        goto after_0;
    // 0x8022E96C: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_0:
    // 0x8022E970: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022E974: beq         $v0, $zero, L_8022E9B0
    if (ctx->r2 == 0) {
        // 0x8022E978: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022E9B0;
    }
    // 0x8022E978: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E97C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022E980: jal         0x8022FEB8
    // 0x8022E984: nop

    func_8022FEB8_ovl28(rdram, ctx);
        goto after_1;
    // 0x8022E984: nop

    after_1:
    // 0x8022E988: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022E98C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022E990: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x8022E994: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022E998: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022E99C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022E9A0: addiu       $v1, $v1, 0x800
    ctx->r3 = ADD32(ctx->r3, 0X800);
    // 0x8022E9A4: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022E9A8: j           L_8022E9B4
    // 0x8022E9AC: sh          $v1, 0x364($s0)
    MEM_H(0X364, ctx->r16) = ctx->r3;
        goto L_8022E9B4;
    // 0x8022E9AC: sh          $v1, 0x364($s0)
    MEM_H(0X364, ctx->r16) = ctx->r3;
L_8022E9B0:
    // 0x8022E9B0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022E9B4:
    // 0x8022E9B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022E9B8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E9BC: jr          $ra
    // 0x8022E9C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E9C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023F894_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023F894: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8023F898: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023F89C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023F8A0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8023F8A4: sw          $fp, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r30;
    // 0x8023F8A8: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x8023F8AC: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x8023F8B0: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x8023F8B4: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8023F8B8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8023F8BC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8023F8C0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023F8C4: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x8023F8C8: sltiu       $v0, $v1, 0x9
    ctx->r2 = ctx->r3 < 0X9 ? 1 : 0;
    // 0x8023F8CC: beq         $v0, $zero, L_8023F8EC
    if (ctx->r2 == 0) {
        // 0x8023F8D0: addiu       $s4, $s1, 0x440
        ctx->r20 = ADD32(ctx->r17, 0X440);
            goto L_8023F8EC;
    }
    // 0x8023F8D0: addiu       $s4, $s1, 0x440
    ctx->r20 = ADD32(ctx->r17, 0X440);
    // 0x8023F8D4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8023F8D8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023F8DC: addu        $at, $at, $v0
    gpr jr_addend_8023F8E4 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023F8E0: lw          $v0, 0x6088($at)
    ctx->r2 = ADD32(ctx->r1, 0X6088);
    // 0x8023F8E4: jr          $v0
    // 0x8023F8E8: nop

    switch (jr_addend_8023F8E4 >> 2) {
        case 0: goto L_8023F8EC; break;
        case 1: goto L_8023F964; break;
        case 2: goto L_8023FA80; break;
        case 3: goto L_8023FA80; break;
        case 4: goto L_8023FA80; break;
        case 5: goto L_8023FA80; break;
        case 6: goto L_8023FA80; break;
        case 7: goto L_8023FA80; break;
        case 8: goto L_8023FA8C; break;
        default: switch_error(__func__, 0x8023F8E4, 0x80256088);
    }
    // 0x8023F8E8: nop

L_8023F8EC:
    // 0x8023F8EC: jal         0x8004EFE4
    // 0x8023F8F0: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_0;
    // 0x8023F8F0: nop

    after_0:
    // 0x8023F8F4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023F8F8: beq         $v1, $zero, L_8023F938
    if (ctx->r3 == 0) {
        // 0x8023F8FC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023F938;
    }
    // 0x8023F8FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023F900: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8023F904: addiu       $v0, $zero, 0x33
    ctx->r2 = ADD32(0, 0X33);
    // 0x8023F908: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8023F90C: addiu       $v0, $zero, 0xFC
    ctx->r2 = ADD32(0, 0XFC);
    // 0x8023F910: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x8023F914: addiu       $v0, $zero, 0xC8
    ctx->r2 = ADD32(0, 0XC8);
    // 0x8023F918: sh          $v0, 0x14($v1)
    MEM_H(0X14, ctx->r3) = ctx->r2;
    // 0x8023F91C: sh          $v0, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r2;
    // 0x8023F920: sh          $v0, 0x18($v1)
    MEM_H(0X18, ctx->r3) = ctx->r2;
    // 0x8023F924: addiu       $v0, $zero, 0x700
    ctx->r2 = ADD32(0, 0X700);
    // 0x8023F928: sh          $v0, 0x1A($v1)
    MEM_H(0X1A, ctx->r3) = ctx->r2;
    // 0x8023F92C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8023F930: sb          $v0, 0xB($v1)
    MEM_B(0XB, ctx->r3) = ctx->r2;
    // 0x8023F934: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_8023F938:
    // 0x8023F938: addiu       $a0, $zero, 0x20C
    ctx->r4 = ADD32(0, 0X20C);
    // 0x8023F93C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023F940: jal         0x8002A2F8
    // 0x8023F944: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_1;
    // 0x8023F944: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x8023F948: jal         0x80049EDC
    // 0x8023F94C: nop

    func_80049EDC_252DC(rdram, ctx);
        goto after_2;
    // 0x8023F94C: nop

    after_2:
    // 0x8023F950: sh          $zero, 0xCE($s4)
    MEM_H(0XCE, ctx->r20) = 0;
    // 0x8023F954: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x8023F958: addiu       $v1, $zero, 0x5A
    ctx->r3 = ADD32(0, 0X5A);
    // 0x8023F95C: j           L_8023FA84
    // 0x8023F960: sb          $v1, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r3;
        goto L_8023FA84;
    // 0x8023F960: sb          $v1, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r3;
L_8023F964:
    // 0x8023F964: lh          $v0, 0xCE($s4)
    ctx->r2 = MEM_H(ctx->r20, 0XCE);
    // 0x8023F968: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8023F96C: addu        $s2, $v1, $v0
    ctx->r18 = ADD32(ctx->r3, ctx->r2);
    // 0x8023F970: addiu       $v1, $s2, 0x3
    ctx->r3 = ADD32(ctx->r18, 0X3);
    // 0x8023F974: slt         $v0, $s2, $v1
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8023F978: beq         $v0, $zero, L_8023FA1C
    if (ctx->r2 == 0) {
        // 0x8023F97C: sll         $v0, $s2, 3
        ctx->r2 = S32(ctx->r18 << 3);
            goto L_8023FA1C;
    }
    // 0x8023F97C: sll         $v0, $s2, 3
    ctx->r2 = S32(ctx->r18 << 3);
    // 0x8023F980: addiu       $fp, $zero, 0x5
    ctx->r30 = ADD32(0, 0X5);
    // 0x8023F984: addiu       $s7, $zero, 0x80
    ctx->r23 = ADD32(0, 0X80);
    // 0x8023F988: addiu       $s6, $zero, 0x2
    ctx->r22 = ADD32(0, 0X2);
    // 0x8023F98C: addu        $s5, $v1, $zero
    ctx->r21 = ADD32(ctx->r3, 0);
    // 0x8023F990: addu        $s3, $v0, $s1
    ctx->r19 = ADD32(ctx->r2, ctx->r17);
L_8023F994:
    // 0x8023F994: jal         0x8004F144
    // 0x8023F998: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_3;
    // 0x8023F998: nop

    after_3:
    // 0x8023F99C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8023F9A0: beql        $s0, $zero, L_8023FA10
    if (ctx->r16 == 0) {
        // 0x8023F9A4: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_8023FA10;
    }
    goto skip_0;
    // 0x8023F9A4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_0:
    // 0x8023F9A8: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x8023F9AC: addiu       $a1, $s3, 0x180
    ctx->r5 = ADD32(ctx->r19, 0X180);
    // 0x8023F9B0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8023F9B4: sb          $fp, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r30;
    // 0x8023F9B8: sb          $s7, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r23;
    // 0x8023F9BC: jal         0x8009A3B4
    // 0x8023F9C0: sb          $s6, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r22;
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8023F9C0: sb          $s6, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r22;
    after_4:
    // 0x8023F9C4: jal         0x800A3450
    // 0x8023F9C8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    func_800A3450_7E850(rdram, ctx);
        goto after_5;
    // 0x8023F9C8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    after_5:
    // 0x8023F9CC: lhu         $v1, 0x38($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X38);
    // 0x8023F9D0: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8023F9D4: addiu       $v1, $v1, -0x80
    ctx->r3 = ADD32(ctx->r3, -0X80);
    // 0x8023F9D8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023F9DC: jal         0x800A3450
    // 0x8023F9E0: sh          $v1, 0x38($s0)
    MEM_H(0X38, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_6;
    // 0x8023F9E0: sh          $v1, 0x38($s0)
    MEM_H(0X38, ctx->r16) = ctx->r3;
    after_6:
    // 0x8023F9E4: lhu         $v1, 0x3A($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X3A);
    // 0x8023F9E8: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8023F9EC: addiu       $v1, $v1, -0x80
    ctx->r3 = ADD32(ctx->r3, -0X80);
    // 0x8023F9F0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023F9F4: jal         0x800A3450
    // 0x8023F9F8: sh          $v1, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_7;
    // 0x8023F9F8: sh          $v1, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r3;
    after_7:
    // 0x8023F9FC: lhu         $v1, 0x3C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X3C);
    // 0x8023FA00: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8023FA04: addiu       $v1, $v1, -0x80
    ctx->r3 = ADD32(ctx->r3, -0X80);
    // 0x8023FA08: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023FA0C: sh          $v1, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r3;
L_8023FA10:
    // 0x8023FA10: slt         $v0, $s2, $s5
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x8023FA14: bne         $v0, $zero, L_8023F994
    if (ctx->r2 != 0) {
        // 0x8023FA18: addiu       $s3, $s3, 0x8
        ctx->r19 = ADD32(ctx->r19, 0X8);
            goto L_8023F994;
    }
    // 0x8023FA18: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
L_8023FA1C:
    // 0x8023FA1C: lhu         $v0, 0xCE($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0XCE);
    // 0x8023FA20: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023FA24: sh          $v0, 0xCE($s4)
    MEM_H(0XCE, ctx->r20) = ctx->r2;
    // 0x8023FA28: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023FA2C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023FA30: slti        $v0, $v0, 0x5
    ctx->r2 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x8023FA34: beql        $v0, $zero, L_8023FA3C
    if (ctx->r2 == 0) {
        // 0x8023FA38: sh          $zero, 0xCE($s4)
        MEM_H(0XCE, ctx->r20) = 0;
            goto L_8023FA3C;
    }
    goto skip_1;
    // 0x8023FA38: sh          $zero, 0xCE($s4)
    MEM_H(0XCE, ctx->r20) = 0;
    skip_1:
L_8023FA3C:
    // 0x8023FA3C: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x8023FA40: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023FA44: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    // 0x8023FA48: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8023FA4C: bne         $v0, $zero, L_8023FA60
    if (ctx->r2 != 0) {
        // 0x8023FA50: nop
    
            goto L_8023FA60;
    }
    // 0x8023FA50: nop

    // 0x8023FA54: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x8023FA58: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023FA5C: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_8023FA60:
    // 0x8023FA60: lbu         $v1, 0xB($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XB);
    // 0x8023FA64: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8023FA68: bne         $v1, $v0, L_8023FA8C
    if (ctx->r3 != ctx->r2) {
        // 0x8023FA6C: nop
    
            goto L_8023FA8C;
    }
    // 0x8023FA6C: nop

    // 0x8023FA70: jal         0x8006036C
    // 0x8023FA74: addiu       $a0, $zero, 0x6C
    ctx->r4 = ADD32(0, 0X6C);
    func_8006036C_3B76C(rdram, ctx);
        goto after_8;
    // 0x8023FA74: addiu       $a0, $zero, 0x6C
    ctx->r4 = ADD32(0, 0X6C);
    after_8:
    // 0x8023FA78: j           L_8023FA8C
    // 0x8023FA7C: nop

        goto L_8023FA8C;
    // 0x8023FA7C: nop

L_8023FA80:
    // 0x8023FA80: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
L_8023FA84:
    // 0x8023FA84: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023FA88: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_8023FA8C:
    // 0x8023FA8C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8023FA90: lw          $fp, 0x30($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X30);
    // 0x8023FA94: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x8023FA98: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x8023FA9C: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x8023FAA0: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8023FAA4: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8023FAA8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8023FAAC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023FAB0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023FAB4: jr          $ra
    // 0x8023FAB8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8023FAB8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80225A08_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225A08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225A0C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225A10: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225A14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225A18: lbu         $v1, 0x5($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X5);
    // 0x80225A1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225A20: beq         $v1, $v0, L_80225A70
    if (ctx->r3 == ctx->r2) {
        // 0x80225A24: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80225A70;
    }
    // 0x80225A24: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80225A28: beql        $v0, $zero, L_80225A40
    if (ctx->r2 == 0) {
        // 0x80225A2C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80225A40;
    }
    goto skip_0;
    // 0x80225A2C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80225A30: beq         $v1, $zero, L_80225A58
    if (ctx->r3 == 0) {
        // 0x80225A34: nop
    
            goto L_80225A58;
    }
    // 0x80225A34: nop

    // 0x80225A38: j           L_80225AD4
    // 0x80225A3C: nop

        goto L_80225AD4;
    // 0x80225A3C: nop

L_80225A40:
    // 0x80225A40: beq         $v1, $v0, L_80225A58
    if (ctx->r3 == ctx->r2) {
        // 0x80225A44: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80225A58;
    }
    // 0x80225A44: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80225A48: beq         $v1, $v0, L_80225AB0
    if (ctx->r3 == ctx->r2) {
        // 0x80225A4C: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_80225AB0;
    }
    // 0x80225A4C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225A50: j           L_80225AD4
    // 0x80225A54: nop

        goto L_80225AD4;
    // 0x80225A54: nop

L_80225A58:
    // 0x80225A58: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x80225A5C: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80225A60: jalr        $v0
    // 0x80225A64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80225A64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80225A68: j           L_80225ACC
    // 0x80225A6C: nop

        goto L_80225ACC;
    // 0x80225A6C: nop

L_80225A70:
    // 0x80225A70: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x80225A74: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80225A78: jalr        $v0
    // 0x80225A7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x80225A7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80225A80: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80225A84: andi        $v0, $v1, 0x80
    ctx->r2 = ctx->r3 & 0X80;
    // 0x80225A88: bne         $v0, $zero, L_80225ACC
    if (ctx->r2 != 0) {
        // 0x80225A8C: andi        $v0, $v1, 0x1
        ctx->r2 = ctx->r3 & 0X1;
            goto L_80225ACC;
    }
    // 0x80225A8C: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x80225A90: beq         $v0, $zero, L_80225ACC
    if (ctx->r2 == 0) {
        // 0x80225A94: nop
    
            goto L_80225ACC;
    }
    // 0x80225A94: nop

    // 0x80225A98: jal         0x80036E48
    // 0x80225A9C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_80036E48_12248(rdram, ctx);
        goto after_2;
    // 0x80225A9C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_2:
    // 0x80225AA0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225AA4: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x80225AA8: j           L_80225ACC
    // 0x80225AAC: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
        goto L_80225ACC;
    // 0x80225AAC: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
L_80225AB0:
    // 0x80225AB0: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80225AB4: bne         $v1, $v0, L_80225A70
    if (ctx->r3 != ctx->r2) {
        // 0x80225AB8: nop
    
            goto L_80225A70;
    }
    // 0x80225AB8: nop

    // 0x80225ABC: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225AC0: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x80225AC4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225AC8: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225ACC:
    // 0x80225ACC: jal         0x8005FB90
    // 0x80225AD0: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_3;
    // 0x80225AD0: nop

    after_3:
L_80225AD4:
    // 0x80225AD4: jal         0x8006072C
    // 0x80225AD8: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_4;
    // 0x80225AD8: nop

    after_4:
    // 0x80225ADC: beq         $v0, $zero, L_80225AF0
    if (ctx->r2 == 0) {
        // 0x80225AE0: nop
    
            goto L_80225AF0;
    }
    // 0x80225AE0: nop

    // 0x80225AE4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80225AE8: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80225AEC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80225AF0:
    // 0x80225AF0: jal         0x80060018
    // 0x80225AF4: nop

    func_80060018_3B418(rdram, ctx);
        goto after_5;
    // 0x80225AF4: nop

    after_5:
    // 0x80225AF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225AFC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225B00: jr          $ra
    // 0x80225B04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225B04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023A388_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A388: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023A38C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023A390: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023A394: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023A398: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x8023A39C: beq         $v0, $zero, L_8023A3AC
    if (ctx->r2 == 0) {
        // 0x8023A3A0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8023A3AC;
    }
    // 0x8023A3A0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8023A3A4: lw          $v0, 0x4F0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4F0);
    // 0x8023A3A8: sltu        $a0, $zero, $v0
    ctx->r4 = 0 < ctx->r2 ? 1 : 0;
L_8023A3AC:
    // 0x8023A3AC: lh          $v1, 0x6E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X6E);
    // 0x8023A3B0: lh          $v0, 0xB0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XB0);
    // 0x8023A3B4: bnel        $v1, $v0, L_8023A3BC
    if (ctx->r3 != ctx->r2) {
        // 0x8023A3B8: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_8023A3BC;
    }
    goto skip_0;
    // 0x8023A3B8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_0:
L_8023A3BC:
    // 0x8023A3BC: beq         $a0, $zero, L_8023A3E0
    if (ctx->r4 == 0) {
        // 0x8023A3C0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023A3E0;
    }
    // 0x8023A3C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023A3C4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8023A3C8: jal         0x80050294
    // 0x8023A3CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8023A3CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8023A3D0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023A3D4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023A3D8: j           L_8023A3E8
    // 0x8023A3DC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8023A3E8;
    // 0x8023A3DC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8023A3E0:
    // 0x8023A3E0: jal         0x8005044C
    // 0x8023A3E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x8023A3E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_8023A3E8:
    // 0x8023A3E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023A3EC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023A3F0: jr          $ra
    // 0x8023A3F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023A3F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D690_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D690: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022D694: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D698: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D69C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022D6A0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022D6A4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022D6A8: lw          $v1, 0x33C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X33C);
    // 0x8022D6AC: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x8022D6B0: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8022D6B4: and         $a0, $v1, $v0
    ctx->r4 = ctx->r3 & ctx->r2;
    // 0x8022D6B8: beq         $a0, $zero, L_8022D914
    if (ctx->r4 == 0) {
        // 0x8022D6BC: addiu       $s2, $s0, 0x328
        ctx->r18 = ADD32(ctx->r16, 0X328);
            goto L_8022D914;
    }
    // 0x8022D6BC: addiu       $s2, $s0, 0x328
    ctx->r18 = ADD32(ctx->r16, 0X328);
    // 0x8022D6C0: lui         $v0, 0x3800
    ctx->r2 = S32(0X3800 << 16);
    // 0x8022D6C4: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8022D6C8: beql        $v0, $zero, L_8022D90C
    if (ctx->r2 == 0) {
        // 0x8022D6CC: addiu       $a0, $zero, 0xA3
        ctx->r4 = ADD32(0, 0XA3);
            goto L_8022D90C;
    }
    goto skip_0;
    // 0x8022D6CC: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    skip_0:
    // 0x8022D6D0: lhu         $v0, 0x6E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6E);
    // 0x8022D6D4: lhu         $v1, 0x6E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X6E);
    // 0x8022D6D8: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022D6DC: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    // 0x8022D6E0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D6E4: bgtz        $v0, L_8022D724
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022D6E8: sh          $v1, 0xB2($s0)
        MEM_H(0XB2, ctx->r16) = ctx->r3;
            goto L_8022D724;
    }
    // 0x8022D6E8: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    // 0x8022D6EC: lhu         $v0, 0x328($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X328);
    // 0x8022D6F0: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022D6F4: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8022D6F8: lw          $a0, 0x298($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X298);
    // 0x8022D6FC: andi        $v0, $v0, 0xFFFD
    ctx->r2 = ctx->r2 & 0XFFFD;
    // 0x8022D700: ori         $v0, $v0, 0x48
    ctx->r2 = ctx->r2 | 0X48;
    // 0x8022D704: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022D708: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022D70C: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
    // 0x8022D710: lh          $v0, 0x32E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X32E);
    // 0x8022D714: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x8022D718: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022D71C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022D720: lbu         $a0, 0x9($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X9);
L_8022D724:
    // 0x8022D724: lhu         $v0, 0x328($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X328);
    // 0x8022D728: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8022D72C: beq         $v0, $zero, L_8022D890
    if (ctx->r2 == 0) {
        // 0x8022D730: lui         $v1, 0x2000
        ctx->r3 = S32(0X2000 << 16);
            goto L_8022D890;
    }
    // 0x8022D730: lui         $v1, 0x2000
    ctx->r3 = S32(0X2000 << 16);
    // 0x8022D734: lhu         $v0, 0x332($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X332);
    // 0x8022D738: lw          $v1, 0x33C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X33C);
    // 0x8022D73C: addu        $a1, $v0, $a0
    ctx->r5 = ADD32(ctx->r2, ctx->r4);
    // 0x8022D740: lui         $v0, 0x2000
    ctx->r2 = S32(0X2000 << 16);
    // 0x8022D744: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8022D748: bne         $v1, $zero, L_8022D7B0
    if (ctx->r3 != 0) {
        // 0x8022D74C: sh          $a1, 0x332($s0)
        MEM_H(0X332, ctx->r16) = ctx->r5;
            goto L_8022D7B0;
    }
    // 0x8022D74C: sh          $a1, 0x332($s0)
    MEM_H(0X332, ctx->r16) = ctx->r5;
    // 0x8022D750: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8022D754: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8022D758: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x8022D75C: lh          $a0, 0x32E($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X32E);
    // 0x8022D760: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D764: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022D768: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x8022D76C: sll         $v0, $a0, 4
    ctx->r2 = S32(ctx->r4 << 4);
    // 0x8022D770: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022D774: lbu         $v1, 0x9($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X9);
    // 0x8022D778: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x8022D77C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022D780: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022D784: beq         $v0, $zero, L_8022D7B0
    if (ctx->r2 == 0) {
        // 0x8022D788: nop
    
            goto L_8022D7B0;
    }
    // 0x8022D788: nop

    // 0x8022D78C: bnel        $a0, $zero, L_8022D8EC
    if (ctx->r4 != 0) {
        // 0x8022D790: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_8022D8EC;
    }
    goto skip_1;
    // 0x8022D790: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    skip_1:
    // 0x8022D794: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022D798: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022D79C: bnel        $v1, $v0, L_8022D7A4
    if (ctx->r3 != ctx->r2) {
        // 0x8022D7A0: sh          $zero, 0xA($s0)
        MEM_H(0XA, ctx->r16) = 0;
            goto L_8022D7A4;
    }
    goto skip_2;
    // 0x8022D7A0: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    skip_2:
L_8022D7A4:
    // 0x8022D7A4: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022D7A8: j           L_8022D8E8
    // 0x8022D7AC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022D8E8;
    // 0x8022D7AC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022D7B0:
    // 0x8022D7B0: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022D7B4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022D7B8: beq         $v1, $v0, L_8022D8E8
    if (ctx->r3 == ctx->r2) {
        // 0x8022D7BC: addiu       $a0, $zero, 0xA2
        ctx->r4 = ADD32(0, 0XA2);
            goto L_8022D8E8;
    }
    // 0x8022D7BC: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
    // 0x8022D7C0: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x8022D7C4: jal         0x8002A33C
    // 0x8022D7C8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8022D7C8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_0:
    // 0x8022D7CC: lhu         $v0, 0x22($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X22);
    // 0x8022D7D0: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022D7D4: beq         $v0, $zero, L_8022D824
    if (ctx->r2 == 0) {
        // 0x8022D7D8: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022D824;
    }
    // 0x8022D7D8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022D7DC: jal         0x8004EC38
    // 0x8022D7E0: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    func_8004EC38_2A038(rdram, ctx);
        goto after_1;
    // 0x8022D7E0: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    after_1:
    // 0x8022D7E4: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    // 0x8022D7E8: lh          $v1, 0x56($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X56);
    // 0x8022D7EC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D7F0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022D7F4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022D7F8: addiu       $v1, $v1, 0x400
    ctx->r3 = ADD32(ctx->r3, 0X400);
    // 0x8022D7FC: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022D800: slti        $v1, $v1, 0x800
    ctx->r3 = SIGNED(ctx->r3) < 0X800 ? 1 : 0;
    // 0x8022D804: beq         $v1, $zero, L_8022D81C
    if (ctx->r3 == 0) {
        // 0x8022D808: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_8022D81C;
    }
    // 0x8022D808: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022D80C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022D810: lhu         $v0, 0x44($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X44);
    // 0x8022D814: j           L_8022D884
    // 0x8022D818: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
        goto L_8022D884;
    // 0x8022D818: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022D81C:
    // 0x8022D81C: j           L_8022D870
    // 0x8022D820: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_8022D870;
    // 0x8022D820: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8022D824:
    // 0x8022D824: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022D828: addiu       $a0, $a0, 0x306C
    ctx->r4 = ADD32(ctx->r4, 0X306C);
    // 0x8022D82C: jal         0x8004EC38
    // 0x8022D830: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    func_8004EC38_2A038(rdram, ctx);
        goto after_2;
    // 0x8022D830: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    after_2:
    // 0x8022D834: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    // 0x8022D838: lh          $v1, 0x56($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X56);
    // 0x8022D83C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D840: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022D844: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022D848: addiu       $v0, $v0, 0x400
    ctx->r2 = ADD32(ctx->r2, 0X400);
    // 0x8022D84C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022D850: slti        $v0, $v0, 0x800
    ctx->r2 = SIGNED(ctx->r2) < 0X800 ? 1 : 0;
    // 0x8022D854: beq         $v0, $zero, L_8022D86C
    if (ctx->r2 == 0) {
        // 0x8022D858: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_8022D86C;
    }
    // 0x8022D858: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022D85C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022D860: lhu         $v0, 0x44($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X44);
    // 0x8022D864: j           L_8022D884
    // 0x8022D868: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
        goto L_8022D884;
    // 0x8022D868: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022D86C:
    // 0x8022D86C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_8022D870:
    // 0x8022D870: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022D874: lhu         $v0, 0x44($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X44);
    // 0x8022D878: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022D87C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022D880: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022D884:
    // 0x8022D884: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8022D888: j           L_8022D8F4
    // 0x8022D88C: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
        goto L_8022D8F4;
    // 0x8022D88C: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
L_8022D890:
    // 0x8022D890: lw          $v0, 0x33C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X33C);
    // 0x8022D894: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022D898: bne         $v0, $zero, L_8022D8D8
    if (ctx->r2 != 0) {
        // 0x8022D89C: nop
    
            goto L_8022D8D8;
    }
    // 0x8022D89C: nop

    // 0x8022D8A0: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8022D8A4: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8022D8A8: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x8022D8AC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D8B0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022D8B4: lh          $v1, 0x32E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X32E);
    // 0x8022D8B8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022D8BC: lh          $a0, 0x332($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X332);
    // 0x8022D8C0: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8022D8C4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022D8C8: lbu         $v0, 0x9($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X9);
    // 0x8022D8CC: slt         $a0, $a0, $v0
    ctx->r4 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022D8D0: bne         $a0, $zero, L_8022D8EC
    if (ctx->r4 != 0) {
        // 0x8022D8D4: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_8022D8EC;
    }
    // 0x8022D8D4: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
L_8022D8D8:
    // 0x8022D8D8: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022D8DC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022D8E0: bne         $v1, $v0, L_8022D8EC
    if (ctx->r3 != ctx->r2) {
        // 0x8022D8E4: addiu       $a0, $zero, 0xA2
        ctx->r4 = ADD32(0, 0XA2);
            goto L_8022D8EC;
    }
    // 0x8022D8E4: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
L_8022D8E8:
    // 0x8022D8E8: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
L_8022D8EC:
    // 0x8022D8EC: jal         0x8002A33C
    // 0x8022D8F0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x8022D8F0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_3:
L_8022D8F4:
    // 0x8022D8F4: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022D8F8: addiu       $v1, $zero, 0x7FFF
    ctx->r3 = ADD32(0, 0X7FFF);
    // 0x8022D8FC: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x8022D900: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x8022D904: j           L_8022D914
    // 0x8022D908: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
        goto L_8022D914;
    // 0x8022D908: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
L_8022D90C:
    // 0x8022D90C: jal         0x8002A33C
    // 0x8022D910: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x8022D910: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_4:
L_8022D914:
    // 0x8022D914: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D918: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022D91C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022D920: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022D924: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D928: jr          $ra
    // 0x8022D92C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022D92C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023A468_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A468: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023A46C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023A470: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023A474: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023A478: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8023A47C: beq         $v0, $zero, L_8023A49C
    if (ctx->r2 == 0) {
        // 0x8023A480: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_8023A49C;
    }
    // 0x8023A480: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8023A484: jal         0x80050294
    // 0x8023A488: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8023A488: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8023A48C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023A490: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023A494: j           L_8023A4B8
    // 0x8023A498: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8023A4B8;
    // 0x8023A498: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8023A49C:
    // 0x8023A49C: jal         0x8005044C
    // 0x8023A4A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x8023A4A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8023A4A4: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8023A4A8: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8023A4AC: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x8023A4B0: jal         0x8004DA90
    // 0x8023A4B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8023A4B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_8023A4B8:
    // 0x8023A4B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023A4BC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023A4C0: jr          $ra
    // 0x8023A4C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023A4C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B1B8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B1B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022B1BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B1C0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B1C4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022B1C8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022B1CC: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x8022B1D0: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8022B1D4: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8022B1D8: addiu       $v0, $zero, 0x4B
    ctx->r2 = ADD32(0, 0X4B);
    // 0x8022B1DC: beq         $v1, $v0, L_8022B298
    if (ctx->r3 == ctx->r2) {
        // 0x8022B1E0: slti        $v0, $v1, 0x4C
        ctx->r2 = SIGNED(ctx->r3) < 0X4C ? 1 : 0;
            goto L_8022B298;
    }
    // 0x8022B1E0: slti        $v0, $v1, 0x4C
    ctx->r2 = SIGNED(ctx->r3) < 0X4C ? 1 : 0;
    // 0x8022B1E4: beq         $v0, $zero, L_8022B21C
    if (ctx->r2 == 0) {
        // 0x8022B1E8: addiu       $v0, $zero, 0x2D
        ctx->r2 = ADD32(0, 0X2D);
            goto L_8022B21C;
    }
    // 0x8022B1E8: addiu       $v0, $zero, 0x2D
    ctx->r2 = ADD32(0, 0X2D);
    // 0x8022B1EC: beq         $v1, $v0, L_8022B298
    if (ctx->r3 == ctx->r2) {
        // 0x8022B1F0: slti        $v0, $v1, 0x2E
        ctx->r2 = SIGNED(ctx->r3) < 0X2E ? 1 : 0;
            goto L_8022B298;
    }
    // 0x8022B1F0: slti        $v0, $v1, 0x2E
    ctx->r2 = SIGNED(ctx->r3) < 0X2E ? 1 : 0;
    // 0x8022B1F4: beql        $v0, $zero, L_8022B20C
    if (ctx->r2 == 0) {
        // 0x8022B1F8: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_8022B20C;
    }
    goto skip_0;
    // 0x8022B1F8: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    skip_0:
    // 0x8022B1FC: beq         $v1, $zero, L_8022B238
    if (ctx->r3 == 0) {
        // 0x8022B200: nop
    
            goto L_8022B238;
    }
    // 0x8022B200: nop

    // 0x8022B204: j           L_8022B2C0
    // 0x8022B208: nop

        goto L_8022B2C0;
    // 0x8022B208: nop

L_8022B20C:
    // 0x8022B20C: beq         $v1, $v0, L_8022B2A8
    if (ctx->r3 == ctx->r2) {
        // 0x8022B210: nop
    
            goto L_8022B2A8;
    }
    // 0x8022B210: nop

    // 0x8022B214: j           L_8022B2C0
    // 0x8022B218: nop

        goto L_8022B2C0;
    // 0x8022B218: nop

L_8022B21C:
    // 0x8022B21C: addiu       $v0, $zero, 0x5F
    ctx->r2 = ADD32(0, 0X5F);
    // 0x8022B220: beq         $v1, $v0, L_8022B2A8
    if (ctx->r3 == ctx->r2) {
        // 0x8022B224: addiu       $v0, $zero, 0x69
        ctx->r2 = ADD32(0, 0X69);
            goto L_8022B2A8;
    }
    // 0x8022B224: addiu       $v0, $zero, 0x69
    ctx->r2 = ADD32(0, 0X69);
    // 0x8022B228: beq         $v1, $v0, L_8022B2B8
    if (ctx->r3 == ctx->r2) {
        // 0x8022B22C: nop
    
            goto L_8022B2B8;
    }
    // 0x8022B22C: nop

    // 0x8022B230: j           L_8022B2C0
    // 0x8022B234: nop

        goto L_8022B2C0;
    // 0x8022B234: nop

L_8022B238:
    // 0x8022B238: jal         0x8004F488
    // 0x8022B23C: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    func_8004F488_2A888(rdram, ctx);
        goto after_0;
    // 0x8022B23C: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    after_0:
    // 0x8022B240: jal         0x8004F418
    // 0x8022B244: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    func_8004F418_2A818(rdram, ctx);
        goto after_1;
    // 0x8022B244: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    after_1:
    // 0x8022B248: sw          $zero, 0x28($s0)
    MEM_W(0X28, ctx->r16) = 0;
    // 0x8022B24C: sw          $zero, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = 0;
    // 0x8022B250: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022B254: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x8022B258: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022B25C: jal         0x8022B750
    // 0x8022B260: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_8022B750_ovl28(rdram, ctx);
        goto after_2;
    // 0x8022B260: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_2:
    // 0x8022B264: jal         0x8022B784
    // 0x8022B268: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_8022B784_ovl28(rdram, ctx);
        goto after_3;
    // 0x8022B268: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_3:
    // 0x8022B26C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022B270: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B274: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x8022B278: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x8022B27C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8022B280: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x8022B284: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022B288: jal         0x8022B6D0
    // 0x8022B28C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    func_8022B6D0_ovl28(rdram, ctx);
        goto after_4;
    // 0x8022B28C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    after_4:
    // 0x8022B290: j           L_8022B2C0
    // 0x8022B294: nop

        goto L_8022B2C0;
    // 0x8022B294: nop

L_8022B298:
    // 0x8022B298: jal         0x8022B784
    // 0x8022B29C: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    func_8022B784_ovl28(rdram, ctx);
        goto after_5;
    // 0x8022B29C: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    after_5:
    // 0x8022B2A0: j           L_8022B2C0
    // 0x8022B2A4: nop

        goto L_8022B2C0;
    // 0x8022B2A4: nop

L_8022B2A8:
    // 0x8022B2A8: jal         0x8022B784
    // 0x8022B2AC: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_8022B784_ovl28(rdram, ctx);
        goto after_6;
    // 0x8022B2AC: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_6:
    // 0x8022B2B0: j           L_8022B2C0
    // 0x8022B2B4: nop

        goto L_8022B2C0;
    // 0x8022B2B4: nop

L_8022B2B8:
    // 0x8022B2B8: jal         0x8022B750
    // 0x8022B2BC: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    func_8022B750_ovl28(rdram, ctx);
        goto after_7;
    // 0x8022B2BC: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    after_7:
L_8022B2C0:
    // 0x8022B2C0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022B2C4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022B2C8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B2CC: jr          $ra
    // 0x8022B2D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022B2D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80246330_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80246330: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80246334: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80246338: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8024633C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80246340: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80246344: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80246348: lw          $v0, 0x4D40($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4D40);
    // 0x8024634C: jalr        $v0
    // 0x80246350: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80246350: nop

    after_0:
    // 0x80246354: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80246358: jr          $ra
    // 0x8024635C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024635C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80239F60_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239F60: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80239F64: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80239F68: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80239F6C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80239F70: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80239F74: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80239F78: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80239F7C: jal         0x8009A3B4
    // 0x80239F80: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80239F80: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x80239F84: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80239F88: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80239F8C: jal         0x8009A3B4
    // 0x80239F90: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80239F90: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80239F94: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80239F98: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80239F9C: jal         0x8009A3B4
    // 0x80239FA0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80239FA0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80239FA4: lbu         $v1, 0xAC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAC);
    // 0x80239FA8: lbu         $a1, 0x74($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X74);
    // 0x80239FAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239FB0: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80239FB4: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80239FB8: sb          $v1, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r3;
    // 0x80239FBC: jal         0x8023A058
    // 0x80239FC0: sb          $a1, 0x75($s0)
    MEM_B(0X75, ctx->r16) = ctx->r5;
    func_8023A058_ovl28(rdram, ctx);
        goto after_3;
    // 0x80239FC0: sb          $a1, 0x75($s0)
    MEM_B(0X75, ctx->r16) = ctx->r5;
    after_3:
    // 0x80239FC4: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x80239FC8: bne         $v0, $zero, L_80239FD8
    if (ctx->r2 != 0) {
        // 0x80239FCC: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_80239FD8;
    }
    // 0x80239FCC: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x80239FD0: j           L_80239FE4
    // 0x80239FD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80239FE4;
    // 0x80239FD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80239FD8:
    // 0x80239FD8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80239FDC: jal         0x800540D0
    // 0x80239FE0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_800540D0_2F4D0(rdram, ctx);
        goto after_4;
    // 0x80239FE0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
L_80239FE4:
    // 0x80239FE4: sw          $v0, 0x4F0($s0)
    MEM_W(0X4F0, ctx->r16) = ctx->r2;
    // 0x80239FE8: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80239FEC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80239FF0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80239FF4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80239FF8: lw          $v0, 0x4598($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4598);
    // 0x80239FFC: jalr        $v0
    // 0x8023A000: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x8023A000: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8023A004: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8023A008: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023A00C: beq         $v1, $v0, L_8023A044
    if (ctx->r3 == ctx->r2) {
        // 0x8023A010: nop
    
            goto L_8023A044;
    }
    // 0x8023A010: nop

    // 0x8023A014: jal         0x8023A29C
    // 0x8023A018: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023A29C_ovl28(rdram, ctx);
        goto after_6;
    // 0x8023A018: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x8023A01C: jal         0x8023A208
    // 0x8023A020: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023A208_ovl28(rdram, ctx);
        goto after_7;
    // 0x8023A020: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x8023A024: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8023A028: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8023A02C: beq         $v0, $zero, L_8023A044
    if (ctx->r2 == 0) {
        // 0x8023A030: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023A044;
    }
    // 0x8023A030: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023A034: addiu       $a1, $zero, 0x118
    ctx->r5 = ADD32(0, 0X118);
    // 0x8023A038: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8023A03C: jal         0x8003B564
    // 0x8023A040: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_8;
    // 0x8023A040: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_8:
L_8023A044:
    // 0x8023A044: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023A048: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023A04C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023A050: jr          $ra
    // 0x8023A054: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023A054: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80244678_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80244678: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8024467C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80244680: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80244684: lui         $v1, 0x400
    ctx->r3 = S32(0X400 << 16);
    // 0x80244688: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8024468C: lbu         $a0, 0x1($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X1);
    // 0x80244690: ori         $v1, $v1, 0x40
    ctx->r3 = ctx->r3 | 0X40;
    // 0x80244694: addiu       $v0, $s0, 0xC8
    ctx->r2 = ADD32(ctx->r16, 0XC8);
    // 0x80244698: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8024469C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802446A0: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x802446A4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802446A8: ori         $a3, $zero, 0xA000
    ctx->r7 = 0 | 0XA000;
    // 0x802446AC: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x802446B0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802446B4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x802446B8: sw          $a0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r4;
    // 0x802446BC: jal         0x80051E18
    // 0x802446C0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_80051E18_2D218(rdram, ctx);
        goto after_0;
    // 0x802446C0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x802446C4: sw          $zero, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = 0;
    // 0x802446C8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802446CC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802446D0: jr          $ra
    // 0x802446D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x802446D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80245194_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80245194: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80245198: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x8024519C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802451A0: lbu         $v0, 0xB($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0XB);
    // 0x802451A4: addiu       $v0, $v0, -0x20
    ctx->r2 = ADD32(ctx->r2, -0X20);
    // 0x802451A8: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    // 0x802451AC: bgtz        $a1, L_802451C4
    if (SIGNED(ctx->r5) > 0) {
        // 0x802451B0: sb          $v0, 0xB($a2)
        MEM_B(0XB, ctx->r6) = ctx->r2;
            goto L_802451C4;
    }
    // 0x802451B0: sb          $v0, 0xB($a2)
    MEM_B(0XB, ctx->r6) = ctx->r2;
    // 0x802451B4: jal         0x8004F4F8
    // 0x802451B8: nop

    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_0;
    // 0x802451B8: nop

    after_0:
    // 0x802451BC: j           L_802451E0
    // 0x802451C0: nop

        goto L_802451E0;
    // 0x802451C0: nop

L_802451C4:
    // 0x802451C4: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x802451C8: sll         $v1, $a1, 8
    ctx->r3 = S32(ctx->r5 << 8);
    // 0x802451CC: lui         $a0, 0x200
    ctx->r4 = S32(0X200 << 16);
    // 0x802451D0: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x802451D4: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x802451D8: or          $v0, $v0, $a1
    ctx->r2 = ctx->r2 | ctx->r5;
    // 0x802451DC: sw          $v0, 0xB4($a2)
    MEM_W(0XB4, ctx->r6) = ctx->r2;
L_802451E0:
    // 0x802451E0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802451E4: jr          $ra
    // 0x802451E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802451E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022EF08_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EF08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022EF0C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022EF10: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022EF14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022EF18: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022EF1C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022EF20: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022EF24: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022EF28: jal         0x8022FEB8
    // 0x8022EF2C: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    func_8022FEB8_ovl28(rdram, ctx);
        goto after_0;
    // 0x8022EF2C: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022EF30: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022EF34: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022EF38: sh          $v0, 0x366($s0)
    MEM_H(0X366, ctx->r16) = ctx->r2;
    // 0x8022EF3C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022EF40: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022EF44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022EF48: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022EF4C: jr          $ra
    // 0x8022EF50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022EF50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802482FC_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802482FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80248300: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80248304: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x80248308: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024830C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80248310: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80248314: lw          $v0, 0x50F8($at)
    ctx->r2 = MEM_W(ctx->r1, 0X50F8);
    // 0x80248318: jalr        $v0
    // 0x8024831C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8024831C: nop

    after_0:
    // 0x80248320: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80248324: jr          $ra
    // 0x80248328: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80248328: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023CAE8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023CAE8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8023CAEC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8023CAF0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023CAF4: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8023CAF8: addiu       $s1, $s0, 0x440
    ctx->r17 = ADD32(ctx->r16, 0X440);
    // 0x8023CAFC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8023CB00: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x8023CB04: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8023CB08: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8023CB0C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8023CB10: jal         0x8009A3B4
    // 0x8023CB14: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8023CB14: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_0:
    // 0x8023CB18: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8023CB1C: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8023CB20: jal         0x8009A3B4
    // 0x8023CB24: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8023CB24: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8023CB28: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8023CB2C: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8023CB30: jal         0x8009A3B4
    // 0x8023CB34: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8023CB34: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8023CB38: addiu       $a0, $zero, 0x4210
    ctx->r4 = ADD32(0, 0X4210);
    // 0x8023CB3C: addiu       $v1, $zero, 0xF
    ctx->r3 = ADD32(0, 0XF);
    // 0x8023CB40: addiu       $v0, $s0, 0x78
    ctx->r2 = ADD32(ctx->r16, 0X78);
L_8023CB44:
    // 0x8023CB44: sh          $a0, 0x186($v0)
    MEM_H(0X186, ctx->r2) = ctx->r4;
    // 0x8023CB48: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8023CB4C: bgez        $v1, L_8023CB44
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8023CB50: addiu       $v0, $v0, -0x8
        ctx->r2 = ADD32(ctx->r2, -0X8);
            goto L_8023CB44;
    }
    // 0x8023CB50: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x8023CB54: jal         0x800A3450
    // 0x8023CB58: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x8023CB58: nop

    after_3:
    // 0x8023CB5C: jal         0x80049EBC
    // 0x8023CB60: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
    func_80049EBC_252BC(rdram, ctx);
        goto after_4;
    // 0x8023CB60: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
    after_4:
    // 0x8023CB64: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x8023CB68: lbu         $v1, 0xF($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XF);
    // 0x8023CB6C: andi        $v0, $v0, 0xF8
    ctx->r2 = ctx->r2 & 0XF8;
    // 0x8023CB70: andi        $v1, $v1, 0x11
    ctx->r3 = ctx->r3 & 0X11;
    // 0x8023CB74: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x8023CB78: sb          $v1, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r3;
    // 0x8023CB7C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023CB80: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x8023CB84: beq         $v0, $zero, L_8023CB94
    if (ctx->r2 == 0) {
        // 0x8023CB88: nop
    
            goto L_8023CB94;
    }
    // 0x8023CB88: nop

    // 0x8023CB8C: jal         0x8023F324
    // 0x8023CB90: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023F324_ovl28(rdram, ctx);
        goto after_5;
    // 0x8023CB90: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
L_8023CB94:
    // 0x8023CB94: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8023CB98: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023CB9C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023CBA0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023CBA4: lw          $v0, 0x485C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X485C);
    // 0x8023CBA8: jalr        $v0
    // 0x8023CBAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_6;
    // 0x8023CBAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x8023CBB0: lb          $v0, 0x53($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X53);
    // 0x8023CBB4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023CBB8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023CBBC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023CBC0: lw          $v0, 0x4894($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4894);
    // 0x8023CBC4: beq         $v0, $zero, L_8023CBDC
    if (ctx->r2 == 0) {
        // 0x8023CBC8: sw          $v0, 0x78($s0)
        MEM_W(0X78, ctx->r16) = ctx->r2;
            goto L_8023CBDC;
    }
    // 0x8023CBC8: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x8023CBCC: jal         0x80040F30
    // 0x8023CBD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_7;
    // 0x8023CBD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x8023CBD4: j           L_8023CBE0
    // 0x8023CBD8: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
        goto L_8023CBE0;
    // 0x8023CBD8: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
L_8023CBDC:
    // 0x8023CBDC: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
L_8023CBE0:
    // 0x8023CBE0: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023CBE4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8023CBE8: beq         $v0, $zero, L_8023CC7C
    if (ctx->r2 == 0) {
        // 0x8023CBEC: nop
    
            goto L_8023CC7C;
    }
    // 0x8023CBEC: nop

    // 0x8023CBF0: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8023CBF4: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x8023CBF8: beq         $v0, $zero, L_8023CC68
    if (ctx->r2 == 0) {
        // 0x8023CBFC: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8023CC68;
    }
    // 0x8023CBFC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8023CC00: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023CC04: addu        $at, $at, $v0
    gpr jr_addend_8023CC0C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023CC08: lw          $v0, 0x5FF0($at)
    ctx->r2 = ADD32(ctx->r1, 0X5FF0);
    // 0x8023CC0C: jr          $v0
    // 0x8023CC10: nop

    switch (jr_addend_8023CC0C >> 2) {
        case 0: goto L_8023CC38; break;
        case 1: goto L_8023CC5C; break;
        case 2: goto L_8023CC38; break;
        case 3: goto L_8023CC38; break;
        case 4: goto L_8023CC38; break;
        case 5: goto L_8023CC14; break;
        case 6: goto L_8023CC38; break;
        default: switch_error(__func__, 0x8023CC0C, 0x80255FF0);
    }
    // 0x8023CC10: nop

L_8023CC14:
    // 0x8023CC14: lh          $v0, 0x6E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6E);
    // 0x8023CC18: blez        $v0, L_8023CC54
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8023CC1C: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_8023CC54;
    }
    // 0x8023CC1C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8023CC20: lhu         $v0, 0x70($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X70);
    // 0x8023CC24: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023CC28: sh          $v0, 0x70($s1)
    MEM_H(0X70, ctx->r17) = ctx->r2;
    // 0x8023CC2C: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8023CC30: bnel        $v0, $zero, L_8023CC70
    if (ctx->r2 != 0) {
        // 0x8023CC34: sh          $zero, 0xA($s0)
        MEM_H(0XA, ctx->r16) = 0;
            goto L_8023CC70;
    }
    goto skip_0;
    // 0x8023CC34: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    skip_0:
L_8023CC38:
    // 0x8023CC38: lh          $v0, 0x6E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6E);
    // 0x8023CC3C: blez        $v0, L_8023CC54
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8023CC40: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_8023CC54;
    }
    // 0x8023CC40: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8023CC44: jal         0x8023F16C
    // 0x8023CC48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023F16C_ovl28(rdram, ctx);
        goto after_8;
    // 0x8023CC48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x8023CC4C: j           L_8023CC70
    // 0x8023CC50: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_8023CC70;
    // 0x8023CC50: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8023CC54:
    // 0x8023CC54: j           L_8023CC6C
    // 0x8023CC58: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8023CC6C;
    // 0x8023CC58: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8023CC5C:
    // 0x8023CC5C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023CC60: j           L_8023CC6C
    // 0x8023CC64: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8023CC6C;
    // 0x8023CC64: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8023CC68:
    // 0x8023CC68: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_8023CC6C:
    // 0x8023CC6C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8023CC70:
    // 0x8023CC70: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023CC74: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x8023CC78: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8023CC7C:
    // 0x8023CC7C: lh          $v0, 0xA($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XA);
    // 0x8023CC80: beq         $v0, $zero, L_8023CC90
    if (ctx->r2 == 0) {
        // 0x8023CC84: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8023CC90;
    }
    // 0x8023CC84: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023CC88: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8023CC8C: sh          $v0, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r2;
L_8023CC90:
    // 0x8023CC90: lhu         $v0, 0x78($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X78);
    // 0x8023CC94: beq         $v0, $zero, L_8023CCA4
    if (ctx->r2 == 0) {
        // 0x8023CC98: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8023CCA4;
    }
    // 0x8023CC98: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023CC9C: j           L_8023CCAC
    // 0x8023CCA0: sh          $v0, 0x78($s1)
    MEM_H(0X78, ctx->r17) = ctx->r2;
        goto L_8023CCAC;
    // 0x8023CCA0: sh          $v0, 0x78($s1)
    MEM_H(0X78, ctx->r17) = ctx->r2;
L_8023CCA4:
    // 0x8023CCA4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023CCA8: sh          $v0, 0x7A($s1)
    MEM_H(0X7A, ctx->r17) = ctx->r2;
L_8023CCAC:
    // 0x8023CCAC: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023CCB0: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x8023CCB4: beq         $v0, $zero, L_8023CCEC
    if (ctx->r2 == 0) {
        // 0x8023CCB8: nop
    
            goto L_8023CCEC;
    }
    // 0x8023CCB8: nop

    // 0x8023CCBC: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x8023CCC0: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8023CCC4: beq         $v0, $a1, L_8023CCDC
    if (ctx->r2 == ctx->r5) {
        // 0x8023CCC8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023CCDC;
    }
    // 0x8023CCC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023CCCC: jal         0x80050294
    // 0x8023CCD0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_9;
    // 0x8023CCD0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_9:
    // 0x8023CCD4: j           L_8023CCFC
    // 0x8023CCD8: nop

        goto L_8023CCFC;
    // 0x8023CCD8: nop

L_8023CCDC:
    // 0x8023CCDC: jal         0x8005044C
    // 0x8023CCE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_10;
    // 0x8023CCE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_10:
    // 0x8023CCE4: j           L_8023CCFC
    // 0x8023CCE8: nop

        goto L_8023CCFC;
    // 0x8023CCE8: nop

L_8023CCEC:
    // 0x8023CCEC: jal         0x80051770
    // 0x8023CCF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051770_2CB70(rdram, ctx);
        goto after_11;
    // 0x8023CCF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_11:
    // 0x8023CCF4: jal         0x80051248
    // 0x8023CCF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051248_2C648(rdram, ctx);
        goto after_12;
    // 0x8023CCF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_12:
L_8023CCFC:
    // 0x8023CCFC: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x8023CD00: lhu         $v1, 0x2C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X2C);
    // 0x8023CD04: lhu         $a0, 0x2E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X2E);
    // 0x8023CD08: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8023CD0C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8023CD10: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8023CD14: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x8023CD18: lhu         $a1, 0x30($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X30);
    // 0x8023CD1C: lhu         $v1, 0x18($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X18);
    // 0x8023CD20: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8023CD24: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8023CD28: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8023CD2C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8023CD30: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x8023CD34: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8023CD38: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8023CD3C: beq         $v0, $zero, L_8023CD64
    if (ctx->r2 == 0) {
        // 0x8023CD40: sh          $v1, 0x48($s0)
        MEM_H(0X48, ctx->r16) = ctx->r3;
            goto L_8023CD64;
    }
    // 0x8023CD40: sh          $v1, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r3;
    // 0x8023CD44: lh          $v1, 0x186($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X186);
    // 0x8023CD48: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8023CD4C: bne         $v1, $v0, L_8023CD64
    if (ctx->r3 != ctx->r2) {
        // 0x8023CD50: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023CD64;
    }
    // 0x8023CD50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023CD54: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x8023CD58: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8023CD5C: jal         0x8003B564
    // 0x8023CD60: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_13;
    // 0x8023CD60: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_13:
L_8023CD64:
    // 0x8023CD64: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8023CD68: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8023CD6C: beq         $v0, $zero, L_8023CE34
    if (ctx->r2 == 0) {
        // 0x8023CD70: nop
    
            goto L_8023CE34;
    }
    // 0x8023CD70: nop

    // 0x8023CD74: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023CD78: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8023CD7C: beq         $v0, $zero, L_8023CE34
    if (ctx->r2 == 0) {
        // 0x8023CD80: nop
    
            goto L_8023CE34;
    }
    // 0x8023CD80: nop

    // 0x8023CD84: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023CD88: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x8023CD8C: beq         $v0, $zero, L_8023CD9C
    if (ctx->r2 == 0) {
        // 0x8023CD90: sh          $zero, 0x38($s1)
        MEM_H(0X38, ctx->r17) = 0;
            goto L_8023CD9C;
    }
    // 0x8023CD90: sh          $zero, 0x38($s1)
    MEM_H(0X38, ctx->r17) = 0;
    // 0x8023CD94: j           L_8023CDA0
    // 0x8023CD98: addiu       $v0, $zero, -0x200
    ctx->r2 = ADD32(0, -0X200);
        goto L_8023CDA0;
    // 0x8023CD98: addiu       $v0, $zero, -0x200
    ctx->r2 = ADD32(0, -0X200);
L_8023CD9C:
    // 0x8023CD9C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
L_8023CDA0:
    // 0x8023CDA0: sh          $v0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r2;
    // 0x8023CDA4: addiu       $a0, $s0, 0x240
    ctx->r4 = ADD32(ctx->r16, 0X240);
    // 0x8023CDA8: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    // 0x8023CDAC: addiu       $a2, $s1, 0x40
    ctx->r6 = ADD32(ctx->r17, 0X40);
    // 0x8023CDB0: jal         0x800308E8
    // 0x8023CDB4: sh          $zero, 0x3C($s1)
    MEM_H(0X3C, ctx->r17) = 0;
    func_800308E8_BCE8(rdram, ctx);
        goto after_14;
    // 0x8023CDB4: sh          $zero, 0x3C($s1)
    MEM_H(0X3C, ctx->r17) = 0;
    after_14:
    // 0x8023CDB8: lw          $v1, 0x40($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X40);
    // 0x8023CDBC: lhu         $v0, 0x180($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X180);
    // 0x8023CDC0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023CDC4: lw          $v1, 0x44($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X44);
    // 0x8023CDC8: sh          $v0, 0x10($s1)
    MEM_H(0X10, ctx->r17) = ctx->r2;
    // 0x8023CDCC: lhu         $v0, 0x182($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X182);
    // 0x8023CDD0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023CDD4: lw          $v1, 0x48($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X48);
    // 0x8023CDD8: sh          $v0, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r2;
    // 0x8023CDDC: lhu         $v0, 0x184($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X184);
    // 0x8023CDE0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023CDE4: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
    // 0x8023CDE8: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x8023CDEC: addiu       $a0, $s1, 0x10
    ctx->r4 = ADD32(ctx->r17, 0X10);
    // 0x8023CDF0: addiu       $v0, $s1, 0x18
    ctx->r2 = ADD32(ctx->r17, 0X18);
    // 0x8023CDF4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8023CDF8: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8023CDFC: lb          $v0, 0x52($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X52);
    // 0x8023CE00: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    // 0x8023CE04: lhu         $v1, 0x8($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X8);
    // 0x8023CE08: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023CE0C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023CE10: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023CE14: lw          $v0, 0x48A0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X48A0);
    // 0x8023CE18: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023CE1C: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8023CE20: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8023CE24: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8023CE28: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8023CE2C: jal         0x80051E18
    // 0x8023CE30: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80051E18_2D218(rdram, ctx);
        goto after_15;
    // 0x8023CE30: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_15:
L_8023CE34:
    // 0x8023CE34: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x8023CE38: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8023CE3C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8023CE40: jr          $ra
    // 0x8023CE44: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8023CE44: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80233980_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233980: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80233984: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80233988: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023398C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80233990: lui         $a0, 0xFF
    ctx->r4 = S32(0XFF << 16);
    // 0x80233994: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80233998: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8023399C: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x802339A0: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x802339A4: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x802339A8: lw          $a1, 0x378($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X378);
    // 0x802339AC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802339B0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802339B4: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x802339B8: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x802339BC: and         $v1, $a1, $a0
    ctx->r3 = ctx->r5 & ctx->r4;
    // 0x802339C0: lbu         $s2, 0xA($v0)
    ctx->r18 = MEM_BU(ctx->r2, 0XA);
    // 0x802339C4: beq         $v1, $zero, L_80233AAC
    if (ctx->r3 == 0) {
        // 0x802339C8: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_80233AAC;
    }
    // 0x802339C8: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x802339CC: lui         $v0, 0x3800
    ctx->r2 = S32(0X3800 << 16);
    // 0x802339D0: and         $v0, $a1, $v0
    ctx->r2 = ctx->r5 & ctx->r2;
    // 0x802339D4: beq         $v0, $zero, L_80233AAC
    if (ctx->r2 == 0) {
        // 0x802339D8: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80233AAC;
    }
    // 0x802339D8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802339DC: lhu         $v0, 0x35E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X35E);
    // 0x802339E0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802339E4: addiu       $a1, $s0, 0x380
    ctx->r5 = ADD32(ctx->r16, 0X380);
    // 0x802339E8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x802339EC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802339F0: jal         0x8004FEA0
    // 0x802339F4: sh          $v0, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r2;
    func_8004FEA0_2B2A0(rdram, ctx);
        goto after_0;
    // 0x802339F4: sh          $v0, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r2;
    after_0:
    // 0x802339F8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802339FC: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x80233A00: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80233A04: beq         $v0, $zero, L_80233A14
    if (ctx->r2 == 0) {
        // 0x80233A08: sw          $v1, 0x354($s0)
        MEM_W(0X354, ctx->r16) = ctx->r3;
            goto L_80233A14;
    }
    // 0x80233A08: sw          $v1, 0x354($s0)
    MEM_W(0X354, ctx->r16) = ctx->r3;
    // 0x80233A0C: addiu       $v0, $v1, 0x800
    ctx->r2 = ADD32(ctx->r3, 0X800);
    // 0x80233A10: sw          $v0, 0x354($s0)
    MEM_W(0X354, ctx->r16) = ctx->r2;
L_80233A14:
    // 0x80233A14: lh          $v0, 0x35E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35E);
    // 0x80233A18: lhu         $a0, 0x356($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X356);
    // 0x80233A1C: slt         $v0, $s2, $v0
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80233A20: bne         $v0, $zero, L_80233A3C
    if (ctx->r2 != 0) {
        // 0x80233A24: sw          $a0, 0x354($s0)
        MEM_W(0X354, ctx->r16) = ctx->r4;
            goto L_80233A3C;
    }
    // 0x80233A24: sw          $a0, 0x354($s0)
    MEM_W(0X354, ctx->r16) = ctx->r4;
    // 0x80233A28: lw          $v0, 0x378($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X378);
    // 0x80233A2C: lui         $v1, 0x2000
    ctx->r3 = S32(0X2000 << 16);
    // 0x80233A30: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80233A34: beq         $v0, $zero, L_80233A48
    if (ctx->r2 == 0) {
        // 0x80233A38: nop
    
            goto L_80233A48;
    }
    // 0x80233A38: nop

L_80233A3C:
    // 0x80233A3C: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    // 0x80233A40: j           L_80233AA0
    // 0x80233A44: sh          $zero, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = 0;
        goto L_80233AA0;
    // 0x80233A44: sh          $zero, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = 0;
L_80233A48:
    // 0x80233A48: jal         0x800324B4
    // 0x80233A4C: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    func_800324B4_D8B4(rdram, ctx);
        goto after_1;
    // 0x80233A4C: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    after_1:
    // 0x80233A50: lw          $a0, 0x354($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X354);
    // 0x80233A54: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x80233A58: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x80233A5C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80233A60: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80233A64: lhu         $a1, 0x14($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X14);
    // 0x80233A68: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80233A6C: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x80233A70: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    // 0x80233A74: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x80233A78: jal         0x80032498
    // 0x80233A7C: sh          $a1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r5;
    func_80032498_D898(rdram, ctx);
        goto after_2;
    // 0x80233A7C: sh          $a1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r5;
    after_2:
    // 0x80233A80: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x80233A84: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80233A88: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80233A8C: lhu         $a0, 0x18($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X18);
    // 0x80233A90: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80233A94: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x80233A98: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x80233A9C: sh          $a0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r4;
L_80233AA0:
    // 0x80233AA0: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    // 0x80233AA4: jal         0x8002A33C
    // 0x80233AA8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x80233AA8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_3:
L_80233AAC:
    // 0x80233AAC: sll         $v0, $s1, 24
    ctx->r2 = S32(ctx->r17 << 24);
    // 0x80233AB0: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80233AB4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80233AB8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80233ABC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80233AC0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233AC4: jr          $ra
    // 0x80233AC8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80233AC8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80233ACC: nop

;}
RECOMP_FUNC void func_80226654_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226654: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226658: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022665C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226660: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226664: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80226668: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022666C: bne         $v1, $v0, L_802266B4
    if (ctx->r3 != ctx->r2) {
        // 0x80226670: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_802266B4;
    }
    // 0x80226670: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80226674: lui         $s1, 0x8025
    ctx->r17 = S32(0X8025 << 16);
    // 0x80226678: addiu       $s1, $s1, 0x4E8
    ctx->r17 = ADD32(ctx->r17, 0X4E8);
    // 0x8022667C: sll         $v0, $s0, 24
    ctx->r2 = S32(ctx->r16 << 24);
L_80226680:
    // 0x80226680: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80226684: sll         $a0, $v0, 2
    ctx->r4 = S32(ctx->r2 << 2);
    // 0x80226688: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8022668C: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x80226690: jal         0x8005FA7C
    // 0x80226694: addu        $a0, $a0, $s1
    ctx->r4 = ADD32(ctx->r4, ctx->r17);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_0;
    // 0x80226694: addu        $a0, $a0, $s1
    ctx->r4 = ADD32(ctx->r4, ctx->r17);
    after_0:
    // 0x80226698: addiu       $v0, $s0, 0x1
    ctx->r2 = ADD32(ctx->r16, 0X1);
    // 0x8022669C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x802266A0: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802266A4: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x802266A8: slti        $v0, $v0, 0x7
    ctx->r2 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
    // 0x802266AC: bne         $v0, $zero, L_80226680
    if (ctx->r2 != 0) {
        // 0x802266B0: sll         $v0, $s0, 24
        ctx->r2 = S32(ctx->r16 << 24);
            goto L_80226680;
    }
    // 0x802266B0: sll         $v0, $s0, 24
    ctx->r2 = S32(ctx->r16 << 24);
L_802266B4:
    // 0x802266B4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802266B8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802266BC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802266C0: jr          $ra
    // 0x802266C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802266C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023F16C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023F16C: lhu         $a1, 0x440($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0X440);
    // 0x8023F170: andi        $v0, $a1, 0x40
    ctx->r2 = ctx->r5 & 0X40;
    // 0x8023F174: bne         $v0, $zero, L_8023F190
    if (ctx->r2 != 0) {
        // 0x8023F178: addiu       $t2, $a0, 0x440
        ctx->r10 = ADD32(ctx->r4, 0X440);
            goto L_8023F190;
    }
    // 0x8023F178: addiu       $t2, $a0, 0x440
    ctx->r10 = ADD32(ctx->r4, 0X440);
    // 0x8023F17C: ori         $v0, $a1, 0x40
    ctx->r2 = ctx->r5 | 0X40;
    // 0x8023F180: lui         $t3, 0x8025
    ctx->r11 = S32(0X8025 << 16);
    // 0x8023F184: addiu       $t3, $t3, 0x496C
    ctx->r11 = ADD32(ctx->r11, 0X496C);
    // 0x8023F188: j           L_8023F1C0
    // 0x8023F18C: sh          $v0, 0x440($a0)
    MEM_H(0X440, ctx->r4) = ctx->r2;
        goto L_8023F1C0;
    // 0x8023F18C: sh          $v0, 0x440($a0)
    MEM_H(0X440, ctx->r4) = ctx->r2;
L_8023F190:
    // 0x8023F190: lhu         $v0, 0xB0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XB0);
    // 0x8023F194: lh          $v1, 0x6E($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X6E);
    // 0x8023F198: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023F19C: sra         $v0, $v0, 17
    ctx->r2 = S32(SIGNED(ctx->r2) >> 17);
    // 0x8023F1A0: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8023F1A4: lui         $t3, 0x8025
    ctx->r11 = S32(0X8025 << 16);
    // 0x8023F1A8: addiu       $t3, $t3, 0x497C
    ctx->r11 = ADD32(ctx->r11, 0X497C);
    // 0x8023F1AC: bne         $v1, $zero, L_8023F1BC
    if (ctx->r3 != 0) {
        // 0x8023F1B0: andi        $v0, $a1, 0xFFBF
        ctx->r2 = ctx->r5 & 0XFFBF;
            goto L_8023F1BC;
    }
    // 0x8023F1B0: andi        $v0, $a1, 0xFFBF
    ctx->r2 = ctx->r5 & 0XFFBF;
    // 0x8023F1B4: lui         $t3, 0x8025
    ctx->r11 = S32(0X8025 << 16);
    // 0x8023F1B8: addiu       $t3, $t3, 0x4974
    ctx->r11 = ADD32(ctx->r11, 0X4974);
L_8023F1BC:
    // 0x8023F1BC: sh          $v0, 0x440($a0)
    MEM_H(0X440, ctx->r4) = ctx->r2;
L_8023F1C0:
    // 0x8023F1C0: addu        $t1, $zero, $zero
    ctx->r9 = ADD32(0, 0);
    // 0x8023F1C4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023F1C8: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
L_8023F1CC:
    // 0x8023F1CC: sra         $a2, $v0, 16
    ctx->r6 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023F1D0: lbu         $v1, 0x7C($t2)
    ctx->r3 = MEM_BU(ctx->r10, 0X7C);
    // 0x8023F1D4: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023F1D8: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8023F1DC: lbu         $v0, 0x498C($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X498C);
    // 0x8023F1E0: bne         $v1, $v0, L_8023F20C
    if (ctx->r3 != ctx->r2) {
        // 0x8023F1E4: sll         $v0, $a1, 16
        ctx->r2 = S32(ctx->r5 << 16);
            goto L_8023F20C;
    }
    // 0x8023F1E4: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x8023F1E8: lbu         $v0, 0x7D($t2)
    ctx->r2 = MEM_BU(ctx->r10, 0X7D);
    // 0x8023F1EC: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x8023F1F0: bne         $v0, $zero, L_8023F20C
    if (ctx->r2 != 0) {
        // 0x8023F1F4: sll         $v0, $a1, 16
        ctx->r2 = S32(ctx->r5 << 16);
            goto L_8023F20C;
    }
    // 0x8023F1F4: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x8023F1F8: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023F1FC: addu        $at, $at, $a2
    ctx->r1 = ADD32(ctx->r1, ctx->r6);
    // 0x8023F200: sb          $zero, 0x4984($at)
    MEM_B(0X4984, ctx->r1) = 0;
    // 0x8023F204: j           L_8023F22C
    // 0x8023F208: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
        goto L_8023F22C;
    // 0x8023F208: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
L_8023F20C:
    // 0x8023F20C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023F210: addu        $v1, $t3, $v0
    ctx->r3 = ADD32(ctx->r11, ctx->r2);
    // 0x8023F214: lbu         $v1, 0x0($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X0);
    // 0x8023F218: addu        $t1, $v1, $t1
    ctx->r9 = ADD32(ctx->r3, ctx->r9);
    // 0x8023F21C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023F220: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023F224: sb          $v1, 0x4984($at)
    MEM_B(0X4984, ctx->r1) = ctx->r3;
    // 0x8023F228: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
L_8023F22C:
    // 0x8023F22C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8023F230: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023F234: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023F238: slti        $v0, $v0, 0x5
    ctx->r2 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x8023F23C: bne         $v0, $zero, L_8023F1CC
    if (ctx->r2 != 0) {
        // 0x8023F240: sll         $v0, $a1, 16
        ctx->r2 = S32(ctx->r5 << 16);
            goto L_8023F1CC;
    }
    // 0x8023F240: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x8023F244: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x8023F248: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023F24C: lhu         $a3, 0x2($t2)
    ctx->r7 = MEM_HU(ctx->r10, 0X2);
    // 0x8023F250: sll         $v0, $t1, 16
    ctx->r2 = S32(ctx->r9 << 16);
    // 0x8023F254: sra         $a2, $v0, 16
    ctx->r6 = S32(SIGNED(ctx->r2) >> 16);
L_8023F258:
    // 0x8023F258: div         $zero, $a3, $a2
    lo = S32(S64(S32(ctx->r7)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r7)) % S64(S32(ctx->r6)));
    // 0x8023F25C: bne         $a2, $zero, L_8023F268
    if (ctx->r6 != 0) {
        // 0x8023F260: nop
    
            goto L_8023F268;
    }
    // 0x8023F260: nop

    // 0x8023F264: break       7
    do_break(2149839460);
L_8023F268:
    // 0x8023F268: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023F26C: bne         $a2, $at, L_8023F280
    if (ctx->r6 != ctx->r1) {
        // 0x8023F270: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8023F280;
    }
    // 0x8023F270: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8023F274: bne         $a3, $at, L_8023F280
    if (ctx->r7 != ctx->r1) {
        // 0x8023F278: nop
    
            goto L_8023F280;
    }
    // 0x8023F278: nop

    // 0x8023F27C: break       6
    do_break(2149839484);
L_8023F280:
    // 0x8023F280: mfhi        $v1
    ctx->r3 = hi;
    // 0x8023F284: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x8023F288: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023F28C: addu        $v0, $t3, $v0
    ctx->r2 = ADD32(ctx->r11, ctx->r2);
    // 0x8023F290: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8023F294: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x8023F298: addu        $t0, $v0, $zero
    ctx->r8 = ADD32(ctx->r2, 0);
    // 0x8023F29C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023F2A0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023F2A4: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8023F2A8: bne         $v1, $zero, L_8023F2C8
    if (ctx->r3 != 0) {
        // 0x8023F2AC: addiu       $v0, $a1, 0x1
        ctx->r2 = ADD32(ctx->r5, 0X1);
            goto L_8023F2C8;
    }
    // 0x8023F2AC: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x8023F2B0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8023F2B4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023F2B8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023F2BC: slti        $v0, $v0, 0x5
    ctx->r2 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x8023F2C0: bne         $v0, $zero, L_8023F258
    if (ctx->r2 != 0) {
        // 0x8023F2C4: nop
    
            goto L_8023F258;
    }
    // 0x8023F2C4: nop

L_8023F2C8:
    // 0x8023F2C8: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x8023F2CC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023F2D0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023F2D4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023F2D8: lbu         $v0, 0x498C($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X498C);
    // 0x8023F2DC: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x8023F2E0: lbu         $v1, 0x9($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X9);
    // 0x8023F2E4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8023F2E8: bne         $v1, $v0, L_8023F2F8
    if (ctx->r3 != ctx->r2) {
        // 0x8023F2EC: sh          $zero, 0xA($a0)
        MEM_H(0XA, ctx->r4) = 0;
            goto L_8023F2F8;
    }
    // 0x8023F2EC: sh          $zero, 0xA($a0)
    MEM_H(0XA, ctx->r4) = 0;
    // 0x8023F2F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023F2F4: sh          $v0, 0x70($t2)
    MEM_H(0X70, ctx->r10) = ctx->r2;
L_8023F2F8:
    // 0x8023F2F8: lbu         $v1, 0x7C($t2)
    ctx->r3 = MEM_BU(ctx->r10, 0X7C);
    // 0x8023F2FC: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x8023F300: bnel        $v1, $v0, L_8023F314
    if (ctx->r3 != ctx->r2) {
        // 0x8023F304: sb          $zero, 0x7D($t2)
        MEM_B(0X7D, ctx->r10) = 0;
            goto L_8023F314;
    }
    goto skip_0;
    // 0x8023F304: sb          $zero, 0x7D($t2)
    MEM_B(0X7D, ctx->r10) = 0;
    skip_0:
    // 0x8023F308: lbu         $v0, 0x7D($t2)
    ctx->r2 = MEM_BU(ctx->r10, 0X7D);
    // 0x8023F30C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023F310: sb          $v0, 0x7D($t2)
    MEM_B(0X7D, ctx->r10) = ctx->r2;
L_8023F314:
    // 0x8023F314: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x8023F318: sb          $v0, 0x7C($t2)
    MEM_B(0X7C, ctx->r10) = ctx->r2;
    // 0x8023F31C: jr          $ra
    // 0x8023F320: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x8023F320: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_80242378_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80242378: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8024237C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80242380: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80242384: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80242388: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8024238C: lbu         $a1, 0xF($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XF);
    // 0x80242390: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x80242394: andi        $v0, $a1, 0x1
    ctx->r2 = ctx->r5 & 0X1;
    // 0x80242398: bne         $v0, $zero, L_802423B4
    if (ctx->r2 != 0) {
        // 0x8024239C: sb          $v1, 0xB($s0)
        MEM_B(0XB, ctx->r16) = ctx->r3;
            goto L_802423B4;
    }
    // 0x8024239C: sb          $v1, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r3;
    // 0x802423A0: lhu         $v0, 0x9A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X9A);
    // 0x802423A4: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x802423A8: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x802423AC: j           L_80242458
    // 0x802423B0: sh          $v0, 0x9A($s0)
    MEM_H(0X9A, ctx->r16) = ctx->r2;
        goto L_80242458;
    // 0x802423B0: sh          $v0, 0x9A($s0)
    MEM_H(0X9A, ctx->r16) = ctx->r2;
L_802423B4:
    // 0x802423B4: lui         $a0, 0x2AAA
    ctx->r4 = S32(0X2AAA << 16);
    // 0x802423B8: ori         $a0, $a0, 0xAAAB
    ctx->r4 = ctx->r4 | 0XAAAB;
    // 0x802423BC: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x802423C0: addiu       $v1, $zero, 0xF0
    ctx->r3 = ADD32(0, 0XF0);
    // 0x802423C4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x802423C8: mult        $v1, $a0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802423CC: sra         $v0, $v1, 31
    ctx->r2 = S32(SIGNED(ctx->r3) >> 31);
    // 0x802423D0: mfhi        $t2
    ctx->r10 = hi;
    // 0x802423D4: subu        $a0, $t2, $v0
    ctx->r4 = SUB32(ctx->r10, ctx->r2);
    // 0x802423D8: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x802423DC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x802423E0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802423E4: subu        $a0, $v1, $v0
    ctx->r4 = SUB32(ctx->r3, ctx->r2);
    // 0x802423E8: andi        $v0, $a1, 0x8
    ctx->r2 = ctx->r5 & 0X8;
    // 0x802423EC: bne         $v0, $zero, L_80242418
    if (ctx->r2 != 0) {
        // 0x802423F0: sll         $v0, $a0, 1
        ctx->r2 = S32(ctx->r4 << 1);
            goto L_80242418;
    }
    // 0x802423F0: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x802423F4: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x802423F8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802423FC: lbu         $v1, 0x4B20($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4B20);
    // 0x80242400: sb          $v1, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r3;
    // 0x80242404: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80242408: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024240C: lbu         $v0, 0x4B21($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X4B21);
    // 0x80242410: j           L_80242438
    // 0x80242414: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
        goto L_80242438;
    // 0x80242414: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_80242418:
    // 0x80242418: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x8024241C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80242420: lbu         $v1, 0x4B2C($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4B2C);
    // 0x80242424: sb          $v1, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r3;
    // 0x80242428: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024242C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80242430: lbu         $v0, 0x4B2D($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X4B2D);
    // 0x80242434: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_80242438:
    // 0x80242438: lui         $v0, 0x2C80
    ctx->r2 = S32(0X2C80 << 16);
    // 0x8024243C: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x80242440: sw          $v0, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r2;
    // 0x80242444: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80242448: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x8024244C: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80242450: jal         0x8003B6B8
    // 0x80242454: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B6B8_16AB8(rdram, ctx);
        goto after_0;
    // 0x80242454: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
L_80242458:
    // 0x80242458: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8024245C: beql        $v0, $zero, L_80242504
    if (ctx->r2 == 0) {
        // 0x80242460: sb          $zero, 0x0($s0)
        MEM_B(0X0, ctx->r16) = 0;
            goto L_80242504;
    }
    goto skip_0;
    // 0x80242460: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    skip_0:
    // 0x80242464: lh          $v0, 0x16($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X16);
    // 0x80242468: bgezl       $v0, L_80242504
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8024246C: sb          $zero, 0x0($s0)
        MEM_B(0X0, ctx->r16) = 0;
            goto L_80242504;
    }
    goto skip_1;
    // 0x8024246C: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    skip_1:
    // 0x80242470: lhu         $v0, 0x44($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X44);
    // 0x80242474: lhu         $v1, 0x4C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4C);
    // 0x80242478: lhu         $t0, 0x4E($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X4E);
    // 0x8024247C: lhu         $t1, 0x50($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X50);
    // 0x80242480: lw          $a3, 0x1C($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X1C);
    // 0x80242484: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80242488: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8024248C: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x80242490: lhu         $v1, 0x48($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X48);
    // 0x80242494: lh          $a2, 0x44($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X44);
    // 0x80242498: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x8024249C: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
    // 0x802424A0: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x802424A4: lh          $v0, 0x46($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X46);
    // 0x802424A8: sll         $a2, $a2, 8
    ctx->r6 = S32(ctx->r6 << 8);
    // 0x802424AC: addu        $a3, $a3, $a2
    ctx->r7 = ADD32(ctx->r7, ctx->r6);
    // 0x802424B0: sh          $v1, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r3;
    // 0x802424B4: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x802424B8: lh          $a2, 0x48($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X48);
    // 0x802424BC: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x802424C0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802424C4: sw          $a3, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r7;
    // 0x802424C8: lw          $a3, 0x24($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X24);
    // 0x802424CC: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x802424D0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802424D4: sll         $a2, $a2, 8
    ctx->r6 = S32(ctx->r6 << 8);
    // 0x802424D8: addu        $a3, $a3, $a2
    ctx->r7 = ADD32(ctx->r7, ctx->r6);
    // 0x802424DC: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x802424E0: jal         0x8004DD04
    // 0x802424E4: sw          $a3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r7;
    func_8004DD04_29104(rdram, ctx);
        goto after_1;
    // 0x802424E4: sw          $a3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r7;
    after_1:
    // 0x802424E8: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x802424EC: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x802424F0: lhu         $a0, 0x18($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X18);
    // 0x802424F4: sh          $v0, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r2;
    // 0x802424F8: sh          $v1, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r3;
    // 0x802424FC: j           L_8024250C
    // 0x80242500: sh          $a0, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r4;
        goto L_8024250C;
    // 0x80242500: sh          $a0, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r4;
L_80242504:
    // 0x80242504: jal         0x8004F4F8
    // 0x80242508: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_2;
    // 0x80242508: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_8024250C:
    // 0x8024250C: lw          $v0, 0xC0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC0);
    // 0x80242510: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x80242514: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80242518: beq         $v0, $zero, L_80242534
    if (ctx->r2 == 0) {
        // 0x8024251C: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80242534;
    }
    // 0x8024251C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80242520: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80242524: sw          $zero, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = 0;
    // 0x80242528: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024252C: j           L_802425AC
    // 0x80242530: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_802425AC;
    // 0x80242530: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80242534:
    // 0x80242534: lhu         $a1, 0x98($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X98);
    // 0x80242538: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x8024253C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80242540: addiu       $v0, $s0, 0xC0
    ctx->r2 = ADD32(ctx->r16, 0XC0);
    // 0x80242544: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80242548: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8024254C: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x80242550: ori         $a3, $zero, 0xA000
    ctx->r7 = 0 | 0XA000;
    // 0x80242554: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80242558: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8024255C: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x80242560: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80242564: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80242568: jal         0x80051E18
    // 0x8024256C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_3;
    // 0x8024256C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_3:
    // 0x80242570: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80242574: jal         0x8003F754
    // 0x80242578: sw          $zero, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = 0;
    func_8003F754_1AB54(rdram, ctx);
        goto after_4;
    // 0x80242578: sw          $zero, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = 0;
    after_4:
    // 0x8024257C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80242580: beq         $a0, $zero, L_80242594
    if (ctx->r4 == 0) {
        // 0x80242584: nop
    
            goto L_80242594;
    }
    // 0x80242584: nop

    // 0x80242588: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8024258C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80242590: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80242594:
    // 0x80242594: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x80242598: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x8024259C: bne         $v0, $zero, L_802425AC
    if (ctx->r2 != 0) {
        // 0x802425A0: nop
    
            goto L_802425AC;
    }
    // 0x802425A0: nop

    // 0x802425A4: jal         0x800711A8
    // 0x802425A8: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    func_800711A8_4C5A8(rdram, ctx);
        goto after_5;
    // 0x802425A8: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    after_5:
L_802425AC:
    // 0x802425AC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802425B0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802425B4: jr          $ra
    // 0x802425B8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x802425B8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_802324AC_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802324AC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802324B0: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x802324B4: sh          $v0, 0x44($a0)
    MEM_H(0X44, ctx->r4) = ctx->r2;
    // 0x802324B8: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x802324BC: sb          $v1, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r3;
    // 0x802324C0: sh          $zero, 0x46($a0)
    MEM_H(0X46, ctx->r4) = 0;
    // 0x802324C4: sh          $zero, 0x4E($a0)
    MEM_H(0X4E, ctx->r4) = 0;
    // 0x802324C8: sh          $v0, 0x37E($a0)
    MEM_H(0X37E, ctx->r4) = ctx->r2;
    // 0x802324CC: sb          $v1, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r3;
    // 0x802324D0: jr          $ra
    // 0x802324D4: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    TRACE_RETURN()
    return;
    // 0x802324D4: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
;}
RECOMP_FUNC void func_8024C770_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024C770: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024C774: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
    // 0x8024C778: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8024C77C: lbu         $v1, 0x8($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0X8);
    // 0x8024C780: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024C784: beq         $v1, $v0, L_8024C7CC
    if (ctx->r3 == ctx->r2) {
        // 0x8024C788: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8024C7CC;
    }
    // 0x8024C788: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8024C78C: beql        $v0, $zero, L_8024C7A4
    if (ctx->r2 == 0) {
        // 0x8024C790: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8024C7A4;
    }
    goto skip_0;
    // 0x8024C790: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8024C794: beq         $v1, $zero, L_8024C7B4
    if (ctx->r3 == 0) {
        // 0x8024C798: nop
    
            goto L_8024C7B4;
    }
    // 0x8024C798: nop

    // 0x8024C79C: j           L_8024C870
    // 0x8024C7A0: nop

        goto L_8024C870;
    // 0x8024C7A0: nop

L_8024C7A4:
    // 0x8024C7A4: beq         $v1, $v0, L_8024C868
    if (ctx->r3 == ctx->r2) {
        // 0x8024C7A8: nop
    
            goto L_8024C868;
    }
    // 0x8024C7A8: nop

    // 0x8024C7AC: j           L_8024C870
    // 0x8024C7B0: nop

        goto L_8024C870;
    // 0x8024C7B0: nop

L_8024C7B4:
    // 0x8024C7B4: lbu         $v1, 0x8($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0X8);
    // 0x8024C7B8: lbu         $v0, 0x0($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X0);
    // 0x8024C7BC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8024C7C0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8024C7C4: sb          $v0, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r2;
    // 0x8024C7C8: sb          $v1, 0x8($t0)
    MEM_B(0X8, ctx->r8) = ctx->r3;
L_8024C7CC:
    // 0x8024C7CC: lw          $v0, 0x2C($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X2C);
    // 0x8024C7D0: lw          $v0, 0x18($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X18);
    // 0x8024C7D4: beq         $v0, $zero, L_8024C7E8
    if (ctx->r2 == 0) {
        // 0x8024C7D8: nop
    
            goto L_8024C7E8;
    }
    // 0x8024C7D8: nop

    // 0x8024C7DC: lhu         $v0, 0x1C($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0X1C);
    // 0x8024C7E0: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x8024C7E4: sh          $v0, 0x1C($t0)
    MEM_H(0X1C, ctx->r8) = ctx->r2;
L_8024C7E8:
    // 0x8024C7E8: lbu         $v0, 0xD($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0XD);
    // 0x8024C7EC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8024C7F0: sb          $v0, 0xD($t0)
    MEM_B(0XD, ctx->r8) = ctx->r2;
    // 0x8024C7F4: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8024C7F8: beq         $v0, $zero, L_8024C80C
    if (ctx->r2 == 0) {
        // 0x8024C7FC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8024C80C;
    }
    // 0x8024C7FC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8024C800: lbu         $v1, 0x8($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0X8);
    // 0x8024C804: bne         $v1, $v0, L_8024C81C
    if (ctx->r3 != ctx->r2) {
        // 0x8024C808: nop
    
            goto L_8024C81C;
    }
    // 0x8024C808: nop

L_8024C80C:
    // 0x8024C80C: lbu         $v0, 0x8($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X8);
    // 0x8024C810: sb          $zero, 0xD($t0)
    MEM_B(0XD, ctx->r8) = 0;
    // 0x8024C814: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024C818: sb          $v0, 0x8($t0)
    MEM_B(0X8, ctx->r8) = ctx->r2;
L_8024C81C:
    // 0x8024C81C: lbu         $a2, 0xF($t0)
    ctx->r6 = MEM_BU(ctx->r8, 0XF);
    // 0x8024C820: lb          $v1, 0xD($t0)
    ctx->r3 = MEM_B(ctx->r8, 0XD);
    // 0x8024C824: lhu         $a0, 0x24($t0)
    ctx->r4 = MEM_HU(ctx->r8, 0X24);
    // 0x8024C828: lw          $a3, 0x28($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X28);
    // 0x8024C82C: lhu         $a1, 0x1E($t0)
    ctx->r5 = MEM_HU(ctx->r8, 0X1E);
    // 0x8024C830: sll         $a2, $a2, 24
    ctx->r6 = S32(ctx->r6 << 24);
    // 0x8024C834: sra         $a2, $a2, 24
    ctx->r6 = S32(SIGNED(ctx->r6) >> 24);
    // 0x8024C838: sll         $v0, $v1, 8
    ctx->r2 = S32(ctx->r3 << 8);
    // 0x8024C83C: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x8024C840: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8024C844: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024C848: lui         $v1, 0x2E00
    ctx->r3 = S32(0X2E00 << 16);
    // 0x8024C84C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8024C850: addu        $a0, $a0, $a2
    ctx->r4 = ADD32(ctx->r4, ctx->r6);
    // 0x8024C854: addu        $a1, $a1, $a3
    ctx->r5 = ADD32(ctx->r5, ctx->r7);
    // 0x8024C858: sw          $v0, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->r2;
    // 0x8024C85C: sh          $a0, 0x24($t0)
    MEM_H(0X24, ctx->r8) = ctx->r4;
    // 0x8024C860: j           L_8024C870
    // 0x8024C864: sh          $a1, 0x1E($t0)
    MEM_H(0X1E, ctx->r8) = ctx->r5;
        goto L_8024C870;
    // 0x8024C864: sh          $a1, 0x1E($t0)
    MEM_H(0X1E, ctx->r8) = ctx->r5;
L_8024C868:
    // 0x8024C868: jal         0x8004F5C4
    // 0x8024C86C: addu        $a0, $t0, $zero
    ctx->r4 = ADD32(ctx->r8, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x8024C86C: addu        $a0, $t0, $zero
    ctx->r4 = ADD32(ctx->r8, 0);
    after_0:
L_8024C870:
    // 0x8024C870: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8024C874: jr          $ra
    // 0x8024C878: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024C878: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80235CC8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235CC8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80235CCC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80235CD0: lui         $s3, 0x801C
    ctx->r19 = S32(0X801C << 16);
    // 0x80235CD4: addiu       $s3, $s3, -0x3A47
    ctx->r19 = ADD32(ctx->r19, -0X3A47);
    // 0x80235CD8: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80235CDC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80235CE0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80235CE4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80235CE8: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x80235CEC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80235CF0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80235CF4: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80235CF8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235CFC: lw          $v0, 0x3C58($at)
    ctx->r2 = MEM_W(ctx->r1, 0X3C58);
    // 0x80235D00: lui         $s1, 0x8025
    ctx->r17 = S32(0X8025 << 16);
    // 0x80235D04: addiu       $s1, $s1, 0x3C58
    ctx->r17 = ADD32(ctx->r17, 0X3C58);
    // 0x80235D08: beq         $v0, $zero, L_80235D5C
    if (ctx->r2 == 0) {
        // 0x80235D0C: addu        $s2, $a1, $zero
        ctx->r18 = ADD32(ctx->r5, 0);
            goto L_80235D5C;
    }
    // 0x80235D0C: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x80235D10: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80235D14: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80235D18: jal         0x8009A3B4
    // 0x80235D1C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80235D1C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80235D20: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80235D24: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80235D28: jal         0x8009A3B4
    // 0x80235D2C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80235D2C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80235D30: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80235D34: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80235D38: jal         0x8009A3B4
    // 0x80235D3C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80235D3C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80235D40: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x80235D44: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80235D48: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80235D4C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80235D50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235D54: jalr        $v0
    // 0x80235D58: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x80235D58: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_3:
L_80235D5C:
    // 0x80235D5C: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80235D60: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80235D64: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80235D68: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80235D6C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80235D70: jr          $ra
    // 0x80235D74: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80235D74: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80225820_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225820: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225824: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225828: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x8022582C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225830: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80225834: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225838: lw          $v0, 0x1150($at)
    ctx->r2 = MEM_W(ctx->r1, 0X1150);
    // 0x8022583C: jalr        $v0
    // 0x80225840: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80225840: nop

    after_0:
    // 0x80225844: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225848: jr          $ra
    // 0x8022584C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022584C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80230300_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230300: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230304: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230308: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023030C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80230310: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80230314: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80230318: jal         0x8009A3B4
    // 0x8023031C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8023031C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80230320: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80230324: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80230328: jal         0x8009A3B4
    // 0x8023032C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8023032C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80230330: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80230334: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80230338: jal         0x8009A3B4
    // 0x8023033C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8023033C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80230340: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80230344: lbu         $v1, 0xAC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAC);
    // 0x80230348: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023034C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80230350: sb          $v1, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r3;
    // 0x80230354: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80230358: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023035C: lw          $v0, 0x3820($at)
    ctx->r2 = MEM_W(ctx->r1, 0X3820);
    // 0x80230360: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x80230364: addiu       $a1, $a1, -0x3A50
    ctx->r5 = ADD32(ctx->r5, -0X3A50);
    // 0x80230368: jalr        $v0
    // 0x8023036C: addiu       $a2, $s0, 0x348
    ctx->r6 = ADD32(ctx->r16, 0X348);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8023036C: addiu       $a2, $s0, 0x348
    ctx->r6 = ADD32(ctx->r16, 0X348);
    after_3:
    // 0x80230370: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80230374: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x80230378: beq         $a1, $v0, L_80230394
    if (ctx->r5 == ctx->r2) {
        // 0x8023037C: nop
    
            goto L_80230394;
    }
    // 0x8023037C: nop

    // 0x80230380: lh          $a2, 0x348($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X348);
    // 0x80230384: jal         0x80050294
    // 0x80230388: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x80230388: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8023038C: j           L_8023039C
    // 0x80230390: nop

        goto L_8023039C;
    // 0x80230390: nop

L_80230394:
    // 0x80230394: jal         0x8005044C
    // 0x80230398: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_5;
    // 0x80230398: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
L_8023039C:
    // 0x8023039C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802303A0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x802303A4: beq         $v0, $zero, L_802303CC
    if (ctx->r2 == 0) {
        // 0x802303A8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802303CC;
    }
    // 0x802303A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802303AC: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x802303B0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802303B4: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x802303B8: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x802303BC: lw          $a1, 0x3854($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X3854);
    // 0x802303C0: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x802303C4: jal         0x8003B564
    // 0x802303C8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_6;
    // 0x802303C8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_6:
L_802303CC:
    // 0x802303CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802303D0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802303D4: jr          $ra
    // 0x802303D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802303D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232F0C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232F0C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80232F10: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80232F14: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80232F18: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80232F1C: jal         0x80233818
    // 0x80232F20: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80233818_ovl28(rdram, ctx);
        goto after_0;
    // 0x80232F20: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x80232F24: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80232F28: bltz        $v0, L_80232FEC
    if (SIGNED(ctx->r2) < 0) {
        // 0x80232F2C: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80232FEC;
    }
    // 0x80232F2C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80232F30: lhu         $v1, 0x34C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X34C);
    // 0x80232F34: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80232F38: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x80232F3C: sra         $s0, $v0, 16
    ctx->r16 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80232F40: slti        $v0, $s0, 0x1B
    ctx->r2 = SIGNED(ctx->r16) < 0X1B ? 1 : 0;
    // 0x80232F44: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80232F48: andi        $a1, $v0, 0x3
    ctx->r5 = ctx->r2 & 0X3;
    // 0x80232F4C: slti        $v0, $s0, 0x15
    ctx->r2 = SIGNED(ctx->r16) < 0X15 ? 1 : 0;
    // 0x80232F50: beq         $v0, $zero, L_80232F5C
    if (ctx->r2 == 0) {
        // 0x80232F54: sh          $v1, 0x34C($s1)
        MEM_H(0X34C, ctx->r17) = ctx->r3;
            goto L_80232F5C;
    }
    // 0x80232F54: sh          $v1, 0x34C($s1)
    MEM_H(0X34C, ctx->r17) = ctx->r3;
    // 0x80232F58: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
L_80232F5C:
    // 0x80232F5C: slti        $v0, $s0, 0xF
    ctx->r2 = SIGNED(ctx->r16) < 0XF ? 1 : 0;
    // 0x80232F60: bnel        $v0, $zero, L_80232F68
    if (ctx->r2 != 0) {
        // 0x80232F64: addiu       $a1, $zero, 0x9
        ctx->r5 = ADD32(0, 0X9);
            goto L_80232F68;
    }
    goto skip_0;
    // 0x80232F64: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    skip_0:
L_80232F68:
    // 0x80232F68: slti        $v0, $s0, 0x9
    ctx->r2 = SIGNED(ctx->r16) < 0X9 ? 1 : 0;
    // 0x80232F6C: bnel        $v0, $zero, L_80232F74
    if (ctx->r2 != 0) {
        // 0x80232F70: addiu       $a1, $zero, 0x7
        ctx->r5 = ADD32(0, 0X7);
            goto L_80232F74;
    }
    goto skip_1;
    // 0x80232F70: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    skip_1:
L_80232F74:
    // 0x80232F74: lw          $a0, 0x354($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X354);
    // 0x80232F78: slti        $s0, $s0, 0x4
    ctx->r16 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x80232F7C: xori        $s0, $s0, 0x1
    ctx->r16 = ctx->r16 ^ 0X1;
    // 0x80232F80: negu        $s0, $s0
    ctx->r16 = SUB32(0, ctx->r16);
    // 0x80232F84: and         $s0, $a1, $s0
    ctx->r16 = ctx->r5 & ctx->r16;
    // 0x80232F88: jal         0x800324B4
    // 0x80232F8C: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    func_800324B4_D8B4(rdram, ctx);
        goto after_1;
    // 0x80232F8C: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    after_1:
    // 0x80232F90: nop

    // 0x80232F94: mult        $v0, $s0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80232F98: mflo        $v0
    ctx->r2 = lo;
    // 0x80232F9C: lw          $a0, 0x354($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X354);
    // 0x80232FA0: lhu         $v1, 0x14($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X14);
    // 0x80232FA4: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    // 0x80232FA8: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80232FAC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80232FB0: jal         0x80032498
    // 0x80232FB4: sh          $v1, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r3;
    func_80032498_D898(rdram, ctx);
        goto after_2;
    // 0x80232FB4: sh          $v1, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r3;
    after_2:
    // 0x80232FB8: nop

    // 0x80232FBC: mult        $v0, $s0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80232FC0: mflo        $v0
    ctx->r2 = lo;
    // 0x80232FC4: lhu         $v1, 0x18($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X18);
    // 0x80232FC8: lb          $a0, 0xA7($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XA7);
    // 0x80232FCC: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80232FD0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80232FD4: bgez        $a0, L_80232FF4
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80232FD8: sh          $v1, 0x18($s1)
        MEM_H(0X18, ctx->r17) = ctx->r3;
            goto L_80232FF4;
    }
    // 0x80232FD8: sh          $v1, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r3;
    // 0x80232FDC: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80232FE0: bne         $v0, $zero, L_80232FEC
    if (ctx->r2 != 0) {
        // 0x80232FE4: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80232FEC;
    }
    // 0x80232FE4: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80232FE8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80232FEC:
    // 0x80232FEC: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x80232FF0: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
L_80232FF4:
    // 0x80232FF4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80232FF8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80232FFC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233000: jr          $ra
    // 0x80233004: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80233004: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80231484_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231484: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231488: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023148C: jal         0x8004F418
    // 0x80231490: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x80231490: nop

    after_0:
    // 0x80231494: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80231498: jr          $ra
    // 0x8023149C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023149C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802256B8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802256B8: jr          $ra
    // 0x802256BC: nop

    TRACE_RETURN()
    return;
    // 0x802256BC: nop

;}
RECOMP_FUNC void func_80225FCC_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225FCC: jr          $ra
    // 0x80225FD0: nop

    TRACE_RETURN()
    return;
    // 0x80225FD0: nop

;}
RECOMP_FUNC void func_8024D484_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024D484: lhu         $v0, 0x18($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X18);
    // 0x8024D488: lw          $a1, 0x20($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X20);
    // 0x8024D48C: lhu         $v1, 0x1A($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X1A);
    // 0x8024D490: sh          $v0, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r2;
    // 0x8024D494: sh          $v1, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r3;
    // 0x8024D498: lb          $v1, 0x3($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X3);
    // 0x8024D49C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8024D4A0: bgez        $v1, L_8024D4E0
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8024D4A4: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_8024D4E0;
    }
    // 0x8024D4A4: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x8024D4A8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8024D4AC: bne         $v1, $v0, L_8024D4CC
    if (ctx->r3 != ctx->r2) {
        // 0x8024D4B0: andi        $v0, $a1, 0x7F
        ctx->r2 = ctx->r5 & 0X7F;
            goto L_8024D4CC;
    }
    // 0x8024D4B0: andi        $v0, $a1, 0x7F
    ctx->r2 = ctx->r5 & 0X7F;
    // 0x8024D4B4: lb          $v1, 0xC($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XC);
    // 0x8024D4B8: lb          $v0, 0xD($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD);
    // 0x8024D4BC: bne         $v1, $v0, L_8024D4EC
    if (ctx->r3 != ctx->r2) {
        // 0x8024D4C0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8024D4EC;
    }
    // 0x8024D4C0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8024D4C4: j           L_8024D510
    // 0x8024D4C8: nop

        goto L_8024D510;
    // 0x8024D4C8: nop

L_8024D4CC:
    // 0x8024D4CC: lw          $v1, 0x1C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C);
    // 0x8024D4D0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024D4D4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024D4D8: j           L_8024D4EC
    // 0x8024D4DC: sw          $v1, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r3;
        goto L_8024D4EC;
    // 0x8024D4DC: sw          $v1, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r3;
L_8024D4E0:
    // 0x8024D4E0: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x8024D4E4: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8024D4E8: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
L_8024D4EC:
    // 0x8024D4EC: lw          $a1, 0x20($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X20);
    // 0x8024D4F0: lbu         $v0, 0x2($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X2);
    // 0x8024D4F4: sb          $zero, 0xD($a0)
    MEM_B(0XD, ctx->r4) = 0;
    // 0x8024D4F8: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
    // 0x8024D4FC: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x8024D500: sh          $v0, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r2;
    // 0x8024D504: lbu         $v1, 0x1($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X1);
    // 0x8024D508: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8024D50C: sh          $v1, 0x1A($a0)
    MEM_H(0X1A, ctx->r4) = ctx->r3;
L_8024D510:
    // 0x8024D510: jr          $ra
    // 0x8024D514: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x8024D514: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x8024D518: nop

    // 0x8024D51C: nop

;}
RECOMP_FUNC void func_80229F0C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229F0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229F10: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229F14: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229F18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229F1C: lbu         $v1, 0x5($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X5);
    // 0x80229F20: beq         $v1, $zero, L_80229F38
    if (ctx->r3 == 0) {
        // 0x80229F24: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80229F38;
    }
    // 0x80229F24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229F28: beq         $v1, $v0, L_80229FB4
    if (ctx->r3 == ctx->r2) {
        // 0x80229F2C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80229FB4;
    }
    // 0x80229F2C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80229F30: j           L_8022A020
    // 0x80229F34: nop

        goto L_8022A020;
    // 0x80229F34: nop

L_80229F38:
    // 0x80229F38: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80229F3C: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80229F40: bne         $v0, $zero, L_8022A020
    if (ctx->r2 != 0) {
        // 0x80229F44: addiu       $a0, $zero, 0x156
        ctx->r4 = ADD32(0, 0X156);
            goto L_8022A020;
    }
    // 0x80229F44: addiu       $a0, $zero, 0x156
    ctx->r4 = ADD32(0, 0X156);
    // 0x80229F48: jal         0x8004CB2C
    // 0x80229F4C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_0;
    // 0x80229F4C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_0:
    // 0x80229F50: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80229F54: jal         0x80070050
    // 0x80229F58: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_80070050_4B450(rdram, ctx);
        goto after_1;
    // 0x80229F58: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_1:
    // 0x80229F5C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229F60: sb          $zero, 0x4A5C($at)
    MEM_B(0X4A5C, ctx->r1) = 0;
    // 0x80229F64: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229F68: sb          $zero, 0x4B18($at)
    MEM_B(0X4B18, ctx->r1) = 0;
    // 0x80229F6C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229F70: jal         0x80054578
    // 0x80229F74: sb          $zero, 0x4B19($at)
    MEM_B(0X4B19, ctx->r1) = 0;
    func_80054578_2F978(rdram, ctx);
        goto after_2;
    // 0x80229F74: sb          $zero, 0x4B19($at)
    MEM_B(0X4B19, ctx->r1) = 0;
    after_2:
    // 0x80229F78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229F7C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229F80: jal         0x80034844
    // 0x80229F84: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    func_80034844_FC44(rdram, ctx);
        goto after_3;
    // 0x80229F84: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    after_3:
    // 0x80229F88: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80229F8C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80229F90: jal         0x80036B00
    // 0x80229F94: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_4;
    // 0x80229F94: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x80229F98: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x80229F9C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80229FA0: sh          $v0, -0x3F84($at)
    MEM_H(-0X3F84, ctx->r1) = ctx->r2;
    // 0x80229FA4: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80229FA8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229FAC: j           L_8022A020
    // 0x80229FB0: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
        goto L_8022A020;
    // 0x80229FB0: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_80229FB4:
    // 0x80229FB4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229FB8: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80229FBC: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
    // 0x80229FC0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229FC4: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80229FC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229FCC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229FD0: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x80229FD4: addiu       $v0, $zero, -0xE10
    ctx->r2 = ADD32(0, -0XE10);
    // 0x80229FD8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229FDC: sh          $v0, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = ctx->r2;
    // 0x80229FE0: addiu       $v0, $zero, -0x1F4
    ctx->r2 = ADD32(0, -0X1F4);
    // 0x80229FE4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229FE8: sh          $v0, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = ctx->r2;
    // 0x80229FEC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80229FF0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229FF4: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x80229FF8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229FFC: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x8022A000: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A004: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x8022A008: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A00C: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x8022A010: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022A014: jal         0x8006027C
    // 0x8022A018: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    func_8006027C_3B67C(rdram, ctx);
        goto after_5;
    // 0x8022A018: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    after_5:
    // 0x8022A01C: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_8022A020:
    // 0x8022A020: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A024: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A028: jr          $ra
    // 0x8022A02C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A02C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802336CC_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802336CC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802336D0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802336D4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802336D8: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x802336DC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802336E0: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x802336E4: beq         $v0, $zero, L_802336F8
    if (ctx->r2 == 0) {
        // 0x802336E8: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_802336F8;
    }
    // 0x802336E8: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x802336EC: lh          $v0, 0x34C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X34C);
    // 0x802336F0: beq         $v0, $zero, L_8023375C
    if (ctx->r2 == 0) {
        // 0x802336F4: nop
    
            goto L_8023375C;
    }
    // 0x802336F4: nop

L_802336F8:
    // 0x802336F8: lh          $a0, 0x56($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X56);
    // 0x802336FC: jal         0x800324B4
    // 0x80233700: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    func_800324B4_D8B4(rdram, ctx);
        goto after_0;
    // 0x80233700: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    after_0:
    // 0x80233704: lh          $a0, 0x56($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X56);
    // 0x80233708: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8023370C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80233710: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x80233714: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80233718: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x8023371C: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    // 0x80233720: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80233724: jal         0x80032498
    // 0x80233728: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    func_80032498_D898(rdram, ctx);
        goto after_1;
    // 0x80233728: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    after_1:
    // 0x8023372C: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x80233730: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80233734: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x80233738: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8023373C: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x80233740: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80233744: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x80233748: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x8023374C: beq         $v0, $zero, L_8023375C
    if (ctx->r2 == 0) {
        // 0x80233750: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8023375C;
    }
    // 0x80233750: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80233754: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80233758: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_8023375C:
    // 0x8023375C: lbu         $v0, 0xA4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA4);
    // 0x80233760: xori        $v1, $v0, 0x5
    ctx->r3 = ctx->r2 ^ 0X5;
    // 0x80233764: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80233768: xori        $v0, $v0, 0x14
    ctx->r2 = ctx->r2 ^ 0X14;
    // 0x8023376C: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80233770: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80233774: beq         $v1, $zero, L_80233784
    if (ctx->r3 == 0) {
        // 0x80233778: addiu       $a0, $zero, 0x1B6
        ctx->r4 = ADD32(0, 0X1B6);
            goto L_80233784;
    }
    // 0x80233778: addiu       $a0, $zero, 0x1B6
    ctx->r4 = ADD32(0, 0X1B6);
    // 0x8023377C: jal         0x8002A33C
    // 0x80233780: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x80233780: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_2:
L_80233784:
    // 0x80233784: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x80233788: bgez        $v0, L_802337AC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023378C: nop
    
            goto L_802337AC;
    }
    // 0x8023378C: nop

    // 0x80233790: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x80233794: bne         $v0, $zero, L_802337AC
    if (ctx->r2 != 0) {
        // 0x80233798: addiu       $v1, $zero, 0x7
        ctx->r3 = ADD32(0, 0X7);
            goto L_802337AC;
    }
    // 0x80233798: addiu       $v1, $zero, 0x7
    ctx->r3 = ADD32(0, 0X7);
    // 0x8023379C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802337A0: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x802337A4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802337A8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_802337AC:
    // 0x802337AC: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x802337B0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802337B4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802337B8: jr          $ra
    // 0x802337BC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802337BC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80233280_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233280: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80233284: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80233288: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023328C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80233290: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80233294: lh          $s0, 0x34C($s1)
    ctx->r16 = MEM_H(ctx->r17, 0X34C);
    // 0x80233298: slti        $v0, $s0, 0xE
    ctx->r2 = SIGNED(ctx->r16) < 0XE ? 1 : 0;
    // 0x8023329C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x802332A0: andi        $a1, $v0, 0xA
    ctx->r5 = ctx->r2 & 0XA;
    // 0x802332A4: slti        $v0, $s0, 0xB
    ctx->r2 = SIGNED(ctx->r16) < 0XB ? 1 : 0;
    // 0x802332A8: beq         $v0, $zero, L_802332B4
    if (ctx->r2 == 0) {
        // 0x802332AC: addu        $v1, $s0, $zero
        ctx->r3 = ADD32(ctx->r16, 0);
            goto L_802332B4;
    }
    // 0x802332AC: addu        $v1, $s0, $zero
    ctx->r3 = ADD32(ctx->r16, 0);
    // 0x802332B0: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
L_802332B4:
    // 0x802332B4: lw          $a0, 0x354($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X354);
    // 0x802332B8: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x802332BC: slti        $s0, $s0, 0x5
    ctx->r16 = SIGNED(ctx->r16) < 0X5 ? 1 : 0;
    // 0x802332C0: xori        $s0, $s0, 0x1
    ctx->r16 = ctx->r16 ^ 0X1;
    // 0x802332C4: negu        $s0, $s0
    ctx->r16 = SUB32(0, ctx->r16);
    // 0x802332C8: and         $s0, $a1, $s0
    ctx->r16 = ctx->r5 & ctx->r16;
    // 0x802332CC: jal         0x800324B4
    // 0x802332D0: sh          $v0, 0x34C($s1)
    MEM_H(0X34C, ctx->r17) = ctx->r2;
    func_800324B4_D8B4(rdram, ctx);
        goto after_0;
    // 0x802332D0: sh          $v0, 0x34C($s1)
    MEM_H(0X34C, ctx->r17) = ctx->r2;
    after_0:
    // 0x802332D4: nop

    // 0x802332D8: mult        $v0, $s0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802332DC: mflo        $v0
    ctx->r2 = lo;
    // 0x802332E0: lhu         $v1, 0x14($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X14);
    // 0x802332E4: lw          $a0, 0x354($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X354);
    // 0x802332E8: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x802332EC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802332F0: jal         0x80032498
    // 0x802332F4: sh          $v1, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r3;
    func_80032498_D898(rdram, ctx);
        goto after_1;
    // 0x802332F4: sh          $v1, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r3;
    after_1:
    // 0x802332F8: nop

    // 0x802332FC: mult        $v0, $s0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80233300: mflo        $v0
    ctx->r2 = lo;
    // 0x80233304: lhu         $v1, 0x18($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X18);
    // 0x80233308: lb          $a0, 0xA7($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XA7);
    // 0x8023330C: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80233310: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80233314: bgez        $a0, L_80233334
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80233318: sh          $v1, 0x18($s1)
        MEM_H(0X18, ctx->r17) = ctx->r3;
            goto L_80233334;
    }
    // 0x80233318: sh          $v1, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r3;
    // 0x8023331C: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80233320: bne         $v0, $zero, L_8023332C
    if (ctx->r2 != 0) {
        // 0x80233324: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_8023332C;
    }
    // 0x80233324: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80233328: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8023332C:
    // 0x8023332C: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x80233330: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
L_80233334:
    // 0x80233334: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80233338: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8023333C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80233340: jr          $ra
    // 0x80233344: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80233344: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8024BAE0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024BAE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024BAE4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8024BAE8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024BAEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8024BAF0: jal         0x80053ED8
    // 0x8024BAF4: lbu         $a0, 0xC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XC);
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_0;
    // 0x8024BAF4: lbu         $a0, 0xC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XC);
    after_0:
    // 0x8024BAF8: jal         0x8024BB30
    // 0x8024BAFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8024BB30_ovl28(rdram, ctx);
        goto after_1;
    // 0x8024BAFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8024BB00: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8024BB04: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x8024BB08: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x8024BB0C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8024BB10: bne         $v0, $zero, L_8024BB20
    if (ctx->r2 != 0) {
        // 0x8024BB14: nop
    
            goto L_8024BB20;
    }
    // 0x8024BB14: nop

    // 0x8024BB18: jal         0x8004F5C4
    // 0x8024BB1C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_2;
    // 0x8024BB1C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_8024BB20:
    // 0x8024BB20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8024BB24: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8024BB28: jr          $ra
    // 0x8024BB2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024BB2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023A3F8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A3F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023A3FC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023A400: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x8023A404: beq         $v0, $zero, L_8023A41C
    if (ctx->r2 == 0) {
        // 0x8023A408: nop
    
            goto L_8023A41C;
    }
    // 0x8023A408: nop

    // 0x8023A40C: jal         0x8023ACE4
    // 0x8023A410: nop

    func_8023ACE4_ovl28(rdram, ctx);
        goto after_0;
    // 0x8023A410: nop

    after_0:
    // 0x8023A414: j           L_8023A424
    // 0x8023A418: nop

        goto L_8023A424;
    // 0x8023A418: nop

L_8023A41C:
    // 0x8023A41C: jal         0x8005044C
    // 0x8023A420: nop

    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x8023A420: nop

    after_1:
L_8023A424:
    // 0x8023A424: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023A428: jr          $ra
    // 0x8023A42C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023A42C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
