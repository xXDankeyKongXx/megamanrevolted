#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_802384B8_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802384B8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802384BC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802384C0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802384C4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802384C8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x802384CC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x802384D0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802384D4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802384D8: lbu         $a0, 0xC($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XC);
    // 0x802384DC: jal         0x80053ED8
    // 0x802384E0: addiu       $s4, $s1, 0x28
    ctx->r20 = ADD32(ctx->r17, 0X28);
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_0;
    // 0x802384E0: addiu       $s4, $s1, 0x28
    ctx->r20 = ADD32(ctx->r17, 0X28);
    after_0:
    // 0x802384E4: lb          $v1, 0xD($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XD);
    // 0x802384E8: bne         $v1, $zero, L_802384FC
    if (ctx->r3 != 0) {
        // 0x802384EC: addu        $s3, $v0, $zero
        ctx->r19 = ADD32(ctx->r2, 0);
            goto L_802384FC;
    }
    // 0x802384EC: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x802384F0: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x802384F4: j           L_8023850C
    // 0x802384F8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
        goto L_8023850C;
    // 0x802384F8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
L_802384FC:
    // 0x802384FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80238500: bne         $v1, $v0, L_80238524
    if (ctx->r3 != ctx->r2) {
        // 0x80238504: nop
    
            goto L_80238524;
    }
    // 0x80238504: nop

    // 0x80238508: lh          $v0, 0x44($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X44);
L_8023850C:
    // 0x8023850C: bne         $v0, $zero, L_80238524
    if (ctx->r2 != 0) {
        // 0x80238510: nop
    
            goto L_80238524;
    }
    // 0x80238510: nop

    // 0x80238514: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x80238518: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023851C: j           L_80238664
    // 0x80238520: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
        goto L_80238664;
    // 0x80238520: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_80238524:
    // 0x80238524: lb          $v0, 0xF($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XF);
    // 0x80238528: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023852C: slti        $v0, $v0, 0x40
    ctx->r2 = SIGNED(ctx->r2) < 0X40 ? 1 : 0;
    // 0x80238530: beq         $v0, $zero, L_8023853C
    if (ctx->r2 == 0) {
        // 0x80238534: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8023853C;
    }
    // 0x80238534: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80238538: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
L_8023853C:
    // 0x8023853C: lhu         $v0, 0x14($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X14);
    // 0x80238540: sh          $v0, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r2;
    // 0x80238544: lhu         $v0, 0x16($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X16);
    // 0x80238548: sh          $v0, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r2;
    // 0x8023854C: lhu         $v1, 0x18($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X18);
    // 0x80238550: lb          $v0, 0xD($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XD);
    // 0x80238554: sh          $v1, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r3;
    // 0x80238558: lh          $a0, 0x56($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X56);
    // 0x8023855C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80238560: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x80238564: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x80238568: lw          $s0, -0x1590($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X1590);
    // 0x8023856C: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    // 0x80238570: jal         0x800324B4
    // 0x80238574: andi        $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 & 0XFFF;
    func_800324B4_D8B4(rdram, ctx);
        goto after_1;
    // 0x80238574: andi        $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 & 0XFFF;
    after_1:
    // 0x80238578: nop

    // 0x8023857C: mult        $v0, $s0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80238580: mflo        $v0
    ctx->r2 = lo;
    // 0x80238584: lhu         $v1, 0x1C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1C);
    // 0x80238588: srl         $v0, $v0, 12
    ctx->r2 = S32(U32(ctx->r2) >> 12);
    // 0x8023858C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80238590: sh          $v1, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r3;
    // 0x80238594: lh          $a0, 0x56($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X56);
    // 0x80238598: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    // 0x8023859C: jal         0x80032498
    // 0x802385A0: andi        $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 & 0XFFF;
    func_80032498_D898(rdram, ctx);
        goto after_2;
    // 0x802385A0: andi        $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 & 0XFFF;
    after_2:
    // 0x802385A4: nop

    // 0x802385A8: mult        $v0, $s0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802385AC: mflo        $v0
    ctx->r2 = lo;
    // 0x802385B0: lb          $a0, 0xD($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XD);
    // 0x802385B4: lhu         $v1, 0x20($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X20);
    // 0x802385B8: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x802385BC: srl         $v0, $v0, 12
    ctx->r2 = S32(U32(ctx->r2) >> 12);
    // 0x802385C0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802385C4: sh          $v1, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r3;
    // 0x802385C8: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802385CC: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x802385D0: lw          $v1, -0x1580($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X1580);
    // 0x802385D4: lhu         $v0, 0x1E($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1E);
    // 0x802385D8: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x802385DC: addu        $s0, $s4, $zero
    ctx->r16 = ADD32(ctx->r20, 0);
    // 0x802385E0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x802385E4: sh          $v0, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r2;
L_802385E8:
    // 0x802385E8: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x802385EC: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x802385F0: beq         $v0, $zero, L_80238634
    if (ctx->r2 == 0) {
        // 0x802385F4: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80238634;
    }
    // 0x802385F4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802385F8: lhu         $a1, 0x56($s3)
    ctx->r5 = MEM_HU(ctx->r19, 0X56);
    // 0x802385FC: lb          $a2, 0x1($s0)
    ctx->r6 = MEM_B(ctx->r16, 0X1);
    // 0x80238600: addiu       $a1, $a1, 0x800
    ctx->r5 = ADD32(ctx->r5, 0X800);
    // 0x80238604: jal         0x802386A0
    // 0x80238608: andi        $a1, $a1, 0xFFF
    ctx->r5 = ctx->r5 & 0XFFF;
    func_802386A0_ovl3(rdram, ctx);
        goto after_3;
    // 0x80238608: andi        $a1, $a1, 0xFFF
    ctx->r5 = ctx->r5 & 0XFFF;
    after_3:
    // 0x8023860C: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x80238610: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80238614: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
    // 0x80238618: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8023861C: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80238620: slti        $v0, $v0, 0x19
    ctx->r2 = SIGNED(ctx->r2) < 0X19 ? 1 : 0;
    // 0x80238624: beql        $v0, $zero, L_80238654
    if (ctx->r2 == 0) {
        // 0x80238628: sb          $zero, 0x1($s0)
        MEM_B(0X1, ctx->r16) = 0;
            goto L_80238654;
    }
    goto skip_0;
    // 0x80238628: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
    skip_0:
    // 0x8023862C: j           L_80238658
    // 0x80238630: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
        goto L_80238658;
    // 0x80238630: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_80238634:
    // 0x80238634: lbu         $v0, 0xF($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XF);
    // 0x80238638: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8023863C: sra         $v0, $v0, 26
    ctx->r2 = S32(SIGNED(ctx->r2) >> 26);
    // 0x80238640: sltu        $v0, $s2, $v0
    ctx->r2 = ctx->r18 < ctx->r2 ? 1 : 0;
    // 0x80238644: beql        $v0, $zero, L_80238658
    if (ctx->r2 == 0) {
        // 0x80238648: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_80238658;
    }
    goto skip_1;
    // 0x80238648: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_1:
    // 0x8023864C: ori         $v0, $v1, 0x1
    ctx->r2 = ctx->r3 | 0X1;
    // 0x80238650: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_80238654:
    // 0x80238654: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_80238658:
    // 0x80238658: sltiu       $v0, $s2, 0x6
    ctx->r2 = ctx->r18 < 0X6 ? 1 : 0;
    // 0x8023865C: bne         $v0, $zero, L_802385E8
    if (ctx->r2 != 0) {
        // 0x80238660: addiu       $s0, $s0, 0x2
        ctx->r16 = ADD32(ctx->r16, 0X2);
            goto L_802385E8;
    }
    // 0x80238660: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_80238664:
    // 0x80238664: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80238668: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8023866C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80238670: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80238674: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80238678: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023867C: jr          $ra
    // 0x80238680: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80238680: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022DC18_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DC18: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x8022DC1C: addiu       $v0, $zero, 0x39
    ctx->r2 = ADD32(0, 0X39);
    // 0x8022DC20: beq         $a0, $v0, L_8022DC44
    if (ctx->r4 == ctx->r2) {
        // 0x8022DC24: slti        $v0, $a0, 0x39
        ctx->r2 = SIGNED(ctx->r4) < 0X39 ? 1 : 0;
            goto L_8022DC44;
    }
    // 0x8022DC24: slti        $v0, $a0, 0x39
    ctx->r2 = SIGNED(ctx->r4) < 0X39 ? 1 : 0;
    // 0x8022DC28: bne         $v0, $zero, L_8022DC50
    if (ctx->r2 != 0) {
        // 0x8022DC2C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022DC50;
    }
    // 0x8022DC2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022DC30: slti        $v0, $a0, 0x4E
    ctx->r2 = SIGNED(ctx->r4) < 0X4E ? 1 : 0;
    // 0x8022DC34: beq         $v0, $zero, L_8022DC4C
    if (ctx->r2 == 0) {
        // 0x8022DC38: slti        $v0, $a0, 0x4C
        ctx->r2 = SIGNED(ctx->r4) < 0X4C ? 1 : 0;
            goto L_8022DC4C;
    }
    // 0x8022DC38: slti        $v0, $a0, 0x4C
    ctx->r2 = SIGNED(ctx->r4) < 0X4C ? 1 : 0;
    // 0x8022DC3C: bne         $v0, $zero, L_8022DC50
    if (ctx->r2 != 0) {
        // 0x8022DC40: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022DC50;
    }
    // 0x8022DC40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022DC44:
    // 0x8022DC44: j           L_8022DC50
    // 0x8022DC48: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8022DC50;
    // 0x8022DC48: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022DC4C:
    // 0x8022DC4C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022DC50:
    // 0x8022DC50: jr          $ra
    // 0x8022DC54: nop

    TRACE_RETURN()
    return;
    // 0x8022DC54: nop

;}
RECOMP_FUNC void func_80233748_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233748: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023374C: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x80233750: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80233754: lw          $a0, 0xD0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0XD0);
    // 0x80233758: sltiu       $v0, $a0, 0x4
    ctx->r2 = ctx->r4 < 0X4 ? 1 : 0;
    // 0x8023375C: beq         $v0, $zero, L_802337A8
    if (ctx->r2 == 0) {
        // 0x80233760: sll         $v0, $a0, 4
        ctx->r2 = S32(ctx->r4 << 4);
            goto L_802337A8;
    }
    // 0x80233760: sll         $v0, $a0, 4
    ctx->r2 = S32(ctx->r4 << 4);
    // 0x80233764: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80233768: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x8023376C: sll         $v1, $a0, 3
    ctx->r3 = S32(ctx->r4 << 3);
    // 0x80233770: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x80233774: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80233778: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x8023377C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80233780: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x80233784: sll         $a0, $a1, 16
    ctx->r4 = S32(ctx->r5 << 16);
    // 0x80233788: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8023378C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80233790: lui         $v1, 0x2E00
    ctx->r3 = S32(0X2E00 << 16);
    // 0x80233794: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80233798: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x8023379C: or          $a0, $a0, $a1
    ctx->r4 = ctx->r4 | ctx->r5;
    // 0x802337A0: j           L_802337BC
    // 0x802337A4: sw          $a0, 0x8C($a2)
    MEM_W(0X8C, ctx->r6) = ctx->r4;
        goto L_802337BC;
    // 0x802337A4: sw          $a0, 0x8C($a2)
    MEM_W(0X8C, ctx->r6) = ctx->r4;
L_802337A8:
    // 0x802337A8: lbu         $v0, 0x0($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X0);
    // 0x802337AC: lui         $v1, 0x2E00
    ctx->r3 = S32(0X2E00 << 16);
    // 0x802337B0: sw          $v1, 0x8C($a2)
    MEM_W(0X8C, ctx->r6) = ctx->r3;
    // 0x802337B4: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x802337B8: sb          $v0, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r2;
L_802337BC:
    // 0x802337BC: lw          $v0, 0xD0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0XD0);
    // 0x802337C0: lbu         $v1, 0xB($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0XB);
    // 0x802337C4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802337C8: bne         $v1, $zero, L_802337E0
    if (ctx->r3 != 0) {
        // 0x802337CC: sw          $v0, 0xD0($a2)
        MEM_W(0XD0, ctx->r6) = ctx->r2;
            goto L_802337E0;
    }
    // 0x802337CC: sw          $v0, 0xD0($a2)
    MEM_W(0XD0, ctx->r6) = ctx->r2;
    // 0x802337D0: jal         0x8004F4F8
    // 0x802337D4: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_0;
    // 0x802337D4: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    after_0:
    // 0x802337D8: j           L_802337E8
    // 0x802337DC: nop

        goto L_802337E8;
    // 0x802337DC: nop

L_802337E0:
    // 0x802337E0: jal         0x80233C40
    // 0x802337E4: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    func_80233C40_ovl3(rdram, ctx);
        goto after_1;
    // 0x802337E4: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    after_1:
L_802337E8:
    // 0x802337E8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802337EC: jr          $ra
    // 0x802337F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802337F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80238EEC_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238EEC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80238EF0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80238EF4: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80238EF8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80238EFC: sll         $s0, $a1, 16
    ctx->r16 = S32(ctx->r5 << 16);
    // 0x80238F00: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    // 0x80238F04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238F08: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80238F0C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80238F10: jal         0x800324B4
    // 0x80238F14: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    func_800324B4_D8B4(rdram, ctx);
        goto after_0;
    // 0x80238F14: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    after_0:
    // 0x80238F18: sll         $v1, $v0, 4
    ctx->r3 = S32(ctx->r2 << 4);
    // 0x80238F1C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80238F20: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80238F24: sll         $s1, $s1, 24
    ctx->r17 = S32(ctx->r17 << 24);
    // 0x80238F28: sra         $s1, $s1, 24
    ctx->r17 = S32(SIGNED(ctx->r17) >> 24);
    // 0x80238F2C: mult        $v1, $s1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80238F30: mflo        $v1
    ctx->r3 = lo;
    // 0x80238F34: lhu         $v0, 0x1C($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X1C);
    // 0x80238F38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80238F3C: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x80238F40: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80238F44: jal         0x80032498
    // 0x80238F48: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    func_80032498_D898(rdram, ctx);
        goto after_1;
    // 0x80238F48: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    after_1:
    // 0x80238F4C: sll         $v1, $v0, 4
    ctx->r3 = S32(ctx->r2 << 4);
    // 0x80238F50: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80238F54: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80238F58: mult        $v1, $s1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80238F5C: mflo        $v1
    ctx->r3 = lo;
    // 0x80238F60: lhu         $v0, 0x20($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X20);
    // 0x80238F64: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x80238F68: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80238F6C: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x80238F70: lhu         $v0, 0x1E($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X1E);
    // 0x80238F74: sll         $s1, $s1, 2
    ctx->r17 = S32(ctx->r17 << 2);
    // 0x80238F78: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80238F7C: jal         0x8003B878
    // 0x80238F80: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    func_8003B878_16C78(rdram, ctx);
        goto after_2;
    // 0x80238F80: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    after_2:
    // 0x80238F84: lui         $a1, 0x2EF0
    ctx->r5 = S32(0X2EF0 << 16);
    // 0x80238F88: ori         $a1, $a1, 0xA0A0
    ctx->r5 = ctx->r5 | 0XA0A0;
    // 0x80238F8C: lui         $a0, 0x3D48
    ctx->r4 = S32(0X3D48 << 16);
    // 0x80238F90: ori         $a0, $a0, 0x4080
    ctx->r4 = ctx->r4 | 0X4080;
    // 0x80238F94: lui         $v1, 0xE
    ctx->r3 = S32(0XE << 16);
    // 0x80238F98: ori         $v1, $v1, 0x409F
    ctx->r3 = ctx->r3 | 0X409F;
    // 0x80238F9C: sw          $v1, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r3;
    // 0x80238FA0: addiu       $v1, $zero, 0x5F80
    ctx->r3 = ADD32(0, 0X5F80);
    // 0x80238FA4: sw          $v1, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r3;
    // 0x80238FA8: addiu       $v1, $zero, 0x5F9F
    ctx->r3 = ADD32(0, 0X5F9F);
    // 0x80238FAC: sw          $a1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r5;
    // 0x80238FB0: sw          $a0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r4;
    // 0x80238FB4: sw          $v1, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r3;
    // 0x80238FB8: lw          $a0, 0x10($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X10);
    // 0x80238FBC: lw          $a1, 0x14($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X14);
    // 0x80238FC0: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
    // 0x80238FC4: subu        $v1, $v1, $s1
    ctx->r3 = SUB32(ctx->r3, ctx->r17);
    // 0x80238FC8: sw          $v1, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r3;
    // 0x80238FCC: sw          $zero, 0x20($v0)
    MEM_W(0X20, ctx->r2) = 0;
    // 0x80238FD0: sw          $a0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r4;
    // 0x80238FD4: sw          $a1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r5;
    // 0x80238FD8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80238FDC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80238FE0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80238FE4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80238FE8: jr          $ra
    // 0x80238FEC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80238FEC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802261C4_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802261C4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802261C8: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x802261CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802261D0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802261D4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802261D8: bne         $v0, $zero, L_80226300
    if (ctx->r2 != 0) {
        // 0x802261DC: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80226300;
    }
    // 0x802261DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802261E0: lbu         $v1, 0x5($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X5);
    // 0x802261E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802261E8: beq         $v1, $v0, L_80226238
    if (ctx->r3 == ctx->r2) {
        // 0x802261EC: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80226238;
    }
    // 0x802261EC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802261F0: beql        $v0, $zero, L_80226208
    if (ctx->r2 == 0) {
        // 0x802261F4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80226208;
    }
    goto skip_0;
    // 0x802261F4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802261F8: beq         $v1, $zero, L_80226218
    if (ctx->r3 == 0) {
        // 0x802261FC: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80226218;
    }
    // 0x802261FC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80226200: j           L_80226300
    // 0x80226204: nop

        goto L_80226300;
    // 0x80226204: nop

L_80226208:
    // 0x80226208: beq         $v1, $v0, L_8022626C
    if (ctx->r3 == ctx->r2) {
        // 0x8022620C: addiu       $v1, $zero, 0x2
        ctx->r3 = ADD32(0, 0X2);
            goto L_8022626C;
    }
    // 0x8022620C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80226210: j           L_80226300
    // 0x80226214: nop

        goto L_80226300;
    // 0x80226214: nop

