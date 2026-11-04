#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8022CEC0_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CEC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022CEC4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022CEC8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022CECC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022CED0: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022CED4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022CED8: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022CEDC: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022CEE0: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8022CEE4: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022CEE8: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x8022CEEC: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    // 0x8022CEF0: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x8022CEF4: sh          $zero, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = 0;
    // 0x8022CEF8: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x8022CEFC: jal         0x8004D5D4
    // 0x8022CF00: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022CF00: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022CF04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CF08: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x8022CF0C: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x8022CF10: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
    // 0x8022CF14: sw          $zero, 0xEC($s0)
    MEM_W(0XEC, ctx->r16) = 0;
    // 0x8022CF18: sw          $zero, 0xF0($s0)
    MEM_W(0XF0, ctx->r16) = 0;
    // 0x8022CF1C: sh          $zero, 0xF4($s0)
    MEM_H(0XF4, ctx->r16) = 0;
    // 0x8022CF20: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022CF24: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022CF28: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022CF2C: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8022CF30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022CF34: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022CF38: jr          $ra
    // 0x8022CF3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022CF3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80231064_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231064: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80231068: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x8023106C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231070: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80231074: jal         0x8006033C
    // 0x80231078: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80231078: addiu       $a0, $zero, 0x7B1
    ctx->r4 = ADD32(0, 0X7B1);
    after_0:
    // 0x8023107C: beq         $v0, $zero, L_802310BC
    if (ctx->r2 == 0) {
        // 0x80231080: nop
    
            goto L_802310BC;
    }
    // 0x80231080: nop

    // 0x80231084: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80231088: jal         0x8003E6BC
    // 0x8023108C: addiu       $a0, $a0, 0x49C4
    ctx->r4 = ADD32(ctx->r4, 0X49C4);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_1;
    // 0x8023108C: addiu       $a0, $a0, 0x49C4
    ctx->r4 = ADD32(ctx->r4, 0X49C4);
    after_1:
    // 0x80231090: lw          $v1, 0x44($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X44);
    // 0x80231094: bne         $v1, $v0, L_802310BC
    if (ctx->r3 != ctx->r2) {
        // 0x80231098: addiu       $a0, $zero, 0x7B2
        ctx->r4 = ADD32(0, 0X7B2);
            goto L_802310BC;
    }
    // 0x80231098: addiu       $a0, $zero, 0x7B2
    ctx->r4 = ADD32(0, 0X7B2);
    // 0x8023109C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802310A0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802310A4: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x802310A8: jal         0x8006036C
    // 0x802310AC: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_2;
    // 0x802310AC: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    after_2:
    // 0x802310B0: addiu       $a0, $zero, 0x105
    ctx->r4 = ADD32(0, 0X105);
    // 0x802310B4: jal         0x8002A33C
    // 0x802310B8: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x802310B8: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    after_3:
L_802310BC:
    // 0x802310BC: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x802310C0: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x802310C4: jr          $ra
    // 0x802310C8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x802310C8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80231048_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231048: lbu         $v1, 0x8($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X8);
    // 0x8023104C: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x80231050: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80231054: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80231058: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x8023105C: jr          $ra
    // 0x80231060: sb          $v1, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x80231060: sb          $v1, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r3;
;}
RECOMP_FUNC void func_8023284C_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023284C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80232850: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232854: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232858: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023285C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80232860: lbu         $s1, 0xA($s0)
    ctx->r17 = MEM_BU(ctx->r16, 0XA);
    // 0x80232864: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232868: beq         $s1, $v0, L_802328FC
    if (ctx->r17 == ctx->r2) {
        // 0x8023286C: slti        $v0, $s1, 0x2
        ctx->r2 = SIGNED(ctx->r17) < 0X2 ? 1 : 0;
            goto L_802328FC;
    }
    // 0x8023286C: slti        $v0, $s1, 0x2
    ctx->r2 = SIGNED(ctx->r17) < 0X2 ? 1 : 0;
    // 0x80232870: beql        $v0, $zero, L_80232888
    if (ctx->r2 == 0) {
        // 0x80232874: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80232888;
    }
    goto skip_0;
    // 0x80232874: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80232878: beq         $s1, $zero, L_80232898
    if (ctx->r17 == 0) {
        // 0x8023287C: lui         $v1, 0x80
        ctx->r3 = S32(0X80 << 16);
            goto L_80232898;
    }
    // 0x8023287C: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x80232880: j           L_8023295C
    // 0x80232884: nop

        goto L_8023295C;
    // 0x80232884: nop

L_80232888:
    // 0x80232888: beq         $s1, $v0, L_80232940
    if (ctx->r17 == ctx->r2) {
        // 0x8023288C: lui         $v1, 0x80
        ctx->r3 = S32(0X80 << 16);
            goto L_80232940;
    }
    // 0x8023288C: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x80232890: j           L_8023295C
    // 0x80232894: nop

        goto L_8023295C;
    // 0x80232894: nop

L_80232898:
    // 0x80232898: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023289C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x802328A0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802328A4: bne         $v0, $zero, L_8023295C
    if (ctx->r2 != 0) {
        // 0x802328A8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023295C;
    }
    // 0x802328A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802328AC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802328B0: lhu         $v0, 0x49C4($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X49C4);
    // 0x802328B4: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x802328B8: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x802328BC: addiu       $a1, $a1, 0x4B00
    ctx->r5 = ADD32(ctx->r5, 0X4B00);
    // 0x802328C0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802328C4: sra         $v0, $v0, 25
    ctx->r2 = S32(SIGNED(ctx->r2) >> 25);
    // 0x802328C8: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x802328CC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802328D0: lhu         $v0, 0x49C8($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X49C8);
    // 0x802328D4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802328D8: addu        $a1, $v1, $a1
    ctx->r5 = ADD32(ctx->r3, ctx->r5);
    // 0x802328DC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802328E0: sra         $v0, $v0, 25
    ctx->r2 = S32(SIGNED(ctx->r2) >> 25);
    // 0x802328E4: jal         0x80232970
    // 0x802328E8: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    func_80232970_ovl16(rdram, ctx);
        goto after_0;
    // 0x802328E8: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    after_0:
    // 0x802328EC: bne         $v0, $zero, L_80232930
    if (ctx->r2 != 0) {
        // 0x802328F0: nop
    
            goto L_80232930;
    }
    // 0x802328F0: nop

    // 0x802328F4: j           L_80232958
    // 0x802328F8: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
        goto L_80232958;
    // 0x802328F8: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_802328FC:
    // 0x802328FC: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x80232900: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x80232904: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80232908: lbu         $a1, 0x4B30($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X4B30);
    // 0x8023290C: jal         0x800616FC
    // 0x80232910: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_1;
    // 0x80232910: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_1:
    // 0x80232914: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80232918: addiu       $a0, $a0, -0x3AA4
    ctx->r4 = ADD32(ctx->r4, -0X3AA4);
    // 0x8023291C: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x80232920: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    // 0x80232924: sllv        $v0, $s1, $v0
    ctx->r2 = S32(ctx->r17 << (ctx->r2 & 31));
    // 0x80232928: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8023292C: sh          $v1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r3;
L_80232930:
    // 0x80232930: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80232934: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232938: j           L_8023295C
    // 0x8023293C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8023295C;
    // 0x8023293C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80232940:
    // 0x80232940: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80232944: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80232948: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8023294C: bne         $v0, $zero, L_8023295C
    if (ctx->r2 != 0) {
        // 0x80232950: nop
    
            goto L_8023295C;
    }
    // 0x80232950: nop

    // 0x80232954: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_80232958:
    // 0x80232958: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_8023295C:
    // 0x8023295C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80232960: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80232964: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232968: jr          $ra
    // 0x8023296C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023296C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022F6C4_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F6C4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022F6C8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022F6CC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F6D0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022F6D4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022F6D8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022F6DC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022F6E0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022F6E4: lw          $v0, 0x448C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X448C);
    // 0x8022F6E8: jalr        $v0
    // 0x8022F6EC: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022F6EC: nop

    after_0:
    // 0x8022F6F0: addiu       $a0, $s0, 0x30
    ctx->r4 = ADD32(ctx->r16, 0X30);
    // 0x8022F6F4: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
    // 0x8022F6F8: jal         0x80031600
    // 0x8022F6FC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031600_CA00(rdram, ctx);
        goto after_1;
    // 0x8022F6FC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022F700: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F704: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8022F708: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x8022F70C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022F710: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022F714: jal         0x80031DA8
    // 0x8022F718: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_2;
    // 0x8022F718: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_2:
    // 0x8022F71C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022F720: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022F724: jr          $ra
    // 0x8022F728: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022F728: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80226E40_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226E40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226E44: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226E48: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226E4C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80226E50: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80226E54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226E58: jal         0x8009A3B4
    // 0x80226E5C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80226E5C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80226E60: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80226E64: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80226E68: jal         0x8009A3B4
    // 0x80226E6C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80226E6C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80226E70: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80226E74: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80226E78: jal         0x8009A3B4
    // 0x80226E7C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80226E7C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80226E80: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80226E84: addiu       $v1, $zero, 0x4200
    ctx->r3 = ADD32(0, 0X4200);
    // 0x80226E88: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x80226E8C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226E90: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226E94: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226E98: lw          $v0, 0x40A8($at)
    ctx->r2 = MEM_W(ctx->r1, 0X40A8);
    // 0x80226E9C: jalr        $v0
    // 0x80226EA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x80226EA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80226EA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226EA8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226EAC: jr          $ra
    // 0x80226EB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226EB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229D08_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229D08: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80229D0C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229D10: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229D14: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80229D18: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80229D1C: lhu         $v0, 0x376($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X376);
    // 0x80229D20: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80229D24: sh          $v0, 0x376($s0)
    MEM_H(0X376, ctx->r16) = ctx->r2;
    // 0x80229D28: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80229D2C: bne         $v0, $zero, L_80229D44
    if (ctx->r2 != 0) {
        // 0x80229D30: addiu       $a0, $s0, 0x348
        ctx->r4 = ADD32(ctx->r16, 0X348);
            goto L_80229D44;
    }
    // 0x80229D30: addiu       $a0, $s0, 0x348
    ctx->r4 = ADD32(ctx->r16, 0X348);
    // 0x80229D34: jal         0x8022A23C
    // 0x80229D38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022A23C_ovl16(rdram, ctx);
        goto after_0;
    // 0x80229D38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80229D3C: j           L_80229DF0
    // 0x80229D40: nop

        goto L_80229DF0;
    // 0x80229D40: nop

L_80229D44:
    // 0x80229D44: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80229D48: lhu         $v1, 0x376($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X376);
    // 0x80229D4C: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x80229D50: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80229D54: sltiu       $v1, $v1, 0x41
    ctx->r3 = ctx->r3 < 0X41 ? 1 : 0;
    // 0x80229D58: beq         $v1, $zero, L_80229DF0
    if (ctx->r3 == 0) {
        // 0x80229D5C: sh          $v0, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r2;
            goto L_80229DF0;
    }
    // 0x80229D5C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80229D60: lw          $v0, 0x358($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X358);
    // 0x80229D64: beq         $v0, $zero, L_80229DF0
    if (ctx->r2 == 0) {
        // 0x80229D68: addu        $s1, $a0, $zero
        ctx->r17 = ADD32(ctx->r4, 0);
            goto L_80229DF0;
    }
    // 0x80229D68: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80229D6C: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80229D70: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229D74: bne         $v1, $v0, L_80229DAC
    if (ctx->r3 != ctx->r2) {
        // 0x80229D78: addiu       $v0, $zero, 0x180
        ctx->r2 = ADD32(0, 0X180);
            goto L_80229DAC;
    }
    // 0x80229D78: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
    // 0x80229D7C: addiu       $a0, $zero, 0x158
    ctx->r4 = ADD32(0, 0X158);
    // 0x80229D80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229D84: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80229D88: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
    // 0x80229D8C: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80229D90: addiu       $v0, $zero, -0xF0
    ctx->r2 = ADD32(0, -0XF0);
    // 0x80229D94: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80229D98: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80229D9C: jal         0x8002A33C
    // 0x80229DA0: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x80229DA0: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    after_1:
    // 0x80229DA4: j           L_80229DE0
    // 0x80229DA8: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
        goto L_80229DE0;
    // 0x80229DA8: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_80229DAC:
    // 0x80229DAC: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80229DB0: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80229DB4: lw          $a0, 0x298($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X298);
    // 0x80229DB8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80229DBC: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80229DC0: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x80229DC4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80229DC8: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80229DCC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80229DD0: lbu         $v1, 0xA($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XA);
    // 0x80229DD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229DD8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80229DDC: sw          $v1, 0x370($s0)
    MEM_W(0X370, ctx->r16) = ctx->r3;
L_80229DE0:
    // 0x80229DE0: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80229DE4: sh          $v0, 0x30($s1)
    MEM_H(0X30, ctx->r17) = ctx->r2;
    // 0x80229DE8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80229DEC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80229DF0:
    // 0x80229DF0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80229DF4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229DF8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229DFC: jr          $ra
    // 0x80229E00: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80229E00: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022C9C4_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C9C4: jr          $ra
    // 0x8022C9C8: nop

    TRACE_RETURN()
    return;
    // 0x8022C9C8: nop

;}
RECOMP_FUNC void func_80227418_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227418: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022741C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227420: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227424: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80227428: jal         0x8005131C
    // 0x8022742C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_8005131C_2C71C(rdram, ctx);
        goto after_0;
    // 0x8022742C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x80227430: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80227434: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227438: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022743C: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80227440: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80227444: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80227448: jal         0x8004D5D4
    // 0x8022744C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x8022744C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_1:
    // 0x80227450: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80227454: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x80227458: sw          $zero, 0x70($s0)
    MEM_W(0X70, ctx->r16) = 0;
    // 0x8022745C: sw          $zero, 0x74($s0)
    MEM_W(0X74, ctx->r16) = 0;
    // 0x80227460: sb          $zero, 0x386($s0)
    MEM_B(0X386, ctx->r16) = 0;
    // 0x80227464: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80227468: lw          $a0, 0x298($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X298);
    // 0x8022746C: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x80227470: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80227474: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80227478: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022747C: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80227480: addiu       $v0, $v0, 0x40C0
    ctx->r2 = ADD32(ctx->r2, 0X40C0);
    // 0x80227484: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x80227488: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022748C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80227490: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80227494: lbu         $v0, 0xA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XA);
    // 0x80227498: sb          $v0, 0x73($s0)
    MEM_B(0X73, ctx->r16) = ctx->r2;
    // 0x8022749C: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x802274A0: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x802274A4: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x802274A8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802274AC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802274B0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x802274B4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802274B8: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    // 0x802274BC: lbu         $v1, 0xB($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XB);
    // 0x802274C0: addiu       $a0, $s0, 0x368
    ctx->r4 = ADD32(ctx->r16, 0X368);
    // 0x802274C4: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x802274C8: sb          $zero, 0x1DC($s0)
    MEM_B(0X1DC, ctx->r16) = 0;
    // 0x802274CC: sh          $zero, 0x1D8($s0)
    MEM_H(0X1D8, ctx->r16) = 0;
    // 0x802274D0: sb          $v0, 0x1DD($s0)
    MEM_B(0X1DD, ctx->r16) = ctx->r2;
    // 0x802274D4: sb          $zero, 0x67($s0)
    MEM_B(0X67, ctx->r16) = 0;
    // 0x802274D8: sb          $zero, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = 0;
    // 0x802274DC: jal         0x800540BC
    // 0x802274E0: sh          $v1, 0xC8($s0)
    MEM_H(0XC8, ctx->r16) = ctx->r3;
    func_800540BC_2F4BC(rdram, ctx);
        goto after_2;
    // 0x802274E0: sh          $v1, 0xC8($s0)
    MEM_H(0XC8, ctx->r16) = ctx->r3;
    after_2:
    // 0x802274E4: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x802274E8: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x802274EC: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x802274F0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802274F4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802274F8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x802274FC: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80227500: lbu         $v0, 0x8($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X8);
    // 0x80227504: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80227508: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022750C: sb          $a0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r4;
    // 0x80227510: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80227514: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    // 0x80227518: sh          $v0, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r2;
    // 0x8022751C: bne         $v1, $zero, L_80227544
    if (ctx->r3 != 0) {
        // 0x80227520: sh          $v0, 0xB2($s0)
        MEM_H(0XB2, ctx->r16) = ctx->r2;
            goto L_80227544;
    }
    // 0x80227520: sh          $v0, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r2;
    // 0x80227524: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x80227528: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022752C: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x80227530: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80227534: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80227538: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x8022753C: j           L_8022755C
    // 0x80227540: sb          $a0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r4;
        goto L_8022755C;
    // 0x80227540: sb          $a0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r4;
L_80227544:
    // 0x80227544: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80227548: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022754C: addiu       $v0, $zero, 0x1E0
    ctx->r2 = ADD32(0, 0X1E0);
    // 0x80227550: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80227554: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x80227558: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
