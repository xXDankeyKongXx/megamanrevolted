#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_800A36A8_7EAA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800A36A8: xor         $v1, $v1, $v1
    ctx->r3 = ctx->r3 ^ ctx->r3;
    // 0x800A36AC: sltu        $t9, $a2, $a0
    ctx->r25 = ctx->r6 < ctx->r4 ? 1 : 0;
    // 0x800A36B0: bne         $t9, $zero, L_800A36F0
    if (ctx->r25 != 0) {
        // 0x800A36B4: nop
    
            goto L_800A36F0;
    }
    // 0x800A36B4: nop

    // 0x800A36B8: bne         $a0, $a2, L_800A36E8
    if (ctx->r4 != ctx->r6) {
        // 0x800A36BC: nop
    
            goto L_800A36E8;
    }
    // 0x800A36BC: nop

    // 0x800A36C0: sltu        $t9, $a3, $a1
    ctx->r25 = ctx->r7 < ctx->r5 ? 1 : 0;
    // 0x800A36C4: bne         $t9, $zero, L_800A36F0
    if (ctx->r25 != 0) {
        // 0x800A36C8: nop
    
            goto L_800A36F0;
    }
    // 0x800A36C8: nop

    // 0x800A36CC: bne         $a1, $a3, L_800A36E8
    if (ctx->r5 != ctx->r7) {
        // 0x800A36D0: nop
    
            goto L_800A36E8;
    }
    // 0x800A36D0: nop

    // 0x800A36D4: xor         $a1, $a1, $a1
    ctx->r5 = ctx->r5 ^ ctx->r5;
    // 0x800A36D8: xor         $a0, $a0, $a0
    ctx->r4 = ctx->r4 ^ ctx->r4;
    // 0x800A36DC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x800A36E0: jr          $ra
    // 0x800A36E4: xor         $v0, $v0, $v0
    ctx->r2 = ctx->r2 ^ ctx->r2;
    TRACE_RETURN()
    return;
    // 0x800A36E4: xor         $v0, $v0, $v0
    ctx->r2 = ctx->r2 ^ ctx->r2;
L_800A36E8:
    // 0x800A36E8: jr          $ra
    // 0x800A36EC: xor         $v0, $v0, $v0
    ctx->r2 = ctx->r2 ^ ctx->r2;
    TRACE_RETURN()
    return;
    // 0x800A36EC: xor         $v0, $v0, $v0
    ctx->r2 = ctx->r2 ^ ctx->r2;
L_800A36F0:
    // 0x800A36F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800A36F4: lui         $t0, 0x8000
    ctx->r8 = S32(0X8000 << 16);
L_800A36F8:
    // 0x800A36F8: and         $t9, $a2, $t0
    ctx->r25 = ctx->r6 & ctx->r8;
    // 0x800A36FC: bne         $t9, $zero, L_800A374C
    if (ctx->r25 != 0) {
        // 0x800A3700: nop
    
            goto L_800A374C;
    }
    // 0x800A3700: nop

    // 0x800A3704: srl         $t9, $a3, 31
    ctx->r25 = S32(U32(ctx->r7) >> 31);
    // 0x800A3708: sll         $a2, $a2, 1
    ctx->r6 = S32(ctx->r6 << 1);
    // 0x800A370C: or          $a2, $a2, $t9
    ctx->r6 = ctx->r6 | ctx->r25;
    // 0x800A3710: sll         $a3, $a3, 1
    ctx->r7 = S32(ctx->r7 << 1);
    // 0x800A3714: sltu        $t9, $a2, $a0
    ctx->r25 = ctx->r6 < ctx->r4 ? 1 : 0;
    // 0x800A3718: bne         $t9, $zero, L_800A3734
    if (ctx->r25 != 0) {
        // 0x800A371C: nop
    
            goto L_800A3734;
    }
    // 0x800A371C: nop

    // 0x800A3720: bne         $a0, $a2, L_800A373C
    if (ctx->r4 != ctx->r6) {
        // 0x800A3724: nop
    
            goto L_800A373C;
    }
    // 0x800A3724: nop

    // 0x800A3728: sltu        $t9, $a3, $a1
    ctx->r25 = ctx->r7 < ctx->r5 ? 1 : 0;
    // 0x800A372C: beq         $t9, $zero, L_800A373C
    if (ctx->r25 == 0) {
        // 0x800A3730: nop
    
            goto L_800A373C;
    }
    // 0x800A3730: nop

L_800A3734:
    // 0x800A3734: j           L_800A36F8
    // 0x800A3738: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
        goto L_800A36F8;
    // 0x800A3738: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
L_800A373C:
    // 0x800A373C: sll         $t9, $a2, 31
    ctx->r25 = S32(ctx->r6 << 31);
    // 0x800A3740: srl         $a3, $a3, 1
    ctx->r7 = S32(U32(ctx->r7) >> 1);
    // 0x800A3744: or          $a3, $a3, $t9
    ctx->r7 = ctx->r7 | ctx->r25;
    // 0x800A3748: srl         $a2, $a2, 1
    ctx->r6 = S32(U32(ctx->r6) >> 1);
L_800A374C:
    // 0x800A374C: sltu        $t9, $a2, $a0
    ctx->r25 = ctx->r6 < ctx->r4 ? 1 : 0;
    // 0x800A3750: bne         $t9, $zero, L_800A376C
    if (ctx->r25 != 0) {
        // 0x800A3754: nop
    
            goto L_800A376C;
    }
    // 0x800A3754: nop

    // 0x800A3758: bne         $a0, $a2, L_800A3780
    if (ctx->r4 != ctx->r6) {
        // 0x800A375C: nop
    
            goto L_800A3780;
    }
    // 0x800A375C: nop

    // 0x800A3760: sltu        $t9, $a1, $a3
    ctx->r25 = ctx->r5 < ctx->r7 ? 1 : 0;
    // 0x800A3764: bne         $t9, $zero, L_800A3780
    if (ctx->r25 != 0) {
        // 0x800A3768: nop
    
            goto L_800A3780;
    }
    // 0x800A3768: nop

L_800A376C:
    // 0x800A376C: sltu        $t9, $a1, $a3
    ctx->r25 = ctx->r5 < ctx->r7 ? 1 : 0;
    // 0x800A3770: subu        $a1, $a1, $a3
    ctx->r5 = SUB32(ctx->r5, ctx->r7);
    // 0x800A3774: subu        $a0, $a0, $a2
    ctx->r4 = SUB32(ctx->r4, ctx->r6);
    // 0x800A3778: subu        $a0, $a0, $t9
    ctx->r4 = SUB32(ctx->r4, ctx->r25);
    // 0x800A377C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
L_800A3780:
    // 0x800A3780: sll         $t9, $a2, 31
    ctx->r25 = S32(ctx->r6 << 31);
    // 0x800A3784: srl         $a3, $a3, 1
    ctx->r7 = S32(U32(ctx->r7) >> 1);
    // 0x800A3788: or          $a3, $a3, $t9
    ctx->r7 = ctx->r7 | ctx->r25;
    // 0x800A378C: srl         $a2, $a2, 1
    ctx->r6 = S32(U32(ctx->r6) >> 1);
    // 0x800A3790: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x800A3794: bne         $v0, $zero, L_800A374C
    if (ctx->r2 != 0) {
        // 0x800A3798: nop
    
            goto L_800A374C;
    }
    // 0x800A3798: nop

    // 0x800A379C: jr          $ra
    // 0x800A37A0: xor         $v0, $v0, $v0
    ctx->r2 = ctx->r2 ^ ctx->r2;
    TRACE_RETURN()
    return;
    // 0x800A37A0: xor         $v0, $v0, $v0
    ctx->r2 = ctx->r2 ^ ctx->r2;
;}
RECOMP_FUNC void func_80077450_52850(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80077450: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80077454: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80077458: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8007745C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80077460: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80077464: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80077468: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x8007746C: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80077470: bne         $v0, $v1, L_80077484
    if (ctx->r2 != ctx->r3) {
        // 0x80077474: nop
    
            goto L_80077484;
    }
    // 0x80077474: nop

    // 0x80077478: lhu         $v0, 0x3A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X3A);
    // 0x8007747C: addiu       $v0, $v0, -0x12
    ctx->r2 = ADD32(ctx->r2, -0X12);
    // 0x80077480: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
L_80077484:
    // 0x80077484: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80077488: addiu       $v0, $zero, 0xFE
    ctx->r2 = ADD32(0, 0XFE);
    // 0x8007748C: bne         $v1, $v0, L_800774A4
    if (ctx->r3 != ctx->r2) {
        // 0x80077490: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_800774A4;
    }
    // 0x80077490: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80077494: addiu       $v0, $zero, 0xC2
    ctx->r2 = ADD32(0, 0XC2);
    // 0x80077498: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x8007749C: j           L_800774A8
    // 0x800774A0: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
        goto L_800774A8;
    // 0x800774A0: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
L_800774A4:
    // 0x800774A4: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
L_800774A8:
    // 0x800774A8: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x800774AC: beq         $v0, $zero, L_800774C0
    if (ctx->r2 == 0) {
        // 0x800774B0: nop
    
            goto L_800774C0;
    }
    // 0x800774B0: nop

    // 0x800774B4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x800774B8: j           L_800774C8
    // 0x800774BC: ori         $v0, $v0, 0x82
    ctx->r2 = ctx->r2 | 0X82;
        goto L_800774C8;
    // 0x800774BC: ori         $v0, $v0, 0x82
    ctx->r2 = ctx->r2 | 0X82;
L_800774C0:
    // 0x800774C0: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x800774C4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
L_800774C8:
    // 0x800774C8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x800774CC: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x800774D0: andi        $v1, $v1, 0xF
    ctx->r3 = ctx->r3 & 0XF;
    // 0x800774D4: sb          $v1, 0x10($sp)
    MEM_B(0X10, ctx->r29) = ctx->r3;
    // 0x800774D8: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x800774DC: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x800774E0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800774E4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800774E8: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x800774EC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x800774F0: lhu         $a0, -0x3440($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X3440);
    // 0x800774F4: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x800774F8: lui         $a1, 0x280
    ctx->r5 = S32(0X280 << 16);
    // 0x800774FC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80077500: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80077504: sh          $a0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r4;
    // 0x80077508: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x8007750C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80077510: lhu         $v0, -0x343E($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X343E);
    // 0x80077514: ori         $a1, $a1, 0x8080
    ctx->r5 = ctx->r5 | 0X8080;
    // 0x80077518: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
    // 0x8007751C: sw          $a1, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r5;
    // 0x80077520: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80077524: sh          $zero, 0x3E($s0)
    MEM_H(0X3E, ctx->r16) = 0;
    // 0x80077528: jal         0x8002C654
    // 0x8007752C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    func_8002C654_7A54(rdram, ctx);
        goto after_0;
    // 0x8007752C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    after_0:
    // 0x80077530: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80077534: sh          $zero, 0x28($s0)
    MEM_H(0X28, ctx->r16) = 0;
    // 0x80077538: sh          $zero, 0x20($s0)
    MEM_H(0X20, ctx->r16) = 0;
    // 0x8007753C: andi        $v0, $v1, 0x80
    ctx->r2 = ctx->r3 & 0X80;
    // 0x80077540: bne         $v0, $zero, L_80077624
    if (ctx->r2 != 0) {
        // 0x80077544: sh          $zero, 0x18($s0)
        MEM_H(0X18, ctx->r16) = 0;
            goto L_80077624;
    }
    // 0x80077544: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x80077548: andi        $v0, $v1, 0x20
    ctx->r2 = ctx->r3 & 0X20;
    // 0x8007754C: beq         $v0, $zero, L_800775E8
    if (ctx->r2 == 0) {
        // 0x80077550: addiu       $a0, $zero, 0xA4
        ctx->r4 = ADD32(0, 0XA4);
            goto L_800775E8;
    }
    // 0x80077550: addiu       $a0, $zero, 0xA4
    ctx->r4 = ADD32(0, 0XA4);
    // 0x80077554: addiu       $s1, $s0, 0x38
    ctx->r17 = ADD32(ctx->r16, 0X38);
    // 0x80077558: jal         0x8002A33C
    // 0x8007755C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x8007755C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x80077560: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x80077564: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80077568: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x8007756C: jal         0x80034904
    // 0x80077570: sb          $v0, 0x10($sp)
    MEM_B(0X10, ctx->r29) = ctx->r2;
    func_80034904_FD04(rdram, ctx);
        goto after_2;
    // 0x80077570: sb          $v0, 0x10($sp)
    MEM_B(0X10, ctx->r29) = ctx->r2;
    after_2:
    // 0x80077574: jal         0x8004F144
    // 0x80077578: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_3;
    // 0x80077578: nop

    after_3:
    // 0x8007757C: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x80077580: beq         $a3, $zero, L_800775A8
    if (ctx->r7 == 0) {
        // 0x80077584: addiu       $a0, $a3, 0x38
        ctx->r4 = ADD32(ctx->r7, 0X38);
            goto L_800775A8;
    }
    // 0x80077584: addiu       $a0, $a3, 0x38
    ctx->r4 = ADD32(ctx->r7, 0X38);
    // 0x80077588: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8007758C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80077590: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x80077594: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80077598: sb          $v1, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r3;
    // 0x8007759C: sb          $v0, 0x2($a3)
    MEM_B(0X2, ctx->r7) = ctx->r2;
    // 0x800775A0: jal         0x8009A3B4
    // 0x800775A4: sb          $v1, 0x3($a3)
    MEM_B(0X3, ctx->r7) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x800775A4: sb          $v1, 0x3($a3)
    MEM_B(0X3, ctx->r7) = ctx->r3;
    after_4:
L_800775A8:
    // 0x800775A8: jal         0x8004F144
    // 0x800775AC: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_5;
    // 0x800775AC: nop

    after_5:
    // 0x800775B0: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x800775B4: beq         $a3, $zero, L_80077630
    if (ctx->r7 == 0) {
        // 0x800775B8: addiu       $a0, $a3, 0x38
        ctx->r4 = ADD32(ctx->r7, 0X38);
            goto L_80077630;
    }
    // 0x800775B8: addiu       $a0, $a3, 0x38
    ctx->r4 = ADD32(ctx->r7, 0X38);
    // 0x800775BC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x800775C0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x800775C4: addiu       $v0, $zero, 0x45
    ctx->r2 = ADD32(0, 0X45);
    // 0x800775C8: sb          $v0, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r2;
    // 0x800775CC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x800775D0: sb          $v0, 0x2($a3)
    MEM_B(0X2, ctx->r7) = ctx->r2;
    // 0x800775D4: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x800775D8: jal         0x8009A3B4
    // 0x800775DC: sb          $v0, 0x3($a3)
    MEM_B(0X3, ctx->r7) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x800775DC: sb          $v0, 0x3($a3)
    MEM_B(0X3, ctx->r7) = ctx->r2;
    after_6:
    // 0x800775E0: j           L_80077630
    // 0x800775E4: nop

        goto L_80077630;
    // 0x800775E4: nop

L_800775E8:
    // 0x800775E8: andi        $v0, $v1, 0xF
    ctx->r2 = ctx->r3 & 0XF;
    // 0x800775EC: sb          $v0, 0x10($sp)
    MEM_B(0X10, ctx->r29) = ctx->r2;
    // 0x800775F0: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x800775F4: slti        $v0, $v1, 0x7
    ctx->r2 = SIGNED(ctx->r3) < 0X7 ? 1 : 0;
    // 0x800775F8: beq         $v0, $zero, L_80077608
    if (ctx->r2 == 0) {
        // 0x800775FC: slti        $v0, $v1, 0x4
        ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
            goto L_80077608;
    }
    // 0x800775FC: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x80077600: beq         $v0, $zero, L_80077630
    if (ctx->r2 == 0) {
        // 0x80077604: nop
    
            goto L_80077630;
    }
    // 0x80077604: nop

L_80077608:
    // 0x80077608: jal         0x8003ECF0
    // 0x8007760C: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    func_8003ECF0_1A0F0(rdram, ctx);
        goto after_7;
    // 0x8007760C: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    after_7:
    // 0x80077610: lh          $v1, 0x3A($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X3A);
    // 0x80077614: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80077618: slti        $v0, $v0, 0x1E
    ctx->r2 = SIGNED(ctx->r2) < 0X1E ? 1 : 0;
    // 0x8007761C: beq         $v0, $zero, L_8007762C
    if (ctx->r2 == 0) {
        // 0x80077620: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8007762C;
    }
    // 0x80077620: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80077624:
    // 0x80077624: j           L_80077630
    // 0x80077628: sb          $zero, 0x10($sp)
    MEM_B(0X10, ctx->r29) = 0;
        goto L_80077630;
    // 0x80077628: sb          $zero, 0x10($sp)
    MEM_B(0X10, ctx->r29) = 0;
L_8007762C:
    // 0x8007762C: sb          $v0, 0x10($sp)
    MEM_B(0X10, ctx->r29) = ctx->r2;
L_80077630:
    // 0x80077630: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x80077634: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80077638: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8007763C: lbu         $v0, -0x336C($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X336C);
    // 0x80077640: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80077644: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80077648: jal         0x8004D5D4
    // 0x8007764C: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_8;
    // 0x8007764C: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    after_8:
    // 0x80077650: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80077654: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    // 0x80077658: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8007765C: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80077660: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x80077664: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80077668: beq         $a0, $zero, L_8007767C
    if (ctx->r4 == 0) {
        // 0x8007766C: sb          $v1, 0x8($s0)
        MEM_B(0X8, ctx->r16) = ctx->r3;
            goto L_8007767C;
    }
    // 0x8007766C: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x80077670: addiu       $a0, $zero, 0xA1
    ctx->r4 = ADD32(0, 0XA1);
    // 0x80077674: jal         0x8002A33C
    // 0x80077678: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_9;
    // 0x80077678: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    after_9:
L_8007767C:
    // 0x8007767C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80077680: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80077684: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80077688: jr          $ra
    // 0x8007768C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8007768C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800933A0_6E7A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800933A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800933A4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x800933A8: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x800933AC: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x800933B0: lhu         $a1, -0xE90($a1)
    ctx->r5 = MEM_HU(ctx->r5, -0XE90);
    // 0x800933B4: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x800933B8: lw          $a2, -0xE8C($a2)
    ctx->r6 = MEM_W(ctx->r6, -0XE8C);
    // 0x800933BC: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    // 0x800933C0: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x800933C4: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x800933C8: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x800933CC: jal         0x8009D540
    // 0x800933D0: lw          $a3, 0x4($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X4);
    osPfsDeleteFile_recomp(rdram, ctx);
        goto after_0;
    // 0x800933D0: lw          $a3, 0x4($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X4);
    after_0:
    // 0x800933D4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x800933D8: jr          $ra
    // 0x800933DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x800933DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8004643C_2183C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004643C: lh          $v0, 0x2($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X2);
    // 0x80046440: bgtzl       $v0, L_8004645C
    if (SIGNED(ctx->r2) > 0) {
        // 0x80046444: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_8004645C;
    }
    goto skip_0;
    // 0x80046444: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    skip_0:
    // 0x80046448: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8004644C: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80046450: sb          $v0, -0x7818($at)
    MEM_B(-0X7818, ctx->r1) = ctx->r2;
    // 0x80046454: j           L_80046468
    // 0x80046458: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80046468;
    // 0x80046458: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004645C:
    // 0x8004645C: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80046460: sb          $v0, -0x7818($at)
    MEM_B(-0X7818, ctx->r1) = ctx->r2;
    // 0x80046464: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80046468:
    // 0x80046468: jr          $ra
    // 0x8004646C: nop

    TRACE_RETURN()
    return;
    // 0x8004646C: nop

;}
RECOMP_FUNC void func_8002FB2C_AF2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002FB2C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8002FB30: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x8002FB34: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8002FB38: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x8002FB3C: addiu       $s1, $sp, 0x10
    ctx->r17 = ADD32(ctx->r29, 0X10);
    // 0x8002FB40: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8002FB44: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8002FB48: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x8002FB4C: jal         0x8009A3B4
    // 0x8002FB50: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8002FB50: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8002FB54: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8002FB58: sb          $v0, 0x14($sp)
    MEM_B(0X14, ctx->r29) = ctx->r2;
    // 0x8002FB5C: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8002FB60: sb          $v0, 0x15($sp)
    MEM_B(0X15, ctx->r29) = ctx->r2;
    // 0x8002FB64: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x8002FB68: sb          $v0, 0x16($sp)
    MEM_B(0X16, ctx->r29) = ctx->r2;
    // 0x8002FB6C: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8002FB70: sb          $v0, 0x1C($sp)
    MEM_B(0X1C, ctx->r29) = ctx->r2;
    // 0x8002FB74: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8002FB78: sb          $v0, 0x1D($sp)
    MEM_B(0X1D, ctx->r29) = ctx->r2;
    // 0x8002FB7C: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x8002FB80: sb          $v0, 0x1E($sp)
    MEM_B(0X1E, ctx->r29) = ctx->r2;
    // 0x8002FB84: lbu         $v0, 0x14($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X14);
    // 0x8002FB88: sb          $v0, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r2;
    // 0x8002FB8C: lbu         $v0, 0x15($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X15);
    // 0x8002FB90: sb          $v0, 0x25($sp)
    MEM_B(0X25, ctx->r29) = ctx->r2;
    // 0x8002FB94: lbu         $v0, 0x16($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X16);
    // 0x8002FB98: sb          $v0, 0x26($sp)
    MEM_B(0X26, ctx->r29) = ctx->r2;
    // 0x8002FB9C: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8002FBA0: sb          $v0, 0x2C($sp)
    MEM_B(0X2C, ctx->r29) = ctx->r2;
    // 0x8002FBA4: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8002FBA8: sb          $v0, 0x2D($sp)
    MEM_B(0X2D, ctx->r29) = ctx->r2;
    // 0x8002FBAC: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x8002FBB0: sb          $v0, 0x2E($sp)
    MEM_B(0X2E, ctx->r29) = ctx->r2;
    // 0x8002FBB4: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x8002FBB8: sh          $v0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r2;
    // 0x8002FBBC: lhu         $v0, 0xA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XA);
    // 0x8002FBC0: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    // 0x8002FBC4: lhu         $v0, 0x10($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X10);
    // 0x8002FBC8: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    // 0x8002FBCC: lhu         $v0, 0x12($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X12);
    // 0x8002FBD0: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x8002FBD4: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x8002FBD8: sh          $v0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r2;
    // 0x8002FBDC: lhu         $v0, 0x1A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1A);
    // 0x8002FBE0: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x8002FBE4: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x8002FBE8: sh          $v0, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r2;
    // 0x8002FBEC: lhu         $v1, 0xA($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XA);
    // 0x8002FBF0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8002FBF4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8002FBF8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8002FBFC: sb          $v0, -0x77B8($at)
    MEM_B(-0X77B8, ctx->r1) = ctx->r2;
    // 0x8002FC00: jal         0x8002ED90
    // 0x8002FC04: sh          $v1, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r3;
    func_8002ED90_A190(rdram, ctx);
        goto after_1;
    // 0x8002FC04: sh          $v1, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r3;
    after_1:
    // 0x8002FC08: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x8002FC0C: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x8002FC10: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8002FC14: jr          $ra
    // 0x8002FC18: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x8002FC18: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8003E768_19B68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003E768: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x8003E76C: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x8003E770: addiu       $t1, $t1, 0xCB4
    ctx->r9 = ADD32(ctx->r9, 0XCB4);
    // 0x8003E774: lh          $v0, 0x0($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X0);
    // 0x8003E778: addu        $a2, $a0, $t1
    ctx->r6 = ADD32(ctx->r4, ctx->r9);
    // 0x8003E77C: ori         $a0, $zero, 0x8000
    ctx->r4 = 0 | 0X8000;
    // 0x8003E780: lbu         $v1, 0x0($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X0);
    // 0x8003E784: lbu         $a3, 0x2($a2)
    ctx->r7 = MEM_BU(ctx->r6, 0X2);
    // 0x8003E788: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8003E78C: sra         $v0, $v0, 9
    ctx->r2 = S32(SIGNED(ctx->r2) >> 9);
    // 0x8003E790: subu        $t0, $v0, $v1
    ctx->r8 = SUB32(ctx->r2, ctx->r3);
    // 0x8003E794: sltu        $v0, $t0, $a3
    ctx->r2 = ctx->r8 < ctx->r7 ? 1 : 0;
    // 0x8003E798: beq         $v0, $zero, L_8003E808
    if (ctx->r2 == 0) {
        // 0x8003E79C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8003E808;
    }
    // 0x8003E79C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8003E7A0: lh          $v0, 0x4($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X4);
    // 0x8003E7A4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8003E7A8: lbu         $a0, 0x1($a2)
    ctx->r4 = MEM_BU(ctx->r6, 0X1);
    // 0x8003E7AC: lbu         $v1, 0x3($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X3);
    // 0x8003E7B0: sra         $v0, $v0, 9
    ctx->r2 = S32(SIGNED(ctx->r2) >> 9);
    // 0x8003E7B4: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8003E7B8: sltu        $v1, $v0, $v1
    ctx->r3 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8003E7BC: bne         $v1, $zero, L_8003E7CC
    if (ctx->r3 != 0) {
        // 0x8003E7C0: nop
    
            goto L_8003E7CC;
    }
    // 0x8003E7C0: nop

    // 0x8003E7C4: j           L_8003E808
    // 0x8003E7C8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8003E808;
    // 0x8003E7C8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8003E7CC:
    // 0x8003E7CC: lw          $v1, 0x4($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X4);
    // 0x8003E7D0: mult        $v0, $a3
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003E7D4: mflo        $a0
    ctx->r4 = lo;
    // 0x8003E7D8: lui         $v0, 0x7FE9
    ctx->r2 = S32(0X7FE9 << 16);
    // 0x8003E7DC: ori         $v0, $v0, 0xC000
    ctx->r2 = ctx->r2 | 0XC000;
    // 0x8003E7E0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8003E7E4: srl         $v1, $v1, 1
    ctx->r3 = S32(U32(ctx->r3) >> 1);
    // 0x8003E7E8: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8003E7EC: addiu       $v0, $t1, -0x4
    ctx->r2 = ADD32(ctx->r9, -0X4);
    // 0x8003E7F0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8003E7F4: sll         $v0, $t0, 1
    ctx->r2 = S32(ctx->r8 << 1);
    // 0x8003E7F8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8003E7FC: sll         $a0, $a0, 1
    ctx->r4 = S32(ctx->r4 << 1);
    // 0x8003E800: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8003E804: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
L_8003E808:
    // 0x8003E808: jr          $ra
    // 0x8003E80C: nop

    TRACE_RETURN()
    return;
    // 0x8003E80C: nop

;}
RECOMP_FUNC void func_8007BDE8_571E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007BDE8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8007BDEC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8007BDF0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8007BDF4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8007BDF8: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x8007BDFC: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x8007BE00: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8007BE04: lhu         $s1, 0x98($s0)
    ctx->r17 = MEM_HU(ctx->r16, 0X98);
    // 0x8007BE08: jal         0x80071060
    // 0x8007BE0C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80071060_4C460(rdram, ctx);
        goto after_0;
    // 0x8007BE0C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x8007BE10: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x8007BE14: beq         $v1, $zero, L_8007BE38
    if (ctx->r3 == 0) {
        // 0x8007BE18: addu        $t0, $v0, $zero
        ctx->r8 = ADD32(ctx->r2, 0);
            goto L_8007BE38;
    }
    // 0x8007BE18: addu        $t0, $v0, $zero
    ctx->r8 = ADD32(ctx->r2, 0);
    // 0x8007BE1C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8007BE20: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8007BE24: addiu       $a2, $s0, 0x2C
    ctx->r6 = ADD32(ctx->r16, 0X2C);
    // 0x8007BE28: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8007BE2C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8007BE30: j           L_8007BE50
    // 0x8007BE34: addiu       $v0, $zero, 0x6000
    ctx->r2 = ADD32(0, 0X6000);
        goto L_8007BE50;
    // 0x8007BE34: addiu       $v0, $zero, 0x6000
    ctx->r2 = ADD32(0, 0X6000);
L_8007BE38:
    // 0x8007BE38: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8007BE3C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8007BE40: addiu       $a2, $s0, 0x2C
    ctx->r6 = ADD32(ctx->r16, 0X2C);
    // 0x8007BE44: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8007BE48: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8007BE4C: addiu       $v0, $zero, 0x4000
    ctx->r2 = ADD32(0, 0X4000);
L_8007BE50:
    // 0x8007BE50: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8007BE54: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x8007BE58: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    // 0x8007BE5C: addiu       $v0, $s0, 0xC8
    ctx->r2 = ADD32(ctx->r16, 0XC8);
    // 0x8007BE60: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8007BE64: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x8007BE68: or          $v0, $t0, $v0
    ctx->r2 = ctx->r8 | ctx->r2;
    // 0x8007BE6C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8007BE70: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8007BE74: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8007BE78: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x8007BE7C: jal         0x80051F9C
    // 0x8007BE80: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051F9C_2D39C(rdram, ctx);
        goto after_1;
    // 0x8007BE80: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_1:
    // 0x8007BE84: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x8007BE88: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8007BE8C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8007BE90: jr          $ra
    // 0x8007BE94: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8007BE94: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8007BE98: nop

    // 0x8007BE9C: nop

