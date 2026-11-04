#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void alHeapDBAlloc(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80098CC0: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x80098CC4: mult        $a3, $v0
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80098CC8: mflo        $a3
    ctx->r7 = lo;
    // 0x80098CCC: lw          $v1, 0x8($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X8);
    // 0x80098CD0: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x80098CD4: addiu       $a0, $zero, -0x10
    ctx->r4 = ADD32(0, -0X10);
    // 0x80098CD8: lw          $a1, 0x4($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X4);
    // 0x80098CDC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80098CE0: addiu       $a3, $a3, 0xF
    ctx->r7 = ADD32(ctx->r7, 0XF);
    // 0x80098CE4: and         $a3, $a3, $a0
    ctx->r7 = ctx->r7 & ctx->r4;
    // 0x80098CE8: addu        $a0, $a1, $a3
    ctx->r4 = ADD32(ctx->r5, ctx->r7);
    // 0x80098CEC: sltu        $v0, $v0, $a0
    ctx->r2 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x80098CF0: bne         $v0, $zero, L_80098D00
    if (ctx->r2 != 0) {
        // 0x80098CF4: addu        $t0, $zero, $zero
        ctx->r8 = ADD32(0, 0);
            goto L_80098D00;
    }
    // 0x80098CF4: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x80098CF8: addu        $t0, $a1, $zero
    ctx->r8 = ADD32(ctx->r5, 0);
    // 0x80098CFC: sw          $a0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r4;
L_80098D00:
    // 0x80098D00: jr          $ra
    // 0x80098D04: addu        $v0, $t0, $zero
    ctx->r2 = ADD32(ctx->r8, 0);
    TRACE_RETURN()
    return;
    // 0x80098D04: addu        $v0, $t0, $zero
    ctx->r2 = ADD32(ctx->r8, 0);
;}
RECOMP_FUNC void func_80073A18_4EE18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80073A18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80073A1C: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80073A20: addiu       $a0, $a0, -0x3C18
    ctx->r4 = ADD32(ctx->r4, -0X3C18);
    // 0x80073A24: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80073A28: jal         0x80072E10
    // 0x80073A2C: nop

    func_80072E10_4E210(rdram, ctx);
        goto after_0;
    // 0x80073A2C: nop

    after_0:
    // 0x80073A30: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80073A34: lbu         $v0, -0x35A8($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X35A8);
    // 0x80073A38: addiu       $v1, $v0, -0x3
    ctx->r3 = ADD32(ctx->r2, -0X3);
    // 0x80073A3C: sltiu       $v0, $v1, 0x18
    ctx->r2 = ctx->r3 < 0X18 ? 1 : 0;
    // 0x80073A40: beq         $v0, $zero, L_80073B9C
    if (ctx->r2 == 0) {
        // 0x80073A44: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80073B9C;
    }
    // 0x80073A44: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80073A48: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80073A4C: addu        $at, $at, $v0
    gpr jr_addend_80073A54 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80073A50: lw          $v0, 0x2A60($at)
    ctx->r2 = ADD32(ctx->r1, 0X2A60);
    // 0x80073A54: jr          $v0
    // 0x80073A58: nop

    switch (jr_addend_80073A54 >> 2) {
        case 0: goto L_80073A5C; break;
        case 1: goto L_80073B9C; break;
        case 2: goto L_80073A78; break;
        case 3: goto L_80073AA4; break;
        case 4: goto L_80073B9C; break;
        case 5: goto L_80073B9C; break;
        case 6: goto L_80073B9C; break;
        case 7: goto L_80073AD0; break;
        case 8: goto L_80073AEC; break;
        case 9: goto L_80073B18; break;
        case 10: goto L_80073B9C; break;
        case 11: goto L_80073B9C; break;
        case 12: goto L_80073B9C; break;
        case 13: goto L_80073B9C; break;
        case 14: goto L_80073B9C; break;
        case 15: goto L_80073B9C; break;
        case 16: goto L_80073B20; break;
        case 17: goto L_80073B9C; break;
        case 18: goto L_80073B9C; break;
        case 19: goto L_80073B9C; break;
        case 20: goto L_80073B3C; break;
        case 21: goto L_80073B9C; break;
        case 22: goto L_80073B44; break;
        case 23: goto L_80073B60; break;
        default: switch_error(__func__, 0x80073A54, 0x800D2A60);
    }
    // 0x80073A58: nop

L_80073A5C:
    // 0x80073A5C: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80073A60: lbu         $v1, -0x35A7($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X35A7);
    // 0x80073A64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80073A68: bne         $v1, $v0, L_80073B9C
    if (ctx->r3 != ctx->r2) {
        // 0x80073A6C: addiu       $a0, $zero, 0x1C
        ctx->r4 = ADD32(0, 0X1C);
            goto L_80073B9C;
    }
    // 0x80073A6C: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    // 0x80073A70: j           L_80073B94
    // 0x80073A74: nop

        goto L_80073B94;
    // 0x80073A74: nop

L_80073A78:
    // 0x80073A78: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80073A7C: lbu         $v1, -0x35A7($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X35A7);
    // 0x80073A80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80073A84: bne         $v1, $v0, L_80073A94
    if (ctx->r3 != ctx->r2) {
        // 0x80073A88: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80073A94;
    }
    // 0x80073A88: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80073A8C: j           L_80073B94
    // 0x80073A90: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_80073B94;
    // 0x80073A90: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_80073A94:
    // 0x80073A94: bne         $v1, $v0, L_80073B9C
    if (ctx->r3 != ctx->r2) {
        // 0x80073A98: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_80073B9C;
    }
    // 0x80073A98: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80073A9C: j           L_80073B94
    // 0x80073AA0: nop

        goto L_80073B94;
    // 0x80073AA0: nop

L_80073AA4:
    // 0x80073AA4: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80073AA8: lbu         $v0, -0x35A7($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X35A7);
    // 0x80073AAC: xori        $v1, $v0, 0x3
    ctx->r3 = ctx->r2 ^ 0X3;
    // 0x80073AB0: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80073AB4: xori        $v0, $v0, 0xA
    ctx->r2 = ctx->r2 ^ 0XA;
    // 0x80073AB8: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80073ABC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80073AC0: beq         $v1, $zero, L_80073B9C
    if (ctx->r3 == 0) {
        // 0x80073AC4: addiu       $a0, $zero, 0x1F
        ctx->r4 = ADD32(0, 0X1F);
            goto L_80073B9C;
    }
    // 0x80073AC4: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    // 0x80073AC8: j           L_80073B94
    // 0x80073ACC: nop

        goto L_80073B94;
    // 0x80073ACC: nop

L_80073AD0:
    // 0x80073AD0: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80073AD4: lbu         $v1, -0x35A7($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X35A7);
    // 0x80073AD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80073ADC: bne         $v1, $v0, L_80073B9C
    if (ctx->r3 != ctx->r2) {
        // 0x80073AE0: addiu       $a0, $zero, 0x3
        ctx->r4 = ADD32(0, 0X3);
            goto L_80073B9C;
    }
    // 0x80073AE0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x80073AE4: j           L_80073B94
    // 0x80073AE8: nop

        goto L_80073B94;
    // 0x80073AE8: nop

L_80073AEC:
    // 0x80073AEC: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80073AF0: lbu         $v0, -0x35A7($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X35A7);
    // 0x80073AF4: xori        $v1, $v0, 0x1
    ctx->r3 = ctx->r2 ^ 0X1;
    // 0x80073AF8: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80073AFC: xori        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 ^ 0X3;
    // 0x80073B00: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80073B04: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80073B08: beq         $v1, $zero, L_80073B9C
    if (ctx->r3 == 0) {
        // 0x80073B0C: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_80073B9C;
    }
    // 0x80073B0C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80073B10: j           L_80073B94
    // 0x80073B14: nop

        goto L_80073B94;
    // 0x80073B14: nop

L_80073B18:
    // 0x80073B18: j           L_80073B94
    // 0x80073B1C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
        goto L_80073B94;
    // 0x80073B1C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
L_80073B20:
    // 0x80073B20: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80073B24: lbu         $v1, -0x35A7($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X35A7);
    // 0x80073B28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80073B2C: bne         $v1, $v0, L_80073B9C
    if (ctx->r3 != ctx->r2) {
        // 0x80073B30: addiu       $a0, $zero, 0x6
        ctx->r4 = ADD32(0, 0X6);
            goto L_80073B9C;
    }
    // 0x80073B30: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x80073B34: j           L_80073B94
    // 0x80073B38: nop

        goto L_80073B94;
    // 0x80073B38: nop

L_80073B3C:
    // 0x80073B3C: j           L_80073B94
    // 0x80073B40: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
        goto L_80073B94;
    // 0x80073B40: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
L_80073B44:
    // 0x80073B44: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80073B48: lbu         $v1, -0x35A7($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X35A7);
    // 0x80073B4C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80073B50: bne         $v1, $v0, L_80073B9C
    if (ctx->r3 != ctx->r2) {
        // 0x80073B54: addiu       $a0, $zero, 0x8
        ctx->r4 = ADD32(0, 0X8);
            goto L_80073B9C;
    }
    // 0x80073B54: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x80073B58: j           L_80073B94
    // 0x80073B5C: nop

        goto L_80073B94;
    // 0x80073B5C: nop

L_80073B60:
    // 0x80073B60: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80073B64: lbu         $v1, -0x35A7($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X35A7);
    // 0x80073B68: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80073B6C: bne         $v1, $v0, L_80073B7C
    if (ctx->r3 != ctx->r2) {
        // 0x80073B70: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_80073B7C;
    }
    // 0x80073B70: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80073B74: j           L_80073B94
    // 0x80073B78: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
        goto L_80073B94;
    // 0x80073B78: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
L_80073B7C:
    // 0x80073B7C: bne         $v1, $v0, L_80073B8C
    if (ctx->r3 != ctx->r2) {
        // 0x80073B80: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_80073B8C;
    }
    // 0x80073B80: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80073B84: j           L_80073B94
    // 0x80073B88: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
        goto L_80073B94;
    // 0x80073B88: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
L_80073B8C:
    // 0x80073B8C: bne         $v1, $v0, L_80073B9C
    if (ctx->r3 != ctx->r2) {
        // 0x80073B90: addiu       $a0, $zero, 0xC
        ctx->r4 = ADD32(0, 0XC);
            goto L_80073B9C;
    }
    // 0x80073B90: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
L_80073B94:
    // 0x80073B94: jal         0x8021D9D0
    // 0x80073B98: nop

    func_8021D9D0(rdram, ctx);
        goto after_1;
    // 0x80073B98: nop

    after_1:
L_80073B9C:
    // 0x80073B9C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80073BA0: jr          $ra
    // 0x80073BA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80073BA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80037D68_13168(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80037D68: jr          $ra
    // 0x80037D6C: nop

    TRACE_RETURN()
    return;
    // 0x80037D6C: nop

;}
RECOMP_FUNC void func_800743A8_4F7A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800743A8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800743AC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x800743B0: lui         $s1, 0x8019
    ctx->r17 = S32(0X8019 << 16);
    // 0x800743B4: addiu       $s1, $s1, 0x3C70
    ctx->r17 = ADD32(ctx->r17, 0X3C70);
    // 0x800743B8: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x800743BC: jal         0x800A3450
    // 0x800743C0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x800743C0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    after_0:
    // 0x800743C4: jal         0x800A3450
    // 0x800743C8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x800743C8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_1:
    // 0x800743CC: sll         $s0, $s0, 16
    ctx->r16 = S32(ctx->r16 << 16);
    // 0x800743D0: or          $s0, $s0, $v0
    ctx->r16 = ctx->r16 | ctx->r2;
    // 0x800743D4: lui         $at, 0x8019
    ctx->r1 = S32(0X8019 << 16);
    // 0x800743D8: jal         0x800A3450
    // 0x800743DC: sw          $s0, 0x3CE0($at)
    MEM_W(0X3CE0, ctx->r1) = ctx->r16;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x800743DC: sw          $s0, 0x3CE0($at)
    MEM_W(0X3CE0, ctx->r1) = ctx->r16;
    after_2:
    // 0x800743E0: jal         0x800A3450
    // 0x800743E4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x800743E4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_3:
    // 0x800743E8: sll         $s0, $s0, 16
    ctx->r16 = S32(ctx->r16 << 16);
    // 0x800743EC: or          $s0, $s0, $v0
    ctx->r16 = ctx->r16 | ctx->r2;
    // 0x800743F0: lui         $at, 0x8019
    ctx->r1 = S32(0X8019 << 16);
    // 0x800743F4: jal         0x800A3450
    // 0x800743F8: sw          $s0, 0x3D20($at)
    MEM_W(0X3D20, ctx->r1) = ctx->r16;
    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x800743F8: sw          $s0, 0x3D20($at)
    MEM_W(0X3D20, ctx->r1) = ctx->r16;
    after_4:
    // 0x800743FC: jal         0x800A3450
    // 0x80074400: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_800A3450_7E850(rdram, ctx);
        goto after_5;
    // 0x80074400: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_5:
    // 0x80074404: sll         $s0, $s0, 16
    ctx->r16 = S32(ctx->r16 << 16);
    // 0x80074408: or          $s0, $s0, $v0
    ctx->r16 = ctx->r16 | ctx->r2;
    // 0x8007440C: lui         $at, 0x8019
    ctx->r1 = S32(0X8019 << 16);
    // 0x80074410: jal         0x800A3450
    // 0x80074414: sw          $s0, 0x3D60($at)
    MEM_W(0X3D60, ctx->r1) = ctx->r16;
    func_800A3450_7E850(rdram, ctx);
        goto after_6;
    // 0x80074414: sw          $s0, 0x3D60($at)
    MEM_W(0X3D60, ctx->r1) = ctx->r16;
    after_6:
    // 0x80074418: jal         0x800A3450
    // 0x8007441C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_800A3450_7E850(rdram, ctx);
        goto after_7;
    // 0x8007441C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_7:
    // 0x80074420: sll         $s0, $s0, 16
    ctx->r16 = S32(ctx->r16 << 16);
    // 0x80074424: or          $s0, $s0, $v0
    ctx->r16 = ctx->r16 | ctx->r2;
    // 0x80074428: lui         $at, 0x8019
    ctx->r1 = S32(0X8019 << 16);
    // 0x8007442C: jal         0x800A3450
    // 0x80074430: sw          $s0, 0x3EE0($at)
    MEM_W(0X3EE0, ctx->r1) = ctx->r16;
    func_800A3450_7E850(rdram, ctx);
        goto after_8;
    // 0x80074430: sw          $s0, 0x3EE0($at)
    MEM_W(0X3EE0, ctx->r1) = ctx->r16;
    after_8:
    // 0x80074434: jal         0x800A3450
    // 0x80074438: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_800A3450_7E850(rdram, ctx);
        goto after_9;
    // 0x80074438: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_9:
    // 0x8007443C: sll         $s0, $s0, 16
    ctx->r16 = S32(ctx->r16 << 16);
    // 0x80074440: or          $s0, $s0, $v0
    ctx->r16 = ctx->r16 | ctx->r2;
    // 0x80074444: lui         $at, 0x8019
    ctx->r1 = S32(0X8019 << 16);
    // 0x80074448: jal         0x800A3450
    // 0x8007444C: sw          $s0, 0x52A0($at)
    MEM_W(0X52A0, ctx->r1) = ctx->r16;
    func_800A3450_7E850(rdram, ctx);
        goto after_10;
    // 0x8007444C: sw          $s0, 0x52A0($at)
    MEM_W(0X52A0, ctx->r1) = ctx->r16;
    after_10:
    // 0x80074450: jal         0x800A3450
    // 0x80074454: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_800A3450_7E850(rdram, ctx);
        goto after_11;
    // 0x80074454: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_11:
    // 0x80074458: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x8007445C: addiu       $v1, $sp, 0x10
    ctx->r3 = ADD32(ctx->r29, 0X10);
    // 0x80074460: sll         $s0, $s0, 16
    ctx->r16 = S32(ctx->r16 << 16);
    // 0x80074464: or          $s0, $s0, $v0
    ctx->r16 = ctx->r16 | ctx->r2;
    // 0x80074468: lui         $at, 0x8019
    ctx->r1 = S32(0X8019 << 16);
    // 0x8007446C: sw          $s0, 0x5450($at)
    MEM_W(0X5450, ctx->r1) = ctx->r16;
L_80074470:
    // 0x80074470: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x80074474: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80074478: sltiu       $v0, $t0, 0x3
    ctx->r2 = ctx->r8 < 0X3 ? 1 : 0;
    // 0x8007447C: bne         $v0, $zero, L_80074470
    if (ctx->r2 != 0) {
        // 0x80074480: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_80074470;
    }
    // 0x80074480: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80074484: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x80074488: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
L_8007448C:
    // 0x8007448C: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x80074490: lw          $a0, 0x10($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X10);
    // 0x80074494: sll         $v1, $a1, 16
    ctx->r3 = S32(ctx->r5 << 16);
    // 0x80074498: srl         $v0, $a1, 16
    ctx->r2 = S32(U32(ctx->r5) >> 16);
    // 0x8007449C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x800744A0: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x800744A4: andi        $v0, $t0, 0x1
    ctx->r2 = ctx->r8 & 0X1;
    // 0x800744A8: beq         $v0, $zero, L_800744CC
    if (ctx->r2 == 0) {
        // 0x800744AC: sw          $a0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r4;
            goto L_800744CC;
    }
    // 0x800744AC: sw          $a0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r4;
    // 0x800744B0: lw          $v0, 0x70($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X70);
    // 0x800744B4: lw          $v1, 0x14($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X14);
    // 0x800744B8: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x800744BC: xor         $v0, $a1, $v0
    ctx->r2 = ctx->r5 ^ ctx->r2;
    // 0x800744C0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x800744C4: j           L_800744E4
    // 0x800744C8: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
        goto L_800744E4;
    // 0x800744C8: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
L_800744CC:
    // 0x800744CC: lw          $v0, 0x70($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X70);
    // 0x800744D0: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x800744D4: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x800744D8: xor         $v0, $a1, $v0
    ctx->r2 = ctx->r5 ^ ctx->r2;
    // 0x800744DC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x800744E0: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
L_800744E4:
    // 0x800744E4: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x800744E8: sltiu       $v0, $t0, 0x8
    ctx->r2 = ctx->r8 < 0X8 ? 1 : 0;
    // 0x800744EC: bne         $v0, $zero, L_8007448C
    if (ctx->r2 != 0) {
        // 0x800744F0: addiu       $a2, $a2, 0x4
        ctx->r6 = ADD32(ctx->r6, 0X4);
            goto L_8007448C;
    }
    // 0x800744F0: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x800744F4: lui         $a2, 0xE1E1
    ctx->r6 = S32(0XE1E1 << 16);
    // 0x800744F8: ori         $a2, $a2, 0xE1E1
    ctx->r6 = ctx->r6 | 0XE1E1;
    // 0x800744FC: lui         $a3, 0x5757
    ctx->r7 = S32(0X5757 << 16);
    // 0x80074500: ori         $a3, $a3, 0x5757
    ctx->r7 = ctx->r7 | 0X5757;
    // 0x80074504: lw          $v0, 0x70($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X70);
    // 0x80074508: lw          $v1, 0x10($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X10);
    // 0x8007450C: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x80074510: addiu       $t1, $sp, 0x10
    ctx->r9 = ADD32(ctx->r29, 0X10);
    // 0x80074514: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80074518: sw          $v0, 0x74($s1)
    MEM_W(0X74, ctx->r17) = ctx->r2;
    // 0x8007451C: lw          $v0, 0x70($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X70);
    // 0x80074520: lw          $a0, 0x14($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X14);
    // 0x80074524: lw          $v1, 0x70($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X70);
    // 0x80074528: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8007452C: xor         $v0, $v0, $a2
    ctx->r2 = ctx->r2 ^ ctx->r6;
    // 0x80074530: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80074534: xor         $v1, $v1, $a3
    ctx->r3 = ctx->r3 ^ ctx->r7;
    // 0x80074538: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8007453C: sw          $v0, 0x78($s1)
    MEM_W(0X78, ctx->r17) = ctx->r2;
    // 0x80074540: sw          $v1, 0x7C($s1)
    MEM_W(0X7C, ctx->r17) = ctx->r3;
L_80074544:
    // 0x80074544: sw          $zero, 0x0($t1)
    MEM_W(0X0, ctx->r9) = 0;
    // 0x80074548: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8007454C: sltiu       $v0, $t0, 0x3
    ctx->r2 = ctx->r8 < 0X3 ? 1 : 0;
    // 0x80074550: bne         $v0, $zero, L_80074544
    if (ctx->r2 != 0) {
        // 0x80074554: addiu       $t1, $t1, 0x4
        ctx->r9 = ADD32(ctx->r9, 0X4);
            goto L_80074544;
    }
    // 0x80074554: addiu       $t1, $t1, 0x4
    ctx->r9 = ADD32(ctx->r9, 0X4);
    // 0x80074558: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x8007455C: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
L_80074560:
    // 0x80074560: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x80074564: lw          $a0, 0x10($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X10);
    // 0x80074568: sll         $v1, $a1, 16
    ctx->r3 = S32(ctx->r5 << 16);
    // 0x8007456C: srl         $v0, $a1, 16
    ctx->r2 = S32(U32(ctx->r5) >> 16);
    // 0x80074570: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80074574: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x80074578: andi        $v0, $t0, 0x1
    ctx->r2 = ctx->r8 & 0X1;
    // 0x8007457C: beq         $v0, $zero, L_800745A0
    if (ctx->r2 == 0) {
        // 0x80074580: sw          $a0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r4;
            goto L_800745A0;
    }
    // 0x80074580: sw          $a0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r4;
    // 0x80074584: lw          $v0, 0xB0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XB0);
    // 0x80074588: lw          $v1, 0x14($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X14);
    // 0x8007458C: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x80074590: xor         $v0, $a1, $v0
    ctx->r2 = ctx->r5 ^ ctx->r2;
    // 0x80074594: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80074598: j           L_800745B8
    // 0x8007459C: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
        goto L_800745B8;
    // 0x8007459C: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
L_800745A0:
    // 0x800745A0: lw          $v0, 0xB0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XB0);
    // 0x800745A4: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x800745A8: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x800745AC: xor         $v0, $a1, $v0
    ctx->r2 = ctx->r5 ^ ctx->r2;
    // 0x800745B0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x800745B4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
L_800745B8:
    // 0x800745B8: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x800745BC: sltiu       $v0, $t0, 0x8
    ctx->r2 = ctx->r8 < 0X8 ? 1 : 0;
    // 0x800745C0: bne         $v0, $zero, L_80074560
    if (ctx->r2 != 0) {
        // 0x800745C4: addiu       $a2, $a2, 0x4
        ctx->r6 = ADD32(ctx->r6, 0X4);
            goto L_80074560;
    }
    // 0x800745C4: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x800745C8: lui         $a2, 0x3333
    ctx->r6 = S32(0X3333 << 16);
    // 0x800745CC: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x800745D0: lui         $a3, 0xCCCC
    ctx->r7 = S32(0XCCCC << 16);
    // 0x800745D4: ori         $a3, $a3, 0xCCCC
    ctx->r7 = ctx->r7 | 0XCCCC;
    // 0x800745D8: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x800745DC: lw          $v0, 0xB0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XB0);
    // 0x800745E0: lw          $v1, 0x10($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X10);
    // 0x800745E4: addiu       $t1, $sp, 0x10
    ctx->r9 = ADD32(ctx->r29, 0X10);
    // 0x800745E8: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
    // 0x800745EC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800745F0: sw          $v0, 0xB4($s1)
    MEM_W(0XB4, ctx->r17) = ctx->r2;
    // 0x800745F4: lw          $v0, 0xB0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XB0);
    // 0x800745F8: lw          $a0, 0x14($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X14);
    // 0x800745FC: lw          $v1, 0xB0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XB0);
    // 0x80074600: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80074604: xor         $v0, $v0, $a2
    ctx->r2 = ctx->r2 ^ ctx->r6;
    // 0x80074608: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8007460C: xor         $v1, $v1, $a3
    ctx->r3 = ctx->r3 ^ ctx->r7;
    // 0x80074610: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80074614: sw          $v0, 0xB8($s1)
    MEM_W(0XB8, ctx->r17) = ctx->r2;
    // 0x80074618: sw          $v1, 0xBC($s1)
    MEM_W(0XBC, ctx->r17) = ctx->r3;
L_8007461C:
    // 0x8007461C: sw          $zero, 0x0($t1)
    MEM_W(0X0, ctx->r9) = 0;
    // 0x80074620: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80074624: sltiu       $v0, $t0, 0x3
    ctx->r2 = ctx->r8 < 0X3 ? 1 : 0;
    // 0x80074628: bne         $v0, $zero, L_8007461C
    if (ctx->r2 != 0) {
        // 0x8007462C: addiu       $t1, $t1, 0x4
        ctx->r9 = ADD32(ctx->r9, 0X4);
            goto L_8007461C;
    }
    // 0x8007462C: addiu       $t1, $t1, 0x4
    ctx->r9 = ADD32(ctx->r9, 0X4);
    // 0x80074630: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x80074634: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
L_80074638:
    // 0x80074638: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x8007463C: lw          $a0, 0x10($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X10);
    // 0x80074640: sll         $v1, $a1, 16
    ctx->r3 = S32(ctx->r5 << 16);
    // 0x80074644: srl         $v0, $a1, 16
    ctx->r2 = S32(U32(ctx->r5) >> 16);
    // 0x80074648: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8007464C: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x80074650: andi        $v0, $t0, 0x1
    ctx->r2 = ctx->r8 & 0X1;
    // 0x80074654: beq         $v0, $zero, L_80074678
    if (ctx->r2 == 0) {
        // 0x80074658: sw          $a0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r4;
            goto L_80074678;
    }
    // 0x80074658: sw          $a0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r4;
    // 0x8007465C: lw          $v0, 0xF0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XF0);
    // 0x80074660: lw          $v1, 0x14($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X14);
    // 0x80074664: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x80074668: xor         $v0, $a1, $v0
    ctx->r2 = ctx->r5 ^ ctx->r2;
    // 0x8007466C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80074670: j           L_80074690
    // 0x80074674: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
        goto L_80074690;
    // 0x80074674: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
L_80074678:
    // 0x80074678: lw          $v0, 0xF0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XF0);
    // 0x8007467C: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x80074680: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x80074684: xor         $v0, $a1, $v0
    ctx->r2 = ctx->r5 ^ ctx->r2;
    // 0x80074688: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8007468C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
L_80074690:
    // 0x80074690: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80074694: sltiu       $v0, $t0, 0x8
    ctx->r2 = ctx->r8 < 0X8 ? 1 : 0;
    // 0x80074698: bne         $v0, $zero, L_80074638
    if (ctx->r2 != 0) {
        // 0x8007469C: addiu       $a2, $a2, 0x4
        ctx->r6 = ADD32(ctx->r6, 0X4);
            goto L_80074638;
    }
    // 0x8007469C: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x800746A0: lui         $a0, 0x6969
    ctx->r4 = S32(0X6969 << 16);
    // 0x800746A4: ori         $a0, $a0, 0x6969
    ctx->r4 = ctx->r4 | 0X6969;
    // 0x800746A8: lui         $a2, 0x2B2B
    ctx->r6 = S32(0X2B2B << 16);
    // 0x800746AC: ori         $a2, $a2, 0x2B2B
    ctx->r6 = ctx->r6 | 0X2B2B;
    // 0x800746B0: lui         $a3, 0xB8B8
    ctx->r7 = S32(0XB8B8 << 16);
    // 0x800746B4: ori         $a3, $a3, 0xB8B8
    ctx->r7 = ctx->r7 | 0XB8B8;
    // 0x800746B8: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x800746BC: lw          $v0, 0xF0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XF0);
    // 0x800746C0: lw          $v1, 0x10($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X10);
    // 0x800746C4: addiu       $t1, $sp, 0x10
    ctx->r9 = ADD32(ctx->r29, 0X10);
    // 0x800746C8: xor         $v0, $v0, $a0
    ctx->r2 = ctx->r2 ^ ctx->r4;
    // 0x800746CC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800746D0: sw          $v0, 0xF4($s1)
    MEM_W(0XF4, ctx->r17) = ctx->r2;
    // 0x800746D4: lw          $v0, 0xF0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XF0);
    // 0x800746D8: lw          $a0, 0x14($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X14);
    // 0x800746DC: lw          $v1, 0xF0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XF0);
    // 0x800746E0: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x800746E4: xor         $v0, $v0, $a2
    ctx->r2 = ctx->r2 ^ ctx->r6;
    // 0x800746E8: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x800746EC: xor         $v1, $v1, $a3
    ctx->r3 = ctx->r3 ^ ctx->r7;
    // 0x800746F0: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x800746F4: sw          $v0, 0xF8($s1)
    MEM_W(0XF8, ctx->r17) = ctx->r2;
    // 0x800746F8: sw          $v1, 0xFC($s1)
    MEM_W(0XFC, ctx->r17) = ctx->r3;
L_800746FC:
    // 0x800746FC: sw          $zero, 0x0($t1)
    MEM_W(0X0, ctx->r9) = 0;
    // 0x80074700: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80074704: sltiu       $v0, $t0, 0x3
    ctx->r2 = ctx->r8 < 0X3 ? 1 : 0;
    // 0x80074708: bne         $v0, $zero, L_800746FC
    if (ctx->r2 != 0) {
        // 0x8007470C: addiu       $t1, $t1, 0x4
        ctx->r9 = ADD32(ctx->r9, 0X4);
            goto L_800746FC;
    }
    // 0x8007470C: addiu       $t1, $t1, 0x4
    ctx->r9 = ADD32(ctx->r9, 0X4);
    // 0x80074710: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x80074714: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
L_80074718:
    // 0x80074718: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x8007471C: lw          $a0, 0x10($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X10);
    // 0x80074720: sll         $v1, $a1, 16
    ctx->r3 = S32(ctx->r5 << 16);
    // 0x80074724: srl         $v0, $a1, 16
    ctx->r2 = S32(U32(ctx->r5) >> 16);
    // 0x80074728: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8007472C: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x80074730: andi        $v0, $t0, 0x1
    ctx->r2 = ctx->r8 & 0X1;
    // 0x80074734: beq         $v0, $zero, L_80074758
    if (ctx->r2 == 0) {
        // 0x80074738: sw          $a0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r4;
            goto L_80074758;
    }
    // 0x80074738: sw          $a0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r4;
    // 0x8007473C: lw          $v0, 0x270($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X270);
    // 0x80074740: lw          $v1, 0x14($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X14);
    // 0x80074744: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x80074748: xor         $v0, $a1, $v0
    ctx->r2 = ctx->r5 ^ ctx->r2;
    // 0x8007474C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80074750: j           L_80074770
    // 0x80074754: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
        goto L_80074770;
    // 0x80074754: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
L_80074758:
    // 0x80074758: lw          $v0, 0x270($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X270);
    // 0x8007475C: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x80074760: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x80074764: xor         $v0, $a1, $v0
    ctx->r2 = ctx->r5 ^ ctx->r2;
    // 0x80074768: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8007476C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
