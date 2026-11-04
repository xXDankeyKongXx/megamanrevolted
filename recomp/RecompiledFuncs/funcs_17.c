#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80035488_10888(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80035488: jr          $ra
    // 0x8003548C: nop

    TRACE_RETURN()
    return;
    // 0x8003548C: nop

;}
RECOMP_FUNC void func_8003E810_19C10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003E810: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8003E814: lh          $v0, 0x0($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X0);
    // 0x8003E818: ori         $a2, $zero, 0x8000
    ctx->r6 = 0 | 0X8000;
    // 0x8003E81C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8003E820: lbu         $v1, 0x6B40($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X6B40);
    // 0x8003E824: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8003E828: lhu         $a0, 0x49AE($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X49AE);
    // 0x8003E82C: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8003E830: sra         $v0, $v0, 9
    ctx->r2 = S32(SIGNED(ctx->r2) >> 9);
    // 0x8003E834: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8003E838: sltu        $v0, $v0, $a0
    ctx->r2 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x8003E83C: beq         $v0, $zero, L_8003E874
    if (ctx->r2 == 0) {
        // 0x8003E840: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8003E874;
    }
    // 0x8003E840: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8003E844: lh          $v0, 0x4($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X4);
    // 0x8003E848: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003E84C: lbu         $v1, -0x39A6($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X39A6);
    // 0x8003E850: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x8003E854: lhu         $a0, -0x7386($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X7386);
    // 0x8003E858: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8003E85C: sra         $v0, $v0, 9
    ctx->r2 = S32(SIGNED(ctx->r2) >> 9);
    // 0x8003E860: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8003E864: sltu        $v0, $v0, $a0
    ctx->r2 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x8003E868: bne         $v0, $zero, L_8003E874
    if (ctx->r2 != 0) {
        // 0x8003E86C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8003E874;
    }
    // 0x8003E86C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8003E870: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8003E874:
    // 0x8003E874: jr          $ra
    // 0x8003E878: nop

    TRACE_RETURN()
    return;
    // 0x8003E878: nop

;}
RECOMP_FUNC void func_800630C4_3E4C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800630C4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800630C8: lw          $a1, 0x6C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X6C);
    // 0x800630CC: lui         $v1, 0x2000
    ctx->r3 = S32(0X2000 << 16);
    // 0x800630D0: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x800630D4: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x800630D8: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x800630DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800630E0: jr          $ra
    // 0x800630E4: sw          $a1, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x800630E4: sw          $a1, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_8006F33C_4A73C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006F33C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006F340: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8006F344: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8006F348: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006F34C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8006F350: bne         $v0, $zero, L_8006F3C0
    if (ctx->r2 != 0) {
        // 0x8006F354: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8006F3C0;
    }
    // 0x8006F354: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006F358: lbu         $v1, 0x174($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X174);
    // 0x8006F35C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8006F360: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x8006F364: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8006F368: andi        $v1, $v1, 0xFC
    ctx->r3 = ctx->r3 & 0XFC;
    // 0x8006F36C: sb          $v1, 0x174($s0)
    MEM_B(0X174, ctx->r16) = ctx->r3;
    // 0x8006F370: andi        $v1, $v1, 0xC0
    ctx->r3 = ctx->r3 & 0XC0;
    // 0x8006F374: bne         $v1, $zero, L_8006F398
    if (ctx->r3 != 0) {
        // 0x8006F378: nop
    
            goto L_8006F398;
    }
    // 0x8006F378: nop

    // 0x8006F37C: lb          $v0, 0x177($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X177);
    // 0x8006F380: bne         $v0, $zero, L_8006F398
    if (ctx->r2 != 0) {
        // 0x8006F384: nop
    
            goto L_8006F398;
    }
    // 0x8006F384: nop

    // 0x8006F388: jal         0x80070100
    // 0x8006F38C: nop

    func_80070100_4B500(rdram, ctx);
        goto after_0;
    // 0x8006F38C: nop

    after_0:
    // 0x8006F390: j           L_8006F3E0
    // 0x8006F394: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_8006F3E0;
    // 0x8006F394: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8006F398:
    // 0x8006F398: lbu         $v0, 0x174($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X174);
    // 0x8006F39C: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8006F3A0: beq         $v0, $zero, L_8006F3B4
    if (ctx->r2 == 0) {
        // 0x8006F3A4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8006F3B4;
    }
    // 0x8006F3A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006F3A8: lbu         $a2, 0x100($a0)
    ctx->r6 = MEM_BU(ctx->r4, 0X100);
    // 0x8006F3AC: j           L_8006F3E8
    // 0x8006F3B0: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
        goto L_8006F3E8;
    // 0x8006F3B0: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
L_8006F3B4:
    // 0x8006F3B4: lbu         $a2, 0x100($a0)
    ctx->r6 = MEM_BU(ctx->r4, 0X100);
    // 0x8006F3B8: j           L_8006F3E8
    // 0x8006F3BC: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
        goto L_8006F3E8;
    // 0x8006F3BC: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
L_8006F3C0:
    // 0x8006F3C0: lb          $v0, 0x174($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X174);
    // 0x8006F3C4: sb          $zero, 0x44D($s0)
    MEM_B(0X44D, ctx->r16) = 0;
    // 0x8006F3C8: andi        $v0, $v0, 0xC0
    ctx->r2 = ctx->r2 & 0XC0;
    // 0x8006F3CC: bne         $v0, $zero, L_8006F3F0
    if (ctx->r2 != 0) {
        // 0x8006F3D0: sh          $zero, 0xB4($s0)
        MEM_H(0XB4, ctx->r16) = 0;
            goto L_8006F3F0;
    }
    // 0x8006F3D0: sh          $zero, 0xB4($s0)
    MEM_H(0XB4, ctx->r16) = 0;
    // 0x8006F3D4: lb          $v0, 0x177($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X177);
    // 0x8006F3D8: bne         $v0, $zero, L_8006F3F0
    if (ctx->r2 != 0) {
        // 0x8006F3DC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8006F3F0;
    }
    // 0x8006F3DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8006F3E0:
    // 0x8006F3E0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8006F3E4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_8006F3E8:
    // 0x8006F3E8: jal         0x8006FB90
    // 0x8006F3EC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8006FB90_4AF90(rdram, ctx);
        goto after_1;
    // 0x8006F3EC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
L_8006F3F0:
    // 0x8006F3F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006F3F4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8006F3F8: jr          $ra
    // 0x8006F3FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8006F3FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800260F4_14F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800260F4: jr          $ra
    // 0x800260F8: lw          $v0, -0x28($a0)
    ctx->r2 = MEM_W(ctx->r4, -0X28);
    TRACE_RETURN()
    return;
    // 0x800260F8: lw          $v0, -0x28($a0)
    ctx->r2 = MEM_W(ctx->r4, -0X28);
    // 0x800260FC: nop

;}
RECOMP_FUNC void func_8004C314_27714(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004C314: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8004C318: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8004C31C: addiu       $v0, $v0, -0x2290
    ctx->r2 = ADD32(ctx->r2, -0X2290);
    // 0x8004C320: addiu       $v1, $v0, 0x1600
    ctx->r3 = ADD32(ctx->r2, 0X1600);
    // 0x8004C324: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8004C328: sw          $v0, 0x6B48($at)
    MEM_W(0X6B48, ctx->r1) = ctx->r2;
    // 0x8004C32C: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8004C330: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8004C334: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8004C338: beq         $v0, $zero, L_8004C3AC
    if (ctx->r2 == 0) {
        // 0x8004C33C: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_8004C3AC;
    }
    // 0x8004C33C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8004C340: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x8004C344: addiu       $s1, $s1, 0x2EC8
    ctx->r17 = ADD32(ctx->r17, 0X2EC8);
    // 0x8004C348: addu        $s0, $v1, $zero
    ctx->r16 = ADD32(ctx->r3, 0);
L_8004C34C:
    // 0x8004C34C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8004C350: lw          $a0, 0x6B48($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6B48);
    // 0x8004C354: lb          $v0, 0x0($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X0);
    // 0x8004C358: lbu         $v1, 0x6($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X6);
    // 0x8004C35C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8004C360: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8004C364: beq         $v0, $zero, L_8004C38C
    if (ctx->r2 == 0) {
        // 0x8004C368: nop
    
            goto L_8004C38C;
    }
    // 0x8004C368: nop

    // 0x8004C36C: lbu         $v1, 0x2($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X2);
    // 0x8004C370: sltiu       $v0, $v1, 0x80
    ctx->r2 = ctx->r3 < 0X80 ? 1 : 0;
    // 0x8004C374: bne         $v0, $zero, L_8004C38C
    if (ctx->r2 != 0) {
        // 0x8004C378: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8004C38C;
    }
    // 0x8004C378: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8004C37C: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8004C380: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8004C384: jalr        $v0
    // 0x8004C388: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8004C388: nop

    after_0:
L_8004C38C:
    // 0x8004C38C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8004C390: lw          $v0, 0x6B48($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6B48);
    // 0x8004C394: addiu       $v0, $v0, 0x58
    ctx->r2 = ADD32(ctx->r2, 0X58);
    // 0x8004C398: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8004C39C: sw          $v0, 0x6B48($at)
    MEM_W(0X6B48, ctx->r1) = ctx->r2;
    // 0x8004C3A0: sltu        $v0, $v0, $s0
    ctx->r2 = ctx->r2 < ctx->r16 ? 1 : 0;
    // 0x8004C3A4: bne         $v0, $zero, L_8004C34C
    if (ctx->r2 != 0) {
        // 0x8004C3A8: nop
    
            goto L_8004C34C;
    }
    // 0x8004C3A8: nop

L_8004C3AC:
    // 0x8004C3AC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8004C3B0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8004C3B4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8004C3B8: jr          $ra
    // 0x8004C3BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8004C3BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8009412C_6F52C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8009412C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80094130: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80094134: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80094138: addiu       $a0, $a0, -0x2658
    ctx->r4 = ADD32(ctx->r4, -0X2658);
    // 0x8009413C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80094140: jal         0x8009A710
    // 0x80094144: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x80094144: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x80094148: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8009414C: jr          $ra
    // 0x80094150: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80094150: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80082C70_5E070(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80082C70: lw          $v0, 0x70($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X70);
    // 0x80082C74: lhu         $v1, 0x2($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X2);
    // 0x80082C78: addiu       $v0, $zero, 0x26
    ctx->r2 = ADD32(0, 0X26);
    // 0x80082C7C: beq         $v1, $v0, L_80082DE4
    if (ctx->r3 == ctx->r2) {
        // 0x80082C80: slti        $v0, $v1, 0x27
        ctx->r2 = SIGNED(ctx->r3) < 0X27 ? 1 : 0;
            goto L_80082DE4;
    }
    // 0x80082C80: slti        $v0, $v1, 0x27
    ctx->r2 = SIGNED(ctx->r3) < 0X27 ? 1 : 0;
    // 0x80082C84: beq         $v0, $zero, L_80082CC8
    if (ctx->r2 == 0) {
        // 0x80082C88: slti        $v0, $v1, 0x20
        ctx->r2 = SIGNED(ctx->r3) < 0X20 ? 1 : 0;
            goto L_80082CC8;
    }
    // 0x80082C88: slti        $v0, $v1, 0x20
    ctx->r2 = SIGNED(ctx->r3) < 0X20 ? 1 : 0;
    // 0x80082C8C: beq         $v0, $zero, L_80082CAC
    if (ctx->r2 == 0) {
        // 0x80082C90: slti        $v0, $v1, 0x1E
        ctx->r2 = SIGNED(ctx->r3) < 0X1E ? 1 : 0;
            goto L_80082CAC;
    }
    // 0x80082C90: slti        $v0, $v1, 0x1E
    ctx->r2 = SIGNED(ctx->r3) < 0X1E ? 1 : 0;
    // 0x80082C94: beq         $v0, $zero, L_80082D8C
    if (ctx->r2 == 0) {
        // 0x80082C98: slti        $v0, $v1, 0x19
        ctx->r2 = SIGNED(ctx->r3) < 0X19 ? 1 : 0;
            goto L_80082D8C;
    }
    // 0x80082C98: slti        $v0, $v1, 0x19
    ctx->r2 = SIGNED(ctx->r3) < 0X19 ? 1 : 0;
    // 0x80082C9C: bne         $v0, $zero, L_80082F94
    if (ctx->r2 != 0) {
        // 0x80082CA0: andi        $a0, $a1, 0xFFFF
        ctx->r4 = ctx->r5 & 0XFFFF;
            goto L_80082F94;
    }
    // 0x80082CA0: andi        $a0, $a1, 0xFFFF
    ctx->r4 = ctx->r5 & 0XFFFF;
    // 0x80082CA4: j           L_80082D38
    // 0x80082CA8: nop

        goto L_80082D38;
    // 0x80082CA8: nop

L_80082CAC:
    // 0x80082CAC: slti        $v0, $v1, 0x25
    ctx->r2 = SIGNED(ctx->r3) < 0X25 ? 1 : 0;
    // 0x80082CB0: beq         $v0, $zero, L_80082F94
    if (ctx->r2 == 0) {
        // 0x80082CB4: slti        $v0, $v1, 0x23
        ctx->r2 = SIGNED(ctx->r3) < 0X23 ? 1 : 0;
            goto L_80082F94;
    }
    // 0x80082CB4: slti        $v0, $v1, 0x23
    ctx->r2 = SIGNED(ctx->r3) < 0X23 ? 1 : 0;
    // 0x80082CB8: beq         $v0, $zero, L_80082DE4
    if (ctx->r2 == 0) {
        // 0x80082CBC: nop
    
            goto L_80082DE4;
    }
    // 0x80082CBC: nop

    // 0x80082CC0: j           L_80082F94
    // 0x80082CC4: nop

        goto L_80082F94;
    // 0x80082CC4: nop

L_80082CC8:
    // 0x80082CC8: addiu       $v0, $zero, 0x34
    ctx->r2 = ADD32(0, 0X34);
    // 0x80082CCC: beq         $v1, $v0, L_80082E90
    if (ctx->r3 == ctx->r2) {
        // 0x80082CD0: slti        $v0, $v1, 0x35
        ctx->r2 = SIGNED(ctx->r3) < 0X35 ? 1 : 0;
            goto L_80082E90;
    }
    // 0x80082CD0: slti        $v0, $v1, 0x35
    ctx->r2 = SIGNED(ctx->r3) < 0X35 ? 1 : 0;
    // 0x80082CD4: beq         $v0, $zero, L_80082D00
    if (ctx->r2 == 0) {
        // 0x80082CD8: slti        $v0, $v1, 0x28
        ctx->r2 = SIGNED(ctx->r3) < 0X28 ? 1 : 0;
            goto L_80082D00;
    }
    // 0x80082CD8: slti        $v0, $v1, 0x28
    ctx->r2 = SIGNED(ctx->r3) < 0X28 ? 1 : 0;
    // 0x80082CDC: bne         $v0, $zero, L_80082F94
    if (ctx->r2 != 0) {
        // 0x80082CE0: slti        $v0, $v1, 0x2C
        ctx->r2 = SIGNED(ctx->r3) < 0X2C ? 1 : 0;
            goto L_80082F94;
    }
    // 0x80082CE0: slti        $v0, $v1, 0x2C
    ctx->r2 = SIGNED(ctx->r3) < 0X2C ? 1 : 0;
    // 0x80082CE4: bne         $v0, $zero, L_80082E3C
    if (ctx->r2 != 0) {
        // 0x80082CE8: andi        $a0, $a1, 0xFFFF
        ctx->r4 = ctx->r5 & 0XFFFF;
            goto L_80082E3C;
    }
    // 0x80082CE8: andi        $a0, $a1, 0xFFFF
    ctx->r4 = ctx->r5 & 0XFFFF;
    // 0x80082CEC: addiu       $v0, $zero, 0x2E
    ctx->r2 = ADD32(0, 0X2E);
    // 0x80082CF0: beq         $v1, $v0, L_80082F28
    if (ctx->r3 == ctx->r2) {
        // 0x80082CF4: andi        $v1, $a1, 0xFFFF
        ctx->r3 = ctx->r5 & 0XFFFF;
            goto L_80082F28;
    }
    // 0x80082CF4: andi        $v1, $a1, 0xFFFF
    ctx->r3 = ctx->r5 & 0XFFFF;
    // 0x80082CF8: j           L_80082F94
    // 0x80082CFC: nop

        goto L_80082F94;
    // 0x80082CFC: nop

L_80082D00:
    // 0x80082D00: addiu       $v0, $zero, 0xEF
    ctx->r2 = ADD32(0, 0XEF);
    // 0x80082D04: beq         $v1, $v0, L_80082ED0
    if (ctx->r3 == ctx->r2) {
        // 0x80082D08: slti        $v0, $v1, 0xF0
        ctx->r2 = SIGNED(ctx->r3) < 0XF0 ? 1 : 0;
            goto L_80082ED0;
    }
    // 0x80082D08: slti        $v0, $v1, 0xF0
    ctx->r2 = SIGNED(ctx->r3) < 0XF0 ? 1 : 0;
    // 0x80082D0C: beq         $v0, $zero, L_80082D24
    if (ctx->r2 == 0) {
        // 0x80082D10: addiu       $v0, $zero, 0xEC
        ctx->r2 = ADD32(0, 0XEC);
            goto L_80082D24;
    }
    // 0x80082D10: addiu       $v0, $zero, 0xEC
    ctx->r2 = ADD32(0, 0XEC);
    // 0x80082D14: beq         $v1, $v0, L_80082ED0
    if (ctx->r3 == ctx->r2) {
        // 0x80082D18: nop
    
            goto L_80082ED0;
    }
    // 0x80082D18: nop

    // 0x80082D1C: j           L_80082F94
    // 0x80082D20: nop

        goto L_80082F94;
    // 0x80082D20: nop

L_80082D24:
    // 0x80082D24: addiu       $v0, $zero, 0xF1
    ctx->r2 = ADD32(0, 0XF1);
    // 0x80082D28: beq         $v1, $v0, L_80082F60
    if (ctx->r3 == ctx->r2) {
        // 0x80082D2C: andi        $v1, $a1, 0xFFFF
        ctx->r3 = ctx->r5 & 0XFFFF;
            goto L_80082F60;
    }
    // 0x80082D2C: andi        $v1, $a1, 0xFFFF
    ctx->r3 = ctx->r5 & 0XFFFF;
    // 0x80082D30: j           L_80082F94
    // 0x80082D34: nop

        goto L_80082F94;
    // 0x80082D34: nop

L_80082D38:
    // 0x80082D38: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80082D3C: lhu         $v0, -0x1AB4($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X1AB4);
    // 0x80082D40: sltu        $v0, $a2, $v0
    ctx->r2 = ctx->r6 < ctx->r2 ? 1 : 0;
    // 0x80082D44: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80082D48: and         $a2, $a2, $v0
    ctx->r6 = ctx->r6 & ctx->r2;
    // 0x80082D4C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80082D50: beq         $a0, $v0, L_80082D64
    if (ctx->r4 == ctx->r2) {
        // 0x80082D54: srl         $v1, $a1, 16
        ctx->r3 = S32(U32(ctx->r5) >> 16);
            goto L_80082D64;
    }
    // 0x80082D54: srl         $v1, $a1, 16
    ctx->r3 = S32(U32(ctx->r5) >> 16);
    // 0x80082D58: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x80082D5C: bne         $v1, $v0, L_80082D70
    if (ctx->r3 != ctx->r2) {
        // 0x80082D60: addiu       $v0, $zero, 0x12
        ctx->r2 = ADD32(0, 0X12);
            goto L_80082D70;
    }
    // 0x80082D60: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
L_80082D64:
    // 0x80082D64: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80082D68: j           L_80082F94
    // 0x80082D6C: sh          $a2, -0x3D60($at)
    MEM_H(-0X3D60, ctx->r1) = ctx->r6;
        goto L_80082F94;
    // 0x80082D6C: sh          $a2, -0x3D60($at)
    MEM_H(-0X3D60, ctx->r1) = ctx->r6;
L_80082D70:
    // 0x80082D70: beq         $a0, $v0, L_80082D80
    if (ctx->r4 == ctx->r2) {
        // 0x80082D74: addiu       $v0, $zero, 0x13
        ctx->r2 = ADD32(0, 0X13);
            goto L_80082D80;
    }
    // 0x80082D74: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x80082D78: bne         $v1, $v0, L_80082F94
    if (ctx->r3 != ctx->r2) {
        // 0x80082D7C: nop
    
            goto L_80082F94;
    }
    // 0x80082D7C: nop

L_80082D80:
    // 0x80082D80: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80082D84: j           L_80082F94
    // 0x80082D88: sh          $a2, -0x3D5E($at)
    MEM_H(-0X3D5E, ctx->r1) = ctx->r6;
        goto L_80082F94;
    // 0x80082D88: sh          $a2, -0x3D5E($at)
    MEM_H(-0X3D5E, ctx->r1) = ctx->r6;
L_80082D8C:
    // 0x80082D8C: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80082D90: lhu         $v0, -0x3D6E($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3D6E);
    // 0x80082D94: andi        $a0, $a1, 0xFFFF
    ctx->r4 = ctx->r5 & 0XFFFF;
    // 0x80082D98: sltu        $v0, $a2, $v0
    ctx->r2 = ctx->r6 < ctx->r2 ? 1 : 0;
    // 0x80082D9C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80082DA0: and         $a2, $a2, $v0
    ctx->r6 = ctx->r6 & ctx->r2;
    // 0x80082DA4: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80082DA8: beq         $a0, $v0, L_80082DBC
    if (ctx->r4 == ctx->r2) {
        // 0x80082DAC: srl         $v1, $a1, 16
        ctx->r3 = S32(U32(ctx->r5) >> 16);
            goto L_80082DBC;
    }
    // 0x80082DAC: srl         $v1, $a1, 16
    ctx->r3 = S32(U32(ctx->r5) >> 16);
    // 0x80082DB0: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x80082DB4: bne         $v1, $v0, L_80082DC8
    if (ctx->r3 != ctx->r2) {
        // 0x80082DB8: addiu       $v0, $zero, 0x12
        ctx->r2 = ADD32(0, 0X12);
            goto L_80082DC8;
    }
    // 0x80082DB8: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
L_80082DBC:
    // 0x80082DBC: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80082DC0: j           L_80082F94
    // 0x80082DC4: sh          $a2, -0x3D5C($at)
    MEM_H(-0X3D5C, ctx->r1) = ctx->r6;
        goto L_80082F94;
    // 0x80082DC4: sh          $a2, -0x3D5C($at)
    MEM_H(-0X3D5C, ctx->r1) = ctx->r6;
L_80082DC8:
    // 0x80082DC8: beq         $a0, $v0, L_80082DD8
    if (ctx->r4 == ctx->r2) {
        // 0x80082DCC: addiu       $v0, $zero, 0x13
        ctx->r2 = ADD32(0, 0X13);
            goto L_80082DD8;
    }
    // 0x80082DCC: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x80082DD0: bne         $v1, $v0, L_80082F94
    if (ctx->r3 != ctx->r2) {
        // 0x80082DD4: nop
    
            goto L_80082F94;
    }
    // 0x80082DD4: nop

L_80082DD8:
    // 0x80082DD8: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80082DDC: j           L_80082F94
    // 0x80082DE0: sh          $a2, -0x3D5A($at)
    MEM_H(-0X3D5A, ctx->r1) = ctx->r6;
        goto L_80082F94;
    // 0x80082DE0: sh          $a2, -0x3D5A($at)
    MEM_H(-0X3D5A, ctx->r1) = ctx->r6;
L_80082DE4:
    // 0x80082DE4: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80082DE8: lhu         $v0, -0x3D6C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3D6C);
    // 0x80082DEC: andi        $a0, $a1, 0xFFFF
    ctx->r4 = ctx->r5 & 0XFFFF;
    // 0x80082DF0: sltu        $v0, $a2, $v0
    ctx->r2 = ctx->r6 < ctx->r2 ? 1 : 0;
    // 0x80082DF4: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80082DF8: and         $a2, $a2, $v0
    ctx->r6 = ctx->r6 & ctx->r2;
    // 0x80082DFC: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x80082E00: beq         $a0, $v0, L_80082E14
    if (ctx->r4 == ctx->r2) {
        // 0x80082E04: srl         $v1, $a1, 16
        ctx->r3 = S32(U32(ctx->r5) >> 16);
            goto L_80082E14;
    }
    // 0x80082E04: srl         $v1, $a1, 16
    ctx->r3 = S32(U32(ctx->r5) >> 16);
    // 0x80082E08: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80082E0C: bne         $v1, $v0, L_80082E20
    if (ctx->r3 != ctx->r2) {
        // 0x80082E10: addiu       $v0, $zero, 0x11
        ctx->r2 = ADD32(0, 0X11);
            goto L_80082E20;
    }
    // 0x80082E10: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
L_80082E14:
    // 0x80082E14: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80082E18: j           L_80082F94
    // 0x80082E1C: sh          $a2, -0x3D58($at)
    MEM_H(-0X3D58, ctx->r1) = ctx->r6;
        goto L_80082F94;
    // 0x80082E1C: sh          $a2, -0x3D58($at)
    MEM_H(-0X3D58, ctx->r1) = ctx->r6;
L_80082E20:
    // 0x80082E20: beq         $a0, $v0, L_80082E30
    if (ctx->r4 == ctx->r2) {
        // 0x80082E24: addiu       $v0, $zero, 0x12
        ctx->r2 = ADD32(0, 0X12);
            goto L_80082E30;
    }
    // 0x80082E24: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x80082E28: bne         $v1, $v0, L_80082F94
    if (ctx->r3 != ctx->r2) {
        // 0x80082E2C: nop
    
            goto L_80082F94;
    }
    // 0x80082E2C: nop

L_80082E30:
    // 0x80082E30: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80082E34: j           L_80082F94
    // 0x80082E38: sh          $a2, -0x3D56($at)
    MEM_H(-0X3D56, ctx->r1) = ctx->r6;
        goto L_80082F94;
    // 0x80082E38: sh          $a2, -0x3D56($at)
    MEM_H(-0X3D56, ctx->r1) = ctx->r6;
L_80082E3C:
    // 0x80082E3C: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80082E40: lhu         $v0, -0x3D6A($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3D6A);
    // 0x80082E44: sltu        $v0, $a2, $v0
    ctx->r2 = ctx->r6 < ctx->r2 ? 1 : 0;
    // 0x80082E48: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80082E4C: and         $a2, $a2, $v0
    ctx->r6 = ctx->r6 & ctx->r2;
    // 0x80082E50: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80082E54: beq         $a0, $v0, L_80082E68
    if (ctx->r4 == ctx->r2) {
        // 0x80082E58: srl         $v1, $a1, 16
        ctx->r3 = S32(U32(ctx->r5) >> 16);
            goto L_80082E68;
    }
    // 0x80082E58: srl         $v1, $a1, 16
    ctx->r3 = S32(U32(ctx->r5) >> 16);
    // 0x80082E5C: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x80082E60: bne         $v1, $v0, L_80082E74
    if (ctx->r3 != ctx->r2) {
        // 0x80082E64: addiu       $v0, $zero, 0x12
        ctx->r2 = ADD32(0, 0X12);
            goto L_80082E74;
    }
    // 0x80082E64: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
L_80082E68:
    // 0x80082E68: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80082E6C: j           L_80082F94
    // 0x80082E70: sh          $a2, -0x3D54($at)
    MEM_H(-0X3D54, ctx->r1) = ctx->r6;
        goto L_80082F94;
    // 0x80082E70: sh          $a2, -0x3D54($at)
    MEM_H(-0X3D54, ctx->r1) = ctx->r6;
L_80082E74:
    // 0x80082E74: beq         $a0, $v0, L_80082E84
    if (ctx->r4 == ctx->r2) {
        // 0x80082E78: addiu       $v0, $zero, 0x13
        ctx->r2 = ADD32(0, 0X13);
            goto L_80082E84;
    }
    // 0x80082E78: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x80082E7C: bne         $v1, $v0, L_80082F94
    if (ctx->r3 != ctx->r2) {
        // 0x80082E80: nop
    
            goto L_80082F94;
    }
    // 0x80082E80: nop

L_80082E84:
    // 0x80082E84: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80082E88: j           L_80082F94
    // 0x80082E8C: sh          $a2, -0x3D52($at)
    MEM_H(-0X3D52, ctx->r1) = ctx->r6;
        goto L_80082F94;
    // 0x80082E8C: sh          $a2, -0x3D52($at)
    MEM_H(-0X3D52, ctx->r1) = ctx->r6;
L_80082E90:
    // 0x80082E90: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80082E94: lhu         $v0, -0x3D68($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3D68);
    // 0x80082E98: andi        $a0, $a1, 0xFFFF
    ctx->r4 = ctx->r5 & 0XFFFF;
    // 0x80082E9C: sltu        $v0, $a2, $v0
    ctx->r2 = ctx->r6 < ctx->r2 ? 1 : 0;
    // 0x80082EA0: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80082EA4: and         $a2, $a2, $v0
    ctx->r6 = ctx->r6 & ctx->r2;
    // 0x80082EA8: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x80082EAC: beq         $a0, $v0, L_80082F00
    if (ctx->r4 == ctx->r2) {
        // 0x80082EB0: srl         $v1, $a1, 16
        ctx->r3 = S32(U32(ctx->r5) >> 16);
            goto L_80082F00;
    }
    // 0x80082EB0: srl         $v1, $a1, 16
    ctx->r3 = S32(U32(ctx->r5) >> 16);
    // 0x80082EB4: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x80082EB8: beq         $v1, $v0, L_80082F00
    if (ctx->r3 == ctx->r2) {
        // 0x80082EBC: addiu       $v0, $zero, 0xF
        ctx->r2 = ADD32(0, 0XF);
            goto L_80082F00;
    }
    // 0x80082EBC: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x80082EC0: beq         $a0, $v0, L_80082F1C
    if (ctx->r4 == ctx->r2) {
        // 0x80082EC4: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_80082F1C;
    }
    // 0x80082EC4: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80082EC8: j           L_80082F14
    // 0x80082ECC: nop

        goto L_80082F14;
    // 0x80082ECC: nop

L_80082ED0:
    // 0x80082ED0: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80082ED4: lhu         $v0, -0x3D68($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3D68);
    // 0x80082ED8: andi        $a0, $a1, 0xFFFF
    ctx->r4 = ctx->r5 & 0XFFFF;
    // 0x80082EDC: sltu        $v0, $a2, $v0
    ctx->r2 = ctx->r6 < ctx->r2 ? 1 : 0;
    // 0x80082EE0: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80082EE4: and         $a2, $a2, $v0
    ctx->r6 = ctx->r6 & ctx->r2;
    // 0x80082EE8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80082EEC: beq         $a0, $v0, L_80082F00
    if (ctx->r4 == ctx->r2) {
        // 0x80082EF0: srl         $v1, $a1, 16
        ctx->r3 = S32(U32(ctx->r5) >> 16);
            goto L_80082F00;
    }
    // 0x80082EF0: srl         $v1, $a1, 16
    ctx->r3 = S32(U32(ctx->r5) >> 16);
    // 0x80082EF4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80082EF8: bne         $v1, $v0, L_80082F0C
    if (ctx->r3 != ctx->r2) {
        // 0x80082EFC: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80082F0C;
    }
    // 0x80082EFC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_80082F00:
    // 0x80082F00: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80082F04: j           L_80082F94
    // 0x80082F08: sh          $a2, -0x3D50($at)
    MEM_H(-0X3D50, ctx->r1) = ctx->r6;
        goto L_80082F94;
    // 0x80082F08: sh          $a2, -0x3D50($at)
    MEM_H(-0X3D50, ctx->r1) = ctx->r6;
L_80082F0C:
    // 0x80082F0C: beq         $a0, $v0, L_80082F1C
    if (ctx->r4 == ctx->r2) {
        // 0x80082F10: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_80082F1C;
    }
    // 0x80082F10: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_80082F14:
    // 0x80082F14: bne         $v1, $v0, L_80082F94
    if (ctx->r3 != ctx->r2) {
        // 0x80082F18: nop
    
            goto L_80082F94;
    }
    // 0x80082F18: nop

L_80082F1C:
    // 0x80082F1C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80082F20: j           L_80082F94
    // 0x80082F24: sh          $a2, -0x3D4E($at)
    MEM_H(-0X3D4E, ctx->r1) = ctx->r6;
        goto L_80082F94;
    // 0x80082F24: sh          $a2, -0x3D4E($at)
    MEM_H(-0X3D4E, ctx->r1) = ctx->r6;
L_80082F28:
    // 0x80082F28: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80082F2C: lhu         $v0, -0x3D66($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3D66);
    // 0x80082F30: sltu        $v0, $a2, $v0
    ctx->r2 = ctx->r6 < ctx->r2 ? 1 : 0;
    // 0x80082F34: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80082F38: and         $a2, $a2, $v0
    ctx->r6 = ctx->r6 & ctx->r2;
    // 0x80082F3C: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80082F40: beq         $v1, $v0, L_80082F54
    if (ctx->r3 == ctx->r2) {
        // 0x80082F44: srl         $v1, $a1, 16
        ctx->r3 = S32(U32(ctx->r5) >> 16);
            goto L_80082F54;
    }
    // 0x80082F44: srl         $v1, $a1, 16
    ctx->r3 = S32(U32(ctx->r5) >> 16);
    // 0x80082F48: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80082F4C: bne         $v1, $v0, L_80082F94
    if (ctx->r3 != ctx->r2) {
        // 0x80082F50: nop
    
            goto L_80082F94;
    }
    // 0x80082F50: nop

L_80082F54:
    // 0x80082F54: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80082F58: j           L_80082F94
    // 0x80082F5C: sh          $a2, -0x3D4C($at)
    MEM_H(-0X3D4C, ctx->r1) = ctx->r6;
        goto L_80082F94;
    // 0x80082F5C: sh          $a2, -0x3D4C($at)
    MEM_H(-0X3D4C, ctx->r1) = ctx->r6;
L_80082F60:
    // 0x80082F60: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80082F64: lhu         $v0, -0x3D64($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3D64);
    // 0x80082F68: sltu        $v0, $a2, $v0
    ctx->r2 = ctx->r6 < ctx->r2 ? 1 : 0;
    // 0x80082F6C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80082F70: and         $a2, $a2, $v0
    ctx->r6 = ctx->r6 & ctx->r2;
    // 0x80082F74: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80082F78: beq         $v1, $v0, L_80082F8C
    if (ctx->r3 == ctx->r2) {
        // 0x80082F7C: srl         $v1, $a1, 16
        ctx->r3 = S32(U32(ctx->r5) >> 16);
            goto L_80082F8C;
    }
    // 0x80082F7C: srl         $v1, $a1, 16
    ctx->r3 = S32(U32(ctx->r5) >> 16);
    // 0x80082F80: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80082F84: bne         $v1, $v0, L_80082F94
    if (ctx->r3 != ctx->r2) {
        // 0x80082F88: nop
    
            goto L_80082F94;
    }
    // 0x80082F88: nop

L_80082F8C:
    // 0x80082F8C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80082F90: sh          $a2, -0x3D48($at)
    MEM_H(-0X3D48, ctx->r1) = ctx->r6;
L_80082F94:
    // 0x80082F94: jr          $ra
    // 0x80082F98: nop

    TRACE_RETURN()
    return;
    // 0x80082F98: nop

;}
RECOMP_FUNC void func_80054984_2FD84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80054984: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80054988: lb          $v1, -0x72EC($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X72EC);
    // 0x8005498C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80054990: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
    // 0x80054994: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80054998: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x8005499C: srav        $v0, $v0, $v1
    ctx->r2 = S32(SIGNED(ctx->r2) >> (ctx->r3 & 31));
    // 0x800549A0: jal         0x8005471C
    // 0x800549A4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8005471C_2FB1C(rdram, ctx);
        goto after_0;
    // 0x800549A4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x800549A8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x800549AC: jr          $ra
    // 0x800549B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x800549B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8003BE30_17230(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003BE30: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003BE34: lb          $v1, -0x3C18($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3C18);
    // 0x8003BE38: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003BE3C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8003BE40: bne         $v1, $v0, L_8003BE84
    if (ctx->r3 != ctx->r2) {
        // 0x8003BE44: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_8003BE84;
    }
    // 0x8003BE44: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8003BE48: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003BE4C: lw          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3BC8);
    // 0x8003BE50: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x8003BE54: and         $a0, $v1, $v0
    ctx->r4 = ctx->r3 & ctx->r2;
    // 0x8003BE58: lui         $v1, 0x302
    ctx->r3 = S32(0X302 << 16);
    // 0x8003BE5C: xor         $v1, $a0, $v1
    ctx->r3 = ctx->r4 ^ ctx->r3;
    // 0x8003BE60: sltu        $v1, $zero, $v1
    ctx->r3 = 0 < ctx->r3 ? 1 : 0;
    // 0x8003BE64: lui         $v0, 0x130B
    ctx->r2 = S32(0X130B << 16);
    // 0x8003BE68: xor         $v0, $a0, $v0
    ctx->r2 = ctx->r4 ^ ctx->r2;
    // 0x8003BE6C: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x8003BE70: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8003BE74: beq         $v1, $zero, L_8003BE8C
    if (ctx->r3 == 0) {
        // 0x8003BE78: lui         $v0, 0x1B06
        ctx->r2 = S32(0X1B06 << 16);
            goto L_8003BE8C;
    }
    // 0x8003BE78: lui         $v0, 0x1B06
    ctx->r2 = S32(0X1B06 << 16);
    // 0x8003BE7C: beq         $a0, $v0, L_8003BE8C
    if (ctx->r4 == ctx->r2) {
        // 0x8003BE80: nop
    
            goto L_8003BE8C;
    }
    // 0x8003BE80: nop

L_8003BE84:
    // 0x8003BE84: jal         0x80048C7C
    // 0x8003BE88: nop

    func_80048C7C_2407C(rdram, ctx);
        goto after_0;
    // 0x8003BE88: nop

    after_0:
L_8003BE8C:
    // 0x8003BE8C: jal         0x8004A6B4
    // 0x8003BE90: nop

    func_8004A6B4_25AB4(rdram, ctx);
        goto after_1;
    // 0x8003BE90: nop

    after_1:
    // 0x8003BE94: jal         0x8003912C
    // 0x8003BE98: nop

    func_8003912C_1452C(rdram, ctx);
        goto after_2;
    // 0x8003BE98: nop

    after_2:
    // 0x8003BE9C: jal         0x80037F78
    // 0x8003BEA0: nop

    func_80037F78_13378(rdram, ctx);
        goto after_3;
    // 0x8003BEA0: nop

    after_3:
    // 0x8003BEA4: jal         0x8003A248
    // 0x8003BEA8: nop

    func_8003A248_15648(rdram, ctx);
        goto after_4;
    // 0x8003BEA8: nop

    after_4:
    // 0x8003BEAC: jal         0x8003A7CC
    // 0x8003BEB0: nop

    func_8003A7CC_15BCC(rdram, ctx);
        goto after_5;
    // 0x8003BEB0: nop

    after_5:
    // 0x8003BEB4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8003BEB8: jr          $ra
    // 0x8003BEBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8003BEBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8005A82C_35C2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8005A82C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005A830: lh          $v0, -0x3DA4($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X3DA4);
    // 0x8005A834: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8005A838: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8005A83C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8005A840: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8005A844: beq         $v0, $zero, L_8005A854
    if (ctx->r2 == 0) {
        // 0x8005A848: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_8005A854;
    }
    // 0x8005A848: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8005A84C: j           L_8005A8DC
    // 0x8005A850: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_8005A8DC;
    // 0x8005A850: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_8005A854:
    // 0x8005A854: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8005A858: lhu         $v1, -0x783A($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X783A);
    // 0x8005A85C: andi        $v0, $v1, 0x10
    ctx->r2 = ctx->r3 & 0X10;
    // 0x8005A860: beq         $v0, $zero, L_8005A884
    if (ctx->r2 == 0) {
        // 0x8005A864: andi        $v0, $v1, 0x40
        ctx->r2 = ctx->r3 & 0X40;
            goto L_8005A884;
    }
    // 0x8005A864: andi        $v0, $v1, 0x40
    ctx->r2 = ctx->r3 & 0X40;
    // 0x8005A868: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005A86C: lhu         $v0, -0x3DAA($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3DAA);
    // 0x8005A870: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8005A874: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8005A878: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005A87C: sh          $v0, -0x3DAA($at)
    MEM_H(-0X3DAA, ctx->r1) = ctx->r2;
    // 0x8005A880: andi        $v0, $v1, 0x40
    ctx->r2 = ctx->r3 & 0X40;
L_8005A884:
    // 0x8005A884: beq         $v0, $zero, L_8005A8A4
    if (ctx->r2 == 0) {
        // 0x8005A888: nop
    
            goto L_8005A8A4;
    }
    // 0x8005A888: nop

    // 0x8005A88C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005A890: lhu         $v0, -0x3DAA($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3DAA);
    // 0x8005A894: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8005A898: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8005A89C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005A8A0: sh          $v0, -0x3DAA($at)
    MEM_H(-0X3DAA, ctx->r1) = ctx->r2;
L_8005A8A4:
    // 0x8005A8A4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005A8A8: lh          $v0, -0x3DAA($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X3DAA);
    // 0x8005A8AC: bgez        $v0, L_8005A8CC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8005A8B0: slti        $v0, $v0, 0x5
        ctx->r2 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
            goto L_8005A8CC;
    }
    // 0x8005A8B0: slti        $v0, $v0, 0x5
    ctx->r2 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x8005A8B4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8005A8B8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005A8BC: sh          $v0, -0x3DAA($at)
    MEM_H(-0X3DAA, ctx->r1) = ctx->r2;
    // 0x8005A8C0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005A8C4: lh          $v0, -0x3DAA($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X3DAA);
    // 0x8005A8C8: slti        $v0, $v0, 0x5
    ctx->r2 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
L_8005A8CC:
    // 0x8005A8CC: bne         $v0, $zero, L_8005A8DC
    if (ctx->r2 != 0) {
        // 0x8005A8D0: nop
    
            goto L_8005A8DC;
    }
    // 0x8005A8D0: nop

    // 0x8005A8D4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005A8D8: sh          $zero, -0x3DAA($at)
    MEM_H(-0X3DAA, ctx->r1) = 0;
L_8005A8DC:
    // 0x8005A8DC: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8005A8E0: lw          $a1, -0x3DE0($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3DE0);
    // 0x8005A8E4: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x8005A8E8: addiu       $s0, $s0, -0x3DAA
    ctx->r16 = ADD32(ctx->r16, -0X3DAA);
    // 0x8005A8EC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8005A8F0: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8005A8F4: lbu         $v0, -0x14B0($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X14B0);
    // 0x8005A8F8: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    // 0x8005A8FC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8005A900: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8005A904: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8005A908: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8005A90C: lbu         $v1, 0x4EA4($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4EA4);
    // 0x8005A910: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x8005A914: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8005A918: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8005A91C: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x8005A920: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8005A924: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8005A928: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8005A92C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8005A930: lhu         $v1, -0x196C($at)
    ctx->r3 = MEM_HU(ctx->r1, -0X196C);
    // 0x8005A934: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8005A938: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005A93C: beq         $a2, $zero, L_8005A9D0
    if (ctx->r6 == 0) {
        // 0x8005A940: sll         $s1, $v0, 1
        ctx->r17 = S32(ctx->r2 << 1);
            goto L_8005A9D0;
    }
    // 0x8005A940: sll         $s1, $v0, 1
    ctx->r17 = S32(ctx->r2 << 1);
    // 0x8005A944: jal         0x80061798
    // 0x8005A948: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80061798_3CB98(rdram, ctx);
        goto after_0;
    // 0x8005A948: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
    // 0x8005A94C: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
    // 0x8005A950: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8005A954: beq         $v0, $zero, L_8005A970
    if (ctx->r2 == 0) {
        // 0x8005A958: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8005A970;
    }
    // 0x8005A958: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8005A95C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8005A960: addu        $at, $at, $v0
    gpr jr_addend_8005A968 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8005A964: lw          $v0, 0x2628($at)
    ctx->r2 = ADD32(ctx->r1, 0X2628);
    // 0x8005A968: jr          $v0
    // 0x8005A96C: nop

    switch (jr_addend_8005A968 >> 2) {
        case 0: goto L_8005A970; break;
        case 1: goto L_8005A978; break;
        case 2: goto L_8005A990; break;
        case 3: goto L_8005A998; break;
        case 4: goto L_8005A9A0; break;
        default: switch_error(__func__, 0x8005A968, 0x800D2628);
    }
    // 0x8005A96C: nop

L_8005A970:
    // 0x8005A970: j           L_8005A9B4
    // 0x8005A974: addiu       $s0, $zero, 0x99
    ctx->r16 = ADD32(0, 0X99);
        goto L_8005A9B4;
    // 0x8005A974: addiu       $s0, $zero, 0x99
    ctx->r16 = ADD32(0, 0X99);
L_8005A978:
    // 0x8005A978: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005A97C: lw          $v0, -0x3DE0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3DE0);
    // 0x8005A980: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x8005A984: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x8005A988: j           L_8005A9B4
    // 0x8005A98C: lbu         $s0, -0x13D4($s0)
    ctx->r16 = MEM_BU(ctx->r16, -0X13D4);
        goto L_8005A9B4;
    // 0x8005A98C: lbu         $s0, -0x13D4($s0)
    ctx->r16 = MEM_BU(ctx->r16, -0X13D4);
L_8005A990:
    // 0x8005A990: j           L_8005A9B4
    // 0x8005A994: addiu       $s0, $zero, 0x9C
    ctx->r16 = ADD32(0, 0X9C);
        goto L_8005A9B4;
    // 0x8005A994: addiu       $s0, $zero, 0x9C
    ctx->r16 = ADD32(0, 0X9C);
L_8005A998:
    // 0x8005A998: j           L_8005A9B4
    // 0x8005A99C: addiu       $s0, $zero, 0x9D
    ctx->r16 = ADD32(0, 0X9D);
        goto L_8005A9B4;
    // 0x8005A99C: addiu       $s0, $zero, 0x9D
    ctx->r16 = ADD32(0, 0X9D);
L_8005A9A0:
    // 0x8005A9A0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005A9A4: lw          $v0, -0x3DE0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3DE0);
    // 0x8005A9A8: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x8005A9AC: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x8005A9B0: lbu         $s0, -0x13C4($s0)
    ctx->r16 = MEM_BU(ctx->r16, -0X13C4);
L_8005A9B4:
    // 0x8005A9B4: jal         0x8006982C
    // 0x8005A9B8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8006982C_44C2C(rdram, ctx);
        goto after_1;
    // 0x8005A9B8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x8005A9BC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8005A9C0: lw          $a1, 0x5998($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5998);
    // 0x8005A9C4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8005A9C8: jal         0x80061510
    // 0x8005A9CC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_80061510_3C910(rdram, ctx);
        goto after_2;
    // 0x8005A9CC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_2:
L_8005A9D0:
    // 0x8005A9D0: lui         $s0, 0x801E
    ctx->r16 = S32(0X801E << 16);
    // 0x8005A9D4: addiu       $s0, $s0, -0x783A
    ctx->r16 = ADD32(ctx->r16, -0X783A);
    // 0x8005A9D8: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8005A9DC: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x8005A9E0: beq         $v0, $zero, L_8005AA0C
    if (ctx->r2 == 0) {
        // 0x8005A9E4: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8005AA0C;
    }
    // 0x8005A9E4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8005A9E8: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8005A9EC: addiu       $a1, $a1, -0x3E3D
    ctx->r5 = ADD32(ctx->r5, -0X3E3D);
    // 0x8005A9F0: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x8005A9F4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8005A9F8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005A9FC: sh          $v0, -0x3DB0($at)
    MEM_H(-0X3DB0, ctx->r1) = ctx->r2;
    // 0x8005AA00: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8005AA04: jal         0x80061798
    // 0x8005AA08: sb          $v1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r3;
    func_80061798_3CB98(rdram, ctx);
        goto after_3;
    // 0x8005AA08: sb          $v1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r3;
    after_3:
L_8005AA0C:
    // 0x8005AA0C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8005AA10: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8005AA14: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
    // 0x8005AA18: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8005AA1C: beq         $v0, $zero, L_8005AA94
    if (ctx->r2 == 0) {
        // 0x8005AA20: nop
    
            goto L_8005AA94;
    }
    // 0x8005AA20: nop

    // 0x8005AA24: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8005AA28: andi        $v0, $v0, 0x6000
    ctx->r2 = ctx->r2 & 0X6000;
    // 0x8005AA2C: beq         $v0, $zero, L_8005AA94
    if (ctx->r2 == 0) {
        // 0x8005AA30: nop
    
            goto L_8005AA94;
    }
    // 0x8005AA30: nop

    // 0x8005AA34: jal         0x80061798
    // 0x8005AA38: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80061798_3CB98(rdram, ctx);
        goto after_4;
    // 0x8005AA38: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_4:
    // 0x8005AA3C: jal         0x80070E80
    // 0x8005AA40: negu        $a0, $s1
    ctx->r4 = SUB32(0, ctx->r17);
    func_80070E80_4C280(rdram, ctx);
        goto after_5;
    // 0x8005AA40: negu        $a0, $s1
    ctx->r4 = SUB32(0, ctx->r17);
    after_5:
    // 0x8005AA44: beq         $v0, $zero, L_8005AA64
    if (ctx->r2 == 0) {
        // 0x8005AA48: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8005AA64;
    }
    // 0x8005AA48: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8005AA4C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8005AA50: lw          $a1, 0x5998($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5998);
    // 0x8005AA54: jal         0x80061510
    // 0x8005AA58: addiu       $a2, $zero, 0x85
    ctx->r6 = ADD32(0, 0X85);
    func_80061510_3C910(rdram, ctx);
        goto after_6;
    // 0x8005AA58: addiu       $a2, $zero, 0x85
    ctx->r6 = ADD32(0, 0X85);
    after_6:
    // 0x8005AA5C: j           L_8005AA80
    // 0x8005AA60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8005AA80;
    // 0x8005AA60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8005AA64:
    // 0x8005AA64: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8005AA68: lw          $a1, 0x5998($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5998);
    // 0x8005AA6C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005AA70: sw          $s1, -0x3DA8($at)
    MEM_W(-0X3DA8, ctx->r1) = ctx->r17;
    // 0x8005AA74: jal         0x80061510
    // 0x8005AA78: addiu       $a2, $zero, 0x86
    ctx->r6 = ADD32(0, 0X86);
    func_80061510_3C910(rdram, ctx);
        goto after_7;
    // 0x8005AA78: addiu       $a2, $zero, 0x86
    ctx->r6 = ADD32(0, 0X86);
    after_7:
    // 0x8005AA7C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8005AA80:
    // 0x8005AA80: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005AA84: sh          $v0, -0x3DB0($at)
    MEM_H(-0X3DB0, ctx->r1) = ctx->r2;
    // 0x8005AA88: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8005AA8C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005AA90: sh          $v0, -0x3DAC($at)
    MEM_H(-0X3DAC, ctx->r1) = ctx->r2;
L_8005AA94:
    // 0x8005AA94: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8005AA98: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8005AA9C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8005AAA0: jr          $ra
    // 0x8005AAA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8005AAA4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80031938_CD38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80031938: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8003193C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80031940: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80031944: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80031948: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8003194C: jal         0x80032510
    // 0x80031950: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    func_80032510_D910(rdram, ctx);
        goto after_0;
    // 0x80031950: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    after_0:
    // 0x80031954: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80031958: jal         0x800324D0
    // 0x8003195C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_800324D0_D8D0(rdram, ctx);
        goto after_1;
    // 0x8003195C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_1:
    // 0x80031960: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80031964: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x80031968: addiu       $v1, $zero, 0x1000
    ctx->r3 = ADD32(0, 0X1000);
    // 0x8003196C: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x80031970: negu        $v1, $s0
    ctx->r3 = SUB32(0, ctx->r16);
    // 0x80031974: sh          $zero, 0x2($v0)
    MEM_H(0X2, ctx->r2) = 0;
    // 0x80031978: sh          $zero, 0x4($v0)
    MEM_H(0X4, ctx->r2) = 0;
    // 0x8003197C: sh          $zero, 0x6($v0)
    MEM_H(0X6, ctx->r2) = 0;
    // 0x80031980: sh          $a0, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r4;
    // 0x80031984: sh          $v1, 0xA($v0)
    MEM_H(0XA, ctx->r2) = ctx->r3;
    // 0x80031988: sh          $zero, 0xC($v0)
    MEM_H(0XC, ctx->r2) = 0;
    // 0x8003198C: sh          $s0, 0xE($v0)
    MEM_H(0XE, ctx->r2) = ctx->r16;
    // 0x80031990: sh          $a0, 0x10($v0)
    MEM_H(0X10, ctx->r2) = ctx->r4;
    // 0x80031994: sw          $zero, 0x14($v0)
    MEM_W(0X14, ctx->r2) = 0;
    // 0x80031998: sw          $zero, 0x18($v0)
    MEM_W(0X18, ctx->r2) = 0;
    // 0x8003199C: sw          $zero, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = 0;
    // 0x800319A0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x800319A4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x800319A8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x800319AC: jr          $ra
    // 0x800319B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x800319B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800294F0_48F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800294F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800294F4: lui         $a0, 0x71
    ctx->r4 = S32(0X71 << 16);
    // 0x800294F8: addiu       $a0, $a0, 0x74A0
    ctx->r4 = ADD32(ctx->r4, 0X74A0);
    // 0x800294FC: lui         $a1, 0x71
    ctx->r5 = S32(0X71 << 16);
    // 0x80029500: addiu       $a1, $a1, 0x7850
    ctx->r5 = ADD32(ctx->r5, 0X7850);
    // 0x80029504: lui         $a2, 0x8014
    ctx->r6 = S32(0X8014 << 16);
    // 0x80029508: addiu       $a2, $a2, -0x6FB0
    ctx->r6 = ADD32(ctx->r6, -0X6FB0);
    // 0x8002950C: lui         $v0, 0x8014
    ctx->r2 = S32(0X8014 << 16);
    // 0x80029510: addiu       $v0, $v0, -0x67B0
    ctx->r2 = ADD32(ctx->r2, -0X67B0);
    // 0x80029514: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80029518: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x8002951C: sw          $a2, 0x6F34($at)
    MEM_W(0X6F34, ctx->r1) = ctx->r6;
    // 0x80029520: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80029524: jal         0x80027334
    // 0x80029528: sw          $v0, 0x6F38($at)
    MEM_W(0X6F38, ctx->r1) = ctx->r2;
    func_80027334_2734(rdram, ctx);
        goto after_0;
    // 0x80029528: sw          $v0, 0x6F38($at)
    MEM_W(0X6F38, ctx->r1) = ctx->r2;
    after_0:
    // 0x8002952C: lui         $a2, 0x800A
    ctx->r6 = S32(0X800A << 16);
    // 0x80029530: lw          $a2, 0x6F38($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X6F38);
    // 0x80029534: lui         $a0, 0x71
    ctx->r4 = S32(0X71 << 16);
    // 0x80029538: addiu       $a0, $a0, 0x7850
    ctx->r4 = ADD32(ctx->r4, 0X7850);
    // 0x8002953C: lui         $a1, 0x71
    ctx->r5 = S32(0X71 << 16);
    // 0x80029540: jal         0x80027334
    // 0x80029544: addiu       $a1, $a1, 0x7B60
    ctx->r5 = ADD32(ctx->r5, 0X7B60);
    func_80027334_2734(rdram, ctx);
        goto after_1;
    // 0x80029544: addiu       $a1, $a1, 0x7B60
    ctx->r5 = ADD32(ctx->r5, 0X7B60);
    after_1:
    // 0x80029548: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8002954C: jr          $ra
    // 0x80029550: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80029550: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8004FAEC_2AEEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004FAEC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8004FAF0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8004FAF4: lhu         $s2, 0x3A($sp)
    ctx->r18 = MEM_HU(ctx->r29, 0X3A);
    // 0x8004FAF8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8004FAFC: lhu         $s1, 0x3E($sp)
    ctx->r17 = MEM_HU(ctx->r29, 0X3E);
    // 0x8004FB00: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8004FB04: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x8004FB08: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8004FB0C: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x8004FB10: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8004FB14: lw          $v0, 0x8($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X8);
    // 0x8004FB18: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x8004FB1C: lw          $a1, 0x0($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X0);
    // 0x8004FB20: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x8004FB24: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8004FB28: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x8004FB2C: blez        $v0, L_8004FB70
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8004FB30: subu        $a0, $a1, $a0
        ctx->r4 = SUB32(ctx->r5, ctx->r4);
            goto L_8004FB70;
    }
    // 0x8004FB30: subu        $a0, $a1, $a0
    ctx->r4 = SUB32(ctx->r5, ctx->r4);
    // 0x8004FB34: div         $zero, $a0, $v0
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r2)));
    // 0x8004FB38: bne         $v0, $zero, L_8004FB44
    if (ctx->r2 != 0) {
        // 0x8004FB3C: nop
    
            goto L_8004FB44;
    }
    // 0x8004FB3C: nop

    // 0x8004FB40: break       7
    do_break(2147810112);
L_8004FB44:
    // 0x8004FB44: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8004FB48: bne         $v0, $at, L_8004FB5C
    if (ctx->r2 != ctx->r1) {
        // 0x8004FB4C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8004FB5C;
    }
    // 0x8004FB4C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8004FB50: bne         $a0, $at, L_8004FB5C
    if (ctx->r4 != ctx->r1) {
        // 0x8004FB54: nop
    
            goto L_8004FB5C;
    }
    // 0x8004FB54: nop

    // 0x8004FB58: break       6
    do_break(2147810136);
L_8004FB5C:
    // 0x8004FB5C: mflo        $a0
    ctx->r4 = lo;
    // 0x8004FB60: jal         0x80032554
    // 0x8004FB64: nop

    func_80032554_D954(rdram, ctx);
        goto after_0;
    // 0x8004FB64: nop

    after_0:
    // 0x8004FB68: j           L_8004FBCC
    // 0x8004FB6C: addiu       $a0, $v0, 0x800
    ctx->r4 = ADD32(ctx->r2, 0X800);
        goto L_8004FBCC;
    // 0x8004FB6C: addiu       $a0, $v0, 0x800
    ctx->r4 = ADD32(ctx->r2, 0X800);
L_8004FB70:
    // 0x8004FB70: bgezl       $v0, L_8004FBC0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8004FB74: nor         $v0, $zero, $a0
        ctx->r2 = ~(0 | ctx->r4);
            goto L_8004FBC0;
    }
    goto skip_0;
    // 0x8004FB74: nor         $v0, $zero, $a0
    ctx->r2 = ~(0 | ctx->r4);
    skip_0:
    // 0x8004FB78: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
    // 0x8004FB7C: div         $zero, $a0, $v0
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r2)));
    // 0x8004FB80: bne         $v0, $zero, L_8004FB8C
    if (ctx->r2 != 0) {
        // 0x8004FB84: nop
    
            goto L_8004FB8C;
    }
    // 0x8004FB84: nop

    // 0x8004FB88: break       7
    do_break(2147810184);
L_8004FB8C:
    // 0x8004FB8C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8004FB90: bne         $v0, $at, L_8004FBA4
    if (ctx->r2 != ctx->r1) {
        // 0x8004FB94: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8004FBA4;
    }
    // 0x8004FB94: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8004FB98: bne         $a0, $at, L_8004FBA4
    if (ctx->r4 != ctx->r1) {
        // 0x8004FB9C: nop
    
            goto L_8004FBA4;
    }
    // 0x8004FB9C: nop

    // 0x8004FBA0: break       6
    do_break(2147810208);
L_8004FBA4:
    // 0x8004FBA4: mflo        $a0
    ctx->r4 = lo;
    // 0x8004FBA8: jal         0x80032554
    // 0x8004FBAC: nop

    func_80032554_D954(rdram, ctx);
        goto after_1;
    // 0x8004FBAC: nop

    after_1:
    // 0x8004FBB0: addiu       $v1, $zero, 0x1000
    ctx->r3 = ADD32(0, 0X1000);
    // 0x8004FBB4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8004FBB8: j           L_8004FBCC
    // 0x8004FBBC: andi        $a0, $v1, 0xFFF
    ctx->r4 = ctx->r3 & 0XFFF;
        goto L_8004FBCC;
    // 0x8004FBBC: andi        $a0, $v1, 0xFFF
    ctx->r4 = ctx->r3 & 0XFFF;
L_8004FBC0:
    // 0x8004FBC0: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x8004FBC4: andi        $v0, $v0, 0xC00
    ctx->r2 = ctx->r2 & 0XC00;
    // 0x8004FBC8: ori         $a0, $v0, 0x400
    ctx->r4 = ctx->r2 | 0X400;
L_8004FBCC:
    // 0x8004FBCC: addiu       $v1, $s2, -0x800
    ctx->r3 = ADD32(ctx->r18, -0X800);
    // 0x8004FBD0: subu        $v1, $a0, $v1
    ctx->r3 = SUB32(ctx->r4, ctx->r3);
    // 0x8004FBD4: addu        $v1, $s1, $v1
    ctx->r3 = ADD32(ctx->r17, ctx->r3);
    // 0x8004FBD8: andi        $a1, $v1, 0xFFF
    ctx->r5 = ctx->r3 & 0XFFF;
    // 0x8004FBDC: subu        $a0, $a0, $s3
    ctx->r4 = SUB32(ctx->r4, ctx->r19);
    // 0x8004FBE0: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    // 0x8004FBE4: andi        $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 & 0XFFF;
    // 0x8004FBE8: sll         $v1, $s0, 16
    ctx->r3 = S32(ctx->r16 << 16);
    // 0x8004FBEC: sra         $v1, $v1, 15
    ctx->r3 = S32(SIGNED(ctx->r3) >> 15);
    // 0x8004FBF0: slt         $v1, $v1, $a0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8004FBF4: bne         $v1, $zero, L_8004FC0C
    if (ctx->r3 != 0) {
        // 0x8004FBF8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8004FC0C;
    }
    // 0x8004FBF8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8004FBFC: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x8004FC00: sra         $v0, $v0, 15
    ctx->r2 = S32(SIGNED(ctx->r2) >> 15);
    // 0x8004FC04: slt         $v0, $v0, $a1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8004FC08: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
L_8004FC0C:
    // 0x8004FC0C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8004FC10: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8004FC14: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8004FC18: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8004FC1C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8004FC20: jr          $ra
    // 0x8004FC24: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8004FC24: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80093210_6E610(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80093210: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80093214: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80093218: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8009321C: jal         0x80093FC0
    // 0x80093220: addiu       $a0, $a0, -0xE60
    ctx->r4 = ADD32(ctx->r4, -0XE60);
    func_80093FC0_6F3C0(rdram, ctx);
        goto after_0;
    // 0x80093220: addiu       $a0, $a0, -0xE60
    ctx->r4 = ADD32(ctx->r4, -0XE60);
    after_0:
    // 0x80093224: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80093228: jr          $ra
    // 0x8009322C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8009322C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800444D8_1F8D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800444D8: addiu       $v0, $zero, 0x45
    ctx->r2 = ADD32(0, 0X45);
    // 0x800444DC: beq         $a1, $v0, L_8004454C
    if (ctx->r5 == ctx->r2) {
        // 0x800444E0: addu        $a2, $a0, $zero
        ctx->r6 = ADD32(ctx->r4, 0);
            goto L_8004454C;
    }
    // 0x800444E0: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x800444E4: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x800444E8: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x800444EC: lhu         $v1, -0x26B4($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X26B4);
    // 0x800444F0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800444F4: lhu         $v1, 0x2($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X2);
    // 0x800444F8: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
    // 0x800444FC: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80044500: lhu         $a0, -0x26B6($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X26B6);
    // 0x80044504: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80044508: sra         $t5, $v0, 16
    ctx->r13 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8004450C: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x80044510: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x80044514: sh          $v1, 0x2($a2)
    MEM_H(0X2, ctx->r6) = ctx->r3;
    // 0x80044518: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8004451C: lhu         $a0, -0x26B0($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X26B0);
    // 0x80044520: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80044524: sra         $t4, $v1, 16
    ctx->r12 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80044528: lhu         $v1, 0x6($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X6);
    // 0x8004452C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80044530: sh          $v0, 0x4($a2)
    MEM_H(0X4, ctx->r6) = ctx->r2;
    // 0x80044534: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80044538: lhu         $a0, -0x26B2($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X26B2);
    // 0x8004453C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80044540: sra         $t3, $v0, 16
    ctx->r11 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80044544: j           L_800445B0
    // 0x80044548: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
        goto L_800445B0;
    // 0x80044548: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
L_8004454C:
    // 0x8004454C: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x80044550: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x80044554: lhu         $v1, -0x26B4($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X26B4);
    // 0x80044558: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8004455C: lhu         $v1, 0x2($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X2);
    // 0x80044560: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
    // 0x80044564: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80044568: lhu         $a0, -0x26B6($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X26B6);
    // 0x8004456C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80044570: sra         $t5, $v0, 16
    ctx->r13 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80044574: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x80044578: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8004457C: sh          $v1, 0x2($a2)
    MEM_H(0X2, ctx->r6) = ctx->r3;
    // 0x80044580: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80044584: lhu         $a0, -0x26B0($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X26B0);
    // 0x80044588: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8004458C: sra         $t4, $v1, 16
    ctx->r12 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80044590: lhu         $v1, 0x6($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X6);
    // 0x80044594: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80044598: sh          $v0, 0x4($a2)
    MEM_H(0X4, ctx->r6) = ctx->r2;
    // 0x8004459C: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x800445A0: lhu         $a0, -0x26B2($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X26B2);
    // 0x800445A4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x800445A8: sra         $t3, $v0, 16
    ctx->r11 = S32(SIGNED(ctx->r2) >> 16);
    // 0x800445AC: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
L_800445B0:
    // 0x800445B0: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x800445B4: sra         $t1, $v0, 16
    ctx->r9 = S32(SIGNED(ctx->r2) >> 16);
    // 0x800445B8: sh          $v1, 0x6($a2)
    MEM_H(0X6, ctx->r6) = ctx->r3;
    // 0x800445BC: lui         $t2, 0x801E
    ctx->r10 = S32(0X801E << 16);
    // 0x800445C0: lh          $t2, -0x7154($t2)
    ctx->r10 = MEM_H(ctx->r10, -0X7154);
    // 0x800445C4: subu        $t0, $t4, $t5
    ctx->r8 = SUB32(ctx->r12, ctx->r13);
    // 0x800445C8: subu        $v0, $t2, $t3
    ctx->r2 = SUB32(ctx->r10, ctx->r11);
    // 0x800445CC: mult        $v0, $t0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800445D0: mflo        $v0
    ctx->r2 = lo;
    // 0x800445D4: subu        $a1, $t1, $t3
    ctx->r5 = SUB32(ctx->r9, ctx->r11);
    // 0x800445D8: nop

    // 0x800445DC: div         $zero, $v0, $a1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r5)));
    // 0x800445E0: bne         $a1, $zero, L_800445EC
    if (ctx->r5 != 0) {
        // 0x800445E4: nop
    
            goto L_800445EC;
    }
    // 0x800445E4: nop

    // 0x800445E8: break       7
    do_break(2147763688);
L_800445EC:
    // 0x800445EC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800445F0: bne         $a1, $at, L_80044604
    if (ctx->r5 != ctx->r1) {
        // 0x800445F4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80044604;
    }
    // 0x800445F4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800445F8: bne         $v0, $at, L_80044604
    if (ctx->r2 != ctx->r1) {
        // 0x800445FC: nop
    
            goto L_80044604;
    }
    // 0x800445FC: nop

    // 0x80044600: break       6
    do_break(2147763712);
L_80044604:
    // 0x80044604: mflo        $v0
    ctx->r2 = lo;
    // 0x80044608: subu        $v0, $t4, $v0
    ctx->r2 = SUB32(ctx->r12, ctx->r2);
    // 0x8004460C: addiu       $a3, $v0, 0x4
    ctx->r7 = ADD32(ctx->r2, 0X4);
    // 0x80044610: slt         $v0, $t4, $a3
    ctx->r2 = SIGNED(ctx->r12) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x80044614: bnel        $v0, $zero, L_8004461C
    if (ctx->r2 != 0) {
        // 0x80044618: addu        $a3, $t4, $zero
        ctx->r7 = ADD32(ctx->r12, 0);
            goto L_8004461C;
    }
    goto skip_0;
    // 0x80044618: addu        $a3, $t4, $zero
    ctx->r7 = ADD32(ctx->r12, 0);
    skip_0:
L_8004461C:
    // 0x8004461C: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x80044620: lh          $a0, -0x7158($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X7158);
    // 0x80044624: subu        $v0, $a0, $t5
    ctx->r2 = SUB32(ctx->r4, ctx->r13);
    // 0x80044628: mult        $v0, $a1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004462C: mflo        $v0
    ctx->r2 = lo;
    // 0x80044630: nop

    // 0x80044634: nop

    // 0x80044638: div         $zero, $v0, $t0
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r8))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r8)));
    // 0x8004463C: bne         $t0, $zero, L_80044648
    if (ctx->r8 != 0) {
        // 0x80044640: nop
    
            goto L_80044648;
    }
    // 0x80044640: nop

    // 0x80044644: break       7
    do_break(2147763780);
L_80044648:
    // 0x80044648: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8004464C: bne         $t0, $at, L_80044660
    if (ctx->r8 != ctx->r1) {
        // 0x80044650: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80044660;
    }
    // 0x80044650: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80044654: bne         $v0, $at, L_80044660
    if (ctx->r2 != ctx->r1) {
        // 0x80044658: nop
    
            goto L_80044660;
    }
    // 0x80044658: nop

    // 0x8004465C: break       6
    do_break(2147763804);
L_80044660:
    // 0x80044660: mflo        $v0
    ctx->r2 = lo;
    // 0x80044664: subu        $v0, $t1, $v0
    ctx->r2 = SUB32(ctx->r9, ctx->r2);
    // 0x80044668: addiu       $a2, $v0, 0x4
    ctx->r6 = ADD32(ctx->r2, 0X4);
    // 0x8004466C: slt         $v0, $t1, $a2
    ctx->r2 = SIGNED(ctx->r9) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80044670: bnel        $v0, $zero, L_80044678
    if (ctx->r2 != 0) {
        // 0x80044674: addu        $a2, $t1, $zero
        ctx->r6 = ADD32(ctx->r9, 0);
            goto L_80044678;
    }
    goto skip_1;
    // 0x80044674: addu        $a2, $t1, $zero
    ctx->r6 = ADD32(ctx->r9, 0);
    skip_1:
L_80044678:
    // 0x80044678: slt         $v0, $t5, $a0
    ctx->r2 = SIGNED(ctx->r13) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8004467C: beq         $v0, $zero, L_80044770
    if (ctx->r2 == 0) {
        // 0x80044680: slt         $v0, $a0, $a3
        ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r7) ? 1 : 0;
            goto L_80044770;
    }
    // 0x80044680: slt         $v0, $a0, $a3
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x80044684: beq         $v0, $zero, L_80044770
    if (ctx->r2 == 0) {
        // 0x80044688: slt         $v0, $t3, $t2
        ctx->r2 = SIGNED(ctx->r11) < SIGNED(ctx->r10) ? 1 : 0;
            goto L_80044770;
    }
    // 0x80044688: slt         $v0, $t3, $t2
    ctx->r2 = SIGNED(ctx->r11) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x8004468C: beq         $v0, $zero, L_80044770
    if (ctx->r2 == 0) {
        // 0x80044690: slt         $v0, $t2, $a2
        ctx->r2 = SIGNED(ctx->r10) < SIGNED(ctx->r6) ? 1 : 0;
            goto L_80044770;
    }
    // 0x80044690: slt         $v0, $t2, $a2
    ctx->r2 = SIGNED(ctx->r10) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80044694: beq         $v0, $zero, L_80044774
    if (ctx->r2 == 0) {
        // 0x80044698: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80044774;
    }
    // 0x80044698: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8004469C: lui         $t2, 0x8020
    ctx->r10 = S32(0X8020 << 16);
    // 0x800446A0: lh          $t2, 0x47E0($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X47E0);
    // 0x800446A4: subu        $v1, $t2, $t3
    ctx->r3 = SUB32(ctx->r10, ctx->r11);
    // 0x800446A8: mult        $v1, $t0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800446AC: mflo        $v1
    ctx->r3 = lo;
    // 0x800446B0: nop

    // 0x800446B4: nop

    // 0x800446B8: div         $zero, $v1, $a1
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r5)));
    // 0x800446BC: bne         $a1, $zero, L_800446C8
    if (ctx->r5 != 0) {
        // 0x800446C0: nop
    
            goto L_800446C8;
    }
    // 0x800446C0: nop

    // 0x800446C4: break       7
    do_break(2147763908);
L_800446C8:
    // 0x800446C8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800446CC: bne         $a1, $at, L_800446E0
    if (ctx->r5 != ctx->r1) {
        // 0x800446D0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800446E0;
    }
    // 0x800446D0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800446D4: bne         $v1, $at, L_800446E0
    if (ctx->r3 != ctx->r1) {
        // 0x800446D8: nop
    
            goto L_800446E0;
    }
    // 0x800446D8: nop

    // 0x800446DC: break       6
    do_break(2147763932);
L_800446E0:
    // 0x800446E0: mflo        $v1
    ctx->r3 = lo;
    // 0x800446E4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x800446E8: lh          $a0, 0x47DC($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X47DC);
    // 0x800446EC: subu        $v0, $a0, $t5
    ctx->r2 = SUB32(ctx->r4, ctx->r13);
    // 0x800446F0: mult        $v0, $a1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800446F4: mflo        $v0
    ctx->r2 = lo;
    // 0x800446F8: nop

    // 0x800446FC: nop

    // 0x80044700: div         $zero, $v0, $t0
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r8))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r8)));
    // 0x80044704: bne         $t0, $zero, L_80044710
    if (ctx->r8 != 0) {
        // 0x80044708: nop
    
            goto L_80044710;
    }
    // 0x80044708: nop

    // 0x8004470C: break       7
    do_break(2147763980);
L_80044710:
    // 0x80044710: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80044714: bne         $t0, $at, L_80044728
    if (ctx->r8 != ctx->r1) {
        // 0x80044718: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80044728;
    }
    // 0x80044718: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8004471C: bne         $v0, $at, L_80044728
    if (ctx->r2 != ctx->r1) {
        // 0x80044720: nop
    
            goto L_80044728;
    }
    // 0x80044720: nop

    // 0x80044724: break       6
    do_break(2147764004);
L_80044728:
    // 0x80044728: mflo        $v0
    ctx->r2 = lo;
    // 0x8004472C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80044730: sh          $t5, -0x3FAC($at)
    MEM_H(-0X3FAC, ctx->r1) = ctx->r13;
    // 0x80044734: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80044738: sh          $a3, -0x72D0($at)
    MEM_H(-0X72D0, ctx->r1) = ctx->r7;
    // 0x8004473C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80044740: sh          $t3, -0x3FA8($at)
    MEM_H(-0X3FA8, ctx->r1) = ctx->r11;
    // 0x80044744: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80044748: sh          $a2, -0x72CC($at)
    MEM_H(-0X72CC, ctx->r1) = ctx->r6;
    // 0x8004474C: subu        $a3, $t4, $v1
    ctx->r7 = SUB32(ctx->r12, ctx->r3);
    // 0x80044750: slt         $a0, $a0, $a3
    ctx->r4 = SIGNED(ctx->r4) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x80044754: bne         $a0, $zero, L_80044768
    if (ctx->r4 != 0) {
        // 0x80044758: subu        $a2, $t1, $v0
        ctx->r6 = SUB32(ctx->r9, ctx->r2);
            goto L_80044768;
    }
    // 0x80044758: subu        $a2, $t1, $v0
    ctx->r6 = SUB32(ctx->r9, ctx->r2);
    // 0x8004475C: slt         $v0, $t2, $a2
    ctx->r2 = SIGNED(ctx->r10) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80044760: beq         $v0, $zero, L_80044774
    if (ctx->r2 == 0) {
        // 0x80044764: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80044774;
    }
    // 0x80044764: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80044768:
    // 0x80044768: j           L_80044774
    // 0x8004476C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80044774;
    // 0x8004476C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80044770:
    // 0x80044770: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80044774:
    // 0x80044774: jr          $ra
    // 0x80044778: nop

    TRACE_RETURN()
    return;
    // 0x80044778: nop

