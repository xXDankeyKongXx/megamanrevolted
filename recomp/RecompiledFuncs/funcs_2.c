#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8004EFE4_2A3E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004EFE4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8004EFE8: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x8004EFEC: lw          $a1, -0x781C($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X781C);
    // 0x8004EFF0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8004EFF4: lui         $v1, 0x8000
    ctx->r3 = S32(0X8000 << 16);
    // 0x8004EFF8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8004EFFC: addiu       $s3, $zero, 0x3
    ctx->r19 = ADD32(0, 0X3);
    // 0x8004F000: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8004F004: addiu       $s2, $zero, 0xFF
    ctx->r18 = ADD32(0, 0XFF);
    // 0x8004F008: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8004F00C: lui         $s1, 0x8021
    ctx->r17 = S32(0X8021 << 16);
    // 0x8004F010: addiu       $s1, $s1, -0x2100
    ctx->r17 = ADD32(ctx->r17, -0X2100);
    // 0x8004F014: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8004F018: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
L_8004F01C:
    // 0x8004F01C: sllv        $v0, $a1, $a0
    ctx->r2 = S32(ctx->r5 << (ctx->r4 & 31));
    // 0x8004F020: bltzl       $v0, L_8004F068
    if (SIGNED(ctx->r2) < 0) {
        // 0x8004F024: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_8004F068;
    }
    goto skip_0;
    // 0x8004F024: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_0:
    // 0x8004F028: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8004F02C: lw          $v0, -0x781C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X781C);
    // 0x8004F030: srlv        $v1, $v1, $a0
    ctx->r3 = S32(U32(ctx->r3) >> (ctx->r4 & 31));
    // 0x8004F034: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8004F038: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8004F03C: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x8004F040: sw          $v0, -0x781C($at)
    MEM_W(-0X781C, ctx->r1) = ctx->r2;
    // 0x8004F044: lbu         $s0, 0x1($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0X1);
    // 0x8004F048: jal         0x8009A2B0
    // 0x8004F04C: addiu       $a1, $zero, 0x118
    ctx->r5 = ADD32(0, 0X118);
    bzero_recomp(rdram, ctx);
        goto after_0;
    // 0x8004F04C: addiu       $a1, $zero, 0x118
    ctx->r5 = ADD32(0, 0X118);
    after_0:
    // 0x8004F050: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x8004F054: sb          $s3, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r19;
    // 0x8004F058: sb          $s2, 0xBD($v0)
    MEM_B(0XBD, ctx->r2) = ctx->r18;
    // 0x8004F05C: sb          $s2, 0xBC($v0)
    MEM_B(0XBC, ctx->r2) = ctx->r18;
    // 0x8004F060: j           L_8004F078
    // 0x8004F064: sb          $s0, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r16;
        goto L_8004F078;
    // 0x8004F064: sb          $s0, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r16;
L_8004F068:
    // 0x8004F068: slti        $v0, $a0, 0x20
    ctx->r2 = SIGNED(ctx->r4) < 0X20 ? 1 : 0;
    // 0x8004F06C: bne         $v0, $zero, L_8004F01C
    if (ctx->r2 != 0) {
        // 0x8004F070: addiu       $s1, $s1, 0x118
        ctx->r17 = ADD32(ctx->r17, 0X118);
            goto L_8004F01C;
    }
    // 0x8004F070: addiu       $s1, $s1, 0x118
    ctx->r17 = ADD32(ctx->r17, 0X118);
    // 0x8004F074: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8004F078:
    // 0x8004F078: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8004F07C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8004F080: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8004F084: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8004F088: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8004F08C: jr          $ra
    // 0x8004F090: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8004F090: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80036B58_11F58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80036B58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80036B5C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80036B60: jal         0x8002BE78
    // 0x80036B64: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    func_8002BE78_7278(rdram, ctx);
        goto after_0;
    // 0x80036B64: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    after_0:
    // 0x80036B68: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80036B6C: jr          $ra
    // 0x80036B70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80036B70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8006374C_3EB4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006374C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80063750: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80063754: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80063758: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006375C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80063760: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
    // 0x80063764: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80063768: beq         $v0, $zero, L_8006378C
    if (ctx->r2 == 0) {
        // 0x8006376C: nop
    
            goto L_8006378C;
    }
    // 0x8006376C: nop

    // 0x80063770: jal         0x80034E3C
    // 0x80063774: nop

    func_80034E3C_1023C(rdram, ctx);
        goto after_0;
    // 0x80063774: nop

    after_0:
    // 0x80063778: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8006377C: lui         $v1, 0xFFFE
    ctx->r3 = S32(0XFFFE << 16);
    // 0x80063780: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x80063784: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80063788: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
L_8006378C:
    // 0x8006378C: lw          $v0, 0x6C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X6C);
    // 0x80063790: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80063794: sw          $v0, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r2;
    // 0x80063798: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006379C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800637A0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x800637A4: jr          $ra
    // 0x800637A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x800637A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8007E324_59724(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007E324: lui         $v0, 0x8019
    ctx->r2 = S32(0X8019 << 16);
    // 0x8007E328: lw          $v0, 0x3C30($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3C30);
    // 0x8007E32C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8007E330: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x8007E334: lui         $s3, 0x800C
    ctx->r19 = S32(0X800C << 16);
    // 0x8007E338: lw          $s3, -0x265C($s3)
    ctx->r19 = MEM_W(ctx->r19, -0X265C);
    // 0x8007E33C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8007E340: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8007E344: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x8007E348: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x8007E34C: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8007E350: beq         $v0, $a0, L_8007E388
    if (ctx->r2 == ctx->r4) {
        // 0x8007E354: sw          $s1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r17;
            goto L_8007E388;
    }
    // 0x8007E354: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8007E358: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8007E35C: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x8007E360: lui         $at, 0x8019
    ctx->r1 = S32(0X8019 << 16);
    // 0x8007E364: sw          $a0, 0x3C30($at)
    MEM_W(0X3C30, ctx->r1) = ctx->r4;
    // 0x8007E368: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x8007E36C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007E370: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007E374: lui         $v0, 0xDE00
    ctx->r2 = S32(0XDE00 << 16);
    // 0x8007E378: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x8007E37C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x8007E380: addiu       $v0, $v0, -0x2628
    ctx->r2 = ADD32(ctx->r2, -0X2628);
    // 0x8007E384: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
L_8007E388:
    // 0x8007E388: lui         $v0, 0xDB06
    ctx->r2 = S32(0XDB06 << 16);
    // 0x8007E38C: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x8007E390: lui         $a1, 0xDB06
    ctx->r5 = S32(0XDB06 << 16);
    // 0x8007E394: ori         $a1, $a1, 0xC
    ctx->r5 = ctx->r5 | 0XC;
    // 0x8007E398: lui         $a2, 0xDB06
    ctx->r6 = S32(0XDB06 << 16);
    // 0x8007E39C: ori         $a2, $a2, 0x8
    ctx->r6 = ctx->r6 | 0X8;
    // 0x8007E3A0: lui         $a3, 0xDA38
    ctx->r7 = S32(0XDA38 << 16);
    // 0x8007E3A4: ori         $a3, $a3, 0x3
    ctx->r7 = ctx->r7 | 0X3;
    // 0x8007E3A8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8007E3AC: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8007E3B0: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x8007E3B4: lui         $t0, 0xE200
    ctx->r8 = S32(0XE200 << 16);
    // 0x8007E3B8: ori         $t0, $t0, 0x1C
    ctx->r8 = ctx->r8 | 0X1C;
    // 0x8007E3BC: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007E3C0: sh          $zero, -0x44E6($at)
    MEM_H(-0X44E6, ctx->r1) = 0;
    // 0x8007E3C4: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007E3C8: sh          $zero, -0x44E8($at)
    MEM_H(-0X44E8, ctx->r1) = 0;
    // 0x8007E3CC: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007E3D0: sw          $zero, -0x44E4($at)
    MEM_W(-0X44E4, ctx->r1) = 0;
    // 0x8007E3D4: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007E3D8: sw          $zero, -0x44DC($at)
    MEM_W(-0X44DC, ctx->r1) = 0;
    // 0x8007E3DC: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007E3E0: sb          $zero, -0x44E0($at)
    MEM_B(-0X44E0, ctx->r1) = 0;
    // 0x8007E3E4: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007E3E8: sb          $zero, -0x44D8($at)
    MEM_B(-0X44D8, ctx->r1) = 0;
    // 0x8007E3EC: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007E3F0: sb          $zero, -0x44D7($at)
    MEM_B(-0X44D7, ctx->r1) = 0;
    // 0x8007E3F4: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007E3F8: sb          $zero, -0x44D6($at)
    MEM_B(-0X44D6, ctx->r1) = 0;
    // 0x8007E3FC: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007E400: sb          $zero, -0x44D5($at)
    MEM_B(-0X44D5, ctx->r1) = 0;
    // 0x8007E404: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x8007E408: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x8007E40C: addiu       $v0, $v0, -0x25A8
    ctx->r2 = ADD32(ctx->r2, -0X25A8);
    // 0x8007E410: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x8007E414: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x8007E418: addiu       $v0, $v0, -0x24A8
    ctx->r2 = ADD32(ctx->r2, -0X24A8);
    // 0x8007E41C: sw          $v0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r2;
    // 0x8007E420: sw          $v0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r2;
    // 0x8007E424: lui         $v0, 0xDE00
    ctx->r2 = S32(0XDE00 << 16);
    // 0x8007E428: sw          $v0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r2;
    // 0x8007E42C: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x8007E430: sw          $a1, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r5;
    // 0x8007E434: sw          $a2, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r6;
    // 0x8007E438: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x8007E43C: sw          $a3, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r7;
    // 0x8007E440: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8007E444: lui         $a2, 0xC810
    ctx->r6 = S32(0XC810 << 16);
    // 0x8007E448: ori         $a2, $a2, 0x49D8
    ctx->r6 = ctx->r6 | 0X49D8;
    // 0x8007E44C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8007E450: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    // 0x8007E454: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007E458: sb          $v0, -0x44E0($at)
    MEM_B(-0X44E0, ctx->r1) = ctx->r2;
    // 0x8007E45C: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x8007E460: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007E464: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007E468: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
    // 0x8007E46C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007E470: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007E474: addiu       $v0, $v1, 0x18
    ctx->r2 = ADD32(ctx->r3, 0X18);
    // 0x8007E478: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007E47C: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007E480: addiu       $v0, $v1, 0x20
    ctx->r2 = ADD32(ctx->r3, 0X20);
    // 0x8007E484: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007E488: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007E48C: addiu       $v0, $v1, 0x28
    ctx->r2 = ADD32(ctx->r3, 0X28);
    // 0x8007E490: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007E494: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007E498: addiu       $v0, $v1, 0x30
    ctx->r2 = ADD32(ctx->r3, 0X30);
    // 0x8007E49C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007E4A0: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007E4A4: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x8007E4A8: sw          $v0, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r2;
    // 0x8007E4AC: addiu       $v0, $v1, 0x38
    ctx->r2 = ADD32(ctx->r3, 0X38);
    // 0x8007E4B0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007E4B4: sw          $a0, -0x44F0($at)
    MEM_W(-0X44F0, ctx->r1) = ctx->r4;
    // 0x8007E4B8: sw          $zero, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = 0;
    // 0x8007E4BC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007E4C0: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007E4C4: sw          $a1, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r5;
    // 0x8007E4C8: sw          $t0, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r8;
    // 0x8007E4CC: sw          $a2, 0x34($v1)
    MEM_W(0X34, ctx->r3) = ctx->r6;
    // 0x8007E4D0: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8007E4D4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8007E4D8: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007E4DC: jal         0x8007BFC8
    // 0x8007E4E0: sw          $v0, -0x44E4($at)
    MEM_W(-0X44E4, ctx->r1) = ctx->r2;
    func_8007BFC8_573C8(rdram, ctx);
        goto after_0;
    // 0x8007E4E0: sw          $v0, -0x44E4($at)
    MEM_W(-0X44E4, ctx->r1) = ctx->r2;
    after_0:
    // 0x8007E4E4: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8007E4E8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8007E4EC: addiu       $s1, $sp, 0x20
    ctx->r17 = ADD32(ctx->r29, 0X20);
    // 0x8007E4F0: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x8007E4F4: andi        $s2, $v0, 0x81F
    ctx->r18 = ctx->r2 & 0X81F;
    // 0x8007E4F8: andi        $v1, $v0, 0xF
    ctx->r3 = ctx->r2 & 0XF;
    // 0x8007E4FC: sll         $a1, $v1, 6
    ctx->r5 = S32(ctx->r3 << 6);
    // 0x8007E500: andi        $v1, $v0, 0x10
    ctx->r3 = ctx->r2 & 0X10;
    // 0x8007E504: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8007E508: andi        $v0, $v0, 0x800
    ctx->r2 = ctx->r2 & 0X800;
    // 0x8007E50C: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
    // 0x8007E510: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007E514: sh          $s2, -0x44E8($at)
    MEM_H(-0X44E8, ctx->r1) = ctx->r18;
    // 0x8007E518: bgez        $a0, L_8007E530
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8007E51C: or          $v1, $v1, $v0
        ctx->r3 = ctx->r3 | ctx->r2;
            goto L_8007E530;
    }
    // 0x8007E51C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8007E520: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8007E524: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    // 0x8007E528: j           L_8007E53C
    // 0x8007E52C: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
        goto L_8007E53C;
    // 0x8007E52C: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
L_8007E530:
    // 0x8007E530: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8007E534: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    // 0x8007E538: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
L_8007E53C:
    // 0x8007E53C: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x8007E540: lh          $a2, 0x0($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X0);
    // 0x8007E544: lh          $a3, 0x22($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X22);
    // 0x8007E548: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x8007E54C: jal         0x8002C9BC
    // 0x8007E550: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    func_8002C9BC_7DBC(rdram, ctx);
        goto after_1;
    // 0x8007E550: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    after_1:
    // 0x8007E554: beq         $v0, $zero, L_8007E5B4
    if (ctx->r2 == 0) {
        // 0x8007E558: nop
    
            goto L_8007E5B4;
    }
    // 0x8007E558: nop

    // 0x8007E55C: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8007E560: lw          $a0, -0x6F10($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X6F10);
    // 0x8007E564: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x8007E568: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    // 0x8007E56C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007E570: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007E574: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x8007E578: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x8007E57C: addiu       $v0, $a0, 0x10
    ctx->r2 = ADD32(ctx->r4, 0X10);
    // 0x8007E580: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007E584: sw          $v1, -0x44EC($at)
    MEM_W(-0X44EC, ctx->r1) = ctx->r3;
    // 0x8007E588: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x8007E58C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007E590: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007E594: lh          $v0, 0x0($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X0);
    // 0x8007E598: sw          $v1, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r3;
    // 0x8007E59C: lui         $v1, 0xFD48
    ctx->r3 = S32(0XFD48 << 16);
    // 0x8007E5A0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8007E5A4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8007E5A8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8007E5AC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8007E5B0: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
L_8007E5B4:
    // 0x8007E5B4: lh          $a2, 0x8($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X8);
    // 0x8007E5B8: lh          $a3, 0xA($s0)
    ctx->r7 = MEM_H(ctx->r16, 0XA);
    // 0x8007E5BC: lh          $v1, 0xC($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XC);
    // 0x8007E5C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8007E5C4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8007E5C8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8007E5CC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8007E5D0: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8007E5D4: jal         0x8007CC94
    // 0x8007E5D8: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_8007CC94_58094(rdram, ctx);
        goto after_2;
    // 0x8007E5D8: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_2:
    // 0x8007E5DC: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x8007E5E0: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x8007E5E4: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8007E5E8: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8007E5EC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8007E5F0: jr          $ra
    // 0x8007E5F4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8007E5F4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80035410_10810(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80035410: jr          $ra
    // 0x80035414: nop

    TRACE_RETURN()
    return;
    // 0x80035414: nop

;}
RECOMP_FUNC void func_800928A0_6DCA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800928A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800928A4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800928A8: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x800928AC: addiu       $s0, $s0, -0x4890
    ctx->r16 = ADD32(ctx->r16, -0X4890);
    // 0x800928B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x800928B4: lui         $v0, 0x8019
    ctx->r2 = S32(0X8019 << 16);
    // 0x800928B8: addiu       $v0, $v0, -0x2DD0
    ctx->r2 = ADD32(ctx->r2, -0X2DD0);
    // 0x800928BC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x800928C0: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x800928C4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x800928C8: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x800928CC: addiu       $a2, $a2, 0x28F8
    ctx->r6 = ADD32(ctx->r6, 0X28F8);
    // 0x800928D0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x800928D4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800928D8: jal         0x8009B750
    // 0x800928DC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    osCreateThread_recomp(rdram, ctx);
        goto after_0;
    // 0x800928DC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_0:
    // 0x800928E0: jal         0x8009B9F0
    // 0x800928E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    osStartThread_recomp(rdram, ctx);
        goto after_1;
    // 0x800928E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x800928E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800928EC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800928F0: jr          $ra
    // 0x800928F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x800928F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80058CA8_340A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80058CA8: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x80058CAC: lh          $a0, 0x8($a1)
    ctx->r4 = MEM_H(ctx->r5, 0X8);
    // 0x80058CB0: lh          $v0, 0x0($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X0);
    // 0x80058CB4: lh          $v1, 0x14($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X14);
    // 0x80058CB8: subu        $t0, $a0, $v0
    ctx->r8 = SUB32(ctx->r4, ctx->r2);
    // 0x80058CBC: subu        $a2, $v1, $v0
    ctx->r6 = SUB32(ctx->r3, ctx->r2);
    // 0x80058CC0: sltu        $v0, $a2, $t0
    ctx->r2 = ctx->r6 < ctx->r8 ? 1 : 0;
    // 0x80058CC4: beq         $v0, $zero, L_80058DA4
    if (ctx->r2 == 0) {
        // 0x80058CC8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80058DA4;
    }
    // 0x80058CC8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80058CCC: lh          $a0, 0x4($a1)
    ctx->r4 = MEM_H(ctx->r5, 0X4);
    // 0x80058CD0: lh          $v0, 0x18($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X18);
    // 0x80058CD4: lh          $v1, 0xC($a1)
    ctx->r3 = MEM_H(ctx->r5, 0XC);
    // 0x80058CD8: subu        $a1, $v0, $a0
    ctx->r5 = SUB32(ctx->r2, ctx->r4);
    // 0x80058CDC: subu        $a3, $v1, $a0
    ctx->r7 = SUB32(ctx->r3, ctx->r4);
    // 0x80058CE0: sltu        $v0, $a1, $a3
    ctx->r2 = ctx->r5 < ctx->r7 ? 1 : 0;
    // 0x80058CE4: beql        $v0, $zero, L_80058DA4
    if (ctx->r2 == 0) {
        // 0x80058CE8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80058DA4;
    }
    goto skip_0;
    // 0x80058CE8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
    // 0x80058CEC: beql        $a2, $zero, L_80058DA4
    if (ctx->r6 == 0) {
        // 0x80058CF0: addiu       $v0, $zero, -0x7E
        ctx->r2 = ADD32(0, -0X7E);
            goto L_80058DA4;
    }
    goto skip_1;
    // 0x80058CF0: addiu       $v0, $zero, -0x7E
    ctx->r2 = ADD32(0, -0X7E);
    skip_1:
    // 0x80058CF4: nop

    // 0x80058CF8: mult        $a1, $t0
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80058CFC: mflo        $v0
    ctx->r2 = lo;
    // 0x80058D00: nop

    // 0x80058D04: nop

    // 0x80058D08: div         $zero, $v0, $a2
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r6)));
    // 0x80058D0C: bne         $a2, $zero, L_80058D18
    if (ctx->r6 != 0) {
        // 0x80058D10: nop
    
            goto L_80058D18;
    }
    // 0x80058D10: nop

    // 0x80058D14: break       7
    do_break(2147847444);
L_80058D18:
    // 0x80058D18: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80058D1C: bne         $a2, $at, L_80058D30
    if (ctx->r6 != ctx->r1) {
        // 0x80058D20: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80058D30;
    }
    // 0x80058D20: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80058D24: bne         $v0, $at, L_80058D30
    if (ctx->r2 != ctx->r1) {
        // 0x80058D28: nop
    
            goto L_80058D30;
    }
    // 0x80058D28: nop

    // 0x80058D2C: break       6
    do_break(2147847468);
L_80058D30:
    // 0x80058D30: mflo        $v0
    ctx->r2 = lo;
    // 0x80058D34: subu        $a1, $a3, $a1
    ctx->r5 = SUB32(ctx->r7, ctx->r5);
    // 0x80058D38: nop

    // 0x80058D3C: mult        $a1, $t0
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80058D40: mflo        $a0
    ctx->r4 = lo;
    // 0x80058D44: nop

    // 0x80058D48: nop

    // 0x80058D4C: div         $zero, $a0, $a2
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r6)));
    // 0x80058D50: bne         $a2, $zero, L_80058D5C
    if (ctx->r6 != 0) {
        // 0x80058D54: nop
    
            goto L_80058D5C;
    }
    // 0x80058D54: nop

    // 0x80058D58: break       7
    do_break(2147847512);
L_80058D5C:
    // 0x80058D5C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80058D60: bne         $a2, $at, L_80058D74
    if (ctx->r6 != ctx->r1) {
        // 0x80058D64: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80058D74;
    }
    // 0x80058D64: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80058D68: bne         $a0, $at, L_80058D74
    if (ctx->r4 != ctx->r1) {
        // 0x80058D6C: nop
    
            goto L_80058D74;
    }
    // 0x80058D6C: nop

    // 0x80058D70: break       6
    do_break(2147847536);
L_80058D74:
    // 0x80058D74: mflo        $a0
    ctx->r4 = lo;
    // 0x80058D78: addiu       $v1, $zero, -0x7F
    ctx->r3 = ADD32(0, -0X7F);
    // 0x80058D7C: slt         $v0, $a3, $v0
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80058D80: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80058D84: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80058D88: ori         $v1, $v0, 0x80
    ctx->r3 = ctx->r2 | 0X80;
    // 0x80058D8C: slt         $a0, $a0, $a3
    ctx->r4 = SIGNED(ctx->r4) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x80058D90: beq         $a0, $zero, L_80058D9C
    if (ctx->r4 == 0) {
        // 0x80058D94: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_80058D9C;
    }
    // 0x80058D94: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x80058D98: ori         $v0, $v1, 0x2
    ctx->r2 = ctx->r3 | 0X2;
L_80058D9C:
    // 0x80058D9C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80058DA0: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
L_80058DA4:
    // 0x80058DA4: jr          $ra
    // 0x80058DA8: nop

    TRACE_RETURN()
    return;
    // 0x80058DA8: nop