L_8022755C:
    // 0x8022755C: sb          $v0, 0x385($s0)
    MEM_B(0X385, ctx->r16) = ctx->r2;
    // 0x80227560: sb          $zero, 0x384($s0)
    MEM_B(0X384, ctx->r16) = 0;
    // 0x80227564: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227568: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022756C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227570: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80227574: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80227578: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8022757C: jal         0x80050294
    // 0x80227580: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x80227580: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    after_3:
    // 0x80227584: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227588: jal         0x802275A4
    // 0x8022758C: sw          $zero, 0x8($s1)
    MEM_W(0X8, ctx->r17) = 0;
    func_802275A4_ovl16(rdram, ctx);
        goto after_4;
    // 0x8022758C: sw          $zero, 0x8($s1)
    MEM_W(0X8, ctx->r17) = 0;
    after_4:
    // 0x80227590: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227594: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227598: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022759C: jr          $ra
    // 0x802275A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802275A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80230358_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230358: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023035C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80230360: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80230364: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80230368: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8023036C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80230370: lw          $v0, 0x44F4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X44F4);
    // 0x80230374: jalr        $v0
    // 0x80230378: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80230378: nop

    after_0:
    // 0x8023037C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80230380: jr          $ra
    // 0x80230384: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230384: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802251B4_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802251B4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802251B8: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x802251BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802251C0: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802251C4: addiu       $a0, $a0, 0xCB4
    ctx->r4 = ADD32(ctx->r4, 0XCB4);
    // 0x802251C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802251CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802251D0: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x802251D4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x802251D8: lbu         $v1, 0x2($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X2);
    // 0x802251DC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802251E0: sh          $v1, 0x49AE($at)
    MEM_H(0X49AE, ctx->r1) = ctx->r3;
    // 0x802251E4: lbu         $a2, 0x3($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X3);
    // 0x802251E8: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x802251EC: sh          $a2, -0x7386($at)
    MEM_H(-0X7386, ctx->r1) = ctx->r6;
    // 0x802251F0: lbu         $a1, 0x0($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X0);
    // 0x802251F4: lui         $a3, 0x7FE9
    ctx->r7 = S32(0X7FE9 << 16);
    // 0x802251F8: ori         $a3, $a3, 0xC000
    ctx->r7 = ctx->r7 | 0XC000;
    // 0x802251FC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225200: sb          $a1, 0x6B40($at)
    MEM_B(0X6B40, ctx->r1) = ctx->r5;
    // 0x80225204: lbu         $t0, 0x1($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X1);
    // 0x80225208: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x8022520C: addiu       $a0, $a0, -0x4
    ctx->r4 = ADD32(ctx->r4, -0X4);
    // 0x80225210: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80225214: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225218: sb          $v1, -0x35BC($at)
    MEM_B(-0X35BC, ctx->r1) = ctx->r3;
    // 0x8022521C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80225220: lb          $v1, -0x3BA0($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BA0);
    // 0x80225224: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x80225228: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x8022522C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80225230: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80225234: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225238: sw          $v0, -0x35C0($at)
    MEM_W(-0X35C0, ctx->r1) = ctx->r2;
    // 0x8022523C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80225240: addiu       $v0, $v0, 0x5080
    ctx->r2 = ADD32(ctx->r2, 0X5080);
    // 0x80225244: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80225248: sw          $v0, 0xB5C($at)
    MEM_W(0XB5C, ctx->r1) = ctx->r2;
    // 0x8022524C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225250: addu        $a2, $a2, $t0
    ctx->r6 = ADD32(ctx->r6, ctx->r8);
    // 0x80225254: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225258: sb          $v0, 0x4DFE($at)
    MEM_B(0X4DFE, ctx->r1) = ctx->r2;
    // 0x8022525C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80225260: sb          $t0, -0x39A6($at)
    MEM_B(-0X39A6, ctx->r1) = ctx->r8;
    // 0x80225264: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80225268: beq         $v1, $zero, L_80225290
    if (ctx->r3 == 0) {
        // 0x8022526C: sb          $a2, 0x53D4($at)
        MEM_B(0X53D4, ctx->r1) = ctx->r6;
            goto L_80225290;
    }
    // 0x8022526C: sb          $a2, 0x53D4($at)
    MEM_B(0X53D4, ctx->r1) = ctx->r6;
    // 0x80225270: jal         0x8006033C
    // 0x80225274: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80225274: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_0:
    // 0x80225278: bne         $v0, $zero, L_80225290
    if (ctx->r2 != 0) {
        // 0x8022527C: addiu       $v0, $zero, 0xC
        ctx->r2 = ADD32(0, 0XC);
            goto L_80225290;
    }
    // 0x8022527C: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80225280: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80225284: sb          $v0, -0x3B9F($at)
    MEM_B(-0X3B9F, ctx->r1) = ctx->r2;
    // 0x80225288: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8022528C: sb          $zero, -0x3B9E($at)
    MEM_B(-0X3B9E, ctx->r1) = 0;
L_80225290:
    // 0x80225290: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x80225294: addiu       $s0, $s0, -0x3BC7
    ctx->r16 = ADD32(ctx->r16, -0X3BC7);
    // 0x80225298: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x8022529C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802252A0: lb          $a1, 0x47CD($a1)
    ctx->r5 = MEM_B(ctx->r5, 0X47CD);
    // 0x802252A4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802252A8: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802252AC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x802252B0: lw          $a0, 0x3958($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3958);
    // 0x802252B4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802252B8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802252BC: lw          $v0, 0x3AE4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X3AE4);
    // 0x802252C0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802252C4: jal         0x8004C790
    // 0x802252C8: sw          $v0, 0x6B44($at)
    MEM_W(0X6B44, ctx->r1) = ctx->r2;
    func_8004C790_27B90(rdram, ctx);
        goto after_1;
    // 0x802252C8: sw          $v0, 0x6B44($at)
    MEM_W(0X6B44, ctx->r1) = ctx->r2;
    after_1:
    // 0x802252CC: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x802252D0: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802252D4: addiu       $a0, $a0, 0x3B14
    ctx->r4 = ADD32(ctx->r4, 0X3B14);
    // 0x802252D8: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x802252DC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802252E0: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x802252E4: lw          $v1, 0x3B4C($at)
    ctx->r3 = MEM_W(ctx->r1, 0X3B4C);
    // 0x802252E8: sll         $a1, $v0, 1
    ctx->r5 = S32(ctx->r2 << 1);
    // 0x802252EC: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x802252F0: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x802252F4: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802252F8: addiu       $v0, $v0, 0x3AF0
    ctx->r2 = ADD32(ctx->r2, 0X3AF0);
    // 0x802252FC: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80225300: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80225304: jal         0x80054FB8
    // 0x80225308: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    func_80054FB8_303B8(rdram, ctx);
        goto after_2;
    // 0x80225308: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    after_2:
    // 0x8022530C: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x80225310: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225314: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225318: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8022531C: jal         0x8004A614
    // 0x80225320: lw          $a0, 0x2F60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2F60);
    func_8004A614_25A14(rdram, ctx);
        goto after_3;
    // 0x80225320: lw          $a0, 0x2F60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2F60);
    after_3:
    // 0x80225324: jal         0x80225380
    // 0x80225328: nop

    func_80225380_ovl16(rdram, ctx);
        goto after_4;
    // 0x80225328: nop

    after_4:
    // 0x8022532C: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x80225330: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80225334: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x80225338: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022533C: lw          $v1, 0x3B68($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3B68);
    // 0x80225340: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225344: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80225348: lw          $a0, 0x3B6C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3B6C);
    // 0x8022534C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225350: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80225354: sb          $v0, 0xB62($at)
    MEM_B(0XB62, ctx->r1) = ctx->r2;
    // 0x80225358: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8022535C: sw          $v1, -0x3690($at)
    MEM_W(-0X3690, ctx->r1) = ctx->r3;
    // 0x80225360: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80225364: sw          $a0, -0x368C($at)
    MEM_W(-0X368C, ctx->r1) = ctx->r4;
    // 0x80225368: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022536C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225370: jr          $ra
    // 0x80225374: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225374: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80225378: nop

    // 0x8022537C: nop

;}
RECOMP_FUNC void func_80226768_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226768: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022676C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80226770: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226774: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x80226778: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022677C: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x80226780: lbu         $a0, 0x8($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X8);
    // 0x80226784: addiu       $v1, $zero, 0x4210
    ctx->r3 = ADD32(0, 0X4210);
    // 0x80226788: addiu       $s1, $s0, 0x308
    ctx->r17 = ADD32(ctx->r16, 0X308);
    // 0x8022678C: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x80226790: beq         $a0, $zero, L_802267C4
    if (ctx->r4 == 0) {
        // 0x80226794: sb          $v0, 0xAD($s0)
        MEM_B(0XAD, ctx->r16) = ctx->r2;
            goto L_802267C4;
    }
    // 0x80226794: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80226798: addiu       $a0, $s0, 0x328
    ctx->r4 = ADD32(ctx->r16, 0X328);
    // 0x8022679C: jal         0x800540D0
    // 0x802267A0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_800540D0_2F4D0(rdram, ctx);
        goto after_0;
    // 0x802267A0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x802267A4: beq         $v0, $zero, L_802267B8
    if (ctx->r2 == 0) {
        // 0x802267A8: nop
    
            goto L_802267B8;
    }
    // 0x802267A8: nop

    // 0x802267AC: lhu         $v0, 0x308($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X308);
    // 0x802267B0: j           L_802267C0
    // 0x802267B4: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
        goto L_802267C0;
    // 0x802267B4: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
L_802267B8:
    // 0x802267B8: lhu         $v0, 0x308($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X308);
    // 0x802267BC: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
L_802267C0:
    // 0x802267C0: sh          $v0, 0x308($s0)
    MEM_H(0X308, ctx->r16) = ctx->r2;
L_802267C4:
    // 0x802267C4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802267C8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802267CC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802267D0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802267D4: lw          $v0, 0x4058($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4058);
    // 0x802267D8: jalr        $v0
    // 0x802267DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x802267DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802267E0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802267E4: bne         $v0, $zero, L_80226808
    if (ctx->r2 != 0) {
        // 0x802267E8: addiu       $a0, $s1, 0x8
        ctx->r4 = ADD32(ctx->r17, 0X8);
            goto L_80226808;
    }
    // 0x802267E8: addiu       $a0, $s1, 0x8
    ctx->r4 = ADD32(ctx->r17, 0X8);
    // 0x802267EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802267F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802267F4: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x802267F8: jal         0x80047284
    // 0x802267FC: lui         $a3, 0x100
    ctx->r7 = S32(0X100 << 16);
    func_80047284_22684(rdram, ctx);
        goto after_2;
    // 0x802267FC: lui         $a3, 0x100
    ctx->r7 = S32(0X100 << 16);
    after_2:
    // 0x80226800: j           L_80226838
    // 0x80226804: nop

        goto L_80226838;
    // 0x80226804: nop

L_80226808:
    // 0x80226808: lh          $a1, 0x16($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X16);
    // 0x8022680C: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80226810: addiu       $v0, $s1, 0x18
    ctx->r2 = ADD32(ctx->r17, 0X18);
    // 0x80226814: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80226818: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8022681C: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x80226820: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226824: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80226828: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8022682C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80226830: jal         0x80051E18
    // 0x80226834: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80051E18_2D218(rdram, ctx);
        goto after_3;
    // 0x80226834: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_3:
L_80226838:
    // 0x80226838: lbu         $v1, 0xAD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAD);
    // 0x8022683C: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x80226840: bnel        $v1, $v0, L_80226854
    if (ctx->r3 != ctx->r2) {
        // 0x80226844: sw          $zero, 0x18($s1)
        MEM_W(0X18, ctx->r17) = 0;
            goto L_80226854;
    }
    goto skip_0;
    // 0x80226844: sw          $zero, 0x18($s1)
    MEM_W(0X18, ctx->r17) = 0;
    skip_0:
    // 0x80226848: jal         0x8005044C
    // 0x8022684C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_4;
    // 0x8022684C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80226850: sw          $zero, 0x18($s1)
    MEM_W(0X18, ctx->r17) = 0;
L_80226854:
    // 0x80226854: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80226858: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022685C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80226860: jr          $ra
    // 0x80226864: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80226864: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_802254FC_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802254FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225500: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225504: jal         0x8006033C
    // 0x80225508: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80225508: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    after_0:
    // 0x8022550C: beq         $v0, $zero, L_8022551C
    if (ctx->r2 == 0) {
        // 0x80225510: nop
    
            goto L_8022551C;
    }
    // 0x80225510: nop

    // 0x80225514: jal         0x80060690
    // 0x80225518: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80060690_3BA90(rdram, ctx);
        goto after_1;
    // 0x80225518: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_1:
L_8022551C:
    // 0x8022551C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225520: jr          $ra
    // 0x80225524: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225524: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80231A54_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231A54: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80231A58: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80231A5C: lw          $s2, 0x60($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X60);
    // 0x80231A60: lw          $v0, 0x64($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X64);
    // 0x80231A64: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x80231A68: addu        $s6, $a2, $zero
    ctx->r22 = ADD32(ctx->r6, 0);
    // 0x80231A6C: subu        $v0, $v0, $s2
    ctx->r2 = SUB32(ctx->r2, ctx->r18);
    // 0x80231A70: div         $zero, $v0, $s6
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r22))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r22)));
    // 0x80231A74: bne         $s6, $zero, L_80231A80
    if (ctx->r22 != 0) {
        // 0x80231A78: nop
    
            goto L_80231A80;
    }
    // 0x80231A78: nop

    // 0x80231A7C: break       7
    do_break(2149784188);
L_80231A80:
    // 0x80231A80: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80231A84: bne         $s6, $at, L_80231A98
    if (ctx->r22 != ctx->r1) {
        // 0x80231A88: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80231A98;
    }
    // 0x80231A88: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80231A8C: bne         $v0, $at, L_80231A98
    if (ctx->r2 != ctx->r1) {
        // 0x80231A90: nop
    
            goto L_80231A98;
    }
    // 0x80231A90: nop

    // 0x80231A94: break       6
    do_break(2149784212);
L_80231A98:
    // 0x80231A98: mflo        $t0
    ctx->r8 = lo;
    // 0x80231A9C: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x80231AA0: addu        $s7, $a0, $zero
    ctx->r23 = ADD32(ctx->r4, 0);
    // 0x80231AA4: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x80231AA8: addu        $s5, $a1, $zero
    ctx->r21 = ADD32(ctx->r5, 0);
    // 0x80231AAC: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80231AB0: addu        $s4, $a3, $zero
    ctx->r20 = ADD32(ctx->r7, 0);
    // 0x80231AB4: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80231AB8: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x80231ABC: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80231AC0: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x80231AC4: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80231AC8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80231ACC: blez        $s6, L_80231BFC
    if (SIGNED(ctx->r22) <= 0) {
        // 0x80231AD0: sw          $t0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r8;
            goto L_80231BFC;
    }
    // 0x80231AD0: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x80231AD4: sll         $v0, $s5, 2
    ctx->r2 = S32(ctx->r21 << 2);
    // 0x80231AD8: addu        $v0, $v0, $s5
    ctx->r2 = ADD32(ctx->r2, ctx->r21);
    // 0x80231ADC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80231AE0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80231AE4: sll         $fp, $s5, 4
    ctx->r30 = S32(ctx->r21 << 4);
L_80231AE8:
    // 0x80231AE8: jal         0x8004F144
    // 0x80231AEC: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80231AEC: nop

    after_0:
    // 0x80231AF0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80231AF4: beq         $s0, $zero, L_80231BD8
    if (ctx->r16 == 0) {
        // 0x80231AF8: lui         $v1, 0x2E80
        ctx->r3 = S32(0X2E80 << 16);
            goto L_80231BD8;
    }
    // 0x80231AF8: lui         $v1, 0x2E80
    ctx->r3 = S32(0X2E80 << 16);
    // 0x80231AFC: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x80231B00: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231B04: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80231B08: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x80231B0C: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80231B10: sb          $s7, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r23;
    // 0x80231B14: sb          $s5, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r21;
    // 0x80231B18: sw          $v1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r3;
    // 0x80231B1C: lhu         $v0, 0x0($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X0);
    // 0x80231B20: sh          $v0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r2;
    // 0x80231B24: lhu         $v0, 0x2($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X2);
    // 0x80231B28: sh          $v0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r2;
    // 0x80231B2C: lhu         $v0, 0x4($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X4);
    // 0x80231B30: beq         $s7, $zero, L_80231B64
    if (ctx->r23 == 0) {
        // 0x80231B34: sh          $v0, 0x20($s0)
        MEM_H(0X20, ctx->r16) = ctx->r2;
            goto L_80231B64;
    }
    // 0x80231B34: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
    // 0x80231B38: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80231B3C: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80231B40: addiu       $v0, $v0, 0x4A30
    ctx->r2 = ADD32(ctx->r2, 0X4A30);
    // 0x80231B44: addu        $s1, $t0, $v0
    ctx->r17 = ADD32(ctx->r8, ctx->r2);
    // 0x80231B48: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x80231B4C: sw          $v0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r2;
    // 0x80231B50: lw          $v0, 0xC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC);
    // 0x80231B54: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
    // 0x80231B58: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x80231B5C: j           L_80231B88
    // 0x80231B60: sw          $v0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r2;
        goto L_80231B88;
    // 0x80231B60: sw          $v0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r2;
L_80231B64:
    // 0x80231B64: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80231B68: addiu       $v0, $v0, 0x4990
    ctx->r2 = ADD32(ctx->r2, 0X4990);
    // 0x80231B6C: addu        $s1, $fp, $v0
    ctx->r17 = ADD32(ctx->r30, ctx->r2);
    // 0x80231B70: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x80231B74: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x80231B78: lbu         $v0, 0xC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC);
    // 0x80231B7C: sb          $v0, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r2;
    // 0x80231B80: lbu         $v0, 0xD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XD);
    // 0x80231B84: sb          $v0, 0x23($s0)
    MEM_B(0X23, ctx->r16) = ctx->r2;
L_80231B88:
    // 0x80231B88: jal         0x800324B4
    // 0x80231B8C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_800324B4_D8B4(rdram, ctx);
        goto after_1;
    // 0x80231B8C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x80231B90: lh          $v1, 0x0($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X0);
    // 0x80231B94: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80231B98: mflo        $v0
    ctx->r2 = lo;
    // 0x80231B9C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80231BA0: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80231BA4: jal         0x80032498
    // 0x80231BA8: sh          $v0, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r2;
    func_80032498_D898(rdram, ctx);
        goto after_2;
    // 0x80231BA8: sh          $v0, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r2;
    after_2:
    // 0x80231BAC: lh          $v1, 0x0($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X0);
    // 0x80231BB0: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80231BB4: mflo        $v0
    ctx->r2 = lo;
    // 0x80231BB8: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80231BBC: sh          $v0, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r2;
    // 0x80231BC0: lhu         $v0, 0x2($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2);
    // 0x80231BC4: sh          $v0, 0x2A($s0)
    MEM_H(0X2A, ctx->r16) = ctx->r2;
    // 0x80231BC8: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80231BCC: sh          $v0, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r2;
    // 0x80231BD0: lhu         $v0, 0x6($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X6);
    // 0x80231BD4: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
L_80231BD8:
    // 0x80231BD8: jal         0x800A3450
    // 0x80231BDC: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80231BDC: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    after_3:
    // 0x80231BE0: lw          $t0, 0x14($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X14);
    // 0x80231BE4: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80231BE8: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x80231BEC: addu        $s2, $s2, $v0
    ctx->r18 = ADD32(ctx->r18, ctx->r2);
    // 0x80231BF0: slt         $v0, $s3, $s6
    ctx->r2 = SIGNED(ctx->r19) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x80231BF4: bne         $v0, $zero, L_80231AE8
    if (ctx->r2 != 0) {
        // 0x80231BF8: nop
    
            goto L_80231AE8;
    }
    // 0x80231BF8: nop

L_80231BFC:
    // 0x80231BFC: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80231C00: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x80231C04: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x80231C08: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x80231C0C: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x80231C10: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x80231C14: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80231C18: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80231C1C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80231C20: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80231C24: jr          $ra
    // 0x80231C28: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x80231C28: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x80231C2C: nop