;}
RECOMP_FUNC void func_80066E38_42238(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80066E38: lhu         $v0, 0xBE($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XBE);
    // 0x80066E3C: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x80066E40: sh          $v1, 0xBE($a0)
    MEM_H(0XBE, ctx->r4) = ctx->r3;
    // 0x80066E44: lw          $v1, 0x14($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X14);
    // 0x80066E48: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80066E4C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80066E50: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80066E54: sw          $v1, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r3;
    // 0x80066E58: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80066E5C: lbu         $v0, 0x5410($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X5410);
    // 0x80066E60: lb          $v1, 0x73($a0)
    ctx->r3 = MEM_B(ctx->r4, 0X73);
    // 0x80066E64: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80066E68: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80066E6C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80066E70: lb          $v0, -0x6F91($at)
    ctx->r2 = MEM_B(ctx->r1, -0X6F91);
    // 0x80066E74: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80066E78: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80066E7C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80066E80: lw          $v0, 0x29C4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X29C4);
    // 0x80066E84: jr          $ra
    // 0x80066E88: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80066E88: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_8004A49C_2589C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004A49C: beq         $a0, $zero, L_8004A4E8
    if (ctx->r4 == 0) {
        // 0x8004A4A0: addiu       $sp, $sp, -0x10
        ctx->r29 = ADD32(ctx->r29, -0X10);
            goto L_8004A4E8;
    }
    // 0x8004A4A0: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8004A4A4: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x8004A4A8: addiu       $a2, $a2, 0x4A1E
    ctx->r6 = ADD32(ctx->r6, 0X4A1E);
    // 0x8004A4AC: lh          $v0, 0x0($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X0);
    // 0x8004A4B0: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8004A4B4: lh          $v1, 0x4A60($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X4A60);
    // 0x8004A4B8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8004A4BC: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8004A4C0: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8004A4C4: bne         $v0, $zero, L_8004A4D8
    if (ctx->r2 != 0) {
        // 0x8004A4C8: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_8004A4D8;
    }
    // 0x8004A4C8: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x8004A4CC: sh          $a0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r4;
    // 0x8004A4D0: j           L_8004A500
    // 0x8004A4D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8004A500;
    // 0x8004A4D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004A4D8:
    // 0x8004A4D8: addiu       $v0, $a1, 0x2
    ctx->r2 = ADD32(ctx->r5, 0X2);
    // 0x8004A4DC: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
    // 0x8004A4E0: j           L_8004A500
    // 0x8004A4E4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8004A500;
    // 0x8004A4E4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8004A4E8:
    // 0x8004A4E8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8004A4EC: lh          $v0, 0x4A1E($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X4A1E);
    // 0x8004A4F0: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8004A4F4: lh          $v1, 0x4A60($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X4A60);
    // 0x8004A4F8: xor         $v0, $v0, $v1
    ctx->r2 = ctx->r2 ^ ctx->r3;
    // 0x8004A4FC: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
L_8004A500:
    // 0x8004A500: jr          $ra
    // 0x8004A504: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    TRACE_RETURN()
    return;
    // 0x8004A504: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_8008A7D0_65BD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008A7D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008A7D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008A7D8: jal         0x8008CFAC
    // 0x8008A7DC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8008CFAC_683AC(rdram, ctx);
        goto after_0;
    // 0x8008A7DC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x8008A7E0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8008A7E4: jal         0x8008B1A8
    // 0x8008A7E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8008B1A8_665A8(rdram, ctx);
        goto after_1;
    // 0x8008A7E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8008A7EC: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x8008A7F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008A7F4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8008A7F8: jr          $ra
    // 0x8008A7FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8008A7FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8003AB60_15F60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003AB60: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x8003AB64: sw          $s2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r18;
    // 0x8003AB68: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8003AB6C: sw          $s0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r16;
    // 0x8003AB70: sw          $ra, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r31;
    // 0x8003AB74: sw          $s3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r19;
    // 0x8003AB78: sw          $s1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r17;
    // 0x8003AB7C: lw          $v0, 0x2C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X2C);
    // 0x8003AB80: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x8003AB84: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x8003AB88: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8003AB8C: beq         $v0, $zero, L_8003AF94
    if (ctx->r2 == 0) {
        // 0x8003AB90: addu        $s0, $a1, $zero
        ctx->r16 = ADD32(ctx->r5, 0);
            goto L_8003AF94;
    }
    // 0x8003AB90: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x8003AB94: lh          $a0, 0x24($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X24);
    // 0x8003AB98: jal         0x80038CF8
    // 0x8003AB9C: lh          $a1, 0x28($s2)
    ctx->r5 = MEM_H(ctx->r18, 0X28);
    func_80038CF8_140F8(rdram, ctx);
        goto after_0;
    // 0x8003AB9C: lh          $a1, 0x28($s2)
    ctx->r5 = MEM_H(ctx->r18, 0X28);
    after_0:
    // 0x8003ABA0: bne         $v0, $zero, L_8003AF94
    if (ctx->r2 != 0) {
        // 0x8003ABA4: nop
    
            goto L_8003AF94;
    }
    // 0x8003ABA4: nop

    // 0x8003ABA8: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x8003ABAC: jal         0x80031E5C
    // 0x8003ABB0: addiu       $a0, $a0, 0x4760
    ctx->r4 = ADD32(ctx->r4, 0X4760);
    func_80031E5C_D25C(rdram, ctx);
        goto after_1;
    // 0x8003ABB0: addiu       $a0, $a0, 0x4760
    ctx->r4 = ADD32(ctx->r4, 0X4760);
    after_1:
    // 0x8003ABB4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8003ABB8: addiu       $a0, $a0, 0x46A0
    ctx->r4 = ADD32(ctx->r4, 0X46A0);
    // 0x8003ABBC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8003ABC0: addiu       $a1, $a1, 0x6B58
    ctx->r5 = ADD32(ctx->r5, 0X6B58);
    // 0x8003ABC4: jal         0x8009A3B4
    // 0x8003ABC8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8003ABC8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x8003ABCC: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8003ABD0: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x8003ABD4: addiu       $a1, $s2, 0x24
    ctx->r5 = ADD32(ctx->r18, 0X24);
    // 0x8003ABD8: jal         0x8009A3B4
    // 0x8003ABDC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8003ABDC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x8003ABE0: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8003ABE4: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x8003ABE8: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8003ABEC: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x8003ABF0: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x8003ABF4: addiu       $a2, $a2, -0x236C
    ctx->r6 = ADD32(ctx->r6, -0X236C);
    // 0x8003ABF8: lui         $a3, 0x801E
    ctx->r7 = S32(0X801E << 16);
    // 0x8003ABFC: jal         0x80031F0C
    // 0x8003AC00: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    func_80031F0C_D30C(rdram, ctx);
        goto after_4;
    // 0x8003AC00: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    after_4:
    // 0x8003AC04: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x8003AC08: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8003AC0C: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x8003AC10: jal         0x8009A3B4
    // 0x8003AC14: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8003AC14: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_5:
    // 0x8003AC18: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003AC1C: lw          $v0, -0x3F50($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3F50);
    // 0x8003AC20: bltzl       $v0, L_8003AC28
    if (SIGNED(ctx->r2) < 0) {
        // 0x8003AC24: addiu       $v0, $v0, 0x3
        ctx->r2 = ADD32(ctx->r2, 0X3);
            goto L_8003AC28;
    }
    goto skip_0;
    // 0x8003AC24: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    skip_0:
L_8003AC28:
    // 0x8003AC28: sra         $a0, $v0, 2
    ctx->r4 = S32(SIGNED(ctx->r2) >> 2);
    // 0x8003AC2C: andi        $v0, $s0, 0x40
    ctx->r2 = ctx->r16 & 0X40;
    // 0x8003AC30: beq         $v0, $zero, L_8003AC4C
    if (ctx->r2 == 0) {
        // 0x8003AC34: sw          $a0, 0x60($sp)
        MEM_W(0X60, ctx->r29) = ctx->r4;
            goto L_8003AC4C;
    }
    // 0x8003AC34: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x8003AC38: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8003AC3C: lhu         $v0, -0x7810($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X7810);
    // 0x8003AC40: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8003AC44: bnel        $v0, $zero, L_8003ACA8
    if (ctx->r2 != 0) {
        // 0x8003AC48: addiu       $a0, $sp, 0x30
        ctx->r4 = ADD32(ctx->r29, 0X30);
            goto L_8003ACA8;
    }
    goto skip_1;
    // 0x8003AC48: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    skip_1:
L_8003AC4C:
    // 0x8003AC4C: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8003AC50: lhu         $v0, -0x7810($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X7810);
    // 0x8003AC54: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8003AC58: bne         $v0, $zero, L_8003AF94
    if (ctx->r2 != 0) {
        // 0x8003AC5C: addiu       $v0, $zero, 0x30
        ctx->r2 = ADD32(0, 0X30);
            goto L_8003AF94;
    }
    // 0x8003AC5C: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8003AC60: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8003AC64: lbu         $v1, 0xB61($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0XB61);
    // 0x8003AC68: srav        $v0, $v0, $v1
    ctx->r2 = S32(SIGNED(ctx->r2) >> (ctx->r3 & 31));
    // 0x8003AC6C: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8003AC70: bne         $v0, $zero, L_8003AF94
    if (ctx->r2 != 0) {
        // 0x8003AC74: nop
    
            goto L_8003AF94;
    }
    // 0x8003AC74: nop

    // 0x8003AC78: lhu         $v0, 0x58($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X58);
    // 0x8003AC7C: addiu       $v0, $v0, 0x160
    ctx->r2 = ADD32(ctx->r2, 0X160);
    // 0x8003AC80: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8003AC84: sltiu       $v0, $v0, 0x401
    ctx->r2 = ctx->r2 < 0X401 ? 1 : 0;
    // 0x8003AC88: beq         $v0, $zero, L_8003AF94
    if (ctx->r2 == 0) {
        // 0x8003AC8C: nop
    
            goto L_8003AF94;
    }
    // 0x8003AC8C: nop

    // 0x8003AC90: lhu         $v0, 0x5A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X5A);
    // 0x8003AC94: addiu       $v0, $v0, 0x88
    ctx->r2 = ADD32(ctx->r2, 0X88);
    // 0x8003AC98: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8003AC9C: sltiu       $v0, $v0, 0x401
    ctx->r2 = ctx->r2 < 0X401 ? 1 : 0;
    // 0x8003ACA0: beq         $v0, $zero, L_8003AF94
    if (ctx->r2 == 0) {
        // 0x8003ACA4: addiu       $a0, $sp, 0x30
        ctx->r4 = ADD32(ctx->r29, 0X30);
            goto L_8003AF94;
    }
    // 0x8003ACA4: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
L_8003ACA8:
    // 0x8003ACA8: addiu       $a1, $s2, 0x24
    ctx->r5 = ADD32(ctx->r18, 0X24);
    // 0x8003ACAC: jal         0x8009A3B4
    // 0x8003ACB0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8003ACB0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x8003ACB4: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x8003ACB8: addiu       $a1, $s2, 0x4
    ctx->r5 = ADD32(ctx->r18, 0X4);
    // 0x8003ACBC: jal         0x8009A3B4
    // 0x8003ACC0: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x8003ACC0: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_7:
    // 0x8003ACC4: lui         $t6, 0x8021
    ctx->r14 = S32(0X8021 << 16);
    // 0x8003ACC8: lbu         $t6, 0xB61($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0XB61);
    // 0x8003ACCC: beq         $t6, $zero, L_8003AD64
    if (ctx->r14 == 0) {
        // 0x8003ACD0: nop
    
            goto L_8003AD64;
    }
    // 0x8003ACD0: nop

    // 0x8003ACD4: lh          $v0, 0x30($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X30);
    // 0x8003ACD8: lh          $v1, 0x32($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X32);
    // 0x8003ACDC: lh          $a0, 0x34($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X34);
    // 0x8003ACE0: lh          $a1, 0x38($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X38);
    // 0x8003ACE4: lh          $a2, 0x3A($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X3A);
    // 0x8003ACE8: lh          $a3, 0x3C($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X3C);
    // 0x8003ACEC: lh          $t0, 0x3E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X3E);
    // 0x8003ACF0: lh          $t1, 0x40($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X40);
    // 0x8003ACF4: lh          $t2, 0x42($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X42);
    // 0x8003ACF8: lh          $t3, 0x44($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X44);
    // 0x8003ACFC: lh          $t4, 0x46($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X46);
    // 0x8003AD00: lh          $t5, 0x48($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X48);
    // 0x8003AD04: sllv        $v0, $v0, $t6
    ctx->r2 = S32(ctx->r2 << (ctx->r14 & 31));
    // 0x8003AD08: sllv        $v1, $v1, $t6
    ctx->r3 = S32(ctx->r3 << (ctx->r14 & 31));
    // 0x8003AD0C: sllv        $a0, $a0, $t6
    ctx->r4 = S32(ctx->r4 << (ctx->r14 & 31));
    // 0x8003AD10: sllv        $a1, $a1, $t6
    ctx->r5 = S32(ctx->r5 << (ctx->r14 & 31));
    // 0x8003AD14: sllv        $a2, $a2, $t6
    ctx->r6 = S32(ctx->r6 << (ctx->r14 & 31));
    // 0x8003AD18: sllv        $a3, $a3, $t6
    ctx->r7 = S32(ctx->r7 << (ctx->r14 & 31));
    // 0x8003AD1C: sllv        $t0, $t0, $t6
    ctx->r8 = S32(ctx->r8 << (ctx->r14 & 31));
    // 0x8003AD20: sllv        $t1, $t1, $t6
    ctx->r9 = S32(ctx->r9 << (ctx->r14 & 31));
    // 0x8003AD24: sllv        $t2, $t2, $t6
    ctx->r10 = S32(ctx->r10 << (ctx->r14 & 31));
    // 0x8003AD28: sllv        $t3, $t3, $t6
    ctx->r11 = S32(ctx->r11 << (ctx->r14 & 31));
    // 0x8003AD2C: sllv        $t4, $t4, $t6
    ctx->r12 = S32(ctx->r12 << (ctx->r14 & 31));
    // 0x8003AD30: sllv        $t5, $t5, $t6
    ctx->r13 = S32(ctx->r13 << (ctx->r14 & 31));
    // 0x8003AD34: sh          $v0, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r2;
    // 0x8003AD38: sh          $v1, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r3;
    // 0x8003AD3C: sh          $a0, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r4;
    // 0x8003AD40: sh          $a1, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r5;
    // 0x8003AD44: sh          $a2, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = ctx->r6;
    // 0x8003AD48: sh          $a3, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = ctx->r7;
    // 0x8003AD4C: sh          $t0, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r8;
    // 0x8003AD50: sh          $t1, 0x40($sp)
    MEM_H(0X40, ctx->r29) = ctx->r9;
    // 0x8003AD54: sh          $t2, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r10;
    // 0x8003AD58: sh          $t3, 0x44($sp)
    MEM_H(0X44, ctx->r29) = ctx->r11;
    // 0x8003AD5C: sh          $t4, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r12;
    // 0x8003AD60: sh          $t5, 0x48($sp)
    MEM_H(0X48, ctx->r29) = ctx->r13;
L_8003AD64:
    // 0x8003AD64: lw          $v1, 0x60($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X60);
    // 0x8003AD68: slti        $v0, $v1, 0x709
    ctx->r2 = SIGNED(ctx->r3) < 0X709 ? 1 : 0;
    // 0x8003AD6C: beq         $v0, $zero, L_8003AD90
    if (ctx->r2 == 0) {
        // 0x8003AD70: slti        $v0, $v1, 0x2BD
        ctx->r2 = SIGNED(ctx->r3) < 0X2BD ? 1 : 0;
            goto L_8003AD90;
    }
    // 0x8003AD70: slti        $v0, $v1, 0x2BD
    ctx->r2 = SIGNED(ctx->r3) < 0X2BD ? 1 : 0;
    // 0x8003AD74: bnel        $v0, $zero, L_8003AD94
    if (ctx->r2 != 0) {
        // 0x8003AD78: addu        $t6, $zero, $zero
        ctx->r14 = ADD32(0, 0);
            goto L_8003AD94;
    }
    goto skip_2;
    // 0x8003AD78: addu        $t6, $zero, $zero
    ctx->r14 = ADD32(0, 0);
    skip_2:
    // 0x8003AD7C: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x8003AD80: lbu         $v0, -0x265E($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X265E);
    // 0x8003AD84: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8003AD88: beq         $v0, $zero, L_8003AD94
    if (ctx->r2 == 0) {
        // 0x8003AD8C: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_8003AD94;
    }
    // 0x8003AD8C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
L_8003AD90:
    // 0x8003AD90: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
L_8003AD94:
    // 0x8003AD94: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x8003AD98: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8003AD9C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003ADA0: sw          $v0, -0xC9C($at)
    MEM_W(-0XC9C, ctx->r1) = ctx->r2;
    // 0x8003ADA4: sb          $t6, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r14;
    // 0x8003ADA8: lw          $v0, 0x2C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X2C);
    // 0x8003ADAC: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x8003ADB0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8003ADB4: beq         $v0, $zero, L_8003ADC8
    if (ctx->r2 == 0) {
        // 0x8003ADB8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8003ADC8;
    }
    // 0x8003ADB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8003ADBC: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x8003ADC0: j           L_8003ADE4
    // 0x8003ADC4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_8003ADE4;
    // 0x8003ADC4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8003ADC8:
    // 0x8003ADC8: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x8003ADCC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8003ADD0: jal         0x80081778
    // 0x8003ADD4: lw          $a0, -0xC9C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XC9C);
    func_80081778_5CB78(rdram, ctx);
        goto after_8;
    // 0x8003ADD4: lw          $a0, -0xC9C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XC9C);
    after_8:
    // 0x8003ADD8: bne         $v0, $zero, L_8003ADE4
    if (ctx->r2 != 0) {
        // 0x8003ADDC: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_8003ADE4;
    }
    // 0x8003ADDC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8003ADE0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_8003ADE4:
    // 0x8003ADE4: sw          $v0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r2;
    // 0x8003ADE8: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x8003ADEC: beq         $v0, $zero, L_8003AE68
    if (ctx->r2 == 0) {
        // 0x8003ADF0: addiu       $s3, $zero, 0x4210
        ctx->r19 = ADD32(0, 0X4210);
            goto L_8003AE68;
    }
    // 0x8003ADF0: addiu       $s3, $zero, 0x4210
    ctx->r19 = ADD32(0, 0X4210);
    // 0x8003ADF4: lw          $v0, 0x2C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X2C);
    // 0x8003ADF8: lui         $a1, 0x5555
    ctx->r5 = S32(0X5555 << 16);
    // 0x8003ADFC: ori         $a1, $a1, 0x5556
    ctx->r5 = ctx->r5 | 0X5556;
    // 0x8003AE00: srl         $v1, $v0, 8
    ctx->r3 = S32(U32(ctx->r2) >> 8);
    // 0x8003AE04: srl         $a0, $v0, 16
    ctx->r4 = S32(U32(ctx->r2) >> 16);
    // 0x8003AE08: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8003AE0C: andi        $v1, $v1, 0xFF
    ctx->r3 = ctx->r3 & 0XFF;
    // 0x8003AE10: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8003AE14: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x8003AE18: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8003AE1C: mult        $v0, $a1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003AE20: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x8003AE24: mfhi        $t7
    ctx->r15 = hi;
    // 0x8003AE28: subu        $t6, $t7, $v0
    ctx->r14 = SUB32(ctx->r15, ctx->r2);
    // 0x8003AE2C: nop

    // 0x8003AE30: bgez        $t6, L_8003AE3C
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8003AE34: addu        $v0, $t6, $zero
        ctx->r2 = ADD32(ctx->r14, 0);
            goto L_8003AE3C;
    }
    // 0x8003AE34: addu        $v0, $t6, $zero
    ctx->r2 = ADD32(ctx->r14, 0);
    // 0x8003AE38: addiu       $v0, $t6, 0xF
    ctx->r2 = ADD32(ctx->r14, 0XF);
L_8003AE3C:
    // 0x8003AE3C: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8003AE40: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8003AE44: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8003AE48: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8003AE4C: lh          $v0, -0x3664($at)
    ctx->r2 = MEM_H(ctx->r1, -0X3664);
    // 0x8003AE50: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x8003AE54: slti        $v0, $t6, 0x100
    ctx->r2 = SIGNED(ctx->r14) < 0X100 ? 1 : 0;
    // 0x8003AE58: beql        $v0, $zero, L_8003AE60
    if (ctx->r2 == 0) {
        // 0x8003AE5C: addiu       $t6, $zero, 0xF8
        ctx->r14 = ADD32(0, 0XF8);
            goto L_8003AE60;
    }
    goto skip_3;
    // 0x8003AE5C: addiu       $t6, $zero, 0xF8
    ctx->r14 = ADD32(0, 0XF8);
    skip_3:
L_8003AE60:
    // 0x8003AE60: j           L_8003AEC0
    // 0x8003AE64: sb          $t6, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r14;
        goto L_8003AEC0;
    // 0x8003AE64: sb          $t6, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r14;
L_8003AE68:
    // 0x8003AE68: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x8003AE6C: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8003AE70: lw          $a0, 0x2C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X2C);
    // 0x8003AE74: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x8003AE78: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x8003AE7C: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x8003AE80: beq         $v0, $v1, L_8003AEAC
    if (ctx->r2 == ctx->r3) {
        // 0x8003AE84: andi        $v0, $a0, 0xFF
        ctx->r2 = ctx->r4 & 0XFF;
            goto L_8003AEAC;
    }
    // 0x8003AE84: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x8003AE88: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
    // 0x8003AE8C: srl         $v1, $a0, 6
    ctx->r3 = S32(U32(ctx->r4) >> 6);
    // 0x8003AE90: andi        $v1, $v1, 0x3E0
    ctx->r3 = ctx->r3 & 0X3E0;
    // 0x8003AE94: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8003AE98: srl         $v1, $a0, 9
    ctx->r3 = S32(U32(ctx->r4) >> 9);
    // 0x8003AE9C: andi        $v1, $v1, 0x7C00
    ctx->r3 = ctx->r3 & 0X7C00;
    // 0x8003AEA0: or          $s3, $v0, $v1
    ctx->r19 = ctx->r2 | ctx->r3;
    // 0x8003AEA4: j           L_8003AEC0
    // 0x8003AEA8: sh          $s3, 0x36($s2)
    MEM_H(0X36, ctx->r18) = ctx->r19;
        goto L_8003AEC0;
    // 0x8003AEA8: sh          $s3, 0x36($s2)
    MEM_H(0X36, ctx->r18) = ctx->r19;
L_8003AEAC:
    // 0x8003AEAC: lhu         $v0, 0x36($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X36);
    // 0x8003AEB0: beq         $v0, $zero, L_8003AEC0
    if (ctx->r2 == 0) {
        // 0x8003AEB4: nop
    
            goto L_8003AEC0;
    }
    // 0x8003AEB4: nop

    // 0x8003AEB8: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x8003AEBC: sh          $zero, 0x36($s2)
    MEM_H(0X36, ctx->r18) = 0;
L_8003AEC0:
    // 0x8003AEC0: lui         $s0, 0x801D
    ctx->r16 = S32(0X801D << 16);
    // 0x8003AEC4: addiu       $s0, $s0, 0x4760
    ctx->r16 = ADD32(ctx->r16, 0X4760);
    // 0x8003AEC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8003AECC: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x8003AED0: lui         $s1, 0x8021
    ctx->r17 = S32(0X8021 << 16);
    // 0x8003AED4: addiu       $s1, $s1, 0x990
    ctx->r17 = ADD32(ctx->r17, 0X990);
    // 0x8003AED8: jal         0x800306F0
    // 0x8003AEDC: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_800306F0_BAF0(rdram, ctx);
        goto after_9;
    // 0x8003AEDC: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_9:
    // 0x8003AEE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8003AEE4: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x8003AEE8: jal         0x800308E8
    // 0x8003AEEC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    func_800308E8_BCE8(rdram, ctx);
        goto after_10;
    // 0x8003AEEC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_10:
    // 0x8003AEF0: lui         $v0, 0x801D
    ctx->r2 = S32(0X801D << 16);
    // 0x8003AEF4: lw          $v0, 0x4774($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4774);
    // 0x8003AEF8: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x8003AEFC: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x8003AF00: lw          $v1, 0x4778($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4778);
    // 0x8003AF04: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x8003AF08: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x8003AF0C: lw          $a1, 0x477C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X477C);
    // 0x8003AF10: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8003AF14: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8003AF18: addu        $v1, $v1, $a3
    ctx->r3 = ADD32(ctx->r3, ctx->r7);
    // 0x8003AF1C: addu        $a1, $a1, $t0
    ctx->r5 = ADD32(ctx->r5, ctx->r8);
    // 0x8003AF20: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8003AF24: sw          $v0, 0x9A4($at)
    MEM_W(0X9A4, ctx->r1) = ctx->r2;
    // 0x8003AF28: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8003AF2C: sw          $v1, 0x9A8($at)
    MEM_W(0X9A8, ctx->r1) = ctx->r3;
    // 0x8003AF30: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8003AF34: sw          $a1, 0x9AC($at)
    MEM_W(0X9AC, ctx->r1) = ctx->r5;
    // 0x8003AF38: jal         0x80031E5C
    // 0x8003AF3C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80031E5C_D25C(rdram, ctx);
        goto after_11;
    // 0x8003AF3C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_11:
    // 0x8003AF40: jal         0x80031E94
    // 0x8003AF44: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80031E94_D294(rdram, ctx);
        goto after_12;
    // 0x8003AF44: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_12:
    // 0x8003AF48: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8003AF4C: lb          $a1, 0x63($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X63);
    // 0x8003AF50: lui         $a2, 0x8008
    ctx->r6 = S32(0X8008 << 16);
    // 0x8003AF54: addiu       $a2, $a2, 0x128C
    ctx->r6 = ADD32(ctx->r6, 0X128C);
    // 0x8003AF58: jal         0x800283A8
    // 0x8003AF5C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_800283A8_37A8(rdram, ctx);
        goto after_13;
    // 0x8003AF5C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_13:
    // 0x8003AF60: lhu         $a1, 0x62($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X62);
    // 0x8003AF64: lhu         $a2, 0x2A($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X2A);
    // 0x8003AF68: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8003AF6C: lw          $v0, -0xC9C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XC9C);
    // 0x8003AF70: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x8003AF74: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8003AF78: lbu         $v0, 0x34($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X34);
    // 0x8003AF7C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8003AF80: lbu         $v0, 0x35($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X35);
    // 0x8003AF84: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8003AF88: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    // 0x8003AF8C: jal         0x800817BC
    // 0x8003AF90: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_800817BC_5CBBC(rdram, ctx);
        goto after_14;
    // 0x8003AF90: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_14:
L_8003AF94:
    // 0x8003AF94: lw          $ra, 0x78($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X78);
    // 0x8003AF98: lw          $s3, 0x74($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X74);
    // 0x8003AF9C: lw          $s2, 0x70($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X70);
    // 0x8003AFA0: lw          $s1, 0x6C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X6C);
    // 0x8003AFA4: lw          $s0, 0x68($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X68);
    // 0x8003AFA8: jr          $ra
    // 0x8003AFAC: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    TRACE_RETURN()
    return;
    // 0x8003AFAC: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_800288D8_3CD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800288D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800288DC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x800288E0: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x800288E4: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x800288E8: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x800288EC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x800288F0: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x800288F4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x800288F8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x800288FC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80028900: addiu       $a0, $a0, 0x48B0
    ctx->r4 = ADD32(ctx->r4, 0X48B0);
    // 0x80028904: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    // 0x80028908: jal         0x8009A3B4
    // 0x8002890C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8002890C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x80028910: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80028914: jr          $ra
    // 0x80028918: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80028918: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80035478_10878(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80035478: jr          $ra
    // 0x8003547C: nop

    TRACE_RETURN()
    return;
    // 0x8003547C: nop

;}
RECOMP_FUNC void func_8006FC90_4B090(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006FC90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006FC94: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8006FC98: lhu         $t0, 0x124($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0X124);
    // 0x8006FC9C: lhu         $a3, 0x126($a0)
    ctx->r7 = MEM_HU(ctx->r4, 0X126);
    // 0x8006FCA0: lhu         $v0, 0x11C($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X11C);
    // 0x8006FCA4: or          $v1, $t0, $a3
    ctx->r3 = ctx->r8 | ctx->r7;
    // 0x8006FCA8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8006FCAC: beql        $v0, $zero, L_8006FCD0
    if (ctx->r2 == 0) {
        // 0x8006FCB0: sh          $zero, 0x10C($a0)
        MEM_H(0X10C, ctx->r4) = 0;
            goto L_8006FCD0;
    }
    goto skip_0;
    // 0x8006FCB0: sh          $zero, 0x10C($a0)
    MEM_H(0X10C, ctx->r4) = 0;
    skip_0:
    // 0x8006FCB4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8006FCB8: lb          $v0, -0x3BC3($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC3);
    // 0x8006FCBC: bne         $v0, $zero, L_8006FCC8
    if (ctx->r2 != 0) {
        // 0x8006FCC0: andi        $a3, $a3, 0xFFFF
        ctx->r7 = ctx->r7 & 0XFFFF;
            goto L_8006FCC8;
    }
    // 0x8006FCC0: andi        $a3, $a3, 0xFFFF
    ctx->r7 = ctx->r7 & 0XFFFF;
    // 0x8006FCC4: andi        $a3, $t0, 0xFFFF
    ctx->r7 = ctx->r8 & 0XFFFF;
L_8006FCC8:
    // 0x8006FCC8: jal         0x8006FCDC
    // 0x8006FCCC: nop

    func_8006FCDC_4B0DC(rdram, ctx);
        goto after_0;
    // 0x8006FCCC: nop

    after_0:
L_8006FCD0:
    // 0x8006FCD0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8006FCD4: jr          $ra
    // 0x8006FCD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8006FCD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8006CC14_48014(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006CC14: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8006CC18: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8006CC1C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8006CC20: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x8006CC24: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8006CC28: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8006CC2C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8006CC30: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8006CC34: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8006CC38: lb          $v1, 0x170($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X170);
    // 0x8006CC3C: lhu         $s1, 0x11C($s0)
    ctx->r17 = MEM_HU(ctx->r16, 0X11C);
    // 0x8006CC40: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8006CC44: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8006CC48: lb          $v1, 0x171($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X171);
    // 0x8006CC4C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8006CC50: lui         $s4, 0x800B
    ctx->r20 = S32(0X800B << 16);
    // 0x8006CC54: addu        $s4, $s4, $v0
    ctx->r20 = ADD32(ctx->r20, ctx->r2);
    // 0x8006CC58: lbu         $s4, 0x30F8($s4)
    ctx->r20 = MEM_BU(ctx->r20, 0X30F8);
    // 0x8006CC5C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8006CC60: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8006CC64: lb          $v1, 0x174($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X174);
    // 0x8006CC68: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8006CC6C: lui         $s3, 0x800B
    ctx->r19 = S32(0X800B << 16);
    // 0x8006CC70: addu        $s3, $s3, $v0
    ctx->r19 = ADD32(ctx->r19, ctx->r2);
    // 0x8006CC74: lbu         $s3, 0x30F8($s3)
    ctx->r19 = MEM_BU(ctx->r19, 0X30F8);
    // 0x8006CC78: andi        $v1, $v1, 0xC0
    ctx->r3 = ctx->r3 & 0XC0;
    // 0x8006CC7C: bne         $v1, $zero, L_8006CE48
    if (ctx->r3 != 0) {
        // 0x8006CC80: addu        $s2, $a2, $zero
        ctx->r18 = ADD32(ctx->r6, 0);
            goto L_8006CE48;
    }
    // 0x8006CC80: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x8006CC84: lb          $v1, 0x177($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X177);
    // 0x8006CC88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006CC8C: bne         $v1, $v0, L_8006CCEC
    if (ctx->r3 != ctx->r2) {
        // 0x8006CC90: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8006CCEC;
    }
    // 0x8006CC90: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8006CC94: lhu         $v0, 0x13A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X13A);
    // 0x8006CC98: and         $v0, $v0, $s1
    ctx->r2 = ctx->r2 & ctx->r17;
    // 0x8006CC9C: bne         $v0, $zero, L_8006CCB4
    if (ctx->r2 != 0) {
        // 0x8006CCA0: addiu       $v1, $zero, 0x2
        ctx->r3 = ADD32(0, 0X2);
            goto L_8006CCB4;
    }
    // 0x8006CCA0: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8006CCA4: lbu         $v0, 0x176($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X176);
    // 0x8006CCA8: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8006CCAC: bne         $v0, $v1, L_8006CCE4
    if (ctx->r2 != ctx->r3) {
        // 0x8006CCB0: nop
    
            goto L_8006CCE4;
    }
    // 0x8006CCB0: nop

L_8006CCB4:
    // 0x8006CCB4: lbu         $v0, 0x175($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X175);
    // 0x8006CCB8: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x8006CCBC: andi        $v0, $v0, 0x5
    ctx->r2 = ctx->r2 & 0X5;
    // 0x8006CCC0: bne         $v0, $v1, L_8006CCE4
    if (ctx->r2 != ctx->r3) {
        // 0x8006CCC4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8006CCE4;
    }
    // 0x8006CCC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006CCC8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8006CCCC: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8006CCD0: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8006CCD4: jal         0x8006C9DC
    // 0x8006CCD8: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    func_8006C9DC_47DDC(rdram, ctx);
        goto after_0;
    // 0x8006CCD8: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    after_0:
    // 0x8006CCDC: bne         $v0, $zero, L_8006CD54
    if (ctx->r2 != 0) {
        // 0x8006CCE0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8006CD54;
    }
    // 0x8006CCE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8006CCE4:
    // 0x8006CCE4: lb          $v1, 0x177($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X177);
    // 0x8006CCE8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8006CCEC:
    // 0x8006CCEC: bne         $v1, $v0, L_8006CD68
    if (ctx->r3 != ctx->r2) {
        // 0x8006CCF0: nop
    
            goto L_8006CD68;
    }
    // 0x8006CCF0: nop

    // 0x8006CCF4: lhu         $v0, 0x13C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X13C);
    // 0x8006CCF8: and         $v0, $v0, $s1
    ctx->r2 = ctx->r2 & ctx->r17;
    // 0x8006CCFC: bne         $v0, $zero, L_8006CD14
    if (ctx->r2 != 0) {
        // 0x8006CD00: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8006CD14;
    }
    // 0x8006CD00: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8006CD04: lbu         $v0, 0x176($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X176);
    // 0x8006CD08: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8006CD0C: bne         $v0, $v1, L_8006CD68
    if (ctx->r2 != ctx->r3) {
        // 0x8006CD10: nop
    
            goto L_8006CD68;
    }
    // 0x8006CD10: nop

L_8006CD14:
    // 0x8006CD14: lbu         $v0, 0x175($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X175);
    // 0x8006CD18: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8006CD1C: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8006CD20: bne         $v0, $v1, L_8006CD68
    if (ctx->r2 != ctx->r3) {
        // 0x8006CD24: nop
    
            goto L_8006CD68;
    }
    // 0x8006CD24: nop

    // 0x8006CD28: jal         0x80055060
    // 0x8006CD2C: nop

    func_80055060_30460(rdram, ctx);
        goto after_1;
    // 0x8006CD2C: nop

    after_1:
    // 0x8006CD30: beq         $v0, $zero, L_8006CD68
    if (ctx->r2 == 0) {
        // 0x8006CD34: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8006CD68;
    }
    // 0x8006CD34: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006CD38: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8006CD3C: sll         $a2, $s2, 16
    ctx->r6 = S32(ctx->r18 << 16);
    // 0x8006CD40: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8006CD44: jal         0x8006C9DC
    // 0x8006CD48: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    func_8006C9DC_47DDC(rdram, ctx);
        goto after_2;
    // 0x8006CD48: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    after_2:
    // 0x8006CD4C: beq         $v0, $zero, L_8006CD68
    if (ctx->r2 == 0) {
        // 0x8006CD50: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8006CD68;
    }
    // 0x8006CD50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8006CD54:
    // 0x8006CD54: addiu       $v1, $zero, 0x100
    ctx->r3 = ADD32(0, 0X100);
    // 0x8006CD58: sh          $v1, 0x178($s0)
    MEM_H(0X178, ctx->r16) = ctx->r3;
    // 0x8006CD5C: sb          $zero, 0x177($s0)
    MEM_B(0X177, ctx->r16) = 0;
    // 0x8006CD60: j           L_8006CE50
    // 0x8006CD64: sb          $zero, 0x176($s0)
    MEM_B(0X176, ctx->r16) = 0;
        goto L_8006CE50;
    // 0x8006CD64: sb          $zero, 0x176($s0)
    MEM_B(0X176, ctx->r16) = 0;
L_8006CD68:
    // 0x8006CD68: lhu         $v0, 0x13A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X13A);
    // 0x8006CD6C: and         $v0, $v0, $s1
    ctx->r2 = ctx->r2 & ctx->r17;
    // 0x8006CD70: bne         $v0, $zero, L_8006CD88
    if (ctx->r2 != 0) {
        // 0x8006CD74: addiu       $v1, $zero, 0x2
        ctx->r3 = ADD32(0, 0X2);
            goto L_8006CD88;
    }
    // 0x8006CD74: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8006CD78: lbu         $v0, 0x176($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X176);
    // 0x8006CD7C: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8006CD80: bne         $v0, $v1, L_8006CDD0
    if (ctx->r2 != ctx->r3) {
        // 0x8006CD84: nop
    
            goto L_8006CDD0;
    }
    // 0x8006CD84: nop

L_8006CD88:
    // 0x8006CD88: lb          $v0, 0x171($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X171);
    // 0x8006CD8C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8006CD90: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8006CD94: lh          $v0, 0x4FA($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X4FA);
    // 0x8006CD98: blez        $v0, L_8006CDD0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8006CD9C: addiu       $v1, $zero, 0x5
        ctx->r3 = ADD32(0, 0X5);
            goto L_8006CDD0;
    }
    // 0x8006CD9C: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x8006CDA0: lbu         $v0, 0x175($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X175);
    // 0x8006CDA4: andi        $v0, $v0, 0x5
    ctx->r2 = ctx->r2 & 0X5;
    // 0x8006CDA8: bne         $v0, $v1, L_8006CDD0
    if (ctx->r2 != ctx->r3) {
        // 0x8006CDAC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8006CDD0;
    }
    // 0x8006CDAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006CDB0: sb          $zero, 0x176($s0)
    MEM_B(0X176, ctx->r16) = 0;
    // 0x8006CDB4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8006CDB8: sll         $a2, $s2, 16
    ctx->r6 = S32(ctx->r18 << 16);
    // 0x8006CDBC: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8006CDC0: jal         0x8006C9DC
    // 0x8006CDC4: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    func_8006C9DC_47DDC(rdram, ctx);
        goto after_3;
    // 0x8006CDC4: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    after_3:
    // 0x8006CDC8: j           L_8006CE50
    // 0x8006CDCC: nop

        goto L_8006CE50;
    // 0x8006CDCC: nop