;}
RECOMP_FUNC void func_8007B160_56560(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007B160: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007B164: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8007B168: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8007B16C: addiu       $a0, $zero, 0x8F
    ctx->r4 = ADD32(0, 0X8F);
    // 0x8007B170: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8007B174: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007B178: jal         0x8002A2F8
    // 0x8007B17C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_0;
    // 0x8007B17C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8007B180: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8007B184: jal         0x8004F5C4
    // 0x8007B188: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_1;
    // 0x8007B188: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    after_1:
    // 0x8007B18C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007B190: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8007B194: jr          $ra
    // 0x8007B198: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8007B198: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8009241C_6D81C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8009241C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80092420: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80092424: lui         $s0, 0x8021
    ctx->r16 = S32(0X8021 << 16);
    // 0x80092428: lw          $s0, 0x5718($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X5718);
    // 0x8009242C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80092430: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80092434: beq         $s0, $zero, L_80092468
    if (ctx->r16 == 0) {
        // 0x80092438: sw          $ra, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r31;
            goto L_80092468;
    }
    // 0x80092438: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
L_8009243C:
    // 0x8009243C: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x80092440: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x80092444: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80092448: beq         $v0, $zero, L_8009245C
    if (ctx->r2 == 0) {
        // 0x8009244C: addu        $a1, $s1, $zero
        ctx->r5 = ADD32(ctx->r17, 0);
            goto L_8009245C;
    }
    // 0x8009244C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80092450: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x80092454: jal         0x8009A710
    // 0x80092458: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    osSendMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x80092458: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
L_8009245C:
    // 0x8009245C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x80092460: bne         $s0, $zero, L_8009243C
    if (ctx->r16 != 0) {
        // 0x80092464: nop
    
            goto L_8009243C;
    }
    // 0x80092464: nop

L_80092468:
    // 0x80092468: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8009246C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80092470: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80092474: jr          $ra
    // 0x80092478: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80092478: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80029D9C_519C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80029D9C: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x80029DA0: sw          $s2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r18;
    // 0x80029DA4: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x80029DA8: sw          $s3, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r19;
    // 0x80029DAC: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x80029DB0: addu        $a1, $a3, $zero
    ctx->r5 = ADD32(ctx->r7, 0);
    // 0x80029DB4: lw          $a2, 0xB8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XB8);
    // 0x80029DB8: lw          $a3, 0xBC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XBC);
    // 0x80029DBC: sw          $s1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r17;
    // 0x80029DC0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80029DC4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80029DC8: sw          $ra, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r31;
    // 0x80029DCC: jal         0x8009A3E0
    // 0x80029DD0: sw          $s0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r16;
    sprintf_recomp(rdram, ctx);
        goto after_0;
    // 0x80029DD0: sw          $s0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r16;
    after_0:
    // 0x80029DD4: jal         0x8009A390
    // 0x80029DD8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    strlen_recomp(rdram, ctx);
        goto after_1;
    // 0x80029DD8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_1:
    // 0x80029DDC: jal         0x800281C8
    // 0x80029DE0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_800281C8_35C8(rdram, ctx);
        goto after_2;
    // 0x80029DE0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_2:
    // 0x80029DE4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80029DE8: beq         $s0, $zero, L_80029E2C
    if (ctx->r16 == 0) {
        // 0x80029DEC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80029E2C;
    }
    // 0x80029DEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80029DF0: jal         0x800A35A0
    // 0x80029DF4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_800A35A0_7E9A0(rdram, ctx);
        goto after_3;
    // 0x80029DF4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_3:
    // 0x80029DF8: jal         0x800281C8
    // 0x80029DFC: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    func_800281C8_35C8(rdram, ctx);
        goto after_4;
    // 0x80029DFC: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_4:
    // 0x80029E00: beq         $v0, $zero, L_80029E2C
    if (ctx->r2 == 0) {
        // 0x80029E04: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80029E2C;
    }
    // 0x80029E04: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80029E08: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x80029E0C: lui         $a2, 0x8003
    ctx->r6 = S32(0X8003 << 16);
    // 0x80029E10: addiu       $a2, $a2, -0x677C
    ctx->r6 = ADD32(ctx->r6, -0X677C);
    // 0x80029E14: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x80029E18: sh          $s1, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r17;
    // 0x80029E1C: sh          $s2, 0x2($a3)
    MEM_H(0X2, ctx->r7) = ctx->r18;
    // 0x80029E20: sb          $s3, 0x8($a3)
    MEM_B(0X8, ctx->r7) = ctx->r19;
    // 0x80029E24: jal         0x800283A8
    // 0x80029E28: sw          $s0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r16;
    func_800283A8_37A8(rdram, ctx);
        goto after_5;
    // 0x80029E28: sw          $s0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r16;
    after_5:
L_80029E2C:
    // 0x80029E2C: lw          $ra, 0xA0($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA0);
    // 0x80029E30: lw          $s3, 0x9C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X9C);
    // 0x80029E34: lw          $s2, 0x98($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X98);
    // 0x80029E38: lw          $s1, 0x94($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X94);
    // 0x80029E3C: lw          $s0, 0x90($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X90);
    // 0x80029E40: jr          $ra
    // 0x80029E44: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    TRACE_RETURN()
    return;
    // 0x80029E44: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
;}
RECOMP_FUNC void func_80086F94_62394(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80086F94: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80086F98: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80086F9C: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x80086FA0: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80086FA4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80086FA8: sra         $s0, $a1, 16
    ctx->r16 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80086FAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80086FB0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80086FB4: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x80086FB8: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x80086FBC: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80086FC0: sra         $s5, $v0, 16
    ctx->r21 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80086FC4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80086FC8: lh          $s2, 0x4A($sp)
    ctx->r18 = MEM_H(ctx->r29, 0X4A);
    // 0x80086FCC: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x80086FD0: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x80086FD4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80086FD8: sra         $s3, $a3, 16
    ctx->r19 = S32(SIGNED(ctx->r7) >> 16);
    // 0x80086FDC: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x80086FE0: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x80086FE4: jal         0x80087394
    // 0x80086FE8: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    func_80087394_62794(rdram, ctx);
        goto after_0;
    // 0x80086FE8: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    after_0:
    // 0x80086FEC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80086FF0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80086FF4: beq         $v1, $v0, L_80087038
    if (ctx->r3 == ctx->r2) {
        // 0x80086FF8: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80087038;
    }
    // 0x80086FF8: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80086FFC: beql        $v0, $zero, L_80087014
    if (ctx->r2 == 0) {
        // 0x80087000: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80087014;
    }
    goto skip_0;
    // 0x80087000: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80087004: beq         $v1, $zero, L_80087024
    if (ctx->r3 == 0) {
        // 0x80087008: addu        $a1, $s4, $zero
        ctx->r5 = ADD32(ctx->r20, 0);
            goto L_80087024;
    }
    // 0x80087008: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x8008700C: j           L_8008707C
    // 0x80087010: nop

        goto L_8008707C;
    // 0x80087010: nop

L_80087014:
    // 0x80087014: beql        $v1, $v0, L_80087068
    if (ctx->r3 == ctx->r2) {
        // 0x80087018: sw          $s2, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r18;
            goto L_80087068;
    }
    goto skip_1;
    // 0x80087018: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    skip_1:
    // 0x8008701C: j           L_8008707C
    // 0x80087020: nop

        goto L_8008707C;
    // 0x80087020: nop

L_80087024:
    // 0x80087024: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x80087028: addiu       $a0, $a0, -0x3410
    ctx->r4 = ADD32(ctx->r4, -0X3410);
    // 0x8008702C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x80087030: j           L_8008704C
    // 0x80087034: addiu       $a3, $s1, -0xF0
    ctx->r7 = ADD32(ctx->r17, -0XF0);
        goto L_8008704C;
    // 0x80087034: addiu       $a3, $s1, -0xF0
    ctx->r7 = ADD32(ctx->r17, -0XF0);
L_80087038:
    // 0x80087038: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x8008703C: addiu       $a0, $a0, -0x2F10
    ctx->r4 = ADD32(ctx->r4, -0X2F10);
    // 0x80087040: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x80087044: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x80087048: addiu       $a3, $s1, -0x1F0
    ctx->r7 = ADD32(ctx->r17, -0X1F0);
L_8008704C:
    // 0x8008704C: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x80087050: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    // 0x80087054: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x80087058: jal         0x80087420
    // 0x8008705C: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    func_80087420_62820(rdram, ctx);
        goto after_1;
    // 0x8008705C: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    after_1:
    // 0x80087060: j           L_8008707C
    // 0x80087064: nop

        goto L_8008707C;
    // 0x80087064: nop

L_80087068:
    // 0x80087068: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8008706C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80087070: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    // 0x80087074: jal         0x8002C8EC
    // 0x80087078: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    func_8002C8EC_7CEC(rdram, ctx);
        goto after_2;
    // 0x80087078: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    after_2:
L_8008707C:
    // 0x8008707C: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80087080: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80087084: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80087088: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8008708C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80087090: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80087094: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80087098: jr          $ra
    // 0x8008709C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8008709C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80044BDC_1FFDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80044BDC: lhu         $a3, 0x0($a0)
    ctx->r7 = MEM_HU(ctx->r4, 0X0);
    // 0x80044BE0: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x80044BE4: lhu         $v0, -0x26B4($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X26B4);
    // 0x80044BE8: lhu         $a2, 0x2($a0)
    ctx->r6 = MEM_HU(ctx->r4, 0X2);
    // 0x80044BEC: lhu         $a1, 0x4($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0X4);
    // 0x80044BF0: lhu         $v1, 0x6($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X6);
    // 0x80044BF4: subu        $a3, $a3, $v0
    ctx->r7 = SUB32(ctx->r7, ctx->r2);
    // 0x80044BF8: sh          $a3, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r7;
    // 0x80044BFC: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x80044C00: lhu         $v0, -0x26B6($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X26B6);
    // 0x80044C04: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x80044C08: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    // 0x80044C0C: subu        $a2, $a2, $v0
    ctx->r6 = SUB32(ctx->r6, ctx->r2);
    // 0x80044C10: sh          $a2, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r6;
    // 0x80044C14: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x80044C18: lhu         $v0, -0x26B0($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X26B0);
    // 0x80044C1C: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x80044C20: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80044C24: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x80044C28: sh          $a1, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r5;
    // 0x80044C2C: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x80044C30: lhu         $v0, -0x26B2($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X26B2);
    // 0x80044C34: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80044C38: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80044C3C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80044C40: sh          $v1, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r3;
    // 0x80044C44: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x80044C48: lh          $a0, -0x7158($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X7158);
    // 0x80044C4C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80044C50: slt         $v0, $a3, $a0
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80044C54: beq         $v0, $zero, L_80044EC0
    if (ctx->r2 == 0) {
        // 0x80044C58: sra         $t3, $v1, 16
        ctx->r11 = S32(SIGNED(ctx->r3) >> 16);
            goto L_80044EC0;
    }
    // 0x80044C58: sra         $t3, $v1, 16
    ctx->r11 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80044C5C: slt         $v0, $a0, $a2
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80044C60: beq         $v0, $zero, L_80044EC4
    if (ctx->r2 == 0) {
        // 0x80044C64: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80044EC4;
    }
    // 0x80044C64: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80044C68: lui         $t0, 0x801E
    ctx->r8 = S32(0X801E << 16);
    // 0x80044C6C: lh          $t0, -0x7154($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X7154);
    // 0x80044C70: slt         $v0, $a1, $t0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80044C74: beq         $v0, $zero, L_80044EC0
    if (ctx->r2 == 0) {
        // 0x80044C78: slt         $v0, $t0, $t3
        ctx->r2 = SIGNED(ctx->r8) < SIGNED(ctx->r11) ? 1 : 0;
            goto L_80044EC0;
    }
    // 0x80044C78: slt         $v0, $t0, $t3
    ctx->r2 = SIGNED(ctx->r8) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80044C7C: beq         $v0, $zero, L_80044EC0
    if (ctx->r2 == 0) {
        // 0x80044C80: subu        $v1, $t3, $a1
        ctx->r3 = SUB32(ctx->r11, ctx->r5);
            goto L_80044EC0;
    }
    // 0x80044C80: subu        $v1, $t3, $a1
    ctx->r3 = SUB32(ctx->r11, ctx->r5);
    // 0x80044C84: srl         $v0, $v1, 31
    ctx->r2 = S32(U32(ctx->r3) >> 31);
    // 0x80044C88: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x80044C8C: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x80044C90: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x80044C94: subu        $a0, $v0, $t0
    ctx->r4 = SUB32(ctx->r2, ctx->r8);
    // 0x80044C98: bgez        $a0, L_80044CA4
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80044C9C: subu        $t1, $a2, $a3
        ctx->r9 = SUB32(ctx->r6, ctx->r7);
            goto L_80044CA4;
    }
    // 0x80044C9C: subu        $t1, $a2, $a3
    ctx->r9 = SUB32(ctx->r6, ctx->r7);
    // 0x80044CA0: subu        $a0, $t0, $v0
    ctx->r4 = SUB32(ctx->r8, ctx->r2);
L_80044CA4:
    // 0x80044CA4: nop

    // 0x80044CA8: mult        $a0, $t1
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80044CAC: mflo        $a0
    ctx->r4 = lo;
    // 0x80044CB0: nop

    // 0x80044CB4: nop

    // 0x80044CB8: div         $zero, $a0, $v1
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r3)));
    // 0x80044CBC: bne         $v1, $zero, L_80044CC8
    if (ctx->r3 != 0) {
        // 0x80044CC0: nop
    
            goto L_80044CC8;
    }
    // 0x80044CC0: nop

    // 0x80044CC4: break       7
    do_break(2147765444);
L_80044CC8:
    // 0x80044CC8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80044CCC: bne         $v1, $at, L_80044CE0
    if (ctx->r3 != ctx->r1) {
        // 0x80044CD0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80044CE0;
    }
    // 0x80044CD0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80044CD4: bne         $a0, $at, L_80044CE0
    if (ctx->r4 != ctx->r1) {
        // 0x80044CD8: nop
    
            goto L_80044CE0;
    }
    // 0x80044CD8: nop

    // 0x80044CDC: break       6
    do_break(2147765468);
L_80044CE0:
    // 0x80044CE0: mflo        $a0
    ctx->r4 = lo;
    // 0x80044CE4: sll         $v1, $a0, 1
    ctx->r3 = S32(ctx->r4 << 1);
    // 0x80044CE8: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80044CEC: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x80044CF0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80044CF4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80044CF8: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80044CFC: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x80044D00: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80044D04: sra         $t2, $v0, 12
    ctx->r10 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80044D08: subu        $v1, $a2, $a3
    ctx->r3 = SUB32(ctx->r6, ctx->r7);
    // 0x80044D0C: srl         $v0, $v1, 31
    ctx->r2 = S32(U32(ctx->r3) >> 31);
    // 0x80044D10: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x80044D14: lui         $t0, 0x801E
    ctx->r8 = S32(0X801E << 16);
    // 0x80044D18: lh          $t0, -0x7158($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X7158);
    // 0x80044D1C: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x80044D20: addu        $v0, $a3, $v0
    ctx->r2 = ADD32(ctx->r7, ctx->r2);
    // 0x80044D24: subu        $a0, $v0, $t0
    ctx->r4 = SUB32(ctx->r2, ctx->r8);
    // 0x80044D28: bgez        $a0, L_80044D34
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80044D2C: subu        $t1, $t3, $a1
        ctx->r9 = SUB32(ctx->r11, ctx->r5);
            goto L_80044D34;
    }
    // 0x80044D2C: subu        $t1, $t3, $a1
    ctx->r9 = SUB32(ctx->r11, ctx->r5);
    // 0x80044D30: subu        $a0, $t0, $v0
    ctx->r4 = SUB32(ctx->r8, ctx->r2);
L_80044D34:
    // 0x80044D34: nop

    // 0x80044D38: mult        $a0, $t1
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80044D3C: mflo        $a0
    ctx->r4 = lo;
    // 0x80044D40: nop

    // 0x80044D44: nop

    // 0x80044D48: div         $zero, $a0, $v1
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r3)));
    // 0x80044D4C: bne         $v1, $zero, L_80044D58
    if (ctx->r3 != 0) {
        // 0x80044D50: nop
    
            goto L_80044D58;
    }
    // 0x80044D50: nop

    // 0x80044D54: break       7
    do_break(2147765588);
L_80044D58:
    // 0x80044D58: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80044D5C: bne         $v1, $at, L_80044D70
    if (ctx->r3 != ctx->r1) {
        // 0x80044D60: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80044D70;
    }
    // 0x80044D60: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80044D64: bne         $a0, $at, L_80044D70
    if (ctx->r4 != ctx->r1) {
        // 0x80044D68: nop
    
            goto L_80044D70;
    }
    // 0x80044D68: nop

    // 0x80044D6C: break       6
    do_break(2147765612);
L_80044D70:
    // 0x80044D70: mflo        $a0
    ctx->r4 = lo;
    // 0x80044D74: sll         $v1, $a0, 1
    ctx->r3 = S32(ctx->r4 << 1);
    // 0x80044D78: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80044D7C: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x80044D80: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80044D84: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80044D88: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80044D8C: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x80044D90: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80044D94: sra         $v1, $v0, 12
    ctx->r3 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80044D98: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x80044D9C: lh          $a0, -0x7158($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X7158);
    // 0x80044DA0: addu        $t0, $a3, $t2
    ctx->r8 = ADD32(ctx->r7, ctx->r10);
    // 0x80044DA4: slt         $v0, $t0, $a0
    ctx->r2 = SIGNED(ctx->r8) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80044DA8: beq         $v0, $zero, L_80044EC0
    if (ctx->r2 == 0) {
        // 0x80044DAC: subu        $t1, $a2, $t2
        ctx->r9 = SUB32(ctx->r6, ctx->r10);
            goto L_80044EC0;
    }
    // 0x80044DAC: subu        $t1, $a2, $t2
    ctx->r9 = SUB32(ctx->r6, ctx->r10);
    // 0x80044DB0: slt         $v0, $a0, $t1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80044DB4: beq         $v0, $zero, L_80044EC0
    if (ctx->r2 == 0) {
        // 0x80044DB8: addu        $t4, $a1, $v1
        ctx->r12 = ADD32(ctx->r5, ctx->r3);
            goto L_80044EC0;
    }
    // 0x80044DB8: addu        $t4, $a1, $v1
    ctx->r12 = ADD32(ctx->r5, ctx->r3);
    // 0x80044DBC: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x80044DC0: lh          $a0, -0x7154($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X7154);
    // 0x80044DC4: slt         $v0, $t4, $a0
    ctx->r2 = SIGNED(ctx->r12) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80044DC8: beq         $v0, $zero, L_80044EC0
    if (ctx->r2 == 0) {
        // 0x80044DCC: subu        $t5, $t3, $v1
        ctx->r13 = SUB32(ctx->r11, ctx->r3);
            goto L_80044EC0;
    }
    // 0x80044DCC: subu        $t5, $t3, $v1
    ctx->r13 = SUB32(ctx->r11, ctx->r3);
    // 0x80044DD0: slt         $v0, $a0, $t5
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x80044DD4: beq         $v0, $zero, L_80044EC0
    if (ctx->r2 == 0) {
        // 0x80044DD8: subu        $v0, $a2, $a3
        ctx->r2 = SUB32(ctx->r6, ctx->r7);
            goto L_80044EC0;
    }
    // 0x80044DD8: subu        $v0, $a2, $a3
    ctx->r2 = SUB32(ctx->r6, ctx->r7);
    // 0x80044DDC: lui         $t2, 0x801C
    ctx->r10 = S32(0X801C << 16);
    // 0x80044DE0: addiu       $t2, $t2, -0x3FAC
    ctx->r10 = ADD32(ctx->r10, -0X3FAC);
    // 0x80044DE4: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x80044DE8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80044DEC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80044DF0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80044DF4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80044DF8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80044DFC: sra         $v1, $v1, 8
    ctx->r3 = S32(SIGNED(ctx->r3) >> 8);
    // 0x80044E00: subu        $v0, $t0, $v1
    ctx->r2 = SUB32(ctx->r8, ctx->r3);
    // 0x80044E04: sh          $v0, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r2;
    // 0x80044E08: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80044E0C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80044E10: slt         $v0, $v0, $a3
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x80044E14: beq         $v0, $zero, L_80044E20
    if (ctx->r2 == 0) {
        // 0x80044E18: addu        $a0, $a3, $zero
        ctx->r4 = ADD32(ctx->r7, 0);
            goto L_80044E20;
    }
    // 0x80044E18: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
    // 0x80044E1C: sh          $a0, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r4;
L_80044E20:
    // 0x80044E20: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x80044E24: addiu       $a0, $a0, -0x72D0
    ctx->r4 = ADD32(ctx->r4, -0X72D0);
    // 0x80044E28: addu        $v0, $t1, $v1
    ctx->r2 = ADD32(ctx->r9, ctx->r3);
    // 0x80044E2C: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x80044E30: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80044E34: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80044E38: slt         $v0, $a2, $v0
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80044E3C: beq         $v0, $zero, L_80044E48
    if (ctx->r2 == 0) {
        // 0x80044E40: addu        $v1, $a2, $zero
        ctx->r3 = ADD32(ctx->r6, 0);
            goto L_80044E48;
    }
    // 0x80044E40: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    // 0x80044E44: sh          $v1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r3;
L_80044E48:
    // 0x80044E48: subu        $v0, $t3, $a1
    ctx->r2 = SUB32(ctx->r11, ctx->r5);
    // 0x80044E4C: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x80044E50: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80044E54: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80044E58: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80044E5C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80044E60: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80044E64: sra         $v1, $v1, 8
    ctx->r3 = S32(SIGNED(ctx->r3) >> 8);
    // 0x80044E68: subu        $v0, $t4, $v1
    ctx->r2 = SUB32(ctx->r12, ctx->r3);
    // 0x80044E6C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80044E70: sh          $v0, -0x3FA8($at)
    MEM_H(-0X3FA8, ctx->r1) = ctx->r2;
    // 0x80044E74: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80044E78: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80044E7C: slt         $v0, $a1, $v0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80044E80: beq         $v0, $zero, L_80044E90
    if (ctx->r2 == 0) {
        // 0x80044E84: addu        $a0, $a1, $zero
        ctx->r4 = ADD32(ctx->r5, 0);
            goto L_80044E90;
    }
    // 0x80044E84: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x80044E88: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80044E8C: sh          $a0, -0x3FA8($at)
    MEM_H(-0X3FA8, ctx->r1) = ctx->r4;
L_80044E90:
    // 0x80044E90: addu        $v0, $t5, $v1
    ctx->r2 = ADD32(ctx->r13, ctx->r3);
    // 0x80044E94: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80044E98: sh          $v0, -0x72CC($at)
    MEM_H(-0X72CC, ctx->r1) = ctx->r2;
    // 0x80044E9C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80044EA0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80044EA4: slt         $v0, $t3, $v0
    ctx->r2 = SIGNED(ctx->r11) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80044EA8: beq         $v0, $zero, L_80044EB8
    if (ctx->r2 == 0) {
        // 0x80044EAC: addu        $v1, $t3, $zero
        ctx->r3 = ADD32(ctx->r11, 0);
            goto L_80044EB8;
    }
    // 0x80044EAC: addu        $v1, $t3, $zero
    ctx->r3 = ADD32(ctx->r11, 0);
    // 0x80044EB0: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80044EB4: sh          $v1, -0x72CC($at)
    MEM_H(-0X72CC, ctx->r1) = ctx->r3;
L_80044EB8:
    // 0x80044EB8: j           L_80044EC4
    // 0x80044EBC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80044EC4;
    // 0x80044EBC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80044EC0:
    // 0x80044EC0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80044EC4:
    // 0x80044EC4: jr          $ra
    // 0x80044EC8: nop

    TRACE_RETURN()
    return;
    // 0x80044EC8: nop

;}
RECOMP_FUNC void func_80083FA4_5F3A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80083FA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80083FA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80083FAC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80083FB0: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x80083FB4: bne         $v0, $zero, L_80084010
    if (ctx->r2 != 0) {
        // 0x80083FB8: nop
    
            goto L_80084010;
    }
    // 0x80083FB8: nop

    // 0x80083FBC: lbu         $v1, 0x1($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X1);
    // 0x80083FC0: beq         $v1, $zero, L_800847C4
    if (ctx->r3 == 0) {
        // 0x80083FC4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_800847C4;
    }
    // 0x80083FC4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80083FC8: bne         $v1, $v0, L_80084010
    if (ctx->r3 != ctx->r2) {
        // 0x80083FCC: nop
    
            goto L_80084010;
    }
    // 0x80083FCC: nop

    // 0x80083FD0: lui         $v0, 0x4B
    ctx->r2 = S32(0X4B << 16);
    // 0x80083FD4: addiu       $v0, $v0, 0x29A0
    ctx->r2 = ADD32(ctx->r2, 0X29A0);
    // 0x80083FD8: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80083FDC: sw          $v0, -0x3C80($at)
    MEM_W(-0X3C80, ctx->r1) = ctx->r2;
    // 0x80083FE0: lui         $v0, 0x4B
    ctx->r2 = S32(0X4B << 16);
    // 0x80083FE4: addiu       $v0, $v0, 0x61D0
    ctx->r2 = ADD32(ctx->r2, 0X61D0);
    // 0x80083FE8: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80083FEC: sw          $v0, -0x3C7C($at)
    MEM_W(-0X3C7C, ctx->r1) = ctx->r2;
    // 0x80083FF0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80083FF4: addiu       $v0, $v0, 0x65E8
    ctx->r2 = ADD32(ctx->r2, 0X65E8);
    // 0x80083FF8: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80083FFC: sw          $v0, -0x72A8($at)
    MEM_W(-0X72A8, ctx->r1) = ctx->r2;
    // 0x80084000: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80084004: addiu       $v0, $v0, -0x4B94
    ctx->r2 = ADD32(ctx->r2, -0X4B94);
    // 0x80084008: j           L_80084800
    // 0x8008400C: addiu       $v1, $v0, 0xB8
    ctx->r3 = ADD32(ctx->r2, 0XB8);
        goto L_80084800;
    // 0x8008400C: addiu       $v1, $v0, 0xB8
    ctx->r3 = ADD32(ctx->r2, 0XB8);
L_80084010:
    // 0x80084010: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80084014: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80084018: bne         $v1, $v0, L_80084090
    if (ctx->r3 != ctx->r2) {
        // 0x8008401C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80084090;
    }
    // 0x8008401C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80084020: lbu         $v0, 0x1($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1);
    // 0x80084024: bnel        $v0, $zero, L_80084090
    if (ctx->r2 != 0) {
        // 0x80084028: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80084090;
    }
    goto skip_0;
    // 0x80084028: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8008402C: lui         $v0, 0x4B
    ctx->r2 = S32(0X4B << 16);
    // 0x80084030: addiu       $v0, $v0, 0x61D0
    ctx->r2 = ADD32(ctx->r2, 0X61D0);
    // 0x80084034: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80084038: sw          $v0, -0x3C80($at)
    MEM_W(-0X3C80, ctx->r1) = ctx->r2;
    // 0x8008403C: lui         $v0, 0x4C
    ctx->r2 = S32(0X4C << 16);
    // 0x80084040: addiu       $v0, $v0, -0x6410
    ctx->r2 = ADD32(ctx->r2, -0X6410);
    // 0x80084044: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80084048: sw          $v0, -0x3C7C($at)
    MEM_W(-0X3C7C, ctx->r1) = ctx->r2;
    // 0x8008404C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80084050: addiu       $v0, $v0, 0x68C8
    ctx->r2 = ADD32(ctx->r2, 0X68C8);
    // 0x80084054: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80084058: sw          $v0, -0x72A8($at)
    MEM_W(-0X72A8, ctx->r1) = ctx->r2;
    // 0x8008405C: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80084060: addiu       $v0, $v0, -0x48B4
    ctx->r2 = ADD32(ctx->r2, -0X48B4);
    // 0x80084064: addiu       $v1, $v0, 0xC0
    ctx->r3 = ADD32(ctx->r2, 0XC0);
    // 0x80084068: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x8008406C: sw          $v1, -0x26E8($at)
    MEM_W(-0X26E8, ctx->r1) = ctx->r3;
    // 0x80084070: addiu       $v1, $v0, 0x180
    ctx->r3 = ADD32(ctx->r2, 0X180);
    // 0x80084074: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80084078: sw          $v0, 0x442C($at)
    MEM_W(0X442C, ctx->r1) = ctx->r2;
    // 0x8008407C: addiu       $v0, $v0, 0x240
    ctx->r2 = ADD32(ctx->r2, 0X240);
    // 0x80084080: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80084084: sw          $v0, -0xB94($at)
    MEM_W(-0XB94, ctx->r1) = ctx->r2;
    // 0x80084088: j           L_80084824
    // 0x8008408C: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
        goto L_80084824;
    // 0x8008408C: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
L_80084090:
    // 0x80084090: bne         $v1, $v0, L_80084108
    if (ctx->r3 != ctx->r2) {
        // 0x80084094: nop
    
            goto L_80084108;
    }
    // 0x80084094: nop

    // 0x80084098: lbu         $v0, 0x1($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1);
    // 0x8008409C: bne         $v0, $zero, L_80084108
    if (ctx->r2 != 0) {
        // 0x800840A0: nop
    
            goto L_80084108;
    }
    // 0x800840A0: nop

    // 0x800840A4: lui         $v0, 0x4C
    ctx->r2 = S32(0X4C << 16);
    // 0x800840A8: addiu       $v0, $v0, -0x6410
    ctx->r2 = ADD32(ctx->r2, -0X6410);
    // 0x800840AC: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800840B0: sw          $v0, -0x3C80($at)
    MEM_W(-0X3C80, ctx->r1) = ctx->r2;
    // 0x800840B4: lui         $v0, 0x4C
    ctx->r2 = S32(0X4C << 16);
    // 0x800840B8: addiu       $v0, $v0, -0x2D70
    ctx->r2 = ADD32(ctx->r2, -0X2D70);
    // 0x800840BC: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800840C0: sw          $v0, -0x3C7C($at)
    MEM_W(-0X3C7C, ctx->r1) = ctx->r2;
    // 0x800840C4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x800840C8: addiu       $v0, $v0, 0x6BC8
    ctx->r2 = ADD32(ctx->r2, 0X6BC8);
    // 0x800840CC: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x800840D0: sw          $v0, -0x72A8($at)
    MEM_W(-0X72A8, ctx->r1) = ctx->r2;
    // 0x800840D4: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x800840D8: addiu       $v0, $v0, -0x45B4
    ctx->r2 = ADD32(ctx->r2, -0X45B4);
    // 0x800840DC: addiu       $v1, $v0, 0xB0
    ctx->r3 = ADD32(ctx->r2, 0XB0);
    // 0x800840E0: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x800840E4: sw          $v1, -0x26E8($at)
    MEM_W(-0X26E8, ctx->r1) = ctx->r3;
    // 0x800840E8: addiu       $v1, $v0, 0x160
    ctx->r3 = ADD32(ctx->r2, 0X160);
    // 0x800840EC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800840F0: sw          $v0, 0x442C($at)
    MEM_W(0X442C, ctx->r1) = ctx->r2;
    // 0x800840F4: addiu       $v0, $v0, 0x210
    ctx->r2 = ADD32(ctx->r2, 0X210);
    // 0x800840F8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800840FC: sw          $v0, -0xB94($at)
    MEM_W(-0XB94, ctx->r1) = ctx->r2;
    // 0x80084100: j           L_80084824
    // 0x80084104: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
        goto L_80084824;
    // 0x80084104: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
