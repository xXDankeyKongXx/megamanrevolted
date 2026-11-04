#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80225F44_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225F44: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80225F48: beq         $v1, $zero, L_80225F60
    if (ctx->r3 == 0) {
        // 0x80225F4C: addiu       $v0, $zero, 0x64
        ctx->r2 = ADD32(0, 0X64);
            goto L_80225F60;
    }
    // 0x80225F4C: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x80225F50: beq         $v1, $v0, L_80225F74
    if (ctx->r3 == ctx->r2) {
        // 0x80225F54: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80225F74;
    }
    // 0x80225F54: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80225F58: j           L_80225F80
    // 0x80225F5C: nop

        goto L_80225F80;
    // 0x80225F5C: nop

L_80225F60:
    // 0x80225F60: lw          $a0, 0x24($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X24);
    // 0x80225F64: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80225F68: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x80225F6C: j           L_80225F80
    // 0x80225F70: sb          $zero, 0xE($a0)
    MEM_B(0XE, ctx->r4) = 0;
        goto L_80225F80;
    // 0x80225F70: sb          $zero, 0xE($a0)
    MEM_B(0XE, ctx->r4) = 0;
L_80225F74:
    // 0x80225F74: lw          $a0, 0x24($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X24);
    // 0x80225F78: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x80225F7C: sb          $zero, 0xD($a0)
    MEM_B(0XD, ctx->r4) = 0;
L_80225F80:
    // 0x80225F80: jr          $ra
    // 0x80225F84: nop

    TRACE_RETURN()
    return;
    // 0x80225F84: nop

;}
RECOMP_FUNC void func_80229E14_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229E14: addu        $t1, $a0, $zero
    ctx->r9 = ADD32(ctx->r4, 0);
    // 0x80229E18: lhu         $a1, 0x2A($t1)
    ctx->r5 = MEM_HU(ctx->r9, 0X2A);
    // 0x80229E1C: lhu         $v0, 0x2E($t1)
    ctx->r2 = MEM_HU(ctx->r9, 0X2E);
    // 0x80229E20: lhu         $a2, 0x28($t1)
    ctx->r6 = MEM_HU(ctx->r9, 0X28);
    // 0x80229E24: lhu         $v1, 0x1E($t1)
    ctx->r3 = MEM_HU(ctx->r9, 0X1E);
    // 0x80229E28: lhu         $a0, 0x20($t1)
    ctx->r4 = MEM_HU(ctx->r9, 0X20);
    // 0x80229E2C: lhu         $a3, 0x2C($t1)
    ctx->r7 = MEM_HU(ctx->r9, 0X2C);
    // 0x80229E30: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80229E34: lhu         $v0, 0x1C($t1)
    ctx->r2 = MEM_HU(ctx->r9, 0X1C);
    // 0x80229E38: sh          $a1, 0x2A($t1)
    MEM_H(0X2A, ctx->r9) = ctx->r5;
    // 0x80229E3C: lh          $t0, 0x2A($t1)
    ctx->r8 = MEM_H(ctx->r9, 0X2A);
    // 0x80229E40: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80229E44: addu        $a0, $a0, $a3
    ctx->r4 = ADD32(ctx->r4, ctx->r7);
    // 0x80229E48: sh          $v1, 0x1E($t1)
    MEM_H(0X1E, ctx->r9) = ctx->r3;
    // 0x80229E4C: sh          $a0, 0x20($t1)
    MEM_H(0X20, ctx->r9) = ctx->r4;
    // 0x80229E50: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80229E54: bltz        $t0, L_80229E68
    if (SIGNED(ctx->r8) < 0) {
        // 0x80229E58: sh          $v0, 0x1C($t1)
        MEM_H(0X1C, ctx->r9) = ctx->r2;
            goto L_80229E68;
    }
    // 0x80229E58: sh          $v0, 0x1C($t1)
    MEM_H(0X1C, ctx->r9) = ctx->r2;
    // 0x80229E5C: lbu         $v0, 0x8($t1)
    ctx->r2 = MEM_BU(ctx->r9, 0X8);
    // 0x80229E60: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229E64: sb          $v0, 0x8($t1)
    MEM_B(0X8, ctx->r9) = ctx->r2;
L_80229E68:
    // 0x80229E68: jr          $ra
    // 0x80229E6C: nop

    TRACE_RETURN()
    return;
    // 0x80229E6C: nop

;}
RECOMP_FUNC void func_8022A2D0_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A2D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A2D4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022A2D8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022A2DC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022A2E0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022A2E4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022A2E8: lw          $v0, -0x655C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X655C);
    // 0x8022A2EC: jalr        $v0
    // 0x8022A2F0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022A2F0: nop

    after_0:
    // 0x8022A2F4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022A2F8: jr          $ra
    // 0x8022A2FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A2FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802347D0_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802347D0: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x802347D4: lhu         $v0, 0x44($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X44);
    // 0x802347D8: lhu         $v1, 0x4C($a3)
    ctx->r3 = MEM_HU(ctx->r7, 0X4C);
    // 0x802347DC: lhu         $a0, 0x4E($a3)
    ctx->r4 = MEM_HU(ctx->r7, 0X4E);
    // 0x802347E0: lhu         $a1, 0x50($a3)
    ctx->r5 = MEM_HU(ctx->r7, 0X50);
    // 0x802347E4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802347E8: sh          $v0, 0x44($a3)
    MEM_H(0X44, ctx->r7) = ctx->r2;
    // 0x802347EC: lhu         $v0, 0x46($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X46);
    // 0x802347F0: lhu         $v1, 0x48($a3)
    ctx->r3 = MEM_HU(ctx->r7, 0X48);
    // 0x802347F4: lh          $a2, 0x44($a3)
    ctx->r6 = MEM_H(ctx->r7, 0X44);
    // 0x802347F8: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x802347FC: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80234800: sh          $v0, 0x46($a3)
    MEM_H(0X46, ctx->r7) = ctx->r2;
    // 0x80234804: slti        $v0, $a2, -0x6000
    ctx->r2 = SIGNED(ctx->r6) < -0X6000 ? 1 : 0;
    // 0x80234808: beq         $v0, $zero, L_80234818
    if (ctx->r2 == 0) {
        // 0x8023480C: sh          $v1, 0x48($a3)
        MEM_H(0X48, ctx->r7) = ctx->r3;
            goto L_80234818;
    }
    // 0x8023480C: sh          $v1, 0x48($a3)
    MEM_H(0X48, ctx->r7) = ctx->r3;
    // 0x80234810: j           L_80234824
    // 0x80234814: addiu       $v0, $zero, -0x6000
    ctx->r2 = ADD32(0, -0X6000);
        goto L_80234824;
    // 0x80234814: addiu       $v0, $zero, -0x6000
    ctx->r2 = ADD32(0, -0X6000);
L_80234818:
    // 0x80234818: slti        $v0, $a2, 0x6001
    ctx->r2 = SIGNED(ctx->r6) < 0X6001 ? 1 : 0;
    // 0x8023481C: bne         $v0, $zero, L_80234828
    if (ctx->r2 != 0) {
        // 0x80234820: addiu       $v0, $zero, 0x6000
        ctx->r2 = ADD32(0, 0X6000);
            goto L_80234828;
    }
    // 0x80234820: addiu       $v0, $zero, 0x6000
    ctx->r2 = ADD32(0, 0X6000);
L_80234824:
    // 0x80234824: sh          $v0, 0x44($a3)
    MEM_H(0X44, ctx->r7) = ctx->r2;
L_80234828:
    // 0x80234828: lh          $v1, 0x46($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X46);
    // 0x8023482C: slti        $v0, $v1, -0x6000
    ctx->r2 = SIGNED(ctx->r3) < -0X6000 ? 1 : 0;
    // 0x80234830: bne         $v0, $zero, L_80234844
    if (ctx->r2 != 0) {
        // 0x80234834: addiu       $v0, $zero, -0x6000
        ctx->r2 = ADD32(0, -0X6000);
            goto L_80234844;
    }
    // 0x80234834: addiu       $v0, $zero, -0x6000
    ctx->r2 = ADD32(0, -0X6000);
    // 0x80234838: slti        $v0, $v1, 0x6001
    ctx->r2 = SIGNED(ctx->r3) < 0X6001 ? 1 : 0;
    // 0x8023483C: bne         $v0, $zero, L_80234848
    if (ctx->r2 != 0) {
        // 0x80234840: addiu       $v0, $zero, 0x6000
        ctx->r2 = ADD32(0, 0X6000);
            goto L_80234848;
    }
    // 0x80234840: addiu       $v0, $zero, 0x6000
    ctx->r2 = ADD32(0, 0X6000);
L_80234844:
    // 0x80234844: sh          $v0, 0x46($a3)
    MEM_H(0X46, ctx->r7) = ctx->r2;
L_80234848:
    // 0x80234848: lh          $v1, 0x48($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X48);
    // 0x8023484C: slti        $v0, $v1, -0x6000
    ctx->r2 = SIGNED(ctx->r3) < -0X6000 ? 1 : 0;
    // 0x80234850: bne         $v0, $zero, L_80234864
    if (ctx->r2 != 0) {
        // 0x80234854: addiu       $v0, $zero, -0x6000
        ctx->r2 = ADD32(0, -0X6000);
            goto L_80234864;
    }
    // 0x80234854: addiu       $v0, $zero, -0x6000
    ctx->r2 = ADD32(0, -0X6000);
    // 0x80234858: slti        $v0, $v1, 0x6001
    ctx->r2 = SIGNED(ctx->r3) < 0X6001 ? 1 : 0;
    // 0x8023485C: bne         $v0, $zero, L_80234868
    if (ctx->r2 != 0) {
        // 0x80234860: addiu       $v0, $zero, 0x6000
        ctx->r2 = ADD32(0, 0X6000);
            goto L_80234868;
    }
    // 0x80234860: addiu       $v0, $zero, 0x6000
    ctx->r2 = ADD32(0, 0X6000);
L_80234864:
    // 0x80234864: sh          $v0, 0x48($a3)
    MEM_H(0X48, ctx->r7) = ctx->r2;
L_80234868:
    // 0x80234868: lh          $v0, 0x44($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X44);
    // 0x8023486C: lw          $v1, 0x1C($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X1C);
    // 0x80234870: lh          $a0, 0x46($a3)
    ctx->r4 = MEM_H(ctx->r7, 0X46);
    // 0x80234874: lw          $a1, 0x20($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X20);
    // 0x80234878: lhu         $a2, 0x18($a3)
    ctx->r6 = MEM_HU(ctx->r7, 0X18);
    // 0x8023487C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80234880: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234884: lh          $v0, 0x48($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X48);
    // 0x80234888: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x8023488C: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x80234890: sw          $v1, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->r3;
    // 0x80234894: lw          $v1, 0x24($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X24);
    // 0x80234898: lhu         $a0, 0x14($a3)
    ctx->r4 = MEM_HU(ctx->r7, 0X14);
    // 0x8023489C: sw          $a1, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->r5;
    // 0x802348A0: lhu         $a1, 0x16($a3)
    ctx->r5 = MEM_HU(ctx->r7, 0X16);
    // 0x802348A4: sh          $a2, 0x18($a3)
    MEM_H(0X18, ctx->r7) = ctx->r6;
    // 0x802348A8: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x802348AC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802348B0: sw          $v1, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r3;
    // 0x802348B4: sh          $a0, 0x14($a3)
    MEM_H(0X14, ctx->r7) = ctx->r4;
    // 0x802348B8: jr          $ra
    // 0x802348BC: sh          $a1, 0x16($a3)
    MEM_H(0X16, ctx->r7) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x802348BC: sh          $a1, 0x16($a3)
    MEM_H(0X16, ctx->r7) = ctx->r5;
;}
RECOMP_FUNC void func_80233748_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233748: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023374C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80233750: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x80233754: beq         $v0, $zero, L_80233764
    if (ctx->r2 == 0) {
        // 0x80233758: nop
    
            goto L_80233764;
    }
    // 0x80233758: nop

    // 0x8023375C: jal         0x80233AB0
    // 0x80233760: nop

    func_80233AB0_ovl22(rdram, ctx);
        goto after_0;
    // 0x80233760: nop

    after_0:
L_80233764:
    // 0x80233764: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80233768: jr          $ra
    // 0x8023376C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023376C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D5F8_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D5F8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022D5FC: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022D600: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022D604: addiu       $a0, $s1, 0xC4
    ctx->r4 = ADD32(ctx->r17, 0XC4);
    // 0x8022D608: addiu       $a1, $s1, 0x180
    ctx->r5 = ADD32(ctx->r17, 0X180);
    // 0x8022D60C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022D610: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8022D614: jal         0x8009A3B4
    // 0x8022D618: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022D618: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    after_0:
    // 0x8022D61C: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8022D620: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x8022D624: addiu       $a0, $s0, 0xC4
    ctx->r4 = ADD32(ctx->r16, 0XC4);
    // 0x8022D628: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022D62C: jal         0x8009A3B4
    // 0x8022D630: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022D630: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8022D634: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022D638: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022D63C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x8022D640: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022D644: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    // 0x8022D648: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8022D64C: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x8022D650: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022D654: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    // 0x8022D658: jal         0x8004DF78
    // 0x8022D65C: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    func_8004DF78_29378(rdram, ctx);
        goto after_2;
    // 0x8022D65C: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    after_2:
    // 0x8022D660: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022D664: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8022D668: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8022D66C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022D670: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022D674: jr          $ra
    // 0x8022D678: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022D678: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80230FF4_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230FF4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80230FF8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80230FFC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80231000: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80231004: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231008: lbu         $v1, 0xB($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XB);
    // 0x8023100C: beq         $v1, $zero, L_80231024
    if (ctx->r3 == 0) {
        // 0x80231010: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80231024;
    }
    // 0x80231010: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231014: beq         $v1, $v0, L_80231048
    if (ctx->r3 == ctx->r2) {
        // 0x80231018: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80231048;
    }
    // 0x80231018: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023101C: j           L_802310AC
    // 0x80231020: nop

        goto L_802310AC;
    // 0x80231020: nop

L_80231024:
    // 0x80231024: lbu         $v1, 0xB($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XB);
    // 0x80231028: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8023102C: sh          $zero, 0x44($s1)
    MEM_H(0X44, ctx->r17) = 0;
    // 0x80231030: sh          $zero, 0x46($s1)
    MEM_H(0X46, ctx->r17) = 0;
    // 0x80231034: sh          $zero, 0x48($s1)
    MEM_H(0X48, ctx->r17) = 0;
    // 0x80231038: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x8023103C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80231040: j           L_802310AC
    // 0x80231044: sb          $v1, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r3;
        goto L_802310AC;
    // 0x80231044: sb          $v1, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r3;
L_80231048:
    // 0x80231048: lhu         $a2, 0x46($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X46);
    // 0x8023104C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80231050: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80231054: addiu       $a2, $a2, 0x40
    ctx->r6 = ADD32(ctx->r6, 0X40);
    // 0x80231058: sh          $a2, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r6;
    // 0x8023105C: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x80231060: jal         0x8004DA90
    // 0x80231064: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80231064: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    after_0:
    // 0x80231068: lh          $v0, 0x16($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X16);
    // 0x8023106C: slti        $v0, $v0, -0x1
    ctx->r2 = SIGNED(ctx->r2) < -0X1 ? 1 : 0;
    // 0x80231070: bne         $v0, $zero, L_802310AC
    if (ctx->r2 != 0) {
        // 0x80231074: addiu       $s0, $s1, 0x180
        ctx->r16 = ADD32(ctx->r17, 0X180);
            goto L_802310AC;
    }
    // 0x80231074: addiu       $s0, $s1, 0x180
    ctx->r16 = ADD32(ctx->r17, 0X180);
    // 0x80231078: jal         0x80231DA8
    // 0x8023107C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80231DA8_ovl22(rdram, ctx);
        goto after_1;
    // 0x8023107C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80231080: jal         0x80231DA8
    // 0x80231084: addiu       $a0, $s1, 0x188
    ctx->r4 = ADD32(ctx->r17, 0X188);
    func_80231DA8_ovl22(rdram, ctx);
        goto after_2;
    // 0x80231084: addiu       $a0, $s1, 0x188
    ctx->r4 = ADD32(ctx->r17, 0X188);
    after_2:
    // 0x80231088: jal         0x80231DA8
    // 0x8023108C: addiu       $a0, $s1, 0x1B8
    ctx->r4 = ADD32(ctx->r17, 0X1B8);
    func_80231DA8_ovl22(rdram, ctx);
        goto after_3;
    // 0x8023108C: addiu       $a0, $s1, 0x1B8
    ctx->r4 = ADD32(ctx->r17, 0X1B8);
    after_3:
    // 0x80231090: jal         0x80231DA8
    // 0x80231094: addiu       $a0, $s1, 0x1C0
    ctx->r4 = ADD32(ctx->r17, 0X1C0);
    func_80231DA8_ovl22(rdram, ctx);
        goto after_4;
    // 0x80231094: addiu       $a0, $s1, 0x1C0
    ctx->r4 = ADD32(ctx->r17, 0X1C0);
    after_4:
    // 0x80231098: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023109C: jal         0x8007A1B8
    // 0x802310A0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8007A1B8_555B8(rdram, ctx);
        goto after_5;
    // 0x802310A0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x802310A4: jal         0x8004F418
    // 0x802310A8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_6;
    // 0x802310A8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