L_80226218:
    // 0x80226218: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022621C: jal         0x80036B00
    // 0x80226220: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_0;
    // 0x80226220: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80226224: addiu       $a0, $zero, 0x7E
    ctx->r4 = ADD32(0, 0X7E);
    // 0x80226228: jal         0x8004CB2C
    // 0x8022622C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_1;
    // 0x8022622C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_1:
    // 0x80226230: j           L_8022625C
    // 0x80226234: nop

        goto L_8022625C;
    // 0x80226234: nop

L_80226238:
    // 0x80226238: jal         0x80054578
    // 0x8022623C: nop

    func_80054578_2F978(rdram, ctx);
        goto after_2;
    // 0x8022623C: nop

    after_2:
    // 0x80226240: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226244: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226248: jal         0x80034844
    // 0x8022624C: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    func_80034844_FC44(rdram, ctx);
        goto after_3;
    // 0x8022624C: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    after_3:
    // 0x80226250: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80226254: jal         0x80070050
    // 0x80226258: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_80070050_4B450(rdram, ctx);
        goto after_4;
    // 0x80226258: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_4:
L_8022625C:
    // 0x8022625C: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80226260: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226264: j           L_80226300
    // 0x80226268: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
        goto L_80226300;
    // 0x80226268: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_8022626C:
    // 0x8022626C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80226270: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x80226274: lbu         $a0, 0x0($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X0);
    // 0x80226278: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8022627C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226280: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80226284: addiu       $v0, $zero, -0x200
    ctx->r2 = ADD32(0, -0X200);
    // 0x80226288: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022628C: sh          $v0, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = ctx->r2;
    // 0x80226290: addiu       $v0, $zero, -0x101
    ctx->r2 = ADD32(0, -0X101);
    // 0x80226294: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226298: sh          $v0, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = ctx->r2;
    // 0x8022629C: addiu       $v0, $zero, -0x300
    ctx->r2 = ADD32(0, -0X300);
    // 0x802262A0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802262A4: sh          $v0, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = ctx->r2;
    // 0x802262A8: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x802262AC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802262B0: sh          $v0, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = ctx->r2;
    // 0x802262B4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802262B8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802262BC: sb          $v1, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r3;
    // 0x802262C0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802262C4: sb          $v1, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r3;
    // 0x802262C8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802262CC: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x802262D0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802262D4: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x802262D8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802262DC: sb          $v1, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r3;
    // 0x802262E0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802262E4: sb          $zero, 0x4A26($at)
    MEM_B(0X4A26, ctx->r1) = 0;
    // 0x802262E8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x802262EC: sb          $zero, -0x3B95($at)
    MEM_B(-0X3B95, ctx->r1) = 0;
    // 0x802262F0: ori         $a0, $a0, 0x3
    ctx->r4 = ctx->r4 | 0X3;
    // 0x802262F4: jal         0x8006027C
    // 0x802262F8: sb          $a0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r4;
    func_8006027C_3B67C(rdram, ctx);
        goto after_5;
    // 0x802262F8: sb          $a0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r4;
    after_5:
    // 0x802262FC: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_80226300:
    // 0x80226300: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226304: beq         $v0, $zero, L_8022631C
    if (ctx->r2 == 0) {
        // 0x80226308: nop
    
            goto L_8022631C;
    }
    // 0x80226308: nop

    // 0x8022630C: jal         0x8005FB90
    // 0x80226310: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_6;
    // 0x80226310: nop

    after_6:
    // 0x80226314: jal         0x80060018
    // 0x80226318: nop

    func_80060018_3B418(rdram, ctx);
        goto after_7;
    // 0x80226318: nop

    after_7:
L_8022631C:
    // 0x8022631C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226320: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226324: jr          $ra
    // 0x80226328: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226328: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80237154_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237154: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80237158: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023715C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80237160: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80237164: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x80237168: blez        $v0, L_802371E4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8023716C: nop
    
            goto L_802371E4;
    }
    // 0x8023716C: nop

    // 0x80237170: jal         0x800A3450
    // 0x80237174: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80237174: nop

    after_0:
    // 0x80237178: lhu         $v1, 0x1C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1C);
    // 0x8023717C: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80237180: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80237184: jal         0x800A3450
    // 0x80237188: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80237188: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    after_1:
    // 0x8023718C: lhu         $v1, 0x20($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X20);
    // 0x80237190: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80237194: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80237198: jal         0x800A3450
    // 0x8023719C: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x8023719C: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    after_2:
    // 0x802371A0: lui         $a3, 0xFFFE
    ctx->r7 = S32(0XFFFE << 16);
    // 0x802371A4: lbu         $a2, 0xE($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0XE);
    // 0x802371A8: lhu         $v1, 0x1E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1E);
    // 0x802371AC: ori         $a3, $a3, 0xFEFF
    ctx->r7 = ctx->r7 | 0XFEFF;
    // 0x802371B0: lhu         $a0, 0x24($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X24);
    // 0x802371B4: lw          $a1, 0x18($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X18);
    // 0x802371B8: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x802371BC: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x802371C0: addiu       $v1, $v1, -0xA
    ctx->r3 = ADD32(ctx->r3, -0XA);
    // 0x802371C4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x802371C8: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x802371CC: addu        $a1, $a1, $a3
    ctx->r5 = ADD32(ctx->r5, ctx->r7);
    // 0x802371D0: sh          $v1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r3;
    // 0x802371D4: sh          $a0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r4;
    // 0x802371D8: sw          $a1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r5;
    // 0x802371DC: j           L_802371EC
    // 0x802371E0: sb          $a2, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r6;
        goto L_802371EC;
    // 0x802371E0: sb          $a2, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r6;
L_802371E4:
    // 0x802371E4: jal         0x8004F5C4
    // 0x802371E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_3;
    // 0x802371E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_802371EC:
    // 0x802371EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802371F0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802371F4: jr          $ra
    // 0x802371F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802371F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228878_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228878: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022887C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228880: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228884: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228888: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022888C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80228890: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80228894: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80228898: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022889C: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x802288A0: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x802288A4: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x802288A8: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x802288AC: jal         0x8004D5D4
    // 0x802288B0: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x802288B0: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x802288B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802288B8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802288BC: jal         0x80050294
    // 0x802288C0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x802288C0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x802288C4: lbu         $v1, 0xD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XD);
    // 0x802288C8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802288CC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802288D0: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x802288D4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802288D8: sb          $v1, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r3;
    // 0x802288DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802288E0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802288E4: jr          $ra
    // 0x802288E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802288E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80234C40_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234C40: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80234C44: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80234C48: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x80234C4C: lw          $s1, -0x3A2C($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X3A2C);
    // 0x80234C50: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80234C54: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80234C58: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80234C5C: addiu       $s2, $s0, 0x14
    ctx->r18 = ADD32(ctx->r16, 0X14);
    // 0x80234C60: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80234C64: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80234C68: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80234C6C: jal         0x8009A3B4
    // 0x80234C70: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80234C70: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_0:
    // 0x80234C74: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80234C78: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x80234C7C: jal         0x8009A3B4
    // 0x80234C80: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80234C80: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80234C84: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80234C88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234C8C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80234C90: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x80234C94: jal         0x8004D5D4
    // 0x80234C98: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_2;
    // 0x80234C98: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_2:
    // 0x80234C9C: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x80234CA0: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x80234CA4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80234CA8: addiu       $s1, $s0, 0x8C
    ctx->r17 = ADD32(ctx->r16, 0X8C);
    // 0x80234CAC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80234CB0: sw          $v1, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r3;
    // 0x80234CB4: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80234CB8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80234CBC: jal         0x8002C654
    // 0x80234CC0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    func_8002C654_7A54(rdram, ctx);
        goto after_3;
    // 0x80234CC0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    after_3:
    // 0x80234CC4: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x80234CC8: addiu       $a1, $a1, -0x1C74
    ctx->r5 = ADD32(ctx->r5, -0X1C74);
    // 0x80234CCC: jal         0x80031DA8
    // 0x80234CD0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80031DA8_D1A8(rdram, ctx);
        goto after_4;
    // 0x80234CD0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x80234CD4: addiu       $a0, $s0, 0xAC
    ctx->r4 = ADD32(ctx->r16, 0XAC);
    // 0x80234CD8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80234CDC: jal         0x8009A3B4
    // 0x80234CE0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80234CE0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x80234CE4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80234CE8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80234CEC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80234CF0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80234CF4: jr          $ra
    // 0x80234CF8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80234CF8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022F1E8_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F1E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F1EC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F1F0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F1F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022F1F8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022F1FC: bne         $v0, $zero, L_8022F218
    if (ctx->r2 != 0) {
        // 0x8022F200: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_8022F218;
    }
    // 0x8022F200: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022F204: jal         0x80050294
    // 0x8022F208: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022F208: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022F20C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022F210: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022F214: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022F218:
    // 0x8022F218: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022F21C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F220: jr          $ra
    // 0x8022F224: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F224: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D82C_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D82C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022D830: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D834: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D838: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022D83C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022D840: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022D844: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x8022D848: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022D84C: jal         0x8004FA7C
    // 0x8022D850: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022D850: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    after_0:
    // 0x8022D854: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022D858: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x8022D85C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022D860: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x8022D864: beq         $v0, $zero, L_8022D87C
    if (ctx->r2 == 0) {
        // 0x8022D868: nop
    
            goto L_8022D87C;
    }
    // 0x8022D868: nop

    // 0x8022D86C: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022D870: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8022D874: beq         $v0, $zero, L_8022D8C8
    if (ctx->r2 == 0) {
        // 0x8022D878: nop
    
            goto L_8022D8C8;
    }
    // 0x8022D878: nop

L_8022D87C:
    // 0x8022D87C: jal         0x8003516C
    // 0x8022D880: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_1;
    // 0x8022D880: nop

    after_1:
    // 0x8022D884: bne         $v0, $zero, L_8022D8C8
    if (ctx->r2 != 0) {
        // 0x8022D888: nop
    
            goto L_8022D8C8;
    }
    // 0x8022D888: nop

    // 0x8022D88C: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x8022D890: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022D894: sb          $zero, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = 0;
    // 0x8022D898: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022D89C: sb          $zero, 0x49BA($at)
    MEM_B(0X49BA, ctx->r1) = 0;
    // 0x8022D8A0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022D8A4: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x8022D8A8: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022D8AC: lbu         $v1, 0xD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XD);
    // 0x8022D8B0: lbu         $a0, 0x34A($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X34A);
    // 0x8022D8B4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022D8B8: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x8022D8BC: sb          $a0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r4;
    // 0x8022D8C0: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x8022D8C4: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
L_8022D8C8:
    // 0x8022D8C8: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022D8CC: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8022D8D0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022D8D4: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022D8D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022D8DC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022D8E0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022D8E4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D8E8: jr          $ra
    // 0x8022D8EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022D8EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80226928_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226928: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022692C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226930: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226934: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80226938: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022693C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226940: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x80226944: bne         $v0, $zero, L_8022699C
    if (ctx->r2 != 0) {
        // 0x80226948: nop
    
            goto L_8022699C;
    }
    // 0x80226948: nop

    // 0x8022694C: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    // 0x80226950: jal         0x8004F488
    // 0x80226954: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    func_8004F488_2A888(rdram, ctx);
        goto after_0;
    // 0x80226954: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    after_0:
    // 0x80226958: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    // 0x8022695C: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x80226960: addiu       $s0, $s0, -0x373C
    ctx->r16 = ADD32(ctx->r16, -0X373C);
    // 0x80226964: jal         0x8004F488
    // 0x80226968: addiu       $s1, $s0, 0x28
    ctx->r17 = ADD32(ctx->r16, 0X28);
    func_8004F488_2A888(rdram, ctx);
        goto after_1;
    // 0x80226968: addiu       $s1, $s0, 0x28
    ctx->r17 = ADD32(ctx->r16, 0X28);
    after_1:
    // 0x8022696C: jal         0x8005FA7C
    // 0x80226970: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_2;
    // 0x80226970: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80226974: jal         0x8005FA7C
    // 0x80226978: addiu       $a0, $s0, 0x8C
    ctx->r4 = ADD32(ctx->r16, 0X8C);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_3;
    // 0x80226978: addiu       $a0, $s0, 0x8C
    ctx->r4 = ADD32(ctx->r16, 0X8C);
    after_3:
L_8022697C:
    // 0x8022697C: jal         0x8005FA7C
    // 0x80226980: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_4;
    // 0x80226980: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x80226984: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80226988: slti        $v0, $s2, 0x5
    ctx->r2 = SIGNED(ctx->r18) < 0X5 ? 1 : 0;
    // 0x8022698C: bne         $v0, $zero, L_8022697C
    if (ctx->r2 != 0) {
        // 0x80226990: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_8022697C;
    }
    // 0x80226990: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    // 0x80226994: jal         0x802269B4
    // 0x80226998: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_802269B4_ovl3(rdram, ctx);
        goto after_5;
    // 0x80226998: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_5:
L_8022699C:
    // 0x8022699C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802269A0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802269A4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802269A8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802269AC: jr          $ra
    // 0x802269B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802269B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023AD20_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023AD20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023AD24: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023AD28: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8023AD2C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023AD30: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023AD34: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023AD38: lw          $v0, -0xF80($at)
    ctx->r2 = MEM_W(ctx->r1, -0XF80);
    // 0x8023AD3C: jalr        $v0
    // 0x8023AD40: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8023AD40: nop

    after_0:
    // 0x8023AD44: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023AD48: jr          $ra
    // 0x8023AD4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023AD4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802347B0_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802347B0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802347B4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x802347B8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x802347BC: lui         $v1, 0x3D48
    ctx->r3 = S32(0X3D48 << 16);
    // 0x802347C0: ori         $v1, $v1, 0xE
    ctx->r3 = ctx->r3 | 0XE;
    // 0x802347C4: lui         $v0, 0x2C80
    ctx->r2 = S32(0X2C80 << 16);
    // 0x802347C8: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x802347CC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802347D0: addiu       $s0, $s2, 0x1C
    ctx->r16 = ADD32(ctx->r18, 0X1C);
    // 0x802347D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802347D8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x802347DC: addiu       $s1, $s2, 0x14
    ctx->r17 = ADD32(ctx->r18, 0X14);
    // 0x802347E0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802347E4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802347E8: sw          $v1, 0x88($s2)
    MEM_W(0X88, ctx->r18) = ctx->r3;
    // 0x802347EC: sw          $v0, 0x8C($s2)
    MEM_W(0X8C, ctx->r18) = ctx->r2;
    // 0x802347F0: sh          $zero, 0x7C($s2)
    MEM_H(0X7C, ctx->r18) = 0;
    // 0x802347F4: jal         0x8004DD04
    // 0x802347F8: sb          $zero, 0x76($s2)
    MEM_B(0X76, ctx->r18) = 0;
    func_8004DD04_29104(rdram, ctx);
        goto after_0;
    // 0x802347F8: sb          $zero, 0x76($s2)
    MEM_B(0X76, ctx->r18) = 0;
    after_0:
    // 0x802347FC: addiu       $a0, $s2, 0x34
    ctx->r4 = ADD32(ctx->r18, 0X34);
    // 0x80234800: lhu         $v1, 0x14($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X14);
    // 0x80234804: lhu         $v0, 0x16($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X16);
    // 0x80234808: lhu         $a3, 0x18($s2)
    ctx->r7 = MEM_HU(ctx->r18, 0X18);
    // 0x8023480C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80234810: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80234814: addiu       $v0, $v0, -0x10
    ctx->r2 = ADD32(ctx->r2, -0X10);
    // 0x80234818: sh          $v1, 0x90($s2)
    MEM_H(0X90, ctx->r18) = ctx->r3;
    // 0x8023481C: sh          $v0, 0x92($s2)
    MEM_H(0X92, ctx->r18) = ctx->r2;
    // 0x80234820: jal         0x8009A3B4
    // 0x80234824: sh          $a3, 0x94($s2)
    MEM_H(0X94, ctx->r18) = ctx->r7;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80234824: sh          $a3, 0x94($s2)
    MEM_H(0X94, ctx->r18) = ctx->r7;
    after_1:
    // 0x80234828: addiu       $a0, $s2, 0x2C
    ctx->r4 = ADD32(ctx->r18, 0X2C);
    // 0x8023482C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80234830: jal         0x8009A3B4
    // 0x80234834: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80234834: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80234838: lbu         $v0, 0x3($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X3);
    // 0x8023483C: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80234840: beq         $v0, $zero, L_8023487C
    if (ctx->r2 == 0) {
        // 0x80234844: nop
    
            goto L_8023487C;
    }
    // 0x80234844: nop

    // 0x80234848: lb          $v0, 0xF($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XF);
    // 0x8023484C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80234850: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80234854: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234858: lhu         $v1, -0x1CB8($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X1CB8);
    // 0x8023485C: lb          $v0, 0xF($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XF);
    // 0x80234860: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80234864: sb          $v1, 0x96($s2)
    MEM_B(0X96, ctx->r18) = ctx->r3;
    // 0x80234868: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023486C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80234870: lhu         $v0, -0x1CB6($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X1CB6);
    // 0x80234874: j           L_802348AC
    // 0x80234878: sb          $v0, 0x97($s2)
    MEM_B(0X97, ctx->r18) = ctx->r2;
        goto L_802348AC;
    // 0x80234878: sb          $v0, 0x97($s2)
    MEM_B(0X97, ctx->r18) = ctx->r2;
L_8023487C:
    // 0x8023487C: lb          $v0, 0xF($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XF);
    // 0x80234880: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80234884: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80234888: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023488C: lhu         $v1, -0x1CD0($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X1CD0);
    // 0x80234890: lb          $v0, 0xF($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XF);
    // 0x80234894: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80234898: sb          $v1, 0x96($s2)
    MEM_B(0X96, ctx->r18) = ctx->r3;
    // 0x8023489C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802348A0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802348A4: lhu         $v0, -0x1CCE($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X1CCE);
    // 0x802348A8: sb          $v0, 0x97($s2)
    MEM_B(0X97, ctx->r18) = ctx->r2;