L_80084108:
    // 0x80084108: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x8008410C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80084110: bne         $v1, $v0, L_80084188
    if (ctx->r3 != ctx->r2) {
        // 0x80084114: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80084188;
    }
    // 0x80084114: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80084118: lbu         $v0, 0x1($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1);
    // 0x8008411C: bnel        $v0, $zero, L_80084188
    if (ctx->r2 != 0) {
        // 0x80084120: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80084188;
    }
    goto skip_1;
    // 0x80084120: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    skip_1:
    // 0x80084124: lui         $v0, 0x4C
    ctx->r2 = S32(0X4C << 16);
    // 0x80084128: addiu       $v0, $v0, -0x2D70
    ctx->r2 = ADD32(ctx->r2, -0X2D70);
    // 0x8008412C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80084130: sw          $v0, -0x3C80($at)
    MEM_W(-0X3C80, ctx->r1) = ctx->r2;
    // 0x80084134: lui         $v0, 0x4C
    ctx->r2 = S32(0X4C << 16);
    // 0x80084138: addiu       $v0, $v0, -0x930
    ctx->r2 = ADD32(ctx->r2, -0X930);
    // 0x8008413C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80084140: sw          $v0, -0x3C7C($at)
    MEM_W(-0X3C7C, ctx->r1) = ctx->r2;
    // 0x80084144: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80084148: addiu       $v0, $v0, 0x6E88
    ctx->r2 = ADD32(ctx->r2, 0X6E88);
    // 0x8008414C: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80084150: sw          $v0, -0x72A8($at)
    MEM_W(-0X72A8, ctx->r1) = ctx->r2;
    // 0x80084154: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80084158: addiu       $v0, $v0, -0x42F4
    ctx->r2 = ADD32(ctx->r2, -0X42F4);
    // 0x8008415C: addiu       $v1, $v0, 0x80
    ctx->r3 = ADD32(ctx->r2, 0X80);
    // 0x80084160: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80084164: sw          $v1, -0x26E8($at)
    MEM_W(-0X26E8, ctx->r1) = ctx->r3;
    // 0x80084168: addiu       $v1, $v0, 0x100
    ctx->r3 = ADD32(ctx->r2, 0X100);
    // 0x8008416C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80084170: sw          $v0, 0x442C($at)
    MEM_W(0X442C, ctx->r1) = ctx->r2;
    // 0x80084174: addiu       $v0, $v0, 0x180
    ctx->r2 = ADD32(ctx->r2, 0X180);
    // 0x80084178: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8008417C: sw          $v0, -0xB94($at)
    MEM_W(-0XB94, ctx->r1) = ctx->r2;
    // 0x80084180: j           L_80084824
    // 0x80084184: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
        goto L_80084824;
    // 0x80084184: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_80084188:
    // 0x80084188: bne         $v1, $v0, L_8008426C
    if (ctx->r3 != ctx->r2) {
        // 0x8008418C: nop
    
            goto L_8008426C;
    }
    // 0x8008418C: nop

    // 0x80084190: lbu         $v1, 0x1($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X1);
    // 0x80084194: bnel        $v1, $zero, L_80084200
    if (ctx->r3 != 0) {
        // 0x80084198: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80084200;
    }
    goto skip_2;
    // 0x80084198: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_2:
    // 0x8008419C: lui         $v0, 0x4C
    ctx->r2 = S32(0X4C << 16);
    // 0x800841A0: addiu       $v0, $v0, -0x930
    ctx->r2 = ADD32(ctx->r2, -0X930);
    // 0x800841A4: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800841A8: sw          $v0, -0x3C80($at)
    MEM_W(-0X3C80, ctx->r1) = ctx->r2;
    // 0x800841AC: lui         $v0, 0x4C
    ctx->r2 = S32(0X4C << 16);
    // 0x800841B0: addiu       $v0, $v0, 0x25B0
    ctx->r2 = ADD32(ctx->r2, 0X25B0);
    // 0x800841B4: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800841B8: sw          $v0, -0x3C7C($at)
    MEM_W(-0X3C7C, ctx->r1) = ctx->r2;
    // 0x800841BC: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x800841C0: addiu       $v0, $v0, 0x7088
    ctx->r2 = ADD32(ctx->r2, 0X7088);
    // 0x800841C4: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x800841C8: sw          $v0, -0x72A8($at)
    MEM_W(-0X72A8, ctx->r1) = ctx->r2;
    // 0x800841CC: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x800841D0: addiu       $v0, $v0, -0x40F4
    ctx->r2 = ADD32(ctx->r2, -0X40F4);
    // 0x800841D4: addiu       $v1, $v0, 0x90
    ctx->r3 = ADD32(ctx->r2, 0X90);
    // 0x800841D8: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x800841DC: sw          $v1, -0x26E8($at)
    MEM_W(-0X26E8, ctx->r1) = ctx->r3;
    // 0x800841E0: addiu       $v1, $v0, 0x120
    ctx->r3 = ADD32(ctx->r2, 0X120);
    // 0x800841E4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800841E8: sw          $v0, 0x442C($at)
    MEM_W(0X442C, ctx->r1) = ctx->r2;
    // 0x800841EC: addiu       $v0, $v0, 0x1B0
    ctx->r2 = ADD32(ctx->r2, 0X1B0);
    // 0x800841F0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800841F4: sw          $v0, -0xB94($at)
    MEM_W(-0XB94, ctx->r1) = ctx->r2;
    // 0x800841F8: j           L_80084824
    // 0x800841FC: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
        goto L_80084824;
    // 0x800841FC: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
L_80084200:
    // 0x80084200: bne         $v1, $v0, L_8008426C
    if (ctx->r3 != ctx->r2) {
        // 0x80084204: nop
    
            goto L_8008426C;
    }
    // 0x80084204: nop

    // 0x80084208: lui         $v0, 0x4C
    ctx->r2 = S32(0X4C << 16);
    // 0x8008420C: addiu       $v0, $v0, 0x25B0
    ctx->r2 = ADD32(ctx->r2, 0X25B0);
    // 0x80084210: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80084214: sw          $v0, -0x3C80($at)
    MEM_W(-0X3C80, ctx->r1) = ctx->r2;
    // 0x80084218: lui         $v0, 0x4C
    ctx->r2 = S32(0X4C << 16);
    // 0x8008421C: addiu       $v0, $v0, 0x6210
    ctx->r2 = ADD32(ctx->r2, 0X6210);
    // 0x80084220: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80084224: sw          $v0, -0x3C7C($at)
    MEM_W(-0X3C7C, ctx->r1) = ctx->r2;
    // 0x80084228: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x8008422C: addiu       $v0, $v0, 0x72C8
    ctx->r2 = ADD32(ctx->r2, 0X72C8);
    // 0x80084230: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80084234: sw          $v0, -0x72A8($at)
    MEM_W(-0X72A8, ctx->r1) = ctx->r2;
    // 0x80084238: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x8008423C: addiu       $v0, $v0, -0x3EB4
    ctx->r2 = ADD32(ctx->r2, -0X3EB4);
    // 0x80084240: addiu       $v1, $v0, 0xC8
    ctx->r3 = ADD32(ctx->r2, 0XC8);
    // 0x80084244: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80084248: sw          $v1, -0x26E8($at)
    MEM_W(-0X26E8, ctx->r1) = ctx->r3;
    // 0x8008424C: addiu       $v1, $v0, 0x190
    ctx->r3 = ADD32(ctx->r2, 0X190);
    // 0x80084250: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80084254: sw          $v0, 0x442C($at)
    MEM_W(0X442C, ctx->r1) = ctx->r2;
    // 0x80084258: addiu       $v0, $v0, 0x258
    ctx->r2 = ADD32(ctx->r2, 0X258);
    // 0x8008425C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80084260: sw          $v0, -0xB94($at)
    MEM_W(-0XB94, ctx->r1) = ctx->r2;
    // 0x80084264: j           L_80084824
    // 0x80084268: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
        goto L_80084824;
    // 0x80084268: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
L_8008426C:
    // 0x8008426C: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80084270: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80084274: bne         $v1, $v0, L_800842EC
    if (ctx->r3 != ctx->r2) {
        // 0x80084278: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_800842EC;
    }
    // 0x80084278: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8008427C: lbu         $v0, 0x1($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1);
    // 0x80084280: bnel        $v0, $zero, L_800842EC
    if (ctx->r2 != 0) {
        // 0x80084284: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_800842EC;
    }
    goto skip_3;
    // 0x80084284: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    skip_3:
    // 0x80084288: lui         $v0, 0x4C
    ctx->r2 = S32(0X4C << 16);
    // 0x8008428C: addiu       $v0, $v0, 0x6210
    ctx->r2 = ADD32(ctx->r2, 0X6210);
    // 0x80084290: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80084294: sw          $v0, -0x3C80($at)
    MEM_W(-0X3C80, ctx->r1) = ctx->r2;
    // 0x80084298: lui         $v0, 0x4D
    ctx->r2 = S32(0X4D << 16);
    // 0x8008429C: addiu       $v0, $v0, -0x5D20
    ctx->r2 = ADD32(ctx->r2, -0X5D20);
    // 0x800842A0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800842A4: sw          $v0, -0x3C7C($at)
    MEM_W(-0X3C7C, ctx->r1) = ctx->r2;
    // 0x800842A8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x800842AC: addiu       $v0, $v0, 0x75E8
    ctx->r2 = ADD32(ctx->r2, 0X75E8);
    // 0x800842B0: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x800842B4: sw          $v0, -0x72A8($at)
    MEM_W(-0X72A8, ctx->r1) = ctx->r2;
    // 0x800842B8: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x800842BC: addiu       $v0, $v0, -0x3B94
    ctx->r2 = ADD32(ctx->r2, -0X3B94);
    // 0x800842C0: addiu       $v1, $v0, 0xD8
    ctx->r3 = ADD32(ctx->r2, 0XD8);
    // 0x800842C4: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x800842C8: sw          $v1, -0x26E8($at)
    MEM_W(-0X26E8, ctx->r1) = ctx->r3;
    // 0x800842CC: addiu       $v1, $v0, 0x1B0
    ctx->r3 = ADD32(ctx->r2, 0X1B0);
    // 0x800842D0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800842D4: sw          $v0, 0x442C($at)
    MEM_W(0X442C, ctx->r1) = ctx->r2;
    // 0x800842D8: addiu       $v0, $v0, 0x288
    ctx->r2 = ADD32(ctx->r2, 0X288);
    // 0x800842DC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800842E0: sw          $v0, -0xB94($at)
    MEM_W(-0XB94, ctx->r1) = ctx->r2;
    // 0x800842E4: j           L_80084824
    // 0x800842E8: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
        goto L_80084824;
    // 0x800842E8: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
L_800842EC:
    // 0x800842EC: bne         $v1, $v0, L_80084364
    if (ctx->r3 != ctx->r2) {
        // 0x800842F0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80084364;
    }
    // 0x800842F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800842F4: lbu         $v1, 0x1($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X1);
    // 0x800842F8: bne         $v1, $v0, L_80084364
    if (ctx->r3 != ctx->r2) {
        // 0x800842FC: nop
    
            goto L_80084364;
    }
    // 0x800842FC: nop

    // 0x80084300: lui         $v0, 0x4D
    ctx->r2 = S32(0X4D << 16);
    // 0x80084304: addiu       $v0, $v0, -0x5D20
    ctx->r2 = ADD32(ctx->r2, -0X5D20);
    // 0x80084308: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008430C: sw          $v0, -0x3C80($at)
    MEM_W(-0X3C80, ctx->r1) = ctx->r2;
    // 0x80084310: lui         $v0, 0x4D
    ctx->r2 = S32(0X4D << 16);
    // 0x80084314: addiu       $v0, $v0, -0x3180
    ctx->r2 = ADD32(ctx->r2, -0X3180);
    // 0x80084318: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008431C: sw          $v0, -0x3C7C($at)
    MEM_W(-0X3C7C, ctx->r1) = ctx->r2;
    // 0x80084320: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80084324: addiu       $v0, $v0, 0x7948
    ctx->r2 = ADD32(ctx->r2, 0X7948);
    // 0x80084328: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x8008432C: sw          $v0, -0x72A8($at)
    MEM_W(-0X72A8, ctx->r1) = ctx->r2;
    // 0x80084330: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80084334: addiu       $v0, $v0, -0x3834
    ctx->r2 = ADD32(ctx->r2, -0X3834);
    // 0x80084338: addiu       $v1, $v0, 0xC0
    ctx->r3 = ADD32(ctx->r2, 0XC0);
    // 0x8008433C: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80084340: sw          $v1, -0x26E8($at)
    MEM_W(-0X26E8, ctx->r1) = ctx->r3;
    // 0x80084344: addiu       $v1, $v0, 0x180
    ctx->r3 = ADD32(ctx->r2, 0X180);
    // 0x80084348: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8008434C: sw          $v0, 0x442C($at)
    MEM_W(0X442C, ctx->r1) = ctx->r2;
    // 0x80084350: addiu       $v0, $v0, 0x240
    ctx->r2 = ADD32(ctx->r2, 0X240);
    // 0x80084354: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80084358: sw          $v0, -0xB94($at)
    MEM_W(-0XB94, ctx->r1) = ctx->r2;
    // 0x8008435C: j           L_80084824
    // 0x80084360: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
        goto L_80084824;
    // 0x80084360: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
L_80084364:
    // 0x80084364: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80084368: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8008436C: bne         $v1, $v0, L_800843E4
    if (ctx->r3 != ctx->r2) {
        // 0x80084370: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_800843E4;
    }
    // 0x80084370: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80084374: lbu         $v0, 0x1($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1);
    // 0x80084378: bnel        $v0, $zero, L_800843E4
    if (ctx->r2 != 0) {
        // 0x8008437C: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_800843E4;
    }
    goto skip_4;
    // 0x8008437C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    skip_4:
    // 0x80084380: lui         $v0, 0x4D
    ctx->r2 = S32(0X4D << 16);
    // 0x80084384: addiu       $v0, $v0, -0x3180
    ctx->r2 = ADD32(ctx->r2, -0X3180);
    // 0x80084388: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008438C: sw          $v0, -0x3C80($at)
    MEM_W(-0X3C80, ctx->r1) = ctx->r2;
    // 0x80084390: lui         $v0, 0x4D
    ctx->r2 = S32(0X4D << 16);
    // 0x80084394: addiu       $v0, $v0, 0x11F0
    ctx->r2 = ADD32(ctx->r2, 0X11F0);
    // 0x80084398: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008439C: sw          $v0, -0x3C7C($at)
    MEM_W(-0X3C7C, ctx->r1) = ctx->r2;
    // 0x800843A0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x800843A4: addiu       $v0, $v0, 0x7C48
    ctx->r2 = ADD32(ctx->r2, 0X7C48);
    // 0x800843A8: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x800843AC: sw          $v0, -0x72A8($at)
    MEM_W(-0X72A8, ctx->r1) = ctx->r2;
    // 0x800843B0: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x800843B4: addiu       $v0, $v0, -0x3534
    ctx->r2 = ADD32(ctx->r2, -0X3534);
    // 0x800843B8: addiu       $v1, $v0, 0xD8
    ctx->r3 = ADD32(ctx->r2, 0XD8);
    // 0x800843BC: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x800843C0: sw          $v1, -0x26E8($at)
    MEM_W(-0X26E8, ctx->r1) = ctx->r3;
    // 0x800843C4: addiu       $v1, $v0, 0x1B0
    ctx->r3 = ADD32(ctx->r2, 0X1B0);
    // 0x800843C8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800843CC: sw          $v0, 0x442C($at)
    MEM_W(0X442C, ctx->r1) = ctx->r2;
    // 0x800843D0: addiu       $v0, $v0, 0x288
    ctx->r2 = ADD32(ctx->r2, 0X288);
    // 0x800843D4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800843D8: sw          $v0, -0xB94($at)
    MEM_W(-0XB94, ctx->r1) = ctx->r2;
    // 0x800843DC: j           L_80084824
    // 0x800843E0: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
        goto L_80084824;
    // 0x800843E0: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
L_800843E4:
    // 0x800843E4: bne         $v1, $v0, L_8008445C
    if (ctx->r3 != ctx->r2) {
        // 0x800843E8: nop
    
            goto L_8008445C;
    }
    // 0x800843E8: nop

    // 0x800843EC: lbu         $v0, 0x1($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1);
    // 0x800843F0: bne         $v0, $zero, L_8008445C
    if (ctx->r2 != 0) {
        // 0x800843F4: nop
    
            goto L_8008445C;
    }
    // 0x800843F4: nop

    // 0x800843F8: lui         $v0, 0x4D
    ctx->r2 = S32(0X4D << 16);
    // 0x800843FC: addiu       $v0, $v0, 0x11F0
    ctx->r2 = ADD32(ctx->r2, 0X11F0);
    // 0x80084400: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80084404: sw          $v0, -0x3C80($at)
    MEM_W(-0X3C80, ctx->r1) = ctx->r2;
    // 0x80084408: lui         $v0, 0x4D
    ctx->r2 = S32(0X4D << 16);
    // 0x8008440C: addiu       $v0, $v0, 0x47C0
    ctx->r2 = ADD32(ctx->r2, 0X47C0);
    // 0x80084410: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80084414: sw          $v0, -0x3C7C($at)
    MEM_W(-0X3C7C, ctx->r1) = ctx->r2;
    // 0x80084418: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x8008441C: addiu       $v0, $v0, 0x7FA8
    ctx->r2 = ADD32(ctx->r2, 0X7FA8);
    // 0x80084420: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80084424: sw          $v0, -0x72A8($at)
    MEM_W(-0X72A8, ctx->r1) = ctx->r2;
    // 0x80084428: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x8008442C: addiu       $v0, $v0, -0x31D4
    ctx->r2 = ADD32(ctx->r2, -0X31D4);
    // 0x80084430: addiu       $v1, $v0, 0xC0
    ctx->r3 = ADD32(ctx->r2, 0XC0);
    // 0x80084434: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80084438: sw          $v1, -0x26E8($at)
    MEM_W(-0X26E8, ctx->r1) = ctx->r3;
    // 0x8008443C: addiu       $v1, $v0, 0x180
    ctx->r3 = ADD32(ctx->r2, 0X180);
    // 0x80084440: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80084444: sw          $v0, 0x442C($at)
    MEM_W(0X442C, ctx->r1) = ctx->r2;
    // 0x80084448: addiu       $v0, $v0, 0x240
    ctx->r2 = ADD32(ctx->r2, 0X240);
    // 0x8008444C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80084450: sw          $v0, -0xB94($at)
    MEM_W(-0XB94, ctx->r1) = ctx->r2;
    // 0x80084454: j           L_80084824
    // 0x80084458: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
        goto L_80084824;
    // 0x80084458: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
L_8008445C:
    // 0x8008445C: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80084460: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80084464: bne         $v1, $v0, L_800844DC
    if (ctx->r3 != ctx->r2) {
        // 0x80084468: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_800844DC;
    }
    // 0x80084468: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8008446C: lbu         $v0, 0x1($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1);
    // 0x80084470: bnel        $v0, $zero, L_800844DC
    if (ctx->r2 != 0) {
        // 0x80084474: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_800844DC;
    }
    goto skip_5;
    // 0x80084474: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    skip_5:
    // 0x80084478: lui         $v0, 0x4D
    ctx->r2 = S32(0X4D << 16);
    // 0x8008447C: addiu       $v0, $v0, 0x47C0
    ctx->r2 = ADD32(ctx->r2, 0X47C0);
    // 0x80084480: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80084484: sw          $v0, -0x3C80($at)
    MEM_W(-0X3C80, ctx->r1) = ctx->r2;
    // 0x80084488: lui         $v0, 0x4E
    ctx->r2 = S32(0X4E << 16);
    // 0x8008448C: addiu       $v0, $v0, -0x7430
    ctx->r2 = ADD32(ctx->r2, -0X7430);
    // 0x80084490: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80084494: sw          $v0, -0x3C7C($at)
    MEM_W(-0X3C7C, ctx->r1) = ctx->r2;
    // 0x80084498: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x8008449C: addiu       $v0, $v0, -0x7D58
    ctx->r2 = ADD32(ctx->r2, -0X7D58);
    // 0x800844A0: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x800844A4: sw          $v0, -0x72A8($at)
    MEM_W(-0X72A8, ctx->r1) = ctx->r2;
    // 0x800844A8: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x800844AC: addiu       $v0, $v0, -0x2ED4
    ctx->r2 = ADD32(ctx->r2, -0X2ED4);
    // 0x800844B0: addiu       $v1, $v0, 0xD8
    ctx->r3 = ADD32(ctx->r2, 0XD8);
    // 0x800844B4: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x800844B8: sw          $v1, -0x26E8($at)
    MEM_W(-0X26E8, ctx->r1) = ctx->r3;
    // 0x800844BC: addiu       $v1, $v0, 0x1B0
    ctx->r3 = ADD32(ctx->r2, 0X1B0);
    // 0x800844C0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800844C4: sw          $v0, 0x442C($at)
    MEM_W(0X442C, ctx->r1) = ctx->r2;
    // 0x800844C8: addiu       $v0, $v0, 0x288
    ctx->r2 = ADD32(ctx->r2, 0X288);
    // 0x800844CC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800844D0: sw          $v0, -0xB94($at)
    MEM_W(-0XB94, ctx->r1) = ctx->r2;
    // 0x800844D4: j           L_80084824
    // 0x800844D8: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
        goto L_80084824;
    // 0x800844D8: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
L_800844DC:
    // 0x800844DC: bne         $v1, $v0, L_80084554
    if (ctx->r3 != ctx->r2) {
        // 0x800844E0: nop
    
            goto L_80084554;
    }
    // 0x800844E0: nop

    // 0x800844E4: lbu         $v0, 0x1($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1);
    // 0x800844E8: bne         $v0, $zero, L_80084554
    if (ctx->r2 != 0) {
        // 0x800844EC: nop
    
            goto L_80084554;
    }
    // 0x800844EC: nop

    // 0x800844F0: lui         $v0, 0x4E
    ctx->r2 = S32(0X4E << 16);
    // 0x800844F4: addiu       $v0, $v0, -0x7430
    ctx->r2 = ADD32(ctx->r2, -0X7430);
    // 0x800844F8: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800844FC: sw          $v0, -0x3C80($at)
    MEM_W(-0X3C80, ctx->r1) = ctx->r2;
    // 0x80084500: lui         $v0, 0x4E
    ctx->r2 = S32(0X4E << 16);
    // 0x80084504: addiu       $v0, $v0, -0x4820
    ctx->r2 = ADD32(ctx->r2, -0X4820);
    // 0x80084508: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008450C: sw          $v0, -0x3C7C($at)
    MEM_W(-0X3C7C, ctx->r1) = ctx->r2;
    // 0x80084510: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80084514: addiu       $v0, $v0, -0x79F8
    ctx->r2 = ADD32(ctx->r2, -0X79F8);
    // 0x80084518: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x8008451C: sw          $v0, -0x72A8($at)
    MEM_W(-0X72A8, ctx->r1) = ctx->r2;
    // 0x80084520: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80084524: addiu       $v0, $v0, -0x2B74
    ctx->r2 = ADD32(ctx->r2, -0X2B74);
    // 0x80084528: addiu       $v1, $v0, 0x98
    ctx->r3 = ADD32(ctx->r2, 0X98);
    // 0x8008452C: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80084530: sw          $v1, -0x26E8($at)
    MEM_W(-0X26E8, ctx->r1) = ctx->r3;
    // 0x80084534: addiu       $v1, $v0, 0x130
    ctx->r3 = ADD32(ctx->r2, 0X130);
    // 0x80084538: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8008453C: sw          $v0, 0x442C($at)
    MEM_W(0X442C, ctx->r1) = ctx->r2;
    // 0x80084540: addiu       $v0, $v0, 0x1C8
    ctx->r2 = ADD32(ctx->r2, 0X1C8);
    // 0x80084544: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80084548: sw          $v0, -0xB94($at)
    MEM_W(-0XB94, ctx->r1) = ctx->r2;
    // 0x8008454C: j           L_80084824
    // 0x80084550: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
        goto L_80084824;
    // 0x80084550: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
L_80084554:
    // 0x80084554: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80084558: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8008455C: bne         $v1, $v0, L_800845D4
    if (ctx->r3 != ctx->r2) {
        // 0x80084560: addiu       $v0, $zero, 0xC
        ctx->r2 = ADD32(0, 0XC);
            goto L_800845D4;
    }
    // 0x80084560: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80084564: lbu         $v0, 0x1($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1);
    // 0x80084568: bnel        $v0, $zero, L_800845D4
    if (ctx->r2 != 0) {
        // 0x8008456C: addiu       $v0, $zero, 0xC
        ctx->r2 = ADD32(0, 0XC);
            goto L_800845D4;
    }
    goto skip_6;
    // 0x8008456C: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    skip_6:
    // 0x80084570: lui         $v0, 0x4E
    ctx->r2 = S32(0X4E << 16);
    // 0x80084574: addiu       $v0, $v0, -0x4820
    ctx->r2 = ADD32(ctx->r2, -0X4820);
    // 0x80084578: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008457C: sw          $v0, -0x3C80($at)
    MEM_W(-0X3C80, ctx->r1) = ctx->r2;
    // 0x80084580: lui         $v0, 0x4E
    ctx->r2 = S32(0X4E << 16);
    // 0x80084584: addiu       $v0, $v0, -0xD20
    ctx->r2 = ADD32(ctx->r2, -0XD20);
    // 0x80084588: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008458C: sw          $v0, -0x3C7C($at)
    MEM_W(-0X3C7C, ctx->r1) = ctx->r2;
    // 0x80084590: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80084594: addiu       $v0, $v0, -0x7798
    ctx->r2 = ADD32(ctx->r2, -0X7798);
    // 0x80084598: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x8008459C: sw          $v0, -0x72A8($at)
    MEM_W(-0X72A8, ctx->r1) = ctx->r2;
    // 0x800845A0: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x800845A4: addiu       $v0, $v0, -0x2914
    ctx->r2 = ADD32(ctx->r2, -0X2914);
    // 0x800845A8: addiu       $v1, $v0, 0xC8
    ctx->r3 = ADD32(ctx->r2, 0XC8);
    // 0x800845AC: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x800845B0: sw          $v1, -0x26E8($at)
    MEM_W(-0X26E8, ctx->r1) = ctx->r3;
    // 0x800845B4: addiu       $v1, $v0, 0x190
    ctx->r3 = ADD32(ctx->r2, 0X190);
    // 0x800845B8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800845BC: sw          $v0, 0x442C($at)
    MEM_W(0X442C, ctx->r1) = ctx->r2;
    // 0x800845C0: addiu       $v0, $v0, 0x258
    ctx->r2 = ADD32(ctx->r2, 0X258);
    // 0x800845C4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800845C8: sw          $v0, -0xB94($at)
    MEM_W(-0XB94, ctx->r1) = ctx->r2;
    // 0x800845CC: j           L_80084824
    // 0x800845D0: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
        goto L_80084824;
    // 0x800845D0: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