;}
RECOMP_FUNC void func_80026500_1900(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80026500: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80026504: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80026508: lbu         $s6, 0x4B($sp)
    ctx->r22 = MEM_BU(ctx->r29, 0X4B);
    // 0x8002650C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80026510: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x80026514: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80026518: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x8002651C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80026520: addu        $s5, $a2, $zero
    ctx->r21 = ADD32(ctx->r6, 0);
    // 0x80026524: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80026528: addu        $s0, $a3, $zero
    ctx->r16 = ADD32(ctx->r7, 0);
    // 0x8002652C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80026530: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x80026534: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80026538: addiu       $s1, $s0, 0x38
    ctx->r17 = ADD32(ctx->r16, 0X38);
    // 0x8002653C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80026540: jal         0x80025E1C
    // 0x80026544: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80025E1C_121C(rdram, ctx);
        goto after_0;
    // 0x80026544: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x80026548: beq         $s0, $zero, L_80026554
    if (ctx->r16 == 0) {
        // 0x8002654C: addu        $a1, $v0, $zero
        ctx->r5 = ADD32(ctx->r2, 0);
            goto L_80026554;
    }
    // 0x8002654C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80026550: addiu       $s2, $a1, 0x38
    ctx->r18 = ADD32(ctx->r5, 0X38);
L_80026554:
    // 0x80026554: beq         $a1, $zero, L_800265E8
    if (ctx->r5 == 0) {
        // 0x80026558: nop
    
            goto L_800265E8;
    }
    // 0x80026558: nop

    // 0x8002655C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80026560: lw          $v0, -0x46DC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X46DC);
    // 0x80026564: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x80026568: sw          $v0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r2;
    // 0x8002656C: sw          $s3, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->r19;
    // 0x80026570: sw          $s4, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r20;
    // 0x80026574: sw          $s5, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r21;
    // 0x80026578: sw          $s2, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->r18;
    // 0x8002657C: sw          $zero, 0x24($a1)
    MEM_W(0X24, ctx->r5) = 0;
    // 0x80026580: sw          $s1, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->r17;
    // 0x80026584: sw          $v1, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r3;
    // 0x80026588: lhu         $v0, 0x2C($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X2C);
    // 0x8002658C: sb          $s6, 0x34($a1)
    MEM_B(0X34, ctx->r5) = ctx->r22;
    // 0x80026590: sb          $zero, 0x35($a1)
    MEM_B(0X35, ctx->r5) = 0;
    // 0x80026594: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80026598: lw          $v1, -0x46DC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X46DC);
    // 0x8002659C: sh          $zero, 0x30($a1)
    MEM_H(0X30, ctx->r5) = 0;
    // 0x800265A0: sh          $zero, 0x2E($a1)
    MEM_H(0X2E, ctx->r5) = 0;
    // 0x800265A4: sh          $zero, 0x32($a1)
    MEM_H(0X32, ctx->r5) = 0;
    // 0x800265A8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800265AC: sh          $v0, 0x2C($a1)
    MEM_H(0X2C, ctx->r5) = ctx->r2;
    // 0x800265B0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800265B4: sw          $v1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r3;
    // 0x800265B8: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x800265BC: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x800265C0: bnel        $v1, $zero, L_800265C8
    if (ctx->r3 != 0) {
        // 0x800265C4: sw          $a1, 0x4($v1)
        MEM_W(0X4, ctx->r3) = ctx->r5;
            goto L_800265C8;
    }
    goto skip_0;
    // 0x800265C4: sw          $a1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r5;
    skip_0:
L_800265C8:
    // 0x800265C8: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x800265CC: lw          $v0, 0x3570($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3570);
    // 0x800265D0: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x800265D4: lw          $v1, -0x46DC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X46DC);
    // 0x800265D8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800265DC: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    // 0x800265E0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800265E4: sw          $v0, 0x3570($at)
    MEM_W(0X3570, ctx->r1) = ctx->r2;
L_800265E8:
    // 0x800265E8: lb          $v0, 0x34($a1)
    ctx->r2 = MEM_B(ctx->r5, 0X34);
    // 0x800265EC: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x800265F0: addiu       $v1, $v1, 0x34F0
    ctx->r3 = ADD32(ctx->r3, 0X34F0);
    // 0x800265F4: sw          $zero, 0x8($a1)
    MEM_W(0X8, ctx->r5) = 0;
    // 0x800265F8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800265FC: addu        $v1, $v0, $v1
    ctx->r3 = ADD32(ctx->r2, ctx->r3);
    // 0x80026600: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80026604: beql        $v0, $zero, L_8002660C
    if (ctx->r2 == 0) {
        // 0x80026608: sw          $a1, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r5;
            goto L_8002660C;
    }
    goto skip_1;
    // 0x80026608: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    skip_1:
L_8002660C:
    // 0x8002660C: lb          $v0, 0x34($a1)
    ctx->r2 = MEM_B(ctx->r5, 0X34);
    // 0x80026610: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80026614: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80026618: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8002661C: lw          $v0, 0x3530($at)
    ctx->r2 = MEM_W(ctx->r1, 0X3530);
    // 0x80026620: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x80026624: addiu       $v1, $v1, 0x3530
    ctx->r3 = ADD32(ctx->r3, 0X3530);
    // 0x80026628: bnel        $v0, $zero, L_80026630
    if (ctx->r2 != 0) {
        // 0x8002662C: sw          $a1, 0x8($v0)
        MEM_W(0X8, ctx->r2) = ctx->r5;
            goto L_80026630;
    }
    goto skip_2;
    // 0x8002662C: sw          $a1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r5;
    skip_2:
L_80026630:
    // 0x80026630: lb          $v0, 0x34($a1)
    ctx->r2 = MEM_B(ctx->r5, 0X34);
    // 0x80026634: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80026638: lw          $a0, -0x46DC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X46DC);
    // 0x8002663C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80026640: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80026644: sw          $a1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r5;
    // 0x80026648: lhu         $v1, 0x32($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X32);
    // 0x8002664C: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    // 0x80026650: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80026654: sh          $v1, 0x32($a0)
    MEM_H(0X32, ctx->r4) = ctx->r3;
    // 0x80026658: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8002665C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80026660: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80026664: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80026668: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8002666C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80026670: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80026674: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80026678: jr          $ra
    // 0x8002667C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8002667C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8007BEA0_572A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007BEA0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8007BEA4: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    // 0x8007BEA8: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8007BEAC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8007BEB0: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x8007BEB4: addiu       $v1, $v1, -0x2CC0
    ctx->r3 = ADD32(ctx->r3, -0X2CC0);
    // 0x8007BEB8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8007BEBC: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8007BEC0: lw          $v1, 0x10($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X10);
    // 0x8007BEC4: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8007BEC8: lw          $v1, 0x14($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X14);
    // 0x8007BECC: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    // 0x8007BED0: lw          $v1, 0x18($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X18);
    // 0x8007BED4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x8007BED8: lw          $v1, 0x1C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1C);
    // 0x8007BEDC: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x8007BEE0: lw          $v1, 0x20($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X20);
    // 0x8007BEE4: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    // 0x8007BEE8: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x8007BEEC: lw          $a1, 0x4($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4);
    // 0x8007BEF0: lw          $a2, 0x8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X8);
    // 0x8007BEF4: jal         0x80027388
    // 0x8007BEF8: lw          $a3, 0xC($v0)
    ctx->r7 = MEM_W(ctx->r2, 0XC);
    Overlay_Loader(rdram, ctx);
        goto after_0;
    // 0x8007BEF8: lw          $a3, 0xC($v0)
    ctx->r7 = MEM_W(ctx->r2, 0XC);
    after_0:
    // 0x8007BEFC: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8007BF00: jr          $ra
    // 0x8007BF04: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8007BF04: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80067194_42594(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80067194: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80067198: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8006719C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x800671A0: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x800671A4: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x800671A8: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x800671AC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x800671B0: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x800671B4: lui         $a2, 0x100
    ctx->r6 = S32(0X100 << 16);
    // 0x800671B8: and         $v0, $a1, $a2
    ctx->r2 = ctx->r5 & ctx->r6;
    // 0x800671BC: bne         $v0, $zero, L_800671E4
    if (ctx->r2 != 0) {
        // 0x800671C0: lui         $v1, 0xFFFF
        ctx->r3 = S32(0XFFFF << 16);
            goto L_800671E4;
    }
    // 0x800671C0: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x800671C4: ori         $v1, $v1, 0x7FFF
    ctx->r3 = ctx->r3 | 0X7FFF;
    // 0x800671C8: lbu         $a0, 0x79($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X79);
    // 0x800671CC: or          $v0, $a1, $a2
    ctx->r2 = ctx->r5 | ctx->r6;
    // 0x800671D0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x800671D4: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x800671D8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x800671DC: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x800671E0: sb          $a0, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r4;
L_800671E4:
    // 0x800671E4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800671E8: lui         $v1, 0xFFBF
    ctx->r3 = S32(0XFFBF << 16);
    // 0x800671EC: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x800671F0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x800671F4: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x800671F8: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x800671FC: lb          $v0, -0x765B($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X765B);
    // 0x80067200: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x80067204: lb          $a0, -0x7597($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X7597);
    // 0x80067208: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8006720C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80067210: lbu         $v1, 0x4E00($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4E00);
    // 0x80067214: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80067218: lbu         $v0, 0x5410($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X5410);
    // 0x8006721C: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80067220: addiu       $s1, $s1, 0x4E04
    ctx->r17 = ADD32(ctx->r17, 0X4E04);
    // 0x80067224: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80067228: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8006722C: sw          $v1, 0x77F0($at)
    MEM_W(0X77F0, ctx->r1) = ctx->r3;
    // 0x80067230: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80067234: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80067238: lbu         $v0, 0x4E04($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X4E04);
    // 0x8006723C: lh          $a0, 0x4($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X4);
    // 0x80067240: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80067244: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80067248: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8006724C: sw          $v1, 0x77F0($at)
    MEM_W(0X77F0, ctx->r1) = ctx->r3;
    // 0x80067250: bgtz        $a0, L_800673E8
    if (SIGNED(ctx->r4) > 0) {
        // 0x80067254: addu        $v0, $a0, $zero
        ctx->r2 = ADD32(ctx->r4, 0);
            goto L_800673E8;
    }
    // 0x80067254: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x80067258: jal         0x8004B5E8
    // 0x8006725C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8004B5E8_269E8(rdram, ctx);
        goto after_0;
    // 0x8006725C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
    // 0x80067260: jal         0x8004B5E8
    // 0x80067264: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8004B5E8_269E8(rdram, ctx);
        goto after_1;
    // 0x80067264: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x80067268: lw          $v0, 0xB8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XB8);
    // 0x8006726C: andi        $v0, $v0, 0x8008
    ctx->r2 = ctx->r2 & 0X8008;
    // 0x80067270: beq         $v0, $zero, L_8006728C
    if (ctx->r2 == 0) {
        // 0x80067274: addiu       $a0, $zero, 0x83
        ctx->r4 = ADD32(0, 0X83);
            goto L_8006728C;
    }
    // 0x80067274: addiu       $a0, $zero, 0x83
    ctx->r4 = ADD32(0, 0X83);
    // 0x80067278: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8006727C: jal         0x8002A2F8
    // 0x80067280: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_2;
    // 0x80067280: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x80067284: j           L_800672F4
    // 0x80067288: lui         $a2, 0xFEFF
    ctx->r6 = S32(0XFEFF << 16);
        goto L_800672F4;
    // 0x80067288: lui         $a2, 0xFEFF
    ctx->r6 = S32(0XFEFF << 16);
L_8006728C:
    // 0x8006728C: lhu         $v0, 0xBA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XBA);
    // 0x80067290: andi        $v0, $v0, 0x6000
    ctx->r2 = ctx->r2 & 0X6000;
    // 0x80067294: beq         $v0, $zero, L_80067368
    if (ctx->r2 == 0) {
        // 0x80067298: addiu       $a0, $zero, 0x82
        ctx->r4 = ADD32(0, 0X82);
            goto L_80067368;
    }
    // 0x80067298: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
    // 0x8006729C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800672A0: jal         0x8002A2F8
    // 0x800672A4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_3;
    // 0x800672A4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x800672A8: lb          $v0, 0x71($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X71);
    // 0x800672AC: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x800672B0: lbu         $v1, 0x5410($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X5410);
    // 0x800672B4: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x800672B8: lbu         $a0, -0x72EE($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X72EE);
    // 0x800672BC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800672C0: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x800672C4: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x800672C8: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x800672CC: lbu         $v1, 0x4E00($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4E00);
    // 0x800672D0: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x800672D4: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
    // 0x800672D8: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x800672DC: lbu         $v0, -0x72EE($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X72EE);
    // 0x800672E0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800672E4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800672E8: jal         0x800570AC
    // 0x800672EC: sb          $a0, 0x4E00($at)
    MEM_B(0X4E00, ctx->r1) = ctx->r4;
    func_800570AC_324AC(rdram, ctx);
        goto after_4;
    // 0x800672EC: sb          $a0, 0x4E00($at)
    MEM_B(0X4E00, ctx->r1) = ctx->r4;
    after_4:
    // 0x800672F0: lui         $a2, 0xFEFF
    ctx->r6 = S32(0XFEFF << 16);
L_800672F4:
    // 0x800672F4: lw          $s3, 0x44($s0)
    ctx->r19 = MEM_W(ctx->r16, 0X44);
    // 0x800672F8: lbu         $v0, 0x71($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X71);
    // 0x800672FC: lw          $a0, 0x6C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6C);
    // 0x80067300: ori         $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 | 0XFFFF;
    // 0x80067304: lui         $a1, 0xFFFD
    ctx->r5 = S32(0XFFFD << 16);
    // 0x80067308: sb          $v0, 0x79($s0)
    MEM_B(0X79, ctx->r16) = ctx->r2;
    // 0x8006730C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80067310: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80067314: lw          $v1, 0x3FF0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3FF0);
    // 0x80067318: ori         $a1, $a1, 0x7FFF
    ctx->r5 = ctx->r5 | 0X7FFF;
    // 0x8006731C: and         $v0, $v0, $a2
    ctx->r2 = ctx->r2 & ctx->r6;
    // 0x80067320: and         $v1, $v1, $a1
    ctx->r3 = ctx->r3 & ctx->r5;
    // 0x80067324: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80067328: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8006732C: sw          $v1, 0x3FF0($at)
    MEM_W(0X3FF0, ctx->r1) = ctx->r3;
    // 0x80067330: lbu         $s1, 0x4($a0)
    ctx->r17 = MEM_BU(ctx->r4, 0X4);
    // 0x80067334: lbu         $s2, 0x3($a0)
    ctx->r18 = MEM_BU(ctx->r4, 0X3);
    // 0x80067338: lw          $v0, 0x6C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X6C);
    // 0x8006733C: sh          $s1, 0xC2($s0)
    MEM_H(0XC2, ctx->r16) = ctx->r17;
    // 0x80067340: lbu         $a0, 0x1($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X1);
    // 0x80067344: lbu         $a2, 0x2($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X2);
    // 0x80067348: jal         0x80061510
    // 0x8006734C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_80061510_3C910(rdram, ctx);
        goto after_5;
    // 0x8006734C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_5:
    // 0x80067350: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80067354: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80067358: jal         0x80061510
    // 0x8006735C: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_80061510_3C910(rdram, ctx);
        goto after_6;
    // 0x8006735C: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_6:
    // 0x80067360: j           L_800673F4
    // 0x80067364: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_800673F4;
    // 0x80067364: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80067368:
    // 0x80067368: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x8006736C: lbu         $v1, 0x5410($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X5410);
    // 0x80067370: beq         $v1, $zero, L_800673B8
    if (ctx->r3 == 0) {
        // 0x80067374: nop
    
            goto L_800673B8;
    }
    // 0x80067374: nop

    // 0x80067378: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8006737C: lbu         $v0, -0x11D0($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X11D0);
    // 0x80067380: sltu        $v0, $v1, $v0
    ctx->r2 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x80067384: beq         $v0, $zero, L_800673A0
    if (ctx->r2 == 0) {
        // 0x80067388: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_800673A0;
    }
    // 0x80067388: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8006738C: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    // 0x80067390: jal         0x8004B6A0
    // 0x80067394: ori         $a1, $a1, 0x18
    ctx->r5 = ctx->r5 | 0X18;
    func_8004B6A0_26AA0(rdram, ctx);
        goto after_7;
    // 0x80067394: ori         $a1, $a1, 0x18
    ctx->r5 = ctx->r5 | 0X18;
    after_7:
    // 0x80067398: j           L_800673D4
    // 0x8006739C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_800673D4;
    // 0x8006739C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_800673A0:
    // 0x800673A0: beq         $v1, $zero, L_800673B8
    if (ctx->r3 == 0) {
        // 0x800673A4: lui         $a1, 0x2
        ctx->r5 = S32(0X2 << 16);
            goto L_800673B8;
    }
    // 0x800673A4: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    // 0x800673A8: jal         0x8004B6A0
    // 0x800673AC: ori         $a1, $a1, 0x18
    ctx->r5 = ctx->r5 | 0X18;
    func_8004B6A0_26AA0(rdram, ctx);
        goto after_8;
    // 0x800673AC: ori         $a1, $a1, 0x18
    ctx->r5 = ctx->r5 | 0X18;
    after_8:
    // 0x800673B0: j           L_800673F4
    // 0x800673B4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_800673F4;
    // 0x800673B4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_800673B8:
    // 0x800673B8: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x800673BC: lbu         $v0, 0x5410($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X5410);
    // 0x800673C0: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x800673C4: lbu         $v1, -0x11D0($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X11D0);
    // 0x800673C8: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x800673CC: beq         $v0, $zero, L_800673F0
    if (ctx->r2 == 0) {
        // 0x800673D0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_800673F0;
    }
    // 0x800673D0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_800673D4:
    // 0x800673D4: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    // 0x800673D8: jal         0x8004B6A0
    // 0x800673DC: ori         $a1, $a1, 0x19
    ctx->r5 = ctx->r5 | 0X19;
    func_8004B6A0_26AA0(rdram, ctx);
        goto after_9;
    // 0x800673DC: ori         $a1, $a1, 0x19
    ctx->r5 = ctx->r5 | 0X19;
    after_9:
    // 0x800673E0: j           L_800673F4
    // 0x800673E4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_800673F4;
    // 0x800673E4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_800673E8:
    // 0x800673E8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x800673EC: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_800673F0:
    // 0x800673F0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_800673F4:
    // 0x800673F4: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x800673F8: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x800673FC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80067400: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80067404: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80067408: jr          $ra
    // 0x8006740C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8006740C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800260B0_14B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800260B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800260B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x800260B8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x800260BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800260C0: jal         0x80094460
    // 0x800260C4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osSetIntMask_recomp(rdram, ctx);
        goto after_0;
    // 0x800260C4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x800260C8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x800260CC: jal         0x80094460
    // 0x800260D0: sh          $zero, -0x24($s0)
    MEM_H(-0X24, ctx->r16) = 0;
    osSetIntMask_recomp(rdram, ctx);
        goto after_1;
    // 0x800260D0: sh          $zero, -0x24($s0)
    MEM_H(-0X24, ctx->r16) = 0;
    after_1:
    // 0x800260D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800260D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x800260DC: jr          $ra
    // 0x800260E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x800260E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8006D7EC_48BEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006D7EC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8006D7F0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8006D7F4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8006D7F8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8006D7FC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8006D800: lhu         $s1, 0x11C($s0)
    ctx->r17 = MEM_HU(ctx->r16, 0X11C);
    // 0x8006D804: lb          $v1, 0x112($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X112);
    // 0x8006D808: lhu         $a2, 0x11E($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X11E);
    // 0x8006D80C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006D810: beq         $v1, $v0, L_8006D97C
    if (ctx->r3 == ctx->r2) {
        // 0x8006D814: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8006D97C;
    }
    // 0x8006D814: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8006D818: beql        $v0, $zero, L_8006D830
    if (ctx->r2 == 0) {
        // 0x8006D81C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8006D830;
    }
    goto skip_0;
    // 0x8006D81C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8006D820: beq         $v1, $zero, L_8006D848
    if (ctx->r3 == 0) {
        // 0x8006D824: nop
    
            goto L_8006D848;
    }
    // 0x8006D824: nop

    // 0x8006D828: j           L_8006DFAC
    // 0x8006D82C: nop

        goto L_8006DFAC;
    // 0x8006D82C: nop

L_8006D830:
    // 0x8006D830: beq         $v1, $v0, L_8006DB88
    if (ctx->r3 == ctx->r2) {
        // 0x8006D834: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8006DB88;
    }
    // 0x8006D834: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8006D838: beq         $v1, $v0, L_8006DD68
    if (ctx->r3 == ctx->r2) {
        // 0x8006D83C: nop
    
            goto L_8006DD68;
    }
    // 0x8006D83C: nop

    // 0x8006D840: j           L_8006DFAC
    // 0x8006D844: nop

        goto L_8006DFAC;
    // 0x8006D844: nop

L_8006D848:
    // 0x8006D848: lhu         $a0, 0x124($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X124);
    // 0x8006D84C: lhu         $v1, 0x126($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X126);
    // 0x8006D850: lhu         $a1, 0x12C($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X12C);
    // 0x8006D854: lhu         $v0, 0x12E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X12E);
    // 0x8006D858: lhu         $a2, 0x13C($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X13C);
    // 0x8006D85C: or          $a0, $a0, $v1
    ctx->r4 = ctx->r4 | ctx->r3;
    // 0x8006D860: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
    // 0x8006D864: lhu         $v0, 0x138($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X138);
    // 0x8006D868: lhu         $v1, 0x13A($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X13A);
    // 0x8006D86C: or          $a0, $a0, $a1
    ctx->r4 = ctx->r4 | ctx->r5;
    // 0x8006D870: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x8006D874: or          $v1, $v1, $a2
    ctx->r3 = ctx->r3 | ctx->r6;
    // 0x8006D878: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8006D87C: and         $v0, $s1, $v0
    ctx->r2 = ctx->r17 & ctx->r2;
    // 0x8006D880: beq         $v0, $zero, L_8006D974
    if (ctx->r2 == 0) {
        // 0x8006D884: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8006D974;
    }
    // 0x8006D884: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006D888: jal         0x8006CC14
    // 0x8006D88C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8006CC14_48014(rdram, ctx);
        goto after_0;
    // 0x8006D88C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x8006D890: lhu         $v1, 0x11E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X11E);
    // 0x8006D894: lhu         $v0, 0x138($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X138);
    // 0x8006D898: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8006D89C: beq         $v0, $zero, L_8006D8B4
    if (ctx->r2 == 0) {
        // 0x8006D8A0: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8006D8B4;
    }
    // 0x8006D8A0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8006D8A4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8006D8A8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8006D8AC: j           L_8006D8B8
    // 0x8006D8B0: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_8006D8B8;
    // 0x8006D8B0: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8006D8B4:
    // 0x8006D8B4: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_8006D8B8:
    // 0x8006D8B8: bne         $v1, $zero, L_8006DFC0
    if (ctx->r3 != 0) {
        // 0x8006D8BC: nop
    
            goto L_8006DFC0;
    }
    // 0x8006D8BC: nop

    // 0x8006D8C0: lhu         $v1, 0x11C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X11C);
    // 0x8006D8C4: lhu         $v0, 0x126($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X126);
    // 0x8006D8C8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8006D8CC: beql        $v0, $zero, L_8006D8FC
    if (ctx->r2 == 0) {
        // 0x8006D8D0: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_8006D8FC;
    }
    goto skip_1;
    // 0x8006D8D0: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    skip_1:
    // 0x8006D8D4: lhu         $v0, 0x134($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X134);
    // 0x8006D8D8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8006D8DC: beq         $v0, $zero, L_8006D8F8
    if (ctx->r2 == 0) {
        // 0x8006D8E0: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8006D8F8;
    }
    // 0x8006D8E0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8006D8E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006D8E8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8006D8EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006D8F0: j           L_8006D8FC
    // 0x8006D8F4: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
        goto L_8006D8FC;
    // 0x8006D8F4: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
L_8006D8F8:
    // 0x8006D8F8: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_8006D8FC:
    // 0x8006D8FC: bne         $v1, $zero, L_8006DFC0
    if (ctx->r3 != 0) {
        // 0x8006D900: nop
    
            goto L_8006DFC0;
    }
    // 0x8006D900: nop

    // 0x8006D904: lhu         $v1, 0x11C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X11C);
    // 0x8006D908: lhu         $v0, 0x126($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X126);
    // 0x8006D90C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8006D910: beq         $v0, $zero, L_8006D940
    if (ctx->r2 == 0) {
        // 0x8006D914: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8006D940;
    }
    // 0x8006D914: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8006D918: lhu         $v0, 0x134($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X134);
    // 0x8006D91C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8006D920: bne         $v0, $zero, L_8006D940
    if (ctx->r2 != 0) {
        // 0x8006D924: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8006D940;
    }
    // 0x8006D924: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8006D928: lbu         $v1, 0x112($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X112);
    // 0x8006D92C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8006D930: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8006D934: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8006D938: sb          $v0, 0x112($s0)
    MEM_B(0X112, ctx->r16) = ctx->r2;
    // 0x8006D93C: sb          $v1, 0x113($s0)
    MEM_B(0X113, ctx->r16) = ctx->r3;
L_8006D940:
    // 0x8006D940: bne         $a0, $zero, L_8006DFC0
    if (ctx->r4 != 0) {
        // 0x8006D944: nop
    
            goto L_8006DFC0;
    }
    // 0x8006D944: nop

    // 0x8006D948: lhu         $v0, 0x124($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X124);
    // 0x8006D94C: and         $v0, $v0, $s1
    ctx->r2 = ctx->r2 & ctx->r17;
    // 0x8006D950: beql        $v0, $zero, L_8006D974
    if (ctx->r2 == 0) {
        // 0x8006D954: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8006D974;
    }
    goto skip_2;
    // 0x8006D954: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_2:
    // 0x8006D958: lhu         $v0, 0x134($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X134);
    // 0x8006D95C: and         $v0, $v0, $s1
    ctx->r2 = ctx->r2 & ctx->r17;
    // 0x8006D960: beq         $v0, $zero, L_8006DFC0
    if (ctx->r2 == 0) {
        // 0x8006D964: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8006DFC0;
    }
    // 0x8006D964: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006D968: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8006D96C: j           L_8006DFC0
    // 0x8006D970: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_8006DFC0;
    // 0x8006D970: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8006D974:
    // 0x8006D974: j           L_8006DF9C
    // 0x8006D978: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
        goto L_8006DF9C;
    // 0x8006D978: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
L_8006D97C:
    // 0x8006D97C: lhu         $v1, 0x124($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X124);
    // 0x8006D980: lhu         $a0, 0x126($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X126);
    // 0x8006D984: lhu         $a1, 0x12C($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X12C);
    // 0x8006D988: lhu         $v0, 0x12E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X12E);
    // 0x8006D98C: lhu         $a2, 0x13A($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X13A);
    // 0x8006D990: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x8006D994: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
    // 0x8006D998: lhu         $v0, 0x138($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X138);
    // 0x8006D99C: lhu         $a0, 0x13C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X13C);
    // 0x8006D9A0: or          $v1, $v1, $a1
    ctx->r3 = ctx->r3 | ctx->r5;
    // 0x8006D9A4: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8006D9A8: or          $v1, $a2, $a0
    ctx->r3 = ctx->r6 | ctx->r4;
    // 0x8006D9AC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8006D9B0: and         $v0, $s1, $v0
    ctx->r2 = ctx->r17 & ctx->r2;
    // 0x8006D9B4: beq         $v0, $zero, L_8006DFAC
    if (ctx->r2 == 0) {
        // 0x8006D9B8: and         $v0, $s1, $a1
        ctx->r2 = ctx->r17 & ctx->r5;
            goto L_8006DFAC;
    }
    // 0x8006D9B8: and         $v0, $s1, $a1
    ctx->r2 = ctx->r17 & ctx->r5;
    // 0x8006D9BC: beq         $v0, $a1, L_8006DFAC
    if (ctx->r2 == ctx->r5) {
        // 0x8006D9C0: and         $v0, $a0, $s1
        ctx->r2 = ctx->r4 & ctx->r17;
            goto L_8006DFAC;
    }
    // 0x8006D9C0: and         $v0, $a0, $s1
    ctx->r2 = ctx->r4 & ctx->r17;
    // 0x8006D9C4: beq         $v0, $zero, L_8006D9F0
    if (ctx->r2 == 0) {
        // 0x8006D9C8: and         $v0, $a2, $s1
        ctx->r2 = ctx->r6 & ctx->r17;
            goto L_8006D9F0;
    }
    // 0x8006D9C8: and         $v0, $a2, $s1
    ctx->r2 = ctx->r6 & ctx->r17;
    // 0x8006D9CC: lb          $v0, 0x170($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X170);
    // 0x8006D9D0: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8006D9D4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8006D9D8: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8006D9DC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8006D9E0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8006D9E4: lbu         $v0, 0x30F8($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X30F8);
    // 0x8006D9E8: beq         $v0, $zero, L_8006DA1C
    if (ctx->r2 == 0) {
        // 0x8006D9EC: and         $v0, $a2, $s1
        ctx->r2 = ctx->r6 & ctx->r17;
            goto L_8006DA1C;
    }
    // 0x8006D9EC: and         $v0, $a2, $s1
    ctx->r2 = ctx->r6 & ctx->r17;
L_8006D9F0:
    // 0x8006D9F0: beq         $v0, $zero, L_8006DA20
    if (ctx->r2 == 0) {
        // 0x8006D9F4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8006DA20;
    }
    // 0x8006D9F4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8006D9F8: lb          $v0, 0x171($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X171);
    // 0x8006D9FC: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8006DA00: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8006DA04: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8006DA08: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8006DA0C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8006DA10: lbu         $v0, 0x30F8($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X30F8);
    // 0x8006DA14: bne         $v0, $zero, L_8006DA20
    if (ctx->r2 != 0) {
        // 0x8006DA18: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8006DA20;
    }
    // 0x8006DA18: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8006DA1C:
    // 0x8006DA1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8006DA20:
    // 0x8006DA20: bne         $v0, $zero, L_8006DFAC
    if (ctx->r2 != 0) {
        // 0x8006DA24: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8006DFAC;
    }
    // 0x8006DA24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006DA28: jal         0x8006CC14
    // 0x8006DA2C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8006CC14_48014(rdram, ctx);
        goto after_1;
    // 0x8006DA2C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x8006DA30: lhu         $v1, 0x11E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X11E);
    // 0x8006DA34: lhu         $v0, 0x138($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X138);
    // 0x8006DA38: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8006DA3C: beq         $v0, $zero, L_8006DA54
    if (ctx->r2 == 0) {
        // 0x8006DA40: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8006DA54;
    }
    // 0x8006DA40: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8006DA44: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8006DA48: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8006DA4C: j           L_8006DA58
    // 0x8006DA50: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_8006DA58;
    // 0x8006DA50: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8006DA54:
    // 0x8006DA54: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_8006DA58:
    // 0x8006DA58: bne         $v1, $zero, L_8006DFC0
    if (ctx->r3 != 0) {
        // 0x8006DA5C: nop
    
            goto L_8006DFC0;
    }
    // 0x8006DA5C: nop

    // 0x8006DA60: lhu         $a0, 0x134($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X134);
    // 0x8006DA64: and         $v0, $a0, $s1
    ctx->r2 = ctx->r4 & ctx->r17;
    // 0x8006DA68: bne         $v0, $zero, L_8006DB6C
    if (ctx->r2 != 0) {
        // 0x8006DA6C: nop
    
            goto L_8006DB6C;
    }
    // 0x8006DA6C: nop

    // 0x8006DA70: lhu         $v1, 0x11C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X11C);
    // 0x8006DA74: lhu         $v0, 0x124($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X124);
    // 0x8006DA78: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8006DA7C: beq         $v0, $zero, L_8006DAAC
    if (ctx->r2 == 0) {
        // 0x8006DA80: and         $v0, $a0, $v1
        ctx->r2 = ctx->r4 & ctx->r3;
            goto L_8006DAAC;
    }
    // 0x8006DA80: and         $v0, $a0, $v1
    ctx->r2 = ctx->r4 & ctx->r3;
    // 0x8006DA84: bne         $v0, $zero, L_8006DAB0
    if (ctx->r2 != 0) {
        // 0x8006DA88: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8006DAB0;
    }
    // 0x8006DA88: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8006DA8C: lbu         $v1, 0x112($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X112);
    // 0x8006DA90: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8006DA94: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8006DA98: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8006DA9C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8006DAA0: sb          $zero, 0x112($s0)
    MEM_B(0X112, ctx->r16) = 0;
    // 0x8006DAA4: j           L_8006DAB0
    // 0x8006DAA8: sb          $v1, 0x113($s0)
    MEM_B(0X113, ctx->r16) = ctx->r3;
        goto L_8006DAB0;
    // 0x8006DAA8: sb          $v1, 0x113($s0)
    MEM_B(0X113, ctx->r16) = ctx->r3;
L_8006DAAC:
    // 0x8006DAAC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_8006DAB0:
    // 0x8006DAB0: bne         $a0, $zero, L_8006DFC0
    if (ctx->r4 != 0) {
        // 0x8006DAB4: nop
    
            goto L_8006DFC0;
    }
    // 0x8006DAB4: nop

    // 0x8006DAB8: lhu         $v1, 0x11C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X11C);
    // 0x8006DABC: lhu         $v0, 0x126($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X126);
    // 0x8006DAC0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8006DAC4: beq         $v0, $zero, L_8006DAF4
    if (ctx->r2 == 0) {
        // 0x8006DAC8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8006DAF4;
    }
    // 0x8006DAC8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8006DACC: lhu         $v0, 0x134($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X134);
    // 0x8006DAD0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8006DAD4: bne         $v0, $zero, L_8006DAF4
    if (ctx->r2 != 0) {
        // 0x8006DAD8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8006DAF4;
    }
    // 0x8006DAD8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8006DADC: lbu         $v1, 0x112($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X112);
    // 0x8006DAE0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8006DAE4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8006DAE8: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8006DAEC: sb          $v0, 0x112($s0)
    MEM_B(0X112, ctx->r16) = ctx->r2;
    // 0x8006DAF0: sb          $v1, 0x113($s0)
    MEM_B(0X113, ctx->r16) = ctx->r3;
L_8006DAF4:
    // 0x8006DAF4: bne         $a0, $zero, L_8006DFC0
    if (ctx->r4 != 0) {
        // 0x8006DAF8: nop
    
            goto L_8006DFC0;
    }
    // 0x8006DAF8: nop

    // 0x8006DAFC: lhu         $v0, 0x12C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X12C);
    // 0x8006DB00: lhu         $a1, 0x12E($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X12E);
    // 0x8006DB04: lhu         $a0, 0x11C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X11C);
    // 0x8006DB08: or          $v0, $v0, $a1
    ctx->r2 = ctx->r2 | ctx->r5;
    // 0x8006DB0C: and         $v1, $a0, $v0
    ctx->r3 = ctx->r4 & ctx->r2;
    // 0x8006DB10: beq         $v1, $v0, L_8006DB54
    if (ctx->r3 == ctx->r2) {
        // 0x8006DB14: and         $v0, $a1, $a0
        ctx->r2 = ctx->r5 & ctx->r4;
            goto L_8006DB54;
    }
    // 0x8006DB14: and         $v0, $a1, $a0
    ctx->r2 = ctx->r5 & ctx->r4;
    // 0x8006DB18: beql        $v0, $zero, L_8006DB58
    if (ctx->r2 == 0) {
        // 0x8006DB1C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8006DB58;
    }
    goto skip_3;
    // 0x8006DB1C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    skip_3:
    // 0x8006DB20: lhu         $v0, 0x134($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X134);
    // 0x8006DB24: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x8006DB28: bne         $v0, $zero, L_8006DB58
    if (ctx->r2 != 0) {
        // 0x8006DB2C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8006DB58;
    }
    // 0x8006DB2C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8006DB30: lbu         $v0, 0x112($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X112);
    // 0x8006DB34: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8006DB38: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8006DB3C: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x8006DB40: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8006DB44: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8006DB48: sb          $v1, 0x112($s0)
    MEM_B(0X112, ctx->r16) = ctx->r3;
    // 0x8006DB4C: j           L_8006DB58
    // 0x8006DB50: sb          $v0, 0x113($s0)
    MEM_B(0X113, ctx->r16) = ctx->r2;
        goto L_8006DB58;
    // 0x8006DB50: sb          $v0, 0x113($s0)
    MEM_B(0X113, ctx->r16) = ctx->r2;
L_8006DB54:
    // 0x8006DB54: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_8006DB58:
    // 0x8006DB58: bne         $a0, $zero, L_8006DFC0
    if (ctx->r4 != 0) {
        // 0x8006DB5C: nop
    
            goto L_8006DFC0;
    }
    // 0x8006DB5C: nop

    // 0x8006DB60: lhu         $v0, 0x12C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X12C);
    // 0x8006DB64: j           L_8006DF54
    // 0x8006DB68: and         $v0, $v0, $s1
    ctx->r2 = ctx->r2 & ctx->r17;
        goto L_8006DF54;
    // 0x8006DB68: and         $v0, $v0, $s1
    ctx->r2 = ctx->r2 & ctx->r17;
L_8006DB6C:
    // 0x8006DB6C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8006DB70: lbu         $v0, -0x3B95($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3B95);
    // 0x8006DB74: bne         $v0, $zero, L_8006DFAC
    if (ctx->r2 != 0) {
        // 0x8006DB78: nop
    
            goto L_8006DFAC;
    }
    // 0x8006DB78: nop

    // 0x8006DB7C: lhu         $v0, 0x12C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X12C);
    // 0x8006DB80: j           L_8006DF7C
    // 0x8006DB84: and         $v0, $v0, $s1
    ctx->r2 = ctx->r2 & ctx->r17;
        goto L_8006DF7C;
    // 0x8006DB84: and         $v0, $v0, $s1
    ctx->r2 = ctx->r2 & ctx->r17;
L_8006DB88:
    // 0x8006DB88: lhu         $v0, 0x124($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X124);
    // 0x8006DB8C: lhu         $a1, 0x126($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X126);
    // 0x8006DB90: lhu         $v1, 0x12C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X12C);
    // 0x8006DB94: lhu         $a0, 0x12E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X12E);
    // 0x8006DB98: lhu         $a3, 0x138($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X138);
    // 0x8006DB9C: or          $v0, $v0, $a1
    ctx->r2 = ctx->r2 | ctx->r5;
    // 0x8006DBA0: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x8006DBA4: lhu         $a1, 0x13A($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X13A);
    // 0x8006DBA8: lhu         $a0, 0x13C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X13C);
    // 0x8006DBAC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8006DBB0: or          $v0, $a3, $v0
    ctx->r2 = ctx->r7 | ctx->r2;
    // 0x8006DBB4: or          $v1, $a1, $a0
    ctx->r3 = ctx->r5 | ctx->r4;
    // 0x8006DBB8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8006DBBC: and         $v0, $s1, $v0
    ctx->r2 = ctx->r17 & ctx->r2;
    // 0x8006DBC0: beq         $v0, $zero, L_8006DFAC
    if (ctx->r2 == 0) {
        // 0x8006DBC4: and         $v0, $a2, $v1
        ctx->r2 = ctx->r6 & ctx->r3;
            goto L_8006DFAC;
    }
    // 0x8006DBC4: and         $v0, $a2, $v1
    ctx->r2 = ctx->r6 & ctx->r3;
    // 0x8006DBC8: beq         $v0, $zero, L_8006DBEC
    if (ctx->r2 == 0) {
        // 0x8006DBCC: and         $v0, $a1, $a2
        ctx->r2 = ctx->r5 & ctx->r6;
            goto L_8006DBEC;
    }
    // 0x8006DBCC: and         $v0, $a1, $a2
    ctx->r2 = ctx->r5 & ctx->r6;
    // 0x8006DBD0: beq         $v0, $zero, L_8006DBE0
    if (ctx->r2 == 0) {
        // 0x8006DBD4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8006DBE0;
    }
    // 0x8006DBD4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8006DBD8: j           L_8006DFAC
    // 0x8006DBDC: sb          $v0, 0x176($s0)
    MEM_B(0X176, ctx->r16) = ctx->r2;
        goto L_8006DFAC;
    // 0x8006DBDC: sb          $v0, 0x176($s0)
    MEM_B(0X176, ctx->r16) = ctx->r2;
L_8006DBE0:
    // 0x8006DBE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006DBE4: j           L_8006DFAC
    // 0x8006DBE8: sb          $v0, 0x176($s0)
    MEM_B(0X176, ctx->r16) = ctx->r2;
        goto L_8006DFAC;
    // 0x8006DBE8: sb          $v0, 0x176($s0)
    MEM_B(0X176, ctx->r16) = ctx->r2;
L_8006DBEC:
    // 0x8006DBEC: and         $v0, $a3, $a2
    ctx->r2 = ctx->r7 & ctx->r6;
    // 0x8006DBF0: beq         $v0, $zero, L_8006DC08
    if (ctx->r2 == 0) {
        // 0x8006DBF4: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8006DC08;
    }
    // 0x8006DBF4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8006DBF8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8006DBFC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8006DC00: j           L_8006DC0C
    // 0x8006DC04: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_8006DC0C;
    // 0x8006DC04: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8006DC08:
    // 0x8006DC08: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_8006DC0C:
    // 0x8006DC0C: bne         $v1, $zero, L_8006DFC0
    if (ctx->r3 != 0) {
        // 0x8006DC10: nop
    
            goto L_8006DFC0;
    }
    // 0x8006DC10: nop

    // 0x8006DC14: lhu         $a0, 0x134($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X134);
    // 0x8006DC18: and         $v0, $a0, $s1
    ctx->r2 = ctx->r4 & ctx->r17;
    // 0x8006DC1C: bne         $v0, $zero, L_8006DD4C
    if (ctx->r2 != 0) {
        // 0x8006DC20: nop
    
            goto L_8006DD4C;
    }
    // 0x8006DC20: nop

    // 0x8006DC24: lhu         $v0, 0x126($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X126);
    // 0x8006DC28: and         $v0, $v0, $s1
    ctx->r2 = ctx->r2 & ctx->r17;
    // 0x8006DC2C: bne         $v0, $zero, L_8006DFC0
    if (ctx->r2 != 0) {
        // 0x8006DC30: nop
    
            goto L_8006DFC0;
    }
    // 0x8006DC30: nop

    // 0x8006DC34: lhu         $v1, 0x11C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X11C);
    // 0x8006DC38: lhu         $v0, 0x124($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X124);
    // 0x8006DC3C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8006DC40: beq         $v0, $zero, L_8006DC70
    if (ctx->r2 == 0) {
        // 0x8006DC44: and         $v0, $a0, $v1
        ctx->r2 = ctx->r4 & ctx->r3;
            goto L_8006DC70;
    }
    // 0x8006DC44: and         $v0, $a0, $v1
    ctx->r2 = ctx->r4 & ctx->r3;
    // 0x8006DC48: bne         $v0, $zero, L_8006DC74
    if (ctx->r2 != 0) {
        // 0x8006DC4C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8006DC74;
    }
    // 0x8006DC4C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8006DC50: lbu         $v1, 0x112($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X112);
    // 0x8006DC54: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8006DC58: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8006DC5C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8006DC60: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8006DC64: sb          $zero, 0x112($s0)
    MEM_B(0X112, ctx->r16) = 0;
    // 0x8006DC68: j           L_8006DC74
    // 0x8006DC6C: sb          $v1, 0x113($s0)
    MEM_B(0X113, ctx->r16) = ctx->r3;
        goto L_8006DC74;
    // 0x8006DC6C: sb          $v1, 0x113($s0)
    MEM_B(0X113, ctx->r16) = ctx->r3;
L_8006DC70:
    // 0x8006DC70: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_8006DC74:
    // 0x8006DC74: bne         $a0, $zero, L_8006DFC0
    if (ctx->r4 != 0) {
        // 0x8006DC78: nop
    
            goto L_8006DFC0;
    }
    // 0x8006DC78: nop

    // 0x8006DC7C: lhu         $a1, 0x12C($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X12C);
    // 0x8006DC80: lhu         $v0, 0x12E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X12E);
    // 0x8006DC84: lhu         $a0, 0x11C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X11C);
    // 0x8006DC88: or          $v0, $a1, $v0
    ctx->r2 = ctx->r5 | ctx->r2;
    // 0x8006DC8C: and         $v1, $a0, $v0
    ctx->r3 = ctx->r4 & ctx->r2;
    // 0x8006DC90: beq         $v1, $v0, L_8006DCD4
    if (ctx->r3 == ctx->r2) {
        // 0x8006DC94: and         $v0, $a1, $a0
        ctx->r2 = ctx->r5 & ctx->r4;
            goto L_8006DCD4;
    }
    // 0x8006DC94: and         $v0, $a1, $a0
    ctx->r2 = ctx->r5 & ctx->r4;
    // 0x8006DC98: beql        $v0, $zero, L_8006DCD8
    if (ctx->r2 == 0) {
        // 0x8006DC9C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8006DCD8;
    }
    goto skip_4;
    // 0x8006DC9C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    skip_4:
    // 0x8006DCA0: lhu         $v0, 0x134($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X134);
    // 0x8006DCA4: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x8006DCA8: bne         $v0, $zero, L_8006DCD8
    if (ctx->r2 != 0) {
        // 0x8006DCAC: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8006DCD8;
    }
    // 0x8006DCAC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8006DCB0: lbu         $v0, 0x112($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X112);
    // 0x8006DCB4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8006DCB8: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8006DCBC: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x8006DCC0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8006DCC4: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8006DCC8: sb          $v1, 0x112($s0)
    MEM_B(0X112, ctx->r16) = ctx->r3;
    // 0x8006DCCC: j           L_8006DCD8
    // 0x8006DCD0: sb          $v0, 0x113($s0)
    MEM_B(0X113, ctx->r16) = ctx->r2;
        goto L_8006DCD8;
    // 0x8006DCD0: sb          $v0, 0x113($s0)
    MEM_B(0X113, ctx->r16) = ctx->r2;
L_8006DCD4:
    // 0x8006DCD4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_8006DCD8:
    // 0x8006DCD8: bne         $a0, $zero, L_8006DFC0
    if (ctx->r4 != 0) {
        // 0x8006DCDC: nop
    
            goto L_8006DFC0;
    }
    // 0x8006DCDC: nop

    // 0x8006DCE0: lhu         $v0, 0x12C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X12C);
    // 0x8006DCE4: lhu         $a1, 0x12E($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X12E);
    // 0x8006DCE8: lhu         $a0, 0x11C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X11C);
    // 0x8006DCEC: or          $v0, $v0, $a1
    ctx->r2 = ctx->r2 | ctx->r5;
    // 0x8006DCF0: and         $v1, $a0, $v0
    ctx->r3 = ctx->r4 & ctx->r2;
    // 0x8006DCF4: beq         $v1, $v0, L_8006DD38
    if (ctx->r3 == ctx->r2) {
        // 0x8006DCF8: and         $v0, $a1, $a0
        ctx->r2 = ctx->r5 & ctx->r4;
            goto L_8006DD38;
    }
    // 0x8006DCF8: and         $v0, $a1, $a0
    ctx->r2 = ctx->r5 & ctx->r4;
    // 0x8006DCFC: beql        $v0, $zero, L_8006DD3C
    if (ctx->r2 == 0) {
        // 0x8006DD00: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8006DD3C;
    }
    goto skip_5;
    // 0x8006DD00: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    skip_5:
    // 0x8006DD04: lhu         $v0, 0x134($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X134);
    // 0x8006DD08: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x8006DD0C: bne         $v0, $zero, L_8006DD3C
    if (ctx->r2 != 0) {
        // 0x8006DD10: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8006DD3C;
    }
    // 0x8006DD10: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8006DD14: lbu         $v0, 0x112($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X112);
    // 0x8006DD18: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8006DD1C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8006DD20: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x8006DD24: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8006DD28: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8006DD2C: sb          $v1, 0x112($s0)
    MEM_B(0X112, ctx->r16) = ctx->r3;
    // 0x8006DD30: j           L_8006DD3C
    // 0x8006DD34: sb          $v0, 0x113($s0)
    MEM_B(0X113, ctx->r16) = ctx->r2;
        goto L_8006DD3C;
    // 0x8006DD34: sb          $v0, 0x113($s0)
    MEM_B(0X113, ctx->r16) = ctx->r2;
L_8006DD38:
    // 0x8006DD38: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_8006DD3C:
    // 0x8006DD3C: beq         $a0, $zero, L_8006DFAC
    if (ctx->r4 == 0) {
        // 0x8006DD40: nop
    
            goto L_8006DFAC;
    }
    // 0x8006DD40: nop

    // 0x8006DD44: j           L_8006DFC0
    // 0x8006DD48: nop

        goto L_8006DFC0;
    // 0x8006DD48: nop

L_8006DD4C:
    // 0x8006DD4C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8006DD50: lbu         $v0, -0x3B95($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3B95);
    // 0x8006DD54: bne         $v0, $zero, L_8006DFAC
    if (ctx->r2 != 0) {
        // 0x8006DD58: nop
    
            goto L_8006DFAC;
    }
    // 0x8006DD58: nop

    // 0x8006DD5C: lhu         $v0, 0x126($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X126);
    // 0x8006DD60: j           L_8006DF7C
    // 0x8006DD64: and         $v0, $v0, $s1
    ctx->r2 = ctx->r2 & ctx->r17;
        goto L_8006DF7C;
    // 0x8006DD64: and         $v0, $v0, $s1
    ctx->r2 = ctx->r2 & ctx->r17;
L_8006DD68:
    // 0x8006DD68: lhu         $v1, 0x124($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X124);
    // 0x8006DD6C: lhu         $a0, 0x126($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X126);
    // 0x8006DD70: lhu         $a1, 0x12C($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X12C);
    // 0x8006DD74: lhu         $v0, 0x12E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X12E);
    // 0x8006DD78: lhu         $a2, 0x13A($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X13A);
    // 0x8006DD7C: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x8006DD80: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
    // 0x8006DD84: lhu         $v0, 0x138($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X138);
    // 0x8006DD88: lhu         $a0, 0x13C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X13C);
    // 0x8006DD8C: or          $v1, $v1, $a1
    ctx->r3 = ctx->r3 | ctx->r5;
    // 0x8006DD90: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8006DD94: or          $v1, $a2, $a0
    ctx->r3 = ctx->r6 | ctx->r4;
    // 0x8006DD98: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8006DD9C: and         $v0, $s1, $v0
    ctx->r2 = ctx->r17 & ctx->r2;
    // 0x8006DDA0: beq         $v0, $zero, L_8006DFAC
    if (ctx->r2 == 0) {
        // 0x8006DDA4: and         $v0, $s1, $a1
        ctx->r2 = ctx->r17 & ctx->r5;
            goto L_8006DFAC;
    }
    // 0x8006DDA4: and         $v0, $s1, $a1
    ctx->r2 = ctx->r17 & ctx->r5;
    // 0x8006DDA8: beq         $v0, $a1, L_8006DFAC
    if (ctx->r2 == ctx->r5) {
        // 0x8006DDAC: and         $v0, $a0, $s1
        ctx->r2 = ctx->r4 & ctx->r17;
            goto L_8006DFAC;
    }
    // 0x8006DDAC: and         $v0, $a0, $s1
    ctx->r2 = ctx->r4 & ctx->r17;
    // 0x8006DDB0: beq         $v0, $zero, L_8006DDDC
    if (ctx->r2 == 0) {
        // 0x8006DDB4: and         $v0, $a2, $s1
        ctx->r2 = ctx->r6 & ctx->r17;
            goto L_8006DDDC;
    }
    // 0x8006DDB4: and         $v0, $a2, $s1
    ctx->r2 = ctx->r6 & ctx->r17;
    // 0x8006DDB8: lb          $v0, 0x170($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X170);
    // 0x8006DDBC: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8006DDC0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8006DDC4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8006DDC8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8006DDCC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8006DDD0: lbu         $v0, 0x30F8($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X30F8);
    // 0x8006DDD4: beq         $v0, $zero, L_8006DE08
    if (ctx->r2 == 0) {
        // 0x8006DDD8: and         $v0, $a2, $s1
        ctx->r2 = ctx->r6 & ctx->r17;
            goto L_8006DE08;
    }
    // 0x8006DDD8: and         $v0, $a2, $s1
    ctx->r2 = ctx->r6 & ctx->r17;
L_8006DDDC:
    // 0x8006DDDC: beq         $v0, $zero, L_8006DE0C
    if (ctx->r2 == 0) {
        // 0x8006DDE0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8006DE0C;
    }
    // 0x8006DDE0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8006DDE4: lb          $v0, 0x171($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X171);
    // 0x8006DDE8: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8006DDEC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8006DDF0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8006DDF4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8006DDF8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8006DDFC: lbu         $v0, 0x30F8($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X30F8);
    // 0x8006DE00: bne         $v0, $zero, L_8006DE0C
    if (ctx->r2 != 0) {
        // 0x8006DE04: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8006DE0C;
    }
    // 0x8006DE04: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8006DE08:
    // 0x8006DE08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8006DE0C:
    // 0x8006DE0C: bne         $v0, $zero, L_8006DFAC
    if (ctx->r2 != 0) {
        // 0x8006DE10: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8006DFAC;
    }
    // 0x8006DE10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006DE14: jal         0x8006CC14
    // 0x8006DE18: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8006CC14_48014(rdram, ctx);
        goto after_2;
    // 0x8006DE18: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x8006DE1C: lhu         $v1, 0x11E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X11E);
    // 0x8006DE20: lhu         $v0, 0x138($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X138);
    // 0x8006DE24: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8006DE28: beq         $v0, $zero, L_8006DE40
    if (ctx->r2 == 0) {
        // 0x8006DE2C: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8006DE40;
    }
    // 0x8006DE2C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8006DE30: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8006DE34: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8006DE38: j           L_8006DE44
    // 0x8006DE3C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_8006DE44;
    // 0x8006DE3C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8006DE40:
    // 0x8006DE40: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_8006DE44:
    // 0x8006DE44: bne         $v1, $zero, L_8006DFC0
    if (ctx->r3 != 0) {
        // 0x8006DE48: nop
    
            goto L_8006DFC0;
    }
    // 0x8006DE48: nop

    // 0x8006DE4C: lhu         $a0, 0x134($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X134);
    // 0x8006DE50: and         $v0, $a0, $s1
    ctx->r2 = ctx->r4 & ctx->r17;
    // 0x8006DE54: bne         $v0, $zero, L_8006DF64
    if (ctx->r2 != 0) {
        // 0x8006DE58: nop
    
            goto L_8006DF64;
    }
    // 0x8006DE58: nop

    // 0x8006DE5C: lhu         $v1, 0x11C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X11C);
    // 0x8006DE60: lhu         $v0, 0x124($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X124);
    // 0x8006DE64: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8006DE68: beq         $v0, $zero, L_8006DE98
    if (ctx->r2 == 0) {
        // 0x8006DE6C: and         $v0, $a0, $v1
        ctx->r2 = ctx->r4 & ctx->r3;
            goto L_8006DE98;
    }
    // 0x8006DE6C: and         $v0, $a0, $v1
    ctx->r2 = ctx->r4 & ctx->r3;
    // 0x8006DE70: bne         $v0, $zero, L_8006DE9C
    if (ctx->r2 != 0) {
        // 0x8006DE74: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8006DE9C;
    }
    // 0x8006DE74: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8006DE78: lbu         $v1, 0x112($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X112);
    // 0x8006DE7C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8006DE80: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8006DE84: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8006DE88: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8006DE8C: sb          $zero, 0x112($s0)
    MEM_B(0X112, ctx->r16) = 0;
    // 0x8006DE90: j           L_8006DE9C
    // 0x8006DE94: sb          $v1, 0x113($s0)
    MEM_B(0X113, ctx->r16) = ctx->r3;
        goto L_8006DE9C;
    // 0x8006DE94: sb          $v1, 0x113($s0)
    MEM_B(0X113, ctx->r16) = ctx->r3;
L_8006DE98:
    // 0x8006DE98: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_8006DE9C:
    // 0x8006DE9C: bne         $a0, $zero, L_8006DFC0
    if (ctx->r4 != 0) {
        // 0x8006DEA0: nop
    
            goto L_8006DFC0;
    }
    // 0x8006DEA0: nop

    // 0x8006DEA4: lhu         $a1, 0x12C($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X12C);
    // 0x8006DEA8: lhu         $v0, 0x12E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X12E);
    // 0x8006DEAC: lhu         $a0, 0x11C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X11C);
    // 0x8006DEB0: or          $v0, $a1, $v0
    ctx->r2 = ctx->r5 | ctx->r2;
    // 0x8006DEB4: and         $v1, $a0, $v0
    ctx->r3 = ctx->r4 & ctx->r2;
    // 0x8006DEB8: beq         $v1, $v0, L_8006DEFC
    if (ctx->r3 == ctx->r2) {
        // 0x8006DEBC: and         $v0, $a1, $a0
        ctx->r2 = ctx->r5 & ctx->r4;
            goto L_8006DEFC;
    }
    // 0x8006DEBC: and         $v0, $a1, $a0
    ctx->r2 = ctx->r5 & ctx->r4;
    // 0x8006DEC0: beql        $v0, $zero, L_8006DF00
    if (ctx->r2 == 0) {
        // 0x8006DEC4: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8006DF00;
    }
    goto skip_6;
    // 0x8006DEC4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    skip_6:
    // 0x8006DEC8: lhu         $v0, 0x134($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X134);
    // 0x8006DECC: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x8006DED0: bne         $v0, $zero, L_8006DF00
    if (ctx->r2 != 0) {
        // 0x8006DED4: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8006DF00;
    }
    // 0x8006DED4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8006DED8: lbu         $v0, 0x112($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X112);
    // 0x8006DEDC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8006DEE0: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8006DEE4: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x8006DEE8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8006DEEC: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8006DEF0: sb          $v1, 0x112($s0)
    MEM_B(0X112, ctx->r16) = ctx->r3;
    // 0x8006DEF4: j           L_8006DF00
    // 0x8006DEF8: sb          $v0, 0x113($s0)
    MEM_B(0X113, ctx->r16) = ctx->r2;
        goto L_8006DF00;
    // 0x8006DEF8: sb          $v0, 0x113($s0)
    MEM_B(0X113, ctx->r16) = ctx->r2;
L_8006DEFC:
    // 0x8006DEFC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_8006DF00:
    // 0x8006DF00: bne         $a0, $zero, L_8006DFC0
    if (ctx->r4 != 0) {
        // 0x8006DF04: nop
    
            goto L_8006DFC0;
    }
    // 0x8006DF04: nop

    // 0x8006DF08: lhu         $v1, 0x11C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X11C);
    // 0x8006DF0C: lhu         $v0, 0x126($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X126);
    // 0x8006DF10: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8006DF14: beq         $v0, $zero, L_8006DF44
    if (ctx->r2 == 0) {
        // 0x8006DF18: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8006DF44;
    }
    // 0x8006DF18: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8006DF1C: lhu         $v0, 0x134($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X134);
    // 0x8006DF20: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8006DF24: bne         $v0, $zero, L_8006DF44
    if (ctx->r2 != 0) {
        // 0x8006DF28: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8006DF44;
    }
    // 0x8006DF28: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8006DF2C: lbu         $v1, 0x112($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X112);
    // 0x8006DF30: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8006DF34: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8006DF38: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8006DF3C: sb          $v0, 0x112($s0)
    MEM_B(0X112, ctx->r16) = ctx->r2;
    // 0x8006DF40: sb          $v1, 0x113($s0)
    MEM_B(0X113, ctx->r16) = ctx->r3;
L_8006DF44:
    // 0x8006DF44: bne         $a0, $zero, L_8006DFC0
    if (ctx->r4 != 0) {
        // 0x8006DF48: nop
    
            goto L_8006DFC0;
    }
    // 0x8006DF48: nop

    // 0x8006DF4C: lhu         $v0, 0x12E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X12E);
    // 0x8006DF50: and         $v0, $v0, $s1
    ctx->r2 = ctx->r2 & ctx->r17;
L_8006DF54:
    // 0x8006DF54: beq         $v0, $zero, L_8006DFAC
    if (ctx->r2 == 0) {
        // 0x8006DF58: nop
    
            goto L_8006DFAC;
    }
    // 0x8006DF58: nop

    // 0x8006DF5C: j           L_8006DFC0
    // 0x8006DF60: nop

        goto L_8006DFC0;
    // 0x8006DF60: nop

L_8006DF64:
    // 0x8006DF64: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8006DF68: lbu         $v0, -0x3B95($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3B95);
    // 0x8006DF6C: bne         $v0, $zero, L_8006DFAC
    if (ctx->r2 != 0) {
        // 0x8006DF70: nop
    
            goto L_8006DFAC;
    }
    // 0x8006DF70: nop

    // 0x8006DF74: lhu         $v0, 0x12E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X12E);
    // 0x8006DF78: and         $v0, $v0, $s1
    ctx->r2 = ctx->r2 & ctx->r17;
L_8006DF7C:
    // 0x8006DF7C: beq         $v0, $zero, L_8006DFAC
    if (ctx->r2 == 0) {
        // 0x8006DF80: nop
    
            goto L_8006DFAC;
    }
    // 0x8006DF80: nop

    // 0x8006DF84: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8006DF88: sltiu       $v0, $v0, 0x5
    ctx->r2 = ctx->r2 < 0X5 ? 1 : 0;
    // 0x8006DF8C: beq         $v0, $zero, L_8006DFC0
    if (ctx->r2 == 0) {
        // 0x8006DF90: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8006DFC0;
    }
    // 0x8006DF90: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006DF94: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8006DF98: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_8006DF9C:
    // 0x8006DF9C: jal         0x800700D8
    // 0x8006DFA0: sh          $zero, 0xA($a0)
    MEM_H(0XA, ctx->r4) = 0;
    func_800700D8_4B4D8(rdram, ctx);
        goto after_3;
    // 0x8006DFA0: sh          $zero, 0xA($a0)
    MEM_H(0XA, ctx->r4) = 0;
    after_3:
    // 0x8006DFA4: j           L_8006DFC0
    // 0x8006DFA8: nop

        goto L_8006DFC0;
    // 0x8006DFA8: nop

L_8006DFAC:
    // 0x8006DFAC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8006DFB0: sltiu       $v0, $v0, 0x5
    ctx->r2 = ctx->r2 < 0X5 ? 1 : 0;
    // 0x8006DFB4: beq         $v0, $zero, L_8006DFC0
    if (ctx->r2 == 0) {
        // 0x8006DFB8: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8006DFC0;
    }
    // 0x8006DFB8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8006DFBC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8006DFC0:
    // 0x8006DFC0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8006DFC4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8006DFC8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8006DFCC: jr          $ra
    // 0x8006DFD0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8006DFD0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8004A5BC_259BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004A5BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004A5C0: bne         $a0, $zero, L_8004A5F0
    if (ctx->r4 != 0) {
        // 0x8004A5C4: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_8004A5F0;
    }
    // 0x8004A5C4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8004A5C8: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8004A5CC: addiu       $v1, $zero, 0x27F
    ctx->r3 = ADD32(0, 0X27F);
    // 0x8004A5D0: lui         $v0, 0x8019
    ctx->r2 = S32(0X8019 << 16);
    // 0x8004A5D4: addiu       $v0, $v0, 0x5E8C
    ctx->r2 = ADD32(ctx->r2, 0X5E8C);
L_8004A5D8:
    // 0x8004A5D8: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    // 0x8004A5DC: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8004A5E0: bgez        $v1, L_8004A5D8
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8004A5E4: addiu       $v0, $v0, -0x4
        ctx->r2 = ADD32(ctx->r2, -0X4);
            goto L_8004A5D8;
    }
    // 0x8004A5E4: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x8004A5E8: j           L_8004A608
    // 0x8004A5EC: nop

        goto L_8004A608;
    // 0x8004A5EC: nop