L_80074770:
    // 0x80074770: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80074774: sltiu       $v0, $t0, 0x8
    ctx->r2 = ctx->r8 < 0X8 ? 1 : 0;
    // 0x80074778: bne         $v0, $zero, L_80074718
    if (ctx->r2 != 0) {
        // 0x8007477C: addiu       $a2, $a2, 0x4
        ctx->r6 = ADD32(ctx->r6, 0X4);
            goto L_80074718;
    }
    // 0x8007477C: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x80074780: lui         $a2, 0x1E1E
    ctx->r6 = S32(0X1E1E << 16);
    // 0x80074784: ori         $a2, $a2, 0x1E1E
    ctx->r6 = ctx->r6 | 0X1E1E;
    // 0x80074788: lui         $a3, 0x7575
    ctx->r7 = S32(0X7575 << 16);
    // 0x8007478C: ori         $a3, $a3, 0x7575
    ctx->r7 = ctx->r7 | 0X7575;
    // 0x80074790: lw          $v0, 0x270($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X270);
    // 0x80074794: lw          $v1, 0x10($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X10);
    // 0x80074798: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x8007479C: addiu       $t1, $sp, 0x10
    ctx->r9 = ADD32(ctx->r29, 0X10);
    // 0x800747A0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800747A4: sw          $v0, 0x274($s1)
    MEM_W(0X274, ctx->r17) = ctx->r2;
    // 0x800747A8: lw          $v0, 0x270($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X270);
    // 0x800747AC: lw          $a0, 0x14($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X14);
    // 0x800747B0: lw          $v1, 0x270($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X270);
    // 0x800747B4: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x800747B8: xor         $v0, $v0, $a2
    ctx->r2 = ctx->r2 ^ ctx->r6;
    // 0x800747BC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x800747C0: xor         $v1, $v1, $a3
    ctx->r3 = ctx->r3 ^ ctx->r7;
    // 0x800747C4: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x800747C8: sw          $v0, 0x278($s1)
    MEM_W(0X278, ctx->r17) = ctx->r2;
    // 0x800747CC: sw          $v1, 0x27C($s1)
    MEM_W(0X27C, ctx->r17) = ctx->r3;
L_800747D0:
    // 0x800747D0: sw          $zero, 0x0($t1)
    MEM_W(0X0, ctx->r9) = 0;
    // 0x800747D4: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x800747D8: sltiu       $v0, $t0, 0x3
    ctx->r2 = ctx->r8 < 0X3 ? 1 : 0;
    // 0x800747DC: bne         $v0, $zero, L_800747D0
    if (ctx->r2 != 0) {
        // 0x800747E0: addiu       $t1, $t1, 0x4
        ctx->r9 = ADD32(ctx->r9, 0X4);
            goto L_800747D0;
    }
    // 0x800747E0: addiu       $t1, $t1, 0x4
    ctx->r9 = ADD32(ctx->r9, 0X4);
    // 0x800747E4: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x800747E8: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
L_800747EC:
    // 0x800747EC: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x800747F0: lw          $a0, 0x10($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X10);
    // 0x800747F4: sll         $v1, $a1, 16
    ctx->r3 = S32(ctx->r5 << 16);
    // 0x800747F8: srl         $v0, $a1, 16
    ctx->r2 = S32(U32(ctx->r5) >> 16);
    // 0x800747FC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80074800: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x80074804: andi        $v0, $t0, 0x1
    ctx->r2 = ctx->r8 & 0X1;
    // 0x80074808: beq         $v0, $zero, L_8007482C
    if (ctx->r2 == 0) {
        // 0x8007480C: sw          $a0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r4;
            goto L_8007482C;
    }
    // 0x8007480C: sw          $a0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r4;
    // 0x80074810: lw          $v0, 0x1630($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1630);
    // 0x80074814: lw          $v1, 0x14($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X14);
    // 0x80074818: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x8007481C: xor         $v0, $a1, $v0
    ctx->r2 = ctx->r5 ^ ctx->r2;
    // 0x80074820: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80074824: j           L_80074844
    // 0x80074828: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
        goto L_80074844;
    // 0x80074828: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
L_8007482C:
    // 0x8007482C: lw          $v0, 0x1630($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1630);
    // 0x80074830: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x80074834: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x80074838: xor         $v0, $a1, $v0
    ctx->r2 = ctx->r5 ^ ctx->r2;
    // 0x8007483C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80074840: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
L_80074844:
    // 0x80074844: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80074848: sltiu       $v0, $t0, 0x8
    ctx->r2 = ctx->r8 < 0X8 ? 1 : 0;
    // 0x8007484C: bne         $v0, $zero, L_800747EC
    if (ctx->r2 != 0) {
        // 0x80074850: addiu       $a2, $a2, 0x4
        ctx->r6 = ADD32(ctx->r6, 0X4);
            goto L_800747EC;
    }
    // 0x80074850: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x80074854: lui         $a2, 0x3333
    ctx->r6 = S32(0X3333 << 16);
    // 0x80074858: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x8007485C: lui         $a3, 0xCCCC
    ctx->r7 = S32(0XCCCC << 16);
    // 0x80074860: ori         $a3, $a3, 0xCCCC
    ctx->r7 = ctx->r7 | 0XCCCC;
    // 0x80074864: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x80074868: lw          $v0, 0x1630($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1630);
    // 0x8007486C: lw          $v1, 0x10($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X10);
    // 0x80074870: addiu       $t1, $sp, 0x10
    ctx->r9 = ADD32(ctx->r29, 0X10);
    // 0x80074874: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
    // 0x80074878: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8007487C: sw          $v0, 0x1634($s1)
    MEM_W(0X1634, ctx->r17) = ctx->r2;
    // 0x80074880: lw          $v0, 0x1630($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1630);
    // 0x80074884: lw          $a0, 0x14($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X14);
    // 0x80074888: lw          $v1, 0x1630($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X1630);
    // 0x8007488C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80074890: xor         $v0, $v0, $a2
    ctx->r2 = ctx->r2 ^ ctx->r6;
    // 0x80074894: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80074898: xor         $v1, $v1, $a3
    ctx->r3 = ctx->r3 ^ ctx->r7;
    // 0x8007489C: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x800748A0: sw          $v0, 0x1638($s1)
    MEM_W(0X1638, ctx->r17) = ctx->r2;
    // 0x800748A4: sw          $v1, 0x163C($s1)
    MEM_W(0X163C, ctx->r17) = ctx->r3;
L_800748A8:
    // 0x800748A8: sw          $zero, 0x0($t1)
    MEM_W(0X0, ctx->r9) = 0;
    // 0x800748AC: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x800748B0: sltiu       $v0, $t0, 0x3
    ctx->r2 = ctx->r8 < 0X3 ? 1 : 0;
    // 0x800748B4: bne         $v0, $zero, L_800748A8
    if (ctx->r2 != 0) {
        // 0x800748B8: addiu       $t1, $t1, 0x4
        ctx->r9 = ADD32(ctx->r9, 0X4);
            goto L_800748A8;
    }
    // 0x800748B8: addiu       $t1, $t1, 0x4
    ctx->r9 = ADD32(ctx->r9, 0X4);
    // 0x800748BC: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x800748C0: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
L_800748C4:
    // 0x800748C4: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x800748C8: lw          $a0, 0x10($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X10);
    // 0x800748CC: sll         $v1, $a1, 16
    ctx->r3 = S32(ctx->r5 << 16);
    // 0x800748D0: srl         $v0, $a1, 16
    ctx->r2 = S32(U32(ctx->r5) >> 16);
    // 0x800748D4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x800748D8: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x800748DC: andi        $v0, $t0, 0x1
    ctx->r2 = ctx->r8 & 0X1;
    // 0x800748E0: beq         $v0, $zero, L_80074904
    if (ctx->r2 == 0) {
        // 0x800748E4: sw          $a0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r4;
            goto L_80074904;
    }
    // 0x800748E4: sw          $a0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r4;
    // 0x800748E8: lw          $v0, 0x17E0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X17E0);
    // 0x800748EC: lw          $v1, 0x14($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X14);
    // 0x800748F0: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x800748F4: xor         $v0, $a1, $v0
    ctx->r2 = ctx->r5 ^ ctx->r2;
    // 0x800748F8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x800748FC: j           L_8007491C
    // 0x80074900: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
        goto L_8007491C;
    // 0x80074900: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
L_80074904:
    // 0x80074904: lw          $v0, 0x17E0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X17E0);
    // 0x80074908: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x8007490C: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x80074910: xor         $v0, $a1, $v0
    ctx->r2 = ctx->r5 ^ ctx->r2;
    // 0x80074914: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80074918: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
L_8007491C:
    // 0x8007491C: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80074920: sltiu       $v0, $t0, 0x8
    ctx->r2 = ctx->r8 < 0X8 ? 1 : 0;
    // 0x80074924: bne         $v0, $zero, L_800748C4
    if (ctx->r2 != 0) {
        // 0x80074928: addiu       $a2, $a2, 0x4
        ctx->r6 = ADD32(ctx->r6, 0X4);
            goto L_800748C4;
    }
    // 0x80074928: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x8007492C: lui         $a2, 0x9696
    ctx->r6 = S32(0X9696 << 16);
    // 0x80074930: ori         $a2, $a2, 0x9696
    ctx->r6 = ctx->r6 | 0X9696;
    // 0x80074934: lui         $a3, 0xB2B2
    ctx->r7 = S32(0XB2B2 << 16);
    // 0x80074938: ori         $a3, $a3, 0xB2B2
    ctx->r7 = ctx->r7 | 0XB2B2;
    // 0x8007493C: lui         $t0, 0x8B8B
    ctx->r8 = S32(0X8B8B << 16);
    // 0x80074940: ori         $t0, $t0, 0x8B8B
    ctx->r8 = ctx->r8 | 0X8B8B;
    // 0x80074944: lw          $v0, 0x17E0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X17E0);
    // 0x80074948: lw          $a0, 0x10($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X10);
    // 0x8007494C: lw          $v1, 0x17E0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X17E0);
    // 0x80074950: lw          $a1, 0x14($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X14);
    // 0x80074954: xor         $v0, $v0, $a2
    ctx->r2 = ctx->r2 ^ ctx->r6;
    // 0x80074958: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8007495C: sw          $v0, 0x17E4($s1)
    MEM_W(0X17E4, ctx->r17) = ctx->r2;
    // 0x80074960: lw          $v0, 0x17E0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X17E0);
    // 0x80074964: xor         $v1, $v1, $a3
    ctx->r3 = ctx->r3 ^ ctx->r7;
    // 0x80074968: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8007496C: sw          $v1, 0x17E8($s1)
    MEM_W(0X17E8, ctx->r17) = ctx->r3;
    // 0x80074970: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80074974: lw          $v1, 0x74($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X74);
    // 0x80074978: lw          $a1, 0xB4($s1)
    ctx->r5 = MEM_W(ctx->r17, 0XB4);
    // 0x8007497C: lw          $a2, 0x70($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X70);
    // 0x80074980: xor         $v0, $v0, $t0
    ctx->r2 = ctx->r2 ^ ctx->r8;
    // 0x80074984: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80074988: lw          $a0, 0xF4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0XF4);
    // 0x8007498C: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80074990: sw          $v0, 0x17EC($s1)
    MEM_W(0X17EC, ctx->r17) = ctx->r2;
    // 0x80074994: lw          $v0, 0x274($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X274);
    // 0x80074998: lw          $a1, 0xF0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0XF0);
    // 0x8007499C: xor         $v1, $v1, $a2
    ctx->r3 = ctx->r3 ^ ctx->r6;
    // 0x800749A0: lw          $a2, 0x1630($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X1630);
    // 0x800749A4: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x800749A8: xor         $a0, $a0, $a1
    ctx->r4 = ctx->r4 ^ ctx->r5;
    // 0x800749AC: lw          $v0, 0x1634($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1634);
    // 0x800749B0: lw          $a1, 0x17E4($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X17E4);
    // 0x800749B4: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x800749B8: lw          $a0, 0x278($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X278);
    // 0x800749BC: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x800749C0: xor         $v0, $v0, $a2
    ctx->r2 = ctx->r2 ^ ctx->r6;
    // 0x800749C4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x800749C8: lw          $v0, 0x78($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X78);
    // 0x800749CC: lw          $a1, 0xB8($s1)
    ctx->r5 = MEM_W(ctx->r17, 0XB8);
    // 0x800749D0: lw          $a2, 0xB0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0XB0);
    // 0x800749D4: lui         $t1, 0xAAAA
    ctx->r9 = S32(0XAAAA << 16);
    // 0x800749D8: ori         $t1, $t1, 0xAAAA
    ctx->r9 = ctx->r9 | 0XAAAA;
    // 0x800749DC: sw          $v1, 0x17F4($s1)
    MEM_W(0X17F4, ctx->r17) = ctx->r3;
    // 0x800749E0: lw          $v1, 0xF8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XF8);
    // 0x800749E4: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x800749E8: xor         $v0, $v0, $a2
    ctx->r2 = ctx->r2 ^ ctx->r6;
    // 0x800749EC: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x800749F0: lw          $a0, 0x270($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X270);
    // 0x800749F4: lw          $a1, 0x1638($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X1638);
    // 0x800749F8: lw          $a2, 0x17E8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X17E8);
    // 0x800749FC: xor         $v1, $v1, $a0
    ctx->r3 = ctx->r3 ^ ctx->r4;
    // 0x80074A00: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80074A04: addu        $a1, $a1, $a2
    ctx->r5 = ADD32(ctx->r5, ctx->r6);
    // 0x80074A08: lw          $v1, 0x17E0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X17E0);
    // 0x80074A0C: lw          $a0, 0x7C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X7C);
    // 0x80074A10: lw          $a2, 0xBC($s1)
    ctx->r6 = MEM_W(ctx->r17, 0XBC);
    // 0x80074A14: lui         $t2, 0x5555
    ctx->r10 = S32(0X5555 << 16);
    // 0x80074A18: xor         $a1, $a1, $v1
    ctx->r5 = ctx->r5 ^ ctx->r3;
    // 0x80074A1C: addu        $a0, $a0, $a2
    ctx->r4 = ADD32(ctx->r4, ctx->r6);
    // 0x80074A20: lw          $a2, 0x70($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X70);
    // 0x80074A24: lw          $v1, 0xFC($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XFC);
    // 0x80074A28: ori         $t2, $t2, 0x5555
    ctx->r10 = ctx->r10 | 0X5555;
    // 0x80074A2C: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80074A30: sw          $v0, 0x17F8($s1)
    MEM_W(0X17F8, ctx->r17) = ctx->r2;
    // 0x80074A34: lw          $v0, 0x27C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X27C);
    // 0x80074A38: lw          $a1, 0xB0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0XB0);
    // 0x80074A3C: xor         $a0, $a0, $a2
    ctx->r4 = ctx->r4 ^ ctx->r6;
    // 0x80074A40: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80074A44: xor         $v1, $v1, $a1
    ctx->r3 = ctx->r3 ^ ctx->r5;
    // 0x80074A48: lw          $v0, 0x163C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X163C);
    // 0x80074A4C: lw          $a1, 0x17EC($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X17EC);
    // 0x80074A50: lw          $a2, 0xF0($s1)
    ctx->r6 = MEM_W(ctx->r17, 0XF0);
    // 0x80074A54: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x80074A58: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80074A5C: xor         $v0, $v0, $a2
    ctx->r2 = ctx->r2 ^ ctx->r6;
    // 0x80074A60: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80074A64: sw          $a0, 0x17FC($s1)
    MEM_W(0X17FC, ctx->r17) = ctx->r4;
    // 0x80074A68: lw          $v0, 0x17F4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X17F4);
    // 0x80074A6C: lw          $v1, 0x17F8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X17F8);
    // 0x80074A70: xor         $a0, $a0, $t2
    ctx->r4 = ctx->r4 ^ ctx->r10;
    // 0x80074A74: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
    // 0x80074A78: xor         $v1, $v1, $t1
    ctx->r3 = ctx->r3 ^ ctx->r9;
    // 0x80074A7C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80074A80: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80074A84: sw          $v0, 0x17F0($s1)
    MEM_W(0X17F0, ctx->r17) = ctx->r2;
    // 0x80074A88: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80074A8C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80074A90: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80074A94: jr          $ra
    // 0x80074A98: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80074A98: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8002BFFC_73FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002BFFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002C000: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8002C004: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8002C008: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8002C00C: beq         $a0, $v0, L_8002C03C
    if (ctx->r4 == ctx->r2) {
        // 0x8002C010: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_8002C03C;
    }
    // 0x8002C010: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8002C014: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8002C018: bne         $a0, $v0, L_8002C05C
    if (ctx->r4 != ctx->r2) {
        // 0x8002C01C: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_8002C05C;
    }
    // 0x8002C01C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x8002C020: jal         0x8008ABE8
    // 0x8002C024: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_8008ABE8_65FE8(rdram, ctx);
        goto after_0;
    // 0x8002C024: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x8002C028: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8002C02C: jal         0x8008ABE8
    // 0x8002C030: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_8008ABE8_65FE8(rdram, ctx);
        goto after_1;
    // 0x8002C030: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_1:
    // 0x8002C034: j           L_8002C05C
    // 0x8002C038: nop

        goto L_8002C05C;
    // 0x8002C038: nop

L_8002C03C:
    // 0x8002C03C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8002C040: bne         $a1, $v0, L_8002C05C
    if (ctx->r5 != ctx->r2) {
        // 0x8002C044: nop
    
            goto L_8002C05C;
    }
    // 0x8002C044: nop

    // 0x8002C048: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8002C04C: sb          $zero, -0x14B0($at)
    MEM_B(-0X14B0, ctx->r1) = 0;
    // 0x8002C050: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8002C054: jal         0x800923A0
    // 0x8002C058: addiu       $a0, $a0, -0x1420
    ctx->r4 = ADD32(ctx->r4, -0X1420);
    func_800923A0_6D7A0(rdram, ctx);
        goto after_2;
    // 0x8002C058: addiu       $a0, $a0, -0x1420
    ctx->r4 = ADD32(ctx->r4, -0X1420);
    after_2:
L_8002C05C:
    // 0x8002C05C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8002C060: jr          $ra
    // 0x8002C064: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8002C064: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002C068: nop

    // 0x8002C06C: nop

;}
RECOMP_FUNC void func_80066848_41C48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80066848: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8006684C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80066850: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80066854: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80066858: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8006685C: lb          $v0, 0x73($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X73);
    // 0x80066860: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x80066864: lbu         $v1, 0x5410($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X5410);
    // 0x80066868: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8006686C: lbu         $a0, 0x5990($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X5990);
    // 0x80066870: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80066874: bne         $a0, $v0, L_800668A4
    if (ctx->r4 != ctx->r2) {
        // 0x80066878: nop
    
            goto L_800668A4;
    }
    // 0x80066878: nop

    // 0x8006687C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80066880: lw          $v0, -0xC78($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XC78);
    // 0x80066884: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80066888: beq         $v0, $zero, L_800668A4
    if (ctx->r2 == 0) {
        // 0x8006688C: addiu       $v1, $zero, 0x60
        ctx->r3 = ADD32(0, 0X60);
            goto L_800668A4;
    }
    // 0x8006688C: addiu       $v1, $zero, 0x60
    ctx->r3 = ADD32(0, 0X60);
    // 0x80066890: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x80066894: sb          $v1, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r3;
    // 0x80066898: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8006689C: j           L_800668B4
    // 0x800668A0: sb          $v0, 0x78($s0)
    MEM_B(0X78, ctx->r16) = ctx->r2;
        goto L_800668B4;
    // 0x800668A0: sb          $v0, 0x78($s0)
    MEM_B(0X78, ctx->r16) = ctx->r2;
L_800668A4:
    // 0x800668A4: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x800668A8: addiu       $v0, $zero, 0xED
    ctx->r2 = ADD32(0, 0XED);
    // 0x800668AC: sb          $v0, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r2;
    // 0x800668B0: sb          $zero, 0x78($s0)
    MEM_B(0X78, ctx->r16) = 0;
L_800668B4:
    // 0x800668B4: lb          $v1, 0x71($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X71);
    // 0x800668B8: lb          $v0, 0x73($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X73);
    // 0x800668BC: bne         $v1, $v0, L_80066BD0
    if (ctx->r3 != ctx->r2) {
        // 0x800668C0: lui         $v1, 0xC0
        ctx->r3 = S32(0XC0 << 16);
            goto L_80066BD0;
    }
    // 0x800668C0: lui         $v1, 0xC0
    ctx->r3 = S32(0XC0 << 16);
    // 0x800668C4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800668C8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x800668CC: bne         $v0, $zero, L_80066BD0
    if (ctx->r2 != 0) {
        // 0x800668D0: lui         $v1, 0x1A1F
        ctx->r3 = S32(0X1A1F << 16);
            goto L_80066BD0;
    }
    // 0x800668D0: lui         $v1, 0x1A1F
    ctx->r3 = S32(0X1A1F << 16);
    // 0x800668D4: ori         $v1, $v1, 0x58D1
    ctx->r3 = ctx->r3 | 0X58D1;
    // 0x800668D8: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x800668DC: addiu       $v0, $v0, -0x7790
    ctx->r2 = ADD32(ctx->r2, -0X7790);
    // 0x800668E0: subu        $v0, $s0, $v0
    ctx->r2 = SUB32(ctx->r16, ctx->r2);
    // 0x800668E4: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800668E8: mflo        $v0
    ctx->r2 = lo;
    // 0x800668EC: lui         $a0, 0x2
    ctx->r4 = S32(0X2 << 16);
    // 0x800668F0: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x800668F4: lw          $v1, 0x77F0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X77F0);
    // 0x800668F8: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
    // 0x800668FC: sllv        $a3, $a0, $v0
    ctx->r7 = S32(ctx->r4 << (ctx->r2 & 31));
    // 0x80066900: nor         $v0, $zero, $a3
    ctx->r2 = ~(0 | ctx->r7);
    // 0x80066904: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80066908: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8006690C: sw          $v1, 0x77F0($at)
    MEM_W(0X77F0, ctx->r1) = ctx->r3;
    // 0x80066910: lbu         $v0, 0x71($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X71);
    // 0x80066914: lhu         $a0, 0xBA($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XBA);
    // 0x80066918: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8006691C: sra         $s1, $v0, 24
    ctx->r17 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80066920: andi        $v0, $a0, 0x6000
    ctx->r2 = ctx->r4 & 0X6000;
    // 0x80066924: bne         $v0, $zero, L_80066B44
    if (ctx->r2 != 0) {
        // 0x80066928: andi        $v0, $a0, 0x10
        ctx->r2 = ctx->r4 & 0X10;
            goto L_80066B44;
    }
    // 0x80066928: andi        $v0, $a0, 0x10
    ctx->r2 = ctx->r4 & 0X10;
    // 0x8006692C: beq         $v0, $zero, L_80066948
    if (ctx->r2 == 0) {
        // 0x80066930: lui         $v0, 0x10
        ctx->r2 = S32(0X10 << 16);
            goto L_80066948;
    }
    // 0x80066930: lui         $v0, 0x10
    ctx->r2 = S32(0X10 << 16);
    // 0x80066934: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x80066938: lbu         $v0, 0x1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1);
    // 0x8006693C: sh          $zero, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = 0;
    // 0x80066940: j           L_80066984
    // 0x80066944: sb          $v0, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r2;
        goto L_80066984;
    // 0x80066944: sb          $v0, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r2;
L_80066948:
    // 0x80066948: lw          $a1, 0xB8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XB8);
    // 0x8006694C: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x80066950: lui         $v1, 0x10
    ctx->r3 = S32(0X10 << 16);
    // 0x80066954: and         $v0, $a1, $v0
    ctx->r2 = ctx->r5 & ctx->r2;
    // 0x80066958: bne         $v0, $v1, L_800669E0
    if (ctx->r2 != ctx->r3) {
        // 0x8006695C: andi        $v0, $a0, 0x40
        ctx->r2 = ctx->r4 & 0X40;
            goto L_800669E0;
    }
    // 0x8006695C: andi        $v0, $a0, 0x40
    ctx->r2 = ctx->r4 & 0X40;
    // 0x80066960: lhu         $v1, 0xBC($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XBC);
    // 0x80066964: sltiu       $v0, $v1, 0xD
    ctx->r2 = ctx->r3 < 0XD ? 1 : 0;
    // 0x80066968: bne         $v0, $zero, L_80066B40
    if (ctx->r2 != 0) {
        // 0x8006696C: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80066B40;
    }
    // 0x8006696C: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80066970: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x80066974: lbu         $v1, 0x1($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X1);
    // 0x80066978: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8006697C: sh          $v0, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = ctx->r2;
    // 0x80066980: sb          $v1, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r3;
L_80066984:
    // 0x80066984: lb          $v1, 0x71($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X71);
    // 0x80066988: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x8006698C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80066990: bne         $v0, $v1, L_80066B44
    if (ctx->r2 != ctx->r3) {
        // 0x80066994: nop
    
            goto L_80066B44;
    }
    // 0x80066994: nop

    // 0x80066998: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x8006699C: lbu         $v0, 0x5410($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X5410);
    // 0x800669A0: beq         $v0, $zero, L_80066B44
    if (ctx->r2 == 0) {
        // 0x800669A4: addiu       $a0, $zero, 0x81
        ctx->r4 = ADD32(0, 0X81);
            goto L_80066B44;
    }
    // 0x800669A4: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    // 0x800669A8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x800669AC: lw          $v0, 0x77F0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X77F0);
    // 0x800669B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800669B4: or          $v0, $v0, $a3
    ctx->r2 = ctx->r2 | ctx->r7;
    // 0x800669B8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800669BC: sw          $v0, 0x77F0($at)
    MEM_W(0X77F0, ctx->r1) = ctx->r2;
    // 0x800669C0: jal         0x8002A2F8
    // 0x800669C4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_0;
    // 0x800669C4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x800669C8: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x800669CC: lbu         $v0, 0x5410($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X5410);
    // 0x800669D0: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x800669D4: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x800669D8: j           L_80066B44
    // 0x800669DC: sb          $v0, 0x5410($at)
    MEM_B(0X5410, ctx->r1) = ctx->r2;
        goto L_80066B44;
    // 0x800669DC: sb          $v0, 0x5410($at)
    MEM_B(0X5410, ctx->r1) = ctx->r2;
L_800669E0:
    // 0x800669E0: beq         $v0, $zero, L_800669FC
    if (ctx->r2 == 0) {
        // 0x800669E4: lui         $v0, 0x40
        ctx->r2 = S32(0X40 << 16);
            goto L_800669FC;
    }
    // 0x800669E4: lui         $v0, 0x40
    ctx->r2 = S32(0X40 << 16);
    // 0x800669E8: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x800669EC: lbu         $v0, 0x2($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2);
    // 0x800669F0: sh          $zero, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = 0;
    // 0x800669F4: j           L_80066A34
    // 0x800669F8: sb          $v0, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r2;
        goto L_80066A34;
    // 0x800669F8: sb          $v0, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r2;
L_800669FC:
    // 0x800669FC: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x80066A00: and         $v0, $a1, $v0
    ctx->r2 = ctx->r5 & ctx->r2;
    // 0x80066A04: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x80066A08: bne         $v0, $v1, L_80066A9C
    if (ctx->r2 != ctx->r3) {
        // 0x80066A0C: andi        $v0, $a0, 0x80
        ctx->r2 = ctx->r4 & 0X80;
            goto L_80066A9C;
    }
    // 0x80066A0C: andi        $v0, $a0, 0x80
    ctx->r2 = ctx->r4 & 0X80;
    // 0x80066A10: lhu         $v1, 0xBC($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XBC);
    // 0x80066A14: sltiu       $v0, $v1, 0xD
    ctx->r2 = ctx->r3 < 0XD ? 1 : 0;
    // 0x80066A18: bne         $v0, $zero, L_80066B40
    if (ctx->r2 != 0) {
        // 0x80066A1C: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80066B40;
    }
    // 0x80066A1C: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80066A20: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x80066A24: lbu         $v1, 0x2($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X2);
    // 0x80066A28: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80066A2C: sh          $v0, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = ctx->r2;
    // 0x80066A30: sb          $v1, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r3;
L_80066A34:
    // 0x80066A34: lb          $v1, 0x71($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X71);
    // 0x80066A38: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x80066A3C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80066A40: bne         $v0, $v1, L_80066B44
    if (ctx->r2 != ctx->r3) {
        // 0x80066A44: nop
    
            goto L_80066B44;
    }
    // 0x80066A44: nop

    // 0x80066A48: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80066A4C: lbu         $v0, 0x5410($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X5410);
    // 0x80066A50: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80066A54: lbu         $v1, -0x11D0($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X11D0);
    // 0x80066A58: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80066A5C: beq         $v0, $zero, L_80066B44
    if (ctx->r2 == 0) {
        // 0x80066A60: addiu       $a0, $zero, 0x81
        ctx->r4 = ADD32(0, 0X81);
            goto L_80066B44;
    }
    // 0x80066A60: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    // 0x80066A64: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80066A68: lw          $v0, 0x77F0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X77F0);
    // 0x80066A6C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80066A70: or          $v0, $v0, $a3
    ctx->r2 = ctx->r2 | ctx->r7;
    // 0x80066A74: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80066A78: sw          $v0, 0x77F0($at)
    MEM_W(0X77F0, ctx->r1) = ctx->r2;
    // 0x80066A7C: jal         0x8002A2F8
    // 0x80066A80: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_1;
    // 0x80066A80: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80066A84: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80066A88: lbu         $v0, 0x5410($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X5410);
    // 0x80066A8C: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80066A90: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80066A94: j           L_80066B44
    // 0x80066A98: sb          $v0, 0x5410($at)
    MEM_B(0X5410, ctx->r1) = ctx->r2;
        goto L_80066B44;
    // 0x80066A98: sb          $v0, 0x5410($at)
    MEM_B(0X5410, ctx->r1) = ctx->r2;
L_80066A9C:
    // 0x80066A9C: beq         $v0, $zero, L_80066AB4
    if (ctx->r2 == 0) {
        // 0x80066AA0: lui         $v0, 0x80
        ctx->r2 = S32(0X80 << 16);
            goto L_80066AB4;
    }
    // 0x80066AA0: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80066AA4: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x80066AA8: lbu         $v0, 0x3($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3);
    // 0x80066AAC: j           L_80066AFC
    // 0x80066AB0: sh          $zero, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = 0;
        goto L_80066AFC;
    // 0x80066AB0: sh          $zero, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = 0;
L_80066AB4:
    // 0x80066AB4: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x80066AB8: and         $v0, $a1, $v0
    ctx->r2 = ctx->r5 & ctx->r2;
    // 0x80066ABC: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x80066AC0: bne         $v0, $v1, L_80066AE8
    if (ctx->r2 != ctx->r3) {
        // 0x80066AC4: andi        $v0, $a0, 0x20
        ctx->r2 = ctx->r4 & 0X20;
            goto L_80066AE8;
    }
    // 0x80066AC4: andi        $v0, $a0, 0x20
    ctx->r2 = ctx->r4 & 0X20;
    // 0x80066AC8: lhu         $v1, 0xBC($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XBC);
    // 0x80066ACC: sltiu       $v0, $v1, 0xD
    ctx->r2 = ctx->r3 < 0XD ? 1 : 0;
    // 0x80066AD0: bne         $v0, $zero, L_80066B40
    if (ctx->r2 != 0) {
        // 0x80066AD4: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80066B40;
    }
    // 0x80066AD4: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80066AD8: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x80066ADC: lbu         $v1, 0x3($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X3);
    // 0x80066AE0: j           L_80066B34
    // 0x80066AE4: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
        goto L_80066B34;
    // 0x80066AE4: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