L_800845D4:
    // 0x800845D4: bne         $v1, $v0, L_8008464C
    if (ctx->r3 != ctx->r2) {
        // 0x800845D8: nop
    
            goto L_8008464C;
    }
    // 0x800845D8: nop

    // 0x800845DC: lbu         $v0, 0x1($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1);
    // 0x800845E0: bne         $v0, $zero, L_8008464C
    if (ctx->r2 != 0) {
        // 0x800845E4: nop
    
            goto L_8008464C;
    }
    // 0x800845E4: nop

    // 0x800845E8: lui         $v0, 0x4E
    ctx->r2 = S32(0X4E << 16);
    // 0x800845EC: addiu       $v0, $v0, -0xD20
    ctx->r2 = ADD32(ctx->r2, -0XD20);
    // 0x800845F0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800845F4: sw          $v0, -0x3C80($at)
    MEM_W(-0X3C80, ctx->r1) = ctx->r2;
    // 0x800845F8: lui         $v0, 0x4E
    ctx->r2 = S32(0X4E << 16);
    // 0x800845FC: addiu       $v0, $v0, 0x3560
    ctx->r2 = ADD32(ctx->r2, 0X3560);
    // 0x80084600: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80084604: sw          $v0, -0x3C7C($at)
    MEM_W(-0X3C7C, ctx->r1) = ctx->r2;
    // 0x80084608: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x8008460C: addiu       $v0, $v0, -0x7478
    ctx->r2 = ADD32(ctx->r2, -0X7478);
    // 0x80084610: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80084614: sw          $v0, -0x72A8($at)
    MEM_W(-0X72A8, ctx->r1) = ctx->r2;
    // 0x80084618: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x8008461C: addiu       $v0, $v0, -0x25F4
    ctx->r2 = ADD32(ctx->r2, -0X25F4);
    // 0x80084620: addiu       $v1, $v0, 0xD8
    ctx->r3 = ADD32(ctx->r2, 0XD8);
    // 0x80084624: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80084628: sw          $v1, -0x26E8($at)
    MEM_W(-0X26E8, ctx->r1) = ctx->r3;
    // 0x8008462C: addiu       $v1, $v0, 0x1B0
    ctx->r3 = ADD32(ctx->r2, 0X1B0);
    // 0x80084630: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80084634: sw          $v0, 0x442C($at)
    MEM_W(0X442C, ctx->r1) = ctx->r2;
    // 0x80084638: addiu       $v0, $v0, 0x288
    ctx->r2 = ADD32(ctx->r2, 0X288);
    // 0x8008463C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80084640: sw          $v0, -0xB94($at)
    MEM_W(-0XB94, ctx->r1) = ctx->r2;
    // 0x80084644: j           L_80084824
    // 0x80084648: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
        goto L_80084824;
    // 0x80084648: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
L_8008464C:
    // 0x8008464C: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80084650: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x80084654: bne         $v1, $v0, L_800846CC
    if (ctx->r3 != ctx->r2) {
        // 0x80084658: addiu       $v0, $zero, 0xE
        ctx->r2 = ADD32(0, 0XE);
            goto L_800846CC;
    }
    // 0x80084658: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x8008465C: lbu         $v0, 0x1($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1);
    // 0x80084660: bnel        $v0, $zero, L_800846CC
    if (ctx->r2 != 0) {
        // 0x80084664: addiu       $v0, $zero, 0xE
        ctx->r2 = ADD32(0, 0XE);
            goto L_800846CC;
    }
    goto skip_7;
    // 0x80084664: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    skip_7:
    // 0x80084668: lui         $v0, 0x4E
    ctx->r2 = S32(0X4E << 16);
    // 0x8008466C: addiu       $v0, $v0, 0x3560
    ctx->r2 = ADD32(ctx->r2, 0X3560);
    // 0x80084670: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80084674: sw          $v0, -0x3C80($at)
    MEM_W(-0X3C80, ctx->r1) = ctx->r2;
    // 0x80084678: lui         $v0, 0x4E
    ctx->r2 = S32(0X4E << 16);
    // 0x8008467C: addiu       $v0, $v0, 0x7A40
    ctx->r2 = ADD32(ctx->r2, 0X7A40);
    // 0x80084680: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80084684: sw          $v0, -0x3C7C($at)
    MEM_W(-0X3C7C, ctx->r1) = ctx->r2;
    // 0x80084688: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x8008468C: addiu       $v0, $v0, -0x7118
    ctx->r2 = ADD32(ctx->r2, -0X7118);
    // 0x80084690: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80084694: sw          $v0, -0x72A8($at)
    MEM_W(-0X72A8, ctx->r1) = ctx->r2;
    // 0x80084698: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x8008469C: addiu       $v0, $v0, -0x2294
    ctx->r2 = ADD32(ctx->r2, -0X2294);
    // 0x800846A0: addiu       $v1, $v0, 0xD8
    ctx->r3 = ADD32(ctx->r2, 0XD8);
    // 0x800846A4: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x800846A8: sw          $v1, -0x26E8($at)
    MEM_W(-0X26E8, ctx->r1) = ctx->r3;
    // 0x800846AC: addiu       $v1, $v0, 0x1B0
    ctx->r3 = ADD32(ctx->r2, 0X1B0);
    // 0x800846B0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800846B4: sw          $v0, 0x442C($at)
    MEM_W(0X442C, ctx->r1) = ctx->r2;
    // 0x800846B8: addiu       $v0, $v0, 0x288
    ctx->r2 = ADD32(ctx->r2, 0X288);
    // 0x800846BC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800846C0: sw          $v0, -0xB94($at)
    MEM_W(-0XB94, ctx->r1) = ctx->r2;
    // 0x800846C4: j           L_80084824
    // 0x800846C8: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
        goto L_80084824;
    // 0x800846C8: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
L_800846CC:
    // 0x800846CC: bne         $v1, $v0, L_80084744
    if (ctx->r3 != ctx->r2) {
        // 0x800846D0: nop
    
            goto L_80084744;
    }
    // 0x800846D0: nop

    // 0x800846D4: lbu         $v0, 0x1($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1);
    // 0x800846D8: bne         $v0, $zero, L_80084744
    if (ctx->r2 != 0) {
        // 0x800846DC: nop
    
            goto L_80084744;
    }
    // 0x800846DC: nop

    // 0x800846E0: lui         $v0, 0x4E
    ctx->r2 = S32(0X4E << 16);
    // 0x800846E4: addiu       $v0, $v0, 0x7A40
    ctx->r2 = ADD32(ctx->r2, 0X7A40);
    // 0x800846E8: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800846EC: sw          $v0, -0x3C80($at)
    MEM_W(-0X3C80, ctx->r1) = ctx->r2;
    // 0x800846F0: lui         $v0, 0x4F
    ctx->r2 = S32(0X4F << 16);
    // 0x800846F4: addiu       $v0, $v0, -0x4A20
    ctx->r2 = ADD32(ctx->r2, -0X4A20);
    // 0x800846F8: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800846FC: sw          $v0, -0x3C7C($at)
    MEM_W(-0X3C7C, ctx->r1) = ctx->r2;
    // 0x80084700: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80084704: addiu       $v0, $v0, -0x6DB8
    ctx->r2 = ADD32(ctx->r2, -0X6DB8);
    // 0x80084708: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x8008470C: sw          $v0, -0x72A8($at)
    MEM_W(-0X72A8, ctx->r1) = ctx->r2;
    // 0x80084710: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80084714: addiu       $v0, $v0, -0x1F34
    ctx->r2 = ADD32(ctx->r2, -0X1F34);
    // 0x80084718: addiu       $v1, $v0, 0xD0
    ctx->r3 = ADD32(ctx->r2, 0XD0);
    // 0x8008471C: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80084720: sw          $v1, -0x26E8($at)
    MEM_W(-0X26E8, ctx->r1) = ctx->r3;
    // 0x80084724: addiu       $v1, $v0, 0x1A0
    ctx->r3 = ADD32(ctx->r2, 0X1A0);
    // 0x80084728: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8008472C: sw          $v0, 0x442C($at)
    MEM_W(0X442C, ctx->r1) = ctx->r2;
    // 0x80084730: addiu       $v0, $v0, 0x270
    ctx->r2 = ADD32(ctx->r2, 0X270);
    // 0x80084734: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80084738: sw          $v0, -0xB94($at)
    MEM_W(-0XB94, ctx->r1) = ctx->r2;
    // 0x8008473C: j           L_80084824
    // 0x80084740: addiu       $v0, $zero, 0x1A
    ctx->r2 = ADD32(0, 0X1A);
        goto L_80084824;
    // 0x80084740: addiu       $v0, $zero, 0x1A
    ctx->r2 = ADD32(0, 0X1A);
L_80084744:
    // 0x80084744: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80084748: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x8008474C: bne         $v1, $v0, L_800847C4
    if (ctx->r3 != ctx->r2) {
        // 0x80084750: nop
    
            goto L_800847C4;
    }
    // 0x80084750: nop

    // 0x80084754: lbu         $v0, 0x1($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1);
    // 0x80084758: bne         $v0, $zero, L_800847C4
    if (ctx->r2 != 0) {
        // 0x8008475C: nop
    
            goto L_800847C4;
    }
    // 0x8008475C: nop

    // 0x80084760: lui         $v0, 0x4F
    ctx->r2 = S32(0X4F << 16);
    // 0x80084764: addiu       $v0, $v0, -0x4A20
    ctx->r2 = ADD32(ctx->r2, -0X4A20);
    // 0x80084768: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008476C: sw          $v0, -0x3C80($at)
    MEM_W(-0X3C80, ctx->r1) = ctx->r2;
    // 0x80084770: lui         $v0, 0x4F
    ctx->r2 = S32(0X4F << 16);
    // 0x80084774: addiu       $v0, $v0, -0x3230
    ctx->r2 = ADD32(ctx->r2, -0X3230);
    // 0x80084778: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008477C: sw          $v0, -0x3C7C($at)
    MEM_W(-0X3C7C, ctx->r1) = ctx->r2;
    // 0x80084780: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80084784: addiu       $v0, $v0, -0x6A78
    ctx->r2 = ADD32(ctx->r2, -0X6A78);
    // 0x80084788: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x8008478C: sw          $v0, -0x72A8($at)
    MEM_W(-0X72A8, ctx->r1) = ctx->r2;
    // 0x80084790: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80084794: addiu       $v0, $v0, -0x1BF4
    ctx->r2 = ADD32(ctx->r2, -0X1BF4);
    // 0x80084798: addiu       $v1, $v0, 0x50
    ctx->r3 = ADD32(ctx->r2, 0X50);
    // 0x8008479C: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x800847A0: sw          $v1, -0x26E8($at)
    MEM_W(-0X26E8, ctx->r1) = ctx->r3;
    // 0x800847A4: addiu       $v1, $v0, 0xA0
    ctx->r3 = ADD32(ctx->r2, 0XA0);
    // 0x800847A8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800847AC: sw          $v0, 0x442C($at)
    MEM_W(0X442C, ctx->r1) = ctx->r2;
    // 0x800847B0: addiu       $v0, $v0, 0xF0
    ctx->r2 = ADD32(ctx->r2, 0XF0);
    // 0x800847B4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800847B8: sw          $v0, -0xB94($at)
    MEM_W(-0XB94, ctx->r1) = ctx->r2;
    // 0x800847BC: j           L_80084824
    // 0x800847C0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
        goto L_80084824;
    // 0x800847C0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_800847C4:
    // 0x800847C4: lui         $v0, 0x4B
    ctx->r2 = S32(0X4B << 16);
    // 0x800847C8: addiu       $v0, $v0, -0xED0
    ctx->r2 = ADD32(ctx->r2, -0XED0);
    // 0x800847CC: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800847D0: sw          $v0, -0x3C80($at)
    MEM_W(-0X3C80, ctx->r1) = ctx->r2;
    // 0x800847D4: lui         $v0, 0x4B
    ctx->r2 = S32(0X4B << 16);
    // 0x800847D8: addiu       $v0, $v0, 0x29A0
    ctx->r2 = ADD32(ctx->r2, 0X29A0);
    // 0x800847DC: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800847E0: sw          $v0, -0x3C7C($at)
    MEM_W(-0X3C7C, ctx->r1) = ctx->r2;
    // 0x800847E4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x800847E8: addiu       $v0, $v0, 0x6308
    ctx->r2 = ADD32(ctx->r2, 0X6308);
    // 0x800847EC: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x800847F0: sw          $v0, -0x72A8($at)
    MEM_W(-0X72A8, ctx->r1) = ctx->r2;
    // 0x800847F4: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x800847F8: addiu       $v0, $v0, -0x4E74
    ctx->r2 = ADD32(ctx->r2, -0X4E74);
    // 0x800847FC: addiu       $v1, $v0, 0xB8
    ctx->r3 = ADD32(ctx->r2, 0XB8);
L_80084800:
    // 0x80084800: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80084804: sw          $v1, -0x26E8($at)
    MEM_W(-0X26E8, ctx->r1) = ctx->r3;
    // 0x80084808: addiu       $v1, $v0, 0x170
    ctx->r3 = ADD32(ctx->r2, 0X170);
    // 0x8008480C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80084810: sw          $v0, 0x442C($at)
    MEM_W(0X442C, ctx->r1) = ctx->r2;
    // 0x80084814: addiu       $v0, $v0, 0x228
    ctx->r2 = ADD32(ctx->r2, 0X228);
    // 0x80084818: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8008481C: sw          $v0, -0xB94($at)
    MEM_W(-0XB94, ctx->r1) = ctx->r2;
    // 0x80084820: addiu       $v0, $zero, 0x17
    ctx->r2 = ADD32(0, 0X17);
L_80084824:
    // 0x80084824: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80084828: sw          $v1, -0x738C($at)
    MEM_W(-0X738C, ctx->r1) = ctx->r3;
    // 0x8008482C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80084830: sh          $v0, -0x1AB4($at)
    MEM_H(-0X1AB4, ctx->r1) = ctx->r2;
    // 0x80084834: lui         $s0, 0x8021
    ctx->r16 = S32(0X8021 << 16);
    // 0x80084838: addiu       $s0, $s0, -0x7C50
    ctx->r16 = ADD32(ctx->r16, -0X7C50);
    // 0x8008483C: beq         $s0, $zero, L_80084860
    if (ctx->r16 == 0) {
        // 0x80084840: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80084860;
    }
    // 0x80084840: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80084844: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x80084848: lw          $a0, -0x3C80($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3C80);
    // 0x8008484C: lui         $a1, 0x8018
    ctx->r5 = S32(0X8018 << 16);
    // 0x80084850: lw          $a1, -0x3C7C($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3C7C);
    // 0x80084854: jal         0x8002724C
    // 0x80084858: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_8002724C_264C(rdram, ctx);
        goto after_0;
    // 0x80084858: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8008485C: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_80084860:
    // 0x80084860: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80084864: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80084868: jr          $ra
    // 0x8008486C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8008486C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8002A5F8_59F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002A5F8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8002A5FC: lb          $v1, -0x3BC5($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC5);
    // 0x8002A600: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8002A604: bne         $v1, $v0, L_8002A610
    if (ctx->r3 != ctx->r2) {
        // 0x8002A608: addiu       $a0, $zero, 0x108
        ctx->r4 = ADD32(0, 0X108);
            goto L_8002A610;
    }
    // 0x8002A608: addiu       $a0, $zero, 0x108
    ctx->r4 = ADD32(0, 0X108);
    // 0x8002A60C: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
L_8002A610:
    // 0x8002A610: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x8002A614: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x8002A618: addiu       $v0, $v0, 0x6FEE
    ctx->r2 = ADD32(ctx->r2, 0X6FEE);
L_8002A61C:
    // 0x8002A61C: sh          $a0, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r4;
    // 0x8002A620: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8002A624: bgez        $v1, L_8002A61C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8002A628: addiu       $v0, $v0, -0x2
        ctx->r2 = ADD32(ctx->r2, -0X2);
            goto L_8002A61C;
    }
    // 0x8002A628: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x8002A62C: jr          $ra
    // 0x8002A630: nop

    TRACE_RETURN()
    return;
    // 0x8002A630: nop

;}
RECOMP_FUNC void func_800318C8_CCC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800318C8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800318CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x800318D0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x800318D4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x800318D8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x800318DC: jal         0x80032510
    // 0x800318E0: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    func_80032510_D910(rdram, ctx);
        goto after_0;
    // 0x800318E0: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    after_0:
    // 0x800318E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x800318E8: jal         0x800324D0
    // 0x800318EC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_800324D0_D8D0(rdram, ctx);
        goto after_1;
    // 0x800318EC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_1:
    // 0x800318F0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x800318F4: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x800318F8: addiu       $v1, $zero, 0x1000
    ctx->r3 = ADD32(0, 0X1000);
    // 0x800318FC: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x80031900: negu        $v1, $s0
    ctx->r3 = SUB32(0, ctx->r16);
    // 0x80031904: sh          $zero, 0x2($v0)
    MEM_H(0X2, ctx->r2) = 0;
    // 0x80031908: sh          $zero, 0x4($v0)
    MEM_H(0X4, ctx->r2) = 0;
    // 0x8003190C: sh          $zero, 0x6($v0)
    MEM_H(0X6, ctx->r2) = 0;
    // 0x80031910: sh          $a0, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r4;
    // 0x80031914: sh          $v1, 0xA($v0)
    MEM_H(0XA, ctx->r2) = ctx->r3;
    // 0x80031918: sh          $zero, 0xC($v0)
    MEM_H(0XC, ctx->r2) = 0;
    // 0x8003191C: sh          $s0, 0xE($v0)
    MEM_H(0XE, ctx->r2) = ctx->r16;
    // 0x80031920: sh          $a0, 0x10($v0)
    MEM_H(0X10, ctx->r2) = ctx->r4;
    // 0x80031924: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80031928: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8003192C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80031930: jr          $ra
    // 0x80031934: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80031934: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8006B340_46740(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006B340: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006B344: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8006B348: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8006B34C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006B350: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8006B354: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8006B358: beq         $v0, $zero, L_8006B58C
    if (ctx->r2 == 0) {
        // 0x8006B35C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8006B58C;
    }
    // 0x8006B35C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8006B360: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8006B364: addu        $at, $at, $v0
    gpr jr_addend_8006B36C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8006B368: lw          $v0, 0x2868($at)
    ctx->r2 = ADD32(ctx->r1, 0X2868);
    // 0x8006B36C: jr          $v0
    // 0x8006B370: nop

    switch (jr_addend_8006B36C >> 2) {
        case 0: goto L_8006B374; break;
        case 1: goto L_8006B3F4; break;
        case 2: goto L_8006B468; break;
        case 3: goto L_8006B4D0; break;
        case 4: goto L_8006B544; break;
        default: switch_error(__func__, 0x8006B36C, 0x800D2868);
    }
    // 0x8006B370: nop

L_8006B374:
    // 0x8006B374: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8006B378: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x8006B37C: sb          $v1, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r3;
    // 0x8006B380: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x8006B384: bne         $v0, $v1, L_8006B5A0
    if (ctx->r2 != ctx->r3) {
        // 0x8006B388: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8006B5A0;
    }
    // 0x8006B388: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8006B38C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8006B390: lbu         $a0, 0xB($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XB);
    // 0x8006B394: sb          $v1, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r3;
    // 0x8006B398: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x8006B39C: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8006B3A0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8006B3A4: beq         $a0, $zero, L_8006B3C0
    if (ctx->r4 == 0) {
        // 0x8006B3A8: sb          $v0, 0xA($s0)
        MEM_B(0XA, ctx->r16) = ctx->r2;
            goto L_8006B3C0;
    }
    // 0x8006B3A8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8006B3AC: addiu       $v0, $zero, -0x200
    ctx->r2 = ADD32(0, -0X200);
    // 0x8006B3B0: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
    // 0x8006B3B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006B3B8: j           L_8006B3D0
    // 0x8006B3BC: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
        goto L_8006B3D0;
    // 0x8006B3BC: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
L_8006B3C0:
    // 0x8006B3C0: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8006B3C4: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
    // 0x8006B3C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006B3CC: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
L_8006B3D0:
    // 0x8006B3D0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8006B3D4: jal         0x8006FB90
    // 0x8006B3D8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8006FB90_4AF90(rdram, ctx);
        goto after_0;
    // 0x8006B3D8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x8006B3DC: addiu       $a0, $zero, 0x92
    ctx->r4 = ADD32(0, 0X92);
    // 0x8006B3E0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8006B3E4: jal         0x8002A2F8
    // 0x8006B3E8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_1;
    // 0x8006B3E8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x8006B3EC: j           L_8006B5A0
    // 0x8006B3F0: nop

        goto L_8006B5A0;
    // 0x8006B3F0: nop

L_8006B3F4:
    // 0x8006B3F4: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x8006B3F8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8006B3FC: bne         $v1, $v0, L_8006B4C8
    if (ctx->r3 != ctx->r2) {
        // 0x8006B400: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8006B4C8;
    }
    // 0x8006B400: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006B404: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8006B408: lbu         $a0, 0xB($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XB);
    // 0x8006B40C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8006B410: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8006B414: addiu       $v0, $zero, -0x80
    ctx->r2 = ADD32(0, -0X80);
    // 0x8006B418: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8006B41C: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8006B420: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8006B424: beq         $a0, $zero, L_8006B43C
    if (ctx->r4 == 0) {
        // 0x8006B428: sb          $v1, 0xA($s0)
        MEM_B(0XA, ctx->r16) = ctx->r3;
            goto L_8006B43C;
    }
    // 0x8006B428: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8006B42C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8006B430: sb          $v0, 0x112($s0)
    MEM_B(0X112, ctx->r16) = ctx->r2;
    // 0x8006B434: j           L_8006B448
    // 0x8006B438: addiu       $v0, $zero, -0x400
    ctx->r2 = ADD32(0, -0X400);
        goto L_8006B448;
    // 0x8006B438: addiu       $v0, $zero, -0x400
    ctx->r2 = ADD32(0, -0X400);
L_8006B43C:
    // 0x8006B43C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006B440: sb          $v0, 0x112($s0)
    MEM_B(0X112, ctx->r16) = ctx->r2;
    // 0x8006B444: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
L_8006B448:
    // 0x8006B448: sh          $v0, 0x116($s0)
    MEM_H(0X116, ctx->r16) = ctx->r2;
    // 0x8006B44C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006B450: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x8006B454: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8006B458: jal         0x8006FB90
    // 0x8006B45C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8006FB90_4AF90(rdram, ctx);
        goto after_2;
    // 0x8006B45C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x8006B460: j           L_8006B4C8
    // 0x8006B464: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8006B4C8;
    // 0x8006B464: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8006B468:
    // 0x8006B468: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x8006B46C: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x8006B470: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
    // 0x8006B474: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8006B478: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8006B47C: bne         $v1, $v0, L_8006B4C8
    if (ctx->r3 != ctx->r2) {
        // 0x8006B480: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8006B4C8;
    }
    // 0x8006B480: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006B484: lb          $v0, 0x74($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X74);
    // 0x8006B488: beq         $v0, $zero, L_8006B4A8
    if (ctx->r2 == 0) {
        // 0x8006B48C: sb          $zero, 0x110($s0)
        MEM_B(0X110, ctx->r16) = 0;
            goto L_8006B4A8;
    }
    // 0x8006B48C: sb          $zero, 0x110($s0)
    MEM_B(0X110, ctx->r16) = 0;
    // 0x8006B490: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006B494: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    // 0x8006B498: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8006B49C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8006B4A0: j           L_8006B4FC
    // 0x8006B4A4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
        goto L_8006B4FC;
    // 0x8006B4A4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_8006B4A8:
    // 0x8006B4A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006B4AC: addiu       $a1, $zero, 0x1B
    ctx->r5 = ADD32(0, 0X1B);
    // 0x8006B4B0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8006B4B4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8006B4B8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8006B4BC: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8006B4C0: j           L_8006B500
    // 0x8006B4C4: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
        goto L_8006B500;
    // 0x8006B4C4: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_8006B4C8:
    // 0x8006B4C8: j           L_8006B58C
    // 0x8006B4CC: sb          $v0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r2;
        goto L_8006B58C;
    // 0x8006B4CC: sb          $v0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r2;
L_8006B4D0:
    // 0x8006B4D0: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x8006B4D4: lb          $v1, 0x74($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X74);
    // 0x8006B4D8: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
    // 0x8006B4DC: bne         $v1, $zero, L_8006B510
    if (ctx->r3 != 0) {
        // 0x8006B4E0: sh          $v0, 0x46($s0)
        MEM_H(0X46, ctx->r16) = ctx->r2;
            goto L_8006B510;
    }
    // 0x8006B4E0: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8006B4E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006B4E8: lbu         $a2, 0xA4($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0XA4);
    // 0x8006B4EC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8006B4F0: addiu       $a1, $zero, 0x1B
    ctx->r5 = ADD32(0, 0X1B);
    // 0x8006B4F4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8006B4F8: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
L_8006B4FC:
    // 0x8006B4FC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8006B500:
    // 0x8006B500: jal         0x8006FB90
    // 0x8006B504: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    func_8006FB90_4AF90(rdram, ctx);
        goto after_3;
    // 0x8006B504: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    after_3:
    // 0x8006B508: j           L_8006B58C
    // 0x8006B50C: nop

        goto L_8006B58C;
    // 0x8006B50C: nop

L_8006B510:
    // 0x8006B510: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x8006B514: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8006B518: bne         $v1, $v0, L_8006B58C
    if (ctx->r3 != ctx->r2) {
        // 0x8006B51C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8006B58C;
    }
    // 0x8006B51C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006B520: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x8006B524: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8006B528: jal         0x8006FB90
    // 0x8006B52C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8006FB90_4AF90(rdram, ctx);
        goto after_4;
    // 0x8006B52C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_4:
    // 0x8006B530: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8006B534: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8006B538: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8006B53C: j           L_8006B58C
    // 0x8006B540: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8006B58C;
    // 0x8006B540: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8006B544:
    // 0x8006B544: lb          $v1, 0xA6($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA6);
    // 0x8006B548: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006B54C: bne         $v1, $v0, L_8006B58C
    if (ctx->r3 != ctx->r2) {
        // 0x8006B550: nop
    
            goto L_8006B58C;
    }
    // 0x8006B550: nop

    // 0x8006B554: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8006B558: bne         $v0, $zero, L_8006B564
    if (ctx->r2 != 0) {
        // 0x8006B55C: addiu       $v0, $zero, 0xC0
        ctx->r2 = ADD32(0, 0XC0);
            goto L_8006B564;
    }
    // 0x8006B55C: addiu       $v0, $zero, 0xC0
    ctx->r2 = ADD32(0, 0XC0);
    // 0x8006B560: addiu       $v0, $zero, -0xC0
    ctx->r2 = ADD32(0, -0XC0);
L_8006B564:
    // 0x8006B564: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
    // 0x8006B568: addiu       $a0, $zero, 0x93
    ctx->r4 = ADD32(0, 0X93);
    // 0x8006B56C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8006B570: jal         0x8002A2F8
    // 0x8006B574: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_5;
    // 0x8006B574: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x8006B578: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8006B57C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8006B580: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8006B584: j           L_8006B5A0
    // 0x8006B588: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8006B5A0;
    // 0x8006B588: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8006B58C:
    // 0x8006B58C: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8006B590: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8006B594: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x8006B598: jal         0x8006FC34
    // 0x8006B59C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8006FC34_4B034(rdram, ctx);
        goto after_6;
    // 0x8006B59C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_8006B5A0:
    // 0x8006B5A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006B5A4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8006B5A8: jr          $ra
    // 0x8006B5AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8006B5AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80081778_5CB78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80081778: lw          $v0, 0x70($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X70);
    // 0x8008177C: lw          $v0, 0x8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X8);
    // 0x80081780: lw          $v1, 0x1C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1C);
    // 0x80081784: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80081788: lbu         $a1, 0x4($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X4);
    // 0x8008178C: lbu         $v1, 0x8($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X8);
    // 0x80081790: addiu       $a0, $a1, 0x5
    ctx->r4 = ADD32(ctx->r5, 0X5);
    // 0x80081794: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80081798: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8008179C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800817A0: lbu         $v1, 0x1($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X1);
    // 0x800817A4: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x800817A8: bne         $a1, $v0, L_800817B4
    if (ctx->r5 != ctx->r2) {
        // 0x800817AC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_800817B4;
    }
    // 0x800817AC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x800817B0: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_800817B4:
    // 0x800817B4: jr          $ra
    // 0x800817B8: nop

    TRACE_RETURN()
    return;
    // 0x800817B8: nop