L_8006CDD0:
    // 0x8006CDD0: lhu         $v0, 0x13C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X13C);
    // 0x8006CDD4: and         $v0, $v0, $s1
    ctx->r2 = ctx->r2 & ctx->r17;
    // 0x8006CDD8: bne         $v0, $zero, L_8006CDF0
    if (ctx->r2 != 0) {
        // 0x8006CDDC: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8006CDF0;
    }
    // 0x8006CDDC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8006CDE0: lbu         $v0, 0x176($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X176);
    // 0x8006CDE4: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8006CDE8: bnel        $v0, $v1, L_8006CE4C
    if (ctx->r2 != ctx->r3) {
        // 0x8006CDEC: sb          $zero, 0x176($s0)
        MEM_B(0X176, ctx->r16) = 0;
            goto L_8006CE4C;
    }
    goto skip_0;
    // 0x8006CDEC: sb          $zero, 0x176($s0)
    MEM_B(0X176, ctx->r16) = 0;
    skip_0:
L_8006CDF0:
    // 0x8006CDF0: lb          $v0, 0x170($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X170);
    // 0x8006CDF4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8006CDF8: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8006CDFC: lh          $v0, 0x4FA($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X4FA);
    // 0x8006CE00: blez        $v0, L_8006CE48
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8006CE04: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_8006CE48;
    }
    // 0x8006CE04: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8006CE08: lbu         $v0, 0x175($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X175);
    // 0x8006CE0C: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8006CE10: bnel        $v0, $v1, L_8006CE4C
    if (ctx->r2 != ctx->r3) {
        // 0x8006CE14: sb          $zero, 0x176($s0)
        MEM_B(0X176, ctx->r16) = 0;
            goto L_8006CE4C;
    }
    goto skip_1;
    // 0x8006CE14: sb          $zero, 0x176($s0)
    MEM_B(0X176, ctx->r16) = 0;
    skip_1:
    // 0x8006CE18: jal         0x80055060
    // 0x8006CE1C: nop

    func_80055060_30460(rdram, ctx);
        goto after_4;
    // 0x8006CE1C: nop

    after_4:
    // 0x8006CE20: beq         $v0, $zero, L_8006CE48
    if (ctx->r2 == 0) {
        // 0x8006CE24: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8006CE48;
    }
    // 0x8006CE24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006CE28: sb          $zero, 0x176($s0)
    MEM_B(0X176, ctx->r16) = 0;
    // 0x8006CE2C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x8006CE30: sll         $a2, $s2, 16
    ctx->r6 = S32(ctx->r18 << 16);
    // 0x8006CE34: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8006CE38: jal         0x8006C9DC
    // 0x8006CE3C: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    func_8006C9DC_47DDC(rdram, ctx);
        goto after_5;
    // 0x8006CE3C: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    after_5:
    // 0x8006CE40: j           L_8006CE50
    // 0x8006CE44: nop

        goto L_8006CE50;
    // 0x8006CE44: nop

L_8006CE48:
    // 0x8006CE48: sb          $zero, 0x176($s0)
    MEM_B(0X176, ctx->r16) = 0;
L_8006CE4C:
    // 0x8006CE4C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8006CE50:
    // 0x8006CE50: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8006CE54: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8006CE58: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8006CE5C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8006CE60: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8006CE64: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8006CE68: jr          $ra
    // 0x8006CE6C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8006CE6C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8003A248_15648(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003A248: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8003A24C: lhu         $v0, 0x49AC($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X49AC);
    // 0x8003A250: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8003A254: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8003A258: bne         $v0, $zero, L_8003A2DC
    if (ctx->r2 != 0) {
        // 0x8003A25C: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_8003A2DC;
    }
    // 0x8003A25C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8003A260: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8003A264: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x8003A268: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x8003A26C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8003A270: lbu         $v1, 0x49B6($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X49B6);
    // 0x8003A274: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8003A278: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8003A27C: beq         $v0, $zero, L_8003A290
    if (ctx->r2 == 0) {
        // 0x8003A280: nop
    
            goto L_8003A290;
    }
    // 0x8003A280: nop

    // 0x8003A284: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8003A288: jal         0x80039FE0
    // 0x8003A28C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80039FE0_153E0(rdram, ctx);
        goto after_0;
    // 0x8003A28C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
L_8003A290:
    // 0x8003A290: lb          $v0, 0x5F4($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X5F4);
    // 0x8003A294: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8003A298: lbu         $v1, 0x4FAA($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4FAA);
    // 0x8003A29C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8003A2A0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8003A2A4: beq         $v0, $zero, L_8003A2B4
    if (ctx->r2 == 0) {
        // 0x8003A2A8: addiu       $a0, $s0, 0x5F4
        ctx->r4 = ADD32(ctx->r16, 0X5F4);
            goto L_8003A2B4;
    }
    // 0x8003A2A8: addiu       $a0, $s0, 0x5F4
    ctx->r4 = ADD32(ctx->r16, 0X5F4);
    // 0x8003A2AC: jal         0x80039FE0
    // 0x8003A2B0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80039FE0_153E0(rdram, ctx);
        goto after_1;
    // 0x8003A2B0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
L_8003A2B4:
    // 0x8003A2B4: jal         0x8003A888
    // 0x8003A2B8: nop

    func_8003A888_15C88(rdram, ctx);
        goto after_2;
    // 0x8003A2B8: nop

    after_2:
    // 0x8003A2BC: jal         0x8003A94C
    // 0x8003A2C0: nop

    func_8003A94C_15D4C(rdram, ctx);
        goto after_3;
    // 0x8003A2C0: nop

    after_3:
    // 0x8003A2C4: jal         0x8003A9C4
    // 0x8003A2C8: nop

    func_8003A9C4_15DC4(rdram, ctx);
        goto after_4;
    // 0x8003A2C8: nop

    after_4:
    // 0x8003A2CC: jal         0x8003B7D8
    // 0x8003A2D0: nop

    func_8003B7D8_16BD8(rdram, ctx);
        goto after_5;
    // 0x8003A2D0: nop

    after_5:
    // 0x8003A2D4: jal         0x8003B994
    // 0x8003A2D8: nop

    func_8003B994_16D94(rdram, ctx);
        goto after_6;
    // 0x8003A2D8: nop

    after_6:
L_8003A2DC:
    // 0x8003A2DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8003A2E0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8003A2E4: jr          $ra
    // 0x8003A2E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8003A2E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8004FEA0_2B2A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004FEA0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8004FEA4: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
    // 0x8004FEA8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8004FEAC: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8004FEB0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8004FEB4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8004FEB8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8004FEBC: lhu         $v0, 0x6($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X6);
    // 0x8004FEC0: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x8004FEC4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8004FEC8: beq         $v0, $zero, L_8004FF04
    if (ctx->r2 == 0) {
        // 0x8004FECC: addu        $s2, $a3, $zero
        ctx->r18 = ADD32(ctx->r7, 0);
            goto L_8004FF04;
    }
    // 0x8004FECC: addu        $s2, $a3, $zero
    ctx->r18 = ADD32(ctx->r7, 0);
    // 0x8004FED0: lh          $v0, 0x4($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X4);
    // 0x8004FED4: lh          $a0, 0x4($t0)
    ctx->r4 = MEM_H(ctx->r8, 0X4);
    // 0x8004FED8: lh          $v1, 0x0($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X0);
    // 0x8004FEDC: lh          $a1, 0x0($t0)
    ctx->r5 = MEM_H(ctx->r8, 0X0);
    // 0x8004FEE0: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8004FEE4: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8004FEE8: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x8004FEEC: bgtz        $v0, L_8004FF30
    if (SIGNED(ctx->r2) > 0) {
        // 0x8004FEF0: sll         $v1, $v1, 16
        ctx->r3 = S32(ctx->r3 << 16);
            goto L_8004FF30;
    }
    // 0x8004FEF0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8004FEF4: bltz        $v0, L_8004FF78
    if (SIGNED(ctx->r2) < 0) {
        // 0x8004FEF8: negu        $a0, $v1
        ctx->r4 = SUB32(0, ctx->r3);
            goto L_8004FF78;
    }
    // 0x8004FEF8: negu        $a0, $v1
    ctx->r4 = SUB32(0, ctx->r3);
    // 0x8004FEFC: j           L_8004FFBC
    // 0x8004FF00: nor         $v0, $zero, $v1
    ctx->r2 = ~(0 | ctx->r3);
        goto L_8004FFBC;
    // 0x8004FF00: nor         $v0, $zero, $v1
    ctx->r2 = ~(0 | ctx->r3);
L_8004FF04:
    // 0x8004FF04: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8004FF08: lh          $v0, -0x1B8C($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X1B8C);
    // 0x8004FF0C: lh          $a0, 0x4($a1)
    ctx->r4 = MEM_H(ctx->r5, 0X4);
    // 0x8004FF10: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8004FF14: lh          $v1, -0x1B90($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X1B90);
    // 0x8004FF18: lh          $a1, 0x0($a1)
    ctx->r5 = MEM_H(ctx->r5, 0X0);
    // 0x8004FF1C: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8004FF20: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8004FF24: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x8004FF28: blez        $v0, L_8004FF6C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8004FF2C: sll         $v1, $v1, 16
        ctx->r3 = S32(ctx->r3 << 16);
            goto L_8004FF6C;
    }
    // 0x8004FF2C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
L_8004FF30:
    // 0x8004FF30: div         $zero, $v1, $v0
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r2)));
    // 0x8004FF34: bne         $v0, $zero, L_8004FF40
    if (ctx->r2 != 0) {
        // 0x8004FF38: nop
    
            goto L_8004FF40;
    }
    // 0x8004FF38: nop

    // 0x8004FF3C: break       7
    do_break(2147811132);
L_8004FF40:
    // 0x8004FF40: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8004FF44: bne         $v0, $at, L_8004FF58
    if (ctx->r2 != ctx->r1) {
        // 0x8004FF48: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8004FF58;
    }
    // 0x8004FF48: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8004FF4C: bne         $v1, $at, L_8004FF58
    if (ctx->r3 != ctx->r1) {
        // 0x8004FF50: nop
    
            goto L_8004FF58;
    }
    // 0x8004FF50: nop

    // 0x8004FF54: break       6
    do_break(2147811156);
L_8004FF58:
    // 0x8004FF58: mflo        $a0
    ctx->r4 = lo;
    // 0x8004FF5C: jal         0x80032554
    // 0x8004FF60: nop

    func_80032554_D954(rdram, ctx);
        goto after_0;
    // 0x8004FF60: nop

    after_0:
    // 0x8004FF64: j           L_8004FFC8
    // 0x8004FF68: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
        goto L_8004FFC8;
    // 0x8004FF68: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
L_8004FF6C:
    // 0x8004FF6C: bgezl       $v0, L_8004FFBC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8004FF70: nor         $v0, $zero, $v1
        ctx->r2 = ~(0 | ctx->r3);
            goto L_8004FFBC;
    }
    goto skip_0;
    // 0x8004FF70: nor         $v0, $zero, $v1
    ctx->r2 = ~(0 | ctx->r3);
    skip_0:
    // 0x8004FF74: negu        $a0, $v1
    ctx->r4 = SUB32(0, ctx->r3);
L_8004FF78:
    // 0x8004FF78: div         $zero, $a0, $v0
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r2)));
    // 0x8004FF7C: bne         $v0, $zero, L_8004FF88
    if (ctx->r2 != 0) {
        // 0x8004FF80: nop
    
            goto L_8004FF88;
    }
    // 0x8004FF80: nop

    // 0x8004FF84: break       7
    do_break(2147811204);
L_8004FF88:
    // 0x8004FF88: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8004FF8C: bne         $v0, $at, L_8004FFA0
    if (ctx->r2 != ctx->r1) {
        // 0x8004FF90: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8004FFA0;
    }
    // 0x8004FF90: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8004FF94: bne         $a0, $at, L_8004FFA0
    if (ctx->r4 != ctx->r1) {
        // 0x8004FF98: nop
    
            goto L_8004FFA0;
    }
    // 0x8004FF98: nop

    // 0x8004FF9C: break       6
    do_break(2147811228);
L_8004FFA0:
    // 0x8004FFA0: mflo        $a0
    ctx->r4 = lo;
    // 0x8004FFA4: jal         0x80032554
    // 0x8004FFA8: nop

    func_80032554_D954(rdram, ctx);
        goto after_1;
    // 0x8004FFA8: nop

    after_1:
    // 0x8004FFAC: addiu       $v1, $zero, 0x1000
    ctx->r3 = ADD32(0, 0X1000);
    // 0x8004FFB0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8004FFB4: j           L_8004FFC8
    // 0x8004FFB8: andi        $v0, $v1, 0xFFF
    ctx->r2 = ctx->r3 & 0XFFF;
        goto L_8004FFC8;
    // 0x8004FFB8: andi        $v0, $v1, 0xFFF
    ctx->r2 = ctx->r3 & 0XFFF;
L_8004FFBC:
    // 0x8004FFBC: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x8004FFC0: andi        $v0, $v0, 0xC00
    ctx->r2 = ctx->r2 & 0XC00;
    // 0x8004FFC4: ori         $v0, $v0, 0x400
    ctx->r2 = ctx->r2 | 0X400;
L_8004FFC8:
    // 0x8004FFC8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8004FFCC: andi        $v0, $s2, 0xFFFF
    ctx->r2 = ctx->r18 & 0XFFFF;
    // 0x8004FFD0: bne         $v0, $zero, L_80050010
    if (ctx->r2 != 0) {
        // 0x8004FFD4: sll         $v0, $v1, 16
        ctx->r2 = S32(ctx->r3 << 16);
            goto L_80050010;
    }
    // 0x8004FFD4: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8004FFD8: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8004FFDC: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x8004FFE0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8004FFE4: subu        $v0, $a0, $v0
    ctx->r2 = SUB32(ctx->r4, ctx->r2);
    // 0x8004FFE8: addiu       $v0, $v0, 0x400
    ctx->r2 = ADD32(ctx->r2, 0X400);
    // 0x8004FFEC: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8004FFF0: slti        $v0, $v0, 0x800
    ctx->r2 = SIGNED(ctx->r2) < 0X800 ? 1 : 0;
    // 0x8004FFF4: beq         $v0, $zero, L_80050004
    if (ctx->r2 == 0) {
        // 0x8004FFF8: addiu       $v0, $a0, 0x800
        ctx->r2 = ADD32(ctx->r4, 0X800);
            goto L_80050004;
    }
    // 0x8004FFF8: addiu       $v0, $a0, 0x800
    ctx->r2 = ADD32(ctx->r4, 0X800);
    // 0x8004FFFC: j           L_80050098
    // 0x80050000: andi        $s0, $v0, 0xFFF
    ctx->r16 = ctx->r2 & 0XFFF;
        goto L_80050098;
    // 0x80050000: andi        $s0, $v0, 0xFFF
    ctx->r16 = ctx->r2 & 0XFFF;
L_80050004:
    // 0x80050004: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80050008: j           L_80050094
    // 0x8005000C: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
        goto L_80050094;
    // 0x8005000C: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
L_80050010:
    // 0x80050010: sra         $a1, $v0, 16
    ctx->r5 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80050014: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x80050018: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8005001C: subu        $a0, $a1, $v0
    ctx->r4 = SUB32(ctx->r5, ctx->r2);
    // 0x80050020: addiu       $v0, $a0, 0x200
    ctx->r2 = ADD32(ctx->r4, 0X200);
    // 0x80050024: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80050028: slti        $v0, $v0, 0x400
    ctx->r2 = SIGNED(ctx->r2) < 0X400 ? 1 : 0;
    // 0x8005002C: beq         $v0, $zero, L_8005003C
    if (ctx->r2 == 0) {
        // 0x80050030: addiu       $v0, $a1, 0x800
        ctx->r2 = ADD32(ctx->r5, 0X800);
            goto L_8005003C;
    }
    // 0x80050030: addiu       $v0, $a1, 0x800
    ctx->r2 = ADD32(ctx->r5, 0X800);
    // 0x80050034: j           L_80050098
    // 0x80050038: andi        $s0, $v0, 0xFFF
    ctx->r16 = ctx->r2 & 0XFFF;
        goto L_80050098;
    // 0x80050038: andi        $s0, $v0, 0xFFF
    ctx->r16 = ctx->r2 & 0XFFF;
L_8005003C:
    // 0x8005003C: addiu       $v0, $a0, 0x600
    ctx->r2 = ADD32(ctx->r4, 0X600);
    // 0x80050040: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80050044: slti        $v0, $v0, 0x400
    ctx->r2 = SIGNED(ctx->r2) < 0X400 ? 1 : 0;
    // 0x80050048: beq         $v0, $zero, L_8005005C
    if (ctx->r2 == 0) {
        // 0x8005004C: addiu       $v0, $a1, -0x400
        ctx->r2 = ADD32(ctx->r5, -0X400);
            goto L_8005005C;
    }
    // 0x8005004C: addiu       $v0, $a1, -0x400
    ctx->r2 = ADD32(ctx->r5, -0X400);
    // 0x80050050: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80050054: j           L_80050094
    // 0x80050058: lui         $v1, 0x3
    ctx->r3 = S32(0X3 << 16);
        goto L_80050094;
    // 0x80050058: lui         $v1, 0x3
    ctx->r3 = S32(0X3 << 16);
L_8005005C:
    // 0x8005005C: addiu       $v0, $a0, 0xA00
    ctx->r2 = ADD32(ctx->r4, 0XA00);
    // 0x80050060: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80050064: slti        $v0, $v0, 0x400
    ctx->r2 = SIGNED(ctx->r2) < 0X400 ? 1 : 0;
    // 0x80050068: beq         $v0, $zero, L_80050078
    if (ctx->r2 == 0) {
        // 0x8005006C: andi        $v1, $v1, 0xFFF
        ctx->r3 = ctx->r3 & 0XFFF;
            goto L_80050078;
    }
    // 0x8005006C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80050070: j           L_80050094
    // 0x80050074: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
        goto L_80050094;
    // 0x80050074: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
L_80050078:
    // 0x80050078: addiu       $v0, $a0, 0xE00
    ctx->r2 = ADD32(ctx->r4, 0XE00);
    // 0x8005007C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80050080: slti        $v0, $v0, 0x400
    ctx->r2 = SIGNED(ctx->r2) < 0X400 ? 1 : 0;
    // 0x80050084: beq         $v0, $zero, L_80050098
    if (ctx->r2 == 0) {
        // 0x80050088: addiu       $v0, $a1, 0x400
        ctx->r2 = ADD32(ctx->r5, 0X400);
            goto L_80050098;
    }
    // 0x80050088: addiu       $v0, $a1, 0x400
    ctx->r2 = ADD32(ctx->r5, 0X400);
    // 0x8005008C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80050090: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
L_80050094:
    // 0x80050094: or          $s0, $v0, $v1
    ctx->r16 = ctx->r2 | ctx->r3;
L_80050098:
    // 0x80050098: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x8005009C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800500A0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x800500A4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x800500A8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x800500AC: jr          $ra
    // 0x800500B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x800500B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800500B4: nop

    // 0x800500B8: nop

    // 0x800500BC: nop

;}
RECOMP_FUNC void func_8007F360_5A760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007F360: addiu       $sp, $sp, -0x100
    ctx->r29 = ADD32(ctx->r29, -0X100);
    // 0x8007F364: addiu       $t7, $zero, 0x1000
    ctx->r15 = ADD32(0, 0X1000);
    // 0x8007F368: sw          $fp, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r30;
    // 0x8007F36C: addu        $fp, $zero, $zero
    ctx->r30 = ADD32(0, 0);
    // 0x8007F370: sw          $ra, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->r31;
    // 0x8007F374: sw          $s7, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r23;
    // 0x8007F378: sw          $s6, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r22;
    // 0x8007F37C: sw          $s5, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r21;
    // 0x8007F380: sw          $s4, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r20;
    // 0x8007F384: sw          $s3, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r19;
    // 0x8007F388: sw          $s2, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r18;
    // 0x8007F38C: sw          $s1, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r17;
    // 0x8007F390: sw          $s0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r16;
    // 0x8007F394: sw          $a0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r4;
    // 0x8007F398: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    // 0x8007F39C: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    // 0x8007F3A0: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x8007F3A4: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    // 0x8007F3A8: lhu         $a1, 0x6($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0X6);
    // 0x8007F3AC: lhu         $v1, 0x4($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X4);
    // 0x8007F3B0: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x8007F3B4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8007F3B8: lui         $at, 0x8019
    ctx->r1 = S32(0X8019 << 16);
    // 0x8007F3BC: sw          $v0, 0x3C30($at)
    MEM_W(0X3C30, ctx->r1) = ctx->r2;
    // 0x8007F3C0: subu        $a1, $a1, $v1
    ctx->r5 = SUB32(ctx->r5, ctx->r3);
    // 0x8007F3C4: jal         0x800281C8
    // 0x8007F3C8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_800281C8_35C8(rdram, ctx);
        goto after_0;
    // 0x8007F3C8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8007F3CC: beq         $v0, $zero, L_8007FB40
    if (ctx->r2 == 0) {
        // 0x8007F3D0: sw          $v0, 0x64($sp)
        MEM_W(0X64, ctx->r29) = ctx->r2;
            goto L_8007FB40;
    }
    // 0x8007F3D0: sw          $v0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r2;
    // 0x8007F3D4: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x8007F3D8: jal         0x8009A2B0
    // 0x8007F3DC: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    bzero_recomp(rdram, ctx);
        goto after_1;
    // 0x8007F3DC: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_1:
    // 0x8007F3E0: lui         $a1, 0x400
    ctx->r5 = S32(0X400 << 16);
    // 0x8007F3E4: ori         $a1, $a1, 0x1
    ctx->r5 = ctx->r5 | 0X1;
    // 0x8007F3E8: lui         $a2, 0xDA38
    ctx->r6 = S32(0XDA38 << 16);
    // 0x8007F3EC: ori         $a2, $a2, 0x3
    ctx->r6 = ctx->r6 | 0X3;
    // 0x8007F3F0: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8007F3F4: lw          $a0, -0x6F10($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X6F10);
    // 0x8007F3F8: lui         $t8, 0xFFFF
    ctx->r24 = S32(0XFFFF << 16);
    // 0x8007F3FC: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8007F400: addiu       $v1, $v1, -0x77BC
    ctx->r3 = ADD32(ctx->r3, -0X77BC);
    // 0x8007F404: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x8007F408: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    // 0x8007F40C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007F410: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007F414: lui         $v0, 0xDE00
    ctx->r2 = S32(0XDE00 << 16);
    // 0x8007F418: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x8007F41C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x8007F420: addiu       $v0, $v0, -0x2460
    ctx->r2 = ADD32(ctx->r2, -0X2460);
    // 0x8007F424: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x8007F428: addiu       $v0, $a0, 0x10
    ctx->r2 = ADD32(ctx->r4, 0X10);
    // 0x8007F42C: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    // 0x8007F430: addiu       $v1, $v1, -0x1C
    ctx->r3 = ADD32(ctx->r3, -0X1C);
    // 0x8007F434: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007F438: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007F43C: sw          $a2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r6;
    // 0x8007F440: sw          $v1, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r3;
