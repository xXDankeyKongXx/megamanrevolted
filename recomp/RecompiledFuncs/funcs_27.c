#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void __divdi3_recomp(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800A3870: lui         $t0, 0x8000
    ctx->r8 = S32(0X8000 << 16);
    // 0x800A3874: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x800A3878: xor         $v1, $v1, $a2
    ctx->r3 = ctx->r3 ^ ctx->r6;
    // 0x800A387C: and         $t9, $t0, $a0
    ctx->r25 = ctx->r8 & ctx->r4;
    // 0x800A3880: beq         $t9, $zero, L_800A38A0
    if (ctx->r25 == 0) {
        // 0x800A3884: nop
    
            goto L_800A38A0;
    }
    // 0x800A3884: nop

    // 0x800A3888: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x800A388C: xor         $a1, $a1, $t1
    ctx->r5 = ctx->r5 ^ ctx->r9;
    // 0x800A3890: xor         $a0, $a0, $t1
    ctx->r4 = ctx->r4 ^ ctx->r9;
    // 0x800A3894: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x800A3898: sltiu       $t9, $a1, 0x1
    ctx->r25 = ctx->r5 < 0X1 ? 1 : 0;
    // 0x800A389C: addu        $a0, $a0, $t9
    ctx->r4 = ADD32(ctx->r4, ctx->r25);
L_800A38A0:
    // 0x800A38A0: and         $t9, $t0, $a2
    ctx->r25 = ctx->r8 & ctx->r6;
    // 0x800A38A4: beq         $t9, $zero, L_800A38C4
    if (ctx->r25 == 0) {
        // 0x800A38A8: nop
    
            goto L_800A38C4;
    }
    // 0x800A38A8: nop

    // 0x800A38AC: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x800A38B0: xor         $a3, $a3, $t1
    ctx->r7 = ctx->r7 ^ ctx->r9;
    // 0x800A38B4: xor         $a2, $a2, $t1
    ctx->r6 = ctx->r6 ^ ctx->r9;
    // 0x800A38B8: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x800A38BC: sltiu       $t9, $a3, 0x1
    ctx->r25 = ctx->r7 < 0X1 ? 1 : 0;
    // 0x800A38C0: addu        $a2, $a2, $t9
    ctx->r6 = ADD32(ctx->r6, ctx->r25);
L_800A38C4:
    // 0x800A38C4: and         $v1, $v1, $t0
    ctx->r3 = ctx->r3 & ctx->r8;
    // 0x800A38C8: beq         $v1, $zero, L_800A39E0
    if (ctx->r3 == 0) {
            // 0x800A38CC: nop

    __udivdi3_recomp(rdram, ctx);
    TRACE_RETURN()
    return;
    }
    // 0x800A38CC: nop

    // 0x800A38D0: bne         $a2, $zero, L_800A38EC
    if (ctx->r6 != 0) {
        // 0x800A38D4: nop
    
            goto L_800A38EC;
    }
    // 0x800A38D4: nop

    // 0x800A38D8: addu        $t5, $ra, $zero
    ctx->r13 = ADD32(ctx->r31, 0);
    // 0x800A38DC: jal         0x800A37A4
    // 0x800A38E0: nop

    func_800A37A4_7EBA4(rdram, ctx);
        goto after_0;
    // 0x800A38E0: nop

    after_0:
    // 0x800A38E4: j           L_800A38FC
    // 0x800A38E8: addu        $ra, $t5, $zero
    ctx->r31 = ADD32(ctx->r13, 0);
        goto L_800A38FC;
    // 0x800A38E8: addu        $ra, $t5, $zero
    ctx->r31 = ADD32(ctx->r13, 0);
L_800A38EC:
    // 0x800A38EC: addu        $t5, $ra, $zero
    ctx->r13 = ADD32(ctx->r31, 0);
    // 0x800A38F0: jal         0x800A36A8
    // 0x800A38F4: nop

    func_800A36A8_7EAA8(rdram, ctx);
        goto after_1;
    // 0x800A38F4: nop

    after_1:
    // 0x800A38F8: addu        $ra, $t5, $zero
    ctx->r31 = ADD32(ctx->r13, 0);
L_800A38FC:
    // 0x800A38FC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800A3900: xor         $v1, $v1, $a3
    ctx->r3 = ctx->r3 ^ ctx->r7;
    // 0x800A3904: xor         $v0, $v0, $a3
    ctx->r2 = ctx->r2 ^ ctx->r7;
    // 0x800A3908: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800A390C: sltiu       $t9, $v1, 0x1
    ctx->r25 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x800A3910: jr          $ra
    // 0x800A3914: addu        $v0, $v0, $t9
    ctx->r2 = ADD32(ctx->r2, ctx->r25);
    TRACE_RETURN()
    return;
    // 0x800A3914: addu        $v0, $v0, $t9
    ctx->r2 = ADD32(ctx->r2, ctx->r25);
    // 0x800A3918: nop

    // 0x800A391C: nop

    // 0x800A3920: lui         $t0, 0x8000
    ctx->r8 = S32(0X8000 << 16);
    // 0x800A3924: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x800A3928: and         $t9, $t0, $a0
    ctx->r25 = ctx->r8 & ctx->r4;
    // 0x800A392C: beq         $t9, $zero, L_800A394C
    if (ctx->r25 == 0) {
        // 0x800A3930: nop
    
            goto L_800A394C;
    }
    // 0x800A3930: nop

    // 0x800A3934: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x800A3938: xor         $a1, $a1, $t1
    ctx->r5 = ctx->r5 ^ ctx->r9;
    // 0x800A393C: xor         $a0, $a0, $t1
    ctx->r4 = ctx->r4 ^ ctx->r9;
    // 0x800A3940: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x800A3944: sltiu       $t9, $a1, 0x1
    ctx->r25 = ctx->r5 < 0X1 ? 1 : 0;
    // 0x800A3948: addu        $a0, $a0, $t9
    ctx->r4 = ADD32(ctx->r4, ctx->r25);
L_800A394C:
    // 0x800A394C: and         $t9, $t0, $a2
    ctx->r25 = ctx->r8 & ctx->r6;
    // 0x800A3950: beq         $t9, $zero, L_800A3970
    if (ctx->r25 == 0) {
        // 0x800A3954: nop
    
            goto L_800A3970;
    }
    // 0x800A3954: nop

    // 0x800A3958: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x800A395C: xor         $a3, $a3, $t1
    ctx->r7 = ctx->r7 ^ ctx->r9;
    // 0x800A3960: xor         $a2, $a2, $t1
    ctx->r6 = ctx->r6 ^ ctx->r9;
    // 0x800A3964: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x800A3968: sltiu       $t9, $a3, 0x1
    ctx->r25 = ctx->r7 < 0X1 ? 1 : 0;
    // 0x800A396C: addu        $a2, $a2, $t9
    ctx->r6 = ADD32(ctx->r6, ctx->r25);
L_800A3970:
    // 0x800A3970: and         $v1, $v1, $t0
    ctx->r3 = ctx->r3 & ctx->r8;
    // 0x800A3974: beq         $v1, $zero, L_800A3A00
    if (ctx->r3 == 0) {
            // 0x800A3978: nop

    __umoddi3_recomp(rdram, ctx);
    TRACE_RETURN()
    return;
    }
    // 0x800A3978: nop

    // 0x800A397C: bne         $a2, $zero, L_800A39A0
    if (ctx->r6 != 0) {
        // 0x800A3980: nop
    
            goto L_800A39A0;
    }
    // 0x800A3980: nop

    // 0x800A3984: addu        $t5, $ra, $zero
    ctx->r13 = ADD32(ctx->r31, 0);
    // 0x800A3988: jal         0x800A37A4
    // 0x800A398C: nop

    func_800A37A4_7EBA4(rdram, ctx);
        goto after_2;
    // 0x800A398C: nop

    after_2:
    // 0x800A3990: addu        $ra, $t5, $zero
    ctx->r31 = ADD32(ctx->r13, 0);
    // 0x800A3994: addu        $v1, $t1, $zero
    ctx->r3 = ADD32(ctx->r9, 0);
    // 0x800A3998: j           L_800A39B8
    // 0x800A399C: xor         $v0, $v0, $v0
    ctx->r2 = ctx->r2 ^ ctx->r2;
        goto L_800A39B8;
    // 0x800A399C: xor         $v0, $v0, $v0
    ctx->r2 = ctx->r2 ^ ctx->r2;
L_800A39A0:
    // 0x800A39A0: addu        $t5, $ra, $zero
    ctx->r13 = ADD32(ctx->r31, 0);
    // 0x800A39A4: jal         0x800A36A8
    // 0x800A39A8: nop

    func_800A36A8_7EAA8(rdram, ctx);
        goto after_3;
    // 0x800A39A8: nop

    after_3:
    // 0x800A39AC: addu        $ra, $t5, $zero
    ctx->r31 = ADD32(ctx->r13, 0);
    // 0x800A39B0: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    // 0x800A39B4: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
L_800A39B8:
    // 0x800A39B8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800A39BC: xor         $v1, $v1, $a3
    ctx->r3 = ctx->r3 ^ ctx->r7;
    // 0x800A39C0: xor         $v0, $v0, $a3
    ctx->r2 = ctx->r2 ^ ctx->r7;
    // 0x800A39C4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800A39C8: sltiu       $t9, $v1, 0x1
    ctx->r25 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x800A39CC: jr          $ra
    // 0x800A39D0: addu        $v0, $v0, $t9
    ctx->r2 = ADD32(ctx->r2, ctx->r25);
    TRACE_RETURN()
    return;
    // 0x800A39D0: addu        $v0, $v0, $t9
    ctx->r2 = ADD32(ctx->r2, ctx->r25);
    // 0x800A39D4: nop

    // 0x800A39D8: nop

    // 0x800A39DC: nop

;}
RECOMP_FUNC void func_80073BA8_4EFA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80073BA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80073BAC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80073BB0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80073BB4: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x80073BB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80073BBC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80073BC0: sh          $s0, -0x3BA4($at)
    MEM_H(-0X3BA4, ctx->r1) = ctx->r16;
    // 0x80073BC4: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80073BC8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80073BCC: jal         0x8021D9D0
    // 0x80073BD0: lw          $a0, 0x398C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X398C);
    func_8021D9D0(rdram, ctx);
        goto after_0;
    // 0x80073BD0: lw          $a0, 0x398C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X398C);
    after_0:
    // 0x80073BD4: jal         0x80092EB0
    // 0x80073BD8: nop

    func_80092EB0_6E2B0(rdram, ctx);
        goto after_1;
    // 0x80073BD8: nop

    after_1:
    // 0x80073BDC: jal         0x80087570
    // 0x80073BE0: nop

    Graph_ThreadStop(rdram, ctx);
        goto after_2;
    // 0x80073BE0: nop

    after_2:
    // 0x80073BE4: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80073BE8: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    // 0x80073BEC: jal         0x80083E30
    // 0x80073BF0: lbu         $a0, 0x39C4($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X39C4);
    func_80083E30_5F230(rdram, ctx);
        goto after_3;
    // 0x80073BF0: lbu         $a0, 0x39C4($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X39C4);
    after_3:
    // 0x80073BF4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80073BF8: jal         0x80036D34
    // 0x80073BFC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80036D34_12134(rdram, ctx);
        goto after_4;
    // 0x80073BFC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_4:
    // 0x80073C00: jal         0x80036BCC
    // 0x80073C04: nop

    func_80036BCC_11FCC(rdram, ctx);
        goto after_5;
    // 0x80073C04: nop

    after_5:
    // 0x80073C08: sltiu       $v0, $s0, 0x2
    ctx->r2 = ctx->r16 < 0X2 ? 1 : 0;
    // 0x80073C0C: bne         $v0, $zero, L_80073C1C
    if (ctx->r2 != 0) {
        // 0x80073C10: nop
    
            goto L_80073C1C;
    }
    // 0x80073C10: nop

    // 0x80073C14: jal         0x8007BF08
    // 0x80073C18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8007BF08_57308(rdram, ctx);
        goto after_6;
    // 0x80073C18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_80073C1C:
    // 0x80073C1C: jal         0x80087590
    // 0x80073C20: nop

    func_80087590_62990(rdram, ctx);
        goto after_7;
    // 0x80073C20: nop

    after_7:
    // 0x80073C24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80073C28: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80073C2C: jr          $ra
    // 0x80073C30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80073C30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80036F68_12368(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80036F68: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80036F6C: lb          $v0, -0xC70($v0)
    ctx->r2 = MEM_B(ctx->r2, -0XC70);
    // 0x80036F70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80036F74: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80036F78: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80036F7C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80036F80: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80036F84: lw          $v0, -0x3704($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3704);
    // 0x80036F88: jalr        $v0
    // 0x80036F8C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80036F8C: nop

    after_0:
    // 0x80036F90: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80036F94: jr          $ra
    // 0x80036F98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80036F98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80089F1C_6531C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80089F1C: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80089F20: lw          $v0, 0x2BE8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2BE8);
    // 0x80089F24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80089F28: bne         $v0, $zero, L_80089F64
    if (ctx->r2 != 0) {
        // 0x80089F2C: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_80089F64;
    }
    // 0x80089F2C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80089F30: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80089F34: lbu         $v0, -0x14D0($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X14D0);
    // 0x80089F38: beq         $v0, $zero, L_80089F5C
    if (ctx->r2 == 0) {
        // 0x80089F3C: nop
    
            goto L_80089F5C;
    }
    // 0x80089F3C: nop

    // 0x80089F40: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x80089F44: lbu         $a0, 0x2BE0($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X2BE0);
    // 0x80089F48: lui         $a1, 0x8018
    ctx->r5 = S32(0X8018 << 16);
    // 0x80089F4C: lhu         $a1, 0x2BE2($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X2BE2);
    // 0x80089F50: lui         $a2, 0x8018
    ctx->r6 = S32(0X8018 << 16);
    // 0x80089F54: jal         0x800939C0
    // 0x80089F58: lhu         $a2, 0x2BE4($a2)
    ctx->r6 = MEM_HU(ctx->r6, 0X2BE4);
    func_800939C0_6EDC0(rdram, ctx);
        goto after_0;
    // 0x80089F58: lhu         $a2, 0x2BE4($a2)
    ctx->r6 = MEM_HU(ctx->r6, 0X2BE4);
    after_0:
L_80089F5C:
    // 0x80089F5C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80089F60: sb          $zero, -0x14D0($at)
    MEM_B(-0X14D0, ctx->r1) = 0;
L_80089F64:
    // 0x80089F64: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80089F68: jr          $ra
    // 0x80089F6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80089F6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8003C208_17608(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003C208: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8003C20C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8003C210: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8003C214: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8003C218: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8003C21C: jal         0x80060294
    // 0x8003C220: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_80060294_3B694(rdram, ctx);
        goto after_0;
    // 0x8003C220: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x8003C224: jal         0x80061110
    // 0x8003C228: nop

    func_80061110_3C510(rdram, ctx);
        goto after_1;
    // 0x8003C228: nop

    after_1:
    // 0x8003C22C: lb          $v1, 0x1($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X1);
    // 0x8003C230: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8003C234: addiu       $s2, $s2, 0x47B8
    ctx->r18 = ADD32(ctx->r18, 0X47B8);
    // 0x8003C238: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8003C23C: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x8003C240: sltiu       $v0, $v1, 0x8
    ctx->r2 = ctx->r3 < 0X8 ? 1 : 0;
    // 0x8003C244: beq         $v0, $zero, L_8003CF84
    if (ctx->r2 == 0) {
        // 0x8003C248: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8003CF84;
    }
    // 0x8003C248: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8003C24C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8003C250: addu        $at, $at, $v0
    gpr jr_addend_8003C258 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8003C254: lw          $v0, 0x1E10($at)
    ctx->r2 = ADD32(ctx->r1, 0X1E10);
    // 0x8003C258: jr          $v0
    // 0x8003C25C: nop

    switch (jr_addend_8003C258 >> 2) {
        case 0: goto L_8003C260; break;
        case 1: goto L_8003C3B8; break;
        case 2: goto L_8003C4CC; break;
        case 3: goto L_8003C888; break;
        case 4: goto L_8003C9F0; break;
        case 5: goto L_8003CB04; break;
        case 6: goto L_8003CC1C; break;
        case 7: goto L_8003CE7C; break;
        default: switch_error(__func__, 0x8003C258, 0x800D1E10);
    }
    // 0x8003C25C: nop

L_8003C260:
    // 0x8003C260: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8003C264: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8003C268: bne         $v0, $zero, L_8003CF84
    if (ctx->r2 != 0) {
        // 0x8003C26C: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_8003CF84;
    }
    // 0x8003C26C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8003C270: lbu         $a0, 0x18($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X18);
    // 0x8003C274: bne         $a0, $v0, L_8003C288
    if (ctx->r4 != ctx->r2) {
        // 0x8003C278: nop
    
            goto L_8003C288;
    }
    // 0x8003C278: nop

    // 0x8003C27C: lbu         $v0, 0x1($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X1);
    // 0x8003C280: j           L_8003C298
    // 0x8003C284: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
        goto L_8003C298;
    // 0x8003C284: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_8003C288:
    // 0x8003C288: jal         0x80036E48
    // 0x8003C28C: nop

    func_80036E48_12248(rdram, ctx);
        goto after_2;
    // 0x8003C28C: nop

    after_2:
    // 0x8003C290: lbu         $v0, 0x1($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X1);
    // 0x8003C294: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8003C298:
    // 0x8003C298: jal         0x80076A3C
    // 0x8003C29C: sb          $v0, 0x1($s1)
    MEM_B(0X1, ctx->r17) = ctx->r2;
    func_80076A3C_51E3C(rdram, ctx);
        goto after_3;
    // 0x8003C29C: sb          $v0, 0x1($s1)
    MEM_B(0X1, ctx->r17) = ctx->r2;
    after_3:
    // 0x8003C2A0: jal         0x8004C3C0
    // 0x8003C2A4: nop

    func_8004C3C0_277C0(rdram, ctx);
        goto after_4;
    // 0x8003C2A4: nop

    after_4:
    // 0x8003C2A8: jal         0x8006EF7C
    // 0x8003C2AC: nop

    func_8006EF7C_4A37C(rdram, ctx);
        goto after_5;
    // 0x8003C2AC: nop

    after_5:
    // 0x8003C2B0: jal         0x80053CBC
    // 0x8003C2B4: nop

    func_80053CBC_2F0BC(rdram, ctx);
        goto after_6;
    // 0x8003C2B4: nop

    after_6:
    // 0x8003C2B8: jal         0x8004C05C
    // 0x8003C2BC: nop

    func_8004C05C_2745C(rdram, ctx);
        goto after_7;
    // 0x8003C2BC: nop

    after_7:
    // 0x8003C2C0: jal         0x8004BFB0
    // 0x8003C2C4: nop

    func_8004BFB0_273B0(rdram, ctx);
        goto after_8;
    // 0x8003C2C4: nop

    after_8:
    // 0x8003C2C8: jal         0x8004C1AC
    // 0x8003C2CC: nop

    func_8004C1AC_275AC(rdram, ctx);
        goto after_9;
    // 0x8003C2CC: nop

    after_9:
    // 0x8003C2D0: jal         0x8004C270
    // 0x8003C2D4: nop

    func_8004C270_27670(rdram, ctx);
        goto after_10;
    // 0x8003C2D4: nop

    after_10:
    // 0x8003C2D8: jal         0x8004C45C
    // 0x8003C2DC: nop

    func_8004C45C_2785C(rdram, ctx);
        goto after_11;
    // 0x8003C2DC: nop

    after_11:
    // 0x8003C2E0: jal         0x800472F0
    // 0x8003C2E4: nop

    func_800472F0_226F0(rdram, ctx);
        goto after_12;
    // 0x8003C2E4: nop

    after_12:
    // 0x8003C2E8: jal         0x80069D44
    // 0x8003C2EC: nop

    func_80069D44_45144(rdram, ctx);
        goto after_13;
    // 0x8003C2EC: nop

    after_13:
    // 0x8003C2F0: jal         0x8004C108
    // 0x8003C2F4: nop

    func_8004C108_27508(rdram, ctx);
        goto after_14;
    // 0x8003C2F4: nop

    after_14:
    // 0x8003C2F8: jal         0x8004C314
    // 0x8003C2FC: nop

    func_8004C314_27714(rdram, ctx);
        goto after_15;
    // 0x8003C2FC: nop

    after_15:
    // 0x8003C300: jal         0x80033950
    // 0x8003C304: nop

    func_80033950_ED50(rdram, ctx);
        goto after_16;
    // 0x8003C304: nop

    after_16:
    // 0x8003C308: jal         0x800521A8
    // 0x8003C30C: nop

    func_800521A8_2D5A8(rdram, ctx);
        goto after_17;
    // 0x8003C30C: nop

    after_17:
    // 0x8003C310: jal         0x800719B4
    // 0x8003C314: nop

    func_800719B4_4CDB4(rdram, ctx);
        goto after_18;
    // 0x8003C314: nop

    after_18:
    // 0x8003C318: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003C31C: lb          $v1, -0x3C18($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3C18);
    // 0x8003C320: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8003C324: bne         $v1, $v0, L_8003C364
    if (ctx->r3 != ctx->r2) {
        // 0x8003C328: lui         $v0, 0xFFFF
        ctx->r2 = S32(0XFFFF << 16);
            goto L_8003C364;
    }
    // 0x8003C328: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x8003C32C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003C330: lw          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3BC8);
    // 0x8003C334: and         $a0, $v1, $v0
    ctx->r4 = ctx->r3 & ctx->r2;
    // 0x8003C338: lui         $v1, 0x302
    ctx->r3 = S32(0X302 << 16);
    // 0x8003C33C: xor         $v1, $a0, $v1
    ctx->r3 = ctx->r4 ^ ctx->r3;
    // 0x8003C340: sltu        $v1, $zero, $v1
    ctx->r3 = 0 < ctx->r3 ? 1 : 0;
    // 0x8003C344: lui         $v0, 0x130B
    ctx->r2 = S32(0X130B << 16);
    // 0x8003C348: xor         $v0, $a0, $v0
    ctx->r2 = ctx->r4 ^ ctx->r2;
    // 0x8003C34C: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x8003C350: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8003C354: beq         $v1, $zero, L_8003C36C
    if (ctx->r3 == 0) {
        // 0x8003C358: lui         $v0, 0x1B06
        ctx->r2 = S32(0X1B06 << 16);
            goto L_8003C36C;
    }
    // 0x8003C358: lui         $v0, 0x1B06
    ctx->r2 = S32(0X1B06 << 16);
    // 0x8003C35C: beq         $a0, $v0, L_8003C36C
    if (ctx->r4 == ctx->r2) {
        // 0x8003C360: nop
    
            goto L_8003C36C;
    }
    // 0x8003C360: nop

L_8003C364:
    // 0x8003C364: jal         0x80048C7C
    // 0x8003C368: nop

    func_80048C7C_2407C(rdram, ctx);
        goto after_19;
    // 0x8003C368: nop

    after_19:
L_8003C36C:
    // 0x8003C36C: jal         0x8004A6B4
    // 0x8003C370: nop

    func_8004A6B4_25AB4(rdram, ctx);
        goto after_20;
    // 0x8003C370: nop

    after_20:
    // 0x8003C374: jal         0x8003912C
    // 0x8003C378: nop

    func_8003912C_1452C(rdram, ctx);
        goto after_21;
    // 0x8003C378: nop

    after_21:
    // 0x8003C37C: jal         0x80037F78
    // 0x8003C380: nop

    func_80037F78_13378(rdram, ctx);
        goto after_22;
    // 0x8003C380: nop

    after_22:
    // 0x8003C384: jal         0x8003A248
    // 0x8003C388: nop

    func_8003A248_15648(rdram, ctx);
        goto after_23;
    // 0x8003C388: nop

    after_23:
    // 0x8003C38C: jal         0x8003A7CC
    // 0x8003C390: nop

    func_8003A7CC_15BCC(rdram, ctx);
        goto after_24;
    // 0x8003C390: nop

    after_24:
    // 0x8003C394: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8003C398: addiu       $a0, $a0, 0x43F0
    ctx->r4 = ADD32(ctx->r4, 0X43F0);
    // 0x8003C39C: addiu       $a1, $a0, -0x10
    ctx->r5 = ADD32(ctx->r4, -0X10);
    // 0x8003C3A0: jal         0x8009A3B4
    // 0x8003C3A4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_25;
    // 0x8003C3A4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_25:
    // 0x8003C3A8: jal         0x8002A110
    // 0x8003C3AC: nop

    func_8002A110_5510(rdram, ctx);
        goto after_26;
    // 0x8003C3AC: nop

    after_26:
    // 0x8003C3B0: j           L_8003CF84
    // 0x8003C3B4: nop

        goto L_8003CF84;
    // 0x8003C3B4: nop

L_8003C3B8:
    // 0x8003C3B8: jal         0x80076A3C
    // 0x8003C3BC: nop

    func_80076A3C_51E3C(rdram, ctx);
        goto after_27;
    // 0x8003C3BC: nop

    after_27:
    // 0x8003C3C0: jal         0x8004C3C0
    // 0x8003C3C4: nop

    func_8004C3C0_277C0(rdram, ctx);
        goto after_28;
    // 0x8003C3C4: nop

    after_28:
    // 0x8003C3C8: jal         0x8006EF7C
    // 0x8003C3CC: nop

    func_8006EF7C_4A37C(rdram, ctx);
        goto after_29;
    // 0x8003C3CC: nop

    after_29:
    // 0x8003C3D0: jal         0x80053CBC
    // 0x8003C3D4: nop

    func_80053CBC_2F0BC(rdram, ctx);
        goto after_30;
    // 0x8003C3D4: nop

    after_30:
    // 0x8003C3D8: jal         0x8004C05C
    // 0x8003C3DC: nop

    func_8004C05C_2745C(rdram, ctx);
        goto after_31;
    // 0x8003C3DC: nop

    after_31:
    // 0x8003C3E0: jal         0x8004BFB0
    // 0x8003C3E4: nop

    func_8004BFB0_273B0(rdram, ctx);
        goto after_32;
    // 0x8003C3E4: nop

    after_32:
    // 0x8003C3E8: jal         0x8004C1AC
    // 0x8003C3EC: nop

    func_8004C1AC_275AC(rdram, ctx);
        goto after_33;
    // 0x8003C3EC: nop

    after_33:
    // 0x8003C3F0: jal         0x8004C270
    // 0x8003C3F4: nop

    func_8004C270_27670(rdram, ctx);
        goto after_34;
    // 0x8003C3F4: nop

    after_34:
    // 0x8003C3F8: jal         0x8004C45C
    // 0x8003C3FC: nop

    func_8004C45C_2785C(rdram, ctx);
        goto after_35;
    // 0x8003C3FC: nop

    after_35:
    // 0x8003C400: jal         0x800472F0
    // 0x8003C404: nop

    func_800472F0_226F0(rdram, ctx);
        goto after_36;
    // 0x8003C404: nop

    after_36:
    // 0x8003C408: jal         0x80069D44
    // 0x8003C40C: nop

    func_80069D44_45144(rdram, ctx);
        goto after_37;
    // 0x8003C40C: nop

    after_37:
    // 0x8003C410: jal         0x8004C108
    // 0x8003C414: nop

    func_8004C108_27508(rdram, ctx);
        goto after_38;
    // 0x8003C414: nop

    after_38:
    // 0x8003C418: jal         0x8004C314
    // 0x8003C41C: nop

    func_8004C314_27714(rdram, ctx);
        goto after_39;
    // 0x8003C41C: nop

    after_39:
    // 0x8003C420: jal         0x80033950
    // 0x8003C424: nop

    func_80033950_ED50(rdram, ctx);
        goto after_40;
    // 0x8003C424: nop

    after_40:
    // 0x8003C428: jal         0x800521A8
    // 0x8003C42C: nop

    func_800521A8_2D5A8(rdram, ctx);
        goto after_41;
    // 0x8003C42C: nop

    after_41:
    // 0x8003C430: jal         0x800719B4
    // 0x8003C434: nop

    func_800719B4_4CDB4(rdram, ctx);
        goto after_42;
    // 0x8003C434: nop

    after_42:
    // 0x8003C438: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003C43C: lb          $v1, -0x3C18($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3C18);
    // 0x8003C440: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8003C444: bne         $v1, $v0, L_8003C484
    if (ctx->r3 != ctx->r2) {
        // 0x8003C448: lui         $v0, 0xFFFF
        ctx->r2 = S32(0XFFFF << 16);
            goto L_8003C484;
    }
    // 0x8003C448: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x8003C44C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003C450: lw          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3BC8);
    // 0x8003C454: and         $a0, $v1, $v0
    ctx->r4 = ctx->r3 & ctx->r2;
    // 0x8003C458: lui         $v1, 0x302
    ctx->r3 = S32(0X302 << 16);
    // 0x8003C45C: xor         $v1, $a0, $v1
    ctx->r3 = ctx->r4 ^ ctx->r3;
    // 0x8003C460: sltu        $v1, $zero, $v1
    ctx->r3 = 0 < ctx->r3 ? 1 : 0;
    // 0x8003C464: lui         $v0, 0x130B
    ctx->r2 = S32(0X130B << 16);
    // 0x8003C468: xor         $v0, $a0, $v0
    ctx->r2 = ctx->r4 ^ ctx->r2;
    // 0x8003C46C: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x8003C470: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8003C474: beq         $v1, $zero, L_8003C48C
    if (ctx->r3 == 0) {
        // 0x8003C478: lui         $v0, 0x1B06
        ctx->r2 = S32(0X1B06 << 16);
            goto L_8003C48C;
    }
    // 0x8003C478: lui         $v0, 0x1B06
    ctx->r2 = S32(0X1B06 << 16);
    // 0x8003C47C: beq         $a0, $v0, L_8003C48C
    if (ctx->r4 == ctx->r2) {
        // 0x8003C480: nop
    
            goto L_8003C48C;
    }
    // 0x8003C480: nop

L_8003C484:
    // 0x8003C484: jal         0x80048C7C
    // 0x8003C488: nop

    func_80048C7C_2407C(rdram, ctx);
        goto after_43;
    // 0x8003C488: nop

    after_43:
L_8003C48C:
    // 0x8003C48C: jal         0x8004A6B4
    // 0x8003C490: nop

    func_8004A6B4_25AB4(rdram, ctx);
        goto after_44;
    // 0x8003C490: nop

    after_44:
    // 0x8003C494: jal         0x8003912C
    // 0x8003C498: nop

    func_8003912C_1452C(rdram, ctx);
        goto after_45;
    // 0x8003C498: nop

    after_45:
    // 0x8003C49C: jal         0x80037F78
    // 0x8003C4A0: nop

    func_80037F78_13378(rdram, ctx);
        goto after_46;
    // 0x8003C4A0: nop

    after_46:
    // 0x8003C4A4: jal         0x8003A248
    // 0x8003C4A8: nop

    func_8003A248_15648(rdram, ctx);
        goto after_47;
    // 0x8003C4A8: nop

    after_47:
    // 0x8003C4AC: jal         0x8003A7CC
    // 0x8003C4B0: nop

    func_8003A7CC_15BCC(rdram, ctx);
        goto after_48;
    // 0x8003C4B0: nop

    after_48:
    // 0x8003C4B4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8003C4B8: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8003C4BC: beq         $v0, $zero, L_8003CC0C
    if (ctx->r2 == 0) {
        // 0x8003C4C0: nop
    
            goto L_8003CC0C;
    }
    // 0x8003C4C0: nop

    // 0x8003C4C4: j           L_8003CF84
    // 0x8003C4C8: nop

        goto L_8003CF84;
    // 0x8003C4C8: nop

L_8003C4CC:
    // 0x8003C4CC: lb          $v1, 0x14($s2)
    ctx->r3 = MEM_B(ctx->r18, 0X14);
    // 0x8003C4D0: beq         $v1, $zero, L_8003C660
    if (ctx->r3 == 0) {
        // 0x8003C4D4: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8003C660;
    }
    // 0x8003C4D4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8003C4D8: bne         $v1, $v0, L_8003C644
    if (ctx->r3 != ctx->r2) {
        // 0x8003C4DC: nop
    
            goto L_8003C644;
    }
    // 0x8003C4DC: nop

    // 0x8003C4E0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003C4E4: lbu         $v0, -0x3A50($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3A50);
    // 0x8003C4E8: bne         $v0, $zero, L_8003C57C
    if (ctx->r2 != 0) {
        // 0x8003C4EC: addiu       $a0, $zero, 0x1FE
        ctx->r4 = ADD32(0, 0X1FE);
            goto L_8003C57C;
    }
    // 0x8003C4EC: addiu       $a0, $zero, 0x1FE
    ctx->r4 = ADD32(0, 0X1FE);
    // 0x8003C4F0: lhu         $v1, 0x8($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X8);
    // 0x8003C4F4: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x8003C4F8: lhu         $a1, 0xC($s2)
    ctx->r5 = MEM_HU(ctx->r18, 0XC);
    // 0x8003C4FC: lhu         $a2, 0x18($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X18);
    // 0x8003C500: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x8003C504: lw          $a3, 0x43E4($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X43E4);
    // 0x8003C508: sh          $zero, 0x12($sp)
    MEM_H(0X12, ctx->r29) = 0;
    // 0x8003C50C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8003C510: subu        $a1, $a1, $a2
    ctx->r5 = SUB32(ctx->r5, ctx->r6);
    // 0x8003C514: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x8003C518: addiu       $a2, $a2, 0x43E0
    ctx->r6 = ADD32(ctx->r6, 0X43E0);
    // 0x8003C51C: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    // 0x8003C520: sh          $a1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r5;
    // 0x8003C524: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x8003C528: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8003C52C: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8003C530: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8003C534: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x8003C538: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8003C53C: lw          $v0, 0x43E8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X43E8);
    // 0x8003C540: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8003C544: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8003C548: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003C54C: sw          $a3, 0x43E4($at)
    MEM_W(0X43E4, ctx->r1) = ctx->r7;
    // 0x8003C550: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8003C554: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003C558: sw          $v0, 0x43E8($at)
    MEM_W(0X43E8, ctx->r1) = ctx->r2;
    // 0x8003C55C: jal         0x80034D70
    // 0x8003C560: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_80034D70_10170(rdram, ctx);
        goto after_49;
    // 0x8003C560: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_49:
    // 0x8003C564: addiu       $a0, $zero, 0x200
    ctx->r4 = ADD32(0, 0X200);
    // 0x8003C568: jal         0x8004CB2C
    // 0x8003C56C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_50;
    // 0x8003C56C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_50:
    // 0x8003C570: addiu       $a0, $zero, 0x1FE
    ctx->r4 = ADD32(0, 0X1FE);
    // 0x8003C574: j           L_8003C580
    // 0x8003C578: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
        goto L_8003C580;
    // 0x8003C578: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
L_8003C57C:
    // 0x8003C57C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_8003C580:
    // 0x8003C580: jal         0x8004D08C
    // 0x8003C584: nop

    func_8004D08C_2848C(rdram, ctx);
        goto after_51;
    // 0x8003C584: nop

    after_51:
    // 0x8003C588: lbu         $v0, 0x17($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X17);
    // 0x8003C58C: lbu         $v1, 0x53($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X53);
    // 0x8003C590: sb          $v0, 0x51($s1)
    MEM_B(0X51, ctx->r17) = ctx->r2;
    // 0x8003C594: sb          $v1, 0x52($s1)
    MEM_B(0X52, ctx->r17) = ctx->r3;
    // 0x8003C598: lhu         $a1, 0x8($s2)
    ctx->r5 = MEM_HU(ctx->r18, 0X8);
    // 0x8003C59C: lhu         $a2, 0xA($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0XA);
    // 0x8003C5A0: lhu         $a3, 0xC($s2)
    ctx->r7 = MEM_HU(ctx->r18, 0XC);
    // 0x8003C5A4: lh          $v0, 0x8($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X8);
    // 0x8003C5A8: lh          $v1, 0xA($s2)
    ctx->r3 = MEM_H(ctx->r18, 0XA);
    // 0x8003C5AC: lh          $a0, 0xC($s2)
    ctx->r4 = MEM_H(ctx->r18, 0XC);
    // 0x8003C5B0: lhu         $t0, 0x12($s2)
    ctx->r8 = MEM_HU(ctx->r18, 0X12);
    // 0x8003C5B4: lbu         $t1, 0x8($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X8);
    // 0x8003C5B8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8003C5BC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8003C5C0: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8003C5C4: sw          $v0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r2;
    // 0x8003C5C8: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8003C5CC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8003C5D0: sh          $a1, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r5;
    // 0x8003C5D4: sh          $a1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r5;
    // 0x8003C5D8: sh          $a2, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r6;
    // 0x8003C5DC: sh          $a2, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r6;
    // 0x8003C5E0: sh          $a3, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r7;
    // 0x8003C5E4: sh          $a3, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r7;
    // 0x8003C5E8: sw          $v1, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r3;
    // 0x8003C5EC: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x8003C5F0: sw          $a0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r4;
    // 0x8003C5F4: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x8003C5F8: sh          $t0, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r8;
    // 0x8003C5FC: bne         $t1, $v0, L_8003C634
    if (ctx->r9 != ctx->r2) {
        // 0x8003C600: sh          $t0, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r8;
            goto L_8003C634;
    }
    // 0x8003C600: sh          $t0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r8;
    // 0x8003C604: addiu       $a0, $s0, 0x438
    ctx->r4 = ADD32(ctx->r16, 0X438);
    // 0x8003C608: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8003C60C: jal         0x8009A3B4
    // 0x8003C610: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_52;
    // 0x8003C610: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_52:
    // 0x8003C614: addiu       $a0, $s0, 0x428
    ctx->r4 = ADD32(ctx->r16, 0X428);
    // 0x8003C618: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8003C61C: jal         0x8009A3B4
    // 0x8003C620: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_53;
    // 0x8003C620: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_53:
    // 0x8003C624: addiu       $a0, $s0, 0x440
    ctx->r4 = ADD32(ctx->r16, 0X440);
    // 0x8003C628: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8003C62C: jal         0x8009A3B4
    // 0x8003C630: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_54;
    // 0x8003C630: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_54:
L_8003C634:
    // 0x8003C634: jal         0x80073828
    // 0x8003C638: nop

    func_80073828_4EC28(rdram, ctx);
        goto after_55;
    // 0x8003C638: nop

    after_55:
    // 0x8003C63C: j           L_8003C744
    // 0x8003C640: sb          $zero, 0x14($s2)
    MEM_B(0X14, ctx->r18) = 0;
        goto L_8003C744;
    // 0x8003C640: sb          $zero, 0x14($s2)
    MEM_B(0X14, ctx->r18) = 0;
L_8003C644:
    // 0x8003C644: lbu         $v0, 0x1($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X1);
    // 0x8003C648: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8003C64C: sb          $v0, 0x1($s1)
    MEM_B(0X1, ctx->r17) = ctx->r2;
    // 0x8003C650: lbu         $v0, 0xBD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XBD);
    // 0x8003C654: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x8003C658: j           L_8003C744
    // 0x8003C65C: sb          $v0, 0xBD($s0)
    MEM_B(0XBD, ctx->r16) = ctx->r2;
        goto L_8003C744;
    // 0x8003C65C: sb          $v0, 0xBD($s0)
    MEM_B(0XBD, ctx->r16) = ctx->r2;