L_802310AC:
    // 0x802310AC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802310B0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802310B4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802310B8: jr          $ra
    // 0x802310BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802310BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022F454_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F454: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022F458: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022F45C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F460: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022F464: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022F468: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022F46C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022F470: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022F474: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022F478: lw          $v0, -0x63E4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X63E4);
    // 0x8022F47C: jalr        $v0
    // 0x8022F480: addiu       $s1, $s0, 0xC4
    ctx->r17 = ADD32(ctx->r16, 0XC4);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022F480: addiu       $s1, $s0, 0xC4
    ctx->r17 = ADD32(ctx->r16, 0XC4);
    after_0:
    // 0x8022F484: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022F488: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022F48C: bne         $v1, $v0, L_8022F53C
    if (ctx->r3 != ctx->r2) {
        // 0x8022F490: nop
    
            goto L_8022F53C;
    }
    // 0x8022F490: nop

    // 0x8022F494: lb          $v0, 0x66($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X66);
    // 0x8022F498: bne         $v0, $zero, L_8022F4B8
    if (ctx->r2 != 0) {
        // 0x8022F49C: addu        $a1, $v0, $zero
        ctx->r5 = ADD32(ctx->r2, 0);
            goto L_8022F4B8;
    }
    // 0x8022F49C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8022F4A0: addiu       $v0, $zero, -0x8000
    ctx->r2 = ADD32(0, -0X8000);
    // 0x8022F4A4: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022F4A8: sb          $zero, 0x66($s0)
    MEM_B(0X66, ctx->r16) = 0;
    // 0x8022F4AC: sb          $zero, 0x65($s0)
    MEM_B(0X65, ctx->r16) = 0;
    // 0x8022F4B0: j           L_8022F53C
    // 0x8022F4B4: sb          $zero, 0x64($s0)
    MEM_B(0X64, ctx->r16) = 0;
        goto L_8022F53C;
    // 0x8022F4B4: sb          $zero, 0x64($s0)
    MEM_B(0X64, ctx->r16) = 0;
L_8022F4B8:
    // 0x8022F4B8: andi        $a1, $a1, 0x1F
    ctx->r5 = ctx->r5 & 0X1F;
    // 0x8022F4BC: lbu         $v1, 0x64($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X64);
    // 0x8022F4C0: lbu         $a0, 0x65($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X65);
    // 0x8022F4C4: lbu         $v0, 0x64($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X64);
    // 0x8022F4C8: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x8022F4CC: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x8022F4D0: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x8022F4D4: sll         $a0, $a0, 5
    ctx->r4 = S32(ctx->r4 << 5);
    // 0x8022F4D8: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x8022F4DC: sb          $v0, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r2;
    // 0x8022F4E0: lbu         $v0, 0x65($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X65);
    // 0x8022F4E4: lb          $a0, 0x64($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X64);
    // 0x8022F4E8: sll         $a1, $a1, 10
    ctx->r5 = S32(ctx->r5 << 10);
    // 0x8022F4EC: or          $v1, $v1, $a1
    ctx->r3 = ctx->r3 | ctx->r5;
    // 0x8022F4F0: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x8022F4F4: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x8022F4F8: bgez        $a0, L_8022F514
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8022F4FC: sb          $v0, 0x65($s0)
        MEM_B(0X65, ctx->r16) = ctx->r2;
            goto L_8022F514;
    }
    // 0x8022F4FC: sb          $v0, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r2;
    // 0x8022F500: lhu         $v0, 0x15E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X15E);
    // 0x8022F504: sb          $zero, 0x64($s0)
    MEM_B(0X64, ctx->r16) = 0;
    // 0x8022F508: sb          $zero, 0x65($s0)
    MEM_B(0X65, ctx->r16) = 0;
    // 0x8022F50C: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x8022F510: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
L_8022F514:
    // 0x8022F514: lh          $v0, 0x15E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X15E);
    // 0x8022F518: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x8022F51C: beq         $v0, $zero, L_8022F53C
    if (ctx->r2 == 0) {
        // 0x8022F520: nop
    
            goto L_8022F53C;
    }
    // 0x8022F520: nop

    // 0x8022F524: lbu         $v0, 0x66($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X66);
    // 0x8022F528: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022F52C: sb          $v0, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r2;
    // 0x8022F530: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022F534: bltzl       $v0, L_8022F53C
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022F538: sb          $zero, 0x66($s0)
        MEM_B(0X66, ctx->r16) = 0;
            goto L_8022F53C;
    }
    goto skip_0;
    // 0x8022F538: sb          $zero, 0x66($s0)
    MEM_B(0X66, ctx->r16) = 0;
    skip_0:
L_8022F53C:
    // 0x8022F53C: jal         0x8005044C
    // 0x8022F540: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x8022F540: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022F544: jal         0x80040F30
    // 0x8022F548: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_2;
    // 0x8022F548: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022F54C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F550: jal         0x8003E934
    // 0x8022F554: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_3;
    // 0x8022F554: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    after_3:
    // 0x8022F558: lbu         $v1, 0x6($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X6);
    // 0x8022F55C: andi        $v1, $v1, 0x40
    ctx->r3 = ctx->r3 & 0X40;
    // 0x8022F560: bne         $v1, $zero, L_8022F5F8
    if (ctx->r3 != 0) {
        // 0x8022F564: addu        $s1, $v0, $zero
        ctx->r17 = ADD32(ctx->r2, 0);
            goto L_8022F5F8;
    }
    // 0x8022F564: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022F568: lh          $v0, 0x2E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X2E);
    // 0x8022F56C: subu        $v0, $s1, $v0
    ctx->r2 = SUB32(ctx->r17, ctx->r2);
    // 0x8022F570: slti        $v0, $v0, 0x10
    ctx->r2 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x8022F574: bne         $v0, $zero, L_8022F5B0
    if (ctx->r2 != 0) {
        // 0x8022F578: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8022F5B0;
    }
    // 0x8022F578: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022F57C: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022F580: beq         $v1, $v0, L_8022F5F8
    if (ctx->r3 == ctx->r2) {
        // 0x8022F584: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022F5F8;
    }
    // 0x8022F584: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F588: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x8022F58C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022F590: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022F594: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x8022F598: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022F59C: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x8022F5A0: jal         0x80050294
    // 0x8022F5A4: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x8022F5A4: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    after_4:
    // 0x8022F5A8: j           L_8022F5F8
    // 0x8022F5AC: nop

        goto L_8022F5F8;
    // 0x8022F5AC: nop

L_8022F5B0:
    // 0x8022F5B0: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022F5B4: bne         $v1, $v0, L_8022F5F0
    if (ctx->r3 != ctx->r2) {
        // 0x8022F5B8: sll         $v0, $s1, 16
        ctx->r2 = S32(ctx->r17 << 16);
            goto L_8022F5F0;
    }
    // 0x8022F5B8: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x8022F5BC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022F5C0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022F5C4: beq         $v1, $v0, L_8022F5EC
    if (ctx->r3 == ctx->r2) {
        // 0x8022F5C8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022F5EC;
    }
    // 0x8022F5C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F5CC: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x8022F5D0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022F5D4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022F5D8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022F5DC: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022F5E0: jal         0x80050294
    // 0x8022F5E4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x8022F5E4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_5:
    // 0x8022F5E8: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
L_8022F5EC:
    // 0x8022F5EC: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
L_8022F5F0:
    // 0x8022F5F0: sh          $s1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r17;
    // 0x8022F5F4: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_8022F5F8:
    // 0x8022F5F8: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022F5FC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022F600: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022F604: jr          $ra
    // 0x8022F608: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022F608: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80232868_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232868: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023286C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232870: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232874: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80232878: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8023287C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80232880: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80232884: lui         $s2, 0x801C
    ctx->r18 = S32(0X801C << 16);
    // 0x80232888: addiu       $s2, $s2, -0x3A50
    ctx->r18 = ADD32(ctx->r18, -0X3A50);
    // 0x8023288C: bne         $v0, $zero, L_802328F0
    if (ctx->r2 != 0) {
        // 0x80232890: addiu       $s1, $s0, 0x500
        ctx->r17 = ADD32(ctx->r16, 0X500);
            goto L_802328F0;
    }
    // 0x80232890: addiu       $s1, $s0, 0x500
    ctx->r17 = ADD32(ctx->r16, 0X500);
    // 0x80232894: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80232898: bne         $v0, $zero, L_802328A4
    if (ctx->r2 != 0) {
        // 0x8023289C: addiu       $v0, $zero, 0x400
        ctx->r2 = ADD32(0, 0X400);
            goto L_802328A4;
    }
    // 0x8023289C: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x802328A0: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
L_802328A4:
    // 0x802328A4: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x802328A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802328AC: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x802328B0: jal         0x80050294
    // 0x802328B4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802328B4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802328B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802328BC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802328C0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802328C4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802328C8: sb          $zero, 0x117($s0)
    MEM_B(0X117, ctx->r16) = 0;
    // 0x802328CC: sb          $zero, 0x10B($s0)
    MEM_B(0X10B, ctx->r16) = 0;
    // 0x802328D0: sb          $v0, 0x14B($s0)
    MEM_B(0X14B, ctx->r16) = ctx->r2;
    // 0x802328D4: sb          $v0, 0x147($s0)
    MEM_B(0X147, ctx->r16) = ctx->r2;
    // 0x802328D8: sb          $v0, 0x143($s0)
    MEM_B(0X143, ctx->r16) = ctx->r2;
    // 0x802328DC: jal         0x80232998
    // 0x802328E0: sb          $v0, 0x14F($s0)
    MEM_B(0X14F, ctx->r16) = ctx->r2;
    func_80232998_ovl22(rdram, ctx);
        goto after_1;
    // 0x802328E0: sb          $v0, 0x14F($s0)
    MEM_B(0X14F, ctx->r16) = ctx->r2;
    after_1:
    // 0x802328E4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802328E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802328EC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802328F0:
    // 0x802328F0: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x802328F4: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    // 0x802328F8: beq         $v1, $v0, L_8023296C
    if (ctx->r3 == ctx->r2) {
        // 0x802328FC: slti        $v0, $v1, 0x5B
        ctx->r2 = SIGNED(ctx->r3) < 0X5B ? 1 : 0;
            goto L_8023296C;
    }
    // 0x802328FC: slti        $v0, $v1, 0x5B
    ctx->r2 = SIGNED(ctx->r3) < 0X5B ? 1 : 0;
    // 0x80232900: beq         $v0, $zero, L_80232920
    if (ctx->r2 == 0) {
        // 0x80232904: addiu       $v0, $zero, 0x1E
        ctx->r2 = ADD32(0, 0X1E);
            goto L_80232920;
    }
    // 0x80232904: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80232908: beq         $v1, $v0, L_80232950
    if (ctx->r3 == ctx->r2) {
        // 0x8023290C: addiu       $v0, $zero, 0x46
        ctx->r2 = ADD32(0, 0X46);
            goto L_80232950;
    }
    // 0x8023290C: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x80232910: beq         $v1, $v0, L_80232960
    if (ctx->r3 == ctx->r2) {
        // 0x80232914: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80232960;
    }
    // 0x80232914: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232918: j           L_80232980
    // 0x8023291C: nop

        goto L_80232980;
    // 0x8023291C: nop

L_80232920:
    // 0x80232920: addiu       $v0, $zero, 0x8C
    ctx->r2 = ADD32(0, 0X8C);
    // 0x80232924: beq         $v1, $v0, L_8023296C
    if (ctx->r3 == ctx->r2) {
        // 0x80232928: slti        $v0, $v1, 0x8D
        ctx->r2 = SIGNED(ctx->r3) < 0X8D ? 1 : 0;
            goto L_8023296C;
    }
    // 0x80232928: slti        $v0, $v1, 0x8D
    ctx->r2 = SIGNED(ctx->r3) < 0X8D ? 1 : 0;
    // 0x8023292C: beq         $v0, $zero, L_80232944
    if (ctx->r2 == 0) {
        // 0x80232930: addiu       $v0, $zero, 0x7C
        ctx->r2 = ADD32(0, 0X7C);
            goto L_80232944;
    }
    // 0x80232930: addiu       $v0, $zero, 0x7C
    ctx->r2 = ADD32(0, 0X7C);
    // 0x80232934: beq         $v1, $v0, L_80232960
    if (ctx->r3 == ctx->r2) {
        // 0x80232938: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80232960;
    }
    // 0x80232938: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023293C: j           L_80232980
    // 0x80232940: nop

        goto L_80232980;
    // 0x80232940: nop

L_80232944:
    // 0x80232944: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x80232948: bne         $v1, $v0, L_80232980
    if (ctx->r3 != ctx->r2) {
        // 0x8023294C: nop
    
            goto L_80232980;
    }
    // 0x8023294C: nop

L_80232950:
    // 0x80232950: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232954: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80232958: j           L_80232978
    // 0x8023295C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
        goto L_80232978;
    // 0x8023295C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
L_80232960:
    // 0x80232960: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80232964: j           L_80232978
    // 0x80232968: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
        goto L_80232978;
    // 0x80232968: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
L_8023296C:
    // 0x8023296C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232970: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80232974: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
L_80232978:
    // 0x80232978: jal         0x80232998
    // 0x8023297C: nop

    func_80232998_ovl22(rdram, ctx);
        goto after_2;
    // 0x8023297C: nop

    after_2:
L_80232980:
    // 0x80232980: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80232984: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80232988: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023298C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232990: jr          $ra
    // 0x80232994: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80232994: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022CBC0_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CBC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022CBC4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022CBC8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022CBCC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022CBD0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022CBD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022CBD8: jal         0x8009A3B4
    // 0x8022CBDC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022CBDC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022CBE0: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022CBE4: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022CBE8: jal         0x8009A3B4
    // 0x8022CBEC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022CBEC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022CBF0: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022CBF4: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022CBF8: jal         0x8009A3B4
    // 0x8022CBFC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022CBFC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022CC00: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022CC04: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022CC08: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022CC0C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022CC10: lw          $v0, -0x64B0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X64B0);
    // 0x8022CC14: jalr        $v0
    // 0x8022CC18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8022CC18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022CC1C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022CC20: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022CC24: beq         $v0, $zero, L_8022CC3C
    if (ctx->r2 == 0) {
        // 0x8022CC28: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022CC3C;
    }
    // 0x8022CC28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CC2C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x8022CC30: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022CC34: jal         0x8003B564
    // 0x8022CC38: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_4;
    // 0x8022CC38: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