L_802348AC:
    // 0x802348AC: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x802348B0: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x802348B4: sh          $v1, 0x98($s2)
    MEM_H(0X98, ctx->r18) = ctx->r3;
    // 0x802348B8: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802348BC: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x802348C0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802348C4: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x802348C8: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x802348CC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802348D0: jr          $ra
    // 0x802348D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x802348D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80234060_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234060: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80234064: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80234068: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023406C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80234070: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x80234074: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x80234078: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8023407C: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x80234080: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x80234084: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x80234088: jal         0x800324B4
    // 0x8023408C: sh          $zero, 0x7C($s0)
    MEM_H(0X7C, ctx->r16) = 0;
    func_800324B4_D8B4(rdram, ctx);
        goto after_0;
    // 0x8023408C: sh          $zero, 0x7C($s0)
    MEM_H(0X7C, ctx->r16) = 0;
    after_0:
    // 0x80234090: lw          $v1, 0x9C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X9C);
    // 0x80234094: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80234098: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023409C: mflo        $v0
    ctx->r2 = lo;
    // 0x802340A0: lw          $v1, 0xA0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XA0);
    // 0x802340A4: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x802340A8: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    // 0x802340AC: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x802340B0: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    // 0x802340B4: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
    // 0x802340B8: jal         0x80032498
    // 0x802340BC: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    func_80032498_D898(rdram, ctx);
        goto after_1;
    // 0x802340BC: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    after_1:
    // 0x802340C0: lui         $a3, 0x3D48
    ctx->r7 = S32(0X3D48 << 16);
    // 0x802340C4: ori         $a3, $a3, 0xE
    ctx->r7 = ctx->r7 | 0XE;
    // 0x802340C8: lui         $a2, 0x2C80
    ctx->r6 = S32(0X2C80 << 16);
    // 0x802340CC: lw          $v1, 0x9C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X9C);
    // 0x802340D0: ori         $a2, $a2, 0x8080
    ctx->r6 = ctx->r6 | 0X8080;
    // 0x802340D4: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x802340D8: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802340DC: mflo        $v0
    ctx->r2 = lo;
    // 0x802340E0: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x802340E4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802340E8: sh          $zero, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = 0;
    // 0x802340EC: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    // 0x802340F0: sw          $zero, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = 0;
    // 0x802340F4: sw          $a3, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r7;
    // 0x802340F8: sw          $a2, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r6;
    // 0x802340FC: addiu       $v1, $zero, 0x200
    ctx->r3 = ADD32(0, 0X200);
    // 0x80234100: sh          $v1, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r3;
    // 0x80234104: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
    // 0x80234108: jal         0x8004DD04
    // 0x8023410C: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
    func_8004DD04_29104(rdram, ctx);
        goto after_2;
    // 0x8023410C: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
    after_2:
    // 0x80234110: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80234114: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x80234118: lh          $v0, 0x44($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X44);
    // 0x8023411C: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x80234120: lw          $t0, 0x20($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X20);
    // 0x80234124: lh          $a2, 0x48($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X48);
    // 0x80234128: lw          $a3, 0x24($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X24);
    // 0x8023412C: sll         $v0, $v0, 10
    ctx->r2 = S32(ctx->r2 << 10);
    // 0x80234130: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80234134: sll         $a2, $a2, 10
    ctx->r6 = S32(ctx->r6 << 10);
    // 0x80234138: subu        $a3, $a3, $a2
    ctx->r7 = SUB32(ctx->r7, ctx->r6);
    // 0x8023413C: sw          $v1, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r3;
    // 0x80234140: sw          $t0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r8;
    // 0x80234144: jal         0x8004DD04
    // 0x80234148: sw          $a3, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r7;
    func_8004DD04_29104(rdram, ctx);
        goto after_3;
    // 0x80234148: sw          $a3, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r7;
    after_3:
    // 0x8023414C: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80234150: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80234154: beq         $v0, $zero, L_80234190
    if (ctx->r2 == 0) {
        // 0x80234158: sw          $zero, 0x78($s0)
        MEM_W(0X78, ctx->r16) = 0;
            goto L_80234190;
    }
    // 0x80234158: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x8023415C: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x80234160: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80234164: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80234168: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023416C: lhu         $v1, -0x1CB8($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X1CB8);
    // 0x80234170: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x80234174: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80234178: sb          $v1, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r3;
    // 0x8023417C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234180: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80234184: lhu         $v0, -0x1CB6($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X1CB6);
    // 0x80234188: j           L_802341C0
    // 0x8023418C: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
        goto L_802341C0;
    // 0x8023418C: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_80234190:
    // 0x80234190: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x80234194: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80234198: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023419C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802341A0: lhu         $v1, -0x1CD0($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X1CD0);
    // 0x802341A4: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x802341A8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802341AC: sb          $v1, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r3;
    // 0x802341B0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802341B4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802341B8: lhu         $v0, -0x1CCE($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X1CCE);
    // 0x802341BC: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_802341C0:
    // 0x802341C0: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x802341C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802341C8: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x802341CC: sh          $v0, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r2;
    // 0x802341D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802341D4: sb          $v0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r2;
    // 0x802341D8: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x802341DC: jal         0x802348D8
    // 0x802341E0: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_802348D8_ovl3(rdram, ctx);
        goto after_4;
    // 0x802341E0: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_4:
    // 0x802341E4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802341E8: beq         $v0, $zero, L_802341F8
    if (ctx->r2 == 0) {
        // 0x802341EC: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802341F8;
    }
    // 0x802341EC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802341F0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802341F4: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
L_802341F8:
    // 0x802341F8: lhu         $a1, 0x14($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X14);
    // 0x802341FC: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x80234200: lbu         $a0, 0x8($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X8);
    // 0x80234204: lhu         $a2, 0x18($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X18);
    // 0x80234208: lbu         $v1, 0xE($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XE);
    // 0x8023420C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80234210: addiu       $v0, $v0, -0x10
    ctx->r2 = ADD32(ctx->r2, -0X10);
    // 0x80234214: andi        $v1, $v1, 0xFB
    ctx->r3 = ctx->r3 & 0XFB;
    // 0x80234218: sh          $a1, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r5;
    // 0x8023421C: sh          $v0, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r2;
    // 0x80234220: sh          $a2, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r6;
    // 0x80234224: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
    // 0x80234228: sb          $a0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r4;
    // 0x8023422C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80234230: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80234234: jr          $ra
    // 0x80234238: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80234238: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8023B5FC_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B5FC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023B600: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8023B604: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8023B608: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023B60C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023B610: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023B614: lbu         $v1, 0x4($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X4);
    // 0x8023B618: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x8023B61C: beq         $v0, $zero, L_8023B9A0
    if (ctx->r2 == 0) {
        // 0x8023B620: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8023B9A0;
    }
    // 0x8023B620: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8023B624: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023B628: addu        $at, $at, $v0
    gpr jr_addend_8023B630 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023B62C: lw          $v0, -0x948($at)
    ctx->r2 = ADD32(ctx->r1, -0X948);
    // 0x8023B630: jr          $v0
    // 0x8023B634: nop

    switch (jr_addend_8023B630 >> 2) {
        case 0: goto L_8023B638; break;
        case 1: goto L_8023B68C; break;
        case 2: goto L_8023B6A8; break;
        case 3: goto L_8023B6C8; break;
        case 4: goto L_8023B770; break;
        case 5: goto L_8023B7B8; break;
        default: switch_error(__func__, 0x8023B630, 0x8023F6B8);
    }
    // 0x8023B634: nop

L_8023B638:
    // 0x8023B638: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8023B63C: jal         0x8006FF84
    // 0x8023B640: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x8023B640: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_0:
    // 0x8023B644: beq         $v0, $zero, L_8023B9A0
    if (ctx->r2 == 0) {
        // 0x8023B648: nop
    
            goto L_8023B9A0;
    }
    // 0x8023B648: nop

    // 0x8023B64C: jal         0x80036B58
    // 0x8023B650: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_80036B58_11F58(rdram, ctx);
        goto after_1;
    // 0x8023B650: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_1:
    // 0x8023B654: jal         0x8002A488
    // 0x8023B658: nop

    func_8002A488_5888(rdram, ctx);
        goto after_2;
    // 0x8023B658: nop

    after_2:
    // 0x8023B65C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8023B660: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x8023B664: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8023B668: bne         $v1, $v0, L_8023B678
    if (ctx->r3 != ctx->r2) {
        // 0x8023B66C: lui         $a0, 0x100
        ctx->r4 = S32(0X100 << 16);
            goto L_8023B678;
    }
    // 0x8023B66C: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x8023B670: j           L_8023B67C
    // 0x8023B674: ori         $a0, $a0, 0x5900
    ctx->r4 = ctx->r4 | 0X5900;
        goto L_8023B67C;
    // 0x8023B674: ori         $a0, $a0, 0x5900
    ctx->r4 = ctx->r4 | 0X5900;
L_8023B678:
    // 0x8023B678: ori         $a0, $a0, 0x3200
    ctx->r4 = ctx->r4 | 0X3200;
L_8023B67C:
    // 0x8023B67C: jal         0x80036B1C
    // 0x8023B680: nop

    func_80036B1C_11F1C(rdram, ctx);
        goto after_3;
    // 0x8023B680: nop

    after_3:
    // 0x8023B684: j           L_8023B6B8
    // 0x8023B688: nop

        goto L_8023B6B8;
    // 0x8023B688: nop

L_8023B68C:
    // 0x8023B68C: jal         0x80036B7C
    // 0x8023B690: nop

    func_80036B7C_11F7C(rdram, ctx);
        goto after_4;
    // 0x8023B690: nop

    after_4:
    // 0x8023B694: beq         $v0, $zero, L_8023B9A0
    if (ctx->r2 == 0) {
        // 0x8023B698: addiu       $v1, $zero, 0x17
        ctx->r3 = ADD32(0, 0X17);
            goto L_8023B9A0;
    }
    // 0x8023B698: addiu       $v1, $zero, 0x17
    ctx->r3 = ADD32(0, 0X17);
    // 0x8023B69C: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
    // 0x8023B6A0: j           L_8023B6BC
    // 0x8023B6A4: sw          $v1, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r3;
        goto L_8023B6BC;
    // 0x8023B6A4: sw          $v1, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r3;
L_8023B6A8:
    // 0x8023B6A8: lw          $v0, 0xC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XC);
    // 0x8023B6AC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023B6B0: bne         $v0, $zero, L_8023B9A0
    if (ctx->r2 != 0) {
        // 0x8023B6B4: sw          $v0, 0xC($s2)
        MEM_W(0XC, ctx->r18) = ctx->r2;
            goto L_8023B9A0;
    }
    // 0x8023B6B4: sw          $v0, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r2;
L_8023B6B8:
    // 0x8023B6B8: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
L_8023B6BC:
    // 0x8023B6BC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023B6C0: j           L_8023B9A0
    // 0x8023B6C4: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
        goto L_8023B9A0;
    // 0x8023B6C4: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_8023B6C8:
    // 0x8023B6C8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8023B6CC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023B6D0: jal         0x8005F6B4
    // 0x8023B6D4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_5;
    // 0x8023B6D4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x8023B6D8: addiu       $a0, $zero, 0x56
    ctx->r4 = ADD32(0, 0X56);
    // 0x8023B6DC: jal         0x8004CB2C
    // 0x8023B6E0: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_6;
    // 0x8023B6E0: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_6:
    // 0x8023B6E4: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8023B6E8: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x8023B6EC: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8023B6F0: bne         $v1, $v0, L_8023B704
    if (ctx->r3 != ctx->r2) {
        // 0x8023B6F4: nop
    
            goto L_8023B704;
    }
    // 0x8023B6F4: nop

    // 0x8023B6F8: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023B6FC: j           L_8023B70C
    // 0x8023B700: addiu       $v0, $v0, -0xE04
    ctx->r2 = ADD32(ctx->r2, -0XE04);
        goto L_8023B70C;
    // 0x8023B700: addiu       $v0, $v0, -0xE04
    ctx->r2 = ADD32(ctx->r2, -0XE04);
L_8023B704:
    // 0x8023B704: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023B708: addiu       $v0, $v0, -0xF04
    ctx->r2 = ADD32(ctx->r2, -0XF04);
L_8023B70C:
    // 0x8023B70C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8023B710: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x8023B714: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023B718: addiu       $v0, $v0, -0xCF4
    ctx->r2 = ADD32(ctx->r2, -0XCF4);
    // 0x8023B71C: sw          $v0, 0xA4($s2)
    MEM_W(0XA4, ctx->r18) = ctx->r2;
    // 0x8023B720: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8023B724: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x8023B728: addiu       $s0, $s0, -0xF40
    ctx->r16 = ADD32(ctx->r16, -0XF40);
L_8023B72C:
    // 0x8023B72C: jal         0x8005FA7C
    // 0x8023B730: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_7;
    // 0x8023B730: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x8023B734: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8023B738: slti        $v0, $s1, 0xA
    ctx->r2 = SIGNED(ctx->r17) < 0XA ? 1 : 0;
    // 0x8023B73C: bne         $v0, $zero, L_8023B72C
    if (ctx->r2 != 0) {
        // 0x8023B740: addiu       $s0, $s0, 0x14
        ctx->r16 = ADD32(ctx->r16, 0X14);
            goto L_8023B72C;
    }
    // 0x8023B740: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x8023B744: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023B748: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B74C: sb          $v0, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r2;
    // 0x8023B750: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023B754: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B758: sb          $v0, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = ctx->r2;
    // 0x8023B75C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B760: sw          $zero, 0x49BC($at)
    MEM_W(0X49BC, ctx->r1) = 0;
    // 0x8023B764: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
    // 0x8023B768: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023B76C: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_8023B770:
    // 0x8023B770: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023B774: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8023B778: bne         $v0, $zero, L_8023B7B8
    if (ctx->r2 != 0) {
        // 0x8023B77C: nop
    
            goto L_8023B7B8;
    }
    // 0x8023B77C: nop

    // 0x8023B780: lw          $v0, 0xA4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XA4);
    // 0x8023B784: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8023B788: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8023B78C: beq         $v1, $v0, L_8023B7A4
    if (ctx->r3 == ctx->r2) {
        // 0x8023B790: nop
    
            goto L_8023B7A4;
    }
    // 0x8023B790: nop

    // 0x8023B794: jal         0x8006072C
    // 0x8023B798: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_8;
    // 0x8023B798: nop

    after_8:
    // 0x8023B79C: beq         $v0, $zero, L_8023B7B8
    if (ctx->r2 == 0) {
        // 0x8023B7A0: nop
    
            goto L_8023B7B8;
    }
    // 0x8023B7A0: nop

L_8023B7A4:
    // 0x8023B7A4: jal         0x80036E48
    // 0x8023B7A8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80036E48_12248(rdram, ctx);
        goto after_9;
    // 0x8023B7A8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_9:
    // 0x8023B7AC: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
    // 0x8023B7B0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023B7B4: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_8023B7B8:
    // 0x8023B7B8: lbu         $v1, 0x8($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X8);
    // 0x8023B7BC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8023B7C0: beq         $v1, $v0, L_8023B7D8
    if (ctx->r3 == ctx->r2) {
        // 0x8023B7C4: nop
    
            goto L_8023B7D8;
    }
    // 0x8023B7C4: nop

    // 0x8023B7C8: lw          $v0, 0xA4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XA4);
    // 0x8023B7CC: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x8023B7D0: jalr        $v0
    // 0x8023B7D4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_10;
    // 0x8023B7D4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_10:
L_8023B7D8:
    // 0x8023B7D8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023B7DC: lb          $v0, 0x49BC($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X49BC);
    // 0x8023B7E0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023B7E4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023B7E8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023B7EC: lw          $v0, -0xD04($at)
    ctx->r2 = MEM_W(ctx->r1, -0XD04);
    // 0x8023B7F0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8023B7F4: jalr        $v0
    // 0x8023B7F8: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_11;
    // 0x8023B7F8: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_11:
    // 0x8023B7FC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8023B800: addiu       $a0, $a0, 0x4DD8
    ctx->r4 = ADD32(ctx->r4, 0X4DD8);
    // 0x8023B804: jal         0x8004DD04
    // 0x8023B808: addiu       $a1, $a0, 0x10
    ctx->r5 = ADD32(ctx->r4, 0X10);
    func_8004DD04_29104(rdram, ctx);
        goto after_12;
    // 0x8023B808: addiu       $a1, $a0, 0x10
    ctx->r5 = ADD32(ctx->r4, 0X10);
    after_12:
    // 0x8023B80C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8023B810: addiu       $a0, $a0, 0x49CC
    ctx->r4 = ADD32(ctx->r4, 0X49CC);
    // 0x8023B814: jal         0x8004DD04
    // 0x8023B818: addiu       $a1, $a0, -0x8
    ctx->r5 = ADD32(ctx->r4, -0X8);
    func_8004DD04_29104(rdram, ctx);
        goto after_13;
    // 0x8023B818: addiu       $a1, $a0, -0x8
    ctx->r5 = ADD32(ctx->r4, -0X8);
    after_13:
    // 0x8023B81C: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8023B820: addiu       $s0, $s0, 0x47CC
    ctx->r16 = ADD32(ctx->r16, 0X47CC);
    // 0x8023B824: lb          $v1, 0x0($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X0);
    // 0x8023B828: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023B82C: bne         $v1, $v0, L_8023B874
    if (ctx->r3 != ctx->r2) {
        // 0x8023B830: nop
    
            goto L_8023B874;
    }
    // 0x8023B830: nop

    // 0x8023B834: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023B838: lh          $v0, 0x4DD8($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X4DD8);
    // 0x8023B83C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8023B840: lh          $v1, 0x4DDC($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X4DDC);
    // 0x8023B844: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8023B848: lh          $a0, 0x4DE0($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4DE0);
    // 0x8023B84C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8023B850: lhu         $a1, 0x4DF2($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X4DF2);
    // 0x8023B854: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B858: sh          $v0, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = ctx->r2;
    // 0x8023B85C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B860: sh          $v1, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = ctx->r3;
    // 0x8023B864: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B868: sh          $a0, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = ctx->r4;
    // 0x8023B86C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B870: sh          $a1, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = ctx->r5;