L_8003C660:
    // 0x8003C660: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003C664: lbu         $v0, -0x3A50($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3A50);
    // 0x8003C668: bne         $v0, $zero, L_8003C744
    if (ctx->r2 != 0) {
        // 0x8003C66C: nop
    
            goto L_8003C744;
    }
    // 0x8003C66C: nop

    // 0x8003C670: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8003C674: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8003C678: bne         $v0, $zero, L_8003C744
    if (ctx->r2 != 0) {
        // 0x8003C67C: lui         $v1, 0xF00
        ctx->r3 = S32(0XF00 << 16);
            goto L_8003C744;
    }
    // 0x8003C67C: lui         $v1, 0xF00
    ctx->r3 = S32(0XF00 << 16);
    // 0x8003C680: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8003C684: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8003C688: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8003C68C: bne         $v0, $zero, L_8003C744
    if (ctx->r2 != 0) {
        // 0x8003C690: nop
    
            goto L_8003C744;
    }
    // 0x8003C690: nop

    // 0x8003C694: lh          $v0, 0x6E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6E);
    // 0x8003C698: bltz        $v0, L_8003C744
    if (SIGNED(ctx->r2) < 0) {
        // 0x8003C69C: nop
    
            goto L_8003C744;
    }
    // 0x8003C69C: nop

    // 0x8003C6A0: lb          $v0, 0xBD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XBD);
    // 0x8003C6A4: bne         $v0, $zero, L_8003C744
    if (ctx->r2 != 0) {
        // 0x8003C6A8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8003C744;
    }
    // 0x8003C6A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8003C6AC: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8003C6B0: bne         $v1, $v0, L_8003C744
    if (ctx->r3 != ctx->r2) {
        // 0x8003C6B4: nop
    
            goto L_8003C744;
    }
    // 0x8003C6B4: nop

    // 0x8003C6B8: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8003C6BC: lhu         $v1, -0x783A($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X783A);
    // 0x8003C6C0: andi        $v0, $v1, 0x8
    ctx->r2 = ctx->r3 & 0X8;
    // 0x8003C6C4: beq         $v0, $zero, L_8003C6DC
    if (ctx->r2 == 0) {
        // 0x8003C6C8: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8003C6DC;
    }
    // 0x8003C6C8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8003C6CC: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8003C6D0: sb          $zero, 0x3($s1)
    MEM_B(0X3, ctx->r17) = 0;
    // 0x8003C6D4: j           L_8003CF80
    // 0x8003C6D8: sb          $zero, 0x2($s1)
    MEM_B(0X2, ctx->r17) = 0;
        goto L_8003CF80;
    // 0x8003C6D8: sb          $zero, 0x2($s1)
    MEM_B(0X2, ctx->r17) = 0;
L_8003C6DC:
    // 0x8003C6DC: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x8003C6E0: beq         $v0, $zero, L_8003C744
    if (ctx->r2 == 0) {
        // 0x8003C6E4: nop
    
            goto L_8003C744;
    }
    // 0x8003C6E4: nop

    // 0x8003C6E8: lbu         $v0, 0x83($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X83);
    // 0x8003C6EC: bne         $v0, $zero, L_8003C744
    if (ctx->r2 != 0) {
        // 0x8003C6F0: nop
    
            goto L_8003C744;
    }
    // 0x8003C6F0: nop

    // 0x8003C6F4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8003C6F8: lw          $v0, -0x2F38($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2F38);
    // 0x8003C6FC: beq         $v0, $zero, L_8003C714
    if (ctx->r2 == 0) {
        // 0x8003C700: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_8003C714;
    }
    // 0x8003C700: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8003C704: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8003C708: sb          $zero, 0x3($s1)
    MEM_B(0X3, ctx->r17) = 0;
    // 0x8003C70C: j           L_8003CF80
    // 0x8003C710: sb          $zero, 0x2($s1)
    MEM_B(0X2, ctx->r17) = 0;
        goto L_8003CF80;
    // 0x8003C710: sb          $zero, 0x2($s1)
    MEM_B(0X2, ctx->r17) = 0;
L_8003C714:
    // 0x8003C714: lb          $v0, 0x50($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X50);
    // 0x8003C718: slti        $v1, $v0, 0x3
    ctx->r3 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x8003C71C: xori        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 ^ 0X1;
    // 0x8003C720: xori        $v0, $v0, 0x1A
    ctx->r2 = ctx->r2 ^ 0X1A;
    // 0x8003C724: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x8003C728: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8003C72C: beq         $v1, $zero, L_8003C744
    if (ctx->r3 == 0) {
        // 0x8003C730: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_8003C744;
    }
    // 0x8003C730: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8003C734: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8003C738: sb          $zero, 0x3($s1)
    MEM_B(0X3, ctx->r17) = 0;
    // 0x8003C73C: j           L_8003CF80
    // 0x8003C740: sb          $zero, 0x2($s1)
    MEM_B(0X2, ctx->r17) = 0;
        goto L_8003CF80;
    // 0x8003C740: sb          $zero, 0x2($s1)
    MEM_B(0X2, ctx->r17) = 0;
L_8003C744:
    // 0x8003C744: jal         0x80076A3C
    // 0x8003C748: nop

    func_80076A3C_51E3C(rdram, ctx);
        goto after_56;
    // 0x8003C748: nop

    after_56:
    // 0x8003C74C: jal         0x8004C3C0
    // 0x8003C750: nop

    func_8004C3C0_277C0(rdram, ctx);
        goto after_57;
    // 0x8003C750: nop

    after_57:
    // 0x8003C754: jal         0x8006EF7C
    // 0x8003C758: nop

    func_8006EF7C_4A37C(rdram, ctx);
        goto after_58;
    // 0x8003C758: nop

    after_58:
    // 0x8003C75C: jal         0x80053CBC
    // 0x8003C760: nop

    func_80053CBC_2F0BC(rdram, ctx);
        goto after_59;
    // 0x8003C760: nop

    after_59:
    // 0x8003C764: jal         0x8004C05C
    // 0x8003C768: nop

    func_8004C05C_2745C(rdram, ctx);
        goto after_60;
    // 0x8003C768: nop

    after_60:
    // 0x8003C76C: jal         0x8004BFB0
    // 0x8003C770: nop

    func_8004BFB0_273B0(rdram, ctx);
        goto after_61;
    // 0x8003C770: nop

    after_61:
    // 0x8003C774: jal         0x8004C1AC
    // 0x8003C778: nop

    func_8004C1AC_275AC(rdram, ctx);
        goto after_62;
    // 0x8003C778: nop

    after_62:
    // 0x8003C77C: jal         0x8004C270
    // 0x8003C780: nop

    func_8004C270_27670(rdram, ctx);
        goto after_63;
    // 0x8003C780: nop

    after_63:
    // 0x8003C784: jal         0x8004C45C
    // 0x8003C788: nop

    func_8004C45C_2785C(rdram, ctx);
        goto after_64;
    // 0x8003C788: nop

    after_64:
    // 0x8003C78C: jal         0x800472F0
    // 0x8003C790: nop

    func_800472F0_226F0(rdram, ctx);
        goto after_65;
    // 0x8003C790: nop

    after_65:
    // 0x8003C794: jal         0x80069D44
    // 0x8003C798: nop

    func_80069D44_45144(rdram, ctx);
        goto after_66;
    // 0x8003C798: nop

    after_66:
    // 0x8003C79C: jal         0x8004C108
    // 0x8003C7A0: nop

    func_8004C108_27508(rdram, ctx);
        goto after_67;
    // 0x8003C7A0: nop

    after_67:
    // 0x8003C7A4: jal         0x8004C314
    // 0x8003C7A8: nop

    func_8004C314_27714(rdram, ctx);
        goto after_68;
    // 0x8003C7A8: nop

    after_68:
    // 0x8003C7AC: jal         0x80033950
    // 0x8003C7B0: nop

    func_80033950_ED50(rdram, ctx);
        goto after_69;
    // 0x8003C7B0: nop

    after_69:
    // 0x8003C7B4: jal         0x800521A8
    // 0x8003C7B8: nop

    func_800521A8_2D5A8(rdram, ctx);
        goto after_70;
    // 0x8003C7B8: nop

    after_70:
    // 0x8003C7BC: jal         0x800719B4
    // 0x8003C7C0: nop

    func_800719B4_4CDB4(rdram, ctx);
        goto after_71;
    // 0x8003C7C0: nop

    after_71:
    // 0x8003C7C4: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003C7C8: lb          $v1, -0x3C18($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3C18);
    // 0x8003C7CC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8003C7D0: bne         $v1, $v0, L_8003C810
    if (ctx->r3 != ctx->r2) {
        // 0x8003C7D4: lui         $v0, 0xFFFF
        ctx->r2 = S32(0XFFFF << 16);
            goto L_8003C810;
    }
    // 0x8003C7D4: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x8003C7D8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003C7DC: lw          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3BC8);
    // 0x8003C7E0: and         $a0, $v1, $v0
    ctx->r4 = ctx->r3 & ctx->r2;
    // 0x8003C7E4: lui         $v1, 0x302
    ctx->r3 = S32(0X302 << 16);
    // 0x8003C7E8: xor         $v1, $a0, $v1
    ctx->r3 = ctx->r4 ^ ctx->r3;
    // 0x8003C7EC: sltu        $v1, $zero, $v1
    ctx->r3 = 0 < ctx->r3 ? 1 : 0;
    // 0x8003C7F0: lui         $v0, 0x130B
    ctx->r2 = S32(0X130B << 16);
    // 0x8003C7F4: xor         $v0, $a0, $v0
    ctx->r2 = ctx->r4 ^ ctx->r2;
    // 0x8003C7F8: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x8003C7FC: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8003C800: beq         $v1, $zero, L_8003C818
    if (ctx->r3 == 0) {
        // 0x8003C804: lui         $v0, 0x1B06
        ctx->r2 = S32(0X1B06 << 16);
            goto L_8003C818;
    }
    // 0x8003C804: lui         $v0, 0x1B06
    ctx->r2 = S32(0X1B06 << 16);
    // 0x8003C808: beq         $a0, $v0, L_8003C818
    if (ctx->r4 == ctx->r2) {
        // 0x8003C80C: nop
    
            goto L_8003C818;
    }
    // 0x8003C80C: nop

L_8003C810:
    // 0x8003C810: jal         0x80048C7C
    // 0x8003C814: nop

    func_80048C7C_2407C(rdram, ctx);
        goto after_72;
    // 0x8003C814: nop

    after_72:
L_8003C818:
    // 0x8003C818: jal         0x8004A6B4
    // 0x8003C81C: nop

    func_8004A6B4_25AB4(rdram, ctx);
        goto after_73;
    // 0x8003C81C: nop

    after_73:
    // 0x8003C820: jal         0x8003912C
    // 0x8003C824: nop

    func_8003912C_1452C(rdram, ctx);
        goto after_74;
    // 0x8003C824: nop

    after_74:
    // 0x8003C828: jal         0x80037F78
    // 0x8003C82C: nop

    func_80037F78_13378(rdram, ctx);
        goto after_75;
    // 0x8003C82C: nop

    after_75:
    // 0x8003C830: jal         0x8003A248
    // 0x8003C834: nop

    func_8003A248_15648(rdram, ctx);
        goto after_76;
    // 0x8003C834: nop

    after_76:
    // 0x8003C838: jal         0x8003A7CC
    // 0x8003C83C: nop

    func_8003A7CC_15BCC(rdram, ctx);
        goto after_77;
    // 0x8003C83C: nop

    after_77:
    // 0x8003C840: lb          $v1, 0x81($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X81);
    // 0x8003C844: beq         $v1, $zero, L_8003CF84
    if (ctx->r3 == 0) {
        // 0x8003C848: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8003CF84;
    }
    // 0x8003C848: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8003C84C: bne         $v1, $v0, L_8003C864
    if (ctx->r3 != ctx->r2) {
        // 0x8003C850: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8003C864;
    }
    // 0x8003C850: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8003C854: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8003C858: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8003C85C: lb          $v1, 0x81($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X81);
    // 0x8003C860: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8003C864:
    // 0x8003C864: bnel        $v1, $v0, L_8003C878
    if (ctx->r3 != ctx->r2) {
        // 0x8003C868: sb          $zero, 0x3($s1)
        MEM_B(0X3, ctx->r17) = 0;
            goto L_8003C878;
    }
    goto skip_0;
    // 0x8003C868: sb          $zero, 0x3($s1)
    MEM_B(0X3, ctx->r17) = 0;
    skip_0:
    // 0x8003C86C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8003C870: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8003C874: sb          $zero, 0x3($s1)
    MEM_B(0X3, ctx->r17) = 0;
L_8003C878:
    // 0x8003C878: sb          $zero, 0x2($s1)
    MEM_B(0X2, ctx->r17) = 0;
    // 0x8003C87C: sb          $zero, 0x1($s1)
    MEM_B(0X1, ctx->r17) = 0;
    // 0x8003C880: j           L_8003CF84
    // 0x8003C884: sb          $zero, 0x81($s1)
    MEM_B(0X81, ctx->r17) = 0;
        goto L_8003CF84;
    // 0x8003C884: sb          $zero, 0x81($s1)
    MEM_B(0X81, ctx->r17) = 0;
L_8003C888:
    // 0x8003C888: jal         0x80076A3C
    // 0x8003C88C: nop

    func_80076A3C_51E3C(rdram, ctx);
        goto after_78;
    // 0x8003C88C: nop

    after_78:
    // 0x8003C890: jal         0x8004C3C0
    // 0x8003C894: nop

    func_8004C3C0_277C0(rdram, ctx);
        goto after_79;
    // 0x8003C894: nop

    after_79:
    // 0x8003C898: jal         0x8006EF7C
    // 0x8003C89C: nop

    func_8006EF7C_4A37C(rdram, ctx);
        goto after_80;
    // 0x8003C89C: nop

    after_80:
    // 0x8003C8A0: jal         0x80053CBC
    // 0x8003C8A4: nop

    func_80053CBC_2F0BC(rdram, ctx);
        goto after_81;
    // 0x8003C8A4: nop

    after_81:
    // 0x8003C8A8: jal         0x8004C05C
    // 0x8003C8AC: nop

    func_8004C05C_2745C(rdram, ctx);
        goto after_82;
    // 0x8003C8AC: nop

    after_82:
    // 0x8003C8B0: jal         0x8004BFB0
    // 0x8003C8B4: nop

    func_8004BFB0_273B0(rdram, ctx);
        goto after_83;
    // 0x8003C8B4: nop

    after_83:
    // 0x8003C8B8: jal         0x8004C1AC
    // 0x8003C8BC: nop

    func_8004C1AC_275AC(rdram, ctx);
        goto after_84;
    // 0x8003C8BC: nop

    after_84:
    // 0x8003C8C0: jal         0x8004C270
    // 0x8003C8C4: nop

    func_8004C270_27670(rdram, ctx);
        goto after_85;
    // 0x8003C8C4: nop

    after_85:
    // 0x8003C8C8: jal         0x8004C45C
    // 0x8003C8CC: nop

    func_8004C45C_2785C(rdram, ctx);
        goto after_86;
    // 0x8003C8CC: nop

    after_86:
    // 0x8003C8D0: jal         0x800472F0
    // 0x8003C8D4: nop

    func_800472F0_226F0(rdram, ctx);
        goto after_87;
    // 0x8003C8D4: nop

    after_87:
    // 0x8003C8D8: jal         0x80069D44
    // 0x8003C8DC: nop

    func_80069D44_45144(rdram, ctx);
        goto after_88;
    // 0x8003C8DC: nop

    after_88:
    // 0x8003C8E0: jal         0x8004C108
    // 0x8003C8E4: nop

    func_8004C108_27508(rdram, ctx);
        goto after_89;
    // 0x8003C8E4: nop

    after_89:
    // 0x8003C8E8: jal         0x8004C314
    // 0x8003C8EC: nop

    func_8004C314_27714(rdram, ctx);
        goto after_90;
    // 0x8003C8EC: nop

    after_90:
    // 0x8003C8F0: jal         0x80033950
    // 0x8003C8F4: nop

    func_80033950_ED50(rdram, ctx);
        goto after_91;
    // 0x8003C8F4: nop

    after_91:
    // 0x8003C8F8: jal         0x800521A8
    // 0x8003C8FC: nop

    func_800521A8_2D5A8(rdram, ctx);
        goto after_92;
    // 0x8003C8FC: nop

    after_92:
    // 0x8003C900: jal         0x800719B4
    // 0x8003C904: nop

    func_800719B4_4CDB4(rdram, ctx);
        goto after_93;
    // 0x8003C904: nop

    after_93:
    // 0x8003C908: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003C90C: lb          $v1, -0x3C18($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3C18);
    // 0x8003C910: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8003C914: bne         $v1, $v0, L_8003C954
    if (ctx->r3 != ctx->r2) {
        // 0x8003C918: lui         $v0, 0xFFFF
        ctx->r2 = S32(0XFFFF << 16);
            goto L_8003C954;
    }
    // 0x8003C918: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x8003C91C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003C920: lw          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3BC8);
    // 0x8003C924: and         $a0, $v1, $v0
    ctx->r4 = ctx->r3 & ctx->r2;
    // 0x8003C928: lui         $v1, 0x302
    ctx->r3 = S32(0X302 << 16);
    // 0x8003C92C: xor         $v1, $a0, $v1
    ctx->r3 = ctx->r4 ^ ctx->r3;
    // 0x8003C930: sltu        $v1, $zero, $v1
    ctx->r3 = 0 < ctx->r3 ? 1 : 0;
    // 0x8003C934: lui         $v0, 0x130B
    ctx->r2 = S32(0X130B << 16);
    // 0x8003C938: xor         $v0, $a0, $v0
    ctx->r2 = ctx->r4 ^ ctx->r2;
    // 0x8003C93C: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x8003C940: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8003C944: beq         $v1, $zero, L_8003C95C
    if (ctx->r3 == 0) {
        // 0x8003C948: lui         $v0, 0x1B06
        ctx->r2 = S32(0X1B06 << 16);
            goto L_8003C95C;
    }
    // 0x8003C948: lui         $v0, 0x1B06
    ctx->r2 = S32(0X1B06 << 16);
    // 0x8003C94C: beq         $a0, $v0, L_8003C95C
    if (ctx->r4 == ctx->r2) {
        // 0x8003C950: nop
    
            goto L_8003C95C;
    }
    // 0x8003C950: nop

L_8003C954:
    // 0x8003C954: jal         0x80048C7C
    // 0x8003C958: nop

    func_80048C7C_2407C(rdram, ctx);
        goto after_94;
    // 0x8003C958: nop

    after_94:
L_8003C95C:
    // 0x8003C95C: jal         0x8004A6B4
    // 0x8003C960: nop

    func_8004A6B4_25AB4(rdram, ctx);
        goto after_95;
    // 0x8003C960: nop

    after_95:
    // 0x8003C964: jal         0x8003912C
    // 0x8003C968: nop

    func_8003912C_1452C(rdram, ctx);
        goto after_96;
    // 0x8003C968: nop

    after_96:
    // 0x8003C96C: jal         0x80037F78
    // 0x8003C970: nop

    func_80037F78_13378(rdram, ctx);
        goto after_97;
    // 0x8003C970: nop

    after_97:
    // 0x8003C974: jal         0x8003A248
    // 0x8003C978: nop

    func_8003A248_15648(rdram, ctx);
        goto after_98;
    // 0x8003C978: nop

    after_98:
    // 0x8003C97C: jal         0x8003A7CC
    // 0x8003C980: nop

    func_8003A7CC_15BCC(rdram, ctx);
        goto after_99;
    // 0x8003C980: nop

    after_99:
    // 0x8003C984: jal         0x8002A02C
    // 0x8003C988: nop

    func_8002A02C_542C(rdram, ctx);
        goto after_100;
    // 0x8003C988: nop

    after_100:
    // 0x8003C98C: lbu         $v1, 0x19($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X19);
    // 0x8003C990: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8003C994: bne         $v1, $v0, L_8003C9AC
    if (ctx->r3 != ctx->r2) {
        // 0x8003C998: sltiu       $v0, $v1, 0x10
        ctx->r2 = ctx->r3 < 0X10 ? 1 : 0;
            goto L_8003C9AC;
    }
    // 0x8003C998: sltiu       $v0, $v1, 0x10
    ctx->r2 = ctx->r3 < 0X10 ? 1 : 0;
    // 0x8003C99C: lbu         $v0, 0x1($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X1);
    // 0x8003C9A0: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8003C9A4: j           L_8003CF84
    // 0x8003C9A8: sb          $v0, 0x1($s1)
    MEM_B(0X1, ctx->r17) = ctx->r2;
        goto L_8003CF84;
    // 0x8003C9A8: sb          $v0, 0x1($s1)
    MEM_B(0X1, ctx->r17) = ctx->r2;
L_8003C9AC:
    // 0x8003C9AC: beq         $v0, $zero, L_8003C9C0
    if (ctx->r2 == 0) {
        // 0x8003C9B0: nop
    
            goto L_8003C9C0;
    }
    // 0x8003C9B0: nop

    // 0x8003C9B4: lbu         $v0, 0x1($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X1);
    // 0x8003C9B8: j           L_8003C9DC
    // 0x8003C9BC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8003C9DC;
    // 0x8003C9BC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8003C9C0:
    // 0x8003C9C0: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x8003C9C4: sb          $zero, 0x110($s0)
    MEM_B(0X110, ctx->r16) = 0;
    // 0x8003C9C8: sb          $zero, 0x111($s0)
    MEM_B(0X111, ctx->r16) = 0;
    // 0x8003C9CC: ori         $v0, $v0, 0x3
    ctx->r2 = ctx->r2 | 0X3;
    // 0x8003C9D0: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
    // 0x8003C9D4: lbu         $v0, 0x1($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X1);
    // 0x8003C9D8: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_8003C9DC:
    // 0x8003C9DC: sb          $v0, 0x1($s1)
    MEM_B(0X1, ctx->r17) = ctx->r2;
    // 0x8003C9E0: jal         0x80036E48
    // 0x8003C9E4: lbu         $a0, 0x19($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X19);
    func_80036E48_12248(rdram, ctx);
        goto after_101;
    // 0x8003C9E4: lbu         $a0, 0x19($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X19);
    after_101:
    // 0x8003C9E8: j           L_8003CF84
    // 0x8003C9EC: nop

        goto L_8003CF84;
    // 0x8003C9EC: nop

L_8003C9F0:
    // 0x8003C9F0: jal         0x80076A3C
    // 0x8003C9F4: nop

    func_80076A3C_51E3C(rdram, ctx);
        goto after_102;
    // 0x8003C9F4: nop

    after_102:
    // 0x8003C9F8: jal         0x8004C3C0
    // 0x8003C9FC: nop

    func_8004C3C0_277C0(rdram, ctx);
        goto after_103;
    // 0x8003C9FC: nop

    after_103:
    // 0x8003CA00: jal         0x8006EF7C
    // 0x8003CA04: nop

    func_8006EF7C_4A37C(rdram, ctx);
        goto after_104;
    // 0x8003CA04: nop

    after_104:
    // 0x8003CA08: jal         0x80053CBC
    // 0x8003CA0C: nop

    func_80053CBC_2F0BC(rdram, ctx);
        goto after_105;
    // 0x8003CA0C: nop

    after_105:
    // 0x8003CA10: jal         0x8004C05C
    // 0x8003CA14: nop

    func_8004C05C_2745C(rdram, ctx);
        goto after_106;
    // 0x8003CA14: nop

    after_106:
    // 0x8003CA18: jal         0x8004BFB0
    // 0x8003CA1C: nop

    func_8004BFB0_273B0(rdram, ctx);
        goto after_107;
    // 0x8003CA1C: nop

    after_107:
    // 0x8003CA20: jal         0x8004C1AC
    // 0x8003CA24: nop

    func_8004C1AC_275AC(rdram, ctx);
        goto after_108;
    // 0x8003CA24: nop

    after_108:
    // 0x8003CA28: jal         0x8004C270
    // 0x8003CA2C: nop

    func_8004C270_27670(rdram, ctx);
        goto after_109;
    // 0x8003CA2C: nop

    after_109:
    // 0x8003CA30: jal         0x8004C45C
    // 0x8003CA34: nop

    func_8004C45C_2785C(rdram, ctx);
        goto after_110;
    // 0x8003CA34: nop

    after_110:
    // 0x8003CA38: jal         0x800472F0
    // 0x8003CA3C: nop

    func_800472F0_226F0(rdram, ctx);
        goto after_111;
    // 0x8003CA3C: nop

    after_111:
    // 0x8003CA40: jal         0x80069D44
    // 0x8003CA44: nop

    func_80069D44_45144(rdram, ctx);
        goto after_112;
    // 0x8003CA44: nop

    after_112:
    // 0x8003CA48: jal         0x8004C108
    // 0x8003CA4C: nop

    func_8004C108_27508(rdram, ctx);
        goto after_113;
    // 0x8003CA4C: nop

    after_113:
    // 0x8003CA50: jal         0x8004C314
    // 0x8003CA54: nop

    func_8004C314_27714(rdram, ctx);
        goto after_114;
    // 0x8003CA54: nop

    after_114:
    // 0x8003CA58: jal         0x80033950
    // 0x8003CA5C: nop

    func_80033950_ED50(rdram, ctx);
        goto after_115;
    // 0x8003CA5C: nop

    after_115:
    // 0x8003CA60: jal         0x800521A8
    // 0x8003CA64: nop

    func_800521A8_2D5A8(rdram, ctx);
        goto after_116;
    // 0x8003CA64: nop

    after_116:
    // 0x8003CA68: jal         0x800719B4
    // 0x8003CA6C: nop

    func_800719B4_4CDB4(rdram, ctx);
        goto after_117;
    // 0x8003CA6C: nop

    after_117:
    // 0x8003CA70: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003CA74: lb          $v1, -0x3C18($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3C18);
    // 0x8003CA78: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8003CA7C: bne         $v1, $v0, L_8003CABC
    if (ctx->r3 != ctx->r2) {
        // 0x8003CA80: lui         $v0, 0xFFFF
        ctx->r2 = S32(0XFFFF << 16);
            goto L_8003CABC;
    }
    // 0x8003CA80: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x8003CA84: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003CA88: lw          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3BC8);
    // 0x8003CA8C: and         $a0, $v1, $v0
    ctx->r4 = ctx->r3 & ctx->r2;
    // 0x8003CA90: lui         $v1, 0x302
    ctx->r3 = S32(0X302 << 16);
    // 0x8003CA94: xor         $v1, $a0, $v1
    ctx->r3 = ctx->r4 ^ ctx->r3;
    // 0x8003CA98: sltu        $v1, $zero, $v1
    ctx->r3 = 0 < ctx->r3 ? 1 : 0;
    // 0x8003CA9C: lui         $v0, 0x130B
    ctx->r2 = S32(0X130B << 16);
    // 0x8003CAA0: xor         $v0, $a0, $v0
    ctx->r2 = ctx->r4 ^ ctx->r2;
    // 0x8003CAA4: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x8003CAA8: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8003CAAC: beq         $v1, $zero, L_8003CAC4
    if (ctx->r3 == 0) {
        // 0x8003CAB0: lui         $v0, 0x1B06
        ctx->r2 = S32(0X1B06 << 16);
            goto L_8003CAC4;
    }
    // 0x8003CAB0: lui         $v0, 0x1B06
    ctx->r2 = S32(0X1B06 << 16);
    // 0x8003CAB4: beq         $a0, $v0, L_8003CAC4
    if (ctx->r4 == ctx->r2) {
        // 0x8003CAB8: nop
    
            goto L_8003CAC4;
    }
    // 0x8003CAB8: nop

L_8003CABC:
    // 0x8003CABC: jal         0x80048C7C
    // 0x8003CAC0: nop

    func_80048C7C_2407C(rdram, ctx);
        goto after_118;
    // 0x8003CAC0: nop

    after_118:
L_8003CAC4:
    // 0x8003CAC4: jal         0x8004A6B4
    // 0x8003CAC8: nop

    func_8004A6B4_25AB4(rdram, ctx);
        goto after_119;
    // 0x8003CAC8: nop

    after_119:
    // 0x8003CACC: jal         0x8003912C
    // 0x8003CAD0: nop

    func_8003912C_1452C(rdram, ctx);
        goto after_120;
    // 0x8003CAD0: nop

    after_120:
    // 0x8003CAD4: jal         0x80037F78
    // 0x8003CAD8: nop

    func_80037F78_13378(rdram, ctx);
        goto after_121;
    // 0x8003CAD8: nop

    after_121:
    // 0x8003CADC: jal         0x8003A248
    // 0x8003CAE0: nop

    func_8003A248_15648(rdram, ctx);
        goto after_122;
    // 0x8003CAE0: nop

    after_122:
    // 0x8003CAE4: jal         0x8003A7CC
    // 0x8003CAE8: nop

    func_8003A7CC_15BCC(rdram, ctx);
        goto after_123;
    // 0x8003CAE8: nop

    after_123:
    // 0x8003CAEC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8003CAF0: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8003CAF4: beq         $v0, $zero, L_8003CC0C
    if (ctx->r2 == 0) {
        // 0x8003CAF8: nop
    
            goto L_8003CC0C;
    }
    // 0x8003CAF8: nop

    // 0x8003CAFC: j           L_8003CF84
    // 0x8003CB00: nop

        goto L_8003CF84;
    // 0x8003CB00: nop

L_8003CB04:
    // 0x8003CB04: jal         0x80076A3C
    // 0x8003CB08: nop

    func_80076A3C_51E3C(rdram, ctx);
        goto after_124;
    // 0x8003CB08: nop

    after_124:
    // 0x8003CB0C: jal         0x8004C3C0
    // 0x8003CB10: nop

    func_8004C3C0_277C0(rdram, ctx);
        goto after_125;
    // 0x8003CB10: nop

    after_125:
    // 0x8003CB14: jal         0x8006EF7C
    // 0x8003CB18: nop

    func_8006EF7C_4A37C(rdram, ctx);
        goto after_126;
    // 0x8003CB18: nop

    after_126:
    // 0x8003CB1C: jal         0x80053CBC
    // 0x8003CB20: nop

    func_80053CBC_2F0BC(rdram, ctx);
        goto after_127;
    // 0x8003CB20: nop

    after_127:
    // 0x8003CB24: jal         0x8004C05C
    // 0x8003CB28: nop

    func_8004C05C_2745C(rdram, ctx);
        goto after_128;
    // 0x8003CB28: nop

    after_128:
    // 0x8003CB2C: jal         0x8004BFB0
    // 0x8003CB30: nop

    func_8004BFB0_273B0(rdram, ctx);
        goto after_129;
    // 0x8003CB30: nop

    after_129:
    // 0x8003CB34: jal         0x8004C1AC
    // 0x8003CB38: nop

    func_8004C1AC_275AC(rdram, ctx);
        goto after_130;
    // 0x8003CB38: nop

    after_130:
    // 0x8003CB3C: jal         0x8004C270
    // 0x8003CB40: nop

    func_8004C270_27670(rdram, ctx);
        goto after_131;
    // 0x8003CB40: nop

    after_131:
    // 0x8003CB44: jal         0x8004C45C
    // 0x8003CB48: nop

    func_8004C45C_2785C(rdram, ctx);
        goto after_132;
    // 0x8003CB48: nop

    after_132:
    // 0x8003CB4C: jal         0x800472F0
    // 0x8003CB50: nop

    func_800472F0_226F0(rdram, ctx);
        goto after_133;
    // 0x8003CB50: nop

    after_133:
    // 0x8003CB54: jal         0x80069D44
    // 0x8003CB58: nop

    func_80069D44_45144(rdram, ctx);
        goto after_134;
    // 0x8003CB58: nop

    after_134:
    // 0x8003CB5C: jal         0x8004C108
    // 0x8003CB60: nop

    func_8004C108_27508(rdram, ctx);
        goto after_135;
    // 0x8003CB60: nop

    after_135:
    // 0x8003CB64: jal         0x8004C314
    // 0x8003CB68: nop

    func_8004C314_27714(rdram, ctx);
        goto after_136;
    // 0x8003CB68: nop

    after_136:
    // 0x8003CB6C: jal         0x80033950
    // 0x8003CB70: nop

    func_80033950_ED50(rdram, ctx);
        goto after_137;
    // 0x8003CB70: nop

    after_137:
    // 0x8003CB74: jal         0x800521A8
    // 0x8003CB78: nop

    func_800521A8_2D5A8(rdram, ctx);
        goto after_138;
    // 0x8003CB78: nop

    after_138:
    // 0x8003CB7C: jal         0x800719B4
    // 0x8003CB80: nop

    func_800719B4_4CDB4(rdram, ctx);
        goto after_139;
    // 0x8003CB80: nop

    after_139:
    // 0x8003CB84: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003CB88: lb          $v1, -0x3C18($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3C18);
    // 0x8003CB8C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8003CB90: bne         $v1, $v0, L_8003CBD0
    if (ctx->r3 != ctx->r2) {
        // 0x8003CB94: lui         $v0, 0xFFFF
        ctx->r2 = S32(0XFFFF << 16);
            goto L_8003CBD0;
    }
    // 0x8003CB94: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x8003CB98: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003CB9C: lw          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3BC8);
    // 0x8003CBA0: and         $a0, $v1, $v0
    ctx->r4 = ctx->r3 & ctx->r2;
    // 0x8003CBA4: lui         $v1, 0x302
    ctx->r3 = S32(0X302 << 16);
    // 0x8003CBA8: xor         $v1, $a0, $v1
    ctx->r3 = ctx->r4 ^ ctx->r3;
    // 0x8003CBAC: sltu        $v1, $zero, $v1
    ctx->r3 = 0 < ctx->r3 ? 1 : 0;
    // 0x8003CBB0: lui         $v0, 0x130B
    ctx->r2 = S32(0X130B << 16);
    // 0x8003CBB4: xor         $v0, $a0, $v0
    ctx->r2 = ctx->r4 ^ ctx->r2;
    // 0x8003CBB8: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x8003CBBC: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8003CBC0: beq         $v1, $zero, L_8003CBD8
    if (ctx->r3 == 0) {
        // 0x8003CBC4: lui         $v0, 0x1B06
        ctx->r2 = S32(0X1B06 << 16);
            goto L_8003CBD8;
    }
    // 0x8003CBC4: lui         $v0, 0x1B06
    ctx->r2 = S32(0X1B06 << 16);
    // 0x8003CBC8: beq         $a0, $v0, L_8003CBD8
    if (ctx->r4 == ctx->r2) {
        // 0x8003CBCC: nop
    
            goto L_8003CBD8;
    }
    // 0x8003CBCC: nop

L_8003CBD0:
    // 0x8003CBD0: jal         0x80048C7C
    // 0x8003CBD4: nop

    func_80048C7C_2407C(rdram, ctx);
        goto after_140;
    // 0x8003CBD4: nop

    after_140:
L_8003CBD8:
    // 0x8003CBD8: jal         0x8004A6B4
    // 0x8003CBDC: nop

    func_8004A6B4_25AB4(rdram, ctx);
        goto after_141;
    // 0x8003CBDC: nop

    after_141:
    // 0x8003CBE0: jal         0x8003912C
    // 0x8003CBE4: nop

    func_8003912C_1452C(rdram, ctx);
        goto after_142;
    // 0x8003CBE4: nop

    after_142:
    // 0x8003CBE8: jal         0x80037F78
    // 0x8003CBEC: nop

    func_80037F78_13378(rdram, ctx);
        goto after_143;
    // 0x8003CBEC: nop

    after_143:
    // 0x8003CBF0: jal         0x8003A248
    // 0x8003CBF4: nop

    func_8003A248_15648(rdram, ctx);
        goto after_144;
    // 0x8003CBF4: nop

    after_144:
    // 0x8003CBF8: jal         0x8003A7CC
    // 0x8003CBFC: nop

    func_8003A7CC_15BCC(rdram, ctx);
        goto after_145;
    // 0x8003CBFC: nop

    after_145:
    // 0x8003CC00: lbu         $v0, 0x14($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X14);
    // 0x8003CC04: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8003CC08: sb          $v0, 0x14($s2)
    MEM_B(0X14, ctx->r18) = ctx->r2;
L_8003CC0C:
    // 0x8003CC0C: lbu         $v0, 0x1($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X1);
    // 0x8003CC10: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8003CC14: j           L_8003CF84
    // 0x8003CC18: sb          $v0, 0x1($s1)
    MEM_B(0X1, ctx->r17) = ctx->r2;
        goto L_8003CF84;
    // 0x8003CC18: sb          $v0, 0x1($s1)
    MEM_B(0X1, ctx->r17) = ctx->r2;