L_8022CC3C:
    // 0x8022CC3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022CC40: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022CC44: jr          $ra
    // 0x8022CC48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022CC48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E8B4_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E8B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E8B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E8BC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E8C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022E8C4: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022E8C8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022E8CC: bne         $v1, $v0, L_8022E968
    if (ctx->r3 != ctx->r2) {
        // 0x8022E8D0: addiu       $a0, $s0, 0x348
        ctx->r4 = ADD32(ctx->r16, 0X348);
            goto L_8022E968;
    }
    // 0x8022E8D0: addiu       $a0, $s0, 0x348
    ctx->r4 = ADD32(ctx->r16, 0X348);
    // 0x8022E8D4: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x8022E8D8: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x8022E8DC: ori         $v1, $v1, 0xFF00
    ctx->r3 = ctx->r3 | 0XFF00;
    // 0x8022E8E0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022E8E4: addiu       $v1, $zero, 0x600
    ctx->r3 = ADD32(0, 0X600);
    // 0x8022E8E8: bne         $v0, $v1, L_8022E968
    if (ctx->r2 != ctx->r3) {
        // 0x8022E8EC: nop
    
            goto L_8022E968;
    }
    // 0x8022E8EC: nop

    // 0x8022E8F0: lbu         $v0, 0xCB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XCB);
    // 0x8022E8F4: sltiu       $v0, $v0, 0xB4
    ctx->r2 = ctx->r2 < 0XB4 ? 1 : 0;
    // 0x8022E8F8: beq         $v0, $zero, L_8022E94C
    if (ctx->r2 == 0) {
        // 0x8022E8FC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022E94C;
    }
    // 0x8022E8FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E900: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022E904: lh          $a3, 0x382($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X382);
    // 0x8022E908: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022E90C: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022E910: jal         0x8004F820
    // 0x8022E914: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022E914: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x8022E918: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E91C: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022E920: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022E924: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022E928: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022E92C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022E930: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022E934: jal         0x8004DA90
    // 0x8022E938: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x8022E938: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_1:
    // 0x8022E93C: lbu         $v0, 0xCB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XCB);
    // 0x8022E940: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022E944: j           L_8022E9A4
    // 0x8022E948: sb          $v0, 0xCB($s0)
    MEM_B(0XCB, ctx->r16) = ctx->r2;
        goto L_8022E9A4;
    // 0x8022E948: sb          $v0, 0xCB($s0)
    MEM_B(0XCB, ctx->r16) = ctx->r2;
L_8022E94C:
    // 0x8022E94C: lbu         $v1, 0xCA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XCA);
    // 0x8022E950: sb          $zero, 0xCB($s0)
    MEM_B(0XCB, ctx->r16) = 0;
    // 0x8022E954: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022E958: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022E95C: andi        $v1, $v1, 0x7F
    ctx->r3 = ctx->r3 & 0X7F;
    // 0x8022E960: j           L_8022E9A4
    // 0x8022E964: sb          $v1, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r3;
        goto L_8022E9A4;
    // 0x8022E964: sb          $v1, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r3;
L_8022E968:
    // 0x8022E968: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022E96C: lh          $a3, 0x3A($a0)
    ctx->r7 = MEM_H(ctx->r4, 0X3A);
    // 0x8022E970: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022E974: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022E978: jal         0x8004F820
    // 0x8022E97C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8022E97C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x8022E980: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E984: lh          $a1, 0x44($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X44);
    // 0x8022E988: lhu         $v1, 0x56($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X56);
    // 0x8022E98C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022E990: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022E994: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022E998: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022E99C: jal         0x8004DA90
    // 0x8022E9A0: sh          $v1, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x8022E9A0: sh          $v1, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r3;
    after_3:
L_8022E9A4:
    // 0x8022E9A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022E9A8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E9AC: jr          $ra
    // 0x8022E9B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E9B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232BB8_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232BB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232BBC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232BC0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232BC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80232BC8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80232BCC: bne         $v0, $zero, L_80232C38
    if (ctx->r2 != 0) {
        // 0x80232BD0: addiu       $a1, $s0, 0x3
        ctx->r5 = ADD32(ctx->r16, 0X3);
            goto L_80232C38;
    }
    // 0x80232BD0: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x80232BD4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80232BD8: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80232BDC: jal         0x8004D5D4
    // 0x80232BE0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80232BE0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80232BE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232BE8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80232BEC: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80232BF0: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80232BF4: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80232BF8: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80232BFC: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80232C00: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80232C04: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80232C08: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80232C0C: jal         0x80050294
    // 0x80232C10: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80232C10: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_1:
    // 0x80232C14: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80232C18: lbu         $v1, 0xE($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XE);
    // 0x80232C1C: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x80232C20: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232C24: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80232C28: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80232C2C: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80232C30: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
    // 0x80232C34: sb          $a0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r4;
L_80232C38:
    // 0x80232C38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80232C3C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232C40: jr          $ra
    // 0x80232C44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232C44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80237068_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237068: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023706C: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x80237070: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80237074: lb          $v1, 0xC($a2)
    ctx->r3 = MEM_B(ctx->r6, 0XC);
    // 0x80237078: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8023707C: addu        $a1, $v0, $v1
    ctx->r5 = ADD32(ctx->r2, ctx->r3);
    // 0x80237080: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80237084: addiu       $v1, $v1, -0x5CE0
    ctx->r3 = ADD32(ctx->r3, -0X5CE0);
    // 0x80237088: lhu         $v0, 0x14($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X14);
    // 0x8023708C: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x80237090: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x80237094: lbu         $a0, 0x2($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X2);
    // 0x80237098: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8023709C: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x802370A0: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x802370A4: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x802370A8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x802370AC: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x802370B0: sltu        $v0, $v0, $a0
    ctx->r2 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x802370B4: beq         $v0, $zero, L_8023710C
    if (ctx->r2 == 0) {
        // 0x802370B8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8023710C;
    }
    // 0x802370B8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x802370BC: lhu         $v0, 0x18($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X18);
    // 0x802370C0: lbu         $v1, 0x1($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X1);
    // 0x802370C4: lbu         $a0, 0x3($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X3);
    // 0x802370C8: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802370CC: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x802370D0: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x802370D4: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x802370D8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x802370DC: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x802370E0: sltu        $v0, $v0, $a0
    ctx->r2 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x802370E4: beq         $v0, $zero, L_8023710C
    if (ctx->r2 == 0) {
        // 0x802370E8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8023710C;
    }
    // 0x802370E8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x802370EC: lb          $v1, 0x4($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X4);
    // 0x802370F0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802370F4: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x802370F8: beq         $v1, $v0, L_80237108
    if (ctx->r3 == ctx->r2) {
        // 0x802370FC: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80237108;
    }
    // 0x802370FC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80237100: bne         $v1, $v0, L_8023710C
    if (ctx->r3 != ctx->r2) {
        // 0x80237104: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8023710C;
    }
    // 0x80237104: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80237108:
    // 0x80237108: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8023710C:
    // 0x8023710C: beq         $v0, $zero, L_80237120
    if (ctx->r2 == 0) {
        // 0x80237110: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80237120;
    }
    // 0x80237110: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80237114: jal         0x8006036C
    // 0x80237118: addiu       $a0, $zero, 0x6E
    ctx->r4 = ADD32(0, 0X6E);
    func_8006036C_3B76C(rdram, ctx);
        goto after_0;
    // 0x80237118: addiu       $a0, $zero, 0x6E
    ctx->r4 = ADD32(0, 0X6E);
    after_0:
    // 0x8023711C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80237120:
    // 0x80237120: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80237124: jr          $ra
    // 0x80237128: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80237128: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80230C08_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230C08: lbu         $v1, 0xAC($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XAC);
    // 0x80230C0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230C10: beq         $v1, $v0, L_80230C1C
    if (ctx->r3 == ctx->r2) {
        // 0x80230C14: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80230C1C;
    }
    // 0x80230C14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230C18: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
L_80230C1C:
    // 0x80230C1C: lhu         $v0, 0x56($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X56);
    // 0x80230C20: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80230C24: sb          $v1, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r3;
    // 0x80230C28: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x80230C2C: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80230C30: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80230C34: jr          $ra
    // 0x80230C38: sh          $v0, 0x384($a0)
    MEM_H(0X384, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80230C38: sh          $v0, 0x384($a0)
    MEM_H(0X384, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_8022D46C_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D46C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D470: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D474: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D478: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022D47C: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022D480: sltiu       $v0, $v1, 0x8
    ctx->r2 = ctx->r3 < 0X8 ? 1 : 0;
    // 0x8022D484: beq         $v0, $zero, L_8022D518
    if (ctx->r2 == 0) {
        // 0x8022D488: addiu       $a0, $s0, 0x308
        ctx->r4 = ADD32(ctx->r16, 0X308);
            goto L_8022D518;
    }
    // 0x8022D488: addiu       $a0, $s0, 0x308
    ctx->r4 = ADD32(ctx->r16, 0X308);
    // 0x8022D48C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022D490: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022D494: addu        $at, $at, $v0
    gpr jr_addend_8022D49C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D498: lw          $v0, -0x5B70($at)
    ctx->r2 = ADD32(ctx->r1, -0X5B70);
    // 0x8022D49C: jr          $v0
    // 0x8022D4A0: nop

    switch (jr_addend_8022D49C >> 2) {
        case 0: goto L_8022D4A4; break;
        case 1: goto L_8022D4BC; break;
        case 2: goto L_8022D4DC; break;
        case 3: goto L_8022D4BC; break;
        case 4: goto L_8022D4DC; break;
        case 5: goto L_8022D4BC; break;
        case 6: goto L_8022D4DC; break;
        case 7: goto L_8022D504; break;
        default: switch_error(__func__, 0x8022D49C, 0x8023A490);
    }
    // 0x8022D4A0: nop

L_8022D4A4:
    // 0x8022D4A4: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x8022D4A8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022D4AC: beq         $v0, $zero, L_8022D518
    if (ctx->r2 == 0) {
        // 0x8022D4B0: nop
    
            goto L_8022D518;
    }
    // 0x8022D4B0: nop

    // 0x8022D4B4: j           L_8022D4F4
    // 0x8022D4B8: nop

        goto L_8022D4F4;
    // 0x8022D4B8: nop

L_8022D4BC:
    // 0x8022D4BC: jal         0x8022D7A4
    // 0x8022D4C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022D7A4_ovl22(rdram, ctx);
        goto after_0;
    // 0x8022D4C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8022D4C4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022D4C8: beq         $v0, $zero, L_8022D518
    if (ctx->r2 == 0) {
        // 0x8022D4CC: addiu       $v1, $zero, 0x4
        ctx->r3 = ADD32(0, 0X4);
            goto L_8022D518;
    }
    // 0x8022D4CC: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x8022D4D0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022D4D4: j           L_8022D4F8
    // 0x8022D4D8: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
        goto L_8022D4F8;
    // 0x8022D4D8: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_8022D4DC:
    // 0x8022D4DC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022D4E0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D4E4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022D4E8: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022D4EC: bne         $v0, $zero, L_8022D518
    if (ctx->r2 != 0) {
        // 0x8022D4F0: nop
    
            goto L_8022D518;
    }
    // 0x8022D4F0: nop

L_8022D4F4:
    // 0x8022D4F4: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
L_8022D4F8:
    // 0x8022D4F8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D4FC: j           L_8022D518
    // 0x8022D500: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022D518;
    // 0x8022D500: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022D504:
    // 0x8022D504: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D508: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022D50C: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8022D510: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022D514: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022D518:
    // 0x8022D518: jal         0x8022D67C
    // 0x8022D51C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022D67C_ovl22(rdram, ctx);
        goto after_1;
    // 0x8022D51C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022D520: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022D524: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D528: jr          $ra
    // 0x8022D52C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D52C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802324D0_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802324D0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802324D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802324D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802324DC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802324E0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802324E4: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802324E8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802324EC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802324F0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802324F4: lw          $v0, -0x6330($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6330);
    // 0x802324F8: jalr        $v0
    // 0x802324FC: addiu       $s1, $s0, 0x500
    ctx->r17 = ADD32(ctx->r16, 0X500);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802324FC: addiu       $s1, $s0, 0x500
    ctx->r17 = ADD32(ctx->r16, 0X500);
    after_0:
    // 0x80232500: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x80232504: bne         $v0, $zero, L_80232518
    if (ctx->r2 != 0) {
        // 0x80232508: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80232518;
    }
    // 0x80232508: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023250C: jal         0x8005044C
    // 0x80232510: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x80232510: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80232514: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80232518:
    // 0x80232518: jal         0x802329DC
    // 0x8023251C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_802329DC_ovl22(rdram, ctx);
        goto after_2;
    // 0x8023251C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x80232520: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80232524: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80232528: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023252C: jr          $ra
    // 0x80232530: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80232530: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80227A04_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227A04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227A08: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80227A0C: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80227A10: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227A14: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80227A18: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227A1C: lw          $v0, -0x6B88($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6B88);
    // 0x80227A20: jalr        $v0
    // 0x80227A24: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80227A24: nop

    after_0:
    // 0x80227A28: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80227A2C: jr          $ra
    // 0x80227A30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227A30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802326C0_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802326C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802326C4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802326C8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802326CC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802326D0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802326D4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802326D8: bne         $v0, $zero, L_802326F8
    if (ctx->r2 != 0) {
        // 0x802326DC: addiu       $s1, $s0, 0x500
        ctx->r17 = ADD32(ctx->r16, 0X500);
            goto L_802326F8;
    }
    // 0x802326DC: addiu       $s1, $s0, 0x500
    ctx->r17 = ADD32(ctx->r16, 0X500);
    // 0x802326E0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x802326E4: jal         0x80050294
    // 0x802326E8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802326E8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802326EC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802326F0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802326F4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802326F8:
    // 0x802326F8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802326FC: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x80232700: addiu       $v0, $zero, 0x4B
    ctx->r2 = ADD32(0, 0X4B);
    // 0x80232704: bne         $v1, $v0, L_80232718
    if (ctx->r3 != ctx->r2) {
        // 0x80232708: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80232718;
    }
    // 0x80232708: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023270C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80232710: jal         0x80232998
    // 0x80232714: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80232998_ovl22(rdram, ctx);
        goto after_1;
    // 0x80232714: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
L_80232718:
    // 0x80232718: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023271C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80232720: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232724: jr          $ra
    // 0x80232728: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80232728: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80232CE8_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232CE8: lbu         $v1, 0xA4($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA4);
    // 0x80232CEC: sltiu       $v0, $v1, 0x5E
    ctx->r2 = ctx->r3 < 0X5E ? 1 : 0;
    // 0x80232CF0: beql        $v0, $zero, L_80232D04
    if (ctx->r2 == 0) {
        // 0x80232CF4: sltiu       $v0, $v1, 0x6F
        ctx->r2 = ctx->r3 < 0X6F ? 1 : 0;
            goto L_80232D04;
    }
    goto skip_0;
    // 0x80232CF4: sltiu       $v0, $v1, 0x6F
    ctx->r2 = ctx->r3 < 0X6F ? 1 : 0;
    skip_0:
    // 0x80232CF8: lhu         $v0, 0x16($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X16);
    // 0x80232CFC: j           L_80232D14
    // 0x80232D00: addiu       $v0, $v0, 0x5
    ctx->r2 = ADD32(ctx->r2, 0X5);
        goto L_80232D14;
    // 0x80232D00: addiu       $v0, $v0, 0x5
    ctx->r2 = ADD32(ctx->r2, 0X5);
L_80232D04:
    // 0x80232D04: beq         $v0, $zero, L_80232D18
    if (ctx->r2 == 0) {
        // 0x80232D08: nop
    
            goto L_80232D18;
    }
    // 0x80232D08: nop

    // 0x80232D0C: lhu         $v0, 0x16($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X16);
    // 0x80232D10: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_80232D14:
    // 0x80232D14: sh          $v0, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r2;
L_80232D18:
    // 0x80232D18: lbu         $v1, 0xA4($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA4);
    // 0x80232D1C: sltiu       $v0, $v1, 0x67
    ctx->r2 = ctx->r3 < 0X67 ? 1 : 0;
    // 0x80232D20: beql        $v0, $zero, L_80232D34
    if (ctx->r2 == 0) {
        // 0x80232D24: sltiu       $v0, $v1, 0x6F
        ctx->r2 = ctx->r3 < 0X6F ? 1 : 0;
            goto L_80232D34;
    }
    goto skip_1;
    // 0x80232D24: sltiu       $v0, $v1, 0x6F
    ctx->r2 = ctx->r3 < 0X6F ? 1 : 0;
    skip_1:
    // 0x80232D28: lhu         $v0, 0x18($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X18);
    // 0x80232D2C: j           L_80232D44
    // 0x80232D30: addiu       $v0, $v0, 0xB
    ctx->r2 = ADD32(ctx->r2, 0XB);
        goto L_80232D44;
    // 0x80232D30: addiu       $v0, $v0, 0xB
    ctx->r2 = ADD32(ctx->r2, 0XB);
L_80232D34:
    // 0x80232D34: beq         $v0, $zero, L_80232D48
    if (ctx->r2 == 0) {
        // 0x80232D38: nop
    
            goto L_80232D48;
    }
    // 0x80232D38: nop

    // 0x80232D3C: lhu         $v0, 0x18($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X18);
    // 0x80232D40: addiu       $v0, $v0, -0x10
    ctx->r2 = ADD32(ctx->r2, -0X10);
L_80232D44:
    // 0x80232D44: sh          $v0, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r2;
L_80232D48:
    // 0x80232D48: jr          $ra
    // 0x80232D4C: nop

    TRACE_RETURN()
    return;
    // 0x80232D4C: nop

;}
RECOMP_FUNC void func_80228DA8_ovl22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228DA8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80228DAC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228DB0: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x80228DB4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80228DB8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228DBC: lb          $v1, 0x0($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X0);
    // 0x80228DC0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80228DC4: beq         $v1, $v0, L_80228F14
    if (ctx->r3 == ctx->r2) {
        // 0x80228DC8: addiu       $s0, $a1, 0x10
        ctx->r16 = ADD32(ctx->r5, 0X10);
            goto L_80228F14;
    }
    // 0x80228DC8: addiu       $s0, $a1, 0x10
    ctx->r16 = ADD32(ctx->r5, 0X10);
L_80228DCC:
    // 0x80228DCC: lbu         $v1, -0xF($s0)
    ctx->r3 = MEM_BU(ctx->r16, -0XF);
    // 0x80228DD0: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80228DD4: bne         $v1, $v0, L_80228E84
    if (ctx->r3 != ctx->r2) {
        // 0x80228DD8: addiu       $v0, $zero, 0xE0
        ctx->r2 = ADD32(0, 0XE0);
            goto L_80228E84;
    }
    // 0x80228DD8: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x80228DDC: jal         0x8004EEAC
    // 0x80228DE0: nop

    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_0;
    // 0x80228DE0: nop

    after_0:
    // 0x80228DE4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80228DE8: beql        $a1, $zero, L_80228F04
    if (ctx->r5 == 0) {
        // 0x80228DEC: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_80228F04;
    }
    goto skip_0;
    // 0x80228DEC: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    skip_0:
    // 0x80228DF0: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80228DF4: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x80228DF8: lbu         $v0, -0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0XE);
    // 0x80228DFC: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x80228E00: lbu         $v0, -0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0XD);
    // 0x80228E04: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
    // 0x80228E08: lbu         $v0, -0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0XC);
    // 0x80228E0C: sb          $v0, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r2;
    // 0x80228E10: lbu         $v0, -0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0XB);
    // 0x80228E14: sb          $v0, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r2;
    // 0x80228E18: lbu         $v0, -0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0X9);
    // 0x80228E1C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80228E20: sh          $v0, 0x56($a1)
    MEM_H(0X56, ctx->r5) = ctx->r2;
    // 0x80228E24: lbu         $v0, -0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0X8);
    // 0x80228E28: sb          $v0, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r2;
    // 0x80228E2C: lbu         $v0, -0x7($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0X7);
    // 0x80228E30: sb          $v0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r2;
    // 0x80228E34: lbu         $v0, -0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0X6);
    // 0x80228E38: sb          $v0, 0xE($a1)
    MEM_B(0XE, ctx->r5) = ctx->r2;
    // 0x80228E3C: lbu         $v0, -0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0X5);
    // 0x80228E40: sb          $v0, 0xF($a1)
    MEM_B(0XF, ctx->r5) = ctx->r2;
    // 0x80228E44: lhu         $v0, -0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, -0X4);
    // 0x80228E48: sh          $v0, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r2;
    // 0x80228E4C: lhu         $v0, -0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, -0X2);
    // 0x80228E50: sh          $v0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r2;
    // 0x80228E54: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x80228E58: lh          $v1, 0x16($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X16);
    // 0x80228E5C: sh          $v0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r2;
    // 0x80228E60: lh          $v0, 0x14($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X14);
    // 0x80228E64: lh          $a0, 0x18($a1)
    ctx->r4 = MEM_H(ctx->r5, 0X18);
    // 0x80228E68: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80228E6C: sw          $v1, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->r3;
    // 0x80228E70: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228E74: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80228E78: sw          $v0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r2;
    // 0x80228E7C: j           L_80228F00
    // 0x80228E80: sw          $a0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r4;
        goto L_80228F00;
    // 0x80228E80: sw          $a0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r4;
L_80228E84:
    // 0x80228E84: bnel        $v1, $v0, L_80228F04
    if (ctx->r3 != ctx->r2) {
        // 0x80228E88: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_80228F04;
    }
    goto skip_1;
    // 0x80228E88: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    skip_1:
    // 0x80228E8C: jal         0x8004F2C4
    // 0x80228E90: nop

    func_8004F2C4_2A6C4(rdram, ctx);
        goto after_1;
    // 0x80228E90: nop

    after_1:
    // 0x80228E94: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80228E98: beql        $v1, $zero, L_80228F04
    if (ctx->r3 == 0) {
        // 0x80228E9C: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_80228F04;
    }
    goto skip_2;
    // 0x80228E9C: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    skip_2:
    // 0x80228EA0: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80228EA4: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80228EA8: lbu         $v0, -0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0XE);
    // 0x80228EAC: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80228EB0: lbu         $v0, -0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0XD);
    // 0x80228EB4: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x80228EB8: lbu         $v0, -0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0XC);
    // 0x80228EBC: sb          $v0, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r2;
    // 0x80228EC0: lbu         $v0, -0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0XB);
    // 0x80228EC4: sb          $v0, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r2;
    // 0x80228EC8: lbu         $v0, -0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0X8);
    // 0x80228ECC: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x80228ED0: lbu         $v0, -0x7($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0X7);
    // 0x80228ED4: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    // 0x80228ED8: lbu         $v0, -0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0X6);
    // 0x80228EDC: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x80228EE0: lbu         $v0, -0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0X5);
    // 0x80228EE4: sb          $v0, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r2;
    // 0x80228EE8: lhu         $v0, -0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, -0X4);
    // 0x80228EEC: sh          $v0, 0x38($v1)
    MEM_H(0X38, ctx->r3) = ctx->r2;
    // 0x80228EF0: lhu         $v0, -0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, -0X2);
    // 0x80228EF4: sh          $v0, 0x3A($v1)
    MEM_H(0X3A, ctx->r3) = ctx->r2;
    // 0x80228EF8: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x80228EFC: sh          $v0, 0x3C($v1)
    MEM_H(0X3C, ctx->r3) = ctx->r2;
L_80228F00:
    // 0x80228F00: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
L_80228F04:
    // 0x80228F04: lb          $v1, 0x0($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X0);
    // 0x80228F08: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80228F0C: bne         $v1, $v0, L_80228DCC
    if (ctx->r3 != ctx->r2) {
        // 0x80228F10: addiu       $s0, $s0, 0x14
        ctx->r16 = ADD32(ctx->r16, 0X14);
            goto L_80228DCC;
    }
    // 0x80228F10: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
L_80228F14:
    // 0x80228F14: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80228F18: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228F1C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228F20: jr          $ra
    // 0x80228F24: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80228F24: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80228F28: nop

    // 0x80228F2C: nop

;}
RECOMP_FUNC void func_802269BC_ovl23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802269BC: jr          $ra
    // 0x802269C0: nop

    TRACE_RETURN()
    return;
    // 0x802269C0: nop

    // 0x802269C4: nop

    // 0x802269C8: nop

    // 0x802269CC: nop