L_8007F444:
    // 0x8007F444: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x8007F448: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x8007F44C: sw          $t8, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r24;
    // 0x8007F450: addu        $s0, $t9, $t7
    ctx->r16 = ADD32(ctx->r25, ctx->r15);
    // 0x8007F454: jal         0x800324B4
    // 0x8007F458: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800324B4_D8B4(rdram, ctx);
        goto after_2;
    // 0x8007F458: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8007F45C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8007F460: mult        $v0, $t9
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007F464: mflo        $v0
    ctx->r2 = lo;
    // 0x8007F468: lw          $t7, 0x14($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X14);
    // 0x8007F46C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8007F470: mult        $s0, $t9
    result = S64(S32(ctx->r16)) * S64(S32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007F474: mflo        $s0
    ctx->r16 = lo;
    // 0x8007F478: lhu         $v1, 0x4($t7)
    ctx->r3 = MEM_HU(ctx->r15, 0X4);
    // 0x8007F47C: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x8007F480: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x8007F484: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x8007F488: sw          $t7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r15;
    // 0x8007F48C: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x8007F490: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8007F494: sra         $s0, $s0, 10
    ctx->r16 = S32(SIGNED(ctx->r16) >> 10);
    // 0x8007F498: addu        $s0, $s0, $v1
    ctx->r16 = ADD32(ctx->r16, ctx->r3);
    // 0x8007F49C: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x8007F4A0: sw          $s0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r16;
    // 0x8007F4A4: lw          $t8, 0xC8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC8);
L_8007F4A8:
    // 0x8007F4A8: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x8007F4AC: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8007F4B0: mult        $v1, $t9
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007F4B4: mflo        $t4
    ctx->r12 = lo;
    // 0x8007F4B8: addu        $s1, $fp, $zero
    ctx->r17 = ADD32(ctx->r30, 0);
    // 0x8007F4BC: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8007F4C0: mult        $s1, $t9
    result = S64(S32(ctx->r17)) * S64(S32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007F4C4: mflo        $t5
    ctx->r13 = lo;
    // 0x8007F4C8: addiu       $v0, $t7, 0x1
    ctx->r2 = ADD32(ctx->r15, 0X1);
    // 0x8007F4CC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8007F4D0: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x8007F4D4: lui         $t9, 0x801C
    ctx->r25 = S32(0X801C << 16);
    // 0x8007F4D8: addu        $t9, $t9, $v0
    ctx->r25 = ADD32(ctx->r25, ctx->r2);
    // 0x8007F4DC: lh          $t9, -0x3F08($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X3F08);
    // 0x8007F4E0: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8007F4E4: mult        $t9, $t7
    result = S64(S32(ctx->r25)) * S64(S32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007F4E8: mflo        $t1
    ctx->r9 = lo;
    // 0x8007F4EC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8007F4F0: lui         $fp, 0x801B
    ctx->r30 = S32(0X801B << 16);
    // 0x8007F4F4: addu        $fp, $fp, $v0
    ctx->r30 = ADD32(ctx->r30, ctx->r2);
    // 0x8007F4F8: lh          $fp, -0x2400($fp)
    ctx->r30 = MEM_H(ctx->r30, -0X2400);
    // 0x8007F4FC: mult        $fp, $t7
    result = S64(S32(ctx->r30)) * S64(S32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007F500: mflo        $t2
    ctx->r10 = lo;
    // 0x8007F504: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x8007F508: nop

    // 0x8007F50C: mult        $v1, $t9
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007F510: mflo        $t3
    ctx->r11 = lo;
    // 0x8007F514: nop

    // 0x8007F518: nop

    // 0x8007F51C: mult        $s1, $t9
    result = S64(S32(ctx->r17)) * S64(S32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007F520: mflo        $t6
    ctx->r14 = lo;
    // 0x8007F524: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8007F528: nop

    // 0x8007F52C: mult        $t7, $t9
    result = S64(S32(ctx->r15)) * S64(S32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007F530: mflo        $t7
    ctx->r15 = lo;
    // 0x8007F534: nop

    // 0x8007F538: nop

    // 0x8007F53C: mult        $fp, $t9
    result = S64(S32(ctx->r30)) * S64(S32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007F540: mflo        $s4
    ctx->r20 = lo;
    // 0x8007F544: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x8007F548: nop

    // 0x8007F54C: mult        $v1, $t9
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007F550: mflo        $v0
    ctx->r2 = lo;
    // 0x8007F554: sw          $t7, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r15;
    // 0x8007F558: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8007F55C: mult        $t7, $t9
    result = S64(S32(ctx->r15)) * S64(S32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007F560: mflo        $a1
    ctx->r5 = lo;
    // 0x8007F564: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x8007F568: nop

    // 0x8007F56C: mult        $v1, $t9
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007F570: mflo        $v1
    ctx->r3 = lo;
    // 0x8007F574: nop

    // 0x8007F578: nop

    // 0x8007F57C: mult        $t7, $t9
    result = S64(S32(ctx->r15)) * S64(S32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007F580: mflo        $a3
    ctx->r7 = lo;
    // 0x8007F584: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x8007F588: sra         $t4, $t4, 12
    ctx->r12 = S32(SIGNED(ctx->r12) >> 12);
    // 0x8007F58C: mult        $s1, $t9
    result = S64(S32(ctx->r17)) * S64(S32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007F590: mflo        $s3
    ctx->r19 = lo;
    // 0x8007F594: sra         $t5, $t5, 12
    ctx->r13 = S32(SIGNED(ctx->r13) >> 12);
    // 0x8007F598: sra         $t1, $t1, 12
    ctx->r9 = S32(SIGNED(ctx->r9) >> 12);
    // 0x8007F59C: sra         $t2, $t2, 12
    ctx->r10 = S32(SIGNED(ctx->r10) >> 12);
    // 0x8007F5A0: sra         $t3, $t3, 12
    ctx->r11 = S32(SIGNED(ctx->r11) >> 12);
    // 0x8007F5A4: sra         $t6, $t6, 12
    ctx->r14 = S32(SIGNED(ctx->r14) >> 12);
    // 0x8007F5A8: lw          $t7, 0x14($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X14);
    // 0x8007F5AC: sra         $s4, $s4, 12
    ctx->r20 = S32(SIGNED(ctx->r20) >> 12);
    // 0x8007F5B0: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x8007F5B4: lhu         $t0, 0x0($t7)
    ctx->r8 = MEM_HU(ctx->r15, 0X0);
    // 0x8007F5B8: mult        $fp, $t9
    result = S64(S32(ctx->r30)) * S64(S32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007F5BC: mflo        $s2
    ctx->r18 = lo;
    // 0x8007F5C0: lw          $t9, 0xD4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XD4);
    // 0x8007F5C4: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x8007F5C8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8007F5CC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8007F5D0: sw          $v0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r2;
    // 0x8007F5D4: lw          $a0, 0xAC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XAC);
    // 0x8007F5D8: addu        $t4, $t0, $t4
    ctx->r12 = ADD32(ctx->r8, ctx->r12);
    // 0x8007F5DC: addu        $t1, $t0, $t1
    ctx->r9 = ADD32(ctx->r8, ctx->r9);
    // 0x8007F5E0: sra         $a1, $a1, 12
    ctx->r5 = S32(SIGNED(ctx->r5) >> 12);
    // 0x8007F5E4: addu        $a1, $t0, $a1
    ctx->r5 = ADD32(ctx->r8, ctx->r5);
    // 0x8007F5E8: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8007F5EC: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8007F5F0: sw          $a1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r5;
    // 0x8007F5F4: lw          $a1, 0xB4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XB4);
    // 0x8007F5F8: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x8007F5FC: addu        $v1, $t0, $v1
    ctx->r3 = ADD32(ctx->r8, ctx->r3);
    // 0x8007F600: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8007F604: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8007F608: sw          $v1, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r3;
    // 0x8007F60C: lw          $a2, 0xBC($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XBC);
    // 0x8007F610: sra         $a3, $a3, 12
    ctx->r7 = S32(SIGNED(ctx->r7) >> 12);
    // 0x8007F614: addu        $a3, $t0, $a3
    ctx->r7 = ADD32(ctx->r8, ctx->r7);
    // 0x8007F618: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x8007F61C: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    // 0x8007F620: sw          $a3, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r7;
    // 0x8007F624: lw          $a3, 0xC4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC4);
    // 0x8007F628: lhu         $s0, 0x2($t7)
    ctx->r16 = MEM_HU(ctx->r15, 0X2);
    // 0x8007F62C: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x8007F630: addu        $t3, $t0, $t3
    ctx->r11 = ADD32(ctx->r8, ctx->r11);
    // 0x8007F634: sra         $t9, $t9, 12
    ctx->r25 = S32(SIGNED(ctx->r25) >> 12);
    // 0x8007F638: sw          $t4, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r12;
    // 0x8007F63C: sw          $t1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r9;
    // 0x8007F640: sw          $t3, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r11;
    // 0x8007F644: mult        $s1, $t7
    result = S64(S32(ctx->r17)) * S64(S32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007F648: mflo        $s1
    ctx->r17 = lo;
    // 0x8007F64C: addu        $t5, $s0, $t5
    ctx->r13 = ADD32(ctx->r16, ctx->r13);
    // 0x8007F650: addu        $t2, $s0, $t2
    ctx->r10 = ADD32(ctx->r16, ctx->r10);
    // 0x8007F654: addu        $t6, $s0, $t6
    ctx->r14 = ADD32(ctx->r16, ctx->r14);
    // 0x8007F658: sw          $t5, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r13;
    // 0x8007F65C: sw          $t2, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r10;
    // 0x8007F660: sw          $t6, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r14;
    // 0x8007F664: sw          $t9, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r25;
    // 0x8007F668: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8007F66C: addu        $s4, $s0, $s4
    ctx->r20 = ADD32(ctx->r16, ctx->r20);
    // 0x8007F670: mult        $fp, $t7
    result = S64(S32(ctx->r30)) * S64(S32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007F674: mflo        $v0
    ctx->r2 = lo;
    // 0x8007F678: sra         $s3, $s3, 12
    ctx->r19 = S32(SIGNED(ctx->r19) >> 12);
    // 0x8007F67C: addu        $s3, $s0, $s3
    ctx->r19 = ADD32(ctx->r16, ctx->r19);
    // 0x8007F680: sra         $s2, $s2, 12
    ctx->r18 = S32(SIGNED(ctx->r18) >> 12);
    // 0x8007F684: addu        $s2, $s0, $s2
    ctx->r18 = ADD32(ctx->r16, ctx->r18);
    // 0x8007F688: sw          $t0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r8;
    // 0x8007F68C: sw          $s4, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r20;
    // 0x8007F690: sw          $t8, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r24;
    // 0x8007F694: sra         $s1, $s1, 12
    ctx->r17 = S32(SIGNED(ctx->r17) >> 12);
    // 0x8007F698: addu        $s1, $s0, $s1
    ctx->r17 = ADD32(ctx->r16, ctx->r17);
    // 0x8007F69C: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x8007F6A0: jal         0x8007BF70
    // 0x8007F6A4: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    func_8007BF70_57370(rdram, ctx);
        goto after_3;
    // 0x8007F6A4: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    after_3:
    // 0x8007F6A8: sll         $s3, $s3, 16
    ctx->r19 = S32(ctx->r19 << 16);
    // 0x8007F6AC: sra         $s3, $s3, 16
    ctx->r19 = S32(SIGNED(ctx->r19) >> 16);
    // 0x8007F6B0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8007F6B4: sll         $s2, $s2, 16
    ctx->r18 = S32(ctx->r18 << 16);
    // 0x8007F6B8: sra         $s5, $s2, 16
    ctx->r21 = S32(SIGNED(ctx->r18) >> 16);
    // 0x8007F6BC: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x8007F6C0: sll         $s1, $s1, 16
    ctx->r17 = S32(ctx->r17 << 16);
    // 0x8007F6C4: sra         $s6, $s1, 16
    ctx->r22 = S32(SIGNED(ctx->r17) >> 16);
    // 0x8007F6C8: addu        $a2, $s6, $zero
    ctx->r6 = ADD32(ctx->r22, 0);
    // 0x8007F6CC: sll         $s0, $s0, 16
    ctx->r16 = S32(ctx->r16 << 16);
    // 0x8007F6D0: sra         $s7, $s0, 16
    ctx->r23 = S32(SIGNED(ctx->r16) >> 16);
    // 0x8007F6D4: addu        $a3, $s7, $zero
    ctx->r7 = ADD32(ctx->r23, 0);
    // 0x8007F6D8: jal         0x8007BF70
    // 0x8007F6DC: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    func_8007BF70_57370(rdram, ctx);
        goto after_4;
    // 0x8007F6DC: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    after_4:
    // 0x8007F6E0: lw          $a0, 0xAC($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XAC);
    // 0x8007F6E4: lw          $a1, 0xB4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XB4);
    // 0x8007F6E8: lw          $a2, 0xBC($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XBC);
    // 0x8007F6EC: lw          $a3, 0xC4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC4);
    // 0x8007F6F0: jal         0x8007BF9C
    // 0x8007F6F4: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    func_8007BF9C_5739C(rdram, ctx);
        goto after_5;
    // 0x8007F6F4: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    after_5:
    // 0x8007F6F8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8007F6FC: addu        $s4, $s0, $zero
    ctx->r20 = ADD32(ctx->r16, 0);
    // 0x8007F700: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8007F704: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x8007F708: addu        $a2, $s6, $zero
    ctx->r6 = ADD32(ctx->r22, 0);
    // 0x8007F70C: jal         0x8007BF9C
    // 0x8007F710: addu        $a3, $s7, $zero
    ctx->r7 = ADD32(ctx->r23, 0);
    func_8007BF9C_5739C(rdram, ctx);
        goto after_6;
    // 0x8007F710: addu        $a3, $s7, $zero
    ctx->r7 = ADD32(ctx->r23, 0);
    after_6:
    // 0x8007F714: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8007F718: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x8007F71C: sll         $s2, $s2, 16
    ctx->r18 = S32(ctx->r18 << 16);
    // 0x8007F720: sra         $s2, $s2, 16
    ctx->r18 = S32(SIGNED(ctx->r18) >> 16);
    // 0x8007F724: nor         $v0, $zero, $s2
    ctx->r2 = ~(0 | ctx->r18);
    // 0x8007F728: srl         $t3, $v0, 31
    ctx->r11 = S32(U32(ctx->r2) >> 31);
    // 0x8007F72C: sll         $s1, $s1, 16
    ctx->r17 = S32(ctx->r17 << 16);
    // 0x8007F730: sra         $s1, $s1, 16
    ctx->r17 = S32(SIGNED(ctx->r17) >> 16);
    // 0x8007F734: nor         $v0, $zero, $s1
    ctx->r2 = ~(0 | ctx->r17);
    // 0x8007F738: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x8007F73C: sll         $s0, $s0, 16
    ctx->r16 = S32(ctx->r16 << 16);
    // 0x8007F740: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    // 0x8007F744: slti        $s0, $s0, 0x141
    ctx->r16 = SIGNED(ctx->r16) < 0X141 ? 1 : 0;
    // 0x8007F748: lw          $t8, 0xC8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC8);
    // 0x8007F74C: bne         $s0, $zero, L_8007F758
    if (ctx->r16 != 0) {
        // 0x8007F750: and         $t3, $t3, $v0
        ctx->r11 = ctx->r11 & ctx->r2;
            goto L_8007F758;
    }
    // 0x8007F750: and         $t3, $t3, $v0
    ctx->r11 = ctx->r11 & ctx->r2;
    // 0x8007F754: addiu       $s4, $zero, 0x140
    ctx->r20 = ADD32(0, 0X140);
L_8007F758:
    // 0x8007F758: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8007F75C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8007F760: slti        $v0, $v0, 0xF1
    ctx->r2 = SIGNED(ctx->r2) < 0XF1 ? 1 : 0;
    // 0x8007F764: beql        $v0, $zero, L_8007F76C
    if (ctx->r2 == 0) {
        // 0x8007F768: addiu       $a0, $zero, 0xF0
        ctx->r4 = ADD32(0, 0XF0);
            goto L_8007F76C;
    }
    goto skip_0;
    // 0x8007F768: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    skip_0:
L_8007F76C:
    // 0x8007F76C: slti        $v0, $s2, 0x141
    ctx->r2 = SIGNED(ctx->r18) < 0X141 ? 1 : 0;
    // 0x8007F770: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8007F774: and         $t3, $t3, $v0
    ctx->r11 = ctx->r11 & ctx->r2;
    // 0x8007F778: sll         $v0, $s4, 16
    ctx->r2 = S32(ctx->r20 << 16);
    // 0x8007F77C: sra         $t4, $v0, 16
    ctx->r12 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8007F780: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x8007F784: sra         $t5, $v0, 16
    ctx->r13 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8007F788: addiu       $v0, $s2, 0x1
    ctx->r2 = ADD32(ctx->r18, 0X1);
    // 0x8007F78C: subu        $t6, $t4, $v0
    ctx->r14 = SUB32(ctx->r12, ctx->r2);
    // 0x8007F790: addiu       $v1, $s1, 0x1
    ctx->r3 = ADD32(ctx->r17, 0X1);
    // 0x8007F794: subu        $v1, $t5, $v1
    ctx->r3 = SUB32(ctx->r13, ctx->r3);
    // 0x8007F798: mult        $t6, $v1
    result = S64(S32(ctx->r14)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007F79C: mflo        $v1
    ctx->r3 = lo;
    // 0x8007F7A0: slti        $v0, $s1, 0xF1
    ctx->r2 = SIGNED(ctx->r17) < 0XF1 ? 1 : 0;
    // 0x8007F7A4: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8007F7A8: and         $t3, $t3, $v0
    ctx->r11 = ctx->r11 & ctx->r2;
    // 0x8007F7AC: nor         $v0, $zero, $t4
    ctx->r2 = ~(0 | ctx->r12);
    // 0x8007F7B0: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x8007F7B4: and         $t3, $t3, $v0
    ctx->r11 = ctx->r11 & ctx->r2;
    // 0x8007F7B8: nor         $v0, $zero, $t5
    ctx->r2 = ~(0 | ctx->r13);
    // 0x8007F7BC: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x8007F7C0: slti        $v1, $v1, 0x801
    ctx->r3 = SIGNED(ctx->r3) < 0X801 ? 1 : 0;
    // 0x8007F7C4: beq         $v1, $zero, L_8007FB0C
    if (ctx->r3 == 0) {
        // 0x8007F7C8: and         $t3, $t3, $v0
        ctx->r11 = ctx->r11 & ctx->r2;
            goto L_8007FB0C;
    }
    // 0x8007F7C8: and         $t3, $t3, $v0
    ctx->r11 = ctx->r11 & ctx->r2;
    // 0x8007F7CC: lui         $v1, 0x100
    ctx->r3 = S32(0X100 << 16);
    // 0x8007F7D0: ori         $v1, $v1, 0x4008
    ctx->r3 = ctx->r3 | 0X4008;
    // 0x8007F7D4: lui         $a0, 0x218
    ctx->r4 = S32(0X218 << 16);
    // 0x8007F7D8: ori         $a0, $a0, 0x2
    ctx->r4 = ctx->r4 | 0X2;
    // 0x8007F7DC: lui         $a1, 0x218
    ctx->r5 = S32(0X218 << 16);
    // 0x8007F7E0: lui         $t2, 0x801B
    ctx->r10 = S32(0X801B << 16);
    // 0x8007F7E4: lw          $t2, -0x6F10($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X6F10);
    // 0x8007F7E8: ori         $a1, $a1, 0x4
    ctx->r5 = ctx->r5 | 0X4;
    // 0x8007F7EC: lui         $a2, 0x218
    ctx->r6 = S32(0X218 << 16);
    // 0x8007F7F0: sw          $v1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r3;
    // 0x8007F7F4: lw          $t7, 0x64($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X64);
    // 0x8007F7F8: ori         $a2, $a2, 0x6
    ctx->r6 = ctx->r6 | 0X6;
    // 0x8007F7FC: addiu       $v0, $t2, 0x8
    ctx->r2 = ADD32(ctx->r10, 0X8);
    // 0x8007F800: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007F804: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007F808: addiu       $v0, $t2, 0x10
    ctx->r2 = ADD32(ctx->r10, 0X10);
    // 0x8007F80C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007F810: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007F814: lui         $v0, 0x218
    ctx->r2 = S32(0X218 << 16);
    // 0x8007F818: sw          $v0, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r2;
    // 0x8007F81C: sw          $t7, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r15;
    // 0x8007F820: lw          $t9, 0x6C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X6C);
    // 0x8007F824: lui         $a3, 0x214
    ctx->r7 = S32(0X214 << 16);
    // 0x8007F828: lw          $t7, 0x74($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X74);
    // 0x8007F82C: sll         $v1, $t9, 18
    ctx->r3 = S32(ctx->r25 << 18);
    // 0x8007F830: and         $v1, $v1, $t8
    ctx->r3 = ctx->r3 & ctx->r24;
    // 0x8007F834: sll         $v0, $t7, 2
    ctx->r2 = S32(ctx->r15 << 2);
    // 0x8007F838: andi        $v0, $v0, 0xFFFC
    ctx->r2 = ctx->r2 & 0XFFFC;
    // 0x8007F83C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8007F840: sw          $v1, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->r3;
    // 0x8007F844: sw          $a0, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->r4;
    // 0x8007F848: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x8007F84C: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x8007F850: ori         $a3, $a3, 0x2
    ctx->r7 = ctx->r7 | 0X2;
    // 0x8007F854: addiu       $v0, $t2, 0x18
    ctx->r2 = ADD32(ctx->r10, 0X18);
    // 0x8007F858: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007F85C: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007F860: sll         $v1, $t9, 18
    ctx->r3 = S32(ctx->r25 << 18);
    // 0x8007F864: and         $v1, $v1, $t8
    ctx->r3 = ctx->r3 & ctx->r24;
    // 0x8007F868: sll         $v0, $t7, 2
    ctx->r2 = S32(ctx->r15 << 2);
    // 0x8007F86C: andi        $v0, $v0, 0xFFFC
    ctx->r2 = ctx->r2 & 0XFFFC;
    // 0x8007F870: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8007F874: sw          $v1, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->r3;
    // 0x8007F878: sw          $a1, 0x18($t2)
    MEM_W(0X18, ctx->r10) = ctx->r5;
    // 0x8007F87C: lw          $t9, 0x8C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8C);
    // 0x8007F880: lw          $t7, 0x94($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X94);
    // 0x8007F884: lui         $t0, 0x214
    ctx->r8 = S32(0X214 << 16);
    // 0x8007F888: addiu       $v0, $t2, 0x20
    ctx->r2 = ADD32(ctx->r10, 0X20);
    // 0x8007F88C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007F890: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007F894: sll         $v1, $t9, 18
    ctx->r3 = S32(ctx->r25 << 18);
    // 0x8007F898: and         $v1, $v1, $t8
    ctx->r3 = ctx->r3 & ctx->r24;
    // 0x8007F89C: sll         $v0, $t7, 2
    ctx->r2 = S32(ctx->r15 << 2);
    // 0x8007F8A0: andi        $v0, $v0, 0xFFFC
    ctx->r2 = ctx->r2 & 0XFFFC;
    // 0x8007F8A4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8007F8A8: sw          $v1, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->r3;
    // 0x8007F8AC: sw          $a2, 0x20($t2)
    MEM_W(0X20, ctx->r10) = ctx->r6;
    // 0x8007F8B0: lw          $t9, 0x9C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X9C);
    // 0x8007F8B4: lw          $t7, 0xA4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XA4);
    // 0x8007F8B8: ori         $t0, $t0, 0x4
    ctx->r8 = ctx->r8 | 0X4;
    // 0x8007F8BC: addiu       $v0, $t2, 0x28
    ctx->r2 = ADD32(ctx->r10, 0X28);
    // 0x8007F8C0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007F8C4: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007F8C8: sll         $v1, $t9, 18
    ctx->r3 = S32(ctx->r25 << 18);
    // 0x8007F8CC: and         $v1, $v1, $t8
    ctx->r3 = ctx->r3 & ctx->r24;
    // 0x8007F8D0: sll         $v0, $t7, 2
    ctx->r2 = S32(ctx->r15 << 2);
    // 0x8007F8D4: andi        $v0, $v0, 0xFFFC
    ctx->r2 = ctx->r2 & 0XFFFC;
    // 0x8007F8D8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8007F8DC: addiu       $v0, $t2, 0x30
    ctx->r2 = ADD32(ctx->r10, 0X30);
    // 0x8007F8E0: sw          $v1, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->r3;
    // 0x8007F8E4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007F8E8: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007F8EC: lui         $v0, 0x214
    ctx->r2 = S32(0X214 << 16);
    // 0x8007F8F0: sw          $v0, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->r2;
    // 0x8007F8F4: lw          $t9, 0xAC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XAC);
    // 0x8007F8F8: sll         $v0, $s3, 6
    ctx->r2 = S32(ctx->r19 << 6);
    // 0x8007F8FC: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8007F900: sll         $v1, $t9, 22
    ctx->r3 = S32(ctx->r25 << 22);
    // 0x8007F904: and         $v1, $v1, $t8
    ctx->r3 = ctx->r3 & ctx->r24;
    // 0x8007F908: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8007F90C: sw          $v1, 0x2C($t2)
    MEM_W(0X2C, ctx->r10) = ctx->r3;
    // 0x8007F910: sw          $a3, 0x30($t2)
    MEM_W(0X30, ctx->r10) = ctx->r7;
    // 0x8007F914: lw          $t7, 0xB4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB4);
    // 0x8007F918: lui         $t1, 0x214
    ctx->r9 = S32(0X214 << 16);
    // 0x8007F91C: addiu       $v0, $t2, 0x38
    ctx->r2 = ADD32(ctx->r10, 0X38);
    // 0x8007F920: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007F924: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007F928: sll         $v0, $s5, 6
    ctx->r2 = S32(ctx->r21 << 6);
    // 0x8007F92C: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8007F930: sll         $v1, $t7, 22
    ctx->r3 = S32(ctx->r15 << 22);
    // 0x8007F934: and         $v1, $v1, $t8
    ctx->r3 = ctx->r3 & ctx->r24;
    // 0x8007F938: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8007F93C: sw          $v1, 0x34($t2)
    MEM_W(0X34, ctx->r10) = ctx->r3;
    // 0x8007F940: sw          $t0, 0x38($t2)
    MEM_W(0X38, ctx->r10) = ctx->r8;
    // 0x8007F944: lw          $t9, 0xBC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XBC);
    // 0x8007F948: ori         $t1, $t1, 0x6
    ctx->r9 = ctx->r9 | 0X6;
    // 0x8007F94C: addiu       $v0, $t2, 0x40
    ctx->r2 = ADD32(ctx->r10, 0X40);
    // 0x8007F950: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007F954: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007F958: sll         $v0, $s6, 6
    ctx->r2 = S32(ctx->r22 << 6);
    // 0x8007F95C: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8007F960: sll         $v1, $t9, 22
    ctx->r3 = S32(ctx->r25 << 22);
    // 0x8007F964: and         $v1, $v1, $t8
    ctx->r3 = ctx->r3 & ctx->r24;
    // 0x8007F968: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8007F96C: sw          $v1, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->r3;
    // 0x8007F970: sw          $t1, 0x40($t2)
    MEM_W(0X40, ctx->r10) = ctx->r9;
    // 0x8007F974: lw          $t7, 0xC4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC4);
    // 0x8007F978: addiu       $v0, $t2, 0x48
    ctx->r2 = ADD32(ctx->r10, 0X48);
    // 0x8007F97C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007F980: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007F984: sll         $v0, $s7, 6
    ctx->r2 = S32(ctx->r23 << 6);
    // 0x8007F988: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8007F98C: sll         $v1, $t7, 22
    ctx->r3 = S32(ctx->r15 << 22);
    // 0x8007F990: and         $v1, $v1, $t8
    ctx->r3 = ctx->r3 & ctx->r24;
    // 0x8007F994: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8007F998: beq         $t3, $zero, L_8007FAE0
    if (ctx->r11 == 0) {
        // 0x8007F99C: sw          $v1, 0x44($t2)
        MEM_W(0X44, ctx->r10) = ctx->r3;
            goto L_8007FAE0;
    }
    // 0x8007F99C: sw          $v1, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->r3;
    // 0x8007F9A0: lui         $v1, 0xFD10
    ctx->r3 = S32(0XFD10 << 16);
    // 0x8007F9A4: ori         $v1, $v1, 0x13F
    ctx->r3 = ctx->r3 | 0X13F;
    // 0x8007F9A8: lui         $a1, 0x708
    ctx->r5 = S32(0X708 << 16);
    // 0x8007F9AC: ori         $a1, $a1, 0x200
    ctx->r5 = ctx->r5 | 0X200;
    // 0x8007F9B0: lui         $t0, 0x8
    ctx->r8 = S32(0X8 << 16);
    // 0x8007F9B4: ori         $t0, $t0, 0x200
    ctx->r8 = ctx->r8 | 0X200;
    // 0x8007F9B8: addiu       $v0, $t2, 0x50
    ctx->r2 = ADD32(ctx->r10, 0X50);
    // 0x8007F9BC: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x8007F9C0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007F9C4: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007F9C8: addiu       $v0, $t2, 0x58
    ctx->r2 = ADD32(ctx->r10, 0X58);
    // 0x8007F9CC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007F9D0: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007F9D4: addiu       $v0, $t2, 0x60
    ctx->r2 = ADD32(ctx->r10, 0X60);
    // 0x8007F9D8: sll         $a0, $t6, 1
    ctx->r4 = S32(ctx->r14 << 1);
    // 0x8007F9DC: addiu       $a0, $a0, 0x9
    ctx->r4 = ADD32(ctx->r4, 0X9);
    // 0x8007F9E0: sra         $a0, $a0, 3
    ctx->r4 = S32(SIGNED(ctx->r4) >> 3);
    // 0x8007F9E4: andi        $a0, $a0, 0x1FF
    ctx->r4 = ctx->r4 & 0X1FF;
    // 0x8007F9E8: sll         $a0, $a0, 9
    ctx->r4 = S32(ctx->r4 << 9);
    // 0x8007F9EC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007F9F0: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007F9F4: lui         $v0, 0xF510
    ctx->r2 = S32(0XF510 << 16);
    // 0x8007F9F8: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x8007F9FC: addiu       $v0, $t2, 0x68
    ctx->r2 = ADD32(ctx->r10, 0X68);
    // 0x8007FA00: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007FA04: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007FA08: lui         $v0, 0xE600
    ctx->r2 = S32(0XE600 << 16);
    // 0x8007FA0C: sw          $v0, 0x60($t2)
    MEM_W(0X60, ctx->r10) = ctx->r2;
    // 0x8007FA10: addiu       $v0, $t2, 0x70
    ctx->r2 = ADD32(ctx->r10, 0X70);
    // 0x8007FA14: sll         $a2, $s2, 2
    ctx->r6 = S32(ctx->r18 << 2);
    // 0x8007FA18: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    // 0x8007FA1C: sll         $a2, $a2, 12
    ctx->r6 = S32(ctx->r6 << 12);
    // 0x8007FA20: sll         $a3, $s1, 2
    ctx->r7 = S32(ctx->r17 << 2);
    // 0x8007FA24: andi        $a3, $a3, 0xFFF
    ctx->r7 = ctx->r7 & 0XFFF;
    // 0x8007FA28: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007FA2C: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007FA30: lui         $v0, 0xF400
    ctx->r2 = S32(0XF400 << 16);
    // 0x8007FA34: or          $v0, $a3, $v0
    ctx->r2 = ctx->r7 | ctx->r2;
    // 0x8007FA38: or          $v0, $a2, $v0
    ctx->r2 = ctx->r6 | ctx->r2;
    // 0x8007FA3C: sw          $v1, 0x50($t2)
    MEM_W(0X50, ctx->r10) = ctx->r3;
    // 0x8007FA40: addiu       $v1, $t4, -0x1
    ctx->r3 = ADD32(ctx->r12, -0X1);
    // 0x8007FA44: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8007FA48: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8007FA4C: sll         $v1, $v1, 12
    ctx->r3 = S32(ctx->r3 << 12);
    // 0x8007FA50: sw          $a1, 0x5C($t2)
    MEM_W(0X5C, ctx->r10) = ctx->r5;
    // 0x8007FA54: addiu       $a1, $t5, -0x1
    ctx->r5 = ADD32(ctx->r13, -0X1);
    // 0x8007FA58: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x8007FA5C: andi        $a1, $a1, 0xFFF
    ctx->r5 = ctx->r5 & 0XFFF;
    // 0x8007FA60: sw          $v0, 0x68($t2)
    MEM_W(0X68, ctx->r10) = ctx->r2;
    // 0x8007FA64: lui         $v0, 0x700
    ctx->r2 = S32(0X700 << 16);
    // 0x8007FA68: sw          $a0, 0x58($t2)
    MEM_W(0X58, ctx->r10) = ctx->r4;
    // 0x8007FA6C: sw          $a0, 0x78($t2)
    MEM_W(0X78, ctx->r10) = ctx->r4;
    // 0x8007FA70: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8007FA74: lw          $a0, 0x980($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X980);
    // 0x8007FA78: or          $v0, $a1, $v0
    ctx->r2 = ctx->r5 | ctx->r2;
    // 0x8007FA7C: or          $v0, $v1, $v0
    ctx->r2 = ctx->r3 | ctx->r2;
    // 0x8007FA80: sw          $v0, 0x6C($t2)
    MEM_W(0X6C, ctx->r10) = ctx->r2;
    // 0x8007FA84: addiu       $v0, $t2, 0x78
    ctx->r2 = ADD32(ctx->r10, 0X78);
    // 0x8007FA88: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x8007FA8C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007FA90: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007FA94: addiu       $v0, $t2, 0x80
    ctx->r2 = ADD32(ctx->r10, 0X80);
    // 0x8007FA98: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007FA9C: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007FAA0: addiu       $v0, $t2, 0x88
    ctx->r2 = ADD32(ctx->r10, 0X88);
    // 0x8007FAA4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007FAA8: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007FAAC: lui         $v0, 0xF200
    ctx->r2 = S32(0XF200 << 16);
    // 0x8007FAB0: or          $a3, $a3, $v0
    ctx->r7 = ctx->r7 | ctx->r2;
    // 0x8007FAB4: or          $a2, $a2, $a3
    ctx->r6 = ctx->r6 | ctx->r7;
    // 0x8007FAB8: or          $v1, $v1, $a1
    ctx->r3 = ctx->r3 | ctx->r5;
    // 0x8007FABC: sw          $t9, 0x48($t2)
    MEM_W(0X48, ctx->r10) = ctx->r25;
    // 0x8007FAC0: sw          $zero, 0x4C($t2)
    MEM_W(0X4C, ctx->r10) = 0;
    // 0x8007FAC4: sw          $zero, 0x64($t2)
    MEM_W(0X64, ctx->r10) = 0;
    // 0x8007FAC8: sw          $t7, 0x70($t2)
    MEM_W(0X70, ctx->r10) = ctx->r15;
    // 0x8007FACC: sw          $zero, 0x74($t2)
    MEM_W(0X74, ctx->r10) = 0;
    // 0x8007FAD0: sw          $t0, 0x7C($t2)
    MEM_W(0X7C, ctx->r10) = ctx->r8;
    // 0x8007FAD4: sw          $a2, 0x80($t2)
    MEM_W(0X80, ctx->r10) = ctx->r6;
    // 0x8007FAD8: sw          $v1, 0x84($t2)
    MEM_W(0X84, ctx->r10) = ctx->r3;
    // 0x8007FADC: sw          $a0, 0x54($t2)
    MEM_W(0X54, ctx->r10) = ctx->r4;
L_8007FAE0:
    // 0x8007FAE0: lui         $a1, 0x600
    ctx->r5 = S32(0X600 << 16);
    // 0x8007FAE4: ori         $a1, $a1, 0x402
    ctx->r5 = ctx->r5 | 0X402;
    // 0x8007FAE8: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8007FAEC: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x8007FAF0: lui         $a0, 0x4
    ctx->r4 = S32(0X4 << 16);
    // 0x8007FAF4: ori         $a0, $a0, 0x602
    ctx->r4 = ctx->r4 | 0X602;
    // 0x8007FAF8: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x8007FAFC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007FB00: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007FB04: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    // 0x8007FB08: sw          $a0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r4;
L_8007FB0C:
    // 0x8007FB0C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8007FB10: addiu       $t9, $t9, 0x1
    ctx->r25 = ADD32(ctx->r25, 0X1);
    // 0x8007FB14: sltiu       $v0, $t9, 0x10
    ctx->r2 = ctx->r25 < 0X10 ? 1 : 0;
    // 0x8007FB18: bne         $v0, $zero, L_8007F4A8
    if (ctx->r2 != 0) {
        // 0x8007FB1C: sw          $t9, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r25;
            goto L_8007F4A8;
    }
    // 0x8007FB1C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8007FB20: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x8007FB24: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x8007FB28: addiu       $t7, $t7, 0x10
    ctx->r15 = ADD32(ctx->r15, 0X10);
    // 0x8007FB2C: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x8007FB30: slti        $v0, $t9, 0x400
    ctx->r2 = SIGNED(ctx->r25) < 0X400 ? 1 : 0;
    // 0x8007FB34: sw          $t7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r15;
    // 0x8007FB38: bne         $v0, $zero, L_8007F444
    if (ctx->r2 != 0) {
        // 0x8007FB3C: sw          $t9, 0x54($sp)
        MEM_W(0X54, ctx->r29) = ctx->r25;
            goto L_8007F444;
    }
    // 0x8007FB3C: sw          $t9, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r25;
L_8007FB40:
    // 0x8007FB40: lw          $ra, 0xFC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XFC);
    // 0x8007FB44: lw          $fp, 0xF8($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XF8);
    // 0x8007FB48: lw          $s7, 0xF4($sp)
    ctx->r23 = MEM_W(ctx->r29, 0XF4);
    // 0x8007FB4C: lw          $s6, 0xF0($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XF0);
    // 0x8007FB50: lw          $s5, 0xEC($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XEC);
    // 0x8007FB54: lw          $s4, 0xE8($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XE8);
    // 0x8007FB58: lw          $s3, 0xE4($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XE4);
    // 0x8007FB5C: lw          $s2, 0xE0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XE0);
    // 0x8007FB60: lw          $s1, 0xDC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XDC);
    // 0x8007FB64: lw          $s0, 0xD8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XD8);
    // 0x8007FB68: jr          $ra
    // 0x8007FB6C: addiu       $sp, $sp, 0x100
    ctx->r29 = ADD32(ctx->r29, 0X100);
    TRACE_RETURN()
    return;
    // 0x8007FB6C: addiu       $sp, $sp, 0x100
    ctx->r29 = ADD32(ctx->r29, 0X100);
;}
RECOMP_FUNC void func_8004CB2C_27F2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004CB2C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8004CB30: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x8004CB34: addu        $s7, $a0, $zero
    ctx->r23 = ADD32(ctx->r4, 0);
    // 0x8004CB38: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8004CB3C: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x8004CB40: andi        $v0, $s7, 0x1
    ctx->r2 = ctx->r23 & 0X1;
    // 0x8004CB44: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8004CB48: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x8004CB4C: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x8004CB50: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8004CB54: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8004CB58: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8004CB5C: beq         $v0, $zero, L_8004CBD0
    if (ctx->r2 == 0) {
        // 0x8004CB60: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_8004CBD0;
    }
    // 0x8004CB60: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8004CB64: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8004CB68: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x8004CB6C: lui         $s4, 0x801B
    ctx->r20 = S32(0X801B << 16);
    // 0x8004CB70: lw          $s4, -0x35A4($s4)
    ctx->r20 = MEM_W(ctx->r20, -0X35A4);
    // 0x8004CB74: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8004CB78: andi        $s1, $s3, 0x80
    ctx->r17 = ctx->r19 & 0X80;
    // 0x8004CB7C: lui         $s5, 0x8000
    ctx->r21 = S32(0X8000 << 16);
L_8004CB80:
    // 0x8004CB80: sllv        $v0, $s4, $s2
    ctx->r2 = S32(ctx->r20 << (ctx->r18 & 31));
    // 0x8004CB84: bgezl       $v0, L_8004CBC4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8004CB88: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_8004CBC4;
    }
    goto skip_0;
    // 0x8004CB88: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_0:
    // 0x8004CB8C: beq         $s1, $zero, L_8004CBB4
    if (ctx->r17 == 0) {
        // 0x8004CB90: srlv        $v0, $s5, $s2
        ctx->r2 = S32(U32(ctx->r21) >> (ctx->r18 & 31));
            goto L_8004CBB4;
    }
    // 0x8004CB90: srlv        $v0, $s5, $s2
    ctx->r2 = S32(U32(ctx->r21) >> (ctx->r18 & 31));
    // 0x8004CB94: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8004CB98: lw          $v1, -0x35A4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X35A4);
    // 0x8004CB9C: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
    // 0x8004CBA0: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8004CBA4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8004CBA8: sw          $v1, -0x35A4($at)
    MEM_W(-0X35A4, ctx->r1) = ctx->r3;
    // 0x8004CBAC: j           L_8004CBC0
    // 0x8004CBB0: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
        goto L_8004CBC0;
    // 0x8004CBB0: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_8004CBB4:
    // 0x8004CBB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8004CBB8: jal         0x8004D024
    // 0x8004CBBC: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_8004D024_28424(rdram, ctx);
        goto after_0;
    // 0x8004CBBC: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_0:
L_8004CBC0:
    // 0x8004CBC0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8004CBC4:
    // 0x8004CBC4: slti        $v0, $s2, 0x2
    ctx->r2 = SIGNED(ctx->r18) < 0X2 ? 1 : 0;
    // 0x8004CBC8: bne         $v0, $zero, L_8004CB80
    if (ctx->r2 != 0) {
        // 0x8004CBCC: addiu       $s0, $s0, 0x5F4
        ctx->r16 = ADD32(ctx->r16, 0X5F4);
            goto L_8004CB80;
    }
    // 0x8004CBCC: addiu       $s0, $s0, 0x5F4
    ctx->r16 = ADD32(ctx->r16, 0X5F4);
L_8004CBD0:
    // 0x8004CBD0: andi        $v0, $s7, 0x2
    ctx->r2 = ctx->r23 & 0X2;
    // 0x8004CBD4: beq         $v0, $zero, L_8004CC3C
    if (ctx->r2 == 0) {
        // 0x8004CBD8: andi        $v0, $s7, 0x4
        ctx->r2 = ctx->r23 & 0X4;
            goto L_8004CC3C;
    }
    // 0x8004CBD8: andi        $v0, $s7, 0x4
    ctx->r2 = ctx->r23 & 0X4;
    // 0x8004CBDC: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8004CBE0: addiu       $s0, $s0, -0x420
    ctx->r16 = ADD32(ctx->r16, -0X420);
    // 0x8004CBE4: lui         $s4, 0x801E
    ctx->r20 = S32(0X801E << 16);
    // 0x8004CBE8: lw          $s4, -0x714C($s4)
    ctx->r20 = MEM_W(ctx->r20, -0X714C);
    // 0x8004CBEC: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8004CBF0: andi        $s1, $s3, 0x80
    ctx->r17 = ctx->r19 & 0X80;
L_8004CBF4:
    // 0x8004CBF4: sllv        $v0, $s4, $s2
    ctx->r2 = S32(ctx->r20 << (ctx->r18 & 31));
    // 0x8004CBF8: bgezl       $v0, L_8004CC2C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8004CBFC: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_8004CC2C;
    }
    goto skip_1;
    // 0x8004CBFC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_1:
    // 0x8004CC00: beq         $s1, $zero, L_8004CC20
    if (ctx->r17 == 0) {
        // 0x8004CC04: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8004CC20;
    }
    // 0x8004CC04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8004CC08: jal         0x80047B3C
    // 0x8004CC0C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80047B3C_22F3C(rdram, ctx);
        goto after_1;
    // 0x8004CC0C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8004CC10: jal         0x8004F418
    // 0x8004CC14: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_2;
    // 0x8004CC14: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8004CC18: j           L_8004CC2C
    // 0x8004CC1C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
        goto L_8004CC2C;
    // 0x8004CC1C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8004CC20:
    // 0x8004CC20: jal         0x8004D024
    // 0x8004CC24: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_8004D024_28424(rdram, ctx);
        goto after_3;
    // 0x8004CC24: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_3:
    // 0x8004CC28: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8004CC2C:
    // 0x8004CC2C: slti        $v0, $s2, 0x12
    ctx->r2 = SIGNED(ctx->r18) < 0X12 ? 1 : 0;
    // 0x8004CC30: bne         $v0, $zero, L_8004CBF4
    if (ctx->r2 != 0) {
        // 0x8004CC34: addiu       $s0, $s0, 0x3C8
        ctx->r16 = ADD32(ctx->r16, 0X3C8);
            goto L_8004CBF4;
    }
    // 0x8004CC34: addiu       $s0, $s0, 0x3C8
    ctx->r16 = ADD32(ctx->r16, 0X3C8);
    // 0x8004CC38: andi        $v0, $s7, 0x4
    ctx->r2 = ctx->r23 & 0X4;
L_8004CC3C:
    // 0x8004CC3C: beq         $v0, $zero, L_8004CCA4
    if (ctx->r2 == 0) {
        // 0x8004CC40: andi        $v0, $s7, 0x8
        ctx->r2 = ctx->r23 & 0X8;
            goto L_8004CCA4;
    }
    // 0x8004CC40: andi        $v0, $s7, 0x8
    ctx->r2 = ctx->r23 & 0X8;
    // 0x8004CC44: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x8004CC48: addiu       $s0, $s0, -0x5F40
    ctx->r16 = ADD32(ctx->r16, -0X5F40);
    // 0x8004CC4C: lui         $s4, 0x801E
    ctx->r20 = S32(0X801E << 16);
    // 0x8004CC50: lw          $s4, -0x7798($s4)
    ctx->r20 = MEM_W(ctx->r20, -0X7798);
    // 0x8004CC54: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8004CC58: andi        $s1, $s3, 0x80
    ctx->r17 = ctx->r19 & 0X80;
L_8004CC5C:
    // 0x8004CC5C: sllv        $v0, $s4, $s2
    ctx->r2 = S32(ctx->r20 << (ctx->r18 & 31));
    // 0x8004CC60: bgezl       $v0, L_8004CC94
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8004CC64: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_8004CC94;
    }
    goto skip_2;
    // 0x8004CC64: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_2:
    // 0x8004CC68: beq         $s1, $zero, L_8004CC88
    if (ctx->r17 == 0) {
        // 0x8004CC6C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8004CC88;
    }
    // 0x8004CC6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8004CC70: jal         0x80047B3C
    // 0x8004CC74: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80047B3C_22F3C(rdram, ctx);
        goto after_4;
    // 0x8004CC74: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8004CC78: jal         0x8004F488
    // 0x8004CC7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F488_2A888(rdram, ctx);
        goto after_5;
    // 0x8004CC7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8004CC80: j           L_8004CC94
    // 0x8004CC84: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
        goto L_8004CC94;
    // 0x8004CC84: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8004CC88:
    // 0x8004CC88: jal         0x8004D024
    // 0x8004CC8C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_8004D024_28424(rdram, ctx);
        goto after_6;
    // 0x8004CC8C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_6:
    // 0x8004CC90: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8004CC94:
    // 0x8004CC94: slti        $v0, $s2, 0x4
    ctx->r2 = SIGNED(ctx->r18) < 0X4 ? 1 : 0;
    // 0x8004CC98: bne         $v0, $zero, L_8004CC5C
    if (ctx->r2 != 0) {
        // 0x8004CC9C: addiu       $s0, $s0, 0x5AC
        ctx->r16 = ADD32(ctx->r16, 0X5AC);
            goto L_8004CC5C;
    }
    // 0x8004CC9C: addiu       $s0, $s0, 0x5AC
    ctx->r16 = ADD32(ctx->r16, 0X5AC);
    // 0x8004CCA0: andi        $v0, $s7, 0x8
    ctx->r2 = ctx->r23 & 0X8;
L_8004CCA4:
    // 0x8004CCA4: beq         $v0, $zero, L_8004CD0C
    if (ctx->r2 == 0) {
        // 0x8004CCA8: andi        $v0, $s7, 0x10
        ctx->r2 = ctx->r23 & 0X10;
            goto L_8004CD0C;
    }
    // 0x8004CCA8: andi        $v0, $s7, 0x10
    ctx->r2 = ctx->r23 & 0X10;
    // 0x8004CCAC: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8004CCB0: addiu       $s0, $s0, 0x59A0
    ctx->r16 = ADD32(ctx->r16, 0X59A0);
    // 0x8004CCB4: lui         $s4, 0x801C
    ctx->r20 = S32(0X801C << 16);
    // 0x8004CCB8: lw          $s4, -0x3FB0($s4)
    ctx->r20 = MEM_W(ctx->r20, -0X3FB0);
    // 0x8004CCBC: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8004CCC0: andi        $s1, $s3, 0x80
    ctx->r17 = ctx->r19 & 0X80;
L_8004CCC4:
    // 0x8004CCC4: sllv        $v0, $s4, $s2
    ctx->r2 = S32(ctx->r20 << (ctx->r18 & 31));
    // 0x8004CCC8: bgezl       $v0, L_8004CCFC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8004CCCC: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_8004CCFC;
    }
    goto skip_3;
    // 0x8004CCCC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_3:
    // 0x8004CCD0: beq         $s1, $zero, L_8004CCF0
    if (ctx->r17 == 0) {
        // 0x8004CCD4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8004CCF0;
    }
    // 0x8004CCD4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8004CCD8: jal         0x80047B3C
    // 0x8004CCDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80047B3C_22F3C(rdram, ctx);
        goto after_7;
    // 0x8004CCDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x8004CCE0: jal         0x8004F568
    // 0x8004CCE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F568_2A968(rdram, ctx);
        goto after_8;
    // 0x8004CCE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x8004CCE8: j           L_8004CCFC
    // 0x8004CCEC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
        goto L_8004CCFC;
    // 0x8004CCEC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8004CCF0:
    // 0x8004CCF0: jal         0x8004D024
    // 0x8004CCF4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_8004D024_28424(rdram, ctx);
        goto after_9;
    // 0x8004CCF4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_9:
    // 0x8004CCF8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8004CCFC:
    // 0x8004CCFC: slti        $v0, $s2, 0x10
    ctx->r2 = SIGNED(ctx->r18) < 0X10 ? 1 : 0;
    // 0x8004CD00: bne         $v0, $zero, L_8004CCC4
    if (ctx->r2 != 0) {
        // 0x8004CD04: addiu       $s0, $s0, 0x118
        ctx->r16 = ADD32(ctx->r16, 0X118);
            goto L_8004CCC4;
    }
    // 0x8004CD04: addiu       $s0, $s0, 0x118
    ctx->r16 = ADD32(ctx->r16, 0X118);
    // 0x8004CD08: andi        $v0, $s7, 0x10
    ctx->r2 = ctx->r23 & 0X10;
L_8004CD0C:
    // 0x8004CD0C: beq         $v0, $zero, L_8004CD84
    if (ctx->r2 == 0) {
        // 0x8004CD10: andi        $v0, $s7, 0x20
        ctx->r2 = ctx->r23 & 0X20;
            goto L_8004CD84;
    }
    // 0x8004CD10: andi        $v0, $s7, 0x20
    ctx->r2 = ctx->r23 & 0X20;
    // 0x8004CD14: lui         $s0, 0x8021
    ctx->r16 = S32(0X8021 << 16);
    // 0x8004CD18: addiu       $s0, $s0, -0x2100
    ctx->r16 = ADD32(ctx->r16, -0X2100);
    // 0x8004CD1C: lui         $s4, 0x801E
    ctx->r20 = S32(0X801E << 16);
    // 0x8004CD20: lw          $s4, -0x781C($s4)
    ctx->r20 = MEM_W(ctx->r20, -0X781C);
    // 0x8004CD24: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8004CD28: andi        $s1, $s3, 0x80
    ctx->r17 = ctx->r19 & 0X80;
L_8004CD2C:
    // 0x8004CD2C: sllv        $v0, $s4, $s2
    ctx->r2 = S32(ctx->r20 << (ctx->r18 & 31));
    // 0x8004CD30: bltz        $v0, L_8004CD48
    if (SIGNED(ctx->r2) < 0) {
        // 0x8004CD34: nop
    
            goto L_8004CD48;
    }
    // 0x8004CD34: nop

    // 0x8004CD38: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8004CD3C: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8004CD40: beql        $v0, $zero, L_8004CD74
    if (ctx->r2 == 0) {
        // 0x8004CD44: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_8004CD74;
    }
    goto skip_4;
    // 0x8004CD44: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_4:
L_8004CD48:
    // 0x8004CD48: beq         $s1, $zero, L_8004CD68
    if (ctx->r17 == 0) {
        // 0x8004CD4C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8004CD68;
    }
    // 0x8004CD4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8004CD50: jal         0x80047B3C
    // 0x8004CD54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80047B3C_22F3C(rdram, ctx);
        goto after_10;
    // 0x8004CD54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_10:
    // 0x8004CD58: jal         0x8004F4F8
    // 0x8004CD5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_11;
    // 0x8004CD5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_11:
    // 0x8004CD60: j           L_8004CD74
    // 0x8004CD64: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
        goto L_8004CD74;
    // 0x8004CD64: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8004CD68:
    // 0x8004CD68: jal         0x8004D024
    // 0x8004CD6C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_8004D024_28424(rdram, ctx);
        goto after_12;
    // 0x8004CD6C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_12:
    // 0x8004CD70: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8004CD74:
    // 0x8004CD74: slti        $v0, $s2, 0x20
    ctx->r2 = SIGNED(ctx->r18) < 0X20 ? 1 : 0;
    // 0x8004CD78: bne         $v0, $zero, L_8004CD2C
    if (ctx->r2 != 0) {
        // 0x8004CD7C: addiu       $s0, $s0, 0x118
        ctx->r16 = ADD32(ctx->r16, 0X118);
            goto L_8004CD2C;
    }
    // 0x8004CD7C: addiu       $s0, $s0, 0x118
    ctx->r16 = ADD32(ctx->r16, 0X118);
    // 0x8004CD80: andi        $v0, $s7, 0x20
    ctx->r2 = ctx->r23 & 0X20;
L_8004CD84:
    // 0x8004CD84: beq         $v0, $zero, L_8004CE0C
    if (ctx->r2 == 0) {
        // 0x8004CD88: andi        $v0, $s7, 0x40
        ctx->r2 = ctx->r23 & 0X40;
            goto L_8004CE0C;
    }
    // 0x8004CD88: andi        $v0, $s7, 0x40
    ctx->r2 = ctx->r23 & 0X40;
    // 0x8004CD8C: lui         $s1, 0x801B
    ctx->r17 = S32(0X801B << 16);
    // 0x8004CD90: addiu       $s1, $s1, -0x2290
    ctx->r17 = ADD32(ctx->r17, -0X2290);
    // 0x8004CD94: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8004CD98: andi        $s6, $s3, 0x80
    ctx->r22 = ctx->r19 & 0X80;
    // 0x8004CD9C: lui         $s5, 0x801C
    ctx->r21 = S32(0X801C << 16);
    // 0x8004CDA0: addiu       $s5, $s5, -0x3F64
    ctx->r21 = ADD32(ctx->r21, -0X3F64);
L_8004CDA4:
    // 0x8004CDA4: lw          $s4, 0x0($s5)
    ctx->r20 = MEM_W(ctx->r21, 0X0);
    // 0x8004CDA8: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_8004CDAC:
    // 0x8004CDAC: sllv        $v0, $s4, $s0
    ctx->r2 = S32(ctx->r20 << (ctx->r16 & 31));
    // 0x8004CDB0: bgezl       $v0, L_8004CDEC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8004CDB4: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8004CDEC;
    }
    goto skip_5;
    // 0x8004CDB4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_5:
    // 0x8004CDB8: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x8004CDBC: sltiu       $v0, $v0, 0x80
    ctx->r2 = ctx->r2 < 0X80 ? 1 : 0;
    // 0x8004CDC0: bnel        $v0, $zero, L_8004CDEC
    if (ctx->r2 != 0) {
        // 0x8004CDC4: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8004CDEC;
    }
    goto skip_6;
    // 0x8004CDC4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_6:
    // 0x8004CDC8: beq         $s6, $zero, L_8004CDE0
    if (ctx->r22 == 0) {
        // 0x8004CDCC: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8004CDE0;
    }
    // 0x8004CDCC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8004CDD0: jal         0x8004F5C4
    // 0x8004CDD4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_13;
    // 0x8004CDD4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_13:
    // 0x8004CDD8: j           L_8004CDEC
    // 0x8004CDDC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_8004CDEC;
    // 0x8004CDDC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8004CDE0:
    // 0x8004CDE0: jal         0x8004D024
    // 0x8004CDE4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_8004D024_28424(rdram, ctx);
        goto after_14;
    // 0x8004CDE4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_14:
    // 0x8004CDE8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8004CDEC:
    // 0x8004CDEC: slti        $v0, $s0, 0x20
    ctx->r2 = SIGNED(ctx->r16) < 0X20 ? 1 : 0;
    // 0x8004CDF0: bne         $v0, $zero, L_8004CDAC
    if (ctx->r2 != 0) {
        // 0x8004CDF4: addiu       $s1, $s1, 0x58
        ctx->r17 = ADD32(ctx->r17, 0X58);
            goto L_8004CDAC;
    }
    // 0x8004CDF4: addiu       $s1, $s1, 0x58
    ctx->r17 = ADD32(ctx->r17, 0X58);
    // 0x8004CDF8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8004CDFC: slti        $v0, $s2, 0x2
    ctx->r2 = SIGNED(ctx->r18) < 0X2 ? 1 : 0;
    // 0x8004CE00: bne         $v0, $zero, L_8004CDA4
    if (ctx->r2 != 0) {
        // 0x8004CE04: addiu       $s5, $s5, 0x4
        ctx->r21 = ADD32(ctx->r21, 0X4);
            goto L_8004CDA4;
    }
    // 0x8004CE04: addiu       $s5, $s5, 0x4
    ctx->r21 = ADD32(ctx->r21, 0X4);
    // 0x8004CE08: andi        $v0, $s7, 0x40
    ctx->r2 = ctx->r23 & 0X40;
L_8004CE0C:
    // 0x8004CE0C: beq         $v0, $zero, L_8004CE94
    if (ctx->r2 == 0) {
        // 0x8004CE10: andi        $v0, $s7, 0x80
        ctx->r2 = ctx->r23 & 0X80;
            goto L_8004CE94;
    }
    // 0x8004CE10: andi        $v0, $s7, 0x80
    ctx->r2 = ctx->r23 & 0X80;
    // 0x8004CE14: lui         $s1, 0x801B
    ctx->r17 = S32(0X801B << 16);
    // 0x8004CE18: addiu       $s1, $s1, -0x2290
    ctx->r17 = ADD32(ctx->r17, -0X2290);
    // 0x8004CE1C: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8004CE20: andi        $s6, $s3, 0x80
    ctx->r22 = ctx->r19 & 0X80;
    // 0x8004CE24: lui         $s5, 0x801C
    ctx->r21 = S32(0X801C << 16);
    // 0x8004CE28: addiu       $s5, $s5, -0x3F64
    ctx->r21 = ADD32(ctx->r21, -0X3F64);
L_8004CE2C:
    // 0x8004CE2C: lw          $s4, 0x0($s5)
    ctx->r20 = MEM_W(ctx->r21, 0X0);
    // 0x8004CE30: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_8004CE34:
    // 0x8004CE34: sllv        $v0, $s4, $s0
    ctx->r2 = S32(ctx->r20 << (ctx->r16 & 31));
    // 0x8004CE38: bgezl       $v0, L_8004CE74
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8004CE3C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8004CE74;
    }
    goto skip_7;
    // 0x8004CE3C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_7:
    // 0x8004CE40: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x8004CE44: sltiu       $v0, $v0, 0x80
    ctx->r2 = ctx->r2 < 0X80 ? 1 : 0;
    // 0x8004CE48: beql        $v0, $zero, L_8004CE74
    if (ctx->r2 == 0) {
        // 0x8004CE4C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8004CE74;
    }
    goto skip_8;
    // 0x8004CE4C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_8:
    // 0x8004CE50: beq         $s6, $zero, L_8004CE68
    if (ctx->r22 == 0) {
        // 0x8004CE54: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8004CE68;
    }
    // 0x8004CE54: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8004CE58: jal         0x8004F5C4
    // 0x8004CE5C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_15;
    // 0x8004CE5C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_15:
    // 0x8004CE60: j           L_8004CE74
    // 0x8004CE64: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_8004CE74;
    // 0x8004CE64: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8004CE68:
    // 0x8004CE68: jal         0x8004D024
    // 0x8004CE6C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_8004D024_28424(rdram, ctx);
        goto after_16;
    // 0x8004CE6C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_16:
    // 0x8004CE70: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8004CE74:
    // 0x8004CE74: slti        $v0, $s0, 0x20
    ctx->r2 = SIGNED(ctx->r16) < 0X20 ? 1 : 0;
    // 0x8004CE78: bne         $v0, $zero, L_8004CE34
    if (ctx->r2 != 0) {
        // 0x8004CE7C: addiu       $s1, $s1, 0x58
        ctx->r17 = ADD32(ctx->r17, 0X58);
            goto L_8004CE34;
    }
    // 0x8004CE7C: addiu       $s1, $s1, 0x58
    ctx->r17 = ADD32(ctx->r17, 0X58);
    // 0x8004CE80: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8004CE84: slti        $v0, $s2, 0x2
    ctx->r2 = SIGNED(ctx->r18) < 0X2 ? 1 : 0;
    // 0x8004CE88: bne         $v0, $zero, L_8004CE2C
    if (ctx->r2 != 0) {
        // 0x8004CE8C: addiu       $s5, $s5, 0x4
        ctx->r21 = ADD32(ctx->r21, 0X4);
            goto L_8004CE2C;
    }
    // 0x8004CE8C: addiu       $s5, $s5, 0x4
    ctx->r21 = ADD32(ctx->r21, 0X4);
    // 0x8004CE90: andi        $v0, $s7, 0x80
    ctx->r2 = ctx->r23 & 0X80;
L_8004CE94:
    // 0x8004CE94: beq         $v0, $zero, L_8004CEF4
    if (ctx->r2 == 0) {
        // 0x8004CE98: andi        $v0, $s7, 0x100
        ctx->r2 = ctx->r23 & 0X100;
            goto L_8004CEF4;
    }
    // 0x8004CE98: andi        $v0, $s7, 0x100
    ctx->r2 = ctx->r23 & 0X100;
    // 0x8004CE9C: lui         $s0, 0x8021
    ctx->r16 = S32(0X8021 << 16);
    // 0x8004CEA0: addiu       $s0, $s0, -0x3050
    ctx->r16 = ADD32(ctx->r16, -0X3050);
    // 0x8004CEA4: lui         $s4, 0x801A
    ctx->r20 = S32(0X801A << 16);
    // 0x8004CEA8: lw          $s4, 0x5210($s4)
    ctx->r20 = MEM_W(ctx->r20, 0X5210);
    // 0x8004CEAC: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8004CEB0: andi        $s1, $s3, 0x80
    ctx->r17 = ctx->r19 & 0X80;
L_8004CEB4:
    // 0x8004CEB4: sllv        $v0, $s4, $s2
    ctx->r2 = S32(ctx->r20 << (ctx->r18 & 31));
    // 0x8004CEB8: bgezl       $v0, L_8004CEE4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8004CEBC: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_8004CEE4;
    }
    goto skip_9;
    // 0x8004CEBC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_9:
    // 0x8004CEC0: beq         $s1, $zero, L_8004CED8
    if (ctx->r17 == 0) {
        // 0x8004CEC4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8004CED8;
    }
    // 0x8004CEC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8004CEC8: jal         0x8004F62C
    // 0x8004CECC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F62C_2AA2C(rdram, ctx);
        goto after_17;
    // 0x8004CECC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_17:
    // 0x8004CED0: j           L_8004CEE4
    // 0x8004CED4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
        goto L_8004CEE4;
    // 0x8004CED4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8004CED8:
    // 0x8004CED8: jal         0x8004D024
    // 0x8004CEDC: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_8004D024_28424(rdram, ctx);
        goto after_18;
    // 0x8004CEDC: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_18:
    // 0x8004CEE0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8004CEE4:
    // 0x8004CEE4: slti        $v0, $s2, 0x10
    ctx->r2 = SIGNED(ctx->r18) < 0X10 ? 1 : 0;
    // 0x8004CEE8: bne         $v0, $zero, L_8004CEB4
    if (ctx->r2 != 0) {
        // 0x8004CEEC: addiu       $s0, $s0, 0x24
        ctx->r16 = ADD32(ctx->r16, 0X24);
            goto L_8004CEB4;
    }
    // 0x8004CEEC: addiu       $s0, $s0, 0x24
    ctx->r16 = ADD32(ctx->r16, 0X24);
    // 0x8004CEF0: andi        $v0, $s7, 0x100
    ctx->r2 = ctx->r23 & 0X100;
L_8004CEF4:
    // 0x8004CEF4: beq         $v0, $zero, L_8004CF5C
    if (ctx->r2 == 0) {
        // 0x8004CEF8: andi        $v0, $s7, 0x200
        ctx->r2 = ctx->r23 & 0X200;
            goto L_8004CF5C;
    }
    // 0x8004CEF8: andi        $v0, $s7, 0x200
    ctx->r2 = ctx->r23 & 0X200;
    // 0x8004CEFC: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8004CF00: addiu       $s0, $s0, 0x6B70
    ctx->r16 = ADD32(ctx->r16, 0X6B70);
    // 0x8004CF04: lui         $s4, 0x801E
    ctx->r20 = S32(0X801E << 16);
    // 0x8004CF08: lw          $s4, -0x72C8($s4)
    ctx->r20 = MEM_W(ctx->r20, -0X72C8);
    // 0x8004CF0C: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8004CF10: andi        $s1, $s3, 0x80
    ctx->r17 = ctx->r19 & 0X80;
L_8004CF14:
    // 0x8004CF14: sllv        $v0, $s4, $s2
    ctx->r2 = S32(ctx->r20 << (ctx->r18 & 31));
    // 0x8004CF18: bgezl       $v0, L_8004CF4C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8004CF1C: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_8004CF4C;
    }
    goto skip_10;
    // 0x8004CF1C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_10:
    // 0x8004CF20: beq         $s1, $zero, L_8004CF40
    if (ctx->r17 == 0) {
        // 0x8004CF24: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8004CF40;
    }
    // 0x8004CF24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8004CF28: jal         0x80047B3C
    // 0x8004CF2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80047B3C_22F3C(rdram, ctx);
        goto after_19;
    // 0x8004CF2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_19:
    // 0x8004CF30: jal         0x8004F684
    // 0x8004CF34: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F684_2AA84(rdram, ctx);
        goto after_20;
    // 0x8004CF34: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_20:
    // 0x8004CF38: j           L_8004CF4C
    // 0x8004CF3C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
        goto L_8004CF4C;
    // 0x8004CF3C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8004CF40:
    // 0x8004CF40: jal         0x8004D024
    // 0x8004CF44: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_8004D024_28424(rdram, ctx);
        goto after_21;
    // 0x8004CF44: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_21:
    // 0x8004CF48: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8004CF4C:
    // 0x8004CF4C: slti        $v0, $s2, 0x20
    ctx->r2 = SIGNED(ctx->r18) < 0X20 ? 1 : 0;
    // 0x8004CF50: bne         $v0, $zero, L_8004CF14
    if (ctx->r2 != 0) {
        // 0x8004CF54: addiu       $s0, $s0, 0x5C
        ctx->r16 = ADD32(ctx->r16, 0X5C);
            goto L_8004CF14;
    }
    // 0x8004CF54: addiu       $s0, $s0, 0x5C
    ctx->r16 = ADD32(ctx->r16, 0X5C);
    // 0x8004CF58: andi        $v0, $s7, 0x200
    ctx->r2 = ctx->r23 & 0X200;
L_8004CF5C:
    // 0x8004CF5C: beq         $v0, $zero, L_8004CFF8
    if (ctx->r2 == 0) {
        // 0x8004CF60: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_8004CFF8;
    }
    // 0x8004CF60: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8004CF64: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8004CF68: addiu       $v1, $v1, 0x4430
    ctx->r3 = ADD32(ctx->r3, 0X4430);
    // 0x8004CF6C: andi        $t1, $s3, 0x80
    ctx->r9 = ctx->r19 & 0X80;
    // 0x8004CF70: andi        $t0, $s3, 0x1
    ctx->r8 = ctx->r19 & 0X1;
    // 0x8004CF74: andi        $a3, $s3, 0x4
    ctx->r7 = ctx->r19 & 0X4;
    // 0x8004CF78: andi        $a2, $s3, 0x2
    ctx->r6 = ctx->r19 & 0X2;
    // 0x8004CF7C: andi        $a1, $s3, 0x8
    ctx->r5 = ctx->r19 & 0X8;
L_8004CF80:
    // 0x8004CF80: lbu         $a0, 0x0($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X0);
    // 0x8004CF84: andi        $v0, $a0, 0x3
    ctx->r2 = ctx->r4 & 0X3;
    // 0x8004CF88: beql        $v0, $zero, L_8004CFEC
    if (ctx->r2 == 0) {
        // 0x8004CF8C: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_8004CFEC;
    }
    goto skip_11;
    // 0x8004CF8C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_11:
    // 0x8004CF90: beq         $t1, $zero, L_8004CFA0
    if (ctx->r9 == 0) {
        // 0x8004CF94: nop
    
            goto L_8004CFA0;
    }
    // 0x8004CF94: nop

    // 0x8004CF98: j           L_8004CFE8
    // 0x8004CF9C: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
        goto L_8004CFE8;
    // 0x8004CF9C: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
L_8004CFA0:
    // 0x8004CFA0: beq         $t0, $zero, L_8004CFAC
    if (ctx->r8 == 0) {
        // 0x8004CFA4: xori        $v0, $a0, 0x1
        ctx->r2 = ctx->r4 ^ 0X1;
            goto L_8004CFAC;
    }
    // 0x8004CFA4: xori        $v0, $a0, 0x1
    ctx->r2 = ctx->r4 ^ 0X1;
    // 0x8004CFA8: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
L_8004CFAC:
    // 0x8004CFAC: beq         $a3, $zero, L_8004CFC0
    if (ctx->r7 == 0) {
        // 0x8004CFB0: nop
    
            goto L_8004CFC0;
    }
    // 0x8004CFB0: nop

    // 0x8004CFB4: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8004CFB8: xori        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 ^ 0X2;
    // 0x8004CFBC: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
L_8004CFC0:
    // 0x8004CFC0: beq         $a2, $zero, L_8004CFD4
    if (ctx->r6 == 0) {
        // 0x8004CFC4: nop
    
            goto L_8004CFD4;
    }
    // 0x8004CFC4: nop

    // 0x8004CFC8: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8004CFCC: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8004CFD0: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
L_8004CFD4:
    // 0x8004CFD4: beql        $a1, $zero, L_8004CFEC
    if (ctx->r5 == 0) {
        // 0x8004CFD8: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_8004CFEC;
    }
    goto skip_12;
    // 0x8004CFD8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_12:
    // 0x8004CFDC: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8004CFE0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8004CFE4: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
L_8004CFE8:
    // 0x8004CFE8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8004CFEC:
    // 0x8004CFEC: slti        $v0, $s2, 0xB
    ctx->r2 = SIGNED(ctx->r18) < 0XB ? 1 : 0;
    // 0x8004CFF0: bne         $v0, $zero, L_8004CF80
    if (ctx->r2 != 0) {
        // 0x8004CFF4: addiu       $v1, $v1, 0x38
        ctx->r3 = ADD32(ctx->r3, 0X38);
            goto L_8004CF80;
    }
    // 0x8004CFF4: addiu       $v1, $v1, 0x38
    ctx->r3 = ADD32(ctx->r3, 0X38);
L_8004CFF8:
    // 0x8004CFF8: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8004CFFC: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x8004D000: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x8004D004: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x8004D008: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8004D00C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8004D010: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8004D014: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8004D018: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8004D01C: jr          $ra
    // 0x8004D020: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8004D020: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800332EC_E6EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800332EC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800332F0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x800332F4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x800332F8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x800332FC: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x80033300: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80033304: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x80033308: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8003330C: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    // 0x80033310: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80033314: addiu       $a0, $a0, 0x4390
    ctx->r4 = ADD32(ctx->r4, 0X4390);
    // 0x80033318: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8003331C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80033320: jal         0x8009A3B4
    // 0x80033324: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80033324: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_0:
    // 0x80033328: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8003332C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80033330: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x80033334: jal         0x80032FC0
    // 0x80033338: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    func_80032FC0_E3C0(rdram, ctx);
        goto after_1;
    // 0x80033338: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    after_1:
    // 0x8003333C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80033340: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80033344: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80033348: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8003334C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80033350: jr          $ra
    // 0x80033354: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80033354: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8008BDC8_671C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008BDC8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008BDCC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8008BDD0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8008BDD4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8008BDD8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8008BDDC: lbu         $v0, 0xC9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC9);
    // 0x8008BDE0: beq         $v0, $zero, L_8008BE04
    if (ctx->r2 == 0) {
        // 0x8008BDE4: addu        $s0, $a1, $zero
        ctx->r16 = ADD32(ctx->r5, 0);
            goto L_8008BE04;
    }
    // 0x8008BDE4: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x8008BDE8: sll         $a0, $s0, 3
    ctx->r4 = S32(ctx->r16 << 3);
    // 0x8008BDEC: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008BDF0: lw          $v0, 0x4F88($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4F88);
    // 0x8008BDF4: subu        $a0, $a0, $s0
    ctx->r4 = SUB32(ctx->r4, ctx->r16);
    // 0x8008BDF8: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x8008BDFC: jal         0x80091820
    // 0x8008BE00: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_80091820_6CC20(rdram, ctx);
        goto after_0;
    // 0x8008BE00: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_0:
L_8008BE04:
    // 0x8008BE04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8008BE08: sll         $a0, $s0, 3
    ctx->r4 = S32(ctx->r16 << 3);
    // 0x8008BE0C: subu        $a0, $a0, $s0
    ctx->r4 = SUB32(ctx->r4, ctx->r16);
    // 0x8008BE10: sb          $v0, 0xC9($s1)
    MEM_B(0XC9, ctx->r17) = ctx->r2;
    // 0x8008BE14: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008BE18: lw          $v0, 0x4F88($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4F88);
    // 0x8008BE1C: lw          $a1, 0x8($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X8);
    // 0x8008BE20: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x8008BE24: jal         0x80091790
    // 0x8008BE28: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_80091790_6CB90(rdram, ctx);
        goto after_1;
    // 0x8008BE28: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_1:
    // 0x8008BE2C: sw          $zero, 0x8($s1)
    MEM_W(0X8, ctx->r17) = 0;
    // 0x8008BE30: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8008BE34: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8008BE38: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8008BE3C: jr          $ra
    // 0x8008BE40: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8008BE40: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8002FD30_B130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002FD30: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8002FD34: lbu         $v1, 0x3($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X3);
    // 0x8002FD38: srl         $v0, $v0, 8
    ctx->r2 = S32(U32(ctx->r2) >> 8);
    // 0x8002FD3C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8002FD40: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8002FD44: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x8002FD48: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x8002FD4C: sll         $a1, $a1, 8
    ctx->r5 = S32(ctx->r5 << 8);
    // 0x8002FD50: or          $v0, $v0, $a1
    ctx->r2 = ctx->r2 | ctx->r5;
    // 0x8002FD54: jr          $ra
    // 0x8002FD58: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x8002FD58: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_8007825C_5365C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007825C: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x80078260: lbu         $v1, 0x3($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X3);
    // 0x80078264: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80078268: beq         $v1, $v0, L_8007829C
    if (ctx->r3 == ctx->r2) {
        // 0x8007826C: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8007829C;
    }
    // 0x8007826C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80078270: beq         $v0, $zero, L_800782B8
    if (ctx->r2 == 0) {
        // 0x80078274: lui         $a1, 0xFFFB
        ctx->r5 = S32(0XFFFB << 16);
            goto L_800782B8;
    }
    // 0x80078274: lui         $a1, 0xFFFB
    ctx->r5 = S32(0XFFFB << 16);
    // 0x80078278: bne         $v1, $zero, L_800782B8
    if (ctx->r3 != 0) {
        // 0x8007827C: nop
    
            goto L_800782B8;
    }
    // 0x8007827C: nop

    // 0x80078280: ori         $a1, $a1, 0xFBFC
    ctx->r5 = ctx->r5 | 0XFBFC;
    // 0x80078284: lhu         $v1, 0x24($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X24);
    // 0x80078288: lhu         $v0, 0x1E($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X1E);
    // 0x8007828C: lw          $a0, 0x18($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X18);
    // 0x80078290: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80078294: j           L_800782D0
    // 0x80078298: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
        goto L_800782D0;
    // 0x80078298: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
L_8007829C:
    // 0x8007829C: lui         $v0, 0xFFFB
    ctx->r2 = S32(0XFFFB << 16);
    // 0x800782A0: lhu         $v1, 0x24($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X24);
    // 0x800782A4: lw          $a0, 0x18($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X18);
    // 0x800782A8: ori         $v0, $v0, 0xFBFC
    ctx->r2 = ctx->r2 | 0XFBFC;
    // 0x800782AC: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x800782B0: j           L_800782D8
    // 0x800782B4: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
        goto L_800782D8;
    // 0x800782B4: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
L_800782B8:
    // 0x800782B8: lhu         $v0, 0x1E($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X1E);
    // 0x800782BC: lhu         $v1, 0x24($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X24);
    // 0x800782C0: lw          $a0, 0x18($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X18);
    // 0x800782C4: ori         $a1, $a1, 0xFBFC
    ctx->r5 = ctx->r5 | 0XFBFC;
    // 0x800782C8: addiu       $v0, $v0, -0x5
    ctx->r2 = ADD32(ctx->r2, -0X5);
    // 0x800782CC: addiu       $v1, $v1, -0x2
    ctx->r3 = ADD32(ctx->r3, -0X2);
L_800782D0:
    // 0x800782D0: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x800782D4: sh          $v0, 0x1E($a2)
    MEM_H(0X1E, ctx->r6) = ctx->r2;
L_800782D8:
    // 0x800782D8: sh          $v1, 0x24($a2)
    MEM_H(0X24, ctx->r6) = ctx->r3;
    // 0x800782DC: sw          $a0, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->r4;
    // 0x800782E0: lbu         $v0, 0xB($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0XB);
    // 0x800782E4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x800782E8: sb          $v0, 0xB($a2)
    MEM_B(0XB, ctx->r6) = ctx->r2;
    // 0x800782EC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x800782F0: bne         $v0, $zero, L_80078324
    if (ctx->r2 != 0) {
        // 0x800782F4: nop
    
            goto L_80078324;
    }
    // 0x800782F4: nop

    // 0x800782F8: lbu         $v0, 0x3($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X3);
    // 0x800782FC: lbu         $v1, 0x8($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X8);
    // 0x80078300: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80078304: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x80078308: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8007830C: lbu         $a0, -0x332D($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X332D);
    // 0x80078310: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80078314: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80078318: sb          $v1, 0x8($a2)
    MEM_B(0X8, ctx->r6) = ctx->r3;
    // 0x8007831C: sb          $v0, 0x22($a2)
    MEM_B(0X22, ctx->r6) = ctx->r2;
    // 0x80078320: sb          $a0, 0xB($a2)
    MEM_B(0XB, ctx->r6) = ctx->r4;
L_80078324:
    // 0x80078324: jr          $ra
    // 0x80078328: nop

    TRACE_RETURN()
    return;
    // 0x80078328: nop

;}
RECOMP_FUNC void func_800650C8_404C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800650C8: lhu         $v1, 0xBE($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0XBE);
    // 0x800650CC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x800650D0: lbu         $a1, 0x6B39($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X6B39);
    // 0x800650D4: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x800650D8: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x800650DC: sh          $v0, 0xBE($a0)
    MEM_H(0XBE, ctx->r4) = ctx->r2;
    // 0x800650E0: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x800650E4: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x800650E8: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x800650EC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800650F0: sw          $v0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r2;
    // 0x800650F4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x800650F8: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x800650FC: lw          $v0, 0x28C4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X28C4);
    // 0x80065100: jr          $ra
    // 0x80065104: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80065104: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_8005DF40_39340(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8005DF40: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8005DF44: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8005DF48: bne         $v0, $zero, L_8005DF5C
    if (ctx->r2 != 0) {
        // 0x8005DF4C: nop
    
            goto L_8005DF5C;
    }
    // 0x8005DF4C: nop

    // 0x8005DF50: lbu         $v0, 0x1($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1);
    // 0x8005DF54: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8005DF58: sb          $v0, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r2;
L_8005DF5C:
    // 0x8005DF5C: jr          $ra
    // 0x8005DF60: nop

    TRACE_RETURN()
    return;
    // 0x8005DF60: nop

;}
RECOMP_FUNC void func_8008E900_69D00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008E900: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008E904: jr          $ra
    // 0x8008E908: sw          $a0, 0x5020($at)
    MEM_W(0X5020, ctx->r1) = ctx->r4;
    TRACE_RETURN()
    return;
    // 0x8008E908: sw          $a0, 0x5020($at)
    MEM_W(0X5020, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_8002FD90_B190(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002FD90: jr          $ra
    // 0x8002FD94: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    TRACE_RETURN()
    return;
    // 0x8002FD94: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
;}
RECOMP_FUNC void func_8003B818_16C18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003B818: jr          $ra
    // 0x8003B81C: nop

    TRACE_RETURN()
    return;
    // 0x8003B81C: nop

;}
RECOMP_FUNC void func_8008B25C_6665C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008B25C: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x8008B260: lw          $v0, 0xC($a2)
    ctx->r2 = MEM_W(ctx->r6, 0XC);
    // 0x8008B264: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8008B268: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8008B26C: bne         $v0, $zero, L_8008B2D4
    if (ctx->r2 != 0) {
        // 0x8008B270: addu        $a3, $a2, $zero
        ctx->r7 = ADD32(ctx->r6, 0);
            goto L_8008B2D4;
    }
    // 0x8008B270: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    // 0x8008B274: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008B278: lw          $v0, 0x4FB8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4FB8);
    // 0x8008B27C: bne         $v0, $zero, L_8008B28C
    if (ctx->r2 != 0) {
        // 0x8008B280: nop
    
            goto L_8008B28C;
    }
    // 0x8008B280: nop

    // 0x8008B284: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008B288: sw          $a2, 0x4FB8($at)
    MEM_W(0X4FB8, ctx->r1) = ctx->r6;
L_8008B28C:
    // 0x8008B28C: lw          $v0, 0x14($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X14);
    // 0x8008B290: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x8008B294: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8008B298: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8008B29C: sw          $v1, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r3;
    // 0x8008B2A0: sw          $zero, 0x10($a2)
    MEM_W(0X10, ctx->r6) = 0;
    // 0x8008B2A4: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
    // 0x8008B2A8: blez        $a0, L_8008B2D4
    if (SIGNED(ctx->r4) <= 0) {
        // 0x8008B2AC: sw          $v0, 0x14($a2)
        MEM_W(0X14, ctx->r6) = ctx->r2;
            goto L_8008B2D4;
    }
    // 0x8008B2AC: sw          $v0, 0x14($a2)
    MEM_W(0X14, ctx->r6) = ctx->r2;
    // 0x8008B2B0: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
L_8008B2B4:
    // 0x8008B2B4: lw          $v0, 0x18($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X18);
    // 0x8008B2B8: addu        $v0, $a3, $v0
    ctx->r2 = ADD32(ctx->r7, ctx->r2);
    // 0x8008B2BC: sw          $v0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r2;
    // 0x8008B2C0: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x8008B2C4: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8008B2C8: slt         $v0, $a1, $v0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8008B2CC: bne         $v0, $zero, L_8008B2B4
    if (ctx->r2 != 0) {
        // 0x8008B2D0: addiu       $v1, $v1, 0x8
        ctx->r3 = ADD32(ctx->r3, 0X8);
            goto L_8008B2B4;
    }
    // 0x8008B2D0: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
L_8008B2D4:
    // 0x8008B2D4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x8008B2D8: jr          $ra
    // 0x8008B2DC: nop

    TRACE_RETURN()
    return;
    // 0x8008B2DC: nop

;}
RECOMP_FUNC void func_80059018_34418(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80059018: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
    // 0x8005901C: lh          $a0, 0x8($a1)
    ctx->r4 = MEM_H(ctx->r5, 0X8);
    // 0x80059020: lh          $v0, 0x0($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X0);
    // 0x80059024: lh          $v1, 0x14($t0)
    ctx->r3 = MEM_H(ctx->r8, 0X14);
    // 0x80059028: subu        $a2, $a0, $v0
    ctx->r6 = SUB32(ctx->r4, ctx->r2);
    // 0x8005902C: subu        $a3, $v1, $v0
    ctx->r7 = SUB32(ctx->r3, ctx->r2);
    // 0x80059030: sltu        $v0, $a3, $a2
    ctx->r2 = ctx->r7 < ctx->r6 ? 1 : 0;
    // 0x80059034: beq         $v0, $zero, L_800590BC
    if (ctx->r2 == 0) {
        // 0x80059038: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_800590BC;
    }
    // 0x80059038: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8005903C: lh          $a0, 0xC($a1)
    ctx->r4 = MEM_H(ctx->r5, 0XC);
    // 0x80059040: lh          $v0, 0x4($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X4);
    // 0x80059044: lh          $v1, 0x18($t0)
    ctx->r3 = MEM_H(ctx->r8, 0X18);
    // 0x80059048: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x8005904C: subu        $t0, $v1, $v0
    ctx->r8 = SUB32(ctx->r3, ctx->r2);
    // 0x80059050: sltu        $v0, $t0, $a0
    ctx->r2 = ctx->r8 < ctx->r4 ? 1 : 0;
    // 0x80059054: beq         $v0, $zero, L_800590B8
    if (ctx->r2 == 0) {
        // 0x80059058: sra         $v0, $a2, 1
        ctx->r2 = S32(SIGNED(ctx->r6) >> 1);
            goto L_800590B8;
    }
    // 0x80059058: sra         $v0, $a2, 1
    ctx->r2 = S32(SIGNED(ctx->r6) >> 1);
    // 0x8005905C: subu        $a1, $a3, $v0
    ctx->r5 = SUB32(ctx->r7, ctx->r2);
    // 0x80059060: bgez        $a1, L_8005906C
    if (SIGNED(ctx->r5) >= 0) {
        // 0x80059064: sra         $a0, $a0, 1
        ctx->r4 = S32(SIGNED(ctx->r4) >> 1);
            goto L_8005906C;
    }
    // 0x80059064: sra         $a0, $a0, 1
    ctx->r4 = S32(SIGNED(ctx->r4) >> 1);
    // 0x80059068: subu        $a1, $v0, $a3
    ctx->r5 = SUB32(ctx->r2, ctx->r7);
L_8005906C:
    // 0x8005906C: sll         $v1, $a2, 5
    ctx->r3 = S32(ctx->r6 << 5);
    // 0x80059070: subu        $v1, $v1, $a2
    ctx->r3 = SUB32(ctx->r3, ctx->r6);
    // 0x80059074: sll         $v0, $v1, 6
    ctx->r2 = S32(ctx->r3 << 6);
    // 0x80059078: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8005907C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80059080: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80059084: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x80059088: lui         $v1, 0xBDD0
    ctx->r3 = S32(0XBDD0 << 16);
    // 0x8005908C: ori         $v1, $v1, 0x6FF
    ctx->r3 = ctx->r3 | 0X6FF;
    // 0x80059090: multu       $v0, $v1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80059094: mfhi        $t1
    ctx->r9 = hi;
    // 0x80059098: srl         $v1, $t1, 20
    ctx->r3 = S32(U32(ctx->r9) >> 20);
    // 0x8005909C: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x800590A0: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x800590A4: subu        $v0, $t0, $v0
    ctx->r2 = SUB32(ctx->r8, ctx->r2);
    // 0x800590A8: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x800590AC: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x800590B0: bne         $v0, $zero, L_800590BC
    if (ctx->r2 != 0) {
        // 0x800590B4: addiu       $v0, $zero, -0x80
        ctx->r2 = ADD32(0, -0X80);
            goto L_800590BC;
    }
    // 0x800590B4: addiu       $v0, $zero, -0x80
    ctx->r2 = ADD32(0, -0X80);
L_800590B8:
    // 0x800590B8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_800590BC:
    // 0x800590BC: jr          $ra
    // 0x800590C0: nop

    TRACE_RETURN()
    return;
    // 0x800590C0: nop

;}
RECOMP_FUNC void func_80070E80_4C280(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80070E80: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80070E84: lw          $v0, -0x3BFC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3BFC);
    // 0x80070E88: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
    // 0x80070E8C: sltu        $v0, $v0, $a0
    ctx->r2 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x80070E90: jr          $ra
    // 0x80070E94: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    TRACE_RETURN()
    return;
    // 0x80070E94: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
;}
RECOMP_FUNC void func_80065478_40878(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80065478: lhu         $v0, 0xC0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XC0);
    // 0x8006547C: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x80065480: sh          $v1, 0xC0($a0)
    MEM_H(0XC0, ctx->r4) = ctx->r3;
    // 0x80065484: lw          $v1, 0x6C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X6C);
    // 0x80065488: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8006548C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80065490: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x80065494: sw          $v1, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = ctx->r3;
    // 0x80065498: lw          $v0, 0x6C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X6C);
    // 0x8006549C: lbu         $v0, 0x1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1);
    // 0x800654A0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800654A4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800654A8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800654AC: lw          $v0, 0x28C4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X28C4);
    // 0x800654B0: sw          $v0, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r2;
    // 0x800654B4: jr          $ra
    // 0x800654B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x800654B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_80026820_1C20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80026820: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80026824: lw          $v1, -0x46DC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X46DC);
    // 0x80026828: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8002682C: sw          $a0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r4;
    // 0x80026830: jr          $ra
    // 0x80026834: sb          $v0, 0x37($v1)
    MEM_B(0X37, ctx->r3) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80026834: sb          $v0, 0x37($v1)
    MEM_B(0X37, ctx->r3) = ctx->r2;
;}
RECOMP_FUNC void func_8006855C_4395C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006855C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80068560: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80068564: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80068568: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8006856C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80068570: lbu         $v1, 0x7E($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X7E);
    // 0x80068574: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80068578: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8006857C: lhu         $v1, 0xB4($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XB4);
    // 0x80068580: lbu         $a0, 0x7E($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X7E);
    // 0x80068584: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80068588: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8006858C: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80068590: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80068594: sh          $v1, 0x8C($s0)
    MEM_H(0X8C, ctx->r16) = ctx->r3;
    // 0x80068598: lhu         $v1, 0xB4($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XB4);
    // 0x8006859C: lbu         $a0, 0x7C($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X7C);
    // 0x800685A0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800685A4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x800685A8: sh          $v1, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r3;
    // 0x800685AC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x800685B0: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x800685B4: lbu         $a1, 0xBE0($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0XBE0);
    // 0x800685B8: jal         0x80069328
    // 0x800685BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80069328_44728(rdram, ctx);
        goto after_0;
    // 0x800685BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x800685C0: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x800685C4: lhu         $v1, 0x88($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X88);
    // 0x800685C8: lw          $a0, 0xA0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XA0);
    // 0x800685CC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800685D0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x800685D4: sh          $v0, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r2;
    // 0x800685D8: lhu         $v0, 0xA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XA);
    // 0x800685DC: lhu         $v1, 0x8A($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X8A);
    // 0x800685E0: lw          $a0, 0xA0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XA0);
    // 0x800685E4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800685E8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x800685EC: sh          $v0, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r2;
    // 0x800685F0: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x800685F4: lhu         $v1, 0x8C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X8C);
    // 0x800685F8: lw          $a0, 0xA0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XA0);
    // 0x800685FC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80068600: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80068604: sh          $v0, 0x10($a0)
    MEM_H(0X10, ctx->r4) = ctx->r2;
    // 0x80068608: lhu         $v0, 0xA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XA);
    // 0x8006860C: lhu         $v1, 0x8E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X8E);
    // 0x80068610: lw          $a0, 0xA0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XA0);
    // 0x80068614: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80068618: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8006861C: sh          $v0, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r2;
    // 0x80068620: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x80068624: lhu         $v1, 0x88($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X88);
    // 0x80068628: lw          $a0, 0xA0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XA0);
    // 0x8006862C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80068630: sh          $v0, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r2;
    // 0x80068634: lhu         $v0, 0xA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XA);
    // 0x80068638: lhu         $v1, 0x8A($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X8A);
    // 0x8006863C: lw          $a0, 0xA0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XA0);
    // 0x80068640: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80068644: sh          $v0, 0x1A($a0)
    MEM_H(0X1A, ctx->r4) = ctx->r2;
    // 0x80068648: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x8006864C: lhu         $v1, 0x8C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X8C);
    // 0x80068650: lw          $a0, 0xA0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XA0);
    // 0x80068654: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80068658: sh          $v0, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r2;
    // 0x8006865C: lhu         $v0, 0xA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XA);
    // 0x80068660: lhu         $v1, 0x8E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X8E);
    // 0x80068664: lw          $a0, 0xA0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XA0);
    // 0x80068668: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8006866C: sh          $v0, 0x22($a0)
    MEM_H(0X22, ctx->r4) = ctx->r2;
    // 0x80068670: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x80068674: lhu         $v1, 0x90($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X90);
    // 0x80068678: lw          $a0, 0xA4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XA4);
    // 0x8006867C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80068680: sh          $v0, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r2;
    // 0x80068684: lhu         $v0, 0xA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XA);
    // 0x80068688: lhu         $v1, 0x92($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X92);
    // 0x8006868C: lw          $a0, 0xA4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XA4);
    // 0x80068690: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80068694: sh          $v0, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r2;
    // 0x80068698: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x8006869C: lhu         $v1, 0x94($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X94);
    // 0x800686A0: lw          $a0, 0xA4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XA4);
    // 0x800686A4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800686A8: sh          $v0, 0x10($a0)
    MEM_H(0X10, ctx->r4) = ctx->r2;
    // 0x800686AC: lhu         $v0, 0xA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XA);
    // 0x800686B0: lhu         $v1, 0x96($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X96);
    // 0x800686B4: lw          $a0, 0xA4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XA4);
    // 0x800686B8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800686BC: sh          $v0, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r2;
    // 0x800686C0: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x800686C4: lhu         $v1, 0x90($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X90);
    // 0x800686C8: lw          $a0, 0xA4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XA4);
    // 0x800686CC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800686D0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x800686D4: sh          $v0, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r2;
    // 0x800686D8: lhu         $v0, 0xA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XA);
    // 0x800686DC: lhu         $v1, 0x92($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X92);
    // 0x800686E0: lw          $a0, 0xA4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XA4);
    // 0x800686E4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800686E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800686EC: sh          $v0, 0x1A($a0)
    MEM_H(0X1A, ctx->r4) = ctx->r2;
    // 0x800686F0: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x800686F4: lhu         $v1, 0x94($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X94);
    // 0x800686F8: lw          $a0, 0xA4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XA4);
    // 0x800686FC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80068700: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80068704: sh          $v0, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r2;
    // 0x80068708: lhu         $v0, 0xA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XA);
    // 0x8006870C: lhu         $v1, 0x96($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X96);
    // 0x80068710: lw          $a0, 0xA4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XA4);
    // 0x80068714: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80068718: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8006871C: sh          $v0, 0x22($a0)
    MEM_H(0X22, ctx->r4) = ctx->r2;
    // 0x80068720: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x80068724: lhu         $v1, 0x88($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X88);
    // 0x80068728: lw          $a0, 0xA8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XA8);
    // 0x8006872C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80068730: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80068734: sh          $v0, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r2;
    // 0x80068738: lhu         $v0, 0xA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XA);
    // 0x8006873C: lhu         $v1, 0x8A($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X8A);
    // 0x80068740: lw          $a0, 0xA8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XA8);
    // 0x80068744: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80068748: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8006874C: sh          $v0, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r2;
    // 0x80068750: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x80068754: lhu         $v1, 0x88($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X88);
    // 0x80068758: lw          $a0, 0xA8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XA8);
    // 0x8006875C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80068760: sh          $v0, 0x10($a0)
    MEM_H(0X10, ctx->r4) = ctx->r2;
    // 0x80068764: lhu         $v0, 0xA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XA);
    // 0x80068768: lhu         $v1, 0x8A($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X8A);
    // 0x8006876C: lw          $a0, 0xA8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XA8);
    // 0x80068770: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80068774: sh          $v0, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r2;
    // 0x80068778: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x8006877C: lhu         $v1, 0x90($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X90);
    // 0x80068780: lw          $a0, 0xA8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XA8);
    // 0x80068784: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80068788: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8006878C: sh          $v0, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r2;
    // 0x80068790: lhu         $v0, 0xA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XA);
    // 0x80068794: lhu         $v1, 0x92($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X92);
    // 0x80068798: lw          $a0, 0xA8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XA8);
    // 0x8006879C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800687A0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800687A4: sh          $v0, 0x1A($a0)
    MEM_H(0X1A, ctx->r4) = ctx->r2;
    // 0x800687A8: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x800687AC: lhu         $v1, 0x90($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X90);
    // 0x800687B0: lw          $a0, 0xA8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XA8);
    // 0x800687B4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800687B8: sh          $v0, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r2;
    // 0x800687BC: lhu         $v0, 0xA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XA);
    // 0x800687C0: lhu         $v1, 0x92($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X92);
    // 0x800687C4: lw          $a0, 0xA8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XA8);
    // 0x800687C8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800687CC: sh          $v0, 0x22($a0)
    MEM_H(0X22, ctx->r4) = ctx->r2;
    // 0x800687D0: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x800687D4: lhu         $v1, 0x8C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X8C);
    // 0x800687D8: lw          $a0, 0xAC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XAC);
    // 0x800687DC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800687E0: sh          $v0, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r2;
    // 0x800687E4: lhu         $v0, 0xA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XA);
    // 0x800687E8: lhu         $v1, 0x8E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X8E);
    // 0x800687EC: lw          $a0, 0xAC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XAC);
    // 0x800687F0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800687F4: sh          $v0, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r2;
    // 0x800687F8: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x800687FC: lhu         $v1, 0x8C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X8C);
    // 0x80068800: lw          $a0, 0xAC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XAC);
    // 0x80068804: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80068808: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8006880C: sh          $v0, 0x10($a0)
    MEM_H(0X10, ctx->r4) = ctx->r2;
    // 0x80068810: lhu         $v0, 0xA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XA);
    // 0x80068814: lhu         $v1, 0x8E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X8E);
    // 0x80068818: lw          $a0, 0xAC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XAC);
    // 0x8006881C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80068820: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80068824: sh          $v0, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r2;
    // 0x80068828: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x8006882C: lhu         $v1, 0x94($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X94);
    // 0x80068830: lw          $a0, 0xAC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XAC);
    // 0x80068834: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80068838: sh          $v0, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r2;
    // 0x8006883C: lhu         $v0, 0xA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XA);
    // 0x80068840: lhu         $v1, 0x96($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X96);
    // 0x80068844: lw          $a0, 0xAC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XAC);
    // 0x80068848: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8006884C: sh          $v0, 0x1A($a0)
    MEM_H(0X1A, ctx->r4) = ctx->r2;
    // 0x80068850: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x80068854: lhu         $v1, 0x94($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X94);
    // 0x80068858: lw          $a0, 0xAC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XAC);
    // 0x8006885C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80068860: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80068864: sh          $v0, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r2;
    // 0x80068868: lhu         $v0, 0xA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XA);
    // 0x8006886C: lhu         $v1, 0x96($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X96);
    // 0x80068870: lw          $a0, 0xAC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XAC);
    // 0x80068874: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80068878: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8006887C: sh          $v0, 0x22($a0)
    MEM_H(0X22, ctx->r4) = ctx->r2;
    // 0x80068880: lb          $a0, 0x3D($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X3D);
    // 0x80068884: lw          $a1, 0xA0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XA0);
    // 0x80068888: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8006888C: lw          $v0, 0x497C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X497C);
    // 0x80068890: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x80068894: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    // 0x80068898: jal         0x8002FD30
    // 0x8006889C: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_8002FD30_B130(rdram, ctx);
        goto after_1;
    // 0x8006889C: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_1:
    // 0x800688A0: lb          $a0, 0x3D($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X3D);
    // 0x800688A4: lw          $a1, 0xA4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XA4);
    // 0x800688A8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x800688AC: lw          $v0, 0x497C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X497C);
    // 0x800688B0: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x800688B4: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    // 0x800688B8: jal         0x8002FD30
    // 0x800688BC: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_8002FD30_B130(rdram, ctx);
        goto after_2;
    // 0x800688BC: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_2:
    // 0x800688C0: lb          $a0, 0x3D($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X3D);
    // 0x800688C4: lw          $a1, 0xA8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XA8);
    // 0x800688C8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x800688CC: lw          $v0, 0x497C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X497C);
    // 0x800688D0: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x800688D4: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    // 0x800688D8: jal         0x8002FD30
    // 0x800688DC: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_8002FD30_B130(rdram, ctx);
        goto after_3;
    // 0x800688DC: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_3:
    // 0x800688E0: lb          $a0, 0x3D($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X3D);
    // 0x800688E4: lw          $a1, 0xAC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XAC);
    // 0x800688E8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x800688EC: lw          $v0, 0x497C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X497C);
    // 0x800688F0: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x800688F4: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    // 0x800688F8: jal         0x8002FD30
    // 0x800688FC: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_8002FD30_B130(rdram, ctx);
        goto after_4;
    // 0x800688FC: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_4:
    // 0x80068900: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x80068904: lhu         $v1, 0x88($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X88);
    // 0x80068908: lw          $a0, 0x98($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X98);
    // 0x8006890C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80068910: sh          $v0, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r2;
    // 0x80068914: lhu         $v0, 0xA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XA);
    // 0x80068918: lhu         $v1, 0x8A($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X8A);
    // 0x8006891C: lw          $a0, 0x98($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X98);
    // 0x80068920: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80068924: sh          $v0, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r2;
    // 0x80068928: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x8006892C: lhu         $v1, 0x8C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X8C);
    // 0x80068930: lw          $a0, 0x98($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X98);
    // 0x80068934: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80068938: sh          $v0, 0xC($a0)
    MEM_H(0XC, ctx->r4) = ctx->r2;
    // 0x8006893C: lhu         $v0, 0xA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XA);
    // 0x80068940: lhu         $v1, 0x8E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X8E);
    // 0x80068944: lw          $a0, 0x98($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X98);
    // 0x80068948: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8006894C: sh          $v0, 0xE($a0)
    MEM_H(0XE, ctx->r4) = ctx->r2;
    // 0x80068950: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x80068954: lhu         $v1, 0x90($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X90);
    // 0x80068958: lw          $a0, 0x98($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X98);
    // 0x8006895C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80068960: sh          $v0, 0x10($a0)
    MEM_H(0X10, ctx->r4) = ctx->r2;
    // 0x80068964: lhu         $v0, 0xA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XA);
    // 0x80068968: lhu         $v1, 0x92($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X92);
    // 0x8006896C: lw          $a0, 0x98($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X98);
    // 0x80068970: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80068974: sh          $v0, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r2;
    // 0x80068978: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x8006897C: lhu         $v1, 0x94($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X94);
    // 0x80068980: lw          $a0, 0x98($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X98);
    // 0x80068984: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80068988: sh          $v0, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r2;
    // 0x8006898C: lhu         $v0, 0xA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XA);
    // 0x80068990: lhu         $v1, 0x96($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X96);
    // 0x80068994: lw          $a0, 0x98($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X98);
    // 0x80068998: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8006899C: sh          $v0, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r2;
    // 0x800689A0: lb          $a0, 0x3D($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X3D);
    // 0x800689A4: lw          $a1, 0x98($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X98);
    // 0x800689A8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x800689AC: lw          $v0, 0x497C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X497C);
    // 0x800689B0: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x800689B4: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    // 0x800689B8: jal         0x8002FD30
    // 0x800689BC: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_8002FD30_B130(rdram, ctx);
        goto after_5;
    // 0x800689BC: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_5:
    // 0x800689C0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x800689C4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x800689C8: lui         $s1, 0x801A
    ctx->r17 = S32(0X801A << 16);
    // 0x800689CC: lw          $s1, -0x5858($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X5858);
    // 0x800689D0: addiu       $a2, $zero, 0x3C0
    ctx->r6 = ADD32(0, 0X3C0);
    // 0x800689D4: addiu       $v0, $s1, 0xC
    ctx->r2 = ADD32(ctx->r17, 0XC);
    // 0x800689D8: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x800689DC: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x800689E0: jal         0x80030284
    // 0x800689E4: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    func_80030284_B684(rdram, ctx);
        goto after_6;
    // 0x800689E4: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    after_6:
    // 0x800689E8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x800689EC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x800689F0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x800689F4: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
    // 0x800689F8: jal         0x8003055C
    // 0x800689FC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8003055C_B95C(rdram, ctx);
        goto after_7;
    // 0x800689FC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_7:
    // 0x80068A00: lb          $a0, 0x3D($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X3D);
    // 0x80068A04: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80068A08: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80068A0C: lw          $v0, 0x497C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X497C);
    // 0x80068A10: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x80068A14: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    // 0x80068A18: jal         0x8002FD30
    // 0x80068A1C: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_8002FD30_B130(rdram, ctx);
        goto after_8;
    // 0x80068A1C: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_8:
    // 0x80068A20: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x80068A24: lhu         $v1, 0x88($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X88);
    // 0x80068A28: lw          $a0, 0x9C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X9C);
    // 0x80068A2C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80068A30: sh          $v0, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r2;
    // 0x80068A34: lhu         $v0, 0xA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XA);
    // 0x80068A38: lhu         $v1, 0x8A($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X8A);
    // 0x80068A3C: lw          $a0, 0x9C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X9C);
    // 0x80068A40: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80068A44: sh          $v0, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r2;
    // 0x80068A48: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x80068A4C: lhu         $v1, 0x8C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X8C);
    // 0x80068A50: lw          $a0, 0x9C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X9C);
    // 0x80068A54: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80068A58: sh          $v0, 0xC($a0)
    MEM_H(0XC, ctx->r4) = ctx->r2;
    // 0x80068A5C: lhu         $v0, 0xA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XA);
    // 0x80068A60: lhu         $v1, 0x8E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X8E);
    // 0x80068A64: lw          $a0, 0x9C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X9C);
    // 0x80068A68: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80068A6C: sh          $v0, 0xE($a0)
    MEM_H(0XE, ctx->r4) = ctx->r2;
    // 0x80068A70: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x80068A74: lhu         $v1, 0x90($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X90);
    // 0x80068A78: lw          $a0, 0x9C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X9C);
    // 0x80068A7C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80068A80: sh          $v0, 0x10($a0)
    MEM_H(0X10, ctx->r4) = ctx->r2;
    // 0x80068A84: lhu         $v0, 0xA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XA);
    // 0x80068A88: lhu         $v1, 0x92($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X92);
    // 0x80068A8C: lw          $a0, 0x9C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X9C);
    // 0x80068A90: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80068A94: sh          $v0, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r2;
    // 0x80068A98: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x80068A9C: lhu         $v1, 0x94($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X94);
    // 0x80068AA0: lw          $a0, 0x9C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X9C);
    // 0x80068AA4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80068AA8: sh          $v0, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r2;
    // 0x80068AAC: lhu         $v0, 0xA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XA);
    // 0x80068AB0: lhu         $v1, 0x96($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X96);
    // 0x80068AB4: lw          $a0, 0x9C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X9C);
    // 0x80068AB8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80068ABC: sh          $v0, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r2;
    // 0x80068AC0: lb          $a0, 0x3D($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X3D);
    // 0x80068AC4: lw          $a1, 0x9C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X9C);
    // 0x80068AC8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80068ACC: lw          $v0, 0x497C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X497C);
    // 0x80068AD0: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x80068AD4: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    // 0x80068AD8: jal         0x8002FD30
    // 0x80068ADC: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_8002FD30_B130(rdram, ctx);
        goto after_9;
    // 0x80068ADC: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_9:
    // 0x80068AE0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80068AE4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80068AE8: lui         $s1, 0x801A
    ctx->r17 = S32(0X801A << 16);
    // 0x80068AEC: lw          $s1, -0x5858($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X5858);
    // 0x80068AF0: addiu       $a2, $zero, 0x3C0
    ctx->r6 = ADD32(0, 0X3C0);
    // 0x80068AF4: addiu       $v0, $s1, 0xC
    ctx->r2 = ADD32(ctx->r17, 0XC);
    // 0x80068AF8: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80068AFC: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x80068B00: jal         0x80030284
    // 0x80068B04: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    func_80030284_B684(rdram, ctx);
        goto after_10;
    // 0x80068B04: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    after_10:
    // 0x80068B08: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80068B0C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80068B10: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80068B14: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
    // 0x80068B18: jal         0x8003055C
    // 0x80068B1C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8003055C_B95C(rdram, ctx);
        goto after_11;
    // 0x80068B1C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_11:
    // 0x80068B20: lb          $a0, 0x3D($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X3D);
    // 0x80068B24: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80068B28: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80068B2C: lw          $v0, 0x497C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X497C);
    // 0x80068B30: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x80068B34: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    // 0x80068B38: jal         0x8002FD30
    // 0x80068B3C: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_8002FD30_B130(rdram, ctx);
        goto after_12;
    // 0x80068B3C: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_12:
    // 0x80068B40: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80068B44: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80068B48: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80068B4C: jr          $ra
    // 0x80068B50: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80068B50: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800715F8_4C9F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800715F8: blez        $a0, L_80071648
    if (SIGNED(ctx->r4) <= 0) {
        // 0x800715FC: andi        $v1, $a0, 0xFFFF
        ctx->r3 = ctx->r4 & 0XFFFF;
            goto L_80071648;
    }
    // 0x800715FC: andi        $v1, $a0, 0xFFFF
    ctx->r3 = ctx->r4 & 0XFFFF;
    // 0x80071600: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x80071604: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80071608: bne         $v0, $zero, L_8007164C
    if (ctx->r2 != 0) {
        // 0x8007160C: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8007164C;
    }
    // 0x8007160C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80071610: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80071614: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80071618: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8007161C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80071620: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80071624: lhu         $v0, 0x5086($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X5086);
    // 0x80071628: andi        $v1, $v0, 0xFFF
    ctx->r3 = ctx->r2 & 0XFFF;
    // 0x8007162C: bne         $v1, $zero, L_8007163C
    if (ctx->r3 != 0) {
        // 0x80071630: lui         $v0, 0xF
        ctx->r2 = S32(0XF << 16);
            goto L_8007163C;
    }
    // 0x80071630: lui         $v0, 0xF
    ctx->r2 = S32(0XF << 16);
    // 0x80071634: j           L_8007164C
    // 0x80071638: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8007164C;
    // 0x80071638: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8007163C:
    // 0x8007163C: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x80071640: bne         $v0, $zero, L_8007164C
    if (ctx->r2 != 0) {
        // 0x80071644: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_8007164C;
    }
    // 0x80071644: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_80071648:
    // 0x80071648: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8007164C:
    // 0x8007164C: jr          $ra
    // 0x80071650: nop

    TRACE_RETURN()
    return;
    // 0x80071650: nop