L_80066AE8:
    // 0x80066AE8: beq         $v0, $zero, L_80066B04
    if (ctx->r2 == 0) {
        // 0x80066AEC: lui         $v0, 0x20
        ctx->r2 = S32(0X20 << 16);
            goto L_80066B04;
    }
    // 0x80066AEC: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x80066AF0: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x80066AF4: lbu         $v0, 0x4($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4);
    // 0x80066AF8: sh          $zero, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = 0;
L_80066AFC:
    // 0x80066AFC: j           L_80066B44
    // 0x80066B00: sb          $v0, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r2;
        goto L_80066B44;
    // 0x80066B00: sb          $v0, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r2;
L_80066B04:
    // 0x80066B04: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x80066B08: and         $v0, $a1, $v0
    ctx->r2 = ctx->r5 & ctx->r2;
    // 0x80066B0C: lui         $v1, 0x20
    ctx->r3 = S32(0X20 << 16);
    // 0x80066B10: bne         $v0, $v1, L_80066B44
    if (ctx->r2 != ctx->r3) {
        // 0x80066B14: nop
    
            goto L_80066B44;
    }
    // 0x80066B14: nop

    // 0x80066B18: lhu         $v1, 0xBC($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XBC);
    // 0x80066B1C: sltiu       $v0, $v1, 0xD
    ctx->r2 = ctx->r3 < 0XD ? 1 : 0;
    // 0x80066B20: bne         $v0, $zero, L_80066B40
    if (ctx->r2 != 0) {
        // 0x80066B24: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80066B40;
    }
    // 0x80066B24: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80066B28: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x80066B2C: lbu         $v1, 0x4($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X4);
    // 0x80066B30: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
L_80066B34:
    // 0x80066B34: sh          $v0, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = ctx->r2;
    // 0x80066B38: j           L_80066B44
    // 0x80066B3C: sb          $v1, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r3;
        goto L_80066B44;
    // 0x80066B3C: sb          $v1, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r3;
L_80066B40:
    // 0x80066B40: sh          $v0, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = ctx->r2;
L_80066B44:
    // 0x80066B44: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x80066B48: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x80066B4C: sb          $v0, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r2;
    // 0x80066B50: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x80066B54: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80066B58: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80066B5C: sb          $v0, 0x78($s0)
    MEM_B(0X78, ctx->r16) = ctx->r2;
    // 0x80066B60: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80066B64: addiu       $v1, $v1, 0x5
    ctx->r3 = ADD32(ctx->r3, 0X5);
    // 0x80066B68: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x80066B6C: sw          $v1, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->r3;
    // 0x80066B70: lb          $v1, 0x71($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X71);
    // 0x80066B74: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x80066B78: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80066B7C: beq         $v0, $v1, L_80066BD0
    if (ctx->r2 == ctx->r3) {
        // 0x80066B80: sw          $a0, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r4;
            goto L_80066BD0;
    }
    // 0x80066B80: sw          $a0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r4;
    // 0x80066B84: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    // 0x80066B88: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80066B8C: jal         0x8002A2F8
    // 0x80066B90: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_2;
    // 0x80066B90: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x80066B94: lui         $v1, 0x1A1F
    ctx->r3 = S32(0X1A1F << 16);
    // 0x80066B98: ori         $v1, $v1, 0x58D1
    ctx->r3 = ctx->r3 | 0X58D1;
    // 0x80066B9C: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80066BA0: addiu       $v0, $v0, -0x7790
    ctx->r2 = ADD32(ctx->r2, -0X7790);
    // 0x80066BA4: subu        $v0, $s0, $v0
    ctx->r2 = SUB32(ctx->r16, ctx->r2);
    // 0x80066BA8: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80066BAC: mflo        $v0
    ctx->r2 = lo;
    // 0x80066BB0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80066BB4: lw          $a0, 0x77F0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X77F0);
    // 0x80066BB8: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
    // 0x80066BBC: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
    // 0x80066BC0: sllv        $v1, $v1, $v0
    ctx->r3 = S32(ctx->r3 << (ctx->r2 & 31));
    // 0x80066BC4: or          $a0, $a0, $v1
    ctx->r4 = ctx->r4 | ctx->r3;
    // 0x80066BC8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80066BCC: sw          $a0, 0x77F0($at)
    MEM_W(0X77F0, ctx->r1) = ctx->r4;
L_80066BD0:
    // 0x80066BD0: lbu         $v0, 0x73($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X73);
    // 0x80066BD4: lbu         $v1, 0x78($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X78);
    // 0x80066BD8: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x80066BDC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80066BE0: addiu       $v1, $v1, 0x50
    ctx->r3 = ADD32(ctx->r3, 0X50);
    // 0x80066BE4: addiu       $a0, $a0, 0x5
    ctx->r4 = ADD32(ctx->r4, 0X5);
    // 0x80066BE8: sb          $v1, 0x78($s0)
    MEM_B(0X78, ctx->r16) = ctx->r3;
    // 0x80066BEC: sb          $v0, 0x73($s0)
    MEM_B(0X73, ctx->r16) = ctx->r2;
    // 0x80066BF0: sw          $a0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r4;
    // 0x80066BF4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80066BF8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80066BFC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80066C00: jr          $ra
    // 0x80066C04: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80066C04: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8004BFB0_273B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004BFB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004BFB4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8004BFB8: addiu       $v0, $v0, -0x420
    ctx->r2 = ADD32(ctx->r2, -0X420);
    // 0x8004BFBC: addiu       $v1, $v0, 0x4410
    ctx->r3 = ADD32(ctx->r2, 0X4410);
    // 0x8004BFC0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8004BFC4: sw          $v0, -0x1414($at)
    MEM_W(-0X1414, ctx->r1) = ctx->r2;
    // 0x8004BFC8: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8004BFCC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004BFD0: beq         $v0, $zero, L_8004C04C
    if (ctx->r2 == 0) {
        // 0x8004BFD4: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_8004C04C;
    }
    // 0x8004BFD4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8004BFD8: addu        $s0, $v1, $zero
    ctx->r16 = ADD32(ctx->r3, 0);
L_8004BFDC:
    // 0x8004BFDC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8004BFE0: lw          $a0, -0x1414($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1414);
    // 0x8004BFE4: lb          $v0, 0x0($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X0);
    // 0x8004BFE8: lbu         $v1, 0x6($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X6);
    // 0x8004BFEC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8004BFF0: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8004BFF4: beq         $v0, $zero, L_8004C02C
    if (ctx->r2 == 0) {
        // 0x8004BFF8: nop
    
            goto L_8004C02C;
    }
    // 0x8004BFF8: nop

    // 0x8004BFFC: lbu         $v1, 0x2($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X2);
    // 0x8004C000: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8004C004: lw          $v0, 0x4020($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4020);
    // 0x8004C008: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8004C00C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8004C010: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x8004C014: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x8004C018: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8004C01C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8004C020: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8004C024: jalr        $v0
    // 0x8004C028: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8004C028: nop

    after_0:
L_8004C02C:
    // 0x8004C02C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8004C030: lw          $v0, -0x1414($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1414);
    // 0x8004C034: addiu       $v0, $v0, 0x3C8
    ctx->r2 = ADD32(ctx->r2, 0X3C8);
    // 0x8004C038: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8004C03C: sw          $v0, -0x1414($at)
    MEM_W(-0X1414, ctx->r1) = ctx->r2;
    // 0x8004C040: sltu        $v0, $v0, $s0
    ctx->r2 = ctx->r2 < ctx->r16 ? 1 : 0;
    // 0x8004C044: bne         $v0, $zero, L_8004BFDC
    if (ctx->r2 != 0) {
        // 0x8004C048: nop
    
            goto L_8004BFDC;
    }
    // 0x8004C048: nop

L_8004C04C:
    // 0x8004C04C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004C050: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8004C054: jr          $ra
    // 0x8004C058: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8004C058: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8008AE40_66240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008AE40: bne         $a0, $zero, L_8008AE50
    if (ctx->r4 != 0) {
        // 0x8008AE44: addiu       $sp, $sp, -0x8
        ctx->r29 = ADD32(ctx->r29, -0X8);
            goto L_8008AE50;
    }
    // 0x8008AE44: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8008AE48: j           L_8008AE98
    // 0x8008AE4C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8008AE98;
    // 0x8008AE4C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8008AE50:
    // 0x8008AE50: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8008AE54: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008AE58: lw          $v0, 0x4F84($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4F84);
    // 0x8008AE5C: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x8008AE60: lw          $v1, 0x4F8C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4F8C);
    // 0x8008AE64: blez        $v0, L_8008AE94
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8008AE68: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_8008AE94;
    }
    // 0x8008AE68: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8008AE6C: addu        $t0, $v0, $zero
    ctx->r8 = ADD32(ctx->r2, 0);
    // 0x8008AE70: addiu       $v1, $v1, 0x9E
    ctx->r3 = ADD32(ctx->r3, 0X9E);
L_8008AE74:
    // 0x8008AE74: lw          $v0, -0x5A($v1)
    ctx->r2 = MEM_W(ctx->r3, -0X5A);
    // 0x8008AE78: bne         $v0, $a0, L_8008AE88
    if (ctx->r2 != ctx->r4) {
        // 0x8008AE7C: addiu       $a3, $a3, 0x1
        ctx->r7 = ADD32(ctx->r7, 0X1);
            goto L_8008AE88;
    }
    // 0x8008AE7C: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x8008AE80: sh          $a1, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r5;
    // 0x8008AE84: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
L_8008AE88:
    // 0x8008AE88: slt         $v0, $a3, $t0
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8008AE8C: bne         $v0, $zero, L_8008AE74
    if (ctx->r2 != 0) {
        // 0x8008AE90: addiu       $v1, $v1, 0x13C
        ctx->r3 = ADD32(ctx->r3, 0X13C);
            goto L_8008AE74;
    }
    // 0x8008AE90: addiu       $v1, $v1, 0x13C
    ctx->r3 = ADD32(ctx->r3, 0X13C);
L_8008AE94:
    // 0x8008AE94: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
L_8008AE98:
    // 0x8008AE98: jr          $ra
    // 0x8008AE9C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x8008AE9C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8002C764_7B64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002C764: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8002C768: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8002C76C: lui         $s0, 0x8016
    ctx->r16 = S32(0X8016 << 16);
    // 0x8002C770: lw          $s0, 0x2704($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X2704);
    // 0x8002C774: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8002C778: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8002C77C: beq         $s0, $zero, L_8002C800
    if (ctx->r16 == 0) {
        // 0x8002C780: sw          $s1, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r17;
            goto L_8002C800;
    }
    // 0x8002C780: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8002C784: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x8002C788: sra         $t0, $v0, 16
    ctx->r8 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8002C78C: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x8002C790: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8002C794: addu        $t1, $t0, $v0
    ctx->r9 = ADD32(ctx->r8, ctx->r2);
    // 0x8002C798: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x8002C79C: sra         $a1, $v0, 16
    ctx->r5 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8002C7A0: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x8002C7A4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8002C7A8: addu        $a2, $a1, $v0
    ctx->r6 = ADD32(ctx->r5, ctx->r2);
L_8002C7AC:
    // 0x8002C7AC: lh          $v1, 0x8($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X8);
    // 0x8002C7B0: slt         $v0, $v1, $t0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8002C7B4: bne         $v0, $zero, L_8002C7F4
    if (ctx->r2 != 0) {
        // 0x8002C7B8: nop
    
            goto L_8002C7F4;
    }
    // 0x8002C7B8: nop

    // 0x8002C7BC: lh          $a0, 0xA($s0)
    ctx->r4 = MEM_H(ctx->r16, 0XA);
    // 0x8002C7C0: slt         $v0, $a0, $a1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8002C7C4: bne         $v0, $zero, L_8002C7F4
    if (ctx->r2 != 0) {
        // 0x8002C7C8: nop
    
            goto L_8002C7F4;
    }
    // 0x8002C7C8: nop

    // 0x8002C7CC: lh          $v0, 0xC($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XC);
    // 0x8002C7D0: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x8002C7D4: slt         $v0, $t1, $v0
    ctx->r2 = SIGNED(ctx->r9) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8002C7D8: bne         $v0, $zero, L_8002C7F4
    if (ctx->r2 != 0) {
        // 0x8002C7DC: nop
    
            goto L_8002C7F4;
    }
    // 0x8002C7DC: nop

    // 0x8002C7E0: lh          $v0, 0xE($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XE);
    // 0x8002C7E4: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x8002C7E8: slt         $v0, $a2, $v0
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8002C7EC: beql        $v0, $zero, L_8002C7F4
    if (ctx->r2 == 0) {
        // 0x8002C7F0: sw          $zero, 0x4($s0)
        MEM_W(0X4, ctx->r16) = 0;
            goto L_8002C7F4;
    }
    goto skip_0;
    // 0x8002C7F0: sw          $zero, 0x4($s0)
    MEM_W(0X4, ctx->r16) = 0;
    skip_0:
L_8002C7F4:
    // 0x8002C7F4: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x8002C7F8: bne         $s0, $zero, L_8002C7AC
    if (ctx->r16 != 0) {
        // 0x8002C7FC: nop
    
            goto L_8002C7AC;
    }
    // 0x8002C7FC: nop

L_8002C800:
    // 0x8002C800: addiu       $a1, $zero, 0x3F
    ctx->r5 = ADD32(0, 0X3F);
    // 0x8002C804: lui         $s1, 0x8016
    ctx->r17 = S32(0X8016 << 16);
    // 0x8002C808: addiu       $s1, $s1, 0x2300
    ctx->r17 = ADD32(ctx->r17, 0X2300);
    // 0x8002C80C: addiu       $s2, $s1, -0x10
    ctx->r18 = ADD32(ctx->r17, -0X10);
    // 0x8002C810: sll         $v0, $a1, 4
    ctx->r2 = S32(ctx->r5 << 4);
L_8002C814:
    // 0x8002C814: addu        $a0, $v0, $s2
    ctx->r4 = ADD32(ctx->r2, ctx->r18);
    // 0x8002C818: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x8002C81C: bne         $v1, $zero, L_8002C84C
    if (ctx->r3 != 0) {
        // 0x8002C820: addu        $s0, $v0, $s1
        ctx->r16 = ADD32(ctx->r2, ctx->r17);
            goto L_8002C84C;
    }
    // 0x8002C820: addu        $s0, $v0, $s1
    ctx->r16 = ADD32(ctx->r2, ctx->r17);
    // 0x8002C824: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x8002C828: beql        $v0, $zero, L_8002C850
    if (ctx->r2 == 0) {
        // 0x8002C82C: addiu       $a1, $a1, -0x1
        ctx->r5 = ADD32(ctx->r5, -0X1);
            goto L_8002C850;
    }
    goto skip_1;
    // 0x8002C82C: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    skip_1:
    // 0x8002C830: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8002C834: jal         0x8009A3B4
    // 0x8002C838: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8002C838: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_0:
    // 0x8002C83C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8002C840: jal         0x8009A2B0
    // 0x8002C844: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    bzero_recomp(rdram, ctx);
        goto after_1;
    // 0x8002C844: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_1:
    // 0x8002C848: addiu       $a1, $zero, 0x3F
    ctx->r5 = ADD32(0, 0X3F);
L_8002C84C:
    // 0x8002C84C: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
L_8002C850:
    // 0x8002C850: bgtz        $a1, L_8002C814
    if (SIGNED(ctx->r5) > 0) {
        // 0x8002C854: sll         $v0, $a1, 4
        ctx->r2 = S32(ctx->r5 << 4);
            goto L_8002C814;
    }
    // 0x8002C854: sll         $v0, $a1, 4
    ctx->r2 = S32(ctx->r5 << 4);
    // 0x8002C858: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x8002C85C: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8002C860: addiu       $v0, $v0, 0x22F0
    ctx->r2 = ADD32(ctx->r2, 0X22F0);
    // 0x8002C864: addiu       $v1, $v0, 0x20
    ctx->r3 = ADD32(ctx->r2, 0X20);
    // 0x8002C868: addiu       $a3, $v0, 0x30
    ctx->r7 = ADD32(ctx->r2, 0X30);
    // 0x8002C86C: addiu       $a2, $v0, 0x20
    ctx->r6 = ADD32(ctx->r2, 0X20);
    // 0x8002C870: addiu       $a0, $v0, 0x10
    ctx->r4 = ADD32(ctx->r2, 0X10);
    // 0x8002C874: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8002C878: addiu       $t1, $v0, 0x400
    ctx->r9 = ADD32(ctx->r2, 0X400);
L_8002C87C:
    // 0x8002C87C: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8002C880: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8002C884: lw          $v0, 0x2304($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2304);
    // 0x8002C888: beq         $v0, $zero, L_8002C898
    if (ctx->r2 == 0) {
        // 0x8002C88C: nop
    
            goto L_8002C898;
    }
    // 0x8002C88C: nop

    // 0x8002C890: j           L_8002C8B8
    // 0x8002C894: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
        goto L_8002C8B8;
    // 0x8002C894: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
L_8002C898:
    // 0x8002C898: bnel        $t0, $zero, L_8002C8B8
    if (ctx->r8 != 0) {
        // 0x8002C89C: sw          $a3, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r7;
            goto L_8002C8B8;
    }
    goto skip_2;
    // 0x8002C89C: sw          $a3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r7;
    skip_2:
    // 0x8002C8A0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8002C8A4: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002C8A8: sw          $a0, 0x2704($at)
    MEM_W(0X2704, ctx->r1) = ctx->r4;
    // 0x8002C8AC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002C8B0: sw          $a2, 0x2700($at)
    MEM_W(0X2700, ctx->r1) = ctx->r6;
    // 0x8002C8B4: sw          $a3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r7;
L_8002C8B8:
    // 0x8002C8B8: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x8002C8BC: addiu       $a3, $a3, 0x10
    ctx->r7 = ADD32(ctx->r7, 0X10);
    // 0x8002C8C0: addiu       $a2, $a2, 0x10
    ctx->r6 = ADD32(ctx->r6, 0X10);
    // 0x8002C8C4: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x8002C8C8: slt         $v0, $v1, $t1
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8002C8CC: bne         $v0, $zero, L_8002C87C
    if (ctx->r2 != 0) {
        // 0x8002C8D0: addiu       $a1, $a1, 0x10
        ctx->r5 = ADD32(ctx->r5, 0X10);
            goto L_8002C87C;
    }
    // 0x8002C8D0: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x8002C8D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8002C8D8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8002C8DC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8002C8E0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8002C8E4: jr          $ra
    // 0x8002C8E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8002C8E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80043F90_1F390(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80043F90: addiu       $v0, $zero, 0x25
    ctx->r2 = ADD32(0, 0X25);
    // 0x80043F94: beq         $a1, $v0, L_80044004
    if (ctx->r5 == ctx->r2) {
        // 0x80043F98: addu        $a2, $a0, $zero
        ctx->r6 = ADD32(ctx->r4, 0);
            goto L_80044004;
    }
    // 0x80043F98: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x80043F9C: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x80043FA0: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x80043FA4: lhu         $v1, -0x26B4($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X26B4);
    // 0x80043FA8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80043FAC: lhu         $v1, 0x2($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X2);
    // 0x80043FB0: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
    // 0x80043FB4: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80043FB8: lhu         $a0, -0x26B6($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X26B6);
    // 0x80043FBC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80043FC0: sra         $t2, $v0, 16
    ctx->r10 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80043FC4: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x80043FC8: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x80043FCC: sh          $v1, 0x2($a2)
    MEM_H(0X2, ctx->r6) = ctx->r3;
    // 0x80043FD0: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80043FD4: lhu         $a0, -0x26B0($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X26B0);
    // 0x80043FD8: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80043FDC: sra         $t4, $v1, 16
    ctx->r12 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80043FE0: lhu         $v1, 0x6($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X6);
    // 0x80043FE4: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80043FE8: sh          $v0, 0x4($a2)
    MEM_H(0X4, ctx->r6) = ctx->r2;
    // 0x80043FEC: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80043FF0: lhu         $a0, -0x26B2($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X26B2);
    // 0x80043FF4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80043FF8: sra         $a3, $v0, 16
    ctx->r7 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80043FFC: j           L_80044068
    // 0x80044000: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
        goto L_80044068;
    // 0x80044000: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
L_80044004:
    // 0x80044004: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x80044008: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x8004400C: lhu         $v1, -0x26B4($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X26B4);
    // 0x80044010: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80044014: lhu         $v1, 0x2($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X2);
    // 0x80044018: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
    // 0x8004401C: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80044020: lhu         $a0, -0x26B6($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X26B6);
    // 0x80044024: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80044028: sra         $t2, $v0, 16
    ctx->r10 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8004402C: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x80044030: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80044034: sh          $v1, 0x2($a2)
    MEM_H(0X2, ctx->r6) = ctx->r3;
    // 0x80044038: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8004403C: lhu         $a0, -0x26B0($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X26B0);
    // 0x80044040: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80044044: sra         $t4, $v1, 16
    ctx->r12 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80044048: lhu         $v1, 0x6($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X6);
    // 0x8004404C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80044050: sh          $v0, 0x4($a2)
    MEM_H(0X4, ctx->r6) = ctx->r2;
    // 0x80044054: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80044058: lhu         $a0, -0x26B2($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X26B2);
    // 0x8004405C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80044060: sra         $a3, $v0, 16
    ctx->r7 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80044064: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
L_80044068:
    // 0x80044068: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8004406C: sra         $t5, $v0, 16
    ctx->r13 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80044070: sh          $v1, 0x6($a2)
    MEM_H(0X6, ctx->r6) = ctx->r3;
    // 0x80044074: lui         $t3, 0x801E
    ctx->r11 = S32(0X801E << 16);
    // 0x80044078: lh          $t3, -0x7154($t3)
    ctx->r11 = MEM_H(ctx->r11, -0X7154);
    // 0x8004407C: subu        $t1, $t4, $t2
    ctx->r9 = SUB32(ctx->r12, ctx->r10);
    // 0x80044080: subu        $v0, $t3, $a3
    ctx->r2 = SUB32(ctx->r11, ctx->r7);
    // 0x80044084: mult        $v0, $t1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80044088: mflo        $v0
    ctx->r2 = lo;
    // 0x8004408C: subu        $a1, $t5, $a3
    ctx->r5 = SUB32(ctx->r13, ctx->r7);
    // 0x80044090: nop

    // 0x80044094: div         $zero, $v0, $a1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r5)));
    // 0x80044098: bne         $a1, $zero, L_800440A4
    if (ctx->r5 != 0) {
        // 0x8004409C: nop
    
            goto L_800440A4;
    }
    // 0x8004409C: nop

    // 0x800440A0: break       7
    do_break(2147762336);
L_800440A4:
    // 0x800440A4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800440A8: bne         $a1, $at, L_800440BC
    if (ctx->r5 != ctx->r1) {
        // 0x800440AC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800440BC;
    }
    // 0x800440AC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800440B0: bne         $v0, $at, L_800440BC
    if (ctx->r2 != ctx->r1) {
        // 0x800440B4: nop
    
            goto L_800440BC;
    }
    // 0x800440B4: nop

    // 0x800440B8: break       6
    do_break(2147762360);
L_800440BC:
    // 0x800440BC: mflo        $v0
    ctx->r2 = lo;
    // 0x800440C0: addu        $v0, $t2, $v0
    ctx->r2 = ADD32(ctx->r10, ctx->r2);
    // 0x800440C4: addiu       $t0, $v0, 0x4
    ctx->r8 = ADD32(ctx->r2, 0X4);
    // 0x800440C8: slt         $v0, $t4, $t0
    ctx->r2 = SIGNED(ctx->r12) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x800440CC: bnel        $v0, $zero, L_800440D4
    if (ctx->r2 != 0) {
        // 0x800440D0: addu        $t0, $t4, $zero
        ctx->r8 = ADD32(ctx->r12, 0);
            goto L_800440D4;
    }
    goto skip_0;
    // 0x800440D0: addu        $t0, $t4, $zero
    ctx->r8 = ADD32(ctx->r12, 0);
    skip_0:
L_800440D4:
    // 0x800440D4: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x800440D8: lh          $a0, -0x7158($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X7158);
    // 0x800440DC: subu        $v0, $a0, $t2
    ctx->r2 = SUB32(ctx->r4, ctx->r10);
    // 0x800440E0: mult        $v0, $a1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800440E4: mflo        $v0
    ctx->r2 = lo;
    // 0x800440E8: nop

    // 0x800440EC: nop

    // 0x800440F0: div         $zero, $v0, $t1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r9))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r9)));
    // 0x800440F4: bne         $t1, $zero, L_80044100
    if (ctx->r9 != 0) {
        // 0x800440F8: nop
    
            goto L_80044100;
    }
    // 0x800440F8: nop

    // 0x800440FC: break       7
    do_break(2147762428);
L_80044100:
    // 0x80044100: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80044104: bne         $t1, $at, L_80044118
    if (ctx->r9 != ctx->r1) {
        // 0x80044108: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80044118;
    }
    // 0x80044108: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8004410C: bne         $v0, $at, L_80044118
    if (ctx->r2 != ctx->r1) {
        // 0x80044110: nop
    
            goto L_80044118;
    }
    // 0x80044110: nop

    // 0x80044114: break       6
    do_break(2147762452);
L_80044118:
    // 0x80044118: mflo        $v0
    ctx->r2 = lo;
    // 0x8004411C: addu        $v0, $a3, $v0
    ctx->r2 = ADD32(ctx->r7, ctx->r2);
    // 0x80044120: addiu       $a2, $v0, -0x4
    ctx->r6 = ADD32(ctx->r2, -0X4);
    // 0x80044124: slt         $v0, $a2, $a3
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x80044128: bnel        $v0, $zero, L_80044130
    if (ctx->r2 != 0) {
        // 0x8004412C: addu        $a2, $a3, $zero
        ctx->r6 = ADD32(ctx->r7, 0);
            goto L_80044130;
    }
    goto skip_1;
    // 0x8004412C: addu        $a2, $a3, $zero
    ctx->r6 = ADD32(ctx->r7, 0);
    skip_1:
L_80044130:
    // 0x80044130: slt         $v0, $t2, $a0
    ctx->r2 = SIGNED(ctx->r10) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80044134: beq         $v0, $zero, L_80044228
    if (ctx->r2 == 0) {
        // 0x80044138: slt         $v0, $a0, $t0
        ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r8) ? 1 : 0;
            goto L_80044228;
    }
    // 0x80044138: slt         $v0, $a0, $t0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8004413C: beq         $v0, $zero, L_80044228
    if (ctx->r2 == 0) {
        // 0x80044140: slt         $v0, $a2, $t3
        ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r11) ? 1 : 0;
            goto L_80044228;
    }
    // 0x80044140: slt         $v0, $a2, $t3
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80044144: beq         $v0, $zero, L_80044228
    if (ctx->r2 == 0) {
        // 0x80044148: slt         $v0, $t3, $t5
        ctx->r2 = SIGNED(ctx->r11) < SIGNED(ctx->r13) ? 1 : 0;
            goto L_80044228;
    }
    // 0x80044148: slt         $v0, $t3, $t5
    ctx->r2 = SIGNED(ctx->r11) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x8004414C: beq         $v0, $zero, L_8004422C
    if (ctx->r2 == 0) {
        // 0x80044150: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8004422C;
    }
    // 0x80044150: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80044154: lui         $t3, 0x8020
    ctx->r11 = S32(0X8020 << 16);
    // 0x80044158: lh          $t3, 0x47E0($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X47E0);
    // 0x8004415C: subu        $v1, $t3, $a3
    ctx->r3 = SUB32(ctx->r11, ctx->r7);
    // 0x80044160: mult        $v1, $t1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80044164: mflo        $v1
    ctx->r3 = lo;
    // 0x80044168: nop

    // 0x8004416C: nop

    // 0x80044170: div         $zero, $v1, $a1
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r5)));
    // 0x80044174: bne         $a1, $zero, L_80044180
    if (ctx->r5 != 0) {
        // 0x80044178: nop
    
            goto L_80044180;
    }
    // 0x80044178: nop

    // 0x8004417C: break       7
    do_break(2147762556);
L_80044180:
    // 0x80044180: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80044184: bne         $a1, $at, L_80044198
    if (ctx->r5 != ctx->r1) {
        // 0x80044188: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80044198;
    }
    // 0x80044188: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8004418C: bne         $v1, $at, L_80044198
    if (ctx->r3 != ctx->r1) {
        // 0x80044190: nop
    
            goto L_80044198;
    }
    // 0x80044190: nop

    // 0x80044194: break       6
    do_break(2147762580);
L_80044198:
    // 0x80044198: mflo        $v1
    ctx->r3 = lo;
    // 0x8004419C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x800441A0: lh          $a0, 0x47DC($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X47DC);
    // 0x800441A4: subu        $v0, $a0, $t2
    ctx->r2 = SUB32(ctx->r4, ctx->r10);
    // 0x800441A8: mult        $v0, $a1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800441AC: mflo        $v0
    ctx->r2 = lo;
    // 0x800441B0: nop

    // 0x800441B4: nop

    // 0x800441B8: div         $zero, $v0, $t1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r9))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r9)));
    // 0x800441BC: bne         $t1, $zero, L_800441C8
    if (ctx->r9 != 0) {
        // 0x800441C0: nop
    
            goto L_800441C8;
    }
    // 0x800441C0: nop

    // 0x800441C4: break       7
    do_break(2147762628);
L_800441C8:
    // 0x800441C8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800441CC: bne         $t1, $at, L_800441E0
    if (ctx->r9 != ctx->r1) {
        // 0x800441D0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800441E0;
    }
    // 0x800441D0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800441D4: bne         $v0, $at, L_800441E0
    if (ctx->r2 != ctx->r1) {
        // 0x800441D8: nop
    
            goto L_800441E0;
    }
    // 0x800441D8: nop

    // 0x800441DC: break       6
    do_break(2147762652);
L_800441E0:
    // 0x800441E0: mflo        $v0
    ctx->r2 = lo;
    // 0x800441E4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800441E8: sh          $t2, -0x3FAC($at)
    MEM_H(-0X3FAC, ctx->r1) = ctx->r10;
    // 0x800441EC: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x800441F0: sh          $t0, -0x72D0($at)
    MEM_H(-0X72D0, ctx->r1) = ctx->r8;
    // 0x800441F4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800441F8: sh          $a2, -0x3FA8($at)
    MEM_H(-0X3FA8, ctx->r1) = ctx->r6;
    // 0x800441FC: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80044200: sh          $t5, -0x72CC($at)
    MEM_H(-0X72CC, ctx->r1) = ctx->r13;
    // 0x80044204: addu        $t0, $t2, $v1
    ctx->r8 = ADD32(ctx->r10, ctx->r3);
    // 0x80044208: slt         $a0, $a0, $t0
    ctx->r4 = SIGNED(ctx->r4) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8004420C: bne         $a0, $zero, L_80044220
    if (ctx->r4 != 0) {
        // 0x80044210: addu        $a2, $a3, $v0
        ctx->r6 = ADD32(ctx->r7, ctx->r2);
            goto L_80044220;
    }
    // 0x80044210: addu        $a2, $a3, $v0
    ctx->r6 = ADD32(ctx->r7, ctx->r2);
    // 0x80044214: slt         $v0, $a2, $t3
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80044218: beq         $v0, $zero, L_8004422C
    if (ctx->r2 == 0) {
        // 0x8004421C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8004422C;
    }
    // 0x8004421C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80044220:
    // 0x80044220: j           L_8004422C
    // 0x80044224: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8004422C;
    // 0x80044224: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80044228:
    // 0x80044228: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8004422C:
    // 0x8004422C: jr          $ra
    // 0x80044230: nop

    TRACE_RETURN()
    return;
    // 0x80044230: nop