;}
RECOMP_FUNC void func_8022677C_ovl23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022677C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226780: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226784: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226788: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022678C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80226790: beq         $v1, $zero, L_802267A8
    if (ctx->r3 == 0) {
        // 0x80226794: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802267A8;
    }
    // 0x80226794: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226798: beq         $v1, $v0, L_802267B4
    if (ctx->r3 == ctx->r2) {
        // 0x8022679C: nop
    
            goto L_802267B4;
    }
    // 0x8022679C: nop

    // 0x802267A0: j           L_802267E0
    // 0x802267A4: nop

        goto L_802267E0;
    // 0x802267A4: nop

L_802267A8:
    // 0x802267A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802267AC: j           L_802267CC
    // 0x802267B0: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
        goto L_802267CC;
    // 0x802267B0: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
L_802267B4:
    // 0x802267B4: lw          $v0, 0x98($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X98);
    // 0x802267B8: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x802267BC: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
    // 0x802267C0: bne         $v1, $v0, L_802267E0
    if (ctx->r3 != ctx->r2) {
        // 0x802267C4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802267E0;
    }
    // 0x802267C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802267C8: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
L_802267CC:
    // 0x802267CC: jal         0x80050294
    // 0x802267D0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802267D0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802267D4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802267D8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802267DC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802267E0:
    // 0x802267E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802267E4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802267E8: jr          $ra
    // 0x802267EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802267EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227194_ovl23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227194: lhu         $v0, 0x18($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X18);
    // 0x80227198: lw          $a1, 0x20($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X20);
    // 0x8022719C: lhu         $v1, 0x1A($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X1A);
    // 0x802271A0: sh          $v0, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r2;
    // 0x802271A4: sh          $v1, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r3;
    // 0x802271A8: lb          $v1, 0x3($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X3);
    // 0x802271AC: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x802271B0: bgez        $v1, L_802271F0
    if (SIGNED(ctx->r3) >= 0) {
        // 0x802271B4: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_802271F0;
    }
    // 0x802271B4: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x802271B8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802271BC: bne         $v1, $v0, L_802271DC
    if (ctx->r3 != ctx->r2) {
        // 0x802271C0: andi        $v0, $a1, 0x7F
        ctx->r2 = ctx->r5 & 0X7F;
            goto L_802271DC;
    }
    // 0x802271C0: andi        $v0, $a1, 0x7F
    ctx->r2 = ctx->r5 & 0X7F;
    // 0x802271C4: lb          $v1, 0xC($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XC);
    // 0x802271C8: lb          $v0, 0xD($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD);
    // 0x802271CC: bne         $v1, $v0, L_802271FC
    if (ctx->r3 != ctx->r2) {
        // 0x802271D0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_802271FC;
    }
    // 0x802271D0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802271D4: j           L_80227220
    // 0x802271D8: nop

        goto L_80227220;
    // 0x802271D8: nop

L_802271DC:
    // 0x802271DC: lw          $v1, 0x1C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C);
    // 0x802271E0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802271E4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802271E8: j           L_802271FC
    // 0x802271EC: sw          $v1, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r3;
        goto L_802271FC;
    // 0x802271EC: sw          $v1, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r3;
L_802271F0:
    // 0x802271F0: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x802271F4: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x802271F8: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
L_802271FC:
    // 0x802271FC: lw          $a1, 0x20($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X20);
    // 0x80227200: lbu         $v0, 0x2($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X2);
    // 0x80227204: sb          $zero, 0xD($a0)
    MEM_B(0XD, ctx->r4) = 0;
    // 0x80227208: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
    // 0x8022720C: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x80227210: sh          $v0, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r2;
    // 0x80227214: lbu         $v1, 0x1($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X1);
    // 0x80227218: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022721C: sh          $v1, 0x1A($a0)
    MEM_H(0X1A, ctx->r4) = ctx->r3;
L_80227220:
    // 0x80227220: jr          $ra
    // 0x80227224: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x80227224: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x80227228: nop

    // 0x8022722C: nop

;}
RECOMP_FUNC void func_80225330_ovl23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225330: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225334: jr          $ra
    // 0x80225338: sw          $zero, -0x359C($at)
    MEM_W(-0X359C, ctx->r1) = 0;
    TRACE_RETURN()
    return;
    // 0x80225338: sw          $zero, -0x359C($at)
    MEM_W(-0X359C, ctx->r1) = 0;
;}
RECOMP_FUNC void func_80225D10_ovl23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225D10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225D14: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225D18: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225D1C: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x80225D20: addiu       $a1, $a1, 0x7FB0
    ctx->r5 = ADD32(ctx->r5, 0X7FB0);
    // 0x80225D24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225D28: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x80225D2C: beq         $a0, $zero, L_80225DBC
    if (ctx->r4 == 0) {
        // 0x80225D30: nop
    
            goto L_80225DBC;
    }
    // 0x80225D30: nop

    // 0x80225D34: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x80225D38: lw          $v1, 0x7FB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X7FB0);
    // 0x80225D3C: lh          $v0, 0x2($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X2);
    // 0x80225D40: beq         $v0, $zero, L_80225DBC
    if (ctx->r2 == 0) {
        // 0x80225D44: nop
    
            goto L_80225DBC;
    }
    // 0x80225D44: nop

    // 0x80225D48: bgez        $v0, L_80225D58
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80225D4C: sll         $v0, $v0, 2
        ctx->r2 = S32(ctx->r2 << 2);
            goto L_80225D58;
    }
    // 0x80225D4C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225D50: j           L_80225D80
    // 0x80225D54: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
        goto L_80225D80;
    // 0x80225D54: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
L_80225D58:
    // 0x80225D58: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x80225D5C: lhu         $v0, 0x7FB4($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X7FB4);
    // 0x80225D60: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225D64: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80225D68: sh          $v0, 0x7FB4($at)
    MEM_H(0X7FB4, ctx->r1) = ctx->r2;
    // 0x80225D6C: lh          $v1, 0x2($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X2);
    // 0x80225D70: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80225D74: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80225D78: bne         $v0, $v1, L_80225DBC
    if (ctx->r2 != ctx->r3) {
        // 0x80225D7C: addiu       $v0, $a0, 0x4
        ctx->r2 = ADD32(ctx->r4, 0X4);
            goto L_80225DBC;
    }
    // 0x80225D7C: addiu       $v0, $a0, 0x4
    ctx->r2 = ADD32(ctx->r4, 0X4);
L_80225D80:
    // 0x80225D80: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x80225D84: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x80225D88: lw          $v0, 0x7FB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7FB0);
    // 0x80225D8C: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x80225D90: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80225D94: sh          $zero, 0x7FB4($at)
    MEM_H(0X7FB4, ctx->r1) = 0;
    // 0x80225D98: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x80225D9C: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x80225DA0: jal         0x8003B85C
    // 0x80225DA4: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x80225DA4: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_0:
    // 0x80225DA8: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x80225DAC: lui         $a1, 0x10
    ctx->r5 = S32(0X10 << 16);
    // 0x80225DB0: ori         $a1, $a1, 0xF
    ctx->r5 = ctx->r5 | 0XF;
    // 0x80225DB4: jal         0x8003B840
    // 0x80225DB8: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x80225DB8: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
L_80225DBC:
    // 0x80225DBC: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x80225DC0: addiu       $a1, $a1, 0x7FB8
    ctx->r5 = ADD32(ctx->r5, 0X7FB8);
    // 0x80225DC4: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x80225DC8: beq         $a0, $zero, L_80225E58
    if (ctx->r4 == 0) {
        // 0x80225DCC: nop
    
            goto L_80225E58;
    }
    // 0x80225DCC: nop

    // 0x80225DD0: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x80225DD4: lw          $v1, 0x7FB8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X7FB8);
    // 0x80225DD8: lh          $v0, 0x2($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X2);
    // 0x80225DDC: beq         $v0, $zero, L_80225E58
    if (ctx->r2 == 0) {
        // 0x80225DE0: nop
    
            goto L_80225E58;
    }
    // 0x80225DE0: nop

    // 0x80225DE4: bgez        $v0, L_80225DF4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80225DE8: sll         $v0, $v0, 2
        ctx->r2 = S32(ctx->r2 << 2);
            goto L_80225DF4;
    }
    // 0x80225DE8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225DEC: j           L_80225E1C
    // 0x80225DF0: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
        goto L_80225E1C;
    // 0x80225DF0: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