;}
RECOMP_FUNC void func_80031428_C828(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80031428: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8003142C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80031430: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80031434: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80031438: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x8003143C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80031440: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80031444: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80031448: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8003144C: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    // 0x80031450: jal         0x80032510
    // 0x80031454: addu        $s5, $a1, $zero
    ctx->r21 = ADD32(ctx->r5, 0);
    func_80032510_D910(rdram, ctx);
        goto after_0;
    // 0x80031454: addu        $s5, $a1, $zero
    ctx->r21 = ADD32(ctx->r5, 0);
    after_0:
    // 0x80031458: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    // 0x8003145C: jal         0x800324D0
    // 0x80031460: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    func_800324D0_D8D0(rdram, ctx);
        goto after_1;
    // 0x80031460: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    after_1:
    // 0x80031464: lh          $a0, 0x2($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X2);
    // 0x80031468: jal         0x80032510
    // 0x8003146C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    func_80032510_D910(rdram, ctx);
        goto after_2;
    // 0x8003146C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    after_2:
    // 0x80031470: lh          $a0, 0x2($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X2);
    // 0x80031474: jal         0x800324D0
    // 0x80031478: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    func_800324D0_D8D0(rdram, ctx);
        goto after_3;
    // 0x80031478: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    after_3:
    // 0x8003147C: lh          $a0, 0x4($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X4);
    // 0x80031480: jal         0x80032510
    // 0x80031484: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    func_80032510_D910(rdram, ctx);
        goto after_4;
    // 0x80031484: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    after_4:
    // 0x80031488: lh          $a0, 0x4($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X4);
    // 0x8003148C: jal         0x800324D0
    // 0x80031490: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_800324D0_D8D0(rdram, ctx);
        goto after_5;
    // 0x80031490: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_5:
    // 0x80031494: addu        $t1, $v0, $zero
    ctx->r9 = ADD32(ctx->r2, 0);
    // 0x80031498: mult        $s2, $t1
    result = S64(S32(ctx->r18)) * S64(S32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003149C: mflo        $t2
    ctx->r10 = lo;
    // 0x800314A0: nop

    // 0x800314A4: nop

    // 0x800314A8: mult        $s4, $s3
    result = S64(S32(ctx->r20)) * S64(S32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800314AC: mflo        $a2
    ctx->r6 = lo;
    // 0x800314B0: negu        $t0, $s2
    ctx->r8 = SUB32(0, ctx->r18);
    // 0x800314B4: nop

    // 0x800314B8: mult        $t0, $s0
    result = S64(S32(ctx->r8)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800314BC: mflo        $t0
    ctx->r8 = lo;
    // 0x800314C0: sra         $a2, $a2, 12
    ctx->r6 = S32(SIGNED(ctx->r6) >> 12);
    // 0x800314C4: nop

    // 0x800314C8: mult        $a2, $t1
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800314CC: mflo        $a2
    ctx->r6 = lo;
    // 0x800314D0: negu        $a3, $s4
    ctx->r7 = SUB32(0, ctx->r20);
    // 0x800314D4: nop

    // 0x800314D8: mult        $a3, $s3
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800314DC: mflo        $a1
    ctx->r5 = lo;
    // 0x800314E0: nop

    // 0x800314E4: nop

    // 0x800314E8: mult        $s1, $s0
    result = S64(S32(ctx->r17)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800314EC: mflo        $t4
    ctx->r12 = lo;
    // 0x800314F0: sra         $a1, $a1, 12
    ctx->r5 = S32(SIGNED(ctx->r5) >> 12);
    // 0x800314F4: nop

    // 0x800314F8: mult        $a1, $s0
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800314FC: mflo        $a1
    ctx->r5 = lo;
    // 0x80031500: nop

    // 0x80031504: nop

    // 0x80031508: mult        $s1, $t1
    result = S64(S32(ctx->r17)) * S64(S32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003150C: mflo        $t5
    ctx->r13 = lo;
    // 0x80031510: negu        $v1, $s1
    ctx->r3 = SUB32(0, ctx->r17);
    // 0x80031514: nop

    // 0x80031518: mult        $v1, $s3
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003151C: mflo        $v1
    ctx->r3 = lo;
    // 0x80031520: nop

    // 0x80031524: nop

    // 0x80031528: mult        $a3, $s2
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003152C: mflo        $a3
    ctx->r7 = lo;
    // 0x80031530: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x80031534: nop

    // 0x80031538: mult        $v1, $t1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003153C: mflo        $v1
    ctx->r3 = lo;
    // 0x80031540: nop

    // 0x80031544: nop

    // 0x80031548: mult        $s4, $s0
    result = S64(S32(ctx->r20)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003154C: mflo        $t3
    ctx->r11 = lo;
    // 0x80031550: nop

    // 0x80031554: nop

    // 0x80031558: mult        $s1, $s3
    result = S64(S32(ctx->r17)) * S64(S32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003155C: mflo        $a0
    ctx->r4 = lo;
    // 0x80031560: nop

    // 0x80031564: nop

    // 0x80031568: mult        $s1, $s2
    result = S64(S32(ctx->r17)) * S64(S32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003156C: mflo        $s1
    ctx->r17 = lo;
    // 0x80031570: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
    // 0x80031574: sra         $a0, $a0, 12
    ctx->r4 = S32(SIGNED(ctx->r4) >> 12);
    // 0x80031578: mult        $a0, $s0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003157C: mflo        $a0
    ctx->r4 = lo;
    // 0x80031580: sh          $s3, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r19;
    // 0x80031584: sra         $t2, $t2, 12
    ctx->r10 = S32(SIGNED(ctx->r10) >> 12);
    // 0x80031588: sra         $t0, $t0, 12
    ctx->r8 = S32(SIGNED(ctx->r8) >> 12);
    // 0x8003158C: sh          $t2, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r10;
    // 0x80031590: sh          $t0, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r8;
    // 0x80031594: addu        $a2, $a2, $t4
    ctx->r6 = ADD32(ctx->r6, ctx->r12);
    // 0x80031598: sra         $a2, $a2, 12
    ctx->r6 = S32(SIGNED(ctx->r6) >> 12);
    // 0x8003159C: sh          $a2, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r6;
    // 0x800315A0: sra         $a3, $a3, 12
    ctx->r7 = S32(SIGNED(ctx->r7) >> 12);
    // 0x800315A4: mult        $s4, $t1
    result = S64(S32(ctx->r20)) * S64(S32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800315A8: mflo        $s4
    ctx->r20 = lo;
    // 0x800315AC: addu        $a1, $a1, $t5
    ctx->r5 = ADD32(ctx->r5, ctx->r13);
    // 0x800315B0: sra         $a1, $a1, 12
    ctx->r5 = S32(SIGNED(ctx->r5) >> 12);
    // 0x800315B4: sh          $a3, 0xA($v0)
    MEM_H(0XA, ctx->r2) = ctx->r7;
    // 0x800315B8: sh          $a1, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r5;
    // 0x800315BC: sra         $s1, $s1, 12
    ctx->r17 = S32(SIGNED(ctx->r17) >> 12);
    // 0x800315C0: addu        $v1, $v1, $t3
    ctx->r3 = ADD32(ctx->r3, ctx->r11);
    // 0x800315C4: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x800315C8: sh          $s1, 0x10($v0)
    MEM_H(0X10, ctx->r2) = ctx->r17;
    // 0x800315CC: sh          $v1, 0xC($v0)
    MEM_H(0XC, ctx->r2) = ctx->r3;
    // 0x800315D0: addu        $a0, $a0, $s4
    ctx->r4 = ADD32(ctx->r4, ctx->r20);
    // 0x800315D4: sra         $a0, $a0, 12
    ctx->r4 = S32(SIGNED(ctx->r4) >> 12);
    // 0x800315D8: sh          $a0, 0xE($v0)
    MEM_H(0XE, ctx->r2) = ctx->r4;
    // 0x800315DC: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x800315E0: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x800315E4: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x800315E8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x800315EC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x800315F0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x800315F4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x800315F8: jr          $ra
    // 0x800315FC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x800315FC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80092178_6D578(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80092178: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x8009217C: jr          $ra
    // 0x80092180: addiu       $v0, $v0, 0x50EC
    ctx->r2 = ADD32(ctx->r2, 0X50EC);
    TRACE_RETURN()
    return;
    // 0x80092180: addiu       $v0, $v0, 0x50EC
    ctx->r2 = ADD32(ctx->r2, 0X50EC);
;}
RECOMP_FUNC void __scSchedule(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8009B39C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8009B3A0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8009B3A4: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x8009B3A8: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8009B3AC: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x8009B3B0: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x8009B3B4: addu        $s5, $a2, $zero
    ctx->r21 = ADD32(ctx->r6, 0);
    // 0x8009B3B8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8009B3BC: addu        $s2, $a3, $zero
    ctx->r18 = ADD32(ctx->r7, 0);
    // 0x8009B3C0: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x8009B3C4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8009B3C8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8009B3CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8009B3D0: lw          $v0, 0x280($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X280);
    // 0x8009B3D4: lw          $s1, 0x268($s3)
    ctx->r17 = MEM_W(ctx->r19, 0X268);
    // 0x8009B3D8: lw          $v1, 0x264($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X264);
    // 0x8009B3DC: beq         $v0, $zero, L_8009B430
    if (ctx->r2 == 0) {
        // 0x8009B3E0: addu        $s6, $s2, $zero
        ctx->r22 = ADD32(ctx->r18, 0);
            goto L_8009B430;
    }
    // 0x8009B3E0: addu        $s6, $s2, $zero
    ctx->r22 = ADD32(ctx->r18, 0);
    // 0x8009B3E4: andi        $v0, $s2, 0x2
    ctx->r2 = ctx->r18 & 0X2;
    // 0x8009B3E8: beq         $v0, $zero, L_8009B430
    if (ctx->r2 == 0) {
        // 0x8009B3EC: nop
    
            goto L_8009B430;
    }
    // 0x8009B3EC: nop

    // 0x8009B3F0: beql        $s1, $zero, L_8009B40C
    if (ctx->r17 == 0) {
        // 0x8009B3F4: sw          $v1, 0x0($s4)
        MEM_W(0X0, ctx->r20) = ctx->r3;
            goto L_8009B40C;
    }
    goto skip_0;
    // 0x8009B3F4: sw          $v1, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r3;
    skip_0:
    // 0x8009B3F8: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x8009B3FC: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8009B400: bnel        $v0, $zero, L_8009B528
    if (ctx->r2 != 0) {
        // 0x8009B404: sw          $s1, 0x0($s4)
        MEM_W(0X0, ctx->r20) = ctx->r17;
            goto L_8009B528;
    }
    goto skip_1;
    // 0x8009B404: sw          $s1, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r17;
    skip_1:
    // 0x8009B408: sw          $v1, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r3;
L_8009B40C:
    // 0x8009B40C: lw          $v0, 0x264($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X264);
    // 0x8009B410: sw          $zero, 0x280($s3)
    MEM_W(0X280, ctx->r19) = 0;
    // 0x8009B414: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x8009B418: addiu       $v0, $zero, -0x3
    ctx->r2 = ADD32(0, -0X3);
    // 0x8009B41C: and         $s2, $s2, $v0
    ctx->r18 = ctx->r18 & ctx->r2;
    // 0x8009B420: bne         $v1, $zero, L_8009B568
    if (ctx->r3 != 0) {
        // 0x8009B424: sw          $v1, 0x264($s3)
        MEM_W(0X264, ctx->r19) = ctx->r3;
            goto L_8009B568;
    }
    // 0x8009B424: sw          $v1, 0x264($s3)
    MEM_W(0X264, ctx->r19) = ctx->r3;
    // 0x8009B428: j           L_8009B568
    // 0x8009B42C: sw          $zero, 0x26C($s3)
    MEM_W(0X26C, ctx->r19) = 0;
        goto L_8009B568;
    // 0x8009B42C: sw          $zero, 0x26C($s3)
    MEM_W(0X26C, ctx->r19) = 0;
L_8009B430:
    // 0x8009B430: beql        $s1, $zero, L_8009B458
    if (ctx->r17 == 0) {
        // 0x8009B434: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8009B458;
    }
    goto skip_2;
    // 0x8009B434: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_2:
    // 0x8009B438: jal         0x8009C250
    // 0x8009B43C: nop

    osViGetCurrentFramebuffer_recomp(rdram, ctx);
        goto after_0;
    // 0x8009B43C: nop

    after_0:
    // 0x8009B440: jal         0x8009C290
    // 0x8009B444: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    osViGetNextFramebuffer_recomp(rdram, ctx);
        goto after_1;
    // 0x8009B444: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_1:
    // 0x8009B448: xor         $s0, $s0, $v0
    ctx->r16 = ctx->r16 ^ ctx->r2;
    // 0x8009B44C: sltiu       $s0, $s0, 0x1
    ctx->r16 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x8009B450: negu        $s0, $s0
    ctx->r16 = SUB32(0, ctx->r16);
    // 0x8009B454: and         $v0, $s1, $s0
    ctx->r2 = ctx->r17 & ctx->r16;
L_8009B458:
    // 0x8009B458: beq         $v0, $zero, L_8009B568
    if (ctx->r2 == 0) {
        // 0x8009B45C: nop
    
            goto L_8009B568;
    }
    // 0x8009B45C: nop

    // 0x8009B460: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x8009B464: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8009B468: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x8009B46C: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x8009B470: beq         $v0, $zero, L_8009B568
    if (ctx->r2 == 0) {
        // 0x8009B474: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8009B568;
    }
    // 0x8009B474: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8009B478: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8009B47C: addu        $at, $at, $v0
    gpr jr_addend_8009B484 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8009B480: lw          $v0, 0x3250($at)
    ctx->r2 = ADD32(ctx->r1, 0X3250);
    // 0x8009B484: jr          $v0
    // 0x8009B488: nop

    switch (jr_addend_8009B484 >> 2) {
        case 0: goto L_8009B568; break;
        case 1: goto L_8009B50C; break;
        case 2: goto L_8009B48C; break;
        case 3: goto L_8009B568; break;
        case 4: goto L_8009B568; break;
        case 5: goto L_8009B50C; break;
        case 6: goto L_8009B50C; break;
        default: switch_error(__func__, 0x8009B484, 0x800D3250);
    }
    // 0x8009B488: nop

L_8009B48C:
    // 0x8009B48C: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x8009B490: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x8009B494: beq         $v0, $zero, L_8009B4DC
    if (ctx->r2 == 0) {
        // 0x8009B498: andi        $v0, $s2, 0x2
        ctx->r2 = ctx->r18 & 0X2;
            goto L_8009B4DC;
    }
    // 0x8009B498: andi        $v0, $s2, 0x2
    ctx->r2 = ctx->r18 & 0X2;
    // 0x8009B49C: beq         $v0, $zero, L_8009B568
    if (ctx->r2 == 0) {
        // 0x8009B4A0: addiu       $v1, $zero, -0x3
        ctx->r3 = ADD32(0, -0X3);
            goto L_8009B568;
    }
    // 0x8009B4A0: addiu       $v1, $zero, -0x3
    ctx->r3 = ADD32(0, -0X3);
    // 0x8009B4A4: sw          $s1, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r17;
    // 0x8009B4A8: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x8009B4AC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8009B4B0: beq         $v0, $zero, L_8009B4C4
    if (ctx->r2 == 0) {
        // 0x8009B4B4: and         $s2, $s2, $v1
        ctx->r18 = ctx->r18 & ctx->r3;
            goto L_8009B4C4;
    }
    // 0x8009B4B4: and         $s2, $s2, $v1
    ctx->r18 = ctx->r18 & ctx->r3;
    // 0x8009B4B8: sw          $s1, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r17;
    // 0x8009B4BC: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    // 0x8009B4C0: and         $s2, $s2, $v0
    ctx->r18 = ctx->r18 & ctx->r2;
L_8009B4C4:
    // 0x8009B4C4: lw          $v0, 0x268($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X268);
    // 0x8009B4C8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8009B4CC: bne         $v0, $zero, L_8009B568
    if (ctx->r2 != 0) {
        // 0x8009B4D0: sw          $v0, 0x268($s3)
        MEM_W(0X268, ctx->r19) = ctx->r2;
            goto L_8009B568;
    }
    // 0x8009B4D0: sw          $v0, 0x268($s3)
    MEM_W(0X268, ctx->r19) = ctx->r2;
    // 0x8009B4D4: j           L_8009B568
    // 0x8009B4D8: sw          $zero, 0x270($s3)
    MEM_W(0X270, ctx->r19) = 0;
        goto L_8009B568;
    // 0x8009B4D8: sw          $zero, 0x270($s3)
    MEM_W(0X270, ctx->r19) = 0;
L_8009B4DC:
    // 0x8009B4DC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8009B4E0: bne         $s2, $v0, L_8009B568
    if (ctx->r18 != ctx->r2) {
        // 0x8009B4E4: nop
    
            goto L_8009B568;
    }
    // 0x8009B4E4: nop

    // 0x8009B4E8: sw          $s1, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r17;
    // 0x8009B4EC: sw          $s1, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r17;
    // 0x8009B4F0: lw          $v0, 0x268($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X268);
    // 0x8009B4F4: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8009B4F8: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8009B4FC: bne         $v0, $zero, L_8009B568
    if (ctx->r2 != 0) {
        // 0x8009B500: sw          $v0, 0x268($s3)
        MEM_W(0X268, ctx->r19) = ctx->r2;
            goto L_8009B568;
    }
    // 0x8009B500: sw          $v0, 0x268($s3)
    MEM_W(0X268, ctx->r19) = ctx->r2;
    // 0x8009B504: j           L_8009B568
    // 0x8009B508: sw          $zero, 0x270($s3)
    MEM_W(0X270, ctx->r19) = 0;
        goto L_8009B568;
    // 0x8009B508: sw          $zero, 0x270($s3)
    MEM_W(0X270, ctx->r19) = 0;
L_8009B50C:
    // 0x8009B50C: lw          $v1, 0x4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4);
    // 0x8009B510: andi        $v0, $v1, 0x2
    ctx->r2 = ctx->r3 & 0X2;
    // 0x8009B514: beq         $v0, $zero, L_8009B534
    if (ctx->r2 == 0) {
        // 0x8009B518: andi        $v0, $s2, 0x2
        ctx->r2 = ctx->r18 & 0X2;
            goto L_8009B534;
    }
    // 0x8009B518: andi        $v0, $s2, 0x2
    ctx->r2 = ctx->r18 & 0X2;
    // 0x8009B51C: beq         $v0, $zero, L_8009B568
    if (ctx->r2 == 0) {
        // 0x8009B520: nop
    
            goto L_8009B568;
    }
    // 0x8009B520: nop

    // 0x8009B524: sw          $s1, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r17;
L_8009B528:
    // 0x8009B528: addiu       $v0, $zero, -0x3
    ctx->r2 = ADD32(0, -0X3);
    // 0x8009B52C: j           L_8009B568
    // 0x8009B530: and         $s2, $s2, $v0
    ctx->r18 = ctx->r18 & ctx->r2;
        goto L_8009B568;
    // 0x8009B530: and         $s2, $s2, $v0
    ctx->r18 = ctx->r18 & ctx->r2;
L_8009B534:
    // 0x8009B534: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x8009B538: beq         $v0, $zero, L_8009B568
    if (ctx->r2 == 0) {
        // 0x8009B53C: andi        $v0, $s2, 0x1
        ctx->r2 = ctx->r18 & 0X1;
            goto L_8009B568;
    }
    // 0x8009B53C: andi        $v0, $s2, 0x1
    ctx->r2 = ctx->r18 & 0X1;
    // 0x8009B540: beq         $v0, $zero, L_8009B568
    if (ctx->r2 == 0) {
        // 0x8009B544: nop
    
            goto L_8009B568;
    }
    // 0x8009B544: nop

    // 0x8009B548: sw          $s1, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r17;
    // 0x8009B54C: lw          $v0, 0x268($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X268);
    // 0x8009B550: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x8009B554: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    // 0x8009B558: and         $s2, $s2, $v0
    ctx->r18 = ctx->r18 & ctx->r2;
    // 0x8009B55C: bne         $v1, $zero, L_8009B568
    if (ctx->r3 != 0) {
        // 0x8009B560: sw          $v1, 0x268($s3)
        MEM_W(0X268, ctx->r19) = ctx->r3;
            goto L_8009B568;
    }
    // 0x8009B560: sw          $v1, 0x268($s3)
    MEM_W(0X268, ctx->r19) = ctx->r3;
    // 0x8009B564: sw          $zero, 0x270($s3)
    MEM_W(0X270, ctx->r19) = 0;
L_8009B568:
    // 0x8009B568: beq         $s2, $s6, L_8009B584
    if (ctx->r18 == ctx->r22) {
        // 0x8009B56C: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_8009B584;
    }
    // 0x8009B56C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8009B570: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x8009B574: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    // 0x8009B578: jal         0x8009B39C
    // 0x8009B57C: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    __scSchedule(rdram, ctx);
        goto after_2;
    // 0x8009B57C: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    after_2:
    // 0x8009B580: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
L_8009B584:
    // 0x8009B584: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x8009B588: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8009B58C: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x8009B590: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x8009B594: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8009B598: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8009B59C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8009B5A0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8009B5A4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8009B5A8: jr          $ra
    // 0x8009B5AC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8009B5AC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8004B5B0_269B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004B5B0: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x8004B5B4: addiu       $a0, $a0, 0x53E0
    ctx->r4 = ADD32(ctx->r4, 0X53E0);
    // 0x8004B5B8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8004B5BC: addiu       $v1, $a0, 0x8
    ctx->r3 = ADD32(ctx->r4, 0X8);
L_8004B5C0:
    // 0x8004B5C0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8004B5C4: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x8004B5C8: sw          $zero, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = 0;
    // 0x8004B5CC: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x8004B5D0: addiu       $v1, $v1, 0xC
    ctx->r3 = ADD32(ctx->r3, 0XC);
    // 0x8004B5D4: slti        $v0, $a1, 0x4
    ctx->r2 = SIGNED(ctx->r5) < 0X4 ? 1 : 0;
    // 0x8004B5D8: bne         $v0, $zero, L_8004B5C0
    if (ctx->r2 != 0) {
        // 0x8004B5DC: addiu       $a0, $a0, 0xC
        ctx->r4 = ADD32(ctx->r4, 0XC);
            goto L_8004B5C0;
    }
    // 0x8004B5DC: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    // 0x8004B5E0: jr          $ra
    // 0x8004B5E4: nop

    TRACE_RETURN()
    return;
    // 0x8004B5E4: nop

;}
RECOMP_FUNC void func_80062280_3D680(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80062280: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80062284: lw          $a1, 0x6C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X6C);
    // 0x80062288: lui         $v1, 0x1000
    ctx->r3 = S32(0X1000 << 16);
    // 0x8006228C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80062290: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x80062294: lbu         $v1, 0x1($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X1);
    // 0x80062298: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8006229C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800622A0: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x800622A4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800622A8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800622AC: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x800622B0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x800622B4: lw          $v1, -0x7790($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7790);
    // 0x800622B8: bgez        $v1, L_800622D0
    if (SIGNED(ctx->r3) >= 0) {
        // 0x800622BC: addiu       $v0, $a1, 0x2
        ctx->r2 = ADD32(ctx->r5, 0X2);
            goto L_800622D0;
    }
    // 0x800622BC: addiu       $v0, $a1, 0x2
    ctx->r2 = ADD32(ctx->r5, 0X2);
    // 0x800622C0: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x800622C4: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x800622C8: beq         $v0, $zero, L_800622DC
    if (ctx->r2 == 0) {
        // 0x800622CC: addiu       $v0, $a1, 0x2
        ctx->r2 = ADD32(ctx->r5, 0X2);
            goto L_800622DC;
    }
    // 0x800622CC: addiu       $v0, $a1, 0x2
    ctx->r2 = ADD32(ctx->r5, 0X2);
L_800622D0:
    // 0x800622D0: sw          $v0, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r2;
    // 0x800622D4: j           L_800622E0
    // 0x800622D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800622E0;
    // 0x800622D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800622DC:
    // 0x800622DC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_800622E0:
    // 0x800622E0: jr          $ra
    // 0x800622E4: nop

    TRACE_RETURN()
    return;
    // 0x800622E4: nop

;}
RECOMP_FUNC void func_800778D0_52CD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800778D0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800778D4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x800778D8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x800778DC: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x800778E0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800778E4: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x800778E8: andi        $v1, $v0, 0xF
    ctx->r3 = ctx->r2 & 0XF;
    // 0x800778EC: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x800778F0: beq         $v0, $zero, L_80077910
    if (ctx->r2 == 0) {
        // 0x800778F4: addiu       $a0, $s1, 0x44
        ctx->r4 = ADD32(ctx->r17, 0X44);
            goto L_80077910;
    }
    // 0x800778F4: addiu       $a0, $s1, 0x44
    ctx->r4 = ADD32(ctx->r17, 0X44);
    // 0x800778F8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x800778FC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80077900: addu        $at, $at, $v0
    gpr jr_addend_80077908 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80077904: lw          $v0, 0x2C08($at)
    ctx->r2 = ADD32(ctx->r1, 0X2C08);
    // 0x80077908: jr          $v0
    // 0x8007790C: nop

    switch (jr_addend_80077908 >> 2) {
        case 0: goto L_80077910; break;
        case 1: goto L_80077A08; break;
        case 2: goto L_80077ACC; break;
        case 3: goto L_80077910; break;
        case 4: goto L_80077B7C; break;
        case 5: goto L_80077C08; break;
        case 6: goto L_80077C90; break;
        default: switch_error(__func__, 0x80077908, 0x800D2C08);
    }
    // 0x8007790C: nop

L_80077910:
    // 0x80077910: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x80077914: lhu         $v1, 0x2($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X2);
    // 0x80077918: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8007791C: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x80077920: lhu         $v1, 0x3E($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X3E);
    // 0x80077924: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80077928: sh          $v1, 0x3E($s1)
    MEM_H(0X3E, ctx->r17) = ctx->r3;
    // 0x8007792C: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x80077930: bgtz        $v0, L_800779E4
    if (SIGNED(ctx->r2) > 0) {
        // 0x80077934: addiu       $a1, $zero, 0x80
        ctx->r5 = ADD32(0, 0X80);
            goto L_800779E4;
    }
    // 0x80077934: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x80077938: lb          $v0, 0xD($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XD);
    // 0x8007793C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80077940: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x80077944: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80077948: lh          $a1, -0x33D0($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X33D0);
    // 0x8007794C: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x80077950: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80077954: slt         $v0, $v0, $a1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80077958: bne         $v0, $zero, L_80077AF4
    if (ctx->r2 != 0) {
        // 0x8007795C: nop
    
            goto L_80077AF4;
    }
    // 0x8007795C: nop

    // 0x80077960: sh          $zero, 0x2($a0)
    MEM_H(0X2, ctx->r4) = 0;
    // 0x80077964: lb          $v0, 0xD($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XD);
    // 0x80077968: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8007796C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80077970: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80077974: lhu         $v0, -0x33CE($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X33CE);
    // 0x80077978: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x8007797C: lb          $v0, 0xD($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XD);
    // 0x80077980: lh          $v1, 0x3E($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X3E);
    // 0x80077984: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80077988: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x8007798C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80077990: lh          $v0, -0x33CC($at)
    ctx->r2 = MEM_H(ctx->r1, -0X33CC);
    // 0x80077994: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80077998: bnel        $v0, $zero, L_800779E4
    if (ctx->r2 != 0) {
        // 0x8007799C: addiu       $a1, $zero, 0x80
        ctx->r5 = ADD32(0, 0X80);
            goto L_800779E4;
    }
    goto skip_0;
    // 0x8007799C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    skip_0:
    // 0x800779A0: subu        $v0, $v1, $a1
    ctx->r2 = SUB32(ctx->r3, ctx->r5);
    // 0x800779A4: sll         $v0, $v0, 7
    ctx->r2 = S32(ctx->r2 << 7);
    // 0x800779A8: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x800779AC: bne         $v1, $zero, L_800779B8
    if (ctx->r3 != 0) {
        // 0x800779B0: nop
    
            goto L_800779B8;
    }
    // 0x800779B0: nop

    // 0x800779B4: break       7
    do_break(2147973556);
L_800779B8:
    // 0x800779B8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800779BC: bne         $v1, $at, L_800779D0
    if (ctx->r3 != ctx->r1) {
        // 0x800779C0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800779D0;
    }
    // 0x800779C0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800779C4: bne         $v0, $at, L_800779D0
    if (ctx->r2 != ctx->r1) {
        // 0x800779C8: nop
    
            goto L_800779D0;
    }
    // 0x800779C8: nop

    // 0x800779CC: break       6
    do_break(2147973580);
L_800779D0:
    // 0x800779D0: mflo        $a1
    ctx->r5 = lo;
    // 0x800779D4: nop

    // 0x800779D8: nop

    // 0x800779DC: j           L_800779E8
    // 0x800779E0: nor         $v0, $zero, $a1
    ctx->r2 = ~(0 | ctx->r5);
        goto L_800779E8;
    // 0x800779E0: nor         $v0, $zero, $a1
    ctx->r2 = ~(0 | ctx->r5);
L_800779E4:
    // 0x800779E4: nor         $v0, $zero, $a1
    ctx->r2 = ~(0 | ctx->r5);
L_800779E8:
    // 0x800779E8: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x800779EC: and         $a1, $a1, $v0
    ctx->r5 = ctx->r5 & ctx->r2;
    // 0x800779F0: sll         $v0, $a1, 8
    ctx->r2 = S32(ctx->r5 << 8);
    // 0x800779F4: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x800779F8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x800779FC: or          $v0, $a1, $v0
    ctx->r2 = ctx->r5 | ctx->r2;
    // 0x80077A00: j           L_80077C84
    // 0x80077A04: sll         $v1, $a1, 16
    ctx->r3 = S32(ctx->r5 << 16);
        goto L_80077C84;
    // 0x80077A04: sll         $v1, $a1, 16
    ctx->r3 = S32(ctx->r5 << 16);
L_80077A08:
    // 0x80077A08: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x80077A0C: lhu         $v1, 0x2($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X2);
    // 0x80077A10: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80077A14: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x80077A18: lhu         $v1, 0x3E($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X3E);
    // 0x80077A1C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80077A20: sh          $v1, 0x3E($s1)
    MEM_H(0X3E, ctx->r17) = ctx->r3;
    // 0x80077A24: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80077A28: sra         $a2, $v1, 16
    ctx->r6 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80077A2C: blez        $a2, L_80077AF4
    if (SIGNED(ctx->r6) <= 0) {
        // 0x80077A30: nop
    
            goto L_80077AF4;
    }
    // 0x80077A30: nop

    // 0x80077A34: lb          $v0, 0xD($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XD);
    // 0x80077A38: lh          $v1, 0x0($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X0);
    // 0x80077A3C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80077A40: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x80077A44: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80077A48: lh          $a1, -0x33B0($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X33B0);
    // 0x80077A4C: bgtzl       $v1, L_80077A9C
    if (SIGNED(ctx->r3) > 0) {
        // 0x80077A50: addiu       $a1, $zero, 0x80
        ctx->r5 = ADD32(0, 0X80);
            goto L_80077A9C;
    }
    goto skip_1;
    // 0x80077A50: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    skip_1:
    // 0x80077A54: slt         $v0, $a1, $a2
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80077A58: bnel        $v0, $zero, L_80077A9C
    if (ctx->r2 != 0) {
        // 0x80077A5C: addiu       $a1, $zero, 0x80
        ctx->r5 = ADD32(0, 0X80);
            goto L_80077A9C;
    }
    goto skip_2;
    // 0x80077A5C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    skip_2:
    // 0x80077A60: subu        $v0, $a1, $a2
    ctx->r2 = SUB32(ctx->r5, ctx->r6);
    // 0x80077A64: sll         $v0, $v0, 7
    ctx->r2 = S32(ctx->r2 << 7);
    // 0x80077A68: div         $zero, $v0, $a1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r5)));
    // 0x80077A6C: bne         $a1, $zero, L_80077A78
    if (ctx->r5 != 0) {
        // 0x80077A70: nop
    
            goto L_80077A78;
    }
    // 0x80077A70: nop

    // 0x80077A74: break       7
    do_break(2147973748);
L_80077A78:
    // 0x80077A78: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80077A7C: bne         $a1, $at, L_80077A90
    if (ctx->r5 != ctx->r1) {
        // 0x80077A80: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80077A90;
    }
    // 0x80077A80: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80077A84: bne         $v0, $at, L_80077A90
    if (ctx->r2 != ctx->r1) {
        // 0x80077A88: nop
    
            goto L_80077A90;
    }
    // 0x80077A88: nop

    // 0x80077A8C: break       6
    do_break(2147973772);
L_80077A90:
    // 0x80077A90: mflo        $v0
    ctx->r2 = lo;
    // 0x80077A94: addiu       $v1, $zero, 0x60
    ctx->r3 = ADD32(0, 0X60);
    // 0x80077A98: subu        $a1, $v1, $v0
    ctx->r5 = SUB32(ctx->r3, ctx->r2);
L_80077A9C:
    // 0x80077A9C: slti        $v0, $a1, 0x100
    ctx->r2 = SIGNED(ctx->r5) < 0X100 ? 1 : 0;
    // 0x80077AA0: beql        $v0, $zero, L_80077AA8
    if (ctx->r2 == 0) {
        // 0x80077AA4: addiu       $a1, $zero, 0xFF
        ctx->r5 = ADD32(0, 0XFF);
            goto L_80077AA8;
    }
    goto skip_3;
    // 0x80077AA4: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    skip_3:
L_80077AA8:
    // 0x80077AA8: nor         $v0, $zero, $a1
    ctx->r2 = ~(0 | ctx->r5);
    // 0x80077AAC: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x80077AB0: and         $a1, $a1, $v0
    ctx->r5 = ctx->r5 & ctx->r2;
    // 0x80077AB4: sll         $v0, $a1, 8
    ctx->r2 = S32(ctx->r5 << 8);
    // 0x80077AB8: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x80077ABC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80077AC0: or          $v0, $a1, $v0
    ctx->r2 = ctx->r5 | ctx->r2;
    // 0x80077AC4: j           L_80077C84
    // 0x80077AC8: sll         $v1, $a1, 16
    ctx->r3 = S32(ctx->r5 << 16);
        goto L_80077C84;
    // 0x80077AC8: sll         $v1, $a1, 16
    ctx->r3 = S32(ctx->r5 << 16);
L_80077ACC:
    // 0x80077ACC: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x80077AD0: lhu         $v1, 0x2($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X2);
    // 0x80077AD4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80077AD8: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x80077ADC: lhu         $v1, 0x3E($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X3E);
    // 0x80077AE0: addu        $a1, $v1, $v0
    ctx->r5 = ADD32(ctx->r3, ctx->r2);
    // 0x80077AE4: sh          $a1, 0x3E($s1)
    MEM_H(0X3E, ctx->r17) = ctx->r5;
    // 0x80077AE8: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x80077AEC: bgtz        $v0, L_80077B08
    if (SIGNED(ctx->r2) > 0) {
        // 0x80077AF0: nop
    
            goto L_80077B08;
    }
    // 0x80077AF0: nop

L_80077AF4:
    // 0x80077AF4: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x80077AF8: sh          $zero, 0x3E($s1)
    MEM_H(0X3E, ctx->r17) = 0;
    // 0x80077AFC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80077B00: j           L_80077D50
    // 0x80077B04: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
        goto L_80077D50;
    // 0x80077B04: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_80077B08:
    // 0x80077B08: lb          $v0, 0xD($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XD);
    // 0x80077B0C: sll         $a0, $v0, 3
    ctx->r4 = S32(ctx->r2 << 3);
    // 0x80077B10: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80077B14: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80077B18: lh          $v1, -0x3390($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X3390);
    // 0x80077B1C: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x80077B20: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80077B24: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80077B28: beql        $v1, $zero, L_80077B64
    if (ctx->r3 == 0) {
        // 0x80077B2C: addiu       $a1, $zero, 0x80
        ctx->r5 = ADD32(0, 0X80);
            goto L_80077B64;
    }
    goto skip_4;
    // 0x80077B2C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    skip_4:
    // 0x80077B30: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80077B34: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80077B38: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80077B3C: lbu         $v1, -0x338D($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X338D);
    // 0x80077B40: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80077B44: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x80077B48: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x80077B4C: sltiu       $v0, $v1, 0x81
    ctx->r2 = ctx->r3 < 0X81 ? 1 : 0;
    // 0x80077B50: beq         $v0, $zero, L_80077B60
    if (ctx->r2 == 0) {
        // 0x80077B54: addiu       $v0, $zero, 0x80
        ctx->r2 = ADD32(0, 0X80);
            goto L_80077B60;
    }
    // 0x80077B54: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80077B58: j           L_80077B64
    // 0x80077B5C: subu        $a1, $v0, $v1
    ctx->r5 = SUB32(ctx->r2, ctx->r3);
        goto L_80077B64;
    // 0x80077B5C: subu        $a1, $v0, $v1
    ctx->r5 = SUB32(ctx->r2, ctx->r3);
L_80077B60:
    // 0x80077B60: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_80077B64:
    // 0x80077B64: sll         $v0, $a1, 8
    ctx->r2 = S32(ctx->r5 << 8);
    // 0x80077B68: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x80077B6C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80077B70: or          $v0, $a1, $v0
    ctx->r2 = ctx->r5 | ctx->r2;
    // 0x80077B74: j           L_80077C84
    // 0x80077B78: sll         $v1, $a1, 16
    ctx->r3 = S32(ctx->r5 << 16);
        goto L_80077C84;
    // 0x80077B78: sll         $v1, $a1, 16
    ctx->r3 = S32(ctx->r5 << 16);
L_80077B7C:
    // 0x80077B7C: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x80077B80: lhu         $v1, 0x2($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X2);
    // 0x80077B84: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80077B88: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x80077B8C: lhu         $v1, 0x3E($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X3E);
    // 0x80077B90: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80077B94: sh          $v1, 0x3E($s1)
    MEM_H(0X3E, ctx->r17) = ctx->r3;
    // 0x80077B98: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x80077B9C: bgtz        $v0, L_80077BF0
    if (SIGNED(ctx->r2) > 0) {
        // 0x80077BA0: addiu       $a1, $zero, 0x80
        ctx->r5 = ADD32(0, 0X80);
            goto L_80077BF0;
    }
    // 0x80077BA0: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x80077BA4: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x80077BA8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80077BAC: slti        $v0, $v0, 0x64
    ctx->r2 = SIGNED(ctx->r2) < 0X64 ? 1 : 0;
    // 0x80077BB0: beq         $v0, $zero, L_80077BCC
    if (ctx->r2 == 0) {
        // 0x80077BB4: addiu       $v0, $zero, -0x14
        ctx->r2 = ADD32(0, -0X14);
            goto L_80077BCC;
    }
    // 0x80077BB4: addiu       $v0, $zero, -0x14
    ctx->r2 = ADD32(0, -0X14);
    // 0x80077BB8: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x80077BBC: sh          $zero, 0x3E($s1)
    MEM_H(0X3E, ctx->r17) = 0;
    // 0x80077BC0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80077BC4: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x80077BC8: addiu       $v0, $zero, -0x14
    ctx->r2 = ADD32(0, -0X14);
L_80077BCC:
    // 0x80077BCC: sh          $zero, 0x2($a0)
    MEM_H(0X2, ctx->r4) = 0;
    // 0x80077BD0: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x80077BD4: lhu         $v0, 0x3E($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3E);
    // 0x80077BD8: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x80077BDC: sra         $v0, $v1, 16
    ctx->r2 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80077BE0: slti        $v0, $v0, 0x401
    ctx->r2 = SIGNED(ctx->r2) < 0X401 ? 1 : 0;
    // 0x80077BE4: bne         $v0, $zero, L_80077BF0
    if (ctx->r2 != 0) {
        // 0x80077BE8: sra         $a1, $v1, 19
        ctx->r5 = S32(SIGNED(ctx->r3) >> 19);
            goto L_80077BF0;
    }
    // 0x80077BE8: sra         $a1, $v1, 19
    ctx->r5 = S32(SIGNED(ctx->r3) >> 19);
    // 0x80077BEC: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
L_80077BF0:
    // 0x80077BF0: sll         $v0, $a1, 8
    ctx->r2 = S32(ctx->r5 << 8);
    // 0x80077BF4: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x80077BF8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80077BFC: or          $v0, $a1, $v0
    ctx->r2 = ctx->r5 | ctx->r2;
    // 0x80077C00: j           L_80077C84
    // 0x80077C04: sll         $v1, $a1, 16
    ctx->r3 = S32(ctx->r5 << 16);
        goto L_80077C84;
    // 0x80077C04: sll         $v1, $a1, 16
    ctx->r3 = S32(ctx->r5 << 16);
L_80077C08:
    // 0x80077C08: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    // 0x80077C0C: lhu         $v0, 0x2($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X2);
    // 0x80077C10: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80077C14: sh          $v1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r3;
    // 0x80077C18: lhu         $v0, 0x3E($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3E);
    // 0x80077C1C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80077C20: sh          $v0, 0x3E($s1)
    MEM_H(0X3E, ctx->r17) = ctx->r2;
    // 0x80077C24: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x80077C28: slti        $v0, $v0, 0x82
    ctx->r2 = SIGNED(ctx->r2) < 0X82 ? 1 : 0;
    // 0x80077C2C: beq         $v0, $zero, L_80077C40
    if (ctx->r2 == 0) {
        // 0x80077C30: nop
    
            goto L_80077C40;
    }
    // 0x80077C30: nop

    // 0x80077C34: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80077C38: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80077C3C: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_80077C40:
    // 0x80077C40: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80077C44: sltiu       $v0, $v0, 0x8
    ctx->r2 = ctx->r2 < 0X8 ? 1 : 0;
    // 0x80077C48: bne         $v0, $zero, L_80077C60
    if (ctx->r2 != 0) {
        // 0x80077C4C: addiu       $v1, $zero, 0x8
        ctx->r3 = ADD32(0, 0X8);
            goto L_80077C60;
    }
    // 0x80077C4C: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x80077C50: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x80077C54: sb          $v1, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r3;
    // 0x80077C58: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80077C5C: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_80077C60:
    // 0x80077C60: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80077C64: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x80077C68: lui         $a0, 0x200
    ctx->r4 = S32(0X200 << 16);
    // 0x80077C6C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80077C70: sll         $a1, $v1, 4
    ctx->r5 = S32(ctx->r3 << 4);
    // 0x80077C74: sll         $v0, $v1, 12
    ctx->r2 = S32(ctx->r3 << 12);
    // 0x80077C78: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x80077C7C: or          $v0, $a1, $v0
    ctx->r2 = ctx->r5 | ctx->r2;
    // 0x80077C80: sll         $v1, $v1, 20
    ctx->r3 = S32(ctx->r3 << 20);
L_80077C84:
    // 0x80077C84: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80077C88: j           L_80077D18
    // 0x80077C8C: sw          $v0, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r2;
        goto L_80077D18;
    // 0x80077C8C: sw          $v0, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r2;
L_80077C90:
    // 0x80077C90: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x80077C94: lhu         $v1, 0x2($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X2);
    // 0x80077C98: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80077C9C: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x80077CA0: lhu         $v1, 0x3E($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X3E);
    // 0x80077CA4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80077CA8: sh          $v1, 0x3E($s1)
    MEM_H(0X3E, ctx->r17) = ctx->r3;
    // 0x80077CAC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80077CB0: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80077CB4: slti        $v1, $v1, 0x801
    ctx->r3 = SIGNED(ctx->r3) < 0X801 ? 1 : 0;
    // 0x80077CB8: bne         $v1, $zero, L_80077CE8
    if (ctx->r3 != 0) {
        // 0x80077CBC: addiu       $a1, $zero, 0x80
        ctx->r5 = ADD32(0, 0X80);
            goto L_80077CE8;
    }
    // 0x80077CBC: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x80077CC0: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80077CC4: addiu       $v0, $v0, 0xA
    ctx->r2 = ADD32(ctx->r2, 0XA);
    // 0x80077CC8: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x80077CCC: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x80077CD0: sltiu       $v0, $v1, 0x81
    ctx->r2 = ctx->r3 < 0X81 ? 1 : 0;
    // 0x80077CD4: beq         $v0, $zero, L_80077CE4
    if (ctx->r2 == 0) {
        // 0x80077CD8: addiu       $v0, $zero, 0x80
        ctx->r2 = ADD32(0, 0X80);
            goto L_80077CE4;
    }
    // 0x80077CD8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80077CDC: j           L_80077CE8
    // 0x80077CE0: subu        $a1, $v0, $v1
    ctx->r5 = SUB32(ctx->r2, ctx->r3);
        goto L_80077CE8;
    // 0x80077CE0: subu        $a1, $v0, $v1
    ctx->r5 = SUB32(ctx->r2, ctx->r3);
L_80077CE4:
    // 0x80077CE4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_80077CE8:
    // 0x80077CE8: sll         $v0, $a1, 8
    ctx->r2 = S32(ctx->r5 << 8);
    // 0x80077CEC: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x80077CF0: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80077CF4: or          $v0, $a1, $v0
    ctx->r2 = ctx->r5 | ctx->r2;
    // 0x80077CF8: sll         $v1, $a1, 16
    ctx->r3 = S32(ctx->r5 << 16);
    // 0x80077CFC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80077D00: bne         $a1, $zero, L_80077D18
    if (ctx->r5 != 0) {
        // 0x80077D04: sw          $v0, 0x40($s1)
        MEM_W(0X40, ctx->r17) = ctx->r2;
            goto L_80077D18;
    }
    // 0x80077D04: sw          $v0, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r2;
    // 0x80077D08: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x80077D0C: sh          $zero, 0x3E($s1)
    MEM_H(0X3E, ctx->r17) = 0;
    // 0x80077D10: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80077D14: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_80077D18:
    // 0x80077D18: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x80077D1C: jal         0x8002C654
    // 0x80077D20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_0;
    // 0x80077D20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80077D24: lbu         $v1, 0xB($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XB);
    // 0x80077D28: lhu         $v0, 0x3E($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3E);
    // 0x80077D2C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80077D30: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80077D34: andi        $a0, $v1, 0xFF
    ctx->r4 = ctx->r3 & 0XFF;
    // 0x80077D38: sll         $a0, $a0, 7
    ctx->r4 = S32(ctx->r4 << 7);
    // 0x80077D3C: sh          $v0, 0x28($s1)
    MEM_H(0X28, ctx->r17) = ctx->r2;
    // 0x80077D40: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    // 0x80077D44: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    // 0x80077D48: jal         0x800319B4
    // 0x80077D4C: sb          $v1, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r3;
    func_800319B4_CDB4(rdram, ctx);
        goto after_1;
    // 0x80077D4C: sb          $v1, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r3;
    after_1:
L_80077D50:
    // 0x80077D50: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80077D54: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80077D58: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80077D5C: jr          $ra
    // 0x80077D60: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80077D60: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80061E64_3D264(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80061E64: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x80061E68: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x80061E6C: jr          $ra
    // 0x80061E70: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80061E70: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_80034518_F918(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80034518: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8003451C: lbu         $v0, 0x4350($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4350);
    // 0x80034520: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80034524: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80034528: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8003452C: addiu       $s1, $s1, 0x4348
    ctx->r17 = ADD32(ctx->r17, 0X4348);
    // 0x80034530: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80034534: beq         $v0, $zero, L_80034600
    if (ctx->r2 == 0) {
        // 0x80034538: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_80034600;
    }
    // 0x80034538: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8003453C: addiu       $a0, $s1, 0x68
    ctx->r4 = ADD32(ctx->r17, 0X68);
    // 0x80034540: addiu       $s0, $s1, 0x48
    ctx->r16 = ADD32(ctx->r17, 0X48);
    // 0x80034544: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80034548: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8003454C: lbu         $v1, 0x4352($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4352);
    // 0x80034550: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80034554: lw          $a3, 0x4354($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X4354);
    // 0x80034558: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x8003455C: lw          $t0, 0x435C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X435C);
    // 0x80034560: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80034564: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80034568: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003456C: sb          $v0, 0x4352($at)
    MEM_B(0X4352, ctx->r1) = ctx->r2;
    // 0x80034570: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034574: sw          $a3, 0x436C($at)
    MEM_W(0X436C, ctx->r1) = ctx->r7;
    // 0x80034578: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003457C: sw          $t0, 0x4374($at)
    MEM_W(0X4374, ctx->r1) = ctx->r8;
    // 0x80034580: jal         0x8009A3B4
    // 0x80034584: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80034584: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_0:
    // 0x80034588: addiu       $a0, $s1, 0x88
    ctx->r4 = ADD32(ctx->r17, 0X88);
    // 0x8003458C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80034590: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80034594: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034598: sw          $v0, 0x4384($at)
    MEM_W(0X4384, ctx->r1) = ctx->r2;
    // 0x8003459C: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x800345A0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800345A4: sw          $v0, 0x438C($at)
    MEM_W(0X438C, ctx->r1) = ctx->r2;
    // 0x800345A8: jal         0x8009A3B4
    // 0x800345AC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x800345AC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x800345B0: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x800345B4: lh          $v1, 0x49C6($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X49C6);
    // 0x800345B8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x800345BC: lw          $a0, 0x4358($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4358);
    // 0x800345C0: addiu       $v0, $zero, 0x96
    ctx->r2 = ADD32(0, 0X96);
    // 0x800345C4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800345C8: sw          $v0, 0x43A4($at)
    MEM_W(0X43A4, ctx->r1) = ctx->r2;
    // 0x800345CC: addiu       $v0, $zero, -0x8
    ctx->r2 = ADD32(0, -0X8);
    // 0x800345D0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800345D4: sb          $zero, 0x4350($at)
    MEM_B(0X4350, ctx->r1) = 0;
    // 0x800345D8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800345DC: sb          $v0, 0x4351($at)
    MEM_B(0X4351, ctx->r1) = ctx->r2;
    // 0x800345E0: addiu       $v1, $v1, -0x96
    ctx->r3 = ADD32(ctx->r3, -0X96);
    // 0x800345E4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800345E8: sw          $v1, 0x43D4($at)
    MEM_W(0X43D4, ctx->r1) = ctx->r3;
    // 0x800345EC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800345F0: sw          $a0, 0x4388($at)
    MEM_W(0X4388, ctx->r1) = ctx->r4;
    // 0x800345F4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800345F8: j           L_80034620
    // 0x800345FC: sw          $a0, 0x4370($at)
    MEM_W(0X4370, ctx->r1) = ctx->r4;
        goto L_80034620;
    // 0x800345FC: sw          $a0, 0x4370($at)
    MEM_W(0X4370, ctx->r1) = ctx->r4;
L_80034600:
    // 0x80034600: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80034604: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034608: sw          $v0, 0x435C($at)
    MEM_W(0X435C, ctx->r1) = ctx->r2;
    // 0x8003460C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80034610: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034614: sw          $v0, 0x4354($at)
    MEM_W(0X4354, ctx->r1) = ctx->r2;
    // 0x80034618: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003461C: sb          $zero, 0x4352($at)
    MEM_B(0X4352, ctx->r1) = 0;
L_80034620:
    // 0x80034620: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80034624: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80034628: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8003462C: jr          $ra
    // 0x80034630: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80034630: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void __udivdi3_recomp(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
L_800A36A8:
    // 0x800A39E0: bne         $a2, $zero, L_800A39F0
    if (ctx->r6 != 0) {
        // 0x800A39E4: nop
    
            goto L_800A39F0;
    }
L_800A37A4:
    // 0x800A39E4: nop

    // 0x800A39E8: j           L_800A37A4
    // 0x800A39EC: nop

    func_800A37A4_7EBA4(rdram, ctx);
    TRACE_RETURN()
    return;
    // 0x800A39EC: nop

L_800A39F0:
    // 0x800A39F0: j           L_800A36A8
    // 0x800A39F4: nop

    func_800A36A8_7EAA8(rdram, ctx);
    TRACE_RETURN()
    return;
    // 0x800A39F4: nop

    // 0x800A39F8: nop

    // 0x800A39FC: nop

;}
RECOMP_FUNC void func_800549B4_2FDB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800549B4: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x800549B8: lui         $a2, 0x4216
    ctx->r6 = S32(0X4216 << 16);
    // 0x800549BC: lui         $a3, 0x3FAA
    ctx->r7 = S32(0X3FAA << 16);
    // 0x800549C0: ori         $a3, $a3, 0xAAAB
    ctx->r7 = ctx->r7 | 0XAAAB;
    // 0x800549C4: lui         $at, 0x4337
    ctx->r1 = S32(0X4337 << 16);
    // 0x800549C8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800549CC: lui         $at, 0x4600
    ctx->r1 = S32(0X4600 << 16);
    // 0x800549D0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x800549D4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800549D8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800549DC: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x800549E0: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x800549E4: sw          $ra, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r31;
    // 0x800549E8: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    // 0x800549EC: swc1        $f2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f2.u32l;
    // 0x800549F0: jal         0x8002C238
    // 0x800549F4: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    func_8002C238_7638(rdram, ctx);
        goto after_0;
    // 0x800549F4: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x800549F8: lhu         $a2, 0x60($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X60);
    // 0x800549FC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80054A00: jal         0x80028600
    // 0x80054A04: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    func_80028600_3A00(rdram, ctx);
        goto after_1;
    // 0x80054A04: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x80054A08: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80054A0C: addiu       $a1, $zero, 0x3E4
    ctx->r5 = ADD32(0, 0X3E4);
    // 0x80054A10: addiu       $a2, $zero, 0x3E8
    ctx->r6 = ADD32(0, 0X3E8);
    // 0x80054A14: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80054A18: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80054A1C: jal         0x80028888
    // 0x80054A20: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_80028888_3C88(rdram, ctx);
        goto after_2;
    // 0x80054A20: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_2:
    // 0x80054A24: lw          $ra, 0x68($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X68);
    // 0x80054A28: jr          $ra
    // 0x80054A2C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    TRACE_RETURN()
    return;
    // 0x80054A2C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_8004EC38_2A038(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004EC38: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004EC3C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8004EC40: lh          $v0, 0x4($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X4);
    // 0x8004EC44: lh          $a2, 0x4($a0)
    ctx->r6 = MEM_H(ctx->r4, 0X4);
    // 0x8004EC48: lh          $v1, 0x0($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X0);
    // 0x8004EC4C: lh          $a0, 0x0($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X0);
    // 0x8004EC50: subu        $v0, $v0, $a2
    ctx->r2 = SUB32(ctx->r2, ctx->r6);
    // 0x8004EC54: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8004EC58: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x8004EC5C: blez        $v0, L_8004ECA0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8004EC60: sll         $v1, $v1, 16
        ctx->r3 = S32(ctx->r3 << 16);
            goto L_8004ECA0;
    }
    // 0x8004EC60: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8004EC64: div         $zero, $v1, $v0
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r2)));
    // 0x8004EC68: bne         $v0, $zero, L_8004EC74
    if (ctx->r2 != 0) {
        // 0x8004EC6C: nop
    
            goto L_8004EC74;
    }
    // 0x8004EC6C: nop

    // 0x8004EC70: break       7
    do_break(2147806320);
L_8004EC74:
    // 0x8004EC74: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8004EC78: bne         $v0, $at, L_8004EC8C
    if (ctx->r2 != ctx->r1) {
        // 0x8004EC7C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8004EC8C;
    }
    // 0x8004EC7C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8004EC80: bne         $v1, $at, L_8004EC8C
    if (ctx->r3 != ctx->r1) {
        // 0x8004EC84: nop
    
            goto L_8004EC8C;
    }
    // 0x8004EC84: nop

    // 0x8004EC88: break       6
    do_break(2147806344);
L_8004EC8C:
    // 0x8004EC8C: mflo        $a0
    ctx->r4 = lo;
    // 0x8004EC90: jal         0x80032554
    // 0x8004EC94: nop

    func_80032554_D954(rdram, ctx);
        goto after_0;
    // 0x8004EC94: nop

    after_0:
    // 0x8004EC98: j           L_8004ECFC
    // 0x8004EC9C: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
        goto L_8004ECFC;
    // 0x8004EC9C: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
L_8004ECA0:
    // 0x8004ECA0: bgezl       $v0, L_8004ECF0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8004ECA4: nor         $v0, $zero, $v1
        ctx->r2 = ~(0 | ctx->r3);
            goto L_8004ECF0;
    }
    goto skip_0;
    // 0x8004ECA4: nor         $v0, $zero, $v1
    ctx->r2 = ~(0 | ctx->r3);
    skip_0:
    // 0x8004ECA8: negu        $a0, $v1
    ctx->r4 = SUB32(0, ctx->r3);
    // 0x8004ECAC: div         $zero, $a0, $v0
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r2)));
    // 0x8004ECB0: bne         $v0, $zero, L_8004ECBC
    if (ctx->r2 != 0) {
        // 0x8004ECB4: nop
    
            goto L_8004ECBC;
    }
    // 0x8004ECB4: nop

    // 0x8004ECB8: break       7
    do_break(2147806392);