L_8023B874:
    // 0x8023B874: jal         0x8005FB90
    // 0x8023B878: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_14;
    // 0x8023B878: nop

    after_14:
    // 0x8023B87C: jal         0x80060018
    // 0x8023B880: nop

    func_80060018_3B418(rdram, ctx);
        goto after_15;
    // 0x8023B880: nop

    after_15:
    // 0x8023B884: lbu         $v1, 0x4($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X4);
    // 0x8023B888: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8023B88C: bne         $v1, $v0, L_8023B9A0
    if (ctx->r3 != ctx->r2) {
        // 0x8023B890: nop
    
            goto L_8023B9A0;
    }
    // 0x8023B890: nop

    // 0x8023B894: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023B898: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8023B89C: bne         $v0, $zero, L_8023B9A0
    if (ctx->r2 != 0) {
        // 0x8023B8A0: nop
    
            goto L_8023B9A0;
    }
    // 0x8023B8A0: nop

    // 0x8023B8A4: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8023B8A8: lbu         $v0, -0x7388($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7388);
    // 0x8023B8AC: bne         $v0, $zero, L_8023B9A0
    if (ctx->r2 != 0) {
        // 0x8023B8B0: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_8023B9A0;
    }
    // 0x8023B8B0: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8023B8B4: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8023B8B8: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x8023B8BC: bne         $v1, $v0, L_8023B910
    if (ctx->r3 != ctx->r2) {
        // 0x8023B8C0: addiu       $v1, $zero, 0x2
        ctx->r3 = ADD32(0, 0X2);
            goto L_8023B910;
    }
    // 0x8023B8C0: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8023B8C4: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8023B8C8: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x8023B8CC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B8D0: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x8023B8D4: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x8023B8D8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B8DC: sh          $v0, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = ctx->r2;
    // 0x8023B8E0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023B8E4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B8E8: sh          $v0, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = ctx->r2;
    // 0x8023B8EC: addiu       $v0, $zero, -0x7300
    ctx->r2 = ADD32(0, -0X7300);
    // 0x8023B8F0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B8F4: sh          $v0, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = ctx->r2;
    // 0x8023B8F8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B8FC: sb          $zero, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = 0;
    // 0x8023B900: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B904: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x8023B908: j           L_8023B95C
    // 0x8023B90C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
        goto L_8023B95C;
    // 0x8023B90C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_8023B910:
    // 0x8023B910: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x8023B914: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x8023B918: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B91C: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x8023B920: addiu       $v0, $zero, -0xC6B
    ctx->r2 = ADD32(0, -0XC6B);
    // 0x8023B924: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B928: sh          $v0, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = ctx->r2;
    // 0x8023B92C: addiu       $v0, $zero, -0x181
    ctx->r2 = ADD32(0, -0X181);
    // 0x8023B930: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B934: sh          $v0, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = ctx->r2;
    // 0x8023B938: addiu       $v0, $zero, 0xB00
    ctx->r2 = ADD32(0, 0XB00);
    // 0x8023B93C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B940: sh          $v0, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = ctx->r2;
    // 0x8023B944: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8023B948: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B94C: sh          $v0, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = ctx->r2;
    // 0x8023B950: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8023B954: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B958: sb          $zero, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = 0;
L_8023B95C:
    // 0x8023B95C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B960: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x8023B964: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B968: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x8023B96C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023B970: sb          $v1, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r3;
    // 0x8023B974: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8023B978: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8023B97C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023B980: jal         0x80036B00
    // 0x8023B984: sb          $zero, 0x0($s2)
    MEM_B(0X0, ctx->r18) = 0;
    func_80036B00_11F00(rdram, ctx);
        goto after_16;
    // 0x8023B984: sb          $zero, 0x0($s2)
    MEM_B(0X0, ctx->r18) = 0;
    after_16:
    // 0x8023B988: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8023B98C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x8023B990: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x8023B994: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8023B998: jal         0x80070050
    // 0x8023B99C: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    func_80070050_4B450(rdram, ctx);
        goto after_17;
    // 0x8023B99C: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    after_17:
L_8023B9A0:
    // 0x8023B9A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8023B9A4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8023B9A8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023B9AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023B9B0: jr          $ra
    // 0x8023B9B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023B9B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802280EC_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802280EC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802280F0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802280F4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802280F8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802280FC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228100: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228104: bne         $v0, $zero, L_80228134
    if (ctx->r2 != 0) {
        // 0x80228108: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_80228134;
    }
    // 0x80228108: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x8022810C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x80228110: jal         0x80050294
    // 0x80228114: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80228114: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80228118: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022811C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80228120: jal         0x802284C0
    // 0x80228124: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_802284C0_ovl3(rdram, ctx);
        goto after_1;
    // 0x80228124: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x80228128: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022812C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228130: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80228134:
    // 0x80228134: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80228138: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x8022813C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80228140: bne         $v1, $v0, L_80228164
    if (ctx->r3 != ctx->r2) {
        // 0x80228144: addiu       $v0, $zero, 0x23
        ctx->r2 = ADD32(0, 0X23);
            goto L_80228164;
    }
    // 0x80228144: addiu       $v0, $zero, 0x23
    ctx->r2 = ADD32(0, 0X23);
    // 0x80228148: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022814C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80228150: jal         0x802284C0
    // 0x80228154: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_802284C0_ovl3(rdram, ctx);
        goto after_2;
    // 0x80228154: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_2:
    // 0x80228158: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022815C: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x80228160: addiu       $v0, $zero, 0x23
    ctx->r2 = ADD32(0, 0X23);
L_80228164:
    // 0x80228164: bne         $v1, $v0, L_80228178
    if (ctx->r3 != ctx->r2) {
        // 0x80228168: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80228178;
    }
    // 0x80228168: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022816C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80228170: jal         0x802284C0
    // 0x80228174: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_802284C0_ovl3(rdram, ctx);
        goto after_3;
    // 0x80228174: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
L_80228178:
    // 0x80228178: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022817C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228180: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228184: jr          $ra
    // 0x80228188: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80228188: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022C9B8_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C9B8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022C9BC: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8022C9C0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C9C4: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8022C9C8: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    // 0x8022C9CC: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8022C9D0: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x8022C9D4: jal         0x8022DCA4
    // 0x8022C9D8: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    func_8022DCA4_ovl3(rdram, ctx);
        goto after_0;
    // 0x8022C9D8: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    after_0:
    // 0x8022C9DC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022C9E0: beq         $v0, $zero, L_8022CA10
    if (ctx->r2 == 0) {
        // 0x8022C9E4: addiu       $v0, $zero, 0x2A
        ctx->r2 = ADD32(0, 0X2A);
            goto L_8022CA10;
    }
    // 0x8022C9E4: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x8022C9E8: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022C9EC: bne         $v1, $v0, L_8022CB38
    if (ctx->r3 != ctx->r2) {
        // 0x8022C9F0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022CB38;
    }
    // 0x8022C9F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C9F4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022C9F8: lbu         $a0, 0xAC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022C9FC: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x8022CA00: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022CA04: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    // 0x8022CA08: j           L_8022CB3C
    // 0x8022CA0C: sh          $a0, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r4;
        goto L_8022CB3C;
    // 0x8022CA0C: sh          $a0, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r4;
L_8022CA10:
    // 0x8022CA10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CA14: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022CA18: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022CA1C: jal         0x8004DA90
    // 0x8022CA20: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x8022CA20: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x8022CA24: lh          $a3, 0x354($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X354);
    // 0x8022CA28: lh          $a2, 0x35C($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X35C);
    // 0x8022CA2C: lh          $a1, 0x14($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X14);
    // 0x8022CA30: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
    // 0x8022CA34: addu        $v0, $a3, $a2
    ctx->r2 = ADD32(ctx->r7, ctx->r6);
    // 0x8022CA38: slt         $v0, $v0, $a1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8022CA3C: beq         $v0, $zero, L_8022CA4C
    if (ctx->r2 == 0) {
        // 0x8022CA40: addu        $v1, $a2, $zero
        ctx->r3 = ADD32(ctx->r6, 0);
            goto L_8022CA4C;
    }
    // 0x8022CA40: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    // 0x8022CA44: j           L_8022CA5C
    // 0x8022CA48: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
        goto L_8022CA5C;
    // 0x8022CA48: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
L_8022CA4C:
    // 0x8022CA4C: subu        $v0, $a3, $a2
    ctx->r2 = SUB32(ctx->r7, ctx->r6);
    // 0x8022CA50: slt         $v0, $a1, $v0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022CA54: beq         $v0, $zero, L_8022CA8C
    if (ctx->r2 == 0) {
        // 0x8022CA58: subu        $v0, $a0, $v1
        ctx->r2 = SUB32(ctx->r4, ctx->r3);
            goto L_8022CA8C;
    }
    // 0x8022CA58: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
L_8022CA5C:
    // 0x8022CA5C: lhu         $a0, 0x56($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X56);
    // 0x8022CA60: lhu         $v1, 0x350($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X350);
    // 0x8022CA64: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x8022CA68: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022CA6C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022CA70: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022CA74: sh          $v0, 0x366($s0)
    MEM_H(0X366, ctx->r16) = ctx->r2;
    // 0x8022CA78: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x8022CA7C: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022CA80: addiu       $v1, $v1, 0xA
    ctx->r3 = ADD32(ctx->r3, 0XA);
    // 0x8022CA84: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022CA88: sh          $v1, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r3;
L_8022CA8C:
    // 0x8022CA8C: lh          $a3, 0x10($s1)
    ctx->r7 = MEM_H(ctx->r17, 0X10);
    // 0x8022CA90: lh          $a2, 0x16($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X16);
    // 0x8022CA94: lh          $v1, 0x18($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18);
    // 0x8022CA98: addu        $a1, $a3, $zero
    ctx->r5 = ADD32(ctx->r7, 0);
    // 0x8022CA9C: addu        $v0, $a3, $a2
    ctx->r2 = ADD32(ctx->r7, ctx->r6);
    // 0x8022CAA0: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022CAA4: beq         $v0, $zero, L_8022CAB8
    if (ctx->r2 == 0) {
        // 0x8022CAA8: addu        $a0, $a2, $zero
        ctx->r4 = ADD32(ctx->r6, 0);
            goto L_8022CAB8;
    }
    // 0x8022CAA8: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    // 0x8022CAAC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022CAB0: j           L_8022CACC
    // 0x8022CAB4: addu        $v0, $a1, $a0
    ctx->r2 = ADD32(ctx->r5, ctx->r4);
        goto L_8022CACC;
    // 0x8022CAB4: addu        $v0, $a1, $a0
    ctx->r2 = ADD32(ctx->r5, ctx->r4);
L_8022CAB8:
    // 0x8022CAB8: subu        $v0, $a3, $a2
    ctx->r2 = SUB32(ctx->r7, ctx->r6);
    // 0x8022CABC: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022CAC0: beq         $v0, $zero, L_8022CAFC
    if (ctx->r2 == 0) {
        // 0x8022CAC4: subu        $v0, $a1, $a0
        ctx->r2 = SUB32(ctx->r5, ctx->r4);
            goto L_8022CAFC;
    }
    // 0x8022CAC4: subu        $v0, $a1, $a0
    ctx->r2 = SUB32(ctx->r5, ctx->r4);
    // 0x8022CAC8: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
L_8022CACC:
    // 0x8022CACC: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x8022CAD0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022CAD4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022CAD8: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8022CADC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022CAE0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022CAE4: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022CAE8: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x8022CAEC: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8022CAF0: sh          $v1, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r3;
    // 0x8022CAF4: addiu       $v0, $v0, 0xA
    ctx->r2 = ADD32(ctx->r2, 0XA);
    // 0x8022CAF8: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
L_8022CAFC:
    // 0x8022CAFC: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x8022CB00: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8022CB04: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x8022CB08: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CB0C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022CB10: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022CB14: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8022CB18: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x8022CB1C: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x8022CB20: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x8022CB24: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022CB28: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x8022CB2C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CB30: bne         $v0, $zero, L_8022CB3C
    if (ctx->r2 != 0) {
        // 0x8022CB34: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022CB3C;
    }
    // 0x8022CB34: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022CB38:
    // 0x8022CB38: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022CB3C:
    // 0x8022CB3C: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x8022CB40: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8022CB44: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8022CB48: jr          $ra
    // 0x8022CB4C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8022CB4C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8022D060_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D060: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022D064: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D068: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D06C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022D070: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022D074: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022D078: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022D07C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022D080: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022D084: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022D088: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022D08C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D090: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
    // 0x8022D094: sh          $v1, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r3;
    // 0x8022D098: jal         0x8022DC08
    // 0x8022D09C: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    func_8022DC08_ovl3(rdram, ctx);
        goto after_0;
    // 0x8022D09C: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    after_0:
    // 0x8022D0A0: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x8022D0A4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022D0A8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022D0AC: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022D0B0: addiu       $s2, $s2, 0x49C4
    ctx->r18 = ADD32(ctx->r18, 0X49C4);
    // 0x8022D0B4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022D0B8: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022D0BC: jal         0x8004F820
    // 0x8022D0C0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022D0C0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022D0C4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D0C8: bgez        $v0, L_8022D0F8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022D0CC: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_8022D0F8;
    }
    // 0x8022D0CC: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x8022D0D0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022D0D4: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022D0D8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022D0DC: jal         0x8004F820
    // 0x8022D0E0: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8022D0E0: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x8022D0E4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D0E8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022D0EC: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022D0F0: j           L_8022D114
    // 0x8022D0F4: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_8022D114;
    // 0x8022D0F4: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_8022D0F8:
    // 0x8022D0F8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022D0FC: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022D100: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022D104: jal         0x8004F820
    // 0x8022D108: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x8022D108: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_3:
    // 0x8022D10C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D110: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_8022D114:
    // 0x8022D114: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022D118: sh          $v0, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r2;
    // 0x8022D11C: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x8022D120: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022D124: jal         0x800610AC
    // 0x8022D128: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_4;
    // 0x8022D128: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x8022D12C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022D130: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022D134: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022D138: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022D13C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D140: jr          $ra
    // 0x8022D144: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022D144: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80225AD4_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225AD4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225AD8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225ADC: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80225AE0: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80225AE4: bne         $v1, $v0, L_80225B7C
    if (ctx->r3 != ctx->r2) {
        // 0x80225AE8: nop
    
            goto L_80225B7C;
    }
    // 0x80225AE8: nop

    // 0x80225AEC: jal         0x8004F144
    // 0x80225AF0: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80225AF0: nop

    after_0:
    // 0x80225AF4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80225AF8: beq         $v1, $zero, L_80225B34
    if (ctx->r3 == 0) {
        // 0x80225AFC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225B34;
    }
    // 0x80225AFC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225B00: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80225B04: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80225B08: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80225B0C: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x80225B10: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225B14: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x80225B18: addiu       $v0, $zero, -0x1068
    ctx->r2 = ADD32(0, -0X1068);
    // 0x80225B1C: sh          $v0, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = ctx->r2;
    // 0x80225B20: addiu       $v0, $zero, -0x1CF
    ctx->r2 = ADD32(0, -0X1CF);
    // 0x80225B24: sh          $v0, 0x1E($v1)
    MEM_H(0X1E, ctx->r3) = ctx->r2;
    // 0x80225B28: addiu       $v0, $zero, -0x15EF
    ctx->r2 = ADD32(0, -0X15EF);
    // 0x80225B2C: sb          $zero, 0xD($v1)
    MEM_B(0XD, ctx->r3) = 0;
    // 0x80225B30: sh          $v0, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r2;
L_80225B34:
    // 0x80225B34: jal         0x8004F144
    // 0x80225B38: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_1;
    // 0x80225B38: nop

    after_1:
    // 0x80225B3C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80225B40: beq         $v1, $zero, L_80225B7C
    if (ctx->r3 == 0) {
        // 0x80225B44: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225B7C;
    }
    // 0x80225B44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225B48: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80225B4C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80225B50: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80225B54: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x80225B58: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225B5C: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x80225B60: addiu       $v0, $zero, -0x1068
    ctx->r2 = ADD32(0, -0X1068);
    // 0x80225B64: sh          $v0, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = ctx->r2;
    // 0x80225B68: addiu       $v0, $zero, -0x1CF
    ctx->r2 = ADD32(0, -0X1CF);
    // 0x80225B6C: sh          $v0, 0x1E($v1)
    MEM_H(0X1E, ctx->r3) = ctx->r2;
    // 0x80225B70: addiu       $v0, $zero, -0x1630
    ctx->r2 = ADD32(0, -0X1630);
    // 0x80225B74: sb          $zero, 0xD($v1)
    MEM_B(0XD, ctx->r3) = 0;
    // 0x80225B78: sh          $v0, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r2;
L_80225B7C:
    // 0x80225B7C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225B80: jr          $ra
    // 0x80225B84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225B84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225894_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225894: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80225898: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8022589C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802258A0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802258A4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802258A8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802258AC: bne         $v0, $zero, L_8022598C
    if (ctx->r2 != 0) {
        // 0x802258B0: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_8022598C;
    }
    // 0x802258B0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802258B4: lbu         $v1, 0x5($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X5);
    // 0x802258B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802258BC: beq         $v1, $v0, L_8022592C
    if (ctx->r3 == ctx->r2) {
        // 0x802258C0: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8022592C;
    }
    // 0x802258C0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802258C4: beql        $v0, $zero, L_802258DC
    if (ctx->r2 == 0) {
        // 0x802258C8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802258DC;
    }
    goto skip_0;
    // 0x802258C8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802258CC: beq         $v1, $zero, L_802258F4
    if (ctx->r3 == 0) {
        // 0x802258D0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_802258F4;
    }
    // 0x802258D0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802258D4: j           L_8022598C
    // 0x802258D8: nop

        goto L_8022598C;
    // 0x802258D8: nop

L_802258DC:
    // 0x802258DC: beq         $v1, $v0, L_8022593C
    if (ctx->r3 == ctx->r2) {
        // 0x802258E0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022593C;
    }
    // 0x802258E0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802258E4: beq         $v1, $v0, L_80225980
    if (ctx->r3 == ctx->r2) {
        // 0x802258E8: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_80225980;
    }
    // 0x802258E8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x802258EC: j           L_8022598C
    // 0x802258F0: nop

        goto L_8022598C;
    // 0x802258F0: nop

L_802258F4:
    // 0x802258F4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802258F8: jal         0x80036B00
    // 0x802258FC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_0;
    // 0x802258FC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80225900: addiu       $a0, $zero, 0x7E
    ctx->r4 = ADD32(0, 0X7E);
    // 0x80225904: jal         0x8004CB2C
    // 0x80225908: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_1;
    // 0x80225908: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_1:
    // 0x8022590C: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x80225910: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80225914: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225918: sb          $v0, -0x35A5($at)
    MEM_B(-0X35A5, ctx->r1) = ctx->r2;
    // 0x8022591C: jal         0x80036340
    // 0x80225920: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_80036340_11740(rdram, ctx);
        goto after_2;
    // 0x80225920: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_2:
    // 0x80225924: j           L_80225970
    // 0x80225928: nop

        goto L_80225970;
    // 0x80225928: nop