L_80225DF4:
    // 0x80225DF4: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x80225DF8: lhu         $v0, 0x7FBC($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X7FBC);
    // 0x80225DFC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225E00: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80225E04: sh          $v0, 0x7FBC($at)
    MEM_H(0X7FBC, ctx->r1) = ctx->r2;
    // 0x80225E08: lh          $v1, 0x2($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X2);
    // 0x80225E0C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80225E10: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80225E14: bne         $v0, $v1, L_80225E58
    if (ctx->r2 != ctx->r3) {
        // 0x80225E18: addiu       $v0, $a0, 0x4
        ctx->r2 = ADD32(ctx->r4, 0X4);
            goto L_80225E58;
    }
    // 0x80225E18: addiu       $v0, $a0, 0x4
    ctx->r2 = ADD32(ctx->r4, 0X4);
L_80225E1C:
    // 0x80225E1C: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x80225E20: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x80225E24: lw          $v0, 0x7FB8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7FB8);
    // 0x80225E28: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x80225E2C: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80225E30: sh          $zero, 0x7FBC($at)
    MEM_H(0X7FBC, ctx->r1) = 0;
    // 0x80225E34: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x80225E38: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x80225E3C: jal         0x8003B85C
    // 0x80225E40: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x80225E40: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_2:
    // 0x80225E44: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x80225E48: lui         $a1, 0x12
    ctx->r5 = S32(0X12 << 16);
    // 0x80225E4C: ori         $a1, $a1, 0x11
    ctx->r5 = ctx->r5 | 0X11;
    // 0x80225E50: jal         0x8003B840
    // 0x80225E54: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x80225E54: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
L_80225E58:
    // 0x80225E58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225E5C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225E60: jr          $ra
    // 0x80225E64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225E64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225AD8_ovl23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225AD8: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80225ADC: bne         $v0, $zero, L_80225B94
    if (ctx->r2 != 0) {
        // 0x80225AE0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80225B94;
    }
    // 0x80225AE0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80225AE4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225AE8: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80225AEC: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x80225AF0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225AF4: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80225AF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225AFC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225B00: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x80225B04: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225B08: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225B0C: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x80225B10: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225B14: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x80225B18: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225B1C: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x80225B20: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225B24: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x80225B28: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225B2C: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80225B30: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225B34: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80225B38: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225B3C: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x80225B40: lw          $a1, 0x24($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X24);
    // 0x80225B44: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x80225B48: addiu       $v1, $zero, -0x3
    ctx->r3 = ADD32(0, -0X3);
    // 0x80225B4C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80225B50: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x80225B54: lw          $a1, 0x28($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X28);
    // 0x80225B58: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x80225B5C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80225B60: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x80225B64: lw          $a1, 0x30($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X30);
    // 0x80225B68: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x80225B6C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80225B70: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x80225B74: lw          $a1, 0x34($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X34);
    // 0x80225B78: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x80225B7C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80225B80: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x80225B84: lw          $a1, 0x2C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X2C);
    // 0x80225B88: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x80225B8C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80225B90: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
L_80225B94:
    // 0x80225B94: jr          $ra
    // 0x80225B98: nop

    TRACE_RETURN()
    return;
    // 0x80225B98: nop

;}
RECOMP_FUNC void func_80226CF0_ovl23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226CF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226CF4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226CF8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226CFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226D00: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80226D04: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226D08: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80226D0C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226D10: lw          $v0, 0x7E48($at)
    ctx->r2 = MEM_W(ctx->r1, 0X7E48);
    // 0x80226D14: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80226D18: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x80226D1C: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80226D20: lbu         $v0, 0x2($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X2);
    // 0x80226D24: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x80226D28: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x80226D2C: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x80226D30: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80226D34: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x80226D38: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x80226D3C: lbu         $v0, 0x1($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X1);
    // 0x80226D40: jal         0x80227194
    // 0x80226D44: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
    func_80227194_ovl23(rdram, ctx);
        goto after_0;
    // 0x80226D44: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
    after_0:
    // 0x80226D48: beq         $v0, $zero, L_80226D5C
    if (ctx->r2 == 0) {
        // 0x80226D4C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226D5C;
    }
    // 0x80226D4C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226D50: jal         0x8004F62C
    // 0x80226D54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F62C_2AA2C(rdram, ctx);
        goto after_1;
    // 0x80226D54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80226D58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80226D5C:
    // 0x80226D5C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80226D60: jal         0x80226DDC
    // 0x80226D64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80226DDC_ovl23(rdram, ctx);
        goto after_2;
    // 0x80226D64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80226D68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226D6C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226D70: jr          $ra
    // 0x80226D74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226D74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226648_ovl23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226648: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022664C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226650: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226654: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226658: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022665C: bne         $v0, $zero, L_80226678
    if (ctx->r2 != 0) {
        // 0x80226660: addiu       $a1, $zero, 0x5
        ctx->r5 = ADD32(0, 0X5);
            goto L_80226678;
    }
    // 0x80226660: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80226664: jal         0x80050294
    // 0x80226668: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80226668: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022666C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226670: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226674: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80226678:
    // 0x80226678: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022667C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226680: jr          $ra
    // 0x80226684: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226684: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225378_ovl23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225378: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022537C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225380: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225384: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225388: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022538C: bne         $v0, $zero, L_802253A8
    if (ctx->r2 != 0) {
        // 0x80225390: nop
    
            goto L_802253A8;
    }
    // 0x80225390: nop

    // 0x80225394: jal         0x80060690
    // 0x80225398: addiu       $a0, $zero, 0x4A
    ctx->r4 = ADD32(0, 0X4A);
    func_80060690_3BA90(rdram, ctx);
        goto after_0;
    // 0x80225398: addiu       $a0, $zero, 0x4A
    ctx->r4 = ADD32(0, 0X4A);
    after_0:
    // 0x8022539C: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802253A0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802253A4: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802253A8:
    // 0x802253A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802253AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802253B0: jr          $ra
    // 0x802253B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802253B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226DDC_ovl23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226DDC: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80226DE0: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x80226DE4: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x80226DE8: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x80226DEC: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x80226DF0: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x80226DF4: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x80226DF8: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x80226DFC: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x80226E00: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x80226E04: lbu         $v1, 0x3($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X3);
    // 0x80226E08: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x80226E0C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80226E10: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80226E14: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80226E18: lui         $s5, 0x8022
    ctx->r21 = S32(0X8022 << 16);
    // 0x80226E1C: addu        $s5, $s5, $v0
    ctx->r21 = ADD32(ctx->r21, ctx->r2);
    // 0x80226E20: lhu         $s5, 0x7EB4($s5)
    ctx->r21 = MEM_HU(ctx->r21, 0X7EB4);
    // 0x80226E24: addiu       $a2, $sp, 0x1A
    ctx->r6 = ADD32(ctx->r29, 0X1A);
    // 0x80226E28: lui         $s6, 0x8022
    ctx->r22 = S32(0X8022 << 16);
    // 0x80226E2C: addu        $s6, $s6, $v0
    ctx->r22 = ADD32(ctx->r22, ctx->r2);
    // 0x80226E30: lhu         $s6, 0x7EB6($s6)
    ctx->r22 = MEM_HU(ctx->r22, 0X7EB6);
    // 0x80226E34: jal         0x800874D0
    // 0x80226E38: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    func_800874D0_628D0(rdram, ctx);
        goto after_0;
    // 0x80226E38: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    after_0:
    // 0x80226E3C: lh          $a1, 0x18($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X18);
    // 0x80226E40: lbu         $v0, 0x3($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X3);
    // 0x80226E44: lh          $a2, 0x1A($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X1A);
    // 0x80226E48: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80226E4C: addiu       $a0, $a0, -0x8000
    ctx->r4 = ADD32(ctx->r4, -0X8000);
    // 0x80226E50: sll         $a3, $s6, 16
    ctx->r7 = S32(ctx->r22 << 16);
    // 0x80226E54: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x80226E58: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80226E5C: lbu         $v1, 0x7F58($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X7F58);
    // 0x80226E60: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    // 0x80226E64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226E68: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80226E6C: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x80226E70: jal         0x80086F94
    // 0x80226E74: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    func_80086F94_62394(rdram, ctx);
        goto after_1;
    // 0x80226E74: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    after_1:
    // 0x80226E78: lbu         $v1, 0x3($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X3);
    // 0x80226E7C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80226E80: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80226E84: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80226E88: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80226E8C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226E90: lhu         $v0, 0x7EB8($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X7EB8);
    // 0x80226E94: beq         $v0, $zero, L_802270B0
    if (ctx->r2 == 0) {
        // 0x80226E98: addu        $s4, $zero, $zero
        ctx->r20 = ADD32(0, 0);
            goto L_802270B0;
    }
    // 0x80226E98: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
L_80226E9C:
    // 0x80226E9C: bgez        $s6, L_80226EA8
    if (SIGNED(ctx->r22) >= 0) {
        // 0x80226EA0: addu        $v0, $s6, $zero
        ctx->r2 = ADD32(ctx->r22, 0);
            goto L_80226EA8;
    }
    // 0x80226EA0: addu        $v0, $s6, $zero
    ctx->r2 = ADD32(ctx->r22, 0);
    // 0x80226EA4: addiu       $v0, $s6, 0xF
    ctx->r2 = ADD32(ctx->r22, 0XF);
L_80226EA8:
    // 0x80226EA8: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x80226EAC: slt         $v0, $s4, $v0
    ctx->r2 = SIGNED(ctx->r20) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80226EB0: beq         $v0, $zero, L_8022716C
    if (ctx->r2 == 0) {
        // 0x80226EB4: addiu       $a1, $sp, 0x20
        ctx->r5 = ADD32(ctx->r29, 0X20);
            goto L_8022716C;
    }
    // 0x80226EB4: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80226EB8: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    // 0x80226EBC: lh          $v0, 0x14($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X14);
    // 0x80226EC0: lh          $a0, 0x16($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X16);
    // 0x80226EC4: sll         $s0, $s4, 4
    ctx->r16 = S32(ctx->r20 << 4);
    // 0x80226EC8: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x80226ECC: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x80226ED0: jal         0x800874D0
    // 0x80226ED4: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_800874D0_628D0(rdram, ctx);
        goto after_2;
    // 0x80226ED4: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_2:
    // 0x80226ED8: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x80226EDC: jal         0x80087248
    // 0x80226EE0: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_3;
    // 0x80226EE0: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_3:
    // 0x80226EE4: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80226EE8: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80226EEC: lh          $v0, 0x18($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X18);
    // 0x80226EF0: lh          $a0, 0x1A($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X1A);
    // 0x80226EF4: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    // 0x80226EF8: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x80226EFC: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x80226F00: jal         0x800874D0
    // 0x80226F04: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_800874D0_628D0(rdram, ctx);
        goto after_4;
    // 0x80226F04: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_4:
    // 0x80226F08: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x80226F0C: jal         0x80087248
    // 0x80226F10: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_5;
    // 0x80226F10: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_5:
    // 0x80226F14: addu        $v1, $s5, $zero
    ctx->r3 = ADD32(ctx->r21, 0);
    // 0x80226F18: bgez        $s5, L_80226F24
    if (SIGNED(ctx->r21) >= 0) {
        // 0x80226F1C: addu        $s2, $v0, $zero
        ctx->r18 = ADD32(ctx->r2, 0);
            goto L_80226F24;
    }
    // 0x80226F1C: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80226F20: addiu       $v1, $s5, 0xFF
    ctx->r3 = ADD32(ctx->r21, 0XFF);
L_80226F24:
    // 0x80226F24: addu        $a0, $s5, $s0
    ctx->r4 = ADD32(ctx->r21, ctx->r16);
    // 0x80226F28: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80226F2C: jal         0x800874D0
    // 0x80226F30: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    func_800874D0_628D0(rdram, ctx);
        goto after_6;
    // 0x80226F30: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    after_6:
    // 0x80226F34: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x80226F38: jal         0x80087248
    // 0x80226F3C: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_7;
    // 0x80226F3C: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_7:
    // 0x80226F40: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80226F44: sltiu       $v0, $s1, 0x1
    ctx->r2 = ctx->r17 < 0X1 ? 1 : 0;
    // 0x80226F48: sltiu       $v1, $s2, 0x1
    ctx->r3 = ctx->r18 < 0X1 ? 1 : 0;
    // 0x80226F4C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80226F50: bnel        $v0, $zero, L_80226E9C
    if (ctx->r2 != 0) {
        // 0x80226F54: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_80226E9C;
    }
    goto skip_0;
    // 0x80226F54: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_0:
    // 0x80226F58: beq         $a1, $zero, L_802270A8
    if (ctx->r5 == 0) {
        // 0x80226F5C: addu        $t7, $zero, $zero
        ctx->r15 = ADD32(0, 0);
            goto L_802270A8;
    }
    // 0x80226F5C: addu        $t7, $zero, $zero
    ctx->r15 = ADD32(0, 0);
    // 0x80226F60: addu        $t6, $a1, $zero
    ctx->r14 = ADD32(ctx->r5, 0);
    // 0x80226F64: addu        $t5, $s2, $zero
    ctx->r13 = ADD32(ctx->r18, 0);
    // 0x80226F68: addu        $t4, $s1, $zero
    ctx->r12 = ADD32(ctx->r17, 0);
L_80226F6C:
    // 0x80226F6C: lhu         $t1, 0x0($t4)
    ctx->r9 = MEM_HU(ctx->r12, 0X0);
    // 0x80226F70: lhu         $v1, 0x0($t5)
    ctx->r3 = MEM_HU(ctx->r13, 0X0);
    // 0x80226F74: lb          $t3, 0xD($s3)
    ctx->r11 = MEM_B(ctx->r19, 0XD);
    // 0x80226F78: andi        $a2, $t1, 0xFFFF
    ctx->r6 = ctx->r9 & 0XFFFF;
    // 0x80226F7C: srl         $t2, $a2, 11
    ctx->r10 = S32(U32(ctx->r6) >> 11);
    // 0x80226F80: srl         $a3, $v1, 11
    ctx->r7 = S32(U32(ctx->r3) >> 11);
    // 0x80226F84: subu        $a3, $a3, $t2
    ctx->r7 = SUB32(ctx->r7, ctx->r10);
    // 0x80226F88: mult        $a3, $t3
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80226F8C: mflo        $a3
    ctx->r7 = lo;
    // 0x80226F90: lb          $a1, 0xC($s3)
    ctx->r5 = MEM_B(ctx->r19, 0XC);
    // 0x80226F94: nop

    // 0x80226F98: div         $zero, $a3, $a1
    lo = S32(S64(S32(ctx->r7)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r7)) % S64(S32(ctx->r5)));
    // 0x80226F9C: bne         $a1, $zero, L_80226FA8
    if (ctx->r5 != 0) {
        // 0x80226FA0: nop
    
            goto L_80226FA8;
    }
    // 0x80226FA0: nop

    // 0x80226FA4: break       7
    do_break(2149740452);
L_80226FA8:
    // 0x80226FA8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80226FAC: bne         $a1, $at, L_80226FC0
    if (ctx->r5 != ctx->r1) {
        // 0x80226FB0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80226FC0;
    }
    // 0x80226FB0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80226FB4: bne         $a3, $at, L_80226FC0
    if (ctx->r7 != ctx->r1) {
        // 0x80226FB8: nop
    
            goto L_80226FC0;
    }
    // 0x80226FB8: nop

    // 0x80226FBC: break       6
    do_break(2149740476);
L_80226FC0:
    // 0x80226FC0: mflo        $a3
    ctx->r7 = lo;
    // 0x80226FC4: sra         $t0, $a2, 6
    ctx->r8 = S32(SIGNED(ctx->r6) >> 6);
    // 0x80226FC8: andi        $t0, $t0, 0x1F
    ctx->r8 = ctx->r8 & 0X1F;
    // 0x80226FCC: sra         $v0, $v1, 6
    ctx->r2 = S32(SIGNED(ctx->r3) >> 6);
    // 0x80226FD0: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x80226FD4: subu        $v0, $v0, $t0
    ctx->r2 = SUB32(ctx->r2, ctx->r8);
    // 0x80226FD8: mult        $v0, $t3
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80226FDC: mflo        $v0
    ctx->r2 = lo;
    // 0x80226FE0: nop

    // 0x80226FE4: nop

    // 0x80226FE8: div         $zero, $v0, $a1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r5)));
    // 0x80226FEC: bne         $a1, $zero, L_80226FF8
    if (ctx->r5 != 0) {
        // 0x80226FF0: nop
    
            goto L_80226FF8;
    }
    // 0x80226FF0: nop

    // 0x80226FF4: break       7
    do_break(2149740532);