L_8004ECBC:
    // 0x8004ECBC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8004ECC0: bne         $v0, $at, L_8004ECD4
    if (ctx->r2 != ctx->r1) {
        // 0x8004ECC4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8004ECD4;
    }
    // 0x8004ECC4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8004ECC8: bne         $a0, $at, L_8004ECD4
    if (ctx->r4 != ctx->r1) {
        // 0x8004ECCC: nop
    
            goto L_8004ECD4;
    }
    // 0x8004ECCC: nop

    // 0x8004ECD0: break       6
    do_break(2147806416);
L_8004ECD4:
    // 0x8004ECD4: mflo        $a0
    ctx->r4 = lo;
    // 0x8004ECD8: jal         0x80032554
    // 0x8004ECDC: nop

    func_80032554_D954(rdram, ctx);
        goto after_1;
    // 0x8004ECDC: nop

    after_1:
    // 0x8004ECE0: addiu       $v1, $zero, 0x1000
    ctx->r3 = ADD32(0, 0X1000);
    // 0x8004ECE4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8004ECE8: j           L_8004ECFC
    // 0x8004ECEC: andi        $v0, $v1, 0xFFF
    ctx->r2 = ctx->r3 & 0XFFF;
        goto L_8004ECFC;
    // 0x8004ECEC: andi        $v0, $v1, 0xFFF
    ctx->r2 = ctx->r3 & 0XFFF;