L_8022592C:
    // 0x8022592C: jal         0x80054578
    // 0x80225930: nop

    func_80054578_2F978(rdram, ctx);
        goto after_3;
    // 0x80225930: nop

    after_3:
    // 0x80225934: j           L_80225970
    // 0x80225938: nop

        goto L_80225970;
    // 0x80225938: nop

L_8022593C:
    // 0x8022593C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225940: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225944: jal         0x80034844
    // 0x80225948: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    func_80034844_FC44(rdram, ctx);
        goto after_4;
    // 0x80225948: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    after_4:
    // 0x8022594C: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80225950: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x80225954: jal         0x80070050
    // 0x80225958: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_5;
    // 0x80225958: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8022595C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80225960: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225964: sb          $zero, 0x4A26($at)
    MEM_B(0X4A26, ctx->r1) = 0;
    // 0x80225968: ori         $v0, $v0, 0x3
    ctx->r2 = ctx->r2 | 0X3;
    // 0x8022596C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_80225970:
    // 0x80225970: lbu         $v0, 0x5($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5);
    // 0x80225974: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225978: j           L_8022598C
    // 0x8022597C: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
        goto L_8022598C;
    // 0x8022597C: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
L_80225980:
    // 0x80225980: jal         0x80225D80
    // 0x80225984: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80225D80_ovl3(rdram, ctx);
        goto after_6;
    // 0x80225984: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_6:
    // 0x80225988: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
L_8022598C:
    // 0x8022598C: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80225990: beq         $v0, $zero, L_802259A8
    if (ctx->r2 == 0) {
        // 0x80225994: nop
    
            goto L_802259A8;
    }
    // 0x80225994: nop

    // 0x80225998: jal         0x8005FB90
    // 0x8022599C: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_7;
    // 0x8022599C: nop

    after_7:
    // 0x802259A0: jal         0x80060018
    // 0x802259A4: nop

    func_80060018_3B418(rdram, ctx);
        goto after_8;
    // 0x802259A4: nop

    after_8:
L_802259A8:
    // 0x802259A8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802259AC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802259B0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802259B4: jr          $ra
    // 0x802259B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802259B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802392BC_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802392BC: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x802392C0: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x802392C4: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x802392C8: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x802392CC: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x802392D0: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x802392D4: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x802392D8: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x802392DC: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x802392E0: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x802392E4: lbu         $v1, 0x3($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X3);
    // 0x802392E8: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x802392EC: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x802392F0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802392F4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802392F8: lui         $s5, 0x8024
    ctx->r21 = S32(0X8024 << 16);
    // 0x802392FC: addu        $s5, $s5, $v0
    ctx->r21 = ADD32(ctx->r21, ctx->r2);
    // 0x80239300: lhu         $s5, -0x12EC($s5)
    ctx->r21 = MEM_HU(ctx->r21, -0X12EC);
    // 0x80239304: addiu       $a2, $sp, 0x1A
    ctx->r6 = ADD32(ctx->r29, 0X1A);
    // 0x80239308: lui         $s6, 0x8024
    ctx->r22 = S32(0X8024 << 16);
    // 0x8023930C: addu        $s6, $s6, $v0
    ctx->r22 = ADD32(ctx->r22, ctx->r2);
    // 0x80239310: lhu         $s6, -0x12EA($s6)
    ctx->r22 = MEM_HU(ctx->r22, -0X12EA);
    // 0x80239314: jal         0x800874D0
    // 0x80239318: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    func_800874D0_628D0(rdram, ctx);
        goto after_0;
    // 0x80239318: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    after_0:
    // 0x8023931C: lh          $a1, 0x18($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X18);
    // 0x80239320: lbu         $v0, 0x3($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X3);
    // 0x80239324: lh          $a2, 0x1A($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X1A);
    // 0x80239328: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8023932C: addiu       $a0, $a0, -0x900
    ctx->r4 = ADD32(ctx->r4, -0X900);
    // 0x80239330: sll         $a3, $s6, 16
    ctx->r7 = S32(ctx->r22 << 16);
    // 0x80239334: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80239338: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023933C: lbu         $v1, -0x1248($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X1248);
    // 0x80239340: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    // 0x80239344: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80239348: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8023934C: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x80239350: jal         0x80086F94
    // 0x80239354: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    func_80086F94_62394(rdram, ctx);
        goto after_1;
    // 0x80239354: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    after_1:
    // 0x80239358: lbu         $v1, 0x3($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X3);
    // 0x8023935C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80239360: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80239364: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80239368: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023936C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80239370: lhu         $v0, -0x12E8($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X12E8);
    // 0x80239374: beq         $v0, $zero, L_80239590
    if (ctx->r2 == 0) {
        // 0x80239378: addu        $s4, $zero, $zero
        ctx->r20 = ADD32(0, 0);
            goto L_80239590;
    }
    // 0x80239378: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
L_8023937C:
    // 0x8023937C: bgez        $s6, L_80239388
    if (SIGNED(ctx->r22) >= 0) {
        // 0x80239380: addu        $v0, $s6, $zero
        ctx->r2 = ADD32(ctx->r22, 0);
            goto L_80239388;
    }
    // 0x80239380: addu        $v0, $s6, $zero
    ctx->r2 = ADD32(ctx->r22, 0);
    // 0x80239384: addiu       $v0, $s6, 0xF
    ctx->r2 = ADD32(ctx->r22, 0XF);
L_80239388:
    // 0x80239388: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8023938C: slt         $v0, $s4, $v0
    ctx->r2 = SIGNED(ctx->r20) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80239390: beq         $v0, $zero, L_8023964C
    if (ctx->r2 == 0) {
        // 0x80239394: addiu       $a1, $sp, 0x20
        ctx->r5 = ADD32(ctx->r29, 0X20);
            goto L_8023964C;
    }
    // 0x80239394: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80239398: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    // 0x8023939C: lh          $v0, 0x14($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X14);
    // 0x802393A0: lh          $a0, 0x16($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X16);
    // 0x802393A4: sll         $s0, $s4, 4
    ctx->r16 = S32(ctx->r20 << 4);
    // 0x802393A8: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x802393AC: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x802393B0: jal         0x800874D0
    // 0x802393B4: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_800874D0_628D0(rdram, ctx);
        goto after_2;
    // 0x802393B4: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_2:
    // 0x802393B8: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x802393BC: jal         0x80087248
    // 0x802393C0: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_3;
    // 0x802393C0: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_3:
    // 0x802393C4: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x802393C8: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x802393CC: lh          $v0, 0x18($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X18);
    // 0x802393D0: lh          $a0, 0x1A($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X1A);
    // 0x802393D4: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    // 0x802393D8: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x802393DC: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x802393E0: jal         0x800874D0
    // 0x802393E4: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_800874D0_628D0(rdram, ctx);
        goto after_4;
    // 0x802393E4: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_4:
    // 0x802393E8: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x802393EC: jal         0x80087248
    // 0x802393F0: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_5;
    // 0x802393F0: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_5:
    // 0x802393F4: addu        $v1, $s5, $zero
    ctx->r3 = ADD32(ctx->r21, 0);
    // 0x802393F8: bgez        $s5, L_80239404
    if (SIGNED(ctx->r21) >= 0) {
        // 0x802393FC: addu        $s2, $v0, $zero
        ctx->r18 = ADD32(ctx->r2, 0);
            goto L_80239404;
    }
    // 0x802393FC: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80239400: addiu       $v1, $s5, 0xFF
    ctx->r3 = ADD32(ctx->r21, 0XFF);
L_80239404:
    // 0x80239404: addu        $a0, $s5, $s0
    ctx->r4 = ADD32(ctx->r21, ctx->r16);
    // 0x80239408: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8023940C: jal         0x800874D0
    // 0x80239410: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    func_800874D0_628D0(rdram, ctx);
        goto after_6;
    // 0x80239410: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    after_6:
    // 0x80239414: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x80239418: jal         0x80087248
    // 0x8023941C: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_7;
    // 0x8023941C: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_7:
    // 0x80239420: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80239424: sltiu       $v0, $s1, 0x1
    ctx->r2 = ctx->r17 < 0X1 ? 1 : 0;
    // 0x80239428: sltiu       $v1, $s2, 0x1
    ctx->r3 = ctx->r18 < 0X1 ? 1 : 0;
    // 0x8023942C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80239430: bnel        $v0, $zero, L_8023937C
    if (ctx->r2 != 0) {
        // 0x80239434: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_8023937C;
    }
    goto skip_0;
    // 0x80239434: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_0:
    // 0x80239438: beq         $a1, $zero, L_80239588
    if (ctx->r5 == 0) {
        // 0x8023943C: addu        $t7, $zero, $zero
        ctx->r15 = ADD32(0, 0);
            goto L_80239588;
    }
    // 0x8023943C: addu        $t7, $zero, $zero
    ctx->r15 = ADD32(0, 0);
    // 0x80239440: addu        $t6, $a1, $zero
    ctx->r14 = ADD32(ctx->r5, 0);
    // 0x80239444: addu        $t5, $s2, $zero
    ctx->r13 = ADD32(ctx->r18, 0);
    // 0x80239448: addu        $t4, $s1, $zero
    ctx->r12 = ADD32(ctx->r17, 0);
L_8023944C:
    // 0x8023944C: lhu         $t1, 0x0($t4)
    ctx->r9 = MEM_HU(ctx->r12, 0X0);
    // 0x80239450: lhu         $v1, 0x0($t5)
    ctx->r3 = MEM_HU(ctx->r13, 0X0);
    // 0x80239454: lb          $t3, 0xD($s3)
    ctx->r11 = MEM_B(ctx->r19, 0XD);
    // 0x80239458: andi        $a2, $t1, 0xFFFF
    ctx->r6 = ctx->r9 & 0XFFFF;
    // 0x8023945C: srl         $t2, $a2, 11
    ctx->r10 = S32(U32(ctx->r6) >> 11);
    // 0x80239460: srl         $a3, $v1, 11
    ctx->r7 = S32(U32(ctx->r3) >> 11);
    // 0x80239464: subu        $a3, $a3, $t2
    ctx->r7 = SUB32(ctx->r7, ctx->r10);
    // 0x80239468: mult        $a3, $t3
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023946C: mflo        $a3
    ctx->r7 = lo;
    // 0x80239470: lb          $a1, 0xC($s3)
    ctx->r5 = MEM_B(ctx->r19, 0XC);
    // 0x80239474: nop

    // 0x80239478: div         $zero, $a3, $a1
    lo = S32(S64(S32(ctx->r7)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r7)) % S64(S32(ctx->r5)));
    // 0x8023947C: bne         $a1, $zero, L_80239488
    if (ctx->r5 != 0) {
        // 0x80239480: nop
    
            goto L_80239488;
    }
    // 0x80239480: nop

    // 0x80239484: break       7
    do_break(2149815428);
L_80239488:
    // 0x80239488: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023948C: bne         $a1, $at, L_802394A0
    if (ctx->r5 != ctx->r1) {
        // 0x80239490: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_802394A0;
    }
    // 0x80239490: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80239494: bne         $a3, $at, L_802394A0
    if (ctx->r7 != ctx->r1) {
        // 0x80239498: nop
    
            goto L_802394A0;
    }
    // 0x80239498: nop

    // 0x8023949C: break       6
    do_break(2149815452);
L_802394A0:
    // 0x802394A0: mflo        $a3
    ctx->r7 = lo;
    // 0x802394A4: sra         $t0, $a2, 6
    ctx->r8 = S32(SIGNED(ctx->r6) >> 6);
    // 0x802394A8: andi        $t0, $t0, 0x1F
    ctx->r8 = ctx->r8 & 0X1F;
    // 0x802394AC: sra         $v0, $v1, 6
    ctx->r2 = S32(SIGNED(ctx->r3) >> 6);
    // 0x802394B0: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x802394B4: subu        $v0, $v0, $t0
    ctx->r2 = SUB32(ctx->r2, ctx->r8);
    // 0x802394B8: mult        $v0, $t3
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802394BC: mflo        $v0
    ctx->r2 = lo;
    // 0x802394C0: nop

    // 0x802394C4: nop

    // 0x802394C8: div         $zero, $v0, $a1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r5)));
    // 0x802394CC: bne         $a1, $zero, L_802394D8
    if (ctx->r5 != 0) {
        // 0x802394D0: nop
    
            goto L_802394D8;
    }
    // 0x802394D0: nop

    // 0x802394D4: break       7
    do_break(2149815508);
L_802394D8:
    // 0x802394D8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802394DC: bne         $a1, $at, L_802394F0
    if (ctx->r5 != ctx->r1) {
        // 0x802394E0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_802394F0;
    }
    // 0x802394E0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802394E4: bne         $v0, $at, L_802394F0
    if (ctx->r2 != ctx->r1) {
        // 0x802394E8: nop
    
            goto L_802394F0;
    }
    // 0x802394E8: nop

    // 0x802394EC: break       6
    do_break(2149815532);
L_802394F0:
    // 0x802394F0: mflo        $v0
    ctx->r2 = lo;
    // 0x802394F4: sra         $a2, $a2, 1
    ctx->r6 = S32(SIGNED(ctx->r6) >> 1);
    // 0x802394F8: andi        $a2, $a2, 0x1F
    ctx->r6 = ctx->r6 & 0X1F;
    // 0x802394FC: sra         $v1, $v1, 1
    ctx->r3 = S32(SIGNED(ctx->r3) >> 1);
    // 0x80239500: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x80239504: subu        $v1, $v1, $a2
    ctx->r3 = SUB32(ctx->r3, ctx->r6);
    // 0x80239508: mult        $v1, $t3
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023950C: mflo        $v1
    ctx->r3 = lo;
    // 0x80239510: nop

    // 0x80239514: nop

    // 0x80239518: div         $zero, $v1, $a1
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r5)));
    // 0x8023951C: bne         $a1, $zero, L_80239528
    if (ctx->r5 != 0) {
        // 0x80239520: nop
    
            goto L_80239528;
    }
    // 0x80239520: nop

    // 0x80239524: break       7
    do_break(2149815588);
L_80239528:
    // 0x80239528: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023952C: bne         $a1, $at, L_80239540
    if (ctx->r5 != ctx->r1) {
        // 0x80239530: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80239540;
    }
    // 0x80239530: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80239534: bne         $v1, $at, L_80239540
    if (ctx->r3 != ctx->r1) {
        // 0x80239538: nop
    
            goto L_80239540;
    }
    // 0x80239538: nop

    // 0x8023953C: break       6
    do_break(2149815612);
L_80239540:
    // 0x80239540: mflo        $v1
    ctx->r3 = lo;
    // 0x80239544: addiu       $t5, $t5, 0x2
    ctx->r13 = ADD32(ctx->r13, 0X2);
    // 0x80239548: addiu       $t4, $t4, 0x2
    ctx->r12 = ADD32(ctx->r12, 0X2);
    // 0x8023954C: addiu       $t7, $t7, 0x1
    ctx->r15 = ADD32(ctx->r15, 0X1);
    // 0x80239550: andi        $t1, $t1, 0x1
    ctx->r9 = ctx->r9 & 0X1;
    // 0x80239554: addu        $t2, $t2, $a3
    ctx->r10 = ADD32(ctx->r10, ctx->r7);
    // 0x80239558: sll         $t2, $t2, 11
    ctx->r10 = S32(ctx->r10 << 11);
    // 0x8023955C: or          $t1, $t1, $t2
    ctx->r9 = ctx->r9 | ctx->r10;
    // 0x80239560: addu        $t0, $t0, $v0
    ctx->r8 = ADD32(ctx->r8, ctx->r2);
    // 0x80239564: sll         $t0, $t0, 6
    ctx->r8 = S32(ctx->r8 << 6);
    // 0x80239568: or          $t1, $t1, $t0
    ctx->r9 = ctx->r9 | ctx->r8;
    // 0x8023956C: slti        $v0, $t7, 0x10
    ctx->r2 = SIGNED(ctx->r15) < 0X10 ? 1 : 0;
    // 0x80239570: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x80239574: sll         $a2, $a2, 1
    ctx->r6 = S32(ctx->r6 << 1);
    // 0x80239578: or          $t1, $t1, $a2
    ctx->r9 = ctx->r9 | ctx->r6;
    // 0x8023957C: sh          $t1, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r9;
    // 0x80239580: bne         $v0, $zero, L_8023944C
    if (ctx->r2 != 0) {
        // 0x80239584: addiu       $t6, $t6, 0x2
        ctx->r14 = ADD32(ctx->r14, 0X2);
            goto L_8023944C;
    }
    // 0x80239584: addiu       $t6, $t6, 0x2
    ctx->r14 = ADD32(ctx->r14, 0X2);
L_80239588:
    // 0x80239588: j           L_8023937C
    // 0x8023958C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
        goto L_8023937C;
    // 0x8023958C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_80239590:
    // 0x80239590: lb          $v0, 0xD($s3)
    ctx->r2 = MEM_B(ctx->r19, 0XD);
    // 0x80239594: bne         $v0, $zero, L_8023964C
    if (ctx->r2 != 0) {
        // 0x80239598: nop
    
            goto L_8023964C;
    }
    // 0x80239598: nop

L_8023959C:
    // 0x8023959C: addu        $v0, $s6, $zero
    ctx->r2 = ADD32(ctx->r22, 0);
    // 0x802395A0: bltzl       $v0, L_802395A8
    if (SIGNED(ctx->r2) < 0) {
        // 0x802395A4: addiu       $v0, $v0, 0xF
        ctx->r2 = ADD32(ctx->r2, 0XF);
            goto L_802395A8;
    }
    goto skip_1;
    // 0x802395A4: addiu       $v0, $v0, 0xF
    ctx->r2 = ADD32(ctx->r2, 0XF);
    skip_1:
L_802395A8:
    // 0x802395A8: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x802395AC: slt         $v0, $s4, $v0
    ctx->r2 = SIGNED(ctx->r20) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802395B0: beq         $v0, $zero, L_8023964C
    if (ctx->r2 == 0) {
        // 0x802395B4: addiu       $a1, $sp, 0x20
        ctx->r5 = ADD32(ctx->r29, 0X20);
            goto L_8023964C;
    }
    // 0x802395B4: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x802395B8: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    // 0x802395BC: lh          $v0, 0x14($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X14);
    // 0x802395C0: lh          $a0, 0x16($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X16);
    // 0x802395C4: sll         $s0, $s4, 4
    ctx->r16 = S32(ctx->r20 << 4);
    // 0x802395C8: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x802395CC: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x802395D0: jal         0x800874D0
    // 0x802395D4: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_800874D0_628D0(rdram, ctx);
        goto after_8;
    // 0x802395D4: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_8:
    // 0x802395D8: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x802395DC: jal         0x80087248
    // 0x802395E0: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_9;
    // 0x802395E0: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_9:
    // 0x802395E4: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x802395E8: bgez        $s5, L_802395F4
    if (SIGNED(ctx->r21) >= 0) {
        // 0x802395EC: addu        $v0, $s5, $zero
        ctx->r2 = ADD32(ctx->r21, 0);
            goto L_802395F4;
    }
    // 0x802395EC: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
    // 0x802395F0: addiu       $v0, $s5, 0xFF
    ctx->r2 = ADD32(ctx->r21, 0XFF);
L_802395F4:
    // 0x802395F4: sra         $v0, $v0, 8
    ctx->r2 = S32(SIGNED(ctx->r2) >> 8);
    // 0x802395F8: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x802395FC: subu        $v1, $s5, $v0
    ctx->r3 = SUB32(ctx->r21, ctx->r2);
    // 0x80239600: addu        $a0, $s0, $v1
    ctx->r4 = ADD32(ctx->r16, ctx->r3);
    // 0x80239604: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80239608: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8023960C: jal         0x800874D0
    // 0x80239610: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    func_800874D0_628D0(rdram, ctx);
        goto after_10;
    // 0x80239610: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    after_10:
    // 0x80239614: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x80239618: jal         0x80087248
    // 0x8023961C: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_11;
    // 0x8023961C: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_11:
    // 0x80239620: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80239624: sltiu       $v0, $s1, 0x1
    ctx->r2 = ctx->r17 < 0X1 ? 1 : 0;
    // 0x80239628: sltiu       $v1, $a1, 0x1
    ctx->r3 = ctx->r5 < 0X1 ? 1 : 0;
    // 0x8023962C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80239630: bnel        $v0, $zero, L_8023959C
    if (ctx->r2 != 0) {
        // 0x80239634: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_8023959C;
    }
    goto skip_2;
    // 0x80239634: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_2:
    // 0x80239638: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023963C: jal         0x80099F90
    // 0x80239640: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    bcopy_recomp(rdram, ctx);
        goto after_12;
    // 0x80239640: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_12:
    // 0x80239644: j           L_8023959C
    // 0x80239648: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
        goto L_8023959C;
    // 0x80239648: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_8023964C:
    // 0x8023964C: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x80239650: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x80239654: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x80239658: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x8023965C: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x80239660: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x80239664: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x80239668: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x8023966C: jr          $ra
    // 0x80239670: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    TRACE_RETURN()
    return;
    // 0x80239670: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_8022E04C_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E04C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E050: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022E054: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x8022E058: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022E05C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022E060: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E064: lw          $v0, -0x2090($at)
    ctx->r2 = MEM_W(ctx->r1, -0X2090);
    // 0x8022E068: jalr        $v0
    // 0x8022E06C: addiu       $a1, $a0, 0x88
    ctx->r5 = ADD32(ctx->r4, 0X88);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022E06C: addiu       $a1, $a0, 0x88
    ctx->r5 = ADD32(ctx->r4, 0X88);
    after_0:
    // 0x8022E070: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022E074: jr          $ra
    // 0x8022E078: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E078: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023B308_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B308: lhu         $v0, 0x38($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X38);
    // 0x8023B30C: lhu         $v1, 0x3A($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X3A);
    // 0x8023B310: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x8023B314: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8023B318: sh          $v1, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r3;
    // 0x8023B31C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023B320: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8023B324: sh          $v0, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r2;
    // 0x8023B328: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x8023B32C: bne         $v1, $v0, L_8023B340
    if (ctx->r3 != ctx->r2) {
        // 0x8023B330: nop
    
            goto L_8023B340;
    }
    // 0x8023B330: nop

    // 0x8023B334: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x8023B338: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023B33C: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_8023B340:
    // 0x8023B340: jr          $ra
    // 0x8023B344: nop

    TRACE_RETURN()
    return;
    // 0x8023B344: nop

;}
RECOMP_FUNC void func_80225A84_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225A84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225A88: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225A8C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225A90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225A94: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x80225A98: bne         $v0, $zero, L_80225AC4
    if (ctx->r2 != 0) {
        // 0x80225A9C: nop
    
            goto L_80225AC4;
    }
    // 0x80225A9C: nop

    // 0x80225AA0: jal         0x8004F488
    // 0x80225AA4: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    func_8004F488_2A888(rdram, ctx);
        goto after_0;
    // 0x80225AA4: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    after_0:
    // 0x80225AA8: jal         0x8004F488
    // 0x80225AAC: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    func_8004F488_2A888(rdram, ctx);
        goto after_1;
    // 0x80225AAC: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    after_1:
    // 0x80225AB0: jal         0x8004F418
    // 0x80225AB4: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    func_8004F418_2A818(rdram, ctx);
        goto after_2;
    // 0x80225AB4: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    after_2:
    // 0x80225AB8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80225ABC: jal         0x80225D80
    // 0x80225AC0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80225D80_ovl3(rdram, ctx);
        goto after_3;
    // 0x80225AC0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
L_80225AC4:
    // 0x80225AC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225AC8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225ACC: jr          $ra
    // 0x80225AD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225AD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802309B0_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802309B0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802309B4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802309B8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802309BC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802309C0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802309C4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802309C8: jal         0x8004D5D4
    // 0x802309CC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x802309CC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    after_0:
    // 0x802309D0: lui         $s2, 0x8024
    ctx->r18 = S32(0X8024 << 16);
    // 0x802309D4: addiu       $s2, $s2, -0x920
    ctx->r18 = ADD32(ctx->r18, -0X920);
    // 0x802309D8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x802309DC: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x802309E0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x802309E4: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802309E8: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x802309EC: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x802309F0: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x802309F4: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x802309F8: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x802309FC: sh          $zero, 0x348($s0)
    MEM_H(0X348, ctx->r16) = 0;
    // 0x80230A00: jal         0x8009A3B4
    // 0x80230A04: sw          $zero, 0x34C($s0)
    MEM_W(0X34C, ctx->r16) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80230A04: sw          $zero, 0x34C($s0)
    MEM_W(0X34C, ctx->r16) = 0;
    after_1:
    // 0x80230A08: addiu       $s1, $s0, 0x354
    ctx->r17 = ADD32(ctx->r16, 0X354);
    // 0x80230A0C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80230A10: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80230A14: jal         0x8009A3B4
    // 0x80230A18: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80230A18: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80230A1C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80230A20: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80230A24: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80230A28: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    // 0x80230A2C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80230A30: jal         0x8004DBA0
    // 0x80230A34: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_3;
    // 0x80230A34: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_3:
    // 0x80230A38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230A3C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80230A40: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80230A44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230A48: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80230A4C: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80230A50: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x80230A54: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x80230A58: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x80230A5C: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x80230A60: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x80230A64: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80230A68: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x80230A6C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80230A70: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80230A74: jal         0x80050294
    // 0x80230A78: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x80230A78: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    after_4:
    // 0x80230A7C: jal         0x80230A9C
    // 0x80230A80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80230A9C_ovl3(rdram, ctx);
        goto after_5;
    // 0x80230A80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80230A84: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80230A88: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80230A8C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80230A90: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80230A94: jr          $ra
    // 0x80230A98: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80230A98: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802281E8_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802281E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802281EC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802281F0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802281F4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802281F8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802281FC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228200: bne         $v0, $zero, L_80228220
    if (ctx->r2 != 0) {
        // 0x80228204: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_80228220;
    }
    // 0x80228204: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x80228208: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x8022820C: jal         0x80050294
    // 0x80228210: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80228210: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80228214: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228218: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022821C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80228220:
    // 0x80228220: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80228224: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x80228228: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022822C: bne         $v1, $v0, L_80228250
    if (ctx->r3 != ctx->r2) {
        // 0x80228230: addiu       $v0, $zero, 0x4B
        ctx->r2 = ADD32(0, 0X4B);
            goto L_80228250;
    }
    // 0x80228230: addiu       $v0, $zero, 0x4B
    ctx->r2 = ADD32(0, 0X4B);
    // 0x80228234: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228238: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022823C: jal         0x802284C0
    // 0x80228240: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_802284C0_ovl3(rdram, ctx);
        goto after_1;
    // 0x80228240: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_1:
    // 0x80228244: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80228248: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x8022824C: addiu       $v0, $zero, 0x4B
    ctx->r2 = ADD32(0, 0X4B);
L_80228250:
    // 0x80228250: bne         $v1, $v0, L_80228264
    if (ctx->r3 != ctx->r2) {
        // 0x80228254: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80228264;
    }
    // 0x80228254: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228258: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022825C: jal         0x802284C0
    // 0x80228260: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_802284C0_ovl3(rdram, ctx);
        goto after_2;
    // 0x80228260: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_2:
L_80228264:
    // 0x80228264: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80228268: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022826C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228270: jr          $ra
    // 0x80228274: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80228274: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802264C4_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802264C4: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x802264C8: bne         $v0, $zero, L_802264E0
    if (ctx->r2 != 0) {
        // 0x802264CC: addiu       $v1, $zero, 0x2
        ctx->r3 = ADD32(0, 0X2);
            goto L_802264E0;
    }
    // 0x802264CC: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x802264D0: lw          $v0, 0x3C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X3C);
    // 0x802264D4: sb          $v1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r3;
    // 0x802264D8: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
    // 0x802264DC: sb          $zero, 0xD($v0)
    MEM_B(0XD, ctx->r2) = 0;
L_802264E0:
    // 0x802264E0: jr          $ra
    // 0x802264E4: nop

    TRACE_RETURN()
    return;
    // 0x802264E4: nop

;}
RECOMP_FUNC void func_80228278_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228278: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022827C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228280: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228284: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80228288: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022828C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228290: bne         $v0, $zero, L_802282C0
    if (ctx->r2 != 0) {
        // 0x80228294: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_802282C0;
    }
    // 0x80228294: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x80228298: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x8022829C: jal         0x80050294
    // 0x802282A0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802282A0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802282A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802282A8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802282AC: jal         0x802284C0
    // 0x802282B0: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_802284C0_ovl3(rdram, ctx);
        goto after_1;
    // 0x802282B0: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_1:
    // 0x802282B4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802282B8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802282BC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802282C0:
    // 0x802282C0: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802282C4: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x802282C8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802282CC: beq         $v1, $v0, L_80228304
    if (ctx->r3 == ctx->r2) {
        // 0x802282D0: slti        $v0, $v1, 0x81
        ctx->r2 = SIGNED(ctx->r3) < 0X81 ? 1 : 0;
            goto L_80228304;
    }
    // 0x802282D0: slti        $v0, $v1, 0x81
    ctx->r2 = SIGNED(ctx->r3) < 0X81 ? 1 : 0;
    // 0x802282D4: beq         $v0, $zero, L_802282EC
    if (ctx->r2 == 0) {
        // 0x802282D8: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_802282EC;
    }
    // 0x802282D8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802282DC: beq         $v1, $v0, L_802282F8
    if (ctx->r3 == ctx->r2) {
        // 0x802282E0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802282F8;
    }
    // 0x802282E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802282E4: j           L_80228318
    // 0x802282E8: nop

        goto L_80228318;
    // 0x802282E8: nop

L_802282EC:
    // 0x802282EC: addiu       $v0, $zero, 0x8C
    ctx->r2 = ADD32(0, 0X8C);
    // 0x802282F0: bne         $v1, $v0, L_80228318
    if (ctx->r3 != ctx->r2) {
        // 0x802282F4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80228318;
    }
    // 0x802282F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_802282F8:
    // 0x802282F8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802282FC: j           L_80228310
    // 0x80228300: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
        goto L_80228310;
    // 0x80228300: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
L_80228304:
    // 0x80228304: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228308: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022830C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
L_80228310:
    // 0x80228310: jal         0x802284C0
    // 0x80228314: nop

    func_802284C0_ovl3(rdram, ctx);
        goto after_2;
    // 0x80228314: nop

    after_2:
L_80228318:
    // 0x80228318: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022831C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228320: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228324: jr          $ra
    // 0x80228328: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80228328: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022BDE0_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BDE0: lhu         $v0, 0x350($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X350);
    // 0x8022BDE4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022BDE8: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x8022BDEC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BDF0: bne         $v0, $zero, L_8022BDFC
    if (ctx->r2 != 0) {
        // 0x8022BDF4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022BDFC;
    }
    // 0x8022BDF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022BDF8: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_8022BDFC:
    // 0x8022BDFC: jr          $ra
    // 0x8022BE00: nop

    TRACE_RETURN()
    return;
    // 0x8022BE00: nop

;}
RECOMP_FUNC void func_80236338_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236338: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8023633C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80236340: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80236344: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80236348: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8023634C: lw          $v0, 0xC8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC8);
    // 0x80236350: lui         $v1, 0x1A00
    ctx->r3 = S32(0X1A00 << 16);
    // 0x80236354: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80236358: bne         $v0, $zero, L_8023639C
    if (ctx->r2 != 0) {
        // 0x8023635C: addiu       $s1, $s0, 0x14
        ctx->r17 = ADD32(ctx->r16, 0X14);
            goto L_8023639C;
    }
    // 0x8023635C: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x80236360: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80236364: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80236368: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023636C: jal         0x8003E964
    // 0x80236370: ori         $a3, $zero, 0xFFFF
    ctx->r7 = 0 | 0XFFFF;
    func_8003E964_19D64(rdram, ctx);
        goto after_0;
    // 0x80236370: ori         $a3, $zero, 0xFFFF
    ctx->r7 = 0 | 0XFFFF;
    after_0:
    // 0x80236374: slti        $v0, $v0, -0x10
    ctx->r2 = SIGNED(ctx->r2) < -0X10 ? 1 : 0;
    // 0x80236378: bne         $v0, $zero, L_8023639C
    if (ctx->r2 != 0) {
        // 0x8023637C: nop
    
            goto L_8023639C;
    }
    // 0x8023637C: nop

    // 0x80236380: lh          $v0, 0x7C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X7C);
    // 0x80236384: bne         $v0, $zero, L_8023639C
    if (ctx->r2 != 0) {
        // 0x80236388: ori         $v0, $zero, 0xFFFF
        ctx->r2 = 0 | 0XFFFF;
            goto L_8023639C;
    }
    // 0x80236388: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x8023638C: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x80236390: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80236394: bne         $v0, $zero, L_802363B4
    if (ctx->r2 != 0) {
        // 0x80236398: addiu       $a0, $s0, 0x34
        ctx->r4 = ADD32(ctx->r16, 0X34);
            goto L_802363B4;
    }
    // 0x80236398: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
L_8023639C:
    // 0x8023639C: jal         0x8023644C
    // 0x802363A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023644C_ovl3(rdram, ctx);
        goto after_1;
    // 0x802363A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802363A4: jal         0x8004F4F8
    // 0x802363A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_2;
    // 0x802363A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x802363AC: j           L_802363D0
    // 0x802363B0: nop

        goto L_802363D0;
    // 0x802363B0: nop

L_802363B4:
    // 0x802363B4: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x802363B8: jal         0x8009A3B4
    // 0x802363BC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x802363BC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_3:
    // 0x802363C0: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x802363C4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802363C8: jal         0x8009A3B4
    // 0x802363CC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x802363CC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
L_802363D0:
    // 0x802363D0: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x802363D4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x802363D8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802363DC: jr          $ra
    // 0x802363E0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x802363E0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_802351A0_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802351A0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802351A4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802351A8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802351AC: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x802351B0: addiu       $s4, $sp, 0x10
    ctx->r20 = ADD32(ctx->r29, 0X10);
    // 0x802351B4: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x802351B8: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x802351BC: addiu       $a1, $a1, -0xA30
    ctx->r5 = ADD32(ctx->r5, -0XA30);
    // 0x802351C0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x802351C4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802351C8: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x802351CC: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x802351D0: jal         0x8009A3B4
    // 0x802351D4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802351D4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    after_0:
    // 0x802351D8: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x802351DC: addiu       $s3, $s0, 0x14
    ctx->r19 = ADD32(ctx->r16, 0X14);
    // 0x802351E0: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x802351E4: jal         0x8009A3B4
    // 0x802351E8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802351E8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x802351EC: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x802351F0: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x802351F4: jal         0x8009A3B4
    // 0x802351F8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x802351F8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x802351FC: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80235200: addiu       $s1, $s0, 0x54
    ctx->r17 = ADD32(ctx->r16, 0X54);
    // 0x80235204: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80235208: jal         0x8009A3B4
    // 0x8023520C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8023520C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x80235210: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80235214: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235218: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023521C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235220: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235224: lw          $v0, -0x1848($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1848);
    // 0x80235228: addiu       $s2, $s0, 0xD0
    ctx->r18 = ADD32(ctx->r16, 0XD0);
    // 0x8023522C: jalr        $v0
    // 0x80235230: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x80235230: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_4:
    // 0x80235234: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80235238: addiu       $s1, $s0, 0x8C
    ctx->r17 = ADD32(ctx->r16, 0X8C);
    // 0x8023523C: jal         0x80031600
    // 0x80235240: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_80031600_CA00(rdram, ctx);
        goto after_5;
    // 0x80235240: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_5:
    // 0x80235244: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80235248: jal         0x80031DA8
    // 0x8023524C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_80031DA8_D1A8(rdram, ctx);
        goto after_6;
    // 0x8023524C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_6:
    // 0x80235250: addiu       $a0, $s0, 0xAC
    ctx->r4 = ADD32(ctx->r16, 0XAC);
    // 0x80235254: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80235258: jal         0x8009A3B4
    // 0x8023525C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x8023525C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_7:
    // 0x80235260: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235264: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80235268: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8023526C: jal         0x80047284
    // 0x80235270: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_8;
    // 0x80235270: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_8:
    // 0x80235274: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235278: jal         0x802358AC
    // 0x8023527C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_802358AC_ovl3(rdram, ctx);
        goto after_9;
    // 0x8023527C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_9:
    // 0x80235280: sw          $zero, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = 0;
    // 0x80235284: sw          $zero, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = 0;
    // 0x80235288: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8023528C: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80235290: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80235294: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80235298: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8023529C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802352A0: jr          $ra
    // 0x802352A4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x802352A4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_802259BC_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802259BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802259C0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802259C4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802259C8: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x802259CC: lbu         $a0, -0x377C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X377C);
    // 0x802259D0: beq         $a0, $zero, L_802259FC
    if (ctx->r4 == 0) {
        // 0x802259D4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802259FC;
    }
    // 0x802259D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802259D8: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x802259DC: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x802259E0: jal         0x80225E1C
    // 0x802259E4: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_80225E1C_ovl3(rdram, ctx);
        goto after_0;
    // 0x802259E4: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_0:
    // 0x802259E8: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802259EC: lbu         $v0, -0x377C($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X377C);
    // 0x802259F0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802259F4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802259F8: sb          $v0, -0x377C($at)
    MEM_B(-0X377C, ctx->r1) = ctx->r2;