;}
RECOMP_FUNC void func_80029400_4800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80029400: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80029404: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80029408: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8002940C: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x80029410: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80029414: jal         0x800281C8
    // 0x80029418: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_800281C8_35C8(rdram, ctx);
        goto after_0;
    // 0x80029418: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x8002941C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80029420: beq         $s0, $zero, L_800294D4
    if (ctx->r16 == 0) {
        // 0x80029424: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_800294D4;
    }
    // 0x80029424: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80029428: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8002942C: lui         $at, 0x8019
    ctx->r1 = S32(0X8019 << 16);
    // 0x80029430: sw          $zero, 0x3C30($at)
    MEM_W(0X3C30, ctx->r1) = 0;
    // 0x80029434: jal         0x8009A3B4
    // 0x80029438: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80029438: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_1:
    // 0x8002943C: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80029440: lw          $a0, -0x6F10($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X6F10);
    // 0x80029444: lui         $v1, 0xDA38
    ctx->r3 = S32(0XDA38 << 16);
    // 0x80029448: ori         $v1, $v1, 0x3
    ctx->r3 = ctx->r3 | 0X3;
    // 0x8002944C: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    // 0x80029450: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80029454: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80029458: addiu       $v0, $a0, 0x10
    ctx->r2 = ADD32(ctx->r4, 0X10);
    // 0x8002945C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80029460: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80029464: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x80029468: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x8002946C: addiu       $v0, $a0, 0x18
    ctx->r2 = ADD32(ctx->r4, 0X18);
    // 0x80029470: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80029474: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80029478: lui         $v0, 0xFA00
    ctx->r2 = S32(0XFA00 << 16);
    // 0x8002947C: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x80029480: sw          $s0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r16;
    // 0x80029484: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x80029488: sw          $v0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r2;
    // 0x8002948C: lbu         $v0, 0x40($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X40);
    // 0x80029490: lbu         $a1, 0x41($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X41);
    // 0x80029494: lbu         $a2, 0x42($s1)
    ctx->r6 = MEM_BU(ctx->r17, 0X42);
    // 0x80029498: addiu       $v1, $a0, 0x20
    ctx->r3 = ADD32(ctx->r4, 0X20);
    // 0x8002949C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800294A0: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x800294A4: lui         $v1, 0xDE00
    ctx->r3 = S32(0XDE00 << 16);
    // 0x800294A8: sw          $v1, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r3;
    // 0x800294AC: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x800294B0: addiu       $v1, $v1, 0x6EB0
    ctx->r3 = ADD32(ctx->r3, 0X6EB0);
    // 0x800294B4: sw          $v1, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r3;
    // 0x800294B8: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x800294BC: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x800294C0: or          $v0, $v0, $a1
    ctx->r2 = ctx->r2 | ctx->r5;
    // 0x800294C4: sll         $a2, $a2, 8
    ctx->r6 = S32(ctx->r6 << 8);
    // 0x800294C8: or          $v0, $v0, $a2
    ctx->r2 = ctx->r2 | ctx->r6;
    // 0x800294CC: ori         $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 | 0XFF;
    // 0x800294D0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
L_800294D4:
    // 0x800294D4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x800294D8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x800294DC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x800294E0: jr          $ra
    // 0x800294E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x800294E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800294E8: nop

    // 0x800294EC: nop

;}
RECOMP_FUNC void func_8003B298_16698(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003B298: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B29C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8003B2A0: jal         0x8003AFB0
    // 0x8003B2A4: nop

    func_8003AFB0_163B0(rdram, ctx);
        goto after_0;
    // 0x8003B2A4: nop

    after_0:
    // 0x8003B2A8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8003B2AC: jr          $ra
    // 0x8003B2B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8003B2B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8008D964_68D64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008D964: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x8008D968: sb          $v0, 0xCA($a0)
    MEM_B(0XCA, ctx->r4) = ctx->r2;
    // 0x8008D96C: jr          $ra
    // 0x8008D970: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    TRACE_RETURN()
    return;
    // 0x8008D970: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
;}
RECOMP_FUNC void func_80028E40_4240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80028E40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80028E44: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    // 0x80028E48: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80028E4C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80028E50: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80028E54: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80028E58: sll         $s0, $v0, 3
    ctx->r16 = S32(ctx->r2 << 3);
    // 0x80028E5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80028E60: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80028E64: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x80028E68: lw          $v0, -0x46C8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X46C8);
    // 0x80028E6C: beq         $v0, $zero, L_80028E9C
    if (ctx->r2 == 0) {
        // 0x80028E70: nop
    
            goto L_80028E9C;
    }
    // 0x80028E70: nop

    // 0x80028E74: jal         0x80029114
    // 0x80028E78: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_80029114_4514(rdram, ctx);
        goto after_0;
    // 0x80028E78: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_0:
    // 0x80028E7C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80028E80: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x80028E84: lw          $v0, -0x46C8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X46C8);
    // 0x80028E88: jalr        $v0
    // 0x80028E8C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x80028E8C: nop

    after_1:
    // 0x80028E90: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80028E94: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x80028E98: sw          $zero, -0x46C8($at)
    MEM_W(-0X46C8, ctx->r1) = 0;
L_80028E9C:
    // 0x80028E9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80028EA0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80028EA4: jr          $ra
    // 0x80028EA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80028EA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80035CA0_110A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80035CA0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80035CA4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80035CA8: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x80035CAC: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80035CB0: addu        $s5, $a3, $zero
    ctx->r21 = ADD32(ctx->r7, 0);
    // 0x80035CB4: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80035CB8: addu        $s6, $a0, $zero
    ctx->r22 = ADD32(ctx->r4, 0);
    // 0x80035CBC: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x80035CC0: addu        $s7, $a1, $zero
    ctx->r23 = ADD32(ctx->r5, 0);
    // 0x80035CC4: sll         $v0, $s5, 6
    ctx->r2 = S32(ctx->r21 << 6);
    // 0x80035CC8: addu        $v0, $v0, $s5
    ctx->r2 = ADD32(ctx->r2, ctx->r21);
    // 0x80035CCC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80035CD0: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80035CD4: addiu       $v1, $v1, -0x7148
    ctx->r3 = ADD32(ctx->r3, -0X7148);
    // 0x80035CD8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80035CDC: addu        $s0, $v0, $v1
    ctx->r16 = ADD32(ctx->r2, ctx->r3);
    // 0x80035CE0: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80035CE4: sra         $a0, $a0, 14
    ctx->r4 = S32(SIGNED(ctx->r4) >> 14);
    // 0x80035CE8: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80035CEC: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x80035CF0: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80035CF4: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80035CF8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80035CFC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80035D00: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80035D04: lw          $v0, -0x38B0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X38B0);
    // 0x80035D08: sra         $a1, $a1, 14
    ctx->r5 = S32(SIGNED(ctx->r5) >> 14);
    // 0x80035D0C: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80035D10: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80035D14: lw          $v1, -0x380C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X380C);
    // 0x80035D18: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x80035D1C: lw          $s3, 0x0($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X0);
    // 0x80035D20: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x80035D24: sll         $v0, $s2, 3
    ctx->r2 = S32(ctx->r18 << 3);
    // 0x80035D28: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x80035D2C: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x80035D30: lw          $s4, 0x0($a1)
    ctx->r20 = MEM_W(ctx->r5, 0X0);
    // 0x80035D34: lui         $v0, 0xFF00
    ctx->r2 = S32(0XFF00 << 16);
    // 0x80035D38: and         $s1, $v1, $v0
    ctx->r17 = ctx->r3 & ctx->r2;
    // 0x80035D3C: lui         $v0, 0xB00
    ctx->r2 = S32(0XB00 << 16);
    // 0x80035D40: beq         $s1, $v0, L_800360A4
    if (ctx->r17 == ctx->r2) {
        // 0x80035D44: slt         $v0, $v0, $s1
        ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
            goto L_800360A4;
    }
    // 0x80035D44: slt         $v0, $v0, $s1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x80035D48: bne         $v0, $zero, L_80035DE4
    if (ctx->r2 != 0) {
        // 0x80035D4C: lui         $v0, 0x1100
        ctx->r2 = S32(0X1100 << 16);
            goto L_80035DE4;
    }
    // 0x80035D4C: lui         $v0, 0x1100
    ctx->r2 = S32(0X1100 << 16);
    // 0x80035D50: lui         $v0, 0x500
    ctx->r2 = S32(0X500 << 16);
    // 0x80035D54: beq         $s1, $v0, L_80035FB8
    if (ctx->r17 == ctx->r2) {
        // 0x80035D58: slt         $v0, $v0, $s1
        ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
            goto L_80035FB8;
    }
    // 0x80035D58: slt         $v0, $v0, $s1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x80035D5C: bne         $v0, $zero, L_80035DA8
    if (ctx->r2 != 0) {
        // 0x80035D60: lui         $v0, 0x800
        ctx->r2 = S32(0X800 << 16);
            goto L_80035DA8;
    }
    // 0x80035D60: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x80035D64: lui         $v0, 0x200
    ctx->r2 = S32(0X200 << 16);
    // 0x80035D68: beq         $s1, $v0, L_80035F20
    if (ctx->r17 == ctx->r2) {
        // 0x80035D6C: slt         $v0, $v0, $s1
        ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
            goto L_80035F20;
    }
    // 0x80035D6C: slt         $v0, $v0, $s1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x80035D70: bnel        $v0, $zero, L_80035D90
    if (ctx->r2 != 0) {
        // 0x80035D74: lui         $v0, 0x300
        ctx->r2 = S32(0X300 << 16);
            goto L_80035D90;
    }
    goto skip_0;
    // 0x80035D74: lui         $v0, 0x300
    ctx->r2 = S32(0X300 << 16);
    skip_0:
    // 0x80035D78: beq         $s1, $zero, L_80035E88
    if (ctx->r17 == 0) {
        // 0x80035D7C: lui         $v0, 0x100
        ctx->r2 = S32(0X100 << 16);
            goto L_80035E88;
    }
    // 0x80035D7C: lui         $v0, 0x100
    ctx->r2 = S32(0X100 << 16);
    // 0x80035D80: beq         $s1, $v0, L_80035E8C
    if (ctx->r17 == ctx->r2) {
        // 0x80035D84: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_80035E8C;
    }
    // 0x80035D84: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80035D88: j           L_80036314
    // 0x80035D8C: nop

        goto L_80036314;
    // 0x80035D8C: nop

L_80035D90:
    // 0x80035D90: beq         $s1, $v0, L_80035F98
    if (ctx->r17 == ctx->r2) {
        // 0x80035D94: lui         $v0, 0x400
        ctx->r2 = S32(0X400 << 16);
            goto L_80035F98;
    }
    // 0x80035D94: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x80035D98: beq         $s1, $v0, L_80035FBC
    if (ctx->r17 == ctx->r2) {
        // 0x80035D9C: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_80035FBC;
    }
    // 0x80035D9C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80035DA0: j           L_80036314
    // 0x80035DA4: nop

        goto L_80036314;
    // 0x80035DA4: nop

L_80035DA8:
    // 0x80035DA8: beq         $s1, $v0, L_80036014
    if (ctx->r17 == ctx->r2) {
        // 0x80035DAC: slt         $v0, $v0, $s1
        ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
            goto L_80036014;
    }
    // 0x80035DAC: slt         $v0, $v0, $s1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x80035DB0: bne         $v0, $zero, L_80035DD4
    if (ctx->r2 != 0) {
        // 0x80035DB4: lui         $v0, 0x900
        ctx->r2 = S32(0X900 << 16);
            goto L_80035DD4;
    }
    // 0x80035DB4: lui         $v0, 0x900
    ctx->r2 = S32(0X900 << 16);
    // 0x80035DB8: lui         $v0, 0x600
    ctx->r2 = S32(0X600 << 16);
    // 0x80035DBC: beq         $s1, $v0, L_80036314
    if (ctx->r17 == ctx->r2) {
        // 0x80035DC0: lui         $v0, 0x700
        ctx->r2 = S32(0X700 << 16);
            goto L_80036314;
    }
    // 0x80035DC0: lui         $v0, 0x700
    ctx->r2 = S32(0X700 << 16);
    // 0x80035DC4: beq         $s1, $v0, L_80036018
    if (ctx->r17 == ctx->r2) {
        // 0x80035DC8: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_80036018;
    }
    // 0x80035DC8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80035DCC: j           L_80036314
    // 0x80035DD0: nop

        goto L_80036314;
    // 0x80035DD0: nop

L_80035DD4:
    // 0x80035DD4: beq         $s1, $v0, L_80036018
    if (ctx->r17 == ctx->r2) {
        // 0x80035DD8: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_80036018;
    }
    // 0x80035DD8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80035DDC: j           L_80036314
    // 0x80035DE0: nop

        goto L_80036314;
    // 0x80035DE0: nop

L_80035DE4:
    // 0x80035DE4: beq         $s1, $v0, L_80036130
    if (ctx->r17 == ctx->r2) {
        // 0x80035DE8: slt         $v0, $v0, $s1
        ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
            goto L_80036130;
    }
    // 0x80035DE8: slt         $v0, $v0, $s1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x80035DEC: bne         $v0, $zero, L_80035E3C
    if (ctx->r2 != 0) {
        // 0x80035DF0: lui         $v0, 0x1400
        ctx->r2 = S32(0X1400 << 16);
            goto L_80035E3C;
    }
    // 0x80035DF0: lui         $v0, 0x1400
    ctx->r2 = S32(0X1400 << 16);
    // 0x80035DF4: lui         $v0, 0xE00
    ctx->r2 = S32(0XE00 << 16);
    // 0x80035DF8: beq         $s1, $v0, L_80035FB8
    if (ctx->r17 == ctx->r2) {
        // 0x80035DFC: slt         $v0, $v0, $s1
        ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
            goto L_80035FB8;
    }
    // 0x80035DFC: slt         $v0, $v0, $s1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x80035E00: bne         $v0, $zero, L_80035E24
    if (ctx->r2 != 0) {
        // 0x80035E04: lui         $v0, 0xF00
        ctx->r2 = S32(0XF00 << 16);
            goto L_80035E24;
    }
    // 0x80035E04: lui         $v0, 0xF00
    ctx->r2 = S32(0XF00 << 16);
    // 0x80035E08: lui         $v0, 0xC00
    ctx->r2 = S32(0XC00 << 16);
    // 0x80035E0C: beq         $s1, $v0, L_800360A4
    if (ctx->r17 == ctx->r2) {
        // 0x80035E10: lui         $v0, 0xD00
        ctx->r2 = S32(0XD00 << 16);
            goto L_800360A4;
    }
    // 0x80035E10: lui         $v0, 0xD00
    ctx->r2 = S32(0XD00 << 16);
    // 0x80035E14: beq         $s1, $v0, L_80035FBC
    if (ctx->r17 == ctx->r2) {
        // 0x80035E18: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_80035FBC;
    }
    // 0x80035E18: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80035E1C: j           L_80036314
    // 0x80035E20: nop

        goto L_80036314;
    // 0x80035E20: nop

L_80035E24:
    // 0x80035E24: beq         $s1, $v0, L_80035FB8
    if (ctx->r17 == ctx->r2) {
        // 0x80035E28: lui         $v0, 0x1000
        ctx->r2 = S32(0X1000 << 16);
            goto L_80035FB8;
    }
    // 0x80035E28: lui         $v0, 0x1000
    ctx->r2 = S32(0X1000 << 16);
    // 0x80035E2C: beq         $s1, $v0, L_80035FBC
    if (ctx->r17 == ctx->r2) {
        // 0x80035E30: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_80035FBC;
    }
    // 0x80035E30: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80035E34: j           L_80036314
    // 0x80035E38: nop

        goto L_80036314;
    // 0x80035E38: nop

L_80035E3C:
    // 0x80035E3C: beq         $s1, $v0, L_80035FB8
    if (ctx->r17 == ctx->r2) {
        // 0x80035E40: slt         $v0, $v0, $s1
        ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
            goto L_80035FB8;
    }
    // 0x80035E40: slt         $v0, $v0, $s1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x80035E44: bne         $v0, $zero, L_80035E68
    if (ctx->r2 != 0) {
        // 0x80035E48: lui         $v0, 0x1600
        ctx->r2 = S32(0X1600 << 16);
            goto L_80035E68;
    }
    // 0x80035E48: lui         $v0, 0x1600
    ctx->r2 = S32(0X1600 << 16);
    // 0x80035E4C: lui         $v0, 0x1200
    ctx->r2 = S32(0X1200 << 16);
    // 0x80035E50: beq         $s1, $v0, L_80036130
    if (ctx->r17 == ctx->r2) {
        // 0x80035E54: lui         $v0, 0x1300
        ctx->r2 = S32(0X1300 << 16);
            goto L_80036130;
    }
    // 0x80035E54: lui         $v0, 0x1300
    ctx->r2 = S32(0X1300 << 16);
    // 0x80035E58: beq         $s1, $v0, L_80035FBC
    if (ctx->r17 == ctx->r2) {
        // 0x80035E5C: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_80035FBC;
    }
    // 0x80035E5C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80035E60: j           L_80036314
    // 0x80035E64: nop

        goto L_80036314;
    // 0x80035E64: nop

L_80035E68:
    // 0x80035E68: beq         $s1, $v0, L_80036254
    if (ctx->r17 == ctx->r2) {
        // 0x80035E6C: slt         $v0, $v0, $s1
        ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
            goto L_80036254;
    }
    // 0x80035E6C: slt         $v0, $v0, $s1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x80035E70: bne         $v0, $zero, L_80036314
    if (ctx->r2 != 0) {
        // 0x80035E74: lui         $v0, 0x1500
        ctx->r2 = S32(0X1500 << 16);
            goto L_80036314;
    }
    // 0x80035E74: lui         $v0, 0x1500
    ctx->r2 = S32(0X1500 << 16);
    // 0x80035E78: beq         $s1, $v0, L_800361F4
    if (ctx->r17 == ctx->r2) {
        // 0x80035E7C: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_800361F4;
    }
    // 0x80035E7C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80035E80: j           L_80036314
    // 0x80035E84: nop

        goto L_80036314;
    // 0x80035E84: nop

L_80035E88:
    // 0x80035E88: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_80035E8C:
    // 0x80035E8C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80035E90: jal         0x80028DE0
    // 0x80035E94: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    func_80028DE0_41E0(rdram, ctx);
        goto after_0;
    // 0x80035E94: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    after_0:
    // 0x80035E98: jal         0x80025E1C
    // 0x80035E9C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_80025E1C_121C(rdram, ctx);
        goto after_1;
    // 0x80035E9C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_1:
    // 0x80035EA0: lh          $v1, 0x100($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X100);
    // 0x80035EA4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80035EA8: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    // 0x80035EAC: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80035EB0: lh          $v0, 0x100($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X100);
    // 0x80035EB4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80035EB8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80035EBC: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x80035EC0: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x80035EC4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80035EC8: jal         0x80028D30
    // 0x80035ECC: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    func_80028D30_4130(rdram, ctx);
        goto after_2;
    // 0x80035ECC: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    after_2:
    // 0x80035ED0: lh          $v1, 0x100($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X100);
    // 0x80035ED4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80035ED8: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x80035EDC: lw          $s2, 0x0($v0)
    ctx->r18 = MEM_W(ctx->r2, 0X0);
    // 0x80035EE0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80035EE4: lui         $v0, 0x100
    ctx->r2 = S32(0X100 << 16);
    // 0x80035EE8: beq         $s1, $v0, L_80035F04
    if (ctx->r17 == ctx->r2) {
        // 0x80035EEC: sh          $v1, 0x100($s0)
        MEM_H(0X100, ctx->r16) = ctx->r3;
            goto L_80035F04;
    }
    // 0x80035EEC: sh          $v1, 0x100($s0)
    MEM_H(0X100, ctx->r16) = ctx->r3;
    // 0x80035EF0: lw          $v0, 0xC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XC);
    // 0x80035EF4: addu        $a1, $s2, $v0
    ctx->r5 = ADD32(ctx->r18, ctx->r2);
    // 0x80035EF8: addiu       $a0, $a1, 0x4
    ctx->r4 = ADD32(ctx->r5, 0X4);
    // 0x80035EFC: jal         0x8002FDC0
    // 0x80035F00: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    func_8002FDC0_B1C0(rdram, ctx);
        goto after_3;
    // 0x80035F00: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    after_3:
L_80035F04:
    // 0x80035F04: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
    // 0x80035F08: addu        $a1, $s2, $v0
    ctx->r5 = ADD32(ctx->r18, ctx->r2);
    // 0x80035F0C: addiu       $a0, $a1, 0x4
    ctx->r4 = ADD32(ctx->r5, 0X4);
    // 0x80035F10: jal         0x800870A0
    // 0x80035F14: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    func_800870A0_624A0(rdram, ctx);
        goto after_4;
    // 0x80035F14: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    after_4:
    // 0x80035F18: j           L_80036314
    // 0x80035F1C: nop

        goto L_80036314;
    // 0x80035F1C: nop

L_80035F20:
    // 0x80035F20: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80035F24: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80035F28: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    // 0x80035F2C: lui         $s0, 0x801B
    ctx->r16 = S32(0X801B << 16);
    // 0x80035F30: addiu       $s0, $s0, 0x5080
    ctx->r16 = ADD32(ctx->r16, 0X5080);
    // 0x80035F34: jal         0x80028D30
    // 0x80035F38: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_80028D30_4130(rdram, ctx);
        goto after_5;
    // 0x80035F38: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80035F3C: lui         $v1, 0xAAAA
    ctx->r3 = S32(0XAAAA << 16);
    // 0x80035F40: ori         $v1, $v1, 0xAAAB
    ctx->r3 = ctx->r3 | 0XAAAB;
    // 0x80035F44: multu       $v0, $v1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80035F48: mfhi        $t0
    ctx->r8 = hi;
    // 0x80035F4C: srl         $v0, $t0, 3
    ctx->r2 = S32(U32(ctx->r8) >> 3);
    // 0x80035F50: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x80035F54: slti        $v0, $v1, 0x800
    ctx->r2 = SIGNED(ctx->r3) < 0X800 ? 1 : 0;
    // 0x80035F58: beql        $v0, $zero, L_80035F60
    if (ctx->r2 == 0) {
        // 0x80035F5C: addiu       $v1, $zero, 0x800
        ctx->r3 = ADD32(0, 0X800);
            goto L_80035F60;
    }
    goto skip_1;
    // 0x80035F5C: addiu       $v1, $zero, 0x800
    ctx->r3 = ADD32(0, 0X800);
    skip_1:
L_80035F60:
    // 0x80035F60: blez        $v1, L_80036314
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80035F64: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_80036314;
    }
    // 0x80035F64: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x80035F68: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80035F6C: lw          $a0, 0x55A0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X55A0);
    // 0x80035F70: addiu       $a3, $s0, 0x8
    ctx->r7 = ADD32(ctx->r16, 0X8);
L_80035F74:
    // 0x80035F74: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x80035F78: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80035F7C: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x80035F80: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x80035F84: slt         $v0, $s2, $v1
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80035F88: bne         $v0, $zero, L_80035F74
    if (ctx->r2 != 0) {
        // 0x80035F8C: addiu       $a3, $a3, 0xC
        ctx->r7 = ADD32(ctx->r7, 0XC);
            goto L_80035F74;
    }
    // 0x80035F8C: addiu       $a3, $a3, 0xC
    ctx->r7 = ADD32(ctx->r7, 0XC);
    // 0x80035F90: j           L_80036314
    // 0x80035F94: nop

        goto L_80036314;
    // 0x80035F94: nop

L_80035F98:
    // 0x80035F98: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80035F9C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80035FA0: lui         $a3, 0x8021
    ctx->r7 = S32(0X8021 << 16);
    // 0x80035FA4: addiu       $a3, $a3, 0xCB0
    ctx->r7 = ADD32(ctx->r7, 0XCB0);
    // 0x80035FA8: jal         0x80028D30
    // 0x80035FAC: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    func_80028D30_4130(rdram, ctx);
        goto after_6;
    // 0x80035FAC: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    after_6:
    // 0x80035FB0: j           L_80036314
    // 0x80035FB4: nop

        goto L_80036314;
    // 0x80035FB4: nop

L_80035FB8:
    // 0x80035FB8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_80035FBC:
    // 0x80035FBC: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80035FC0: jal         0x80028DE0
    // 0x80035FC4: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    func_80028DE0_41E0(rdram, ctx);
        goto after_7;
    // 0x80035FC4: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    after_7:
    // 0x80035FC8: jal         0x80025E1C
    // 0x80035FCC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_80025E1C_121C(rdram, ctx);
        goto after_8;
    // 0x80035FCC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_8:
    // 0x80035FD0: lh          $v1, 0x100($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X100);
    // 0x80035FD4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80035FD8: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    // 0x80035FDC: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80035FE0: lh          $v0, 0x100($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X100);
    // 0x80035FE4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80035FE8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80035FEC: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x80035FF0: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x80035FF4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80035FF8: jal         0x80028D30
    // 0x80035FFC: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    func_80028D30_4130(rdram, ctx);
        goto after_9;
    // 0x80035FFC: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    after_9:
    // 0x80036000: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80036004: jal         0x80035ACC
    // 0x80036008: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80035ACC_10ECC(rdram, ctx);
        goto after_10;
    // 0x80036008: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_10:
    // 0x8003600C: j           L_800362E0
    // 0x80036010: nop

        goto L_800362E0;
    // 0x80036010: nop

L_80036014:
    // 0x80036014: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_80036018:
    // 0x80036018: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8003601C: jal         0x80028DE0
    // 0x80036020: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    func_80028DE0_41E0(rdram, ctx);
        goto after_11;
    // 0x80036020: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    after_11:
    // 0x80036024: jal         0x80025E1C
    // 0x80036028: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_80025E1C_121C(rdram, ctx);
        goto after_12;
    // 0x80036028: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_12:
    // 0x8003602C: lh          $v1, 0x100($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X100);
    // 0x80036030: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80036034: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    // 0x80036038: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x8003603C: lh          $v0, 0x100($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X100);
    // 0x80036040: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80036044: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80036048: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x8003604C: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x80036050: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80036054: jal         0x80028D30
    // 0x80036058: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    func_80028D30_4130(rdram, ctx);
        goto after_13;
    // 0x80036058: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    after_13:
    // 0x8003605C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80036060: lui         $a1, 0xF900
    ctx->r5 = S32(0XF900 << 16);
    // 0x80036064: addu        $a1, $s1, $a1
    ctx->r5 = ADD32(ctx->r17, ctx->r5);
    // 0x80036068: jal         0x80035868
    // 0x8003606C: sra         $a1, $a1, 24
    ctx->r5 = S32(SIGNED(ctx->r5) >> 24);
    func_80035868_10C68(rdram, ctx);
        goto after_14;
    // 0x8003606C: sra         $a1, $a1, 24
    ctx->r5 = S32(SIGNED(ctx->r5) >> 24);
    after_14:
    // 0x80036070: lui         $v0, 0x801D
    ctx->r2 = S32(0X801D << 16);
    // 0x80036074: lw          $v0, 0x4784($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4784);
    // 0x80036078: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x8003607C: lw          $v1, 0x4788($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4788);
    // 0x80036080: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x80036084: lw          $a0, 0x478C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X478C);
    // 0x80036088: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x8003608C: sw          $v0, -0x267C($at)
    MEM_W(-0X267C, ctx->r1) = ctx->r2;
    // 0x80036090: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80036094: sw          $v1, -0x2364($at)
    MEM_W(-0X2364, ctx->r1) = ctx->r3;
    // 0x80036098: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x8003609C: j           L_80036314
    // 0x800360A0: sw          $a0, 0x7FB0($at)
    MEM_W(0X7FB0, ctx->r1) = ctx->r4;
        goto L_80036314;
    // 0x800360A0: sw          $a0, 0x7FB0($at)
    MEM_W(0X7FB0, ctx->r1) = ctx->r4;