L_8004ECF0:
    // 0x8004ECF0: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x8004ECF4: andi        $v0, $v0, 0xC00
    ctx->r2 = ctx->r2 & 0XC00;
    // 0x8004ECF8: ori         $v0, $v0, 0x400
    ctx->r2 = ctx->r2 | 0X400;
L_8004ECFC:
    // 0x8004ECFC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8004ED00: jr          $ra
    // 0x8004ED04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8004ED04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8006F824_4AC24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006F824: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006F828: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8006F82C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006F830: jal         0x8006E594
    // 0x8006F834: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8006E594_49994(rdram, ctx);
        goto after_0;
    // 0x8006F834: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8006F838: bne         $v0, $zero, L_8006F8C0
    if (ctx->r2 != 0) {
        // 0x8006F83C: nop
    
            goto L_8006F8C0;
    }
    // 0x8006F83C: nop

    // 0x8006F840: lb          $v0, 0x74($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X74);
    // 0x8006F844: bne         $v0, $zero, L_8006F8A8
    if (ctx->r2 != 0) {
        // 0x8006F848: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8006F8A8;
    }
    // 0x8006F848: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006F84C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8006F850: bne         $v1, $v0, L_8006F8A8
    if (ctx->r3 != ctx->r2) {
        // 0x8006F854: nop
    
            goto L_8006F8A8;
    }
    // 0x8006F854: nop

    // 0x8006F858: lhu         $a0, 0x128($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X128);
    // 0x8006F85C: lhu         $a1, 0x12A($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X12A);
    // 0x8006F860: lhu         $v1, 0x11C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X11C);
    // 0x8006F864: or          $v0, $a0, $a1
    ctx->r2 = ctx->r4 | ctx->r5;
    // 0x8006F868: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8006F86C: bne         $v1, $a0, L_8006F884
    if (ctx->r3 != ctx->r4) {
        // 0x8006F870: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_8006F884;
    }
    // 0x8006F870: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8006F874: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8006F878: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8006F87C: j           L_8006F8A0
    // 0x8006F880: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_8006F8A0;
    // 0x8006F880: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8006F884:
    // 0x8006F884: bne         $v1, $a1, L_8006F8A0
    if (ctx->r3 != ctx->r5) {
        // 0x8006F888: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_8006F8A0;
    }
    // 0x8006F888: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x8006F88C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8006F890: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8006F894: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8006F898: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006F89C: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