;}
RECOMP_FUNC void func_802316B0_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802316B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802316B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802316B8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802316BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802316C0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802316C4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802316C8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802316CC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802316D0: lw          $v0, 0x4A44($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4A44);
    // 0x802316D4: jalr        $v0
    // 0x802316D8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802316D8: nop

    after_0:
    // 0x802316DC: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x802316E0: beq         $v0, $zero, L_80231734
    if (ctx->r2 == 0) {
        // 0x802316E4: nop
    
            goto L_80231734;
    }
    // 0x802316E4: nop

    // 0x802316E8: jal         0x8003B878
    // 0x802316EC: nop

    func_8003B878_16C78(rdram, ctx);
        goto after_1;
    // 0x802316EC: nop

    after_1:
    // 0x802316F0: lw          $v1, 0x18($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X18);
    // 0x802316F4: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x802316F8: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x802316FC: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x80231700: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x80231704: sw          $v1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r3;
    // 0x80231708: lw          $v1, 0x34($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X34);
    // 0x8023170C: sw          $v1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r3;
    // 0x80231710: lw          $v1, 0x38($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X38);
    // 0x80231714: sw          $v1, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r3;
    // 0x80231718: lw          $v1, 0x3C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X3C);
    // 0x8023171C: andi        $a0, $v1, 0xFFFF
    ctx->r4 = ctx->r3 & 0XFFFF;
    // 0x80231720: srl         $v1, $v1, 16
    ctx->r3 = S32(U32(ctx->r3) >> 16);
    // 0x80231724: sw          $a0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r4;
    // 0x80231728: sw          $v1, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r3;
    // 0x8023172C: lhu         $v1, 0x24($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X24);
    // 0x80231730: sw          $v1, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r3;
L_80231734:
    // 0x80231734: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80231738: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023173C: jr          $ra
    // 0x80231740: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231740: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A9F0_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A9F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A9F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A9F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A9FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022AA00: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022AA04: bne         $v0, $zero, L_8022AA28
    if (ctx->r2 != 0) {
        // 0x8022AA08: nop
    
            goto L_8022AA28;
    }
    // 0x8022AA08: nop

    // 0x8022AA0C: jal         0x8004F4F8
    // 0x8022AA10: nop

    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_0;
    // 0x8022AA10: nop

    after_0:
    // 0x8022AA14: jal         0x8006036C
    // 0x8022AA18: addiu       $a0, $zero, 0x611
    ctx->r4 = ADD32(0, 0X611);
    func_8006036C_3B76C(rdram, ctx);
        goto after_1;
    // 0x8022AA18: addiu       $a0, $zero, 0x611
    ctx->r4 = ADD32(0, 0X611);
    after_1:
    // 0x8022AA1C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022AA20: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022AA24: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022AA28:
    // 0x8022AA28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022AA2C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022AA30: jr          $ra
    // 0x8022AA34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022AA34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022AA38: nop

    // 0x8022AA3C: nop

;}
RECOMP_FUNC void func_8022AB18_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AB18: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022AB1C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022AB20: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022AB24: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x8022AB28: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8022AB2C: addiu       $s2, $s1, 0x14
    ctx->r18 = ADD32(ctx->r17, 0X14);
    // 0x8022AB30: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022AB34: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022AB38: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8022AB3C: jal         0x8009A3B4
    // 0x8022AB40: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022AB40: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    after_0:
    // 0x8022AB44: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x8022AB48: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x8022AB4C: jal         0x8009A3B4
    // 0x8022AB50: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022AB50: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022AB54: addiu       $a0, $s1, 0x5C
    ctx->r4 = ADD32(ctx->r17, 0X5C);
    // 0x8022AB58: addiu       $s0, $s1, 0x54
    ctx->r16 = ADD32(ctx->r17, 0X54);
    // 0x8022AB5C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022AB60: jal         0x8009A3B4
    // 0x8022AB64: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022AB64: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022AB68: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8022AB6C: lbu         $v1, 0x74($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X74);
    // 0x8022AB70: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x8022AB74: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022AB78: sw          $v0, 0xB4($s1)
    MEM_W(0XB4, ctx->r17) = ctx->r2;
    // 0x8022AB7C: jal         0x8022AD30
    // 0x8022AB80: sb          $v1, 0x75($s1)
    MEM_B(0X75, ctx->r17) = ctx->r3;
    func_8022AD30_ovl16(rdram, ctx);
        goto after_3;
    // 0x8022AB80: sb          $v1, 0x75($s1)
    MEM_B(0X75, ctx->r17) = ctx->r3;
    after_3:
    // 0x8022AB84: addiu       $a0, $s1, 0xDC
    ctx->r4 = ADD32(ctx->r17, 0XDC);
    // 0x8022AB88: jal         0x800540D0
    // 0x8022AB8C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_800540D0_2F4D0(rdram, ctx);
        goto after_4;
    // 0x8022AB8C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_4:
    // 0x8022AB90: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x8022AB94: sw          $v0, 0xEC($s1)
    MEM_W(0XEC, ctx->r17) = ctx->r2;
    // 0x8022AB98: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022AB9C: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022ABA0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022ABA4: lw          $v0, 0x41F8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X41F8);
    // 0x8022ABA8: jalr        $v0
    // 0x8022ABAC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x8022ABAC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
    // 0x8022ABB0: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x8022ABB4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022ABB8: beq         $v1, $v0, L_8022AC6C
    if (ctx->r3 == ctx->r2) {
        // 0x8022ABBC: addiu       $a0, $s1, 0xAC
        ctx->r4 = ADD32(ctx->r17, 0XAC);
            goto L_8022AC6C;
    }
    // 0x8022ABBC: addiu       $a0, $s1, 0xAC
    ctx->r4 = ADD32(ctx->r17, 0XAC);
    // 0x8022ABC0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022ABC4: jal         0x8009A3B4
    // 0x8022ABC8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8022ABC8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x8022ABCC: lbu         $v1, 0xD0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XD0);
    // 0x8022ABD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022ABD4: addiu       $s0, $s1, 0x8C
    ctx->r16 = ADD32(ctx->r17, 0X8C);
    // 0x8022ABD8: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022ABDC: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8022ABE0: sb          $v0, 0xD0($s1)
    MEM_B(0XD0, ctx->r17) = ctx->r2;
    // 0x8022ABE4: lhu         $v0, 0xAE($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XAE);
    // 0x8022ABE8: lui         $a2, 0x8023
    ctx->r6 = S32(0X8023 << 16);
    // 0x8022ABEC: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x8022ABF0: lhu         $a2, 0x4214($a2)
    ctx->r6 = MEM_HU(ctx->r6, 0X4214);
    // 0x8022ABF4: lbu         $v1, 0xD0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XD0);
    // 0x8022ABF8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022ABFC: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8022AC00: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x8022AC04: sh          $v0, 0xAE($s1)
    MEM_H(0XAE, ctx->r17) = ctx->r2;
    // 0x8022AC08: jal         0x80031600
    // 0x8022AC0C: sb          $v1, 0xD0($s1)
    MEM_B(0XD0, ctx->r17) = ctx->r3;
    func_80031600_CA00(rdram, ctx);
        goto after_7;
    // 0x8022AC0C: sb          $v1, 0xD0($s1)
    MEM_B(0XD0, ctx->r17) = ctx->r3;
    after_7:
    // 0x8022AC10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022AC14: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8022AC18: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022AC1C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022AC20: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022AC24: jal         0x80031DA8
    // 0x8022AC28: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_8;
    // 0x8022AC28: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_8:
    // 0x8022AC2C: jal         0x8022AE08
    // 0x8022AC30: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8022AE08_ovl16(rdram, ctx);
        goto after_9;
    // 0x8022AC30: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_9:
    // 0x8022AC34: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x8022AC38: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022AC3C: beq         $v1, $v0, L_8022AC4C
    if (ctx->r3 == ctx->r2) {
        // 0x8022AC40: nop
    
            goto L_8022AC4C;
    }
    // 0x8022AC40: nop

    // 0x8022AC44: jal         0x8022AED0
    // 0x8022AC48: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8022AED0_ovl16(rdram, ctx);
        goto after_10;
    // 0x8022AC48: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_10:
L_8022AC4C:
    // 0x8022AC4C: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022AC50: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022AC54: beq         $v0, $zero, L_8022AC6C
    if (ctx->r2 == 0) {
        // 0x8022AC58: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022AC6C;
    }
    // 0x8022AC58: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022AC5C: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x8022AC60: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022AC64: jal         0x8003B564
    // 0x8022AC68: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_11;
    // 0x8022AC68: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_11:
L_8022AC6C:
    // 0x8022AC6C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8022AC70: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8022AC74: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022AC78: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022AC7C: jr          $ra
    // 0x8022AC80: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022AC80: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022E2EC_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E2EC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022E2F0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E2F4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E2F8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022E2FC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022E300: lw          $v0, 0x50($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X50);
    // 0x8022E304: addiu       $s1, $s0, 0x18
    ctx->r17 = ADD32(ctx->r16, 0X18);
    // 0x8022E308: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022E30C: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x8022E310: jal         0x8002C654
    // 0x8022E314: sw          $v0, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->r2;
    func_8002C654_7A54(rdram, ctx);
        goto after_0;
    // 0x8022E314: sw          $v0, 0x50($s0)
    MEM_W(0X50, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022E318: lw          $a0, 0x50($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X50);
    // 0x8022E31C: jal         0x800319B4
    // 0x8022E320: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_800319B4_CDB4(rdram, ctx);
        goto after_1;
    // 0x8022E320: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x8022E324: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x8022E328: addiu       $a1, $a1, 0x43F0
    ctx->r5 = ADD32(ctx->r5, 0X43F0);
    // 0x8022E32C: jal         0x80031DA8
    // 0x8022E330: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80031DA8_D1A8(rdram, ctx);
        goto after_2;
    // 0x8022E330: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x8022E334: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022E338: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022E33C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E340: jr          $ra
    // 0x8022E344: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022E344: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802255E0_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802255E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802255E4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802255E8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802255EC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802255F0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802255F4: lbu         $v1, 0x5($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X5);
    // 0x802255F8: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x802255FC: beq         $v0, $zero, L_80225790
    if (ctx->r2 == 0) {
        // 0x80225600: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80225790;
    }
    // 0x80225600: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80225604: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80225608: addu        $at, $at, $v0
    gpr jr_addend_80225610 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022560C: lw          $v0, 0x4B40($at)
    ctx->r2 = ADD32(ctx->r1, 0X4B40);
    // 0x80225610: jr          $v0
    // 0x80225614: nop

    switch (jr_addend_80225610 >> 2) {
        case 0: goto L_80225618; break;
        case 1: goto L_8022563C; break;
        case 2: goto L_802256CC; break;
        case 3: goto L_802256EC; break;
        case 4: goto L_80225720; break;
        default: switch_error(__func__, 0x80225610, 0x80234B40);
    }
    // 0x80225614: nop

L_80225618:
    // 0x80225618: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022561C: jal         0x8006FF84
    // 0x80225620: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x80225620: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_0:
    // 0x80225624: beq         $v0, $zero, L_80225790
    if (ctx->r2 == 0) {
        // 0x80225628: nop
    
            goto L_80225790;
    }
    // 0x80225628: nop

    // 0x8022562C: jal         0x80036B58
    // 0x80225630: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_80036B58_11F58(rdram, ctx);
        goto after_1;
    // 0x80225630: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_1:
    // 0x80225634: j           L_80225710
    // 0x80225638: nop

        goto L_80225710;
    // 0x80225638: nop

L_8022563C:
    // 0x8022563C: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80225640: lbu         $v0, -0x7388($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7388);
    // 0x80225644: bne         $v0, $zero, L_80225790
    if (ctx->r2 != 0) {
        // 0x80225648: addiu       $a0, $zero, 0x56
        ctx->r4 = ADD32(0, 0X56);
            goto L_80225790;
    }
    // 0x80225648: addiu       $a0, $zero, 0x56
    ctx->r4 = ADD32(0, 0X56);
    // 0x8022564C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80225650: addiu       $v1, $v1, 0x49B0
    ctx->r3 = ADD32(ctx->r3, 0X49B0);
    // 0x80225654: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80225658: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x8022565C: andi        $v0, $v0, 0xFC
    ctx->r2 = ctx->r2 & 0XFC;
    // 0x80225660: jal         0x8004CB2C
    // 0x80225664: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_2;
    // 0x80225664: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    after_2:
    // 0x80225668: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    // 0x8022566C: jal         0x8004CB2C
    // 0x80225670: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_3;
    // 0x80225670: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_3:
    // 0x80225674: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80225678: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022567C: jal         0x8005F6B4
    // 0x80225680: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_4;
    // 0x80225680: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x80225684: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x80225688: addiu       $s0, $s0, 0x3CFC
    ctx->r16 = ADD32(ctx->r16, 0X3CFC);
    // 0x8022568C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80225690: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225694: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x80225698: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022569C: addiu       $v0, $v0, 0x3D24
    ctx->r2 = ADD32(ctx->r2, 0X3D24);
    // 0x802256A0: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
    // 0x802256A4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x802256A8: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x802256AC: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802256B0: addiu       $v0, $v0, 0x3EC4
    ctx->r2 = ADD32(ctx->r2, 0X3EC4);
    // 0x802256B4: jal         0x8005FA7C
    // 0x802256B8: sw          $v0, 0xA4($s1)
    MEM_W(0XA4, ctx->r17) = ctx->r2;
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_5;
    // 0x802256B8: sw          $v0, 0xA4($s1)
    MEM_W(0XA4, ctx->r17) = ctx->r2;
    after_5:
    // 0x802256BC: jal         0x8005FA7C
    // 0x802256C0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_6;
    // 0x802256C0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_6:
    // 0x802256C4: j           L_80225700
    // 0x802256C8: nop

        goto L_80225700;
    // 0x802256C8: nop

L_802256CC:
    // 0x802256CC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802256D0: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x802256D4: bne         $v0, $zero, L_80225780
    if (ctx->r2 != 0) {
        // 0x802256D8: nop
    
            goto L_80225780;
    }
    // 0x802256D8: nop

    // 0x802256DC: lbu         $v0, 0x5($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5);
    // 0x802256E0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802256E4: j           L_80225780
    // 0x802256E8: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
        goto L_80225780;
    // 0x802256E8: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
L_802256EC:
    // 0x802256EC: lui         $a0, 0x10E
    ctx->r4 = S32(0X10E << 16);
    // 0x802256F0: jal         0x80036B1C
    // 0x802256F4: ori         $a0, $a0, 0x3A01
    ctx->r4 = ctx->r4 | 0X3A01;
    func_80036B1C_11F1C(rdram, ctx);
        goto after_7;
    // 0x802256F4: ori         $a0, $a0, 0x3A01
    ctx->r4 = ctx->r4 | 0X3A01;
    after_7:
    // 0x802256F8: jal         0x80036E48
    // 0x802256FC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80036E48_12248(rdram, ctx);
        goto after_8;
    // 0x802256FC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_8:
L_80225700:
    // 0x80225700: jal         0x8005FB90
    // 0x80225704: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_9;
    // 0x80225704: nop

    after_9:
    // 0x80225708: jal         0x80060018
    // 0x8022570C: nop

    func_80060018_3B418(rdram, ctx);
        goto after_10;
    // 0x8022570C: nop

    after_10:
L_80225710:
    // 0x80225710: lbu         $v0, 0x5($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5);
    // 0x80225714: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225718: j           L_80225790
    // 0x8022571C: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
        goto L_80225790;
    // 0x8022571C: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
L_80225720:
    // 0x80225720: jal         0x80036B7C
    // 0x80225724: nop

    func_80036B7C_11F7C(rdram, ctx);
        goto after_11;
    // 0x80225724: nop

    after_11:
    // 0x80225728: beq         $v0, $zero, L_80225780
    if (ctx->r2 == 0) {
        // 0x8022572C: nop
    
            goto L_80225780;
    }
    // 0x8022572C: nop

    // 0x80225730: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80225734: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80225738: bne         $v0, $zero, L_80225780
    if (ctx->r2 != 0) {
        // 0x8022573C: nop
    
            goto L_80225780;
    }
    // 0x8022573C: nop

    // 0x80225740: jal         0x80060170
    // 0x80225744: nop

    func_80060170_3B570(rdram, ctx);
        goto after_12;
    // 0x80225744: nop

    after_12:
    // 0x80225748: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022574C: addiu       $v0, $v0, 0x3D74
    ctx->r2 = ADD32(ctx->r2, 0X3D74);
    // 0x80225750: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80225754: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x80225758: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x8022575C: lbu         $a0, 0x4($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X4);
    // 0x80225760: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225764: addiu       $v0, $v0, 0x3ED4
    ctx->r2 = ADD32(ctx->r2, 0X3ED4);
    // 0x80225768: sw          $v0, 0xA4($s1)
    MEM_W(0XA4, ctx->r17) = ctx->r2;
    // 0x8022576C: sb          $zero, 0x5($s1)
    MEM_B(0X5, ctx->r17) = 0;
    // 0x80225770: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80225774: andi        $v1, $v1, 0x3
    ctx->r3 = ctx->r3 & 0X3;
    // 0x80225778: sb          $v1, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r3;
    // 0x8022577C: sb          $a0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r4;
L_80225780:
    // 0x80225780: jal         0x8005FB90
    // 0x80225784: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_13;
    // 0x80225784: nop

    after_13:
    // 0x80225788: jal         0x80060018
    // 0x8022578C: nop

    func_80060018_3B418(rdram, ctx);
        goto after_14;
    // 0x8022578C: nop

    after_14:
L_80225790:
    // 0x80225790: jal         0x8006072C
    // 0x80225794: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_15;
    // 0x80225794: nop

    after_15:
    // 0x80225798: beq         $v0, $zero, L_802257AC
    if (ctx->r2 == 0) {
        // 0x8022579C: nop
    
            goto L_802257AC;
    }
    // 0x8022579C: nop

    // 0x802257A0: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x802257A4: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x802257A8: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_802257AC:
    // 0x802257AC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802257B0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802257B4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802257B8: jr          $ra
    // 0x802257BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802257BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802317D0_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802317D0: addu        $t4, $a0, $zero
    ctx->r12 = ADD32(ctx->r4, 0);
    // 0x802317D4: lhu         $v0, 0x30($t4)
    ctx->r2 = MEM_HU(ctx->r12, 0X30);
    // 0x802317D8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802317DC: sh          $v0, 0x30($t4)
    MEM_H(0X30, ctx->r12) = ctx->r2;
    // 0x802317E0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802317E4: bne         $v0, $zero, L_802317F8
    if (ctx->r2 != 0) {
        // 0x802317E8: nop
    
            goto L_802317F8;
    }
    // 0x802317E8: nop

    // 0x802317EC: lbu         $v0, 0x8($t4)
    ctx->r2 = MEM_BU(ctx->r12, 0X8);
    // 0x802317F0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802317F4: sb          $v0, 0x8($t4)
    MEM_B(0X8, ctx->r12) = ctx->r2;
L_802317F8:
    // 0x802317F8: lh          $v1, 0x30($t4)
    ctx->r3 = MEM_H(ctx->r12, 0X30);
    // 0x802317FC: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x80231800: lhu         $a1, 0x1C($t4)
    ctx->r5 = MEM_HU(ctx->r12, 0X1C);
    // 0x80231804: lhu         $t0, 0x28($t4)
    ctx->r8 = MEM_HU(ctx->r12, 0X28);
    // 0x80231808: lhu         $t1, 0x2E($t4)
    ctx->r9 = MEM_HU(ctx->r12, 0X2E);
    // 0x8023180C: lhu         $a2, 0x1E($t4)
    ctx->r6 = MEM_HU(ctx->r12, 0X1E);
    // 0x80231810: lhu         $a3, 0x20($t4)
    ctx->r7 = MEM_HU(ctx->r12, 0X20);
    // 0x80231814: lhu         $t2, 0x2C($t4)
    ctx->r10 = MEM_HU(ctx->r12, 0X2C);
    // 0x80231818: sll         $t3, $v1, 3
    ctx->r11 = S32(ctx->r3 << 3);
    // 0x8023181C: sll         $a0, $v1, 19
    ctx->r4 = S32(ctx->r3 << 19);
    // 0x80231820: sll         $v1, $v1, 11
    ctx->r3 = S32(ctx->r3 << 11);
    // 0x80231824: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80231828: lhu         $v0, 0x2A($t4)
    ctx->r2 = MEM_HU(ctx->r12, 0X2A);
    // 0x8023182C: or          $a0, $a0, $v1
    ctx->r4 = ctx->r4 | ctx->r3;
    // 0x80231830: or          $a0, $a0, $t3
    ctx->r4 = ctx->r4 | ctx->r11;
    // 0x80231834: addu        $a1, $a1, $t0
    ctx->r5 = ADD32(ctx->r5, ctx->r8);
    // 0x80231838: addu        $a3, $a3, $t2
    ctx->r7 = ADD32(ctx->r7, ctx->r10);
    // 0x8023183C: sw          $a0, 0x18($t4)
    MEM_W(0X18, ctx->r12) = ctx->r4;
    // 0x80231840: sh          $a1, 0x1C($t4)
    MEM_H(0X1C, ctx->r12) = ctx->r5;
    // 0x80231844: sh          $a3, 0x20($t4)
    MEM_H(0X20, ctx->r12) = ctx->r7;
    // 0x80231848: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x8023184C: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x80231850: sh          $v0, 0x2A($t4)
    MEM_H(0X2A, ctx->r12) = ctx->r2;
    // 0x80231854: jr          $ra
    // 0x80231858: sh          $a2, 0x1E($t4)
    MEM_H(0X1E, ctx->r12) = ctx->r6;
    TRACE_RETURN()
    return;
    // 0x80231858: sh          $a2, 0x1E($t4)
    MEM_H(0X1E, ctx->r12) = ctx->r6;
;}
RECOMP_FUNC void func_80231C30_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231C30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231C34: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80231C38: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80231C3C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80231C40: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80231C44: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80231C48: lw          $v0, 0x4A70($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4A70);
    // 0x80231C4C: jalr        $v0
    // 0x80231C50: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80231C50: nop

    after_0:
    // 0x80231C54: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80231C58: jr          $ra
    // 0x80231C5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231C5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225150_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225150: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225154: addiu       $v0, $v0, 0x31D4
    ctx->r2 = ADD32(ctx->r2, 0X31D4);
    // 0x80225158: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022515C: sw          $v0, 0x4020($at)
    MEM_W(0X4020, ctx->r1) = ctx->r2;
    // 0x80225160: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225164: addiu       $v0, $v0, 0x32D4
    ctx->r2 = ADD32(ctx->r2, 0X32D4);
    // 0x80225168: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022516C: sw          $v0, -0x22A0($at)
    MEM_W(-0X22A0, ctx->r1) = ctx->r2;
    // 0x80225170: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225174: addiu       $v0, $v0, 0x32F0
    ctx->r2 = ADD32(ctx->r2, 0X32F0);
    // 0x80225178: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x8022517C: sw          $v0, -0x26A8($at)
    MEM_W(-0X26A8, ctx->r1) = ctx->r2;
    // 0x80225180: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225184: addiu       $v0, $v0, 0x33B0
    ctx->r2 = ADD32(ctx->r2, 0X33B0);
    // 0x80225188: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022518C: sw          $v0, -0xBD8($at)
    MEM_W(-0XBD8, ctx->r1) = ctx->r2;
    // 0x80225190: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225194: addiu       $v0, $v0, 0x3414
    ctx->r2 = ADD32(ctx->r2, 0X3414);
    // 0x80225198: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8022519C: sw          $v0, 0xC68($at)
    MEM_W(0XC68, ctx->r1) = ctx->r2;
    // 0x802251A0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802251A4: addiu       $v0, $v0, 0x349C
    ctx->r2 = ADD32(ctx->r2, 0X349C);
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
RECOMP_FUNC void func_8022D090_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D090: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022D094: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D098: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D09C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022D0A0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022D0A4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022D0A8: lw          $v0, 0xEC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XEC);
    // 0x8022D0AC: lui         $s2, 0xFF
    ctx->r18 = S32(0XFF << 16);
    // 0x8022D0B0: ori         $s2, $s2, 0xFFFF
    ctx->r18 = ctx->r18 | 0XFFFF;
    // 0x8022D0B4: and         $v1, $v0, $s2
    ctx->r3 = ctx->r2 & ctx->r18;
    // 0x8022D0B8: beq         $v1, $zero, L_8022D1B8
    if (ctx->r3 == 0) {
        // 0x8022D0BC: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_8022D1B8;
    }
    // 0x8022D0BC: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x8022D0C0: lhu         $v0, 0x6E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6E);
    // 0x8022D0C4: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x8022D0C8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022D0CC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022D0D0: jal         0x8002A33C
    // 0x8022D0D4: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8022D0D4: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022D0D8: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8022D0DC: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8022D0E0: lw          $v1, -0x14F0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X14F0);
    // 0x8022D0E4: sw          $s2, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r18;
    // 0x8022D0E8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D0EC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022D0F0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022D0F4: lbu         $v0, 0x8($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X8);
    // 0x8022D0F8: lh          $v1, 0x6E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X6E);
    // 0x8022D0FC: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022D100: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022D104: bne         $v1, $zero, L_8022D1B8
    if (ctx->r3 != 0) {
        // 0x8022D108: nop
    
            goto L_8022D1B8;
    }
    // 0x8022D108: nop

    // 0x8022D10C: jal         0x8004F144
    // 0x8022D110: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_1;
    // 0x8022D110: nop

    after_1:
    // 0x8022D114: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022D118: beq         $v1, $zero, L_8022D140
    if (ctx->r3 == 0) {
        // 0x8022D11C: addiu       $a0, $v1, 0x38
        ctx->r4 = ADD32(ctx->r3, 0X38);
            goto L_8022D140;
    }
    // 0x8022D11C: addiu       $a0, $v1, 0x38
    ctx->r4 = ADD32(ctx->r3, 0X38);
    // 0x8022D120: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022D124: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022D128: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022D12C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022D130: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022D134: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8022D138: jal         0x8009A3B4
    // 0x8022D13C: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022D13C: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    after_2:
L_8022D140:
    // 0x8022D140: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D144: jal         0x8007A1B8
    // 0x8022D148: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8007A1B8_555B8(rdram, ctx);
        goto after_3;
    // 0x8022D148: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_3:
    // 0x8022D14C: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022D150: lhu         $v0, 0x4320($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4320);
    // 0x8022D154: sltiu       $v0, $v0, 0x8
    ctx->r2 = ctx->r2 < 0X8 ? 1 : 0;
    // 0x8022D158: beq         $v0, $zero, L_8022D18C
    if (ctx->r2 == 0) {
        // 0x8022D15C: nop
    
            goto L_8022D18C;
    }
    // 0x8022D15C: nop

L_8022D160:
    // 0x8022D160: jal         0x8022D280
    // 0x8022D164: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022D280_ovl16(rdram, ctx);
        goto after_4;
    // 0x8022D164: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022D168: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022D16C: lhu         $v0, 0x4320($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4320);
    // 0x8022D170: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D174: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022D178: sh          $v0, 0x4320($at)
    MEM_H(0X4320, ctx->r1) = ctx->r2;
    // 0x8022D17C: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8022D180: sltiu       $v0, $v0, 0x8
    ctx->r2 = ctx->r2 < 0X8 ? 1 : 0;
    // 0x8022D184: bne         $v0, $zero, L_8022D160
    if (ctx->r2 != 0) {
        // 0x8022D188: nop
    
            goto L_8022D160;
    }
    // 0x8022D188: nop

L_8022D18C:
    // 0x8022D18C: jal         0x8022D304
    // 0x8022D190: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022D304_ovl16(rdram, ctx);
        goto after_5;
    // 0x8022D190: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8022D194: jal         0x8022D304
    // 0x8022D198: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022D304_ovl16(rdram, ctx);
        goto after_6;
    // 0x8022D198: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x8022D19C: addiu       $a0, $zero, 0x157
    ctx->r4 = ADD32(0, 0X157);
    // 0x8022D1A0: jal         0x8002A33C
    // 0x8022D1A4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_7;
    // 0x8022D1A4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_7:
    // 0x8022D1A8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022D1AC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022D1B0: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022D1B4: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_8022D1B8:
    // 0x8022D1B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022D1BC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022D1C0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022D1C4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D1C8: jr          $ra
    // 0x8022D1CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022D1CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022C9A8_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C9A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C9AC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022C9B0: jal         0x8004F418
    // 0x8022C9B4: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8022C9B4: nop

    after_0:
    // 0x8022C9B8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022C9BC: jr          $ra
    // 0x8022C9C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C9C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F990_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F990: jr          $ra
    // 0x8022F994: nop

    TRACE_RETURN()
    return;
    // 0x8022F994: nop

;}
RECOMP_FUNC void func_8022A944_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A944: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A948: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A94C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A950: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A954: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022A958: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A95C: beq         $v1, $v0, L_8022A994
    if (ctx->r3 == ctx->r2) {
        // 0x8022A960: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8022A994;
    }
    // 0x8022A960: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022A964: beq         $v0, $zero, L_8022A9E0
    if (ctx->r2 == 0) {
        // 0x8022A968: nop
    
            goto L_8022A9E0;
    }
    // 0x8022A968: nop

    // 0x8022A96C: bne         $v1, $zero, L_8022A9E0
    if (ctx->r3 != 0) {
        // 0x8022A970: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022A9E0;
    }
    // 0x8022A970: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A974: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022A978: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022A97C: addiu       $v0, $zero, -0x32
    ctx->r2 = ADD32(0, -0X32);
    // 0x8022A980: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8022A984: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022A988: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    // 0x8022A98C: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022A990: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
L_8022A994:
    // 0x8022A994: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x8022A998: lhu         $a0, 0x46($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X46);
    // 0x8022A99C: lhu         $v1, 0x46($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X46);
    // 0x8022A9A0: lhu         $a1, 0x4E($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X4E);
    // 0x8022A9A4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022A9A8: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022A9AC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A9B0: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8022A9B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A9B8: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022A9BC: jal         0x80040F30
    // 0x8022A9C0: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    func_80040F30_1C330(rdram, ctx);
        goto after_0;
    // 0x8022A9C0: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022A9C4: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x8022A9C8: beq         $v0, $zero, L_8022A9E0
    if (ctx->r2 == 0) {
        // 0x8022A9CC: addiu       $v1, $zero, 0x2
        ctx->r3 = ADD32(0, 0X2);
            goto L_8022A9E0;
    }
    // 0x8022A9CC: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8022A9D0: lhu         $v0, 0xC0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XC0);
    // 0x8022A9D4: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022A9D8: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022A9DC: sh          $v0, 0xC0($s0)
    MEM_H(0XC0, ctx->r16) = ctx->r2;
L_8022A9E0:
    // 0x8022A9E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A9E4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A9E8: jr          $ra
    // 0x8022A9EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A9EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226A0C_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226A0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226A10: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226A14: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226A18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226A1C: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80226A20: sltiu       $v0, $v1, 0x8
    ctx->r2 = ctx->r3 < 0X8 ? 1 : 0;
    // 0x80226A24: beq         $v0, $zero, L_80226AB8
    if (ctx->r2 == 0) {
        // 0x80226A28: addiu       $a0, $s0, 0x308
        ctx->r4 = ADD32(ctx->r16, 0X308);
            goto L_80226AB8;
    }
    // 0x80226A28: addiu       $a0, $s0, 0x308
    ctx->r4 = ADD32(ctx->r16, 0X308);
    // 0x80226A2C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80226A30: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226A34: addu        $at, $at, $v0
    gpr jr_addend_80226A3C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226A38: lw          $v0, 0x4BA0($at)
    ctx->r2 = ADD32(ctx->r1, 0X4BA0);
    // 0x80226A3C: jr          $v0
    // 0x80226A40: nop

    switch (jr_addend_80226A3C >> 2) {
        case 0: goto L_80226A44; break;
        case 1: goto L_80226A5C; break;
        case 2: goto L_80226A7C; break;
        case 3: goto L_80226A5C; break;
        case 4: goto L_80226A7C; break;
        case 5: goto L_80226A5C; break;
        case 6: goto L_80226A7C; break;
        case 7: goto L_80226AA4; break;
        default: switch_error(__func__, 0x80226A3C, 0x80234BA0);
    }
    // 0x80226A40: nop

L_80226A44:
    // 0x80226A44: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x80226A48: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80226A4C: beq         $v0, $zero, L_80226AB8
    if (ctx->r2 == 0) {
        // 0x80226A50: nop
    
            goto L_80226AB8;
    }
    // 0x80226A50: nop

    // 0x80226A54: j           L_80226A94
    // 0x80226A58: nop

        goto L_80226A94;
    // 0x80226A58: nop

L_80226A5C:
    // 0x80226A5C: jal         0x80226D44
    // 0x80226A60: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80226D44_ovl16(rdram, ctx);
        goto after_0;
    // 0x80226A60: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80226A64: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80226A68: beq         $v0, $zero, L_80226AB8
    if (ctx->r2 == 0) {
        // 0x80226A6C: addiu       $v1, $zero, 0x4
        ctx->r3 = ADD32(0, 0X4);
            goto L_80226AB8;
    }
    // 0x80226A6C: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x80226A70: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80226A74: j           L_80226A98
    // 0x80226A78: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
        goto L_80226A98;
    // 0x80226A78: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_80226A7C:
    // 0x80226A7C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226A80: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226A84: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80226A88: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80226A8C: bne         $v0, $zero, L_80226AB8
    if (ctx->r2 != 0) {
        // 0x80226A90: nop
    
            goto L_80226AB8;
    }
    // 0x80226A90: nop

L_80226A94:
    // 0x80226A94: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
L_80226A98:
    // 0x80226A98: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226A9C: j           L_80226AB8
    // 0x80226AA0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80226AB8;
    // 0x80226AA0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80226AA4:
    // 0x80226AA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226AA8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80226AAC: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80226AB0: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80226AB4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80226AB8:
    // 0x80226AB8: jal         0x80226C1C
    // 0x80226ABC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80226C1C_ovl16(rdram, ctx);
        goto after_1;
    // 0x80226ABC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80226AC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226AC4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226AC8: jr          $ra
    // 0x80226ACC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226ACC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022CE60_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CE60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022CE64: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022CE68: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022CE6C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022CE70: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022CE74: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022CE78: lw          $v0, 0x42E4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X42E4);
    // 0x8022CE7C: jalr        $v0
    // 0x8022CE80: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022CE80: nop

    after_0:
    // 0x8022CE84: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022CE88: jr          $ra
    // 0x8022CE8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022CE8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022CE24_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CE24: jr          $ra
    // 0x8022CE28: nop

    TRACE_RETURN()
    return;
    // 0x8022CE28: nop

;}
RECOMP_FUNC void func_8022F364_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F364: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022F368: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022F36C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022F370: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8022F374: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8022F378: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022F37C: lb          $v0, 0xD($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XD);
    // 0x8022F380: beq         $v0, $zero, L_8022F3A8
    if (ctx->r2 == 0) {
        // 0x8022F384: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022F3A8;
    }
    // 0x8022F384: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022F388: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022F38C: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    // 0x8022F390: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x8022F394: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8022F398: jal         0x80047284
    // 0x8022F39C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_0;
    // 0x8022F39C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x8022F3A0: j           L_8022F674
    // 0x8022F3A4: nop

        goto L_8022F674;
    // 0x8022F3A4: nop