L_800360A4:
    // 0x800360A4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x800360A8: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x800360AC: jal         0x80028DE0
    // 0x800360B0: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    func_80028DE0_41E0(rdram, ctx);
        goto after_15;
    // 0x800360B0: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    after_15:
    // 0x800360B4: jal         0x80025E1C
    // 0x800360B8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_80025E1C_121C(rdram, ctx);
        goto after_16;
    // 0x800360B8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_16:
    // 0x800360BC: lh          $v1, 0x100($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X100);
    // 0x800360C0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x800360C4: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    // 0x800360C8: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x800360CC: lh          $v0, 0x100($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X100);
    // 0x800360D0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x800360D4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800360D8: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x800360DC: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x800360E0: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x800360E4: jal         0x80028D30
    // 0x800360E8: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    func_80028D30_4130(rdram, ctx);
        goto after_17;
    // 0x800360E8: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    after_17:
    // 0x800360EC: lui         $v0, 0xB00
    ctx->r2 = S32(0XB00 << 16);
    // 0x800360F0: bne         $s1, $v0, L_80036114
    if (ctx->r17 != ctx->r2) {
        // 0x800360F4: nop
    
            goto L_80036114;
    }
    // 0x800360F4: nop

    // 0x800360F8: lh          $v0, 0x100($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X100);
    // 0x800360FC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80036100: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x80036104: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80036108: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x8003610C: j           L_800362E0
    // 0x80036110: sw          $v0, -0x26EC($at)
    MEM_W(-0X26EC, ctx->r1) = ctx->r2;
        goto L_800362E0;
    // 0x80036110: sw          $v0, -0x26EC($at)
    MEM_W(-0X26EC, ctx->r1) = ctx->r2;
L_80036114:
    // 0x80036114: lh          $v0, 0x100($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X100);
    // 0x80036118: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8003611C: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x80036120: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80036124: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80036128: j           L_800362E0
    // 0x8003612C: sw          $v0, 0x5998($at)
    MEM_W(0X5998, ctx->r1) = ctx->r2;
        goto L_800362E0;
    // 0x8003612C: sw          $v0, 0x5998($at)
    MEM_W(0X5998, ctx->r1) = ctx->r2;
L_80036130:
    // 0x80036130: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80036134: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80036138: jal         0x80028DE0
    // 0x8003613C: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    func_80028DE0_41E0(rdram, ctx);
        goto after_18;
    // 0x8003613C: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    after_18:
    // 0x80036140: jal         0x80025E1C
    // 0x80036144: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_80025E1C_121C(rdram, ctx);
        goto after_19;
    // 0x80036144: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_19:
    // 0x80036148: lh          $v1, 0x100($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X100);
    // 0x8003614C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80036150: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    // 0x80036154: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80036158: lh          $v0, 0x100($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X100);
    // 0x8003615C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80036160: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80036164: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x80036168: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x8003616C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80036170: jal         0x80028D30
    // 0x80036174: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    func_80028D30_4130(rdram, ctx);
        goto after_20;
    // 0x80036174: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    after_20:
    // 0x80036178: lui         $v0, 0x1200
    ctx->r2 = S32(0X1200 << 16);
    // 0x8003617C: bne         $s1, $v0, L_800361B0
    if (ctx->r17 != ctx->r2) {
        // 0x80036180: nop
    
            goto L_800361B0;
    }
    // 0x80036180: nop

    // 0x80036184: lh          $v0, 0x100($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X100);
    // 0x80036188: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8003618C: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x80036190: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80036194: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80036198: sh          $s2, -0xBC4($at)
    MEM_H(-0XBC4, ctx->r1) = ctx->r18;
    // 0x8003619C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x800361A0: sw          $v0, -0x265C($at)
    MEM_W(-0X265C, ctx->r1) = ctx->r2;
    // 0x800361A4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800361A8: j           L_800361D8
    // 0x800361AC: sw          $v0, -0xBD0($at)
    MEM_W(-0XBD0, ctx->r1) = ctx->r2;
        goto L_800361D8;
    // 0x800361AC: sw          $v0, -0xBD0($at)
    MEM_W(-0XBD0, ctx->r1) = ctx->r2;
L_800361B0:
    // 0x800361B0: lh          $v0, 0x100($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X100);
    // 0x800361B4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800361B8: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x800361BC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x800361C0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800361C4: sh          $s2, -0xBC2($at)
    MEM_H(-0XBC2, ctx->r1) = ctx->r18;
    // 0x800361C8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x800361CC: sw          $v0, -0x2660($at)
    MEM_W(-0X2660, ctx->r1) = ctx->r2;
    // 0x800361D0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800361D4: sw          $v0, -0xBCC($at)
    MEM_W(-0XBCC, ctx->r1) = ctx->r2;
L_800361D8:
    // 0x800361D8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800361DC: sh          $s6, -0xBC8($at)
    MEM_H(-0XBC8, ctx->r1) = ctx->r22;
    // 0x800361E0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800361E4: sh          $s7, -0xBC6($at)
    MEM_H(-0XBC6, ctx->r1) = ctx->r23;
    // 0x800361E8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800361EC: j           L_80036304
    // 0x800361F0: sh          $s5, -0xBC0($at)
    MEM_H(-0XBC0, ctx->r1) = ctx->r21;
        goto L_80036304;
    // 0x800361F0: sh          $s5, -0xBC0($at)
    MEM_H(-0XBC0, ctx->r1) = ctx->r21;
L_800361F4:
    // 0x800361F4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x800361F8: jal         0x80028DE0
    // 0x800361FC: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    func_80028DE0_41E0(rdram, ctx);
        goto after_21;
    // 0x800361FC: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    after_21:
    // 0x80036200: jal         0x80025E1C
    // 0x80036204: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_80025E1C_121C(rdram, ctx);
        goto after_22;
    // 0x80036204: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_22:
    // 0x80036208: lh          $v1, 0x100($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X100);
    // 0x8003620C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80036210: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    // 0x80036214: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80036218: lh          $v0, 0x100($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X100);
    // 0x8003621C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80036220: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80036224: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x80036228: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x8003622C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80036230: jal         0x80028D30
    // 0x80036234: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    func_80028D30_4130(rdram, ctx);
        goto after_23;
    // 0x80036234: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    after_23:
    // 0x80036238: lh          $v0, 0x100($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X100);
    // 0x8003623C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80036240: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x80036244: jal         0x80083FA4
    // 0x80036248: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    func_80083FA4_5F3A4(rdram, ctx);
        goto after_24;
    // 0x80036248: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    after_24:
    // 0x8003624C: j           L_800362F0
    // 0x80036250: nop

        goto L_800362F0;
    // 0x80036250: nop

L_80036254:
    // 0x80036254: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80036258: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8003625C: jal         0x80028DE0
    // 0x80036260: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    func_80028DE0_41E0(rdram, ctx);
        goto after_25;
    // 0x80036260: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    after_25:
    // 0x80036264: jal         0x80025E1C
    // 0x80036268: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_80025E1C_121C(rdram, ctx);
        goto after_26;
    // 0x80036268: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_26:
    // 0x8003626C: lh          $v1, 0x100($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X100);
    // 0x80036270: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80036274: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    // 0x80036278: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x8003627C: lh          $v0, 0x100($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X100);
    // 0x80036280: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80036284: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80036288: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x8003628C: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x80036290: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80036294: jal         0x80028D30
    // 0x80036298: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    func_80028D30_4130(rdram, ctx);
        goto after_27;
    // 0x80036298: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    after_27:
    // 0x8003629C: lh          $v0, 0x100($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X100);
    // 0x800362A0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800362A4: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x800362A8: jal         0x80081A90
    // 0x800362AC: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    func_80081A90_5CE90(rdram, ctx);
        goto after_28;
    // 0x800362AC: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    after_28:
    // 0x800362B0: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x800362B4: beq         $s1, $zero, L_800362F0
    if (ctx->r17 == 0) {
        // 0x800362B8: nop
    
            goto L_800362F0;
    }
    // 0x800362B8: nop

    // 0x800362BC: lh          $v0, 0x100($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X100);
    // 0x800362C0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800362C4: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x800362C8: jal         0x80025FF8
    // 0x800362CC: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    func_80025FF8_13F8(rdram, ctx);
        goto after_29;
    // 0x800362CC: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    after_29:
    // 0x800362D0: lh          $v0, 0x100($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X100);
    // 0x800362D4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800362D8: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x800362DC: sw          $s1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r17;
L_800362E0:
    // 0x800362E0: lhu         $v0, 0x100($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X100);
    // 0x800362E4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800362E8: j           L_80036314
    // 0x800362EC: sh          $v0, 0x100($s0)
    MEM_H(0X100, ctx->r16) = ctx->r2;
        goto L_80036314;
    // 0x800362EC: sh          $v0, 0x100($s0)
    MEM_H(0X100, ctx->r16) = ctx->r2;
L_800362F0:
    // 0x800362F0: lh          $v0, 0x100($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X100);
    // 0x800362F4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800362F8: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x800362FC: jal         0x80025FF8
    // 0x80036300: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    func_80025FF8_13F8(rdram, ctx);
        goto after_30;
    // 0x80036300: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    after_30:
L_80036304:
    // 0x80036304: lh          $v0, 0x100($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X100);
    // 0x80036308: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8003630C: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x80036310: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
L_80036314:
    // 0x80036314: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x80036318: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x8003631C: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80036320: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80036324: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80036328: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8003632C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80036330: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80036334: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80036338: jr          $ra
    // 0x8003633C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x8003633C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8007AB40_55F40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007AB40: jr          $ra
    // 0x8007AB44: nop

    TRACE_RETURN()
    return;
    // 0x8007AB44: nop

;}
RECOMP_FUNC void func_8006F790_4AB90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006F790: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006F794: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8006F798: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8006F79C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006F7A0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8006F7A4: lhu         $v1, 0x11C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X11C);
    // 0x8006F7A8: sltiu       $v0, $v0, 0x3
    ctx->r2 = ctx->r2 < 0X3 ? 1 : 0;
    // 0x8006F7AC: beq         $v0, $zero, L_8006F80C
    if (ctx->r2 == 0) {
        // 0x8006F7B0: nop
    
            goto L_8006F80C;
    }
    // 0x8006F7B0: nop

    // 0x8006F7B4: lhu         $v0, 0x134($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X134);
    // 0x8006F7B8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8006F7BC: bne         $v0, $zero, L_8006F80C
    if (ctx->r2 != 0) {
        // 0x8006F7C0: addiu       $a0, $zero, 0x8F
        ctx->r4 = ADD32(0, 0X8F);
            goto L_8006F80C;
    }
    // 0x8006F7C0: addiu       $a0, $zero, 0x8F
    ctx->r4 = ADD32(0, 0X8F);
    // 0x8006F7C4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8006F7C8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8006F7CC: jal         0x8002A2F8
    // 0x8006F7D0: sb          $zero, 0x44A($s0)
    MEM_B(0X44A, ctx->r16) = 0;
    func_8002A2F8_56F8(rdram, ctx);
        goto after_0;
    // 0x8006F7D0: sb          $zero, 0x44A($s0)
    MEM_B(0X44A, ctx->r16) = 0;
    after_0:
    // 0x8006F7D4: lhu         $v1, 0x11E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X11E);
    // 0x8006F7D8: lhu         $v0, 0x138($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X138);
    // 0x8006F7DC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8006F7E0: beq         $v0, $zero, L_8006F7F8
    if (ctx->r2 == 0) {
        // 0x8006F7E4: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8006F7F8;
    }
    // 0x8006F7E4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8006F7E8: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8006F7EC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8006F7F0: j           L_8006F7FC
    // 0x8006F7F4: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_8006F7FC;
    // 0x8006F7F4: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8006F7F8:
    // 0x8006F7F8: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_8006F7FC:
    // 0x8006F7FC: bne         $v1, $zero, L_8006F80C
    if (ctx->r3 != 0) {
        // 0x8006F800: nop
    
            goto L_8006F80C;
    }
    // 0x8006F800: nop

    // 0x8006F804: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8006F808: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8006F80C:
    // 0x8006F80C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006F810: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8006F814: jr          $ra
    // 0x8006F818: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8006F818: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80091820_6CC20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80091820: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80091824: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80091828: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8009182C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80091830: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x80091834: beq         $v0, $zero, L_80091884
    if (ctx->r2 == 0) {
        // 0x80091838: nop
    
            goto L_80091884;
    }
    // 0x80091838: nop

    // 0x8009183C: jal         0x80091C78
    // 0x80091840: nop

    func_80091C78_6D078(rdram, ctx);
        goto after_0;
    // 0x80091840: nop

    after_0:
    // 0x80091844: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x80091848: beq         $a2, $zero, L_80091884
    if (ctx->r6 == 0) {
        // 0x8009184C: nop
    
            goto L_80091884;
    }
    // 0x8009184C: nop

    // 0x80091850: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80091854: lw          $v0, -0xEEC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XEEC);
    // 0x80091858: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x8009185C: lw          $v1, 0x1C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1C);
    // 0x80091860: lw          $a0, 0x88($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X88);
    // 0x80091864: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x80091868: sh          $v0, 0x8($a2)
    MEM_H(0X8, ctx->r6) = ctx->r2;
    // 0x8009186C: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x80091870: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80091874: sw          $v1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r3;
    // 0x80091878: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x8009187C: jal         0x8008FB18
    // 0x80091880: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8008FB18_6AF18(rdram, ctx);
        goto after_1;
    // 0x80091880: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
L_80091884:
    // 0x80091884: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80091888: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8009188C: jr          $ra
    // 0x80091890: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80091890: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80091894: nop

    // 0x80091898: nop

    // 0x8009189C: nop

;}
RECOMP_FUNC void func_8003069C_BA9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003069C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x800306A0: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
    // 0x800306A4: addiu       $v0, $zero, 0x70
    ctx->r2 = ADD32(0, 0X70);
    // 0x800306A8: jr          $ra
    // 0x800306AC: sb          $v0, 0x7($a0)
    MEM_B(0X7, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x800306AC: sb          $v0, 0x7($a0)
    MEM_B(0X7, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_80031E94_D294(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80031E94: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x80031E98: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80031E9C: sw          $v0, 0x46A0($at)
    MEM_W(0X46A0, ctx->r1) = ctx->r2;
    // 0x80031EA0: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x80031EA4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80031EA8: sw          $v0, 0x46A4($at)
    MEM_W(0X46A4, ctx->r1) = ctx->r2;
    // 0x80031EAC: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    // 0x80031EB0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80031EB4: jr          $ra
    // 0x80031EB8: sw          $v0, 0x46A8($at)
    MEM_W(0X46A8, ctx->r1) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80031EB8: sw          $v0, 0x46A8($at)
    MEM_W(0X46A8, ctx->r1) = ctx->r2;
;}
RECOMP_FUNC void func_8005394C_2ED4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8005394C: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x80053950: sw          $s0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r16;
    // 0x80053954: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80053958: sw          $s1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r17;
    // 0x8005395C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x80053960: sw          $ra, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r31;
    // 0x80053964: sw          $fp, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r30;
    // 0x80053968: sw          $s7, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r23;
    // 0x8005396C: sw          $s6, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r22;
    // 0x80053970: sw          $s5, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r21;
    // 0x80053974: sw          $s4, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r20;
    // 0x80053978: sw          $s3, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r19;
    // 0x8005397C: sw          $s2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r18;
    // 0x80053980: lh          $v0, 0x56($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X56);
    // 0x80053984: lh          $a0, 0x116($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X116);
    // 0x80053988: addu        $s6, $a2, $zero
    ctx->r22 = ADD32(ctx->r6, 0);
    // 0x8005398C: addu        $s7, $a3, $zero
    ctx->r23 = ADD32(ctx->r7, 0);
    // 0x80053990: jal         0x800324B4
    // 0x80053994: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_800324B4_D8B4(rdram, ctx);
        goto after_0;
    // 0x80053994: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_0:
    // 0x80053998: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8005399C: sh          $v0, 0x40($sp)
    MEM_H(0X40, ctx->r29) = ctx->r2;
    // 0x800539A0: sh          $zero, 0x42($sp)
    MEM_H(0X42, ctx->r29) = 0;
    // 0x800539A4: lh          $v0, 0x56($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X56);
    // 0x800539A8: lh          $a0, 0x116($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X116);
    // 0x800539AC: addu        $fp, $zero, $zero
    ctx->r30 = ADD32(0, 0);
    // 0x800539B0: jal         0x80032498
    // 0x800539B4: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_80032498_D898(rdram, ctx);
        goto after_1;
    // 0x800539B4: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_1:
    // 0x800539B8: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x800539BC: sh          $v0, 0x44($sp)
    MEM_H(0X44, ctx->r29) = ctx->r2;
    // 0x800539C0: lh          $a0, 0x56($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X56);
    // 0x800539C4: lh          $v0, 0x116($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X116);
    // 0x800539C8: addu        $s5, $zero, $zero
    ctx->r21 = ADD32(0, 0);
    // 0x800539CC: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
    // 0x800539D0: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x800539D4: jal         0x800324B4
    // 0x800539D8: addu        $a0, $a0, $s1
    ctx->r4 = ADD32(ctx->r4, ctx->r17);
    func_800324B4_D8B4(rdram, ctx);
        goto after_2;
    // 0x800539D8: addu        $a0, $a0, $s1
    ctx->r4 = ADD32(ctx->r4, ctx->r17);
    after_2:
    // 0x800539DC: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x800539E0: sh          $v0, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r2;
    // 0x800539E4: sh          $zero, 0x52($sp)
    MEM_H(0X52, ctx->r29) = 0;
    // 0x800539E8: lh          $a0, 0x56($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X56);
    // 0x800539EC: lh          $v0, 0x116($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X116);
    // 0x800539F0: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x800539F4: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x800539F8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x800539FC: jal         0x80032498
    // 0x80053A00: addu        $a0, $a0, $s1
    ctx->r4 = ADD32(ctx->r4, ctx->r17);
    func_80032498_D898(rdram, ctx);
        goto after_3;
    // 0x80053A00: addu        $a0, $a0, $s1
    ctx->r4 = ADD32(ctx->r4, ctx->r17);
    after_3:
    // 0x80053A04: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x80053A08: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80053A0C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80053A10: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80053A14: jal         0x8009A3B4
    // 0x80053A18: sh          $v0, 0x54($sp)
    MEM_H(0X54, ctx->r29) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80053A18: sh          $v0, 0x54($sp)
    MEM_H(0X54, ctx->r29) = ctx->r2;
    after_4:
L_80053A1C:
    // 0x80053A1C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80053A20: addiu       $v0, $v0, -0x420
    ctx->r2 = ADD32(ctx->r2, -0X420);
    // 0x80053A24: addu        $a1, $s4, $v0
    ctx->r5 = ADD32(ctx->r20, ctx->r2);
    // 0x80053A28: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x80053A2C: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80053A30: beql        $v0, $zero, L_80053AFC
    if (ctx->r2 == 0) {
        // 0x80053A34: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_80053AFC;
    }
    goto skip_0;
    // 0x80053A34: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_0:
    // 0x80053A38: lw          $v0, 0x80($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X80);
    // 0x80053A3C: sltu        $v0, $s6, $v0
    ctx->r2 = ctx->r22 < ctx->r2 ? 1 : 0;
    // 0x80053A40: bnel        $v0, $zero, L_80053AFC
    if (ctx->r2 != 0) {
        // 0x80053A44: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_80053AFC;
    }
    goto skip_1;
    // 0x80053A44: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_1:
    // 0x80053A48: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x80053A4C: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    // 0x80053A50: jal         0x8009A3B4
    // 0x80053A54: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80053A54: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x80053A58: lh          $v0, 0x60($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X60);
    // 0x80053A5C: lh          $a2, 0x38($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X38);
    // 0x80053A60: lh          $v1, 0x64($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X64);
    // 0x80053A64: lh          $a3, 0x3C($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X3C);
    // 0x80053A68: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    // 0x80053A6C: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    // 0x80053A70: sw          $zero, 0x74($sp)
    MEM_W(0X74, ctx->r29) = 0;
    // 0x80053A74: subu        $v0, $v0, $a2
    ctx->r2 = SUB32(ctx->r2, ctx->r6);
    // 0x80053A78: subu        $v1, $v1, $a3
    ctx->r3 = SUB32(ctx->r3, ctx->r7);
    // 0x80053A7C: sw          $v0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r2;
    // 0x80053A80: jal         0x80032308
    // 0x80053A84: sw          $v1, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r3;
    func_80032308_D708(rdram, ctx);
        goto after_6;
    // 0x80053A84: sw          $v1, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r3;
    after_6:
    // 0x80053A88: lh          $v1, 0x50($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X50);
    // 0x80053A8C: lh          $a1, 0x58($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X58);
    // 0x80053A90: mult        $v1, $a1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80053A94: mflo        $v1
    ctx->r3 = lo;
    // 0x80053A98: lh          $v0, 0x54($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X54);
    // 0x80053A9C: lh          $a0, 0x5C($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X5C);
    // 0x80053AA0: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80053AA4: mflo        $v0
    ctx->r2 = lo;
    // 0x80053AA8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80053AAC: nop

    // 0x80053AB0: bltzl       $v1, L_80053AFC
    if (SIGNED(ctx->r3) < 0) {
        // 0x80053AB4: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_80053AFC;
    }
    goto skip_2;
    // 0x80053AB4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_2:
    // 0x80053AB8: lh          $v1, 0x40($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X40);
    // 0x80053ABC: mult        $v1, $a1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80053AC0: mflo        $v1
    ctx->r3 = lo;
    // 0x80053AC4: lh          $v0, 0x44($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X44);
    // 0x80053AC8: nop

    // 0x80053ACC: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80053AD0: mflo        $v0
    ctx->r2 = lo;
    // 0x80053AD4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80053AD8: slt         $v0, $v1, $s7
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r23) ? 1 : 0;
    // 0x80053ADC: bnel        $v0, $zero, L_80053AFC
    if (ctx->r2 != 0) {
        // 0x80053AE0: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_80053AFC;
    }
    goto skip_3;
    // 0x80053AE0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_3:
    // 0x80053AE4: slt         $v0, $s5, $v1
    ctx->r2 = SIGNED(ctx->r21) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80053AE8: beql        $v0, $zero, L_80053AFC
    if (ctx->r2 == 0) {
        // 0x80053AEC: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_80053AFC;
    }
    goto skip_4;
    // 0x80053AEC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_4:
    // 0x80053AF0: addu        $s5, $v1, $zero
    ctx->r21 = ADD32(ctx->r3, 0);
    // 0x80053AF4: addu        $s3, $s2, $zero
    ctx->r19 = ADD32(ctx->r18, 0);
    // 0x80053AF8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_80053AFC:
    // 0x80053AFC: sltiu       $v0, $s2, 0x12
    ctx->r2 = ctx->r18 < 0X12 ? 1 : 0;
    // 0x80053B00: bne         $v0, $zero, L_80053A1C
    if (ctx->r2 != 0) {
        // 0x80053B04: addiu       $s4, $s4, 0x3C8
        ctx->r20 = ADD32(ctx->r20, 0X3C8);
            goto L_80053A1C;
    }
    // 0x80053B04: addiu       $s4, $s4, 0x3C8
    ctx->r20 = ADD32(ctx->r20, 0X3C8);
    // 0x80053B08: bltz        $s3, L_80053B48
    if (SIGNED(ctx->r19) < 0) {
        // 0x80053B0C: addiu       $a0, $sp, 0x68
        ctx->r4 = ADD32(ctx->r29, 0X68);
            goto L_80053B48;
    }
    // 0x80053B0C: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x80053B10: sll         $s0, $s3, 4
    ctx->r16 = S32(ctx->r19 << 4);
    // 0x80053B14: subu        $s0, $s0, $s3
    ctx->r16 = SUB32(ctx->r16, ctx->r19);
    // 0x80053B18: sll         $s0, $s0, 3
    ctx->r16 = S32(ctx->r16 << 3);
    // 0x80053B1C: addu        $s0, $s0, $s3
    ctx->r16 = ADD32(ctx->r16, ctx->r19);
    // 0x80053B20: sll         $s0, $s0, 3
    ctx->r16 = S32(ctx->r16 << 3);
    // 0x80053B24: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80053B28: addiu       $s1, $s1, -0x40C
    ctx->r17 = ADD32(ctx->r17, -0X40C);
    // 0x80053B2C: addu        $a1, $s0, $s1
    ctx->r5 = ADD32(ctx->r16, ctx->r17);
    // 0x80053B30: jal         0x8009A3B4
    // 0x80053B34: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x80053B34: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_7:
    // 0x80053B38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80053B3C: sh          $v0, 0x6E($sp)
    MEM_H(0X6E, ctx->r29) = ctx->r2;
    // 0x80053B40: addiu       $s1, $s1, -0x14
    ctx->r17 = ADD32(ctx->r17, -0X14);
    // 0x80053B44: addu        $fp, $s0, $s1
    ctx->r30 = ADD32(ctx->r16, ctx->r17);
L_80053B48:
    // 0x80053B48: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
    // 0x80053B4C: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x80053B50: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_80053B54:
    // 0x80053B54: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80053B58: addiu       $v0, $v0, -0x5F40
    ctx->r2 = ADD32(ctx->r2, -0X5F40);
    // 0x80053B5C: addu        $a1, $s0, $v0
    ctx->r5 = ADD32(ctx->r16, ctx->r2);
    // 0x80053B60: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x80053B64: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80053B68: beql        $v0, $zero, L_80053C34
    if (ctx->r2 == 0) {
        // 0x80053B6C: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_80053C34;
    }
    goto skip_5;
    // 0x80053B6C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_5:
    // 0x80053B70: lw          $v0, 0x80($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X80);
    // 0x80053B74: sltu        $v0, $s6, $v0
    ctx->r2 = ctx->r22 < ctx->r2 ? 1 : 0;
    // 0x80053B78: bnel        $v0, $zero, L_80053C34
    if (ctx->r2 != 0) {
        // 0x80053B7C: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_80053C34;
    }
    goto skip_6;
    // 0x80053B7C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_6:
    // 0x80053B80: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x80053B84: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    // 0x80053B88: jal         0x8009A3B4
    // 0x80053B8C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x80053B8C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
    // 0x80053B90: lh          $v0, 0x60($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X60);
    // 0x80053B94: lh          $a2, 0x38($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X38);
    // 0x80053B98: lh          $v1, 0x64($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X64);
    // 0x80053B9C: lh          $a3, 0x3C($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X3C);
    // 0x80053BA0: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    // 0x80053BA4: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    // 0x80053BA8: sw          $zero, 0x74($sp)
    MEM_W(0X74, ctx->r29) = 0;
    // 0x80053BAC: subu        $v0, $v0, $a2
    ctx->r2 = SUB32(ctx->r2, ctx->r6);
    // 0x80053BB0: subu        $v1, $v1, $a3
    ctx->r3 = SUB32(ctx->r3, ctx->r7);
    // 0x80053BB4: sw          $v0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r2;
    // 0x80053BB8: jal         0x80032308
    // 0x80053BBC: sw          $v1, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r3;
    func_80032308_D708(rdram, ctx);
        goto after_9;
    // 0x80053BBC: sw          $v1, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r3;
    after_9:
    // 0x80053BC0: lh          $v1, 0x50($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X50);
    // 0x80053BC4: lh          $a1, 0x58($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X58);
    // 0x80053BC8: mult        $v1, $a1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80053BCC: mflo        $v1
    ctx->r3 = lo;
    // 0x80053BD0: lh          $v0, 0x54($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X54);
    // 0x80053BD4: lh          $a0, 0x5C($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X5C);
    // 0x80053BD8: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80053BDC: mflo        $v0
    ctx->r2 = lo;
    // 0x80053BE0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80053BE4: nop

    // 0x80053BE8: bltzl       $v1, L_80053C34
    if (SIGNED(ctx->r3) < 0) {
        // 0x80053BEC: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_80053C34;
    }
    goto skip_7;
    // 0x80053BEC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_7:
    // 0x80053BF0: lh          $v1, 0x40($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X40);
    // 0x80053BF4: mult        $v1, $a1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80053BF8: mflo        $v1
    ctx->r3 = lo;
    // 0x80053BFC: lh          $v0, 0x44($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X44);
    // 0x80053C00: nop

    // 0x80053C04: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80053C08: mflo        $v0
    ctx->r2 = lo;
    // 0x80053C0C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80053C10: slt         $v0, $v1, $s7
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r23) ? 1 : 0;
    // 0x80053C14: bnel        $v0, $zero, L_80053C34
    if (ctx->r2 != 0) {
        // 0x80053C18: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_80053C34;
    }
    goto skip_8;
    // 0x80053C18: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_8:
    // 0x80053C1C: slt         $v0, $s5, $v1
    ctx->r2 = SIGNED(ctx->r21) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80053C20: beql        $v0, $zero, L_80053C34
    if (ctx->r2 == 0) {
        // 0x80053C24: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_80053C34;
    }
    goto skip_9;
    // 0x80053C24: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_9:
    // 0x80053C28: addu        $s5, $v1, $zero
    ctx->r21 = ADD32(ctx->r3, 0);
    // 0x80053C2C: addu        $s3, $s2, $zero
    ctx->r19 = ADD32(ctx->r18, 0);
    // 0x80053C30: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_80053C34:
    // 0x80053C34: sltiu       $v0, $s2, 0x4
    ctx->r2 = ctx->r18 < 0X4 ? 1 : 0;
    // 0x80053C38: bne         $v0, $zero, L_80053B54
    if (ctx->r2 != 0) {
        // 0x80053C3C: addiu       $s0, $s0, 0x5AC
        ctx->r16 = ADD32(ctx->r16, 0X5AC);
            goto L_80053B54;
    }
    // 0x80053C3C: addiu       $s0, $s0, 0x5AC
    ctx->r16 = ADD32(ctx->r16, 0X5AC);
    // 0x80053C40: bltz        $s3, L_80053C88
    if (SIGNED(ctx->r19) < 0) {
        // 0x80053C44: addiu       $a0, $sp, 0x68
        ctx->r4 = ADD32(ctx->r29, 0X68);
            goto L_80053C88;
    }
    // 0x80053C44: addiu       $a0, $sp, 0x68
    ctx->r4 = ADD32(ctx->r29, 0X68);
    // 0x80053C48: sll         $s0, $s3, 1
    ctx->r16 = S32(ctx->r19 << 1);
    // 0x80053C4C: addu        $s0, $s0, $s3
    ctx->r16 = ADD32(ctx->r16, ctx->r19);
    // 0x80053C50: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    // 0x80053C54: subu        $s0, $s0, $s3
    ctx->r16 = SUB32(ctx->r16, ctx->r19);
    // 0x80053C58: sll         $v0, $s0, 5
    ctx->r2 = S32(ctx->r16 << 5);
    // 0x80053C5C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x80053C60: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    // 0x80053C64: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x80053C68: addiu       $s1, $s1, -0x5F2C
    ctx->r17 = ADD32(ctx->r17, -0X5F2C);
    // 0x80053C6C: addu        $a1, $s0, $s1
    ctx->r5 = ADD32(ctx->r16, ctx->r17);
    // 0x80053C70: jal         0x8009A3B4
    // 0x80053C74: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_10;
    // 0x80053C74: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_10:
    // 0x80053C78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80053C7C: sh          $v0, 0x6E($sp)
    MEM_H(0X6E, ctx->r29) = ctx->r2;
    // 0x80053C80: addiu       $s1, $s1, -0x14
    ctx->r17 = ADD32(ctx->r17, -0X14);
    // 0x80053C84: addu        $fp, $s0, $s1
    ctx->r30 = ADD32(ctx->r16, ctx->r17);