L_802259FC:
    // 0x802259FC: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x80225A00: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x80225A04: bne         $v1, $v0, L_80225A14
    if (ctx->r3 != ctx->r2) {
        // 0x80225A08: nop
    
            goto L_80225A14;
    }
    // 0x80225A08: nop

    // 0x80225A0C: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x80225A10: sb          $zero, 0xD($v0)
    MEM_B(0XD, ctx->r2) = 0;
L_80225A14:
    // 0x80225A14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225A18: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225A1C: jr          $ra
    // 0x80225A20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225A20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232980_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232980: jr          $ra
    // 0x80232984: nop

    TRACE_RETURN()
    return;
    // 0x80232984: nop

;}
RECOMP_FUNC void func_80225384_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225384: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80225388: lb          $v1, -0x3BC6($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC6);
    // 0x8022538C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80225390: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x80225394: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225398: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022539C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802253A0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802253A4: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x802253A8: lw          $v1, -0x3C70($at)
    ctx->r3 = MEM_W(ctx->r1, -0X3C70);
    // 0x802253AC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802253B0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802253B4: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x802253B8: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x802253BC: jalr        $v0
    // 0x802253C0: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802253C0: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    after_0:
    // 0x802253C4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802253C8: jr          $ra
    // 0x802253CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802253CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023BBBC_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023BBBC: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x8023BBC0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8023BBC4: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x8023BBC8: bne         $v0, $zero, L_8023BC80
    if (ctx->r2 != 0) {
        // 0x8023BBCC: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_8023BC80;
    }
    // 0x8023BBCC: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8023BBD0: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8023BBD4: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x8023BBD8: bne         $v1, $v0, L_8023BC28
    if (ctx->r3 != ctx->r2) {
        // 0x8023BBDC: addiu       $v1, $zero, -0x1
        ctx->r3 = ADD32(0, -0X1);
            goto L_8023BC28;
    }
    // 0x8023BBDC: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x8023BBE0: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8023BBE4: lbu         $v1, -0x3BC8($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3BC8);
    // 0x8023BBE8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023BBEC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023BBF0: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x8023BBF4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023BBF8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023BBFC: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x8023BC00: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8023BC04: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023BC08: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x8023BC0C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023BC10: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x8023BC14: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023BC18: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x8023BC1C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023BC20: j           L_8023BC64
    // 0x8023BC24: sb          $v1, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r3;
        goto L_8023BC64;
    // 0x8023BC24: sb          $v1, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r3;
L_8023BC28:
    // 0x8023BC28: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8023BC2C: lbu         $v0, -0x3BC8($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3BC8);
    // 0x8023BC30: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023BC34: sb          $v1, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r3;
    // 0x8023BC38: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x8023BC3C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023BC40: sb          $zero, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = 0;
    // 0x8023BC44: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023BC48: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x8023BC4C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023BC50: sb          $v1, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r3;
    // 0x8023BC54: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023BC58: sb          $v1, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r3;
    // 0x8023BC5C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023BC60: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
L_8023BC64:
    // 0x8023BC64: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x8023BC68: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8023BC6C: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x8023BC70: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
    // 0x8023BC74: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023BC78: sb          $v0, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r2;
    // 0x8023BC7C: sb          $zero, 0xD($a1)
    MEM_B(0XD, ctx->r5) = 0;
L_8023BC80:
    // 0x8023BC80: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x8023BC84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023BC88: bne         $v1, $v0, L_8023BCA4
    if (ctx->r3 != ctx->r2) {
        // 0x8023BC8C: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_8023BCA4;
    }
    // 0x8023BC8C: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8023BC90: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x8023BC94: andi        $v0, $v0, 0xFE
    ctx->r2 = ctx->r2 & 0XFE;
    // 0x8023BC98: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x8023BC9C: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x8023BCA0: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
L_8023BCA4:
    // 0x8023BCA4: bne         $v1, $v0, L_8023BCB8
    if (ctx->r3 != ctx->r2) {
        // 0x8023BCA8: nop
    
            goto L_8023BCB8;
    }
    // 0x8023BCA8: nop

    // 0x8023BCAC: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x8023BCB0: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8023BCB4: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
L_8023BCB8:
    // 0x8023BCB8: jr          $ra
    // 0x8023BCBC: nop

    TRACE_RETURN()
    return;
    // 0x8023BCBC: nop

;}
RECOMP_FUNC void func_8022B690_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B690: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B694: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022B698: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022B69C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022B6A0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022B6A4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022B6A8: lw          $v0, -0x22D4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X22D4);
    // 0x8022B6AC: jalr        $v0
    // 0x8022B6B0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022B6B0: nop

    after_0:
    // 0x8022B6B4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022B6B8: jr          $ra
    // 0x8022B6BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B6BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232198_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232198: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023219C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802321A0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802321A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802321A8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802321AC: bne         $v0, $zero, L_802321C8
    if (ctx->r2 != 0) {
        // 0x802321B0: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_802321C8;
    }
    // 0x802321B0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802321B4: jal         0x80050294
    // 0x802321B8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802321B8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802321BC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802321C0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802321C4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802321C8:
    // 0x802321C8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802321CC: lbu         $v1, -0x3A48($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A48);
    // 0x802321D0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802321D4: bne         $v1, $v0, L_80232204
    if (ctx->r3 != ctx->r2) {
        // 0x802321D8: addiu       $v0, $zero, 0x1E
        ctx->r2 = ADD32(0, 0X1E);
            goto L_80232204;
    }
    // 0x802321D8: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x802321DC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802321E0: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x802321E4: bne         $v1, $v0, L_802321FC
    if (ctx->r3 != ctx->r2) {
        // 0x802321E8: addiu       $v0, $zero, 0x8C
        ctx->r2 = ADD32(0, 0X8C);
            goto L_802321FC;
    }
    // 0x802321E8: addiu       $v0, $zero, 0x8C
    ctx->r2 = ADD32(0, 0X8C);
    // 0x802321EC: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x802321F0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802321F4: j           L_80232204
    // 0x802321F8: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
        goto L_80232204;
    // 0x802321F8: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
L_802321FC:
    // 0x802321FC: beql        $v1, $v0, L_80232204
    if (ctx->r3 == ctx->r2) {
        // 0x80232200: sb          $zero, 0xD($s0)
        MEM_B(0XD, ctx->r16) = 0;
            goto L_80232204;
    }
    goto skip_0;
    // 0x80232200: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    skip_0:
L_80232204:
    // 0x80232204: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80232208: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023220C: jr          $ra
    // 0x80232210: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232210: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023BA98_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023BA98: lb          $v0, 0xD($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD);
    // 0x8023BA9C: bne         $v0, $zero, L_8023BABC
    if (ctx->r2 != 0) {
        // 0x8023BAA0: addiu       $v0, $zero, 0x80
        ctx->r2 = ADD32(0, 0X80);
            goto L_8023BABC;
    }
    // 0x8023BAA0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8023BAA4: lbu         $v1, 0xD($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XD);
    // 0x8023BAA8: sb          $v0, 0x448($a0)
    MEM_B(0X448, ctx->r4) = ctx->r2;
    // 0x8023BAAC: sb          $zero, 0x168($a0)
    MEM_B(0X168, ctx->r4) = 0;
    // 0x8023BAB0: sb          $zero, 0x169($a0)
    MEM_B(0X169, ctx->r4) = 0;
    // 0x8023BAB4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8023BAB8: sb          $v1, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r3;
L_8023BABC:
    // 0x8023BABC: jr          $ra
    // 0x8023BAC0: nop

    TRACE_RETURN()
    return;
    // 0x8023BAC0: nop

;}
RECOMP_FUNC void func_8022D7DC_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D7DC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022D7E0: lb          $v1, -0x3C18($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3C18);
    // 0x8022D7E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D7E8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D7EC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D7F0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022D7F4: bne         $v1, $v0, L_8022D81C
    if (ctx->r3 != ctx->r2) {
        // 0x8022D7F8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8022D81C;
    }
    // 0x8022D7F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022D7FC: jal         0x80061724
    // 0x8022D800: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_0;
    // 0x8022D800: nop

    after_0:
    // 0x8022D804: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022D808: jal         0x800616FC
    // 0x8022D80C: addiu       $a1, $zero, 0xDC
    ctx->r5 = ADD32(0, 0XDC);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_1;
    // 0x8022D80C: addiu       $a1, $zero, 0xDC
    ctx->r5 = ADD32(0, 0XDC);
    after_1:
    // 0x8022D810: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022D814: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D818: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
L_8022D81C:
    // 0x8022D81C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022D820: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D824: jr          $ra
    // 0x8022D828: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D828: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80236BE4_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236BE4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80236BE8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80236BEC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80236BF0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80236BF4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236BF8: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80236BFC: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x80236C00: beq         $v0, $zero, L_80236CB8
    if (ctx->r2 == 0) {
        // 0x80236C04: andi        $v0, $v1, 0x3
        ctx->r2 = ctx->r3 & 0X3;
            goto L_80236CB8;
    }
    // 0x80236C04: andi        $v0, $v1, 0x3
    ctx->r2 = ctx->r3 & 0X3;
    // 0x80236C08: bne         $v0, $zero, L_80236C9C
    if (ctx->r2 != 0) {
        // 0x80236C0C: nop
    
            goto L_80236C9C;
    }
    // 0x80236C0C: nop

    // 0x80236C10: jal         0x8004F144
    // 0x80236C14: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80236C14: nop

    after_0:
    // 0x80236C18: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80236C1C: beq         $s0, $zero, L_80236C9C
    if (ctx->r16 == 0) {
        // 0x80236C20: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80236C9C;
    }
    // 0x80236C20: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80236C24: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80236C28: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x80236C2C: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80236C30: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80236C34: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x80236C38: lbu         $v1, 0xC($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XC);
    // 0x80236C3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236C40: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80236C44: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80236C48: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x80236C4C: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
    // 0x80236C50: lhu         $v0, 0x20($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X20);
    // 0x80236C54: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
    // 0x80236C58: lhu         $v0, 0x1C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1C);
    // 0x80236C5C: lui         $v1, 0x3D48
    ctx->r3 = S32(0X3D48 << 16);
    // 0x80236C60: ori         $v1, $v1, 0x4E
    ctx->r3 = ctx->r3 | 0X4E;
    // 0x80236C64: sh          $v0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r2;
    // 0x80236C68: lhu         $a0, 0x1E($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X1E);
    // 0x80236C6C: lui         $v0, 0x2E40
    ctx->r2 = S32(0X2E40 << 16);
    // 0x80236C70: ori         $v0, $v0, 0x4040
    ctx->r2 = ctx->r2 | 0X4040;
    // 0x80236C74: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x80236C78: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80236C7C: sw          $v1, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r3;
    // 0x80236C80: sb          $v0, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r2;
    // 0x80236C84: sb          $zero, 0x23($s0)
    MEM_B(0X23, ctx->r16) = 0;
    // 0x80236C88: jal         0x800A3450
    // 0x80236C8C: sh          $a0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r4;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80236C8C: sh          $a0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r4;
    after_1:
    // 0x80236C90: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80236C94: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236C98: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
L_80236C9C:
    // 0x80236C9C: jal         0x800A3450
    // 0x80236CA0: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x80236CA0: nop

    after_2:
    // 0x80236CA4: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80236CA8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80236CAC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80236CB0: j           L_80236CC0
    // 0x80236CB4: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
        goto L_80236CC0;
    // 0x80236CB4: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
L_80236CB8:
    // 0x80236CB8: jal         0x8004F5C4
    // 0x80236CBC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_3;
    // 0x80236CBC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
L_80236CC0:
    // 0x80236CC0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80236CC4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80236CC8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80236CCC: jr          $ra
    // 0x80236CD0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80236CD0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80236AE4_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236AE4: lbu         $v1, 0x3($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X3);
    // 0x80236AE8: beq         $v1, $zero, L_80236B00
    if (ctx->r3 == 0) {
        // 0x80236AEC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80236B00;
    }
    // 0x80236AEC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236AF0: beq         $v1, $v0, L_80236B24
    if (ctx->r3 == ctx->r2) {
        // 0x80236AF4: nop
    
            goto L_80236B24;
    }
    // 0x80236AF4: nop

    // 0x80236AF8: j           L_80236B40
    // 0x80236AFC: nop

        goto L_80236B40;
    // 0x80236AFC: nop

L_80236B00:
    // 0x80236B00: lbu         $v1, 0xB($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XB);
    // 0x80236B04: sltiu       $v0, $v1, 0x3F
    ctx->r2 = ctx->r3 < 0X3F ? 1 : 0;
    // 0x80236B08: beq         $v0, $zero, L_80236B34
    if (ctx->r2 == 0) {
        // 0x80236B0C: sltiu       $v0, $v1, 0x21
        ctx->r2 = ctx->r3 < 0X21 ? 1 : 0;
            goto L_80236B34;
    }
    // 0x80236B0C: sltiu       $v0, $v1, 0x21
    ctx->r2 = ctx->r3 < 0X21 ? 1 : 0;
    // 0x80236B10: beq         $v0, $zero, L_80236B40
    if (ctx->r2 == 0) {
        // 0x80236B14: nop
    
            goto L_80236B40;
    }
    // 0x80236B14: nop

    // 0x80236B18: lw          $v0, 0x28($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X28);
    // 0x80236B1C: j           L_80236B3C
    // 0x80236B20: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
        goto L_80236B3C;
    // 0x80236B20: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
L_80236B24:
    // 0x80236B24: lbu         $v0, 0xB($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XB);
    // 0x80236B28: sltiu       $v0, $v0, 0xE1
    ctx->r2 = ctx->r2 < 0XE1 ? 1 : 0;
    // 0x80236B2C: bne         $v0, $zero, L_80236B40
    if (ctx->r2 != 0) {
        // 0x80236B30: nop
    
            goto L_80236B40;
    }
    // 0x80236B30: nop

L_80236B34:
    // 0x80236B34: lw          $v0, 0x28($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X28);
    // 0x80236B38: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
L_80236B3C:
    // 0x80236B3C: sw          $v0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r2;
L_80236B40:
    // 0x80236B40: lbu         $v0, 0xB($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XB);
    // 0x80236B44: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80236B48: sb          $v0, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r2;
    // 0x80236B4C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80236B50: bne         $v0, $zero, L_80236B64
    if (ctx->r2 != 0) {
        // 0x80236B54: nop
    
            goto L_80236B64;
    }
    // 0x80236B54: nop

    // 0x80236B58: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80236B5C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236B60: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
L_80236B64:
    // 0x80236B64: jr          $ra
    // 0x80236B68: nop

    TRACE_RETURN()
    return;
    // 0x80236B68: nop

;}
RECOMP_FUNC void func_80236CD4_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236CD4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236CD8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236CDC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80236CE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80236CE4: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x80236CE8: sll         $v1, $v0, 24
    ctx->r3 = S32(ctx->r2 << 24);
    // 0x80236CEC: sra         $a0, $v1, 24
    ctx->r4 = S32(SIGNED(ctx->r3) >> 24);
    // 0x80236CF0: blez        $a0, L_80236DE4
    if (SIGNED(ctx->r4) <= 0) {
        // 0x80236CF4: lui         $v0, 0x5555
        ctx->r2 = S32(0X5555 << 16);
            goto L_80236DE4;
    }
    // 0x80236CF4: lui         $v0, 0x5555
    ctx->r2 = S32(0X5555 << 16);
    // 0x80236CF8: ori         $v0, $v0, 0x5556
    ctx->r2 = ctx->r2 | 0X5556;
    // 0x80236CFC: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80236D00: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x80236D04: mfhi        $a1
    ctx->r5 = hi;
    // 0x80236D08: subu        $v1, $a1, $v1
    ctx->r3 = SUB32(ctx->r5, ctx->r3);
    // 0x80236D0C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80236D10: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80236D14: subu        $v0, $a0, $v0
    ctx->r2 = SUB32(ctx->r4, ctx->r2);
    // 0x80236D18: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80236D1C: bne         $v0, $zero, L_80236D3C
    if (ctx->r2 != 0) {
        // 0x80236D20: nop
    
            goto L_80236D3C;
    }
    // 0x80236D20: nop

    // 0x80236D24: lbu         $v1, 0x22($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X22);
    // 0x80236D28: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x80236D2C: sltiu       $v0, $v0, 0x80
    ctx->r2 = ctx->r2 < 0X80 ? 1 : 0;
    // 0x80236D30: beq         $v0, $zero, L_80236D3C
    if (ctx->r2 == 0) {
        // 0x80236D34: addiu       $v0, $v1, 0x20
        ctx->r2 = ADD32(ctx->r3, 0X20);
            goto L_80236D3C;
    }
    // 0x80236D34: addiu       $v0, $v1, 0x20
    ctx->r2 = ADD32(ctx->r3, 0X20);
    // 0x80236D38: sb          $v0, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r2;