L_80226FF8:
    // 0x80226FF8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80226FFC: bne         $a1, $at, L_80227010
    if (ctx->r5 != ctx->r1) {
        // 0x80227000: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80227010;
    }
    // 0x80227000: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80227004: bne         $v0, $at, L_80227010
    if (ctx->r2 != ctx->r1) {
        // 0x80227008: nop
    
            goto L_80227010;
    }
    // 0x80227008: nop

    // 0x8022700C: break       6
    do_break(2149740556);
L_80227010:
    // 0x80227010: mflo        $v0
    ctx->r2 = lo;
    // 0x80227014: sra         $a2, $a2, 1
    ctx->r6 = S32(SIGNED(ctx->r6) >> 1);
    // 0x80227018: andi        $a2, $a2, 0x1F
    ctx->r6 = ctx->r6 & 0X1F;
    // 0x8022701C: sra         $v1, $v1, 1
    ctx->r3 = S32(SIGNED(ctx->r3) >> 1);
    // 0x80227020: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x80227024: subu        $v1, $v1, $a2
    ctx->r3 = SUB32(ctx->r3, ctx->r6);
    // 0x80227028: mult        $v1, $t3
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022702C: mflo        $v1
    ctx->r3 = lo;
    // 0x80227030: nop

    // 0x80227034: nop

    // 0x80227038: div         $zero, $v1, $a1
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r5)));
    // 0x8022703C: bne         $a1, $zero, L_80227048
    if (ctx->r5 != 0) {
        // 0x80227040: nop
    
            goto L_80227048;
    }
    // 0x80227040: nop

    // 0x80227044: break       7
    do_break(2149740612);
L_80227048:
    // 0x80227048: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8022704C: bne         $a1, $at, L_80227060
    if (ctx->r5 != ctx->r1) {
        // 0x80227050: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80227060;
    }
    // 0x80227050: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80227054: bne         $v1, $at, L_80227060
    if (ctx->r3 != ctx->r1) {
        // 0x80227058: nop
    
            goto L_80227060;
    }
    // 0x80227058: nop

    // 0x8022705C: break       6
    do_break(2149740636);
L_80227060:
    // 0x80227060: mflo        $v1
    ctx->r3 = lo;
    // 0x80227064: addiu       $t5, $t5, 0x2
    ctx->r13 = ADD32(ctx->r13, 0X2);
    // 0x80227068: addiu       $t4, $t4, 0x2
    ctx->r12 = ADD32(ctx->r12, 0X2);
    // 0x8022706C: addiu       $t7, $t7, 0x1
    ctx->r15 = ADD32(ctx->r15, 0X1);
    // 0x80227070: andi        $t1, $t1, 0x1
    ctx->r9 = ctx->r9 & 0X1;
    // 0x80227074: addu        $t2, $t2, $a3
    ctx->r10 = ADD32(ctx->r10, ctx->r7);
    // 0x80227078: sll         $t2, $t2, 11
    ctx->r10 = S32(ctx->r10 << 11);
    // 0x8022707C: or          $t1, $t1, $t2
    ctx->r9 = ctx->r9 | ctx->r10;
    // 0x80227080: addu        $t0, $t0, $v0
    ctx->r8 = ADD32(ctx->r8, ctx->r2);
    // 0x80227084: sll         $t0, $t0, 6
    ctx->r8 = S32(ctx->r8 << 6);
    // 0x80227088: or          $t1, $t1, $t0
    ctx->r9 = ctx->r9 | ctx->r8;
    // 0x8022708C: slti        $v0, $t7, 0x10
    ctx->r2 = SIGNED(ctx->r15) < 0X10 ? 1 : 0;
    // 0x80227090: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x80227094: sll         $a2, $a2, 1
    ctx->r6 = S32(ctx->r6 << 1);
    // 0x80227098: or          $t1, $t1, $a2
    ctx->r9 = ctx->r9 | ctx->r6;
    // 0x8022709C: sh          $t1, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r9;
    // 0x802270A0: bne         $v0, $zero, L_80226F6C
    if (ctx->r2 != 0) {
        // 0x802270A4: addiu       $t6, $t6, 0x2
        ctx->r14 = ADD32(ctx->r14, 0X2);
            goto L_80226F6C;
    }
    // 0x802270A4: addiu       $t6, $t6, 0x2
    ctx->r14 = ADD32(ctx->r14, 0X2);
L_802270A8:
    // 0x802270A8: j           L_80226E9C
    // 0x802270AC: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
        goto L_80226E9C;
    // 0x802270AC: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_802270B0:
    // 0x802270B0: lb          $v0, 0xD($s3)
    ctx->r2 = MEM_B(ctx->r19, 0XD);
    // 0x802270B4: bne         $v0, $zero, L_8022716C
    if (ctx->r2 != 0) {
        // 0x802270B8: nop
    
            goto L_8022716C;
    }
    // 0x802270B8: nop

L_802270BC:
    // 0x802270BC: addu        $v0, $s6, $zero
    ctx->r2 = ADD32(ctx->r22, 0);
    // 0x802270C0: bltzl       $v0, L_802270C8
    if (SIGNED(ctx->r2) < 0) {
        // 0x802270C4: addiu       $v0, $v0, 0xF
        ctx->r2 = ADD32(ctx->r2, 0XF);
            goto L_802270C8;
    }
    goto skip_1;
    // 0x802270C4: addiu       $v0, $v0, 0xF
    ctx->r2 = ADD32(ctx->r2, 0XF);
    skip_1:
L_802270C8:
    // 0x802270C8: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x802270CC: slt         $v0, $s4, $v0
    ctx->r2 = SIGNED(ctx->r20) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802270D0: beq         $v0, $zero, L_8022716C
    if (ctx->r2 == 0) {
        // 0x802270D4: addiu       $a1, $sp, 0x20
        ctx->r5 = ADD32(ctx->r29, 0X20);
            goto L_8022716C;
    }
    // 0x802270D4: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x802270D8: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    // 0x802270DC: lh          $v0, 0x14($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X14);
    // 0x802270E0: lh          $a0, 0x16($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X16);
    // 0x802270E4: sll         $s0, $s4, 4
    ctx->r16 = S32(ctx->r20 << 4);
    // 0x802270E8: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x802270EC: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x802270F0: jal         0x800874D0
    // 0x802270F4: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_800874D0_628D0(rdram, ctx);
        goto after_8;
    // 0x802270F4: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_8:
    // 0x802270F8: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x802270FC: jal         0x80087248
    // 0x80227100: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_9;
    // 0x80227100: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_9:
    // 0x80227104: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80227108: bgez        $s5, L_80227114
    if (SIGNED(ctx->r21) >= 0) {
        // 0x8022710C: addu        $v0, $s5, $zero
        ctx->r2 = ADD32(ctx->r21, 0);
            goto L_80227114;
    }
    // 0x8022710C: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
    // 0x80227110: addiu       $v0, $s5, 0xFF
    ctx->r2 = ADD32(ctx->r21, 0XFF);
L_80227114:
    // 0x80227114: sra         $v0, $v0, 8
    ctx->r2 = S32(SIGNED(ctx->r2) >> 8);
    // 0x80227118: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8022711C: subu        $v1, $s5, $v0
    ctx->r3 = SUB32(ctx->r21, ctx->r2);
    // 0x80227120: addu        $a0, $s0, $v1
    ctx->r4 = ADD32(ctx->r16, ctx->r3);
    // 0x80227124: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80227128: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8022712C: jal         0x800874D0
    // 0x80227130: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    func_800874D0_628D0(rdram, ctx);
        goto after_10;
    // 0x80227130: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    after_10:
    // 0x80227134: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x80227138: jal         0x80087248
    // 0x8022713C: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_11;
    // 0x8022713C: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_11:
    // 0x80227140: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80227144: sltiu       $v0, $s1, 0x1
    ctx->r2 = ctx->r17 < 0X1 ? 1 : 0;
    // 0x80227148: sltiu       $v1, $a1, 0x1
    ctx->r3 = ctx->r5 < 0X1 ? 1 : 0;
    // 0x8022714C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80227150: bnel        $v0, $zero, L_802270BC
    if (ctx->r2 != 0) {
        // 0x80227154: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_802270BC;
    }
    goto skip_2;
    // 0x80227154: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_2:
    // 0x80227158: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022715C: jal         0x80099F90
    // 0x80227160: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    bcopy_recomp(rdram, ctx);
        goto after_12;
    // 0x80227160: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_12:
    // 0x80227164: j           L_802270BC
    // 0x80227168: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
        goto L_802270BC;
    // 0x80227168: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_8022716C:
    // 0x8022716C: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x80227170: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x80227174: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x80227178: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x8022717C: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x80227180: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x80227184: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x80227188: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x8022718C: jr          $ra
    // 0x80227190: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    TRACE_RETURN()
    return;
    // 0x80227190: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_80226430_ovl23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226430: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226434: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226438: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022643C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226440: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80226444: bne         $v0, $zero, L_802264A0
    if (ctx->r2 != 0) {
        // 0x80226448: nop
    
            goto L_802264A0;
    }
    // 0x80226448: nop

    // 0x8022644C: jal         0x8004D5D4
    // 0x80226450: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80226450: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x80226454: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226458: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022645C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80226460: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80226464: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80226468: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022646C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80226470: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80226474: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x80226478: addiu       $v0, $v0, 0x7BB0
    ctx->r2 = ADD32(ctx->r2, 0X7BB0);
    // 0x8022647C: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80226480: sw          $v0, 0x7FE0($at)
    MEM_W(0X7FE0, ctx->r1) = ctx->r2;
    // 0x80226484: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80226488: sw          $v0, 0x7FE4($at)
    MEM_W(0X7FE4, ctx->r1) = ctx->r2;
    // 0x8022648C: jal         0x80050294
    // 0x80226490: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80226490: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80226494: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80226498: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022649C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_802264A0:
    // 0x802264A0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802264A4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802264A8: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x802264AC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802264B0: lw          $v0, 0x7C34($at)
    ctx->r2 = MEM_W(ctx->r1, 0X7C34);
    // 0x802264B4: jalr        $v0
    // 0x802264B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x802264B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x802264BC: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x802264C0: bne         $v0, $zero, L_802264D8
    if (ctx->r2 != 0) {
        // 0x802264C4: addiu       $a0, $s0, 0x1C
        ctx->r4 = ADD32(ctx->r16, 0X1C);
            goto L_802264D8;
    }
    // 0x802264C4: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x802264C8: jal         0x8004DD04
    // 0x802264CC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_3;
    // 0x802264CC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_3:
    // 0x802264D0: jal         0x8005044C
    // 0x802264D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_4;
    // 0x802264D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_802264D8:
    // 0x802264D8: jal         0x802262B8
    // 0x802264DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802262B8_ovl23(rdram, ctx);
        goto after_5;
    // 0x802264DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x802264E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802264E4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802264E8: jr          $ra
    // 0x802264EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802264EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802267F0_ovl23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802267F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802267F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802267F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802267FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226800: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80226804: bne         $v0, $zero, L_80226838
    if (ctx->r2 != 0) {
        // 0x80226808: nop
    
            goto L_80226838;
    }
    // 0x80226808: nop

    // 0x8022680C: jal         0x8004D5D4
    // 0x80226810: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80226810: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x80226814: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80226818: addiu       $v1, $zero, 0x200
    ctx->r3 = ADD32(0, 0X200);
    // 0x8022681C: sh          $v1, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r3;
    // 0x80226820: sh          $v1, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r3;
    // 0x80226824: sh          $v1, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r3;
    // 0x80226828: addiu       $v1, $zero, 0x4210
    ctx->r3 = ADD32(0, 0X4210);
    // 0x8022682C: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x80226830: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226834: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80226838:
    // 0x80226838: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022683C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226840: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80226844: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226848: lw          $v0, 0x7C60($at)
    ctx->r2 = MEM_W(ctx->r1, 0X7C60);
    // 0x8022684C: jalr        $v0
    // 0x80226850: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x80226850: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80226854: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x80226858: bne         $v0, $zero, L_80226870
    if (ctx->r2 != 0) {
        // 0x8022685C: addiu       $a0, $s0, 0x1C
        ctx->r4 = ADD32(ctx->r16, 0X1C);
            goto L_80226870;
    }
    // 0x8022685C: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80226860: jal         0x8004DD04
    // 0x80226864: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_2;
    // 0x80226864: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x80226868: jal         0x8005044C
    // 0x8022686C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_3;
    // 0x8022686C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_80226870:
    // 0x80226870: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226874: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226878: jr          $ra
    // 0x8022687C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022687C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225A3C_ovl23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225A3C: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80225A40: bne         $v0, $zero, L_80225A54
    if (ctx->r2 != 0) {
        // 0x80225A44: nop
    
            goto L_80225A54;
    }
    // 0x80225A44: nop

    // 0x80225A48: lw          $v0, 0x28($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X28);
    // 0x80225A4C: sb          $zero, 0x9($v0)
    MEM_B(0X9, ctx->r2) = 0;
    // 0x80225A50: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
L_80225A54:
    // 0x80225A54: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80225A58: addiu       $v0, $zero, 0xD2
    ctx->r2 = ADD32(0, 0XD2);
    // 0x80225A5C: bne         $v1, $v0, L_80225A74
    if (ctx->r3 != ctx->r2) {
        // 0x80225A60: addiu       $v1, $zero, 0x9
        ctx->r3 = ADD32(0, 0X9);
            goto L_80225A74;
    }
    // 0x80225A60: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
    // 0x80225A64: lw          $v0, 0x30($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X30);
    // 0x80225A68: sb          $zero, 0x9($v0)
    MEM_B(0X9, ctx->r2) = 0;
    // 0x80225A6C: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
    // 0x80225A70: sb          $v1, 0x110($v0)
    MEM_B(0X110, ctx->r2) = ctx->r3;
L_80225A74:
    // 0x80225A74: jr          $ra
    // 0x80225A78: nop

    TRACE_RETURN()
    return;
    // 0x80225A78: nop

;}
RECOMP_FUNC void func_8022588C_ovl23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022588C: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80225890: bne         $v0, $zero, L_80225924
    if (ctx->r2 != 0) {
        // 0x80225894: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80225924;
    }
    // 0x80225894: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80225898: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022589C: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x802258A0: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x802258A4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802258A8: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x802258AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802258B0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802258B4: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x802258B8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802258BC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802258C0: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x802258C4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802258C8: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x802258CC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802258D0: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x802258D4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802258D8: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x802258DC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802258E0: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x802258E4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802258E8: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x802258EC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802258F0: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x802258F4: lw          $v1, 0x34($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X34);
    // 0x802258F8: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x802258FC: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80225900: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80225904: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x80225908: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8022590C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80225910: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80225914: lw          $v1, 0x38($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X38);
    // 0x80225918: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8022591C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80225920: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
L_80225924:
    // 0x80225924: jr          $ra
    // 0x80225928: nop

    TRACE_RETURN()
    return;
    // 0x80225928: nop