L_80053C88:
    // 0x80053C88: addu        $v0, $fp, $zero
    ctx->r2 = ADD32(ctx->r30, 0);
    // 0x80053C8C: lw          $ra, 0xA4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA4);
    // 0x80053C90: lw          $fp, 0xA0($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XA0);
    // 0x80053C94: lw          $s7, 0x9C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X9C);
    // 0x80053C98: lw          $s6, 0x98($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X98);
    // 0x80053C9C: lw          $s5, 0x94($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X94);
    // 0x80053CA0: lw          $s4, 0x90($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X90);
    // 0x80053CA4: lw          $s3, 0x8C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X8C);
    // 0x80053CA8: lw          $s2, 0x88($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X88);
    // 0x80053CAC: lw          $s1, 0x84($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X84);
    // 0x80053CB0: lw          $s0, 0x80($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X80);
    // 0x80053CB4: jr          $ra
    // 0x80053CB8: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    TRACE_RETURN()
    return;
    // 0x80053CB8: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
;}
RECOMP_FUNC void func_8008C658_67A58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008C658: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8008C65C: mov.s       $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    ctx->f6.fl = ctx->f12.fl;
    // 0x8008C660: c.eq.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl == ctx->f0.fl;
    // 0x8008C664: nop

    // 0x8008C668: bc1f        L_8008C680
    if (!c1cs) {
        // 0x8008C66C: nop
    
            goto L_8008C680;
    }
    // 0x8008C66C: nop

    // 0x8008C670: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8008C674: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8008C678: j           L_8008C7E4
    // 0x8008C67C: nop

        goto L_8008C7E4;
    // 0x8008C67C: nop

L_8008C680:
    // 0x8008C680: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x8008C684: nop

    // 0x8008C688: nop

    // 0x8008C68C: bc1tl       L_8008C744
    if (c1cs) {
        // 0x8008C690: mul.s       $f16, $f6, $f6
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
            goto L_8008C744;
    }
    goto skip_0;
    // 0x8008C690: mul.s       $f16, $f6, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    skip_0:
    // 0x8008C694: neg.s       $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = -ctx->f6.fl;
    // 0x8008C698: mul.s       $f16, $f6, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x8008C69C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008C6A0: ldc1        $f0, 0x2D38($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X2D38);
    // 0x8008C6A4: cvt.d.s     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f2.d = CVT_D_S(ctx->f6.fl);
    // 0x8008C6A8: mul.d       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = MUL_D(ctx->f2.d, ctx->f0.d);
    // 0x8008C6AC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008C6B0: ldc1        $f0, 0x2D40($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X2D40);
    // 0x8008C6B4: cvt.d.s     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f14.d = CVT_D_S(ctx->f16.fl);
    // 0x8008C6B8: mul.d       $f14, $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.d); NAN_CHECK(ctx->f0.d); 
    ctx->f14.d = MUL_D(ctx->f14.d, ctx->f0.d);
    // 0x8008C6BC: nop

    // 0x8008C6C0: mul.s       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x8008C6C4: nop

    // 0x8008C6C8: mul.s       $f4, $f16, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x8008C6CC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008C6D0: ldc1        $f0, 0x2D48($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X2D48);
    // 0x8008C6D4: cvt.d.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f8.d = CVT_D_S(ctx->f8.fl);
    // 0x8008C6D8: mul.d       $f8, $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f8.d, ctx->f0.d);
    // 0x8008C6DC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008C6E0: ldc1        $f0, 0x2D50($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X2D50);
    // 0x8008C6E4: cvt.d.s     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f12.d = CVT_D_S(ctx->f4.fl);
    // 0x8008C6E8: mul.d       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f0.d); 
    ctx->f12.d = MUL_D(ctx->f12.d, ctx->f0.d);
    // 0x8008C6EC: nop

    // 0x8008C6F0: mul.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8008C6F4: nop

    // 0x8008C6F8: mul.s       $f4, $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x8008C6FC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008C700: ldc1        $f0, 0x2D58($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X2D58);
    // 0x8008C704: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008C708: ldc1        $f10, 0x2D60($at)
    CHECK_FR(ctx, 10);
    ctx->f10.u64 = LD(ctx->r1, 0X2D60);
    // 0x8008C70C: add.d       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = ctx->f2.d + ctx->f0.d;
    // 0x8008C710: cvt.d.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f6.d = CVT_D_S(ctx->f6.fl);
    // 0x8008C714: mul.d       $f6, $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f6.d = MUL_D(ctx->f6.d, ctx->f10.d);
    // 0x8008C718: add.d       $f2, $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f14.d); 
    ctx->f2.d = ctx->f2.d + ctx->f14.d;
    // 0x8008C71C: add.d       $f2, $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f8.d); 
    ctx->f2.d = ctx->f2.d + ctx->f8.d;
    // 0x8008C720: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008C724: ldc1        $f8, 0x2D68($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, 0X2D68);
    // 0x8008C728: cvt.d.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f4.d = CVT_D_S(ctx->f4.fl);
    // 0x8008C72C: mul.d       $f4, $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f4.d = MUL_D(ctx->f4.d, ctx->f8.d);
    // 0x8008C730: add.d       $f2, $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f12.d); 
    ctx->f2.d = ctx->f2.d + ctx->f12.d;
    // 0x8008C734: add.d       $f2, $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f6.d); 
    ctx->f2.d = ctx->f2.d + ctx->f6.d;
    // 0x8008C738: add.d       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f4.d); 
    ctx->f2.d = ctx->f2.d + ctx->f4.d;
    // 0x8008C73C: j           L_8008C7E0
    // 0x8008C740: div.d       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = DIV_D(ctx->f0.d, ctx->f2.d);
        goto L_8008C7E0;
    // 0x8008C740: div.d       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = DIV_D(ctx->f0.d, ctx->f2.d);
L_8008C744:
    // 0x8008C744: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008C748: ldc1        $f2, 0x2D70($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, 0X2D70);
    // 0x8008C74C: cvt.d.s     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f0.d = CVT_D_S(ctx->f6.fl);
    // 0x8008C750: mul.d       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = MUL_D(ctx->f0.d, ctx->f2.d);
    // 0x8008C754: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008C758: ldc1        $f2, 0x2D78($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, 0X2D78);
    // 0x8008C75C: cvt.d.s     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f12.d = CVT_D_S(ctx->f16.fl);
    // 0x8008C760: mul.d       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f2.d); 
    ctx->f12.d = MUL_D(ctx->f12.d, ctx->f2.d);
    // 0x8008C764: nop

    // 0x8008C768: mul.s       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f6.fl);
    // 0x8008C76C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008C770: ldc1        $f2, 0x2D80($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, 0X2D80);
    // 0x8008C774: cvt.d.s     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f8.d = CVT_D_S(ctx->f8.fl);
    // 0x8008C778: mul.d       $f8, $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = MUL_D(ctx->f8.d, ctx->f2.d);
    // 0x8008C77C: nop

    // 0x8008C780: mul.s       $f2, $f16, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x8008C784: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008C788: ldc1        $f4, 0x2D88($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, 0X2D88);
    // 0x8008C78C: cvt.d.s     $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.d = CVT_D_S(ctx->f2.fl);
    // 0x8008C790: mul.d       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f10.d = MUL_D(ctx->f10.d, ctx->f4.d);
    // 0x8008C794: nop

    // 0x8008C798: mul.s       $f6, $f2, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x8008C79C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008C7A0: ldc1        $f4, 0x2D90($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, 0X2D90);
    // 0x8008C7A4: mul.s       $f2, $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x8008C7A8: add.d       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f4.d); 
    ctx->f0.d = ctx->f0.d + ctx->f4.d;
    // 0x8008C7AC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008C7B0: ldc1        $f4, 0x2D98($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, 0X2D98);
    // 0x8008C7B4: cvt.d.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f6.d = CVT_D_S(ctx->f6.fl);
    // 0x8008C7B8: mul.d       $f6, $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f6.d, ctx->f4.d);
    // 0x8008C7BC: add.d       $f0, $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f0.d = ctx->f0.d + ctx->f12.d;
    // 0x8008C7C0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008C7C4: ldc1        $f4, 0x2DA0($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, 0X2DA0);
    // 0x8008C7C8: add.d       $f0, $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f8.d); 
    ctx->f0.d = ctx->f0.d + ctx->f8.d;
    // 0x8008C7CC: cvt.d.s     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.d = CVT_D_S(ctx->f2.fl);
    // 0x8008C7D0: mul.d       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f4.d); 
    ctx->f2.d = MUL_D(ctx->f2.d, ctx->f4.d);
    // 0x8008C7D4: add.d       $f0, $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f10.d); 
    ctx->f0.d = ctx->f0.d + ctx->f10.d;
    // 0x8008C7D8: add.d       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f6.d); 
    ctx->f0.d = ctx->f0.d + ctx->f6.d;
    // 0x8008C7DC: add.d       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = ctx->f0.d + ctx->f2.d;
L_8008C7E0:
    // 0x8008C7E0: cvt.s.d     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f0.fl = CVT_S_D(ctx->f0.d);
L_8008C7E4:
    // 0x8008C7E4: jr          $ra
    // 0x8008C7E8: nop

    TRACE_RETURN()
    return;
    // 0x8008C7E8: nop

;}
RECOMP_FUNC void func_800328E0_DCE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800328E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800328E4: bltz        $a0, L_80032908
    if (SIGNED(ctx->r4) < 0) {
        // 0x800328E8: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_80032908;
    }
    // 0x800328E8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x800328EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800328F0: beq         $a0, $v0, L_80032908
    if (ctx->r4 == ctx->r2) {
        // 0x800328F4: nop
    
            goto L_80032908;
    }
    // 0x800328F4: nop

    // 0x800328F8: beql        $a0, $zero, L_80032900
    if (ctx->r4 == 0) {
        // 0x800328FC: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_80032900;
    }
    goto skip_0;
    // 0x800328FC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    skip_0:
L_80032900:
    // 0x80032900: jal         0x80092ED0
    // 0x80032904: nop

    func_80092ED0_6E2D0(rdram, ctx);
        goto after_0;
    // 0x80032904: nop

    after_0:
L_80032908:
    // 0x80032908: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8003290C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80032910: jr          $ra
    // 0x80032914: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80032914: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80032918: nop

    // 0x8003291C: nop

;}
RECOMP_FUNC void func_80025E1C_121C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80025E1C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80025E20: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80025E24: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80025E28: jal         0x80025E3C
    // 0x80025E2C: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    func_80025E3C_123C(rdram, ctx);
        goto after_0;
    // 0x80025E2C: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    after_0:
    // 0x80025E30: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80025E34: jr          $ra
    // 0x80025E38: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80025E38: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80026880_1C80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80026880: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80026884: lw          $v0, -0x46DC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X46DC);
    // 0x80026888: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8002688C: beq         $v0, $zero, L_800268C4
    if (ctx->r2 == 0) {
        // 0x80026890: nop
    
            goto L_800268C4;
    }
    // 0x80026890: nop

    // 0x80026894: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
L_80026898:
    // 0x80026898: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x8002689C: beq         $a0, $zero, L_800268B8
    if (ctx->r4 == 0) {
        // 0x800268A0: sw          $a1, 0x24($v0)
        MEM_W(0X24, ctx->r2) = ctx->r5;
            goto L_800268B8;
    }
    // 0x800268A0: sw          $a1, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r5;
    // 0x800268A4: lh          $v0, 0x2C($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X2C);
    // 0x800268A8: lh          $v1, 0x2C($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X2C);
    // 0x800268AC: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800268B0: beq         $v0, $zero, L_800268C4
    if (ctx->r2 == 0) {
        // 0x800268B4: nop
    
            goto L_800268C4;
    }
    // 0x800268B4: nop

L_800268B8:
    // 0x800268B8: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x800268BC: bne         $v0, $zero, L_80026898
    if (ctx->r2 != 0) {
        // 0x800268C0: nop
    
            goto L_80026898;
    }
    // 0x800268C0: nop

L_800268C4:
    // 0x800268C4: jr          $ra
    // 0x800268C8: nop

    TRACE_RETURN()
    return;
    // 0x800268C8: nop

;}
RECOMP_FUNC void alLoadNew(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80096014: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80096018: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8009601C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80096020: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80096024: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x80096028: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8009602C: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x80096030: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x80096034: addiu       $a1, $a1, 0x6250
    ctx->r5 = ADD32(ctx->r5, 0X6250);
    // 0x80096038: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x8009603C: addiu       $a2, $a2, 0x6A30
    ctx->r6 = ADD32(ctx->r6, 0X6A30);
    // 0x80096040: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80096044: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80096048: jal         0x80097B20
    // 0x8009604C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    alFilterNew(rdram, ctx);
        goto after_0;
    // 0x8009604C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    after_0:
    // 0x80096050: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80096054: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80096058: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x8009605C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80096060: addiu       $s1, $zero, 0x20
    ctx->r17 = ADD32(0, 0X20);
    // 0x80096064: jal         0x80098CC0
    // 0x80096068: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    alHeapDBAlloc(rdram, ctx);
        goto after_1;
    // 0x80096068: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    after_1:
    // 0x8009606C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80096070: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80096074: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x80096078: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8009607C: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x80096080: jal         0x80098CC0
    // 0x80096084: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    alHeapDBAlloc(rdram, ctx);
        goto after_2;
    // 0x80096084: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    after_2:
    // 0x80096088: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8009608C: jalr        $s3
    // 0x80096090: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    LOOKUP_FUNC(ctx->r19)(rdram, ctx);
        goto after_3;
    // 0x80096090: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    after_3:
    // 0x80096094: sw          $v0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r2;
    // 0x80096098: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8009609C: sw          $zero, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = 0;
    // 0x800960A0: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    // 0x800960A4: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x800960A8: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x800960AC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800960B0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800960B4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800960B8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800960BC: jr          $ra
    // 0x800960C0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x800960C0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void __allocParam(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800991CC: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x800991D0: lw          $a0, -0xAD0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XAD0);
    // 0x800991D4: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
    // 0x800991D8: beq         $v0, $zero, L_800991F0
    if (ctx->r2 == 0) {
        // 0x800991DC: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_800991F0;
    }
    // 0x800991DC: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x800991E0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x800991E4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800991E8: sw          $v0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r2;
    // 0x800991EC: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
L_800991F0:
    // 0x800991F0: jr          $ra
    // 0x800991F4: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    TRACE_RETURN()
    return;
    // 0x800991F4: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
;}
RECOMP_FUNC void func_8008E6E4_69AE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008E6E4: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8008E6E8: jr          $ra
    // 0x8008E6EC: addiu       $v0, $v0, -0x1910
    ctx->r2 = ADD32(ctx->r2, -0X1910);
    TRACE_RETURN()
    return;
    // 0x8008E6EC: addiu       $v0, $v0, -0x1910
    ctx->r2 = ADD32(ctx->r2, -0X1910);
;}
RECOMP_FUNC void func_80036A8C_11E8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80036A8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80036A90: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80036A94: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80036A98: sll         $v0, $a0, 6
    ctx->r2 = S32(ctx->r4 << 6);
    // 0x80036A9C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80036AA0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80036AA4: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80036AA8: addiu       $v1, $v1, -0x7148
    ctx->r3 = ADD32(ctx->r3, -0X7148);
    // 0x80036AAC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80036AB0: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80036AB4: sra         $a1, $a1, 14
    ctx->r5 = S32(SIGNED(ctx->r5) >> 14);
    // 0x80036AB8: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80036ABC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80036AC0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80036AC4: lw          $s0, 0x0($a1)
    ctx->r16 = MEM_W(ctx->r5, 0X0);
    // 0x80036AC8: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x80036ACC: addu        $a1, $s0, $v0
    ctx->r5 = ADD32(ctx->r16, ctx->r2);
    // 0x80036AD0: addiu       $a0, $a1, 0x4
    ctx->r4 = ADD32(ctx->r5, 0X4);
    // 0x80036AD4: jal         0x8002FDC0
    // 0x80036AD8: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    func_8002FDC0_B1C0(rdram, ctx);
        goto after_0;
    // 0x80036AD8: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    after_0:
    // 0x80036ADC: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x80036AE0: addu        $a1, $s0, $v0
    ctx->r5 = ADD32(ctx->r16, ctx->r2);
    // 0x80036AE4: addiu       $a0, $a1, 0x4
    ctx->r4 = ADD32(ctx->r5, 0X4);
    // 0x80036AE8: jal         0x800870A0
    // 0x80036AEC: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    func_800870A0_624A0(rdram, ctx);
        goto after_1;
    // 0x80036AEC: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    after_1:
    // 0x80036AF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80036AF4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80036AF8: jr          $ra
    // 0x80036AFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80036AFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800308E8_BCE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800308E8: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x800308EC: addu        $t0, $a1, $zero
    ctx->r8 = ADD32(ctx->r5, 0);
    // 0x800308F0: addu        $t1, $a2, $zero
    ctx->r9 = ADD32(ctx->r6, 0);
    // 0x800308F4: bne         $t0, $t1, L_800309D4
    if (ctx->r8 != ctx->r9) {
        // 0x800308F8: addu        $a3, $a0, $zero
        ctx->r7 = ADD32(ctx->r4, 0);
            goto L_800309D4;
    }
    // 0x800308F8: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x800308FC: lh          $a2, 0x0($a3)
    ctx->r6 = MEM_H(ctx->r7, 0X0);
    // 0x80030900: lh          $v0, 0x0($t1)
    ctx->r2 = MEM_H(ctx->r9, 0X0);
    // 0x80030904: mult        $a2, $v0
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030908: mflo        $a2
    ctx->r6 = lo;
    // 0x8003090C: lh          $a0, 0x2($a3)
    ctx->r4 = MEM_H(ctx->r7, 0X2);
    // 0x80030910: lh          $v0, 0x2($t1)
    ctx->r2 = MEM_H(ctx->r9, 0X2);
    // 0x80030914: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030918: mflo        $a0
    ctx->r4 = lo;
    // 0x8003091C: lh          $v1, 0x4($t1)
    ctx->r3 = MEM_H(ctx->r9, 0X4);
    // 0x80030920: lh          $v0, 0x4($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X4);
    // 0x80030924: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030928: mflo        $v0
    ctx->r2 = lo;
    // 0x8003092C: addu        $a2, $a2, $a0
    ctx->r6 = ADD32(ctx->r6, ctx->r4);
    // 0x80030930: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x80030934: sra         $a2, $a2, 12
    ctx->r6 = S32(SIGNED(ctx->r6) >> 12);
    // 0x80030938: sw          $a2, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r6;
    // 0x8003093C: lh          $v0, 0x6($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X6);
    // 0x80030940: lh          $v1, 0x0($t1)
    ctx->r3 = MEM_H(ctx->r9, 0X0);
    // 0x80030944: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030948: mflo        $v0
    ctx->r2 = lo;
    // 0x8003094C: lh          $a1, 0x8($a3)
    ctx->r5 = MEM_H(ctx->r7, 0X8);
    // 0x80030950: lh          $v1, 0x2($t1)
    ctx->r3 = MEM_H(ctx->r9, 0X2);
    // 0x80030954: mult        $a1, $v1
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030958: mflo        $a1
    ctx->r5 = lo;
    // 0x8003095C: lh          $a0, 0x4($t1)
    ctx->r4 = MEM_H(ctx->r9, 0X4);
    // 0x80030960: lh          $v1, 0xA($a3)
    ctx->r3 = MEM_H(ctx->r7, 0XA);
    // 0x80030964: mult        $v1, $a0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030968: mflo        $v1
    ctx->r3 = lo;
    // 0x8003096C: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80030970: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80030974: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80030978: sw          $v0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r2;
    // 0x8003097C: lh          $v0, 0xC($a3)
    ctx->r2 = MEM_H(ctx->r7, 0XC);
    // 0x80030980: lh          $v1, 0x0($t1)
    ctx->r3 = MEM_H(ctx->r9, 0X0);
    // 0x80030984: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030988: mflo        $v0
    ctx->r2 = lo;
    // 0x8003098C: lh          $a1, 0xE($a3)
    ctx->r5 = MEM_H(ctx->r7, 0XE);
    // 0x80030990: lh          $v1, 0x2($t1)
    ctx->r3 = MEM_H(ctx->r9, 0X2);
    // 0x80030994: mult        $a1, $v1
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030998: mflo        $a1
    ctx->r5 = lo;
    // 0x8003099C: lh          $a0, 0x4($t1)
    ctx->r4 = MEM_H(ctx->r9, 0X4);
    // 0x800309A0: lh          $v1, 0x10($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X10);
    // 0x800309A4: mult        $v1, $a0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800309A8: mflo        $v1
    ctx->r3 = lo;
    // 0x800309AC: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x800309B0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800309B4: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x800309B8: sw          $v0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r2;
    // 0x800309BC: sw          $a2, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r6;
    // 0x800309C0: lw          $v0, 0x4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4);
    // 0x800309C4: sw          $v0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r2;
    // 0x800309C8: lw          $v0, 0x8($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X8);
    // 0x800309CC: j           L_80030A94
    // 0x800309D0: sw          $v0, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r2;
        goto L_80030A94;
    // 0x800309D0: sw          $v0, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r2;
L_800309D4:
    // 0x800309D4: lh          $v0, 0x0($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X0);
    // 0x800309D8: lh          $v1, 0x0($t0)
    ctx->r3 = MEM_H(ctx->r8, 0X0);
    // 0x800309DC: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800309E0: mflo        $v0
    ctx->r2 = lo;
    // 0x800309E4: lh          $a1, 0x2($a3)
    ctx->r5 = MEM_H(ctx->r7, 0X2);
    // 0x800309E8: lh          $v1, 0x2($t0)
    ctx->r3 = MEM_H(ctx->r8, 0X2);
    // 0x800309EC: mult        $a1, $v1
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800309F0: mflo        $a1
    ctx->r5 = lo;
    // 0x800309F4: lh          $a0, 0x4($t0)
    ctx->r4 = MEM_H(ctx->r8, 0X4);
    // 0x800309F8: lh          $v1, 0x4($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X4);
    // 0x800309FC: mult        $v1, $a0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030A00: mflo        $v1
    ctx->r3 = lo;
    // 0x80030A04: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80030A08: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80030A0C: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80030A10: sw          $v0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r2;
    // 0x80030A14: lh          $v0, 0x6($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X6);
    // 0x80030A18: lh          $v1, 0x0($t0)
    ctx->r3 = MEM_H(ctx->r8, 0X0);
    // 0x80030A1C: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030A20: mflo        $v0
    ctx->r2 = lo;
    // 0x80030A24: lh          $a1, 0x8($a3)
    ctx->r5 = MEM_H(ctx->r7, 0X8);
    // 0x80030A28: lh          $v1, 0x2($t0)
    ctx->r3 = MEM_H(ctx->r8, 0X2);
    // 0x80030A2C: mult        $a1, $v1
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030A30: mflo        $a1
    ctx->r5 = lo;
    // 0x80030A34: lh          $a0, 0x4($t0)
    ctx->r4 = MEM_H(ctx->r8, 0X4);
    // 0x80030A38: lh          $v1, 0xA($a3)
    ctx->r3 = MEM_H(ctx->r7, 0XA);
    // 0x80030A3C: mult        $v1, $a0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030A40: mflo        $v1
    ctx->r3 = lo;
    // 0x80030A44: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80030A48: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80030A4C: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80030A50: sw          $v0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r2;
    // 0x80030A54: lh          $v0, 0xC($a3)
    ctx->r2 = MEM_H(ctx->r7, 0XC);
    // 0x80030A58: lh          $v1, 0x0($t0)
    ctx->r3 = MEM_H(ctx->r8, 0X0);
    // 0x80030A5C: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030A60: mflo        $v0
    ctx->r2 = lo;
    // 0x80030A64: lh          $a1, 0xE($a3)
    ctx->r5 = MEM_H(ctx->r7, 0XE);
    // 0x80030A68: lh          $v1, 0x2($t0)
    ctx->r3 = MEM_H(ctx->r8, 0X2);
    // 0x80030A6C: mult        $a1, $v1
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030A70: mflo        $a1
    ctx->r5 = lo;
    // 0x80030A74: lh          $a0, 0x4($t0)
    ctx->r4 = MEM_H(ctx->r8, 0X4);
    // 0x80030A78: lh          $v1, 0x10($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X10);
    // 0x80030A7C: mult        $v1, $a0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030A80: mflo        $v1
    ctx->r3 = lo;
    // 0x80030A84: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80030A88: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80030A8C: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80030A90: sw          $v0, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r2;