L_8003CC1C:
    // 0x8003CC1C: lb          $v1, 0x14($s2)
    ctx->r3 = MEM_B(ctx->r18, 0X14);
    // 0x8003CC20: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8003CC24: bne         $v1, $v0, L_8003CD78
    if (ctx->r3 != ctx->r2) {
        // 0x8003CC28: nop
    
            goto L_8003CD78;
    }
    // 0x8003CC28: nop

    // 0x8003CC2C: jal         0x80076A3C
    // 0x8003CC30: nop

    func_80076A3C_51E3C(rdram, ctx);
        goto after_146;
    // 0x8003CC30: nop

    after_146:
    // 0x8003CC34: jal         0x8004C3C0
    // 0x8003CC38: nop

    func_8004C3C0_277C0(rdram, ctx);
        goto after_147;
    // 0x8003CC38: nop

    after_147:
    // 0x8003CC3C: jal         0x8006EF7C
    // 0x8003CC40: nop

    func_8006EF7C_4A37C(rdram, ctx);
        goto after_148;
    // 0x8003CC40: nop

    after_148:
    // 0x8003CC44: jal         0x80053CBC
    // 0x8003CC48: nop

    func_80053CBC_2F0BC(rdram, ctx);
        goto after_149;
    // 0x8003CC48: nop

    after_149:
    // 0x8003CC4C: jal         0x8004C05C
    // 0x8003CC50: nop

    func_8004C05C_2745C(rdram, ctx);
        goto after_150;
    // 0x8003CC50: nop

    after_150:
    // 0x8003CC54: jal         0x8004BFB0
    // 0x8003CC58: nop

    func_8004BFB0_273B0(rdram, ctx);
        goto after_151;
    // 0x8003CC58: nop

    after_151:
    // 0x8003CC5C: jal         0x8004C1AC
    // 0x8003CC60: nop

    func_8004C1AC_275AC(rdram, ctx);
        goto after_152;
    // 0x8003CC60: nop

    after_152:
    // 0x8003CC64: jal         0x8004C270
    // 0x8003CC68: nop

    func_8004C270_27670(rdram, ctx);
        goto after_153;
    // 0x8003CC68: nop

    after_153:
    // 0x8003CC6C: jal         0x8004C45C
    // 0x8003CC70: nop

    func_8004C45C_2785C(rdram, ctx);
        goto after_154;
    // 0x8003CC70: nop

    after_154:
    // 0x8003CC74: jal         0x800472F0
    // 0x8003CC78: nop

    func_800472F0_226F0(rdram, ctx);
        goto after_155;
    // 0x8003CC78: nop

    after_155:
    // 0x8003CC7C: jal         0x80069D44
    // 0x8003CC80: nop

    func_80069D44_45144(rdram, ctx);
        goto after_156;
    // 0x8003CC80: nop

    after_156:
    // 0x8003CC84: jal         0x8004C108
    // 0x8003CC88: nop

    func_8004C108_27508(rdram, ctx);
        goto after_157;
    // 0x8003CC88: nop

    after_157:
    // 0x8003CC8C: jal         0x8004C314
    // 0x8003CC90: nop

    func_8004C314_27714(rdram, ctx);
        goto after_158;
    // 0x8003CC90: nop

    after_158:
    // 0x8003CC94: jal         0x80033950
    // 0x8003CC98: nop

    func_80033950_ED50(rdram, ctx);
        goto after_159;
    // 0x8003CC98: nop

    after_159:
    // 0x8003CC9C: jal         0x800521A8
    // 0x8003CCA0: nop

    func_800521A8_2D5A8(rdram, ctx);
        goto after_160;
    // 0x8003CCA0: nop

    after_160:
    // 0x8003CCA4: jal         0x800719B4
    // 0x8003CCA8: nop

    func_800719B4_4CDB4(rdram, ctx);
        goto after_161;
    // 0x8003CCA8: nop

    after_161:
    // 0x8003CCAC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003CCB0: lb          $v1, -0x3C18($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3C18);
    // 0x8003CCB4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8003CCB8: bne         $v1, $v0, L_8003CCF8
    if (ctx->r3 != ctx->r2) {
        // 0x8003CCBC: lui         $v0, 0xFFFF
        ctx->r2 = S32(0XFFFF << 16);
            goto L_8003CCF8;
    }
    // 0x8003CCBC: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x8003CCC0: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003CCC4: lw          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3BC8);
    // 0x8003CCC8: and         $a0, $v1, $v0
    ctx->r4 = ctx->r3 & ctx->r2;
    // 0x8003CCCC: lui         $v1, 0x302
    ctx->r3 = S32(0X302 << 16);
    // 0x8003CCD0: xor         $v1, $a0, $v1
    ctx->r3 = ctx->r4 ^ ctx->r3;
    // 0x8003CCD4: sltu        $v1, $zero, $v1
    ctx->r3 = 0 < ctx->r3 ? 1 : 0;
    // 0x8003CCD8: lui         $v0, 0x130B
    ctx->r2 = S32(0X130B << 16);
    // 0x8003CCDC: xor         $v0, $a0, $v0
    ctx->r2 = ctx->r4 ^ ctx->r2;
    // 0x8003CCE0: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x8003CCE4: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8003CCE8: beq         $v1, $zero, L_8003CD00
    if (ctx->r3 == 0) {
        // 0x8003CCEC: lui         $v0, 0x1B06
        ctx->r2 = S32(0X1B06 << 16);
            goto L_8003CD00;
    }
    // 0x8003CCEC: lui         $v0, 0x1B06
    ctx->r2 = S32(0X1B06 << 16);
    // 0x8003CCF0: beq         $a0, $v0, L_8003CD00
    if (ctx->r4 == ctx->r2) {
        // 0x8003CCF4: nop
    
            goto L_8003CD00;
    }
    // 0x8003CCF4: nop

L_8003CCF8:
    // 0x8003CCF8: jal         0x80048C7C
    // 0x8003CCFC: nop

    func_80048C7C_2407C(rdram, ctx);
        goto after_162;
    // 0x8003CCFC: nop

    after_162:
L_8003CD00:
    // 0x8003CD00: jal         0x8004A6B4
    // 0x8003CD04: nop

    func_8004A6B4_25AB4(rdram, ctx);
        goto after_163;
    // 0x8003CD04: nop

    after_163:
    // 0x8003CD08: jal         0x8003912C
    // 0x8003CD0C: nop

    func_8003912C_1452C(rdram, ctx);
        goto after_164;
    // 0x8003CD0C: nop

    after_164:
    // 0x8003CD10: jal         0x80037F78
    // 0x8003CD14: nop

    func_80037F78_13378(rdram, ctx);
        goto after_165;
    // 0x8003CD14: nop

    after_165:
    // 0x8003CD18: jal         0x8003A248
    // 0x8003CD1C: nop

    func_8003A248_15648(rdram, ctx);
        goto after_166;
    // 0x8003CD1C: nop

    after_166:
    // 0x8003CD20: jal         0x8003A7CC
    // 0x8003CD24: nop

    func_8003A7CC_15BCC(rdram, ctx);
        goto after_167;
    // 0x8003CD24: nop

    after_167:
    // 0x8003CD28: lb          $v1, 0x50($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X50);
    // 0x8003CD2C: lbu         $v0, 0x16($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X16);
    // 0x8003CD30: beq         $v1, $v0, L_8003CD44
    if (ctx->r3 == ctx->r2) {
        // 0x8003CD34: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8003CD44;
    }
    // 0x8003CD34: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8003CD38: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8003CD3C: j           L_8003CD50
    // 0x8003CD40: sb          $v0, 0x1($s1)
    MEM_B(0X1, ctx->r17) = ctx->r2;
        goto L_8003CD50;
    // 0x8003CD40: sb          $v0, 0x1($s1)
    MEM_B(0X1, ctx->r17) = ctx->r2;
L_8003CD44:
    // 0x8003CD44: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8003CD48: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8003CD4C: sb          $zero, 0x1($s1)
    MEM_B(0X1, ctx->r17) = 0;
L_8003CD50:
    // 0x8003CD50: jal         0x80071F9C
    // 0x8003CD54: nop

    func_80071F9C_4D39C(rdram, ctx);
        goto after_168;
    // 0x8003CD54: nop

    after_168:
    // 0x8003CD58: jal         0x80061724
    // 0x8003CD5C: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_169;
    // 0x8003CD5C: nop

    after_169:
    // 0x8003CD60: jal         0x8004B5E8
    // 0x8003CD64: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    func_8004B5E8_269E8(rdram, ctx);
        goto after_170;
    // 0x8003CD64: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    after_170:
    // 0x8003CD68: jal         0x80061090
    // 0x8003CD6C: nop

    func_80061090_3C490(rdram, ctx);
        goto after_171;
    // 0x8003CD6C: nop

    after_171:
    // 0x8003CD70: j           L_8003CF84
    // 0x8003CD74: nop

        goto L_8003CF84;
    // 0x8003CD74: nop

L_8003CD78:
    // 0x8003CD78: jal         0x80076A3C
    // 0x8003CD7C: nop

    func_80076A3C_51E3C(rdram, ctx);
        goto after_172;
    // 0x8003CD7C: nop

    after_172:
    // 0x8003CD80: jal         0x8004C3C0
    // 0x8003CD84: nop

    func_8004C3C0_277C0(rdram, ctx);
        goto after_173;
    // 0x8003CD84: nop

    after_173:
    // 0x8003CD88: jal         0x8006EF7C
    // 0x8003CD8C: nop

    func_8006EF7C_4A37C(rdram, ctx);
        goto after_174;
    // 0x8003CD8C: nop

    after_174:
    // 0x8003CD90: jal         0x80053CBC
    // 0x8003CD94: nop

    func_80053CBC_2F0BC(rdram, ctx);
        goto after_175;
    // 0x8003CD94: nop

    after_175:
    // 0x8003CD98: jal         0x8004C05C
    // 0x8003CD9C: nop

    func_8004C05C_2745C(rdram, ctx);
        goto after_176;
    // 0x8003CD9C: nop

    after_176:
    // 0x8003CDA0: jal         0x8004BFB0
    // 0x8003CDA4: nop

    func_8004BFB0_273B0(rdram, ctx);
        goto after_177;
    // 0x8003CDA4: nop

    after_177:
    // 0x8003CDA8: jal         0x8004C1AC
    // 0x8003CDAC: nop

    func_8004C1AC_275AC(rdram, ctx);
        goto after_178;
    // 0x8003CDAC: nop

    after_178:
    // 0x8003CDB0: jal         0x8004C270
    // 0x8003CDB4: nop

    func_8004C270_27670(rdram, ctx);
        goto after_179;
    // 0x8003CDB4: nop

    after_179:
    // 0x8003CDB8: jal         0x8004C45C
    // 0x8003CDBC: nop

    func_8004C45C_2785C(rdram, ctx);
        goto after_180;
    // 0x8003CDBC: nop

    after_180:
    // 0x8003CDC0: jal         0x800472F0
    // 0x8003CDC4: nop

    func_800472F0_226F0(rdram, ctx);
        goto after_181;
    // 0x8003CDC4: nop

    after_181:
    // 0x8003CDC8: jal         0x80069D44
    // 0x8003CDCC: nop

    func_80069D44_45144(rdram, ctx);
        goto after_182;
    // 0x8003CDCC: nop

    after_182:
    // 0x8003CDD0: jal         0x8004C108
    // 0x8003CDD4: nop

    func_8004C108_27508(rdram, ctx);
        goto after_183;
    // 0x8003CDD4: nop

    after_183:
    // 0x8003CDD8: jal         0x8004C314
    // 0x8003CDDC: nop

    func_8004C314_27714(rdram, ctx);
        goto after_184;
    // 0x8003CDDC: nop

    after_184:
    // 0x8003CDE0: jal         0x80033950
    // 0x8003CDE4: nop

    func_80033950_ED50(rdram, ctx);
        goto after_185;
    // 0x8003CDE4: nop

    after_185:
    // 0x8003CDE8: jal         0x800521A8
    // 0x8003CDEC: nop

    func_800521A8_2D5A8(rdram, ctx);
        goto after_186;
    // 0x8003CDEC: nop

    after_186:
    // 0x8003CDF0: jal         0x800719B4
    // 0x8003CDF4: nop

    func_800719B4_4CDB4(rdram, ctx);
        goto after_187;
    // 0x8003CDF4: nop

    after_187:
    // 0x8003CDF8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003CDFC: lb          $v1, -0x3C18($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3C18);
    // 0x8003CE00: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8003CE04: bne         $v1, $v0, L_8003CE44
    if (ctx->r3 != ctx->r2) {
        // 0x8003CE08: lui         $v0, 0xFFFF
        ctx->r2 = S32(0XFFFF << 16);
            goto L_8003CE44;
    }
    // 0x8003CE08: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x8003CE0C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003CE10: lw          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3BC8);
    // 0x8003CE14: and         $a0, $v1, $v0
    ctx->r4 = ctx->r3 & ctx->r2;
    // 0x8003CE18: lui         $v1, 0x302
    ctx->r3 = S32(0X302 << 16);
    // 0x8003CE1C: xor         $v1, $a0, $v1
    ctx->r3 = ctx->r4 ^ ctx->r3;
    // 0x8003CE20: sltu        $v1, $zero, $v1
    ctx->r3 = 0 < ctx->r3 ? 1 : 0;
    // 0x8003CE24: lui         $v0, 0x130B
    ctx->r2 = S32(0X130B << 16);
    // 0x8003CE28: xor         $v0, $a0, $v0
    ctx->r2 = ctx->r4 ^ ctx->r2;
    // 0x8003CE2C: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x8003CE30: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8003CE34: beq         $v1, $zero, L_8003CE4C
    if (ctx->r3 == 0) {
        // 0x8003CE38: lui         $v0, 0x1B06
        ctx->r2 = S32(0X1B06 << 16);
            goto L_8003CE4C;
    }
    // 0x8003CE38: lui         $v0, 0x1B06
    ctx->r2 = S32(0X1B06 << 16);
    // 0x8003CE3C: beq         $a0, $v0, L_8003CE4C
    if (ctx->r4 == ctx->r2) {
        // 0x8003CE40: nop
    
            goto L_8003CE4C;
    }
    // 0x8003CE40: nop

L_8003CE44:
    // 0x8003CE44: jal         0x80048C7C
    // 0x8003CE48: nop

    func_80048C7C_2407C(rdram, ctx);
        goto after_188;
    // 0x8003CE48: nop

    after_188:
L_8003CE4C:
    // 0x8003CE4C: jal         0x8004A6B4
    // 0x8003CE50: nop

    func_8004A6B4_25AB4(rdram, ctx);
        goto after_189;
    // 0x8003CE50: nop

    after_189:
    // 0x8003CE54: jal         0x8003912C
    // 0x8003CE58: nop

    func_8003912C_1452C(rdram, ctx);
        goto after_190;
    // 0x8003CE58: nop

    after_190:
    // 0x8003CE5C: jal         0x80037F78
    // 0x8003CE60: nop

    func_80037F78_13378(rdram, ctx);
        goto after_191;
    // 0x8003CE60: nop

    after_191:
    // 0x8003CE64: jal         0x8003A248
    // 0x8003CE68: nop

    func_8003A248_15648(rdram, ctx);
        goto after_192;
    // 0x8003CE68: nop

    after_192:
    // 0x8003CE6C: jal         0x8003A7CC
    // 0x8003CE70: nop

    func_8003A7CC_15BCC(rdram, ctx);
        goto after_193;
    // 0x8003CE70: nop

    after_193:
    // 0x8003CE74: j           L_8003CF84
    // 0x8003CE78: nop

        goto L_8003CF84;
    // 0x8003CE78: nop

L_8003CE7C:
    // 0x8003CE7C: jal         0x80076A3C
    // 0x8003CE80: nop

    func_80076A3C_51E3C(rdram, ctx);
        goto after_194;
    // 0x8003CE80: nop

    after_194:
    // 0x8003CE84: jal         0x8004C3C0
    // 0x8003CE88: nop

    func_8004C3C0_277C0(rdram, ctx);
        goto after_195;
    // 0x8003CE88: nop

    after_195:
    // 0x8003CE8C: jal         0x8006EF7C
    // 0x8003CE90: nop

    func_8006EF7C_4A37C(rdram, ctx);
        goto after_196;
    // 0x8003CE90: nop

    after_196:
    // 0x8003CE94: jal         0x80053CBC
    // 0x8003CE98: nop

    func_80053CBC_2F0BC(rdram, ctx);
        goto after_197;
    // 0x8003CE98: nop

    after_197:
    // 0x8003CE9C: jal         0x8004C05C
    // 0x8003CEA0: nop

    func_8004C05C_2745C(rdram, ctx);
        goto after_198;
    // 0x8003CEA0: nop

    after_198:
    // 0x8003CEA4: jal         0x8004BFB0
    // 0x8003CEA8: nop

    func_8004BFB0_273B0(rdram, ctx);
        goto after_199;
    // 0x8003CEA8: nop

    after_199:
    // 0x8003CEAC: jal         0x8004C1AC
    // 0x8003CEB0: nop

    func_8004C1AC_275AC(rdram, ctx);
        goto after_200;
    // 0x8003CEB0: nop

    after_200:
    // 0x8003CEB4: jal         0x8004C270
    // 0x8003CEB8: nop

    func_8004C270_27670(rdram, ctx);
        goto after_201;
    // 0x8003CEB8: nop

    after_201:
    // 0x8003CEBC: jal         0x8004C45C
    // 0x8003CEC0: nop

    func_8004C45C_2785C(rdram, ctx);
        goto after_202;
    // 0x8003CEC0: nop

    after_202:
    // 0x8003CEC4: jal         0x800472F0
    // 0x8003CEC8: nop

    func_800472F0_226F0(rdram, ctx);
        goto after_203;
    // 0x8003CEC8: nop

    after_203:
    // 0x8003CECC: jal         0x80069D44
    // 0x8003CED0: nop

    func_80069D44_45144(rdram, ctx);
        goto after_204;
    // 0x8003CED0: nop

    after_204:
    // 0x8003CED4: jal         0x8004C108
    // 0x8003CED8: nop

    func_8004C108_27508(rdram, ctx);
        goto after_205;
    // 0x8003CED8: nop

    after_205:
    // 0x8003CEDC: jal         0x8004C314
    // 0x8003CEE0: nop

    func_8004C314_27714(rdram, ctx);
        goto after_206;
    // 0x8003CEE0: nop

    after_206:
    // 0x8003CEE4: jal         0x80033950
    // 0x8003CEE8: nop

    func_80033950_ED50(rdram, ctx);
        goto after_207;
    // 0x8003CEE8: nop

    after_207:
    // 0x8003CEEC: jal         0x800521A8
    // 0x8003CEF0: nop

    func_800521A8_2D5A8(rdram, ctx);
        goto after_208;
    // 0x8003CEF0: nop

    after_208:
    // 0x8003CEF4: jal         0x800719B4
    // 0x8003CEF8: nop

    func_800719B4_4CDB4(rdram, ctx);
        goto after_209;
    // 0x8003CEF8: nop

    after_209:
    // 0x8003CEFC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003CF00: lb          $v1, -0x3C18($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3C18);
    // 0x8003CF04: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8003CF08: bne         $v1, $v0, L_8003CF48
    if (ctx->r3 != ctx->r2) {
        // 0x8003CF0C: lui         $v0, 0xFFFF
        ctx->r2 = S32(0XFFFF << 16);
            goto L_8003CF48;
    }
    // 0x8003CF0C: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x8003CF10: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003CF14: lw          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3BC8);
    // 0x8003CF18: and         $a0, $v1, $v0
    ctx->r4 = ctx->r3 & ctx->r2;
    // 0x8003CF1C: lui         $v1, 0x302
    ctx->r3 = S32(0X302 << 16);
    // 0x8003CF20: xor         $v1, $a0, $v1
    ctx->r3 = ctx->r4 ^ ctx->r3;
    // 0x8003CF24: sltu        $v1, $zero, $v1
    ctx->r3 = 0 < ctx->r3 ? 1 : 0;
    // 0x8003CF28: lui         $v0, 0x130B
    ctx->r2 = S32(0X130B << 16);
    // 0x8003CF2C: xor         $v0, $a0, $v0
    ctx->r2 = ctx->r4 ^ ctx->r2;
    // 0x8003CF30: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x8003CF34: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8003CF38: beq         $v1, $zero, L_8003CF50
    if (ctx->r3 == 0) {
        // 0x8003CF3C: lui         $v0, 0x1B06
        ctx->r2 = S32(0X1B06 << 16);
            goto L_8003CF50;
    }
    // 0x8003CF3C: lui         $v0, 0x1B06
    ctx->r2 = S32(0X1B06 << 16);
    // 0x8003CF40: beq         $a0, $v0, L_8003CF50
    if (ctx->r4 == ctx->r2) {
        // 0x8003CF44: nop
    
            goto L_8003CF50;
    }
    // 0x8003CF44: nop

L_8003CF48:
    // 0x8003CF48: jal         0x80048C7C
    // 0x8003CF4C: nop

    func_80048C7C_2407C(rdram, ctx);
        goto after_210;
    // 0x8003CF4C: nop

    after_210:
L_8003CF50:
    // 0x8003CF50: jal         0x8004A6B4
    // 0x8003CF54: nop

    func_8004A6B4_25AB4(rdram, ctx);
        goto after_211;
    // 0x8003CF54: nop

    after_211:
    // 0x8003CF58: jal         0x8003912C
    // 0x8003CF5C: nop

    func_8003912C_1452C(rdram, ctx);
        goto after_212;
    // 0x8003CF5C: nop

    after_212:
    // 0x8003CF60: jal         0x80037F78
    // 0x8003CF64: nop

    func_80037F78_13378(rdram, ctx);
        goto after_213;
    // 0x8003CF64: nop

    after_213:
    // 0x8003CF68: jal         0x8003A248
    // 0x8003CF6C: nop

    func_8003A248_15648(rdram, ctx);
        goto after_214;
    // 0x8003CF6C: nop

    after_214:
    // 0x8003CF70: jal         0x8003A7CC
    // 0x8003CF74: nop

    func_8003A7CC_15BCC(rdram, ctx);
        goto after_215;
    // 0x8003CF74: nop

    after_215:
    // 0x8003CF78: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8003CF7C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
L_8003CF80:
    // 0x8003CF80: sb          $zero, 0x1($s1)
    MEM_B(0X1, ctx->r17) = 0;
L_8003CF84:
    // 0x8003CF84: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8003CF88: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8003CF8C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8003CF90: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8003CF94: jr          $ra
    // 0x8003CF98: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8003CF98: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8008B128_66528(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008B128: bne         $a0, $zero, L_8008B144
    if (ctx->r4 != 0) {
        // 0x8008B12C: addiu       $sp, $sp, -0x8
        ctx->r29 = ADD32(ctx->r29, -0X8);
            goto L_8008B144;
    }
    // 0x8008B12C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8008B130: j           L_8008B17C
    // 0x8008B134: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8008B17C;
    // 0x8008B134: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8008B138:
    // 0x8008B138: lw          $v0, 0x7C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X7C);
    // 0x8008B13C: j           L_8008B17C
    // 0x8008B140: nop

        goto L_8008B17C;
    // 0x8008B140: nop

L_8008B144:
    // 0x8008B144: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008B148: lw          $v0, 0x4F84($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4F84);
    // 0x8008B14C: lui         $a1, 0x8018
    ctx->r5 = S32(0X8018 << 16);
    // 0x8008B150: lw          $a1, 0x4F8C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4F8C);
    // 0x8008B154: blez        $v0, L_8008B178
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8008B158: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_8008B178;
    }
    // 0x8008B158: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x8008B15C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
L_8008B160:
    // 0x8008B160: lw          $v0, 0x44($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X44);
    // 0x8008B164: beq         $v0, $a0, L_8008B138
    if (ctx->r2 == ctx->r4) {
        // 0x8008B168: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_8008B138;
    }
    // 0x8008B168: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8008B16C: slt         $v0, $v1, $a2
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8008B170: bne         $v0, $zero, L_8008B160
    if (ctx->r2 != 0) {
        // 0x8008B174: addiu       $a1, $a1, 0x13C
        ctx->r5 = ADD32(ctx->r5, 0X13C);
            goto L_8008B160;
    }
    // 0x8008B174: addiu       $a1, $a1, 0x13C
    ctx->r5 = ADD32(ctx->r5, 0X13C);
L_8008B178:
    // 0x8008B178: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8008B17C:
    // 0x8008B17C: jr          $ra
    // 0x8008B180: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x8008B180: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void Idle_InitVideo(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80091F20: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80091F24: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80091F28: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x80091F2C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80091F30: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x80091F34: lui         $v1, 0x8000
    ctx->r3 = S32(0X8000 << 16);
    // 0x80091F38: lw          $v1, 0x300($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X300);
    // 0x80091F3C: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80091F40: addiu       $a0, $a0, 0x571C
    ctx->r4 = ADD32(ctx->r4, 0X571C);
    // 0x80091F44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80091F48: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80091F4C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80091F50: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80091F54: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80091F58: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x80091F5C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80091F60: sw          $zero, 0x5720($at)
    MEM_W(0X5720, ctx->r1) = 0;
    // 0x80091F64: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80091F68: sw          $zero, 0x5724($at)
    MEM_W(0X5724, ctx->r1) = 0;
    // 0x80091F6C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80091F70: sw          $zero, 0x5718($at)
    MEM_W(0X5718, ctx->r1) = 0;
    // 0x80091F74: sh          $v0, -0x66C($a0)
    MEM_H(-0X66C, ctx->r4) = ctx->r2;
    // 0x80091F78: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80091F7C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80091F80: sh          $v0, 0x50B2($at)
    MEM_H(0X50B2, ctx->r1) = ctx->r2;
    // 0x80091F84: andi        $v0, $s3, 0xFF
    ctx->r2 = ctx->r19 & 0XFF;
    // 0x80091F88: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80091F8C: sw          $v0, 0x5728($at)
    MEM_W(0X5728, ctx->r1) = ctx->r2;
    // 0x80091F90: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80091F94: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80091F98: sb          $v0, 0x572D($at)
    MEM_B(0X572D, ctx->r1) = ctx->r2;
    // 0x80091F9C: bne         $v1, $zero, L_80091FB0
    if (ctx->r3 != 0) {
        // 0x80091FA0: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_80091FB0;
    }
    // 0x80091FA0: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80091FA4: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x80091FA8: j           L_80091FB8
    // 0x80091FAC: sb          $v0, 0x10($a0)
    MEM_B(0X10, ctx->r4) = ctx->r2;
        goto L_80091FB8;
    // 0x80091FAC: sb          $v0, 0x10($a0)
    MEM_B(0X10, ctx->r4) = ctx->r2;
L_80091FB0:
    // 0x80091FB0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80091FB4: sb          $v0, 0x572C($at)
    MEM_B(0X572C, ctx->r1) = ctx->r2;
L_80091FB8:
    // 0x80091FB8: lui         $s0, 0x8021
    ctx->r16 = S32(0X8021 << 16);
    // 0x80091FBC: addiu       $s0, $s0, 0x5124
    ctx->r16 = ADD32(ctx->r16, 0X5124);
    // 0x80091FC0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80091FC4: addiu       $a1, $s0, 0x18
    ctx->r5 = ADD32(ctx->r16, 0X18);
    // 0x80091FC8: lui         $at, 0x8019
    ctx->r1 = S32(0X8019 << 16);
    // 0x80091FCC: sb          $zero, 0x5474($at)
    MEM_B(0X5474, ctx->r1) = 0;
    // 0x80091FD0: jal         0x8009A470
    // 0x80091FD4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x80091FD4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80091FD8: addiu       $s2, $s0, 0x38
    ctx->r18 = ADD32(ctx->r16, 0X38);
    // 0x80091FDC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80091FE0: addiu       $a1, $s0, 0x50
    ctx->r5 = ADD32(ctx->r16, 0X50);
    // 0x80091FE4: jal         0x8009A470
    // 0x80091FE8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_1;
    // 0x80091FE8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80091FEC: addiu       $s1, $s0, 0x70
    ctx->r17 = ADD32(ctx->r16, 0X70);
    // 0x80091FF0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80091FF4: addiu       $a1, $s0, 0x88
    ctx->r5 = ADD32(ctx->r16, 0X88);
    // 0x80091FF8: jal         0x8009A470
    // 0x80091FFC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_2;
    // 0x80091FFC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80092000: addiu       $a0, $s0, -0x38
    ctx->r4 = ADD32(ctx->r16, -0X38);
    // 0x80092004: addiu       $a1, $s0, -0x20
    ctx->r5 = ADD32(ctx->r16, -0X20);
    // 0x80092008: jal         0x8009A470
    // 0x8009200C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_3;
    // 0x8009200C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x80092010: addiu       $a0, $s0, -0x70
    ctx->r4 = ADD32(ctx->r16, -0X70);
    // 0x80092014: addiu       $a1, $s0, -0x58
    ctx->r5 = ADD32(ctx->r16, -0X58);
    // 0x80092018: jal         0x8009A470
    // 0x8009201C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_4;
    // 0x8009201C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x80092020: addiu       $a0, $s0, 0xA8
    ctx->r4 = ADD32(ctx->r16, 0XA8);
    // 0x80092024: addiu       $a1, $s0, 0xC0
    ctx->r5 = ADD32(ctx->r16, 0XC0);
    // 0x80092028: jal         0x8009A470
    // 0x8009202C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_5;
    // 0x8009202C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x80092030: jal         0x8009C2D0
    // 0x80092034: addiu       $a0, $zero, 0xFE
    ctx->r4 = ADD32(0, 0XFE);
    osCreateViManager_recomp(rdram, ctx);
        goto after_6;
    // 0x80092034: addiu       $a0, $zero, 0xFE
    ctx->r4 = ADD32(0, 0XFE);
    after_6:
    // 0x80092038: andi        $v0, $s4, 0xFF
    ctx->r2 = ctx->r20 & 0XFF;
    // 0x8009203C: sll         $a0, $v0, 2
    ctx->r4 = S32(ctx->r2 << 2);
    // 0x80092040: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80092044: sll         $a0, $a0, 4
    ctx->r4 = S32(ctx->r4 << 4);
    // 0x80092048: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x8009204C: addiu       $v0, $v0, -0x230
    ctx->r2 = ADD32(ctx->r2, -0X230);
    // 0x80092050: jal         0x8009C670
    // 0x80092054: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    osViSetMode_recomp(rdram, ctx);
        goto after_7;
    // 0x80092054: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_7:
    // 0x80092058: jal         0x8009CBE0
    // 0x8009205C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osViBlack_recomp(rdram, ctx);
        goto after_8;
    // 0x8009205C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_8:
    // 0x80092060: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80092064: addiu       $a1, $zero, 0x29A
    ctx->r5 = ADD32(0, 0X29A);
    // 0x80092068: jal         0x8009C610
    // 0x8009206C: andi        $a2, $s3, 0xFF
    ctx->r6 = ctx->r19 & 0XFF;
    osViSetEvent_recomp(rdram, ctx);
        goto after_9;
    // 0x8009206C: andi        $a2, $s3, 0xFF
    ctx->r6 = ctx->r19 & 0XFF;
    after_9:
    // 0x80092070: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80092074: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80092078: jal         0x8009A840
    // 0x8009207C: addiu       $a2, $zero, 0x29B
    ctx->r6 = ADD32(0, 0X29B);
    osSetEventMesg_recomp(rdram, ctx);
        goto after_10;
    // 0x8009207C: addiu       $a2, $zero, 0x29B
    ctx->r6 = ADD32(0, 0X29B);
    after_10:
    // 0x80092080: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x80092084: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80092088: jal         0x8009A840
    // 0x8009208C: addiu       $a2, $zero, 0x29C
    ctx->r6 = ADD32(0, 0X29C);
    osSetEventMesg_recomp(rdram, ctx);
        goto after_11;
    // 0x8009208C: addiu       $a2, $zero, 0x29C
    ctx->r6 = ADD32(0, 0X29C);
    after_11:
    // 0x80092090: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x80092094: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80092098: jal         0x8009A840
    // 0x8009209C: addiu       $a2, $zero, 0x29D
    ctx->r6 = ADD32(0, 0X29D);
    osSetEventMesg_recomp(rdram, ctx);
        goto after_12;
    // 0x8009209C: addiu       $a2, $zero, 0x29D
    ctx->r6 = ADD32(0, 0X29D);
    after_12:
    // 0x800920A0: addiu       $s2, $s0, 0xE4
    ctx->r18 = ADD32(ctx->r16, 0XE4);
    // 0x800920A4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x800920A8: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x800920AC: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x800920B0: addiu       $a2, $a2, 0x2184
    ctx->r6 = ADD32(ctx->r6, 0X2184);
    // 0x800920B4: addiu       $s1, $s0, -0x74
    ctx->r17 = ADD32(ctx->r16, -0X74);
    // 0x800920B8: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    // 0x800920BC: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x800920C0: addiu       $v0, $v0, 0x7210
    ctx->r2 = ADD32(ctx->r2, 0X7210);
    // 0x800920C4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x800920C8: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x800920CC: jal         0x8009B750
    // 0x800920D0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    osCreateThread_recomp(rdram, ctx);
        goto after_13;
    // 0x800920D0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_13:
    // 0x800920D4: jal         0x8009B9F0
    // 0x800920D8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    osStartThread_recomp(rdram, ctx);
        goto after_14;
    // 0x800920D8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_14:
    // 0x800920DC: addiu       $s2, $s0, 0x294
    ctx->r18 = ADD32(ctx->r16, 0X294);
    // 0x800920E0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x800920E4: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x800920E8: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x800920EC: addiu       $a2, $a2, 0x247C
    ctx->r6 = ADD32(ctx->r6, 0X247C);
    // 0x800920F0: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    // 0x800920F4: lui         $v0, 0x8019
    ctx->r2 = S32(0X8019 << 16);
    // 0x800920F8: addiu       $v0, $v0, -0x6DF0
    ctx->r2 = ADD32(ctx->r2, -0X6DF0);
    // 0x800920FC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80092100: addiu       $v0, $zero, 0x6E
    ctx->r2 = ADD32(0, 0X6E);
    // 0x80092104: jal         0x8009B750
    // 0x80092108: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    osCreateThread_recomp(rdram, ctx);
        goto after_15;
    // 0x80092108: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_15:
    // 0x8009210C: jal         0x8009B9F0
    // 0x80092110: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    osStartThread_recomp(rdram, ctx);
        goto after_16;
    // 0x80092110: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_16:
    // 0x80092114: addiu       $s0, $s0, 0x444
    ctx->r16 = ADD32(ctx->r16, 0X444);
    // 0x80092118: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8009211C: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x80092120: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x80092124: addiu       $a2, $a2, 0x25D8
    ctx->r6 = ADD32(ctx->r6, 0X25D8);
    // 0x80092128: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    // 0x8009212C: lui         $v0, 0x8019
    ctx->r2 = S32(0X8019 << 16);
    // 0x80092130: addiu       $v0, $v0, -0x4DF0
    ctx->r2 = ADD32(ctx->r2, -0X4DF0);
    // 0x80092134: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80092138: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x8009213C: jal         0x8009B750
    // 0x80092140: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    osCreateThread_recomp(rdram, ctx);
        goto after_17;
    // 0x80092140: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_17:
    // 0x80092144: jal         0x8009B9F0
    // 0x80092148: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    osStartThread_recomp(rdram, ctx);
        goto after_18;
    // 0x80092148: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_18:
    // 0x8009214C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80092150: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80092154: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80092158: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8009215C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80092160: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80092164: jr          $ra
    // 0x80092168: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80092168: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8007B5F4_569F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007B5F4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8007B5F8: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8007B5FC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8007B600: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8007B604: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8007B608: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8007B60C: lhu         $v0, 0x1A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1A);
    // 0x8007B610: lbu         $a0, 0xC($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XC);
    // 0x8007B614: jal         0x80053ED8
    // 0x8007B618: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_0;
    // 0x8007B618: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
    after_0:
    // 0x8007B61C: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x8007B620: sw          $zero, 0x198($s2)
    MEM_W(0X198, ctx->r18) = 0;
    // 0x8007B624: jal         0x800530E8
    // 0x8007B628: lb          $a0, 0xD($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XD);
    func_800530E8_2E4E8(rdram, ctx);
        goto after_1;
    // 0x8007B628: lb          $a0, 0xD($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XD);
    after_1:
    // 0x8007B62C: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x8007B630: lb          $a0, 0xE($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XE);
    // 0x8007B634: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8007B638: sw          $zero, 0xC8($s1)
    MEM_W(0XC8, ctx->r17) = 0;
    // 0x8007B63C: sw          $zero, 0xCC($s1)
    MEM_W(0XCC, ctx->r17) = 0;
    // 0x8007B640: sw          $zero, 0x78($s1)
    MEM_W(0X78, ctx->r17) = 0;
    // 0x8007B644: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    // 0x8007B648: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8007B64C: beq         $a0, $zero, L_8007B664
    if (ctx->r4 == 0) {
        // 0x8007B650: sb          $v1, 0x8($s1)
        MEM_B(0X8, ctx->r17) = ctx->r3;
            goto L_8007B664;
    }
    // 0x8007B650: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
    // 0x8007B654: addiu       $s0, $s1, 0x2C
    ctx->r16 = ADD32(ctx->r17, 0X2C);
    // 0x8007B658: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8007B65C: j           L_8007B670
    // 0x8007B660: addiu       $a1, $s2, 0x400
    ctx->r5 = ADD32(ctx->r18, 0X400);
        goto L_8007B670;
    // 0x8007B660: addiu       $a1, $s2, 0x400
    ctx->r5 = ADD32(ctx->r18, 0X400);
L_8007B664:
    // 0x8007B664: addiu       $s0, $s1, 0x2C
    ctx->r16 = ADD32(ctx->r17, 0X2C);
    // 0x8007B668: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8007B66C: addiu       $a1, $s2, 0x418
    ctx->r5 = ADD32(ctx->r18, 0X418);
L_8007B670:
    // 0x8007B670: jal         0x8009A3B4
    // 0x8007B674: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8007B674: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8007B678: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8007B67C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8007B680: jal         0x8009A3B4
    // 0x8007B684: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8007B684: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x8007B688: jal         0x8007B4B0
    // 0x8007B68C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8007B4B0_568B0(rdram, ctx);
        goto after_4;
    // 0x8007B68C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x8007B690: addiu       $a0, $zero, 0x96
    ctx->r4 = ADD32(0, 0X96);
    // 0x8007B694: jal         0x8002A33C
    // 0x8007B698: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_5;
    // 0x8007B698: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_5:
    // 0x8007B69C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8007B6A0: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8007B6A4: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8007B6A8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8007B6AC: jr          $ra
    // 0x8007B6B0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8007B6B0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8007694C_51D4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007694C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80076950: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80076954: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80076958: lui         $t4, 0x800B
    ctx->r12 = S32(0X800B << 16);
    // 0x8007695C: addiu       $t4, $t4, 0x2BFC
    ctx->r12 = ADD32(ctx->r12, 0X2BFC);
    // 0x80076960: lui         $t3, 0x800B
    ctx->r11 = S32(0X800B << 16);
    // 0x80076964: addiu       $t3, $t3, 0x2F20
    ctx->r11 = ADD32(ctx->r11, 0X2F20);
    // 0x80076968: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x8007696C: addiu       $a2, $a2, -0x2E10
    ctx->r6 = ADD32(ctx->r6, -0X2E10);
    // 0x80076970: lui         $t2, 0x800B
    ctx->r10 = S32(0X800B << 16);
    // 0x80076974: addiu       $t2, $t2, 0x2F00
    ctx->r10 = ADD32(ctx->r10, 0X2F00);
L_80076978:
    // 0x80076978: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8007697C: slti        $t0, $a3, 0x6
    ctx->r8 = SIGNED(ctx->r7) < 0X6 ? 1 : 0;
    // 0x80076980: sb          $zero, 0x9($a2)
    MEM_B(0X9, ctx->r6) = 0;
    // 0x80076984: sb          $zero, 0x0($a2)
    MEM_B(0X0, ctx->r6) = 0;
L_80076988:
    // 0x80076988: beql        $t0, $zero, L_800769C0
    if (ctx->r8 == 0) {
        // 0x8007698C: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_800769C0;
    }
    goto skip_0;
    // 0x8007698C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    skip_0:
    // 0x80076990: lbu         $v1, 0x0($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X0);
    // 0x80076994: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
    // 0x80076998: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8007699C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800769A0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800769A4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800769A8: addu        $v0, $v0, $t4
    ctx->r2 = ADD32(ctx->r2, ctx->r12);
    // 0x800769AC: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x800769B0: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x800769B4: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x800769B8: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x800769BC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_800769C0:
    // 0x800769C0: slti        $v0, $a1, 0xD
    ctx->r2 = SIGNED(ctx->r5) < 0XD ? 1 : 0;
    // 0x800769C4: bne         $v0, $zero, L_80076988
    if (ctx->r2 != 0) {
        // 0x800769C8: slti        $t1, $a3, 0x6
        ctx->r9 = SIGNED(ctx->r7) < 0X6 ? 1 : 0;
            goto L_80076988;
    }
    // 0x800769C8: slti        $t1, $a3, 0x6
    ctx->r9 = SIGNED(ctx->r7) < 0X6 ? 1 : 0;
    // 0x800769CC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x800769D0: addu        $t0, $t3, $zero
    ctx->r8 = ADD32(ctx->r11, 0);
    // 0x800769D4: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x800769D8: addiu       $a0, $a0, 0x2E64
    ctx->r4 = ADD32(ctx->r4, 0X2E64);
L_800769DC:
    // 0x800769DC: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x800769E0: addu        $v0, $a2, $a1
    ctx->r2 = ADD32(ctx->r6, ctx->r5);
    // 0x800769E4: beq         $t1, $zero, L_800769FC
    if (ctx->r9 == 0) {
        // 0x800769E8: sb          $v1, 0x1($v0)
        MEM_B(0X1, ctx->r2) = ctx->r3;
            goto L_800769FC;
    }
    // 0x800769E8: sb          $v1, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r3;
    // 0x800769EC: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x800769F0: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x800769F4: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x800769F8: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