;}
RECOMP_FUNC void func_80073E14_4F214(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80073E14: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80073E18: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80073E1C: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x80073E20: addiu       $s0, $s0, 0x3985
    ctx->r16 = ADD32(ctx->r16, 0X3985);
    // 0x80073E24: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80073E28: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80073E2C: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80073E30: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x80073E34: addiu       $s1, $s1, 0x3988
    ctx->r17 = ADD32(ctx->r17, 0X3988);
    // 0x80073E38: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80073E3C: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80073E40: addiu       $a0, $a0, 0x5140
    ctx->r4 = ADD32(ctx->r4, 0X5140);
    // 0x80073E44: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x80073E48: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80073E4C: sh          $v1, -0x3BA8($at)
    MEM_H(-0X3BA8, ctx->r1) = ctx->r3;
    // 0x80073E50: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80073E54: sh          $v0, -0x3BA6($at)
    MEM_H(-0X3BA6, ctx->r1) = ctx->r2;
    // 0x80073E58: jal         0x800A3380
    // 0x80073E5C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_800A3380_7E780(rdram, ctx);
        goto after_0;
    // 0x80073E5C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80073E60: jal         0x8021D9D0
    // 0x80073E64: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_8021D9D0(rdram, ctx);
        goto after_1;
    // 0x80073E64: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_1:
    // 0x80073E68: jal         0x8021D9D0
    // 0x80073E6C: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    func_8021D9D0(rdram, ctx);
        goto after_2;
    // 0x80073E6C: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    after_2:
    // 0x80073E70: jal         0x8021D9D0
    // 0x80073E74: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    func_8021D9D0(rdram, ctx);
        goto after_3;
    // 0x80073E74: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    after_3:
    // 0x80073E78: jal         0x8021D9D0
    // 0x80073E7C: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    func_8021D9D0(rdram, ctx);
        goto after_4;
    // 0x80073E7C: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    after_4:
    // 0x80073E80: jal         0x80083E30
    // 0x80073E84: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80083E30_5F230(rdram, ctx);
        goto after_5;
    // 0x80073E84: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_5:
    // 0x80073E88: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x80073E8C: jal         0x80083E30
    // 0x80073E90: nop

    func_80083E30_5F230(rdram, ctx);
        goto after_6;
    // 0x80073E90: nop

    after_6:
    // 0x80073E94: jal         0x80083E30
    // 0x80073E98: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    func_80083E30_5F230(rdram, ctx);
        goto after_7;
    // 0x80073E98: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_7:
    // 0x80073E9C: lbu         $a0, 0x0($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X0);
    // 0x80073EA0: jal         0x80083E30
    // 0x80073EA4: nop

    func_80083E30_5F230(rdram, ctx);
        goto after_8;
    // 0x80073EA4: nop

    after_8:
    // 0x80073EA8: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80073EAC: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80073EB0: sb          $zero, -0x4720($at)
    MEM_B(-0X4720, ctx->r1) = 0;
    // 0x80073EB4: jal         0x80036D34
    // 0x80073EB8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80036D34_12134(rdram, ctx);
        goto after_9;
    // 0x80073EB8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_9:
    // 0x80073EBC: jal         0x80036BCC
    // 0x80073EC0: nop

    func_80036BCC_11FCC(rdram, ctx);
        goto after_10;
    // 0x80073EC0: nop

    after_10:
    // 0x80073EC4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80073EC8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80073ECC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80073ED0: jr          $ra
    // 0x80073ED4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80073ED4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80073ED8: nop

    // 0x80073EDC: nop

;}
RECOMP_FUNC void func_80061724_3CB24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80061724: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80061728: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8006172C: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80061730: addiu       $v1, $v1, -0x7790
    ctx->r3 = ADD32(ctx->r3, -0X7790);
    // 0x80061734: addiu       $a1, $v1, 0x3D4
    ctx->r5 = ADD32(ctx->r3, 0X3D4);
    // 0x80061738: sltu        $v0, $v1, $a1
    ctx->r2 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x8006173C: beq         $v0, $zero, L_80061768
    if (ctx->r2 == 0) {
        // 0x80061740: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80061768;
    }
    // 0x80061740: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80061744: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
L_80061748:
    // 0x80061748: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8006174C: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x80061750: sh          $a2, 0xC2($v1)
    MEM_H(0XC2, ctx->r3) = ctx->r6;
    // 0x80061754: addiu       $v1, $v1, 0xC4
    ctx->r3 = ADD32(ctx->r3, 0XC4);
    // 0x80061758: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x8006175C: sltu        $v0, $v1, $a1
    ctx->r2 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x80061760: bne         $v0, $zero, L_80061748
    if (ctx->r2 != 0) {
        // 0x80061764: nop
    
            goto L_80061748;
    }
    // 0x80061764: nop

L_80061768:
    // 0x80061768: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x8006176C: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x80061770: beq         $v0, $zero, L_80061784
    if (ctx->r2 == 0) {
        // 0x80061774: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80061784;
    }
    // 0x80061774: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80061778: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8006177C: jal         0x80036B00
    // 0x80061780: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_0;
    // 0x80061780: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
L_80061784:
    // 0x80061784: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80061788: sw          $zero, 0x3FF0($at)
    MEM_W(0X3FF0, ctx->r1) = 0;
    // 0x8006178C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80061790: jr          $ra
    // 0x80061794: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80061794: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800281BC_35BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800281BC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x800281C0: jr          $ra
    // 0x800281C4: sw          $a0, 0x6CA8($at)
    MEM_W(0X6CA8, ctx->r1) = ctx->r4;
    TRACE_RETURN()
    return;
    // 0x800281C4: sw          $a0, 0x6CA8($at)
    MEM_W(0X6CA8, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_80081A88_5CE88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80081A88: jr          $ra
    // 0x80081A8C: subu        $v0, $a1, $a0
    ctx->r2 = SUB32(ctx->r5, ctx->r4);
    TRACE_RETURN()
    return;
    // 0x80081A8C: subu        $v0, $a1, $a0
    ctx->r2 = SUB32(ctx->r5, ctx->r4);
;}
RECOMP_FUNC void func_800572DC_326DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800572DC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800572E0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800572E4: lui         $s0, 0x801A
    ctx->r16 = S32(0X801A << 16);
    // 0x800572E8: lw          $s0, -0x5858($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X5858);
    // 0x800572EC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x800572F0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x800572F4: addiu       $a3, $zero, 0xD
    ctx->r7 = ADD32(0, 0XD);
    // 0x800572F8: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x800572FC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80057300: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80057304: jal         0x8003055C
    // 0x80057308: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003055C_B95C(rdram, ctx);
        goto after_0;
    // 0x80057308: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8005730C: addiu       $v1, $s0, 0x14
    ctx->r3 = ADD32(ctx->r16, 0X14);
    // 0x80057310: sll         $v0, $v1, 8
    ctx->r2 = S32(ctx->r3 << 8);
    // 0x80057314: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80057318: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
    // 0x8005731C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80057320: addu        $s0, $v1, $zero
    ctx->r16 = ADD32(ctx->r3, 0);
    // 0x80057324: addu        $t2, $zero, $zero
    ctx->r10 = ADD32(0, 0);
    // 0x80057328: lui         $t3, 0xFF
    ctx->r11 = S32(0XFF << 16);
    // 0x8005732C: ori         $t3, $t3, 0xFFFF
    ctx->r11 = ctx->r11 | 0XFFFF;
    // 0x80057330: addiu       $t7, $zero, 0x64
    ctx->r15 = ADD32(0, 0X64);
    // 0x80057334: addiu       $t1, $zero, 0x80
    ctx->r9 = ADD32(0, 0X80);
    // 0x80057338: addiu       $t6, $zero, 0xC0
    ctx->r14 = ADD32(0, 0XC0);
    // 0x8005733C: addiu       $t5, $zero, 0x88
    ctx->r13 = ADD32(0, 0X88);
    // 0x80057340: addiu       $t4, $zero, 0x3E77
    ctx->r12 = ADD32(0, 0X3E77);
    // 0x80057344: addiu       $a3, $zero, -0x40
    ctx->r7 = ADD32(0, -0X40);
L_80057348:
    // 0x80057348: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8005734C: addiu       $t0, $zero, 0x40
    ctx->r8 = ADD32(0, 0X40);
    // 0x80057350: addiu       $a1, $zero, -0x40
    ctx->r5 = ADD32(0, -0X40);
L_80057354:
    // 0x80057354: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80057358: and         $v0, $a0, $t3
    ctx->r2 = ctx->r4 & ctx->r11;
    // 0x8005735C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80057360: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x80057364: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80057368: sb          $t7, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r15;
    // 0x8005736C: sb          $t1, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r9;
    // 0x80057370: sb          $t1, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r9;
    // 0x80057374: sb          $t1, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r9;
    // 0x80057378: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8005737C: lhu         $v1, -0x730C($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X730C);
    // 0x80057380: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80057384: sb          $t6, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r14;
    // 0x80057388: sb          $t5, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r13;
    // 0x8005738C: sh          $t4, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r12;
    // 0x80057390: sh          $t0, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r8;
    // 0x80057394: sh          $t0, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r8;
    // 0x80057398: andi        $v1, $v1, 0x3F
    ctx->r3 = ctx->r3 & 0X3F;
    // 0x8005739C: addu        $v0, $a1, $v1
    ctx->r2 = ADD32(ctx->r5, ctx->r3);
    // 0x800573A0: addu        $v1, $a3, $v1
    ctx->r3 = ADD32(ctx->r7, ctx->r3);
    // 0x800573A4: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x800573A8: sh          $v1, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r3;
    // 0x800573AC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x800573B0: slti        $v0, $a2, 0x7
    ctx->r2 = SIGNED(ctx->r6) < 0X7 ? 1 : 0;
    // 0x800573B4: bne         $v0, $zero, L_80057354
    if (ctx->r2 != 0) {
        // 0x800573B8: addiu       $a1, $a1, 0x40
        ctx->r5 = ADD32(ctx->r5, 0X40);
            goto L_80057354;
    }
    // 0x800573B8: addiu       $a1, $a1, 0x40
    ctx->r5 = ADD32(ctx->r5, 0X40);
    // 0x800573BC: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
    // 0x800573C0: slti        $v0, $t2, 0x5
    ctx->r2 = SIGNED(ctx->r10) < 0X5 ? 1 : 0;
    // 0x800573C4: bne         $v0, $zero, L_80057348
    if (ctx->r2 != 0) {
        // 0x800573C8: addiu       $a3, $a3, 0x40
        ctx->r7 = ADD32(ctx->r7, 0X40);
            goto L_80057348;
    }
    // 0x800573C8: addiu       $a3, $a3, 0x40
    ctx->r7 = ADD32(ctx->r7, 0X40);
    // 0x800573CC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x800573D0: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x800573D4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x800573D8: addiu       $a2, $s0, -0x14
    ctx->r6 = ADD32(ctx->r16, -0X14);
    // 0x800573DC: jal         0x8002FD5C
    // 0x800573E0: addiu       $a0, $a0, 0xA8
    ctx->r4 = ADD32(ctx->r4, 0XA8);
    func_8002FD5C_B15C(rdram, ctx);
        goto after_1;
    // 0x800573E0: addiu       $a0, $a0, 0xA8
    ctx->r4 = ADD32(ctx->r4, 0XA8);
    after_1:
    // 0x800573E4: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x800573E8: sw          $s0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r16;
    // 0x800573EC: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x800573F0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800573F4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800573F8: jr          $ra
    // 0x800573FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x800573FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80037F78_13378(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80037F78: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80037F7C: lhu         $v0, 0x49AC($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X49AC);
    // 0x80037F80: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80037F84: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80037F88: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80037F8C: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80037F90: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80037F94: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80037F98: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80037F9C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80037FA0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80037FA4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80037FA8: bne         $v0, $zero, L_80038518
    if (ctx->r2 != 0) {
        // 0x80037FAC: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_80038518;
    }
    // 0x80037FAC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80037FB0: lui         $s5, 0x8020
    ctx->r21 = S32(0X8020 << 16);
    // 0x80037FB4: addiu       $s5, $s5, 0x43E0
    ctx->r21 = ADD32(ctx->r21, 0X43E0);
    // 0x80037FB8: lw          $a3, 0x0($s5)
    ctx->r7 = MEM_W(ctx->r21, 0X0);
    // 0x80037FBC: lui         $t3, 0x8020
    ctx->r11 = S32(0X8020 << 16);
    // 0x80037FC0: lw          $t3, 0x43F0($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X43F0);
    // 0x80037FC4: subu        $s4, $a3, $t3
    ctx->r20 = SUB32(ctx->r7, ctx->r11);
    // 0x80037FC8: mult        $s4, $s4
    result = S64(S32(ctx->r20)) * S64(S32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80037FCC: mflo        $v1
    ctx->r3 = lo;
    // 0x80037FD0: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x80037FD4: lw          $t1, 0x43E8($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X43E8);
    // 0x80037FD8: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x80037FDC: lw          $t7, 0x43F8($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X43F8);
    // 0x80037FE0: subu        $s3, $t1, $t7
    ctx->r19 = SUB32(ctx->r9, ctx->r15);
    // 0x80037FE4: mult        $s3, $s3
    result = S64(S32(ctx->r19)) * S64(S32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80037FE8: mflo        $v0
    ctx->r2 = lo;
    // 0x80037FEC: lui         $s1, 0x801A
    ctx->r17 = S32(0X801A << 16);
    // 0x80037FF0: lw          $s1, -0x5858($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X5858);
    // 0x80037FF4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80037FF8: addu        $s0, $v1, $v0
    ctx->r16 = ADD32(ctx->r3, ctx->r2);
    // 0x80037FFC: jal         0x80032424
    // 0x80038000: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80032424_D824(rdram, ctx);
        goto after_0;
    // 0x80038000: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80038004: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80038008: beq         $s2, $zero, L_80038044
    if (ctx->r18 == 0) {
        // 0x8003800C: nop
    
            goto L_80038044;
    }
    // 0x8003800C: nop

    // 0x80038010: div         $zero, $s0, $s2
    lo = S32(S64(S32(ctx->r16)) / S64(S32(ctx->r18))); hi = S32(S64(S32(ctx->r16)) % S64(S32(ctx->r18)));
    // 0x80038014: bne         $s2, $zero, L_80038020
    if (ctx->r18 != 0) {
        // 0x80038018: nop
    
            goto L_80038020;
    }
    // 0x80038018: nop

    // 0x8003801C: break       7
    do_break(2147713052);
L_80038020:
    // 0x80038020: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80038024: bne         $s2, $at, L_80038038
    if (ctx->r18 != ctx->r1) {
        // 0x80038028: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80038038;
    }
    // 0x80038028: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8003802C: bne         $s0, $at, L_80038038
    if (ctx->r16 != ctx->r1) {
        // 0x80038030: nop
    
            goto L_80038038;
    }
    // 0x80038030: nop

    // 0x80038034: break       6
    do_break(2147713076);
L_80038038:
    // 0x80038038: mflo        $v0
    ctx->r2 = lo;
    // 0x8003803C: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80038040: sra         $s2, $v0, 1
    ctx->r18 = S32(SIGNED(ctx->r2) >> 1);
L_80038044:
    // 0x80038044: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80038048: lw          $v0, -0x72E0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X72E0);
    // 0x8003804C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x80038050: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80038054: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80038058: sw          $v0, -0x72E0($at)
    MEM_W(-0X72E0, ctx->r1) = ctx->r2;
    // 0x8003805C: jal         0x80032664
    // 0x80038060: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_80032664_DA64(rdram, ctx);
        goto after_1;
    // 0x80038060: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_1:
    // 0x80038064: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80038068: lh          $a0, 0x4402($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4402);
    // 0x8003806C: jal         0x800324B4
    // 0x80038070: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    func_800324B4_D8B4(rdram, ctx);
        goto after_2;
    // 0x80038070: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    after_2:
    // 0x80038074: nop

    // 0x80038078: mult        $s2, $v0
    result = S64(S32(ctx->r18)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003807C: mflo        $v0
    ctx->r2 = lo;
    // 0x80038080: lui         $v1, 0x2AAA
    ctx->r3 = S32(0X2AAA << 16);
    // 0x80038084: ori         $v1, $v1, 0xAAAB
    ctx->r3 = ctx->r3 | 0XAAAB;
    // 0x80038088: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003808C: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x80038090: addiu       $s3, $s3, 0x4430
    ctx->r19 = ADD32(ctx->r19, 0X4430);
    // 0x80038094: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80038098: lw          $a0, -0xB90($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XB90);
    // 0x8003809C: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x800380A0: mfhi        $s7
    ctx->r23 = hi;
    // 0x800380A4: sra         $v1, $s7, 2
    ctx->r3 = S32(SIGNED(ctx->r23) >> 2);
    // 0x800380A8: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x800380AC: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x800380B0: addiu       $v0, $s3, 0x268
    ctx->r2 = ADD32(ctx->r19, 0X268);
    // 0x800380B4: sltu        $v0, $s3, $v0
    ctx->r2 = ctx->r19 < ctx->r2 ? 1 : 0;
    // 0x800380B8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800380BC: beq         $v0, $zero, L_80038510
    if (ctx->r2 == 0) {
        // 0x800380C0: sw          $a0, -0xB90($at)
        MEM_W(-0XB90, ctx->r1) = ctx->r4;
            goto L_80038510;
    }
    // 0x800380C0: sw          $a0, -0xB90($at)
    MEM_W(-0XB90, ctx->r1) = ctx->r4;
    // 0x800380C4: addiu       $s6, $s5, 0x22
    ctx->r22 = ADD32(ctx->r21, 0X22);
    // 0x800380C8: lui         $fp, 0xFF
    ctx->r30 = S32(0XFF << 16);
    // 0x800380CC: addiu       $s0, $s3, 0x2F
    ctx->r16 = ADD32(ctx->r19, 0X2F);
L_800380D0:
    // 0x800380D0: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x800380D4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x800380D8: beq         $v0, $zero, L_800382D4
    if (ctx->r2 == 0) {
        // 0x800380DC: addiu       $a1, $s3, 0x4
        ctx->r5 = ADD32(ctx->r19, 0X4);
            goto L_800382D4;
    }
    // 0x800380DC: addiu       $a1, $s3, 0x4
    ctx->r5 = ADD32(ctx->r19, 0X4);
    // 0x800380E0: addiu       $a0, $s3, 0x10
    ctx->r4 = ADD32(ctx->r19, 0X10);
    // 0x800380E4: jal         0x8009A3B4
    // 0x800380E8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x800380E8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x800380EC: addiu       $a0, $s3, 0x18
    ctx->r4 = ADD32(ctx->r19, 0X18);
    // 0x800380F0: addiu       $a1, $s3, 0xC
    ctx->r5 = ADD32(ctx->r19, 0XC);
    // 0x800380F4: jal         0x8009A3B4
    // 0x800380F8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x800380F8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_4:
    // 0x800380FC: lbu         $v0, -0x2E($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0X2E);
    // 0x80038100: bne         $v0, $zero, L_80038200
    if (ctx->r2 != 0) {
        // 0x80038104: lh          $t3, -0xB($s0)
        ctx->r11 = MEM_H(ctx->r16, -0XB);
            goto L_80038200;
    }
    // 0x80038104: lh          $t3, -0xB($s0)
    ctx->r11 = MEM_H(ctx->r16, -0XB);
    // 0x80038108: mult        $t3, $t3
    result = S64(S32(ctx->r11)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003810C: mflo        $v0
    ctx->r2 = lo;
    // 0x80038110: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x80038114: lw          $a1, -0xB90($a1)
    ctx->r5 = MEM_W(ctx->r5, -0XB90);
    // 0x80038118: div         $zero, $a1, $v0
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r2)));
    // 0x8003811C: bne         $v0, $zero, L_80038128
    if (ctx->r2 != 0) {
        // 0x80038120: nop
    
            goto L_80038128;
    }
    // 0x80038120: nop

    // 0x80038124: break       7
    do_break(2147713316);
L_80038128:
    // 0x80038128: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8003812C: bne         $v0, $at, L_80038140
    if (ctx->r2 != ctx->r1) {
        // 0x80038130: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80038140;
    }
    // 0x80038130: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80038134: bne         $a1, $at, L_80038140
    if (ctx->r5 != ctx->r1) {
        // 0x80038138: nop
    
            goto L_80038140;
    }
    // 0x80038138: nop

    // 0x8003813C: break       6
    do_break(2147713340);
L_80038140:
    // 0x80038140: mflo        $a1
    ctx->r5 = lo;
    // 0x80038144: lh          $a0, -0xF($s0)
    ctx->r4 = MEM_H(ctx->r16, -0XF);
    // 0x80038148: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8003814C: lw          $v0, -0x72E0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X72E0);
    // 0x80038150: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80038154: mflo        $a0
    ctx->r4 = lo;
    // 0x80038158: lh          $v1, -0x13($s0)
    ctx->r3 = MEM_H(ctx->r16, -0X13);
    // 0x8003815C: lh          $v0, 0x0($s6)
    ctx->r2 = MEM_H(ctx->r22, 0X0);
    // 0x80038160: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80038164: srl         $a0, $a0, 8
    ctx->r4 = S32(U32(ctx->r4) >> 8);
    // 0x80038168: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8003816C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80038170: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80038174: andi        $v0, $v0, 0x7FFF
    ctx->r2 = ctx->r2 & 0X7FFF;
    // 0x80038178: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x8003817C: mult        $v0, $t3
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80038180: mflo        $v0
    ctx->r2 = lo;
    // 0x80038184: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80038188: sw          $v0, -0x2B($s0)
    MEM_W(-0X2B, ctx->r16) = ctx->r2;
    // 0x8003818C: lh          $v0, -0x11($s0)
    ctx->r2 = MEM_H(ctx->r16, -0X11);
    // 0x80038190: lh          $a1, -0x2($s6)
    ctx->r5 = MEM_H(ctx->r22, -0X2);
    // 0x80038194: sll         $a2, $v0, 16
    ctx->r6 = S32(ctx->r2 << 16);
    // 0x80038198: slti        $v0, $a1, 0x800
    ctx->r2 = SIGNED(ctx->r5) < 0X800 ? 1 : 0;
    // 0x8003819C: beq         $v0, $zero, L_800381BC
    if (ctx->r2 == 0) {
        // 0x800381A0: lui         $v0, 0x4EC4
        ctx->r2 = S32(0X4EC4 << 16);
            goto L_800381BC;
    }
    // 0x800381A0: lui         $v0, 0x4EC4
    ctx->r2 = S32(0X4EC4 << 16);
    // 0x800381A4: ori         $v0, $v0, 0xEC4F
    ctx->r2 = ctx->r2 | 0XEC4F;
    // 0x800381A8: sll         $v1, $a1, 4
    ctx->r3 = S32(ctx->r5 << 4);
    // 0x800381AC: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x800381B0: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x800381B4: j           L_800381D8
    // 0x800381B8: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
        goto L_800381D8;
    // 0x800381B8: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
L_800381BC:
    // 0x800381BC: lui         $a0, 0x4EC4
    ctx->r4 = S32(0X4EC4 << 16);
    // 0x800381C0: ori         $a0, $a0, 0xEC4F
    ctx->r4 = ctx->r4 | 0XEC4F;
    // 0x800381C4: addiu       $v0, $a1, -0x1000
    ctx->r2 = ADD32(ctx->r5, -0X1000);
    // 0x800381C8: sll         $v1, $v0, 4
    ctx->r3 = S32(ctx->r2 << 4);
    // 0x800381CC: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x800381D0: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x800381D4: mult        $v1, $a0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
L_800381D8:
    // 0x800381D8: lw          $a0, -0x6E($s6)
    ctx->r4 = MEM_W(ctx->r22, -0X6E);
    // 0x800381DC: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x800381E0: mfhi        $s7
    ctx->r23 = hi;
    // 0x800381E4: sra         $v0, $s7, 2
    ctx->r2 = S32(SIGNED(ctx->r23) >> 2);
    // 0x800381E8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x800381EC: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x800381F0: sll         $v0, $v0, 11
    ctx->r2 = S32(ctx->r2 << 11);
    // 0x800381F4: subu        $v0, $a2, $v0
    ctx->r2 = SUB32(ctx->r6, ctx->r2);
    // 0x800381F8: j           L_80038228
    // 0x800381FC: sw          $v0, -0x27($s0)
    MEM_W(-0X27, ctx->r16) = ctx->r2;
        goto L_80038228;
    // 0x800381FC: sw          $v0, -0x27($s0)
    MEM_W(-0X27, ctx->r16) = ctx->r2;
L_80038200:
    // 0x80038200: lh          $v0, -0xF($s0)
    ctx->r2 = MEM_H(ctx->r16, -0XF);
    // 0x80038204: lw          $v1, -0x2B($s0)
    ctx->r3 = MEM_W(ctx->r16, -0X2B);
    // 0x80038208: lh          $a0, -0xD($s0)
    ctx->r4 = MEM_H(ctx->r16, -0XD);
    // 0x8003820C: lw          $a1, -0x27($s0)
    ctx->r5 = MEM_W(ctx->r16, -0X27);
    // 0x80038210: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80038214: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80038218: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x8003821C: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x80038220: sw          $v1, -0x2B($s0)
    MEM_W(-0X2B, ctx->r16) = ctx->r3;
    // 0x80038224: sw          $a1, -0x27($s0)
    MEM_W(-0X27, ctx->r16) = ctx->r5;
L_80038228:
    // 0x80038228: lbu         $v0, -0x2E($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0X2E);
    // 0x8003822C: beq         $v0, $zero, L_8003827C
    if (ctx->r2 == 0) {
        // 0x80038230: nop
    
            goto L_8003827C;
    }
    // 0x80038230: nop

    // 0x80038234: lh          $v0, -0xB($s0)
    ctx->r2 = MEM_H(ctx->r16, -0XB);
    // 0x80038238: lw          $v1, -0x2B($s0)
    ctx->r3 = MEM_W(ctx->r16, -0X2B);
    // 0x8003823C: sll         $a0, $v0, 21
    ctx->r4 = S32(ctx->r2 << 21);
    // 0x80038240: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80038244: bne         $v0, $zero, L_80038264
    if (ctx->r2 != 0) {
        // 0x80038248: subu        $v0, $v1, $a0
        ctx->r2 = SUB32(ctx->r3, ctx->r4);
            goto L_80038264;
    }
    // 0x80038248: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
L_8003824C:
    // 0x8003824C: sw          $v0, -0x2B($s0)
    MEM_W(-0X2B, ctx->r16) = ctx->r2;
    // 0x80038250: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80038254: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80038258: beq         $v0, $zero, L_8003824C
    if (ctx->r2 == 0) {
        // 0x8003825C: subu        $v0, $v1, $a0
        ctx->r2 = SUB32(ctx->r3, ctx->r4);
            goto L_8003824C;
    }
    // 0x8003825C: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x80038260: lw          $v1, -0x2B($s0)
    ctx->r3 = MEM_W(ctx->r16, -0X2B);
L_80038264:
    // 0x80038264: bgez        $v1, L_8003827C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80038268: nop
    
            goto L_8003827C;
    }
    // 0x80038268: nop

L_8003826C:
    // 0x8003826C: addu        $v0, $v1, $a0
    ctx->r2 = ADD32(ctx->r3, ctx->r4);
    // 0x80038270: sw          $v0, -0x2B($s0)
    MEM_W(-0X2B, ctx->r16) = ctx->r2;
    // 0x80038274: bltz        $v0, L_8003826C
    if (SIGNED(ctx->r2) < 0) {
        // 0x80038278: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8003826C;
    }
    // 0x80038278: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_8003827C:
    // 0x8003827C: lh          $v0, -0x9($s0)
    ctx->r2 = MEM_H(ctx->r16, -0X9);
    // 0x80038280: lw          $v1, -0x27($s0)
    ctx->r3 = MEM_W(ctx->r16, -0X27);
    // 0x80038284: sll         $a0, $v0, 21
    ctx->r4 = S32(ctx->r2 << 21);
    // 0x80038288: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8003828C: bne         $v0, $zero, L_800382AC
    if (ctx->r2 != 0) {
        // 0x80038290: subu        $v0, $v1, $a0
        ctx->r2 = SUB32(ctx->r3, ctx->r4);
            goto L_800382AC;
    }
    // 0x80038290: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
L_80038294:
    // 0x80038294: sw          $v0, -0x27($s0)
    MEM_W(-0X27, ctx->r16) = ctx->r2;
    // 0x80038298: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8003829C: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x800382A0: beq         $v0, $zero, L_80038294
    if (ctx->r2 == 0) {
        // 0x800382A4: subu        $v0, $v1, $a0
        ctx->r2 = SUB32(ctx->r3, ctx->r4);
            goto L_80038294;
    }
    // 0x800382A4: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x800382A8: lw          $v1, -0x27($s0)
    ctx->r3 = MEM_W(ctx->r16, -0X27);
L_800382AC:
    // 0x800382AC: bgez        $v1, L_800382C4
    if (SIGNED(ctx->r3) >= 0) {
        // 0x800382B0: nop
    
            goto L_800382C4;
    }
    // 0x800382B0: nop

L_800382B4:
    // 0x800382B4: addu        $v0, $v1, $a0
    ctx->r2 = ADD32(ctx->r3, ctx->r4);
    // 0x800382B8: sw          $v0, -0x27($s0)
    MEM_W(-0X27, ctx->r16) = ctx->r2;
    // 0x800382BC: bltz        $v0, L_800382B4
    if (SIGNED(ctx->r2) < 0) {
        // 0x800382C0: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_800382B4;
    }
    // 0x800382C0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_800382C4:
    // 0x800382C4: lh          $v0, -0x2B($s0)
    ctx->r2 = MEM_H(ctx->r16, -0X2B);
    // 0x800382C8: lh          $v1, -0x27($s0)
    ctx->r3 = MEM_H(ctx->r16, -0X27);
    // 0x800382CC: sh          $v0, -0x23($s0)
    MEM_H(-0X23, ctx->r16) = ctx->r2;
    // 0x800382D0: sh          $v1, -0x21($s0)
    MEM_H(-0X21, ctx->r16) = ctx->r3;