L_80030A94:
    // 0x80030A94: addu        $v0, $t1, $zero
    ctx->r2 = ADD32(ctx->r9, 0);
    // 0x80030A98: jr          $ra
    // 0x80030A9C: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    TRACE_RETURN()
    return;
    // 0x80030A9C: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_80031DA8_D1A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80031DA8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80031DAC: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
L_80031DB0:
    // 0x80031DB0: lh          $v0, 0x0($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X0);
    // 0x80031DB4: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80031DB8: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80031DBC: mflo        $v0
    ctx->r2 = lo;
    // 0x80031DC0: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80031DC4: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
    // 0x80031DC8: lh          $v0, 0x2($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X2);
    // 0x80031DCC: lw          $v1, 0x4($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X4);
    // 0x80031DD0: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80031DD4: mflo        $v0
    ctx->r2 = lo;
    // 0x80031DD8: lh          $v1, 0x4($a2)
    ctx->r3 = MEM_H(ctx->r6, 0X4);
    // 0x80031DDC: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80031DE0: sh          $v0, 0x2($a2)
    MEM_H(0X2, ctx->r6) = ctx->r2;
    // 0x80031DE4: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x80031DE8: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80031DEC: mflo        $v1
    ctx->r3 = lo;
    // 0x80031DF0: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x80031DF4: slti        $v0, $a3, 0x3
    ctx->r2 = SIGNED(ctx->r7) < 0X3 ? 1 : 0;
    // 0x80031DF8: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x80031DFC: sh          $v1, 0x4($a2)
    MEM_H(0X4, ctx->r6) = ctx->r3;
    // 0x80031E00: bne         $v0, $zero, L_80031DB0
    if (ctx->r2 != 0) {
        // 0x80031E04: addiu       $a2, $a2, 0x6
        ctx->r6 = ADD32(ctx->r6, 0X6);
            goto L_80031DB0;
    }
    // 0x80031E04: addiu       $a2, $a2, 0x6
    ctx->r6 = ADD32(ctx->r6, 0X6);
    // 0x80031E08: jr          $ra
    // 0x80031E0C: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    TRACE_RETURN()
    return;
    // 0x80031E0C: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
;}
RECOMP_FUNC void func_80030588_B988(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80030588: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8003058C: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
    // 0x80030590: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80030594: jr          $ra
    // 0x80030598: sb          $v0, 0x7($a0)
    MEM_B(0X7, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80030598: sb          $v0, 0x7($a0)
    MEM_B(0X7, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_80036BAC_11FAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80036BAC: jr          $ra
    // 0x80036BB0: nop

    TRACE_RETURN()
    return;
    // 0x80036BB0: nop

;}
RECOMP_FUNC void func_80035468_10868(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80035468: jr          $ra
    // 0x8003546C: nop

    TRACE_RETURN()
    return;
    // 0x8003546C: nop

;}
RECOMP_FUNC void func_80066E8C_4228C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80066E8C: lhu         $v0, 0xC0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XC0);
    // 0x80066E90: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x80066E94: sh          $v1, 0xC0($a0)
    MEM_H(0XC0, ctx->r4) = ctx->r3;
    // 0x80066E98: lw          $v1, 0x6C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X6C);
    // 0x80066E9C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80066EA0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80066EA4: addiu       $v1, $v1, 0x3
    ctx->r3 = ADD32(ctx->r3, 0X3);
    // 0x80066EA8: sw          $v1, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = ctx->r3;
    // 0x80066EAC: lw          $v1, 0x6C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X6C);
    // 0x80066EB0: lbu         $v0, 0x1($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X1);
    // 0x80066EB4: beql        $v0, $zero, L_80066EE0
    if (ctx->r2 == 0) {
        // 0x80066EB8: sb          $zero, -0x1($v1)
        MEM_B(-0X1, ctx->r3) = 0;
            goto L_80066EE0;
    }
    goto skip_0;
    // 0x80066EB8: sb          $zero, -0x1($v1)
    MEM_B(-0X1, ctx->r3) = 0;
    skip_0:
    // 0x80066EBC: lbu         $v0, 0x2($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X2);
    // 0x80066EC0: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x80066EC4: lbu         $v1, 0x5410($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X5410);
    // 0x80066EC8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80066ECC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80066ED0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80066ED4: lb          $v0, 0x4E04($at)
    ctx->r2 = MEM_B(ctx->r1, 0X4E04);
    // 0x80066ED8: j           L_80066F2C
    // 0x80066EDC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
        goto L_80066F2C;
    // 0x80066EDC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_80066EE0:
    // 0x80066EE0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80066EE4: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80066EE8: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
    // 0x80066EEC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80066EF0: beq         $v0, $zero, L_80066F14
    if (ctx->r2 == 0) {
        // 0x80066EF4: nop
    
            goto L_80066F14;
    }
    // 0x80066EF4: nop

    // 0x80066EF8: lw          $a1, 0x6C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X6C);
    // 0x80066EFC: lb          $v0, 0x71($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X71);
    // 0x80066F00: lbu         $v1, 0x2($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X2);
    // 0x80066F04: bne         $v1, $v0, L_80066F14
    if (ctx->r3 != ctx->r2) {
        // 0x80066F08: nop
    
            goto L_80066F14;
    }
    // 0x80066F08: nop

    // 0x80066F0C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80066F10: sb          $v0, -0x1($a1)
    MEM_B(-0X1, ctx->r5) = ctx->r2;
L_80066F14:
    // 0x80066F14: lw          $v0, 0x6C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X6C);
    // 0x80066F18: lbu         $v0, 0x2($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2);
    // 0x80066F1C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80066F20: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80066F24: lb          $v0, 0x4E00($at)
    ctx->r2 = MEM_B(ctx->r1, 0X4E00);
    // 0x80066F28: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_80066F2C:
    // 0x80066F2C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80066F30: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80066F34: lw          $v0, 0x28C0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X28C0);
    // 0x80066F38: sw          $v0, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r2;
    // 0x80066F3C: jr          $ra
    // 0x80066F40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x80066F40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_8007FB78_5AF78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007FB78: addiu       $v1, $a0, 0x2B
    ctx->r3 = ADD32(ctx->r4, 0X2B);
    // 0x8007FB7C: addiu       $v0, $zero, -0x8
    ctx->r2 = ADD32(0, -0X8);
    // 0x8007FB80: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8007FB84: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x8007FB88: addu        $t1, $a3, $zero
    ctx->r9 = ADD32(ctx->r7, 0);
L_8007FB8C:
    // 0x8007FB8C: sb          $a1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r5;
    // 0x8007FB90: sh          $a2, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r6;
    // 0x8007FB94: sb          $t0, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r8;
    // 0x8007FB98: beq         $a3, $zero, L_8007FBA4
    if (ctx->r7 == 0) {
        // 0x8007FB9C: sw          $v1, 0x8($a0)
        MEM_W(0X8, ctx->r4) = ctx->r3;
            goto L_8007FBA4;
    }
    // 0x8007FB9C: sw          $v1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r3;
    // 0x8007FBA0: sw          $a0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r4;
L_8007FBA4:
    // 0x8007FBA4: addiu       $t1, $t1, 0x4
    ctx->r9 = ADD32(ctx->r9, 0X4);
    // 0x8007FBA8: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8007FBAC: slti        $v0, $t0, 0x3
    ctx->r2 = SIGNED(ctx->r8) < 0X3 ? 1 : 0;
    // 0x8007FBB0: bne         $v0, $zero, L_8007FB8C
    if (ctx->r2 != 0) {
        // 0x8007FBB4: addiu       $a0, $a0, 0xC
        ctx->r4 = ADD32(ctx->r4, 0XC);
            goto L_8007FB8C;
    }
    // 0x8007FBB4: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    // 0x8007FBB8: jr          $ra
    // 0x8007FBBC: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    TRACE_RETURN()
    return;
    // 0x8007FBBC: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
;}
RECOMP_FUNC void func_8002C5A4_79A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002C5A4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8002C5A8: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8002C5AC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8002C5B0: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8002C5B4: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x8002C5B8: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8002C5BC: addiu       $s0, $sp, 0x10
    ctx->r16 = ADD32(ctx->r29, 0X10);
    // 0x8002C5C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8002C5C4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8002C5C8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8002C5CC: jal         0x8009A3B4
    // 0x8002C5D0: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8002C5D0: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_0:
    // 0x8002C5D4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8002C5D8: jal         0x80031E10
    // 0x8002C5DC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031E10_D210(rdram, ctx);
        goto after_1;
    // 0x8002C5DC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8002C5E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8002C5E4: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x8002C5E8: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x8002C5EC: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x8002C5F0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8002C5F4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8002C5F8: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8002C5FC: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8002C600: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8002C604: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    // 0x8002C608: jal         0x8002C420
    // 0x8002C60C: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    func_8002C420_7820(rdram, ctx);
        goto after_2;
    // 0x8002C60C: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    after_2:
    // 0x8002C610: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x8002C614: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8002C618: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x8002C61C: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8002C620: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8002C624: jr          $ra
    // 0x8002C628: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8002C628: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8008BF98_67398(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008BF98: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008BF9C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8008BFA0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8008BFA4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8008BFA8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8008BFAC: lbu         $v0, 0xB8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB8);
    // 0x8008BFB0: lwc1        $f6, 0x2C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X2C);
    // 0x8008BFB4: mtc1        $a2, $f8
    ctx->f8.u32l = ctx->r6;
    // 0x8008BFB8: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x8008BFBC: beq         $v1, $zero, L_8008C004
    if (ctx->r3 == 0) {
        // 0x8008BFC0: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_8008C004;
    }
    // 0x8008BFC0: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8008BFC4: lhu         $a0, 0xAA($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XAA);
    // 0x8008BFC8: sltu        $v0, $v0, $a0
    ctx->r2 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x8008BFCC: bnel        $v0, $zero, L_8008C004
    if (ctx->r2 != 0) {
        // 0x8008BFD0: swc1        $f6, 0x50($s0)
        MEM_W(0X50, ctx->r16) = ctx->f6.u32l;
            goto L_8008C004;
    }
    goto skip_0;
    // 0x8008BFD0: swc1        $f6, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f6.u32l;
    skip_0:
    // 0x8008BFD4: lwc1        $f4, 0x4C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4C);
    // 0x8008BFD8: sub.s       $f0, $f6, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x8008BFDC: mtc1        $v1, $f2
    ctx->f2.u32l = ctx->r3;
    // 0x8008BFE0: nop

    // 0x8008BFE4: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x8008BFE8: div.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    // 0x8008BFEC: mtc1        $a0, $f2
    ctx->f2.u32l = ctx->r4;
    // 0x8008BFF0: nop

    // 0x8008BFF4: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x8008BFF8: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x8008BFFC: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x8008C000: swc1        $f6, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->f6.u32l;
L_8008C004:
    // 0x8008C004: lwc1        $f0, 0x24($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X24);
    // 0x8008C008: add.s       $f0, $f8, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x8008C00C: add.s       $f6, $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x8008C010: lwc1        $f0, 0x28($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X28);
    // 0x8008C014: c.eq.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl == ctx->f0.fl;
    // 0x8008C018: nop

    // 0x8008C01C: bc1t        L_8008C090
    if (c1cs) {
        // 0x8008C020: nop
    
            goto L_8008C090;
    }
    // 0x8008C020: nop

    // 0x8008C024: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008C028: ldc1        $f0, 0x2D20($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X2D20);
    // 0x8008C02C: cvt.d.s     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f12.d = CVT_D_S(ctx->f6.fl);
    // 0x8008C030: mul.d       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f0.d); 
    ctx->f12.d = MUL_D(ctx->f12.d, ctx->f0.d);
    // 0x8008C034: swc1        $f6, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f6.u32l;
    // 0x8008C038: jal         0x8008C658
    // 0x8008C03C: cvt.s.d     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); 
    ctx->f12.fl = CVT_S_D(ctx->f12.d);
    func_8008C658_67A58(rdram, ctx);
        goto after_0;
    // 0x8008C03C: cvt.s.d     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); 
    ctx->f12.fl = CVT_S_D(ctx->f12.d);
    after_0:
    // 0x8008C040: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008C044: ldc1        $f2, 0x2D28($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, 0X2D28);
    // 0x8008C048: mov.s       $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.fl = ctx->f0.fl;
    // 0x8008C04C: cvt.d.s     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f0.d = CVT_D_S(ctx->f6.fl);
    // 0x8008C050: c.lt.d      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.d < ctx->f0.d;
    // 0x8008C054: nop

    // 0x8008C058: nop

    // 0x8008C05C: bc1f        L_8008C070
    if (!c1cs) {
        // 0x8008C060: sll         $a0, $s1, 3
        ctx->r4 = S32(ctx->r17 << 3);
            goto L_8008C070;
    }
    // 0x8008C060: sll         $a0, $s1, 3
    ctx->r4 = S32(ctx->r17 << 3);
    // 0x8008C064: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8008C068: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8008C06C: sb          $zero, 0xBB($s0)
    MEM_B(0XBB, ctx->r16) = 0;
L_8008C070:
    // 0x8008C070: subu        $a0, $a0, $s1
    ctx->r4 = SUB32(ctx->r4, ctx->r17);
    // 0x8008C074: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008C078: lw          $v0, 0x4F88($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4F88);
    // 0x8008C07C: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x8008C080: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x8008C084: nop

    // 0x8008C088: jal         0x80091650
    // 0x8008C08C: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_80091650_6CA50(rdram, ctx);
        goto after_1;
    // 0x8008C08C: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_1:
L_8008C090:
    // 0x8008C090: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8008C094: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8008C098: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8008C09C: jr          $ra
    // 0x8008C0A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8008C0A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80079A68_54E68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80079A68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80079A6C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80079A70: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80079A74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80079A78: lhu         $v0, 0x3E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X3E);
    // 0x80079A7C: lh          $a0, 0xC($s0)
    ctx->r4 = MEM_H(ctx->r16, 0XC);
    // 0x80079A80: addiu       $a1, $s0, 0x18
    ctx->r5 = ADD32(ctx->r16, 0X18);
    // 0x80079A84: sh          $zero, 0x26($s0)
    MEM_H(0X26, ctx->r16) = 0;
    // 0x80079A88: sh          $zero, 0x24($s0)
    MEM_H(0X24, ctx->r16) = 0;
    // 0x80079A8C: sh          $zero, 0x22($s0)
    MEM_H(0X22, ctx->r16) = 0;
    // 0x80079A90: sh          $zero, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = 0;
    // 0x80079A94: sh          $zero, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = 0;
    // 0x80079A98: sh          $zero, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = 0;
    // 0x80079A9C: sh          $v0, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r2;
    // 0x80079AA0: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
    // 0x80079AA4: jal         0x800319B4
    // 0x80079AA8: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    func_800319B4_CDB4(rdram, ctx);
        goto after_0;
    // 0x80079AA8: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    after_0:
    // 0x80079AAC: lhu         $v0, 0xC($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XC);
    // 0x80079AB0: addiu       $v0, $v0, 0x100
    ctx->r2 = ADD32(ctx->r2, 0X100);
    // 0x80079AB4: sh          $v0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r2;
    // 0x80079AB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80079ABC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80079AC0: jr          $ra
    // 0x80079AC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80079AC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80078D64_54164(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80078D64: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x80078D68: lbu         $v0, 0xA($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0XA);
    // 0x80078D6C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80078D70: lh          $v1, 0x49C4($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X49C4);
    // 0x80078D74: lh          $a0, 0x38($a2)
    ctx->r4 = MEM_H(ctx->r6, 0X38);
    // 0x80078D78: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x80078D7C: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80078D80: lbu         $a1, -0x31FC($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X31FC);
    // 0x80078D84: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x80078D88: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80078D8C: addiu       $v1, $v1, 0x32
    ctx->r3 = ADD32(ctx->r3, 0X32);
    // 0x80078D90: sll         $a3, $a1, 1
    ctx->r7 = S32(ctx->r5 << 1);
    // 0x80078D94: addiu       $a0, $a3, 0x64
    ctx->r4 = ADD32(ctx->r7, 0X64);
    // 0x80078D98: sltu        $v1, $a0, $v1
    ctx->r3 = ctx->r4 < ctx->r3 ? 1 : 0;
    // 0x80078D9C: bne         $v1, $zero, L_80078DF0
    if (ctx->r3 != 0) {
        // 0x80078DA0: nop
    
            goto L_80078DF0;
    }
    // 0x80078DA0: nop

    // 0x80078DA4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80078DA8: lh          $v0, 0x49C8($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X49C8);
    // 0x80078DAC: lh          $v1, 0x3C($a2)
    ctx->r3 = MEM_H(ctx->r6, 0X3C);
    // 0x80078DB0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80078DB4: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80078DB8: addiu       $v0, $v0, 0x32
    ctx->r2 = ADD32(ctx->r2, 0X32);
    // 0x80078DBC: sltu        $v0, $a0, $v0
    ctx->r2 = ctx->r4 < ctx->r2 ? 1 : 0;
    // 0x80078DC0: bne         $v0, $zero, L_80078DF0
    if (ctx->r2 != 0) {
        // 0x80078DC4: nop
    
            goto L_80078DF0;
    }
    // 0x80078DC4: nop

    // 0x80078DC8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80078DCC: lh          $v0, 0x49C6($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X49C6);
    // 0x80078DD0: lh          $v1, 0x3A($a2)
    ctx->r3 = MEM_H(ctx->r6, 0X3A);
    // 0x80078DD4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80078DD8: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80078DDC: addiu       $v1, $a3, 0x96
    ctx->r3 = ADD32(ctx->r7, 0X96);
    // 0x80078DE0: sltu        $v1, $v1, $v0
    ctx->r3 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x80078DE4: bne         $v1, $zero, L_80078DF0
    if (ctx->r3 != 0) {
        // 0x80078DE8: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80078DF0;
    }
    // 0x80078DE8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80078DEC: sb          $v0, 0x8($a2)
    MEM_B(0X8, ctx->r6) = ctx->r2;
L_80078DF0:
    // 0x80078DF0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80078DF4: lh          $v0, 0x4FB8($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X4FB8);
    // 0x80078DF8: lh          $v1, 0x38($a2)
    ctx->r3 = MEM_H(ctx->r6, 0X38);
    // 0x80078DFC: sll         $a3, $a1, 1
    ctx->r7 = S32(ctx->r5 << 1);
    // 0x80078E00: addiu       $a0, $a3, 0x64
    ctx->r4 = ADD32(ctx->r7, 0X64);
    // 0x80078E04: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80078E08: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80078E0C: addiu       $v0, $v0, 0x32
    ctx->r2 = ADD32(ctx->r2, 0X32);
    // 0x80078E10: sltu        $v0, $a0, $v0
    ctx->r2 = ctx->r4 < ctx->r2 ? 1 : 0;
    // 0x80078E14: bne         $v0, $zero, L_80078E68
    if (ctx->r2 != 0) {
        // 0x80078E18: nop
    
            goto L_80078E68;
    }
    // 0x80078E18: nop

    // 0x80078E1C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80078E20: lh          $v0, 0x4FBC($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X4FBC);
    // 0x80078E24: lh          $v1, 0x3C($a2)
    ctx->r3 = MEM_H(ctx->r6, 0X3C);
    // 0x80078E28: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80078E2C: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80078E30: addiu       $v0, $v0, 0x32
    ctx->r2 = ADD32(ctx->r2, 0X32);
    // 0x80078E34: sltu        $v0, $a0, $v0
    ctx->r2 = ctx->r4 < ctx->r2 ? 1 : 0;
    // 0x80078E38: bne         $v0, $zero, L_80078E68
    if (ctx->r2 != 0) {
        // 0x80078E3C: nop
    
            goto L_80078E68;
    }
    // 0x80078E3C: nop

    // 0x80078E40: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80078E44: lh          $v0, 0x4FBA($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X4FBA);
    // 0x80078E48: lh          $v1, 0x3A($a2)
    ctx->r3 = MEM_H(ctx->r6, 0X3A);
    // 0x80078E4C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80078E50: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80078E54: addiu       $v1, $a3, 0x96
    ctx->r3 = ADD32(ctx->r7, 0X96);
    // 0x80078E58: sltu        $v1, $v1, $v0
    ctx->r3 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x80078E5C: bne         $v1, $zero, L_80078E68
    if (ctx->r3 != 0) {
        // 0x80078E60: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80078E68;
    }
    // 0x80078E60: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80078E64: sb          $v0, 0x8($a2)
    MEM_B(0X8, ctx->r6) = ctx->r2;
L_80078E68:
    // 0x80078E68: jr          $ra
    // 0x80078E6C: nop

    TRACE_RETURN()
    return;
    // 0x80078E6C: nop

;}
RECOMP_FUNC void func_8005FB30_3AF30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8005FB30: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8005FB34: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8005FB38: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8005FB3C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8005FB40: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8005FB44: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8005FB48: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8005FB4C: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x8005FB50: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x8005FB54: jal         0x8005FA7C
    // 0x8005FB58: lw          $s1, -0x3A2C($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X3A2C);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_0;
    // 0x8005FB58: lw          $s1, -0x3A2C($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X3A2C);
    after_0:
    // 0x8005FB5C: lbu         $v1, 0x6($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X6);
    // 0x8005FB60: andi        $v1, $v1, 0xDF
    ctx->r3 = ctx->r3 & 0XDF;
    // 0x8005FB64: sb          $v1, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r3;
    // 0x8005FB68: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8005FB6C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8005FB70: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005FB74: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8005FB78: sw          $s1, -0x3A2C($at)
    MEM_W(-0X3A2C, ctx->r1) = ctx->r17;
    // 0x8005FB7C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8005FB80: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8005FB84: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8005FB88: jr          $ra
    // 0x8005FB8C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8005FB8C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80026100_1500(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80026100: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80026104: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x80026108: addiu       $v1, $v1, 0x3578
    ctx->r3 = ADD32(ctx->r3, 0X3578);
    // 0x8002610C: beq         $a3, $zero, L_80026118
    if (ctx->r7 == 0) {
        // 0x80026110: addiu       $t0, $a3, 0x38
        ctx->r8 = ADD32(ctx->r7, 0X38);
            goto L_80026118;
    }
    // 0x80026110: addiu       $t0, $a3, 0x38
    ctx->r8 = ADD32(ctx->r7, 0X38);
    // 0x80026114: addiu       $v0, $v1, 0x38
    ctx->r2 = ADD32(ctx->r3, 0X38);
L_80026118:
    // 0x80026118: beql        $v1, $zero, L_80026194
    if (ctx->r3 == 0) {
        // 0x8002611C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80026194;
    }
    goto skip_0;
    // 0x8002611C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x80026120: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80026124: sw          $v0, 0x3598($at)
    MEM_W(0X3598, ctx->r1) = ctx->r2;
    // 0x80026128: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8002612C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80026130: sw          $zero, 0x3584($at)
    MEM_W(0X3584, ctx->r1) = 0;
    // 0x80026134: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80026138: sw          $a0, 0x358C($at)
    MEM_W(0X358C, ctx->r1) = ctx->r4;
    // 0x8002613C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80026140: sw          $a1, 0x3590($at)
    MEM_W(0X3590, ctx->r1) = ctx->r5;
    // 0x80026144: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80026148: sw          $a2, 0x3594($at)
    MEM_W(0X3594, ctx->r1) = ctx->r6;
    // 0x8002614C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80026150: sw          $zero, 0x359C($at)
    MEM_W(0X359C, ctx->r1) = 0;
    // 0x80026154: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80026158: sw          $t0, 0x35A0($at)
    MEM_W(0X35A0, ctx->r1) = ctx->r8;
    // 0x8002615C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80026160: sh          $zero, 0x35A6($at)
    MEM_H(0X35A6, ctx->r1) = 0;
    // 0x80026164: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80026168: sh          $zero, 0x35A8($at)
    MEM_H(0X35A8, ctx->r1) = 0;
    // 0x8002616C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80026170: sh          $zero, 0x35A4($at)
    MEM_H(0X35A4, ctx->r1) = 0;
    // 0x80026174: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80026178: sb          $zero, 0x35AC($at)
    MEM_B(0X35AC, ctx->r1) = 0;
    // 0x8002617C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80026180: sb          $v0, 0x35AD($at)
    MEM_B(0X35AD, ctx->r1) = ctx->r2;
    // 0x80026184: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x80026188: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8002618C: sw          $zero, 0x357C($at)
    MEM_W(0X357C, ctx->r1) = 0;
    // 0x80026190: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80026194:
    // 0x80026194: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80026198: sw          $v0, 0x3570($at)
    MEM_W(0X3570, ctx->r1) = ctx->r2;
    // 0x8002619C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800261A0: sb          $zero, 0x34E0($at)
    MEM_B(0X34E0, ctx->r1) = 0;
    // 0x800261A4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800261A8: sw          $v1, 0x34E4($at)
    MEM_W(0X34E4, ctx->r1) = ctx->r3;
    // 0x800261AC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800261B0: sw          $v1, 0x34E8($at)
    MEM_W(0X34E8, ctx->r1) = ctx->r3;
    // 0x800261B4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800261B8: sw          $zero, -0x46DC($at)
    MEM_W(-0X46DC, ctx->r1) = 0;
    // 0x800261BC: jr          $ra
    // 0x800261C0: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    TRACE_RETURN()
    return;
    // 0x800261C0: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
;}
RECOMP_FUNC void func_8008ED70_6A170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008ED70: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008ED74: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8008ED78: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8008ED7C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8008ED80: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8008ED84: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8008ED88: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8008ED8C: jal         0x8008EE10
    // 0x8008ED90: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_8008EE10_6A210(rdram, ctx);
        goto after_0;
    // 0x8008ED90: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_0:
    // 0x8008ED94: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x8008ED98: addiu       $a0, $a0, 0x51F0
    ctx->r4 = ADD32(ctx->r4, 0X51F0);
    // 0x8008ED9C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8008EDA0: jal         0x80098C80
    // 0x8008EDA4: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    alHeapInit(rdram, ctx);
        goto after_1;
    // 0x8008EDA4: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_1:
    // 0x8008EDA8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8008EDAC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8008EDB0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8008EDB4: jr          $ra
    // 0x8008EDB8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8008EDB8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