L_800769FC:
    // 0x800769FC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80076A00: slti        $v0, $a1, 0x8
    ctx->r2 = SIGNED(ctx->r5) < 0X8 ? 1 : 0;
    // 0x80076A04: bne         $v0, $zero, L_800769DC
    if (ctx->r2 != 0) {
        // 0x80076A08: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_800769DC;
    }
    // 0x80076A08: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80076A0C: addiu       $t3, $t3, 0x4
    ctx->r11 = ADD32(ctx->r11, 0X4);
    // 0x80076A10: addiu       $a2, $a2, 0x80
    ctx->r6 = ADD32(ctx->r6, 0X80);
    // 0x80076A14: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x80076A18: slti        $v0, $a3, 0x10
    ctx->r2 = SIGNED(ctx->r7) < 0X10 ? 1 : 0;
    // 0x80076A1C: bne         $v0, $zero, L_80076978
    if (ctx->r2 != 0) {
        // 0x80076A20: addiu       $t2, $t2, 0x4
        ctx->r10 = ADD32(ctx->r10, 0X4);
            goto L_80076978;
    }
    // 0x80076A20: addiu       $t2, $t2, 0x4
    ctx->r10 = ADD32(ctx->r10, 0X4);
    // 0x80076A24: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80076A28: jal         0x80075F78
    // 0x80076A2C: addiu       $a0, $a0, -0x440
    ctx->r4 = ADD32(ctx->r4, -0X440);
    func_80075F78_51378(rdram, ctx);
        goto after_0;
    // 0x80076A2C: addiu       $a0, $a0, -0x440
    ctx->r4 = ADD32(ctx->r4, -0X440);
    after_0:
    // 0x80076A30: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80076A34: jr          $ra
    // 0x80076A38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80076A38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8007A790_55B90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007A790: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8007A794: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8007A798: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8007A79C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8007A7A0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8007A7A4: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8007A7A8: andi        $v1, $v0, 0xF
    ctx->r3 = ctx->r2 & 0XF;
    // 0x8007A7AC: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x8007A7B0: beq         $v0, $zero, L_8007A7D0
    if (ctx->r2 == 0) {
        // 0x8007A7B4: addiu       $a0, $s1, 0x44
        ctx->r4 = ADD32(ctx->r17, 0X44);
            goto L_8007A7D0;
    }
    // 0x8007A7B4: addiu       $a0, $s1, 0x44
    ctx->r4 = ADD32(ctx->r17, 0X44);
    // 0x8007A7B8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8007A7BC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007A7C0: addu        $at, $at, $v0
    gpr jr_addend_8007A7C8 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8007A7C4: lw          $v0, 0x2C50($at)
    ctx->r2 = ADD32(ctx->r1, 0X2C50);
    // 0x8007A7C8: jr          $v0
    // 0x8007A7CC: nop

    switch (jr_addend_8007A7C8 >> 2) {
        case 0: goto L_8007A7D0; break;
        case 1: goto L_8007A854; break;
        case 2: goto L_8007A8C8; break;
        case 3: goto L_8007A7D0; break;
        case 4: goto L_8007A950; break;
        case 5: goto L_8007A9DC; break;
        case 6: goto L_8007AA64; break;
        default: switch_error(__func__, 0x8007A7C8, 0x800D2C50);
    }
    // 0x8007A7CC: nop

L_8007A7D0:
    // 0x8007A7D0: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x8007A7D4: lhu         $v1, 0x2($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X2);
    // 0x8007A7D8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8007A7DC: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x8007A7E0: lhu         $v1, 0x3E($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X3E);
    // 0x8007A7E4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8007A7E8: sh          $v1, 0x3E($s1)
    MEM_H(0X3E, ctx->r17) = ctx->r3;
    // 0x8007A7EC: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x8007A7F0: bgtz        $v0, L_8007A83C
    if (SIGNED(ctx->r2) > 0) {
        // 0x8007A7F4: addiu       $a1, $zero, 0x80
        ctx->r5 = ADD32(0, 0X80);
            goto L_8007A83C;
    }
    // 0x8007A7F4: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x8007A7F8: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8007A7FC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8007A800: slti        $v0, $v0, 0x64
    ctx->r2 = SIGNED(ctx->r2) < 0X64 ? 1 : 0;
    // 0x8007A804: beq         $v0, $zero, L_8007A820
    if (ctx->r2 == 0) {
        // 0x8007A808: addiu       $v0, $zero, -0xA
        ctx->r2 = ADD32(0, -0XA);
            goto L_8007A820;
    }
    // 0x8007A808: addiu       $v0, $zero, -0xA
    ctx->r2 = ADD32(0, -0XA);
    // 0x8007A80C: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8007A810: sh          $zero, 0x3E($s1)
    MEM_H(0X3E, ctx->r17) = 0;
    // 0x8007A814: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8007A818: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x8007A81C: addiu       $v0, $zero, -0xA
    ctx->r2 = ADD32(0, -0XA);
L_8007A820:
    // 0x8007A820: sh          $zero, 0x2($a0)
    MEM_H(0X2, ctx->r4) = 0;
    // 0x8007A824: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x8007A828: lh          $v1, 0x3E($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X3E);
    // 0x8007A82C: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x8007A830: bne         $v0, $zero, L_8007A83C
    if (ctx->r2 != 0) {
        // 0x8007A834: addiu       $a1, $v1, -0x64
        ctx->r5 = ADD32(ctx->r3, -0X64);
            goto L_8007A83C;
    }
    // 0x8007A834: addiu       $a1, $v1, -0x64
    ctx->r5 = ADD32(ctx->r3, -0X64);
    // 0x8007A838: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
L_8007A83C:
    // 0x8007A83C: sll         $v0, $a1, 8
    ctx->r2 = S32(ctx->r5 << 8);
    // 0x8007A840: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x8007A844: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8007A848: or          $v0, $a1, $v0
    ctx->r2 = ctx->r5 | ctx->r2;
    // 0x8007A84C: j           L_8007AA58
    // 0x8007A850: sll         $v1, $a1, 16
    ctx->r3 = S32(ctx->r5 << 16);
        goto L_8007AA58;
    // 0x8007A850: sll         $v1, $a1, 16
    ctx->r3 = S32(ctx->r5 << 16);
L_8007A854:
    // 0x8007A854: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x8007A858: lhu         $v1, 0x2($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X2);
    // 0x8007A85C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8007A860: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x8007A864: lhu         $v1, 0x3E($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X3E);
    // 0x8007A868: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8007A86C: sh          $v1, 0x3E($s1)
    MEM_H(0X3E, ctx->r17) = ctx->r3;
    // 0x8007A870: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8007A874: bgez        $v1, L_8007A88C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8007A878: nop
    
            goto L_8007A88C;
    }
    // 0x8007A878: nop

    // 0x8007A87C: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8007A880: sh          $zero, 0x3E($s1)
    MEM_H(0X3E, ctx->r17) = 0;
    // 0x8007A884: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8007A888: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_8007A88C:
    // 0x8007A88C: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x8007A890: bgtz        $v0, L_8007A8B0
    if (SIGNED(ctx->r2) > 0) {
        // 0x8007A894: addiu       $a1, $zero, 0x80
        ctx->r5 = ADD32(0, 0X80);
            goto L_8007A8B0;
    }
    // 0x8007A894: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x8007A898: lhu         $v0, 0x3E($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3E);
    // 0x8007A89C: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x8007A8A0: sra         $v0, $v1, 16
    ctx->r2 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8007A8A4: slti        $v0, $v0, 0x100
    ctx->r2 = SIGNED(ctx->r2) < 0X100 ? 1 : 0;
    // 0x8007A8A8: bnel        $v0, $zero, L_8007A8B0
    if (ctx->r2 != 0) {
        // 0x8007A8AC: sra         $a1, $v1, 17
        ctx->r5 = S32(SIGNED(ctx->r3) >> 17);
            goto L_8007A8B0;
    }
    goto skip_0;
    // 0x8007A8AC: sra         $a1, $v1, 17
    ctx->r5 = S32(SIGNED(ctx->r3) >> 17);
    skip_0:
L_8007A8B0:
    // 0x8007A8B0: sll         $v0, $a1, 8
    ctx->r2 = S32(ctx->r5 << 8);
    // 0x8007A8B4: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x8007A8B8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8007A8BC: or          $v0, $a1, $v0
    ctx->r2 = ctx->r5 | ctx->r2;
    // 0x8007A8C0: j           L_8007AA58
    // 0x8007A8C4: sll         $v1, $a1, 16
    ctx->r3 = S32(ctx->r5 << 16);
        goto L_8007AA58;
    // 0x8007A8C4: sll         $v1, $a1, 16
    ctx->r3 = S32(ctx->r5 << 16);
L_8007A8C8:
    // 0x8007A8C8: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    // 0x8007A8CC: lhu         $v0, 0x2($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X2);
    // 0x8007A8D0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8007A8D4: sh          $v1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r3;
    // 0x8007A8D8: lhu         $v0, 0x3E($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3E);
    // 0x8007A8DC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8007A8E0: sh          $v0, 0x3E($s1)
    MEM_H(0X3E, ctx->r17) = ctx->r2;
    // 0x8007A8E4: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x8007A8E8: bgtz        $v0, L_8007A900
    if (SIGNED(ctx->r2) > 0) {
        // 0x8007A8EC: nop
    
            goto L_8007A900;
    }
    // 0x8007A8EC: nop

    // 0x8007A8F0: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8007A8F4: sh          $zero, 0x3E($s1)
    MEM_H(0X3E, ctx->r17) = 0;
    // 0x8007A8F8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8007A8FC: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_8007A900:
    // 0x8007A900: lh          $v0, 0x3E($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X3E);
    // 0x8007A904: slti        $v0, $v0, 0x10F
    ctx->r2 = SIGNED(ctx->r2) < 0X10F ? 1 : 0;
    // 0x8007A908: bne         $v0, $zero, L_8007A938
    if (ctx->r2 != 0) {
        // 0x8007A90C: addiu       $a1, $zero, 0x80
        ctx->r5 = ADD32(0, 0X80);
            goto L_8007A938;
    }
    // 0x8007A90C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x8007A910: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8007A914: addiu       $v0, $v0, 0xE
    ctx->r2 = ADD32(ctx->r2, 0XE);
    // 0x8007A918: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x8007A91C: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8007A920: sltiu       $v0, $v1, 0x81
    ctx->r2 = ctx->r3 < 0X81 ? 1 : 0;
    // 0x8007A924: beq         $v0, $zero, L_8007A934
    if (ctx->r2 == 0) {
        // 0x8007A928: addiu       $v0, $zero, 0x80
        ctx->r2 = ADD32(0, 0X80);
            goto L_8007A934;
    }
    // 0x8007A928: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8007A92C: j           L_8007A938
    // 0x8007A930: subu        $a1, $v0, $v1
    ctx->r5 = SUB32(ctx->r2, ctx->r3);
        goto L_8007A938;
    // 0x8007A930: subu        $a1, $v0, $v1
    ctx->r5 = SUB32(ctx->r2, ctx->r3);
L_8007A934:
    // 0x8007A934: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_8007A938:
    // 0x8007A938: sll         $v0, $a1, 8
    ctx->r2 = S32(ctx->r5 << 8);
    // 0x8007A93C: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x8007A940: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8007A944: or          $v0, $a1, $v0
    ctx->r2 = ctx->r5 | ctx->r2;
    // 0x8007A948: j           L_8007AA58
    // 0x8007A94C: sll         $v1, $a1, 16
    ctx->r3 = S32(ctx->r5 << 16);
        goto L_8007AA58;
    // 0x8007A94C: sll         $v1, $a1, 16
    ctx->r3 = S32(ctx->r5 << 16);
L_8007A950:
    // 0x8007A950: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x8007A954: lhu         $v1, 0x2($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X2);
    // 0x8007A958: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8007A95C: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x8007A960: lhu         $v1, 0x3E($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X3E);
    // 0x8007A964: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8007A968: sh          $v1, 0x3E($s1)
    MEM_H(0X3E, ctx->r17) = ctx->r3;
    // 0x8007A96C: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x8007A970: bgtz        $v0, L_8007A9C4
    if (SIGNED(ctx->r2) > 0) {
        // 0x8007A974: addiu       $a1, $zero, 0x80
        ctx->r5 = ADD32(0, 0X80);
            goto L_8007A9C4;
    }
    // 0x8007A974: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x8007A978: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8007A97C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8007A980: slti        $v0, $v0, 0x64
    ctx->r2 = SIGNED(ctx->r2) < 0X64 ? 1 : 0;
    // 0x8007A984: beq         $v0, $zero, L_8007A9A0
    if (ctx->r2 == 0) {
        // 0x8007A988: addiu       $v0, $zero, -0x14
        ctx->r2 = ADD32(0, -0X14);
            goto L_8007A9A0;
    }
    // 0x8007A988: addiu       $v0, $zero, -0x14
    ctx->r2 = ADD32(0, -0X14);
    // 0x8007A98C: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8007A990: sh          $zero, 0x3E($s1)
    MEM_H(0X3E, ctx->r17) = 0;
    // 0x8007A994: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8007A998: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x8007A99C: addiu       $v0, $zero, -0x14
    ctx->r2 = ADD32(0, -0X14);
L_8007A9A0:
    // 0x8007A9A0: sh          $zero, 0x2($a0)
    MEM_H(0X2, ctx->r4) = 0;
    // 0x8007A9A4: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x8007A9A8: lhu         $v0, 0x3E($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3E);
    // 0x8007A9AC: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x8007A9B0: sra         $v0, $v1, 16
    ctx->r2 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8007A9B4: slti        $v0, $v0, 0x401
    ctx->r2 = SIGNED(ctx->r2) < 0X401 ? 1 : 0;
    // 0x8007A9B8: bne         $v0, $zero, L_8007A9C4
    if (ctx->r2 != 0) {
        // 0x8007A9BC: sra         $a1, $v1, 19
        ctx->r5 = S32(SIGNED(ctx->r3) >> 19);
            goto L_8007A9C4;
    }
    // 0x8007A9BC: sra         $a1, $v1, 19
    ctx->r5 = S32(SIGNED(ctx->r3) >> 19);
    // 0x8007A9C0: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
L_8007A9C4:
    // 0x8007A9C4: sll         $v0, $a1, 8
    ctx->r2 = S32(ctx->r5 << 8);
    // 0x8007A9C8: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x8007A9CC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8007A9D0: or          $v0, $a1, $v0
    ctx->r2 = ctx->r5 | ctx->r2;
    // 0x8007A9D4: j           L_8007AA58
    // 0x8007A9D8: sll         $v1, $a1, 16
    ctx->r3 = S32(ctx->r5 << 16);
        goto L_8007AA58;
    // 0x8007A9D8: sll         $v1, $a1, 16
    ctx->r3 = S32(ctx->r5 << 16);
L_8007A9DC:
    // 0x8007A9DC: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    // 0x8007A9E0: lhu         $v0, 0x2($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X2);
    // 0x8007A9E4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8007A9E8: sh          $v1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r3;
    // 0x8007A9EC: lhu         $v0, 0x3E($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3E);
    // 0x8007A9F0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8007A9F4: sh          $v0, 0x3E($s1)
    MEM_H(0X3E, ctx->r17) = ctx->r2;
    // 0x8007A9F8: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x8007A9FC: slti        $v0, $v0, 0x82
    ctx->r2 = SIGNED(ctx->r2) < 0X82 ? 1 : 0;
    // 0x8007AA00: beq         $v0, $zero, L_8007AA14
    if (ctx->r2 == 0) {
        // 0x8007AA04: nop
    
            goto L_8007AA14;
    }
    // 0x8007AA04: nop

    // 0x8007AA08: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8007AA0C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8007AA10: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_8007AA14:
    // 0x8007AA14: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8007AA18: sltiu       $v0, $v0, 0x8
    ctx->r2 = ctx->r2 < 0X8 ? 1 : 0;
    // 0x8007AA1C: bne         $v0, $zero, L_8007AA34
    if (ctx->r2 != 0) {
        // 0x8007AA20: addiu       $v1, $zero, 0x8
        ctx->r3 = ADD32(0, 0X8);
            goto L_8007AA34;
    }
    // 0x8007AA20: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x8007AA24: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8007AA28: sb          $v1, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r3;
    // 0x8007AA2C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8007AA30: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_8007AA34:
    // 0x8007AA34: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8007AA38: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x8007AA3C: lui         $a0, 0x200
    ctx->r4 = S32(0X200 << 16);
    // 0x8007AA40: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8007AA44: sll         $a1, $v1, 4
    ctx->r5 = S32(ctx->r3 << 4);
    // 0x8007AA48: sll         $v0, $v1, 12
    ctx->r2 = S32(ctx->r3 << 12);
    // 0x8007AA4C: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x8007AA50: or          $v0, $a1, $v0
    ctx->r2 = ctx->r5 | ctx->r2;
    // 0x8007AA54: sll         $v1, $v1, 20
    ctx->r3 = S32(ctx->r3 << 20);
L_8007AA58:
    // 0x8007AA58: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8007AA5C: j           L_8007AAEC
    // 0x8007AA60: sw          $v0, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r2;
        goto L_8007AAEC;
    // 0x8007AA60: sw          $v0, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r2;
L_8007AA64:
    // 0x8007AA64: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x8007AA68: lhu         $v1, 0x2($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X2);
    // 0x8007AA6C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8007AA70: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x8007AA74: lhu         $v1, 0x3E($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X3E);
    // 0x8007AA78: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8007AA7C: sh          $v1, 0x3E($s1)
    MEM_H(0X3E, ctx->r17) = ctx->r3;
    // 0x8007AA80: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8007AA84: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8007AA88: slti        $v1, $v1, 0x801
    ctx->r3 = SIGNED(ctx->r3) < 0X801 ? 1 : 0;
    // 0x8007AA8C: bne         $v1, $zero, L_8007AABC
    if (ctx->r3 != 0) {
        // 0x8007AA90: addiu       $a1, $zero, 0x80
        ctx->r5 = ADD32(0, 0X80);
            goto L_8007AABC;
    }
    // 0x8007AA90: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x8007AA94: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8007AA98: addiu       $v0, $v0, 0xA
    ctx->r2 = ADD32(ctx->r2, 0XA);
    // 0x8007AA9C: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x8007AAA0: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8007AAA4: sltiu       $v0, $v1, 0x81
    ctx->r2 = ctx->r3 < 0X81 ? 1 : 0;
    // 0x8007AAA8: beq         $v0, $zero, L_8007AAB8
    if (ctx->r2 == 0) {
        // 0x8007AAAC: addiu       $v0, $zero, 0x80
        ctx->r2 = ADD32(0, 0X80);
            goto L_8007AAB8;
    }
    // 0x8007AAAC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8007AAB0: j           L_8007AABC
    // 0x8007AAB4: subu        $a1, $v0, $v1
    ctx->r5 = SUB32(ctx->r2, ctx->r3);
        goto L_8007AABC;
    // 0x8007AAB4: subu        $a1, $v0, $v1
    ctx->r5 = SUB32(ctx->r2, ctx->r3);
L_8007AAB8:
    // 0x8007AAB8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_8007AABC:
    // 0x8007AABC: sll         $v0, $a1, 8
    ctx->r2 = S32(ctx->r5 << 8);
    // 0x8007AAC0: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x8007AAC4: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8007AAC8: or          $v0, $a1, $v0
    ctx->r2 = ctx->r5 | ctx->r2;
    // 0x8007AACC: sll         $v1, $a1, 16
    ctx->r3 = S32(ctx->r5 << 16);
    // 0x8007AAD0: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8007AAD4: bne         $a1, $zero, L_8007AAEC
    if (ctx->r5 != 0) {
        // 0x8007AAD8: sw          $v0, 0x40($s1)
        MEM_W(0X40, ctx->r17) = ctx->r2;
            goto L_8007AAEC;
    }
    // 0x8007AAD8: sw          $v0, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r2;
    // 0x8007AADC: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8007AAE0: sh          $zero, 0x3E($s1)
    MEM_H(0X3E, ctx->r17) = 0;
    // 0x8007AAE4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8007AAE8: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_8007AAEC:
    // 0x8007AAEC: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x8007AAF0: jal         0x8002C654
    // 0x8007AAF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_0;
    // 0x8007AAF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8007AAF8: lbu         $v1, 0xB($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XB);
    // 0x8007AAFC: lhu         $v0, 0x3E($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3E);
    // 0x8007AB00: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8007AB04: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8007AB08: andi        $a0, $v1, 0xFF
    ctx->r4 = ctx->r3 & 0XFF;
    // 0x8007AB0C: sll         $a0, $a0, 7
    ctx->r4 = S32(ctx->r4 << 7);
    // 0x8007AB10: sh          $v0, 0x28($s1)
    MEM_H(0X28, ctx->r17) = ctx->r2;
    // 0x8007AB14: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    // 0x8007AB18: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    // 0x8007AB1C: jal         0x800319B4
    // 0x8007AB20: sb          $v1, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r3;
    func_800319B4_CDB4(rdram, ctx);
        goto after_1;
    // 0x8007AB20: sb          $v1, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r3;
    after_1:
    // 0x8007AB24: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8007AB28: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8007AB2C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8007AB30: jr          $ra
    // 0x8007AB34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8007AB34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800943E0_6F7E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800943E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800943E4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x800943E8: jal         0x80094460
    // 0x800943EC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osSetIntMask_recomp(rdram, ctx);
        goto after_0;
    // 0x800943EC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x800943F0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x800943F4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800943F8: sw          $v1, -0x2368($at)
    MEM_W(-0X2368, ctx->r1) = ctx->r3;
    // 0x800943FC: jal         0x80094460
    // 0x80094400: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    osSetIntMask_recomp(rdram, ctx);
        goto after_1;
    // 0x80094400: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_1:
    // 0x80094404: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80094408: jr          $ra
    // 0x8009440C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8009440C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80090870_6BC70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80090870: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80090874: lw          $v0, -0xEEC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XEEC);
    // 0x80090878: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8009087C: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x80090880: addu        $s5, $zero, $zero
    ctx->r21 = ADD32(0, 0);
    // 0x80090884: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x80090888: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x8009088C: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x80090890: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x80090894: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x80090898: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x8009089C: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x800908A0: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x800908A4: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x800908A8: lw          $v0, 0x34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X34);
    // 0x800908AC: addiu       $s4, $zero, 0x170
    ctx->r20 = ADD32(0, 0X170);
    // 0x800908B0: lw          $s2, 0x20($v0)
    ctx->r18 = MEM_W(ctx->r2, 0X20);
    // 0x800908B4: jal         0x8008EFE0
    // 0x800908B8: addu        $s7, $zero, $zero
    ctx->r23 = ADD32(0, 0);
    func_8008EFE0_6A3E0(rdram, ctx);
        goto after_0;
    // 0x800908B8: addu        $s7, $zero, $zero
    ctx->r23 = ADD32(0, 0);
    after_0:
    // 0x800908BC: addu        $t0, $v0, $zero
    ctx->r8 = ADD32(ctx->r2, 0);
    // 0x800908C0: addu        $v1, $t0, $zero
    ctx->r3 = ADD32(ctx->r8, 0);
    // 0x800908C4: addiu       $t0, $t0, 0x8
    ctx->r8 = ADD32(ctx->r8, 0X8);
    // 0x800908C8: lui         $a3, 0xC00
    ctx->r7 = S32(0XC00 << 16);
    // 0x800908CC: ori         $a3, $a3, 0xDA83
    ctx->r7 = ctx->r7 | 0XDA83;
    // 0x800908D0: lui         $a0, 0x7C0
    ctx->r4 = S32(0X7C0 << 16);
    // 0x800908D4: ori         $a0, $a0, 0x7C0
    ctx->r4 = ctx->r4 | 0X7C0;
    // 0x800908D8: lui         $a1, 0xC00
    ctx->r5 = S32(0XC00 << 16);
    // 0x800908DC: ori         $a1, $a1, 0x5A82
    ctx->r5 = ctx->r5 | 0X5A82;
    // 0x800908E0: lui         $v0, 0x930
    ctx->r2 = S32(0X930 << 16);
    // 0x800908E4: ori         $v0, $v0, 0x7C0
    ctx->r2 = ctx->r2 | 0X7C0;
    // 0x800908E8: addiu       $a2, $zero, 0x7C0
    ctx->r6 = ADD32(0, 0X7C0);
    // 0x800908EC: sw          $a3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r7;
    // 0x800908F0: addu        $a3, $t0, $zero
    ctx->r7 = ADD32(ctx->r8, 0);
    // 0x800908F4: sw          $a0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r4;
    // 0x800908F8: sw          $a1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r5;
    // 0x800908FC: sw          $v0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r2;
    // 0x80090900: lw          $a1, 0x18($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X18);
    // 0x80090904: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    // 0x80090908: jal         0x800910A8
    // 0x8009090C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_800910A8_6C4A8(rdram, ctx);
        goto after_1;
    // 0x8009090C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x80090910: addu        $t0, $v0, $zero
    ctx->r8 = ADD32(ctx->r2, 0);
    // 0x80090914: lui         $v0, 0x200
    ctx->r2 = S32(0X200 << 16);
    // 0x80090918: ori         $v0, $v0, 0x930
    ctx->r2 = ctx->r2 | 0X930;
    // 0x8009091C: addu        $v1, $t0, $zero
    ctx->r3 = ADD32(ctx->r8, 0);
    // 0x80090920: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80090924: addiu       $v0, $zero, 0x170
    ctx->r2 = ADD32(0, 0X170);
    // 0x80090928: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x8009092C: lbu         $v0, 0x24($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X24);
    // 0x80090930: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80090934: blez        $v0, L_80090B04
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80090938: addiu       $t0, $t0, 0x8
        ctx->r8 = ADD32(ctx->r8, 0X8);
            goto L_80090B04;
    }
    // 0x80090938: addiu       $t0, $t0, 0x8
    ctx->r8 = ADD32(ctx->r8, 0X8);
    // 0x8009093C: lui         $fp, 0xC00
    ctx->r30 = S32(0XC00 << 16);
    // 0x80090940: sll         $v1, $s7, 16
    ctx->r3 = S32(ctx->r23 << 16);
L_80090944:
    // 0x80090944: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80090948: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8009094C: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    // 0x80090950: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80090954: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80090958: addu        $s1, $a0, $v0
    ctx->r17 = ADD32(ctx->r4, ctx->r2);
    // 0x8009095C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80090960: lw          $a0, 0x18($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X18);
    // 0x80090964: lw          $v1, 0x4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4);
    // 0x80090968: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8009096C: subu        $s3, $a0, $v0
    ctx->r19 = SUB32(ctx->r4, ctx->r2);
    // 0x80090970: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80090974: bne         $s3, $s0, L_8009098C
    if (ctx->r19 != ctx->r16) {
        // 0x80090978: subu        $s6, $a0, $v1
        ctx->r22 = SUB32(ctx->r4, ctx->r3);
            goto L_8009098C;
    }
    // 0x80090978: subu        $s6, $a0, $v1
    ctx->r22 = SUB32(ctx->r4, ctx->r3);
    // 0x8009097C: addu        $v0, $s4, $zero
    ctx->r2 = ADD32(ctx->r20, 0);
    // 0x80090980: addu        $s4, $s5, $zero
    ctx->r20 = ADD32(ctx->r21, 0);
    // 0x80090984: j           L_800909AC
    // 0x80090988: addu        $s5, $v0, $zero
    ctx->r21 = ADD32(ctx->r2, 0);
        goto L_800909AC;
    // 0x80090988: addu        $s5, $v0, $zero
    ctx->r21 = ADD32(ctx->r2, 0);
L_8009098C:
    // 0x8009098C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80090990: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80090994: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80090998: sll         $a2, $s5, 16
    ctx->r6 = S32(ctx->r21 << 16);
    // 0x8009099C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x800909A0: jal         0x80090F80
    // 0x800909A4: addiu       $a3, $zero, 0xB8
    ctx->r7 = ADD32(0, 0XB8);
    func_80090F80_6C380(rdram, ctx);
        goto after_2;
    // 0x800909A4: addiu       $a3, $zero, 0xB8
    ctx->r7 = ADD32(0, 0XB8);
    after_2:
    // 0x800909A8: addu        $t0, $v0, $zero
    ctx->r8 = ADD32(ctx->r2, 0);
L_800909AC:
    // 0x800909AC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x800909B0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x800909B4: sll         $v0, $s4, 16
    ctx->r2 = S32(ctx->r20 << 16);
    // 0x800909B8: sra         $s0, $v0, 16
    ctx->r16 = S32(SIGNED(ctx->r2) >> 16);
    // 0x800909BC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x800909C0: jal         0x80090D70
    // 0x800909C4: addu        $a3, $t0, $zero
    ctx->r7 = ADD32(ctx->r8, 0);
    func_80090D70_6C170(rdram, ctx);
        goto after_3;
    // 0x800909C4: addu        $a3, $t0, $zero
    ctx->r7 = ADD32(ctx->r8, 0);
    after_3:
    // 0x800909C8: lh          $v1, 0x8($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X8);
    // 0x800909CC: addu        $t0, $v0, $zero
    ctx->r8 = ADD32(ctx->r2, 0);
    // 0x800909D0: beq         $v1, $zero, L_80090A24
    if (ctx->r3 == 0) {
        // 0x800909D4: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_80090A24;
    }
    // 0x800909D4: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x800909D8: addu        $a0, $t0, $zero
    ctx->r4 = ADD32(ctx->r8, 0);
    // 0x800909DC: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x800909E0: or          $v0, $v0, $fp
    ctx->r2 = ctx->r2 | ctx->r30;
    // 0x800909E4: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x800909E8: sll         $v0, $s5, 16
    ctx->r2 = S32(ctx->r21 << 16);
    // 0x800909EC: andi        $v1, $s0, 0xFFFF
    ctx->r3 = ctx->r16 & 0XFFFF;
    // 0x800909F0: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x800909F4: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x800909F8: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x800909FC: bne         $v0, $zero, L_80090A24
    if (ctx->r2 != 0) {
        // 0x80090A00: addiu       $t0, $t0, 0x8
        ctx->r8 = ADD32(ctx->r8, 0X8);
            goto L_80090A24;
    }
    // 0x80090A00: addiu       $t0, $t0, 0x8
    ctx->r8 = ADD32(ctx->r8, 0X8);
    // 0x80090A04: lw          $v0, 0x20($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X20);
    // 0x80090A08: bne         $v0, $zero, L_80090A24
    if (ctx->r2 != 0) {
        // 0x80090A0C: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_80090A24;
    }
    // 0x80090A0C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80090A10: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    // 0x80090A14: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x80090A18: jal         0x800910A8
    // 0x80090A1C: addu        $a3, $t0, $zero
    ctx->r7 = ADD32(ctx->r8, 0);
    func_800910A8_6C4A8(rdram, ctx);
        goto after_4;
    // 0x80090A1C: addu        $a3, $t0, $zero
    ctx->r7 = ADD32(ctx->r8, 0);
    after_4:
    // 0x80090A20: addu        $t0, $v0, $zero
    ctx->r8 = ADD32(ctx->r2, 0);
L_80090A24:
    // 0x80090A24: lh          $v0, 0xA($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XA);
    // 0x80090A28: beq         $v0, $zero, L_80090A68
    if (ctx->r2 == 0) {
        // 0x80090A2C: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80090A68;
    }
    // 0x80090A2C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80090A30: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80090A34: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80090A38: sll         $a2, $s5, 16
    ctx->r6 = S32(ctx->r21 << 16);
    // 0x80090A3C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80090A40: addiu       $a3, $t0, 0x8
    ctx->r7 = ADD32(ctx->r8, 0X8);
    // 0x80090A44: andi        $v0, $v1, 0xFFFF
    ctx->r2 = ctx->r3 & 0XFFFF;
    // 0x80090A48: or          $v0, $v0, $fp
    ctx->r2 = ctx->r2 | ctx->r30;
    // 0x80090A4C: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    // 0x80090A50: sll         $v0, $s4, 16
    ctx->r2 = S32(ctx->r20 << 16);
    // 0x80090A54: andi        $v1, $a2, 0xFFFF
    ctx->r3 = ctx->r6 & 0XFFFF;
    // 0x80090A58: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80090A5C: jal         0x800910A8
    // 0x80090A60: sw          $v0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r2;
    func_800910A8_6C4A8(rdram, ctx);
        goto after_5;
    // 0x80090A60: sw          $v0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r2;
    after_5:
    // 0x80090A64: addu        $t0, $v0, $zero
    ctx->r8 = ADD32(ctx->r2, 0);
L_80090A68:
    // 0x80090A68: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x80090A6C: beq         $a0, $zero, L_80090A84
    if (ctx->r4 == 0) {
        // 0x80090A70: sll         $a1, $s4, 16
        ctx->r5 = S32(ctx->r20 << 16);
            goto L_80090A84;
    }
    // 0x80090A70: sll         $a1, $s4, 16
    ctx->r5 = S32(ctx->r20 << 16);
    // 0x80090A74: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80090A78: jal         0x800911C0
    // 0x80090A7C: addu        $a2, $t0, $zero
    ctx->r6 = ADD32(ctx->r8, 0);
    func_800911C0_6C5C0(rdram, ctx);
        goto after_6;
    // 0x80090A7C: addu        $a2, $t0, $zero
    ctx->r6 = ADD32(ctx->r8, 0);
    after_6:
    // 0x80090A80: addu        $t0, $v0, $zero
    ctx->r8 = ADD32(ctx->r2, 0);
L_80090A84:
    // 0x80090A84: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x80090A88: bne         $v0, $zero, L_80090AA8
    if (ctx->r2 != 0) {
        // 0x80090A8C: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_80090AA8;
    }
    // 0x80090A8C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80090A90: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    // 0x80090A94: sll         $a2, $s4, 16
    ctx->r6 = S32(ctx->r20 << 16);
    // 0x80090A98: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80090A9C: jal         0x800910A8
    // 0x80090AA0: addu        $a3, $t0, $zero
    ctx->r7 = ADD32(ctx->r8, 0);
    func_800910A8_6C4A8(rdram, ctx);
        goto after_7;
    // 0x80090AA0: addu        $a3, $t0, $zero
    ctx->r7 = ADD32(ctx->r8, 0);
    after_7:
    // 0x80090AA4: addu        $t0, $v0, $zero
    ctx->r8 = ADD32(ctx->r2, 0);
L_80090AA8:
    // 0x80090AA8: lh          $v0, 0xC($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XC);
    // 0x80090AAC: beq         $v0, $zero, L_80090AD4
    if (ctx->r2 == 0) {
        // 0x80090AB0: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80090AD4;
    }
    // 0x80090AB0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80090AB4: addu        $v0, $t0, $zero
    ctx->r2 = ADD32(ctx->r8, 0);
    // 0x80090AB8: addiu       $t0, $t0, 0x8
    ctx->r8 = ADD32(ctx->r8, 0X8);
    // 0x80090ABC: andi        $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 & 0XFFFF;
    // 0x80090AC0: or          $v1, $v1, $fp
    ctx->r3 = ctx->r3 | ctx->r30;
    // 0x80090AC4: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x80090AC8: sll         $v1, $s4, 16
    ctx->r3 = S32(ctx->r20 << 16);
    // 0x80090ACC: ori         $v1, $v1, 0x930
    ctx->r3 = ctx->r3 | 0X930;
    // 0x80090AD0: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
L_80090AD4:
    // 0x80090AD4: lw          $v1, 0x4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4);
    // 0x80090AD8: lw          $a0, 0x18($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X18);
    // 0x80090ADC: addiu       $v0, $s7, 0x1
    ctx->r2 = ADD32(ctx->r23, 0X1);
    // 0x80090AE0: addu        $s7, $v0, $zero
    ctx->r23 = ADD32(ctx->r2, 0);
    // 0x80090AE4: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80090AE8: addu        $s0, $a0, $v1
    ctx->r16 = ADD32(ctx->r4, ctx->r3);
    // 0x80090AEC: lbu         $v1, 0x24($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X24);
    // 0x80090AF0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80090AF4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80090AF8: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80090AFC: bne         $v0, $zero, L_80090944
    if (ctx->r2 != 0) {
        // 0x80090B00: sll         $v1, $s7, 16
        ctx->r3 = S32(ctx->r23 << 16);
            goto L_80090944;
    }
    // 0x80090B00: sll         $v1, $s7, 16
    ctx->r3 = S32(ctx->r23 << 16);
L_80090B04:
    // 0x80090B04: lw          $v0, 0x18($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X18);
    // 0x80090B08: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x80090B0C: lw          $v1, 0x14($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X14);
    // 0x80090B10: addiu       $v0, $v0, 0x170
    ctx->r2 = ADD32(ctx->r2, 0X170);
    // 0x80090B14: sll         $a0, $a0, 1
    ctx->r4 = S32(ctx->r4 << 1);
    // 0x80090B18: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80090B1C: sltu        $v1, $v1, $v0
    ctx->r3 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x80090B20: beq         $v1, $zero, L_80090B30
    if (ctx->r3 == 0) {
        // 0x80090B24: sw          $v0, 0x18($s2)
        MEM_W(0X18, ctx->r18) = ctx->r2;
            goto L_80090B30;
    }
    // 0x80090B24: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x80090B28: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80090B2C: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
L_80090B30:
    // 0x80090B30: lui         $a1, 0x7C0
    ctx->r5 = S32(0X7C0 << 16);
    // 0x80090B34: ori         $a1, $a1, 0x170
    ctx->r5 = ctx->r5 | 0X170;
    // 0x80090B38: addiu       $v0, $t0, 0x8
    ctx->r2 = ADD32(ctx->r8, 0X8);
    // 0x80090B3C: addu        $a0, $t0, $zero
    ctx->r4 = ADD32(ctx->r8, 0);
    // 0x80090B40: lui         $v1, 0xA00
    ctx->r3 = S32(0XA00 << 16);
    // 0x80090B44: ori         $v1, $v1, 0x930
    ctx->r3 = ctx->r3 | 0X930;
    // 0x80090B48: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x80090B4C: sw          $a1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r5;
    // 0x80090B50: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x80090B54: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x80090B58: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x80090B5C: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x80090B60: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x80090B64: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x80090B68: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x80090B6C: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x80090B70: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x80090B74: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x80090B78: jr          $ra
    // 0x80090B7C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x80090B7C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_8007832C_5372C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007832C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80078330: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80078334: lbu         $v0, 0xB($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XB);
    // 0x80078338: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8007833C: sb          $v0, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r2;
    // 0x80078340: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80078344: bne         $v0, $zero, L_80078354
    if (ctx->r2 != 0) {
        // 0x80078348: nop
    
            goto L_80078354;
    }
    // 0x80078348: nop

    // 0x8007834C: jal         0x8004F5C4
    // 0x80078350: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x80078350: nop

    after_0:
L_80078354:
    // 0x80078354: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80078358: jr          $ra
    // 0x8007835C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8007835C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800756A4_50AA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800756A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800756A8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x800756AC: lb          $v0, 0x5($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X5);
    // 0x800756B0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800756B4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800756B8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800756BC: lw          $v0, 0x48F4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X48F4);
    // 0x800756C0: jalr        $v0
    // 0x800756C4: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x800756C4: nop

    after_0:
    // 0x800756C8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x800756CC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x800756D0: jr          $ra
    // 0x800756D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x800756D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8002CAD0_7ED0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002CAD0: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x8002CAD4: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x8002CAD8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002CADC: sh          $v0, 0x2710($at)
    MEM_H(0X2710, ctx->r1) = ctx->r2;
    // 0x8002CAE0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8002CAE4: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002CAE8: sh          $v1, 0x2712($at)
    MEM_H(0X2712, ctx->r1) = ctx->r3;
    // 0x8002CAEC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002CAF0: sh          $v1, 0x2714($at)
    MEM_H(0X2714, ctx->r1) = ctx->r3;
    // 0x8002CAF4: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002CAF8: sw          $zero, 0x2718($at)
    MEM_W(0X2718, ctx->r1) = 0;
    // 0x8002CAFC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002CB00: sw          $v0, 0x271C($at)
    MEM_W(0X271C, ctx->r1) = ctx->r2;
    // 0x8002CB04: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002CB08: sh          $v1, 0x2720($at)
    MEM_H(0X2720, ctx->r1) = ctx->r3;
    // 0x8002CB0C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002CB10: sh          $v1, 0x2722($at)
    MEM_H(0X2722, ctx->r1) = ctx->r3;
    // 0x8002CB14: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002CB18: jr          $ra
    // 0x8002CB1C: sh          $v1, 0x2724($at)
    MEM_H(0X2724, ctx->r1) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x8002CB1C: sh          $v1, 0x2724($at)
    MEM_H(0X2724, ctx->r1) = ctx->r3;
;}
RECOMP_FUNC void func_8006A988_45D88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006A988: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8006A98C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8006A990: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8006A994: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006A998: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8006A99C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8006A9A0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8006A9A4: lhu         $a1, 0x11C($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X11C);
    // 0x8006A9A8: bne         $v0, $zero, L_8006A9BC
    if (ctx->r2 != 0) {
        // 0x8006A9AC: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_8006A9BC;
    }
    // 0x8006A9AC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8006A9B0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8006A9B4: sh          $zero, 0xB6($s0)
    MEM_H(0XB6, ctx->r16) = 0;
    // 0x8006A9B8: sb          $zero, 0x44D($s0)
    MEM_B(0X44D, ctx->r16) = 0;
L_8006A9BC:
    // 0x8006A9BC: lhu         $v0, 0x134($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X134);
    // 0x8006A9C0: and         $v0, $v0, $a1
    ctx->r2 = ctx->r2 & ctx->r5;
    // 0x8006A9C4: beq         $v0, $zero, L_8006A9D4
    if (ctx->r2 == 0) {
        // 0x8006A9C8: addiu       $s2, $zero, 0x2
        ctx->r18 = ADD32(0, 0X2);
            goto L_8006A9D4;
    }
    // 0x8006A9C8: addiu       $s2, $zero, 0x2
    ctx->r18 = ADD32(0, 0X2);
    // 0x8006A9CC: j           L_8006A9DC
    // 0x8006A9D0: addiu       $s1, $zero, 0x20
    ctx->r17 = ADD32(0, 0X20);
        goto L_8006A9DC;
    // 0x8006A9D0: addiu       $s1, $zero, 0x20
    ctx->r17 = ADD32(0, 0X20);
L_8006A9D4:
    // 0x8006A9D4: addiu       $s2, $zero, 0x4
    ctx->r18 = ADD32(0, 0X4);
    // 0x8006A9D8: addiu       $s1, $zero, 0x48
    ctx->r17 = ADD32(0, 0X48);
L_8006A9DC:
    // 0x8006A9DC: lb          $v1, 0x174($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X174);
    // 0x8006A9E0: andi        $v0, $v1, 0xC0
    ctx->r2 = ctx->r3 & 0XC0;
    // 0x8006A9E4: bne         $v0, $zero, L_8006AA28
    if (ctx->r2 != 0) {
        // 0x8006A9E8: andi        $v0, $v1, 0x80
        ctx->r2 = ctx->r3 & 0X80;
            goto L_8006AA28;
    }
    // 0x8006A9E8: andi        $v0, $v1, 0x80
    ctx->r2 = ctx->r3 & 0X80;
    // 0x8006A9EC: lhu         $a0, 0x128($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X128);
    // 0x8006A9F0: lhu         $v0, 0x12A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X12A);
    // 0x8006A9F4: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x8006A9F8: and         $v1, $a1, $v0
    ctx->r3 = ctx->r5 & ctx->r2;
    // 0x8006A9FC: beq         $v1, $v0, L_8006AA1C
    if (ctx->r3 == ctx->r2) {
        // 0x8006AA00: and         $v0, $a0, $a1
        ctx->r2 = ctx->r4 & ctx->r5;
            goto L_8006AA1C;
    }
    // 0x8006AA00: and         $v0, $a0, $a1
    ctx->r2 = ctx->r4 & ctx->r5;
    // 0x8006AA04: beq         $v0, $zero, L_8006AA14
    if (ctx->r2 == 0) {
        // 0x8006AA08: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8006AA14;
    }
    // 0x8006AA08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006AA0C: j           L_8006AA3C
    // 0x8006AA10: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
        goto L_8006AA3C;
    // 0x8006AA10: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
L_8006AA14:
    // 0x8006AA14: j           L_8006AA3C
    // 0x8006AA18: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
        goto L_8006AA3C;
    // 0x8006AA18: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
L_8006AA1C:
    // 0x8006AA1C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006AA20: j           L_8006AA3C
    // 0x8006AA24: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
        goto L_8006AA3C;
    // 0x8006AA24: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_8006AA28:
    // 0x8006AA28: beq         $v0, $zero, L_8006AA38
    if (ctx->r2 == 0) {
        // 0x8006AA2C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8006AA38;
    }
    // 0x8006AA2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006AA30: j           L_8006AA3C
    // 0x8006AA34: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
        goto L_8006AA3C;
    // 0x8006AA34: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
L_8006AA38:
    // 0x8006AA38: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
L_8006AA3C:
    // 0x8006AA3C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8006AA40: jal         0x8006FB90
    // 0x8006AA44: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8006FB90_4AF90(rdram, ctx);
        goto after_0;
    // 0x8006AA44: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x8006AA48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006AA4C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8006AA50: jal         0x8006FDAC
    // 0x8006AA54: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_8006FDAC_4B1AC(rdram, ctx);
        goto after_1;
    // 0x8006AA54: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_1:
    // 0x8006AA58: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006AA5C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8006AA60: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8006AA64: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8006AA68: jr          $ra
    // 0x8006AA6C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8006AA6C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80071A70_4CE70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80071A70: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80071A74: lw          $a1, 0x55A0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X55A0);
    // 0x80071A78: lw          $a2, 0x4($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X4);
    // 0x80071A7C: beq         $a2, $zero, L_80071AC4
    if (ctx->r6 == 0) {
        // 0x80071A80: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80071AC4;
    }
    // 0x80071A80: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80071A84: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
L_80071A88:
    // 0x80071A88: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x80071A8C: bnel        $v0, $a0, L_80071A9C
    if (ctx->r2 != ctx->r4) {
        // 0x80071A90: addiu       $a1, $a1, 0x30
        ctx->r5 = ADD32(ctx->r5, 0X30);
            goto L_80071A9C;
    }
    goto skip_0;
    // 0x80071A90: addiu       $a1, $a1, 0x30
    ctx->r5 = ADD32(ctx->r5, 0X30);
    skip_0:
    // 0x80071A94: j           L_80071AC4
    // 0x80071A98: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
        goto L_80071AC4;
    // 0x80071A98: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
L_80071A9C:
    // 0x80071A9C: lw          $v1, 0x4($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X4);
    // 0x80071AA0: beq         $v1, $zero, L_80071AB8
    if (ctx->r3 == 0) {
        // 0x80071AA4: subu        $v0, $a1, $a3
        ctx->r2 = SUB32(ctx->r5, ctx->r7);
            goto L_80071AB8;
    }
    // 0x80071AA4: subu        $v0, $a1, $a3
    ctx->r2 = SUB32(ctx->r5, ctx->r7);
    // 0x80071AA8: sltu        $v0, $v1, $a2
    ctx->r2 = ctx->r3 < ctx->r6 ? 1 : 0;
    // 0x80071AAC: bnel        $v0, $zero, L_80071AB4
    if (ctx->r2 != 0) {
        // 0x80071AB0: addu        $a2, $v1, $zero
        ctx->r6 = ADD32(ctx->r3, 0);
            goto L_80071AB4;
    }
    goto skip_1;
    // 0x80071AB0: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    skip_1:
L_80071AB4:
    // 0x80071AB4: subu        $v0, $a1, $a3
    ctx->r2 = SUB32(ctx->r5, ctx->r7);
L_80071AB8:
    // 0x80071AB8: sltu        $v0, $v0, $a2
    ctx->r2 = ctx->r2 < ctx->r6 ? 1 : 0;
    // 0x80071ABC: bne         $v0, $zero, L_80071A88
    if (ctx->r2 != 0) {
        // 0x80071AC0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80071A88;
    }
    // 0x80071AC0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80071AC4:
    // 0x80071AC4: jr          $ra
    // 0x80071AC8: nop

    TRACE_RETURN()
    return;
    // 0x80071AC8: nop

;}
RECOMP_FUNC void func_800504EC_2B8EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800504EC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800504F0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x800504F4: lbu         $v0, 0xA5($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA5);
    // 0x800504F8: lw          $a1, 0x98($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X98);
    // 0x800504FC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80050500: sb          $v0, 0xA5($a0)
    MEM_B(0XA5, ctx->r4) = ctx->r2;
    // 0x80050504: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80050508: bne         $v0, $zero, L_80050564
    if (ctx->r2 != 0) {
        // 0x8005050C: nop
    
            goto L_80050564;
    }
    // 0x8005050C: nop

    // 0x80050510: lb          $a2, 0x3($a1)
    ctx->r6 = MEM_B(ctx->r5, 0X3);
    // 0x80050514: bgez        $a2, L_80050550
    if (SIGNED(ctx->r6) >= 0) {
        // 0x80050518: addu        $v1, $a2, $zero
        ctx->r3 = ADD32(ctx->r6, 0);
            goto L_80050550;
    }
    // 0x80050518: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    // 0x8005051C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80050520: bne         $a2, $v0, L_80050534
    if (ctx->r6 != ctx->r2) {
        // 0x80050524: andi        $v1, $v1, 0x7F
        ctx->r3 = ctx->r3 & 0X7F;
            goto L_80050534;
    }
    // 0x80050524: andi        $v1, $v1, 0x7F
    ctx->r3 = ctx->r3 & 0X7F;
    // 0x80050528: lbu         $v0, 0x1($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X1);
    // 0x8005052C: j           L_80050564
    // 0x80050530: sb          $v0, 0xA5($a0)
    MEM_B(0XA5, ctx->r4) = ctx->r2;
        goto L_80050564;
    // 0x80050530: sb          $v0, 0xA5($a0)
    MEM_B(0XA5, ctx->r4) = ctx->r2;
L_80050534:
    // 0x80050534: lw          $v0, 0x94($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X94);
    // 0x80050538: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8005053C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80050540: sw          $v0, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->r2;
    // 0x80050544: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80050548: j           L_80050564
    // 0x8005054C: sw          $v0, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->r2;
        goto L_80050564;
    // 0x8005054C: sw          $v0, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->r2;
L_80050550:
    // 0x80050550: lw          $v0, 0x98($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X98);
    // 0x80050554: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x80050558: sw          $v1, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->r3;
    // 0x8005055C: lw          $v0, 0x8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X8);
    // 0x80050560: sw          $v0, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->r2;
L_80050564:
    // 0x80050564: jal         0x80051770
    // 0x80050568: nop

    func_80051770_2CB70(rdram, ctx);
        goto after_0;
    // 0x80050568: nop

    after_0:
    // 0x8005056C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80050570: jr          $ra
    // 0x80050574: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80050574: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80051B48_2CF48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80051B48: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80051B4C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80051B50: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x80051B54: addu        $t0, $a2, $zero
    ctx->r8 = ADD32(ctx->r6, 0);
    // 0x80051B58: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80051B5C: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80051B60: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80051B64: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80051B68: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80051B6C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80051B70: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80051B74: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80051B78: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80051B7C: lh          $v0, 0x0($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X0);
    // 0x80051B80: lh          $a2, 0x0($t0)
    ctx->r6 = MEM_H(ctx->r8, 0X0);
    // 0x80051B84: mult        $v0, $a2
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80051B88: mflo        $v0
    ctx->r2 = lo;
    // 0x80051B8C: lh          $a1, 0x2($s4)
    ctx->r5 = MEM_H(ctx->r20, 0X2);
    // 0x80051B90: lh          $v1, 0x2($t0)
    ctx->r3 = MEM_H(ctx->r8, 0X2);
    // 0x80051B94: mult        $a1, $v1
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80051B98: mflo        $a1
    ctx->r5 = lo;
    // 0x80051B9C: addu        $fp, $a0, $zero
    ctx->r30 = ADD32(ctx->r4, 0);
    // 0x80051BA0: lh          $a0, 0x4($s4)
    ctx->r4 = MEM_H(ctx->r20, 0X4);
    // 0x80051BA4: lh          $v1, 0x4($t0)
    ctx->r3 = MEM_H(ctx->r8, 0X4);
    // 0x80051BA8: mult        $a0, $v1
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80051BAC: mflo        $a0
    ctx->r4 = lo;
    // 0x80051BB0: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x80051BB4: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80051BB8: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80051BBC: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80051BC0: slt         $v0, $v0, $s6
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x80051BC4: bne         $v0, $zero, L_80051BD8
    if (ctx->r2 != 0) {
        // 0x80051BC8: addu        $s3, $a3, $zero
        ctx->r19 = ADD32(ctx->r7, 0);
            goto L_80051BD8;
    }
    // 0x80051BC8: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    // 0x80051BCC: addu        $a0, $fp, $zero
    ctx->r4 = ADD32(ctx->r30, 0);
    // 0x80051BD0: j           L_80051DDC
    // 0x80051BD4: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
        goto L_80051DDC;
    // 0x80051BD4: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
L_80051BD8:
    // 0x80051BD8: lui         $s2, 0x8018
    ctx->r18 = S32(0X8018 << 16);
    // 0x80051BDC: addiu       $s2, $s2, -0x496C
    ctx->r18 = ADD32(ctx->r18, -0X496C);
    // 0x80051BE0: sh          $a2, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r6;
    // 0x80051BE4: lhu         $v0, 0x2($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0X2);
    // 0x80051BE8: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80051BEC: sh          $v0, -0x4966($at)
    MEM_H(-0X4966, ctx->r1) = ctx->r2;
    // 0x80051BF0: lhu         $v0, 0x4($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0X4);
    // 0x80051BF4: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80051BF8: sh          $v0, -0x4960($at)
    MEM_H(-0X4960, ctx->r1) = ctx->r2;
    // 0x80051BFC: lh          $v0, 0x0($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X0);
    // 0x80051C00: lui         $s7, 0x8018
    ctx->r23 = S32(0X8018 << 16);
    // 0x80051C04: addiu       $s7, $s7, -0x48E0
    ctx->r23 = ADD32(ctx->r23, -0X48E0);
    // 0x80051C08: sw          $v0, 0x0($s7)
    MEM_W(0X0, ctx->r23) = ctx->r2;
    // 0x80051C0C: lh          $v0, 0x2($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X2);
    // 0x80051C10: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80051C14: sw          $v0, -0x48DC($at)
    MEM_W(-0X48DC, ctx->r1) = ctx->r2;
    // 0x80051C18: lh          $v0, 0x4($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X4);
    // 0x80051C1C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80051C20: sw          $v0, -0x48D8($at)
    MEM_W(-0X48D8, ctx->r1) = ctx->r2;
    // 0x80051C24: lh          $v0, 0x0($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X0);
    // 0x80051C28: lui         $s5, 0x8018
    ctx->r21 = S32(0X8018 << 16);
    // 0x80051C2C: addiu       $s5, $s5, -0x48D0
    ctx->r21 = ADD32(ctx->r21, -0X48D0);
    // 0x80051C30: sw          $v0, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r2;
    // 0x80051C34: lh          $v0, 0x2($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X2);
    // 0x80051C38: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    // 0x80051C3C: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x80051C40: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80051C44: sw          $v0, -0x48CC($at)
    MEM_W(-0X48CC, ctx->r1) = ctx->r2;
    // 0x80051C48: lh          $v0, 0x4($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X4);
    // 0x80051C4C: lui         $s0, 0x8018
    ctx->r16 = S32(0X8018 << 16);
    // 0x80051C50: addiu       $s0, $s0, -0x48B0
    ctx->r16 = ADD32(ctx->r16, -0X48B0);
    // 0x80051C54: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80051C58: sw          $v0, -0x48C8($at)
    MEM_W(-0X48C8, ctx->r1) = ctx->r2;
    // 0x80051C5C: jal         0x800320E4
    // 0x80051C60: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_800320E4_D4E4(rdram, ctx);
        goto after_0;
    // 0x80051C60: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80051C64: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x80051C68: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80051C6C: lui         $s1, 0x8018
    ctx->r17 = S32(0X8018 << 16);
    // 0x80051C70: addiu       $s1, $s1, -0x48A0
    ctx->r17 = ADD32(ctx->r17, -0X48A0);
    // 0x80051C74: jal         0x800320E4
    // 0x80051C78: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_800320E4_D4E4(rdram, ctx);
        goto after_1;
    // 0x80051C78: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_1:
    // 0x80051C7C: srl         $v1, $s6, 16
    ctx->r3 = S32(U32(ctx->r22) >> 16);
    // 0x80051C80: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x80051C84: addiu       $a0, $a0, -0x4970
    ctx->r4 = ADD32(ctx->r4, -0X4970);
    // 0x80051C88: lui         $s6, 0x8018
    ctx->r22 = S32(0X8018 << 16);
    // 0x80051C8C: addiu       $s6, $s6, -0x48F0
    ctx->r22 = ADD32(ctx->r22, -0X48F0);
    // 0x80051C90: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    // 0x80051C94: sh          $s3, 0x0($s6)
    MEM_H(0X0, ctx->r22) = ctx->r19;
    // 0x80051C98: lw          $a3, 0x0($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X0);
    // 0x80051C9C: lui         $t0, 0x8018
    ctx->r8 = S32(0X8018 << 16);
    // 0x80051CA0: lw          $t0, -0x48AC($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X48AC);
    // 0x80051CA4: lui         $t1, 0x8018
    ctx->r9 = S32(0X8018 << 16);
    // 0x80051CA8: lw          $t1, -0x48A8($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X48A8);
    // 0x80051CAC: lw          $t2, 0x0($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X0);
    // 0x80051CB0: lui         $t3, 0x8018
    ctx->r11 = S32(0X8018 << 16);
    // 0x80051CB4: lw          $t3, -0x489C($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X489C);
    // 0x80051CB8: lui         $t4, 0x8018
    ctx->r12 = S32(0X8018 << 16);
    // 0x80051CBC: lw          $t4, -0x4898($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X4898);
    // 0x80051CC0: lui         $s1, 0x8018
    ctx->r17 = S32(0X8018 << 16);
    // 0x80051CC4: addiu       $s1, $s1, -0x48E8
    ctx->r17 = ADD32(ctx->r17, -0X48E8);
    // 0x80051CC8: negu        $v0, $s3
    ctx->r2 = SUB32(0, ctx->r19);
    // 0x80051CCC: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x80051CD0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80051CD4: sh          $zero, -0x48E6($at)
    MEM_H(-0X48E6, ctx->r1) = 0;
    // 0x80051CD8: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80051CDC: sh          $zero, -0x48EE($at)
    MEM_H(-0X48EE, ctx->r1) = 0;
    // 0x80051CE0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80051CE4: sh          $v1, -0x48E4($at)
    MEM_H(-0X48E4, ctx->r1) = ctx->r3;
    // 0x80051CE8: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80051CEC: sh          $v1, -0x48EC($at)
    MEM_H(-0X48EC, ctx->r1) = ctx->r3;
    // 0x80051CF0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80051CF4: sh          $a3, -0x496E($at)
    MEM_H(-0X496E, ctx->r1) = ctx->r7;
    // 0x80051CF8: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80051CFC: sh          $t0, -0x4968($at)
    MEM_H(-0X4968, ctx->r1) = ctx->r8;
    // 0x80051D00: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80051D04: sh          $t1, -0x4962($at)
    MEM_H(-0X4962, ctx->r1) = ctx->r9;
    // 0x80051D08: sh          $t2, -0x4($s2)
    MEM_H(-0X4, ctx->r18) = ctx->r10;
    // 0x80051D0C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80051D10: sh          $t3, -0x496A($at)
    MEM_H(-0X496A, ctx->r1) = ctx->r11;
    // 0x80051D14: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80051D18: sh          $t4, -0x4964($at)
    MEM_H(-0X4964, ctx->r1) = ctx->r12;
    // 0x80051D1C: jal         0x800308E8
    // 0x80051D20: addu        $a2, $s7, $zero
    ctx->r6 = ADD32(ctx->r23, 0);
    func_800308E8_BCE8(rdram, ctx);
        goto after_2;
    // 0x80051D20: addu        $a2, $s7, $zero
    ctx->r6 = ADD32(ctx->r23, 0);
    after_2:
    // 0x80051D24: lh          $s0, 0x0($s4)
    ctx->r16 = MEM_H(ctx->r20, 0X0);
    // 0x80051D28: lw          $v0, 0x0($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X0);
    // 0x80051D2C: mult        $s0, $v0
    result = S64(S32(ctx->r16)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80051D30: mflo        $s0
    ctx->r16 = lo;
    // 0x80051D34: lh          $a3, 0x2($s4)
    ctx->r7 = MEM_H(ctx->r20, 0X2);
    // 0x80051D38: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80051D3C: lw          $v0, -0x48DC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X48DC);
    // 0x80051D40: mult        $a3, $v0
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80051D44: mflo        $a3
    ctx->r7 = lo;
    // 0x80051D48: lh          $v1, 0x4($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X4);
    // 0x80051D4C: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80051D50: lw          $v0, -0x48D8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X48D8);
    // 0x80051D54: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80051D58: mflo        $v1
    ctx->r3 = lo;
    // 0x80051D5C: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x80051D60: addiu       $a0, $a0, -0x4970
    ctx->r4 = ADD32(ctx->r4, -0X4970);
    // 0x80051D64: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80051D68: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    // 0x80051D6C: addu        $s0, $s0, $a3
    ctx->r16 = ADD32(ctx->r16, ctx->r7);
    // 0x80051D70: jal         0x800308E8
    // 0x80051D74: addu        $s0, $s0, $v1
    ctx->r16 = ADD32(ctx->r16, ctx->r3);
    func_800308E8_BCE8(rdram, ctx);
        goto after_3;
    // 0x80051D74: addu        $s0, $s0, $v1
    ctx->r16 = ADD32(ctx->r16, ctx->r3);
    after_3:
    // 0x80051D78: lh          $v0, 0x0($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X0);
    // 0x80051D7C: lw          $v1, 0x0($s5)
    ctx->r3 = MEM_W(ctx->r21, 0X0);
    // 0x80051D80: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80051D84: mflo        $v0
    ctx->r2 = lo;
    // 0x80051D88: lh          $a1, 0x2($s4)
    ctx->r5 = MEM_H(ctx->r20, 0X2);
    // 0x80051D8C: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x80051D90: lw          $v1, -0x48CC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X48CC);
    // 0x80051D94: mult        $a1, $v1
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80051D98: mflo        $a1
    ctx->r5 = lo;
    // 0x80051D9C: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x80051DA0: lw          $a0, -0x48C8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X48C8);
    // 0x80051DA4: lh          $v1, 0x4($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X4);
    // 0x80051DA8: mult        $v1, $a0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80051DAC: mflo        $v1
    ctx->r3 = lo;
    // 0x80051DB0: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80051DB4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80051DB8: slt         $v0, $v0, $s0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80051DBC: bne         $v0, $zero, L_80051DC8
    if (ctx->r2 != 0) {
        // 0x80051DC0: addu        $a0, $s7, $zero
        ctx->r4 = ADD32(ctx->r23, 0);
            goto L_80051DC8;
    }
    // 0x80051DC0: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    // 0x80051DC4: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
L_80051DC8:
    // 0x80051DC8: jal         0x80032308
    // 0x80051DCC: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    func_80032308_D708(rdram, ctx);
        goto after_4;
    // 0x80051DCC: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    after_4:
    // 0x80051DD0: addu        $a0, $fp, $zero
    ctx->r4 = ADD32(ctx->r30, 0);
    // 0x80051DD4: lui         $a1, 0x8018
    ctx->r5 = S32(0X8018 << 16);
    // 0x80051DD8: addiu       $a1, $a1, -0x48F0
    ctx->r5 = ADD32(ctx->r5, -0X48F0);
L_80051DDC:
    // 0x80051DDC: jal         0x8009A3B4
    // 0x80051DE0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80051DE0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x80051DE4: addu        $v0, $fp, $zero
    ctx->r2 = ADD32(ctx->r30, 0);
    // 0x80051DE8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80051DEC: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80051DF0: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80051DF4: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80051DF8: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80051DFC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80051E00: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80051E04: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80051E08: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80051E0C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80051E10: jr          $ra
    // 0x80051E14: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80051E14: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8008EBE8_69FE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008EBE8: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x8008EBEC: lw          $v1, 0x51E8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X51E8);
    // 0x8008EBF0: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8008EBF4: lw          $a0, -0x11B4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X11B4);
    // 0x8008EBF8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8008EBFC: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x8008EC00: addiu       $v0, $v0, 0x3B10
    ctx->r2 = ADD32(ctx->r2, 0X3B10);
    // 0x8008EC04: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8008EC08: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x8008EC0C: addiu       $v0, $v0, 0x11A0
    ctx->r2 = ADD32(ctx->r2, 0X11A0);
    // 0x8008EC10: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x8008EC14: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x8008EC18: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8008EC1C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8008EC20: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8008EC24: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8008EC28: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8008EC2C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8008EC30: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8008EC34: jalr        $v0
    // 0x8008EC38: lui         $s3, 0x8000
    ctx->r19 = S32(0X8000 << 16);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8008EC38: lui         $s3, 0x8000
    ctx->r19 = S32(0X8000 << 16);
    after_0:
L_8008EC3C:
    // 0x8008EC3C: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x8008EC40: lw          $v0, -0x11B4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X11B4);
    // 0x8008EC44: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x8008EC48: jalr        $v0
    // 0x8008EC4C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x8008EC4C: nop

    after_1:
    // 0x8008EC50: jal         0x80095850
    // 0x8008EC54: nop

    osAiGetStatus_recomp(rdram, ctx);
        goto after_2;
    // 0x8008EC54: nop

    after_2:
    // 0x8008EC58: jal         0x80095840
    // 0x8008EC5C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    osAiGetLength_recomp(rdram, ctx);
        goto after_3;
    // 0x8008EC5C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_3:
    // 0x8008EC60: and         $s0, $s0, $s3
    ctx->r16 = ctx->r16 & ctx->r19;
    // 0x8008EC64: bne         $s0, $zero, L_8008EC3C
    if (ctx->r16 != 0) {
        // 0x8008EC68: srl         $s2, $v0, 2
        ctx->r18 = S32(U32(ctx->r2) >> 2);
            goto L_8008EC3C;
    }
    // 0x8008EC68: srl         $s2, $v0, 2
    ctx->r18 = S32(U32(ctx->r2) >> 2);
    // 0x8008EC6C: jal         0x8008E614
    // 0x8008EC70: nop

    func_8008E614_69A14(rdram, ctx);
        goto after_4;
    // 0x8008EC70: nop

    after_4:
    // 0x8008EC74: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8008EC78: lw          $a0, -0x11B0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X11B0);
    // 0x8008EC7C: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x8008EC80: sltu        $v1, $zero, $a0
    ctx->r3 = 0 < ctx->r4 ? 1 : 0;
    // 0x8008EC84: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x8008EC88: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8008EC8C: beq         $v1, $zero, L_8008ECA4
    if (ctx->r3 == 0) {
        // 0x8008EC90: nop
    
            goto L_8008ECA4;
    }
    // 0x8008EC90: nop

    // 0x8008EC94: lw          $a1, 0x4($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X4);
    // 0x8008EC98: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x8008EC9C: jal         0x80095980
    // 0x8008ECA0: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    osAiSetNextBuffer_recomp(rdram, ctx);
        goto after_5;
    // 0x8008ECA0: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    after_5:
L_8008ECA4:
    // 0x8008ECA4: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008ECA8: lw          $v0, 0x51E4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X51E4);
    // 0x8008ECAC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8008ECB0: sll         $v1, $s1, 3
    ctx->r3 = S32(ctx->r17 << 3);
    // 0x8008ECB4: jal         0x8008EF54
    // 0x8008ECB8: addu        $s0, $v0, $v1
    ctx->r16 = ADD32(ctx->r2, ctx->r3);
    func_8008EF54_6A354(rdram, ctx);
        goto after_6;
    // 0x8008ECB8: addu        $s0, $v0, $v1
    ctx->r16 = ADD32(ctx->r2, ctx->r3);
    after_6:
    // 0x8008ECBC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8008ECC0: jal         0x80099BB0
    // 0x8008ECC4: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_7;
    // 0x8008ECC4: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    after_7:
    // 0x8008ECC8: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x8008ECCC: lw          $a0, 0x51E8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X51E8);
    // 0x8008ECD0: lw          $a3, 0x4($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X4);
    // 0x8008ECD4: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8008ECD8: jal         0x80091B10
    // 0x8008ECDC: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_80091B10_6CF10(rdram, ctx);
        goto after_8;
    // 0x8008ECDC: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_8:
    // 0x8008ECE0: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x8008ECE4: beq         $v1, $zero, L_8008ED20
    if (ctx->r3 == 0) {
        // 0x8008ECE8: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_8008ED20;
    }
    // 0x8008ECE8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8008ECEC: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008ECF0: lw          $v0, 0x51E8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X51E8);
    // 0x8008ECF4: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x8008ECF8: lw          $v1, -0x11B4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X11B4);
    // 0x8008ECFC: subu        $v0, $a0, $v0
    ctx->r2 = SUB32(ctx->r4, ctx->r2);
    // 0x8008ED00: sra         $v0, $v0, 3
    ctx->r2 = S32(SIGNED(ctx->r2) >> 3);
    // 0x8008ED04: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8008ED08: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8008ED0C: lw          $v0, 0x8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X8);
    // 0x8008ED10: jalr        $v0
    // 0x8008ED14: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_9;
    // 0x8008ED14: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_9:
    // 0x8008ED18: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008ED1C: sw          $s0, -0x11B0($at)
    MEM_W(-0X11B0, ctx->r1) = ctx->r16;
L_8008ED20:
    // 0x8008ED20: addiu       $v1, $s1, 0x1
    ctx->r3 = ADD32(ctx->r17, 0X1);
    // 0x8008ED24: lui         $v0, 0xAAAA
    ctx->r2 = S32(0XAAAA << 16);
    // 0x8008ED28: ori         $v0, $v0, 0xAAAB
    ctx->r2 = ctx->r2 | 0XAAAB;
    // 0x8008ED2C: multu       $v1, $v0
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8008ED30: mfhi        $t0
    ctx->r8 = hi;
    // 0x8008ED34: srl         $s1, $t0, 1
    ctx->r17 = S32(U32(ctx->r8) >> 1);
    // 0x8008ED38: sll         $v0, $s1, 1
    ctx->r2 = S32(ctx->r17 << 1);
    // 0x8008ED3C: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8008ED40: j           L_8008EC3C
    // 0x8008ED44: subu        $s1, $v1, $v0
    ctx->r17 = SUB32(ctx->r3, ctx->r2);
        goto L_8008EC3C;
    // 0x8008ED44: subu        $s1, $v1, $v0
    ctx->r17 = SUB32(ctx->r3, ctx->r2);
    // 0x8008ED48: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x8008ED4C: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x8008ED50: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8008ED54: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8008ED58: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8008ED5C: jr          $ra
    // 0x8008ED60: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8008ED60: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8008ED64: nop

    // 0x8008ED68: nop

    // 0x8008ED6C: nop

;}
RECOMP_FUNC void func_8004F228_2A628(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004F228: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8004F22C: lui         $a1, 0x801A
    ctx->r5 = S32(0X801A << 16);
    // 0x8004F230: lw          $a1, 0x5210($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5210);
    // 0x8004F234: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8004F238: lui         $v1, 0x8000
    ctx->r3 = S32(0X8000 << 16);
    // 0x8004F23C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8004F240: addiu       $s2, $zero, 0x3
    ctx->r18 = ADD32(0, 0X3);
    // 0x8004F244: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8004F248: lui         $s1, 0x8021
    ctx->r17 = S32(0X8021 << 16);
    // 0x8004F24C: addiu       $s1, $s1, -0x3050
    ctx->r17 = ADD32(ctx->r17, -0X3050);
    // 0x8004F250: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8004F254: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
L_8004F258:
    // 0x8004F258: sllv        $v0, $a1, $a0
    ctx->r2 = S32(ctx->r5 << (ctx->r4 & 31));
    // 0x8004F25C: bltzl       $v0, L_8004F29C
    if (SIGNED(ctx->r2) < 0) {
        // 0x8004F260: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_8004F29C;
    }
    goto skip_0;
    // 0x8004F260: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_0:
    // 0x8004F264: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x8004F268: lw          $v0, 0x5210($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5210);
    // 0x8004F26C: srlv        $v1, $v1, $a0
    ctx->r3 = S32(U32(ctx->r3) >> (ctx->r4 & 31));
    // 0x8004F270: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8004F274: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8004F278: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8004F27C: sw          $v0, 0x5210($at)
    MEM_W(0X5210, ctx->r1) = ctx->r2;
    // 0x8004F280: lbu         $s0, 0x1($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0X1);
    // 0x8004F284: jal         0x8009A2B0
    // 0x8004F288: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    bzero_recomp(rdram, ctx);
        goto after_0;
    // 0x8004F288: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    after_0:
    // 0x8004F28C: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x8004F290: sb          $s2, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r18;
    // 0x8004F294: j           L_8004F2AC
    // 0x8004F298: sb          $s0, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r16;
        goto L_8004F2AC;
    // 0x8004F298: sb          $s0, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r16;
L_8004F29C:
    // 0x8004F29C: slti        $v0, $a0, 0x10
    ctx->r2 = SIGNED(ctx->r4) < 0X10 ? 1 : 0;
    // 0x8004F2A0: bne         $v0, $zero, L_8004F258
    if (ctx->r2 != 0) {
        // 0x8004F2A4: addiu       $s1, $s1, 0x24
        ctx->r17 = ADD32(ctx->r17, 0X24);
            goto L_8004F258;
    }
    // 0x8004F2A4: addiu       $s1, $s1, 0x24
    ctx->r17 = ADD32(ctx->r17, 0X24);
    // 0x8004F2A8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8004F2AC:
    // 0x8004F2AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8004F2B0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8004F2B4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8004F2B8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8004F2BC: jr          $ra
    // 0x8004F2C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8004F2C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80040F30_1C330(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80040F30: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80040F34: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80040F38: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80040F3C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80040F40: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80040F44: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80040F48: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80040F4C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80040F50: lw          $a1, 0x78($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X78);
    // 0x80040F54: beq         $a1, $zero, L_80040F74
    if (ctx->r5 == 0) {
        // 0x80040F58: nop
    
            goto L_80040F74;
    }
    // 0x80040F58: nop

    // 0x80040F5C: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80040F60: addiu       $a0, $a0, -0x26B6
    ctx->r4 = ADD32(ctx->r4, -0X26B6);
    // 0x80040F64: jal         0x8009A3B4
    // 0x80040F68: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80040F68: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_0:
    // 0x80040F6C: j           L_80040F84
    // 0x80040F70: nop

        goto L_80040F84;
    // 0x80040F70: nop

L_80040F74:
    // 0x80040F74: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80040F78: addiu       $a0, $a0, -0x26B6
    ctx->r4 = ADD32(ctx->r4, -0X26B6);
    // 0x80040F7C: jal         0x8009A2B0
    // 0x80040F80: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    bzero_recomp(rdram, ctx);
        goto after_1;
    // 0x80040F80: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_1:
L_80040F84:
    // 0x80040F84: lbu         $a0, 0x1($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X1);
    // 0x80040F88: jal         0x8004DA68
    // 0x80040F8C: addiu       $s4, $s0, 0x14
    ctx->r20 = ADD32(ctx->r16, 0X14);
    func_8004DA68_28E68(rdram, ctx);
        goto after_2;
    // 0x80040F8C: addiu       $s4, $s0, 0x14
    ctx->r20 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x80040F90: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x80040F94: addiu       $s3, $s0, 0x2C
    ctx->r19 = ADD32(ctx->r16, 0X2C);
    // 0x80040F98: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80040F9C: lb          $a2, 0x74($s0)
    ctx->r6 = MEM_B(ctx->r16, 0X74);
    // 0x80040FA0: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80040FA4: sll         $v0, $v0, 15
    ctx->r2 = S32(ctx->r2 << 15);
    // 0x80040FA8: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80040FAC: jal         0x800411DC
    // 0x80040FB0: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    func_800411DC_1C5DC(rdram, ctx);
        goto after_3;
    // 0x80040FB0: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    after_3:
    // 0x80040FB4: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80040FB8: beql        $s2, $zero, L_800410D0
    if (ctx->r18 == 0) {
        // 0x80040FBC: addu        $v0, $s2, $zero
        ctx->r2 = ADD32(ctx->r18, 0);
            goto L_800410D0;
    }
    goto skip_0;
    // 0x80040FBC: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    skip_0:
    // 0x80040FC0: blez        $s2, L_8004105C
    if (SIGNED(ctx->r18) <= 0) {
        // 0x80040FC4: andi        $v0, $s2, 0x300
        ctx->r2 = ctx->r18 & 0X300;
            goto L_8004105C;
    }
    // 0x80040FC4: andi        $v0, $s2, 0x300
    ctx->r2 = ctx->r18 & 0X300;
    // 0x80040FC8: beq         $v0, $zero, L_80040FF0
    if (ctx->r2 == 0) {
        // 0x80040FCC: andi        $v0, $s2, 0xC00
        ctx->r2 = ctx->r18 & 0XC00;
            goto L_80040FF0;
    }
    // 0x80040FCC: andi        $v0, $s2, 0xC00
    ctx->r2 = ctx->r18 & 0XC00;
    // 0x80040FD0: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80040FD4: addiu       $v1, $v1, -0x7158
    ctx->r3 = ADD32(ctx->r3, -0X7158);
    // 0x80040FD8: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x80040FDC: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80040FE0: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    // 0x80040FE4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80040FE8: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80040FEC: andi        $v0, $s2, 0xC00
    ctx->r2 = ctx->r18 & 0XC00;
L_80040FF0:
    // 0x80040FF0: beq         $v0, $zero, L_80041018
    if (ctx->r2 == 0) {
        // 0x80040FF4: andi        $v0, $s2, 0x3000
        ctx->r2 = ctx->r18 & 0X3000;
            goto L_80041018;
    }
    // 0x80040FF4: andi        $v0, $s2, 0x3000
    ctx->r2 = ctx->r18 & 0X3000;
    // 0x80040FF8: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80040FFC: addiu       $v1, $v1, -0x7154
    ctx->r3 = ADD32(ctx->r3, -0X7154);
    // 0x80041000: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x80041004: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x80041008: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    // 0x8004100C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80041010: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x80041014: andi        $v0, $s2, 0x3000
    ctx->r2 = ctx->r18 & 0X3000;
L_80041018:
    // 0x80041018: beq         $v0, $zero, L_8004103C
    if (ctx->r2 == 0) {
        // 0x8004101C: nop
    
            goto L_8004103C;
    }
    // 0x8004101C: nop

    // 0x80041020: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80041024: addiu       $v1, $v1, -0x7156
    ctx->r3 = ADD32(ctx->r3, -0X7156);
    // 0x80041028: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x8004102C: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80041030: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    // 0x80041034: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80041038: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_8004103C:
    // 0x8004103C: lb          $v1, 0x74($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X74);
    // 0x80041040: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80041044: beq         $v1, $v0, L_800410D0
    if (ctx->r3 == ctx->r2) {
        // 0x80041048: addu        $v0, $s2, $zero
        ctx->r2 = ADD32(ctx->r18, 0);
            goto L_800410D0;
    }
    // 0x80041048: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x8004104C: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80041050: lbu         $v0, 0x296($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X296);
    // 0x80041054: j           L_800410CC
    // 0x80041058: sb          $v0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r2;
        goto L_800410CC;
    // 0x80041058: sb          $v0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r2;
L_8004105C:
    // 0x8004105C: beq         $s1, $zero, L_800410B0
    if (ctx->r17 == 0) {
        // 0x80041060: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_800410B0;
    }
    // 0x80041060: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x80041064: lhu         $v0, 0x2C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2C);
    // 0x80041068: lhu         $v1, 0x30($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X30);
    // 0x8004106C: lw          $a0, 0x34($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X34);
    // 0x80041070: lw          $a1, 0x3C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X3C);
    // 0x80041074: lb          $a2, 0x74($s0)
    ctx->r6 = MEM_B(ctx->r16, 0X74);
    // 0x80041078: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8004107C: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x80041080: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80041084: sh          $v1, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r3;
    // 0x80041088: sw          $a0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r4;
    // 0x8004108C: beq         $a2, $zero, L_800410CC
    if (ctx->r6 == 0) {
        // 0x80041090: sw          $a1, 0x24($s0)
        MEM_W(0X24, ctx->r16) = ctx->r5;
            goto L_800410CC;
    }
    // 0x80041090: sw          $a1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r5;
    // 0x80041094: lhu         $v0, 0x2E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2E);
    // 0x80041098: lw          $v1, 0x38($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X38);
    // 0x8004109C: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
    // 0x800410A0: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x800410A4: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x800410A8: j           L_800410CC
    // 0x800410AC: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
        goto L_800410CC;
    // 0x800410AC: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
L_800410B0:
    // 0x800410B0: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x800410B4: jal         0x8009A3B4
    // 0x800410B8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x800410B8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x800410BC: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x800410C0: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x800410C4: jal         0x8009A3B4
    // 0x800410C8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x800410C8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_5:
L_800410CC:
    // 0x800410CC: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
L_800410D0:
    // 0x800410D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800410D4: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x800410D8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x800410DC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x800410E0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x800410E4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x800410E8: jr          $ra
    // 0x800410EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x800410EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800655B8_409B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800655B8: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x800655BC: addiu       $t1, $t1, 0x560B
    ctx->r9 = ADD32(ctx->r9, 0X560B);
    // 0x800655C0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x800655C4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x800655C8: addiu       $t0, $zero, 0x80
    ctx->r8 = ADD32(0, 0X80);
    // 0x800655CC: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x800655D0: addiu       $a2, $a2, -0x6F90
    ctx->r6 = ADD32(ctx->r6, -0X6F90);
L_800655D4:
    // 0x800655D4: lbu         $v0, 0x0($t1)
    ctx->r2 = MEM_BU(ctx->r9, 0X0);
    // 0x800655D8: srav        $v1, $t0, $a1
    ctx->r3 = S32(SIGNED(ctx->r8) >> (ctx->r5 & 31));
    // 0x800655DC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x800655E0: beql        $v0, $zero, L_800655F8
    if (ctx->r2 == 0) {
        // 0x800655E4: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_800655F8;
    }
    goto skip_0;
    // 0x800655E4: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    skip_0:
    // 0x800655E8: sb          $a1, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r5;
    // 0x800655EC: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x800655F0: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x800655F4: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_800655F8:
    // 0x800655F8: sltiu       $v0, $a1, 0x8
    ctx->r2 = ctx->r5 < 0X8 ? 1 : 0;
    // 0x800655FC: bne         $v0, $zero, L_800655D4
    if (ctx->r2 != 0) {
        // 0x80065600: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_800655D4;
    }
    // 0x80065600: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80065604: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80065608: addu        $at, $at, $a3
    ctx->r1 = ADD32(ctx->r1, ctx->r7);
    // 0x8006560C: sb          $v0, -0x6F90($at)
    MEM_B(-0X6F90, ctx->r1) = ctx->r2;
    // 0x80065610: lw          $a1, 0x6C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X6C);
    // 0x80065614: addu        $v0, $a1, $a3
    ctx->r2 = ADD32(ctx->r5, ctx->r7);
    // 0x80065618: lbu         $a2, 0x0($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X0);
    // 0x8006561C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80065620: andi        $v1, $a2, 0xFF
    ctx->r3 = ctx->r6 & 0XFF;
    // 0x80065624: bne         $v1, $v0, L_80065634
    if (ctx->r3 != ctx->r2) {
        // 0x80065628: addiu       $v0, $a1, 0x9
        ctx->r2 = ADD32(ctx->r5, 0X9);
            goto L_80065634;
    }
    // 0x80065628: addiu       $v0, $a1, 0x9
    ctx->r2 = ADD32(ctx->r5, 0X9);
    // 0x8006562C: j           L_80065690
    // 0x80065630: sw          $v0, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r2;
        goto L_80065690;
    // 0x80065630: sw          $v0, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r2;
L_80065634:
    // 0x80065634: lw          $a1, 0x44($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X44);
    // 0x80065638: beq         $a1, $zero, L_8006566C
    if (ctx->r5 == 0) {
        // 0x8006563C: sh          $a2, 0xC2($a0)
        MEM_H(0XC2, ctx->r4) = ctx->r6;
            goto L_8006566C;
    }
    // 0x8006563C: sh          $a2, 0xC2($a0)
    MEM_H(0XC2, ctx->r4) = ctx->r6;
    // 0x80065640: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80065644: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80065648: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x8006564C: srl         $v1, $v0, 8
    ctx->r3 = S32(U32(ctx->r2) >> 8);
    // 0x80065650: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80065654: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80065658: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8006565C: addu        $v1, $a1, $v1
    ctx->r3 = ADD32(ctx->r5, ctx->r3);
    // 0x80065660: sw          $v1, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->r3;
    // 0x80065664: j           L_80065684
    // 0x80065668: sw          $v1, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r3;
        goto L_80065684;
    // 0x80065668: sw          $v1, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r3;
L_8006566C:
    // 0x8006566C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80065670: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80065674: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80065678: lw          $v0, 0x27EC($at)
    ctx->r2 = MEM_W(ctx->r1, 0X27EC);
    // 0x8006567C: sw          $v0, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->r2;
    // 0x80065680: sw          $v0, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r2;
L_80065684:
    // 0x80065684: sb          $zero, 0x3E($a0)
    MEM_B(0X3E, ctx->r4) = 0;
    // 0x80065688: sb          $zero, 0x3C($a0)
    MEM_B(0X3C, ctx->r4) = 0;
    // 0x8006568C: sb          $zero, 0x72($a0)
    MEM_B(0X72, ctx->r4) = 0;
L_80065690:
    // 0x80065690: jr          $ra
    // 0x80065694: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x80065694: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_80064B88_3FF88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80064B88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80064B8C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80064B90: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80064B94: lw          $v0, 0x6C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X6C);
    // 0x80064B98: lbu         $v1, 0x1($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X1);
    // 0x80064B9C: lbu         $a0, 0x2($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X2);
    // 0x80064BA0: lbu         $a3, 0x3($v0)
    ctx->r7 = MEM_BU(ctx->r2, 0X3);
    // 0x80064BA4: lbu         $a2, 0x4($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X4);
    // 0x80064BA8: addiu       $v0, $v0, 0x5
    ctx->r2 = ADD32(ctx->r2, 0X5);
    // 0x80064BAC: sw          $v0, 0x6C($a1)
    MEM_W(0X6C, ctx->r5) = ctx->r2;
    // 0x80064BB0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80064BB4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80064BB8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80064BBC: lw          $v0, 0x2E6C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2E6C);
    // 0x80064BC0: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80064BC4: bne         $v0, $a0, L_80064C00
    if (ctx->r2 != ctx->r4) {
        // 0x80064BC8: nop
    
            goto L_80064C00;
    }
    // 0x80064BC8: nop

    // 0x80064BCC: lw          $a1, 0x44($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X44);
    // 0x80064BD0: beq         $a1, $zero, L_80064BE0
    if (ctx->r5 == 0) {
        // 0x80064BD4: sll         $a0, $a3, 24
        ctx->r4 = S32(ctx->r7 << 24);
            goto L_80064BE0;
    }
    // 0x80064BD4: sll         $a0, $a3, 24
    ctx->r4 = S32(ctx->r7 << 24);
    // 0x80064BD8: j           L_80064BF8
    // 0x80064BDC: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
        goto L_80064BF8;
    // 0x80064BDC: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
L_80064BE0:
    // 0x80064BE0: sll         $v0, $a2, 2
    ctx->r2 = S32(ctx->r6 << 2);
    // 0x80064BE4: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80064BE8: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80064BEC: lw          $a1, 0x27EC($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X27EC);
    // 0x80064BF0: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80064BF4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
L_80064BF8:
    // 0x80064BF8: jal         0x80061510
    // 0x80064BFC: nop

    func_80061510_3C910(rdram, ctx);
        goto after_0;
    // 0x80064BFC: nop

    after_0:
L_80064C00:
    // 0x80064C00: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80064C04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80064C08: jr          $ra
    // 0x80064C0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80064C0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80034844_FC44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80034844: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80034848: lh          $v1, 0x49C4($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X49C4);
    // 0x8003484C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80034850: lh          $a0, 0x49C6($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X49C6);
    // 0x80034854: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80034858: lh          $a1, 0x49C8($a1)
    ctx->r5 = MEM_H(ctx->r5, 0X49C8);
    // 0x8003485C: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x80034860: lh          $a2, 0x4A06($a2)
    ctx->r6 = MEM_H(ctx->r6, 0X4A06);
    // 0x80034864: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80034868: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003486C: sw          $v0, 0x435C($at)
    MEM_W(0X435C, ctx->r1) = ctx->r2;
    // 0x80034870: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80034874: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80034878: sw          $v0, -0x725C($at)
    MEM_W(-0X725C, ctx->r1) = ctx->r2;
    // 0x8003487C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034880: sw          $v0, 0x4354($at)
    MEM_W(0X4354, ctx->r1) = ctx->r2;
    // 0x80034884: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80034888: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003488C: sb          $v0, 0x4352($at)
    MEM_B(0X4352, ctx->r1) = ctx->r2;
    // 0x80034890: addiu       $v0, $zero, 0x96
    ctx->r2 = ADD32(0, 0X96);
    // 0x80034894: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034898: sb          $zero, 0x4349($at)
    MEM_B(0X4349, ctx->r1) = 0;
    // 0x8003489C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800348A0: sb          $zero, 0x4DFD($at)
    MEM_B(0X4DFD, ctx->r1) = 0;
    // 0x800348A4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800348A8: sw          $v0, 0x43A4($at)
    MEM_W(0X43A4, ctx->r1) = ctx->r2;
    // 0x800348AC: addiu       $a2, $a2, 0x800
    ctx->r6 = ADD32(ctx->r6, 0X800);
    // 0x800348B0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800348B4: sw          $v1, 0x43D0($at)
    MEM_W(0X43D0, ctx->r1) = ctx->r3;
    // 0x800348B8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800348BC: sw          $v1, 0x43B0($at)
    MEM_W(0X43B0, ctx->r1) = ctx->r3;
    // 0x800348C0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800348C4: sw          $v1, 0x4390($at)
    MEM_W(0X4390, ctx->r1) = ctx->r3;
    // 0x800348C8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800348CC: sw          $a0, 0x43D4($at)
    MEM_W(0X43D4, ctx->r1) = ctx->r4;
    // 0x800348D0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800348D4: sw          $a0, 0x43B4($at)
    MEM_W(0X43B4, ctx->r1) = ctx->r4;
    // 0x800348D8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800348DC: sw          $a0, 0x4394($at)
    MEM_W(0X4394, ctx->r1) = ctx->r4;
    // 0x800348E0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800348E4: sw          $a1, 0x43D8($at)
    MEM_W(0X43D8, ctx->r1) = ctx->r5;
    // 0x800348E8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800348EC: sw          $a1, 0x43B8($at)
    MEM_W(0X43B8, ctx->r1) = ctx->r5;
    // 0x800348F0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800348F4: sw          $a1, 0x4398($at)
    MEM_W(0X4398, ctx->r1) = ctx->r5;
    // 0x800348F8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800348FC: jr          $ra
    // 0x80034900: sw          $a2, 0x4358($at)
    MEM_W(0X4358, ctx->r1) = ctx->r6;
    TRACE_RETURN()
    return;
    // 0x80034900: sw          $a2, 0x4358($at)
    MEM_W(0X4358, ctx->r1) = ctx->r6;
;}
RECOMP_FUNC void func_8003E750_19B50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003E750: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8003E754: lw          $v0, -0x35C0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X35C0);
    // 0x8003E758: sll         $a0, $a0, 1
    ctx->r4 = S32(ctx->r4 << 1);
    // 0x8003E75C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8003E760: jr          $ra
    // 0x8003E764: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    TRACE_RETURN()
    return;
    // 0x8003E764: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