;}
RECOMP_FUNC void func_80226998_ovl23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226998: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022699C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802269A0: addiu       $a1, $zero, 0x98
    ctx->r5 = ADD32(0, 0X98);
    // 0x802269A4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802269A8: jal         0x8004DA90
    // 0x802269AC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x802269AC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x802269B0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802269B4: jr          $ra
    // 0x802269B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802269B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226CC0_ovl23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226CC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226CC4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80226CC8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80226CCC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226CD0: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80226CD4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226CD8: lw          $v0, 0x7F78($at)
    ctx->r2 = MEM_W(ctx->r1, 0X7F78);
    // 0x80226CDC: jalr        $v0
    // 0x80226CE0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80226CE0: nop

    after_0:
    // 0x80226CE4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80226CE8: jr          $ra
    // 0x80226CEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226CEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226880_ovl23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226880: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226884: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226888: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022688C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226890: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226894: bne         $v0, $zero, L_802268B0
    if (ctx->r2 != 0) {
        // 0x80226898: addiu       $a1, $zero, 0x10
        ctx->r5 = ADD32(0, 0X10);
            goto L_802268B0;
    }
    // 0x80226898: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8022689C: jal         0x80050294
    // 0x802268A0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802268A0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802268A4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802268A8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802268AC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802268B0:
    // 0x802268B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802268B4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802268B8: jr          $ra
    // 0x802268BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802268BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226098_ovl23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226098: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022609C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802260A0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802260A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802260A8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802260AC: bne         $v0, $zero, L_802260C8
    if (ctx->r2 != 0) {
        // 0x802260B0: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_802260C8;
    }
    // 0x802260B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802260B4: jal         0x80050294
    // 0x802260B8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802260B8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802260BC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802260C0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802260C4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802260C8:
    // 0x802260C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802260CC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802260D0: jr          $ra
    // 0x802260D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802260D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802256B0_ovl23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802256B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802256B4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802256B8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x802256BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802256C0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802256C4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802256C8: lbu         $v1, 0x4($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X4);
    // 0x802256CC: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x802256D0: beq         $v0, $zero, L_80225874
    if (ctx->r2 == 0) {
        // 0x802256D4: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80225874;
    }
    // 0x802256D4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802256D8: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x802256DC: addu        $at, $at, $v0
    gpr jr_addend_802256E4 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802256E0: lw          $v0, 0x7F98($at)
    ctx->r2 = ADD32(ctx->r1, 0X7F98);
    // 0x802256E4: jr          $v0
    // 0x802256E8: nop

    switch (jr_addend_802256E4 >> 2) {
        case 0: goto L_802256EC; break;
        case 1: goto L_8022572C; break;
        case 2: goto L_80225748; break;
        case 3: goto L_80225770; break;
        case 4: goto L_802257C4; break;
        case 5: goto L_802257C4; break;
        default: switch_error(__func__, 0x802256E4, 0x80227F98);
    }
    // 0x802256E8: nop

L_802256EC:
    // 0x802256EC: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x802256F0: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x802256F4: jal         0x8006FF84
    // 0x802256F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x802256F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x802256FC: beq         $v0, $zero, L_80225874
    if (ctx->r2 == 0) {
        // 0x80225700: lui         $a0, 0x113
        ctx->r4 = S32(0X113 << 16);
            goto L_80225874;
    }
    // 0x80225700: lui         $a0, 0x113
    ctx->r4 = S32(0X113 << 16);
    // 0x80225704: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80225708: ori         $a0, $a0, 0x5001
    ctx->r4 = ctx->r4 | 0X5001;
    // 0x8022570C: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x80225710: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80225714: sh          $v0, -0x3F82($at)
    MEM_H(-0X3F82, ctx->r1) = ctx->r2;
    // 0x80225718: andi        $v1, $v1, 0xFC
    ctx->r3 = ctx->r3 & 0XFC;
    // 0x8022571C: jal         0x80036B1C
    // 0x80225720: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_80036B1C_11F1C(rdram, ctx);
        goto after_1;
    // 0x80225720: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_1:
    // 0x80225724: j           L_80225760
    // 0x80225728: nop

        goto L_80225760;
    // 0x80225728: nop

L_8022572C:
    // 0x8022572C: jal         0x80036B7C
    // 0x80225730: nop

    func_80036B7C_11F7C(rdram, ctx);
        goto after_2;
    // 0x80225730: nop

    after_2:
    // 0x80225734: beq         $v0, $zero, L_80225874
    if (ctx->r2 == 0) {
        // 0x80225738: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_80225874;
    }
    // 0x80225738: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022573C: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
    // 0x80225740: j           L_80225764
    // 0x80225744: sw          $v1, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r3;
        goto L_80225764;
    // 0x80225744: sw          $v1, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r3;
L_80225748:
    // 0x80225748: lw          $v0, 0xC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XC);
    // 0x8022574C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80225750: bne         $v0, $zero, L_80225874
    if (ctx->r2 != 0) {
        // 0x80225754: sw          $v0, 0xC($s2)
        MEM_W(0XC, ctx->r18) = ctx->r2;
            goto L_80225874;
    }
    // 0x80225754: sw          $v0, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r2;
    // 0x80225758: jal         0x80036E48
    // 0x8022575C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80036E48_12248(rdram, ctx);
        goto after_3;
    // 0x8022575C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_3:
L_80225760:
    // 0x80225760: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
L_80225764:
    // 0x80225764: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225768: j           L_80225874
    // 0x8022576C: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
        goto L_80225874;
    // 0x8022576C: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_80225770:
    // 0x80225770: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80225774: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80225778: jal         0x8005F6B4
    // 0x8022577C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_4;
    // 0x8022577C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x80225780: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80225784: addiu       $a0, $a0, 0x7818
    ctx->r4 = ADD32(ctx->r4, 0X7818);
    // 0x80225788: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x8022578C: addiu       $a1, $a1, 0x7550
    ctx->r5 = ADD32(ctx->r5, 0X7550);
    // 0x80225790: jal         0x8006019C
    // 0x80225794: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    func_8006019C_3B59C(rdram, ctx);
        goto after_5;
    // 0x80225794: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    after_5:
    // 0x80225798: lui         $s0, 0x8022
    ctx->r16 = S32(0X8022 << 16);
    // 0x8022579C: addiu       $s0, $s0, 0x77A0
    ctx->r16 = ADD32(ctx->r16, 0X77A0);
L_802257A0:
    // 0x802257A0: jal         0x8005FA7C
    // 0x802257A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_6;
    // 0x802257A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x802257A8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x802257AC: slti        $v0, $s1, 0x7
    ctx->r2 = SIGNED(ctx->r17) < 0X7 ? 1 : 0;
    // 0x802257B0: bne         $v0, $zero, L_802257A0
    if (ctx->r2 != 0) {
        // 0x802257B4: addiu       $s0, $s0, 0x14
        ctx->r16 = ADD32(ctx->r16, 0X14);
            goto L_802257A0;
    }
    // 0x802257B4: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x802257B8: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
    // 0x802257BC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802257C0: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_802257C4:
    // 0x802257C4: lbu         $v1, 0x8($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X8);
    // 0x802257C8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802257CC: beq         $v1, $v0, L_802257E4
    if (ctx->r3 == ctx->r2) {
        // 0x802257D0: nop
    
            goto L_802257E4;
    }
    // 0x802257D0: nop

    // 0x802257D4: lw          $v0, 0xA4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XA4);
    // 0x802257D8: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x802257DC: jalr        $v0
    // 0x802257E0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_7;
    // 0x802257E0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_7:
L_802257E4:
    // 0x802257E4: jal         0x8005FB90
    // 0x802257E8: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_8;
    // 0x802257E8: nop

    after_8:
    // 0x802257EC: jal         0x80060018
    // 0x802257F0: nop

    func_80060018_3B418(rdram, ctx);
        goto after_9;
    // 0x802257F0: nop

    after_9:
    // 0x802257F4: lbu         $v1, 0x4($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X4);
    // 0x802257F8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802257FC: bne         $v1, $v0, L_80225874
    if (ctx->r3 != ctx->r2) {
        // 0x80225800: nop
    
            goto L_80225874;
    }
    // 0x80225800: nop

    // 0x80225804: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80225808: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8022580C: bne         $v0, $zero, L_80225874
    if (ctx->r2 != 0) {
        // 0x80225810: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80225874;
    }
    // 0x80225810: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80225814: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80225818: jal         0x80036B00
    // 0x8022581C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_10;
    // 0x8022581C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_10:
    // 0x80225820: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80225824: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x80225828: sb          $zero, 0x0($s2)
    MEM_B(0X0, ctx->r18) = 0;
    // 0x8022582C: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x80225830: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80225834: jal         0x80070050
    // 0x80225838: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    func_80070050_4B450(rdram, ctx);
        goto after_11;
    // 0x80225838: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    after_11:
    // 0x8022583C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225840: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225844: jal         0x80034844
    // 0x80225848: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    func_80034844_FC44(rdram, ctx);
        goto after_12;
    // 0x80225848: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    after_12:
    // 0x8022584C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80225850: addiu       $v1, $v1, -0x3B96
    ctx->r3 = ADD32(ctx->r3, -0X3B96);
    // 0x80225854: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80225858: lui         $a0, 0x8006
    ctx->r4 = S32(0X8006 << 16);
    // 0x8022585C: addiu       $a0, $a0, -0x2DC0
    ctx->r4 = ADD32(ctx->r4, -0X2DC0);
    // 0x80225860: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80225864: sw          $zero, 0x5448($at)
    MEM_W(0X5448, ctx->r1) = 0;
    // 0x80225868: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x8022586C: jal         0x800292E8
    // 0x80225870: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    func_800292E8_46E8(rdram, ctx);
        goto after_13;
    // 0x80225870: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    after_13:
L_80225874:
    // 0x80225874: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80225878: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022587C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80225880: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225884: jr          $ra
    // 0x80225888: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80225888: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022592C_ovl23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022592C: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x80225930: lw          $v0, 0x10($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X10);
    // 0x80225934: bne         $v0, $zero, L_80225A18
    if (ctx->r2 != 0) {
        // 0x80225938: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80225A18;
    }
    // 0x80225938: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022593C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225940: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80225944: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x80225948: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022594C: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80225950: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225954: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225958: sb          $zero, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = 0;
    // 0x8022595C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225960: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x80225964: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225968: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x8022596C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225970: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x80225974: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225978: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x8022597C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225980: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80225984: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225988: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x8022598C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225990: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x80225994: lw          $a1, 0x34($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X34);
    // 0x80225998: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x8022599C: addiu       $a0, $zero, -0x3
    ctx->r4 = ADD32(0, -0X3);
    // 0x802259A0: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x802259A4: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x802259A8: lw          $a1, 0x2C($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X2C);
    // 0x802259AC: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x802259B0: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x802259B4: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x802259B8: lw          $a1, 0x38($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X38);
    // 0x802259BC: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x802259C0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802259C4: sb          $v1, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r3;
    // 0x802259C8: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x802259CC: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x802259D0: lw          $a0, 0x24($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X24);
    // 0x802259D4: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x802259D8: lui         $v0, 0xFF38
    ctx->r2 = S32(0XFF38 << 16);
    // 0x802259DC: sw          $v0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r2;
    // 0x802259E0: lui         $v0, 0xFF9C
    ctx->r2 = S32(0XFF9C << 16);
    // 0x802259E4: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x802259E8: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x802259EC: sw          $v0, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r2;
    // 0x802259F0: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x802259F4: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
    // 0x802259F8: lw          $a0, 0x28($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X28);
    // 0x802259FC: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x80225A00: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80225A04: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x80225A08: lw          $a1, 0x30($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X30);
    // 0x80225A0C: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x80225A10: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80225A14: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
L_80225A18:
    // 0x80225A18: lw          $v1, 0x10($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X10);
    // 0x80225A1C: addiu       $v0, $zero, 0x96
    ctx->r2 = ADD32(0, 0X96);
    // 0x80225A20: bne         $v1, $v0, L_80225A34
    if (ctx->r3 != ctx->r2) {
        // 0x80225A24: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225A34;
    }
    // 0x80225A24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225A28: lw          $a0, 0x24($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X24);
    // 0x80225A2C: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x80225A30: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
L_80225A34:
    // 0x80225A34: jr          $ra
    // 0x80225A38: nop

    TRACE_RETURN()
    return;
    // 0x80225A38: nop

;}
RECOMP_FUNC void func_80226B10_ovl23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226B10: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80226B14: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x80226B18: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80226B1C: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x80226B20: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x80226B24: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x80226B28: lbu         $v0, 0x8($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X8);
    // 0x80226B2C: bne         $v0, $zero, L_80226B9C
    if (ctx->r2 != 0) {
        // 0x80226B30: nop
    
            goto L_80226B9C;
    }
    // 0x80226B30: nop

    // 0x80226B34: jal         0x8004D5D4
    // 0x80226B38: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80226B38: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x80226B3C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80226B40: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80226B44: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226B48: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80226B4C: sh          $v0, 0x15C($s2)
    MEM_H(0X15C, ctx->r18) = ctx->r2;
    // 0x80226B50: sh          $v0, 0x15A($s2)
    MEM_H(0X15A, ctx->r18) = ctx->r2;
    // 0x80226B54: sh          $v0, 0x158($s2)
    MEM_H(0X158, ctx->r18) = ctx->r2;
    // 0x80226B58: jal         0x80050294
    // 0x80226B5C: sh          $zero, 0x15E($s2)
    MEM_H(0X15E, ctx->r18) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80226B5C: sh          $zero, 0x15E($s2)
    MEM_H(0X15E, ctx->r18) = 0;
    after_1:
    // 0x80226B60: addiu       $a0, $zero, 0x4210
    ctx->r4 = ADD32(0, 0X4210);
    // 0x80226B64: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x80226B68: addiu       $v0, $s2, 0x28
    ctx->r2 = ADD32(ctx->r18, 0X28);
L_80226B6C:
    // 0x80226B6C: sh          $a0, 0x186($v0)
    MEM_H(0X186, ctx->r2) = ctx->r4;
    // 0x80226B70: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80226B74: bgez        $v1, L_80226B6C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80226B78: addiu       $v0, $v0, -0x8
        ctx->r2 = ADD32(ctx->r2, -0X8);
            goto L_80226B6C;
    }
    // 0x80226B78: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x80226B7C: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80226B80: sh          $zero, 0x7FF0($at)
    MEM_H(0X7FF0, ctx->r1) = 0;
    // 0x80226B84: lbu         $v1, 0x8($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X8);
    // 0x80226B88: lhu         $v0, 0x19E($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X19E);
    // 0x80226B8C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80226B90: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x80226B94: sh          $v0, 0x19E($s2)
    MEM_H(0X19E, ctx->r18) = ctx->r2;
    // 0x80226B98: sb          $v1, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r3;
L_80226B9C:
    // 0x80226B9C: lbu         $v1, 0xA($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XA);
    // 0x80226BA0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226BA4: beq         $v1, $v0, L_80226BFC
    if (ctx->r3 == ctx->r2) {
        // 0x80226BA8: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80226BFC;
    }
    // 0x80226BA8: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80226BAC: beql        $v0, $zero, L_80226BC4
    if (ctx->r2 == 0) {
        // 0x80226BB0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80226BC4;
    }
    goto skip_0;
    // 0x80226BB0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80226BB4: beq         $v1, $zero, L_80226BD4
    if (ctx->r3 == 0) {
        // 0x80226BB8: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_80226BD4;
    }
    // 0x80226BB8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80226BBC: j           L_80226BFC
    // 0x80226BC0: nop

        goto L_80226BFC;
    // 0x80226BC0: nop

L_80226BC4:
    // 0x80226BC4: beq         $v1, $v0, L_80226BF0
    if (ctx->r3 == ctx->r2) {
        // 0x80226BC8: lui         $v1, 0xFFFF
        ctx->r3 = S32(0XFFFF << 16);
            goto L_80226BF0;
    }
    // 0x80226BC8: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x80226BCC: j           L_80226BFC
    // 0x80226BD0: nop

        goto L_80226BFC;
    // 0x80226BD0: nop

L_80226BD4:
    // 0x80226BD4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80226BD8: jal         0x80050294
    // 0x80226BDC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x80226BDC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x80226BE0: lbu         $v0, 0xA($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XA);
    // 0x80226BE4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226BE8: j           L_80226BFC
    // 0x80226BEC: sb          $v0, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r2;
        goto L_80226BFC;
    // 0x80226BEC: sb          $v0, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r2;
L_80226BF0:
    // 0x80226BF0: lw          $v0, 0x24($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X24);
    // 0x80226BF4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80226BF8: sw          $v0, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r2;