L_8004A5F0:
    // 0x8004A5F0: lui         $a0, 0x8019
    ctx->r4 = S32(0X8019 << 16);
    // 0x8004A5F4: addiu       $a0, $a0, 0x47F0
    ctx->r4 = ADD32(ctx->r4, 0X47F0);
    // 0x8004A5F8: lui         $a1, 0x8019
    ctx->r5 = S32(0X8019 << 16);
    // 0x8004A5FC: addiu       $a1, $a1, 0x5490
    ctx->r5 = ADD32(ctx->r5, 0X5490);
    // 0x8004A600: jal         0x8003BD6C
    // 0x8004A604: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    func_8003BD6C_1716C(rdram, ctx);
        goto after_0;
    // 0x8004A604: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    after_0:
L_8004A608:
    // 0x8004A608: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8004A60C: jr          $ra
    // 0x8004A610: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8004A610: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void alEnvmixerParam(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80097370: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80097374: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80097378: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8009737C: beq         $a1, $v0, L_800973BC
    if (ctx->r5 == ctx->r2) {
        // 0x80097380: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_800973BC;
    }
    // 0x80097380: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x80097384: slti        $v0, $a1, 0x4
    ctx->r2 = SIGNED(ctx->r5) < 0X4 ? 1 : 0;
    // 0x80097388: beq         $v0, $zero, L_800973A0
    if (ctx->r2 == 0) {
        // 0x8009738C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_800973A0;
    }
    // 0x8009738C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80097390: beql        $a1, $v0, L_80097434
    if (ctx->r5 == ctx->r2) {
        // 0x80097394: sw          $a2, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->r6;
            goto L_80097434;
    }
    goto skip_0;
    // 0x80097394: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
    skip_0:
    // 0x80097398: j           L_8009741C
    // 0x8009739C: nop

        goto L_8009741C;
    // 0x8009739C: nop

L_800973A0:
    // 0x800973A0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x800973A4: beq         $a1, $v0, L_800973D4
    if (ctx->r5 == ctx->r2) {
        // 0x800973A8: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_800973D4;
    }
    // 0x800973A8: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x800973AC: beq         $a1, $v0, L_80097400
    if (ctx->r5 == ctx->r2) {
        // 0x800973B0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80097400;
    }
    // 0x800973B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800973B4: j           L_8009741C
    // 0x800973B8: nop

        goto L_8009741C;
    // 0x800973B8: nop

L_800973BC:
    // 0x800973BC: lw          $v0, 0x40($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X40);
    // 0x800973C0: beql        $v0, $zero, L_800973CC
    if (ctx->r2 == 0) {
        // 0x800973C4: sw          $a2, 0x3C($a0)
        MEM_W(0X3C, ctx->r4) = ctx->r6;
            goto L_800973CC;
    }
    goto skip_1;
    // 0x800973C4: sw          $a2, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r6;
    skip_1:
    // 0x800973C8: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
L_800973CC:
    // 0x800973CC: j           L_80097434
    // 0x800973D0: sw          $a2, 0x40($v1)
    MEM_W(0X40, ctx->r3) = ctx->r6;
        goto L_80097434;
    // 0x800973D0: sw          $a2, 0x40($v1)
    MEM_W(0X40, ctx->r3) = ctx->r6;
L_800973D4:
    // 0x800973D4: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x800973D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800973DC: sw          $v0, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->r2;
    // 0x800973E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800973E4: sw          $zero, 0x48($a0)
    MEM_W(0X48, ctx->r4) = 0;
    // 0x800973E8: beq         $v1, $zero, L_80097434
    if (ctx->r3 == 0) {
        // 0x800973EC: sh          $v0, 0x1A($a0)
        MEM_H(0X1A, ctx->r4) = ctx->r2;
            goto L_80097434;
    }
    // 0x800973EC: sh          $v0, 0x1A($a0)
    MEM_H(0X1A, ctx->r4) = ctx->r2;
    // 0x800973F0: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x800973F4: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x800973F8: j           L_8009742C
    // 0x800973FC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
        goto L_8009742C;
    // 0x800973FC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
L_80097400:
    // 0x80097400: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80097404: beq         $v1, $zero, L_80097434
    if (ctx->r3 == 0) {
        // 0x80097408: sw          $v0, 0x48($a0)
        MEM_W(0X48, ctx->r4) = ctx->r2;
            goto L_80097434;
    }
    // 0x80097408: sw          $v0, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->r2;
    // 0x8009740C: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x80097410: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x80097414: j           L_8009742C
    // 0x80097418: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
        goto L_8009742C;
    // 0x80097418: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
L_8009741C:
    // 0x8009741C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x80097420: beq         $a0, $zero, L_80097434
    if (ctx->r4 == 0) {
        // 0x80097424: nop
    
            goto L_80097434;
    }
    // 0x80097424: nop

    // 0x80097428: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
L_8009742C:
    // 0x8009742C: jalr        $v0
    // 0x80097430: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80097430: nop

    after_0:
L_80097434:
    // 0x80097434: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80097438: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8009743C: jr          $ra
    // 0x80097440: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80097440: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8008B474_66874(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008B474: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008B478: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8008B47C: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x8008B480: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8008B484: beq         $v1, $v0, L_8008B4C8
    if (ctx->r3 == ctx->r2) {
        // 0x8008B488: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8008B4C8;
    }
    // 0x8008B488: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8008B48C: beql        $v0, $zero, L_8008B4A4
    if (ctx->r2 == 0) {
        // 0x8008B490: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8008B4A4;
    }
    goto skip_0;
    // 0x8008B490: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8008B494: beq         $v1, $zero, L_8008B4B4
    if (ctx->r3 == 0) {
        // 0x8008B498: addiu       $a1, $zero, -0x2
        ctx->r5 = ADD32(0, -0X2);
            goto L_8008B4B4;
    }
    // 0x8008B498: addiu       $a1, $zero, -0x2
    ctx->r5 = ADD32(0, -0X2);
    // 0x8008B49C: j           L_8008B4E8
    // 0x8008B4A0: nop

        goto L_8008B4E8;
    // 0x8008B4A0: nop

L_8008B4A4:
    // 0x8008B4A4: beq         $v1, $v0, L_8008B4E0
    if (ctx->r3 == ctx->r2) {
        // 0x8008B4A8: nop
    
            goto L_8008B4E0;
    }
    // 0x8008B4A8: nop

    // 0x8008B4AC: j           L_8008B4E8
    // 0x8008B4B0: nop

        goto L_8008B4E8;
    // 0x8008B4B0: nop

L_8008B4B4:
    // 0x8008B4B4: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    // 0x8008B4B8: jal         0x8008D218
    // 0x8008B4BC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8008D218_68618(rdram, ctx);
        goto after_0;
    // 0x8008B4BC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x8008B4C0: j           L_8008B4E8
    // 0x8008B4C4: nop

        goto L_8008B4E8;
    // 0x8008B4C4: nop

L_8008B4C8:
    // 0x8008B4C8: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    // 0x8008B4CC: addiu       $a1, $zero, -0x2
    ctx->r5 = ADD32(0, -0X2);
    // 0x8008B4D0: jal         0x8008D218
    // 0x8008B4D4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8008D218_68618(rdram, ctx);
        goto after_1;
    // 0x8008B4D4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x8008B4D8: j           L_8008B4E8
    // 0x8008B4DC: nop

        goto L_8008B4E8;
    // 0x8008B4DC: nop

L_8008B4E0:
    // 0x8008B4E0: jal         0x8008E440
    // 0x8008B4E4: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    func_8008E440_69840(rdram, ctx);
        goto after_2;
    // 0x8008B4E4: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    after_2:
L_8008B4E8:
    // 0x8008B4E8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8008B4EC: jr          $ra
    // 0x8008B4F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8008B4F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8004E788_29B88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004E788: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8004E78C: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x8004E790: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8004E794: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x8004E798: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8004E79C: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    // 0x8004E7A0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8004E7A4: jal         0x8004E7C0
    // 0x8004E7A8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8004E7C0_29BC0(rdram, ctx);
        goto after_0;
    // 0x8004E7A8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x8004E7AC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8004E7B0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8004E7B4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8004E7B8: jr          $ra
    // 0x8004E7BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8004E7BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8002BEC4_72C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002BEC4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8002BEC8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8002BECC: addiu       $s1, $zero, 0xF
    ctx->r17 = ADD32(0, 0XF);
    // 0x8002BED0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8002BED4: lui         $s0, 0x8016
    ctx->r16 = S32(0X8016 << 16);
    // 0x8002BED8: addiu       $s0, $s0, 0x22AC
    ctx->r16 = ADD32(ctx->r16, 0X22AC);
    // 0x8002BEDC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
L_8002BEE0:
    // 0x8002BEE0: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8002BEE4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8002BEE8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8002BEEC: jal         0x8008AD34
    // 0x8002BEF0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008AD34_66134(rdram, ctx);
        goto after_0;
    // 0x8002BEF0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x8002BEF4: slti        $v0, $s1, 0x18
    ctx->r2 = SIGNED(ctx->r17) < 0X18 ? 1 : 0;
    // 0x8002BEF8: bne         $v0, $zero, L_8002BEE0
    if (ctx->r2 != 0) {
        // 0x8002BEFC: nop
    
            goto L_8002BEE0;
    }
    // 0x8002BEFC: nop

    // 0x8002BF00: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8002BF04: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8002BF08: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8002BF0C: jr          $ra
    // 0x8002BF10: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8002BF10: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80060DA0_3C1A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80060DA0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80060DA4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80060DA8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80060DAC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80060DB0: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x80060DB4: beq         $a1, $zero, L_80060ED0
    if (ctx->r5 == 0) {
        // 0x80060DB8: sw          $ra, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r31;
            goto L_80060ED0;
    }
    // 0x80060DB8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80060DBC: jal         0x8006036C
    // 0x80060DC0: addiu       $a0, $s0, 0x7E0
    ctx->r4 = ADD32(ctx->r16, 0X7E0);
    func_8006036C_3B76C(rdram, ctx);
        goto after_0;
    // 0x80060DC0: addiu       $a0, $s0, 0x7E0
    ctx->r4 = ADD32(ctx->r16, 0X7E0);
    after_0:
    // 0x80060DC4: beq         $s1, $zero, L_80060DF0
    if (ctx->r17 == 0) {
        // 0x80060DC8: addiu       $a2, $s0, 0x7C0
        ctx->r6 = ADD32(ctx->r16, 0X7C0);
            goto L_80060DF0;
    }
    // 0x80060DC8: addiu       $a2, $s0, 0x7C0
    ctx->r6 = ADD32(ctx->r16, 0X7C0);
    // 0x80060DCC: jal         0x8006036C
    // 0x80060DD0: addiu       $a0, $s0, 0x7C0
    ctx->r4 = ADD32(ctx->r16, 0X7C0);
    func_8006036C_3B76C(rdram, ctx);
        goto after_1;
    // 0x80060DD0: addiu       $a0, $s0, 0x7C0
    ctx->r4 = ADD32(ctx->r16, 0X7C0);
    after_1:
    // 0x80060DD4: j           L_80060FF8
    // 0x80060DD8: nop

        goto L_80060FF8;
    // 0x80060DD8: nop

L_80060DDC:
    // 0x80060DDC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80060DE0: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80060DE4: sb          $zero, 0x4E04($at)
    MEM_B(0X4E04, ctx->r1) = 0;
    // 0x80060DE8: j           L_80060E58
    // 0x80060DEC: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
        goto L_80060E58;
    // 0x80060DEC: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_80060DF0:
    // 0x80060DF0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80060DF4: addiu       $a0, $a0, 0x55A8
    ctx->r4 = ADD32(ctx->r4, 0X55A8);
    // 0x80060DF8: srl         $v0, $a2, 3
    ctx->r2 = S32(U32(ctx->r6) >> 3);
    // 0x80060DFC: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    // 0x80060E00: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80060E04: andi        $a1, $a2, 0x7
    ctx->r5 = ctx->r6 & 0X7;
    // 0x80060E08: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80060E0C: srav        $v0, $v0, $a1
    ctx->r2 = S32(SIGNED(ctx->r2) >> (ctx->r5 & 31));
    // 0x80060E10: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
    // 0x80060E14: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80060E18: addiu       $v0, $s0, 0x2C0
    ctx->r2 = ADD32(ctx->r16, 0X2C0);
    // 0x80060E1C: sltiu       $v0, $v0, 0x20
    ctx->r2 = ctx->r2 < 0X20 ? 1 : 0;
    // 0x80060E20: beq         $v0, $zero, L_80060FF8
    if (ctx->r2 == 0) {
        // 0x80060E24: sb          $v1, 0x0($a0)
        MEM_B(0X0, ctx->r4) = ctx->r3;
            goto L_80060FF8;
    }
    // 0x80060E24: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
    // 0x80060E28: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x80060E2C: addiu       $a0, $s0, 0x2C1
    ctx->r4 = ADD32(ctx->r16, 0X2C1);