L_80236D3C:
    // 0x80236D3C: jal         0x800A3450
    // 0x80236D40: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80236D40: nop

    after_0:
    // 0x80236D44: lhu         $v1, 0x1C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1C);
    // 0x80236D48: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80236D4C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80236D50: jal         0x800A3450
    // 0x80236D54: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80236D54: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    after_1:
    // 0x80236D58: lhu         $v1, 0x20($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X20);
    // 0x80236D5C: lbu         $a0, 0xE($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XE);
    // 0x80236D60: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80236D64: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80236D68: andi        $a0, $a0, 0x1
    ctx->r4 = ctx->r4 & 0X1;
    // 0x80236D6C: bne         $a0, $zero, L_80236D8C
    if (ctx->r4 != 0) {
        // 0x80236D70: sh          $v1, 0x20($s0)
        MEM_H(0X20, ctx->r16) = ctx->r3;
            goto L_80236D8C;
    }
    // 0x80236D70: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    // 0x80236D74: jal         0x800A3450
    // 0x80236D78: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x80236D78: nop

    after_2:
    // 0x80236D7C: lhu         $v1, 0x1E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1E);
    // 0x80236D80: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80236D84: j           L_80236DA0
    // 0x80236D88: addiu       $v1, $v1, -0x2
    ctx->r3 = ADD32(ctx->r3, -0X2);
        goto L_80236DA0;
    // 0x80236D88: addiu       $v1, $v1, -0x2
    ctx->r3 = ADD32(ctx->r3, -0X2);
L_80236D8C:
    // 0x80236D8C: jal         0x800A3450
    // 0x80236D90: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80236D90: nop

    after_3:
    // 0x80236D94: lhu         $v1, 0x1E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1E);
    // 0x80236D98: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80236D9C: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
L_80236DA0:
    // 0x80236DA0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80236DA4: sh          $v1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r3;
    // 0x80236DA8: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x80236DAC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80236DB0: bne         $v0, $zero, L_80236DC4
    if (ctx->r2 != 0) {
        // 0x80236DB4: lui         $a0, 0xFFFD
        ctx->r4 = S32(0XFFFD << 16);
            goto L_80236DC4;
    }
    // 0x80236DB4: lui         $a0, 0xFFFD
    ctx->r4 = S32(0XFFFD << 16);
    // 0x80236DB8: lhu         $v0, 0x24($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X24);
    // 0x80236DBC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236DC0: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
L_80236DC4:
    // 0x80236DC4: lbu         $v1, 0xE($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XE);
    // 0x80236DC8: lw          $v0, 0x18($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X18);
    // 0x80236DCC: ori         $a0, $a0, 0xFDFE
    ctx->r4 = ctx->r4 | 0XFDFE;
    // 0x80236DD0: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80236DD4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80236DD8: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x80236DDC: j           L_80236DEC
    // 0x80236DE0: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
        goto L_80236DEC;
    // 0x80236DE0: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
L_80236DE4:
    // 0x80236DE4: jal         0x8004F5C4
    // 0x80236DE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_4;
    // 0x80236DE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_80236DEC:
    // 0x80236DEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80236DF0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80236DF4: jr          $ra
    // 0x80236DF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80236DF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802253D0_ovl3(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x802253E0: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x802253E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802253E8: beq         $v1, $v0, L_80225430
    if (ctx->r3 == ctx->r2) {
        // 0x802253EC: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80225430;
    }
    // 0x802253EC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802253F0: beql        $v0, $zero, L_80225408
    if (ctx->r2 == 0) {
        // 0x802253F4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80225408;
    }
    goto skip_0;
    // 0x802253F4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802253F8: beq         $v1, $zero, L_80225418
    if (ctx->r3 == 0) {
        // 0x802253FC: nop
    
            goto L_80225418;
    }
    // 0x802253FC: nop

    // 0x80225400: j           L_80225468
    // 0x80225404: nop

        goto L_80225468;
    // 0x80225404: nop

L_80225408:
    // 0x80225408: beq         $v1, $v0, L_80225448
    if (ctx->r3 == ctx->r2) {
        // 0x8022540C: nop
    
            goto L_80225448;
    }
    // 0x8022540C: nop

    // 0x80225410: j           L_80225468
    // 0x80225414: nop

        goto L_80225468;
    // 0x80225414: nop

L_80225418:
    // 0x80225418: jal         0x8006033C
    // 0x8022541C: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8022541C: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    after_0:
    // 0x80225420: bne         $v0, $zero, L_80225464
    if (ctx->r2 != 0) {
        // 0x80225424: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80225464;
    }
    // 0x80225424: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225428: j           L_80225464
    // 0x8022542C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80225464;
    // 0x8022542C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80225430:
    // 0x80225430: jal         0x8006033C
    // 0x80225434: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80225434: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
    after_1:
    // 0x80225438: beq         $v0, $zero, L_80225468
    if (ctx->r2 == 0) {
        // 0x8022543C: addiu       $a0, $zero, 0x21
        ctx->r4 = ADD32(0, 0X21);
            goto L_80225468;
    }
    // 0x8022543C: addiu       $a0, $zero, 0x21
    ctx->r4 = ADD32(0, 0X21);
    // 0x80225440: j           L_80225458
    // 0x80225444: nop

        goto L_80225458;
    // 0x80225444: nop

L_80225448:
    // 0x80225448: jal         0x8006033C
    // 0x8022544C: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x8022544C: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    after_2:
    // 0x80225450: beq         $v0, $zero, L_80225468
    if (ctx->r2 == 0) {
        // 0x80225454: addiu       $a0, $zero, 0x26
        ctx->r4 = ADD32(0, 0X26);
            goto L_80225468;
    }
    // 0x80225454: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
L_80225458:
    // 0x80225458: jal         0x80060690
    // 0x8022545C: nop

    func_80060690_3BA90(rdram, ctx);
        goto after_3;
    // 0x8022545C: nop

    after_3:
    // 0x80225460: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_80225464:
    // 0x80225464: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225468:
    // 0x80225468: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022546C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225470: jr          $ra
    // 0x80225474: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225474: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226CD0_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226CD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226CD4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80226CD8: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x80226CDC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226CE0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80226CE4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226CE8: lw          $v0, -0x3180($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3180);
    // 0x80226CEC: jalr        $v0
    // 0x80226CF0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80226CF0: nop

    after_0:
    // 0x80226CF4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80226CF8: jr          $ra
    // 0x80226CFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226CFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022580C_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022580C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225810: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225814: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225818: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022581C: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80225820: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225824: beq         $v1, $v0, L_8022585C
    if (ctx->r3 == ctx->r2) {
        // 0x80225828: addiu       $a0, $zero, 0x14
        ctx->r4 = ADD32(0, 0X14);
            goto L_8022585C;
    }
    // 0x80225828: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x8022582C: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x80225830: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80225834: jalr        $v0
    // 0x80225838: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80225838: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8022583C: jal         0x8006072C
    // 0x80225840: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_1;
    // 0x80225840: nop

    after_1:
    // 0x80225844: bne         $v0, $zero, L_8022585C
    if (ctx->r2 != 0) {
        // 0x80225848: addiu       $a0, $zero, 0x8
        ctx->r4 = ADD32(0, 0X8);
            goto L_8022585C;
    }
    // 0x80225848: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x8022584C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80225850: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225854: bne         $v1, $v0, L_80225874
    if (ctx->r3 != ctx->r2) {
        // 0x80225858: nop
    
            goto L_80225874;
    }
    // 0x80225858: nop

L_8022585C:
    // 0x8022585C: jal         0x80036E48
    // 0x80225860: nop

    func_80036E48_12248(rdram, ctx);
        goto after_2;
    // 0x80225860: nop

    after_2:
    // 0x80225864: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225868: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x8022586C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225870: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225874:
    // 0x80225874: jal         0x8005FB90
    // 0x80225878: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_3;
    // 0x80225878: nop

    after_3:
    // 0x8022587C: jal         0x80060018
    // 0x80225880: nop

    func_80060018_3B418(rdram, ctx);
        goto after_4;
    // 0x80225880: nop

    after_4:
    // 0x80225884: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225888: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022588C: jr          $ra
    // 0x80225890: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225890: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80236B90_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236B90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236B94: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80236B98: lb          $v0, 0xD($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD);
    // 0x80236B9C: bne         $v0, $zero, L_80236BBC
    if (ctx->r2 != 0) {
        // 0x80236BA0: nop
    
            goto L_80236BBC;
    }
    // 0x80236BA0: nop

    // 0x80236BA4: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x80236BA8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236BAC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80236BB0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80236BB4: j           L_80236BD0
    // 0x80236BB8: lw          $v0, -0x1740($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1740);
        goto L_80236BD0;
    // 0x80236BB8: lw          $v0, -0x1740($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1740);
L_80236BBC:
    // 0x80236BBC: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x80236BC0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236BC4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80236BC8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80236BCC: lw          $v0, -0x1730($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1730);
L_80236BD0:
    // 0x80236BD0: jalr        $v0
    // 0x80236BD4: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80236BD4: nop

    after_0:
    // 0x80236BD8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80236BDC: jr          $ra
    // 0x80236BE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80236BE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A670_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A670: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A674: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A678: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A67C: lbu         $a2, 0x435($a0)
    ctx->r6 = MEM_BU(ctx->r4, 0X435);
    // 0x8022A680: addiu       $a1, $a0, 0x380
    ctx->r5 = ADD32(ctx->r4, 0X380);
    // 0x8022A684: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A688: andi        $v1, $a2, 0xFF
    ctx->r3 = ctx->r6 & 0XFF;
    // 0x8022A68C: beq         $v1, $v0, L_8022A6C8
    if (ctx->r3 == ctx->r2) {
        // 0x8022A690: addiu       $s0, $a0, 0x434
        ctx->r16 = ADD32(ctx->r4, 0X434);
            goto L_8022A6C8;
    }
    // 0x8022A690: addiu       $s0, $a0, 0x434
    ctx->r16 = ADD32(ctx->r4, 0X434);
    // 0x8022A694: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022A698: beql        $v0, $zero, L_8022A6B0
    if (ctx->r2 == 0) {
        // 0x8022A69C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022A6B0;
    }
    goto skip_0;
    // 0x8022A69C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022A6A0: beq         $v1, $zero, L_8022A6C0
    if (ctx->r3 == 0) {
        // 0x8022A6A4: addiu       $v0, $a2, 0x1
        ctx->r2 = ADD32(ctx->r6, 0X1);
            goto L_8022A6C0;
    }
    // 0x8022A6A4: addiu       $v0, $a2, 0x1
    ctx->r2 = ADD32(ctx->r6, 0X1);
    // 0x8022A6A8: j           L_8022A760
    // 0x8022A6AC: nop

        goto L_8022A760;
    // 0x8022A6AC: nop

L_8022A6B0:
    // 0x8022A6B0: beq         $v1, $v0, L_8022A70C
    if (ctx->r3 == ctx->r2) {
        // 0x8022A6B4: nop
    
            goto L_8022A70C;
    }
    // 0x8022A6B4: nop

    // 0x8022A6B8: j           L_8022A760
    // 0x8022A6BC: nop

        goto L_8022A760;
    // 0x8022A6BC: nop

L_8022A6C0:
    // 0x8022A6C0: sb          $v0, 0x435($a0)
    MEM_B(0X435, ctx->r4) = ctx->r2;
    // 0x8022A6C4: sb          $zero, 0x436($a0)
    MEM_B(0X436, ctx->r4) = 0;
L_8022A6C8:
    // 0x8022A6C8: lhu         $v0, 0xC($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0XC);
    // 0x8022A6CC: bne         $v0, $zero, L_8022A760
    if (ctx->r2 != 0) {
        // 0x8022A6D0: nop
    
            goto L_8022A760;
    }
    // 0x8022A6D0: nop

    // 0x8022A6D4: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x8022A6D8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A6DC: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
    // 0x8022A6E0: lw          $v0, 0xE0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XE0);
    // 0x8022A6E4: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8022A6E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A6EC: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x8022A6F0: lw          $v0, 0xE0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XE0);
    // 0x8022A6F4: lbu         $v0, 0x1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1);
    // 0x8022A6F8: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x8022A6FC: lw          $v0, 0xE0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XE0);
    // 0x8022A700: lbu         $v0, 0x1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1);
    // 0x8022A704: j           L_8022A760
    // 0x8022A708: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
        goto L_8022A760;
    // 0x8022A708: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
L_8022A70C:
    // 0x8022A70C: lhu         $v0, 0x438($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X438);
    // 0x8022A710: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022A714: sh          $v0, 0x438($a0)
    MEM_H(0X438, ctx->r4) = ctx->r2;
    // 0x8022A718: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A71C: bgez        $v0, L_8022A760
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022A720: nop
    
            goto L_8022A760;
    }
    // 0x8022A720: nop

    // 0x8022A724: lbu         $v0, 0x437($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X437);
    // 0x8022A728: addiu       $a1, $v0, -0x1
    ctx->r5 = ADD32(ctx->r2, -0X1);
    // 0x8022A72C: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    // 0x8022A730: sb          $v0, 0x437($a0)
    MEM_B(0X437, ctx->r4) = ctx->r2;
    // 0x8022A734: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022A738: bne         $v0, $zero, L_8022A750
    if (ctx->r2 != 0) {
        // 0x8022A73C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022A750;
    }
    // 0x8022A73C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A740: sb          $v0, 0x435($a0)
    MEM_B(0X435, ctx->r4) = ctx->r2;
    // 0x8022A744: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x8022A748: j           L_8022A758
    // 0x8022A74C: sh          $v0, 0x38C($a0)
    MEM_H(0X38C, ctx->r4) = ctx->r2;
        goto L_8022A758;
    // 0x8022A74C: sh          $v0, 0x38C($a0)
    MEM_H(0X38C, ctx->r4) = ctx->r2;
L_8022A750:
    // 0x8022A750: jal         0x8022AF74
    // 0x8022A754: andi        $a1, $a1, 0x1
    ctx->r5 = ctx->r5 & 0X1;
    func_8022AF74_ovl3(rdram, ctx);
        goto after_0;
    // 0x8022A754: andi        $a1, $a1, 0x1
    ctx->r5 = ctx->r5 & 0X1;
    after_0:
L_8022A758:
    // 0x8022A758: lhu         $v0, 0x6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6);
    // 0x8022A75C: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_8022A760:
    // 0x8022A760: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A764: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A768: jr          $ra
    // 0x8022A76C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A76C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B520_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B520: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B524: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B528: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B52C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B530: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022B534: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x8022B538: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022B53C: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022B540: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022B544: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022B548: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022B54C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022B550: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022B554: jal         0x8004D5D4
    // 0x8022B558: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022B558: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022B55C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B560: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022B564: jal         0x80050294
    // 0x8022B568: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8022B568: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x8022B56C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B570: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x8022B574: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022B578: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022B57C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B580: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B584: jr          $ra
    // 0x8022B588: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B588: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022BF44_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BF44: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022BF48: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022BF4C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022BF50: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022BF54: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022BF58: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8022BF5C: bgez        $v0, L_8022BF80
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022BF60: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022BF80;
    }
    // 0x8022BF60: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022BF64: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022BF68: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x8022BF6C: beq         $a0, $v0, L_8022BF80
    if (ctx->r4 == ctx->r2) {
        // 0x8022BF70: nop
    
            goto L_8022BF80;
    }
    // 0x8022BF70: nop

    // 0x8022BF74: jal         0x8022DC08
    // 0x8022BF78: nop

    func_8022DC08_ovl3(rdram, ctx);
        goto after_0;
    // 0x8022BF78: nop

    after_0:
    // 0x8022BF7C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022BF80:
    // 0x8022BF80: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x8022BF84: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022BF88: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x8022BF8C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BF90: bne         $v0, $zero, L_8022BFFC
    if (ctx->r2 != 0) {
        // 0x8022BF94: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_8022BFFC;
    }
    // 0x8022BF94: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x8022BF98: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022BF9C: bne         $a0, $v0, L_8022BFB4
    if (ctx->r4 != ctx->r2) {
        // 0x8022BFA0: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_8022BFB4;
    }
    // 0x8022BFA0: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8022BFA4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022BFA8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022BFAC: j           L_8022BFCC
    // 0x8022BFB0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8022BFCC;
    // 0x8022BFB0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022BFB4:
    // 0x8022BFB4: jal         0x8022DC18
    // 0x8022BFB8: nop

    func_8022DC18_ovl3(rdram, ctx);
        goto after_1;
    // 0x8022BFB8: nop

    after_1:
    // 0x8022BFBC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022BFC0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022BFC4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022BFC8: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_8022BFCC:
    // 0x8022BFCC: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x8022BFD0: beq         $v0, $zero, L_8022BFE4
    if (ctx->r2 == 0) {
        // 0x8022BFD4: nop
    
            goto L_8022BFE4;
    }
    // 0x8022BFD4: nop

    // 0x8022BFD8: lhu         $v0, 0xA($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA);
    // 0x8022BFDC: j           L_8022BFF4
    // 0x8022BFE0: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
        goto L_8022BFF4;
    // 0x8022BFE0: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
L_8022BFE4:
    // 0x8022BFE4: lhu         $v0, 0xA($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA);
    // 0x8022BFE8: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022BFEC: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022BFF0: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
L_8022BFF4:
    // 0x8022BFF4: lhu         $v0, 0x1E($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1E);
    // 0x8022BFF8: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
L_8022BFFC:
    // 0x8022BFFC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022C000: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022C004: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C008: jr          $ra
    // 0x8022C00C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022C00C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022C010_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C010: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C014: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C018: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C01C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022C020: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x8022C024: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022C028: jal         0x8004FA7C
    // 0x8022C02C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022C02C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x8022C030: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022C034: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022C038: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022C03C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C040: bne         $v0, $zero, L_8022C0A4
    if (ctx->r2 != 0) {
        // 0x8022C044: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022C0A4;
    }
    // 0x8022C044: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022C048: lh          $v1, 0x35C($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X35C);
    // 0x8022C04C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C050: beq         $v1, $zero, L_8022C094
    if (ctx->r3 == 0) {
        // 0x8022C054: sb          $v0, 0xA($s0)
        MEM_B(0XA, ctx->r16) = ctx->r2;
            goto L_8022C094;
    }
    // 0x8022C054: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022C058: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022C05C: addiu       $a1, $s0, 0x354
    ctx->r5 = ADD32(ctx->r16, 0X354);
    // 0x8022C060: jal         0x8009A3B4
    // 0x8022C064: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022C064: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8022C068: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x8022C06C: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8022C070: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x8022C074: lhu         $a1, 0x352($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X352);
    // 0x8022C078: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C07C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022C080: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022C084: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8022C088: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x8022C08C: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x8022C090: sh          $a1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r5;
L_8022C094:
    // 0x8022C094: lhu         $v1, 0x35C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X35C);
    // 0x8022C098: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C09C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022C0A0: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
L_8022C0A4:
    // 0x8022C0A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022C0A8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C0AC: jr          $ra
    // 0x8022C0B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C0B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