;}
RECOMP_FUNC void func_80063094_3E494(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80063094: lw          $v1, 0x14($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X14);
    // 0x80063098: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x8006309C: lbu         $a1, 0x1($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X1);
    // 0x800630A0: lbu         $v1, 0x2($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X2);
    // 0x800630A4: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x800630A8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x800630AC: lhu         $v0, 0x10($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X10);
    // 0x800630B0: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x800630B4: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x800630B8: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x800630BC: jr          $ra
    // 0x800630C0: sh          $v0, 0x10($a0)
    MEM_H(0X10, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x800630C0: sh          $v0, 0x10($a0)
    MEM_H(0X10, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_8003E6BC_19ABC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003E6BC: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x8003E6C0: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8003E6C4: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8003E6C8: lbu         $v1, 0x6B40($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X6B40);
    // 0x8003E6CC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8003E6D0: lhu         $a1, 0x49AE($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X49AE);
    // 0x8003E6D4: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x8003E6D8: sra         $v0, $v0, 9
    ctx->r2 = S32(SIGNED(ctx->r2) >> 9);
    // 0x8003E6DC: subu        $a2, $v0, $v1
    ctx->r6 = SUB32(ctx->r2, ctx->r3);
    // 0x8003E6E0: sltu        $v0, $a2, $a1
    ctx->r2 = ctx->r6 < ctx->r5 ? 1 : 0;
    // 0x8003E6E4: beq         $v0, $zero, L_8003E748
    if (ctx->r2 == 0) {
        // 0x8003E6E8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8003E748;
    }
    // 0x8003E6E8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8003E6EC: lh          $v0, 0x4($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X4);
    // 0x8003E6F0: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003E6F4: lbu         $a0, -0x39A6($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X39A6);
    // 0x8003E6F8: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8003E6FC: lhu         $v1, -0x7386($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X7386);
    // 0x8003E700: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x8003E704: sra         $v0, $v0, 9
    ctx->r2 = S32(SIGNED(ctx->r2) >> 9);
    // 0x8003E708: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8003E70C: sltu        $v1, $v0, $v1
    ctx->r3 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8003E710: bne         $v1, $zero, L_8003E720
    if (ctx->r3 != 0) {
        // 0x8003E714: nop
    
            goto L_8003E720;
    }
    // 0x8003E714: nop

    // 0x8003E718: j           L_8003E748
    // 0x8003E71C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8003E748;
    // 0x8003E71C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8003E720:
    // 0x8003E720: nop

    // 0x8003E724: mult        $v0, $a1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003E728: mflo        $v1
    ctx->r3 = lo;
    // 0x8003E72C: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8003E730: lw          $a0, -0x35C0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X35C0);
    // 0x8003E734: sll         $v0, $a2, 1
    ctx->r2 = S32(ctx->r6 << 1);
    // 0x8003E738: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8003E73C: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8003E740: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8003E744: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
L_8003E748:
    // 0x8003E748: jr          $ra
    // 0x8003E74C: nop

    TRACE_RETURN()
    return;
    // 0x8003E74C: nop

;}
RECOMP_FUNC void _pullSubFrame(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80097444: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80097448: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8009744C: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x80097450: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80097454: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x80097458: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8009745C: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80097460: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    // 0x80097464: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80097468: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8009746C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80097470: lw          $v0, 0x48($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X48);
    // 0x80097474: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x80097478: sltiu       $v1, $s3, 0x1
    ctx->r3 = ctx->r19 < 0X1 ? 1 : 0;
    // 0x8009747C: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x80097480: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x80097484: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80097488: beq         $v0, $zero, L_80097498
    if (ctx->r2 == 0) {
        // 0x8009748C: addu        $s0, $a2, $zero
        ctx->r16 = ADD32(ctx->r6, 0);
            goto L_80097498;
    }
    // 0x8009748C: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x80097490: j           L_800976F8
    // 0x80097494: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
        goto L_800976F8;
    // 0x80097494: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
L_80097498:
    // 0x80097498: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x8009749C: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x800974A0: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x800974A4: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x800974A8: jalr        $v0
    // 0x800974AC: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x800974AC: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_0:
    // 0x800974B0: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x800974B4: lhu         $v0, 0x0($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X0);
    // 0x800974B8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x800974BC: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x800974C0: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x800974C4: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x800974C8: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x800974CC: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
    // 0x800974D0: sll         $v1, $s3, 1
    ctx->r3 = S32(ctx->r19 << 1);
    // 0x800974D4: andi        $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 & 0XFFFF;
    // 0x800974D8: addiu       $v0, $v0, 0x440
    ctx->r2 = ADD32(ctx->r2, 0X440);
    // 0x800974DC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x800974E0: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x800974E4: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x800974E8: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
    // 0x800974EC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x800974F0: lui         $v1, 0x808
    ctx->r3 = S32(0X808 << 16);
    // 0x800974F4: addiu       $v0, $v0, 0x580
    ctx->r2 = ADD32(ctx->r2, 0X580);
    // 0x800974F8: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x800974FC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80097500: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x80097504: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
    // 0x80097508: addiu       $v1, $v0, 0x6C0
    ctx->r3 = ADD32(ctx->r2, 0X6C0);
    // 0x8009750C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80097510: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80097514: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80097518: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8009751C: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
    // 0x80097520: lw          $v0, 0x38($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X38);
    // 0x80097524: beq         $v0, $zero, L_800976BC
    if (ctx->r2 == 0) {
        // 0x80097528: addiu       $s1, $s1, 0x8
        ctx->r17 = ADD32(ctx->r17, 0X8);
            goto L_800976BC;
    }
    // 0x80097528: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x8009752C: lh          $v0, 0x18($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X18);
    // 0x80097530: lh          $v1, 0x1A($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X1A);
    // 0x80097534: sw          $zero, 0x38($s2)
    MEM_W(0X38, ctx->r18) = 0;
    // 0x80097538: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8009753C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80097540: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80097544: lh          $v0, -0xBF0($at)
    ctx->r2 = MEM_H(ctx->r1, -0XBF0);
    // 0x80097548: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8009754C: mflo        $v1
    ctx->r3 = lo;
    // 0x80097550: lh          $v0, 0x1C($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X1C);
    // 0x80097554: lw          $a0, 0x34($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X34);
    // 0x80097558: mtc1        $v0, $f12
    ctx->f12.u32l = ctx->r2;
    // 0x8009755C: nop

    // 0x80097560: cvt.d.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.d = CVT_D_W(ctx->f12.u32l);
    // 0x80097564: sra         $v1, $v1, 15
    ctx->r3 = S32(SIGNED(ctx->r3) >> 15);
    // 0x80097568: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8009756C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80097570: mtc1        $v0, $f14
    ctx->f14.u32l = ctx->r2;
    // 0x80097574: nop

    // 0x80097578: cvt.d.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.d = CVT_D_W(ctx->f14.u32l);
    // 0x8009757C: addiu       $v0, $s2, 0x24
    ctx->r2 = ADD32(ctx->r18, 0X24);
    // 0x80097580: sh          $v1, 0x28($s2)
    MEM_H(0X28, ctx->r18) = ctx->r3;
    // 0x80097584: sw          $a0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r4;
    // 0x80097588: jal         0x8009781C
    // 0x8009758C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    _getRate(rdram, ctx);
        goto after_1;
    // 0x8009758C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_1:
    // 0x80097590: lh          $a0, 0x18($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X18);
    // 0x80097594: lh          $v1, 0x1A($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X1A);
    // 0x80097598: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
    // 0x8009759C: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x800975A0: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x800975A4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x800975A8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800975AC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800975B0: lh          $v0, -0xBF0($at)
    ctx->r2 = MEM_H(ctx->r1, -0XBF0);
    // 0x800975B4: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800975B8: mflo        $v1
    ctx->r3 = lo;
    // 0x800975BC: lh          $v0, 0x1E($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X1E);
    // 0x800975C0: lw          $a0, 0x34($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X34);
    // 0x800975C4: mtc1        $v0, $f12
    ctx->f12.u32l = ctx->r2;
    // 0x800975C8: nop

    // 0x800975CC: cvt.d.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.d = CVT_D_W(ctx->f12.u32l);
    // 0x800975D0: sra         $v1, $v1, 15
    ctx->r3 = S32(SIGNED(ctx->r3) >> 15);
    // 0x800975D4: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x800975D8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x800975DC: mtc1        $v0, $f14
    ctx->f14.u32l = ctx->r2;
    // 0x800975E0: nop

    // 0x800975E4: cvt.d.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.d = CVT_D_W(ctx->f14.u32l);
    // 0x800975E8: addiu       $v0, $s2, 0x2A
    ctx->r2 = ADD32(ctx->r18, 0X2A);
    // 0x800975EC: sh          $v1, 0x2E($s2)
    MEM_H(0X2E, ctx->r18) = ctx->r3;
    // 0x800975F0: sw          $a0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r4;
    // 0x800975F4: jal         0x8009781C
    // 0x800975F8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    _getRate(rdram, ctx);
        goto after_2;
    // 0x800975F8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_2:
    // 0x800975FC: lhu         $v1, 0x1C($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X1C);
    // 0x80097600: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80097604: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x80097608: sh          $v0, 0x2C($s2)
    MEM_H(0X2C, ctx->r18) = ctx->r2;
    // 0x8009760C: lui         $v0, 0x906
    ctx->r2 = S32(0X906 << 16);
    // 0x80097610: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x80097614: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80097618: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x8009761C: lhu         $v1, 0x1E($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X1E);
    // 0x80097620: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80097624: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x80097628: lui         $v0, 0x904
    ctx->r2 = S32(0X904 << 16);
    // 0x8009762C: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x80097630: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80097634: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x80097638: lhu         $v0, 0x28($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X28);
    // 0x8009763C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80097640: lui         $v1, 0x902
    ctx->r3 = S32(0X902 << 16);
    // 0x80097644: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80097648: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x8009764C: lhu         $v0, 0x26($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X26);
    // 0x80097650: lhu         $v1, 0x24($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X24);
    // 0x80097654: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x80097658: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8009765C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80097660: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x80097664: lhu         $v0, 0x2E($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X2E);
    // 0x80097668: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8009766C: lui         $v1, 0x900
    ctx->r3 = S32(0X900 << 16);
    // 0x80097670: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80097674: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x80097678: lhu         $v0, 0x2C($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X2C);
    // 0x8009767C: lhu         $v1, 0x2A($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X2A);
    // 0x80097680: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x80097684: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80097688: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8009768C: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x80097690: lhu         $v0, 0x20($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X20);
    // 0x80097694: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80097698: lui         $v1, 0x908
    ctx->r3 = S32(0X908 << 16);
    // 0x8009769C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x800976A0: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x800976A4: lhu         $v0, 0x22($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X22);
    // 0x800976A8: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x800976AC: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
    // 0x800976B0: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x800976B4: j           L_800976C4
    // 0x800976B8: lui         $v0, 0x309
    ctx->r2 = S32(0X309 << 16);
        goto L_800976C4;
    // 0x800976B8: lui         $v0, 0x309
    ctx->r2 = S32(0X309 << 16);
L_800976BC:
    // 0x800976BC: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
    // 0x800976C0: lui         $v0, 0x308
    ctx->r2 = S32(0X308 << 16);
L_800976C4:
    // 0x800976C4: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x800976C8: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x800976CC: jal         0x80099BB0
    // 0x800976D0: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_3;
    // 0x800976D0: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    after_3:
    // 0x800976D4: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x800976D8: lhu         $v0, 0x0($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X0);
    // 0x800976DC: sll         $v1, $s3, 1
    ctx->r3 = S32(ctx->r19 << 1);
    // 0x800976E0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800976E4: sh          $v0, 0x0($s4)
    MEM_H(0X0, ctx->r20) = ctx->r2;
    // 0x800976E8: lw          $v1, 0x30($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X30);
    // 0x800976EC: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x800976F0: addu        $v1, $v1, $s3
    ctx->r3 = ADD32(ctx->r3, ctx->r19);
    // 0x800976F4: sw          $v1, 0x30($s2)
    MEM_W(0X30, ctx->r18) = ctx->r3;
L_800976F8:
    // 0x800976F8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x800976FC: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80097700: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80097704: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80097708: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8009770C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80097710: jr          $ra
    // 0x80097714: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80097714: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8006019C_3B59C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006019C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x800601A0: sw          $a1, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r5;
    // 0x800601A4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800601A8: sw          $a0, -0x39AC($at)
    MEM_W(-0X39AC, ctx->r1) = ctx->r4;
    // 0x800601AC: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x800601B0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800601B4: sb          $v0, -0x3A48($at)
    MEM_B(-0X3A48, ctx->r1) = ctx->r2;
    // 0x800601B8: lbu         $v0, 0x1($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1);
    // 0x800601BC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800601C0: jr          $ra
    // 0x800601C4: sb          $v0, -0x3A47($at)
    MEM_B(-0X3A47, ctx->r1) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x800601C4: sb          $v0, -0x3A47($at)
    MEM_B(-0X3A47, ctx->r1) = ctx->r2;
    // 0x800601C8: nop

    // 0x800601CC: nop

;}
RECOMP_FUNC void func_8008E4A0_698A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008E4A0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8008E4A4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8008E4A8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8008E4AC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8008E4B0: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x8008E4B4: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8008E4B8: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8008E4BC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8008E4C0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8008E4C4: jal         0x80094920
    // 0x8008E4C8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    osCartRomInit_recomp(rdram, ctx);
        goto after_0;
    // 0x8008E4C8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x8008E4CC: sll         $a0, $s2, 1
    ctx->r4 = S32(ctx->r18 << 1);
    // 0x8008E4D0: addu        $a0, $a0, $s2
    ctx->r4 = ADD32(ctx->r4, ctx->r18);
    // 0x8008E4D4: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008E4D8: sw          $v0, 0x5018($at)
    MEM_W(0X5018, ctx->r1) = ctx->r2;
    // 0x8008E4DC: jal         0x8008EDBC
    // 0x8008E4E0: sll         $a0, $a0, 4
    ctx->r4 = S32(ctx->r4 << 4);
    func_8008EDBC_6A1BC(rdram, ctx);
        goto after_1;
    // 0x8008E4E0: sll         $a0, $a0, 4
    ctx->r4 = S32(ctx->r4 << 4);
    after_1:
    // 0x8008E4E4: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008E4E8: sw          $v0, 0x4FEC($at)
    MEM_W(0X4FEC, ctx->r1) = ctx->r2;
    // 0x8008E4EC: jal         0x8008EDBC
    // 0x8008E4F0: sll         $a0, $s2, 3
    ctx->r4 = S32(ctx->r18 << 3);
    func_8008EDBC_6A1BC(rdram, ctx);
        goto after_2;
    // 0x8008E4F0: sll         $a0, $s2, 3
    ctx->r4 = S32(ctx->r18 << 3);
    after_2:
    // 0x8008E4F4: sll         $s0, $s2, 2
    ctx->r16 = S32(ctx->r18 << 2);
    // 0x8008E4F8: addu        $s0, $s0, $s2
    ctx->r16 = ADD32(ctx->r16, ctx->r18);
    // 0x8008E4FC: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    // 0x8008E500: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008E504: sw          $v0, 0x4FF0($at)
    MEM_W(0X4FF0, ctx->r1) = ctx->r2;
    // 0x8008E508: jal         0x8008EDBC
    // 0x8008E50C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8008EDBC_6A1BC(rdram, ctx);
        goto after_3;
    // 0x8008E50C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8008E510: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8008E514: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8008E518: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008E51C: sw          $a0, 0x4FE8($at)
    MEM_W(0X4FE8, ctx->r1) = ctx->r4;
    // 0x8008E520: jal         0x8008EE10
    // 0x8008E524: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_8008EE10_6A210(rdram, ctx);
        goto after_4;
    // 0x8008E524: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8008E528: addiu       $v0, $s2, -0x1
    ctx->r2 = ADD32(ctx->r18, -0X1);
    // 0x8008E52C: blez        $v0, L_8008E584
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8008E530: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_8008E584;
    }
    // 0x8008E530: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8008E534: addiu       $s5, $zero, -0x1
    ctx->r21 = ADD32(0, -0X1);
    // 0x8008E538: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    // 0x8008E53C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_8008E540:
    // 0x8008E540: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008E544: lw          $v0, 0x4FE8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4FE8);
    // 0x8008E548: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8008E54C: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8008E550: addiu       $v1, $v0, 0x14
    ctx->r3 = ADD32(ctx->r2, 0X14);
    // 0x8008E554: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
    // 0x8008E558: jal         0x8008EDBC
    // 0x8008E55C: sw          $v0, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r2;
    func_8008EDBC_6A1BC(rdram, ctx);
        goto after_5;
    // 0x8008E55C: sw          $v0, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r2;
    after_5:
    // 0x8008E560: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x8008E564: lw          $v1, 0x4FE8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4FE8);
    // 0x8008E568: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8008E56C: addu        $v1, $s0, $v1
    ctx->r3 = ADD32(ctx->r16, ctx->r3);
    // 0x8008E570: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x8008E574: sw          $v0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r2;
    // 0x8008E578: slt         $v0, $s1, $s4
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x8008E57C: bne         $v0, $zero, L_8008E540
    if (ctx->r2 != 0) {
        // 0x8008E580: sw          $s5, 0xC($v1)
        MEM_W(0XC, ctx->r3) = ctx->r21;
            goto L_8008E540;
    }
    // 0x8008E580: sw          $s5, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r21;
L_8008E584:
    // 0x8008E584: jal         0x8008EDBC
    // 0x8008E588: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_8008EDBC_6A1BC(rdram, ctx);
        goto after_6;
    // 0x8008E588: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_6:
    // 0x8008E58C: lui         $a1, 0x8018
    ctx->r5 = S32(0X8018 << 16);
    // 0x8008E590: lw          $a1, 0x4FF0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4FF0);
    // 0x8008E594: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x8008E598: addiu       $a0, $a0, 0x5000
    ctx->r4 = ADD32(ctx->r4, 0X5000);
    // 0x8008E59C: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x8008E5A0: lw          $v1, 0x4FE8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4FE8);
    // 0x8008E5A4: sll         $a3, $s1, 2
    ctx->r7 = S32(ctx->r17 << 2);
    // 0x8008E5A8: addu        $a3, $a3, $s1
    ctx->r7 = ADD32(ctx->r7, ctx->r17);
    // 0x8008E5AC: sll         $a3, $a3, 2
    ctx->r7 = S32(ctx->r7 << 2);
    // 0x8008E5B0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008E5B4: sw          $s3, 0x4FF4($at)
    MEM_W(0X4FF4, ctx->r1) = ctx->r19;
    // 0x8008E5B8: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008E5BC: sw          $zero, 0x4FF8($at)
    MEM_W(0X4FF8, ctx->r1) = 0;
    // 0x8008E5C0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008E5C4: sw          $zero, 0x4FE0($at)
    MEM_W(0X4FE0, ctx->r1) = 0;
    // 0x8008E5C8: addu        $a3, $a3, $v1
    ctx->r7 = ADD32(ctx->r7, ctx->r3);
    // 0x8008E5CC: sw          $v0, 0x10($a3)
    MEM_W(0X10, ctx->r7) = ctx->r2;
    // 0x8008E5D0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8008E5D4: sw          $v0, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->r2;
    // 0x8008E5D8: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008E5DC: sw          $v1, 0x4FE4($at)
    MEM_W(0X4FE4, ctx->r1) = ctx->r3;
    // 0x8008E5E0: jal         0x8009A470
    // 0x8008E5E4: sll         $a2, $s2, 1
    ctx->r6 = S32(ctx->r18 << 1);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_7;
    // 0x8008E5E4: sll         $a2, $s2, 1
    ctx->r6 = S32(ctx->r18 << 1);
    after_7:
    // 0x8008E5E8: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8008E5EC: addiu       $v0, $v0, -0x191C
    ctx->r2 = ADD32(ctx->r2, -0X191C);
    // 0x8008E5F0: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8008E5F4: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8008E5F8: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8008E5FC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8008E600: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8008E604: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8008E608: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8008E60C: jr          $ra
    // 0x8008E610: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8008E610: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80075744_50B44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80075744: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80075748: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8007574C: sb          $zero, 0x469E($at)
    MEM_B(0X469E, ctx->r1) = 0;
    // 0x80075750: sb          $v0, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r2;
    // 0x80075754: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80075758: jr          $ra
    // 0x8007575C: sh          $zero, 0x6($a0)
    MEM_H(0X6, ctx->r4) = 0;
    TRACE_RETURN()
    return;
    // 0x8007575C: sh          $zero, 0x6($a0)
    MEM_H(0X6, ctx->r4) = 0;
;}
RECOMP_FUNC void func_8003BEC0_172C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003BEC0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8003BEC4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8003BEC8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8003BECC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8003BED0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8003BED4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8003BED8: lb          $v1, 0x1($s2)
    ctx->r3 = MEM_B(ctx->r18, 0X1);
    // 0x8003BEDC: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8003BEE0: addiu       $s1, $s1, 0x47B8
    ctx->r17 = ADD32(ctx->r17, 0X47B8);
    // 0x8003BEE4: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8003BEE8: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x8003BEEC: beq         $v1, $zero, L_8003BF04
    if (ctx->r3 == 0) {
        // 0x8003BEF0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8003BF04;
    }
    // 0x8003BEF0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8003BEF4: beq         $v1, $v0, L_8003BF50
    if (ctx->r3 == ctx->r2) {
        // 0x8003BEF8: nop
    
            goto L_8003BF50;
    }
    // 0x8003BEF8: nop

    // 0x8003BEFC: j           L_8003BF58
    // 0x8003BF00: nop

        goto L_8003BF58;
    // 0x8003BF00: nop

L_8003BF04:
    // 0x8003BF04: jal         0x8006036C
    // 0x8003BF08: addiu       $a0, $zero, 0x527
    ctx->r4 = ADD32(0, 0X527);
    func_8006036C_3B76C(rdram, ctx);
        goto after_0;
    // 0x8003BF08: addiu       $a0, $zero, 0x527
    ctx->r4 = ADD32(0, 0X527);
    after_0:
    // 0x8003BF0C: lbu         $v0, 0x82($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X82);
    // 0x8003BF10: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8003BF14: bne         $v0, $zero, L_8003BF58
    if (ctx->r2 != 0) {
        // 0x8003BF18: nop
    
            goto L_8003BF58;
    }
    // 0x8003BF18: nop

    // 0x8003BF1C: lb          $v0, 0x5B($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X5B);
    // 0x8003BF20: bne         $v0, $zero, L_8003BF58
    if (ctx->r2 != 0) {
        // 0x8003BF24: nop
    
            goto L_8003BF58;
    }
    // 0x8003BF24: nop

    // 0x8003BF28: jal         0x8006036C
    // 0x8003BF2C: addiu       $a0, $zero, 0x510
    ctx->r4 = ADD32(0, 0X510);
    func_8006036C_3B76C(rdram, ctx);
        goto after_1;
    // 0x8003BF2C: addiu       $a0, $zero, 0x510
    ctx->r4 = ADD32(0, 0X510);
    after_1:
    // 0x8003BF30: jal         0x8006036C
    // 0x8003BF34: addiu       $a0, $zero, 0x522
    ctx->r4 = ADD32(0, 0X522);
    func_8006036C_3B76C(rdram, ctx);
        goto after_2;
    // 0x8003BF34: addiu       $a0, $zero, 0x522
    ctx->r4 = ADD32(0, 0X522);
    after_2:
    // 0x8003BF38: jal         0x8006036C
    // 0x8003BF3C: addiu       $a0, $zero, 0x446
    ctx->r4 = ADD32(0, 0X446);
    func_8006036C_3B76C(rdram, ctx);
        goto after_3;
    // 0x8003BF3C: addiu       $a0, $zero, 0x446
    ctx->r4 = ADD32(0, 0X446);
    after_3:
    // 0x8003BF40: jal         0x8006036C
    // 0x8003BF44: addiu       $a0, $zero, 0x448
    ctx->r4 = ADD32(0, 0X448);
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x8003BF44: addiu       $a0, $zero, 0x448
    ctx->r4 = ADD32(0, 0X448);
    after_4:
    // 0x8003BF48: j           L_8003BF58
    // 0x8003BF4C: nop

        goto L_8003BF58;
    // 0x8003BF4C: nop

L_8003BF50:
    // 0x8003BF50: jal         0x8003E03C
    // 0x8003BF54: nop

    func_8003E03C_1943C(rdram, ctx);
        goto after_5;
    // 0x8003BF54: nop

    after_5:
L_8003BF58:
    // 0x8003BF58: lb          $v0, 0x15($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X15);
    // 0x8003BF5C: bne         $v0, $zero, L_8003C020
    if (ctx->r2 != 0) {
        // 0x8003BF60: nop
    
            goto L_8003C020;
    }
    // 0x8003BF60: nop

    // 0x8003BF64: lbu         $v0, 0x16($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X16);
    // 0x8003BF68: sb          $v0, 0x50($s2)
    MEM_B(0X50, ctx->r18) = ctx->r2;
    // 0x8003BF6C: lbu         $v0, 0x53($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X53);
    // 0x8003BF70: lbu         $v1, 0x17($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X17);
    // 0x8003BF74: sb          $v0, 0x52($s2)
    MEM_B(0X52, ctx->r18) = ctx->r2;
    // 0x8003BF78: sb          $v1, 0x51($s2)
    MEM_B(0X51, ctx->r18) = ctx->r3;
    // 0x8003BF7C: lhu         $a1, 0x8($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X8);
    // 0x8003BF80: lhu         $a2, 0xA($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0XA);
    // 0x8003BF84: lhu         $a3, 0xC($s1)
    ctx->r7 = MEM_HU(ctx->r17, 0XC);
    // 0x8003BF88: lh          $v0, 0x8($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X8);
    // 0x8003BF8C: lh          $v1, 0xA($s1)
    ctx->r3 = MEM_H(ctx->r17, 0XA);
    // 0x8003BF90: lh          $a0, 0xC($s1)
    ctx->r4 = MEM_H(ctx->r17, 0XC);
    // 0x8003BF94: lhu         $t0, 0x12($s1)
    ctx->r8 = MEM_HU(ctx->r17, 0X12);
    // 0x8003BF98: lbu         $t1, 0x8($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X8);
    // 0x8003BF9C: sb          $zero, 0x75($s0)
    MEM_B(0X75, ctx->r16) = 0;
    // 0x8003BFA0: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
    // 0x8003BFA4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8003BFA8: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8003BFAC: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8003BFB0: sw          $v0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r2;
    // 0x8003BFB4: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8003BFB8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8003BFBC: sh          $a1, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r5;
    // 0x8003BFC0: sh          $a1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r5;
    // 0x8003BFC4: sh          $a2, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r6;
    // 0x8003BFC8: sh          $a2, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r6;
    // 0x8003BFCC: sh          $a3, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r7;
    // 0x8003BFD0: sh          $a3, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r7;
    // 0x8003BFD4: sw          $v1, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r3;
    // 0x8003BFD8: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x8003BFDC: sw          $a0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r4;
    // 0x8003BFE0: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x8003BFE4: sh          $t0, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r8;
    // 0x8003BFE8: bne         $t1, $v0, L_8003C020
    if (ctx->r9 != ctx->r2) {
        // 0x8003BFEC: sh          $t0, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r8;
            goto L_8003C020;
    }
    // 0x8003BFEC: sh          $t0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r8;
    // 0x8003BFF0: addiu       $a0, $s0, 0x438
    ctx->r4 = ADD32(ctx->r16, 0X438);
    // 0x8003BFF4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8003BFF8: jal         0x8009A3B4
    // 0x8003BFFC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8003BFFC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x8003C000: addiu       $a0, $s0, 0x428
    ctx->r4 = ADD32(ctx->r16, 0X428);
    // 0x8003C004: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8003C008: jal         0x8009A3B4
    // 0x8003C00C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x8003C00C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_7:
    // 0x8003C010: addiu       $a0, $s0, 0x440
    ctx->r4 = ADD32(ctx->r16, 0X440);
    // 0x8003C014: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8003C018: jal         0x8009A3B4
    // 0x8003C01C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x8003C01C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
L_8003C020:
    // 0x8003C020: jal         0x80073510
    // 0x8003C024: nop

    func_80073510_4E910(rdram, ctx);
        goto after_9;
    // 0x8003C024: nop

    after_9:
    // 0x8003C028: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003C02C: addiu       $a0, $a0, -0x3C60
    ctx->r4 = ADD32(ctx->r4, -0X3C60);
    // 0x8003C030: lbu         $v0, 0x82($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X82);
    // 0x8003C034: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x8003C038: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8003C03C: sb          $v1, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r3;
    // 0x8003C040: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8003C044: sb          $v1, 0x1($s2)
    MEM_B(0X1, ctx->r18) = ctx->r3;
    // 0x8003C048: andi        $v0, $v0, 0xFE
    ctx->r2 = ctx->r2 & 0XFE;
    // 0x8003C04C: jal         0x8009A2B0
    // 0x8003C050: sb          $v0, 0x82($s2)
    MEM_B(0X82, ctx->r18) = ctx->r2;
    bzero_recomp(rdram, ctx);
        goto after_10;
    // 0x8003C050: sb          $v0, 0x82($s2)
    MEM_B(0X82, ctx->r18) = ctx->r2;
    after_10:
    // 0x8003C054: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8003C058: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8003C05C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8003C060: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8003C064: jr          $ra
    // 0x8003C068: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8003C068: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8005DB2C_38F2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8005DB2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005DB30: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8005DB34: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8005DB38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005DB3C: lb          $v1, 0x1($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X1);
    // 0x8005DB40: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8005DB44: beq         $v0, $zero, L_8005DDC0
    if (ctx->r2 == 0) {
        // 0x8005DB48: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8005DDC0;
    }
    // 0x8005DB48: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8005DB4C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8005DB50: addu        $at, $at, $v0
    gpr jr_addend_8005DB58 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8005DB54: lw          $v0, 0x2750($at)
    ctx->r2 = ADD32(ctx->r1, 0X2750);
    // 0x8005DB58: jr          $v0
    // 0x8005DB5C: nop

    switch (jr_addend_8005DB58 >> 2) {
        case 0: goto L_8005DB60; break;
        case 1: goto L_8005DBA0; break;
        case 2: goto L_8005DBC0; break;
        case 3: goto L_8005DC18; break;
        case 4: goto L_8005DC64; break;
        default: switch_error(__func__, 0x8005DB58, 0x800D2750);
    }
    // 0x8005DB5C: nop

L_8005DB60:
    // 0x8005DB60: sb          $zero, 0x2($s0)
    MEM_B(0X2, ctx->r16) = 0;
    // 0x8005DB64: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8005DB68: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8005DB6C: beq         $v0, $zero, L_8005DB8C
    if (ctx->r2 == 0) {
        // 0x8005DB70: nop
    
            goto L_8005DB8C;
    }
    // 0x8005DB70: nop

    // 0x8005DB74: jal         0x8005DF8C
    // 0x8005DB78: nop

    func_8005DF8C_3938C(rdram, ctx);
        goto after_0;
    // 0x8005DB78: nop

    after_0:
    // 0x8005DB7C: jal         0x8005E5D8
    // 0x8005DB80: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    func_8005E5D8_399D8(rdram, ctx);
        goto after_1;
    // 0x8005DB80: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    after_1:
    // 0x8005DB84: j           L_8005DDC0
    // 0x8005DB88: nop

        goto L_8005DDC0;
    // 0x8005DB88: nop

L_8005DB8C:
    // 0x8005DB8C: jal         0x80036E48
    // 0x8005DB90: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80036E48_12248(rdram, ctx);
        goto after_2;
    // 0x8005DB90: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x8005DB94: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x8005DB98: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8005DB9C: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
L_8005DBA0:
    // 0x8005DBA0: jal         0x80061724
    // 0x8005DBA4: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_3;
    // 0x8005DBA4: nop

    after_3:
    // 0x8005DBA8: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x8005DBAC: addiu       $v1, $zero, 0x384
    ctx->r3 = ADD32(0, 0X384);
    // 0x8005DBB0: sh          $v1, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r3;
    // 0x8005DBB4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8005DBB8: j           L_8005DDC0
    // 0x8005DBBC: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
        goto L_8005DDC0;
    // 0x8005DBBC: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
L_8005DBC0:
    // 0x8005DBC0: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x8005DBC4: sh          $zero, -0x783A($at)
    MEM_H(-0X783A, ctx->r1) = 0;
    // 0x8005DBC8: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x8005DBCC: sh          $zero, -0x783E($at)
    MEM_H(-0X783E, ctx->r1) = 0;
    // 0x8005DBD0: jal         0x800755D4
    // 0x8005DBD4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_800755D4_509D4(rdram, ctx);
        goto after_4;
    // 0x8005DBD4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_4:
    // 0x8005DBD8: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x8005DBDC: jal         0x8005F2CC
    // 0x8005DBE0: addiu       $a0, $a0, 0x5448
    ctx->r4 = ADD32(ctx->r4, 0X5448);
    func_8005F2CC_3A6CC(rdram, ctx);
        goto after_5;
    // 0x8005DBE0: addiu       $a0, $a0, 0x5448
    ctx->r4 = ADD32(ctx->r4, 0X5448);
    after_5:
    // 0x8005DBE4: jal         0x8004BFB0
    // 0x8005DBE8: nop

    func_8004BFB0_273B0(rdram, ctx);
        goto after_6;
    // 0x8005DBE8: nop

    after_6:
    // 0x8005DBEC: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8005DBF0: addiu       $a0, $a0, -0x13A8
    ctx->r4 = ADD32(ctx->r4, -0X13A8);
    // 0x8005DBF4: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8005DBF8: jal         0x80033358
    // 0x8005DBFC: addiu       $a1, $a1, -0x1398
    ctx->r5 = ADD32(ctx->r5, -0X1398);
    func_80033358_E758(rdram, ctx);
        goto after_7;
    // 0x8005DBFC: addiu       $a1, $a1, -0x1398
    ctx->r5 = ADD32(ctx->r5, -0X1398);
    after_7:
    // 0x8005DC00: jal         0x8003A7CC
    // 0x8005DC04: nop

    func_8003A7CC_15BCC(rdram, ctx);
        goto after_8;
    // 0x8005DC04: nop

    after_8:
    // 0x8005DC08: jal         0x8005DF40
    // 0x8005DC0C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005DF40_39340(rdram, ctx);
        goto after_9;
    // 0x8005DC0C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x8005DC10: j           L_8005DDC0
    // 0x8005DC14: nop

        goto L_8005DDC0;
    // 0x8005DC14: nop

L_8005DC18:
    // 0x8005DC18: jal         0x800755D4
    // 0x8005DC1C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_800755D4_509D4(rdram, ctx);
        goto after_10;
    // 0x8005DC1C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_10:
    // 0x8005DC20: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x8005DC24: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x8005DC28: addiu       $a0, $a0, 0x5448
    ctx->r4 = ADD32(ctx->r4, 0X5448);
    // 0x8005DC2C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8005DC30: jal         0x8005F2CC
    // 0x8005DC34: sb          $v1, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r3;
    func_8005F2CC_3A6CC(rdram, ctx);
        goto after_11;
    // 0x8005DC34: sb          $v1, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r3;
    after_11:
    // 0x8005DC38: jal         0x8004BFB0
    // 0x8005DC3C: nop

    func_8004BFB0_273B0(rdram, ctx);
        goto after_12;
    // 0x8005DC3C: nop

    after_12:
    // 0x8005DC40: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8005DC44: addiu       $a0, $a0, -0x13A8
    ctx->r4 = ADD32(ctx->r4, -0X13A8);
    // 0x8005DC48: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8005DC4C: jal         0x80033358
    // 0x8005DC50: addiu       $a1, $a1, -0x1398
    ctx->r5 = ADD32(ctx->r5, -0X1398);
    func_80033358_E758(rdram, ctx);
        goto after_13;
    // 0x8005DC50: addiu       $a1, $a1, -0x1398
    ctx->r5 = ADD32(ctx->r5, -0X1398);
    after_13:
    // 0x8005DC54: jal         0x8003A7CC
    // 0x8005DC58: nop

    func_8003A7CC_15BCC(rdram, ctx);
        goto after_14;
    // 0x8005DC58: nop

    after_14:
    // 0x8005DC5C: j           L_8005DDC0
    // 0x8005DC60: nop

        goto L_8005DDC0;
    // 0x8005DC60: nop

L_8005DC64:
    // 0x8005DC64: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8005DC68: lb          $v1, -0x3B96($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3B96);
    // 0x8005DC6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8005DC70: bne         $v1, $v0, L_8005DD7C
    if (ctx->r3 != ctx->r2) {
        // 0x8005DC74: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8005DD7C;
    }
    // 0x8005DC74: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8005DC78: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8005DC7C: lw          $a1, 0x2860($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2860);
    // 0x8005DC80: jal         0x80061510
    // 0x8005DC84: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_15;
    // 0x8005DC84: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_15:
    // 0x8005DC88: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8005DC8C: lbu         $v0, -0x6F9F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X6F9F);
    // 0x8005DC90: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8005DC94: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8005DC98: addiu       $v1, $v1, -0x2E10
    ctx->r3 = ADD32(ctx->r3, -0X2E10);
    // 0x8005DC9C: sll         $v0, $v0, 7
    ctx->r2 = S32(ctx->r2 << 7);
    // 0x8005DCA0: addu        $a1, $v0, $v1
    ctx->r5 = ADD32(ctx->r2, ctx->r3);
L_8005DCA4:
    // 0x8005DCA4: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8005DCA8: lw          $v1, 0x2F14($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2F14);
    // 0x8005DCAC: addu        $v0, $a1, $a0
    ctx->r2 = ADD32(ctx->r5, ctx->r4);
    // 0x8005DCB0: lbu         $v0, 0x1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1);
    // 0x8005DCB4: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8005DCB8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8005DCBC: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8005DCC0: slti        $v0, $a0, 0xD
    ctx->r2 = SIGNED(ctx->r4) < 0XD ? 1 : 0;
    // 0x8005DCC4: bne         $v0, $zero, L_8005DCA4
    if (ctx->r2 != 0) {
        // 0x8005DCC8: nop
    
            goto L_8005DCA4;
    }
    // 0x8005DCC8: nop

    // 0x8005DCCC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8005DCD0: lw          $a1, 0x2844($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2844);
    // 0x8005DCD4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x8005DCD8: jal         0x80061510
    // 0x8005DCDC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_16;
    // 0x8005DCDC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_16:
    // 0x8005DCE0: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8005DCE4: lw          $a1, 0x2874($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2874);
    // 0x8005DCE8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x8005DCEC: jal         0x80061510
    // 0x8005DCF0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_17;
    // 0x8005DCF0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_17:
    // 0x8005DCF4: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x8005DCF8: jal         0x8005F2CC
    // 0x8005DCFC: addiu       $a0, $a0, 0x5448
    ctx->r4 = ADD32(ctx->r4, 0X5448);
    func_8005F2CC_3A6CC(rdram, ctx);
        goto after_18;
    // 0x8005DCFC: addiu       $a0, $a0, 0x5448
    ctx->r4 = ADD32(ctx->r4, 0X5448);
    after_18:
    // 0x8005DD00: jal         0x8004BFB0
    // 0x8005DD04: nop

    func_8004BFB0_273B0(rdram, ctx);
        goto after_19;
    // 0x8005DD04: nop

    after_19:
    // 0x8005DD08: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8005DD0C: addiu       $a0, $a0, -0x13A8
    ctx->r4 = ADD32(ctx->r4, -0X13A8);
    // 0x8005DD10: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8005DD14: jal         0x80033358
    // 0x8005DD18: addiu       $a1, $a1, -0x1398
    ctx->r5 = ADD32(ctx->r5, -0X1398);
    func_80033358_E758(rdram, ctx);
        goto after_20;
    // 0x8005DD18: addiu       $a1, $a1, -0x1398
    ctx->r5 = ADD32(ctx->r5, -0X1398);
    after_20:
    // 0x8005DD1C: jal         0x8003A7CC
    // 0x8005DD20: nop

    func_8003A7CC_15BCC(rdram, ctx);
        goto after_21;
    // 0x8005DD20: nop

    after_21:
    // 0x8005DD24: lb          $v0, 0x2($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X2);
    // 0x8005DD28: bne         $v0, $zero, L_8005DD48
    if (ctx->r2 != 0) {
        // 0x8005DD2C: nop
    
            goto L_8005DD48;
    }
    // 0x8005DD2C: nop

    // 0x8005DD30: jal         0x80036E48
    // 0x8005DD34: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    func_80036E48_12248(rdram, ctx);
        goto after_22;
    // 0x8005DD34: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    after_22:
    // 0x8005DD38: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8005DD3C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8005DD40: j           L_8005DDC0
    // 0x8005DD44: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
        goto L_8005DDC0;
    // 0x8005DD44: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
L_8005DD48:
    // 0x8005DD48: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8005DD4C: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8005DD50: bne         $v0, $zero, L_8005DDC0
    if (ctx->r2 != 0) {
        // 0x8005DD54: nop
    
            goto L_8005DDC0;
    }
    // 0x8005DD54: nop

    // 0x8005DD58: jal         0x80061724
    // 0x8005DD5C: sb          $zero, 0x2($s0)
    MEM_B(0X2, ctx->r16) = 0;
    func_80061724_3CB24(rdram, ctx);
        goto after_23;
    // 0x8005DD5C: sb          $zero, 0x2($s0)
    MEM_B(0X2, ctx->r16) = 0;
    after_23:
    // 0x8005DD60: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x8005DD64: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    // 0x8005DD68: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8005DD6C: jal         0x800292E8
    // 0x8005DD70: sb          $zero, 0x5448($at)
    MEM_B(0X5448, ctx->r1) = 0;
    func_800292E8_46E8(rdram, ctx);
        goto after_24;
    // 0x8005DD70: sb          $zero, 0x5448($at)
    MEM_B(0X5448, ctx->r1) = 0;
    after_24:
    // 0x8005DD74: j           L_8005DDC0
    // 0x8005DD78: nop

        goto L_8005DDC0;
    // 0x8005DD78: nop

L_8005DD7C:
    // 0x8005DD7C: jal         0x80036E48
    // 0x8005DD80: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    func_80036E48_12248(rdram, ctx);
        goto after_25;
    // 0x8005DD80: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_25:
    // 0x8005DD84: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x8005DD88: jal         0x8005F2CC
    // 0x8005DD8C: addiu       $a0, $a0, 0x5448
    ctx->r4 = ADD32(ctx->r4, 0X5448);
    func_8005F2CC_3A6CC(rdram, ctx);
        goto after_26;
    // 0x8005DD8C: addiu       $a0, $a0, 0x5448
    ctx->r4 = ADD32(ctx->r4, 0X5448);
    after_26:
    // 0x8005DD90: jal         0x8004BFB0
    // 0x8005DD94: nop

    func_8004BFB0_273B0(rdram, ctx);
        goto after_27;
    // 0x8005DD94: nop

    after_27:
    // 0x8005DD98: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8005DD9C: addiu       $a0, $a0, -0x13A8
    ctx->r4 = ADD32(ctx->r4, -0X13A8);
    // 0x8005DDA0: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8005DDA4: jal         0x80033358
    // 0x8005DDA8: addiu       $a1, $a1, -0x1398
    ctx->r5 = ADD32(ctx->r5, -0X1398);
    func_80033358_E758(rdram, ctx);
        goto after_28;
    // 0x8005DDA8: addiu       $a1, $a1, -0x1398
    ctx->r5 = ADD32(ctx->r5, -0X1398);
    after_28:
    // 0x8005DDAC: jal         0x8003A7CC
    // 0x8005DDB0: nop

    func_8003A7CC_15BCC(rdram, ctx);
        goto after_29;
    // 0x8005DDB0: nop

    after_29:
    // 0x8005DDB4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8005DDB8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8005DDBC: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
L_8005DDC0:
    // 0x8005DDC0: jal         0x800572DC
    // 0x8005DDC4: nop

    func_800572DC_326DC(rdram, ctx);
        goto after_30;
    // 0x8005DDC4: nop

    after_30:
    // 0x8005DDC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005DDCC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8005DDD0: jr          $ra
    // 0x8005DDD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8005DDD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8002E16C_956C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002E16C: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x8002E170: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8002E174: sw          $s0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r16;
    // 0x8002E178: addiu       $s0, $sp, 0x18
    ctx->r16 = ADD32(ctx->r29, 0X18);
    // 0x8002E17C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8002E180: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    // 0x8002E184: sw          $ra, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r31;
    // 0x8002E188: sw          $s6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r22;
    // 0x8002E18C: sw          $s5, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r21;
    // 0x8002E190: sw          $s4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r20;
    // 0x8002E194: sw          $s3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r19;
    // 0x8002E198: sw          $s2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r18;
    // 0x8002E19C: jal         0x8009A3B4
    // 0x8002E1A0: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8002E1A0: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    after_0:
    // 0x8002E1A4: lh          $v0, 0x20($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X20);
    // 0x8002E1A8: bgez        $v0, L_8002E1C4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8002E1AC: nop
    
            goto L_8002E1C4;
    }
    // 0x8002E1AC: nop

    // 0x8002E1B0: lh          $v0, 0x28($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X28);
    // 0x8002E1B4: bgez        $v0, L_8002E1C4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8002E1B8: nop
    
            goto L_8002E1C4;
    }
    // 0x8002E1B8: nop

    // 0x8002E1BC: j           L_8002E1DC
    // 0x8002E1C0: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
        goto L_8002E1DC;
    // 0x8002E1C0: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
L_8002E1C4:
    // 0x8002E1C4: lh          $v0, 0xA($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XA);
    // 0x8002E1C8: bgez        $v0, L_8002E1DC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8002E1CC: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_8002E1DC;
    }
    // 0x8002E1CC: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x8002E1D0: lhu         $v0, 0x1A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1A);
    // 0x8002E1D4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8002E1D8: sra         $v1, $v0, 31
    ctx->r3 = S32(SIGNED(ctx->r2) >> 31);
L_8002E1DC:
    // 0x8002E1DC: bne         $v1, $zero, L_8002E2F4
    if (ctx->r3 != 0) {
        // 0x8002E1E0: nop
    
            goto L_8002E2F4;
    }
    // 0x8002E1E0: nop

    // 0x8002E1E4: lbu         $v0, 0x3C($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X3C);
    // 0x8002E1E8: lbu         $v1, 0x24($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X24);
    // 0x8002E1EC: lbu         $a0, 0x25($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X25);
    // 0x8002E1F0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8002E1F4: lbu         $v1, 0x3D($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X3D);
    // 0x8002E1F8: bltzl       $v0, L_8002E200
    if (SIGNED(ctx->r2) < 0) {
        // 0x8002E1FC: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_8002E200;
    }
    goto skip_0;
    // 0x8002E1FC: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_0:
L_8002E200:
    // 0x8002E200: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x8002E204: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8002E208: sra         $s4, $v0, 16
    ctx->r20 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8002E20C: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x8002E210: bgez        $v1, L_8002E21C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8002E214: addu        $a2, $v1, $zero
        ctx->r6 = ADD32(ctx->r3, 0);
            goto L_8002E21C;
    }
    // 0x8002E214: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x8002E218: negu        $a2, $a2
    ctx->r6 = SUB32(0, ctx->r6);
L_8002E21C:
    // 0x8002E21C: lh          $v1, 0x28($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X28);
    // 0x8002E220: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x8002E224: addu        $t0, $a2, $zero
    ctx->r8 = ADD32(ctx->r6, 0);
    // 0x8002E228: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x8002E22C: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x8002E230: beq         $s4, $v1, L_8002E23C
    if (ctx->r20 == ctx->r3) {
        // 0x8002E234: addu        $v0, $a0, $zero
        ctx->r2 = ADD32(ctx->r4, 0);
            goto L_8002E23C;
    }
    // 0x8002E234: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x8002E238: subu        $a3, $a1, $v0
    ctx->r7 = SUB32(ctx->r5, ctx->r2);
L_8002E23C:
    // 0x8002E23C: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x8002E240: lh          $v1, 0x32($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X32);
    // 0x8002E244: lh          $a0, 0x22($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X22);
    // 0x8002E248: sra         $s3, $v0, 16
    ctx->r19 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8002E24C: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x8002E250: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x8002E254: beq         $s3, $v1, L_8002E260
    if (ctx->r19 == ctx->r3) {
        // 0x8002E258: addu        $v0, $a0, $zero
        ctx->r2 = ADD32(ctx->r4, 0);
            goto L_8002E260;
    }
    // 0x8002E258: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x8002E25C: subu        $t0, $a1, $v0
    ctx->r8 = SUB32(ctx->r5, ctx->r2);
L_8002E260:
    // 0x8002E260: sltiu       $v0, $s4, 0x1
    ctx->r2 = ctx->r20 < 0X1 ? 1 : 0;
    // 0x8002E264: sltiu       $v1, $s3, 0x1
    ctx->r3 = ctx->r19 < 0X1 ? 1 : 0;
    // 0x8002E268: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8002E26C: bne         $v0, $zero, L_8002E2F4
    if (ctx->r2 != 0) {
        // 0x8002E270: sll         $v0, $a3, 16
        ctx->r2 = S32(ctx->r7 << 16);
            goto L_8002E2F4;
    }
    // 0x8002E270: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x8002E274: sra         $s6, $v0, 16
    ctx->r22 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8002E278: sltiu       $v1, $s6, 0x1
    ctx->r3 = ctx->r22 < 0X1 ? 1 : 0;
    // 0x8002E27C: sll         $v0, $t0, 16
    ctx->r2 = S32(ctx->r8 << 16);
    // 0x8002E280: sra         $s5, $v0, 16
    ctx->r21 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8002E284: sltiu       $v0, $s5, 0x1
    ctx->r2 = ctx->r21 < 0X1 ? 1 : 0;
    // 0x8002E288: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8002E28C: bne         $v1, $zero, L_8002E2F4
    if (ctx->r3 != 0) {
        // 0x8002E290: addiu       $a0, $sp, 0x18
        ctx->r4 = ADD32(ctx->r29, 0X18);
            goto L_8002E2F4;
    }
    // 0x8002E290: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x8002E294: lhu         $s1, 0x2E($sp)
    ctx->r17 = MEM_HU(ctx->r29, 0X2E);
    // 0x8002E298: srl         $s1, $s1, 7
    ctx->r17 = S32(U32(ctx->r17) >> 7);
    // 0x8002E29C: andi        $s1, $s1, 0x3
    ctx->r17 = ctx->r17 & 0X3;
    // 0x8002E2A0: sll         $s0, $s1, 4
    ctx->r16 = S32(ctx->r17 << 4);
    // 0x8002E2A4: subu        $s0, $s0, $s1
    ctx->r16 = SUB32(ctx->r16, ctx->r17);
    // 0x8002E2A8: sll         $s0, $s0, 4
    ctx->r16 = S32(ctx->r16 << 4);
    // 0x8002E2AC: jal         0x8002CD50
    // 0x8002E2B0: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    func_8002CD50_8150(rdram, ctx);
        goto after_1;
    // 0x8002E2B0: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    after_1:
    // 0x8002E2B4: addiu       $s2, $sp, 0x18
    ctx->r18 = ADD32(ctx->r29, 0X18);
    // 0x8002E2B8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8002E2BC: lhu         $a3, 0x2E($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X2E);
    // 0x8002E2C0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8002E2C4: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x8002E2C8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8002E2CC: srl         $a3, $a3, 5
    ctx->r7 = S32(U32(ctx->r7) >> 5);
    // 0x8002E2D0: jal         0x8002D08C
    // 0x8002E2D4: andi        $a3, $a3, 0x3
    ctx->r7 = ctx->r7 & 0X3;
    func_8002D08C_848C(rdram, ctx);
        goto after_2;
    // 0x8002E2D4: andi        $a3, $a3, 0x3
    ctx->r7 = ctx->r7 & 0X3;
    after_2:
    // 0x8002E2D8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8002E2DC: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x8002E2E0: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x8002E2E4: addu        $a3, $s6, $zero
    ctx->r7 = ADD32(ctx->r22, 0);
    // 0x8002E2E8: sw          $s5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r21;
    // 0x8002E2EC: jal         0x8002D370
    // 0x8002E2F0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_8002D370_8770(rdram, ctx);
        goto after_3;
    // 0x8002E2F0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_3:
L_8002E2F4:
    // 0x8002E2F4: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    // 0x8002E2F8: lw          $s6, 0x78($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X78);
    // 0x8002E2FC: lw          $s5, 0x74($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X74);
    // 0x8002E300: lw          $s4, 0x70($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X70);
    // 0x8002E304: lw          $s3, 0x6C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X6C);
    // 0x8002E308: lw          $s2, 0x68($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X68);
    // 0x8002E30C: lw          $s1, 0x64($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X64);
    // 0x8002E310: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x8002E314: jr          $ra
    // 0x8002E318: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    TRACE_RETURN()
    return;
    // 0x8002E318: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_80091790_6CB90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80091790: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80091794: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80091798: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8009179C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x800917A0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x800917A4: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x800917A8: beq         $v0, $zero, L_80091804
    if (ctx->r2 == 0) {
        // 0x800917AC: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_80091804;
    }
    // 0x800917AC: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x800917B0: jal         0x80091C78
    // 0x800917B4: nop

    func_80091C78_6D078(rdram, ctx);
        goto after_0;
    // 0x800917B4: nop

    after_0:
    // 0x800917B8: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x800917BC: beq         $a2, $zero, L_80091804
    if (ctx->r6 == 0) {
        // 0x800917C0: nop
    
            goto L_80091804;
    }
    // 0x800917C0: nop

    // 0x800917C4: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x800917C8: lw          $v0, -0xEEC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XEEC);
    // 0x800917CC: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x800917D0: lw          $v1, 0x1C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1C);
    // 0x800917D4: lw          $a0, 0x88($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X88);
    // 0x800917D8: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x800917DC: sh          $v0, 0x8($a2)
    MEM_H(0X8, ctx->r6) = ctx->r2;
    // 0x800917E0: sw          $s1, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r17;
    // 0x800917E4: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x800917E8: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x800917EC: sw          $v1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r3;
    // 0x800917F0: lhu         $v0, 0x1A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1A);
    // 0x800917F4: sh          $v0, 0xA($a2)
    MEM_H(0XA, ctx->r6) = ctx->r2;
    // 0x800917F8: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x800917FC: jal         0x8008FB18
    // 0x80091800: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8008FB18_6AF18(rdram, ctx);
        goto after_1;
    // 0x80091800: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
L_80091804:
    // 0x80091804: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80091808: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8009180C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80091810: jr          $ra
    // 0x80091814: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80091814: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80091818: nop

    // 0x8009181C: nop

;}
RECOMP_FUNC void func_800600F8_3B4F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800600F8: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x800600FC: lw          $a0, -0x39AC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X39AC);
    // 0x80060100: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80060104: lbu         $v1, -0x3A48($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A48);
    // 0x80060108: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    // 0x8006010C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80060110: sw          $v0, -0x39AC($at)
    MEM_W(-0X39AC, ctx->r1) = ctx->r2;
    // 0x80060114: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80060118: beq         $v1, $v0, L_80060130
    if (ctx->r3 == ctx->r2) {
        // 0x8006011C: nop
    
            goto L_80060130;
    }
    // 0x8006011C: nop

    // 0x80060120: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80060124: sw          $zero, -0x3A38($at)
    MEM_W(-0X3A38, ctx->r1) = 0;
    // 0x80060128: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8006012C: sw          $zero, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = 0;
L_80060130:
    // 0x80060130: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80060134: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80060138: lbu         $v1, -0x3A47($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A47);
    // 0x8006013C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80060140: sb          $v0, -0x3A48($at)
    MEM_B(-0X3A48, ctx->r1) = ctx->r2;
    // 0x80060144: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x80060148: beq         $v1, $v0, L_80060158
    if (ctx->r3 == ctx->r2) {
        // 0x8006014C: nop
    
            goto L_80060158;
    }
    // 0x8006014C: nop

    // 0x80060150: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80060154: sw          $zero, -0x3A34($at)
    MEM_W(-0X3A34, ctx->r1) = 0;
L_80060158:
    // 0x80060158: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x8006015C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80060160: sw          $zero, -0x3A40($at)
    MEM_W(-0X3A40, ctx->r1) = 0;
    // 0x80060164: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80060168: jr          $ra
    // 0x8006016C: sb          $v0, -0x3A47($at)
    MEM_B(-0X3A47, ctx->r1) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x8006016C: sb          $v0, -0x3A47($at)
    MEM_B(-0X3A47, ctx->r1) = ctx->r2;
;}
RECOMP_FUNC void func_8002A3F0_57F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002A3F0: andi        $v0, $a0, 0x3
    ctx->r2 = ctx->r4 & 0X3;
    // 0x8002A3F4: beq         $v0, $zero, L_8002A464
    if (ctx->r2 == 0) {
        // 0x8002A3F8: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_8002A464;
    }
    // 0x8002A3F8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8002A3FC: andi        $v0, $a0, 0x1
    ctx->r2 = ctx->r4 & 0X1;
    // 0x8002A400: beq         $v0, $zero, L_8002A430
    if (ctx->r2 == 0) {
        // 0x8002A404: addiu       $a2, $zero, 0x1
        ctx->r6 = ADD32(0, 0X1);
            goto L_8002A430;
    }
    // 0x8002A404: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8002A408: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8002A40C: lbu         $v1, 0x6B38($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X6B38);
    // 0x8002A410: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x8002A414: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8002A418: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x8002A41C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8002A420: bgtz        $v0, L_8002A464
    if (SIGNED(ctx->r2) > 0) {
        // 0x8002A424: nop
    
            goto L_8002A464;
    }
    // 0x8002A424: nop

    // 0x8002A428: j           L_8002A460
    // 0x8002A42C: sh          $zero, 0x0($a1)
    MEM_H(0X0, ctx->r5) = 0;
        goto L_8002A460;
    // 0x8002A42C: sh          $zero, 0x0($a1)
    MEM_H(0X0, ctx->r5) = 0;
L_8002A430:
    // 0x8002A430: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8002A434: lbu         $v1, 0x6B38($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X6B38);
    // 0x8002A438: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x8002A43C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8002A440: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x8002A444: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8002A448: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8002A44C: slti        $v0, $v0, 0x7F
    ctx->r2 = SIGNED(ctx->r2) < 0X7F ? 1 : 0;
    // 0x8002A450: bne         $v0, $zero, L_8002A464
    if (ctx->r2 != 0) {
        // 0x8002A454: nop
    
            goto L_8002A464;
    }
    // 0x8002A454: nop

    // 0x8002A458: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x8002A45C: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
L_8002A460:
    // 0x8002A460: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_8002A464:
    // 0x8002A464: jr          $ra
    // 0x8002A468: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    TRACE_RETURN()
    return;
    // 0x8002A468: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