L_80060E30:
    // 0x80060E30: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80060E34: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80060E38: lbu         $v0, 0x4E04($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4E04);
    // 0x80060E3C: beq         $v0, $a0, L_80060DDC
    if (ctx->r2 == ctx->r4) {
        // 0x80060E40: nop
    
            goto L_80060DDC;
    }
    // 0x80060E40: nop

    // 0x80060E44: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80060E48: slti        $v0, $v1, 0x20
    ctx->r2 = SIGNED(ctx->r3) < 0X20 ? 1 : 0;
    // 0x80060E4C: bne         $v0, $zero, L_80060E30
    if (ctx->r2 != 0) {
        // 0x80060E50: nop
    
            goto L_80060E30;
    }
    // 0x80060E50: nop

    // 0x80060E54: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_80060E58:
    // 0x80060E58: addiu       $a1, $a2, -0x4FF
    ctx->r5 = ADD32(ctx->r6, -0X4FF);
L_80060E5C:
    // 0x80060E5C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80060E60: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80060E64: lbu         $v0, 0x4E00($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4E00);
    // 0x80060E68: beq         $v0, $a1, L_80060EC0
    if (ctx->r2 == ctx->r5) {
        // 0x80060E6C: nop
    
            goto L_80060EC0;
    }
    // 0x80060E6C: nop

    // 0x80060E70: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80060E74: slti        $v0, $v1, 0x3
    ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x80060E78: beq         $v0, $zero, L_80060FF8
    if (ctx->r2 == 0) {
        // 0x80060E7C: nop
    
            goto L_80060FF8;
    }
    // 0x80060E7C: nop

    // 0x80060E80: j           L_80060E5C
    // 0x80060E84: nop

        goto L_80060E5C;
    // 0x80060E84: nop

L_80060E88:
    // 0x80060E88: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80060E8C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80060E90: sb          $zero, 0x4E04($at)
    MEM_B(0X4E04, ctx->r1) = 0;
    // 0x80060E94: j           L_80060F3C
    // 0x80060E98: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
        goto L_80060F3C;
    // 0x80060E98: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_80060E9C:
    // 0x80060E9C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80060EA0: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80060EA4: j           L_80060F64
    // 0x80060EA8: sb          $zero, 0x4E00($at)
    MEM_B(0X4E00, ctx->r1) = 0;
        goto L_80060F64;
    // 0x80060EA8: sb          $zero, 0x4E00($at)
    MEM_B(0X4E00, ctx->r1) = 0;
L_80060EAC:
    // 0x80060EAC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80060EB0: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80060EB4: sb          $zero, 0x4E04($at)
    MEM_B(0X4E04, ctx->r1) = 0;
    // 0x80060EB8: j           L_80060FD0
    // 0x80060EBC: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
        goto L_80060FD0;
    // 0x80060EBC: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_80060EC0:
    // 0x80060EC0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80060EC4: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80060EC8: j           L_80060FF8
    // 0x80060ECC: sb          $zero, 0x4E00($at)
    MEM_B(0X4E00, ctx->r1) = 0;
        goto L_80060FF8;
    // 0x80060ECC: sb          $zero, 0x4E00($at)
    MEM_B(0X4E00, ctx->r1) = 0;
L_80060ED0:
    // 0x80060ED0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80060ED4: addiu       $a0, $a0, 0x55A8
    ctx->r4 = ADD32(ctx->r4, 0X55A8);
    // 0x80060ED8: addiu       $a2, $s0, 0x7E0
    ctx->r6 = ADD32(ctx->r16, 0X7E0);
    // 0x80060EDC: srl         $v0, $a2, 3
    ctx->r2 = S32(U32(ctx->r6) >> 3);
    // 0x80060EE0: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    // 0x80060EE4: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80060EE8: andi        $a1, $a2, 0x7
    ctx->r5 = ctx->r6 & 0X7;
    // 0x80060EEC: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80060EF0: srav        $v0, $v0, $a1
    ctx->r2 = S32(SIGNED(ctx->r2) >> (ctx->r5 & 31));
    // 0x80060EF4: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
    // 0x80060EF8: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80060EFC: addiu       $v0, $s0, 0x2E0
    ctx->r2 = ADD32(ctx->r16, 0X2E0);
    // 0x80060F00: sltiu       $v0, $v0, 0x20
    ctx->r2 = ctx->r2 < 0X20 ? 1 : 0;
    // 0x80060F04: beq         $v0, $zero, L_80060F64
    if (ctx->r2 == 0) {
        // 0x80060F08: sb          $v1, 0x0($a0)
        MEM_B(0X0, ctx->r4) = ctx->r3;
            goto L_80060F64;
    }
    // 0x80060F08: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
    // 0x80060F0C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x80060F10: addiu       $a0, $s0, 0x2E1
    ctx->r4 = ADD32(ctx->r16, 0X2E1);
L_80060F14:
    // 0x80060F14: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80060F18: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80060F1C: lbu         $v0, 0x4E04($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4E04);
    // 0x80060F20: beq         $v0, $a0, L_80060E88
    if (ctx->r2 == ctx->r4) {
        // 0x80060F24: nop
    
            goto L_80060E88;
    }
    // 0x80060F24: nop

    // 0x80060F28: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80060F2C: slti        $v0, $v1, 0x20
    ctx->r2 = SIGNED(ctx->r3) < 0X20 ? 1 : 0;
    // 0x80060F30: bne         $v0, $zero, L_80060F14
    if (ctx->r2 != 0) {
        // 0x80060F34: nop
    
            goto L_80060F14;
    }
    // 0x80060F34: nop

    // 0x80060F38: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_80060F3C:
    // 0x80060F3C: addiu       $a1, $a2, -0x4FF
    ctx->r5 = ADD32(ctx->r6, -0X4FF);
L_80060F40:
    // 0x80060F40: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80060F44: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80060F48: lbu         $v0, 0x4E00($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4E00);
    // 0x80060F4C: beq         $v0, $a1, L_80060E9C
    if (ctx->r2 == ctx->r5) {
        // 0x80060F50: nop
    
            goto L_80060E9C;
    }
    // 0x80060F50: nop

    // 0x80060F54: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80060F58: slti        $v0, $v1, 0x3
    ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x80060F5C: bne         $v0, $zero, L_80060F40
    if (ctx->r2 != 0) {
        // 0x80060F60: nop
    
            goto L_80060F40;
    }
    // 0x80060F60: nop

L_80060F64:
    // 0x80060F64: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80060F68: addiu       $a0, $a0, 0x55A8
    ctx->r4 = ADD32(ctx->r4, 0X55A8);
    // 0x80060F6C: addiu       $a2, $s0, 0x7C0
    ctx->r6 = ADD32(ctx->r16, 0X7C0);
    // 0x80060F70: srl         $v0, $a2, 3
    ctx->r2 = S32(U32(ctx->r6) >> 3);
    // 0x80060F74: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    // 0x80060F78: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80060F7C: andi        $a1, $a2, 0x7
    ctx->r5 = ctx->r6 & 0X7;
    // 0x80060F80: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80060F84: srav        $v0, $v0, $a1
    ctx->r2 = S32(SIGNED(ctx->r2) >> (ctx->r5 & 31));
    // 0x80060F88: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
    // 0x80060F8C: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80060F90: addiu       $v0, $s0, 0x2C0
    ctx->r2 = ADD32(ctx->r16, 0X2C0);
    // 0x80060F94: sltiu       $v0, $v0, 0x20
    ctx->r2 = ctx->r2 < 0X20 ? 1 : 0;
    // 0x80060F98: beq         $v0, $zero, L_80060FF8
    if (ctx->r2 == 0) {
        // 0x80060F9C: sb          $v1, 0x0($a0)
        MEM_B(0X0, ctx->r4) = ctx->r3;
            goto L_80060FF8;
    }
    // 0x80060F9C: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
    // 0x80060FA0: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x80060FA4: addiu       $a0, $s0, 0x2C1
    ctx->r4 = ADD32(ctx->r16, 0X2C1);
L_80060FA8:
    // 0x80060FA8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80060FAC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80060FB0: lbu         $v0, 0x4E04($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4E04);
    // 0x80060FB4: beq         $v0, $a0, L_80060EAC
    if (ctx->r2 == ctx->r4) {
        // 0x80060FB8: nop
    
            goto L_80060EAC;
    }
    // 0x80060FB8: nop

    // 0x80060FBC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80060FC0: slti        $v0, $v1, 0x20
    ctx->r2 = SIGNED(ctx->r3) < 0X20 ? 1 : 0;
    // 0x80060FC4: bne         $v0, $zero, L_80060FA8
    if (ctx->r2 != 0) {
        // 0x80060FC8: nop
    
            goto L_80060FA8;
    }
    // 0x80060FC8: nop

    // 0x80060FCC: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_80060FD0:
    // 0x80060FD0: addiu       $a1, $a2, -0x4FF
    ctx->r5 = ADD32(ctx->r6, -0X4FF);
L_80060FD4:
    // 0x80060FD4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80060FD8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80060FDC: lbu         $v0, 0x4E00($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4E00);
    // 0x80060FE0: beq         $v0, $a1, L_80060EC0
    if (ctx->r2 == ctx->r5) {
        // 0x80060FE4: nop
    
            goto L_80060EC0;
    }
    // 0x80060FE4: nop

    // 0x80060FE8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80060FEC: slti        $v0, $v1, 0x3
    ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x80060FF0: bne         $v0, $zero, L_80060FD4
    if (ctx->r2 != 0) {
        // 0x80060FF4: nop
    
            goto L_80060FD4;
    }
    // 0x80060FF4: nop

L_80060FF8:
    // 0x80060FF8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80060FFC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80061000: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80061004: jr          $ra
    // 0x80061008: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80061008: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80071110_4C510(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80071110: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80071114: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80071118: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8007111C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80071120: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80071124: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80071128: lw          $v0, 0xC8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC8);
    // 0x8007112C: lui         $v1, 0xFF00
    ctx->r3 = S32(0XFF00 << 16);
    // 0x80071130: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80071134: beq         $v0, $zero, L_80071144
    if (ctx->r2 == 0) {
        // 0x80071138: addu        $s2, $a1, $zero
        ctx->r18 = ADD32(ctx->r5, 0);
            goto L_80071144;
    }
    // 0x80071138: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x8007113C: j           L_80071190
    // 0x80071140: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
        goto L_80071190;
    // 0x80071140: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
L_80071144:
    // 0x80071144: jal         0x8003F754
    // 0x80071148: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8003F754_1AB54(rdram, ctx);
        goto after_0;
    // 0x80071148: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x8007114C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80071150: beql        $s0, $zero, L_80071190
    if (ctx->r16 == 0) {
        // 0x80071154: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80071190;
    }
    goto skip_0;
    // 0x80071154: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
    // 0x80071158: blez        $s0, L_80071184
    if (SIGNED(ctx->r16) <= 0) {
        // 0x8007115C: andi        $v1, $s0, 0xFFFF
        ctx->r3 = ctx->r16 & 0XFFFF;
            goto L_80071184;
    }
    // 0x8007115C: andi        $v1, $s0, 0xFFFF
    ctx->r3 = ctx->r16 & 0XFFFF;
    // 0x80071160: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x80071164: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80071168: bne         $v0, $zero, L_80071184
    if (ctx->r2 != 0) {
        // 0x8007116C: lui         $v0, 0xF
        ctx->r2 = S32(0XF << 16);
            goto L_80071184;
    }
    // 0x8007116C: lui         $v0, 0xF
    ctx->r2 = S32(0XF << 16);
    // 0x80071170: and         $v0, $s0, $v0
    ctx->r2 = ctx->r16 & ctx->r2;
    // 0x80071174: beq         $v0, $zero, L_80071184
    if (ctx->r2 == 0) {
        // 0x80071178: andi        $a0, $s0, 0xFFFF
        ctx->r4 = ctx->r16 & 0XFFFF;
            goto L_80071184;
    }
    // 0x80071178: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    // 0x8007117C: jal         0x800711E8
    // 0x80071180: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_800711E8_4C5E8(rdram, ctx);
        goto after_1;
    // 0x80071180: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_1:
L_80071184:
    // 0x80071184: jal         0x80040F30
    // 0x80071188: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_2;
    // 0x80071188: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x8007118C: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_80071190:
    // 0x80071190: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80071194: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80071198: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8007119C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x800711A0: jr          $ra
    // 0x800711A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x800711A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80049B38_24F38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80049B38: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80049B3C: lw          $v0, 0x6B30($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6B30);
    // 0x80049B40: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80049B44: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80049B48: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x80049B4C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80049B50: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80049B54: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80049B58: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80049B5C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80049B60: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x80049B64: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80049B68: sw          $v0, 0x6B30($at)
    MEM_W(0X6B30, ctx->r1) = ctx->r2;
    // 0x80049B6C: lbu         $a1, 0xC($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XC);
    // 0x80049B70: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80049B74: lh          $v1, -0x3BBC($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X3BBC);
    // 0x80049B78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80049B7C: sllv        $v0, $v0, $a1
    ctx->r2 = S32(ctx->r2 << (ctx->r5 & 31));
    // 0x80049B80: blez        $v1, L_80049B94
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80049B84: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_80049B94;
    }
    // 0x80049B84: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80049B88: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x80049B8C: j           L_80049B98
    // 0x80049B90: srlv        $s2, $v0, $a1
    ctx->r18 = S32(U32(ctx->r2) >> (ctx->r5 & 31));
        goto L_80049B98;
    // 0x80049B90: srlv        $s2, $v0, $a1
    ctx->r18 = S32(U32(ctx->r2) >> (ctx->r5 & 31));
L_80049B94:
    // 0x80049B94: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
L_80049B98:
    // 0x80049B98: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80049B9C: lh          $v0, -0x3BBA($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X3BBA);
    // 0x80049BA0: lbu         $v1, 0xE($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XE);
    // 0x80049BA4: beq         $v1, $zero, L_80049BB8
    if (ctx->r3 == 0) {
        // 0x80049BA8: srav        $s5, $v0, $a1
        ctx->r21 = S32(SIGNED(ctx->r2) >> (ctx->r5 & 31));
            goto L_80049BB8;
    }
    // 0x80049BA8: srav        $s5, $v0, $a1
    ctx->r21 = S32(SIGNED(ctx->r2) >> (ctx->r5 & 31));
    // 0x80049BAC: lh          $s0, 0x14($a0)
    ctx->r16 = MEM_H(ctx->r4, 0X14);
    // 0x80049BB0: j           L_80049BC0
    // 0x80049BB4: lh          $a2, 0x16($a0)
    ctx->r6 = MEM_H(ctx->r4, 0X16);
        goto L_80049BC0;
    // 0x80049BB4: lh          $a2, 0x16($a0)
    ctx->r6 = MEM_H(ctx->r4, 0X16);
L_80049BB8:
    // 0x80049BB8: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80049BBC: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
L_80049BC0:
    // 0x80049BC0: lbu         $v0, 0xD($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD);
    // 0x80049BC4: beq         $v0, $zero, L_80049BDC
    if (ctx->r2 == 0) {
        // 0x80049BC8: nop
    
            goto L_80049BDC;
    }
    // 0x80049BC8: nop

    // 0x80049BCC: lh          $v0, 0x18($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X18);
    // 0x80049BD0: lh          $v1, 0x1A($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X1A);
    // 0x80049BD4: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x80049BD8: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
L_80049BDC:
    // 0x80049BDC: lui         $s3, 0x800B
    ctx->r19 = S32(0X800B << 16);
    // 0x80049BE0: addiu       $s3, $s3, -0x2F9C
    ctx->r19 = ADD32(ctx->r19, -0X2F9C);
    // 0x80049BE4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80049BE8: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
    // 0x80049BEC: sra         $s4, $v0, 16
    ctx->r20 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80049BF0: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x80049BF4: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x80049BF8: sra         $s1, $v0, 16
    ctx->r17 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80049BFC: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x80049C00: jal         0x80049CCC
    // 0x80049C04: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80049CCC_250CC(rdram, ctx);
        goto after_0;
    // 0x80049C04: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x80049C08: addiu       $a0, $s3, 0x14
    ctx->r4 = ADD32(ctx->r19, 0X14);
    // 0x80049C0C: addu        $a1, $s0, $s5
    ctx->r5 = ADD32(ctx->r16, ctx->r21);
    // 0x80049C10: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80049C14: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80049C18: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x80049C1C: jal         0x80049CCC
    // 0x80049C20: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80049CCC_250CC(rdram, ctx);
        goto after_1;
    // 0x80049C20: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x80049C24: blez        $s2, L_80049C84
    if (SIGNED(ctx->r18) <= 0) {
        // 0x80049C28: addiu       $a0, $s3, 0x3C
        ctx->r4 = ADD32(ctx->r19, 0X3C);
            goto L_80049C84;
    }
    // 0x80049C28: addiu       $a0, $s3, 0x3C
    ctx->r4 = ADD32(ctx->r19, 0X3C);
    // 0x80049C2C: addiu       $a1, $s0, -0x1
    ctx->r5 = ADD32(ctx->r16, -0X1);
    // 0x80049C30: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80049C34: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x80049C38: lhu         $a3, -0x2F56($a3)
    ctx->r7 = MEM_HU(ctx->r7, -0X2F56);
    // 0x80049C3C: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80049C40: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x80049C44: sll         $a3, $a3, 8
    ctx->r7 = S32(ctx->r7 << 8);
    // 0x80049C48: or          $a3, $a3, $s2
    ctx->r7 = ctx->r7 | ctx->r18;
    // 0x80049C4C: jal         0x80049CCC
    // 0x80049C50: andi        $a3, $a3, 0xFFFF
    ctx->r7 = ctx->r7 & 0XFFFF;
    func_80049CCC_250CC(rdram, ctx);
        goto after_2;
    // 0x80049C50: andi        $a3, $a3, 0xFFFF
    ctx->r7 = ctx->r7 & 0XFFFF;
    after_2:
    // 0x80049C54: addiu       $a0, $s3, 0x50
    ctx->r4 = ADD32(ctx->r19, 0X50);
    // 0x80049C58: addu        $a1, $s0, $s2
    ctx->r5 = ADD32(ctx->r16, ctx->r18);
    // 0x80049C5C: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x80049C60: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80049C64: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x80049C68: lhu         $a3, -0x2F42($a3)
    ctx->r7 = MEM_HU(ctx->r7, -0X2F42);
    // 0x80049C6C: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80049C70: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x80049C74: sll         $a3, $a3, 8
    ctx->r7 = S32(ctx->r7 << 8);
    // 0x80049C78: ori         $a3, $a3, 0x1
    ctx->r7 = ctx->r7 | 0X1;
    // 0x80049C7C: jal         0x80049CCC
    // 0x80049C80: andi        $a3, $a3, 0xFF01
    ctx->r7 = ctx->r7 & 0XFF01;
    func_80049CCC_250CC(rdram, ctx);
        goto after_3;
    // 0x80049C80: andi        $a3, $a3, 0xFF01
    ctx->r7 = ctx->r7 & 0XFF01;
    after_3:
L_80049C84:
    // 0x80049C84: addiu       $a0, $s3, 0x28
    ctx->r4 = ADD32(ctx->r19, 0X28);
    // 0x80049C88: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x80049C8C: lhu         $a3, -0x2F6A($a3)
    ctx->r7 = MEM_HU(ctx->r7, -0X2F6A);
    // 0x80049C90: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x80049C94: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x80049C98: sll         $a3, $a3, 8
    ctx->r7 = S32(ctx->r7 << 8);
    // 0x80049C9C: or          $a3, $a3, $s5
    ctx->r7 = ctx->r7 | ctx->r21;
    // 0x80049CA0: jal         0x80049CCC
    // 0x80049CA4: andi        $a3, $a3, 0xFFFF
    ctx->r7 = ctx->r7 & 0XFFFF;
    func_80049CCC_250CC(rdram, ctx);
        goto after_4;
    // 0x80049CA4: andi        $a3, $a3, 0xFFFF
    ctx->r7 = ctx->r7 & 0XFFFF;
    after_4:
    // 0x80049CA8: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80049CAC: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x80049CB0: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80049CB4: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80049CB8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80049CBC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80049CC0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80049CC4: jr          $ra
    // 0x80049CC8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80049CC8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80063110_3E510(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80063110: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80063114: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80063118: lui         $s0, 0x801A
    ctx->r16 = S32(0X801A << 16);
    // 0x8006311C: lw          $s0, -0x5858($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X5858);
    // 0x80063120: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80063124: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80063128: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8006312C: addiu       $v0, $s0, 0x10
    ctx->r2 = ADD32(ctx->r16, 0X10);
    // 0x80063130: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80063134: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x80063138: jal         0x80030660
    // 0x8006313C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80030660_BA60(rdram, ctx);
        goto after_0;
    // 0x8006313C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80063140: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80063144: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
    // 0x80063148: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
    // 0x8006314C: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x80063150: lbu         $a0, 0x7E($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X7E);
    // 0x80063154: lhu         $v1, 0x8($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X8);
    // 0x80063158: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x8006315C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80063160: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80063164: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80063168: addiu       $v1, $v1, -0x4
    ctx->r3 = ADD32(ctx->r3, -0X4);
    // 0x8006316C: sh          $v1, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r3;
    // 0x80063170: lbu         $a0, 0x7F($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X7F);
    // 0x80063174: lhu         $v1, 0xA($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0XA);
    // 0x80063178: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
    // 0x8006317C: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x80063180: addiu       $v0, $zero, 0xD0
    ctx->r2 = ADD32(0, 0XD0);
    // 0x80063184: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80063188: ori         $v0, $zero, 0x80BC
    ctx->r2 = 0 | 0X80BC;
    // 0x8006318C: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
    // 0x80063190: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80063194: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80063198: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8006319C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x800631A0: addiu       $v1, $v1, -0x4
    ctx->r3 = ADD32(ctx->r3, -0X4);
    // 0x800631A4: sh          $v1, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r3;
    // 0x800631A8: lb          $a0, 0x3D($s1)
    ctx->r4 = MEM_B(ctx->r17, 0X3D);
    // 0x800631AC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x800631B0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x800631B4: lw          $v0, 0x497C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X497C);
    // 0x800631B8: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x800631BC: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    // 0x800631C0: jal         0x8002FD30
    // 0x800631C4: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_8002FD30_B130(rdram, ctx);
        goto after_1;
    // 0x800631C4: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_1:
    // 0x800631C8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x800631CC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x800631D0: lui         $s0, 0x801A
    ctx->r16 = S32(0X801A << 16);
    // 0x800631D4: lw          $s0, -0x5858($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X5858);
    // 0x800631D8: addiu       $a2, $zero, 0x3C0
    ctx->r6 = ADD32(0, 0X3C0);
    // 0x800631DC: addiu       $v0, $s0, 0xC
    ctx->r2 = ADD32(ctx->r16, 0XC);
    // 0x800631E0: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x800631E4: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x800631E8: jal         0x80030284
    // 0x800631EC: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    func_80030284_B684(rdram, ctx);
        goto after_2;
    // 0x800631EC: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    after_2:
    // 0x800631F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x800631F4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x800631F8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x800631FC: andi        $a3, $v0, 0xFFFF
    ctx->r7 = ctx->r2 & 0XFFFF;
    // 0x80063200: jal         0x8003055C
    // 0x80063204: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8003055C_B95C(rdram, ctx);
        goto after_3;
    // 0x80063204: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x80063208: lb          $a0, 0x3D($s1)
    ctx->r4 = MEM_B(ctx->r17, 0X3D);
    // 0x8006320C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80063210: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80063214: lw          $v0, 0x497C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X497C);
    // 0x80063218: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x8006321C: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    // 0x80063220: jal         0x8002FD30
    // 0x80063224: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_8002FD30_B130(rdram, ctx);
        goto after_4;
    // 0x80063224: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_4:
    // 0x80063228: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8006322C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80063230: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80063234: jr          $ra
    // 0x80063238: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80063238: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80062654_3DA54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80062654: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80062658: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8006265C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80062660: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80062664: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x80062668: addiu       $v1, $zero, 0xED
    ctx->r3 = ADD32(0, 0XED);
    // 0x8006266C: sb          $v1, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r3;
    // 0x80062670: lb          $a1, 0x71($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X71);
    // 0x80062674: lb          $v0, 0x73($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X73);
    // 0x80062678: bne         $a1, $v0, L_80062918
    if (ctx->r5 != ctx->r2) {
        // 0x8006267C: sb          $zero, 0x78($s0)
        MEM_B(0X78, ctx->r16) = 0;
            goto L_80062918;
    }
    // 0x8006267C: sb          $zero, 0x78($s0)
    MEM_B(0X78, ctx->r16) = 0;
    // 0x80062680: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80062684: lui         $v1, 0xC0
    ctx->r3 = S32(0XC0 << 16);
    // 0x80062688: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8006268C: bne         $v0, $zero, L_80062918
    if (ctx->r2 != 0) {
        // 0x80062690: nop
    
            goto L_80062918;
    }
    // 0x80062690: nop

    // 0x80062694: lhu         $a0, 0xBA($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XBA);
    // 0x80062698: andi        $v0, $a0, 0x6000
    ctx->r2 = ctx->r4 & 0X6000;
    // 0x8006269C: bne         $v0, $zero, L_800627F8
    if (ctx->r2 != 0) {
        // 0x800626A0: addu        $a2, $a1, $zero
        ctx->r6 = ADD32(ctx->r5, 0);
            goto L_800627F8;
    }
    // 0x800626A0: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x800626A4: andi        $v0, $a0, 0x10
    ctx->r2 = ctx->r4 & 0X10;
    // 0x800626A8: beq         $v0, $zero, L_800626C0
    if (ctx->r2 == 0) {
        // 0x800626AC: lui         $v0, 0x10
        ctx->r2 = S32(0X10 << 16);
            goto L_800626C0;
    }
    // 0x800626AC: lui         $v0, 0x10
    ctx->r2 = S32(0X10 << 16);
    // 0x800626B0: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x800626B4: lbu         $v0, 0x2($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2);
    // 0x800626B8: j           L_80062790
    // 0x800626BC: sh          $zero, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = 0;
        goto L_80062790;
    // 0x800626BC: sh          $zero, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = 0;
L_800626C0:
    // 0x800626C0: lw          $a1, 0xB8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XB8);
    // 0x800626C4: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x800626C8: lui         $v1, 0x10
    ctx->r3 = S32(0X10 << 16);
    // 0x800626CC: and         $v0, $a1, $v0
    ctx->r2 = ctx->r5 & ctx->r2;
    // 0x800626D0: bne         $v0, $v1, L_800626F8
    if (ctx->r2 != ctx->r3) {
        // 0x800626D4: andi        $v0, $a0, 0x40
        ctx->r2 = ctx->r4 & 0X40;
            goto L_800626F8;
    }
    // 0x800626D4: andi        $v0, $a0, 0x40
    ctx->r2 = ctx->r4 & 0X40;
    // 0x800626D8: lhu         $v1, 0xBC($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XBC);
    // 0x800626DC: sltiu       $v0, $v1, 0xD
    ctx->r2 = ctx->r3 < 0XD ? 1 : 0;
    // 0x800626E0: bne         $v0, $zero, L_800627F4
    if (ctx->r2 != 0) {
        // 0x800626E4: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_800627F4;
    }
    // 0x800626E4: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x800626E8: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x800626EC: lbu         $v0, 0x2($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2);
    // 0x800626F0: j           L_8006278C
    // 0x800626F4: addiu       $v1, $zero, 0xC
    ctx->r3 = ADD32(0, 0XC);
        goto L_8006278C;
    // 0x800626F4: addiu       $v1, $zero, 0xC
    ctx->r3 = ADD32(0, 0XC);
L_800626F8:
    // 0x800626F8: beq         $v0, $zero, L_80062710
    if (ctx->r2 == 0) {
        // 0x800626FC: lui         $v0, 0x40
        ctx->r2 = S32(0X40 << 16);
            goto L_80062710;
    }
    // 0x800626FC: lui         $v0, 0x40
    ctx->r2 = S32(0X40 << 16);
    // 0x80062700: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x80062704: lbu         $v0, 0x2($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2);
    // 0x80062708: j           L_800627E8
    // 0x8006270C: sh          $zero, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = 0;
        goto L_800627E8;
    // 0x8006270C: sh          $zero, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = 0;
L_80062710:
    // 0x80062710: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x80062714: and         $v0, $a1, $v0
    ctx->r2 = ctx->r5 & ctx->r2;
    // 0x80062718: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x8006271C: bne         $v0, $v1, L_80062744
    if (ctx->r2 != ctx->r3) {
        // 0x80062720: andi        $v0, $a0, 0x80
        ctx->r2 = ctx->r4 & 0X80;
            goto L_80062744;
    }
    // 0x80062720: andi        $v0, $a0, 0x80
    ctx->r2 = ctx->r4 & 0X80;
    // 0x80062724: lhu         $v1, 0xBC($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XBC);
    // 0x80062728: sltiu       $v0, $v1, 0xD
    ctx->r2 = ctx->r3 < 0XD ? 1 : 0;
    // 0x8006272C: bne         $v0, $zero, L_800627F4
    if (ctx->r2 != 0) {
        // 0x80062730: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_800627F4;
    }
    // 0x80062730: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80062734: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x80062738: lbu         $v0, 0x2($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2);
    // 0x8006273C: j           L_800627E4
    // 0x80062740: addiu       $v1, $zero, 0xC
    ctx->r3 = ADD32(0, 0XC);
        goto L_800627E4;
    // 0x80062740: addiu       $v1, $zero, 0xC
    ctx->r3 = ADD32(0, 0XC);
L_80062744:
    // 0x80062744: beq         $v0, $zero, L_8006275C
    if (ctx->r2 == 0) {
        // 0x80062748: lui         $v0, 0x80
        ctx->r2 = S32(0X80 << 16);
            goto L_8006275C;
    }
    // 0x80062748: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8006274C: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x80062750: lbu         $v0, 0x1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1);
    // 0x80062754: j           L_80062790
    // 0x80062758: sh          $zero, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = 0;
        goto L_80062790;
    // 0x80062758: sh          $zero, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = 0;
L_8006275C:
    // 0x8006275C: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x80062760: and         $v0, $a1, $v0
    ctx->r2 = ctx->r5 & ctx->r2;
    // 0x80062764: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x80062768: bne         $v0, $v1, L_8006279C
    if (ctx->r2 != ctx->r3) {
        // 0x8006276C: andi        $v0, $a0, 0x20
        ctx->r2 = ctx->r4 & 0X20;
            goto L_8006279C;
    }
    // 0x8006276C: andi        $v0, $a0, 0x20
    ctx->r2 = ctx->r4 & 0X20;
    // 0x80062770: lhu         $v1, 0xBC($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XBC);
    // 0x80062774: sltiu       $v0, $v1, 0xD
    ctx->r2 = ctx->r3 < 0XD ? 1 : 0;
    // 0x80062778: bne         $v0, $zero, L_800627F4
    if (ctx->r2 != 0) {
        // 0x8006277C: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_800627F4;
    }
    // 0x8006277C: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80062780: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x80062784: lbu         $v0, 0x1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1);
    // 0x80062788: addiu       $v1, $zero, 0xC
    ctx->r3 = ADD32(0, 0XC);
L_8006278C:
    // 0x8006278C: sh          $v1, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = ctx->r3;
L_80062790:
    // 0x80062790: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
    // 0x80062794: j           L_800627F8
    // 0x80062798: sb          $v0, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r2;
        goto L_800627F8;
    // 0x80062798: sb          $v0, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r2;
L_8006279C:
    // 0x8006279C: beq         $v0, $zero, L_800627B4
    if (ctx->r2 == 0) {
        // 0x800627A0: lui         $v0, 0x20
        ctx->r2 = S32(0X20 << 16);
            goto L_800627B4;
    }
    // 0x800627A0: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x800627A4: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x800627A8: lbu         $v0, 0x1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1);
    // 0x800627AC: j           L_800627E8
    // 0x800627B0: sh          $zero, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = 0;
        goto L_800627E8;
    // 0x800627B0: sh          $zero, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = 0;
L_800627B4:
    // 0x800627B4: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x800627B8: and         $v0, $a1, $v0
    ctx->r2 = ctx->r5 & ctx->r2;
    // 0x800627BC: lui         $v1, 0x20
    ctx->r3 = S32(0X20 << 16);
    // 0x800627C0: bne         $v0, $v1, L_800627F8
    if (ctx->r2 != ctx->r3) {
        // 0x800627C4: nop
    
            goto L_800627F8;
    }
    // 0x800627C4: nop

    // 0x800627C8: lhu         $v1, 0xBC($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XBC);
    // 0x800627CC: sltiu       $v0, $v1, 0xD
    ctx->r2 = ctx->r3 < 0XD ? 1 : 0;
    // 0x800627D0: bne         $v0, $zero, L_800627F4
    if (ctx->r2 != 0) {
        // 0x800627D4: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_800627F4;
    }
    // 0x800627D4: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x800627D8: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x800627DC: lbu         $v0, 0x1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1);
    // 0x800627E0: addiu       $v1, $zero, 0xC
    ctx->r3 = ADD32(0, 0XC);
L_800627E4:
    // 0x800627E4: sh          $v1, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = ctx->r3;
L_800627E8:
    // 0x800627E8: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x800627EC: j           L_800627F8
    // 0x800627F0: sb          $v0, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r2;
        goto L_800627F8;
    // 0x800627F0: sb          $v0, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r2;
L_800627F4:
    // 0x800627F4: sh          $v0, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = ctx->r2;
L_800627F8:
    // 0x800627F8: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x800627FC: lb          $a0, -0x3C18($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X3C18);
    // 0x80062800: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80062804: beq         $a0, $v0, L_80062834
    if (ctx->r4 == ctx->r2) {
        // 0x80062808: addiu       $v1, $zero, 0x5
        ctx->r3 = ADD32(0, 0X5);
            goto L_80062834;
    }
    // 0x80062808: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x8006280C: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80062810: lb          $v0, 0x5448($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X5448);
    // 0x80062814: beq         $v0, $v1, L_80062834
    if (ctx->r2 == ctx->r3) {
        // 0x80062818: nop
    
            goto L_80062834;
    }
    // 0x80062818: nop

    // 0x8006281C: bne         $a0, $v1, L_800628C4
    if (ctx->r4 != ctx->r3) {
        // 0x80062820: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_800628C4;
    }
    // 0x80062820: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80062824: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80062828: lbu         $v1, -0x3E3F($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3E3F);
    // 0x8006282C: bne         $v1, $v0, L_800628C4
    if (ctx->r3 != ctx->r2) {
        // 0x80062830: nop
    
            goto L_800628C4;
    }
    // 0x80062830: nop

L_80062834:
    // 0x80062834: lb          $v1, 0x71($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X71);
    // 0x80062838: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x8006283C: bne         $v1, $v0, L_80062884
    if (ctx->r3 != ctx->r2) {
        // 0x80062840: addiu       $v0, $zero, 0xF
        ctx->r2 = ADD32(0, 0XF);
            goto L_80062884;
    }
    // 0x80062840: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x80062844: sb          $zero, 0x71($s0)
    MEM_B(0X71, ctx->r16) = 0;
    // 0x80062848: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8006284C: lbu         $v0, 0x599E($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X599E);
    // 0x80062850: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80062854: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80062858: sb          $v0, 0x599E($at)
    MEM_B(0X599E, ctx->r1) = ctx->r2;
    // 0x8006285C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80062860: bgez        $v0, L_8006287C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80062864: addiu       $a2, $zero, -0x1
        ctx->r6 = ADD32(0, -0X1);
            goto L_8006287C;
    }
    // 0x80062864: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80062868: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8006286C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80062870: sb          $v0, 0x599E($at)
    MEM_B(0X599E, ctx->r1) = ctx->r2;
    // 0x80062874: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80062878: sb          $v0, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r2;
L_8006287C:
    // 0x8006287C: lb          $v1, 0x71($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X71);
    // 0x80062880: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
L_80062884:
    // 0x80062884: bne         $v1, $v0, L_800628C4
    if (ctx->r3 != ctx->r2) {
        // 0x80062888: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_800628C4;
    }
    // 0x80062888: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8006288C: sb          $v0, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r2;
    // 0x80062890: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80062894: lbu         $v0, 0x599E($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X599E);
    // 0x80062898: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8006289C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800628A0: sb          $v0, 0x599E($at)
    MEM_B(0X599E, ctx->r1) = ctx->r2;
    // 0x800628A4: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x800628A8: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x800628AC: slti        $v0, $v0, 0xC
    ctx->r2 = SIGNED(ctx->r2) < 0XC ? 1 : 0;
    // 0x800628B0: bne         $v0, $zero, L_800628C4
    if (ctx->r2 != 0) {
        // 0x800628B4: addiu       $a2, $zero, -0x1
        ctx->r6 = ADD32(0, -0X1);
            goto L_800628C4;
    }
    // 0x800628B4: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x800628B8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800628BC: sb          $zero, 0x599E($at)
    MEM_B(0X599E, ctx->r1) = 0;
    // 0x800628C0: sb          $zero, 0x71($s0)
    MEM_B(0X71, ctx->r16) = 0;