L_80226BFC:
    // 0x80226BFC: lbu         $v0, 0xC($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XC);
    // 0x80226C00: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226C04: sll         $a0, $v0, 24
    ctx->r4 = S32(ctx->r2 << 24);
    // 0x80226C08: sra         $a0, $a0, 19
    ctx->r4 = S32(SIGNED(ctx->r4) >> 19);
    // 0x80226C0C: jal         0x800324B4
    // 0x80226C10: sb          $v0, 0xC($s2)
    MEM_B(0XC, ctx->r18) = ctx->r2;
    func_800324B4_D8B4(rdram, ctx);
        goto after_3;
    // 0x80226C10: sb          $v0, 0xC($s2)
    MEM_B(0XC, ctx->r18) = ctx->r2;
    after_3:
    // 0x80226C14: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x80226C18: lb          $a0, 0xD($s2)
    ctx->r4 = MEM_B(ctx->r18, 0XD);
    // 0x80226C1C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80226C20: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x80226C24: bne         $a0, $zero, L_80226C40
    if (ctx->r4 != 0) {
        // 0x80226C28: sw          $v1, 0x20($s2)
        MEM_W(0X20, ctx->r18) = ctx->r3;
            goto L_80226C40;
    }
    // 0x80226C28: sw          $v1, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r3;
    // 0x80226C2C: addiu       $a0, $s2, 0x1C
    ctx->r4 = ADD32(ctx->r18, 0X1C);
    // 0x80226C30: jal         0x8004DD04
    // 0x80226C34: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_4;
    // 0x80226C34: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    after_4:
    // 0x80226C38: jal         0x8005044C
    // 0x80226C3C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_5;
    // 0x80226C3C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_5:
L_80226C40:
    // 0x80226C40: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x80226C44: lhu         $v0, 0x7FF0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X7FF0);
    // 0x80226C48: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80226C4C: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80226C50: sh          $v0, 0x7FF0($at)
    MEM_H(0X7FF0, ctx->r1) = ctx->r2;
    // 0x80226C54: jal         0x8002C654
    // 0x80226C58: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_8002C654_7A54(rdram, ctx);
        goto after_6;
    // 0x80226C58: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_6:
    // 0x80226C5C: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80226C60: lh          $a0, 0x7FF0($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X7FF0);
    // 0x80226C64: jal         0x800319B4
    // 0x80226C68: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_7;
    // 0x80226C68: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_7:
    // 0x80226C6C: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
    // 0x80226C70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226C74: addiu       $s1, $sp, 0x10
    ctx->r17 = ADD32(ctx->r29, 0X10);
    // 0x80226C78: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80226C7C: jal         0x8009A3B4
    // 0x80226C80: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x80226C80: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_8:
    // 0x80226C84: addiu       $a0, $s2, 0x248
    ctx->r4 = ADD32(ctx->r18, 0X248);
    // 0x80226C88: jal         0x8003077C
    // 0x80226C8C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8003077C_BB7C(rdram, ctx);
        goto after_9;
    // 0x80226C8C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_9:
    // 0x80226C90: addiu       $a0, $s2, 0x288
    ctx->r4 = ADD32(ctx->r18, 0X288);
    // 0x80226C94: jal         0x8003077C
    // 0x80226C98: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8003077C_BB7C(rdram, ctx);
        goto after_10;
    // 0x80226C98: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_10:
    // 0x80226C9C: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x80226CA0: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x80226CA4: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x80226CA8: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x80226CAC: jr          $ra
    // 0x80226CB0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x80226CB0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x80226CB4: nop

    // 0x80226CB8: nop

    // 0x80226CBC: nop

;}
RECOMP_FUNC void func_80225AB8_ovl23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225AB8: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80225ABC: bne         $v0, $zero, L_80225AD0
    if (ctx->r2 != 0) {
        // 0x80225AC0: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80225AD0;
    }
    // 0x80225AC0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80225AC4: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x80225AC8: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80225ACC: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_80225AD0:
    // 0x80225AD0: jr          $ra
    // 0x80225AD4: nop

    TRACE_RETURN()
    return;
    // 0x80225AD4: nop

;}
RECOMP_FUNC void func_802253C0_ovl23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802253C0: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x802253C4: bne         $v0, $zero, L_8022548C
    if (ctx->r2 != 0) {
        // 0x802253C8: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8022548C;
    }
    // 0x802253C8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802253CC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802253D0: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x802253D4: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x802253D8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802253DC: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x802253E0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802253E4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802253E8: sb          $zero, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = 0;
    // 0x802253EC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802253F0: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x802253F4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802253F8: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x802253FC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225400: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x80225404: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225408: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x8022540C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225410: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80225414: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225418: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x8022541C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225420: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x80225424: lw          $a1, 0x24($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X24);
    // 0x80225428: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x8022542C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80225430: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x80225434: addiu       $v0, $zero, 0xA28
    ctx->r2 = ADD32(0, 0XA28);
    // 0x80225438: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
    // 0x8022543C: sh          $v0, 0x56($a1)
    MEM_H(0X56, ctx->r5) = ctx->r2;
    // 0x80225440: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80225444: sb          $v1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r3;
    // 0x80225448: lw          $a1, 0x28($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X28);
    // 0x8022544C: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x80225450: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80225454: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x80225458: lw          $a1, 0x30($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X30);
    // 0x8022545C: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x80225460: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80225464: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x80225468: lw          $a1, 0x34($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X34);
    // 0x8022546C: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x80225470: addiu       $v1, $zero, -0x3
    ctx->r3 = ADD32(0, -0X3);
    // 0x80225474: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80225478: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x8022547C: lw          $a1, 0x2C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X2C);
    // 0x80225480: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x80225484: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80225488: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
L_8022548C:
    // 0x8022548C: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80225490: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x80225494: bne         $v1, $v0, L_802254C0
    if (ctx->r3 != ctx->r2) {
        // 0x80225498: addiu       $v0, $zero, 0x73
        ctx->r2 = ADD32(0, 0X73);
            goto L_802254C0;
    }
    // 0x80225498: addiu       $v0, $zero, 0x73
    ctx->r2 = ADD32(0, 0X73);
    // 0x8022549C: lw          $a1, 0x24($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X24);
    // 0x802254A0: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x802254A4: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802254A8: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x802254AC: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
    // 0x802254B0: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x802254B4: sb          $v1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r3;
    // 0x802254B8: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x802254BC: addiu       $v0, $zero, 0x73
    ctx->r2 = ADD32(0, 0X73);
L_802254C0:
    // 0x802254C0: bne         $v1, $v0, L_802254E0
    if (ctx->r3 != ctx->r2) {
        // 0x802254C4: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_802254E0;
    }
    // 0x802254C4: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x802254C8: lw          $a1, 0x24($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X24);
    // 0x802254CC: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x802254D0: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x802254D4: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
    // 0x802254D8: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x802254DC: sb          $v1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r3;
L_802254E0:
    // 0x802254E0: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x802254E4: addiu       $v0, $zero, 0xAA
    ctx->r2 = ADD32(0, 0XAA);
    // 0x802254E8: bne         $v1, $v0, L_80225508
    if (ctx->r3 != ctx->r2) {
        // 0x802254EC: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_80225508;
    }
    // 0x802254EC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802254F0: lw          $a1, 0x24($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X24);
    // 0x802254F4: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x802254F8: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x802254FC: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
    // 0x80225500: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80225504: sb          $v1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r3;
L_80225508:
    // 0x80225508: jr          $ra
    // 0x8022550C: nop

    TRACE_RETURN()
    return;
    // 0x8022550C: nop

;}
RECOMP_FUNC void func_80225BE8_ovl23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225BE8: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80225BEC: bne         $v0, $zero, L_80225C00
    if (ctx->r2 != 0) {
        // 0x80225BF0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80225C00;
    }
    // 0x80225BF0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225BF4: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x80225BF8: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80225BFC: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_80225C00:
    // 0x80225C00: jr          $ra
    // 0x80225C04: nop

    TRACE_RETURN()
    return;
    // 0x80225C04: nop

;}
RECOMP_FUNC void func_80226A60_ovl23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226A60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226A64: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226A68: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226A6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226A70: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80226A74: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226A78: beq         $v1, $v0, L_80226AD0
    if (ctx->r3 == ctx->r2) {
        // 0x80226A7C: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80226AD0;
    }
    // 0x80226A7C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80226A80: beql        $v0, $zero, L_80226A98
    if (ctx->r2 == 0) {
        // 0x80226A84: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80226A98;
    }
    goto skip_0;
    // 0x80226A84: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80226A88: beq         $v1, $zero, L_80226AA8
    if (ctx->r3 == 0) {
        // 0x80226A8C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80226AA8;
    }
    // 0x80226A8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226A90: j           L_80226AD0
    // 0x80226A94: nop

        goto L_80226AD0;
    // 0x80226A94: nop

L_80226A98:
    // 0x80226A98: beq         $v1, $v0, L_80226AC4
    if (ctx->r3 == ctx->r2) {
        // 0x80226A9C: lui         $v1, 0xFFFF
        ctx->r3 = S32(0XFFFF << 16);
            goto L_80226AC4;
    }
    // 0x80226A9C: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x80226AA0: j           L_80226AD0
    // 0x80226AA4: nop

        goto L_80226AD0;
    // 0x80226AA4: nop

L_80226AA8:
    // 0x80226AA8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80226AAC: jal         0x80050294
    // 0x80226AB0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80226AB0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80226AB4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226AB8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226ABC: j           L_80226AD0
    // 0x80226AC0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80226AD0;
    // 0x80226AC0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80226AC4:
    // 0x80226AC4: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x80226AC8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80226ACC: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
L_80226AD0:
    // 0x80226AD0: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x80226AD4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226AD8: sll         $a0, $v0, 24
    ctx->r4 = S32(ctx->r2 << 24);
    // 0x80226ADC: sra         $a0, $a0, 19
    ctx->r4 = S32(SIGNED(ctx->r4) >> 19);
    // 0x80226AE0: jal         0x800324B4
    // 0x80226AE4: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    func_800324B4_D8B4(rdram, ctx);
        goto after_1;
    // 0x80226AE4: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    after_1:
    // 0x80226AE8: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x80226AEC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80226AF0: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x80226AF4: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80226AF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226AFC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226B00: jr          $ra
    // 0x80226B04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226B04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80226B08: nop

    // 0x80226B0C: nop

;}
RECOMP_FUNC void func_802260D8_ovl23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802260D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802260DC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802260E0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802260E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802260E8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802260EC: bne         $v0, $zero, L_80226108
    if (ctx->r2 != 0) {
        // 0x802260F0: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_80226108;
    }
    // 0x802260F0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802260F4: jal         0x80050294
    // 0x802260F8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802260F8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802260FC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226100: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226104: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80226108:
    // 0x80226108: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022610C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226110: jr          $ra
    // 0x80226114: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226114: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226570_ovl23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226570: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226574: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226578: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022657C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226580: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80226584: beq         $v1, $zero, L_8022659C
    if (ctx->r3 == 0) {
        // 0x80226588: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022659C;
    }
    // 0x80226588: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022658C: beq         $v1, $v0, L_802265C0
    if (ctx->r3 == ctx->r2) {
        // 0x80226590: addiu       $v1, $zero, 0x18
        ctx->r3 = ADD32(0, 0X18);
            goto L_802265C0;
    }
    // 0x80226590: addiu       $v1, $zero, 0x18
    ctx->r3 = ADD32(0, 0X18);
    // 0x80226594: j           L_802265F8
    // 0x80226598: nop

        goto L_802265F8;
    // 0x80226598: nop

L_8022659C:
    // 0x8022659C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802265A0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802265A4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802265A8: jal         0x80050294
    // 0x802265AC: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802265AC: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    after_0:
    // 0x802265B0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802265B4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802265B8: j           L_802265F8
    // 0x802265BC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_802265F8;
    // 0x802265BC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802265C0:
    // 0x802265C0: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x802265C4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802265C8: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x802265CC: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802265D0: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x802265D4: bne         $v0, $v1, L_802265E8
    if (ctx->r2 != ctx->r3) {
        // 0x802265D8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802265E8;
    }
    // 0x802265D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802265DC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802265E0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802265E4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802265E8:
    // 0x802265E8: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x802265EC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802265F0: jal         0x8004DA90
    // 0x802265F4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x802265F4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
L_802265F8:
    // 0x802265F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802265FC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226600: jr          $ra
    // 0x80226604: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226604: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225B9C_ovl23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225B9C: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80225BA0: bne         $v0, $zero, L_80225BC8
    if (ctx->r2 != 0) {
        // 0x80225BA4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225BC8;
    }
    // 0x80225BA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225BA8: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x80225BAC: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80225BB0: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x80225BB4: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    // 0x80225BB8: lw          $v1, 0x30($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X30);
    // 0x80225BBC: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80225BC0: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80225BC4: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
L_80225BC8:
    // 0x80225BC8: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80225BCC: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80225BD0: bne         $v1, $v0, L_80225BE0
    if (ctx->r3 != ctx->r2) {
        // 0x80225BD4: nop
    
            goto L_80225BE0;
    }
    // 0x80225BD4: nop

    // 0x80225BD8: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x80225BDC: sb          $zero, 0xD($v1)
    MEM_B(0XD, ctx->r3) = 0;
L_80225BE0:
    // 0x80225BE0: jr          $ra
    // 0x80225BE4: nop

    TRACE_RETURN()
    return;
    // 0x80225BE4: nop

;}
RECOMP_FUNC void func_80225150_ovl23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225150: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x80225154: addiu       $v0, $v0, 0x7248
    ctx->r2 = ADD32(ctx->r2, 0X7248);
    // 0x80225158: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022515C: sw          $v0, 0x4020($at)
    MEM_W(0X4020, ctx->r1) = ctx->r2;
    // 0x80225160: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x80225164: addiu       $v0, $v0, 0x73CC
    ctx->r2 = ADD32(ctx->r2, 0X73CC);
    // 0x80225168: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022516C: sw          $v0, -0x22A0($at)
    MEM_W(-0X22A0, ctx->r1) = ctx->r2;
    // 0x80225170: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x80225174: addiu       $v0, $v0, 0x73FC
    ctx->r2 = ADD32(ctx->r2, 0X73FC);
    // 0x80225178: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x8022517C: sw          $v0, -0x26A8($at)
    MEM_W(-0X26A8, ctx->r1) = ctx->r2;
    // 0x80225180: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x80225184: addiu       $v0, $v0, 0x7400
    ctx->r2 = ADD32(ctx->r2, 0X7400);
    // 0x80225188: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022518C: sw          $v0, -0xBD8($at)
    MEM_W(-0XBD8, ctx->r1) = ctx->r2;
    // 0x80225190: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x80225194: addiu       $v0, $v0, 0x7404
    ctx->r2 = ADD32(ctx->r2, 0X7404);
    // 0x80225198: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8022519C: sw          $v0, 0xC68($at)
    MEM_W(0XC68, ctx->r1) = ctx->r2;
    // 0x802251A0: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x802251A4: addiu       $v0, $v0, 0x7418
    ctx->r2 = ADD32(ctx->r2, 0X7418);
    // 0x802251A8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x802251AC: jr          $ra
    // 0x802251B0: sw          $v0, -0x2344($at)
    MEM_W(-0X2344, ctx->r1) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x802251B0: sw          $v0, -0x2344($at)
    MEM_W(-0X2344, ctx->r1) = ctx->r2;
;}
RECOMP_FUNC void func_80226900_ovl23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226900: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226904: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226908: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022690C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226910: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80226914: bne         $v0, $zero, L_80226958
    if (ctx->r2 != 0) {
        // 0x80226918: nop
    
            goto L_80226958;
    }
    // 0x80226918: nop

    // 0x8022691C: jal         0x8004D5D4
    // 0x80226920: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80226920: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x80226924: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226928: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022692C: addiu       $v0, $zero, 0xC8
    ctx->r2 = ADD32(0, 0XC8);
    // 0x80226930: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80226934: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80226938: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022693C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80226940: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226944: jal         0x80050294
    // 0x80226948: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80226948: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022694C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80226950: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226954: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80226958:
    // 0x80226958: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022695C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226960: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80226964: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226968: lw          $v0, 0x7C70($at)
    ctx->r2 = MEM_W(ctx->r1, 0X7C70);
    // 0x8022696C: jalr        $v0
    // 0x80226970: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x80226970: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80226974: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80226978: jal         0x8004DD04
    // 0x8022697C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_3;
    // 0x8022697C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_3:
    // 0x80226980: jal         0x8005044C
    // 0x80226984: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_4;
    // 0x80226984: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80226988: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022698C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226990: jr          $ra
    // 0x80226994: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226994: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