L_8022F3A8:
    // 0x8022F3A8: addiu       $s0, $sp, 0x10
    ctx->r16 = ADD32(ctx->r29, 0X10);
    // 0x8022F3AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F3B0: addiu       $s2, $s1, 0x38
    ctx->r18 = ADD32(ctx->r17, 0X38);
    // 0x8022F3B4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022F3B8: jal         0x8009A3B4
    // 0x8022F3BC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022F3BC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8022F3C0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022F3C4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8022F3C8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8022F3CC: lhu         $v0, 0x12($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X12);
    // 0x8022F3D0: lhu         $v1, 0x10($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X10);
    // 0x8022F3D4: lhu         $t0, 0x14($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X14);
    // 0x8022F3D8: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x8022F3DC: addiu       $v0, $v0, -0x301
    ctx->r2 = ADD32(ctx->r2, -0X301);
    // 0x8022F3E0: addiu       $v1, $v1, -0x3E
    ctx->r3 = ADD32(ctx->r3, -0X3E);
    // 0x8022F3E4: addiu       $t0, $t0, -0x3E
    ctx->r8 = ADD32(ctx->r8, -0X3E);
    // 0x8022F3E8: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x8022F3EC: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    // 0x8022F3F0: jal         0x80231878
    // 0x8022F3F4: sh          $t0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r8;
    func_80231878_ovl16(rdram, ctx);
        goto after_2;
    // 0x8022F3F4: sh          $t0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r8;
    after_2:
    // 0x8022F3F8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022F3FC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x8022F400: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8022F404: lhu         $v0, 0x10($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X10);
    // 0x8022F408: lhu         $v1, 0x14($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X14);
    // 0x8022F40C: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x8022F410: addiu       $v0, $v0, -0x3E
    ctx->r2 = ADD32(ctx->r2, -0X3E);
    // 0x8022F414: addiu       $v1, $v1, -0x3E
    ctx->r3 = ADD32(ctx->r3, -0X3E);
    // 0x8022F418: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x8022F41C: jal         0x80231878
    // 0x8022F420: sh          $v1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r3;
    func_80231878_ovl16(rdram, ctx);
        goto after_3;
    // 0x8022F420: sh          $v1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r3;
    after_3:
    // 0x8022F424: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022F428: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x8022F42C: lhu         $v0, 0x10($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X10);
    // 0x8022F430: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8022F434: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x8022F438: addiu       $v0, $v0, -0x3E
    ctx->r2 = ADD32(ctx->r2, -0X3E);
    // 0x8022F43C: jal         0x80231878
    // 0x8022F440: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    func_80231878_ovl16(rdram, ctx);
        goto after_4;
    // 0x8022F440: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    after_4:
    // 0x8022F444: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022F448: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x8022F44C: lhu         $v0, 0x10($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X10);
    // 0x8022F450: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8022F454: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x8022F458: addiu       $v0, $v0, -0x3E
    ctx->r2 = ADD32(ctx->r2, -0X3E);
    // 0x8022F45C: jal         0x80231878
    // 0x8022F460: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    func_80231878_ovl16(rdram, ctx);
        goto after_5;
    // 0x8022F460: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    after_5:
    // 0x8022F464: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022F468: lhu         $v1, 0x38($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X38);
    // 0x8022F46C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x8022F470: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8022F474: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    // 0x8022F478: lhu         $v0, 0x3C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3C);
    // 0x8022F47C: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x8022F480: addiu       $v1, $v1, 0x3E
    ctx->r3 = ADD32(ctx->r3, 0X3E);
    // 0x8022F484: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    // 0x8022F488: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x8022F48C: addiu       $v0, $v0, 0x3E
    ctx->r2 = ADD32(ctx->r2, 0X3E);
    // 0x8022F490: jal         0x80231878
    // 0x8022F494: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_80231878_ovl16(rdram, ctx);
        goto after_6;
    // 0x8022F494: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_6:
    // 0x8022F498: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022F49C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x8022F4A0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8022F4A4: lhu         $v0, 0x10($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X10);
    // 0x8022F4A8: lhu         $v1, 0x14($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X14);
    // 0x8022F4AC: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x8022F4B0: addiu       $v0, $v0, 0x3E
    ctx->r2 = ADD32(ctx->r2, 0X3E);
    // 0x8022F4B4: addiu       $v1, $v1, 0x3E
    ctx->r3 = ADD32(ctx->r3, 0X3E);
    // 0x8022F4B8: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x8022F4BC: jal         0x80231878
    // 0x8022F4C0: sh          $v1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r3;
    func_80231878_ovl16(rdram, ctx);
        goto after_7;
    // 0x8022F4C0: sh          $v1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r3;
    after_7:
    // 0x8022F4C4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022F4C8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8022F4CC: lhu         $v0, 0x10($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X10);
    // 0x8022F4D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8022F4D4: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x8022F4D8: addiu       $v0, $v0, 0x3E
    ctx->r2 = ADD32(ctx->r2, 0X3E);
    // 0x8022F4DC: jal         0x80231878
    // 0x8022F4E0: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    func_80231878_ovl16(rdram, ctx);
        goto after_8;
    // 0x8022F4E0: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    after_8:
    // 0x8022F4E4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022F4E8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x8022F4EC: lhu         $v0, 0x10($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X10);
    // 0x8022F4F0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8022F4F4: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x8022F4F8: addiu       $v0, $v0, 0x3E
    ctx->r2 = ADD32(ctx->r2, 0X3E);
    // 0x8022F4FC: jal         0x80231878
    // 0x8022F500: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    func_80231878_ovl16(rdram, ctx);
        goto after_9;
    // 0x8022F500: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    after_9:
    // 0x8022F504: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022F508: lhu         $v1, 0x38($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X38);
    // 0x8022F50C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x8022F510: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8022F514: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    // 0x8022F518: lhu         $v0, 0x3C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3C);
    // 0x8022F51C: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x8022F520: addiu       $v1, $v1, -0x3E
    ctx->r3 = ADD32(ctx->r3, -0X3E);
    // 0x8022F524: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    // 0x8022F528: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x8022F52C: addiu       $v0, $v0, 0x3E
    ctx->r2 = ADD32(ctx->r2, 0X3E);
    // 0x8022F530: jal         0x80231878
    // 0x8022F534: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_80231878_ovl16(rdram, ctx);
        goto after_10;
    // 0x8022F534: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_10:
    // 0x8022F538: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022F53C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x8022F540: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8022F544: lhu         $v0, 0x10($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X10);
    // 0x8022F548: lhu         $v1, 0x14($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X14);
    // 0x8022F54C: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x8022F550: addiu       $v0, $v0, -0x3E
    ctx->r2 = ADD32(ctx->r2, -0X3E);
    // 0x8022F554: addiu       $v1, $v1, 0x3E
    ctx->r3 = ADD32(ctx->r3, 0X3E);
    // 0x8022F558: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x8022F55C: jal         0x80231878
    // 0x8022F560: sh          $v1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r3;
    func_80231878_ovl16(rdram, ctx);
        goto after_11;
    // 0x8022F560: sh          $v1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r3;
    after_11:
    // 0x8022F564: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022F568: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x8022F56C: lhu         $v0, 0x10($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X10);
    // 0x8022F570: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8022F574: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x8022F578: addiu       $v0, $v0, -0x3E
    ctx->r2 = ADD32(ctx->r2, -0X3E);
    // 0x8022F57C: jal         0x80231878
    // 0x8022F580: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    func_80231878_ovl16(rdram, ctx);
        goto after_12;
    // 0x8022F580: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    after_12:
    // 0x8022F584: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022F588: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8022F58C: lhu         $v0, 0x10($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X10);
    // 0x8022F590: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8022F594: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x8022F598: addiu       $v0, $v0, -0x3E
    ctx->r2 = ADD32(ctx->r2, -0X3E);
    // 0x8022F59C: jal         0x80231878
    // 0x8022F5A0: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    func_80231878_ovl16(rdram, ctx);
        goto after_13;
    // 0x8022F5A0: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    after_13:
    // 0x8022F5A4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022F5A8: lhu         $v1, 0x38($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X38);
    // 0x8022F5AC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x8022F5B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8022F5B4: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    // 0x8022F5B8: lhu         $v0, 0x3C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3C);
    // 0x8022F5BC: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x8022F5C0: addiu       $v1, $v1, 0x3E
    ctx->r3 = ADD32(ctx->r3, 0X3E);
    // 0x8022F5C4: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    // 0x8022F5C8: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x8022F5CC: addiu       $v0, $v0, -0x3E
    ctx->r2 = ADD32(ctx->r2, -0X3E);
    // 0x8022F5D0: jal         0x80231878
    // 0x8022F5D4: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_80231878_ovl16(rdram, ctx);
        goto after_14;
    // 0x8022F5D4: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_14:
    // 0x8022F5D8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022F5DC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8022F5E0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8022F5E4: lhu         $v0, 0x10($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X10);
    // 0x8022F5E8: lhu         $v1, 0x14($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X14);
    // 0x8022F5EC: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x8022F5F0: addiu       $v0, $v0, 0x3E
    ctx->r2 = ADD32(ctx->r2, 0X3E);
    // 0x8022F5F4: addiu       $v1, $v1, -0x3E
    ctx->r3 = ADD32(ctx->r3, -0X3E);
    // 0x8022F5F8: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x8022F5FC: jal         0x80231878
    // 0x8022F600: sh          $v1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r3;
    func_80231878_ovl16(rdram, ctx);
        goto after_15;
    // 0x8022F600: sh          $v1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r3;
    after_15:
    // 0x8022F604: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022F608: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x8022F60C: lhu         $v0, 0x10($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X10);
    // 0x8022F610: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8022F614: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x8022F618: addiu       $v0, $v0, 0x3E
    ctx->r2 = ADD32(ctx->r2, 0X3E);
    // 0x8022F61C: jal         0x80231878
    // 0x8022F620: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    func_80231878_ovl16(rdram, ctx);
        goto after_16;
    // 0x8022F620: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    after_16:
    // 0x8022F624: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022F628: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8022F62C: lhu         $v0, 0x10($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X10);
    // 0x8022F630: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8022F634: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x8022F638: addiu       $v0, $v0, 0x3E
    ctx->r2 = ADD32(ctx->r2, 0X3E);
    // 0x8022F63C: jal         0x80231878
    // 0x8022F640: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    func_80231878_ovl16(rdram, ctx);
        goto after_17;
    // 0x8022F640: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    after_17:
    // 0x8022F644: jal         0x80047B3C
    // 0x8022F648: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80047B3C_22F3C(rdram, ctx);
        goto after_18;
    // 0x8022F648: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_18:
    // 0x8022F64C: lbu         $v0, 0x5($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5);
    // 0x8022F650: beq         $v0, $zero, L_8022F664
    if (ctx->r2 == 0) {
        // 0x8022F654: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022F664;
    }
    // 0x8022F654: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022F658: jal         0x8006036C
    // 0x8022F65C: addiu       $a0, $zero, 0x60C
    ctx->r4 = ADD32(0, 0X60C);
    func_8006036C_3B76C(rdram, ctx);
        goto after_19;
    // 0x8022F65C: addiu       $a0, $zero, 0x60C
    ctx->r4 = ADD32(0, 0X60C);
    after_19:
    // 0x8022F660: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8022F664:
    // 0x8022F664: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x8022F668: addiu       $a0, $zero, 0x114
    ctx->r4 = ADD32(0, 0X114);
    // 0x8022F66C: jal         0x8002A33C
    // 0x8022F670: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_20;
    // 0x8022F670: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_20:
L_8022F674:
    // 0x8022F674: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8022F678: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8022F67C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022F680: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022F684: jr          $ra
    // 0x8022F688: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022F688: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80226B34_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226B34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226B38: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80226B3C: jal         0x8004F418
    // 0x80226B40: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x80226B40: nop

    after_0:
    // 0x80226B44: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80226B48: jr          $ra
    // 0x80226B4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226B4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80231324_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231324: lw          $v1, 0x44($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X44);
    // 0x80231328: lw          $a1, 0x2C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X2C);
    // 0x8023132C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80231330: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80231334: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80231338: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8023133C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80231340: sw          $a1, 0x5088($at)
    MEM_W(0X5088, ctx->r1) = ctx->r5;
    // 0x80231344: jr          $ra
    // 0x80231348: sb          $zero, 0x8($a0)
    MEM_B(0X8, ctx->r4) = 0;
    TRACE_RETURN()
    return;
    // 0x80231348: sb          $zero, 0x8($a0)
    MEM_B(0X8, ctx->r4) = 0;
;}
RECOMP_FUNC void func_802272A0_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802272A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802272A4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802272A8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802272AC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x802272B0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802272B4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802272B8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802272BC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802272C0: jal         0x8009A3B4
    // 0x802272C4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802272C4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x802272C8: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x802272CC: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x802272D0: jal         0x8009A3B4
    // 0x802272D4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802272D4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x802272D8: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x802272DC: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x802272E0: jal         0x8009A3B4
    // 0x802272E4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x802272E4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x802272E8: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x802272EC: jal         0x800A3450
    // 0x802272F0: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x802272F0: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_3:
    // 0x802272F4: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x802272F8: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x802272FC: sh          $v0, 0x1DA($s0)
    MEM_H(0X1DA, ctx->r16) = ctx->r2;
    // 0x80227300: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80227304: bne         $v1, $v0, L_80227324
    if (ctx->r3 != ctx->r2) {
        // 0x80227308: addiu       $s1, $s0, 0x64
        ctx->r17 = ADD32(ctx->r16, 0X64);
            goto L_80227324;
    }
    // 0x80227308: addiu       $s1, $s0, 0x64
    ctx->r17 = ADD32(ctx->r16, 0X64);
    // 0x8022730C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80227310: beq         $v0, $zero, L_8022732C
    if (ctx->r2 == 0) {
        // 0x80227314: sll         $v0, $v0, 2
        ctx->r2 = S32(ctx->r2 << 2);
            goto L_8022732C;
    }
    // 0x80227314: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227318: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022731C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80227320: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_80227324:
    // 0x80227324: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80227328: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_8022732C:
    // 0x8022732C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227330: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227334: lw          $v0, 0x40CC($at)
    ctx->r2 = MEM_W(ctx->r1, 0X40CC);
    // 0x80227338: jalr        $v0
    // 0x8022733C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x8022733C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80227340: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80227344: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80227348: bnel        $v1, $v0, L_80227400
    if (ctx->r3 != ctx->r2) {
        // 0x8022734C: sw          $zero, 0x8($s2)
        MEM_W(0X8, ctx->r18) = 0;
            goto L_80227400;
    }
    goto skip_0;
    // 0x8022734C: sw          $zero, 0x8($s2)
    MEM_W(0X8, ctx->r18) = 0;
    skip_0:
    // 0x80227350: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80227354: beq         $v0, $zero, L_802273D8
    if (ctx->r2 == 0) {
        // 0x80227358: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802273D8;
    }
    // 0x80227358: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022735C: lb          $v0, 0x3($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X3);
    // 0x80227360: beq         $v0, $zero, L_8022738C
    if (ctx->r2 == 0) {
        // 0x80227364: nop
    
            goto L_8022738C;
    }
    // 0x80227364: nop

    // 0x80227368: lb          $v0, 0x0($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X0);
    // 0x8022736C: bne         $v0, $zero, L_80227380
    if (ctx->r2 != 0) {
        // 0x80227370: addiu       $a0, $zero, 0x190
        ctx->r4 = ADD32(0, 0X190);
            goto L_80227380;
    }
    // 0x80227370: addiu       $a0, $zero, 0x190
    ctx->r4 = ADD32(0, 0X190);
    // 0x80227374: jal         0x8002A33C
    // 0x80227378: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_5;
    // 0x80227378: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_5:
    // 0x8022737C: sb          $zero, 0x3($s1)
    MEM_B(0X3, ctx->r17) = 0;
L_80227380:
    // 0x80227380: lb          $v0, 0x3($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X3);
    // 0x80227384: bne         $v0, $zero, L_802273A8
    if (ctx->r2 != 0) {
        // 0x80227388: nop
    
            goto L_802273A8;
    }
    // 0x80227388: nop

L_8022738C:
    // 0x8022738C: lb          $v0, 0x0($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X0);
    // 0x80227390: blez        $v0, L_802273A8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80227394: addiu       $a0, $zero, 0x191
        ctx->r4 = ADD32(0, 0X191);
            goto L_802273A8;
    }
    // 0x80227394: addiu       $a0, $zero, 0x191
    ctx->r4 = ADD32(0, 0X191);
    // 0x80227398: jal         0x8002A33C
    // 0x8022739C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_6;
    // 0x8022739C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_6:
    // 0x802273A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802273A4: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
L_802273A8:
    // 0x802273A8: lh          $v0, 0x15E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X15E);
    // 0x802273AC: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x802273B0: beq         $v0, $zero, L_802273D0
    if (ctx->r2 == 0) {
        // 0x802273B4: nop
    
            goto L_802273D0;
    }
    // 0x802273B4: nop

    // 0x802273B8: lb          $v0, 0x2($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X2);
    // 0x802273BC: bne         $v0, $zero, L_802273D0
    if (ctx->r2 != 0) {
        // 0x802273C0: nop
    
            goto L_802273D0;
    }
    // 0x802273C0: nop

    // 0x802273C4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802273C8: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x802273CC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_802273D0:
    // 0x802273D0: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x802273D4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_802273D8:
    // 0x802273D8: bnel        $v1, $v0, L_80227400
    if (ctx->r3 != ctx->r2) {
        // 0x802273DC: sw          $zero, 0x8($s2)
        MEM_W(0X8, ctx->r18) = 0;
            goto L_80227400;
    }
    goto skip_1;
    // 0x802273DC: sw          $zero, 0x8($s2)
    MEM_W(0X8, ctx->r18) = 0;
    skip_1:
    // 0x802273E0: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
    // 0x802273E4: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x802273E8: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x802273EC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802273F0: beq         $v0, $zero, L_802273FC
    if (ctx->r2 == 0) {
        // 0x802273F4: addiu       $v0, $zero, 0x7FFF
        ctx->r2 = ADD32(0, 0X7FFF);
            goto L_802273FC;
    }
    // 0x802273F4: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x802273F8: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
L_802273FC:
    // 0x802273FC: sw          $zero, 0x8($s2)
    MEM_W(0X8, ctx->r18) = 0;
L_80227400:
    // 0x80227400: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80227404: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80227408: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022740C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227410: jr          $ra
    // 0x80227414: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227414: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80228C7C_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228C7C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80228C80: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80228C84: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228C88: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80228C8C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80228C90: lh          $a3, 0x382($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X382);
    // 0x80228C94: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80228C98: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80228C9C: jal         0x8004F820
    // 0x80228CA0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80228CA0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x80228CA4: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80228CA8: lb          $a0, 0xA7($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XA7);
    // 0x80228CAC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80228CB0: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80228CB4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80228CB8: bne         $a0, $v0, L_80228CC4
    if (ctx->r4 != ctx->r2) {
        // 0x80228CBC: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80228CC4;
    }
    // 0x80228CBC: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80228CC0: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_80228CC4:
    // 0x80228CC4: lbu         $v0, 0x64($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X64);
    // 0x80228CC8: lbu         $v1, 0x65($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X65);
    // 0x80228CCC: lbu         $a0, 0x66($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X66);
    // 0x80228CD0: lbu         $a1, 0x66($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X66);
    // 0x80228CD4: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x80228CD8: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x80228CDC: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x80228CE0: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x80228CE4: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80228CE8: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    // 0x80228CEC: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x80228CF0: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80228CF4: lhu         $a0, 0x15E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X15E);
    // 0x80228CF8: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80228CFC: sb          $a1, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r5;
    // 0x80228D00: lb          $v1, 0x66($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X66);
    // 0x80228D04: addiu       $v0, $zero, -0x8000
    ctx->r2 = ADD32(0, -0X8000);
    // 0x80228D08: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x80228D0C: slti        $v1, $v1, 0x10
    ctx->r3 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x80228D10: bne         $v1, $zero, L_80228D4C
    if (ctx->r3 != 0) {
        // 0x80228D14: sh          $v0, 0x15E($s0)
        MEM_H(0X15E, ctx->r16) = ctx->r2;
            goto L_80228D4C;
    }
    // 0x80228D14: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80228D18: lb          $v1, 0x64($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X64);
    // 0x80228D1C: andi        $v0, $v0, 0x7FFF
    ctx->r2 = ctx->r2 & 0X7FFF;
    // 0x80228D20: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80228D24: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80228D28: sb          $v0, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r2;
    // 0x80228D2C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80228D30: beq         $v1, $v0, L_80228D4C
    if (ctx->r3 == ctx->r2) {
        // 0x80228D34: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_80228D4C;
    }
    // 0x80228D34: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x80228D38: lbu         $v0, 0x65($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X65);
    // 0x80228D3C: addiu       $v1, $a0, 0x4
    ctx->r3 = ADD32(ctx->r4, 0X4);
    // 0x80228D40: sb          $v1, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r3;
    // 0x80228D44: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80228D48: sb          $v0, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r2;