L_800628C4:
    // 0x800628C4: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x800628C8: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x800628CC: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x800628D0: lbu         $v0, 0x78($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X78);
    // 0x800628D4: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x800628D8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x800628DC: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
    // 0x800628E0: addiu       $v1, $v1, 0x3
    ctx->r3 = ADD32(ctx->r3, 0X3);
    // 0x800628E4: sb          $v0, 0x78($s0)
    MEM_B(0X78, ctx->r16) = ctx->r2;
    // 0x800628E8: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x800628EC: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x800628F0: sw          $v1, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->r3;
    // 0x800628F4: lb          $v1, 0x71($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X71);
    // 0x800628F8: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x800628FC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80062900: beq         $v0, $v1, L_80062918
    if (ctx->r2 == ctx->r3) {
        // 0x80062904: sw          $a0, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r4;
            goto L_80062918;
    }
    // 0x80062904: sw          $a0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r4;
    // 0x80062908: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    // 0x8006290C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80062910: jal         0x8002A2F8
    // 0x80062914: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_0;
    // 0x80062914: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
L_80062918:
    // 0x80062918: lbu         $v0, 0x73($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X73);
    // 0x8006291C: lbu         $v1, 0x78($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X78);
    // 0x80062920: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x80062924: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80062928: addiu       $v1, $v1, 0x50
    ctx->r3 = ADD32(ctx->r3, 0X50);
    // 0x8006292C: addiu       $a0, $a0, 0x3
    ctx->r4 = ADD32(ctx->r4, 0X3);
    // 0x80062930: sb          $v1, 0x78($s0)
    MEM_B(0X78, ctx->r16) = ctx->r3;
    // 0x80062934: sb          $v0, 0x73($s0)
    MEM_B(0X73, ctx->r16) = ctx->r2;
    // 0x80062938: sw          $a0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r4;
    // 0x8006293C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80062940: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80062944: jr          $ra
    // 0x80062948: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80062948: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80035458_10858(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80035458: jr          $ra
    // 0x8003545C: nop

    TRACE_RETURN()
    return;
    // 0x8003545C: nop

;}
RECOMP_FUNC void func_80054660_2FA60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80054660: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80054664: sw          $a0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r4;
    // 0x80054668: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8005466C: lbu         $a0, -0x2338($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X2338);
    // 0x80054670: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x80054674: lbu         $a1, -0x2337($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X2337);
    // 0x80054678: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x8005467C: lbu         $a2, -0x2336($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X2336);
    // 0x80054680: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80054684: lhu         $a3, 0x56EC($a3)
    ctx->r7 = MEM_HU(ctx->r7, 0X56EC);
    // 0x80054688: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8005468C: jal         0x8005471C
    // 0x80054690: nop

    func_8005471C_2FB1C(rdram, ctx);
        goto after_0;
    // 0x80054690: nop

    after_0:
    // 0x80054694: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80054698: jr          $ra
    // 0x8005469C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8005469C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8003BC68_17068(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003BC68: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
    // 0x8003BC6C: beq         $t0, $zero, L_8003BCF0
    if (ctx->r8 == 0) {
        // 0x8003BC70: nop
    
            goto L_8003BCF0;
    }
    // 0x8003BC70: nop

    // 0x8003BC74: lw          $v1, 0xC($a3)
    ctx->r3 = MEM_W(ctx->r7, 0XC);
    // 0x8003BC78: andi        $v0, $v1, 0x8000
    ctx->r2 = ctx->r3 & 0X8000;
    // 0x8003BC7C: beq         $v0, $zero, L_8003BCF0
    if (ctx->r2 == 0) {
        // 0x8003BC80: slti        $v1, $v1, 0x0
        ctx->r3 = SIGNED(ctx->r3) < 0X0 ? 1 : 0;
            goto L_8003BCF0;
    }
    // 0x8003BC80: slti        $v1, $v1, 0x0
    ctx->r3 = SIGNED(ctx->r3) < 0X0 ? 1 : 0;
    // 0x8003BC84: sll         $a0, $a1, 6
    ctx->r4 = S32(ctx->r5 << 6);
    // 0x8003BC88: lbu         $v0, 0x0($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X0);
    // 0x8003BC8C: addu        $a0, $t0, $a0
    ctx->r4 = ADD32(ctx->r8, ctx->r4);
    // 0x8003BC90: addiu       $v1, $v1, 0x5
    ctx->r3 = ADD32(ctx->r3, 0X5);
    // 0x8003BC94: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x8003BC98: sh          $v0, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r2;
    // 0x8003BC9C: lbu         $v0, 0x1($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X1);
    // 0x8003BCA0: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x8003BCA4: sh          $v0, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r2;
    // 0x8003BCA8: lbu         $v0, 0x2($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X2);
    // 0x8003BCAC: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x8003BCB0: sh          $v0, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r2;
    // 0x8003BCB4: lbu         $v0, 0x3($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X3);
    // 0x8003BCB8: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x8003BCBC: sh          $v0, 0x1A($a0)
    MEM_H(0X1A, ctx->r4) = ctx->r2;
    // 0x8003BCC0: lbu         $v0, 0x4($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X4);
    // 0x8003BCC4: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x8003BCC8: sh          $v0, 0x28($a0)
    MEM_H(0X28, ctx->r4) = ctx->r2;
    // 0x8003BCCC: lbu         $v0, 0x5($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X5);
    // 0x8003BCD0: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x8003BCD4: sh          $v0, 0x2A($a0)
    MEM_H(0X2A, ctx->r4) = ctx->r2;
    // 0x8003BCD8: lbu         $v0, 0x6($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X6);
    // 0x8003BCDC: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x8003BCE0: sh          $v0, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r2;
    // 0x8003BCE4: lbu         $v0, 0x7($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X7);
    // 0x8003BCE8: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x8003BCEC: sh          $v0, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r2;
L_8003BCF0:
    // 0x8003BCF0: jr          $ra
    // 0x8003BCF4: nop

    TRACE_RETURN()
    return;
    // 0x8003BCF4: nop

    // 0x8003BCF8: nop

    // 0x8003BCFC: nop

;}
RECOMP_FUNC void func_80054AC4_2FEC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80054AC4: lui         $a3, 0x8018
    ctx->r7 = S32(0X8018 << 16);
    // 0x80054AC8: addiu       $a3, $a3, -0x49EA
    ctx->r7 = ADD32(ctx->r7, -0X49EA);
    // 0x80054ACC: lbu         $v0, 0x0($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X0);
    // 0x80054AD0: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x80054AD4: beq         $v0, $v1, L_80054B8C
    if (ctx->r2 == ctx->r3) {
        // 0x80054AD8: nop
    
            goto L_80054B8C;
    }
    // 0x80054AD8: nop

    // 0x80054ADC: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80054AE0: lbu         $v0, -0x49D6($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X49D6);
    // 0x80054AE4: beq         $v0, $v1, L_80054B8C
    if (ctx->r2 == ctx->r3) {
        // 0x80054AE8: nop
    
            goto L_80054B8C;
    }
    // 0x80054AE8: nop

    // 0x80054AEC: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80054AF0: lbu         $v0, -0x49C2($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X49C2);
    // 0x80054AF4: beq         $v0, $v1, L_80054B8C
    if (ctx->r2 == ctx->r3) {
        // 0x80054AF8: nop
    
            goto L_80054B8C;
    }
    // 0x80054AF8: nop

    // 0x80054AFC: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80054B00: lbu         $v0, -0x49AE($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X49AE);
    // 0x80054B04: beq         $v0, $v1, L_80054B8C
    if (ctx->r2 == ctx->r3) {
        // 0x80054B08: nop
    
            goto L_80054B8C;
    }
    // 0x80054B08: nop

    // 0x80054B0C: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80054B10: lw          $v0, -0x49A0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X49A0);
    // 0x80054B14: sltiu       $v0, $v0, 0x4
    ctx->r2 = ctx->r2 < 0X4 ? 1 : 0;
    // 0x80054B18: beq         $v0, $zero, L_80054B8C
    if (ctx->r2 == 0) {
        // 0x80054B1C: nop
    
            goto L_80054B8C;
    }
    // 0x80054B1C: nop

    // 0x80054B20: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x80054B24: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80054B28: addiu       $a2, $a3, 0x9
    ctx->r6 = ADD32(ctx->r7, 0X9);
    // 0x80054B2C: addu        $v1, $a3, $zero
    ctx->r3 = ADD32(ctx->r7, 0);
    // 0x80054B30: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
L_80054B34:
    // 0x80054B34: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80054B38: bnel        $v0, $zero, L_80054B78
    if (ctx->r2 != 0) {
        // 0x80054B3C: addiu       $a2, $a2, 0x14
        ctx->r6 = ADD32(ctx->r6, 0X14);
            goto L_80054B78;
    }
    goto skip_0;
    // 0x80054B3C: addiu       $a2, $a2, 0x14
    ctx->r6 = ADD32(ctx->r6, 0X14);
    skip_0:
    // 0x80054B40: sb          $a0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r4;
    // 0x80054B44: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80054B48: addu        $at, $at, $a3
    ctx->r1 = ADD32(ctx->r1, ctx->r7);
    // 0x80054B4C: sw          $a1, -0x49E0($at)
    MEM_W(-0X49E0, ctx->r1) = ctx->r5;
    // 0x80054B50: lb          $v0, 0x0($a2)
    ctx->r2 = MEM_B(ctx->r6, 0X0);
    // 0x80054B54: beql        $v0, $zero, L_80054B60
    if (ctx->r2 == 0) {
        // 0x80054B58: sb          $t1, 0x0($a2)
        MEM_B(0X0, ctx->r6) = ctx->r9;
            goto L_80054B60;
    }
    goto skip_1;
    // 0x80054B58: sb          $t1, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r9;
    skip_1:
    // 0x80054B5C: sb          $zero, 0x0($a2)
    MEM_B(0X0, ctx->r6) = 0;
L_80054B60:
    // 0x80054B60: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80054B64: lw          $v0, -0x49A0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X49A0);
    // 0x80054B68: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80054B6C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80054B70: j           L_80054B8C
    // 0x80054B74: sw          $v0, -0x49A0($at)
    MEM_W(-0X49A0, ctx->r1) = ctx->r2;
        goto L_80054B8C;
    // 0x80054B74: sw          $v0, -0x49A0($at)
    MEM_W(-0X49A0, ctx->r1) = ctx->r2;
L_80054B78:
    // 0x80054B78: addiu       $v1, $v1, 0x14
    ctx->r3 = ADD32(ctx->r3, 0X14);
    // 0x80054B7C: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80054B80: sltiu       $v0, $t0, 0x4
    ctx->r2 = ctx->r8 < 0X4 ? 1 : 0;
    // 0x80054B84: bne         $v0, $zero, L_80054B34
    if (ctx->r2 != 0) {
        // 0x80054B88: addiu       $a3, $a3, 0x14
        ctx->r7 = ADD32(ctx->r7, 0X14);
            goto L_80054B34;
    }
    // 0x80054B88: addiu       $a3, $a3, 0x14
    ctx->r7 = ADD32(ctx->r7, 0X14);
L_80054B8C:
    // 0x80054B8C: jr          $ra
    // 0x80054B90: nop

    TRACE_RETURN()
    return;
    // 0x80054B90: nop

;}
RECOMP_FUNC void func_8006F4CC_4A8CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006F4CC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8006F4D0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8006F4D4: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x8006F4D8: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8006F4DC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8006F4E0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8006F4E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8006F4E8: lbu         $v1, 0xA($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0XA);
    // 0x8006F4EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006F4F0: beq         $v1, $v0, L_8006F540
    if (ctx->r3 == ctx->r2) {
        // 0x8006F4F4: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8006F540;
    }
    // 0x8006F4F4: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8006F4F8: beql        $v0, $zero, L_8006F510
    if (ctx->r2 == 0) {
        // 0x8006F4FC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8006F510;
    }
    goto skip_0;
    // 0x8006F4FC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8006F500: beq         $v1, $zero, L_8006F520
    if (ctx->r3 == 0) {
        // 0x8006F504: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_8006F520;
    }
    // 0x8006F504: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8006F508: j           L_8006F5C4
    // 0x8006F50C: nop

        goto L_8006F5C4;
    // 0x8006F50C: nop

L_8006F510:
    // 0x8006F510: beq         $v1, $v0, L_8006F5BC
    if (ctx->r3 == ctx->r2) {
        // 0x8006F514: addiu       $v0, $zero, 0xC
        ctx->r2 = ADD32(0, 0XC);
            goto L_8006F5BC;
    }
    // 0x8006F514: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8006F518: j           L_8006F5C4
    // 0x8006F51C: nop

        goto L_8006F5C4;
    // 0x8006F51C: nop

L_8006F520:
    // 0x8006F520: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x8006F524: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8006F528: jal         0x8006FB90
    // 0x8006F52C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8006FB90_4AF90(rdram, ctx);
        goto after_0;
    // 0x8006F52C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x8006F530: lbu         $v0, 0xA($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0XA);
    // 0x8006F534: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8006F538: j           L_8006F5C4
    // 0x8006F53C: sb          $v0, 0xA($s3)
    MEM_B(0XA, ctx->r19) = ctx->r2;
        goto L_8006F5C4;
    // 0x8006F53C: sb          $v0, 0xA($s3)
    MEM_B(0XA, ctx->r19) = ctx->r2;
L_8006F540:
    // 0x8006F540: addiu       $a0, $s3, 0x2C
    ctx->r4 = ADD32(ctx->r19, 0X2C);
    // 0x8006F544: addiu       $s0, $s3, 0x14
    ctx->r16 = ADD32(ctx->r19, 0X14);
    // 0x8006F548: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8006F54C: jal         0x8009A3B4
    // 0x8006F550: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8006F550: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8006F554: addiu       $a0, $s3, 0x34
    ctx->r4 = ADD32(ctx->r19, 0X34);
    // 0x8006F558: addiu       $s2, $s3, 0x1C
    ctx->r18 = ADD32(ctx->r19, 0X1C);
    // 0x8006F55C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8006F560: jal         0x8009A3B4
    // 0x8006F564: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8006F564: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x8006F568: addiu       $a0, $s3, 0x5C
    ctx->r4 = ADD32(ctx->r19, 0X5C);
    // 0x8006F56C: addiu       $s1, $s3, 0x54
    ctx->r17 = ADD32(ctx->r19, 0X54);
    // 0x8006F570: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8006F574: jal         0x8009A3B4
    // 0x8006F578: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8006F578: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x8006F57C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006F580: lbu         $v0, 0xAC($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0XAC);
    // 0x8006F584: addiu       $a1, $s3, 0x438
    ctx->r5 = ADD32(ctx->r19, 0X438);
    // 0x8006F588: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8006F58C: jal         0x8009A3B4
    // 0x8006F590: sb          $v0, 0xAD($s3)
    MEM_B(0XAD, ctx->r19) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8006F590: sb          $v0, 0xAD($s3)
    MEM_B(0XAD, ctx->r19) = ctx->r2;
    after_4:
    // 0x8006F594: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8006F598: addiu       $a1, $s3, 0x428
    ctx->r5 = ADD32(ctx->r19, 0X428);
    // 0x8006F59C: jal         0x8009A3B4
    // 0x8006F5A0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8006F5A0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_5:
    // 0x8006F5A4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8006F5A8: addiu       $a1, $s3, 0x440
    ctx->r5 = ADD32(ctx->r19, 0X440);
    // 0x8006F5AC: jal         0x8009A3B4
    // 0x8006F5B0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8006F5B0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x8006F5B4: j           L_8006F5C4
    // 0x8006F5B8: nop

        goto L_8006F5C4;
    // 0x8006F5B8: nop

L_8006F5BC:
    // 0x8006F5BC: sb          $v0, 0x9($s3)
    MEM_B(0X9, ctx->r19) = ctx->r2;
    // 0x8006F5C0: sb          $zero, 0xA($s3)
    MEM_B(0XA, ctx->r19) = 0;
L_8006F5C4:
    // 0x8006F5C4: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8006F5C8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8006F5CC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8006F5D0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8006F5D4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8006F5D8: jr          $ra
    // 0x8006F5DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8006F5DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80073F90_4F390(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80073F90: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80073F94: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80073F98: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80073F9C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80073FA0: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x80073FA4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80073FA8: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x80073FAC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80073FB0: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80073FB4: jal         0x80087570
    // 0x80073FB8: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    Graph_ThreadStop(rdram, ctx);
        goto after_0;
    // 0x80073FB8: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    after_0:
    // 0x80073FBC: bne         $s0, $zero, L_80073FF8
    if (ctx->r16 != 0) {
        // 0x80073FC0: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80073FF8;
    }
    // 0x80073FC0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80073FC4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80073FC8: jal         0x800875E8
    // 0x80073FCC: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    func_800875E8_629E8(rdram, ctx);
        goto after_1;
    // 0x80073FCC: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_1:
    // 0x80073FD0: beq         $v0, $zero, L_80073FF8
    if (ctx->r2 == 0) {
        // 0x80073FD4: nop
    
            goto L_80073FF8;
    }
    // 0x80073FD4: nop

    // 0x80073FD8: jal         0x80087590
    // 0x80073FDC: nop

    func_80087590_62990(rdram, ctx);
        goto after_2;
    // 0x80073FDC: nop

    after_2:
    // 0x80073FE0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80073FE4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80073FE8: jal         0x8005CC60
    // 0x80073FEC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8005CC60_38060(rdram, ctx);
        goto after_3;
    // 0x80073FEC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x80073FF0: j           L_80074004
    // 0x80073FF4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_80074004;
    // 0x80073FF4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80073FF8:
    // 0x80073FF8: jal         0x80087590
    // 0x80073FFC: nop

    func_80087590_62990(rdram, ctx);
        goto after_4;
    // 0x80073FFC: nop

    after_4:
    // 0x80074000: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80074004:
    // 0x80074004: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80074008: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8007400C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80074010: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80074014: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80074018: jr          $ra
    // 0x8007401C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8007401C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800870A0_624A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800870A0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x800870A4: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x800870A8: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x800870AC: addu        $s5, $a1, $zero
    ctx->r21 = ADD32(ctx->r5, 0);
    // 0x800870B0: sw          $ra, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r31;
    // 0x800870B4: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x800870B8: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x800870BC: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x800870C0: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x800870C4: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x800870C8: lh          $v0, 0x6($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X6);
    // 0x800870CC: addu        $t0, $s5, $zero
    ctx->r8 = ADD32(ctx->r21, 0);
    // 0x800870D0: blez        $v0, L_8008716C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x800870D4: addu        $t1, $zero, $zero
        ctx->r9 = ADD32(0, 0);
            goto L_8008716C;
    }
    // 0x800870D4: addu        $t1, $zero, $zero
    ctx->r9 = ADD32(0, 0);
    // 0x800870D8: addiu       $t2, $zero, -0x2
    ctx->r10 = ADD32(0, -0X2);
L_800870DC:
    // 0x800870DC: lh          $v0, 0x4($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X4);
    // 0x800870E0: blez        $v0, L_80087158
    if (SIGNED(ctx->r2) <= 0) {
        // 0x800870E4: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_80087158;
    }
    // 0x800870E4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_800870E8:
    // 0x800870E8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x800870EC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x800870F0: addu        $v1, $t0, $zero
    ctx->r3 = ADD32(ctx->r8, 0);
L_800870F4:
    // 0x800870F4: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x800870F8: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x800870FC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80087100: slti        $v0, $a1, 0x10
    ctx->r2 = SIGNED(ctx->r5) < 0X10 ? 1 : 0;
    // 0x80087104: bne         $v0, $zero, L_800870F4
    if (ctx->r2 != 0) {
        // 0x80087108: addiu       $v1, $v1, 0x2
        ctx->r3 = ADD32(ctx->r3, 0X2);
            goto L_800870F4;
    }
    // 0x80087108: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x8008710C: bgez        $a0, L_80087118
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80087110: addu        $v0, $a0, $zero
        ctx->r2 = ADD32(ctx->r4, 0);
            goto L_80087118;
    }
    // 0x80087110: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x80087114: addiu       $v0, $a0, 0xF
    ctx->r2 = ADD32(ctx->r4, 0XF);
L_80087118:
    // 0x80087118: sra         $a0, $v0, 4
    ctx->r4 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8008711C: and         $a0, $a0, $t2
    ctx->r4 = ctx->r4 & ctx->r10;
    // 0x80087120: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80087124: addu        $v1, $t0, $zero
    ctx->r3 = ADD32(ctx->r8, 0);
L_80087128:
    // 0x80087128: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x8008712C: beql        $v0, $zero, L_80087134
    if (ctx->r2 == 0) {
        // 0x80087130: sh          $a0, 0x0($v1)
        MEM_H(0X0, ctx->r3) = ctx->r4;
            goto L_80087134;
    }
    goto skip_0;
    // 0x80087130: sh          $a0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r4;
    skip_0:
L_80087134:
    // 0x80087134: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80087138: slti        $v0, $a1, 0x10
    ctx->r2 = SIGNED(ctx->r5) < 0X10 ? 1 : 0;
    // 0x8008713C: bne         $v0, $zero, L_80087128
    if (ctx->r2 != 0) {
        // 0x80087140: addiu       $v1, $v1, 0x2
        ctx->r3 = ADD32(ctx->r3, 0X2);
            goto L_80087128;
    }
    // 0x80087140: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x80087144: lh          $v0, 0x4($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X4);
    // 0x80087148: addiu       $a2, $a2, 0x10
    ctx->r6 = ADD32(ctx->r6, 0X10);
    // 0x8008714C: slt         $v0, $a2, $v0
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80087150: bne         $v0, $zero, L_800870E8
    if (ctx->r2 != 0) {
        // 0x80087154: addiu       $t0, $t0, 0x20
        ctx->r8 = ADD32(ctx->r8, 0X20);
            goto L_800870E8;
    }
    // 0x80087154: addiu       $t0, $t0, 0x20
    ctx->r8 = ADD32(ctx->r8, 0X20);
L_80087158:
    // 0x80087158: lh          $v0, 0x6($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X6);
    // 0x8008715C: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x80087160: slt         $v0, $t1, $v0
    ctx->r2 = SIGNED(ctx->r9) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80087164: bne         $v0, $zero, L_800870DC
    if (ctx->r2 != 0) {
        // 0x80087168: nop
    
            goto L_800870DC;
    }
    // 0x80087168: nop

L_8008716C:
    // 0x8008716C: lh          $s1, 0x0($a3)
    ctx->r17 = MEM_H(ctx->r7, 0X0);
    // 0x80087170: lh          $s4, 0x2($a3)
    ctx->r20 = MEM_H(ctx->r7, 0X2);
    // 0x80087174: lh          $s3, 0x4($a3)
    ctx->r19 = MEM_H(ctx->r7, 0X4);
    // 0x80087178: lh          $s2, 0x6($a3)
    ctx->r18 = MEM_H(ctx->r7, 0X6);
    // 0x8008717C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80087180: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x80087184: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x80087188: jal         0x80087394
    // 0x8008718C: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    func_80087394_62794(rdram, ctx);
        goto after_0;
    // 0x8008718C: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    after_0:
    // 0x80087190: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80087194: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80087198: beq         $v1, $v0, L_800871E0
    if (ctx->r3 == ctx->r2) {
        // 0x8008719C: addu        $s0, $s4, $zero
        ctx->r16 = ADD32(ctx->r20, 0);
            goto L_800871E0;
    }
    // 0x8008719C: addu        $s0, $s4, $zero
    ctx->r16 = ADD32(ctx->r20, 0);
    // 0x800871A0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x800871A4: beql        $v0, $zero, L_800871BC
    if (ctx->r2 == 0) {
        // 0x800871A8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_800871BC;
    }
    goto skip_1;
    // 0x800871A8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_1:
    // 0x800871AC: beq         $v1, $zero, L_800871CC
    if (ctx->r3 == 0) {
        // 0x800871B0: addu        $a1, $s5, $zero
        ctx->r5 = ADD32(ctx->r21, 0);
            goto L_800871CC;
    }
    // 0x800871B0: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x800871B4: j           L_80087224
    // 0x800871B8: nop

        goto L_80087224;
    // 0x800871B8: nop

L_800871BC:
    // 0x800871BC: beql        $v1, $v0, L_80087210
    if (ctx->r3 == ctx->r2) {
        // 0x800871C0: sw          $s2, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r18;
            goto L_80087210;
    }
    goto skip_2;
    // 0x800871C0: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    skip_2:
    // 0x800871C4: j           L_80087224
    // 0x800871C8: nop

        goto L_80087224;
    // 0x800871C8: nop

L_800871CC:
    // 0x800871CC: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x800871D0: addiu       $a0, $a0, -0x3410
    ctx->r4 = ADD32(ctx->r4, -0X3410);
    // 0x800871D4: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x800871D8: j           L_800871F4
    // 0x800871DC: addiu       $a3, $s0, -0xF0
    ctx->r7 = ADD32(ctx->r16, -0XF0);
        goto L_800871F4;
    // 0x800871DC: addiu       $a3, $s0, -0xF0
    ctx->r7 = ADD32(ctx->r16, -0XF0);
L_800871E0:
    // 0x800871E0: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x800871E4: addiu       $a0, $a0, -0x2F10
    ctx->r4 = ADD32(ctx->r4, -0X2F10);
    // 0x800871E8: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x800871EC: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x800871F0: addiu       $a3, $s0, -0x1F0
    ctx->r7 = ADD32(ctx->r16, -0X1F0);
L_800871F4:
    // 0x800871F4: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x800871F8: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    // 0x800871FC: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x80087200: jal         0x80087420
    // 0x80087204: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    func_80087420_62820(rdram, ctx);
        goto after_1;
    // 0x80087204: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    after_1:
    // 0x80087208: j           L_80087224
    // 0x8008720C: nop

        goto L_80087224;
    // 0x8008720C: nop

L_80087210:
    // 0x80087210: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x80087214: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80087218: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    // 0x8008721C: jal         0x8002C8EC
    // 0x80087220: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    func_8002C8EC_7CEC(rdram, ctx);
        goto after_2;
    // 0x80087220: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    after_2:
L_80087224:
    // 0x80087224: lw          $ra, 0x48($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X48);
    // 0x80087228: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x8008722C: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x80087230: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x80087234: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80087238: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8008723C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80087240: jr          $ra
    // 0x80087244: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x80087244: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_8005CE58_38258(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8005CE58: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8005CE5C: lh          $v1, -0x12FA($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X12FA);
    // 0x8005CE60: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8005CE64: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8005CE68: sw          $fp, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r30;
    // 0x8005CE6C: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x8005CE70: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x8005CE74: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x8005CE78: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8005CE7C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8005CE80: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8005CE84: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8005CE88: sltiu       $v0, $v1, 0x8
    ctx->r2 = ctx->r3 < 0X8 ? 1 : 0;
    // 0x8005CE8C: beq         $v0, $zero, L_8005D04C
    if (ctx->r2 == 0) {
        // 0x8005CE90: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_8005D04C;
    }
    // 0x8005CE90: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8005CE94: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8005CE98: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8005CE9C: addu        $at, $at, $v0
    gpr jr_addend_8005CEA4 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8005CEA0: lw          $v0, 0x2700($at)
    ctx->r2 = ADD32(ctx->r1, 0X2700);
    // 0x8005CEA4: jr          $v0
    // 0x8005CEA8: nop

    switch (jr_addend_8005CEA4 >> 2) {
        case 0: goto L_8005CEAC; break;
        case 1: goto L_8005CED0; break;
        case 2: goto L_8005CF10; break;
        case 3: goto L_8005CF28; break;
        case 4: goto L_8005CF5C; break;
        case 5: goto L_8005CF80; break;
        case 6: goto L_8005CFD4; break;
        case 7: goto L_8005D00C; break;
        default: switch_error(__func__, 0x8005CEA4, 0x800D2700);
    }
    // 0x8005CEA8: nop

L_8005CEAC:
    // 0x8005CEAC: addiu       $a0, $zero, 0x27
    ctx->r4 = ADD32(0, 0X27);
    // 0x8005CEB0: jal         0x80036340
    // 0x8005CEB4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80036340_11740(rdram, ctx);
        goto after_0;
    // 0x8005CEB4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x8005CEB8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8005CEBC: lhu         $v0, -0x12FA($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X12FA);
    // 0x8005CEC0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8005CEC4: sw          $zero, -0x12F8($at)
    MEM_W(-0X12F8, ctx->r1) = 0;
    // 0x8005CEC8: j           L_8005CF44
    // 0x8005CECC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
        goto L_8005CF44;
    // 0x8005CECC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
L_8005CED0:
    // 0x8005CED0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8005CED4: lw          $v0, -0x12F8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X12F8);
    // 0x8005CED8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8005CEDC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8005CEE0: sw          $v0, -0x12F8($at)
    MEM_W(-0X12F8, ctx->r1) = ctx->r2;
    // 0x8005CEE4: slti        $v0, $v0, 0x3D
    ctx->r2 = SIGNED(ctx->r2) < 0X3D ? 1 : 0;
    // 0x8005CEE8: bne         $v0, $zero, L_8005D148
    if (ctx->r2 != 0) {
        // 0x8005CEEC: nop
    
            goto L_8005D148;
    }
    // 0x8005CEEC: nop

    // 0x8005CEF0: jal         0x80036E48
    // 0x8005CEF4: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80036E48_12248(rdram, ctx);
        goto after_1;
    // 0x8005CEF4: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_1:
    // 0x8005CEF8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8005CEFC: lhu         $v0, -0x12FA($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X12FA);
    // 0x8005CF00: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8005CF04: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8005CF08: j           L_8005D148
    // 0x8005CF0C: sh          $v0, -0x12FA($at)
    MEM_H(-0X12FA, ctx->r1) = ctx->r2;
        goto L_8005D148;
    // 0x8005CF0C: sh          $v0, -0x12FA($at)
    MEM_H(-0X12FA, ctx->r1) = ctx->r2;
L_8005CF10:
    // 0x8005CF10: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8005CF14: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8005CF18: beq         $v0, $zero, L_8005CFF4
    if (ctx->r2 == 0) {
        // 0x8005CF1C: nop
    
            goto L_8005CFF4;
    }
    // 0x8005CF1C: nop

    // 0x8005CF20: j           L_8005D148
    // 0x8005CF24: nop

        goto L_8005D148;
    // 0x8005CF24: nop

L_8005CF28:
    // 0x8005CF28: jal         0x80028660
    // 0x8005CF2C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80028660_3A60(rdram, ctx);
        goto after_2;
    // 0x8005CF2C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_2:
    // 0x8005CF30: jal         0x80028A3C
    // 0x8005CF34: nop

    func_80028A3C_3E3C(rdram, ctx);
        goto after_3;
    // 0x8005CF34: nop

    after_3:
    // 0x8005CF38: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8005CF3C: lhu         $v0, -0x12FA($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X12FA);
    // 0x8005CF40: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
L_8005CF44:
    // 0x8005CF44: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8005CF48: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8005CF4C: jal         0x80036E48
    // 0x8005CF50: sh          $v0, -0x12FA($at)
    MEM_H(-0X12FA, ctx->r1) = ctx->r2;
    func_80036E48_12248(rdram, ctx);
        goto after_4;
    // 0x8005CF50: sh          $v0, -0x12FA($at)
    MEM_H(-0X12FA, ctx->r1) = ctx->r2;
    after_4:
    // 0x8005CF54: j           L_8005D210
    // 0x8005CF58: nop

        goto L_8005D210;
    // 0x8005CF58: nop

L_8005CF5C:
    // 0x8005CF5C: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x8005CF60: lw          $v1, 0x6CA0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6CA0);
    // 0x8005CF64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8005CF68: bne         $v1, $v0, L_8005D210
    if (ctx->r3 != ctx->r2) {
        // 0x8005CF6C: nop
    
            goto L_8005D210;
    }
    // 0x8005CF6C: nop

    // 0x8005CF70: jal         0x80030150
    // 0x8005CF74: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80030150_B550(rdram, ctx);
        goto after_5;
    // 0x8005CF74: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_5:
    // 0x8005CF78: j           L_8005CFF4
    // 0x8005CF7C: nop

        goto L_8005CFF4;
    // 0x8005CF7C: nop

L_8005CF80:
    // 0x8005CF80: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8005CF84: lw          $v1, -0x12F8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X12F8);
    // 0x8005CF88: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8005CF8C: lhu         $v0, -0x783A($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X783A);
    // 0x8005CF90: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8005CF94: andi        $v0, $v0, 0x6008
    ctx->r2 = ctx->r2 & 0X6008;
    // 0x8005CF98: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8005CF9C: sw          $v1, -0x12F8($at)
    MEM_W(-0X12F8, ctx->r1) = ctx->r3;
    // 0x8005CFA0: bne         $v0, $zero, L_8005CFB0
    if (ctx->r2 != 0) {
        // 0x8005CFA4: slti        $v0, $v1, 0x97
        ctx->r2 = SIGNED(ctx->r3) < 0X97 ? 1 : 0;
            goto L_8005CFB0;
    }
    // 0x8005CFA4: slti        $v0, $v1, 0x97
    ctx->r2 = SIGNED(ctx->r3) < 0X97 ? 1 : 0;
    // 0x8005CFA8: bne         $v0, $zero, L_8005D050
    if (ctx->r2 != 0) {
        // 0x8005CFAC: addiu       $fp, $zero, 0xA0
        ctx->r30 = ADD32(0, 0XA0);
            goto L_8005D050;
    }
    // 0x8005CFAC: addiu       $fp, $zero, 0xA0
    ctx->r30 = ADD32(0, 0XA0);
L_8005CFB0:
    // 0x8005CFB0: jal         0x80036E48
    // 0x8005CFB4: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80036E48_12248(rdram, ctx);
        goto after_6;
    // 0x8005CFB4: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_6:
    // 0x8005CFB8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8005CFBC: lhu         $v0, -0x12FA($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X12FA);
    // 0x8005CFC0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8005CFC4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8005CFC8: sh          $v0, -0x12FA($at)
    MEM_H(-0X12FA, ctx->r1) = ctx->r2;
    // 0x8005CFCC: j           L_8005D050
    // 0x8005CFD0: addiu       $fp, $zero, 0xA0
    ctx->r30 = ADD32(0, 0XA0);
        goto L_8005D050;
    // 0x8005CFD0: addiu       $fp, $zero, 0xA0
    ctx->r30 = ADD32(0, 0XA0);
L_8005CFD4:
    // 0x8005CFD4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8005CFD8: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8005CFDC: bne         $v0, $zero, L_8005D050
    if (ctx->r2 != 0) {
        // 0x8005CFE0: addiu       $fp, $zero, 0xA0
        ctx->r30 = ADD32(0, 0XA0);
            goto L_8005D050;
    }
    // 0x8005CFE0: addiu       $fp, $zero, 0xA0
    ctx->r30 = ADD32(0, 0XA0);
    // 0x8005CFE4: jal         0x80028660
    // 0x8005CFE8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80028660_3A60(rdram, ctx);
        goto after_7;
    // 0x8005CFE8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_7:
    // 0x8005CFEC: jal         0x80028A4C
    // 0x8005CFF0: nop

    func_80028A4C_3E4C(rdram, ctx);
        goto after_8;
    // 0x8005CFF0: nop

    after_8:
L_8005CFF4:
    // 0x8005CFF4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8005CFF8: lhu         $v0, -0x12FA($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X12FA);
    // 0x8005CFFC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8005D000: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8005D004: j           L_8005D210
    // 0x8005D008: sh          $v0, -0x12FA($at)
    MEM_H(-0X12FA, ctx->r1) = ctx->r2;
        goto L_8005D210;
    // 0x8005D008: sh          $v0, -0x12FA($at)
    MEM_H(-0X12FA, ctx->r1) = ctx->r2;
L_8005D00C:
    // 0x8005D00C: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x8005D010: lw          $v0, 0x6CA0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6CA0);
    // 0x8005D014: bne         $v0, $zero, L_8005D210
    if (ctx->r2 != 0) {
        // 0x8005D018: nop
    
            goto L_8005D210;
    }
    // 0x8005D018: nop

    // 0x8005D01C: jal         0x80030150
    // 0x8005D020: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80030150_B550(rdram, ctx);
        goto after_9;
    // 0x8005D020: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_9:
    // 0x8005D024: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8005D028: sh          $zero, -0x12FC($at)
    MEM_H(-0X12FC, ctx->r1) = 0;
    // 0x8005D02C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8005D030: sh          $zero, -0x12FA($at)
    MEM_H(-0X12FA, ctx->r1) = 0;
    // 0x8005D034: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8005D038: sw          $zero, -0x12F8($at)
    MEM_W(-0X12F8, ctx->r1) = 0;
    // 0x8005D03C: jal         0x80028E40
    // 0x8005D040: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80028E40_4240(rdram, ctx);
        goto after_10;
    // 0x8005D040: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_10:
    // 0x8005D044: j           L_8005D210
    // 0x8005D048: nop

        goto L_8005D210;
    // 0x8005D048: nop

L_8005D04C:
    // 0x8005D04C: addiu       $fp, $zero, 0xA0
    ctx->r30 = ADD32(0, 0XA0);
L_8005D050:
    // 0x8005D050: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x8005D054: addiu       $s4, $zero, 0x80
    ctx->r20 = ADD32(0, 0X80);
    // 0x8005D058: addiu       $s7, $zero, 0x140
    ctx->r23 = ADD32(0, 0X140);
    // 0x8005D05C: addiu       $s6, $zero, 0xC0
    ctx->r22 = ADD32(0, 0XC0);
    // 0x8005D060: addiu       $s5, $zero, 0xA0
    ctx->r21 = ADD32(0, 0XA0);
    // 0x8005D064: addiu       $s1, $zero, 0x20
    ctx->r17 = ADD32(0, 0X20);
    // 0x8005D068: addiu       $s2, $zero, 0x180
    ctx->r18 = ADD32(0, 0X180);