;}
RECOMP_FUNC void func_80061E44_3D244(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80061E44: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x80061E48: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80061E4C: jr          $ra
    // 0x80061E50: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80061E50: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_80054B94_2FF94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80054B94: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80054B98: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x80054B9C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80054BA0: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80054BA4: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x80054BA8: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x80054BAC: lbu         $a0, 0x6($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X6);
    // 0x80054BB0: beq         $a0, $zero, L_80054FA0
    if (ctx->r4 == 0) {
        // 0x80054BB4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80054FA0;
    }
    // 0x80054BB4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80054BB8: jal         0x80053ED8
    // 0x80054BBC: nop

    func_80053ED8_2F2D8(rdram, ctx);
        goto after_0;
    // 0x80054BBC: nop

    after_0:
    // 0x80054BC0: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80054BC4: lb          $v0, 0x0($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X0);
    // 0x80054BC8: beq         $v0, $zero, L_80054EEC
    if (ctx->r2 == 0) {
        // 0x80054BCC: lui         $v0, 0x2EF
        ctx->r2 = S32(0X2EF << 16);
            goto L_80054EEC;
    }
    // 0x80054BCC: lui         $v0, 0x2EF
    ctx->r2 = S32(0X2EF << 16);
    // 0x80054BD0: lw          $v1, 0x80($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X80);
    // 0x80054BD4: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x80054BD8: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x80054BDC: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x80054BE0: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80054BE4: bnel        $v0, $zero, L_80054EEC
    if (ctx->r2 != 0) {
        // 0x80054BE8: sb          $zero, 0x7($s0)
        MEM_B(0X7, ctx->r16) = 0;
            goto L_80054EEC;
    }
    goto skip_0;
    // 0x80054BE8: sb          $zero, 0x7($s0)
    MEM_B(0X7, ctx->r16) = 0;
    skip_0:
    // 0x80054BEC: lbu         $v1, 0x7($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X7);
    // 0x80054BF0: beq         $v1, $zero, L_80054C00
    if (ctx->r3 == 0) {
        // 0x80054BF4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80054C00;
    }
    // 0x80054BF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80054BF8: beq         $v1, $v0, L_80054CFC
    if (ctx->r3 == ctx->r2) {
        // 0x80054BFC: addiu       $a0, $sp, 0x28
        ctx->r4 = ADD32(ctx->r29, 0X28);
            goto L_80054CFC;
    }
    // 0x80054BFC: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
L_80054C00:
    // 0x80054C00: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x80054C04: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80054C08: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80054C0C: lh          $a3, 0x4A06($a3)
    ctx->r7 = MEM_H(ctx->r7, 0X4A06);
    // 0x80054C10: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80054C14: lw          $v1, 0x43E0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X43E0);
    // 0x80054C18: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x80054C1C: lw          $t0, 0x43E4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X43E4);
    // 0x80054C20: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x80054C24: lw          $t1, 0x43E8($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X43E8);
    // 0x80054C28: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x80054C2C: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80054C30: sh          $v0, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r2;
    // 0x80054C34: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    // 0x80054C38: sh          $v0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r2;
    // 0x80054C3C: sh          $v1, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r3;
    // 0x80054C40: sh          $t0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r8;
    // 0x80054C44: jal         0x8004E318
    // 0x80054C48: sh          $t1, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r9;
    func_8004E318_29718(rdram, ctx);
        goto after_1;
    // 0x80054C48: sh          $t1, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r9;
    after_1:
    // 0x80054C4C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80054C50: beq         $v0, $zero, L_80054FA0
    if (ctx->r2 == 0) {
        // 0x80054C54: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80054FA0;
    }
    // 0x80054C54: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80054C58: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x80054C5C: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80054C60: bne         $v0, $zero, L_80054C7C
    if (ctx->r2 != 0) {
        // 0x80054C64: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80054C7C;
    }
    // 0x80054C64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80054C68: lbu         $v0, 0x1($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X1);
    // 0x80054C6C: sltiu       $v0, $v0, 0x60
    ctx->r2 = ctx->r2 < 0X60 ? 1 : 0;
    // 0x80054C70: bne         $v0, $zero, L_80054FA0
    if (ctx->r2 != 0) {
        // 0x80054C74: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80054FA0;
    }
    // 0x80054C74: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80054C78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80054C7C:
    // 0x80054C7C: sb          $v0, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r2;
    // 0x80054C80: lhu         $v0, 0x14($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X14);
    // 0x80054C84: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    // 0x80054C88: lhu         $v0, 0x16($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X16);
    // 0x80054C8C: lb          $v1, 0xF($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XF);
    // 0x80054C90: addiu       $v0, $v0, -0x64
    ctx->r2 = ADD32(ctx->r2, -0X64);
    // 0x80054C94: sh          $v0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r2;
    // 0x80054C98: lhu         $v0, 0x18($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X18);
    // 0x80054C9C: beq         $v1, $zero, L_80054CE0
    if (ctx->r3 == 0) {
        // 0x80054CA0: sh          $v0, 0x4($s0)
        MEM_H(0X4, ctx->r16) = ctx->r2;
            goto L_80054CE0;
    }
    // 0x80054CA0: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x80054CA4: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x80054CA8: lhu         $v1, 0x0($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X0);
    // 0x80054CAC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80054CB0: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x80054CB4: lhu         $v0, 0x16($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X16);
    // 0x80054CB8: lhu         $v1, 0x2($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X2);
    // 0x80054CBC: lhu         $a0, 0x4($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X4);
    // 0x80054CC0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80054CC4: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
    // 0x80054CC8: lhu         $v1, 0x18($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X18);
    // 0x80054CCC: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x80054CD0: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x80054CD4: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x80054CD8: j           L_80054F9C
    // 0x80054CDC: sh          $v1, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r3;
        goto L_80054F9C;
    // 0x80054CDC: sh          $v1, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r3;
L_80054CE0:
    // 0x80054CE0: addiu       $v0, $zero, -0x1000
    ctx->r2 = ADD32(0, -0X1000);
    // 0x80054CE4: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
    // 0x80054CE8: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x80054CEC: sh          $zero, 0x8($s0)
    MEM_H(0X8, ctx->r16) = 0;
    // 0x80054CF0: sh          $zero, 0xC($s0)
    MEM_H(0XC, ctx->r16) = 0;
    // 0x80054CF4: j           L_80054F9C
    // 0x80054CF8: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
        goto L_80054F9C;
    // 0x80054CF8: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_80054CFC:
    // 0x80054CFC: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80054D00: jal         0x8009A3B4
    // 0x80054D04: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80054D04: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80054D08: lh          $v0, 0x28($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X28);
    // 0x80054D0C: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
    // 0x80054D10: ori         $a0, $zero, 0xD0FC
    ctx->r4 = 0 | 0XD0FC;
    // 0x80054D14: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80054D18: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80054D1C: addiu       $v0, $v0, 0x687E
    ctx->r2 = ADD32(ctx->r2, 0X687E);
    // 0x80054D20: sltu        $v0, $a0, $v0
    ctx->r2 = ctx->r4 < ctx->r2 ? 1 : 0;
    // 0x80054D24: bnel        $v0, $zero, L_80054EEC
    if (ctx->r2 != 0) {
        // 0x80054D28: sb          $zero, 0x7($s0)
        MEM_B(0X7, ctx->r16) = 0;
            goto L_80054EEC;
    }
    goto skip_1;
    // 0x80054D28: sb          $zero, 0x7($s0)
    MEM_B(0X7, ctx->r16) = 0;
    skip_1:
    // 0x80054D2C: lh          $v0, 0x2A($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X2A);
    // 0x80054D30: lh          $v1, 0x2($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2);
    // 0x80054D34: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80054D38: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x80054D3C: addiu       $v0, $v0, 0x687E
    ctx->r2 = ADD32(ctx->r2, 0X687E);
    // 0x80054D40: sltu        $v0, $a0, $v0
    ctx->r2 = ctx->r4 < ctx->r2 ? 1 : 0;
    // 0x80054D44: bnel        $v0, $zero, L_80054EEC
    if (ctx->r2 != 0) {
        // 0x80054D48: sb          $zero, 0x7($s0)
        MEM_B(0X7, ctx->r16) = 0;
            goto L_80054EEC;
    }
    goto skip_2;
    // 0x80054D48: sb          $zero, 0x7($s0)
    MEM_B(0X7, ctx->r16) = 0;
    skip_2:
    // 0x80054D4C: lh          $v0, 0x2C($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X2C);
    // 0x80054D50: lh          $v1, 0x4($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X4);
    // 0x80054D54: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80054D58: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x80054D5C: addiu       $v0, $v0, 0x687E
    ctx->r2 = ADD32(ctx->r2, 0X687E);
    // 0x80054D60: sltu        $v0, $a0, $v0
    ctx->r2 = ctx->r4 < ctx->r2 ? 1 : 0;
    // 0x80054D64: bnel        $v0, $zero, L_80054EEC
    if (ctx->r2 != 0) {
        // 0x80054D68: sb          $zero, 0x7($s0)
        MEM_B(0X7, ctx->r16) = 0;
            goto L_80054EEC;
    }
    goto skip_3;
    // 0x80054D68: sb          $zero, 0x7($s0)
    MEM_B(0X7, ctx->r16) = 0;
    skip_3:
    // 0x80054D6C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x80054D70: addiu       $s2, $sp, 0x20
    ctx->r18 = ADD32(ctx->r29, 0X20);
    // 0x80054D74: jal         0x80032308
    // 0x80054D78: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_80032308_D708(rdram, ctx);
        goto after_3;
    // 0x80054D78: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_3:
    // 0x80054D7C: lui         $v0, 0xF74
    ctx->r2 = S32(0XF74 << 16);
    // 0x80054D80: ori         $v0, $v0, 0x6EA4
    ctx->r2 = ctx->r2 | 0X6EA4;
    // 0x80054D84: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x80054D88: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80054D8C: addiu       $a2, $s0, 0x8
    ctx->r6 = ADD32(ctx->r16, 0X8);
    // 0x80054D90: addiu       $a3, $zero, 0x424
    ctx->r7 = ADD32(0, 0X424);
    // 0x80054D94: jal         0x80051B48
    // 0x80054D98: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80051B48_2CF48(rdram, ctx);
        goto after_4;
    // 0x80054D98: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_4:
    // 0x80054D9C: lhu         $v0, 0x18($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X18);
    // 0x80054DA0: lhu         $a2, 0x0($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X0);
    // 0x80054DA4: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x80054DA8: lhu         $v0, 0x1A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X1A);
    // 0x80054DAC: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
    // 0x80054DB0: lhu         $v0, 0x1C($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X1C);
    // 0x80054DB4: sh          $v0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r2;
    // 0x80054DB8: sh          $a2, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r6;
    // 0x80054DBC: lhu         $v1, 0x2($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X2);
    // 0x80054DC0: lh          $v0, 0x18($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X18);
    // 0x80054DC4: lh          $a1, 0x1A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X1A);
    // 0x80054DC8: lh          $a0, 0x1C($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1C);
    // 0x80054DCC: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x80054DD0: addiu       $s1, $s1, -0x1AC4
    ctx->r17 = ADD32(ctx->r17, -0X1AC4);
    // 0x80054DD4: sh          $v1, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r3;
    // 0x80054DD8: lhu         $a3, 0x4($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X4);
    // 0x80054DDC: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x80054DE0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80054DE4: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80054DE8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80054DEC: sra         $v1, $v1, 10
    ctx->r3 = S32(SIGNED(ctx->r3) >> 10);
    // 0x80054DF0: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x80054DF4: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80054DF8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80054DFC: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80054E00: sra         $v0, $v0, 10
    ctx->r2 = S32(SIGNED(ctx->r2) >> 10);
    // 0x80054E04: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    // 0x80054E08: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80054E0C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80054E10: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80054E14: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80054E18: sra         $v0, $v0, 10
    ctx->r2 = S32(SIGNED(ctx->r2) >> 10);
    // 0x80054E1C: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x80054E20: sh          $v1, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r3;
    // 0x80054E24: sh          $v0, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r2;
    // 0x80054E28: sh          $a3, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r7;
    // 0x80054E2C: sh          $a2, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r6;
    // 0x80054E30: lhu         $v0, 0x22($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X22);
    // 0x80054E34: lhu         $v1, 0x1A($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X1A);
    // 0x80054E38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80054E3C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80054E40: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80054E44: sh          $v0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r2;
    // 0x80054E48: lhu         $v0, 0x24($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X24);
    // 0x80054E4C: lhu         $v1, 0x1C($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X1C);
    // 0x80054E50: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x80054E54: ori         $a3, $zero, 0xFFFF
    ctx->r7 = 0 | 0XFFFF;
    // 0x80054E58: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80054E5C: jal         0x8003F780
    // 0x80054E60: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    func_8003F780_1AB80(rdram, ctx);
        goto after_5;
    // 0x80054E60: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    after_5:
    // 0x80054E64: bnel        $v0, $zero, L_80054EEC
    if (ctx->r2 != 0) {
        // 0x80054E68: sb          $zero, 0x7($s0)
        MEM_B(0X7, ctx->r16) = 0;
            goto L_80054EEC;
    }
    goto skip_4;
    // 0x80054E68: sb          $zero, 0x7($s0)
    MEM_B(0X7, ctx->r16) = 0;
    skip_4:
    // 0x80054E6C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80054E70: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80054E74: lhu         $v1, 0x18($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X18);
    // 0x80054E78: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x80054E7C: ori         $a3, $zero, 0xFFFF
    ctx->r7 = 0 | 0XFFFF;
    // 0x80054E80: lhu         $v0, 0x20($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X20);
    // 0x80054E84: lhu         $t0, 0x1A($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X1A);
    // 0x80054E88: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80054E8C: sra         $v1, $v1, 17
    ctx->r3 = S32(SIGNED(ctx->r3) >> 17);
    // 0x80054E90: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80054E94: sll         $t0, $t0, 16
    ctx->r8 = S32(ctx->r8 << 16);
    // 0x80054E98: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    // 0x80054E9C: lhu         $v0, 0x22($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X22);
    // 0x80054EA0: lhu         $v1, 0x1C($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X1C);
    // 0x80054EA4: sra         $t0, $t0, 17
    ctx->r8 = S32(SIGNED(ctx->r8) >> 17);
    // 0x80054EA8: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x80054EAC: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x80054EB0: lhu         $v0, 0x24($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X24);
    // 0x80054EB4: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80054EB8: sra         $v1, $v1, 17
    ctx->r3 = S32(SIGNED(ctx->r3) >> 17);
    // 0x80054EBC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80054EC0: jal         0x8003F780
    // 0x80054EC4: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    func_8003F780_1AB80(rdram, ctx);
        goto after_6;
    // 0x80054EC4: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    after_6:
    // 0x80054EC8: bnel        $v0, $zero, L_80054EEC
    if (ctx->r2 != 0) {
        // 0x80054ECC: sb          $zero, 0x7($s0)
        MEM_B(0X7, ctx->r16) = 0;
            goto L_80054EEC;
    }
    goto skip_5;
    // 0x80054ECC: sb          $zero, 0x7($s0)
    MEM_B(0X7, ctx->r16) = 0;
    skip_5:
    // 0x80054ED0: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x80054ED4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80054ED8: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x80054EDC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80054EE0: bne         $v0, $zero, L_80054F0C
    if (ctx->r2 != 0) {
        // 0x80054EE4: nop
    
            goto L_80054F0C;
    }
    // 0x80054EE4: nop

    // 0x80054EE8: sb          $zero, 0x7($s0)
    MEM_B(0X7, ctx->r16) = 0;
L_80054EEC:
    // 0x80054EEC: sb          $zero, 0x6($s0)
    MEM_B(0X6, ctx->r16) = 0;
    // 0x80054EF0: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x80054EF4: lw          $v1, -0x49A0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X49A0);
    // 0x80054EF8: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80054EFC: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80054F00: sw          $v1, -0x49A0($at)
    MEM_W(-0X49A0, ctx->r1) = ctx->r3;
    // 0x80054F04: j           L_80054FA0
    // 0x80054F08: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_80054FA0;
    // 0x80054F08: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80054F0C:
    // 0x80054F0C: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x80054F10: lhu         $v1, 0x28($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X28);
    // 0x80054F14: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80054F18: addiu       $v0, $v0, 0x64
    ctx->r2 = ADD32(ctx->r2, 0X64);
    // 0x80054F1C: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80054F20: sltiu       $v0, $v0, 0xC8
    ctx->r2 = ctx->r2 < 0XC8 ? 1 : 0;
    // 0x80054F24: beq         $v0, $zero, L_80054FA0
    if (ctx->r2 == 0) {
        // 0x80054F28: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80054FA0;
    }
    // 0x80054F28: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80054F2C: lhu         $v0, 0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2);
    // 0x80054F30: lhu         $v1, 0x2A($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X2A);
    // 0x80054F34: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80054F38: addiu       $v0, $v0, 0x64
    ctx->r2 = ADD32(ctx->r2, 0X64);
    // 0x80054F3C: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80054F40: sltiu       $v0, $v0, 0xC8
    ctx->r2 = ctx->r2 < 0XC8 ? 1 : 0;
    // 0x80054F44: beq         $v0, $zero, L_80054FA0
    if (ctx->r2 == 0) {
        // 0x80054F48: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80054FA0;
    }
    // 0x80054F48: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80054F4C: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x80054F50: lhu         $v1, 0x2C($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X2C);
    // 0x80054F54: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80054F58: addiu       $v0, $v0, 0x64
    ctx->r2 = ADD32(ctx->r2, 0X64);
    // 0x80054F5C: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80054F60: sltiu       $v0, $v0, 0xC8
    ctx->r2 = ctx->r2 < 0XC8 ? 1 : 0;
    // 0x80054F64: beq         $v0, $zero, L_80054F9C
    if (ctx->r2 == 0) {
        // 0x80054F68: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80054F9C;
    }
    // 0x80054F68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80054F6C: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x80054F70: sb          $zero, 0x7($s0)
    MEM_B(0X7, ctx->r16) = 0;
    // 0x80054F74: sb          $zero, 0x6($s0)
    MEM_B(0X6, ctx->r16) = 0;
    // 0x80054F78: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x80054F7C: lw          $a0, -0x49A0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X49A0);
    // 0x80054F80: lw          $a1, 0x4($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X4);
    // 0x80054F84: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x80054F88: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80054F8C: sw          $a0, -0x49A0($at)
    MEM_W(-0X49A0, ctx->r1) = ctx->r4;
    // 0x80054F90: ori         $a1, $a1, 0x1
    ctx->r5 = ctx->r5 | 0X1;
    // 0x80054F94: j           L_80054FA0
    // 0x80054F98: sw          $a1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r5;
        goto L_80054FA0;
    // 0x80054F98: sw          $a1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r5;
L_80054F9C:
    // 0x80054F9C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80054FA0:
    // 0x80054FA0: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80054FA4: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x80054FA8: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x80054FAC: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x80054FB0: jr          $ra
    // 0x80054FB4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x80054FB4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_8003C06C_1746C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003C06C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8003C070: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8003C074: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8003C078: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8003C07C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8003C080: lb          $v1, 0x1($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X1);
    // 0x8003C084: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8003C088: addiu       $s1, $s1, 0x47B8
    ctx->r17 = ADD32(ctx->r17, 0X47B8);
    // 0x8003C08C: beq         $v1, $zero, L_8003C0A4
    if (ctx->r3 == 0) {
        // 0x8003C090: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8003C0A4;
    }
    // 0x8003C090: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8003C094: beq         $v1, $v0, L_8003C1D4
    if (ctx->r3 == ctx->r2) {
        // 0x8003C098: nop
    
            goto L_8003C1D4;
    }
    // 0x8003C098: nop

    // 0x8003C09C: j           L_8003C1F4
    // 0x8003C0A0: nop

        goto L_8003C1F4;
    // 0x8003C0A0: nop

L_8003C0A4:
    // 0x8003C0A4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8003C0A8: lb          $v0, 0x47CD($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X47CD);
    // 0x8003C0AC: bne         $v0, $zero, L_8003C1CC
    if (ctx->r2 != 0) {
        // 0x8003C0B0: nop
    
            goto L_8003C1CC;
    }
    // 0x8003C0B0: nop

    // 0x8003C0B4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8003C0B8: lbu         $v0, 0x47CF($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X47CF);
    // 0x8003C0BC: lbu         $v1, 0x53($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X53);
    // 0x8003C0C0: sb          $v0, 0x51($s0)
    MEM_B(0X51, ctx->r16) = ctx->r2;
    // 0x8003C0C4: jal         0x8003E03C
    // 0x8003C0C8: sb          $v1, 0x52($s0)
    MEM_B(0X52, ctx->r16) = ctx->r3;
    func_8003E03C_1943C(rdram, ctx);
        goto after_0;
    // 0x8003C0C8: sb          $v1, 0x52($s0)
    MEM_B(0X52, ctx->r16) = ctx->r3;
    after_0:
    // 0x8003C0CC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8003C0D0: lhu         $v0, 0x47C0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X47C0);
    // 0x8003C0D4: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8003C0D8: lhu         $v1, 0x47C2($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X47C2);
    // 0x8003C0DC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8003C0E0: lhu         $a0, 0x47C4($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X47C4);
    // 0x8003C0E4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8003C0E8: lhu         $a1, 0x47CA($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X47CA);
    // 0x8003C0EC: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x8003C0F0: lbu         $a2, 0x49B8($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X49B8);
    // 0x8003C0F4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003C0F8: sb          $zero, 0x4A25($at)
    MEM_B(0X4A25, ctx->r1) = 0;
    // 0x8003C0FC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003C100: sb          $zero, 0x4A24($at)
    MEM_B(0X4A24, ctx->r1) = 0;
    // 0x8003C104: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003C108: sh          $v0, 0x49DC($at)
    MEM_H(0X49DC, ctx->r1) = ctx->r2;
    // 0x8003C10C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003C110: sh          $v0, 0x49C4($at)
    MEM_H(0X49C4, ctx->r1) = ctx->r2;
    // 0x8003C114: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8003C118: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003C11C: sh          $v1, 0x49DE($at)
    MEM_H(0X49DE, ctx->r1) = ctx->r3;
    // 0x8003C120: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003C124: sh          $v1, 0x49C6($at)
    MEM_H(0X49C6, ctx->r1) = ctx->r3;
    // 0x8003C128: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8003C12C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003C130: sh          $a0, 0x49E0($at)
    MEM_H(0X49E0, ctx->r1) = ctx->r4;
    // 0x8003C134: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003C138: sh          $a0, 0x49C8($at)
    MEM_H(0X49C8, ctx->r1) = ctx->r4;
    // 0x8003C13C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8003C140: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003C144: sw          $v0, 0x49E4($at)
    MEM_W(0X49E4, ctx->r1) = ctx->r2;
    // 0x8003C148: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003C14C: sw          $v0, 0x49CC($at)
    MEM_W(0X49CC, ctx->r1) = ctx->r2;
    // 0x8003C150: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8003C154: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003C158: sw          $v1, 0x49E8($at)
    MEM_W(0X49E8, ctx->r1) = ctx->r3;
    // 0x8003C15C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003C160: sw          $v1, 0x49D0($at)
    MEM_W(0X49D0, ctx->r1) = ctx->r3;
    // 0x8003C164: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003C168: sw          $a0, 0x49EC($at)
    MEM_W(0X49EC, ctx->r1) = ctx->r4;
    // 0x8003C16C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003C170: sw          $a0, 0x49D4($at)
    MEM_W(0X49D4, ctx->r1) = ctx->r4;
    // 0x8003C174: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003C178: sh          $a1, 0x4A0E($at)
    MEM_H(0X4A0E, ctx->r1) = ctx->r5;
    // 0x8003C17C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003C180: bne         $a2, $v0, L_8003C1D4
    if (ctx->r6 != ctx->r2) {
        // 0x8003C184: sh          $a1, 0x4A06($at)
        MEM_H(0X4A06, ctx->r1) = ctx->r5;
            goto L_8003C1D4;
    }
    // 0x8003C184: sh          $a1, 0x4A06($at)
    MEM_H(0X4A06, ctx->r1) = ctx->r5;
    // 0x8003C188: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8003C18C: addiu       $a0, $a0, 0x4DE8
    ctx->r4 = ADD32(ctx->r4, 0X4DE8);
    // 0x8003C190: addiu       $a1, $a0, -0x424
    ctx->r5 = ADD32(ctx->r4, -0X424);
    // 0x8003C194: jal         0x8009A3B4
    // 0x8003C198: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8003C198: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8003C19C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8003C1A0: addiu       $a0, $a0, 0x4DD8
    ctx->r4 = ADD32(ctx->r4, 0X4DD8);
    // 0x8003C1A4: addiu       $a1, $a0, -0x40C
    ctx->r5 = ADD32(ctx->r4, -0X40C);
    // 0x8003C1A8: jal         0x8009A3B4
    // 0x8003C1AC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8003C1AC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x8003C1B0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8003C1B4: addiu       $a0, $a0, 0x4DF0
    ctx->r4 = ADD32(ctx->r4, 0X4DF0);
    // 0x8003C1B8: addiu       $a1, $a0, -0x3EC
    ctx->r5 = ADD32(ctx->r4, -0X3EC);
    // 0x8003C1BC: jal         0x8009A3B4
    // 0x8003C1C0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8003C1C0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x8003C1C4: j           L_8003C1D4
    // 0x8003C1C8: nop

        goto L_8003C1D4;
    // 0x8003C1C8: nop

L_8003C1CC:
    // 0x8003C1CC: jal         0x8003E03C
    // 0x8003C1D0: nop

    func_8003E03C_1943C(rdram, ctx);
        goto after_4;
    // 0x8003C1D0: nop

    after_4:
L_8003C1D4:
    // 0x8003C1D4: jal         0x800336AC
    // 0x8003C1D8: nop

    func_800336AC_EAAC(rdram, ctx);
        goto after_5;
    // 0x8003C1D8: nop

    after_5:
    // 0x8003C1DC: jal         0x80073828
    // 0x8003C1E0: nop

    func_80073828_4EC28(rdram, ctx);
        goto after_6;
    // 0x8003C1E0: nop

    after_6:
    // 0x8003C1E4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8003C1E8: sb          $zero, 0x14($s1)
    MEM_B(0X14, ctx->r17) = 0;
    // 0x8003C1EC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8003C1F0: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
L_8003C1F4:
    // 0x8003C1F4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8003C1F8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8003C1FC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8003C200: jr          $ra
    // 0x8003C204: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8003C204: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8004A944_25D44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004A944: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8004A948: sh          $zero, -0x49FC($at)
    MEM_H(-0X49FC, ctx->r1) = 0;
    // 0x8004A94C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8004A950: jr          $ra
    // 0x8004A954: sh          $zero, -0x49FA($at)
    MEM_H(-0X49FA, ctx->r1) = 0;
    TRACE_RETURN()
    return;
    // 0x8004A954: sh          $zero, -0x49FA($at)
    MEM_H(-0X49FA, ctx->r1) = 0;
;}
RECOMP_FUNC void func_8004C108_27508(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004C108: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8004C10C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8004C110: addiu       $v0, $v0, 0x59A0
    ctx->r2 = ADD32(ctx->r2, 0X59A0);
    // 0x8004C114: addiu       $v1, $v0, 0x1180
    ctx->r3 = ADD32(ctx->r2, 0X1180);
    // 0x8004C118: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8004C11C: sw          $v0, 0x7848($at)
    MEM_W(0X7848, ctx->r1) = ctx->r2;
    // 0x8004C120: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8004C124: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8004C128: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8004C12C: beq         $v0, $zero, L_8004C198
    if (ctx->r2 == 0) {
        // 0x8004C130: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_8004C198;
    }
    // 0x8004C130: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8004C134: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x8004C138: addiu       $s1, $s1, 0x2E90
    ctx->r17 = ADD32(ctx->r17, 0X2E90);
    // 0x8004C13C: addu        $s0, $v1, $zero
    ctx->r16 = ADD32(ctx->r3, 0);
L_8004C140:
    // 0x8004C140: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8004C144: lw          $a0, 0x7848($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7848);
    // 0x8004C148: lb          $v0, 0x0($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X0);
    // 0x8004C14C: lbu         $v1, 0x6($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X6);
    // 0x8004C150: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8004C154: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8004C158: beq         $v0, $zero, L_8004C178
    if (ctx->r2 == 0) {
        // 0x8004C15C: nop
    
            goto L_8004C178;
    }
    // 0x8004C15C: nop

    // 0x8004C160: lbu         $v0, 0x2($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X2);
    // 0x8004C164: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8004C168: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8004C16C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8004C170: jalr        $v0
    // 0x8004C174: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8004C174: nop

    after_0:
L_8004C178:
    // 0x8004C178: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8004C17C: lw          $v0, 0x7848($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7848);
    // 0x8004C180: addiu       $v0, $v0, 0x118
    ctx->r2 = ADD32(ctx->r2, 0X118);
    // 0x8004C184: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8004C188: sw          $v0, 0x7848($at)
    MEM_W(0X7848, ctx->r1) = ctx->r2;
    // 0x8004C18C: sltu        $v0, $v0, $s0
    ctx->r2 = ctx->r2 < ctx->r16 ? 1 : 0;
    // 0x8004C190: bne         $v0, $zero, L_8004C140
    if (ctx->r2 != 0) {
        // 0x8004C194: nop
    
            goto L_8004C140;
    }
    // 0x8004C194: nop

L_8004C198:
    // 0x8004C198: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8004C19C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8004C1A0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8004C1A4: jr          $ra
    // 0x8004C1A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8004C1A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8003E03C_1943C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003E03C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8003E040: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8003E044: addiu       $s0, $zero, 0x29
    ctx->r16 = ADD32(0, 0X29);
    // 0x8003E048: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x8003E04C: addiu       $s6, $zero, 0x5
    ctx->r22 = ADD32(0, 0X5);
    // 0x8003E050: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x8003E054: lui         $s5, 0x801C
    ctx->r21 = S32(0X801C << 16);
    // 0x8003E058: addiu       $s5, $s5, -0x3E3D
    ctx->r21 = ADD32(ctx->r21, -0X3E3D);
    // 0x8003E05C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8003E060: lui         $s4, 0xFFFF
    ctx->r20 = S32(0XFFFF << 16);
    // 0x8003E064: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8003E068: lui         $s3, 0x302
    ctx->r19 = S32(0X302 << 16);
    // 0x8003E06C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8003E070: lui         $s2, 0x130B
    ctx->r18 = S32(0X130B << 16);
    // 0x8003E074: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8003E078: lui         $s1, 0x1B06
    ctx->r17 = S32(0X1B06 << 16);
    // 0x8003E07C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
L_8003E080:
    // 0x8003E080: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8003E084: lw          $v0, -0x14EC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X14EC);
    // 0x8003E088: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003E08C: lb          $v1, -0x3C18($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3C18);
    // 0x8003E090: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8003E094: sw          $v0, -0x6F9C($at)
    MEM_W(-0X6F9C, ctx->r1) = ctx->r2;
    // 0x8003E098: bne         $v1, $s6, L_8003E0D4
    if (ctx->r3 != ctx->r22) {
        // 0x8003E09C: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8003E0D4;
    }
    // 0x8003E09C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8003E0A0: lbu         $v1, 0x0($s5)
    ctx->r3 = MEM_BU(ctx->r21, 0X0);
    // 0x8003E0A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8003E0A8: beq         $v1, $v0, L_8003E0BC
    if (ctx->r3 == ctx->r2) {
        // 0x8003E0AC: addiu       $v0, $zero, 0x29
        ctx->r2 = ADD32(0, 0X29);
            goto L_8003E0BC;
    }
    // 0x8003E0AC: addiu       $v0, $zero, 0x29
    ctx->r2 = ADD32(0, 0X29);
    // 0x8003E0B0: lh          $v0, 0x5($s5)
    ctx->r2 = MEM_H(ctx->r21, 0X5);
    // 0x8003E0B4: beq         $v0, $zero, L_8003E0F4
    if (ctx->r2 == 0) {
        // 0x8003E0B8: addiu       $v0, $zero, 0x29
        ctx->r2 = ADD32(0, 0X29);
            goto L_8003E0F4;
    }
    // 0x8003E0B8: addiu       $v0, $zero, 0x29
    ctx->r2 = ADD32(0, 0X29);
L_8003E0BC:
    // 0x8003E0BC: beq         $s0, $v0, L_8003E154
    if (ctx->r16 == ctx->r2) {
        // 0x8003E0C0: nop
    
            goto L_8003E154;
    }
    // 0x8003E0C0: nop

    // 0x8003E0C4: jal         0x800596B8
    // 0x8003E0C8: nop

    func_800596B8_34AB8(rdram, ctx);
        goto after_0;
    // 0x8003E0C8: nop

    after_0:
    // 0x8003E0CC: j           L_8003E154
    // 0x8003E0D0: nop

        goto L_8003E154;
    // 0x8003E0D0: nop

L_8003E0D4:
    // 0x8003E0D4: bne         $v1, $v0, L_8003E0EC
    if (ctx->r3 != ctx->r2) {
        // 0x8003E0D8: nop
    
            goto L_8003E0EC;
    }
    // 0x8003E0D8: nop

    // 0x8003E0DC: jal         0x800572DC
    // 0x8003E0E0: nop

    func_800572DC_326DC(rdram, ctx);
        goto after_1;
    // 0x8003E0E0: nop

    after_1:
    // 0x8003E0E4: j           L_8003E154
    // 0x8003E0E8: nop

        goto L_8003E154;
    // 0x8003E0E8: nop

L_8003E0EC:
    // 0x8003E0EC: bne         $v1, $s6, L_8003E124
    if (ctx->r3 != ctx->r22) {
        // 0x8003E0F0: nop
    
            goto L_8003E124;
    }
    // 0x8003E0F0: nop

L_8003E0F4:
    // 0x8003E0F4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003E0F8: lw          $v0, -0x3BC8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3BC8);
    // 0x8003E0FC: and         $a0, $v0, $s4
    ctx->r4 = ctx->r2 & ctx->r20;
    // 0x8003E100: xor         $v1, $a0, $s3
    ctx->r3 = ctx->r4 ^ ctx->r19;
    // 0x8003E104: sltu        $v1, $zero, $v1
    ctx->r3 = 0 < ctx->r3 ? 1 : 0;
    // 0x8003E108: xor         $v0, $a0, $s2
    ctx->r2 = ctx->r4 ^ ctx->r18;
    // 0x8003E10C: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x8003E110: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8003E114: beq         $v1, $zero, L_8003E12C
    if (ctx->r3 == 0) {
        // 0x8003E118: nop
    
            goto L_8003E12C;
    }
    // 0x8003E118: nop

    // 0x8003E11C: beq         $a0, $s1, L_8003E12C
    if (ctx->r4 == ctx->r17) {
        // 0x8003E120: nop
    
            goto L_8003E12C;
    }
    // 0x8003E120: nop

L_8003E124:
    // 0x8003E124: jal         0x80048C7C
    // 0x8003E128: nop

    func_80048C7C_2407C(rdram, ctx);
        goto after_2;
    // 0x8003E128: nop

    after_2:
L_8003E12C:
    // 0x8003E12C: jal         0x8004A6B4
    // 0x8003E130: nop

    func_8004A6B4_25AB4(rdram, ctx);
        goto after_3;
    // 0x8003E130: nop

    after_3:
    // 0x8003E134: jal         0x8003912C
    // 0x8003E138: nop

    func_8003912C_1452C(rdram, ctx);
        goto after_4;
    // 0x8003E138: nop

    after_4:
    // 0x8003E13C: jal         0x80037F78
    // 0x8003E140: nop

    func_80037F78_13378(rdram, ctx);
        goto after_5;
    // 0x8003E140: nop

    after_5:
    // 0x8003E144: jal         0x8003A248
    // 0x8003E148: nop

    func_8003A248_15648(rdram, ctx);
        goto after_6;
    // 0x8003E148: nop

    after_6:
    // 0x8003E14C: jal         0x8003A7CC
    // 0x8003E150: nop

    func_8003A7CC_15BCC(rdram, ctx);
        goto after_7;
    // 0x8003E150: nop

    after_7:
L_8003E154:
    // 0x8003E154: jal         0x80029114
    // 0x8003E158: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80029114_4514(rdram, ctx);
        goto after_8;
    // 0x8003E158: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_8:
    // 0x8003E15C: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x8003E160: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8003E164: bne         $s0, $v0, L_8003E080
    if (ctx->r16 != ctx->r2) {
        // 0x8003E168: nop
    
            goto L_8003E080;
    }
    // 0x8003E168: nop

    // 0x8003E16C: jal         0x8005CBDC
    // 0x8003E170: nop

    func_8005CBDC_37FDC(rdram, ctx);
        goto after_9;
    // 0x8003E170: nop

    after_9:
    // 0x8003E174: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8003E178: addiu       $v1, $v1, 0x4A1E
    ctx->r3 = ADD32(ctx->r3, 0X4A1E);
    // 0x8003E17C: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    // 0x8003E180: bltzl       $v0, L_8003E188
    if (SIGNED(ctx->r2) < 0) {
        // 0x8003E184: sh          $zero, 0x0($v1)
        MEM_H(0X0, ctx->r3) = 0;
            goto L_8003E188;
    }
    goto skip_0;
    // 0x8003E184: sh          $zero, 0x0($v1)
    MEM_H(0X0, ctx->r3) = 0;
    skip_0:
L_8003E188:
    // 0x8003E188: jal         0x8002A488
    // 0x8003E18C: nop

    func_8002A488_5888(rdram, ctx);
        goto after_10;
    // 0x8003E18C: nop

    after_10:
    // 0x8003E190: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8003E194: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x8003E198: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x8003E19C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8003E1A0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8003E1A4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8003E1A8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8003E1AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8003E1B0: jr          $ra
    // 0x8003E1B4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8003E1B4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80032BB0_DFB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80032BB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80032BB4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80032BB8: lui         $s0, 0x8021
    ctx->r16 = S32(0X8021 << 16);
    // 0x80032BBC: addiu       $s0, $s0, -0x25D8
    ctx->r16 = ADD32(ctx->r16, -0X25D8);
    // 0x80032BC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80032BC4: jal         0x80032BE4
    // 0x80032BC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80032BE4_DFE4(rdram, ctx);
        goto after_0;
    // 0x80032BC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80032BCC: jal         0x80032BE4
    // 0x80032BD0: addiu       $a0, $s0, 0xB0
    ctx->r4 = ADD32(ctx->r16, 0XB0);
    func_80032BE4_DFE4(rdram, ctx);
        goto after_1;
    // 0x80032BD0: addiu       $a0, $s0, 0xB0
    ctx->r4 = ADD32(ctx->r16, 0XB0);
    after_1:
    // 0x80032BD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80032BD8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80032BDC: jr          $ra
    // 0x80032BE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80032BE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80029394_4794(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80029394: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80029398: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8002939C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x800293A0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x800293A4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x800293A8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x800293AC: jal         0x8009B900
    // 0x800293B0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    osGetThreadPri_recomp(rdram, ctx);
        goto after_0;
    // 0x800293B0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
    // 0x800293B4: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x800293B8: addiu       $v1, $v0, 0x36
    ctx->r3 = ADD32(ctx->r2, 0X36);
    // 0x800293BC: sltiu       $v0, $v1, 0x4
    ctx->r2 = ctx->r3 < 0X4 ? 1 : 0;
    // 0x800293C0: beq         $v0, $zero, L_800293E4
    if (ctx->r2 == 0) {
        // 0x800293C4: sll         $v0, $v1, 3
        ctx->r2 = S32(ctx->r3 << 3);
            goto L_800293E4;
    }
    // 0x800293C4: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x800293C8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x800293CC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x800293D0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800293D4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x800293D8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x800293DC: addiu       $v1, $v1, -0x46D0
    ctx->r3 = ADD32(ctx->r3, -0X46D0);
    // 0x800293E0: addu        $s0, $v0, $v1
    ctx->r16 = ADD32(ctx->r2, ctx->r3);
L_800293E4:
    // 0x800293E4: sw          $s1, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r17;
    // 0x800293E8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x800293EC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x800293F0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x800293F4: jr          $ra
    // 0x800293F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x800293F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800293FC: nop

;}
RECOMP_FUNC void func_8003059C_B99C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003059C: lui         $v1, 0x5555
    ctx->r3 = S32(0X5555 << 16);
    // 0x800305A0: ori         $v1, $v1, 0x5555
    ctx->r3 = ctx->r3 | 0X5555;
    // 0x800305A4: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x800305A8: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
    // 0x800305AC: addiu       $v0, $zero, 0x4C
    ctx->r2 = ADD32(0, 0X4C);
    // 0x800305B0: sb          $v0, 0x7($a0)
    MEM_B(0X7, ctx->r4) = ctx->r2;
    // 0x800305B4: jr          $ra
    // 0x800305B8: sw          $v1, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x800305B8: sw          $v1, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r3;
;}
RECOMP_FUNC void func_80046364_21764(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80046364: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80046368: lh          $v0, -0x35B8($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X35B8);
    // 0x8004636C: sltu        $v1, $zero, $v0
    ctx->r3 = 0 < ctx->r2 ? 1 : 0;
    // 0x80046370: beq         $v1, $zero, L_800463B8
    if (ctx->r3 == 0) {
        // 0x80046374: nop
    
            goto L_800463B8;
    }
    // 0x80046374: nop

    // 0x80046378: lh          $v0, 0x2($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X2);
    // 0x8004637C: blez        $v0, L_800463A0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80046380: nop
    
            goto L_800463A0;
    }
    // 0x80046380: nop

    // 0x80046384: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80046388: lbu         $v0, -0x7818($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7818);
    // 0x8004638C: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x80046390: beq         $v0, $zero, L_800463B8
    if (ctx->r2 == 0) {
        // 0x80046394: andi        $v1, $v1, 0x1
        ctx->r3 = ctx->r3 & 0X1;
            goto L_800463B8;
    }
    // 0x80046394: andi        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 & 0X1;
    // 0x80046398: j           L_800463B8
    // 0x8004639C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
        goto L_800463B8;
    // 0x8004639C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_800463A0:
    // 0x800463A0: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x800463A4: lbu         $v0, -0x7818($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7818);
    // 0x800463A8: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x800463AC: bnel        $v0, $zero, L_800463B8
    if (ctx->r2 != 0) {
        // 0x800463B0: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_800463B8;
    }
    goto skip_0;
    // 0x800463B0: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    skip_0:
    // 0x800463B4: andi        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 & 0X1;
L_800463B8:
    // 0x800463B8: jr          $ra
    // 0x800463BC: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    TRACE_RETURN()
    return;
    // 0x800463BC: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
;}
RECOMP_FUNC void func_8003F2DC_1A6DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003F2DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003F2E0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8003F2E4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8003F2E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003F2EC: jal         0x8004DA68
    // 0x8003F2F0: lbu         $a0, 0x1($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X1);
    func_8004DA68_28E68(rdram, ctx);
        goto after_0;
    // 0x8003F2F0: lbu         $a0, 0x1($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X1);
    after_0:
    // 0x8003F2F4: bne         $v0, $zero, L_8003F300
    if (ctx->r2 != 0) {
        // 0x8003F2F8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8003F300;
    }
    // 0x8003F2F8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8003F2FC: lh          $v0, 0x116($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X116);
L_8003F300:
    // 0x8003F300: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8003F304: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8003F308: lw          $a1, 0x78($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X78);
    // 0x8003F30C: lbu         $a3, 0x1($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X1);
    // 0x8003F310: subu        $a2, $a2, $v0
    ctx->r6 = SUB32(ctx->r6, ctx->r2);
    // 0x8003F314: addiu       $a2, $a2, 0x200
    ctx->r6 = ADD32(ctx->r6, 0X200);
    // 0x8003F318: sra         $a2, $a2, 10
    ctx->r6 = S32(SIGNED(ctx->r6) >> 10);
    // 0x8003F31C: jal         0x8003F334
    // 0x8003F320: andi        $a2, $a2, 0x3
    ctx->r6 = ctx->r6 & 0X3;
    func_8003F334_1A734(rdram, ctx);
        goto after_1;
    // 0x8003F320: andi        $a2, $a2, 0x3
    ctx->r6 = ctx->r6 & 0X3;
    after_1:
    // 0x8003F324: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003F328: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8003F32C: jr          $ra
    // 0x8003F330: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8003F330: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void alInit(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80098BD0: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80098BD4: lw          $v0, -0xAD0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XAD0);
    // 0x80098BD8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80098BDC: bne         $v0, $zero, L_80098BF0
    if (ctx->r2 != 0) {
        // 0x80098BE0: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_80098BF0;
    }
    // 0x80098BE0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80098BE4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80098BE8: jal         0x80098D50
    // 0x80098BEC: sw          $a0, -0xAD0($at)
    MEM_W(-0XAD0, ctx->r1) = ctx->r4;
    alSynNew(rdram, ctx);
        goto after_0;
    // 0x80098BEC: sw          $a0, -0xAD0($at)
    MEM_W(-0XAD0, ctx->r1) = ctx->r4;
    after_0:
L_80098BF0:
    // 0x80098BF0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80098BF4: jr          $ra
    // 0x80098BF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80098BF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