L_800382D4:
    // 0x800382D4: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x800382D8: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x800382DC: beql        $v0, $zero, L_800384FC
    if (ctx->r2 == 0) {
        // 0x800382E0: addiu       $s3, $s3, 0x38
        ctx->r19 = ADD32(ctx->r19, 0X38);
            goto L_800384FC;
    }
    goto skip_0;
    // 0x800382E0: addiu       $s3, $s3, 0x38
    ctx->r19 = ADD32(ctx->r19, 0X38);
    skip_0:
    // 0x800382E4: addu        $t2, $zero, $zero
    ctx->r10 = ADD32(0, 0);
    // 0x800382E8: lh          $t3, -0xB($s0)
    ctx->r11 = MEM_H(ctx->r16, -0XB);
    // 0x800382EC: lh          $t7, -0x9($s0)
    ctx->r15 = MEM_H(ctx->r16, -0X9);
    // 0x800382F0: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x800382F4: lh          $a0, -0x21($s0)
    ctx->r4 = MEM_H(ctx->r16, -0X21);
    // 0x800382F8: lhu         $v1, -0x7($s0)
    ctx->r3 = MEM_HU(ctx->r16, -0X7);
    // 0x800382FC: lw          $s4, 0x5($s0)
    ctx->r20 = MEM_W(ctx->r16, 0X5);
    // 0x80038300: sll         $t0, $v0, 25
    ctx->r8 = S32(ctx->r2 << 25);
    // 0x80038304: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x80038308: bgez        $a0, L_80038314
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8003830C: sll         $t8, $v1, 14
        ctx->r24 = S32(ctx->r3 << 14);
            goto L_80038314;
    }
    // 0x8003830C: sll         $t8, $v1, 14
    ctx->r24 = S32(ctx->r3 << 14);
    // 0x80038310: addiu       $v0, $a0, 0x1F
    ctx->r2 = ADD32(ctx->r4, 0X1F);
L_80038314:
    // 0x80038314: lh          $v1, -0x23($s0)
    ctx->r3 = MEM_H(ctx->r16, -0X23);
    // 0x80038318: sra         $v0, $v0, 5
    ctx->r2 = S32(SIGNED(ctx->r2) >> 5);
    // 0x8003831C: bgez        $v1, L_80038328
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80038320: addu        $s2, $v0, $zero
        ctx->r18 = ADD32(ctx->r2, 0);
            goto L_80038328;
    }
    // 0x80038320: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80038324: addiu       $v1, $v1, 0x1F
    ctx->r3 = ADD32(ctx->r3, 0X1F);
L_80038328:
    // 0x80038328: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x8003832C: subu        $v0, $a0, $v0
    ctx->r2 = SUB32(ctx->r4, ctx->r2);
    // 0x80038330: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80038334: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80038338: negu        $t1, $v0
    ctx->r9 = SUB32(0, ctx->r2);
    // 0x8003833C: slti        $v0, $t1, 0xF0
    ctx->r2 = SIGNED(ctx->r9) < 0XF0 ? 1 : 0;
    // 0x80038340: beq         $v0, $zero, L_80038498
    if (ctx->r2 == 0) {
        // 0x80038344: sra         $t9, $v1, 5
        ctx->r25 = S32(SIGNED(ctx->r3) >> 5);
            goto L_80038498;
    }
    // 0x80038344: sra         $t9, $v1, 5
    ctx->r25 = S32(SIGNED(ctx->r3) >> 5);
    // 0x80038348: lui         $s5, 0xFF00
    ctx->r21 = S32(0XFF00 << 16);
    // 0x8003834C: addiu       $t5, $zero, 0x20
    ctx->r13 = ADD32(0, 0X20);
    // 0x80038350: lui         $t6, 0xFF
    ctx->r14 = S32(0XFF << 16);
    // 0x80038354: ori         $t6, $t6, 0xFFFF
    ctx->r14 = ctx->r14 | 0XFFFF;
L_80038358:
    // 0x80038358: lh          $v1, -0x23($s0)
    ctx->r3 = MEM_H(ctx->r16, -0X23);
    // 0x8003835C: addu        $a2, $t9, $zero
    ctx->r6 = ADD32(ctx->r25, 0);
    // 0x80038360: bgez        $v1, L_8003836C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80038364: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_8003836C;
    }
    // 0x80038364: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x80038368: addiu       $v0, $v1, 0x1F
    ctx->r2 = ADD32(ctx->r3, 0X1F);
L_8003836C:
    // 0x8003836C: sra         $v0, $v0, 5
    ctx->r2 = S32(SIGNED(ctx->r2) >> 5);
    // 0x80038370: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x80038374: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x80038378: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8003837C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80038380: negu        $a3, $v0
    ctx->r7 = SUB32(0, ctx->r2);
    // 0x80038384: slti        $v0, $a3, 0x140
    ctx->r2 = SIGNED(ctx->r7) < 0X140 ? 1 : 0;
    // 0x80038388: beql        $v0, $zero, L_8003847C
    if (ctx->r2 == 0) {
        // 0x8003838C: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_8003847C;
    }
    goto skip_1;
    // 0x8003838C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_1:
    // 0x80038390: nop

    // 0x80038394: mult        $s2, $t3
    result = S64(S32(ctx->r18)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80038398: mflo        $t4
    ctx->r12 = lo;
    // 0x8003839C: addu        $v0, $t4, $a2
    ctx->r2 = ADD32(ctx->r12, ctx->r6);
L_800383A0:
    // 0x800383A0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800383A4: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x800383A8: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x800383AC: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x800383B0: slt         $v0, $a2, $t3
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x800383B4: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x800383B8: and         $a2, $a2, $v0
    ctx->r6 = ctx->r6 & ctx->r2;
    // 0x800383BC: lui         $s7, 0xFFFF
    ctx->r23 = S32(0XFFFF << 16);
    // 0x800383C0: and         $v0, $a0, $s7
    ctx->r2 = ctx->r4 & ctx->r23;
    // 0x800383C4: srl         $v0, $v0, 16
    ctx->r2 = S32(U32(ctx->r2) >> 16);
    // 0x800383C8: ori         $s7, $zero, 0xFFFF
    ctx->r23 = 0 | 0XFFFF;
    // 0x800383CC: beql        $v0, $s7, L_8003846C
    if (ctx->r2 == ctx->r23) {
        // 0x800383D0: addiu       $a3, $a3, 0x20
        ctx->r7 = ADD32(ctx->r7, 0X20);
            goto L_8003846C;
    }
    goto skip_2;
    // 0x800383D0: addiu       $a3, $a3, 0x20
    ctx->r7 = ADD32(ctx->r7, 0X20);
    skip_2:
    // 0x800383D4: and         $v0, $a0, $fp
    ctx->r2 = ctx->r4 & ctx->r30;
    // 0x800383D8: and         $v1, $a0, $s5
    ctx->r3 = ctx->r4 & ctx->r21;
    // 0x800383DC: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x800383E0: addu        $a0, $a0, $t8
    ctx->r4 = ADD32(ctx->r4, ctx->r24);
    // 0x800383E4: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x800383E8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x800383EC: srl         $v1, $v1, 24
    ctx->r3 = S32(U32(ctx->r3) >> 24);
    // 0x800383F0: sh          $a3, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r7;
    // 0x800383F4: sh          $t1, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r9;
    // 0x800383F8: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
    // 0x800383FC: sb          $v1, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r3;
    // 0x80038400: beq         $t0, $zero, L_8003840C
    if (ctx->r8 == 0) {
        // 0x80038404: sh          $a0, 0xE($s1)
        MEM_H(0XE, ctx->r17) = ctx->r4;
            goto L_8003840C;
    }
    // 0x80038404: sh          $a0, 0xE($s1)
    MEM_H(0XE, ctx->r17) = ctx->r4;
    // 0x80038408: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
L_8003840C:
    // 0x8003840C: ori         $v0, $t0, 0x64
    ctx->r2 = ctx->r8 | 0X64;
    // 0x80038410: sll         $v1, $t0, 3
    ctx->r3 = S32(ctx->r8 << 3);
    // 0x80038414: sb          $v0, 0x7($s1)
    MEM_B(0X7, ctx->r17) = ctx->r2;
    // 0x80038418: lbu         $v0, -0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0X3);
    // 0x8003841C: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x80038420: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80038424: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80038428: sb          $v0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r2;
    // 0x8003842C: lbu         $v0, -0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0X2);
    // 0x80038430: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
    // 0x80038434: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80038438: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8003843C: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
    // 0x80038440: lbu         $a0, -0x1($s0)
    ctx->r4 = MEM_BU(ctx->r16, -0X1);
    // 0x80038444: and         $v0, $a1, $t6
    ctx->r2 = ctx->r5 & ctx->r14;
    // 0x80038448: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8003844C: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x80038450: sh          $t5, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r13;
    // 0x80038454: sh          $t5, 0x10($s1)
    MEM_H(0X10, ctx->r17) = ctx->r13;
    // 0x80038458: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x8003845C: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x80038460: sb          $a0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r4;
    // 0x80038464: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x80038468: addiu       $a3, $a3, 0x20
    ctx->r7 = ADD32(ctx->r7, 0X20);
L_8003846C:
    // 0x8003846C: slti        $v0, $a3, 0x140
    ctx->r2 = SIGNED(ctx->r7) < 0X140 ? 1 : 0;
    // 0x80038470: bne         $v0, $zero, L_800383A0
    if (ctx->r2 != 0) {
        // 0x80038474: addu        $v0, $t4, $a2
        ctx->r2 = ADD32(ctx->r12, ctx->r6);
            goto L_800383A0;
    }
    // 0x80038474: addu        $v0, $t4, $a2
    ctx->r2 = ADD32(ctx->r12, ctx->r6);
    // 0x80038478: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8003847C:
    // 0x8003847C: slt         $v0, $s2, $t7
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80038480: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80038484: and         $s2, $s2, $v0
    ctx->r18 = ctx->r18 & ctx->r2;
    // 0x80038488: addiu       $t1, $t1, 0x20
    ctx->r9 = ADD32(ctx->r9, 0X20);
    // 0x8003848C: slti        $v0, $t1, 0xF0
    ctx->r2 = SIGNED(ctx->r9) < 0XF0 ? 1 : 0;
    // 0x80038490: bne         $v0, $zero, L_80038358
    if (ctx->r2 != 0) {
        // 0x80038494: nop
    
            goto L_80038358;
    }
    // 0x80038494: nop

L_80038498:
    // 0x80038498: beq         $t2, $zero, L_800384F4
    if (ctx->r10 == 0) {
        // 0x8003849C: addiu       $v0, $zero, 0xD0
        ctx->r2 = ADD32(0, 0XD0);
            goto L_800384F4;
    }
    // 0x8003849C: addiu       $v0, $zero, 0xD0
    ctx->r2 = ADD32(0, 0XD0);
    // 0x800384A0: lw          $s7, 0x14($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X14);
    // 0x800384A4: sw          $s7, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r23;
    // 0x800384A8: sb          $v0, 0x7($s1)
    MEM_B(0X7, ctx->r17) = ctx->r2;
    // 0x800384AC: slti        $v0, $t2, 0x91
    ctx->r2 = SIGNED(ctx->r10) < 0X91 ? 1 : 0;
    // 0x800384B0: beql        $v0, $zero, L_800384B8
    if (ctx->r2 == 0) {
        // 0x800384B4: addiu       $t2, $zero, 0x90
        ctx->r10 = ADD32(0, 0X90);
            goto L_800384B8;
    }
    goto skip_3;
    // 0x800384B4: addiu       $t2, $zero, 0x90
    ctx->r10 = ADD32(0, 0X90);
    skip_3:
L_800384B8:
    // 0x800384B8: sh          $t2, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r10;
    // 0x800384BC: lhu         $v1, -0x5($s0)
    ctx->r3 = MEM_HU(ctx->r16, -0X5);
    // 0x800384C0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x800384C4: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x800384C8: sh          $v0, 0x12($s1)
    MEM_H(0X12, ctx->r17) = ctx->r2;
    // 0x800384CC: sh          $v0, 0x10($s1)
    MEM_H(0X10, ctx->r17) = ctx->r2;
    // 0x800384D0: sh          $v1, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r3;
    // 0x800384D4: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x800384D8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x800384DC: lw          $v0, 0x497C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X497C);
    // 0x800384E0: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    // 0x800384E4: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x800384E8: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    // 0x800384EC: jal         0x8002FD30
    // 0x800384F0: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_8002FD30_B130(rdram, ctx);
        goto after_5;
    // 0x800384F0: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_5:
L_800384F4:
    // 0x800384F4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x800384F8: addiu       $s3, $s3, 0x38
    ctx->r19 = ADD32(ctx->r19, 0X38);
L_800384FC:
    // 0x800384FC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80038500: addiu       $v0, $v0, 0x4698
    ctx->r2 = ADD32(ctx->r2, 0X4698);
    // 0x80038504: sltu        $v0, $s3, $v0
    ctx->r2 = ctx->r19 < ctx->r2 ? 1 : 0;
    // 0x80038508: bne         $v0, $zero, L_800380D0
    if (ctx->r2 != 0) {
        // 0x8003850C: addiu       $s0, $s0, 0x38
        ctx->r16 = ADD32(ctx->r16, 0X38);
            goto L_800380D0;
    }
    // 0x8003850C: addiu       $s0, $s0, 0x38
    ctx->r16 = ADD32(ctx->r16, 0X38);
L_80038510:
    // 0x80038510: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80038514: sw          $s1, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r17;
L_80038518:
    // 0x80038518: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8003851C: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80038520: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80038524: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80038528: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8003852C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80038530: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80038534: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80038538: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8003853C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80038540: jr          $ra
    // 0x80038544: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80038544: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80038548: nop

    // 0x8003854C: nop

;}
RECOMP_FUNC void func_800654FC_408FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800654FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80065500: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80065504: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80065508: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8006550C: lw          $a0, -0x2378($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2378);
    // 0x80065510: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80065514: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80065518: jal         0x80070E98
    // 0x8006551C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80070E98_4C298(rdram, ctx);
        goto after_0;
    // 0x8006551C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80065520: lw          $v0, 0x6C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X6C);
    // 0x80065524: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80065528: sw          $v0, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r2;
    // 0x8006552C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80065530: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80065534: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80065538: jr          $ra
    // 0x8006553C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8006553C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80062EB4_3E2B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80062EB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80062EB8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80062EBC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80062EC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80062EC4: lw          $v0, 0x6C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X6C);
    // 0x80062EC8: lbu         $a0, 0x2($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X2);
    // 0x80062ECC: lbu         $v0, 0x1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1);
    // 0x80062ED0: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x80062ED4: jal         0x80060590
    // 0x80062ED8: or          $a0, $v0, $a0
    ctx->r4 = ctx->r2 | ctx->r4;
    func_80060590_3B990(rdram, ctx);
        goto after_0;
    // 0x80062ED8: or          $a0, $v0, $a0
    ctx->r4 = ctx->r2 | ctx->r4;
    after_0:
    // 0x80062EDC: lw          $v0, 0x6C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X6C);
    // 0x80062EE0: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x80062EE4: sw          $v0, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r2;
    // 0x80062EE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80062EEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80062EF0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80062EF4: jr          $ra
    // 0x80062EF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80062EF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8004BE00_27200(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004BE00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004BE04: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8004BE08: jal         0x8006036C
    // 0x8004BE0C: addiu       $a0, $zero, 0x4C0
    ctx->r4 = ADD32(0, 0X4C0);
    func_8006036C_3B76C(rdram, ctx);
        goto after_0;
    // 0x8004BE0C: addiu       $a0, $zero, 0x4C0
    ctx->r4 = ADD32(0, 0X4C0);
    after_0:
    // 0x8004BE10: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8004BE14: jr          $ra
    // 0x8004BE18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8004BE18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80093CEC_6F0EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80093CEC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80093CF0: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x80093CF4: addiu       $s0, $sp, 0x10
    ctx->r16 = ADD32(ctx->r29, 0X10);
    // 0x80093CF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80093CFC: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x80093D00: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80093D04: addiu       $v0, $zero, 0x7F00
    ctx->r2 = ADD32(0, 0X7F00);
    // 0x80093D08: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80093D0C: sh          $v0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r2;
    // 0x80093D10: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x80093D14: jal         0x8009A470
    // 0x80093D18: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x80093D18: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    after_0:
    // 0x80093D1C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80093D20: addiu       $a0, $a0, -0xC90
    ctx->r4 = ADD32(ctx->r4, -0XC90);
    // 0x80093D24: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80093D28: jal         0x8009A710
    // 0x80093D2C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x80093D2C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x80093D30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80093D34: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80093D38: jal         0x8009A5E0
    // 0x80093D3C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x80093D3C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x80093D40: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80093D44: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x80093D48: jr          $ra
    // 0x80093D4C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x80093D4C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_800692D8_446D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800692D8: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x800692DC: lhu         $v1, -0x43E($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X43E);
    // 0x800692E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800692E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x800692E8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x800692EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800692F0: bne         $v1, $v0, L_80069300
    if (ctx->r3 != ctx->r2) {
        // 0x800692F4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80069300;
    }
    // 0x800692F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800692F8: j           L_80069308
    // 0x800692FC: sb          $zero, 0x7C($s0)
    MEM_B(0X7C, ctx->r16) = 0;
        goto L_80069308;
    // 0x800692FC: sb          $zero, 0x7C($s0)
    MEM_B(0X7C, ctx->r16) = 0;
L_80069300:
    // 0x80069300: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80069304: sb          $v0, 0x7C($s0)
    MEM_B(0X7C, ctx->r16) = ctx->r2;
L_80069308:
    // 0x80069308: jal         0x8006855C
    // 0x8006930C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8006855C_4395C(rdram, ctx);
        goto after_0;
    // 0x8006930C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80069310: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80069314: sb          $v0, 0x7C($s0)
    MEM_B(0X7C, ctx->r16) = ctx->r2;
    // 0x80069318: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006931C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80069320: jr          $ra
    // 0x80069324: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80069324: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800667C4_41BC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800667C4: lui         $v0, 0x1A1F
    ctx->r2 = S32(0X1A1F << 16);
    // 0x800667C8: ori         $v0, $v0, 0x58D1
    ctx->r2 = ctx->r2 | 0X58D1;
    // 0x800667CC: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x800667D0: lbu         $a2, 0x72($a0)
    ctx->r6 = MEM_BU(ctx->r4, 0X72);
    // 0x800667D4: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x800667D8: addiu       $a1, $a1, -0x7790
    ctx->r5 = ADD32(ctx->r5, -0X7790);
    // 0x800667DC: subu        $a1, $a0, $a1
    ctx->r5 = SUB32(ctx->r4, ctx->r5);
    // 0x800667E0: mult        $a1, $v0
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800667E4: mflo        $a1
    ctx->r5 = lo;
    // 0x800667E8: lw          $v0, 0x6C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X6C);
    // 0x800667EC: lui         $a3, 0x40
    ctx->r7 = S32(0X40 << 16);
    // 0x800667F0: ori         $a3, $a3, 0x2800
    ctx->r7 = ctx->r7 | 0X2800;
    // 0x800667F4: sh          $zero, 0xBC($a0)
    MEM_H(0XBC, ctx->r4) = 0;
    // 0x800667F8: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x800667FC: or          $v1, $v1, $a3
    ctx->r3 = ctx->r3 | ctx->r7;
    // 0x80066800: addiu       $v0, $v0, 0x5
    ctx->r2 = ADD32(ctx->r2, 0X5);
    // 0x80066804: sw          $v0, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r2;
    // 0x80066808: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8006680C: sb          $a2, 0x72($a0)
    MEM_B(0X72, ctx->r4) = ctx->r6;
    // 0x80066810: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80066814: sb          $v0, 0x5990($at)
    MEM_B(0X5990, ctx->r1) = ctx->r2;
    // 0x80066818: lui         $v0, 0x2
    ctx->r2 = S32(0X2 << 16);
    // 0x8006681C: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x80066820: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80066824: lw          $v1, 0x77F0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X77F0);
    // 0x80066828: sra         $a1, $a1, 2
    ctx->r5 = S32(SIGNED(ctx->r5) >> 2);
    // 0x8006682C: sllv        $v0, $v0, $a1
    ctx->r2 = S32(ctx->r2 << (ctx->r5 & 31));
    // 0x80066830: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
    // 0x80066834: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80066838: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8006683C: sw          $v1, 0x77F0($at)
    MEM_W(0X77F0, ctx->r1) = ctx->r3;
    // 0x80066840: jr          $ra
    // 0x80066844: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x80066844: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_8006F258_4A658(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006F258: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006F25C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8006F260: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8006F264: addiu       $a0, $s0, 0x188
    ctx->r4 = ADD32(ctx->r16, 0X188);
    // 0x8006F268: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006F26C: lbu         $v1, 0x6($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X6);
    // 0x8006F270: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8006F274: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006F278: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8006F27C: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8006F280: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8006F284: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8006F288: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8006F28C: sh          $v0, 0x6C($s0)
    MEM_H(0X6C, ctx->r16) = ctx->r2;
    // 0x8006F290: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x8006F294: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8006F298: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8006F29C: sh          $zero, 0x114($s0)
    MEM_H(0X114, ctx->r16) = 0;
    // 0x8006F2A0: sh          $zero, 0x116($s0)
    MEM_H(0X116, ctx->r16) = 0;
    // 0x8006F2A4: sh          $zero, 0x118($s0)
    MEM_H(0X118, ctx->r16) = 0;
    // 0x8006F2A8: sb          $zero, 0x112($s0)
    MEM_B(0X112, ctx->r16) = 0;
    // 0x8006F2AC: sb          $zero, 0x113($s0)
    MEM_B(0X113, ctx->r16) = 0;
    // 0x8006F2B0: sb          $zero, 0x110($s0)
    MEM_B(0X110, ctx->r16) = 0;
    // 0x8006F2B4: sb          $zero, 0x71($s0)
    MEM_B(0X71, ctx->r16) = 0;
    // 0x8006F2B8: sb          $zero, 0x73($s0)
    MEM_B(0X73, ctx->r16) = 0;
    // 0x8006F2BC: ori         $v1, $v1, 0x3
    ctx->r3 = ctx->r3 | 0X3;
    // 0x8006F2C0: jal         0x8009A2B0
    // 0x8006F2C4: sb          $v1, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r3;
    bzero_recomp(rdram, ctx);
        goto after_0;
    // 0x8006F2C4: sb          $v1, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r3;
    after_0:
    // 0x8006F2C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006F2CC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8006F2D0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8006F2D4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8006F2D8: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8006F2DC: sb          $zero, 0x168($s0)
    MEM_B(0X168, ctx->r16) = 0;
    // 0x8006F2E0: sb          $zero, 0x169($s0)
    MEM_B(0X169, ctx->r16) = 0;
    // 0x8006F2E4: sb          $zero, 0x104($s0)
    MEM_B(0X104, ctx->r16) = 0;
    // 0x8006F2E8: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x8006F2EC: sb          $zero, 0x105($s0)
    MEM_B(0X105, ctx->r16) = 0;
    // 0x8006F2F0: sb          $zero, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = 0;
    // 0x8006F2F4: sb          $zero, 0x174($s0)
    MEM_B(0X174, ctx->r16) = 0;
    // 0x8006F2F8: sb          $zero, 0x177($s0)
    MEM_B(0X177, ctx->r16) = 0;
    // 0x8006F2FC: sb          $v0, 0x175($s0)
    MEM_B(0X175, ctx->r16) = ctx->r2;
    // 0x8006F300: sh          $zero, 0x108($s0)
    MEM_H(0X108, ctx->r16) = 0;
    // 0x8006F304: sh          $zero, 0x10A($s0)
    MEM_H(0X10A, ctx->r16) = 0;
    // 0x8006F308: sb          $zero, 0x44B($s0)
    MEM_B(0X44B, ctx->r16) = 0;
    // 0x8006F30C: sb          $zero, 0x44A($s0)
    MEM_B(0X44A, ctx->r16) = 0;
    // 0x8006F310: jal         0x8006FB90
    // 0x8006F314: sw          $zero, 0x184($s0)
    MEM_W(0X184, ctx->r16) = 0;
    func_8006FB90_4AF90(rdram, ctx);
        goto after_1;
    // 0x8006F314: sw          $zero, 0x184($s0)
    MEM_W(0X184, ctx->r16) = 0;
    after_1:
    // 0x8006F318: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006F31C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8006F320: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x8006F324: jal         0x800501C0
    // 0x8006F328: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_800501C0_2B5C0(rdram, ctx);
        goto after_2;
    // 0x8006F328: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x8006F32C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006F330: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8006F334: jr          $ra
    // 0x8006F338: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8006F338: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800571E4_325E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800571E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800571E8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x800571EC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x800571F0: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x800571F4: ori         $v0, $v0, 0xFF00
    ctx->r2 = ctx->r2 | 0XFF00;
    // 0x800571F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800571FC: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x80057200: lui         $a0, 0x3
    ctx->r4 = S32(0X3 << 16);
    // 0x80057204: ori         $a0, $a0, 0x400
    ctx->r4 = ctx->r4 | 0X400;
    // 0x80057208: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8005720C: bne         $v1, $a0, L_80057220
    if (ctx->r3 != ctx->r4) {
        // 0x80057210: addiu       $a0, $zero, 0x8C
        ctx->r4 = ADD32(0, 0X8C);
            goto L_80057220;
    }
    // 0x80057210: addiu       $a0, $zero, 0x8C
    ctx->r4 = ADD32(0, 0X8C);
    // 0x80057214: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80057218: jal         0x8002A2F8
    // 0x8005721C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_0;
    // 0x8005721C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
L_80057220:
    // 0x80057220: lb          $v0, 0x174($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X174);
    // 0x80057224: andi        $v1, $v0, 0xC0
    ctx->r3 = ctx->r2 & 0XC0;
    // 0x80057228: beq         $v1, $zero, L_800572CC
    if (ctx->r3 == 0) {
        // 0x8005722C: addiu       $v0, $zero, 0x40
        ctx->r2 = ADD32(0, 0X40);
            goto L_800572CC;
    }
    // 0x8005722C: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80057230: bne         $v1, $v0, L_800572CC
    if (ctx->r3 != ctx->r2) {
        // 0x80057234: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_800572CC;
    }
    // 0x80057234: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80057238: lb          $v1, 0x170($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X170);
    // 0x8005723C: bne         $v1, $v0, L_80057264
    if (ctx->r3 != ctx->r2) {
        // 0x80057240: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_80057264;
    }
    // 0x80057240: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80057244: lb          $v1, 0x178($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X178);
    // 0x80057248: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8005724C: bne         $v1, $v0, L_8005725C
    if (ctx->r3 != ctx->r2) {
        // 0x80057250: addiu       $a0, $zero, 0x123
        ctx->r4 = ADD32(0, 0X123);
            goto L_8005725C;
    }
    // 0x80057250: addiu       $a0, $zero, 0x123
    ctx->r4 = ADD32(0, 0X123);
    // 0x80057254: jal         0x8002A33C
    // 0x80057258: addiu       $a1, $s0, 0x3C8
    ctx->r5 = ADD32(ctx->r16, 0X3C8);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x80057258: addiu       $a1, $s0, 0x3C8
    ctx->r5 = ADD32(ctx->r16, 0X3C8);
    after_1:
L_8005725C:
    // 0x8005725C: lb          $v1, 0x170($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X170);
    // 0x80057260: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_80057264:
    // 0x80057264: bne         $v1, $v0, L_80057280
    if (ctx->r3 != ctx->r2) {
        // 0x80057268: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80057280;
    }
    // 0x80057268: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8005726C: lb          $v1, 0x178($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X178);
    // 0x80057270: bne         $v1, $v0, L_80057280
    if (ctx->r3 != ctx->r2) {
        // 0x80057274: addiu       $a0, $zero, 0x12B
        ctx->r4 = ADD32(0, 0X12B);
            goto L_80057280;
    }
    // 0x80057274: addiu       $a0, $zero, 0x12B
    ctx->r4 = ADD32(0, 0X12B);
    // 0x80057278: jal         0x8002A33C
    // 0x8005727C: addiu       $a1, $s0, 0x3C8
    ctx->r5 = ADD32(ctx->r16, 0X3C8);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x8005727C: addiu       $a1, $s0, 0x3C8
    ctx->r5 = ADD32(ctx->r16, 0X3C8);
    after_2:
L_80057280:
    // 0x80057280: lb          $v1, 0x170($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X170);
    // 0x80057284: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80057288: bne         $v1, $v0, L_800572B0
    if (ctx->r3 != ctx->r2) {
        // 0x8005728C: addiu       $v0, $zero, 0xD
        ctx->r2 = ADD32(0, 0XD);
            goto L_800572B0;
    }
    // 0x8005728C: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x80057290: lb          $v1, 0x178($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X178);
    // 0x80057294: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80057298: bne         $v1, $v0, L_800572A8
    if (ctx->r3 != ctx->r2) {
        // 0x8005729C: addiu       $a0, $zero, 0x134
        ctx->r4 = ADD32(0, 0X134);
            goto L_800572A8;
    }
    // 0x8005729C: addiu       $a0, $zero, 0x134
    ctx->r4 = ADD32(0, 0X134);
    // 0x800572A0: jal         0x8002A33C
    // 0x800572A4: addiu       $a1, $s0, 0x3C8
    ctx->r5 = ADD32(ctx->r16, 0X3C8);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x800572A4: addiu       $a1, $s0, 0x3C8
    ctx->r5 = ADD32(ctx->r16, 0X3C8);
    after_3:
L_800572A8:
    // 0x800572A8: lb          $v1, 0x170($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X170);
    // 0x800572AC: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
L_800572B0:
    // 0x800572B0: bne         $v1, $v0, L_800572CC
    if (ctx->r3 != ctx->r2) {
        // 0x800572B4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_800572CC;
    }
    // 0x800572B4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x800572B8: lb          $v1, 0x178($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X178);
    // 0x800572BC: bne         $v1, $v0, L_800572CC
    if (ctx->r3 != ctx->r2) {
        // 0x800572C0: addiu       $a0, $zero, 0x136
        ctx->r4 = ADD32(0, 0X136);
            goto L_800572CC;
    }
    // 0x800572C0: addiu       $a0, $zero, 0x136
    ctx->r4 = ADD32(0, 0X136);
    // 0x800572C4: jal         0x8002A33C
    // 0x800572C8: addiu       $a1, $s0, 0x3C8
    ctx->r5 = ADD32(ctx->r16, 0X3C8);
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x800572C8: addiu       $a1, $s0, 0x3C8
    ctx->r5 = ADD32(ctx->r16, 0X3C8);
    after_4:
L_800572CC:
    // 0x800572CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800572D0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x800572D4: jr          $ra
    // 0x800572D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x800572D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80065734_40B34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80065734: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80065738: lw          $v1, 0x3FF0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3FF0);
    // 0x8006573C: addiu       $a1, $zero, -0x100
    ctx->r5 = ADD32(0, -0X100);
    // 0x80065740: lw          $v0, 0x6C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X6C);
    // 0x80065744: and         $a1, $v1, $a1
    ctx->r5 = ctx->r3 & ctx->r5;
    // 0x80065748: andi        $v1, $v1, 0xFF
    ctx->r3 = ctx->r3 & 0XFF;
    // 0x8006574C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80065750: sw          $a1, 0x3FF0($at)
    MEM_W(0X3FF0, ctx->r1) = ctx->r5;
    // 0x80065754: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80065758: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8006575C: lbu         $v1, -0x6F90($at)
    ctx->r3 = MEM_BU(ctx->r1, -0X6F90);
    // 0x80065760: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80065764: sw          $v0, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r2;
    // 0x80065768: or          $a1, $a1, $v1
    ctx->r5 = ctx->r5 | ctx->r3;
    // 0x8006576C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80065770: sw          $a1, 0x3FF0($at)
    MEM_W(0X3FF0, ctx->r1) = ctx->r5;
    // 0x80065774: jr          $ra
    // 0x80065778: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x80065778: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_8007A380_55780(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007A380: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007A384: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8007A388: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8007A38C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8007A390: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x8007A394: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8007A398: lw          $v0, -0x2DA0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X2DA0);
    // 0x8007A39C: jalr        $v0
    // 0x8007A3A0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8007A3A0: nop

    after_0:
    // 0x8007A3A4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8007A3A8: jr          $ra
    // 0x8007A3AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8007A3AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80069328_44728(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80069328: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x8006932C: lw          $v0, -0x5858($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5858);
    // 0x80069330: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x80069334: sw          $v0, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->r2;
    // 0x80069338: lw          $a2, 0x98($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X98);
    // 0x8006933C: addiu       $v1, $v0, 0x18
    ctx->r3 = ADD32(ctx->r2, 0X18);
    // 0x80069340: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
    // 0x80069344: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80069348: sw          $v1, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r3;
    // 0x8006934C: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80069350: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x80069354: sw          $v1, 0x9C($a0)
    MEM_W(0X9C, ctx->r4) = ctx->r3;
    // 0x80069358: sb          $t0, 0x3($a2)
    MEM_B(0X3, ctx->r6) = ctx->r8;
    // 0x8006935C: lw          $v0, 0x98($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X98);
    // 0x80069360: addiu       $a3, $zero, 0x28
    ctx->r7 = ADD32(0, 0X28);
    // 0x80069364: sb          $a3, 0x7($v0)
    MEM_B(0X7, ctx->r2) = ctx->r7;
    // 0x80069368: lw          $v1, 0x98($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X98);
    // 0x8006936C: lbu         $v0, 0x7($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X7);
    // 0x80069370: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80069374: sb          $v0, 0x7($v1)
    MEM_B(0X7, ctx->r3) = ctx->r2;
    // 0x80069378: lw          $a2, 0x98($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X98);
    // 0x8006937C: sll         $v1, $a1, 1
    ctx->r3 = S32(ctx->r5 << 1);
    // 0x80069380: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80069384: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80069388: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8006938C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80069390: lbu         $v0, 0xBEC($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XBEC);
    // 0x80069394: sb          $v0, 0x4($a2)
    MEM_B(0X4, ctx->r6) = ctx->r2;
    // 0x80069398: lw          $a1, 0x98($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X98);
    // 0x8006939C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x800693A0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800693A4: lbu         $v0, 0xBED($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XBED);
    // 0x800693A8: sb          $v0, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r2;
    // 0x800693AC: lw          $a1, 0x98($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X98);
    // 0x800693B0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x800693B4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800693B8: lbu         $v0, 0xBEE($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XBEE);
    // 0x800693BC: sb          $v0, 0x6($a1)
    MEM_B(0X6, ctx->r5) = ctx->r2;
    // 0x800693C0: lw          $v0, 0x9C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X9C);
    // 0x800693C4: sb          $t0, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r8;
    // 0x800693C8: lw          $v0, 0x9C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X9C);
    // 0x800693CC: sb          $a3, 0x7($v0)
    MEM_B(0X7, ctx->r2) = ctx->r7;
    // 0x800693D0: lw          $a1, 0x9C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X9C);
    // 0x800693D4: lbu         $v0, 0x7($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X7);
    // 0x800693D8: addu        $t2, $zero, $zero
    ctx->r10 = ADD32(0, 0);
    // 0x800693DC: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x800693E0: sb          $v0, 0x7($a1)
    MEM_B(0X7, ctx->r5) = ctx->r2;
    // 0x800693E4: lw          $a1, 0x9C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X9C);
    // 0x800693E8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x800693EC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800693F0: lbu         $v0, 0xBEF($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XBEF);
    // 0x800693F4: addiu       $t4, $zero, 0x8
    ctx->r12 = ADD32(0, 0X8);
    // 0x800693F8: addiu       $t3, $zero, 0x38
    ctx->r11 = ADD32(0, 0X38);
    // 0x800693FC: sb          $v0, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r2;
    // 0x80069400: lw          $a1, 0x9C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X9C);
    // 0x80069404: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80069408: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8006940C: lbu         $v0, 0xBF0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XBF0);
    // 0x80069410: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x80069414: addiu       $a2, $a2, 0xBFB
    ctx->r6 = ADD32(ctx->r6, 0XBFB);
    // 0x80069418: addiu       $t1, $a2, -0x1
    ctx->r9 = ADD32(ctx->r6, -0X1);
    // 0x8006941C: sb          $v0, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r2;
    // 0x80069420: lw          $a1, 0x9C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X9C);
    // 0x80069424: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80069428: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8006942C: lbu         $v0, 0xBF1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XBF1);
    // 0x80069430: addiu       $t0, $a2, -0x2
    ctx->r8 = ADD32(ctx->r6, -0X2);
    // 0x80069434: addiu       $a3, $a2, -0x3
    ctx->r7 = ADD32(ctx->r6, -0X3);
    // 0x80069438: sb          $v0, 0x6($a1)
    MEM_B(0X6, ctx->r5) = ctx->r2;
L_8006943C:
    // 0x8006943C: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x80069440: lw          $v1, -0x5858($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5858);
    // 0x80069444: addiu       $v0, $v1, 0x24
    ctx->r2 = ADD32(ctx->r3, 0X24);
    // 0x80069448: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8006944C: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x80069450: sw          $v1, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->r3;
    // 0x80069454: sb          $t4, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r12;
    // 0x80069458: lw          $v0, 0xA0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XA0);
    // 0x8006945C: sb          $t3, 0x7($v0)
    MEM_B(0X7, ctx->r2) = ctx->r11;
    // 0x80069460: lw          $v1, 0xA0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XA0);
    // 0x80069464: lbu         $v0, 0x0($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X0);
    // 0x80069468: sb          $v0, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r2;
    // 0x8006946C: lw          $v1, 0xA0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XA0);
    // 0x80069470: lbu         $v0, 0x0($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X0);
    // 0x80069474: sb          $v0, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r2;
    // 0x80069478: lw          $v1, 0xA0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XA0);
    // 0x8006947C: lbu         $v0, 0x0($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X0);
    // 0x80069480: sb          $v0, 0x6($v1)
    MEM_B(0X6, ctx->r3) = ctx->r2;
    // 0x80069484: lw          $v1, 0xA0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XA0);
    // 0x80069488: lbu         $v0, 0x0($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X0);
    // 0x8006948C: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x80069490: lw          $v1, 0xA0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XA0);
    // 0x80069494: lbu         $v0, 0x0($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X0);
    // 0x80069498: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    // 0x8006949C: lw          $v1, 0xA0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XA0);
    // 0x800694A0: lbu         $v0, 0x0($t0)
    ctx->r2 = MEM_BU(ctx->r8, 0X0);
    // 0x800694A4: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x800694A8: lw          $v1, 0xA0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XA0);
    // 0x800694AC: lbu         $v0, 0x0($t1)
    ctx->r2 = MEM_BU(ctx->r9, 0X0);
    // 0x800694B0: sb          $v0, 0x14($v1)
    MEM_B(0X14, ctx->r3) = ctx->r2;
    // 0x800694B4: lw          $v1, 0xA0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XA0);
    // 0x800694B8: lbu         $v0, 0x0($t1)
    ctx->r2 = MEM_BU(ctx->r9, 0X0);
    // 0x800694BC: sb          $v0, 0x15($v1)
    MEM_B(0X15, ctx->r3) = ctx->r2;
    // 0x800694C0: lw          $v1, 0xA0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XA0);
    // 0x800694C4: lbu         $v0, 0x0($t1)
    ctx->r2 = MEM_BU(ctx->r9, 0X0);
    // 0x800694C8: sb          $v0, 0x16($v1)
    MEM_B(0X16, ctx->r3) = ctx->r2;
    // 0x800694CC: lw          $v1, 0xA0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XA0);
    // 0x800694D0: lbu         $v0, 0x0($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X0);
    // 0x800694D4: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
    // 0x800694D8: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x800694DC: sb          $v0, 0x1C($v1)
    MEM_B(0X1C, ctx->r3) = ctx->r2;
    // 0x800694E0: lw          $v1, 0xA0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XA0);
    // 0x800694E4: lbu         $v0, 0x0($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X0);
    // 0x800694E8: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x800694EC: addiu       $t1, $t1, 0x4
    ctx->r9 = ADD32(ctx->r9, 0X4);
    // 0x800694F0: sb          $v0, 0x1D($v1)
    MEM_B(0X1D, ctx->r3) = ctx->r2;
    // 0x800694F4: lw          $v1, 0xA0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XA0);
    // 0x800694F8: lbu         $v0, 0x0($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X0);
    // 0x800694FC: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x80069500: sb          $v0, 0x1E($v1)
    MEM_B(0X1E, ctx->r3) = ctx->r2;
    // 0x80069504: slti        $v0, $t2, 0x4
    ctx->r2 = SIGNED(ctx->r10) < 0X4 ? 1 : 0;
    // 0x80069508: bne         $v0, $zero, L_8006943C
    if (ctx->r2 != 0) {
        // 0x8006950C: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_8006943C;
    }
    // 0x8006950C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80069510: jr          $ra
    // 0x80069514: nop

    TRACE_RETURN()
    return;
    // 0x80069514: nop

;}
RECOMP_FUNC void func_8008CD54_68154(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008CD54: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8008CD58: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8008CD5C: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x8008CD60: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8008CD64: lw          $s2, 0x44($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X44);
    // 0x8008CD68: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8008CD6C: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x8008CD70: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8008CD74: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x8008CD78: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x8008CD7C: addu        $s5, $a2, $zero
    ctx->r21 = ADD32(ctx->r6, 0);
    // 0x8008CD80: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8008CD84: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8008CD88: jal         0x8008CA18
    // 0x8008CD8C: addu        $s0, $a3, $zero
    ctx->r16 = ADD32(ctx->r7, 0);
    func_8008CA18_67E18(rdram, ctx);
        goto after_0;
    // 0x8008CD8C: addu        $s0, $a3, $zero
    ctx->r16 = ADD32(ctx->r7, 0);
    after_0:
    // 0x8008CD90: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008CD94: lw          $v0, 0x4FA0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4FA0);
    // 0x8008CD98: sh          $s5, 0xA6($s3)
    MEM_H(0XA6, ctx->r19) = ctx->r21;
    // 0x8008CD9C: sw          $s4, 0x78($s3)
    MEM_W(0X78, ctx->r19) = ctx->r20;
    // 0x8008CDA0: sh          $s0, 0x9E($s3)
    MEM_H(0X9E, ctx->r19) = ctx->r16;
    // 0x8008CDA4: sh          $s1, 0xB0($s3)
    MEM_H(0XB0, ctx->r19) = ctx->r17;
    // 0x8008CDA8: sw          $v0, 0x44($s3)
    MEM_W(0X44, ctx->r19) = ctx->r2;
    // 0x8008CDAC: sw          $s2, 0x48($s3)
    MEM_W(0X48, ctx->r19) = ctx->r18;
    // 0x8008CDB0: lw          $v1, 0x10($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X10);
    // 0x8008CDB4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8008CDB8: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008CDBC: sw          $v0, 0x4FA0($at)
    MEM_W(0X4FA0, ctx->r1) = ctx->r2;
    // 0x8008CDC0: bnel        $v1, $zero, L_8008CDC8
    if (ctx->r3 != 0) {
        // 0x8008CDC4: sw          $v1, 0x7C($s3)
        MEM_W(0X7C, ctx->r19) = ctx->r3;
            goto L_8008CDC8;
    }
    goto skip_0;
    // 0x8008CDC4: sw          $v1, 0x7C($s3)
    MEM_W(0X7C, ctx->r19) = ctx->r3;
    skip_0:
L_8008CDC8:
    // 0x8008CDC8: sll         $v0, $s5, 3
    ctx->r2 = S32(ctx->r21 << 3);
    // 0x8008CDCC: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x8008CDD0: lw          $v0, 0x18($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X18);
    // 0x8008CDD4: sw          $v0, 0x80($s3)
    MEM_W(0X80, ctx->r19) = ctx->r2;
    // 0x8008CDD8: sw          $v0, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r2;
    // 0x8008CDDC: lw          $v0, 0x44($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X44);
    // 0x8008CDE0: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8008CDE4: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x8008CDE8: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8008CDEC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8008CDF0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8008CDF4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8008CDF8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8008CDFC: jr          $ra
    // 0x8008CE00: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8008CE00: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80034C38_10038(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80034C38: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80034C3C: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x80034C40: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80034C44: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x80034C48: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80034C4C: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x80034C50: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80034C54: addu        $s2, $a3, $zero
    ctx->r18 = ADD32(ctx->r7, 0);
    // 0x80034C58: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80034C5C: addiu       $a0, $a0, 0x43B0
    ctx->r4 = ADD32(ctx->r4, 0X43B0);
    // 0x80034C60: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80034C64: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80034C68: jal         0x8009A3B4
    // 0x80034C6C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80034C6C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_0:
    // 0x80034C70: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034C74: sw          $s0, 0x436C($at)
    MEM_W(0X436C, ctx->r1) = ctx->r16;
    // 0x80034C78: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034C7C: sw          $s1, 0x4370($at)
    MEM_W(0X4370, ctx->r1) = ctx->r17;
    // 0x80034C80: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034C84: sw          $s2, 0x4374($at)
    MEM_W(0X4374, ctx->r1) = ctx->r18;
    // 0x80034C88: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80034C8C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80034C90: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80034C94: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80034C98: jr          $ra
    // 0x80034C9C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80034C9C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80049234_24634(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80049234: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80049238: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8004923C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80049240: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80049244: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80049248: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8004924C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80049250: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80049254: jal         0x8007108C
    // 0x80049258: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8007108C_4C48C(rdram, ctx);
        goto after_0;
    // 0x80049258: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x8004925C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80049260: lb          $a0, 0x4B21($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X4B21);
    // 0x80049264: sll         $v1, $a0, 3
    ctx->r3 = S32(ctx->r4 << 3);
    // 0x80049268: addu        $v1, $v1, $s1
    ctx->r3 = ADD32(ctx->r3, ctx->r17);
    // 0x8004926C: lb          $v1, 0x4F5($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X4F5);
    // 0x80049270: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80049274: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80049278: xori        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 ^ 0X7;
    // 0x8004927C: sltu        $v1, $zero, $v1
    ctx->r3 = 0 < ctx->r3 ? 1 : 0;
    // 0x80049280: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    // 0x80049284: bne         $a0, $v0, L_800492E4
    if (ctx->r4 != ctx->r2) {
        // 0x80049288: andi        $v1, $v1, 0x11
        ctx->r3 = ctx->r3 & 0X11;
            goto L_800492E4;
    }
    // 0x80049288: andi        $v1, $v1, 0x11
    ctx->r3 = ctx->r3 & 0X11;
    // 0x8004928C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80049290: lh          $v0, 0x4EB2($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X4EB2);
    // 0x80049294: bne         $v0, $zero, L_800492AC
    if (ctx->r2 != 0) {
        // 0x80049298: slti        $v0, $a1, 0x2
        ctx->r2 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
            goto L_800492AC;
    }
    // 0x80049298: slti        $v0, $a1, 0x2
    ctx->r2 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x8004929C: beq         $v0, $zero, L_800492B4
    if (ctx->r2 == 0) {
        // 0x800492A0: nop
    
            goto L_800492B4;
    }
    // 0x800492A0: nop

    // 0x800492A4: j           L_800492E4
    // 0x800492A8: nop

        goto L_800492E4;
    // 0x800492A8: nop

L_800492AC:
    // 0x800492AC: blez        $a1, L_800492E4
    if (SIGNED(ctx->r5) <= 0) {
        // 0x800492B0: nop
    
            goto L_800492E4;
    }
    // 0x800492B0: nop

L_800492B4:
    // 0x800492B4: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x800492B8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800492BC: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    // 0x800492C0: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x800492C4: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800492C8: bne         $v0, $zero, L_800492E4
    if (ctx->r2 != 0) {
        // 0x800492CC: nop
    
            goto L_800492E4;
    }
    // 0x800492CC: nop

    // 0x800492D0: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x800492D4: lb          $v0, 0x171($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X171);
    // 0x800492D8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x800492DC: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x800492E0: sh          $a1, 0x4FA($v0)
    MEM_H(0X4FA, ctx->r2) = ctx->r5;
L_800492E4:
    // 0x800492E4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x800492E8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x800492EC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x800492F0: jr          $ra
    // 0x800492F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x800492F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ldiv_recomp(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800A31C0: div         $zero, $a1, $a2
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r6)));
    // 0x800A31C4: bne         $a2, $zero, L_800A31D0
    if (ctx->r6 != 0) {
        // 0x800A31C8: nop
    
            goto L_800A31D0;
    }
    // 0x800A31C8: nop

    // 0x800A31CC: break       7
    do_break(2148151756);
L_800A31D0:
    // 0x800A31D0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800A31D4: bne         $a2, $at, L_800A31E8
    if (ctx->r6 != ctx->r1) {
        // 0x800A31D8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800A31E8;
    }
    // 0x800A31D8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800A31DC: bne         $a1, $at, L_800A31E8
    if (ctx->r5 != ctx->r1) {
        // 0x800A31E0: nop
    
            goto L_800A31E8;
    }
    // 0x800A31E0: nop

    // 0x800A31E4: break       6
    do_break(2148151780);
L_800A31E8:
    // 0x800A31E8: mflo        $v1
    ctx->r3 = lo;
    // 0x800A31EC: nop

    // 0x800A31F0: nop

    // 0x800A31F4: mult        $a2, $v1
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800A31F8: mflo        $v0
    ctx->r2 = lo;
    // 0x800A31FC: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800A3200: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x800A3204: sw          $v1, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r3;
    // 0x800A3208: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x800A320C: bgez        $v1, L_800A3228
    if (SIGNED(ctx->r3) >= 0) {
        // 0x800A3210: sw          $a1, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r5;
            goto L_800A3228;
    }
    // 0x800A3210: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x800A3214: blez        $a1, L_800A3228
    if (SIGNED(ctx->r5) <= 0) {
        // 0x800A3218: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_800A3228;
    }
    // 0x800A3218: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x800A321C: sw          $v0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r2;
    // 0x800A3220: subu        $v0, $a1, $a2
    ctx->r2 = SUB32(ctx->r5, ctx->r6);
    // 0x800A3224: sw          $v0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r2;
L_800A3228:
    // 0x800A3228: lw          $v0, 0x0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X0);
    // 0x800A322C: lw          $v1, 0x4($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4);
    // 0x800A3230: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x800A3234: sw          $v1, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r3;
    // 0x800A3238: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
    // 0x800A323C: jr          $ra
    // 0x800A3240: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x800A3240: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800723C0_4D7C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800723C0: bltz        $a1, L_80072424
    if (SIGNED(ctx->r5) < 0) {
        // 0x800723C4: addu        $a3, $a2, $zero
        ctx->r7 = ADD32(ctx->r6, 0);
            goto L_80072424;
    }
    // 0x800723C4: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    // 0x800723C8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800723CC: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x800723D0: lb          $a0, 0x3580($at)
    ctx->r4 = MEM_B(ctx->r1, 0X3580);
    // 0x800723D4: bltz        $a0, L_80072424
    if (SIGNED(ctx->r4) < 0) {
        // 0x800723D8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80072424;
    }
    // 0x800723D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800723DC: sll         $a0, $a0, 9
    ctx->r4 = S32(ctx->r4 << 9);
    // 0x800723E0: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x800723E4: addiu       $v1, $v1, -0x3590
    ctx->r3 = ADD32(ctx->r3, -0X3590);
    // 0x800723E8: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x800723EC: sra         $a2, $a1, 4
    ctx->r6 = S32(SIGNED(ctx->r5) >> 4);
    // 0x800723F0: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x800723F4: addu        $a2, $a2, $a0
    ctx->r6 = ADD32(ctx->r6, ctx->r4);
    // 0x800723F8: andi        $a1, $a1, 0xF
    ctx->r5 = ctx->r5 & 0XF;
    // 0x800723FC: sll         $a1, $a1, 1
    ctx->r5 = S32(ctx->r5 << 1);
    // 0x80072400: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80072404: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x80072408: sllv        $v1, $v1, $a1
    ctx->r3 = S32(ctx->r3 << (ctx->r5 & 31));
    // 0x8007240C: nor         $v1, $zero, $v1
    ctx->r3 = ~(0 | ctx->r3);
    // 0x80072410: sllv        $a1, $a3, $a1
    ctx->r5 = S32(ctx->r7 << (ctx->r5 & 31));
    // 0x80072414: and         $a0, $a0, $v1
    ctx->r4 = ctx->r4 & ctx->r3;
    // 0x80072418: or          $a0, $a0, $a1
    ctx->r4 = ctx->r4 | ctx->r5;
    // 0x8007241C: j           L_80072428
    // 0x80072420: sw          $a0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r4;
        goto L_80072428;
    // 0x80072420: sw          $a0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r4;
L_80072424:
    // 0x80072424: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80072428:
    // 0x80072428: jr          $ra
    // 0x8007242C: nop

    TRACE_RETURN()
    return;
    // 0x8007242C: nop

;}
RECOMP_FUNC void func_8004A3B0_257B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004A3B0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8004A3B4: sb          $zero, -0x3991($at)
    MEM_B(-0X3991, ctx->r1) = 0;
    // 0x8004A3B8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8004A3BC: lbu         $v1, -0x3991($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3991);
    // 0x8004A3C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8004A3C4: beq         $v1, $v0, L_8004A3F8
    if (ctx->r3 == ctx->r2) {
        // 0x8004A3C8: nop
    
            goto L_8004A3F8;
    }
    // 0x8004A3C8: nop

    // 0x8004A3CC: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8004A3D0: lbu         $v0, -0x3993($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3993);
    // 0x8004A3D4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8004A3D8: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x8004A3DC: beq         $v0, $zero, L_8004A3F8
    if (ctx->r2 == 0) {
        // 0x8004A3E0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8004A3F8;
    }
    // 0x8004A3E0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8004A3E4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8004A3E8: sb          $v0, -0x3993($at)
    MEM_B(-0X3993, ctx->r1) = ctx->r2;
    // 0x8004A3EC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8004A3F0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8004A3F4: sb          $v0, -0x3997($at)
    MEM_B(-0X3997, ctx->r1) = ctx->r2;
L_8004A3F8:
    // 0x8004A3F8: jr          $ra
    // 0x8004A3FC: nop

    TRACE_RETURN()
    return;
    // 0x8004A3FC: nop

;}
RECOMP_FUNC void func_800784C0_538C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800784C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800784C4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x800784C8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x800784CC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800784D0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x800784D4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800784D8: lw          $v0, -0x32D0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X32D0);
    // 0x800784DC: jalr        $v0
    // 0x800784E0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x800784E0: nop

    after_0:
    // 0x800784E4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x800784E8: jr          $ra
    // 0x800784EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x800784EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80068100_43500(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80068100: lhu         $v0, 0x10($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X10);
    // 0x80068104: lw          $v1, 0x14($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X14);
    // 0x80068108: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x8006810C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80068110: sh          $v0, 0x10($a0)
    MEM_H(0X10, ctx->r4) = ctx->r2;
    // 0x80068114: jr          $ra
    // 0x80068118: sw          $v1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x80068118: sw          $v1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r3;
;}
RECOMP_FUNC void func_80035450_10850(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80035450: jr          $ra
    // 0x80035454: nop

    TRACE_RETURN()
    return;
    // 0x80035454: nop

;}
RECOMP_FUNC void func_8002C9BC_7DBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002C9BC: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x8002C9C0: lw          $v1, 0x2704($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2704);
    // 0x8002C9C4: beq         $v1, $zero, L_8002CA28
    if (ctx->r3 == 0) {
        // 0x8002C9C8: nop
    
            goto L_8002CA28;
    }
    // 0x8002C9C8: nop

    // 0x8002C9CC: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x8002C9D0: sra         $t1, $v0, 16
    ctx->r9 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8002C9D4: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x8002C9D8: sra         $t0, $v0, 16
    ctx->r8 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8002C9DC: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x8002C9E0: sra         $a1, $v0, 16
    ctx->r5 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8002C9E4: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x8002C9E8: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
L_8002C9EC:
    // 0x8002C9EC: lh          $v0, 0x8($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X8);
    // 0x8002C9F0: bne         $v0, $t1, L_8002CA1C
    if (ctx->r2 != ctx->r9) {
        // 0x8002C9F4: nop
    
            goto L_8002CA1C;
    }
    // 0x8002C9F4: nop

    // 0x8002C9F8: lh          $v0, 0xA($v1)
    ctx->r2 = MEM_H(ctx->r3, 0XA);
    // 0x8002C9FC: bne         $v0, $t0, L_8002CA1C
    if (ctx->r2 != ctx->r8) {
        // 0x8002CA00: nop
    
            goto L_8002CA1C;
    }
    // 0x8002CA00: nop

    // 0x8002CA04: lh          $v0, 0xC($v1)
    ctx->r2 = MEM_H(ctx->r3, 0XC);
    // 0x8002CA08: bne         $v0, $a1, L_8002CA1C
    if (ctx->r2 != ctx->r5) {
        // 0x8002CA0C: nop
    
            goto L_8002CA1C;
    }
    // 0x8002CA0C: nop

    // 0x8002CA10: lh          $v0, 0xE($v1)
    ctx->r2 = MEM_H(ctx->r3, 0XE);
    // 0x8002CA14: beq         $v0, $a0, L_8002CA28
    if (ctx->r2 == ctx->r4) {
        // 0x8002CA18: nop
    
            goto L_8002CA28;
    }
    // 0x8002CA18: nop

L_8002CA1C:
    // 0x8002CA1C: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x8002CA20: bne         $v1, $zero, L_8002C9EC
    if (ctx->r3 != 0) {
        // 0x8002CA24: nop
    
            goto L_8002C9EC;
    }
    // 0x8002CA24: nop

L_8002CA28:
    // 0x8002CA28: jr          $ra
    // 0x8002CA2C: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    TRACE_RETURN()
    return;
    // 0x8002CA2C: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
;}
RECOMP_FUNC void func_8009410C_6F50C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8009410C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80094110: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80094114: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80094118: jal         0x80093FC0
    // 0x8009411C: addiu       $a0, $a0, -0xDF8
    ctx->r4 = ADD32(ctx->r4, -0XDF8);
    func_80093FC0_6F3C0(rdram, ctx);
        goto after_0;
    // 0x8009411C: addiu       $a0, $a0, -0xDF8
    ctx->r4 = ADD32(ctx->r4, -0XDF8);
    after_0:
    // 0x80094120: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80094124: jr          $ra
    // 0x80094128: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80094128: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8006AF8C_4638C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006AF8C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8006AF90: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8006AF94: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8006AF98: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8006AF9C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8006AFA0: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8006AFA4: lhu         $s1, 0x11C($s0)
    ctx->r17 = MEM_HU(ctx->r16, 0X11C);
    // 0x8006AFA8: sltiu       $v0, $v1, 0x8
    ctx->r2 = ctx->r3 < 0X8 ? 1 : 0;
    // 0x8006AFAC: beq         $v0, $zero, L_8006B32C
    if (ctx->r2 == 0) {
        // 0x8006AFB0: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8006B32C;
    }
    // 0x8006AFB0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8006AFB4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8006AFB8: addu        $at, $at, $v0
    gpr jr_addend_8006AFC0 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8006AFBC: lw          $v0, 0x2848($at)
    ctx->r2 = ADD32(ctx->r1, 0X2848);
    // 0x8006AFC0: jr          $v0
    // 0x8006AFC4: nop

    switch (jr_addend_8006AFC0 >> 2) {
        case 0: goto L_8006AFC8; break;
        case 1: goto L_8006B060; break;
        case 2: goto L_8006B060; break;
        case 3: goto L_8006B0B4; break;
        case 4: goto L_8006B108; break;
        case 5: goto L_8006B130; break;
        case 6: goto L_8006B14C; break;
        case 7: goto L_8006B2E4; break;
        default: switch_error(__func__, 0x8006AFC0, 0x800D2848);
    }
    // 0x8006AFC4: nop

L_8006AFC8:
    // 0x8006AFC8: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8006AFCC: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8006AFD0: lbu         $a0, 0x16B($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X16B);
    // 0x8006AFD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006AFD8: sb          $v0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r2;
    // 0x8006AFDC: sb          $v0, 0x44D($s0)
    MEM_B(0X44D, ctx->r16) = ctx->r2;
    // 0x8006AFE0: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x8006AFE4: andi        $a0, $a0, 0x1
    ctx->r4 = ctx->r4 & 0X1;
    // 0x8006AFE8: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8006AFEC: beq         $a0, $zero, L_8006AFFC
    if (ctx->r4 == 0) {
        // 0x8006AFF0: sb          $a1, 0xAD($s0)
        MEM_B(0XAD, ctx->r16) = ctx->r5;
            goto L_8006AFFC;
    }
    // 0x8006AFF0: sb          $a1, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r5;
    // 0x8006AFF4: j           L_8006B000
    // 0x8006AFF8: addiu       $v0, $zero, -0x320
    ctx->r2 = ADD32(0, -0X320);
        goto L_8006B000;
    // 0x8006AFF8: addiu       $v0, $zero, -0x320
    ctx->r2 = ADD32(0, -0X320);
L_8006AFFC:
    // 0x8006AFFC: addiu       $v0, $zero, -0x1C0
    ctx->r2 = ADD32(0, -0X1C0);
L_8006B000:
    // 0x8006B000: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8006B004: lb          $v0, 0x112($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X112);
    // 0x8006B008: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8006B00C: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8006B010: lhu         $v0, 0x148($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X148);
    // 0x8006B014: and         $v0, $v0, $s1
    ctx->r2 = ctx->r2 & ctx->r17;
    // 0x8006B018: beql        $v0, $zero, L_8006B020
    if (ctx->r2 == 0) {
        // 0x8006B01C: sh          $zero, 0x48($s0)
        MEM_H(0X48, ctx->r16) = 0;
            goto L_8006B020;
    }
    goto skip_0;
    // 0x8006B01C: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    skip_0:
L_8006B020:
    // 0x8006B020: jal         0x80070100
    // 0x8006B024: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80070100_4B500(rdram, ctx);
        goto after_0;
    // 0x8006B024: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8006B028: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006B02C: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x8006B030: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8006B034: jal         0x8006FB90
    // 0x8006B038: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8006FB90_4AF90(rdram, ctx);
        goto after_1;
    // 0x8006B038: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x8006B03C: lb          $a1, 0x112($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X112);
    // 0x8006B040: jal         0x8006ABE0
    // 0x8006B044: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8006ABE0_45FE0(rdram, ctx);
        goto after_2;
    // 0x8006B044: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8006B048: addiu       $a0, $zero, 0x92
    ctx->r4 = ADD32(0, 0X92);
    // 0x8006B04C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8006B050: jal         0x8002A2F8
    // 0x8006B054: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_3;
    // 0x8006B054: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x8006B058: j           L_8006B32C
    // 0x8006B05C: nop

        goto L_8006B32C;
    // 0x8006B05C: nop