L_8005D06C:
    // 0x8005D06C: lui         $s0, 0x801A
    ctx->r16 = S32(0X801A << 16);
    // 0x8005D070: lw          $s0, -0x5858($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X5858);
    // 0x8005D074: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8005D078: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8005D07C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x8005D080: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8005D084: addiu       $s2, $s2, 0x80
    ctx->r18 = ADD32(ctx->r18, 0X80);
    // 0x8005D088: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8005D08C: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x8005D090: addiu       $v0, $zero, 0x2C
    ctx->r2 = ADD32(0, 0X2C);
    // 0x8005D094: sb          $v0, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r2;
    // 0x8005D098: jal         0x80030284
    // 0x8005D09C: sh          $s4, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r20;
    func_80030284_B684(rdram, ctx);
        goto after_11;
    // 0x8005D09C: sh          $s4, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r20;
    after_11:
    // 0x8005D0A0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8005D0A4: addiu       $a1, $zero, 0x1E0
    ctx->r5 = ADD32(0, 0X1E0);
    // 0x8005D0A8: jal         0x8003026C
    // 0x8005D0AC: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    func_8003026C_B66C(rdram, ctx);
        goto after_12;
    // 0x8005D0AC: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    after_12:
    // 0x8005D0B0: lbu         $v1, 0x7($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X7);
    // 0x8005D0B4: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8005D0B8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8005D0BC: sh          $s1, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r17;
    // 0x8005D0C0: sh          $s1, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r17;
    // 0x8005D0C4: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x8005D0C8: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x8005D0CC: sb          $s6, 0x14($s0)
    MEM_B(0X14, ctx->r16) = ctx->r22;
    // 0x8005D0D0: sb          $zero, 0x15($s0)
    MEM_B(0X15, ctx->r16) = 0;
    // 0x8005D0D4: sb          $zero, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = 0;
    // 0x8005D0D8: sb          $s5, 0x1D($s0)
    MEM_B(0X1D, ctx->r16) = ctx->r21;
    // 0x8005D0DC: sb          $s6, 0x24($s0)
    MEM_B(0X24, ctx->r16) = ctx->r22;
    // 0x8005D0E0: sb          $s5, 0x25($s0)
    MEM_B(0X25, ctx->r16) = ctx->r21;
    // 0x8005D0E4: sb          $s4, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r20;
    // 0x8005D0E8: sb          $s4, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r20;
    // 0x8005D0EC: sb          $s4, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r20;
    // 0x8005D0F0: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
    // 0x8005D0F4: sh          $fp, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r30;
    // 0x8005D0F8: sh          $fp, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r30;
    // 0x8005D0FC: sh          $s7, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r23;
    // 0x8005D100: sh          $s7, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r23;
    // 0x8005D104: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x8005D108: sb          $v1, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r3;
    // 0x8005D10C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8005D110: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x8005D114: addiu       $v1, $s1, 0xC0
    ctx->r3 = ADD32(ctx->r17, 0XC0);
    // 0x8005D118: addu        $s1, $v1, $zero
    ctx->r17 = ADD32(ctx->r3, 0);
    // 0x8005D11C: sh          $s1, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r17;
    // 0x8005D120: sh          $s1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r17;
    // 0x8005D124: addiu       $s0, $s0, 0x28
    ctx->r16 = ADD32(ctx->r16, 0X28);
    // 0x8005D128: jal         0x800302C8
    // 0x8005D12C: addiu       $a0, $a0, 0xA0
    ctx->r4 = ADD32(ctx->r4, 0XA0);
    func_800302C8_B6C8(rdram, ctx);
        goto after_13;
    // 0x8005D12C: addiu       $a0, $a0, 0xA0
    ctx->r4 = ADD32(ctx->r4, 0XA0);
    after_13:
    // 0x8005D130: slti        $v0, $s3, 0x3
    ctx->r2 = SIGNED(ctx->r19) < 0X3 ? 1 : 0;
    // 0x8005D134: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8005D138: beq         $v0, $zero, L_8005D210
    if (ctx->r2 == 0) {
        // 0x8005D13C: sw          $s0, -0x5858($at)
        MEM_W(-0X5858, ctx->r1) = ctx->r16;
            goto L_8005D210;
    }
    // 0x8005D13C: sw          $s0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r16;
    // 0x8005D140: j           L_8005D06C
    // 0x8005D144: nop

        goto L_8005D06C;
    // 0x8005D144: nop

L_8005D148:
    // 0x8005D148: lui         $s0, 0x801A
    ctx->r16 = S32(0X801A << 16);
    // 0x8005D14C: lw          $s0, -0x5858($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X5858);
    // 0x8005D150: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8005D154: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8005D158: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    // 0x8005D15C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8005D160: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8005D164: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x8005D168: addiu       $v0, $zero, 0x2C
    ctx->r2 = ADD32(0, 0X2C);
    // 0x8005D16C: sb          $v0, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r2;
    // 0x8005D170: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8005D174: jal         0x80030284
    // 0x8005D178: sh          $v0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r2;
    func_80030284_B684(rdram, ctx);
        goto after_14;
    // 0x8005D178: sh          $v0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r2;
    after_14:
    // 0x8005D17C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8005D180: addiu       $a1, $zero, 0x1F0
    ctx->r5 = ADD32(0, 0X1F0);
    // 0x8005D184: jal         0x8003026C
    // 0x8005D188: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    func_8003026C_B66C(rdram, ctx);
        goto after_15;
    // 0x8005D188: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    after_15:
    // 0x8005D18C: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
    // 0x8005D190: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8005D194: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x8005D198: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x8005D19C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8005D1A0: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
    // 0x8005D1A4: sh          $v0, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r2;
    // 0x8005D1A8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8005D1AC: sb          $v0, 0x14($s0)
    MEM_B(0X14, ctx->r16) = ctx->r2;
    // 0x8005D1B0: sb          $v0, 0x1D($s0)
    MEM_B(0X1D, ctx->r16) = ctx->r2;
    // 0x8005D1B4: sb          $v0, 0x24($s0)
    MEM_B(0X24, ctx->r16) = ctx->r2;
    // 0x8005D1B8: sb          $v0, 0x25($s0)
    MEM_B(0X25, ctx->r16) = ctx->r2;
    // 0x8005D1BC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8005D1C0: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x8005D1C4: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x8005D1C8: sb          $zero, 0x15($s0)
    MEM_B(0X15, ctx->r16) = 0;
    // 0x8005D1CC: sb          $zero, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = 0;
    // 0x8005D1D0: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x8005D1D4: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
    // 0x8005D1D8: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
    // 0x8005D1DC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8005D1E0: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x8005D1E4: addiu       $v1, $zero, 0x11F
    ctx->r3 = ADD32(0, 0X11F);
    // 0x8005D1E8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8005D1EC: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8005D1F0: sh          $v1, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r3;
    // 0x8005D1F4: sh          $zero, 0x12($s0)
    MEM_H(0X12, ctx->r16) = 0;
    // 0x8005D1F8: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    // 0x8005D1FC: addiu       $s0, $s0, 0x28
    ctx->r16 = ADD32(ctx->r16, 0X28);
    // 0x8005D200: jal         0x800302C8
    // 0x8005D204: addiu       $a0, $a0, 0xA0
    ctx->r4 = ADD32(ctx->r4, 0XA0);
    func_800302C8_B6C8(rdram, ctx);
        goto after_16;
    // 0x8005D204: addiu       $a0, $a0, 0xA0
    ctx->r4 = ADD32(ctx->r4, 0XA0);
    after_16:
    // 0x8005D208: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8005D20C: sw          $s0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r16;
L_8005D210:
    // 0x8005D210: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8005D214: lw          $fp, 0x30($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X30);
    // 0x8005D218: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x8005D21C: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x8005D220: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x8005D224: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8005D228: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8005D22C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8005D230: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8005D234: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8005D238: jr          $ra
    // 0x8005D23C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8005D23C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8006FF58_4B358(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006FF58: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8006FF5C: lh          $v0, 0x4A1E($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X4A1E);
    // 0x8006FF60: bgez        $v0, L_8006FF70
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8006FF64: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8006FF70;
    }
    // 0x8006FF64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006FF68: j           L_8006FF7C
    // 0x8006FF6C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8006FF7C;
    // 0x8006FF6C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8006FF70:
    // 0x8006FF70: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8006FF74: sb          $v0, 0x4DF9($at)
    MEM_B(0X4DF9, ctx->r1) = ctx->r2;
    // 0x8006FF78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8006FF7C:
    // 0x8006FF7C: jr          $ra
    // 0x8006FF80: nop

    TRACE_RETURN()
    return;
    // 0x8006FF80: nop

;}
RECOMP_FUNC void func_8008D87C_68C7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008D87C: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x8008D880: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x8008D884: sb          $v0, 0xBD($a0)
    MEM_B(0XBD, ctx->r4) = ctx->r2;
    // 0x8008D888: jr          $ra
    // 0x8008D88C: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    TRACE_RETURN()
    return;
    // 0x8008D88C: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
;}
RECOMP_FUNC void func_800411DC_1C5DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800411DC: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x800411E0: sw          $s6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r22;
    // 0x800411E4: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
    // 0x800411E8: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x800411EC: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x800411F0: addiu       $s1, $s1, 0x47DC
    ctx->r17 = ADD32(ctx->r17, 0X47DC);
    // 0x800411F4: sw          $a0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r4;
    // 0x800411F8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x800411FC: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x80041200: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x80041204: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80041208: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x8004120C: sw          $fp, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r30;
    // 0x80041210: sw          $s7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r23;
    // 0x80041214: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x80041218: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x8004121C: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x80041220: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x80041224: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x80041228: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x8004122C: sb          $zero, -0x7818($at)
    MEM_B(-0X7818, ctx->r1) = 0;
    // 0x80041230: jal         0x8009A3B4
    // 0x80041234: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80041234: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    after_0:
    // 0x80041238: lui         $s0, 0x801E
    ctx->r16 = S32(0X801E << 16);
    // 0x8004123C: addiu       $s0, $s0, -0x7158
    ctx->r16 = ADD32(ctx->r16, -0X7158);
    // 0x80041240: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80041244: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80041248: jal         0x8009A3B4
    // 0x8004124C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8004124C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80041250: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x80041254: lhu         $a3, 0x0($s1)
    ctx->r7 = MEM_HU(ctx->r17, 0X0);
    // 0x80041258: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8004125C: lhu         $v1, -0x7156($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X7156);
    // 0x80041260: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x80041264: lhu         $t0, 0x47DE($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0X47DE);
    // 0x80041268: lui         $a2, 0x801E
    ctx->r6 = S32(0X801E << 16);
    // 0x8004126C: lhu         $a2, -0x7154($a2)
    ctx->r6 = MEM_HU(ctx->r6, -0X7154);
    // 0x80041270: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x80041274: lhu         $t1, 0x47E0($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0X47E0);
    // 0x80041278: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8004127C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80041280: sb          $s2, 0x296($at)
    MEM_B(0X296, ctx->r1) = ctx->r18;
    // 0x80041284: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80041288: sh          $zero, -0x72DC($at)
    MEM_H(-0X72DC, ctx->r1) = 0;
    // 0x8004128C: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80041290: sh          $zero, -0x26B8($at)
    MEM_H(-0X26B8, ctx->r1) = 0;
    // 0x80041294: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80041298: sh          $zero, -0x6F98($at)
    MEM_H(-0X6F98, ctx->r1) = 0;
    // 0x8004129C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x800412A0: sh          $zero, 0x5730($at)
    MEM_H(0X5730, ctx->r1) = 0;
    // 0x800412A4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800412A8: sh          $zero, 0x4980($at)
    MEM_H(0X4980, ctx->r1) = 0;
    // 0x800412AC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800412B0: sh          $zero, -0x6F9E($at)
    MEM_H(-0X6F9E, ctx->r1) = 0;
    // 0x800412B4: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x800412B8: sh          $zero, -0x2680($at)
    MEM_H(-0X2680, ctx->r1) = 0;
    // 0x800412BC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800412C0: sh          $zero, -0x39A8($at)
    MEM_H(-0X39A8, ctx->r1) = 0;
    // 0x800412C4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800412C8: sh          $zero, 0x784C($at)
    MEM_H(0X784C, ctx->r1) = 0;
    // 0x800412CC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800412D0: sh          $zero, 0x599C($at)
    MEM_H(0X599C, ctx->r1) = 0;
    // 0x800412D4: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x800412D8: sh          $zero, -0x4230($at)
    MEM_H(-0X4230, ctx->r1) = 0;
    // 0x800412DC: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x800412E0: sh          $zero, -0x2660($at)
    MEM_H(-0X2660, ctx->r1) = 0;
    // 0x800412E4: subu        $v0, $v0, $a3
    ctx->r2 = SUB32(ctx->r2, ctx->r7);
    // 0x800412E8: subu        $v1, $v1, $t0
    ctx->r3 = SUB32(ctx->r3, ctx->r8);
    // 0x800412EC: subu        $a2, $a2, $t1
    ctx->r6 = SUB32(ctx->r6, ctx->r9);
    // 0x800412F0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800412F4: sh          $v0, -0xBE0($at)
    MEM_H(-0XBE0, ctx->r1) = ctx->r2;
    // 0x800412F8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800412FC: sh          $v1, -0xBDE($at)
    MEM_H(-0XBDE, ctx->r1) = ctx->r3;
    // 0x80041300: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80041304: sh          $a2, -0xBDC($at)
    MEM_H(-0XBDC, ctx->r1) = ctx->r6;
    // 0x80041308: jal         0x80040D60
    // 0x8004130C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80040D60_1C160(rdram, ctx);
        goto after_2;
    // 0x8004130C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_2:
    // 0x80041310: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
L_80041314:
    // 0x80041314: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80041318: beq         $t8, $zero, L_80041678
    if (ctx->r24 == 0) {
        // 0x8004131C: addiu       $s7, $t8, -0x1
        ctx->r23 = ADD32(ctx->r24, -0X1);
            goto L_80041678;
    }
    // 0x8004131C: addiu       $s7, $t8, -0x1
    ctx->r23 = ADD32(ctx->r24, -0X1);
    // 0x80041320: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80041324: lui         $fp, 0x801E
    ctx->r30 = S32(0X801E << 16);
    // 0x80041328: addiu       $fp, $fp, -0x7158
    ctx->r30 = ADD32(ctx->r30, -0X7158);
    // 0x8004132C: xori        $t8, $t8, 0x8000
    ctx->r24 = ctx->r24 ^ 0X8000;
    // 0x80041330: sw          $t8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r24;
L_80041334:
    // 0x80041334: lhu         $v0, 0x0($fp)
    ctx->r2 = MEM_HU(ctx->r30, 0X0);
    // 0x80041338: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8004133C: lhu         $a1, 0x47DC($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X47DC);
    // 0x80041340: lhu         $v1, 0x2($fp)
    ctx->r3 = MEM_HU(ctx->r30, 0X2);
    // 0x80041344: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x80041348: lhu         $a2, 0x47DE($a2)
    ctx->r6 = MEM_HU(ctx->r6, 0X47DE);
    // 0x8004134C: lhu         $a0, 0x4($fp)
    ctx->r4 = MEM_HU(ctx->r30, 0X4);
    // 0x80041350: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80041354: lhu         $a3, 0x47E0($a3)
    ctx->r7 = MEM_HU(ctx->r7, 0X47E0);
    // 0x80041358: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x8004135C: subu        $v1, $v1, $a2
    ctx->r3 = SUB32(ctx->r3, ctx->r6);
    // 0x80041360: subu        $a0, $a0, $a3
    ctx->r4 = SUB32(ctx->r4, ctx->r7);
    // 0x80041364: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80041368: sh          $v0, -0x35BA($at)
    MEM_H(-0X35BA, ctx->r1) = ctx->r2;
    // 0x8004136C: sll         $v0, $s7, 1
    ctx->r2 = S32(ctx->r23 << 1);
    // 0x80041370: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80041374: sh          $v1, -0x35B8($at)
    MEM_H(-0X35B8, ctx->r1) = ctx->r3;
    // 0x80041378: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8004137C: sh          $a0, -0x35B6($at)
    MEM_H(-0X35B6, ctx->r1) = ctx->r4;
    // 0x80041380: lui         $a2, 0x801C
    ctx->r6 = S32(0X801C << 16);
    // 0x80041384: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x80041388: lh          $a2, -0x3C88($a2)
    ctx->r6 = MEM_H(ctx->r6, -0X3C88);
    // 0x8004138C: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80041390: lw          $v1, -0x35C0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X35C0);
    // 0x80041394: sll         $v0, $a2, 1
    ctx->r2 = S32(ctx->r6 << 1);
    // 0x80041398: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8004139C: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x800413A0: bgtz        $a1, L_800414FC
    if (SIGNED(ctx->r5) > 0) {
        // 0x800413A4: sll         $v0, $a1, 1
        ctx->r2 = S32(ctx->r5 << 1);
            goto L_800414FC;
    }
    // 0x800413A4: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x800413A8: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x800413AC: lh          $v0, -0x7158($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7158);
    // 0x800413B0: ori         $t8, $zero, 0x8000
    ctx->r24 = 0 | 0X8000;
    // 0x800413B4: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x800413B8: lbu         $v1, 0x6B40($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X6B40);
    // 0x800413BC: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x800413C0: lhu         $t0, 0x49AE($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0X49AE);
    // 0x800413C4: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x800413C8: sra         $v0, $v0, 9
    ctx->r2 = S32(SIGNED(ctx->r2) >> 9);
    // 0x800413CC: subu        $a3, $v0, $v1
    ctx->r7 = SUB32(ctx->r2, ctx->r3);
    // 0x800413D0: sltu        $v0, $a3, $t0
    ctx->r2 = ctx->r7 < ctx->r8 ? 1 : 0;
    // 0x800413D4: beq         $v0, $zero, L_8004140C
    if (ctx->r2 == 0) {
        // 0x800413D8: addu        $s6, $zero, $zero
        ctx->r22 = ADD32(0, 0);
            goto L_8004140C;
    }
    // 0x800413D8: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
    // 0x800413DC: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x800413E0: lh          $v0, -0x7154($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7154);
    // 0x800413E4: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x800413E8: lbu         $a0, -0x39A6($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X39A6);
    // 0x800413EC: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x800413F0: lhu         $v1, -0x7386($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X7386);
    // 0x800413F4: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x800413F8: sra         $v0, $v0, 9
    ctx->r2 = S32(SIGNED(ctx->r2) >> 9);
    // 0x800413FC: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80041400: sltu        $v1, $v0, $v1
    ctx->r3 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80041404: bne         $v1, $zero, L_80041414
    if (ctx->r3 != 0) {
        // 0x80041408: nop
    
            goto L_80041414;
    }
    // 0x80041408: nop

L_8004140C:
    // 0x8004140C: j           L_80041428
    // 0x80041410: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_80041428;
    // 0x80041410: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80041414:
    // 0x80041414: nop

    // 0x80041418: mult        $v0, $t0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004141C: mflo        $v0
    ctx->r2 = lo;
    // 0x80041420: addu        $v0, $a3, $v0
    ctx->r2 = ADD32(ctx->r7, ctx->r2);
    // 0x80041424: nop

L_80041428:
    // 0x80041428: bne         $a2, $v0, L_80041670
    if (ctx->r6 != ctx->r2) {
        // 0x8004142C: addu        $v0, $s7, $zero
        ctx->r2 = ADD32(ctx->r23, 0);
            goto L_80041670;
    }
    // 0x8004142C: addu        $v0, $s7, $zero
    ctx->r2 = ADD32(ctx->r23, 0);
    // 0x80041430: lui         $a3, 0x801E
    ctx->r7 = S32(0X801E << 16);
    // 0x80041434: lh          $a3, -0x7156($a3)
    ctx->r7 = MEM_H(ctx->r7, -0X7156);
    // 0x80041438: andi        $v0, $a1, 0x1F00
    ctx->r2 = ctx->r5 & 0X1F00;
    // 0x8004143C: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x80041440: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x80041444: lh          $v1, -0x26AC($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X26AC);
    // 0x80041448: negu        $a0, $v0
    ctx->r4 = SUB32(0, ctx->r2);
    // 0x8004144C: addiu       $v0, $a0, -0x1
    ctx->r2 = ADD32(ctx->r4, -0X1);
    // 0x80041450: subu        $a2, $v0, $v1
    ctx->r6 = SUB32(ctx->r2, ctx->r3);
    // 0x80041454: slt         $v0, $a2, $a3
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x80041458: beq         $v0, $zero, L_8004149C
    if (ctx->r2 == 0) {
        // 0x8004145C: andi        $v0, $a1, 0x6000
        ctx->r2 = ctx->r5 & 0X6000;
            goto L_8004149C;
    }
    // 0x8004145C: andi        $v0, $a1, 0x6000
    ctx->r2 = ctx->r5 & 0X6000;
    // 0x80041460: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80041464: lh          $v0, -0x35B8($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X35B8);
    // 0x80041468: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8004146C: sh          $zero, 0x5730($at)
    MEM_H(0X5730, ctx->r1) = 0;
    // 0x80041470: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80041474: sh          $zero, 0x4980($at)
    MEM_H(0X4980, ctx->r1) = 0;
    // 0x80041478: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8004147C: sh          $zero, -0x6F9E($at)
    MEM_H(-0X6F9E, ctx->r1) = 0;
    // 0x80041480: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80041484: sh          $a2, -0x7156($at)
    MEM_H(-0X7156, ctx->r1) = ctx->r6;
    // 0x80041488: blez        $v0, L_80041678
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8004148C: addiu       $s6, $zero, 0x1
        ctx->r22 = ADD32(0, 0X1);
            goto L_80041678;
    }
    // 0x8004148C: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    // 0x80041490: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80041494: j           L_80041678
    // 0x80041498: sb          $zero, 0x296($at)
    MEM_B(0X296, ctx->r1) = 0;
        goto L_80041678;
    // 0x80041498: sb          $zero, 0x296($at)
    MEM_B(0X296, ctx->r1) = 0;
L_8004149C:
    // 0x8004149C: beql        $v0, $zero, L_80041670
    if (ctx->r2 == 0) {
        // 0x800414A0: addu        $v0, $s7, $zero
        ctx->r2 = ADD32(ctx->r23, 0);
            goto L_80041670;
    }
    goto skip_0;
    // 0x800414A0: addu        $v0, $s7, $zero
    ctx->r2 = ADD32(ctx->r23, 0);
    skip_0:
    // 0x800414A4: sra         $v1, $v0, 13
    ctx->r3 = S32(SIGNED(ctx->r2) >> 13);
    // 0x800414A8: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x800414AC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800414B0: sll         $v0, $v0, 7
    ctx->r2 = S32(ctx->r2 << 7);
    // 0x800414B4: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x800414B8: lh          $v1, -0x26AE($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X26AE);
    // 0x800414BC: subu        $v0, $a0, $v0
    ctx->r2 = SUB32(ctx->r4, ctx->r2);
    // 0x800414C0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800414C4: subu        $a2, $v0, $v1
    ctx->r6 = SUB32(ctx->r2, ctx->r3);
    // 0x800414C8: slt         $v0, $a3, $a2
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x800414CC: beq         $v0, $zero, L_80041670
    if (ctx->r2 == 0) {
        // 0x800414D0: addu        $v0, $s7, $zero
        ctx->r2 = ADD32(ctx->r23, 0);
            goto L_80041670;
    }
    // 0x800414D0: addu        $v0, $s7, $zero
    ctx->r2 = ADD32(ctx->r23, 0);
    // 0x800414D4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x800414D8: sh          $zero, 0x5730($at)
    MEM_H(0X5730, ctx->r1) = 0;
    // 0x800414DC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800414E0: sh          $zero, 0x4980($at)
    MEM_H(0X4980, ctx->r1) = 0;
    // 0x800414E4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800414E8: sh          $zero, -0x6F9E($at)
    MEM_H(-0X6F9E, ctx->r1) = 0;
    // 0x800414EC: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x800414F0: sh          $a2, -0x7156($at)
    MEM_H(-0X7156, ctx->r1) = ctx->r6;
    // 0x800414F4: j           L_80041678
    // 0x800414F8: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
        goto L_80041678;
    // 0x800414F8: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
L_800414FC:
    // 0x800414FC: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80041500: lw          $v1, 0xB5C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0XB5C);
    // 0x80041504: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80041508: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8004150C: addu        $a0, $v1, $v0
    ctx->r4 = ADD32(ctx->r3, ctx->r2);
    // 0x80041510: lhu         $v0, 0x6($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X6);
    // 0x80041514: lw          $a1, 0x8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X8);
    // 0x80041518: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8004151C: beq         $v0, $zero, L_80041538
    if (ctx->r2 == 0) {
        // 0x80041520: nop
    
            goto L_80041538;
    }
    // 0x80041520: nop

    // 0x80041524: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80041528: lw          $v1, 0x55A0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X55A0);
    // 0x8004152C: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x80041530: j           L_80041548
    // 0x80041534: addu        $s4, $v1, $v0
    ctx->r20 = ADD32(ctx->r3, ctx->r2);
        goto L_80041548;
    // 0x80041534: addu        $s4, $v1, $v0
    ctx->r20 = ADD32(ctx->r3, ctx->r2);
L_80041538:
    // 0x80041538: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8004153C: lw          $v1, 0x55A0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X55A0);
    // 0x80041540: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x80041544: addu        $s4, $v1, $v0
    ctx->r20 = ADD32(ctx->r3, ctx->r2);
L_80041548:
    // 0x80041548: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x8004154C: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x80041550: lhu         $v0, 0x2($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X2);
    // 0x80041554: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x80041558: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x8004155C: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x80041560: lw          $v0, 0x8($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X8);
    // 0x80041564: beq         $v0, $zero, L_80041670
    if (ctx->r2 == 0) {
        // 0x80041568: addu        $v0, $s7, $zero
        ctx->r2 = ADD32(ctx->r23, 0);
            goto L_80041670;
    }
    // 0x80041568: addu        $v0, $s7, $zero
    ctx->r2 = ADD32(ctx->r23, 0);
    // 0x8004156C: addiu       $s1, $s4, 0x8
    ctx->r17 = ADD32(ctx->r20, 0X8);
L_80041570:
    // 0x80041570: lhu         $v1, 0x10($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X10);
    // 0x80041574: lhu         $v0, 0x0($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X0);
    // 0x80041578: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x8004157C: sh          $v0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r2;
    // 0x80041580: lhu         $v0, -0x6($s1)
    ctx->r2 = MEM_HU(ctx->r17, -0X6);
    // 0x80041584: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80041588: sh          $v1, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r3;
    // 0x8004158C: lhu         $v1, 0x14($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X14);
    // 0x80041590: lhu         $v0, -0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, -0X4);
    // 0x80041594: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x80041598: sh          $v0, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r2;
    // 0x8004159C: lhu         $v0, -0x2($s1)
    ctx->r2 = MEM_HU(ctx->r17, -0X2);
    // 0x800415A0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x800415A4: sh          $v1, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r3;
    // 0x800415A8: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x800415AC: lw          $v1, 0x55A0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X55A0);
    // 0x800415B0: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x800415B4: addu        $s2, $v1, $v0
    ctx->r18 = ADD32(ctx->r3, ctx->r2);
    // 0x800415B8: lhu         $a1, 0x4($s2)
    ctx->r5 = MEM_HU(ctx->r18, 0X4);
    // 0x800415BC: sltiu       $v0, $a1, 0x100
    ctx->r2 = ctx->r5 < 0X100 ? 1 : 0;
    // 0x800415C0: beq         $v0, $zero, L_800415F0
    if (ctx->r2 == 0) {
        // 0x800415C4: andi        $v0, $a1, 0xF0
        ctx->r2 = ctx->r5 & 0XF0;
            goto L_800415F0;
    }
    // 0x800415C4: andi        $v0, $a1, 0xF0
    ctx->r2 = ctx->r5 & 0XF0;
    // 0x800415C8: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
    // 0x800415CC: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x800415D0: addiu       $t8, $t8, -0x35F0
    ctx->r24 = ADD32(ctx->r24, -0X35F0);
    // 0x800415D4: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x800415D8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x800415DC: jalr        $v0
    // 0x800415E0: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x800415E0: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    after_3:
    // 0x800415E4: addu        $s5, $v0, $zero
    ctx->r21 = ADD32(ctx->r2, 0);
    // 0x800415E8: bne         $s5, $zero, L_800415F8
    if (ctx->r21 != 0) {
        // 0x800415EC: addiu       $s0, $s2, 0x4
        ctx->r16 = ADD32(ctx->r18, 0X4);
            goto L_800415F8;
    }
    // 0x800415EC: addiu       $s0, $s2, 0x4
    ctx->r16 = ADD32(ctx->r18, 0X4);
L_800415F0:
    // 0x800415F0: j           L_8004165C
    // 0x800415F4: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
        goto L_8004165C;
    // 0x800415F4: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
L_800415F8:
    // 0x800415F8: lw          $s3, 0x4($s1)
    ctx->r19 = MEM_W(ctx->r17, 0X4);
L_800415FC:
    // 0x800415FC: lhu         $v0, 0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2);
    // 0x80041600: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x80041604: and         $v0, $v0, $t8
    ctx->r2 = ctx->r2 & ctx->r24;
    // 0x80041608: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x8004160C: bnel        $v0, $zero, L_80041650
    if (ctx->r2 != 0) {
        // 0x80041610: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_80041650;
    }
    goto skip_1;
    // 0x80041610: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    skip_1:
    // 0x80041614: lhu         $v0, 0x12($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X12);
    // 0x80041618: lhu         $v1, 0x0($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X0);
    // 0x8004161C: addu        $v1, $v0, $v1
    ctx->r3 = ADD32(ctx->r2, ctx->r3);
    // 0x80041620: sh          $v1, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r3;
    // 0x80041624: lhu         $v1, -0x2($s0)
    ctx->r3 = MEM_HU(ctx->r16, -0X2);
    // 0x80041628: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8004162C: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x80041630: lhu         $a1, 0x0($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X0);
    // 0x80041634: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x80041638: jal         0x80041910
    // 0x8004163C: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    func_80041910_1CD10(rdram, ctx);
        goto after_4;
    // 0x8004163C: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    after_4:
    // 0x80041640: addu        $s6, $v0, $zero
    ctx->r22 = ADD32(ctx->r2, 0);
    // 0x80041644: bne         $s6, $zero, L_80041680
    if (ctx->r22 != 0) {
        // 0x80041648: nop
    
            goto L_80041680;
    }
    // 0x80041648: nop

    // 0x8004164C: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_80041650:
    // 0x80041650: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x80041654: bne         $s3, $zero, L_800415FC
    if (ctx->r19 != 0) {
        // 0x80041658: addiu       $s2, $s2, 0x8
        ctx->r18 = ADD32(ctx->r18, 0X8);
            goto L_800415FC;
    }
    // 0x80041658: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
L_8004165C:
    // 0x8004165C: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    // 0x80041660: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80041664: bne         $v0, $zero, L_80041570
    if (ctx->r2 != 0) {
        // 0x80041668: addiu       $s4, $s4, 0x10
        ctx->r20 = ADD32(ctx->r20, 0X10);
            goto L_80041570;
    }
    // 0x80041668: addiu       $s4, $s4, 0x10
    ctx->r20 = ADD32(ctx->r20, 0X10);
    // 0x8004166C: addu        $v0, $s7, $zero
    ctx->r2 = ADD32(ctx->r23, 0);
L_80041670:
    // 0x80041670: bne         $v0, $zero, L_80041334
    if (ctx->r2 != 0) {
        // 0x80041674: addiu       $s7, $s7, -0x1
        ctx->r23 = ADD32(ctx->r23, -0X1);
            goto L_80041334;
    }
    // 0x80041674: addiu       $s7, $s7, -0x1
    ctx->r23 = ADD32(ctx->r23, -0X1);
L_80041678:
    // 0x80041678: beq         $s6, $zero, L_80041788
    if (ctx->r22 == 0) {
        // 0x8004167C: nop
    
            goto L_80041788;
    }
    // 0x8004167C: nop

L_80041680:
    // 0x80041680: lui         $a2, 0x801E
    ctx->r6 = S32(0X801E << 16);
    // 0x80041684: addiu       $a2, $a2, -0x7158
    ctx->r6 = ADD32(ctx->r6, -0X7158);
    // 0x80041688: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x8004168C: lui         $a3, 0x8021
    ctx->r7 = S32(0X8021 << 16);
    // 0x80041690: lhu         $a3, 0x5730($a3)
    ctx->r7 = MEM_HU(ctx->r7, 0X5730);
    // 0x80041694: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80041698: lhu         $v1, -0x7154($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X7154);
    // 0x8004169C: lui         $t0, 0x801B
    ctx->r8 = S32(0X801B << 16);
    // 0x800416A0: lhu         $t0, -0x6F9E($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0X6F9E);
    // 0x800416A4: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x800416A8: lhu         $a0, -0x7156($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X7156);
    // 0x800416AC: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x800416B0: lhu         $t1, 0x4980($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0X4980);
    // 0x800416B4: lui         $t2, 0x801E
    ctx->r10 = S32(0X801E << 16);
    // 0x800416B8: lhu         $t2, -0x72DC($t2)
    ctx->r10 = MEM_HU(ctx->r10, -0X72DC);
    // 0x800416BC: lui         $t3, 0x8022
    ctx->r11 = S32(0X8022 << 16);
    // 0x800416C0: lhu         $t3, -0x26B8($t3)
    ctx->r11 = MEM_HU(ctx->r11, -0X26B8);
    // 0x800416C4: lui         $t4, 0x801B
    ctx->r12 = S32(0X801B << 16);
    // 0x800416C8: lhu         $t4, -0x6F98($t4)
    ctx->r12 = MEM_HU(ctx->r12, -0X6F98);
    // 0x800416CC: lui         $t5, 0x8022
    ctx->r13 = S32(0X8022 << 16);
    // 0x800416D0: lhu         $t5, -0x2680($t5)
    ctx->r13 = MEM_HU(ctx->r13, -0X2680);
    // 0x800416D4: lui         $t6, 0x801C
    ctx->r14 = S32(0X801C << 16);
    // 0x800416D8: lhu         $t6, -0x39A8($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X39A8);
    // 0x800416DC: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x800416E0: lhu         $t7, 0x784C($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X784C);
    // 0x800416E4: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x800416E8: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x800416EC: sh          $zero, -0x72DC($at)
    MEM_H(-0X72DC, ctx->r1) = 0;
    // 0x800416F0: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x800416F4: sh          $zero, -0x26B8($at)
    MEM_H(-0X26B8, ctx->r1) = 0;
    // 0x800416F8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800416FC: sh          $zero, -0x6F98($at)
    MEM_H(-0X6F98, ctx->r1) = 0;
    // 0x80041700: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80041704: sh          $zero, -0x2680($at)
    MEM_H(-0X2680, ctx->r1) = 0;
    // 0x80041708: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8004170C: sh          $zero, -0x39A8($at)
    MEM_H(-0X39A8, ctx->r1) = 0;
    // 0x80041710: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80041714: sh          $zero, 0x784C($at)
    MEM_H(0X784C, ctx->r1) = 0;
    // 0x80041718: addu        $t8, $a1, $zero
    ctx->r24 = ADD32(ctx->r5, 0);
    // 0x8004171C: addiu       $t8, $t8, 0x1
    ctx->r24 = ADD32(ctx->r24, 0X1);
    // 0x80041720: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x80041724: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x80041728: addu        $a0, $a0, $t1
    ctx->r4 = ADD32(ctx->r4, ctx->r9);
    // 0x8004172C: slti        $a1, $a1, 0x8
    ctx->r5 = SIGNED(ctx->r5) < 0X8 ? 1 : 0;
    // 0x80041730: sw          $t8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r24;
    // 0x80041734: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
    // 0x80041738: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x8004173C: sh          $v1, -0x7154($at)
    MEM_H(-0X7154, ctx->r1) = ctx->r3;
    // 0x80041740: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80041744: sh          $a0, -0x7156($at)
    MEM_H(-0X7156, ctx->r1) = ctx->r4;
    // 0x80041748: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8004174C: sh          $t2, 0x5730($at)
    MEM_H(0X5730, ctx->r1) = ctx->r10;
    // 0x80041750: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80041754: sh          $t3, 0x4980($at)
    MEM_H(0X4980, ctx->r1) = ctx->r11;
    // 0x80041758: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8004175C: sh          $t4, -0x6F9E($at)
    MEM_H(-0X6F9E, ctx->r1) = ctx->r12;
    // 0x80041760: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80041764: sh          $t5, 0x599C($at)
    MEM_H(0X599C, ctx->r1) = ctx->r13;
    // 0x80041768: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x8004176C: sh          $t6, -0x4230($at)
    MEM_H(-0X4230, ctx->r1) = ctx->r14;
    // 0x80041770: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80041774: sh          $t7, -0x2660($at)
    MEM_H(-0X2660, ctx->r1) = ctx->r15;
    // 0x80041778: bne         $a1, $zero, L_80041314
    if (ctx->r5 != 0) {
        // 0x8004177C: lui         $v0, 0x8000
        ctx->r2 = S32(0X8000 << 16);
            goto L_80041314;
    }
    // 0x8004177C: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x80041780: j           L_800418E0
    // 0x80041784: nop

        goto L_800418E0;
    // 0x80041784: nop

L_80041788:
    // 0x80041788: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8004178C: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x80041790: lh          $a1, -0x7158($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X7158);
    // 0x80041794: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80041798: lh          $v1, -0x7154($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X7154);
    // 0x8004179C: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x800417A0: lh          $v0, -0x7156($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7156);
    // 0x800417A4: lh          $a3, 0x0($t8)
    ctx->r7 = MEM_H(ctx->r24, 0X0);
    // 0x800417A8: lh          $a2, 0x4($t8)
    ctx->r6 = MEM_H(ctx->r24, 0X4);
    // 0x800417AC: lh          $a0, 0x2($t8)
    ctx->r4 = MEM_H(ctx->r24, 0X2);
    // 0x800417B0: subu        $a3, $a3, $a1
    ctx->r7 = SUB32(ctx->r7, ctx->r5);
    // 0x800417B4: subu        $a2, $a2, $v1
    ctx->r6 = SUB32(ctx->r6, ctx->r3);
    // 0x800417B8: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x800417BC: sltiu       $v0, $a3, 0x1
    ctx->r2 = ctx->r7 < 0X1 ? 1 : 0;
    // 0x800417C0: sltiu       $v1, $a2, 0x1
    ctx->r3 = ctx->r6 < 0X1 ? 1 : 0;
    // 0x800417C4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x800417C8: beq         $v0, $zero, L_800417D8
    if (ctx->r2 == 0) {
        // 0x800417CC: nop
    
            goto L_800417D8;
    }
    // 0x800417CC: nop

    // 0x800417D0: beq         $a0, $zero, L_800418E0
    if (ctx->r4 == 0) {
        // 0x800417D4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_800418E0;
    }
    // 0x800417D4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_800417D8:
    // 0x800417D8: bgez        $a3, L_800417E4
    if (SIGNED(ctx->r7) >= 0) {
        // 0x800417DC: addu        $v1, $a3, $zero
        ctx->r3 = ADD32(ctx->r7, 0);
            goto L_800417E4;
    }
    // 0x800417DC: addu        $v1, $a3, $zero
    ctx->r3 = ADD32(ctx->r7, 0);
    // 0x800417E0: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