L_80228D4C:
    // 0x80228D4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80228D50: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80228D54: jr          $ra
    // 0x80228D58: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80228D58: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022EFC8_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EFC8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022EFCC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022EFD0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022EFD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022EFD8: addiu       $a0, $zero, 0x179
    ctx->r4 = ADD32(0, 0X179);
    // 0x8022EFDC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022EFE0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022EFE4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022EFE8: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x8022EFEC: jal         0x8002A33C
    // 0x8022EFF0: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8022EFF0: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    after_0:
    // 0x8022EFF4: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022EFF8: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x8022EFFC: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8022F000: addiu       $s1, $s1, 0x47B8
    ctx->r17 = ADD32(ctx->r17, 0X47B8);
    // 0x8022F004: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x8022F008: bnel        $v1, $v0, L_8022F03C
    if (ctx->r3 != ctx->r2) {
        // 0x8022F00C: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_8022F03C;
    }
    goto skip_0;
    // 0x8022F00C: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    skip_0:
    // 0x8022F010: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8022F014: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022F018: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x8022F01C: addiu       $v0, $zero, 0xBEC
    ctx->r2 = ADD32(0, 0XBEC);
    // 0x8022F020: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022F024: sh          $v0, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = ctx->r2;
    // 0x8022F028: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022F02C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022F030: sh          $v0, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = ctx->r2;
    // 0x8022F034: j           L_8022F0F8
    // 0x8022F038: addiu       $v0, $zero, 0x13FD
    ctx->r2 = ADD32(0, 0X13FD);
        goto L_8022F0F8;
    // 0x8022F038: addiu       $v0, $zero, 0x13FD
    ctx->r2 = ADD32(0, 0X13FD);
L_8022F03C:
    // 0x8022F03C: bne         $v1, $v0, L_8022F078
    if (ctx->r3 != ctx->r2) {
        // 0x8022F040: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_8022F078;
    }
    // 0x8022F040: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8022F044: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022F048: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x8022F04C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022F050: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022F054: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x8022F058: addiu       $v0, $zero, -0x200
    ctx->r2 = ADD32(0, -0X200);
    // 0x8022F05C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022F060: sh          $v0, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = ctx->r2;
    // 0x8022F064: addiu       $v0, $zero, -0x101
    ctx->r2 = ADD32(0, -0X101);
    // 0x8022F068: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022F06C: sh          $v0, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = ctx->r2;
    // 0x8022F070: j           L_8022F100
    // 0x8022F074: addiu       $v0, $zero, -0x271
    ctx->r2 = ADD32(0, -0X271);
        goto L_8022F100;
    // 0x8022F074: addiu       $v0, $zero, -0x271
    ctx->r2 = ADD32(0, -0X271);
L_8022F078:
    // 0x8022F078: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8022F07C: lb          $v0, -0x3B9D($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3B9D);
    // 0x8022F080: beq         $v0, $zero, L_8022F0D0
    if (ctx->r2 == 0) {
        // 0x8022F084: addiu       $v0, $zero, 0x13
        ctx->r2 = ADD32(0, 0X13);
            goto L_8022F0D0;
    }
    // 0x8022F084: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x8022F088: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022F08C: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x8022F090: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8022F094: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022F098: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x8022F09C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022F0A0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022F0A4: sh          $v0, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = ctx->r2;
    // 0x8022F0A8: addiu       $v0, $zero, -0x1C0
    ctx->r2 = ADD32(0, -0X1C0);
    // 0x8022F0AC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022F0B0: sh          $v0, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = ctx->r2;
    // 0x8022F0B4: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8022F0B8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022F0BC: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x8022F0C0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022F0C4: sh          $v0, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = ctx->r2;
    // 0x8022F0C8: j           L_8022F114
    // 0x8022F0CC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
        goto L_8022F114;
    // 0x8022F0CC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_8022F0D0:
    // 0x8022F0D0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022F0D4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022F0D8: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x8022F0DC: addiu       $v0, $zero, -0x1A00
    ctx->r2 = ADD32(0, -0X1A00);
    // 0x8022F0E0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022F0E4: sh          $v0, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = ctx->r2;
    // 0x8022F0E8: addiu       $v0, $zero, -0x601
    ctx->r2 = ADD32(0, -0X601);
    // 0x8022F0EC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022F0F0: sh          $v0, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = ctx->r2;
    // 0x8022F0F4: addiu       $v0, $zero, 0x17E0
    ctx->r2 = ADD32(0, 0X17E0);
L_8022F0F8:
    // 0x8022F0F8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022F0FC: sb          $zero, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = 0;
L_8022F100:
    // 0x8022F100: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022F104: sh          $v0, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = ctx->r2;
    // 0x8022F108: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022F10C: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x8022F110: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_8022F114:
    // 0x8022F114: sb          $v0, 0x19($s1)
    MEM_B(0X19, ctx->r17) = ctx->r2;
    // 0x8022F118: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022F11C: sb          $zero, 0x15($s1)
    MEM_B(0X15, ctx->r17) = 0;
    // 0x8022F120: sb          $v0, 0x18($s1)
    MEM_B(0X18, ctx->r17) = ctx->r2;
    // 0x8022F124: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022F128: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022F12C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022F130: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022F134: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022F138: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F13C: jr          $ra
    // 0x8022F140: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022F140: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022CE48_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CE48: jr          $ra
    // 0x8022CE4C: nop

    TRACE_RETURN()
    return;
    // 0x8022CE4C: nop

;}
RECOMP_FUNC void func_8022E848_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E848: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E84C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022E850: jal         0x8004F684
    // 0x8022E854: nop

    func_8004F684_2AA84(rdram, ctx);
        goto after_0;
    // 0x8022E854: nop

    after_0:
    // 0x8022E858: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022E85C: jr          $ra
    // 0x8022E860: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E860: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227F98_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227F98: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227F9C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80227FA0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227FA4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80227FA8: lw          $v0, 0xC4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC4);
    // 0x80227FAC: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x80227FB0: beq         $v0, $zero, L_80228010
    if (ctx->r2 == 0) {
        // 0x80227FB4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80228010;
    }
    // 0x80227FB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227FB8: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80227FBC: lh          $a0, 0x56($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X56);
    // 0x80227FC0: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80227FC4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80227FC8: sh          $v0, 0x380($s0)
    MEM_H(0X380, ctx->r16) = ctx->r2;
    // 0x80227FCC: lh          $v0, 0x380($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X380);
    // 0x80227FD0: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x80227FD4: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80227FD8: beq         $v0, $zero, L_80227FE8
    if (ctx->r2 == 0) {
        // 0x80227FDC: sb          $v1, 0xA($s0)
        MEM_B(0XA, ctx->r16) = ctx->r3;
            goto L_80227FE8;
    }
    // 0x80227FDC: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x80227FE0: j           L_80227FEC
    // 0x80227FE4: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
        goto L_80227FEC;
    // 0x80227FE4: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
L_80227FE8:
    // 0x80227FE8: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
L_80227FEC:
    // 0x80227FEC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227FF0: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80227FF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227FF8: jal         0x80050294
    // 0x80227FFC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80227FFC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80228000: jal         0x80228224
    // 0x80228004: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80228224_ovl16(rdram, ctx);
        goto after_1;
    // 0x80228004: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80228008: j           L_802280C4
    // 0x8022800C: nop

        goto L_802280C4;
    // 0x8022800C: nop

L_80228010:
    // 0x80228010: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80228014: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80228018: jal         0x8004DA90
    // 0x8022801C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8022801C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x80228020: lb          $v0, 0x385($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X385);
    // 0x80228024: bne         $v0, $zero, L_802280BC
    if (ctx->r2 != 0) {
        // 0x80228028: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_802280BC;
    }
    // 0x80228028: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022802C: lb          $v1, 0xA6($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA6);
    // 0x80228030: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228034: bne         $v1, $v0, L_802280C4
    if (ctx->r3 != ctx->r2) {
        // 0x80228038: nop
    
            goto L_802280C4;
    }
    // 0x80228038: nop

    // 0x8022803C: lhu         $v0, 0x1DA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1DA);
    // 0x80228040: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80228044: bne         $v0, $zero, L_80228080
    if (ctx->r2 != 0) {
        // 0x80228048: addiu       $a0, $s0, 0x378
        ctx->r4 = ADD32(ctx->r16, 0X378);
            goto L_80228080;
    }
    // 0x80228048: addiu       $a0, $s0, 0x378
    ctx->r4 = ADD32(ctx->r16, 0X378);
    // 0x8022804C: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x80228050: bne         $v0, $zero, L_80228064
    if (ctx->r2 != 0) {
        // 0x80228054: nop
    
            goto L_80228064;
    }
    // 0x80228054: nop

    // 0x80228058: lbu         $v0, 0x384($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X384);
    // 0x8022805C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228060: sb          $v0, 0x384($s0)
    MEM_B(0X384, ctx->r16) = ctx->r2;
L_80228064:
    // 0x80228064: lbu         $v0, 0x384($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X384);
    // 0x80228068: beq         $v0, $v1, L_8022807C
    if (ctx->r2 == ctx->r3) {
        // 0x8022806C: addiu       $v0, $zero, 0x78
        ctx->r2 = ADD32(0, 0X78);
            goto L_8022807C;
    }
    // 0x8022806C: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x80228070: sb          $v0, 0x385($s0)
    MEM_B(0X385, ctx->r16) = ctx->r2;
    // 0x80228074: j           L_802280C4
    // 0x80228078: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
        goto L_802280C4;
    // 0x80228078: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
L_8022807C:
    // 0x8022807C: addiu       $a0, $s0, 0x378
    ctx->r4 = ADD32(ctx->r16, 0X378);
L_80228080:
    // 0x80228080: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80228084: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80228088: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8022808C: addiu       $v0, $zero, -0x80
    ctx->r2 = ADD32(0, -0X80);
    // 0x80228090: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x80228094: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80228098: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x8022809C: jal         0x8009A3B4
    // 0x802280A0: sb          $v1, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x802280A0: sb          $v1, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r3;
    after_3:
    // 0x802280A4: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802280A8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x802280AC: sb          $v0, 0x385($s0)
    MEM_B(0X385, ctx->r16) = ctx->r2;
    // 0x802280B0: sb          $zero, 0x384($s0)
    MEM_B(0X384, ctx->r16) = 0;
    // 0x802280B4: j           L_802280C4
    // 0x802280B8: sh          $v1, 0x380($s0)
    MEM_H(0X380, ctx->r16) = ctx->r3;
        goto L_802280C4;
    // 0x802280B8: sh          $v1, 0x380($s0)
    MEM_H(0X380, ctx->r16) = ctx->r3;
L_802280BC:
    // 0x802280BC: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x802280C0: sb          $v0, 0x385($s0)
    MEM_B(0X385, ctx->r16) = ctx->r2;
L_802280C4:
    // 0x802280C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802280C8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802280CC: jr          $ra
    // 0x802280D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802280D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022C024_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C024: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022C028: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022C02C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C030: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022C034: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022C038: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022C03C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022C040: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x8022C044: jal         0x8004D5D4
    // 0x8022C048: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022C048: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022C04C: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022C050: addiu       $v0, $v0, 0x4270
    ctx->r2 = ADD32(ctx->r2, 0X4270);
    // 0x8022C054: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x8022C058: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C05C: sb          $v0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r2;
    // 0x8022C060: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x8022C064: jal         0x800A3450
    // 0x8022C068: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x8022C068: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    after_1:
    // 0x8022C06C: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x8022C070: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x8022C074: addiu       $s1, $s0, 0xD0
    ctx->r17 = ADD32(ctx->r16, 0XD0);
    // 0x8022C078: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022C07C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022C080: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022C084: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022C088: lui         $v0, 0x200
    ctx->r2 = S32(0X200 << 16);
    // 0x8022C08C: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    // 0x8022C090: sw          $v1, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r3;
    // 0x8022C094: jal         0x800540BC
    // 0x8022C098: sw          $v0, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r2;
    func_800540BC_2F4BC(rdram, ctx);
        goto after_2;
    // 0x8022C098: sw          $v0, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r2;
    after_2:
    // 0x8022C09C: sw          $zero, 0xF0($s0)
    MEM_W(0XF0, ctx->r16) = 0;
    // 0x8022C0A0: jal         0x800A3450
    // 0x8022C0A4: sw          $zero, 0xEC($s0)
    MEM_W(0XEC, ctx->r16) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x8022C0A4: sw          $zero, 0xEC($s0)
    MEM_W(0XEC, ctx->r16) = 0;
    after_3:
    // 0x8022C0A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C0AC: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022C0B0: jal         0x8003E934
    // 0x8022C0B4: sh          $v0, 0xE0($s0)
    MEM_H(0XE0, ctx->r16) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_4;
    // 0x8022C0B4: sh          $v0, 0xE0($s0)
    MEM_H(0XE0, ctx->r16) = ctx->r2;
    after_4:
    // 0x8022C0B8: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8022C0BC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022C0C0: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x8022C0C4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022C0C8: addiu       $v0, $v0, -0x82
    ctx->r2 = ADD32(ctx->r2, -0X82);
    // 0x8022C0CC: sh          $a0, 0xE2($s0)
    MEM_H(0XE2, ctx->r16) = ctx->r4;
    // 0x8022C0D0: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022C0D4: beq         $v0, $zero, L_8022C0EC
    if (ctx->r2 == 0) {
        // 0x8022C0D8: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_8022C0EC;
    }
    // 0x8022C0D8: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x8022C0DC: addiu       $v0, $a0, -0x82
    ctx->r2 = ADD32(ctx->r4, -0X82);
    // 0x8022C0E0: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022C0E4: j           L_8022C0F0
    // 0x8022C0E8: addiu       $v0, $zero, 0x82
    ctx->r2 = ADD32(0, 0X82);
        goto L_8022C0F0;
    // 0x8022C0E8: addiu       $v0, $zero, 0x82
    ctx->r2 = ADD32(0, 0X82);
L_8022C0EC:
    // 0x8022C0EC: subu        $v0, $a1, $a0
    ctx->r2 = SUB32(ctx->r5, ctx->r4);
L_8022C0F0:
    // 0x8022C0F0: sh          $v0, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r2;
    // 0x8022C0F4: addiu       $v0, $zero, -0x82
    ctx->r2 = ADD32(0, -0X82);
    // 0x8022C0F8: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x8022C0FC: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022C100: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022C104: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022C108: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022C10C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022C110: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022C114: jr          $ra
    // 0x8022C118: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022C118: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022C11C_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C11C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022C120: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022C124: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C128: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022C12C: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x8022C130: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C134: bne         $v1, $v0, L_8022C174
    if (ctx->r3 != ctx->r2) {
        // 0x8022C138: lui         $v0, 0x2FF
        ctx->r2 = S32(0X2FF << 16);
            goto L_8022C174;
    }
    // 0x8022C138: lui         $v0, 0x2FF
    ctx->r2 = S32(0X2FF << 16);
    // 0x8022C13C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022C140: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022C144: lh          $a2, 0x66($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X66);
    // 0x8022C148: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022C14C: lhu         $v1, 0x54($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X54);
    // 0x8022C150: addiu       $a3, $zero, 0x200
    ctx->r7 = ADD32(0, 0X200);
    // 0x8022C154: addiu       $v0, $v0, 0x190
    ctx->r2 = ADD32(ctx->r2, 0X190);
    // 0x8022C158: addiu       $v1, $v1, 0x190
    ctx->r3 = ADD32(ctx->r3, 0X190);
    // 0x8022C15C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022C160: sh          $v1, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r3;
    // 0x8022C164: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8022C168: jal         0x8004DBA0
    // 0x8022C16C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_0;
    // 0x8022C16C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_0:
    // 0x8022C170: lui         $v0, 0x2FF
    ctx->r2 = S32(0X2FF << 16);
L_8022C174:
    // 0x8022C174: lw          $v1, 0xE8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XE8);
    // 0x8022C178: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8022C17C: lui         $a0, 0x33
    ctx->r4 = S32(0X33 << 16);
    // 0x8022C180: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022C184: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022C188: beq         $v0, $zero, L_8022C1DC
    if (ctx->r2 == 0) {
        // 0x8022C18C: sw          $v1, 0xE8($s0)
        MEM_W(0XE8, ctx->r16) = ctx->r3;
            goto L_8022C1DC;
    }
    // 0x8022C18C: sw          $v1, 0xE8($s0)
    MEM_W(0XE8, ctx->r16) = ctx->r3;
    // 0x8022C190: jal         0x8004F144
    // 0x8022C194: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_1;
    // 0x8022C194: nop

    after_1:
    // 0x8022C198: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022C19C: beq         $v1, $zero, L_8022C1C8
    if (ctx->r3 == 0) {
        // 0x8022C1A0: addiu       $a1, $s0, 0x14
        ctx->r5 = ADD32(ctx->r16, 0X14);
            goto L_8022C1C8;
    }
    // 0x8022C1A0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022C1A4: addiu       $a0, $v1, 0x38
    ctx->r4 = ADD32(ctx->r3, 0X38);
    // 0x8022C1A8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022C1AC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022C1B0: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022C1B4: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022C1B8: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8022C1BC: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
    // 0x8022C1C0: jal         0x8009A3B4
    // 0x8022C1C4: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022C1C4: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    after_2:
L_8022C1C8:
    // 0x8022C1C8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022C1CC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022C1D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C1D4: jal         0x8007A1B8
    // 0x8022C1D8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8007A1B8_555B8(rdram, ctx);
        goto after_3;
    // 0x8022C1D8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_3:
L_8022C1DC:
    // 0x8022C1DC: jal         0x80040F30
    // 0x8022C1E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_4;
    // 0x8022C1E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022C1E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022C1E8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022C1EC: jr          $ra
    // 0x8022C1F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022C1F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022C528_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C528: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C52C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022C530: jal         0x8004F418
    // 0x8022C534: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8022C534: nop

    after_0:
    // 0x8022C538: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022C53C: jr          $ra
    // 0x8022C540: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C540: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022C544: nop

    // 0x8022C548: nop

    // 0x8022C54C: nop

;}
RECOMP_FUNC void func_8022FB84_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FB84: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022FB88: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022FB8C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022FB90: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022FB94: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022FB98: lbu         $v1, 0x5($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X5);
    // 0x8022FB9C: bne         $v1, $zero, L_8022FBC8
    if (ctx->r3 != 0) {
        // 0x8022FBA0: addiu       $s1, $s0, 0x2C
        ctx->r17 = ADD32(ctx->r16, 0X2C);
            goto L_8022FBC8;
    }
    // 0x8022FBA0: addiu       $s1, $s0, 0x2C
    ctx->r17 = ADD32(ctx->r16, 0X2C);
    // 0x8022FBA4: jal         0x8006033C
    // 0x8022FBA8: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8022FBA8: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
    after_0:
    // 0x8022FBAC: bnel        $v0, $zero, L_8022FC20
    if (ctx->r2 != 0) {
        // 0x8022FBB0: addiu       $a0, $zero, 0x605
        ctx->r4 = ADD32(0, 0X605);
            goto L_8022FC20;
    }
    goto skip_0;
    // 0x8022FBB0: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
    skip_0:
    // 0x8022FBB4: addiu       $a0, $zero, 0x11E
    ctx->r4 = ADD32(0, 0X11E);
    // 0x8022FBB8: jal         0x8002A33C
    // 0x8022FBBC: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x8022FBBC: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    after_1:
    // 0x8022FBC0: j           L_8022FC20
    // 0x8022FBC4: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
        goto L_8022FC20;
    // 0x8022FBC4: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
L_8022FBC8:
    // 0x8022FBC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022FBCC: bne         $v1, $v0, L_8022FBF8
    if (ctx->r3 != ctx->r2) {
        // 0x8022FBD0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022FBF8;
    }
    // 0x8022FBD0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022FBD4: jal         0x8006033C
    // 0x8022FBD8: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x8022FBD8: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    after_2:
    // 0x8022FBDC: bnel        $v0, $zero, L_8022FC20
    if (ctx->r2 != 0) {
        // 0x8022FBE0: addiu       $a0, $zero, 0x606
        ctx->r4 = ADD32(0, 0X606);
            goto L_8022FC20;
    }
    goto skip_1;
    // 0x8022FBE0: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
    skip_1:
    // 0x8022FBE4: addiu       $a0, $zero, 0x11E
    ctx->r4 = ADD32(0, 0X11E);
    // 0x8022FBE8: jal         0x8002A33C
    // 0x8022FBEC: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x8022FBEC: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    after_3:
    // 0x8022FBF0: j           L_8022FC20
    // 0x8022FBF4: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
        goto L_8022FC20;
    // 0x8022FBF4: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
L_8022FBF8:
    // 0x8022FBF8: bne         $v1, $v0, L_8022FC2C
    if (ctx->r3 != ctx->r2) {
        // 0x8022FBFC: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_8022FC2C;
    }
    // 0x8022FBFC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022FC00: jal         0x8006033C
    // 0x8022FC04: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
    func_8006033C_3B73C(rdram, ctx);
        goto after_4;
    // 0x8022FC04: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
    after_4:
    // 0x8022FC08: bne         $v0, $zero, L_8022FC20
    if (ctx->r2 != 0) {
        // 0x8022FC0C: addiu       $a0, $zero, 0x604
        ctx->r4 = ADD32(0, 0X604);
            goto L_8022FC20;
    }
    // 0x8022FC0C: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
    // 0x8022FC10: addiu       $a0, $zero, 0x11E
    ctx->r4 = ADD32(0, 0X11E);
    // 0x8022FC14: jal         0x8002A33C
    // 0x8022FC18: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_5;
    // 0x8022FC18: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    after_5:
    // 0x8022FC1C: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
L_8022FC20:
    // 0x8022FC20: jal         0x8006036C
    // 0x8022FC24: nop

    func_8006036C_3B76C(rdram, ctx);
        goto after_6;
    // 0x8022FC24: nop

    after_6:
    // 0x8022FC28: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_8022FC2C:
    // 0x8022FC2C: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x8022FC30: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022FC34: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022FC38: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022FC3C: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x8022FC40: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022FC44: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022FC48: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022FC4C: jr          $ra
    // 0x8022FC50: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022FC50: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022EB8C_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EB8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022EB90: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022EB94: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022EB98: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8022EB9C: addiu       $a0, $a0, -0x3BC8
    ctx->r4 = ADD32(ctx->r4, -0X3BC8);
    // 0x8022EBA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022EBA4: lb          $v0, 0x0($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X0);
    // 0x8022EBA8: xori        $v1, $v0, 0xE
    ctx->r3 = ctx->r2 ^ 0XE;
    // 0x8022EBAC: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8022EBB0: xori        $v0, $v0, 0x14
    ctx->r2 = ctx->r2 ^ 0X14;
    // 0x8022EBB4: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8022EBB8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022EBBC: bne         $v1, $zero, L_8022EBD8
    if (ctx->r3 != 0) {
        // 0x8022EBC0: lui         $v1, 0xFFFF
        ctx->r3 = S32(0XFFFF << 16);
            goto L_8022EBD8;
    }
    // 0x8022EBC0: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x8022EBC4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8022EBC8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022EBCC: lui         $v1, 0x1300
    ctx->r3 = S32(0X1300 << 16);
    // 0x8022EBD0: bne         $v0, $v1, L_8022EC24
    if (ctx->r2 != ctx->r3) {
        // 0x8022EBD4: nop
    
            goto L_8022EC24;
    }
    // 0x8022EBD4: nop

L_8022EBD8:
    // 0x8022EBD8: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x8022EBDC: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8022EBE0: beq         $v1, $v0, L_8022EC10
    if (ctx->r3 == ctx->r2) {
        // 0x8022EBE4: nop
    
            goto L_8022EC10;
    }
    // 0x8022EBE4: nop

    // 0x8022EBE8: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x8022EBEC: lbu         $a0, 0xD($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XD);
    // 0x8022EBF0: lhu         $v1, 0x3A($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X3A);
    // 0x8022EBF4: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022EBF8: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022EBFC: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x8022EC00: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022EC04: sh          $v1, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r3;
    // 0x8022EC08: j           L_8022ED34
    // 0x8022EC0C: sb          $a0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r4;
        goto L_8022ED34;
    // 0x8022EC0C: sb          $a0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r4;
L_8022EC10:
    // 0x8022EC10: jal         0x80036E48
    // 0x8022EC14: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80036E48_12248(rdram, ctx);
        goto after_0;
    // 0x8022EC14: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_0:
    // 0x8022EC18: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022EC1C: j           L_8022ED34
    // 0x8022EC20: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022ED34;
    // 0x8022EC20: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022EC24:
    // 0x8022EC24: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x8022EC28: lhu         $a0, 0x3A($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X3A);
    // 0x8022EC2C: lbu         $v1, 0x5($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X5);
    // 0x8022EC30: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022EC34: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022EC38: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8022EC3C: andi        $v1, $v1, 0xF0
    ctx->r3 = ctx->r3 & 0XF0;
    // 0x8022EC40: bne         $v1, $zero, L_8022ECD0
    if (ctx->r3 != 0) {
        // 0x8022EC44: sh          $a0, 0x3A($s0)
        MEM_H(0X3A, ctx->r16) = ctx->r4;
            goto L_8022ECD0;
    }
    // 0x8022EC44: sh          $a0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r4;
    // 0x8022EC48: lw          $v1, 0x2C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X2C);
    // 0x8022EC4C: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x8022EC50: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022EC54: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022EC58: bltzl       $v0, L_8022EC60
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022EC5C: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_8022EC60;
    }
    goto skip_0;
    // 0x8022EC5C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_0:
L_8022EC60:
    // 0x8022EC60: slti        $v0, $v0, 0x2E0
    ctx->r2 = SIGNED(ctx->r2) < 0X2E0 ? 1 : 0;
    // 0x8022EC64: bne         $v0, $zero, L_8022ED34
    if (ctx->r2 != 0) {
        // 0x8022EC68: addiu       $v0, $v1, -0x2E0
        ctx->r2 = ADD32(ctx->r3, -0X2E0);
            goto L_8022ED34;
    }
    // 0x8022EC68: addiu       $v0, $v1, -0x2E0
    ctx->r2 = ADD32(ctx->r3, -0X2E0);
    // 0x8022EC6C: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    // 0x8022EC70: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022EC74: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022EC78: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x8022EC7C: addiu       $a0, $zero, 0x179
    ctx->r4 = ADD32(0, 0X179);
    // 0x8022EC80: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    // 0x8022EC84: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x8022EC88: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022EC8C: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
    // 0x8022EC90: jal         0x8002A33C
    // 0x8022EC94: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x8022EC94: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    after_1:
    // 0x8022EC98: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8022EC9C: lbu         $v1, 0xB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB);
    // 0x8022ECA0: andi        $v0, $v0, 0xF0
    ctx->r2 = ctx->r2 & 0XF0;
    // 0x8022ECA4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022ECA8: bne         $v1, $zero, L_8022ECC0
    if (ctx->r3 != 0) {
        // 0x8022ECAC: sb          $v0, 0x5($s0)
        MEM_B(0X5, ctx->r16) = ctx->r2;
            goto L_8022ECC0;
    }
    // 0x8022ECAC: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
    // 0x8022ECB0: lhu         $v0, 0x3A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X3A);
    // 0x8022ECB4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8022ECB8: j           L_8022ED34
    // 0x8022ECBC: sh          $v0, -0x3A82($at)
    MEM_H(-0X3A82, ctx->r1) = ctx->r2;
        goto L_8022ED34;
    // 0x8022ECBC: sh          $v0, -0x3A82($at)
    MEM_H(-0X3A82, ctx->r1) = ctx->r2;
L_8022ECC0:
    // 0x8022ECC0: lhu         $v0, 0x3A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X3A);
    // 0x8022ECC4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8022ECC8: j           L_8022ED34
    // 0x8022ECCC: sh          $v0, -0x3A80($at)
    MEM_H(-0X3A80, ctx->r1) = ctx->r2;
        goto L_8022ED34;
    // 0x8022ECCC: sh          $v0, -0x3A80($at)
    MEM_H(-0X3A80, ctx->r1) = ctx->r2;
L_8022ECD0:
    // 0x8022ECD0: lw          $v1, 0x2C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X2C);
    // 0x8022ECD4: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x8022ECD8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022ECDC: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022ECE0: bne         $v0, $zero, L_8022ED34
    if (ctx->r2 != 0) {
        // 0x8022ECE4: addiu       $v0, $a0, 0x10
        ctx->r2 = ADD32(ctx->r4, 0X10);
            goto L_8022ED34;
    }
    // 0x8022ECE4: addiu       $v0, $a0, 0x10
    ctx->r2 = ADD32(ctx->r4, 0X10);
    // 0x8022ECE8: subu        $v1, $a0, $v1
    ctx->r3 = SUB32(ctx->r4, ctx->r3);
    // 0x8022ECEC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022ECF0: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    // 0x8022ECF4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022ECF8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022ECFC: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x8022ED00: addiu       $a0, $zero, 0x179
    ctx->r4 = ADD32(0, 0X179);
    // 0x8022ED04: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    // 0x8022ED08: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x8022ED0C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022ED10: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
    // 0x8022ED14: jal         0x8002A33C
    // 0x8022ED18: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x8022ED18: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    after_2:
    // 0x8022ED1C: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8022ED20: andi        $v0, $v0, 0xF0
    ctx->r2 = ctx->r2 & 0XF0;
    // 0x8022ED24: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022ED28: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
    // 0x8022ED2C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8022ED30: sh          $zero, -0x3A7E($at)
    MEM_H(-0X3A7E, ctx->r1) = 0;
L_8022ED34:
    // 0x8022ED34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022ED38: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022ED3C: jr          $ra
    // 0x8022ED40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022ED40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225D00_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225D00: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80225D04: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225D08: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225D0C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80225D10: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80225D14: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80225D18: bne         $v0, $zero, L_80225D38
    if (ctx->r2 != 0) {
        // 0x80225D1C: addiu       $s1, $s0, 0x500
        ctx->r17 = ADD32(ctx->r16, 0X500);
            goto L_80225D38;
    }
    // 0x80225D1C: addiu       $s1, $s0, 0x500
    ctx->r17 = ADD32(ctx->r16, 0X500);
    // 0x80225D20: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80225D24: jal         0x80050294
    // 0x80225D28: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80225D28: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80225D2C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80225D30: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225D34: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80225D38:
    // 0x80225D38: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80225D3C: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x80225D40: addiu       $v0, $zero, 0x4B
    ctx->r2 = ADD32(0, 0X4B);
    // 0x80225D44: bne         $v1, $v0, L_80225D58
    if (ctx->r3 != ctx->r2) {
        // 0x80225D48: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80225D58;
    }
    // 0x80225D48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80225D4C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80225D50: jal         0x80225FD8
    // 0x80225D54: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80225FD8_ovl16(rdram, ctx);
        goto after_1;
    // 0x80225D54: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
L_80225D58:
    // 0x80225D58: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80225D5C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80225D60: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225D64: jr          $ra
    // 0x80225D68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80225D68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022CCFC_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CCFC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022CD00: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022CD04: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022CD08: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022CD0C: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8022CD10: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8022CD14: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022CD18: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8022CD1C: jal         0x8004DDE8
    // 0x8022CD20: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8004DDE8_291E8(rdram, ctx);
        goto after_0;
    // 0x8022CD20: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8022CD24: sltiu       $v0, $v0, 0x384
    ctx->r2 = ctx->r2 < 0X384 ? 1 : 0;
    // 0x8022CD28: beq         $v0, $zero, L_8022CDE0
    if (ctx->r2 == 0) {
        // 0x8022CD2C: addiu       $a0, $s0, 0x1C
        ctx->r4 = ADD32(ctx->r16, 0X1C);
            goto L_8022CDE0;
    }
    // 0x8022CD2C: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022CD30: lhu         $a1, 0x56($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X56);
    // 0x8022CD34: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8022CD38: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022CD3C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022CD40: lh          $v0, 0x4A06($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X4A06);
    // 0x8022CD44: addiu       $a2, $zero, 0x100
    ctx->r6 = ADD32(0, 0X100);
    // 0x8022CD48: addiu       $a3, $s1, 0x1C
    ctx->r7 = ADD32(ctx->r17, 0X1C);
    // 0x8022CD4C: addiu       $a1, $a1, 0x400
    ctx->r5 = ADD32(ctx->r5, 0X400);
    // 0x8022CD50: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8022CD54: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8022CD58: jal         0x8004FAEC
    // 0x8022CD5C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8004FAEC_2AEEC(rdram, ctx);
        goto after_1;
    // 0x8022CD5C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_1:
    // 0x8022CD60: beq         $v0, $zero, L_8022CDE0
    if (ctx->r2 == 0) {
        // 0x8022CD64: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022CDE0;
    }
    // 0x8022CD64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CD68: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x8022CD6C: bne         $v1, $zero, L_8022CDA8
    if (ctx->r3 != 0) {
        // 0x8022CD70: sb          $v0, 0x9($s0)
        MEM_B(0X9, ctx->r16) = ctx->r2;
            goto L_8022CDA8;
    }
    // 0x8022CD70: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022CD74: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x8022CD78: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x8022CD7C: addiu       $v0, $zero, -0x900
    ctx->r2 = ADD32(0, -0X900);
    // 0x8022CD80: sh          $v0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r2;
    // 0x8022CD84: addiu       $v0, $zero, -0x12B
    ctx->r2 = ADD32(0, -0X12B);
    // 0x8022CD88: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    // 0x8022CD8C: addiu       $v0, $zero, -0x2300
    ctx->r2 = ADD32(0, -0X2300);
    // 0x8022CD90: jal         0x8003E768
    // 0x8022CD94: sh          $v0, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r2;
    func_8003E768_19B68(rdram, ctx);
        goto after_2;
    // 0x8022CD94: sh          $v0, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r2;
    after_2:
    // 0x8022CD98: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022CD9C: lui         $a1, 0x6
    ctx->r5 = S32(0X6 << 16);
    // 0x8022CDA0: j           L_8022CDD8
    // 0x8022CDA4: ori         $a1, $a1, 0x302
    ctx->r5 = ctx->r5 | 0X302;
        goto L_8022CDD8;
    // 0x8022CDA4: ori         $a1, $a1, 0x302
    ctx->r5 = ctx->r5 | 0X302;
L_8022CDA8:
    // 0x8022CDA8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x8022CDAC: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x8022CDB0: addiu       $v0, $zero, -0x1700
    ctx->r2 = ADD32(0, -0X1700);
    // 0x8022CDB4: sh          $v0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r2;
    // 0x8022CDB8: addiu       $v0, $zero, -0x2AB
    ctx->r2 = ADD32(0, -0X2AB);
    // 0x8022CDBC: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    // 0x8022CDC0: addiu       $v0, $zero, -0x2300
    ctx->r2 = ADD32(0, -0X2300);
    // 0x8022CDC4: jal         0x8003E768
    // 0x8022CDC8: sh          $v0, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r2;
    func_8003E768_19B68(rdram, ctx);
        goto after_3;
    // 0x8022CDC8: sh          $v0, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r2;
    after_3:
    // 0x8022CDCC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022CDD0: lui         $a1, 0x6
    ctx->r5 = S32(0X6 << 16);
    // 0x8022CDD4: ori         $a1, $a1, 0x402
    ctx->r5 = ctx->r5 | 0X402;
L_8022CDD8:
    // 0x8022CDD8: jal         0x80071ACC
    // 0x8022CDDC: nop

    func_80071ACC_4CECC(rdram, ctx);
        goto after_4;
    // 0x8022CDDC: nop

    after_4:
L_8022CDE0:
    // 0x8022CDE0: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8022CDE4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022CDE8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022CDEC: jr          $ra
    // 0x8022CDF0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022CDF0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80232970_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232970: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x80232974: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x80232978: lhu         $v1, 0x14($a3)
    ctx->r3 = MEM_HU(ctx->r7, 0X14);
    // 0x8023297C: lbu         $a0, 0x0($a2)
    ctx->r4 = MEM_BU(ctx->r6, 0X0);
    // 0x80232980: lbu         $a1, 0x2($a2)
    ctx->r5 = MEM_BU(ctx->r6, 0X2);
    // 0x80232984: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x80232988: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x8023298C: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x80232990: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80232994: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x80232998: andi        $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 & 0XFFFF;
    // 0x8023299C: sltu        $v1, $v1, $a1
    ctx->r3 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x802329A0: beq         $v1, $zero, L_802329D0
    if (ctx->r3 == 0) {
        // 0x802329A4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_802329D0;
    }
    // 0x802329A4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x802329A8: lhu         $v0, 0x18($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X18);
    // 0x802329AC: lbu         $v1, 0x1($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X1);
    // 0x802329B0: lbu         $a0, 0x3($a2)
    ctx->r4 = MEM_BU(ctx->r6, 0X3);
    // 0x802329B4: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802329B8: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x802329BC: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x802329C0: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x802329C4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x802329C8: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x802329CC: sltu        $v0, $v0, $a0
    ctx->r2 = ctx->r2 < ctx->r4 ? 1 : 0;
L_802329D0:
    // 0x802329D0: jr          $ra
    // 0x802329D4: nop

    TRACE_RETURN()
    return;
    // 0x802329D4: nop

;}
RECOMP_FUNC void func_80225B10_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225B10: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80225B14: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225B18: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225B1C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80225B20: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80225B24: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80225B28: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225B2C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80225B30: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225B34: lw          $v0, 0x3F00($at)
    ctx->r2 = MEM_W(ctx->r1, 0X3F00);
    // 0x80225B38: jalr        $v0
    // 0x80225B3C: addiu       $s1, $s0, 0x500
    ctx->r17 = ADD32(ctx->r16, 0X500);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80225B3C: addiu       $s1, $s0, 0x500
    ctx->r17 = ADD32(ctx->r16, 0X500);
    after_0:
    // 0x80225B40: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x80225B44: bne         $v0, $zero, L_80225B58
    if (ctx->r2 != 0) {
        // 0x80225B48: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80225B58;
    }
    // 0x80225B48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80225B4C: jal         0x8005044C
    // 0x80225B50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x80225B50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80225B54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80225B58:
    // 0x80225B58: jal         0x8022601C
    // 0x80225B5C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8022601C_ovl16(rdram, ctx);
        goto after_2;
    // 0x80225B5C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x80225B60: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80225B64: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80225B68: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225B6C: jr          $ra
    // 0x80225B70: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80225B70: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80226368_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226368: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8022636C: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x80226370: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226374: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80226378: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x8022637C: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x80226380: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80226384: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80226388: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8022638C: sltiu       $v0, $v1, 0xB
    ctx->r2 = ctx->r3 < 0XB ? 1 : 0;
    // 0x80226390: beq         $v0, $zero, L_80226700
    if (ctx->r2 == 0) {
        // 0x80226394: addiu       $s2, $s0, 0x308
        ctx->r18 = ADD32(ctx->r16, 0X308);
            goto L_80226700;
    }
    // 0x80226394: addiu       $s2, $s0, 0x308
    ctx->r18 = ADD32(ctx->r16, 0X308);
    // 0x80226398: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022639C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802263A0: addu        $at, $at, $v0
    gpr jr_addend_802263A8 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802263A4: lw          $v0, 0x4B58($at)
    ctx->r2 = ADD32(ctx->r1, 0X4B58);
    // 0x802263A8: jr          $v0
    // 0x802263AC: nop

    switch (jr_addend_802263A8 >> 2) {
        case 0: goto L_802263B0; break;
        case 1: goto L_802263C4; break;
        case 2: goto L_80226410; break;
        case 3: goto L_8022643C; break;
        case 4: goto L_80226494; break;
        case 5: goto L_802264A0; break;
        case 6: goto L_802266A0; break;
        case 7: goto L_802264E8; break;
        case 8: goto L_80226644; break;
        case 9: goto L_802266A0; break;
        case 10: goto L_802266C8; break;
        default: switch_error(__func__, 0x802263A8, 0x80234B58);
    }
    // 0x802263AC: nop

L_802263B0:
    // 0x802263B0: jal         0x802261EC
    // 0x802263B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802261EC_ovl16(rdram, ctx);
        goto after_0;
    // 0x802263B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x802263B8: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802263BC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802263C0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_802263C4:
    // 0x802263C4: jal         0x80226B50
    // 0x802263C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80226B50_ovl16(rdram, ctx);
        goto after_1;
    // 0x802263C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802263CC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802263D0: beq         $v0, $zero, L_802263EC
    if (ctx->r2 == 0) {
        // 0x802263D4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802263EC;
    }
    // 0x802263D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802263D8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802263DC: jal         0x80050294
    // 0x802263E0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x802263E0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x802263E4: j           L_80226404
    // 0x802263E8: nop

        goto L_80226404;
    // 0x802263E8: nop

L_802263EC:
    // 0x802263EC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802263F0: jal         0x80050294
    // 0x802263F4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x802263F4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_3:
    // 0x802263F8: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x802263FC: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80226400: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
L_80226404:
    // 0x80226404: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80226408: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022640C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80226410:
    // 0x80226410: lw          $v0, 0x184($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X184);
    // 0x80226414: bne         $v0, $s0, L_80226704
    if (ctx->r2 != ctx->r16) {
        // 0x80226418: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80226704;
    }
    // 0x80226418: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022641C: jal         0x80226B98
    // 0x80226420: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80226B98_ovl16(rdram, ctx);
        goto after_4;
    // 0x80226420: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80226424: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80226428: beql        $v0, $zero, L_80226700
    if (ctx->r2 == 0) {
        // 0x8022642C: sw          $zero, 0x184($s1)
        MEM_W(0X184, ctx->r17) = 0;
            goto L_80226700;
    }
    goto skip_0;
    // 0x8022642C: sw          $zero, 0x184($s1)
    MEM_W(0X184, ctx->r17) = 0;
    skip_0:
    // 0x80226430: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80226434: j           L_802266FC
    // 0x80226438: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_802266FC;
    // 0x80226438: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022643C:
    // 0x8022643C: jal         0x8006FF84
    // 0x80226440: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_5;
    // 0x80226440: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
    // 0x80226444: beq         $v0, $zero, L_80226700
    if (ctx->r2 == 0) {
        // 0x80226448: addiu       $a0, $zero, 0x3FE
        ctx->r4 = ADD32(0, 0X3FE);
            goto L_80226700;
    }
    // 0x80226448: addiu       $a0, $zero, 0x3FE
    ctx->r4 = ADD32(0, 0X3FE);
    // 0x8022644C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80226450: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80226454: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x80226458: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8022645C: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x80226460: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
    // 0x80226464: jal         0x8004CB2C
    // 0x80226468: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_6;
    // 0x80226468: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
    after_6:
    // 0x8022646C: lbu         $a0, 0x8($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X8);
    // 0x80226470: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80226474: lbu         $v1, 0x6($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X6);
    // 0x80226478: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8022647C: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80226480: ori         $v1, $v1, 0x1
    ctx->r3 = ctx->r3 | 0X1;
    // 0x80226484: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80226488: sb          $v1, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r3;
    // 0x8022648C: j           L_80226700
    // 0x80226490: sb          $a0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r4;
        goto L_80226700;
    // 0x80226490: sb          $a0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r4;
L_80226494:
    // 0x80226494: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80226498: j           L_802266FC
    // 0x8022649C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_802266FC;
    // 0x8022649C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802264A0:
    // 0x802264A0: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x802264A4: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x802264A8: bne         $v0, $zero, L_802264D0
    if (ctx->r2 != 0) {
        // 0x802264AC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802264D0;
    }
    // 0x802264AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802264B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802264B4: jal         0x80050294
    // 0x802264B8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_7;
    // 0x802264B8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x802264BC: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    // 0x802264C0: jal         0x8002A33C
    // 0x802264C4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_8;
    // 0x802264C4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_8:
    // 0x802264C8: j           L_802264DC
    // 0x802264CC: nop

        goto L_802264DC;
    // 0x802264CC: nop

L_802264D0:
    // 0x802264D0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802264D4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802264D8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_802264DC:
    // 0x802264DC: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802264E0: j           L_802266FC
    // 0x802264E4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_802266FC;
    // 0x802264E4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802264E8:
    // 0x802264E8: jal         0x80226B50
    // 0x802264EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80226B50_ovl16(rdram, ctx);
        goto after_9;
    // 0x802264EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x802264F0: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802264F4: beql        $v0, $zero, L_80226628
    if (ctx->r2 == 0) {
        // 0x802264F8: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_80226628;
    }
    goto skip_1;
    // 0x802264F8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    skip_1:
    // 0x802264FC: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x80226500: bne         $v1, $zero, L_80226524
    if (ctx->r3 != 0) {
        // 0x80226504: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_80226524;
    }
    // 0x80226504: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x80226508: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022650C: lb          $a3, 0xE($s0)
    ctx->r7 = MEM_B(ctx->r16, 0XE);
    // 0x80226510: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80226514: jal         0x800610AC
    // 0x80226518: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_10;
    // 0x80226518: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_10:
    // 0x8022651C: j           L_80226638
    // 0x80226520: nop

        goto L_80226638;
    // 0x80226520: nop

L_80226524:
    // 0x80226524: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226528: bnel        $v1, $v0, L_8022654C
    if (ctx->r3 != ctx->r2) {
        // 0x8022652C: andi        $v0, $v1, 0x80
        ctx->r2 = ctx->r3 & 0X80;
            goto L_8022654C;
    }
    goto skip_2;
    // 0x8022652C: andi        $v0, $v1, 0x80
    ctx->r2 = ctx->r3 & 0X80;
    skip_2:
    // 0x80226530: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80226534: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80226538: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022653C: jal         0x800610AC
    // 0x80226540: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_11;
    // 0x80226540: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_11:
    // 0x80226544: j           L_80226638
    // 0x80226548: nop

        goto L_80226638;
    // 0x80226548: nop

L_8022654C:
    // 0x8022654C: beq         $v0, $zero, L_802265B0
    if (ctx->r2 == 0) {
        // 0x80226550: lui         $a0, 0x6666
        ctx->r4 = S32(0X6666 << 16);
            goto L_802265B0;
    }
    // 0x80226550: lui         $a0, 0x6666
    ctx->r4 = S32(0X6666 << 16);
    // 0x80226554: ori         $a0, $a0, 0x6667
    ctx->r4 = ctx->r4 | 0X6667;
    // 0x80226558: lbu         $v1, 0xE($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XE);
    // 0x8022655C: andi        $v0, $a1, 0x7F
    ctx->r2 = ctx->r5 & 0X7F;
    // 0x80226560: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80226564: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80226568: sll         $a2, $v0, 2
    ctx->r6 = S32(ctx->r2 << 2);
    // 0x8022656C: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x80226570: sll         $a2, $a2, 1
    ctx->r6 = S32(ctx->r6 << 1);
    // 0x80226574: mult        $a2, $a0
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80226578: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022657C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80226580: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80226584: sra         $a2, $a2, 31
    ctx->r6 = S32(SIGNED(ctx->r6) >> 31);
    // 0x80226588: mfhi        $t0
    ctx->r8 = hi;
    // 0x8022658C: sra         $v0, $t0, 2
    ctx->r2 = S32(SIGNED(ctx->r8) >> 2);
    // 0x80226590: nop

    // 0x80226594: jal         0x80069754
    // 0x80226598: subu        $a2, $v0, $a2
    ctx->r6 = SUB32(ctx->r2, ctx->r6);
    func_80069754_44B54(rdram, ctx);
        goto after_12;
    // 0x80226598: subu        $a2, $v0, $a2
    ctx->r6 = SUB32(ctx->r2, ctx->r6);
    after_12:
    // 0x8022659C: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    // 0x802265A0: jal         0x8006036C
    // 0x802265A4: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    func_8006036C_3B76C(rdram, ctx);
        goto after_13;
    // 0x802265A4: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    after_13:
    // 0x802265A8: j           L_80226638
    // 0x802265AC: nop

        goto L_80226638;
    // 0x802265AC: nop

L_802265B0:
    // 0x802265B0: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x802265B4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802265B8: beq         $v1, $v0, L_80226624
    if (ctx->r3 == ctx->r2) {
        // 0x802265BC: addu        $a2, $v1, $zero
        ctx->r6 = ADD32(ctx->r3, 0);
            goto L_80226624;
    }
    // 0x802265BC: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x802265C0: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x802265C4: xori        $v1, $v0, 0x40
    ctx->r3 = ctx->r2 ^ 0X40;
    // 0x802265C8: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x802265CC: xori        $v0, $v0, 0x42
    ctx->r2 = ctx->r2 ^ 0X42;
    // 0x802265D0: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x802265D4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x802265D8: beq         $v1, $zero, L_802265F8
    if (ctx->r3 == 0) {
        // 0x802265DC: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_802265F8;
    }
    // 0x802265DC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802265E0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802265E4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802265E8: jal         0x800610AC
    // 0x802265EC: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_14;
    // 0x802265EC: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    after_14:
    // 0x802265F0: j           L_8022660C
    // 0x802265F4: nop

        goto L_8022660C;
    // 0x802265F4: nop

L_802265F8:
    // 0x802265F8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x802265FC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80226600: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
    // 0x80226604: jal         0x80069754
    // 0x80226608: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80069754_44B54(rdram, ctx);
        goto after_15;
    // 0x80226608: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_15:
L_8022660C:
    // 0x8022660C: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    // 0x80226610: jal         0x8006036C
    // 0x80226614: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    func_8006036C_3B76C(rdram, ctx);
        goto after_16;
    // 0x80226614: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    after_16:
    // 0x80226618: addiu       $v0, $zero, 0x35
    ctx->r2 = ADD32(0, 0X35);
    // 0x8022661C: j           L_80226638
    // 0x80226620: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
        goto L_80226638;
    // 0x80226620: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
L_80226624:
    // 0x80226624: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
L_80226628:
    // 0x80226628: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022662C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226630: jal         0x80069754
    // 0x80226634: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80069754_44B54(rdram, ctx);
        goto after_17;
    // 0x80226634: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_17:
L_80226638:
    // 0x80226638: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022663C: j           L_802266FC
    // 0x80226640: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_802266FC;
    // 0x80226640: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80226644:
    // 0x80226644: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80226648: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022664C: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80226650: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80226654: bne         $v0, $zero, L_80226704
    if (ctx->r2 != 0) {
        // 0x80226658: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80226704;
    }
    // 0x80226658: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022665C: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80226660: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80226664: bne         $v0, $zero, L_80226688
    if (ctx->r2 != 0) {
        // 0x80226668: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_80226688;
    }
    // 0x80226668: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022666C: jal         0x80050294
    // 0x80226670: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_18;
    // 0x80226670: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_18:
    // 0x80226674: addiu       $a0, $zero, 0x104
    ctx->r4 = ADD32(0, 0X104);
    // 0x80226678: jal         0x8002A33C
    // 0x8022667C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_19;
    // 0x8022667C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_19:
    // 0x80226680: j           L_80226694
    // 0x80226684: nop

        goto L_80226694;
    // 0x80226684: nop

L_80226688:
    // 0x80226688: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022668C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226690: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80226694:
    // 0x80226694: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80226698: j           L_802266FC
    // 0x8022669C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_802266FC;
    // 0x8022669C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802266A0:
    // 0x802266A0: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x802266A4: bgez        $v0, L_802266B8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802266A8: nop
    
            goto L_802266B8;
    }
    // 0x802266A8: nop

    // 0x802266AC: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802266B0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802266B4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_802266B8:
    // 0x802266B8: jal         0x8005044C
    // 0x802266BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_20;
    // 0x802266BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_20:
    // 0x802266C0: j           L_80226704
    // 0x802266C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_80226704;
    // 0x802266C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_802266C8:
    // 0x802266C8: addiu       $a0, $zero, 0x3FE
    ctx->r4 = ADD32(0, 0X3FE);
    // 0x802266CC: jal         0x8004CB2C
    // 0x802266D0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_21;
    // 0x802266D0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_21:
    // 0x802266D4: jal         0x80070050
    // 0x802266D8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_22;
    // 0x802266D8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_22:
    // 0x802266DC: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x802266E0: sw          $zero, 0x184($s1)
    MEM_W(0X184, ctx->r17) = 0;
    // 0x802266E4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802266E8: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x802266EC: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x802266F0: andi        $v0, $v0, 0xFFFD
    ctx->r2 = ctx->r2 & 0XFFFD;
    // 0x802266F4: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
    // 0x802266F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802266FC:
    // 0x802266FC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80226700:
    // 0x80226700: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80226704:
    // 0x80226704: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80226708: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022670C: jal         0x80047284
    // 0x80226710: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_23;
    // 0x80226710: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_23:
    // 0x80226714: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80226718: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x8022671C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226720: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80226724: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80226728: addiu       $v0, $s2, 0x18
    ctx->r2 = ADD32(ctx->r18, 0X18);
    // 0x8022672C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80226730: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x80226734: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80226738: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022673C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80226740: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80226744: jal         0x80051E18
    // 0x80226748: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_24;
    // 0x80226748: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_24:
    // 0x8022674C: sw          $zero, 0x18($s2)
    MEM_W(0X18, ctx->r18) = 0;
    // 0x80226750: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80226754: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x80226758: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x8022675C: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x80226760: jr          $ra
    // 0x80226764: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x80226764: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8022FA38_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FA38: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022FA3C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022FA40: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022FA44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022FA48: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022FA4C: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
    // 0x8022FA50: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x8022FA54: jal         0x8002C654
    // 0x8022FA58: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8002C654_7A54(rdram, ctx);
        goto after_0;
    // 0x8022FA58: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022FA5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FA60: jal         0x8004D5D4
    // 0x8022FA64: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x8022FA64: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    after_1:
    // 0x8022FA68: lui         $v1, 0x2C80
    ctx->r3 = S32(0X2C80 << 16);
    // 0x8022FA6C: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x8022FA70: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022FA74: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022FA78: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x8022FA7C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022FA80: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022FA84: sw          $v1, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r3;
    // 0x8022FA88: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
    // 0x8022FA8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022FA90: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022FA94: jr          $ra
    // 0x8022FA98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022FA98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225380_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225380: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225384: jr          $ra
    // 0x80225388: sw          $zero, -0x359C($at)
    MEM_W(-0X359C, ctx->r1) = 0;
    TRACE_RETURN()
    return;
    // 0x80225388: sw          $zero, -0x359C($at)
    MEM_W(-0X359C, ctx->r1) = 0;
;}