L_8006B060:
    // 0x8006B060: lb          $a1, 0x112($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X112);
    // 0x8006B064: jal         0x8006ABE0
    // 0x8006B068: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8006ABE0_45FE0(rdram, ctx);
        goto after_4;
    // 0x8006B068: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8006B06C: lhu         $v0, 0x138($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X138);
    // 0x8006B070: and         $v0, $v0, $s1
    ctx->r2 = ctx->r2 & ctx->r17;
    // 0x8006B074: beq         $v0, $zero, L_8006B2A4
    if (ctx->r2 == 0) {
        // 0x8006B078: nop
    
            goto L_8006B2A4;
    }
    // 0x8006B078: nop

    // 0x8006B07C: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x8006B080: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
    // 0x8006B084: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8006B088: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8006B08C: bltz        $v0, L_8006B32C
    if (SIGNED(ctx->r2) < 0) {
        // 0x8006B090: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8006B32C;
    }
    // 0x8006B090: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006B094: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    // 0x8006B098: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8006B09C: jal         0x8006FB90
    // 0x8006B0A0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8006FB90_4AF90(rdram, ctx);
        goto after_5;
    // 0x8006B0A0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_5:
    // 0x8006B0A4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8006B0A8: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x8006B0AC: j           L_8006B32C
    // 0x8006B0B0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8006B32C;
    // 0x8006B0B0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8006B0B4:
    // 0x8006B0B4: lb          $a1, 0x112($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X112);
    // 0x8006B0B8: jal         0x8006ABE0
    // 0x8006B0BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8006ABE0_45FE0(rdram, ctx);
        goto after_6;
    // 0x8006B0BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x8006B0C0: lh          $v0, 0x46($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X46);
    // 0x8006B0C4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8006B0C8: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8006B0CC: slti        $v0, $v0, 0x241
    ctx->r2 = SIGNED(ctx->r2) < 0X241 ? 1 : 0;
    // 0x8006B0D0: bne         $v0, $zero, L_8006B0E4
    if (ctx->r2 != 0) {
        // 0x8006B0D4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8006B0E4;
    }
    // 0x8006B0D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006B0D8: addiu       $v0, $v1, 0x240
    ctx->r2 = ADD32(ctx->r3, 0X240);
    // 0x8006B0DC: j           L_8006B32C
    // 0x8006B0E0: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
        goto L_8006B32C;
    // 0x8006B0E0: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_8006B0E4:
    // 0x8006B0E4: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    // 0x8006B0E8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8006B0EC: jal         0x8006FB90
    // 0x8006B0F0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8006FB90_4AF90(rdram, ctx);
        goto after_7;
    // 0x8006B0F0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_7:
    // 0x8006B0F4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8006B0F8: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8006B0FC: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8006B100: j           L_8006B32C
    // 0x8006B104: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8006B32C;
    // 0x8006B104: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8006B108:
    // 0x8006B108: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006B10C: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x8006B110: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8006B114: jal         0x8006FB90
    // 0x8006B118: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8006FB90_4AF90(rdram, ctx);
        goto after_8;
    // 0x8006B118: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_8:
    // 0x8006B11C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8006B120: addiu       $v1, $zero, 0x200
    ctx->r3 = ADD32(0, 0X200);
    // 0x8006B124: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x8006B128: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8006B12C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8006B130:
    // 0x8006B130: lb          $a1, 0x112($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X112);
    // 0x8006B134: jal         0x8006ABE0
    // 0x8006B138: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8006ABE0_45FE0(rdram, ctx);
        goto after_9;
    // 0x8006B138: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x8006B13C: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x8006B140: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
    // 0x8006B144: j           L_8006B32C
    // 0x8006B148: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
        goto L_8006B32C;
    // 0x8006B148: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_8006B14C:
    // 0x8006B14C: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x8006B150: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8006B154: bne         $v1, $v0, L_8006B32C
    if (ctx->r3 != ctx->r2) {
        // 0x8006B158: nop
    
            goto L_8006B32C;
    }
    // 0x8006B158: nop

    // 0x8006B15C: jal         0x800700D8
    // 0x8006B160: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800700D8_4B4D8(rdram, ctx);
        goto after_10;
    // 0x8006B160: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_10:
    // 0x8006B164: lb          $v1, 0x112($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X112);
    // 0x8006B168: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006B16C: beq         $v1, $v0, L_8006B218
    if (ctx->r3 == ctx->r2) {
        // 0x8006B170: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8006B218;
    }
    // 0x8006B170: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8006B174: beql        $v0, $zero, L_8006B18C
    if (ctx->r2 == 0) {
        // 0x8006B178: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8006B18C;
    }
    goto skip_1;
    // 0x8006B178: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_1:
    // 0x8006B17C: beq         $v1, $zero, L_8006B1A4
    if (ctx->r3 == 0) {
        // 0x8006B180: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8006B1A4;
    }
    // 0x8006B180: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006B184: j           L_8006B2B4
    // 0x8006B188: nop

        goto L_8006B2B4;
    // 0x8006B188: nop

L_8006B18C:
    // 0x8006B18C: beq         $v1, $v0, L_8006B244
    if (ctx->r3 == ctx->r2) {
        // 0x8006B190: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8006B244;
    }
    // 0x8006B190: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8006B194: beq         $v1, $v0, L_8006B270
    if (ctx->r3 == ctx->r2) {
        // 0x8006B198: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8006B270;
    }
    // 0x8006B198: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006B19C: j           L_8006B2B4
    // 0x8006B1A0: nop

        goto L_8006B2B4;
    // 0x8006B1A0: nop

L_8006B1A4:
    // 0x8006B1A4: lhu         $v0, 0x134($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X134);
    // 0x8006B1A8: and         $v0, $v0, $s1
    ctx->r2 = ctx->r2 & ctx->r17;
    // 0x8006B1AC: bne         $v0, $zero, L_8006B1CC
    if (ctx->r2 != 0) {
        // 0x8006B1B0: nop
    
            goto L_8006B1CC;
    }
    // 0x8006B1B0: nop

    // 0x8006B1B4: lhu         $v0, 0x124($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X124);
    // 0x8006B1B8: and         $v0, $v0, $s1
    ctx->r2 = ctx->r2 & ctx->r17;
    // 0x8006B1BC: bne         $v0, $zero, L_8006B2B4
    if (ctx->r2 != 0) {
        // 0x8006B1C0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8006B2B4;
    }
    // 0x8006B1C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006B1C4: j           L_8006B298
    // 0x8006B1C8: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
        goto L_8006B298;
    // 0x8006B1C8: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
L_8006B1CC:
    // 0x8006B1CC: lbu         $v0, 0x44A($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X44A);
    // 0x8006B1D0: sltiu       $v0, $v0, 0x11
    ctx->r2 = ctx->r2 < 0X11 ? 1 : 0;
    // 0x8006B1D4: bne         $v0, $zero, L_8006B210
    if (ctx->r2 != 0) {
        // 0x8006B1D8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8006B210;
    }
    // 0x8006B1D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006B1DC: addiu       $a1, $zero, 0x3B
    ctx->r5 = ADD32(0, 0X3B);
    // 0x8006B1E0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8006B1E4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8006B1E8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8006B1EC: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x8006B1F0: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x8006B1F4: sh          $v0, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r2;
    // 0x8006B1F8: addiu       $v0, $zero, 0x300
    ctx->r2 = ADD32(0, 0X300);
    // 0x8006B1FC: sh          $v0, 0x44($a0)
    MEM_H(0X44, ctx->r4) = ctx->r2;
    // 0x8006B200: jal         0x8006FB90
    // 0x8006B204: sh          $zero, 0x48($a0)
    MEM_H(0X48, ctx->r4) = 0;
    func_8006FB90_4AF90(rdram, ctx);
        goto after_11;
    // 0x8006B204: sh          $zero, 0x48($a0)
    MEM_H(0X48, ctx->r4) = 0;
    after_11:
    // 0x8006B208: j           L_8006B32C
    // 0x8006B20C: nop

        goto L_8006B32C;
    // 0x8006B20C: nop

L_8006B210:
    // 0x8006B210: j           L_8006B298
    // 0x8006B214: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
        goto L_8006B298;
    // 0x8006B214: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
L_8006B218:
    // 0x8006B218: lhu         $v0, 0x134($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X134);
    // 0x8006B21C: and         $v0, $v0, $s1
    ctx->r2 = ctx->r2 & ctx->r17;
    // 0x8006B220: bne         $v0, $zero, L_8006B23C
    if (ctx->r2 != 0) {
        // 0x8006B224: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8006B23C;
    }
    // 0x8006B224: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006B228: lhu         $v0, 0x12C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X12C);
    // 0x8006B22C: and         $v0, $v0, $s1
    ctx->r2 = ctx->r2 & ctx->r17;
    // 0x8006B230: bne         $v0, $zero, L_8006B2B8
    if (ctx->r2 != 0) {
        // 0x8006B234: addiu       $a1, $zero, 0x17
        ctx->r5 = ADD32(0, 0X17);
            goto L_8006B2B8;
    }
    // 0x8006B234: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    // 0x8006B238: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8006B23C:
    // 0x8006B23C: j           L_8006B298
    // 0x8006B240: addiu       $a1, $zero, 0x2B
    ctx->r5 = ADD32(0, 0X2B);
        goto L_8006B298;
    // 0x8006B240: addiu       $a1, $zero, 0x2B
    ctx->r5 = ADD32(0, 0X2B);
L_8006B244:
    // 0x8006B244: lhu         $v0, 0x134($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X134);
    // 0x8006B248: and         $v0, $v0, $s1
    ctx->r2 = ctx->r2 & ctx->r17;
    // 0x8006B24C: bne         $v0, $zero, L_8006B268
    if (ctx->r2 != 0) {
        // 0x8006B250: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8006B268;
    }
    // 0x8006B250: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006B254: lhu         $v0, 0x126($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X126);
    // 0x8006B258: and         $v0, $v0, $s1
    ctx->r2 = ctx->r2 & ctx->r17;
    // 0x8006B25C: bne         $v0, $zero, L_8006B2B8
    if (ctx->r2 != 0) {
        // 0x8006B260: addiu       $a1, $zero, 0x17
        ctx->r5 = ADD32(0, 0X17);
            goto L_8006B2B8;
    }
    // 0x8006B260: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    // 0x8006B264: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8006B268:
    // 0x8006B268: j           L_8006B298
    // 0x8006B26C: addiu       $a1, $zero, 0x2D
    ctx->r5 = ADD32(0, 0X2D);
        goto L_8006B298;
    // 0x8006B26C: addiu       $a1, $zero, 0x2D
    ctx->r5 = ADD32(0, 0X2D);
L_8006B270:
    // 0x8006B270: lhu         $v0, 0x134($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X134);
    // 0x8006B274: and         $v0, $v0, $s1
    ctx->r2 = ctx->r2 & ctx->r17;
    // 0x8006B278: bne         $v0, $zero, L_8006B294
    if (ctx->r2 != 0) {
        // 0x8006B27C: nop
    
            goto L_8006B294;
    }
    // 0x8006B27C: nop

    // 0x8006B280: lhu         $v0, 0x12E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X12E);
    // 0x8006B284: and         $v0, $v0, $s1
    ctx->r2 = ctx->r2 & ctx->r17;
    // 0x8006B288: bne         $v0, $zero, L_8006B2B8
    if (ctx->r2 != 0) {
        // 0x8006B28C: addiu       $a1, $zero, 0x17
        ctx->r5 = ADD32(0, 0X17);
            goto L_8006B2B8;
    }
    // 0x8006B28C: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    // 0x8006B290: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8006B294:
    // 0x8006B294: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
L_8006B298:
    // 0x8006B298: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8006B29C: jal         0x8006FB90
    // 0x8006B2A0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8006FB90_4AF90(rdram, ctx);
        goto after_12;
    // 0x8006B2A0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_12:
L_8006B2A4:
    // 0x8006B2A4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8006B2A8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8006B2AC: j           L_8006B32C
    // 0x8006B2B0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8006B32C;
    // 0x8006B2B0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8006B2B4:
    // 0x8006B2B4: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
L_8006B2B8:
    // 0x8006B2B8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8006B2BC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8006B2C0: addiu       $v1, $zero, 0x200
    ctx->r3 = ADD32(0, 0X200);
    // 0x8006B2C4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8006B2C8: sh          $v1, 0x44($a0)
    MEM_H(0X44, ctx->r4) = ctx->r3;
    // 0x8006B2CC: sh          $zero, 0x46($a0)
    MEM_H(0X46, ctx->r4) = 0;
    // 0x8006B2D0: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x8006B2D4: jal         0x8006FB90
    // 0x8006B2D8: sh          $v1, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r3;
    func_8006FB90_4AF90(rdram, ctx);
        goto after_13;
    // 0x8006B2D8: sh          $v1, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r3;
    after_13:
    // 0x8006B2DC: j           L_8006B32C
    // 0x8006B2E0: nop

        goto L_8006B32C;
    // 0x8006B2E0: nop

L_8006B2E4:
    // 0x8006B2E4: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x8006B2E8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8006B2EC: bne         $v1, $v0, L_8006B32C
    if (ctx->r3 != ctx->r2) {
        // 0x8006B2F0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8006B32C;
    }
    // 0x8006B2F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006B2F4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8006B2F8: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8006B2FC: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x8006B300: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8006B304: jal         0x80070100
    // 0x8006B308: sb          $zero, 0x44A($s0)
    MEM_B(0X44A, ctx->r16) = 0;
    func_80070100_4B500(rdram, ctx);
        goto after_14;
    // 0x8006B308: sb          $zero, 0x44A($s0)
    MEM_B(0X44A, ctx->r16) = 0;
    after_14:
    // 0x8006B30C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006B310: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8006B314: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8006B318: jal         0x8006FB90
    // 0x8006B31C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8006FB90_4AF90(rdram, ctx);
        goto after_15;
    // 0x8006B31C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_15:
    // 0x8006B320: sh          $zero, 0x116($s0)
    MEM_H(0X116, ctx->r16) = 0;
    // 0x8006B324: sb          $zero, 0x112($s0)
    MEM_B(0X112, ctx->r16) = 0;
    // 0x8006B328: sh          $zero, 0xB4($s0)
    MEM_H(0XB4, ctx->r16) = 0;
L_8006B32C:
    // 0x8006B32C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8006B330: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8006B334: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8006B338: jr          $ra
    // 0x8006B33C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8006B33C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800289D4_3DD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800289D4: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x800289D8: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x800289DC: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x800289E0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x800289E4: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x800289E8: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x800289EC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x800289F0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800289F4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800289F8: jr          $ra
    // 0x800289FC: lbu         $v0, 0x4891($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X4891);
    TRACE_RETURN()
    return;
    // 0x800289FC: lbu         $v0, 0x4891($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X4891);
;}
RECOMP_FUNC void func_800317C0_CBC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800317C0: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x800317C4: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x800317C8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x800317CC: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x800317D0: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x800317D4: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x800317D8: addiu       $s1, $sp, 0x30
    ctx->r17 = ADD32(ctx->r29, 0X30);
    // 0x800317DC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x800317E0: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x800317E4: jal         0x8009A3B4
    // 0x800317E8: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x800317E8: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_0:
    // 0x800317EC: jal         0x80032510
    // 0x800317F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80032510_D910(rdram, ctx);
        goto after_1;
    // 0x800317F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x800317F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x800317F8: jal         0x800324D0
    // 0x800317FC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_800324D0_D8D0(rdram, ctx);
        goto after_2;
    // 0x800317FC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_2:
    // 0x80031800: addu        $t3, $zero, $zero
    ctx->r11 = ADD32(0, 0);
    // 0x80031804: addiu       $t1, $sp, 0x10
    ctx->r9 = ADD32(ctx->r29, 0X10);
    // 0x80031808: addu        $t2, $s2, $zero
    ctx->r10 = ADD32(ctx->r18, 0);
    // 0x8003180C: addiu       $v1, $zero, 0x1000
    ctx->r3 = ADD32(0, 0X1000);
    // 0x80031810: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    // 0x80031814: negu        $v1, $s0
    ctx->r3 = SUB32(0, ctx->r16);
    // 0x80031818: sh          $zero, 0x12($sp)
    MEM_H(0X12, ctx->r29) = 0;
    // 0x8003181C: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    // 0x80031820: sh          $zero, 0x16($sp)
    MEM_H(0X16, ctx->r29) = 0;
    // 0x80031824: sh          $v0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r2;
    // 0x80031828: sh          $v1, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r3;
    // 0x8003182C: sh          $zero, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = 0;
    // 0x80031830: sh          $s0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r16;
    // 0x80031834: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
L_80031838:
    // 0x80031838: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x8003183C: addu        $a3, $t2, $zero
    ctx->r7 = ADD32(ctx->r10, 0);
    // 0x80031840: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
L_80031844:
    // 0x80031844: lh          $v1, 0x0($t1)
    ctx->r3 = MEM_H(ctx->r9, 0X0);
    // 0x80031848: lh          $v0, 0x0($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X0);
    // 0x8003184C: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80031850: mflo        $v1
    ctx->r3 = lo;
    // 0x80031854: lh          $a1, 0x2($t1)
    ctx->r5 = MEM_H(ctx->r9, 0X2);
    // 0x80031858: lh          $v0, 0x6($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X6);
    // 0x8003185C: mult        $a1, $v0
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80031860: mflo        $a1
    ctx->r5 = lo;
    // 0x80031864: lh          $a0, 0x4($t1)
    ctx->r4 = MEM_H(ctx->r9, 0X4);
    // 0x80031868: lh          $v0, 0xC($a2)
    ctx->r2 = MEM_H(ctx->r6, 0XC);
    // 0x8003186C: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80031870: mflo        $a0
    ctx->r4 = lo;
    // 0x80031874: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80031878: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    // 0x8003187C: slti        $v0, $t0, 0x3
    ctx->r2 = SIGNED(ctx->r8) < 0X3 ? 1 : 0;
    // 0x80031880: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80031884: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80031888: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x8003188C: sh          $v1, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r3;
    // 0x80031890: bne         $v0, $zero, L_80031844
    if (ctx->r2 != 0) {
        // 0x80031894: addiu       $a3, $a3, 0x2
        ctx->r7 = ADD32(ctx->r7, 0X2);
            goto L_80031844;
    }
    // 0x80031894: addiu       $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
    // 0x80031898: addiu       $t1, $t1, 0x6
    ctx->r9 = ADD32(ctx->r9, 0X6);
    // 0x8003189C: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    // 0x800318A0: slti        $v0, $t3, 0x3
    ctx->r2 = SIGNED(ctx->r11) < 0X3 ? 1 : 0;
    // 0x800318A4: bne         $v0, $zero, L_80031838
    if (ctx->r2 != 0) {
        // 0x800318A8: addiu       $t2, $t2, 0x6
        ctx->r10 = ADD32(ctx->r10, 0X6);
            goto L_80031838;
    }
    // 0x800318A8: addiu       $t2, $t2, 0x6
    ctx->r10 = ADD32(ctx->r10, 0X6);
    // 0x800318AC: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x800318B0: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x800318B4: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x800318B8: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x800318BC: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x800318C0: jr          $ra
    // 0x800318C4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x800318C4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void alFxParamHdl(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800982E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800982EC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x800982F0: addiu       $v1, $a1, -0x2
    ctx->r3 = ADD32(ctx->r5, -0X2);
    // 0x800982F4: bgez        $v1, L_80098300
    if (SIGNED(ctx->r3) >= 0) {
        // 0x800982F8: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_80098300;
    }
    // 0x800982F8: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x800982FC: addiu       $v0, $a1, 0x5
    ctx->r2 = ADD32(ctx->r5, 0X5);
L_80098300:
    // 0x80098300: sra         $a3, $v0, 3
    ctx->r7 = S32(SIGNED(ctx->r2) >> 3);
    // 0x80098304: addu        $a1, $a3, $zero
    ctx->r5 = ADD32(ctx->r7, 0);
    // 0x80098308: sll         $v0, $a1, 3
    ctx->r2 = S32(ctx->r5 << 3);
    // 0x8009830C: subu        $a3, $v1, $v0
    ctx->r7 = SUB32(ctx->r3, ctx->r2);
    // 0x80098310: lw          $a2, 0x0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X0);
    // 0x80098314: sltiu       $v0, $a3, 0x8
    ctx->r2 = ctx->r7 < 0X8 ? 1 : 0;
    // 0x80098318: beq         $v0, $zero, L_800984C8
    if (ctx->r2 == 0) {
        // 0x8009831C: nop
    
            goto L_800984C8;
    }
    // 0x8009831C: nop

    // 0x80098320: sll         $v0, $a3, 2
    ctx->r2 = S32(ctx->r7 << 2);
    // 0x80098324: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80098328: addu        $at, $at, $v0
    gpr jr_addend_80098330 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8009832C: lw          $v0, 0x3120($at)
    ctx->r2 = ADD32(ctx->r1, 0X3120);
    // 0x80098330: jr          $v0
    // 0x80098334: nop

    switch (jr_addend_80098330 >> 2) {
        case 0: goto L_80098338; break;
        case 1: goto L_8009835C; break;
        case 2: goto L_8009839C; break;
        case 3: goto L_80098380; break;
        case 4: goto L_800983B8; break;
        case 5: goto L_800983D4; break;
        case 6: goto L_80098428; break;
        case 7: goto L_80098494; break;
        default: switch_error(__func__, 0x80098330, 0x800D3120);
    }
    // 0x80098334: nop

L_80098338:
    // 0x80098338: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x8009833C: sll         $v1, $a1, 2
    ctx->r3 = S32(ctx->r5 << 2);
    // 0x80098340: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80098344: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80098348: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8009834C: addiu       $v0, $zero, -0x8
    ctx->r2 = ADD32(0, -0X8);
    // 0x80098350: and         $v0, $a2, $v0
    ctx->r2 = ctx->r6 & ctx->r2;
    // 0x80098354: j           L_800984C8
    // 0x80098358: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
        goto L_800984C8;
    // 0x80098358: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_8009835C:
    // 0x8009835C: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x80098360: sll         $v1, $a1, 2
    ctx->r3 = S32(ctx->r5 << 2);
    // 0x80098364: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80098368: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8009836C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80098370: addiu       $v0, $zero, -0x8
    ctx->r2 = ADD32(0, -0X8);
    // 0x80098374: and         $v0, $a2, $v0
    ctx->r2 = ctx->r6 & ctx->r2;
    // 0x80098378: j           L_800984C8
    // 0x8009837C: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
        goto L_800984C8;
    // 0x8009837C: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
L_80098380:
    // 0x80098380: lw          $v1, 0x20($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X20);
    // 0x80098384: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x80098388: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8009838C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80098390: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80098394: j           L_800984C8
    // 0x80098398: sh          $a2, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r6;
        goto L_800984C8;
    // 0x80098398: sh          $a2, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r6;
L_8009839C:
    // 0x8009839C: lw          $v1, 0x20($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X20);
    // 0x800983A0: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x800983A4: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x800983A8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x800983AC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800983B0: j           L_800984C8
    // 0x800983B4: sh          $a2, 0xA($v0)
    MEM_H(0XA, ctx->r2) = ctx->r6;
        goto L_800984C8;
    // 0x800983B4: sh          $a2, 0xA($v0)
    MEM_H(0XA, ctx->r2) = ctx->r6;
L_800983B8:
    // 0x800983B8: lw          $v1, 0x20($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X20);
    // 0x800983BC: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x800983C0: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x800983C4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x800983C8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800983CC: j           L_800984C8
    // 0x800983D0: sh          $a2, 0xC($v0)
    MEM_H(0XC, ctx->r2) = ctx->r6;
        goto L_800984C8;
    // 0x800983D0: sh          $a2, 0xC($v0)
    MEM_H(0XC, ctx->r2) = ctx->r6;
L_800983D4:
    // 0x800983D4: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x800983D8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x800983DC: mtc1        $a2, $f0
    ctx->f0.u32l = ctx->r6;
    // 0x800983E0: nop

    // 0x800983E4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x800983E8: div.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    // 0x800983EC: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x800983F0: lw          $v0, -0xAD0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XAD0);
    // 0x800983F4: cvt.d.s     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.d = CVT_D_S(ctx->f0.fl);
    // 0x800983F8: add.d       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = ctx->f0.d + ctx->f0.d;
    // 0x800983FC: lwc1        $f2, 0x44($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X44);
    // 0x80098400: cvt.d.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.d = CVT_D_W(ctx->f2.u32l);
    // 0x80098404: div.d       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = DIV_D(ctx->f0.d, ctx->f2.d);
    // 0x80098408: lw          $v1, 0x20($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X20);
    // 0x8009840C: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x80098410: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80098414: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80098418: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8009841C: cvt.s.d     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f0.fl = CVT_S_D(ctx->f0.d);
    // 0x80098420: j           L_800984C8
    // 0x80098424: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
        goto L_800984C8;
    // 0x80098424: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
L_80098428:
    // 0x80098428: lw          $v1, 0x20($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X20);
    // 0x8009842C: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x80098430: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80098434: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80098438: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8009843C: ldc1        $f2, 0x3140($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, 0X3140);
    // 0x80098440: mtc1        $a2, $f0
    ctx->f0.u32l = ctx->r6;
    // 0x80098444: nop

    // 0x80098448: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x8009844C: addu        $a0, $v0, $v1
    ctx->r4 = ADD32(ctx->r2, ctx->r3);
    // 0x80098450: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x80098454: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80098458: cvt.d.s     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.d = CVT_D_S(ctx->f0.fl);
    // 0x8009845C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80098460: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x80098464: nop

    // 0x80098468: cvt.d.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.d = CVT_D_W(ctx->f4.u32l);
    // 0x8009846C: bgez        $v1, L_80098480
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80098470: div.d       $f2, $f0, $f2
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f2.d = DIV_D(ctx->f0.d, ctx->f2.d);
            goto L_80098480;
    }
    // 0x80098470: div.d       $f2, $f0, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f2.d = DIV_D(ctx->f0.d, ctx->f2.d);
    // 0x80098474: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80098478: ldc1        $f0, 0x3148($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X3148);
    // 0x8009847C: add.d       $f4, $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = ctx->f4.d + ctx->f0.d;
L_80098480:
    // 0x80098480: nop

    // 0x80098484: mul.d       $f0, $f2, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f4.d); 
    ctx->f0.d = MUL_D(ctx->f2.d, ctx->f4.d);
    // 0x80098488: cvt.s.d     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f0.fl = CVT_S_D(ctx->f0.d);
    // 0x8009848C: j           L_800984C8
    // 0x80098490: swc1        $f0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f0.u32l;
        goto L_800984C8;
    // 0x80098490: swc1        $f0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f0.u32l;
L_80098494:
    // 0x80098494: lw          $v1, 0x20($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X20);
    // 0x80098498: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x8009849C: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x800984A0: sll         $a1, $v0, 3
    ctx->r5 = S32(ctx->r2 << 3);
    // 0x800984A4: addu        $v1, $a1, $v1
    ctx->r3 = ADD32(ctx->r5, ctx->r3);
    // 0x800984A8: lw          $v0, 0x20($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X20);
    // 0x800984AC: beq         $v0, $zero, L_800984C8
    if (ctx->r2 == 0) {
        // 0x800984B0: nop
    
            goto L_800984C8;
    }
    // 0x800984B0: nop

    // 0x800984B4: sh          $a2, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r6;
    // 0x800984B8: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x800984BC: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x800984C0: jal         0x80095A20
    // 0x800984C4: lw          $a0, 0x20($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X20);
    _init_lpfilter(rdram, ctx);
        goto after_0;
    // 0x800984C4: lw          $a0, 0x20($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X20);
    after_0:
L_800984C8:
    // 0x800984C8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x800984CC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x800984D0: jr          $ra
    // 0x800984D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x800984D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void alFxParam(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800982D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800982D8: beql        $a1, $v0, L_800982E0
    if (ctx->r5 == ctx->r2) {
        // 0x800982DC: sw          $a2, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->r6;
            goto L_800982E0;
    }
    goto skip_0;
    // 0x800982DC: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
    skip_0:
L_800982E0:
    // 0x800982E0: jr          $ra
    // 0x800982E4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    TRACE_RETURN()
    return;
    // 0x800982E4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_800306C0_BAC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800306C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800306C4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x800306C8: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x800306CC: jal         0x8002C654
    // 0x800306D0: addiu       $a0, $a0, -0x22C0
    ctx->r4 = ADD32(ctx->r4, -0X22C0);
    func_8002C654_7A54(rdram, ctx);
        goto after_0;
    // 0x800306D0: addiu       $a0, $a0, -0x22C0
    ctx->r4 = ADD32(ctx->r4, -0X22C0);
    after_0:
    // 0x800306D4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x800306D8: addiu       $a0, $a0, 0x46A0
    ctx->r4 = ADD32(ctx->r4, 0X46A0);
    // 0x800306DC: jal         0x8009A2B0
    // 0x800306E0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    bzero_recomp(rdram, ctx);
        goto after_1;
    // 0x800306E0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_1:
    // 0x800306E4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x800306E8: jr          $ra
    // 0x800306EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x800306EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80035518_10918(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80035518: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003551C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80035520: lui         $s0, 0x801B
    ctx->r16 = S32(0X801B << 16);
    // 0x80035524: addiu       $s0, $s0, -0xBD0
    ctx->r16 = ADD32(ctx->r16, -0XBD0);
    // 0x80035528: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003552C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80035530: beq         $a0, $zero, L_80035540
    if (ctx->r4 == 0) {
        // 0x80035534: nop
    
            goto L_80035540;
    }
    // 0x80035534: nop

    // 0x80035538: jal         0x80025FF8
    // 0x8003553C: nop

    func_80025FF8_13F8(rdram, ctx);
        goto after_0;
    // 0x8003553C: nop

    after_0:
L_80035540:
    // 0x80035540: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80035544: lw          $a0, -0xBCC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XBCC);
    // 0x80035548: beql        $a0, $zero, L_8003555C
    if (ctx->r4 == 0) {
        // 0x8003554C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8003555C;
    }
    goto skip_0;
    // 0x8003554C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_0:
    // 0x80035550: jal         0x80025FF8
    // 0x80035554: nop

    func_80025FF8_13F8(rdram, ctx);
        goto after_1;
    // 0x80035554: nop

    after_1:
    // 0x80035558: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8003555C:
    // 0x8003555C: jal         0x8009A2B0
    // 0x80035560: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    bzero_recomp(rdram, ctx);
        goto after_2;
    // 0x80035560: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_2:
    // 0x80035564: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80035568: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8003556C: jr          $ra
    // 0x80035570: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80035570: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8002AB8C_5F8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002AB8C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8002AB90: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8002AB94: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8002AB98: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8002AB9C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8002ABA0: lbu         $s0, 0x3($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0X3);
    // 0x8002ABA4: lbu         $a2, 0x4($s1)
    ctx->r6 = MEM_BU(ctx->r17, 0X4);
    // 0x8002ABA8: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x8002ABAC: sll         $v0, $s0, 1
    ctx->r2 = S32(ctx->r16 << 1);
    // 0x8002ABB0: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8002ABB4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8002ABB8: lh          $v1, -0x3E70($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X3E70);
    // 0x8002ABBC: addiu       $a3, $sp, 0x1A
    ctx->r7 = ADD32(ctx->r29, 0X1A);
    // 0x8002ABC0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8002ABC4: sh          $v0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r2;
    // 0x8002ABC8: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    // 0x8002ABCC: sw          $a2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r6;
    // 0x8002ABD0: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    // 0x8002ABD4: jal         0x8002AD74
    // 0x8002ABD8: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    func_8002AD74_6174(rdram, ctx);
        goto after_0;
    // 0x8002ABD8: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    after_0:
    // 0x8002ABDC: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x8002ABE0: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x8002ABE4: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x8002ABE8: sb          $v0, -0x2698($at)
    MEM_B(-0X2698, ctx->r1) = ctx->r2;
    // 0x8002ABEC: lh          $a0, 0x0($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X0);
    // 0x8002ABF0: jal         0x8008AA50
    // 0x8002ABF4: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    func_8008AA50_65E50(rdram, ctx);
        goto after_1;
    // 0x8002ABF4: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    after_1:
    // 0x8002ABF8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8002ABFC: lh          $a1, 0x18($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X18);
    // 0x8002AC00: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8002AC04: addiu       $v0, $v0, 0x2270
    ctx->r2 = ADD32(ctx->r2, 0X2270);
    // 0x8002AC08: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x8002AC0C: jal         0x8008AE40
    // 0x8002AC10: sw          $a0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r4;
    func_8008AE40_66240(rdram, ctx);
        goto after_2;
    // 0x8002AC10: sw          $a0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r4;
    after_2:
    // 0x8002AC14: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8002AC18: jal         0x8008AEA0
    // 0x8002AC1C: lh          $a1, 0x1A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X1A);
    func_8008AEA0_662A0(rdram, ctx);
        goto after_3;
    // 0x8002AC1C: lh          $a1, 0x1A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X1A);
    after_3:
    // 0x8002AC20: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8002AC24: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8002AC28: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8002AC2C: jr          $ra
    // 0x8002AC30: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8002AC30: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80026C80_2080(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80026C80: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x80026C84: sw          $s4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r20;
    // 0x80026C88: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x80026C8C: sw          $s3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r19;
    // 0x80026C90: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x80026C94: sw          $s7, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r23;
    // 0x80026C98: addu        $s7, $a2, $zero
    ctx->r23 = ADD32(ctx->r6, 0);
    // 0x80026C9C: sw          $s0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r16;
    // 0x80026CA0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80026CA4: sw          $s5, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r21;
    // 0x80026CA8: addu        $s5, $zero, $zero
    ctx->r21 = ADD32(0, 0);
    // 0x80026CAC: sw          $ra, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r31;
    // 0x80026CB0: sw          $fp, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r30;
    // 0x80026CB4: sw          $s6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r22;
    // 0x80026CB8: sw          $s2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r18;
    // 0x80026CBC: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    // 0x80026CC0: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x80026CC4: lw          $s6, 0xC($s4)
    ctx->r22 = MEM_W(ctx->r20, 0XC);
    // 0x80026CC8: lw          $s1, 0x0($s4)
    ctx->r17 = MEM_W(ctx->r20, 0X0);
    // 0x80026CCC: lw          $fp, 0x10($s4)
    ctx->r30 = MEM_W(ctx->r20, 0X10);
    // 0x80026CD0: sltiu       $v0, $s6, 0x1001
    ctx->r2 = ctx->r22 < 0X1001 ? 1 : 0;
    // 0x80026CD4: bne         $v0, $zero, L_80026CE0
    if (ctx->r2 != 0) {
        // 0x80026CD8: addu        $s2, $s6, $zero
        ctx->r18 = ADD32(ctx->r22, 0);
            goto L_80026CE0;
    }
    // 0x80026CD8: addu        $s2, $s6, $zero
    ctx->r18 = ADD32(ctx->r22, 0);
    // 0x80026CDC: addiu       $s2, $zero, 0x1000
    ctx->r18 = ADD32(0, 0X1000);
L_80026CE0:
    // 0x80026CE0: bgez        $s1, L_80026CFC
    if (SIGNED(ctx->r17) >= 0) {
        // 0x80026CE4: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_80026CFC;
    }
    // 0x80026CE4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80026CE8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80026CEC: jal         0x8009A3B4
    // 0x80026CF0: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80026CF0: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_0:
    // 0x80026CF4: j           L_80026D34
    // 0x80026CF8: nop

        goto L_80026D34;
    // 0x80026CF8: nop

L_80026CFC:
    // 0x80026CFC: jal         0x80099440
    // 0x80026D00: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    osInvalDCache_recomp(rdram, ctx);
        goto after_1;
    // 0x80026D00: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_1:
    // 0x80026D04: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x80026D08: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80026D0C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80026D10: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    // 0x80026D14: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x80026D18: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    // 0x80026D1C: jal         0x80094F50
    // 0x80026D20: sw          $s7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r23;
    osPiStartDma_recomp(rdram, ctx);
        goto after_2;
    // 0x80026D20: sw          $s7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r23;
    after_2:
    // 0x80026D24: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    // 0x80026D28: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x80026D2C: jal         0x8009A5E0
    // 0x80026D30: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x80026D30: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
L_80026D34:
    // 0x80026D34: lw          $a0, 0x10($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X10);
    // 0x80026D38: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x80026D3C: lw          $t0, 0x0($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X0);
    // 0x80026D40: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x80026D44: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80026D48: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
    // 0x80026D4C: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x80026D50: addiu       $s5, $s5, 0x4
    ctx->r21 = ADD32(ctx->r21, 0X4);
    // 0x80026D54: jal         0x80099440
    // 0x80026D58: addiu       $s2, $zero, 0x1010
    ctx->r18 = ADD32(0, 0X1010);
    osInvalDCache_recomp(rdram, ctx);
        goto after_4;
    // 0x80026D58: addiu       $s2, $zero, 0x1010
    ctx->r18 = ADD32(0, 0X1010);
    after_4:
    // 0x80026D5C: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80026D60: addiu       $v0, $v0, 0x6F80
    ctx->r2 = ADD32(ctx->r2, 0X6F80);
L_80026D64:
    // 0x80026D64: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x80026D68: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x80026D6C: bgez        $s2, L_80026D64
    if (SIGNED(ctx->r18) >= 0) {
        // 0x80026D70: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_80026D64;
    }
    // 0x80026D70: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80026D74: addiu       $s4, $zero, 0xFEE
    ctx->r20 = ADD32(0, 0XFEE);
    // 0x80026D78: sltiu       $t1, $s6, 0x1001
    ctx->r9 = ctx->r22 < 0X1001 ? 1 : 0;
    // 0x80026D7C: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x80026D80: sw          $t1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r9;
L_80026D84:
    // 0x80026D84: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x80026D88: srl         $t0, $t0, 1
    ctx->r8 = S32(U32(ctx->r8) >> 1);
    // 0x80026D8C: andi        $v0, $t0, 0x100
    ctx->r2 = ctx->r8 & 0X100;
    // 0x80026D90: bne         $v0, $zero, L_80026E38
    if (ctx->r2 != 0) {
        // 0x80026D94: sw          $t0, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r8;
            goto L_80026E38;
    }
    // 0x80026D94: sw          $t0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r8;
    // 0x80026D98: sltu        $v0, $s6, $s5
    ctx->r2 = ctx->r22 < ctx->r21 ? 1 : 0;
    // 0x80026D9C: bne         $v0, $zero, L_800270C8
    if (ctx->r2 != 0) {
        // 0x80026DA0: slti        $v0, $s0, 0x1000
        ctx->r2 = SIGNED(ctx->r16) < 0X1000 ? 1 : 0;
            goto L_800270C8;
    }
    // 0x80026DA0: slti        $v0, $s0, 0x1000
    ctx->r2 = SIGNED(ctx->r16) < 0X1000 ? 1 : 0;
    // 0x80026DA4: bnel        $v0, $zero, L_80026E24
    if (ctx->r2 != 0) {
        // 0x80026DA8: addu        $v0, $s3, $s0
        ctx->r2 = ADD32(ctx->r19, ctx->r16);
            goto L_80026E24;
    }
    goto skip_0;
    // 0x80026DA8: addu        $v0, $s3, $s0
    ctx->r2 = ADD32(ctx->r19, ctx->r16);
    skip_0:
    // 0x80026DAC: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x80026DB0: bne         $t1, $zero, L_80026DBC
    if (ctx->r9 != 0) {
        // 0x80026DB4: addu        $s0, $s6, $zero
        ctx->r16 = ADD32(ctx->r22, 0);
            goto L_80026DBC;
    }
    // 0x80026DB4: addu        $s0, $s6, $zero
    ctx->r16 = ADD32(ctx->r22, 0);
    // 0x80026DB8: addiu       $s0, $zero, 0x1000
    ctx->r16 = ADD32(0, 0X1000);
L_80026DBC:
    // 0x80026DBC: lui         $t0, 0x8000
    ctx->r8 = S32(0X8000 << 16);
    // 0x80026DC0: and         $v0, $s1, $t0
    ctx->r2 = ctx->r17 & ctx->r8;
    // 0x80026DC4: beq         $v0, $zero, L_80026DE0
    if (ctx->r2 == 0) {
        // 0x80026DC8: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_80026DE0;
    }
    // 0x80026DC8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80026DCC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80026DD0: jal         0x8009A3B4
    // 0x80026DD4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80026DD4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80026DD8: j           L_80026E1C
    // 0x80026DDC: addiu       $s1, $s1, 0x1000
    ctx->r17 = ADD32(ctx->r17, 0X1000);
        goto L_80026E1C;
    // 0x80026DDC: addiu       $s1, $s1, 0x1000
    ctx->r17 = ADD32(ctx->r17, 0X1000);
L_80026DE0:
    // 0x80026DE0: jal         0x80099440
    // 0x80026DE4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    osInvalDCache_recomp(rdram, ctx);
        goto after_6;
    // 0x80026DE4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_6:
    // 0x80026DE8: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x80026DEC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80026DF0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80026DF4: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    // 0x80026DF8: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x80026DFC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80026E00: jal         0x80094F50
    // 0x80026E04: sw          $s7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r23;
    osPiStartDma_recomp(rdram, ctx);
        goto after_7;
    // 0x80026E04: sw          $s7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r23;
    after_7:
    // 0x80026E08: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    // 0x80026E0C: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x80026E10: jal         0x8009A5E0
    // 0x80026E14: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_8;
    // 0x80026E14: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_8:
    // 0x80026E18: addiu       $s1, $s1, 0x1000
    ctx->r17 = ADD32(ctx->r17, 0X1000);
L_80026E1C:
    // 0x80026E1C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80026E20: addu        $v0, $s3, $s0
    ctx->r2 = ADD32(ctx->r19, ctx->r16);
L_80026E24:
    // 0x80026E24: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80026E28: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80026E2C: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x80026E30: ori         $v0, $v0, 0xFF00
    ctx->r2 = ctx->r2 | 0XFF00;
    // 0x80026E34: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
L_80026E38:
    // 0x80026E38: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x80026E3C: andi        $v0, $t1, 0x1
    ctx->r2 = ctx->r9 & 0X1;
    // 0x80026E40: beq         $v0, $zero, L_80026F18
    if (ctx->r2 == 0) {
        // 0x80026E44: sltu        $v0, $s6, $s5
        ctx->r2 = ctx->r22 < ctx->r21 ? 1 : 0;
            goto L_80026F18;
    }
    // 0x80026E44: sltu        $v0, $s6, $s5
    ctx->r2 = ctx->r22 < ctx->r21 ? 1 : 0;
    // 0x80026E48: bne         $v0, $zero, L_800270C8
    if (ctx->r2 != 0) {
        // 0x80026E4C: slti        $v0, $s0, 0x1000
        ctx->r2 = SIGNED(ctx->r16) < 0X1000 ? 1 : 0;
            goto L_800270C8;
    }
    // 0x80026E4C: slti        $v0, $s0, 0x1000
    ctx->r2 = SIGNED(ctx->r16) < 0X1000 ? 1 : 0;
    // 0x80026E50: bnel        $v0, $zero, L_80026ED0
    if (ctx->r2 != 0) {
        // 0x80026E54: addu        $v0, $s3, $s0
        ctx->r2 = ADD32(ctx->r19, ctx->r16);
            goto L_80026ED0;
    }
    goto skip_1;
    // 0x80026E54: addu        $v0, $s3, $s0
    ctx->r2 = ADD32(ctx->r19, ctx->r16);
    skip_1:
    // 0x80026E58: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x80026E5C: bne         $t0, $zero, L_80026E68
    if (ctx->r8 != 0) {
        // 0x80026E60: addu        $s0, $s6, $zero
        ctx->r16 = ADD32(ctx->r22, 0);
            goto L_80026E68;
    }
    // 0x80026E60: addu        $s0, $s6, $zero
    ctx->r16 = ADD32(ctx->r22, 0);
    // 0x80026E64: addiu       $s0, $zero, 0x1000
    ctx->r16 = ADD32(0, 0X1000);
L_80026E68:
    // 0x80026E68: lui         $t1, 0x8000
    ctx->r9 = S32(0X8000 << 16);
    // 0x80026E6C: and         $v0, $s1, $t1
    ctx->r2 = ctx->r17 & ctx->r9;
    // 0x80026E70: beq         $v0, $zero, L_80026E8C
    if (ctx->r2 == 0) {
        // 0x80026E74: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_80026E8C;
    }
    // 0x80026E74: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80026E78: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80026E7C: jal         0x8009A3B4
    // 0x80026E80: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x80026E80: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_9:
    // 0x80026E84: j           L_80026EC8
    // 0x80026E88: addiu       $s1, $s1, 0x1000
    ctx->r17 = ADD32(ctx->r17, 0X1000);
        goto L_80026EC8;
    // 0x80026E88: addiu       $s1, $s1, 0x1000
    ctx->r17 = ADD32(ctx->r17, 0X1000);
L_80026E8C:
    // 0x80026E8C: jal         0x80099440
    // 0x80026E90: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    osInvalDCache_recomp(rdram, ctx);
        goto after_10;
    // 0x80026E90: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_10:
    // 0x80026E94: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x80026E98: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80026E9C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80026EA0: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    // 0x80026EA4: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x80026EA8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80026EAC: jal         0x80094F50
    // 0x80026EB0: sw          $s7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r23;
    osPiStartDma_recomp(rdram, ctx);
        goto after_11;
    // 0x80026EB0: sw          $s7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r23;
    after_11:
    // 0x80026EB4: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    // 0x80026EB8: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x80026EBC: jal         0x8009A5E0
    // 0x80026EC0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_12;
    // 0x80026EC0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_12:
    // 0x80026EC4: addiu       $s1, $s1, 0x1000
    ctx->r17 = ADD32(ctx->r17, 0X1000);
L_80026EC8:
    // 0x80026EC8: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80026ECC: addu        $v0, $s3, $s0
    ctx->r2 = ADD32(ctx->r19, ctx->r16);
L_80026ED0:
    // 0x80026ED0: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x80026ED4: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x80026ED8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80026EDC: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80026EE0: sw          $t0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r8;
    // 0x80026EE4: sb          $v1, 0x0($fp)
    MEM_B(0X0, ctx->r30) = ctx->r3;
    // 0x80026EE8: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x80026EEC: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x80026EF0: sltu        $v0, $t0, $t1
    ctx->r2 = ctx->r8 < ctx->r9 ? 1 : 0;
    // 0x80026EF4: beq         $v0, $zero, L_800270C8
    if (ctx->r2 == 0) {
        // 0x80026EF8: addiu       $fp, $fp, 0x1
        ctx->r30 = ADD32(ctx->r30, 0X1);
            goto L_800270C8;
    }
    // 0x80026EF8: addiu       $fp, $fp, 0x1
    ctx->r30 = ADD32(ctx->r30, 0X1);
    // 0x80026EFC: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x80026F00: addiu       $t0, $t0, 0x5F70
    ctx->r8 = ADD32(ctx->r8, 0X5F70);
    // 0x80026F04: addu        $v0, $s4, $t0
    ctx->r2 = ADD32(ctx->r20, ctx->r8);
    // 0x80026F08: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
    // 0x80026F0C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x80026F10: j           L_80026D84
    // 0x80026F14: andi        $s4, $s4, 0xFFF
    ctx->r20 = ctx->r20 & 0XFFF;
        goto L_80026D84;
    // 0x80026F14: andi        $s4, $s4, 0xFFF
    ctx->r20 = ctx->r20 & 0XFFF;
L_80026F18:
    // 0x80026F18: bne         $v0, $zero, L_800270C8
    if (ctx->r2 != 0) {
        // 0x80026F1C: slti        $v0, $s0, 0x1000
        ctx->r2 = SIGNED(ctx->r16) < 0X1000 ? 1 : 0;
            goto L_800270C8;
    }
    // 0x80026F1C: slti        $v0, $s0, 0x1000
    ctx->r2 = SIGNED(ctx->r16) < 0X1000 ? 1 : 0;
    // 0x80026F20: bnel        $v0, $zero, L_80026FA0
    if (ctx->r2 != 0) {
        // 0x80026F24: addu        $v0, $s3, $s0
        ctx->r2 = ADD32(ctx->r19, ctx->r16);
            goto L_80026FA0;
    }
    goto skip_2;
    // 0x80026F24: addu        $v0, $s3, $s0
    ctx->r2 = ADD32(ctx->r19, ctx->r16);
    skip_2:
    // 0x80026F28: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x80026F2C: bne         $t1, $zero, L_80026F38
    if (ctx->r9 != 0) {
        // 0x80026F30: addu        $s0, $s6, $zero
        ctx->r16 = ADD32(ctx->r22, 0);
            goto L_80026F38;
    }
    // 0x80026F30: addu        $s0, $s6, $zero
    ctx->r16 = ADD32(ctx->r22, 0);
    // 0x80026F34: addiu       $s0, $zero, 0x1000
    ctx->r16 = ADD32(0, 0X1000);
L_80026F38:
    // 0x80026F38: lui         $t0, 0x8000
    ctx->r8 = S32(0X8000 << 16);
    // 0x80026F3C: and         $v0, $s1, $t0
    ctx->r2 = ctx->r17 & ctx->r8;
    // 0x80026F40: beq         $v0, $zero, L_80026F5C
    if (ctx->r2 == 0) {
        // 0x80026F44: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_80026F5C;
    }
    // 0x80026F44: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80026F48: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80026F4C: jal         0x8009A3B4
    // 0x80026F50: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    memcpy_recomp(rdram, ctx);
        goto after_13;
    // 0x80026F50: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_13:
    // 0x80026F54: j           L_80026F98
    // 0x80026F58: addiu       $s1, $s1, 0x1000
    ctx->r17 = ADD32(ctx->r17, 0X1000);
        goto L_80026F98;
    // 0x80026F58: addiu       $s1, $s1, 0x1000
    ctx->r17 = ADD32(ctx->r17, 0X1000);
L_80026F5C:
    // 0x80026F5C: jal         0x80099440
    // 0x80026F60: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    osInvalDCache_recomp(rdram, ctx);
        goto after_14;
    // 0x80026F60: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_14:
    // 0x80026F64: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x80026F68: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80026F6C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80026F70: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    // 0x80026F74: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x80026F78: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80026F7C: jal         0x80094F50
    // 0x80026F80: sw          $s7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r23;
    osPiStartDma_recomp(rdram, ctx);
        goto after_15;
    // 0x80026F80: sw          $s7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r23;
    after_15:
    // 0x80026F84: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    // 0x80026F88: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x80026F8C: jal         0x8009A5E0
    // 0x80026F90: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_16;
    // 0x80026F90: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_16:
    // 0x80026F94: addiu       $s1, $s1, 0x1000
    ctx->r17 = ADD32(ctx->r17, 0X1000);
L_80026F98:
    // 0x80026F98: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80026F9C: addu        $v0, $s3, $s0
    ctx->r2 = ADD32(ctx->r19, ctx->r16);
L_80026FA0:
    // 0x80026FA0: lbu         $s2, 0x0($v0)
    ctx->r18 = MEM_BU(ctx->r2, 0X0);
    // 0x80026FA4: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x80026FA8: sltu        $v0, $s6, $s5
    ctx->r2 = ctx->r22 < ctx->r21 ? 1 : 0;
    // 0x80026FAC: bne         $v0, $zero, L_800270C8
    if (ctx->r2 != 0) {
        // 0x80026FB0: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_800270C8;
    }
    // 0x80026FB0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80026FB4: slti        $v0, $s0, 0x1000
    ctx->r2 = SIGNED(ctx->r16) < 0X1000 ? 1 : 0;
    // 0x80026FB8: bne         $v0, $zero, L_8002703C
    if (ctx->r2 != 0) {
        // 0x80026FBC: addu        $v0, $s3, $s0
        ctx->r2 = ADD32(ctx->r19, ctx->r16);
            goto L_8002703C;
    }
    // 0x80026FBC: addu        $v0, $s3, $s0
    ctx->r2 = ADD32(ctx->r19, ctx->r16);
    // 0x80026FC0: addu        $s0, $s6, $zero
    ctx->r16 = ADD32(ctx->r22, 0);
    // 0x80026FC4: sltiu       $v0, $s0, 0x1001
    ctx->r2 = ctx->r16 < 0X1001 ? 1 : 0;
    // 0x80026FC8: beql        $v0, $zero, L_80026FD0
    if (ctx->r2 == 0) {
        // 0x80026FCC: addiu       $s0, $zero, 0x1000
        ctx->r16 = ADD32(0, 0X1000);
            goto L_80026FD0;
    }
    goto skip_3;
    // 0x80026FCC: addiu       $s0, $zero, 0x1000
    ctx->r16 = ADD32(0, 0X1000);
    skip_3:
L_80026FD0:
    // 0x80026FD0: lui         $t1, 0x8000
    ctx->r9 = S32(0X8000 << 16);
    // 0x80026FD4: and         $v0, $s1, $t1
    ctx->r2 = ctx->r17 & ctx->r9;
    // 0x80026FD8: beq         $v0, $zero, L_80026FF4
    if (ctx->r2 == 0) {
        // 0x80026FDC: addu        $a1, $s1, $zero
        ctx->r5 = ADD32(ctx->r17, 0);
            goto L_80026FF4;
    }
    // 0x80026FDC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80026FE0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80026FE4: jal         0x8009A3B4
    // 0x80026FE8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    memcpy_recomp(rdram, ctx);
        goto after_17;
    // 0x80026FE8: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_17:
    // 0x80026FEC: j           L_80027034
    // 0x80026FF0: addiu       $s1, $s1, 0x1000
    ctx->r17 = ADD32(ctx->r17, 0X1000);
        goto L_80027034;
    // 0x80026FF0: addiu       $s1, $s1, 0x1000
    ctx->r17 = ADD32(ctx->r17, 0X1000);
L_80026FF4:
    // 0x80026FF4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80026FF8: jal         0x80099440
    // 0x80026FFC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    osInvalDCache_recomp(rdram, ctx);
        goto after_18;
    // 0x80026FFC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_18:
    // 0x80027000: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x80027004: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80027008: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8002700C: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    // 0x80027010: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x80027014: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80027018: jal         0x80094F50
    // 0x8002701C: sw          $s7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r23;
    osPiStartDma_recomp(rdram, ctx);
        goto after_19;
    // 0x8002701C: sw          $s7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r23;
    after_19:
    // 0x80027020: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    // 0x80027024: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x80027028: jal         0x8009A5E0
    // 0x8002702C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_20;
    // 0x8002702C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_20:
    // 0x80027030: addiu       $s1, $s1, 0x1000
    ctx->r17 = ADD32(ctx->r17, 0X1000);
L_80027034:
    // 0x80027034: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80027038: addu        $v0, $s3, $s0
    ctx->r2 = ADD32(ctx->r19, ctx->r16);
L_8002703C:
    // 0x8002703C: lbu         $a1, 0x0($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X0);
    // 0x80027040: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80027044: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x80027048: andi        $v0, $a1, 0xF0
    ctx->r2 = ctx->r5 & 0XF0;
    // 0x8002704C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80027050: or          $s2, $s2, $v0
    ctx->r18 = ctx->r18 | ctx->r2;
    // 0x80027054: andi        $v0, $a1, 0xF
    ctx->r2 = ctx->r5 & 0XF;
    // 0x80027058: addiu       $a1, $v0, 0x2
    ctx->r5 = ADD32(ctx->r2, 0X2);
    // 0x8002705C: slti        $v0, $a1, 0x0
    ctx->r2 = SIGNED(ctx->r5) < 0X0 ? 1 : 0;
    // 0x80027060: bne         $v0, $zero, L_80026D84
    if (ctx->r2 != 0) {
        // 0x80027064: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80026D84;
    }
    // 0x80027064: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_80027068:
    // 0x80027068: addu        $v0, $s2, $a0
    ctx->r2 = ADD32(ctx->r18, ctx->r4);
    // 0x8002706C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80027070: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x80027074: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x80027078: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8002707C: lbu         $v1, 0x5F70($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X5F70);
    // 0x80027080: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80027084: sw          $t0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r8;
    // 0x80027088: sb          $v1, 0x0($fp)
    MEM_B(0X0, ctx->r30) = ctx->r3;
    // 0x8002708C: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x80027090: sltu        $v0, $t0, $t1
    ctx->r2 = ctx->r8 < ctx->r9 ? 1 : 0;
    // 0x80027094: beq         $v0, $zero, L_800270C8
    if (ctx->r2 == 0) {
        // 0x80027098: addiu       $fp, $fp, 0x1
        ctx->r30 = ADD32(ctx->r30, 0X1);
            goto L_800270C8;
    }
    // 0x80027098: addiu       $fp, $fp, 0x1
    ctx->r30 = ADD32(ctx->r30, 0X1);
    // 0x8002709C: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x800270A0: addiu       $t0, $t0, 0x5F70
    ctx->r8 = ADD32(ctx->r8, 0X5F70);
    // 0x800270A4: addu        $v0, $s4, $t0
    ctx->r2 = ADD32(ctx->r20, ctx->r8);
    // 0x800270A8: sb          $v1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r3;
    // 0x800270AC: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x800270B0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800270B4: slt         $v0, $a1, $a0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x800270B8: beq         $v0, $zero, L_80027068
    if (ctx->r2 == 0) {
        // 0x800270BC: andi        $s4, $s4, 0xFFF
        ctx->r20 = ctx->r20 & 0XFFF;
            goto L_80027068;
    }
    // 0x800270BC: andi        $s4, $s4, 0xFFF
    ctx->r20 = ctx->r20 & 0XFFF;
    // 0x800270C0: j           L_80026D84
    // 0x800270C4: nop

        goto L_80026D84;
    // 0x800270C4: nop

L_800270C8:
    // 0x800270C8: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
    // 0x800270CC: lw          $fp, 0x80($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X80);
    // 0x800270D0: lw          $s7, 0x7C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X7C);
    // 0x800270D4: lw          $s6, 0x78($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X78);
    // 0x800270D8: lw          $s5, 0x74($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X74);
    // 0x800270DC: lw          $s4, 0x70($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X70);
    // 0x800270E0: lw          $s3, 0x6C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X6C);
    // 0x800270E4: lw          $s2, 0x68($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X68);
    // 0x800270E8: lw          $s1, 0x64($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X64);
    // 0x800270EC: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x800270F0: jr          $ra
    // 0x800270F4: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    TRACE_RETURN()
    return;
    // 0x800270F4: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_8002A2F8_56F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002A2F8: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8002A2FC: lw          $v1, -0x2374($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X2374);
    // 0x8002A300: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x8002A304: addiu       $v0, $v0, 0x480
    ctx->r2 = ADD32(ctx->r2, 0X480);
    // 0x8002A308: beq         $v1, $v0, L_8002A334
    if (ctx->r3 == ctx->r2) {
        // 0x8002A30C: nop
    
            goto L_8002A334;
    }
    // 0x8002A30C: nop

    // 0x8002A310: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    // 0x8002A314: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8002A318: lw          $v0, -0x2374($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2374);
    // 0x8002A31C: sh          $a0, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r4;
    // 0x8002A320: sw          $a1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r5;
    // 0x8002A324: sw          $a2, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r6;
    // 0x8002A328: addiu       $v0, $v0, 0x14
    ctx->r2 = ADD32(ctx->r2, 0X14);
    // 0x8002A32C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002A330: sw          $v0, -0x2374($at)
    MEM_W(-0X2374, ctx->r1) = ctx->r2;
L_8002A334:
    // 0x8002A334: jr          $ra
    // 0x8002A338: nop

    TRACE_RETURN()
    return;
    // 0x8002A338: nop

;}
RECOMP_FUNC void func_8007932C_5472C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007932C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80079330: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80079334: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80079338: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007933C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80079340: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x80079344: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80079348: jal         0x8004D5D4
    // 0x8007934C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8007934C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80079350: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80079354: addiu       $a0, $zero, 0x9B
    ctx->r4 = ADD32(0, 0X9B);
    // 0x80079358: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    // 0x8007935C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80079360: jal         0x8002A33C
    // 0x80079364: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x80079364: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    after_1:
    // 0x80079368: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8007936C: beq         $v0, $zero, L_80079384
    if (ctx->r2 == 0) {
        // 0x80079370: nop
    
            goto L_80079384;
    }
    // 0x80079370: nop

    // 0x80079374: jal         0x800799AC
    // 0x80079378: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800799AC_54DAC(rdram, ctx);
        goto after_2;
    // 0x80079378: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8007937C: j           L_8007938C
    // 0x80079380: nop

        goto L_8007938C;
    // 0x80079380: nop

L_80079384:
    // 0x80079384: jal         0x80079A68
    // 0x80079388: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80079A68_54E68(rdram, ctx);
        goto after_3;
    // 0x80079388: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_8007938C:
    // 0x8007938C: jal         0x80079AC8
    // 0x80079390: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80079AC8_54EC8(rdram, ctx);
        goto after_4;
    // 0x80079390: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80079394: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80079398: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x8007939C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800793A0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x800793A4: jr          $ra
    // 0x800793A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x800793A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80071274_4C674(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80071274: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80071278: andi        $a2, $a0, 0xFFFF
    ctx->r6 = ctx->r4 & 0XFFFF;
    // 0x8007127C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80071280: addiu       $v0, $v0, 0x5086
    ctx->r2 = ADD32(ctx->r2, 0X5086);
    // 0x80071284: sll         $v1, $a2, 1
    ctx->r3 = S32(ctx->r6 << 1);
    // 0x80071288: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x8007128C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80071290: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80071294: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80071298: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x8007129C: sh          $zero, 0x0($v1)
    MEM_H(0X0, ctx->r3) = 0;
    // 0x800712A0: srl         $v0, $v0, 12
    ctx->r2 = S32(U32(ctx->r2) >> 12);
    // 0x800712A4: bne         $v0, $zero, L_800712B0
    if (ctx->r2 != 0) {
        // 0x800712A8: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_800712B0;
    }
    // 0x800712A8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x800712AC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_800712B0:
    // 0x800712B0: jal         0x800712E4
    // 0x800712B4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_800712E4_4C6E4(rdram, ctx);
        goto after_0;
    // 0x800712B4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x800712B8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x800712BC: jr          $ra
    // 0x800712C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x800712C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