L_800417E4:
    // 0x800417E4: bltz        $a2, L_800417FC
    if (SIGNED(ctx->r6) < 0) {
        // 0x800417E8: slt         $v0, $a2, $v1
        ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_800417FC;
    }
    // 0x800417E8: slt         $v0, $a2, $v1
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800417EC: beq         $v0, $zero, L_80041850
    if (ctx->r2 == 0) {
        // 0x800417F0: nop
    
            goto L_80041850;
    }
    // 0x800417F0: nop

    // 0x800417F4: j           L_80041818
    // 0x800417F8: nop

        goto L_80041818;
    // 0x800417F8: nop

L_800417FC:
    // 0x800417FC: negu        $v0, $a2
    ctx->r2 = SUB32(0, ctx->r6);
    // 0x80041800: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80041804: beq         $v0, $zero, L_80041850
    if (ctx->r2 == 0) {
        // 0x80041808: nop
    
            goto L_80041850;
    }
    // 0x80041808: nop

    // 0x8004180C: bgez        $a3, L_80041818
    if (SIGNED(ctx->r7) >= 0) {
        // 0x80041810: addu        $v1, $a3, $zero
        ctx->r3 = ADD32(ctx->r7, 0);
            goto L_80041818;
    }
    // 0x80041810: addu        $v1, $a3, $zero
    ctx->r3 = ADD32(ctx->r7, 0);
    // 0x80041814: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
L_80041818:
    // 0x80041818: bltz        $a0, L_80041830
    if (SIGNED(ctx->r4) < 0) {
        // 0x8004181C: slt         $v0, $a0, $v1
        ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_80041830;
    }
    // 0x8004181C: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80041820: beq         $v0, $zero, L_80041894
    if (ctx->r2 == 0) {
        // 0x80041824: nop
    
            goto L_80041894;
    }
    // 0x80041824: nop

    // 0x80041828: j           L_80041840
    // 0x8004182C: nop

        goto L_80041840;
    // 0x8004182C: nop

L_80041830:
    // 0x80041830: negu        $v0, $a0
    ctx->r2 = SUB32(0, ctx->r4);
    // 0x80041834: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80041838: beq         $v0, $zero, L_80041894
    if (ctx->r2 == 0) {
        // 0x8004183C: nop
    
            goto L_80041894;
    }
    // 0x8004183C: nop

L_80041840:
    // 0x80041840: blez        $a3, L_800418A0
    if (SIGNED(ctx->r7) <= 0) {
        // 0x80041844: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_800418A0;
    }
    // 0x80041844: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80041848: j           L_800418A0
    // 0x8004184C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_800418A0;
    // 0x8004184C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_80041850:
    // 0x80041850: bgez        $a2, L_8004185C
    if (SIGNED(ctx->r6) >= 0) {
        // 0x80041854: addu        $v1, $a2, $zero
        ctx->r3 = ADD32(ctx->r6, 0);
            goto L_8004185C;
    }
    // 0x80041854: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    // 0x80041858: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
L_8004185C:
    // 0x8004185C: bltz        $a0, L_80041874
    if (SIGNED(ctx->r4) < 0) {
        // 0x80041860: slt         $v0, $a0, $v1
        ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_80041874;
    }
    // 0x80041860: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80041864: beq         $v0, $zero, L_80041894
    if (ctx->r2 == 0) {
        // 0x80041868: nop
    
            goto L_80041894;
    }
    // 0x80041868: nop

    // 0x8004186C: j           L_80041884
    // 0x80041870: nop

        goto L_80041884;
    // 0x80041870: nop

L_80041874:
    // 0x80041874: negu        $v0, $a0
    ctx->r2 = SUB32(0, ctx->r4);
    // 0x80041878: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8004187C: beq         $v0, $zero, L_80041894
    if (ctx->r2 == 0) {
        // 0x80041880: nop
    
            goto L_80041894;
    }
    // 0x80041880: nop

L_80041884:
    // 0x80041884: blez        $a2, L_800418A0
    if (SIGNED(ctx->r6) <= 0) {
        // 0x80041888: addiu       $a1, $zero, 0x4
        ctx->r5 = ADD32(0, 0X4);
            goto L_800418A0;
    }
    // 0x80041888: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8004188C: j           L_800418A0
    // 0x80041890: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
        goto L_800418A0;
    // 0x80041890: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
L_80041894:
    // 0x80041894: blez        $a0, L_800418A0
    if (SIGNED(ctx->r4) <= 0) {
        // 0x80041898: addiu       $a1, $zero, 0x6
        ctx->r5 = ADD32(0, 0X6);
            goto L_800418A0;
    }
    // 0x80041898: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x8004189C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
L_800418A0:
    // 0x800418A0: beq         $a3, $zero, L_800418B4
    if (ctx->r7 == 0) {
        // 0x800418A4: nop
    
            goto L_800418B4;
    }
    // 0x800418A4: nop

    // 0x800418A8: blezl       $a3, L_800418B4
    if (SIGNED(ctx->r7) <= 0) {
        // 0x800418AC: ori         $a1, $a1, 0x200
        ctx->r5 = ctx->r5 | 0X200;
            goto L_800418B4;
    }
    goto skip_2;
    // 0x800418AC: ori         $a1, $a1, 0x200
    ctx->r5 = ctx->r5 | 0X200;
    skip_2:
    // 0x800418B0: ori         $a1, $a1, 0x100
    ctx->r5 = ctx->r5 | 0X100;
L_800418B4:
    // 0x800418B4: beq         $a2, $zero, L_800418C8
    if (ctx->r6 == 0) {
        // 0x800418B8: nop
    
            goto L_800418C8;
    }
    // 0x800418B8: nop

    // 0x800418BC: blezl       $a2, L_800418C8
    if (SIGNED(ctx->r6) <= 0) {
        // 0x800418C0: ori         $a1, $a1, 0x800
        ctx->r5 = ctx->r5 | 0X800;
            goto L_800418C8;
    }
    goto skip_3;
    // 0x800418C0: ori         $a1, $a1, 0x800
    ctx->r5 = ctx->r5 | 0X800;
    skip_3:
    // 0x800418C4: ori         $a1, $a1, 0x400
    ctx->r5 = ctx->r5 | 0X400;
L_800418C8:
    // 0x800418C8: beq         $a0, $zero, L_800418E0
    if (ctx->r4 == 0) {
        // 0x800418CC: addu        $v0, $a1, $zero
        ctx->r2 = ADD32(ctx->r5, 0);
            goto L_800418E0;
    }
    // 0x800418CC: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    // 0x800418D0: blezl       $a0, L_800418DC
    if (SIGNED(ctx->r4) <= 0) {
        // 0x800418D4: ori         $a1, $a1, 0x2000
        ctx->r5 = ctx->r5 | 0X2000;
            goto L_800418DC;
    }
    goto skip_4;
    // 0x800418D4: ori         $a1, $a1, 0x2000
    ctx->r5 = ctx->r5 | 0X2000;
    skip_4:
    // 0x800418D8: ori         $a1, $a1, 0x1000
    ctx->r5 = ctx->r5 | 0X1000;
L_800418DC:
    // 0x800418DC: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
L_800418E0:
    // 0x800418E0: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    // 0x800418E4: lw          $fp, 0x70($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X70);
    // 0x800418E8: lw          $s7, 0x6C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X6C);
    // 0x800418EC: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x800418F0: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x800418F4: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x800418F8: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x800418FC: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x80041900: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x80041904: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x80041908: jr          $ra
    // 0x8004190C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    TRACE_RETURN()
    return;
    // 0x8004190C: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_800491FC_245FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800491FC: jr          $ra
    // 0x80049200: nop

    TRACE_RETURN()
    return;
    // 0x80049200: nop

;}
RECOMP_FUNC void func_800302C0_B6C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800302C0: jr          $ra
    // 0x800302C4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    TRACE_RETURN()
    return;
    // 0x800302C4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_8002A110_5510(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002A110: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8002A114: lb          $v0, -0x3BC8($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC8);
    // 0x8002A118: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002A11C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8002A120: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8002A124: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x8002A128: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8002A12C: lw          $v0, 0x70E8($at)
    ctx->r2 = MEM_W(ctx->r1, 0X70E8);
    // 0x8002A130: beq         $v0, $zero, L_8002A140
    if (ctx->r2 == 0) {
        // 0x8002A134: nop
    
            goto L_8002A140;
    }
    // 0x8002A134: nop

    // 0x8002A138: jalr        $v0
    // 0x8002A13C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8002A13C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
L_8002A140:
    // 0x8002A140: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8002A144: lb          $v0, -0x3BC8($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC8);
    // 0x8002A148: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8002A14C: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x8002A150: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8002A154: lw          $v1, 0x7068($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X7068);
    // 0x8002A158: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8002A15C: beq         $v1, $zero, L_8002A180
    if (ctx->r3 == 0) {
        // 0x8002A160: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8002A180;
    }
    // 0x8002A160: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8002A164: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8002A168: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x8002A16C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8002A170: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8002A174: lhu         $a0, 0x0($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X0);
    // 0x8002A178: xori        $v0, $a0, 0xFFFF
    ctx->r2 = ctx->r4 ^ 0XFFFF;
    // 0x8002A17C: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
L_8002A180:
    // 0x8002A180: beq         $v0, $zero, L_8002A198
    if (ctx->r2 == 0) {
        // 0x8002A184: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_8002A198;
    }
    // 0x8002A184: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8002A188: jal         0x8002A2F8
    // 0x8002A18C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_1;
    // 0x8002A18C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x8002A190: j           L_8002A1A0
    // 0x8002A194: nop

        goto L_8002A1A0;
    // 0x8002A194: nop

L_8002A198:
    // 0x8002A198: jal         0x8002A4A4
    // 0x8002A19C: nop

    func_8002A4A4_58A4(rdram, ctx);
        goto after_2;
    // 0x8002A19C: nop

    after_2:
L_8002A1A0:
    // 0x8002A1A0: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8002A1A4: lw          $v0, -0x7814($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7814);
    // 0x8002A1A8: addiu       $v1, $zero, -0x801
    ctx->r3 = ADD32(0, -0X801);
    // 0x8002A1AC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8002A1B0: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x8002A1B4: sw          $v0, -0x7814($at)
    MEM_W(-0X7814, ctx->r1) = ctx->r2;
    // 0x8002A1B8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8002A1BC: jr          $ra
    // 0x8002A1C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8002A1C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void alResamplePull(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80097CB0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80097CB4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80097CB8: lw          $s1, 0x50($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X50);
    // 0x80097CBC: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80097CC0: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80097CC4: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80097CC8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80097CCC: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x80097CD0: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
    // 0x80097CD4: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x80097CD8: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x80097CDC: sh          $v0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r2;
    // 0x80097CE0: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x80097CE4: beq         $s0, $zero, L_80097E78
    if (ctx->r16 == 0) {
        // 0x80097CE8: addu        $s3, $a1, $zero
        ctx->r19 = ADD32(ctx->r5, 0);
            goto L_80097E78;
    }
    // 0x80097CE8: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x80097CEC: lw          $v0, 0x1C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X1C);
    // 0x80097CF0: beq         $v0, $zero, L_80097D4C
    if (ctx->r2 == 0) {
        // 0x80097CF4: addiu       $a1, $sp, 0x18
        ctx->r5 = ADD32(ctx->r29, 0X18);
            goto L_80097D4C;
    }
    // 0x80097CF4: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x80097CF8: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x80097CFC: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x80097D00: jalr        $v0
    // 0x80097D04: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80097D04: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80097D08: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80097D0C: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x80097D10: lh          $v0, 0x18($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X18);
    // 0x80097D14: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x80097D18: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80097D1C: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x80097D20: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80097D24: lui         $v1, 0xA00
    ctx->r3 = S32(0XA00 << 16);
    // 0x80097D28: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80097D2C: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x80097D30: lhu         $v1, 0x0($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X0);
    // 0x80097D34: sll         $v0, $s0, 1
    ctx->r2 = S32(ctx->r16 << 1);
    // 0x80097D38: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80097D3C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80097D40: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80097D44: j           L_80097E78
    // 0x80097D48: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
        goto L_80097E78;
    // 0x80097D48: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
L_80097D4C:
    // 0x80097D4C: lwc1        $f0, 0x18($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X18);
    // 0x80097D50: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80097D54: ldc1        $f2, 0x30F0($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, 0X30F0);
    // 0x80097D58: cvt.d.s     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.d = CVT_D_S(ctx->f0.fl);
    // 0x80097D5C: c.lt.d      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.d < ctx->f0.d;
    // 0x80097D60: nop

    // 0x80097D64: bc1f        L_80097D80
    if (!c1cs) {
        // 0x80097D68: nop
    
            goto L_80097D80;
    }
    // 0x80097D68: nop

    // 0x80097D6C: lui         $at, 0x3FFF
    ctx->r1 = S32(0X3FFF << 16);
    // 0x80097D70: ori         $at, $at, 0xFEB0
    ctx->r1 = ctx->r1 | 0XFEB0;
    // 0x80097D74: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80097D78: nop

    // 0x80097D7C: swc1        $f0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->f0.u32l;
L_80097D80:
    // 0x80097D80: lwc1        $f0, 0x18($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X18);
    // 0x80097D84: lui         $at, 0x4700
    ctx->r1 = S32(0X4700 << 16);
    // 0x80097D88: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80097D8C: nop

    // 0x80097D90: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x80097D94: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80097D98: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x80097D9C: nop

    // 0x80097DA0: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80097DA4: nop

    // 0x80097DA8: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80097DAC: div.s       $f4, $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = DIV_S(ctx->f4.fl, ctx->f20.fl);
    // 0x80097DB0: mtc1        $s0, $f0
    ctx->f0.u32l = ctx->r16;
    // 0x80097DB4: nop

    // 0x80097DB8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x80097DBC: mul.s       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80097DC0: lwc1        $f2, 0x20($s2)
    ctx->f2.u32l = MEM_W(ctx->r18, 0X20);
    // 0x80097DC4: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x80097DC8: trunc.w.s   $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.u32l = TRUNC_W_S(ctx->f2.fl);
    // 0x80097DCC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80097DD0: nop

    // 0x80097DD4: mtc1        $a2, $f0
    ctx->f0.u32l = ctx->r6;
    // 0x80097DD8: nop

    // 0x80097DDC: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x80097DE0: sub.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x80097DE4: swc1        $f4, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->f4.u32l;
    // 0x80097DE8: swc1        $f2, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->f2.u32l;
    // 0x80097DEC: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x80097DF0: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x80097DF4: jalr        $v0
    // 0x80097DF8: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x80097DF8: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x80097DFC: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80097E00: lwc1        $f0, 0x18($s2)
    ctx->f0.u32l = MEM_W(ctx->r18, 0X18);
    // 0x80097E04: lhu         $v0, 0x18($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X18);
    // 0x80097E08: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80097E0C: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80097E10: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80097E14: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x80097E18: lhu         $v1, 0x0($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X0);
    // 0x80097E1C: sll         $v0, $s0, 1
    ctx->r2 = S32(ctx->r16 << 1);
    // 0x80097E20: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80097E24: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x80097E28: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80097E2C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80097E30: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
    // 0x80097E34: lbu         $a0, 0x27($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X27);
    // 0x80097E38: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x80097E3C: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
    // 0x80097E40: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80097E44: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80097E48: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x80097E4C: nop

    // 0x80097E50: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80097E54: lui         $v1, 0x500
    ctx->r3 = S32(0X500 << 16);
    // 0x80097E58: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80097E5C: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x80097E60: sw          $a0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r4;
    // 0x80097E64: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x80097E68: jal         0x80099BB0
    // 0x80097E6C: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_2;
    // 0x80097E6C: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    after_2:
    // 0x80097E70: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x80097E74: sw          $zero, 0x24($s2)
    MEM_W(0X24, ctx->r18) = 0;
L_80097E78:
    // 0x80097E78: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x80097E7C: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80097E80: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80097E84: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80097E88: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80097E8C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80097E90: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x80097E94: jr          $ra
    // 0x80097E98: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80097E98: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8008E0C0_694C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008E0C0: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x8008E0C4: lw          $v0, 0xB30($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XB30);
    // 0x8008E0C8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8008E0CC: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8008E0D0: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x8008E0D4: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8008E0D8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8008E0DC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8008E0E0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8008E0E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8008E0E8: lw          $v0, 0x34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X34);
    // 0x8008E0EC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8008E0F0: lw          $s3, 0x24($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X24);
    // 0x8008E0F4: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8008E0F8: sb          $v0, 0x24($s3)
    MEM_B(0X24, ctx->r19) = ctx->r2;
    // 0x8008E0FC: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x8008E100: sw          $v0, 0x1C($s3)
    MEM_W(0X1C, ctx->r19) = ctx->r2;
    // 0x8008E104: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x8008E108: lw          $v0, 0xB40($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XB40);
    // 0x8008E10C: lw          $v1, 0x1C($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X1C);
    // 0x8008E110: sw          $v0, 0x20($s3)
    MEM_W(0X20, ctx->r19) = ctx->r2;
    // 0x8008E114: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x8008E118: lw          $v0, 0xB44($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XB44);
    // 0x8008E11C: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
    // 0x8008E120: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8008E124: sw          $v0, 0x14($s3)
    MEM_W(0X14, ctx->r19) = ctx->r2;
    // 0x8008E128: beq         $v1, $zero, L_8008E15C
    if (ctx->r3 == 0) {
        // 0x8008E12C: sw          $v0, 0x18($s3)
        MEM_W(0X18, ctx->r19) = ctx->r2;
            goto L_8008E15C;
    }
    // 0x8008E12C: sw          $v0, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->r2;
L_8008E130:
    // 0x8008E130: lw          $v1, 0x14($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X14);
    // 0x8008E134: andi        $v0, $s2, 0xFFFF
    ctx->r2 = ctx->r18 & 0XFFFF;
    // 0x8008E138: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8008E13C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8008E140: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
    // 0x8008E144: lw          $v1, 0x1C($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X1C);
    // 0x8008E148: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8008E14C: andi        $v0, $s2, 0xFFFF
    ctx->r2 = ctx->r18 & 0XFFFF;
    // 0x8008E150: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8008E154: bne         $v0, $zero, L_8008E130
    if (ctx->r2 != 0) {
        // 0x8008E158: nop
    
            goto L_8008E130;
    }
    // 0x8008E158: nop

L_8008E15C:
    // 0x8008E15C: lbu         $v0, 0x24($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X24);
    // 0x8008E160: beq         $v0, $zero, L_8008E37C
    if (ctx->r2 == 0) {
        // 0x8008E164: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_8008E37C;
    }
    // 0x8008E164: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8008E168: lui         $s4, 0x8021
    ctx->r20 = S32(0X8021 << 16);
    // 0x8008E16C: addiu       $s4, $s4, 0xB48
    ctx->r20 = ADD32(ctx->r20, 0XB48);
    // 0x8008E170: addiu       $s5, $s4, 0x8
    ctx->r21 = ADD32(ctx->r20, 0X8);
    // 0x8008E174: andi        $v0, $s2, 0xFFFF
    ctx->r2 = ctx->r18 & 0XFFFF;
L_8008E178:
    // 0x8008E178: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x8008E17C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8008E180: lw          $a1, 0x20($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X20);
    // 0x8008E184: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8008E188: andi        $v0, $a0, 0xFFFF
    ctx->r2 = ctx->r4 & 0XFFFF;
    // 0x8008E18C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8008E190: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8008E194: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8008E198: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8008E19C: addiu       $a2, $a0, 0x1
    ctx->r6 = ADD32(ctx->r4, 0X1);
    // 0x8008E1A0: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x8008E1A4: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x8008E1A8: andi        $v0, $a2, 0xFFFF
    ctx->r2 = ctx->r6 & 0XFFFF;
    // 0x8008E1AC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8008E1B0: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8008E1B4: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x8008E1B8: addiu       $v0, $a2, 0x1
    ctx->r2 = ADD32(ctx->r6, 0X1);
    // 0x8008E1BC: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8008E1C0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8008E1C4: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8008E1C8: sw          $v1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r3;
    // 0x8008E1CC: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x8008E1D0: addiu       $v0, $a2, 0x2
    ctx->r2 = ADD32(ctx->r6, 0X2);
    // 0x8008E1D4: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8008E1D8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8008E1DC: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8008E1E0: sh          $v1, 0xA($a1)
    MEM_H(0XA, ctx->r5) = ctx->r3;
    // 0x8008E1E4: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x8008E1E8: addiu       $v0, $a2, 0x3
    ctx->r2 = ADD32(ctx->r6, 0X3);
    // 0x8008E1EC: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8008E1F0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8008E1F4: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8008E1F8: sh          $v1, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r3;
    // 0x8008E1FC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8008E200: addiu       $s0, $a2, 0x4
    ctx->r16 = ADD32(ctx->r6, 0X4);
    // 0x8008E204: sh          $v0, 0xC($a1)
    MEM_H(0XC, ctx->r5) = ctx->r2;
    // 0x8008E208: andi        $v0, $s0, 0xFFFF
    ctx->r2 = ctx->r16 & 0XFFFF;
    // 0x8008E20C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8008E210: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8008E214: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8008E218: beq         $v0, $zero, L_8008E300
    if (ctx->r2 == 0) {
        // 0x8008E21C: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_8008E300;
    }
    // 0x8008E21C: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x8008E220: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8008E224: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8008E228: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x8008E22C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8008E230: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8008E234: lwc1        $f2, 0x0($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8008E238: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x8008E23C: div.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
    // 0x8008E240: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x8008E244: lw          $v0, 0xB30($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XB30);
    // 0x8008E248: cvt.d.s     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.d = CVT_D_S(ctx->f2.fl);
    // 0x8008E24C: add.d       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f2.d); 
    ctx->f2.d = ctx->f2.d + ctx->f2.d;
    // 0x8008E250: lwc1        $f0, 0x40($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X40);
    // 0x8008E254: cvt.d.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.d = CVT_D_W(ctx->f0.u32l);
    // 0x8008E258: div.d       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = DIV_D(ctx->f2.d, ctx->f0.d);
    // 0x8008E25C: lw          $a0, 0x4($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X4);
    // 0x8008E260: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x8008E264: addiu       $s0, $a2, 0x6
    ctx->r16 = ADD32(ctx->r6, 0X6);
    // 0x8008E268: addiu       $v0, $a2, 0x5
    ctx->r2 = ADD32(ctx->r6, 0X5);
    // 0x8008E26C: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x8008E270: mtc1        $a0, $f4
    ctx->f4.u32l = ctx->r4;
    // 0x8008E274: nop

    // 0x8008E278: cvt.d.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.d = CVT_D_W(ctx->f4.u32l);
    // 0x8008E27C: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8008E280: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8008E284: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8008E288: cvt.s.d     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f2.fl = CVT_S_D(ctx->f2.d);
    // 0x8008E28C: swc1        $f2, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->f2.u32l;
    // 0x8008E290: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008E294: ldc1        $f2, 0x2DF0($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, 0X2DF0);
    // 0x8008E298: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8008E29C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x8008E2A0: cvt.d.s     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.d = CVT_D_S(ctx->f0.fl);
    // 0x8008E2A4: bgez        $a0, L_8008E2B8
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8008E2A8: div.d       $f2, $f0, $f2
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f2.d = DIV_D(ctx->f0.d, ctx->f2.d);
            goto L_8008E2B8;
    }
    // 0x8008E2A8: div.d       $f2, $f0, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f2.d = DIV_D(ctx->f0.d, ctx->f2.d);
    // 0x8008E2AC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008E2B0: ldc1        $f0, 0x2DF8($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X2DF8);
    // 0x8008E2B4: add.d       $f4, $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = ctx->f4.d + ctx->f0.d;
L_8008E2B8:
    // 0x8008E2B8: nop

    // 0x8008E2BC: mul.d       $f0, $f2, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f4.d); 
    ctx->f0.d = MUL_D(ctx->f2.d, ctx->f4.d);
    // 0x8008E2C0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8008E2C4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8008E2C8: sw          $zero, 0x18($a1)
    MEM_W(0X18, ctx->r5) = 0;
    // 0x8008E2CC: swc1        $f2, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->f2.u32l;
    // 0x8008E2D0: cvt.s.d     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f0.fl = CVT_S_D(ctx->f0.d);
    // 0x8008E2D4: swc1        $f0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->f0.u32l;
    // 0x8008E2D8: lw          $v1, 0x0($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X0);
    // 0x8008E2DC: sw          $v1, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r3;
    // 0x8008E2E0: lw          $v0, 0x4($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X4);
    // 0x8008E2E4: sw          $v0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r2;
    // 0x8008E2E8: lw          $v0, 0x24($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X24);
    // 0x8008E2EC: sw          $zero, 0x20($v0)
    MEM_W(0X20, ctx->r2) = 0;
    // 0x8008E2F0: lw          $v1, 0x24($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X24);
    // 0x8008E2F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8008E2F8: j           L_8008E308
    // 0x8008E2FC: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
        goto L_8008E308;
    // 0x8008E2FC: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
L_8008E300:
    // 0x8008E300: sw          $zero, 0x24($a1)
    MEM_W(0X24, ctx->r5) = 0;
    // 0x8008E304: addiu       $s0, $a2, 0x6
    ctx->r16 = ADD32(ctx->r6, 0X6);
L_8008E308:
    // 0x8008E308: andi        $v0, $s0, 0xFFFF
    ctx->r2 = ctx->r16 & 0XFFFF;
    // 0x8008E30C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8008E310: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8008E314: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8008E318: beql        $v0, $zero, L_8008E360
    if (ctx->r2 == 0) {
        // 0x8008E31C: sw          $zero, 0x20($a1)
        MEM_W(0X20, ctx->r5) = 0;
            goto L_8008E360;
    }
    goto skip_0;
    // 0x8008E31C: sw          $zero, 0x20($a1)
    MEM_W(0X20, ctx->r5) = 0;
    skip_0:
    // 0x8008E320: lw          $v1, 0x0($s5)
    ctx->r3 = MEM_W(ctx->r21, 0X0);
    // 0x8008E324: sw          $v1, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->r3;
    // 0x8008E328: lw          $v0, 0x4($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X4);
    // 0x8008E32C: sw          $v0, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r2;
    // 0x8008E330: lw          $v1, 0x20($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X20);
    // 0x8008E334: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x8008E338: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8008E33C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8008E340: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8008E344: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8008E348: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x8008E34C: lw          $a0, 0x20($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X20);
    // 0x8008E350: jal         0x80095A20
    // 0x8008E354: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    _init_lpfilter(rdram, ctx);
        goto after_0;
    // 0x8008E354: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_0:
    // 0x8008E358: j           L_8008E364
    // 0x8008E35C: nop

        goto L_8008E364;
    // 0x8008E35C: nop

L_8008E360:
    // 0x8008E360: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8008E364:
    // 0x8008E364: lbu         $v1, 0x24($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X24);
    // 0x8008E368: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8008E36C: andi        $v0, $s2, 0xFFFF
    ctx->r2 = ctx->r18 & 0XFFFF;
    // 0x8008E370: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8008E374: bne         $v0, $zero, L_8008E178
    if (ctx->r2 != 0) {
        // 0x8008E378: andi        $v0, $s2, 0xFFFF
        ctx->r2 = ctx->r18 & 0XFFFF;
            goto L_8008E178;
    }
    // 0x8008E378: andi        $v0, $s2, 0xFFFF
    ctx->r2 = ctx->r18 & 0XFFFF;
L_8008E37C:
    // 0x8008E37C: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8008E380: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x8008E384: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8008E388: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8008E38C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8008E390: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8008E394: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8008E398: jr          $ra
    // 0x8008E39C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8008E39C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80070050_4B450(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80070050: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80070054: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80070058: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8007005C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80070060: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80070064: jal         0x8003B810
    // 0x80070068: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8003B810_16C10(rdram, ctx);
        goto after_0;
    // 0x80070068: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8007006C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80070070: sb          $zero, 0x449($s0)
    MEM_B(0X449, ctx->r16) = 0;
    // 0x80070074: sb          $zero, 0x111($s0)
    MEM_B(0X111, ctx->r16) = 0;
    // 0x80070078: sb          $zero, 0x71($s0)
    MEM_B(0X71, ctx->r16) = 0;
    // 0x8007007C: sb          $zero, 0x73($s0)
    MEM_B(0X73, ctx->r16) = 0;
    // 0x80070080: sw          $zero, 0x188($s0)
    MEM_W(0X188, ctx->r16) = 0;
    // 0x80070084: sw          $zero, 0x18C($s0)
    MEM_W(0X18C, ctx->r16) = 0;
    // 0x80070088: sw          $zero, 0x190($s0)
    MEM_W(0X190, ctx->r16) = 0;
    // 0x8007008C: sw          $zero, 0x194($s0)
    MEM_W(0X194, ctx->r16) = 0;
    // 0x80070090: sb          $zero, 0x168($s0)
    MEM_B(0X168, ctx->r16) = 0;
    // 0x80070094: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80070098: beq         $v0, $zero, L_800700C0
    if (ctx->r2 == 0) {
        // 0x8007009C: sb          $zero, 0x169($s0)
        MEM_B(0X169, ctx->r16) = 0;
            goto L_800700C0;
    }
    // 0x8007009C: sb          $zero, 0x169($s0)
    MEM_B(0X169, ctx->r16) = 0;
    // 0x800700A0: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x800700A4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x800700A8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x800700AC: sb          $a0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r4;
    // 0x800700B0: bne         $v1, $v0, L_800700C0
    if (ctx->r3 != ctx->r2) {
        // 0x800700B4: sb          $a0, 0x6($s0)
        MEM_B(0X6, ctx->r16) = ctx->r4;
            goto L_800700C0;
    }
    // 0x800700B4: sb          $a0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r4;
    // 0x800700B8: j           L_800700C8
    // 0x800700BC: sb          $a0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r4;
        goto L_800700C8;
    // 0x800700BC: sb          $a0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r4;
L_800700C0:
    // 0x800700C0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x800700C4: sb          $v0, 0xBD($s0)
    MEM_B(0XBD, ctx->r16) = ctx->r2;
L_800700C8:
    // 0x800700C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800700CC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x800700D0: jr          $ra
    // 0x800700D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x800700D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80091E50_6D250(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80091E50: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80091E54: lw          $v0, -0xEEC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XEEC);
    // 0x80091E58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80091E5C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80091E60: sll         $s0, $a0, 16
    ctx->r16 = S32(ctx->r4 << 16);
    // 0x80091E64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80091E68: lw          $v0, 0x34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X34);
    // 0x80091E6C: sra         $s0, $s0, 14
    ctx->r16 = S32(SIGNED(ctx->r16) >> 14);
    // 0x80091E70: addiu       $a0, $s0, 0x24
    ctx->r4 = ADD32(ctx->r16, 0X24);
    // 0x80091E74: jal         0x8008F080
    // 0x80091E78: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_8008F080_6A480(rdram, ctx);
        goto after_0;
    // 0x80091E78: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_0:
    // 0x80091E7C: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80091E80: lw          $v0, -0xEEC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XEEC);
    // 0x80091E84: lw          $v0, 0x34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X34);
    // 0x80091E88: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x80091E8C: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x80091E90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80091E94: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80091E98: jr          $ra
    // 0x80091E9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80091E9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80028470_3870(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80028470: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80028474: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80028478: sll         $s2, $a0, 24
    ctx->r18 = S32(ctx->r4 << 24);
    // 0x8002847C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80028480: sra         $s0, $s2, 24
    ctx->r16 = S32(SIGNED(ctx->r18) >> 24);
    // 0x80028484: sll         $v0, $s0, 1
    ctx->r2 = S32(ctx->r16 << 1);
    // 0x80028488: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x8002848C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80028490: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x80028494: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80028498: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8002849C: addiu       $v1, $v1, 0x47F0
    ctx->r3 = ADD32(ctx->r3, 0X47F0);
    // 0x800284A0: addu        $t2, $v0, $v1
    ctx->r10 = ADD32(ctx->r2, ctx->r3);
    // 0x800284A4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800284A8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x800284AC: lb          $v0, 0xAA($t2)
    ctx->r2 = MEM_B(ctx->r10, 0XAA);
    // 0x800284B0: bne         $v0, $zero, L_800285E8
    if (ctx->r2 != 0) {
        // 0x800284B4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_800285E8;
    }
    // 0x800284B4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x800284B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x800284BC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x800284C0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x800284C4: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x800284C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800284CC: sb          $v0, 0xAA($t2)
    MEM_B(0XAA, ctx->r10) = ctx->r2;
    // 0x800284D0: lui         $t1, 0x800A
    ctx->r9 = S32(0X800A << 16);
    // 0x800284D4: lhu         $t1, 0x6C9A($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0X6C9A);
    // 0x800284D8: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x800284DC: lhu         $v1, 0x6C9C($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X6C9C);
    // 0x800284E0: addiu       $v0, $zero, 0x1FF
    ctx->r2 = ADD32(0, 0X1FF);
    // 0x800284E4: addiu       $a3, $zero, 0xA
    ctx->r7 = ADD32(0, 0XA);
    // 0x800284E8: sh          $v0, 0xB4($t2)
    MEM_H(0XB4, ctx->r10) = ctx->r2;
    // 0x800284EC: sh          $zero, 0xB6($t2)
    MEM_H(0XB6, ctx->r10) = 0;
    // 0x800284F0: sh          $v0, 0xBC($t2)
    MEM_H(0XBC, ctx->r10) = ctx->r2;
    // 0x800284F4: sh          $zero, 0xBE($t2)
    MEM_H(0XBE, ctx->r10) = 0;
    // 0x800284F8: srl         $t0, $t1, 1
    ctx->r8 = S32(U32(ctx->r9) >> 1);
    // 0x800284FC: subu        $a3, $a3, $t0
    ctx->r7 = SUB32(ctx->r7, ctx->r8);
    // 0x80028500: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x80028504: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    // 0x80028508: sll         $t1, $t1, 1
    ctx->r9 = S32(ctx->r9 << 1);
    // 0x8002850C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80028510: srl         $v1, $v1, 1
    ctx->r3 = S32(U32(ctx->r3) >> 1);
    // 0x80028514: sh          $v0, 0xB2($t2)
    MEM_H(0XB2, ctx->r10) = ctx->r2;
    // 0x80028518: sh          $v0, 0xBA($t2)
    MEM_H(0XBA, ctx->r10) = ctx->r2;
    // 0x8002851C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80028520: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80028524: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80028528: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8002852C: addiu       $t0, $t0, -0xB
    ctx->r8 = ADD32(ctx->r8, -0XB);
    // 0x80028530: sll         $t0, $t0, 16
    ctx->r8 = S32(ctx->r8 << 16);
    // 0x80028534: sra         $t0, $t0, 16
    ctx->r8 = S32(SIGNED(ctx->r8) >> 16);
    // 0x80028538: addiu       $v1, $v1, -0x9
    ctx->r3 = ADD32(ctx->r3, -0X9);
    // 0x8002853C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80028540: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80028544: sh          $t1, 0xB0($t2)
    MEM_H(0XB0, ctx->r10) = ctx->r9;
    // 0x80028548: sh          $t1, 0xB8($t2)
    MEM_H(0XB8, ctx->r10) = ctx->r9;
    // 0x8002854C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80028550: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x80028554: jal         0x800286A8
    // 0x80028558: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_800286A8_3AA8(rdram, ctx);
        goto after_0;
    // 0x80028558: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_0:
    // 0x8002855C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80028560: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80028564: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80028568: jal         0x80028794
    // 0x8002856C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80028794_3B94(rdram, ctx);
        goto after_1;
    // 0x8002856C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x80028570: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80028574: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80028578: jal         0x800287CC
    // 0x8002857C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800287CC_3BCC(rdram, ctx);
        goto after_2;
    // 0x8002857C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x80028580: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80028584: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80028588: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8002858C: jal         0x80028850
    // 0x80028590: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80028850_3C50(rdram, ctx);
        goto after_3;
    // 0x80028590: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
    // 0x80028594: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80028598: addiu       $a1, $zero, 0x3DE
    ctx->r5 = ADD32(0, 0X3DE);
    // 0x8002859C: addiu       $a2, $zero, 0x3E8
    ctx->r6 = ADD32(0, 0X3E8);
    // 0x800285A0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x800285A4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x800285A8: jal         0x80028888
    // 0x800285AC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_80028888_3C88(rdram, ctx);
        goto after_4;
    // 0x800285AC: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_4:
    // 0x800285B0: jal         0x8002894C
    // 0x800285B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002894C_3D4C(rdram, ctx);
        goto after_5;
    // 0x800285B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x800285B8: jal         0x800289A8
    // 0x800285BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800289A8_3DA8(rdram, ctx);
        goto after_6;
    // 0x800285BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x800285C0: sra         $a0, $s2, 24
    ctx->r4 = S32(SIGNED(ctx->r18) >> 24);
L_800285C4:
    // 0x800285C4: sll         $a1, $s1, 24
    ctx->r5 = S32(ctx->r17 << 24);
    // 0x800285C8: sra         $a1, $a1, 24
    ctx->r5 = S32(SIGNED(ctx->r5) >> 24);
    // 0x800285CC: jal         0x80028A00
    // 0x800285D0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80028A00_3E00(rdram, ctx);
        goto after_7;
    // 0x800285D0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x800285D4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800285D8: slti        $v0, $s1, 0x10
    ctx->r2 = SIGNED(ctx->r17) < 0X10 ? 1 : 0;
    // 0x800285DC: bne         $v0, $zero, L_800285C4
    if (ctx->r2 != 0) {
        // 0x800285E0: sra         $a0, $s2, 24
        ctx->r4 = S32(SIGNED(ctx->r18) >> 24);
            goto L_800285C4;
    }
    // 0x800285E0: sra         $a0, $s2, 24
    ctx->r4 = S32(SIGNED(ctx->r18) >> 24);
    // 0x800285E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800285E8:
    // 0x800285E8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800285EC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x800285F0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x800285F4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800285F8: jr          $ra
    // 0x800285FC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x800285FC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