L_8006F8A0:
    // 0x8006F8A0: bne         $v1, $zero, L_8006F8C0
    if (ctx->r3 != 0) {
        // 0x8006F8A4: nop
    
            goto L_8006F8C0;
    }
    // 0x8006F8A4: nop

L_8006F8A8:
    // 0x8006F8A8: lb          $v1, 0x112($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X112);
    // 0x8006F8AC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8006F8B0: beq         $v1, $v0, L_8006F8C0
    if (ctx->r3 == ctx->r2) {
        // 0x8006F8B4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8006F8C0;
    }
    // 0x8006F8B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006F8B8: jal         0x8006CC14
    // 0x8006F8BC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8006CC14_48014(rdram, ctx);
        goto after_1;
    // 0x8006F8BC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
L_8006F8C0:
    // 0x8006F8C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006F8C4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8006F8C8: jr          $ra
    // 0x8006F8CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8006F8CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80028DE0_41E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80028DE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80028DE4: lui         $t0, 0xFF
    ctx->r8 = S32(0XFF << 16);
    // 0x80028DE8: ori         $t0, $t0, 0xFFFF
    ctx->r8 = ctx->r8 | 0XFFFF;
    // 0x80028DEC: lui         $a3, 0xFFF
    ctx->r7 = S32(0XFFF << 16);
    // 0x80028DF0: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x80028DF4: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x80028DF8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80028DFC: lw          $v1, 0x4($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X4);
    // 0x80028E00: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x80028E04: ori         $a3, $a3, 0xFFFF
    ctx->r7 = ctx->r7 | 0XFFFF;
    // 0x80028E08: and         $a1, $v1, $a3
    ctx->r5 = ctx->r3 & ctx->r7;
    // 0x80028E0C: and         $v0, $v0, $t0
    ctx->r2 = ctx->r2 & ctx->r8;
    // 0x80028E10: bgez        $v1, L_80028E24
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80028E14: addu        $a0, $a2, $v0
        ctx->r4 = ADD32(ctx->r6, ctx->r2);
            goto L_80028E24;
    }
    // 0x80028E14: addu        $a0, $a2, $v0
    ctx->r4 = ADD32(ctx->r6, ctx->r2);
    // 0x80028E18: jal         0x80027490
    // 0x80028E1C: nop

    func_80027490_2890(rdram, ctx);
        goto after_0;
    // 0x80028E1C: nop

    after_0:
    // 0x80028E20: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
L_80028E24:
    // 0x80028E24: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80028E28: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    // 0x80028E2C: jr          $ra
    // 0x80028E30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80028E30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80028E34: nop

    // 0x80028E38: nop

    // 0x80028E3C: nop

;}
RECOMP_FUNC void func_80034A7C_FE7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80034A7C: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80034A80: lw          $a0, -0x7218($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7218);
    // 0x80034A84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80034A88: beq         $a0, $zero, L_80034B28
    if (ctx->r4 == 0) {
        // 0x80034A8C: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_80034B28;
    }
    // 0x80034A8C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80034A90: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80034A94: lw          $v0, -0x721C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X721C);
    // 0x80034A98: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80034A9C: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x80034AA0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80034AA4: lw          $v1, 0x2898($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2898);
    // 0x80034AA8: addiu       $v0, $a0, -0x1
    ctx->r2 = ADD32(ctx->r4, -0X1);
    // 0x80034AAC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80034AB0: sw          $v0, -0x7218($at)
    MEM_W(-0X7218, ctx->r1) = ctx->r2;
    // 0x80034AB4: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x80034AB8: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x80034ABC: beq         $v0, $zero, L_80034B28
    if (ctx->r2 == 0) {
        // 0x80034AC0: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80034B28;
    }
    // 0x80034AC0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80034AC4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80034AC8: addu        $at, $at, $v0
    gpr jr_addend_80034AD0 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80034ACC: lw          $v0, 0x1D70($at)
    ctx->r2 = ADD32(ctx->r1, 0X1D70);
    // 0x80034AD0: jr          $v0
    // 0x80034AD4: nop

    switch (jr_addend_80034AD0 >> 2) {
        case 0: goto L_80034B28; break;
        case 1: goto L_80034AD8; break;
        case 2: goto L_80034B1C; break;
        case 3: goto L_80034AE4; break;
        case 4: goto L_80034B04; break;
        case 5: goto L_80034B28; break;
        case 6: goto L_80034B28; break;
        default: switch_error(__func__, 0x80034AD0, 0x800D1D70);
    }
    // 0x80034AD4: nop

L_80034AD8:
    // 0x80034AD8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034ADC: j           L_80034B28
    // 0x80034AE0: sb          $zero, 0x434D($at)
    MEM_B(0X434D, ctx->r1) = 0;
        goto L_80034B28;
    // 0x80034AE0: sb          $zero, 0x434D($at)
    MEM_B(0X434D, ctx->r1) = 0;
L_80034AE4:
    // 0x80034AE4: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x80034AE8: addiu       $a0, $a0, 0x2738
    ctx->r4 = ADD32(ctx->r4, 0X2738);
    // 0x80034AEC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80034AF0: addiu       $a1, $a1, 0x4348
    ctx->r5 = ADD32(ctx->r5, 0X4348);
    // 0x80034AF4: jal         0x8009A3B4
    // 0x80034AF8: addiu       $a2, $zero, 0xE4
    ctx->r6 = ADD32(0, 0XE4);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80034AF8: addiu       $a2, $zero, 0xE4
    ctx->r6 = ADD32(0, 0XE4);
    after_0:
    // 0x80034AFC: j           L_80034B20
    // 0x80034B00: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_80034B20;
    // 0x80034B00: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_80034B04:
    // 0x80034B04: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80034B08: addiu       $a0, $a0, 0x4348
    ctx->r4 = ADD32(ctx->r4, 0X4348);
    // 0x80034B0C: lui         $a1, 0x8016
    ctx->r5 = S32(0X8016 << 16);
    // 0x80034B10: addiu       $a1, $a1, 0x2738
    ctx->r5 = ADD32(ctx->r5, 0X2738);
    // 0x80034B14: jal         0x8009A3B4
    // 0x80034B18: addiu       $a2, $zero, 0xE4
    ctx->r6 = ADD32(0, 0XE4);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80034B18: addiu       $a2, $zero, 0xE4
    ctx->r6 = ADD32(0, 0XE4);
    after_1:
L_80034B1C:
    // 0x80034B1C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80034B20:
    // 0x80034B20: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034B24: sb          $v0, 0x434D($at)
    MEM_B(0X434D, ctx->r1) = ctx->r2;
L_80034B28:
    // 0x80034B28: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80034B2C: jr          $ra
    // 0x80034B30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80034B30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80034CA0_100A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80034CA0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80034CA4: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x80034CA8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80034CAC: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x80034CB0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80034CB4: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x80034CB8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80034CBC: addu        $s2, $a3, $zero
    ctx->r18 = ADD32(ctx->r7, 0);
    // 0x80034CC0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80034CC4: addiu       $a0, $a0, 0x43A0
    ctx->r4 = ADD32(ctx->r4, 0X43A0);
    // 0x80034CC8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80034CCC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80034CD0: jal         0x8009A3B4
    // 0x80034CD4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80034CD4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_0:
    // 0x80034CD8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034CDC: sw          $s0, 0x4360($at)
    MEM_W(0X4360, ctx->r1) = ctx->r16;
    // 0x80034CE0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034CE4: sw          $s1, 0x4364($at)
    MEM_W(0X4364, ctx->r1) = ctx->r17;
    // 0x80034CE8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034CEC: sw          $s2, 0x4368($at)
    MEM_W(0X4368, ctx->r1) = ctx->r18;
    // 0x80034CF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80034CF4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80034CF8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80034CFC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80034D00: jr          $ra
    // 0x80034D04: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80034D04: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
