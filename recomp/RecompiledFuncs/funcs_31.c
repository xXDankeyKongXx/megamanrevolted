#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8003EF80_1A380(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003EF80: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8003EF84: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x8003EF88: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8003EF8C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x8003EF90: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8003EF94: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x8003EF98: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x8003EF9C: addiu       $s3, $zero, -0x7FFF
    ctx->r19 = ADD32(0, -0X7FFF);
    // 0x8003EFA0: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8003EFA4: lui         $s2, 0x801E
    ctx->r18 = S32(0X801E << 16);
    // 0x8003EFA8: addiu       $s2, $s2, -0x7158
    ctx->r18 = ADD32(ctx->r18, -0X7158);
    // 0x8003EFAC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8003EFB0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8003EFB4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8003EFB8: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x8003EFBC: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x8003EFC0: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x8003EFC4: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x8003EFC8: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x8003EFCC: jal         0x8009A3B4
    // 0x8003EFD0: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8003EFD0: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    after_0:
    // 0x8003EFD4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8003EFD8: jal         0x80040D60
    // 0x8003EFDC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80040D60_1C160(rdram, ctx);
        goto after_1;
    // 0x8003EFDC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
    // 0x8003EFE0: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    // 0x8003EFE4: jal         0x80040EEC
    // 0x8003EFE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040EEC_1C2EC(rdram, ctx);
        goto after_2;
    // 0x8003EFE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8003EFEC: jal         0x8004DA68
    // 0x8003EFF0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004DA68_28E68(rdram, ctx);
        goto after_3;
    // 0x8003EFF0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
    // 0x8003EFF4: addu        $v1, $s4, $zero
    ctx->r3 = ADD32(ctx->r20, 0);
    // 0x8003EFF8: addiu       $s4, $s4, -0x1
    ctx->r20 = ADD32(ctx->r20, -0X1);
    // 0x8003EFFC: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8003F000: beq         $v1, $zero, L_8003F2A8
    if (ctx->r3 == 0) {
        // 0x8003F004: sll         $v0, $v0, 15
        ctx->r2 = S32(ctx->r2 << 15);
            goto L_8003F2A8;
    }
    // 0x8003F004: sll         $v0, $v0, 15
    ctx->r2 = S32(ctx->r2 << 15);
    // 0x8003F008: ori         $fp, $zero, 0x8000
    ctx->r30 = 0 | 0X8000;
    // 0x8003F00C: xori        $s6, $v0, 0x8000
    ctx->r22 = ctx->r2 ^ 0X8000;
    // 0x8003F010: lui         $s5, 0x8022
    ctx->r21 = S32(0X8022 << 16);
    // 0x8003F014: addiu       $s5, $s5, -0x26AC
    ctx->r21 = ADD32(ctx->r21, -0X26AC);
    // 0x8003F018: addiu       $s7, $s2, 0x2
    ctx->r23 = ADD32(ctx->r18, 0X2);
L_8003F01C:
    // 0x8003F01C: sll         $v0, $s4, 1
    ctx->r2 = S32(ctx->r20 << 1);
    // 0x8003F020: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003F024: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8003F028: lh          $a0, -0x3C88($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X3C88);
    // 0x8003F02C: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8003F030: lw          $v1, -0x35C0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X35C0);
    // 0x8003F034: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x8003F038: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8003F03C: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    // 0x8003F040: bgtz        $v0, L_8003F11C
    if (SIGNED(ctx->r2) > 0) {
        // 0x8003F044: addu        $a1, $v0, $zero
        ctx->r5 = ADD32(ctx->r2, 0);
            goto L_8003F11C;
    }
    // 0x8003F044: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8003F048: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8003F04C: lh          $v0, -0x7158($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7158);
    // 0x8003F050: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8003F054: lbu         $v1, 0x6B40($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X6B40);
    // 0x8003F058: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x8003F05C: lhu         $a3, 0x49AE($a3)
    ctx->r7 = MEM_HU(ctx->r7, 0X49AE);
    // 0x8003F060: addu        $v0, $v0, $fp
    ctx->r2 = ADD32(ctx->r2, ctx->r30);
    // 0x8003F064: sra         $v0, $v0, 9
    ctx->r2 = S32(SIGNED(ctx->r2) >> 9);
    // 0x8003F068: subu        $a2, $v0, $v1
    ctx->r6 = SUB32(ctx->r2, ctx->r3);
    // 0x8003F06C: sltu        $v0, $a2, $a3
    ctx->r2 = ctx->r6 < ctx->r7 ? 1 : 0;
    // 0x8003F070: beq         $v0, $zero, L_8003F0A8
    if (ctx->r2 == 0) {
        // 0x8003F074: addu        $t0, $a0, $zero
        ctx->r8 = ADD32(ctx->r4, 0);
            goto L_8003F0A8;
    }
    // 0x8003F074: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
    // 0x8003F078: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8003F07C: lh          $v0, -0x7154($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7154);
    // 0x8003F080: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003F084: lbu         $a0, -0x39A6($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X39A6);
    // 0x8003F088: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8003F08C: lhu         $v1, -0x7386($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X7386);
    // 0x8003F090: addu        $v0, $v0, $fp
    ctx->r2 = ADD32(ctx->r2, ctx->r30);
    // 0x8003F094: sra         $v0, $v0, 9
    ctx->r2 = S32(SIGNED(ctx->r2) >> 9);
    // 0x8003F098: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8003F09C: sltu        $v1, $v0, $v1
    ctx->r3 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8003F0A0: bne         $v1, $zero, L_8003F0B0
    if (ctx->r3 != 0) {
        // 0x8003F0A4: nop
    
            goto L_8003F0B0;
    }
    // 0x8003F0A4: nop

L_8003F0A8:
    // 0x8003F0A8: j           L_8003F0C4
    // 0x8003F0AC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8003F0C4;
    // 0x8003F0AC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8003F0B0:
    // 0x8003F0B0: nop

    // 0x8003F0B4: mult        $v0, $a3
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003F0B8: mflo        $v0
    ctx->r2 = lo;
    // 0x8003F0BC: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
    // 0x8003F0C0: nop

L_8003F0C4:
    // 0x8003F0C4: bne         $t0, $v0, L_8003F2A0
    if (ctx->r8 != ctx->r2) {
        // 0x8003F0C8: addu        $v0, $s4, $zero
        ctx->r2 = ADD32(ctx->r20, 0);
            goto L_8003F2A0;
    }
    // 0x8003F0C8: addu        $v0, $s4, $zero
    ctx->r2 = ADD32(ctx->r20, 0);
    // 0x8003F0CC: andi        $a0, $a1, 0x6000
    ctx->r4 = ctx->r5 & 0X6000;
    // 0x8003F0D0: beq         $a0, $zero, L_8003F2A0
    if (ctx->r4 == 0) {
        // 0x8003F0D4: nop
    
            goto L_8003F2A0;
    }
    // 0x8003F0D4: nop

    // 0x8003F0D8: andi        $v1, $a1, 0x1F00
    ctx->r3 = ctx->r5 & 0X1F00;
    // 0x8003F0DC: sra         $v1, $v1, 1
    ctx->r3 = S32(SIGNED(ctx->r3) >> 1);
    // 0x8003F0E0: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    // 0x8003F0E4: sra         $a0, $a0, 13
    ctx->r4 = S32(SIGNED(ctx->r4) >> 13);
    // 0x8003F0E8: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x8003F0EC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8003F0F0: sll         $v0, $v0, 7
    ctx->r2 = S32(ctx->r2 << 7);
    // 0x8003F0F4: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8003F0F8: lh          $a0, -0x26AE($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X26AE);
    // 0x8003F0FC: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8003F100: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8003F104: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x8003F108: slt         $v0, $s3, $v1
    ctx->r2 = SIGNED(ctx->r19) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8003F10C: bnel        $v0, $zero, L_8003F29C
    if (ctx->r2 != 0) {
        // 0x8003F110: addu        $s3, $v1, $zero
        ctx->r19 = ADD32(ctx->r3, 0);
            goto L_8003F29C;
    }
    goto skip_0;
    // 0x8003F110: addu        $s3, $v1, $zero
    ctx->r19 = ADD32(ctx->r3, 0);
    skip_0:
    // 0x8003F114: j           L_8003F2A0
    // 0x8003F118: addu        $v0, $s4, $zero
    ctx->r2 = ADD32(ctx->r20, 0);
        goto L_8003F2A0;
    // 0x8003F118: addu        $v0, $s4, $zero
    ctx->r2 = ADD32(ctx->r20, 0);
L_8003F11C:
    // 0x8003F11C: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x8003F120: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8003F124: lw          $v1, 0xB5C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0XB5C);
    // 0x8003F128: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8003F12C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8003F130: addu        $a0, $v1, $v0
    ctx->r4 = ADD32(ctx->r3, ctx->r2);
    // 0x8003F134: lhu         $v0, 0x6($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X6);
    // 0x8003F138: lw          $a1, 0x8($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X8);
    // 0x8003F13C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8003F140: beq         $v0, $zero, L_8003F15C
    if (ctx->r2 == 0) {
        // 0x8003F144: nop
    
            goto L_8003F15C;
    }
    // 0x8003F144: nop

    // 0x8003F148: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8003F14C: lw          $v1, 0x55A0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X55A0);
    // 0x8003F150: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x8003F154: j           L_8003F16C
    // 0x8003F158: addu        $s2, $v1, $v0
    ctx->r18 = ADD32(ctx->r3, ctx->r2);
        goto L_8003F16C;
    // 0x8003F158: addu        $s2, $v1, $v0
    ctx->r18 = ADD32(ctx->r3, ctx->r2);
L_8003F15C:
    // 0x8003F15C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8003F160: lw          $v1, 0x55A0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X55A0);
    // 0x8003F164: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x8003F168: addu        $s2, $v1, $v0
    ctx->r18 = ADD32(ctx->r3, ctx->r2);
L_8003F16C:
    // 0x8003F16C: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x8003F170: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    // 0x8003F174: lhu         $v0, 0x2($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X2);
    // 0x8003F178: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x8003F17C: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x8003F180: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    // 0x8003F184: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
    // 0x8003F188: beq         $v0, $zero, L_8003F2A0
    if (ctx->r2 == 0) {
        // 0x8003F18C: addu        $v0, $s4, $zero
        ctx->r2 = ADD32(ctx->r20, 0);
            goto L_8003F2A0;
    }
    // 0x8003F18C: addu        $v0, $s4, $zero
    ctx->r2 = ADD32(ctx->r20, 0);
    // 0x8003F190: addiu       $s0, $s2, 0x8
    ctx->r16 = ADD32(ctx->r18, 0X8);
L_8003F194:
    // 0x8003F194: lhu         $v1, 0x20($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X20);
    // 0x8003F198: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8003F19C: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x8003F1A0: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x8003F1A4: lhu         $v0, -0x6($s0)
    ctx->r2 = MEM_HU(ctx->r16, -0X6);
    // 0x8003F1A8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8003F1AC: sh          $v1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r3;
    // 0x8003F1B0: lhu         $v1, 0x24($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X24);
    // 0x8003F1B4: lhu         $v0, -0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, -0X4);
    // 0x8003F1B8: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x8003F1BC: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x8003F1C0: lhu         $v0, -0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, -0X2);
    // 0x8003F1C4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8003F1C8: sh          $v1, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r3;
    // 0x8003F1CC: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8003F1D0: lw          $v1, 0x55A0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X55A0);
    // 0x8003F1D4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8003F1D8: addu        $s1, $v1, $v0
    ctx->r17 = ADD32(ctx->r3, ctx->r2);
    // 0x8003F1DC: lhu         $a1, 0x4($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X4);
    // 0x8003F1E0: sltiu       $v0, $a1, 0x100
    ctx->r2 = ctx->r5 < 0X100 ? 1 : 0;
    // 0x8003F1E4: beq         $v0, $zero, L_8003F28C
    if (ctx->r2 == 0) {
        // 0x8003F1E8: andi        $v0, $a1, 0xF0
        ctx->r2 = ctx->r5 & 0XF0;
            goto L_8003F28C;
    }
    // 0x8003F1E8: andi        $v0, $a1, 0xF0
    ctx->r2 = ctx->r5 & 0XF0;
    // 0x8003F1EC: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
    // 0x8003F1F0: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x8003F1F4: addiu       $t1, $t1, -0x35F0
    ctx->r9 = ADD32(ctx->r9, -0X35F0);
    // 0x8003F1F8: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x8003F1FC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8003F200: jalr        $v0
    // 0x8003F204: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x8003F204: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_4:
    // 0x8003F208: beql        $v0, $zero, L_8003F290
    if (ctx->r2 == 0) {
        // 0x8003F20C: addiu       $s0, $s0, 0x10
        ctx->r16 = ADD32(ctx->r16, 0X10);
            goto L_8003F290;
    }
    goto skip_1;
    // 0x8003F20C: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    skip_1:
    // 0x8003F210: lw          $a2, 0x4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X4);
    // 0x8003F214: lhu         $a3, 0x22($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X22);
    // 0x8003F218: addiu       $a1, $s1, 0x2
    ctx->r5 = ADD32(ctx->r17, 0X2);
L_8003F21C:
    // 0x8003F21C: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x8003F220: and         $v0, $v0, $s6
    ctx->r2 = ctx->r2 & ctx->r22;
    // 0x8003F224: bnel        $v0, $zero, L_8003F280
    if (ctx->r2 != 0) {
        // 0x8003F228: addiu       $a1, $a1, 0x8
        ctx->r5 = ADD32(ctx->r5, 0X8);
            goto L_8003F280;
    }
    goto skip_2;
    // 0x8003F228: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    skip_2:
    // 0x8003F22C: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x8003F230: lhu         $v0, 0x0($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X0);
    // 0x8003F234: addu        $v1, $a3, $v1
    ctx->r3 = ADD32(ctx->r7, ctx->r3);
    // 0x8003F238: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8003F23C: sh          $v1, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r3;
    // 0x8003F240: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x8003F244: lhu         $a0, -0x2($s5)
    ctx->r4 = MEM_HU(ctx->r21, -0X2);
    // 0x8003F248: addu        $v0, $a3, $v0
    ctx->r2 = ADD32(ctx->r7, ctx->r2);
    // 0x8003F24C: subu        $a0, $v0, $a0
    ctx->r4 = SUB32(ctx->r2, ctx->r4);
    // 0x8003F250: sh          $a0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r4;
    // 0x8003F254: lh          $v0, 0x0($s7)
    ctx->r2 = MEM_H(ctx->r23, 0X0);
    // 0x8003F258: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8003F25C: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8003F260: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8003F264: beq         $v1, $zero, L_8003F27C
    if (ctx->r3 == 0) {
        // 0x8003F268: sll         $v0, $a0, 16
        ctx->r2 = S32(ctx->r4 << 16);
            goto L_8003F27C;
    }
    // 0x8003F268: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x8003F26C: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8003F270: slt         $v0, $s3, $v1
    ctx->r2 = SIGNED(ctx->r19) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8003F274: bnel        $v0, $zero, L_8003F27C
    if (ctx->r2 != 0) {
        // 0x8003F278: addu        $s3, $v1, $zero
        ctx->r19 = ADD32(ctx->r3, 0);
            goto L_8003F27C;
    }
    goto skip_3;
    // 0x8003F278: addu        $s3, $v1, $zero
    ctx->r19 = ADD32(ctx->r3, 0);
    skip_3:
L_8003F27C:
    // 0x8003F27C: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
L_8003F280:
    // 0x8003F280: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x8003F284: bne         $a2, $zero, L_8003F21C
    if (ctx->r6 != 0) {
        // 0x8003F288: addiu       $s1, $s1, 0x8
        ctx->r17 = ADD32(ctx->r17, 0X8);
            goto L_8003F21C;
    }
    // 0x8003F288: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
L_8003F28C:
    // 0x8003F28C: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
L_8003F290:
    // 0x8003F290: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8003F294: bne         $v0, $zero, L_8003F194
    if (ctx->r2 != 0) {
        // 0x8003F298: addiu       $s2, $s2, 0x10
        ctx->r18 = ADD32(ctx->r18, 0X10);
            goto L_8003F194;
    }
    // 0x8003F298: addiu       $s2, $s2, 0x10
    ctx->r18 = ADD32(ctx->r18, 0X10);
L_8003F29C:
    // 0x8003F29C: addu        $v0, $s4, $zero
    ctx->r2 = ADD32(ctx->r20, 0);
L_8003F2A0:
    // 0x8003F2A0: bne         $v0, $zero, L_8003F01C
    if (ctx->r2 != 0) {
        // 0x8003F2A4: addiu       $s4, $s4, -0x1
        ctx->r20 = ADD32(ctx->r20, -0X1);
            goto L_8003F01C;
    }
    // 0x8003F2A4: addiu       $s4, $s4, -0x1
    ctx->r20 = ADD32(ctx->r20, -0X1);
L_8003F2A8:
    // 0x8003F2A8: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x8003F2AC: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x8003F2B0: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x8003F2B4: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x8003F2B8: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x8003F2BC: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x8003F2C0: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x8003F2C4: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x8003F2C8: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8003F2CC: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8003F2D0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8003F2D4: jr          $ra
    // 0x8003F2D8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x8003F2D8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_8004DD50_29150(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004DD50: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8004DD54: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8004DD58: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8004DD5C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8004DD60: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x8004DD64: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x8004DD68: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8004DD6C: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x8004DD70: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8004DD74: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8004DD78: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x8004DD7C: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x8004DD80: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8004DD84: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8004DD88: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    // 0x8004DD8C: lw          $v1, 0x8($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X8);
    // 0x8004DD90: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8004DD94: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x8004DD98: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8004DD9C: jal         0x80030AA0
    // 0x8004DDA0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80030AA0_BEA0(rdram, ctx);
        goto after_0;
    // 0x8004DDA0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_0:
    // 0x8004DDA4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8004DDA8: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x8004DDAC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8004DDB0: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x8004DDB4: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x8004DDB8: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x8004DDBC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8004DDC0: sw          $v0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r2;
    // 0x8004DDC4: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x8004DDC8: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x8004DDCC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8004DDD0: sw          $v0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r2;
    // 0x8004DDD4: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x8004DDD8: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8004DDDC: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8004DDE0: jr          $ra
    // 0x8004DDE4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8004DDE4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8006261C_3DA1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006261C: lbu         $v1, 0x72($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X72);
    // 0x80062620: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80062624: lw          $a1, 0x6C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X6C);
    // 0x80062628: lui         $a2, 0x40
    ctx->r6 = S32(0X40 << 16);
    // 0x8006262C: ori         $a2, $a2, 0x800
    ctx->r6 = ctx->r6 | 0X800;
    // 0x80062630: sh          $zero, 0xBC($a0)
    MEM_H(0XBC, ctx->r4) = 0;
    // 0x80062634: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80062638: or          $v0, $v0, $a2
    ctx->r2 = ctx->r2 | ctx->r6;
    // 0x8006263C: addiu       $a1, $a1, 0x3
    ctx->r5 = ADD32(ctx->r5, 0X3);
    // 0x80062640: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x80062644: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80062648: sb          $v1, 0x72($a0)
    MEM_B(0X72, ctx->r4) = ctx->r3;
    // 0x8006264C: jr          $ra
    // 0x80062650: sw          $a1, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x80062650: sw          $a1, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_80068FCC_443CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80068FCC: addu        $t5, $a0, $zero
    ctx->r13 = ADD32(ctx->r4, 0);
    // 0x80068FD0: lbu         $v1, 0x7D($t5)
    ctx->r3 = MEM_BU(ctx->r13, 0X7D);
    // 0x80068FD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80068FD8: beq         $v1, $v0, L_800690F4
    if (ctx->r3 == ctx->r2) {
        // 0x80068FDC: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_800690F4;
    }
    // 0x80068FDC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80068FE0: beql        $v0, $zero, L_80068FF8
    if (ctx->r2 == 0) {
        // 0x80068FE4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80068FF8;
    }
    goto skip_0;
    // 0x80068FE4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80068FE8: beq         $v1, $zero, L_80069008
    if (ctx->r3 == 0) {
        // 0x80068FEC: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_80069008;
    }
    // 0x80068FEC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80068FF0: j           L_800692D0
    // 0x80068FF4: nop

        goto L_800692D0;
    // 0x80068FF4: nop

L_80068FF8:
    // 0x80068FF8: beq         $v1, $v0, L_8006925C
    if (ctx->r3 == ctx->r2) {
        // 0x80068FFC: nop
    
            goto L_8006925C;
    }
    // 0x80068FFC: nop

    // 0x80069000: j           L_800692D0
    // 0x80069004: nop

        goto L_800692D0;
    // 0x80069004: nop

L_80069008:
    // 0x80069008: lw          $v1, 0x0($t5)
    ctx->r3 = MEM_W(ctx->r13, 0X0);
    // 0x8006900C: lw          $a1, 0x6C($t5)
    ctx->r5 = MEM_W(ctx->r13, 0X6C);
    // 0x80069010: sb          $v0, 0x85($t5)
    MEM_B(0X85, ctx->r13) = ctx->r2;
    // 0x80069014: lui         $v0, 0x1400
    ctx->r2 = S32(0X1400 << 16);
    // 0x80069018: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8006901C: sw          $v1, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r3;
    // 0x80069020: lw          $v0, 0x0($t5)
    ctx->r2 = MEM_W(ctx->r13, 0X0);
    // 0x80069024: lui         $a0, 0x800
    ctx->r4 = S32(0X800 << 16);
    // 0x80069028: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    // 0x8006902C: sw          $v1, 0x80($t5)
    MEM_W(0X80, ctx->r13) = ctx->r3;
    // 0x80069030: lbu         $v1, 0x7F($t5)
    ctx->r3 = MEM_BU(ctx->r13, 0X7F);
    // 0x80069034: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x80069038: sw          $v0, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r2;
    // 0x8006903C: lbu         $a2, 0x2($a1)
    ctx->r6 = MEM_BU(ctx->r5, 0X2);
    // 0x80069040: lbu         $v0, 0x7D($t5)
    ctx->r2 = MEM_BU(ctx->r13, 0X7D);
    // 0x80069044: lbu         $a0, 0x7F($t5)
    ctx->r4 = MEM_BU(ctx->r13, 0X7F);
    // 0x80069048: lbu         $a1, 0x7E($t5)
    ctx->r5 = MEM_BU(ctx->r13, 0X7E);
    // 0x8006904C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80069050: sb          $v0, 0x7D($t5)
    MEM_B(0X7D, ctx->r13) = ctx->r2;
    // 0x80069054: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80069058: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8006905C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80069060: sh          $v0, 0x8A($t5)
    MEM_H(0X8A, ctx->r13) = ctx->r2;
    // 0x80069064: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80069068: lbu         $v1, 0x7F($t5)
    ctx->r3 = MEM_BU(ctx->r13, 0X7F);
    // 0x8006906C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80069070: lbu         $a0, 0x7F($t5)
    ctx->r4 = MEM_BU(ctx->r13, 0X7F);
    // 0x80069074: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80069078: sh          $v0, 0x8E($t5)
    MEM_H(0X8E, ctx->r13) = ctx->r2;
    // 0x8006907C: sh          $a2, 0xB4($t5)
    MEM_H(0XB4, ctx->r13) = ctx->r6;
    // 0x80069080: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80069084: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80069088: lhu         $v1, 0xB4($t5)
    ctx->r3 = MEM_HU(ctx->r13, 0XB4);
    // 0x8006908C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80069090: sh          $v0, 0x92($t5)
    MEM_H(0X92, ctx->r13) = ctx->r2;
    // 0x80069094: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80069098: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8006909C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x800690A0: sh          $v0, 0x96($t5)
    MEM_H(0X96, ctx->r13) = ctx->r2;
    // 0x800690A4: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x800690A8: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x800690AC: lhu         $a0, 0xB4($t5)
    ctx->r4 = MEM_HU(ctx->r13, 0XB4);
    // 0x800690B0: lbu         $a1, 0x7E($t5)
    ctx->r5 = MEM_BU(ctx->r13, 0X7E);
    // 0x800690B4: sh          $a2, 0xB6($t5)
    MEM_H(0XB6, ctx->r13) = ctx->r6;
    // 0x800690B8: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    // 0x800690BC: sh          $v1, 0x88($t5)
    MEM_H(0X88, ctx->r13) = ctx->r3;
    // 0x800690C0: lhu         $v1, 0xB4($t5)
    ctx->r3 = MEM_HU(ctx->r13, 0XB4);
    // 0x800690C4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800690C8: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
    // 0x800690CC: sh          $a0, 0x90($t5)
    MEM_H(0X90, ctx->r13) = ctx->r4;
    // 0x800690D0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x800690D4: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x800690D8: sh          $v1, 0x8C($t5)
    MEM_H(0X8C, ctx->r13) = ctx->r3;
    // 0x800690DC: lhu         $v1, 0xB4($t5)
    ctx->r3 = MEM_HU(ctx->r13, 0XB4);
    // 0x800690E0: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x800690E4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800690E8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x800690EC: j           L_800692D0
    // 0x800690F0: sh          $v1, 0x94($t5)
    MEM_H(0X94, ctx->r13) = ctx->r3;
        goto L_800692D0;
    // 0x800690F0: sh          $v1, 0x94($t5)
    MEM_H(0X94, ctx->r13) = ctx->r3;
L_800690F4:
    // 0x800690F4: lbu         $v1, 0x85($t5)
    ctx->r3 = MEM_BU(ctx->r13, 0X85);
    // 0x800690F8: lhu         $v0, 0x8A($t5)
    ctx->r2 = MEM_HU(ctx->r13, 0X8A);
    // 0x800690FC: lw          $a0, 0x0($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X0);
    // 0x80069100: lbu         $t2, 0x85($t5)
    ctx->r10 = MEM_BU(ctx->r13, 0X85);
    // 0x80069104: lhu         $a1, 0x8E($t5)
    ctx->r5 = MEM_HU(ctx->r13, 0X8E);
    // 0x80069108: lbu         $t3, 0x85($t5)
    ctx->r11 = MEM_BU(ctx->r13, 0X85);
    // 0x8006910C: lhu         $a2, 0x92($t5)
    ctx->r6 = MEM_HU(ctx->r13, 0X92);
    // 0x80069110: lbu         $t4, 0x85($t5)
    ctx->r12 = MEM_BU(ctx->r13, 0X85);
    // 0x80069114: lhu         $a3, 0x96($t5)
    ctx->r7 = MEM_HU(ctx->r13, 0X96);
    // 0x80069118: lhu         $t1, 0xB6($t5)
    ctx->r9 = MEM_HU(ctx->r13, 0XB6);
    // 0x8006911C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80069120: lh          $v1, 0xA($t5)
    ctx->r3 = MEM_H(ctx->r13, 0XA);
    // 0x80069124: sh          $v0, 0x8A($t5)
    MEM_H(0X8A, ctx->r13) = ctx->r2;
    // 0x80069128: lh          $t0, 0x8A($t5)
    ctx->r8 = MEM_H(ctx->r13, 0X8A);
    // 0x8006912C: lui         $v0, 0x1000
    ctx->r2 = S32(0X1000 << 16);
    // 0x80069130: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x80069134: subu        $a1, $a1, $t2
    ctx->r5 = SUB32(ctx->r5, ctx->r10);
    // 0x80069138: addu        $a2, $a2, $t3
    ctx->r6 = ADD32(ctx->r6, ctx->r11);
    // 0x8006913C: addu        $a3, $a3, $t4
    ctx->r7 = ADD32(ctx->r7, ctx->r12);
    // 0x80069140: sw          $a0, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r4;
    // 0x80069144: sh          $a1, 0x8E($t5)
    MEM_H(0X8E, ctx->r13) = ctx->r5;
    // 0x80069148: sh          $a2, 0x92($t5)
    MEM_H(0X92, ctx->r13) = ctx->r6;
    // 0x8006914C: addu        $t0, $v1, $t0
    ctx->r8 = ADD32(ctx->r3, ctx->r8);
    // 0x80069150: subu        $v1, $v1, $t1
    ctx->r3 = SUB32(ctx->r3, ctx->r9);
    // 0x80069154: slt         $v1, $v1, $t0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80069158: bne         $v1, $zero, L_800692D0
    if (ctx->r3 != 0) {
        // 0x8006915C: sh          $a3, 0x96($t5)
        MEM_H(0X96, ctx->r13) = ctx->r7;
            goto L_800692D0;
    }
    // 0x8006915C: sh          $a3, 0x96($t5)
    MEM_H(0X96, ctx->r13) = ctx->r7;
    // 0x80069160: lui         $t1, 0xF7FF
    ctx->r9 = S32(0XF7FF << 16);
    // 0x80069164: ori         $t1, $t1, 0xFFFF
    ctx->r9 = ctx->r9 | 0XFFFF;
    // 0x80069168: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8006916C: lw          $a0, 0x3FF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3FF0);
    // 0x80069170: lhu         $a1, 0xB4($t5)
    ctx->r5 = MEM_HU(ctx->r13, 0XB4);
    // 0x80069174: lhu         $a2, 0xB6($t5)
    ctx->r6 = MEM_HU(ctx->r13, 0XB6);
    // 0x80069178: lhu         $a3, 0xB6($t5)
    ctx->r7 = MEM_HU(ctx->r13, 0XB6);
    // 0x8006917C: lhu         $t0, 0xB4($t5)
    ctx->r8 = MEM_HU(ctx->r13, 0XB4);
    // 0x80069180: lw          $v1, 0x0($t5)
    ctx->r3 = MEM_W(ctx->r13, 0X0);
    // 0x80069184: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x80069188: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x8006918C: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    // 0x80069190: negu        $a2, $a2
    ctx->r6 = SUB32(0, ctx->r6);
    // 0x80069194: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80069198: sw          $a0, 0x3FF0($at)
    MEM_W(0X3FF0, ctx->r1) = ctx->r4;
    // 0x8006919C: sh          $a1, 0x88($t5)
    MEM_H(0X88, ctx->r13) = ctx->r5;
    // 0x800691A0: lbu         $a1, 0x7E($t5)
    ctx->r5 = MEM_BU(ctx->r13, 0X7E);
    // 0x800691A4: lui         $v0, 0x1200
    ctx->r2 = S32(0X1200 << 16);
    // 0x800691A8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x800691AC: sh          $a2, 0x8A($t5)
    MEM_H(0X8A, ctx->r13) = ctx->r6;
    // 0x800691B0: lbu         $a2, 0x7D($t5)
    ctx->r6 = MEM_BU(ctx->r13, 0X7D);
    // 0x800691B4: lw          $a0, 0x80($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X80);
    // 0x800691B8: lw          $v0, 0x6C($t5)
    ctx->r2 = MEM_W(ctx->r13, 0X6C);
    // 0x800691BC: negu        $a3, $a3
    ctx->r7 = SUB32(0, ctx->r7);
    // 0x800691C0: negu        $t0, $t0
    ctx->r8 = SUB32(0, ctx->r8);
    // 0x800691C4: sw          $v1, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r3;
    // 0x800691C8: and         $v1, $v1, $t1
    ctx->r3 = ctx->r3 & ctx->r9;
    // 0x800691CC: sh          $a3, 0x8E($t5)
    MEM_H(0X8E, ctx->r13) = ctx->r7;
    // 0x800691D0: sh          $t0, 0x90($t5)
    MEM_H(0X90, ctx->r13) = ctx->r8;
    // 0x800691D4: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x800691D8: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x800691DC: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x800691E0: sw          $v0, 0x6C($t5)
    MEM_W(0X6C, ctx->r13) = ctx->r2;
    // 0x800691E4: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x800691E8: sw          $v1, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r3;
    // 0x800691EC: lhu         $v1, 0xB4($t5)
    ctx->r3 = MEM_HU(ctx->r13, 0XB4);
    // 0x800691F0: lbu         $a0, 0x7F($t5)
    ctx->r4 = MEM_BU(ctx->r13, 0X7F);
    // 0x800691F4: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x800691F8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800691FC: sb          $a2, 0x7D($t5)
    MEM_B(0X7D, ctx->r13) = ctx->r6;
    // 0x80069200: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80069204: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80069208: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8006920C: sh          $v1, 0x8C($t5)
    MEM_H(0X8C, ctx->r13) = ctx->r3;
    // 0x80069210: lhu         $v1, 0xB6($t5)
    ctx->r3 = MEM_HU(ctx->r13, 0XB6);
    // 0x80069214: lbu         $a0, 0x7E($t5)
    ctx->r4 = MEM_BU(ctx->r13, 0X7E);
    // 0x80069218: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8006921C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80069220: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80069224: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80069228: sh          $v1, 0x92($t5)
    MEM_H(0X92, ctx->r13) = ctx->r3;
    // 0x8006922C: lhu         $v1, 0xB4($t5)
    ctx->r3 = MEM_HU(ctx->r13, 0XB4);
    // 0x80069230: lbu         $a0, 0x7F($t5)
    ctx->r4 = MEM_BU(ctx->r13, 0X7F);
    // 0x80069234: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80069238: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8006923C: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80069240: sh          $v1, 0x94($t5)
    MEM_H(0X94, ctx->r13) = ctx->r3;
    // 0x80069244: lhu         $v1, 0xB6($t5)
    ctx->r3 = MEM_HU(ctx->r13, 0XB6);
    // 0x80069248: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8006924C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80069250: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80069254: j           L_800692D0
    // 0x80069258: sh          $v1, 0x96($t5)
    MEM_H(0X96, ctx->r13) = ctx->r3;
        goto L_800692D0;
    // 0x80069258: sh          $v1, 0x96($t5)
    MEM_H(0X96, ctx->r13) = ctx->r3;
L_8006925C:
    // 0x8006925C: lbu         $a0, 0x85($t5)
    ctx->r4 = MEM_BU(ctx->r13, 0X85);
    // 0x80069260: lhu         $v0, 0x8A($t5)
    ctx->r2 = MEM_HU(ctx->r13, 0X8A);
    // 0x80069264: lbu         $a1, 0x85($t5)
    ctx->r5 = MEM_BU(ctx->r13, 0X85);
    // 0x80069268: lhu         $v1, 0x92($t5)
    ctx->r3 = MEM_HU(ctx->r13, 0X92);
    // 0x8006926C: lbu         $a3, 0x85($t5)
    ctx->r7 = MEM_BU(ctx->r13, 0X85);
    // 0x80069270: lbu         $t0, 0x85($t5)
    ctx->r8 = MEM_BU(ctx->r13, 0X85);
    // 0x80069274: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80069278: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x8006927C: sh          $v1, 0x92($t5)
    MEM_H(0X92, ctx->r13) = ctx->r3;
    // 0x80069280: lw          $v1, 0x0($t5)
    ctx->r3 = MEM_W(ctx->r13, 0X0);
    // 0x80069284: lhu         $a0, 0x8E($t5)
    ctx->r4 = MEM_HU(ctx->r13, 0X8E);
    // 0x80069288: lhu         $a1, 0x96($t5)
    ctx->r5 = MEM_HU(ctx->r13, 0X96);
    // 0x8006928C: sh          $v0, 0x8A($t5)
    MEM_H(0X8A, ctx->r13) = ctx->r2;
    // 0x80069290: lh          $t1, 0x8A($t5)
    ctx->r9 = MEM_H(ctx->r13, 0X8A);
    // 0x80069294: lh          $a2, 0x92($t5)
    ctx->r6 = MEM_H(ctx->r13, 0X92);
    // 0x80069298: lui         $v0, 0x1000
    ctx->r2 = S32(0X1000 << 16);
    // 0x8006929C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x800692A0: addu        $a0, $a0, $a3
    ctx->r4 = ADD32(ctx->r4, ctx->r7);
    // 0x800692A4: subu        $a1, $a1, $t0
    ctx->r5 = SUB32(ctx->r5, ctx->r8);
    // 0x800692A8: slt         $a2, $a2, $t1
    ctx->r6 = SIGNED(ctx->r6) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x800692AC: sw          $v1, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r3;
    // 0x800692B0: sh          $a0, 0x8E($t5)
    MEM_H(0X8E, ctx->r13) = ctx->r4;
    // 0x800692B4: beq         $a2, $zero, L_800692D0
    if (ctx->r6 == 0) {
        // 0x800692B8: sh          $a1, 0x96($t5)
        MEM_H(0X96, ctx->r13) = ctx->r5;
            goto L_800692D0;
    }
    // 0x800692B8: sh          $a1, 0x96($t5)
    MEM_H(0X96, ctx->r13) = ctx->r5;
    // 0x800692BC: lw          $v0, 0x0($t5)
    ctx->r2 = MEM_W(ctx->r13, 0X0);
    // 0x800692C0: lui         $v1, 0xF9FF
    ctx->r3 = S32(0XF9FF << 16);
    // 0x800692C4: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x800692C8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x800692CC: sw          $v0, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r2;
L_800692D0:
    // 0x800692D0: jr          $ra
    // 0x800692D4: nop

    TRACE_RETURN()
    return;
    // 0x800692D4: nop

;}
RECOMP_FUNC void func_8002A8E0_5CE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002A8E0: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8002A8E4: lbu         $v0, 0x22D8($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X22D8);
    // 0x8002A8E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002A8EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002A8F0: beq         $v0, $zero, L_8002A900
    if (ctx->r2 == 0) {
        // 0x8002A8F4: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_8002A900;
    }
    // 0x8002A8F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8002A8F8: jal         0x8002B138
    // 0x8002A8FC: nop

    func_8002B138_6538(rdram, ctx);
        goto after_0;
    // 0x8002A8FC: nop

    after_0:
L_8002A900:
    // 0x8002A900: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8002A904: lw          $v0, -0x2374($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2374);
    // 0x8002A908: lui         $s0, 0x8021
    ctx->r16 = S32(0X8021 << 16);
    // 0x8002A90C: addiu       $s0, $s0, 0x2A0
    ctx->r16 = ADD32(ctx->r16, 0X2A0);
    // 0x8002A910: beq         $v0, $s0, L_8002A954
    if (ctx->r2 == ctx->r16) {
        // 0x8002A914: nop
    
            goto L_8002A954;
    }
    // 0x8002A914: nop

L_8002A918:
    // 0x8002A918: lh          $v0, 0x2($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X2);
    // 0x8002A91C: slti        $v0, $v0, 0x80
    ctx->r2 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
    // 0x8002A920: beq         $v0, $zero, L_8002A938
    if (ctx->r2 == 0) {
        // 0x8002A924: nop
    
            goto L_8002A938;
    }
    // 0x8002A924: nop

    // 0x8002A928: jal         0x8002B038
    // 0x8002A92C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002B038_6438(rdram, ctx);
        goto after_1;
    // 0x8002A92C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8002A930: j           L_8002A940
    // 0x8002A934: nop

        goto L_8002A940;
    // 0x8002A934: nop

L_8002A938:
    // 0x8002A938: jal         0x8002A994
    // 0x8002A93C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002A994_5D94(rdram, ctx);
        goto after_2;
    // 0x8002A93C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_8002A940:
    // 0x8002A940: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8002A944: lw          $v0, -0x2374($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2374);
    // 0x8002A948: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x8002A94C: bne         $s0, $v0, L_8002A918
    if (ctx->r16 != ctx->r2) {
        // 0x8002A950: nop
    
            goto L_8002A918;
    }
    // 0x8002A950: nop

L_8002A954:
    // 0x8002A954: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8002A958: lw          $v0, 0x56FC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X56FC);
    // 0x8002A95C: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x8002A960: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x8002A964: addiu       $v0, $v0, 0x2A0
    ctx->r2 = ADD32(ctx->r2, 0X2A0);
    // 0x8002A968: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002A96C: sw          $v0, -0x2374($at)
    MEM_W(-0X2374, ctx->r1) = ctx->r2;
    // 0x8002A970: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8002A974: bne         $v1, $v0, L_8002A984
    if (ctx->r3 != ctx->r2) {
        // 0x8002A978: nop
    
            goto L_8002A984;
    }
    // 0x8002A978: nop

    // 0x8002A97C: jal         0x8002B3C4
    // 0x8002A980: nop

    func_8002B3C4_67C4(rdram, ctx);
        goto after_3;
    // 0x8002A980: nop

    after_3:
L_8002A984:
    // 0x8002A984: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002A988: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8002A98C: jr          $ra
    // 0x8002A990: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8002A990: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800676C0_42AC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800676C0: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x800676C4: lhu         $v1, 0xBE($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0XBE);
    // 0x800676C8: lbu         $a1, 0x1($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X1);
    // 0x800676CC: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x800676D0: sh          $v0, 0xBE($a0)
    MEM_H(0XBE, ctx->r4) = ctx->r2;
    // 0x800676D4: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x800676D8: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x800676DC: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x800676E0: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x800676E4: sw          $v0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r2;
    // 0x800676E8: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x800676EC: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x800676F0: lbu         $v0, -0x6F90($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X6F90);
    // 0x800676F4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800676F8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800676FC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80067700: lw          $v0, 0x2B7C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X2B7C);
    // 0x80067704: jr          $ra
    // 0x80067708: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80067708: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_8003DEBC_192BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003DEBC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8003DEC0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8003DEC4: addiu       $s1, $sp, 0x10
    ctx->r17 = ADD32(ctx->r29, 0X10);
    // 0x8003DEC8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8003DECC: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8003DED0: addiu       $a1, $a1, 0x1E84
    ctx->r5 = ADD32(ctx->r5, 0X1E84);
    // 0x8003DED4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x8003DED8: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8003DEDC: jal         0x8009A3B4
    // 0x8003DEE0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8003DEE0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    after_0:
    // 0x8003DEE4: jal         0x80029114
    // 0x8003DEE8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80029114_4514(rdram, ctx);
        goto after_1;
    // 0x8003DEE8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x8003DEEC: jal         0x80061724
    // 0x8003DEF0: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_2;
    // 0x8003DEF0: nop

    after_2:
    // 0x8003DEF4: jal         0x80092EB0
    // 0x8003DEF8: nop

    func_80092EB0_6E2B0(rdram, ctx);
        goto after_3;
    // 0x8003DEF8: nop

    after_3:
    // 0x8003DEFC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8003DF00: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003DF04: jal         0x80061090
    // 0x8003DF08: sb          $v0, -0xC5C($at)
    MEM_B(-0XC5C, ctx->r1) = ctx->r2;
    func_80061090_3C490(rdram, ctx);
        goto after_4;
    // 0x8003DF08: sb          $v0, -0xC5C($at)
    MEM_B(-0XC5C, ctx->r1) = ctx->r2;
    after_4:
    // 0x8003DF0C: jal         0x8004B5B0
    // 0x8003DF10: nop

    func_8004B5B0_269B0(rdram, ctx);
        goto after_5;
    // 0x8003DF10: nop

    after_5:
    // 0x8003DF14: jal         0x800755C0
    // 0x8003DF18: nop

    func_800755C0_509C0(rdram, ctx);
        goto after_6;
    // 0x8003DF18: nop

    after_6:
    // 0x8003DF1C: jal         0x8002A488
    // 0x8003DF20: nop

    func_8002A488_5888(rdram, ctx);
        goto after_7;
    // 0x8003DF20: nop

    after_7:
    // 0x8003DF24: jal         0x8002A4A4
    // 0x8003DF28: nop

    func_8002A4A4_58A4(rdram, ctx);
        goto after_8;
    // 0x8003DF28: nop

    after_8:
    // 0x8003DF2C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8003DF30: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8003DF34: jal         0x80036B00
    // 0x8003DF38: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_9;
    // 0x8003DF38: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_9:
    // 0x8003DF3C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x8003DF40: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8003DF44: addiu       $s0, $s0, -0xC68
    ctx->r16 = ADD32(ctx->r16, -0XC68);
    // 0x8003DF48: jal         0x80036E48
    // 0x8003DF4C: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    func_80036E48_12248(rdram, ctx);
        goto after_10;
    // 0x8003DF4C: sh          $zero, 0x0($s0)
    MEM_H(0X0, ctx->r16) = 0;
    after_10:
    // 0x8003DF50: jal         0x80060590
    // 0x8003DF54: addiu       $a0, $zero, 0x1FE
    ctx->r4 = ADD32(0, 0X1FE);
    func_80060590_3B990(rdram, ctx);
        goto after_11;
    // 0x8003DF54: addiu       $a0, $zero, 0x1FE
    ctx->r4 = ADD32(0, 0X1FE);
    after_11:
    // 0x8003DF58: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x8003DF5C: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8003DF60: sh          $v0, 0x5448($at)
    MEM_H(0X5448, ctx->r1) = ctx->r2;
    // 0x8003DF64: jal         0x80028E40
    // 0x8003DF68: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80028E40_4240(rdram, ctx);
        goto after_12;
    // 0x8003DF68: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_12:
    // 0x8003DF6C: jal         0x80035574
    // 0x8003DF70: nop

    func_80035574_10974(rdram, ctx);
        goto after_13;
    // 0x8003DF70: nop

    after_13:
    // 0x8003DF74: jal         0x8005CBDC
    // 0x8003DF78: nop

    func_8005CBDC_37FDC(rdram, ctx);
        goto after_14;
    // 0x8003DF78: nop

    after_14:
    // 0x8003DF7C: addiu       $a0, $s0, -0x8
    ctx->r4 = ADD32(ctx->r16, -0X8);
    // 0x8003DF80: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8003DF84: sh          $zero, 0x544A($at)
    MEM_H(0X544A, ctx->r1) = 0;
    // 0x8003DF88: jal         0x8009A2B0
    // 0x8003DF8C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    bzero_recomp(rdram, ctx);
        goto after_15;
    // 0x8003DF8C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_15:
    // 0x8003DF90: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8003DF94: addiu       $a0, $a0, 0x5140
    ctx->r4 = ADD32(ctx->r4, 0X5140);
    // 0x8003DF98: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x8003DF9C: jal         0x800A3380
    // 0x8003DFA0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_800A3380_7E780(rdram, ctx);
        goto after_16;
    // 0x8003DFA0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_16:
    // 0x8003DFA4: jal         0x8002B29C
    // 0x8003DFA8: nop

    func_8002B29C_669C(rdram, ctx);
        goto after_17;
    // 0x8003DFA8: nop

    after_17:
    // 0x8003DFAC: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8003DFB0: addiu       $a0, $a0, 0x9D0
    ctx->r4 = ADD32(ctx->r4, 0X9D0);
    // 0x8003DFB4: jal         0x8009A2B0
    // 0x8003DFB8: addiu       $a1, $zero, 0xC4
    ctx->r5 = ADD32(0, 0XC4);
    bzero_recomp(rdram, ctx);
        goto after_18;
    // 0x8003DFB8: addiu       $a1, $zero, 0xC4
    ctx->r5 = ADD32(0, 0XC4);
    after_18:
    // 0x8003DFBC: lui         $s0, 0x8021
    ctx->r16 = S32(0X8021 << 16);
    // 0x8003DFC0: addiu       $s0, $s0, 0xB68
    ctx->r16 = ADD32(ctx->r16, 0XB68);
    // 0x8003DFC4: jal         0x80087AE8
    // 0x8003DFC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80087AE8_62EE8(rdram, ctx);
        goto after_19;
    // 0x8003DFC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_19:
    // 0x8003DFCC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8003DFD0: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    // 0x8003DFD4: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8003DFD8: addiu       $a1, $a1, -0x3C00
    ctx->r5 = ADD32(ctx->r5, -0X3C00);
    // 0x8003DFDC: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
L_8003DFE0:
    // 0x8003DFE0: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8003DFE4: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8003DFE8: lbu         $v1, 0xB68($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0XB68);
    // 0x8003DFEC: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8003DFF0: bne         $v1, $v0, L_8003E01C
    if (ctx->r3 != ctx->r2) {
        // 0x8003DFF4: nop
    
            goto L_8003E01C;
    }
    // 0x8003DFF4: nop

    // 0x8003DFF8: bne         $a0, $a2, L_8003E010
    if (ctx->r4 != ctx->r6) {
        // 0x8003DFFC: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_8003E010;
    }
    // 0x8003DFFC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8003E000: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8003E004: lhu         $v1, 0x2($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X2);
    // 0x8003E008: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x8003E00C: sh          $v1, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r3;
L_8003E010:
    // 0x8003E010: slti        $v0, $a0, 0x10
    ctx->r2 = SIGNED(ctx->r4) < 0X10 ? 1 : 0;
    // 0x8003E014: bne         $v0, $zero, L_8003DFE0
    if (ctx->r2 != 0) {
        // 0x8003E018: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8003DFE0;
    }
    // 0x8003E018: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_8003E01C:
    // 0x8003E01C: lui         $a0, 0x8006
    ctx->r4 = S32(0X8006 << 16);
    // 0x8003E020: jal         0x800292E8
    // 0x8003E024: addiu       $a0, $a0, -0x2DC0
    ctx->r4 = ADD32(ctx->r4, -0X2DC0);
    func_800292E8_46E8(rdram, ctx);
        goto after_20;
    // 0x8003E024: addiu       $a0, $a0, -0x2DC0
    ctx->r4 = ADD32(ctx->r4, -0X2DC0);
    after_20:
    // 0x8003E028: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8003E02C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8003E030: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8003E034: jr          $ra
    // 0x8003E038: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8003E038: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8008CB54_67F54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008CB54: bgez        $a1, L_8008CB80
    if (SIGNED(ctx->r5) >= 0) {
        // 0x8008CB58: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_8008CB80;
    }
    // 0x8008CB58: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8008CB5C: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x8008CB60: lw          $v1, 0x4F8C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4F8C);
L_8008CB64:
    // 0x8008CB64: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x8008CB68: beq         $v0, $zero, L_8008CD14
    if (ctx->r2 == 0) {
        // 0x8008CB6C: addu        $v0, $a2, $zero
        ctx->r2 = ADD32(ctx->r6, 0);
            goto L_8008CD14;
    }
    // 0x8008CB6C: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    // 0x8008CB70: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8008CB74: slti        $v0, $a2, 0x4
    ctx->r2 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
    // 0x8008CB78: bne         $v0, $zero, L_8008CB64
    if (ctx->r2 != 0) {
        // 0x8008CB7C: addiu       $v1, $v1, 0x13C
        ctx->r3 = ADD32(ctx->r3, 0X13C);
            goto L_8008CB64;
    }
    // 0x8008CB7C: addiu       $v1, $v1, 0x13C
    ctx->r3 = ADD32(ctx->r3, 0X13C);
L_8008CB80:
    // 0x8008CB80: lui         $a3, 0x8018
    ctx->r7 = S32(0X8018 << 16);
    // 0x8008CB84: lw          $a3, 0x4F84($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X4F84);
    // 0x8008CB88: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x8008CB8C: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x8008CB90: lw          $v1, 0x4F90($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4F90);
    // 0x8008CB94: slt         $v0, $a2, $a3
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x8008CB98: beq         $v0, $zero, L_8008CBD4
    if (ctx->r2 == 0) {
        // 0x8008CB9C: lui         $t1, 0x7FFF
        ctx->r9 = S32(0X7FFF << 16);
            goto L_8008CBD4;
    }
    // 0x8008CB9C: lui         $t1, 0x7FFF
    ctx->r9 = S32(0X7FFF << 16);
L_8008CBA0:
    // 0x8008CBA0: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x8008CBA4: beq         $v0, $zero, L_8008CD14
    if (ctx->r2 == 0) {
        // 0x8008CBA8: addu        $v0, $a2, $zero
        ctx->r2 = ADD32(ctx->r6, 0);
            goto L_8008CD14;
    }
    // 0x8008CBA8: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    // 0x8008CBAC: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8008CBB0: slt         $v0, $a2, $a3
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x8008CBB4: bne         $v0, $zero, L_8008CBA0
    if (ctx->r2 != 0) {
        // 0x8008CBB8: addiu       $v1, $v1, 0x13C
        ctx->r3 = ADD32(ctx->r3, 0X13C);
            goto L_8008CBA0;
    }
    // 0x8008CBB8: addiu       $v1, $v1, 0x13C
    ctx->r3 = ADD32(ctx->r3, 0X13C);
    // 0x8008CBBC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x8008CBC0: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x8008CBC4: lw          $v1, 0x4F90($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4F90);
    // 0x8008CBC8: lui         $t1, 0x7FFF
    ctx->r9 = S32(0X7FFF << 16);
    // 0x8008CBCC: lui         $a3, 0x8018
    ctx->r7 = S32(0X8018 << 16);
    // 0x8008CBD0: lw          $a3, 0x4F84($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X4F84);
L_8008CBD4:
    // 0x8008CBD4: ori         $t1, $t1, 0xFFFF
    ctx->r9 = ctx->r9 | 0XFFFF;
    // 0x8008CBD8: slt         $v0, $a2, $a3
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x8008CBDC: beq         $v0, $zero, L_8008CC20
    if (ctx->r2 == 0) {
        // 0x8008CBE0: addiu       $t0, $zero, 0x3
        ctx->r8 = ADD32(0, 0X3);
            goto L_8008CC20;
    }
    // 0x8008CBE0: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x8008CBE4: addu        $t2, $a3, $zero
    ctx->r10 = ADD32(ctx->r7, 0);
    // 0x8008CBE8: addiu       $a3, $v1, 0x48
    ctx->r7 = ADD32(ctx->r3, 0X48);
L_8008CBEC:
    // 0x8008CBEC: lw          $v0, 0x30($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X30);
    // 0x8008CBF0: beql        $v0, $zero, L_8008CC14
    if (ctx->r2 == 0) {
        // 0x8008CBF4: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_8008CC14;
    }
    goto skip_0;
    // 0x8008CBF4: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    skip_0:
    // 0x8008CBF8: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x8008CBFC: slt         $v0, $t1, $v1
    ctx->r2 = SIGNED(ctx->r9) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8008CC00: bnel        $v0, $zero, L_8008CC14
    if (ctx->r2 != 0) {
        // 0x8008CC04: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_8008CC14;
    }
    goto skip_1;
    // 0x8008CC04: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    skip_1:
    // 0x8008CC08: addu        $t1, $v1, $zero
    ctx->r9 = ADD32(ctx->r3, 0);
    // 0x8008CC0C: addu        $t0, $a2, $zero
    ctx->r8 = ADD32(ctx->r6, 0);
    // 0x8008CC10: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
L_8008CC14:
    // 0x8008CC14: slt         $v0, $a2, $t2
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x8008CC18: bne         $v0, $zero, L_8008CBEC
    if (ctx->r2 != 0) {
        // 0x8008CC1C: addiu       $a3, $a3, 0x13C
        ctx->r7 = ADD32(ctx->r7, 0X13C);
            goto L_8008CBEC;
    }
    // 0x8008CC1C: addiu       $a3, $a3, 0x13C
    ctx->r7 = ADD32(ctx->r7, 0X13C);
L_8008CC20:
    // 0x8008CC20: slti        $v0, $t0, 0x4
    ctx->r2 = SIGNED(ctx->r8) < 0X4 ? 1 : 0;
    // 0x8008CC24: bnel        $v0, $zero, L_8008CC34
    if (ctx->r2 != 0) {
        // 0x8008CC28: addiu       $a2, $zero, 0x4
        ctx->r6 = ADD32(0, 0X4);
            goto L_8008CC34;
    }
    goto skip_2;
    // 0x8008CC28: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    skip_2:
    // 0x8008CC2C: j           L_8008CD14
    // 0x8008CC30: addu        $v0, $t0, $zero
    ctx->r2 = ADD32(ctx->r8, 0);
        goto L_8008CD14;
    // 0x8008CC30: addu        $v0, $t0, $zero
    ctx->r2 = ADD32(ctx->r8, 0);
L_8008CC34:
    // 0x8008CC34: lui         $a3, 0x8018
    ctx->r7 = S32(0X8018 << 16);
    // 0x8008CC38: lw          $a3, 0x4F84($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X4F84);
    // 0x8008CC3C: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x8008CC40: lw          $v1, 0x4F90($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4F90);
    // 0x8008CC44: slt         $v0, $a2, $a3
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x8008CC48: beql        $v0, $zero, L_8008CC8C
    if (ctx->r2 == 0) {
        // 0x8008CC4C: addiu       $a2, $zero, 0x4
        ctx->r6 = ADD32(0, 0X4);
            goto L_8008CC8C;
    }
    goto skip_3;
    // 0x8008CC4C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    skip_3:
    // 0x8008CC50: lw          $t0, 0x78($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X78);
L_8008CC54:
    // 0x8008CC54: bnel        $t0, $zero, L_8008CC6C
    if (ctx->r8 != 0) {
        // 0x8008CC58: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_8008CC6C;
    }
    goto skip_4;
    // 0x8008CC58: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    skip_4:
    // 0x8008CC5C: lw          $v0, 0x74($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X74);
    // 0x8008CC60: bne         $v0, $a0, L_8008CD14
    if (ctx->r2 != ctx->r4) {
        // 0x8008CC64: addu        $v0, $a2, $zero
        ctx->r2 = ADD32(ctx->r6, 0);
            goto L_8008CD14;
    }
    // 0x8008CC64: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    // 0x8008CC68: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
L_8008CC6C:
    // 0x8008CC6C: slt         $v0, $a2, $a3
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x8008CC70: bne         $v0, $zero, L_8008CC54
    if (ctx->r2 != 0) {
        // 0x8008CC74: nop
    
            goto L_8008CC54;
    }
    // 0x8008CC74: nop

    // 0x8008CC78: lui         $a3, 0x8018
    ctx->r7 = S32(0X8018 << 16);
    // 0x8008CC7C: lw          $a3, 0x4F84($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X4F84);
    // 0x8008CC80: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x8008CC84: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x8008CC88: lw          $v1, 0x4F90($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4F90);
L_8008CC8C:
    // 0x8008CC8C: slt         $v0, $a2, $a3
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x8008CC90: beq         $v0, $zero, L_8008CCD8
    if (ctx->r2 == 0) {
        // 0x8008CC94: nop
    
            goto L_8008CCD8;
    }
    // 0x8008CC94: nop

    // 0x8008CC98: sll         $t1, $a1, 2
    ctx->r9 = S32(ctx->r5 << 2);
    // 0x8008CC9C: addu        $t0, $a3, $zero
    ctx->r8 = ADD32(ctx->r7, 0);
    // 0x8008CCA0: addiu       $a3, $v1, 0x80
    ctx->r7 = ADD32(ctx->r3, 0X80);
L_8008CCA4:
    // 0x8008CCA4: lw          $v0, -0xC($a3)
    ctx->r2 = MEM_W(ctx->r7, -0XC);
    // 0x8008CCA8: bnel        $v0, $a0, L_8008CCCC
    if (ctx->r2 != ctx->r4) {
        // 0x8008CCAC: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_8008CCCC;
    }
    goto skip_5;
    // 0x8008CCAC: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    skip_5:
    // 0x8008CCB0: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x8008CCB4: addu        $v0, $t1, $v0
    ctx->r2 = ADD32(ctx->r9, ctx->r2);
    // 0x8008CCB8: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x8008CCBC: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x8008CCC0: beq         $v1, $v0, L_8008CD14
    if (ctx->r3 == ctx->r2) {
        // 0x8008CCC4: addu        $v0, $a2, $zero
        ctx->r2 = ADD32(ctx->r6, 0);
            goto L_8008CD14;
    }
    // 0x8008CCC4: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    // 0x8008CCC8: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
L_8008CCCC:
    // 0x8008CCCC: slt         $v0, $a2, $t0
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8008CCD0: bne         $v0, $zero, L_8008CCA4
    if (ctx->r2 != 0) {
        // 0x8008CCD4: addiu       $a3, $a3, 0x13C
        ctx->r7 = ADD32(ctx->r7, 0X13C);
            goto L_8008CCA4;
    }
    // 0x8008CCD4: addiu       $a3, $a3, 0x13C
    ctx->r7 = ADD32(ctx->r7, 0X13C);
L_8008CCD8:
    // 0x8008CCD8: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x8008CCDC: lw          $v1, 0x4F84($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4F84);
    // 0x8008CCE0: addiu       $v1, $v1, -0x4
    ctx->r3 = ADD32(ctx->r3, -0X4);
    // 0x8008CCE4: div         $zero, $a1, $v1
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r3)));
    // 0x8008CCE8: bne         $v1, $zero, L_8008CCF4
    if (ctx->r3 != 0) {
        // 0x8008CCEC: nop
    
            goto L_8008CCF4;
    }
    // 0x8008CCEC: nop

    // 0x8008CCF0: break       7
    do_break(2148060400);
L_8008CCF4:
    // 0x8008CCF4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8008CCF8: bne         $v1, $at, L_8008CD0C
    if (ctx->r3 != ctx->r1) {
        // 0x8008CCFC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8008CD0C;
    }
    // 0x8008CCFC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8008CD00: bne         $a1, $at, L_8008CD0C
    if (ctx->r5 != ctx->r1) {
        // 0x8008CD04: nop
    
            goto L_8008CD0C;
    }
    // 0x8008CD04: nop

    // 0x8008CD08: break       6
    do_break(2148060424);
L_8008CD0C:
    // 0x8008CD0C: mfhi        $v0
    ctx->r2 = hi;
    // 0x8008CD10: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
L_8008CD14:
    // 0x8008CD14: jr          $ra
    // 0x8008CD18: nop

    TRACE_RETURN()
    return;
    // 0x8008CD18: nop

;}
RECOMP_FUNC void func_8004A358_25758(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004A358: jr          $ra
    // 0x8004A35C: nop

    TRACE_RETURN()
    return;
    // 0x8004A35C: nop

;}
RECOMP_FUNC void alResampleNew(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800960C4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800960C8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800960CC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x800960D0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800960D4: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x800960D8: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x800960DC: addiu       $a1, $a1, 0x7CB0
    ctx->r5 = ADD32(ctx->r5, 0X7CB0);
    // 0x800960E0: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x800960E4: addiu       $a2, $a2, 0x7E9C
    ctx->r6 = ADD32(ctx->r6, 0X7E9C);
    // 0x800960E8: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x800960EC: jal         0x80097B20
    // 0x800960F0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    alFilterNew(rdram, ctx);
        goto after_0;
    // 0x800960F0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x800960F4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x800960F8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x800960FC: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x80096100: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80096104: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80096108: jal         0x80098CC0
    // 0x8009610C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    alHeapDBAlloc(rdram, ctx);
        goto after_1;
    // 0x8009610C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_1:
    // 0x80096110: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80096114: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80096118: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x8009611C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80096120: sw          $zero, 0x20($s0)
    MEM_W(0X20, ctx->r16) = 0;
    // 0x80096124: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x80096128: sw          $zero, 0x30($s0)
    MEM_W(0X30, ctx->r16) = 0;
    // 0x8009612C: sw          $zero, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = 0;
    // 0x80096130: sw          $zero, 0x28($s0)
    MEM_W(0X28, ctx->r16) = 0;
    // 0x80096134: sw          $zero, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = 0;
    // 0x80096138: swc1        $f0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f0.u32l;
    // 0x8009613C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80096140: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80096144: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80096148: jr          $ra
    // 0x8009614C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8009614C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80071020_4C420(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80071020: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80071024: lb          $v1, 0x4B22($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X4B22);
    // 0x80071028: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8007102C: addiu       $v0, $v0, 0x49B0
    ctx->r2 = ADD32(ctx->r2, 0X49B0);
    // 0x80071030: sll         $a0, $v1, 3
    ctx->r4 = S32(ctx->r3 << 3);
    // 0x80071034: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80071038: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8007103C: lb          $v0, 0x4F5($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X4F5);
    // 0x80071040: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80071044: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80071048: lw          $v1, 0x351C($at)
    ctx->r3 = MEM_W(ctx->r1, 0X351C);
    // 0x8007104C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80071050: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80071054: lhu         $v0, 0x2($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X2);
    // 0x80071058: jr          $ra
    // 0x8007105C: sh          $v0, 0x4FA($a0)
    MEM_H(0X4FA, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x8007105C: sh          $v0, 0x4FA($a0)
    MEM_H(0X4FA, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_8008AF10_66310(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008AF10: mtc1        $a1, $f2
    ctx->f2.u32l = ctx->r5;
    // 0x8008AF14: nop

    // 0x8008AF18: bne         $a0, $zero, L_8008AF28
    if (ctx->r4 != 0) {
        // 0x8008AF1C: addiu       $sp, $sp, -0x8
        ctx->r29 = ADD32(ctx->r29, -0X8);
            goto L_8008AF28;
    }
    // 0x8008AF1C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8008AF20: j           L_8008AF78
    // 0x8008AF24: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8008AF78;
    // 0x8008AF24: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8008AF28:
    // 0x8008AF28: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8008AF2C: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008AF30: lw          $v0, 0x4F84($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4F84);
    // 0x8008AF34: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x8008AF38: lw          $v1, 0x4F8C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4F8C);
    // 0x8008AF3C: blez        $v0, L_8008AF74
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8008AF40: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_8008AF74;
    }
    // 0x8008AF40: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8008AF44: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x8008AF48: addiu       $v1, $v1, 0x30
    ctx->r3 = ADD32(ctx->r3, 0X30);
L_8008AF4C:
    // 0x8008AF4C: lw          $v0, 0x14($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X14);
    // 0x8008AF50: bne         $v0, $a0, L_8008AF68
    if (ctx->r2 != ctx->r4) {
        // 0x8008AF54: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_8008AF68;
    }
    // 0x8008AF54: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8008AF58: lwc1        $f0, 0x60($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X60);
    // 0x8008AF5C: add.s       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x8008AF60: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8008AF64: swc1        $f0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f0.u32l;
L_8008AF68:
    // 0x8008AF68: slt         $v0, $a2, $a3
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x8008AF6C: bne         $v0, $zero, L_8008AF4C
    if (ctx->r2 != 0) {
        // 0x8008AF70: addiu       $v1, $v1, 0x13C
        ctx->r3 = ADD32(ctx->r3, 0X13C);
            goto L_8008AF4C;
    }
    // 0x8008AF70: addiu       $v1, $v1, 0x13C
    ctx->r3 = ADD32(ctx->r3, 0X13C);
L_8008AF74:
    // 0x8008AF74: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
L_8008AF78:
    // 0x8008AF78: jr          $ra
    // 0x8008AF7C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x8008AF7C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8003E87C_19C7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003E87C: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x8003E880: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8003E884: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8003E888: lbu         $v1, 0x6B40($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X6B40);
    // 0x8003E88C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8003E890: lhu         $a1, 0x49AE($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X49AE);
    // 0x8003E894: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x8003E898: sra         $v0, $v0, 9
    ctx->r2 = S32(SIGNED(ctx->r2) >> 9);
    // 0x8003E89C: subu        $a2, $v0, $v1
    ctx->r6 = SUB32(ctx->r2, ctx->r3);
    // 0x8003E8A0: sltu        $v0, $a2, $a1
    ctx->r2 = ctx->r6 < ctx->r5 ? 1 : 0;
    // 0x8003E8A4: beql        $v0, $zero, L_8003E900
    if (ctx->r2 == 0) {
        // 0x8003E8A8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8003E900;
    }
    goto skip_0;
    // 0x8003E8A8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    skip_0:
    // 0x8003E8AC: lh          $v0, 0x4($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X4);
    // 0x8003E8B0: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003E8B4: lbu         $a0, -0x39A6($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X39A6);
    // 0x8003E8B8: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8003E8BC: lhu         $v1, -0x7386($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X7386);
    // 0x8003E8C0: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x8003E8C4: sra         $v0, $v0, 9
    ctx->r2 = S32(SIGNED(ctx->r2) >> 9);
    // 0x8003E8C8: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8003E8CC: sltu        $v1, $v0, $v1
    ctx->r3 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8003E8D0: beq         $v1, $zero, L_8003E900
    if (ctx->r3 == 0) {
        // 0x8003E8D4: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8003E900;
    }
    // 0x8003E8D4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8003E8D8: nop

    // 0x8003E8DC: mult        $v0, $a1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003E8E0: mflo        $v1
    ctx->r3 = lo;
    // 0x8003E8E4: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8003E8E8: lw          $a0, -0x35C0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X35C0);
    // 0x8003E8EC: sll         $v0, $a2, 1
    ctx->r2 = S32(ctx->r6 << 1);
    // 0x8003E8F0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8003E8F4: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8003E8F8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8003E8FC: lh          $a0, 0x0($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X0);
L_8003E900:
    // 0x8003E900: bgtz        $a0, L_8003E910
    if (SIGNED(ctx->r4) > 0) {
        // 0x8003E904: sll         $v1, $a0, 1
        ctx->r3 = S32(ctx->r4 << 1);
            goto L_8003E910;
    }
    // 0x8003E904: sll         $v1, $a0, 1
    ctx->r3 = S32(ctx->r4 << 1);
    // 0x8003E908: j           L_8003E92C
    // 0x8003E90C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8003E92C;
    // 0x8003E90C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8003E910:
    // 0x8003E910: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x8003E914: lw          $v0, 0xB5C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XB5C);
    // 0x8003E918: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8003E91C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8003E920: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8003E924: lhu         $v0, 0x6($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X6);
    // 0x8003E928: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
L_8003E92C:
    // 0x8003E92C: jr          $ra
    // 0x8003E930: nop

    TRACE_RETURN()
    return;
    // 0x8003E930: nop

;}
RECOMP_FUNC void func_8006AA70_45E70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006AA70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006AA74: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8006AA78: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8006AA7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006AA80: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8006AA84: beq         $v1, $zero, L_8006AA9C
    if (ctx->r3 == 0) {
        // 0x8006AA88: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8006AA9C;
    }
    // 0x8006AA88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006AA8C: beq         $v1, $v0, L_8006AB08
    if (ctx->r3 == ctx->r2) {
        // 0x8006AA90: nop
    
            goto L_8006AB08;
    }
    // 0x8006AA90: nop

    // 0x8006AA94: j           L_8006ABA0
    // 0x8006AA98: nop

        goto L_8006ABA0;
    // 0x8006AA98: nop

L_8006AA9C:
    // 0x8006AA9C: lb          $v1, 0x112($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X112);
    // 0x8006AAA0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8006AAA4: beq         $v1, $v0, L_8006AAE4
    if (ctx->r3 == ctx->r2) {
        // 0x8006AAA8: slti        $v0, $v1, 0x3
        ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
            goto L_8006AAE4;
    }
    // 0x8006AAA8: slti        $v0, $v1, 0x3
    ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x8006AAAC: beq         $v0, $zero, L_8006AAC4
    if (ctx->r2 == 0) {
        // 0x8006AAB0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8006AAC4;
    }
    // 0x8006AAB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006AAB4: beq         $v1, $v0, L_8006AAD8
    if (ctx->r3 == ctx->r2) {
        // 0x8006AAB8: nop
    
            goto L_8006AAD8;
    }
    // 0x8006AAB8: nop

    // 0x8006AABC: j           L_8006AAFC
    // 0x8006AAC0: nop

        goto L_8006AAFC;
    // 0x8006AAC0: nop

L_8006AAC4:
    // 0x8006AAC4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8006AAC8: beq         $v1, $v0, L_8006AAF0
    if (ctx->r3 == ctx->r2) {
        // 0x8006AACC: addiu       $v0, $zero, 0x80
        ctx->r2 = ADD32(0, 0X80);
            goto L_8006AAF0;
    }
    // 0x8006AACC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8006AAD0: j           L_8006AAFC
    // 0x8006AAD4: nop

        goto L_8006AAFC;
    // 0x8006AAD4: nop

L_8006AAD8:
    // 0x8006AAD8: lhu         $v1, 0x12C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X12C);
    // 0x8006AADC: j           L_8006AAF4
    // 0x8006AAE0: addiu       $v0, $zero, -0x80
    ctx->r2 = ADD32(0, -0X80);
        goto L_8006AAF4;
    // 0x8006AAE0: addiu       $v0, $zero, -0x80
    ctx->r2 = ADD32(0, -0X80);
L_8006AAE4:
    // 0x8006AAE4: lhu         $v1, 0x126($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X126);
    // 0x8006AAE8: j           L_8006AAF4
    // 0x8006AAEC: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
        goto L_8006AAF4;
    // 0x8006AAEC: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
L_8006AAF0:
    // 0x8006AAF0: lhu         $v1, 0x12E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X12E);
L_8006AAF4:
    // 0x8006AAF4: sh          $v0, 0x10E($s0)
    MEM_H(0X10E, ctx->r16) = ctx->r2;
    // 0x8006AAF8: sh          $v1, 0x164($s0)
    MEM_H(0X164, ctx->r16) = ctx->r3;
L_8006AAFC:
    // 0x8006AAFC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8006AB00: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8006AB04: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8006AB08:
    // 0x8006AB08: lhu         $a2, 0x11C($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X11C);
    // 0x8006AB0C: lh          $a3, 0x164($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X164);
    // 0x8006AB10: and         $v0, $a2, $a3
    ctx->r2 = ctx->r6 & ctx->r7;
    // 0x8006AB14: beql        $v0, $zero, L_8006AB4C
    if (ctx->r2 == 0) {
        // 0x8006AB18: sh          $zero, 0x164($s0)
        MEM_H(0X164, ctx->r16) = 0;
            goto L_8006AB4C;
    }
    goto skip_0;
    // 0x8006AB18: sh          $zero, 0x164($s0)
    MEM_H(0X164, ctx->r16) = 0;
    skip_0:
    // 0x8006AB1C: lhu         $v0, 0x124($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X124);
    // 0x8006AB20: lhu         $a1, 0x126($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X126);
    // 0x8006AB24: lhu         $v1, 0x12C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X12C);
    // 0x8006AB28: lhu         $a0, 0x12E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X12E);
    // 0x8006AB2C: or          $v0, $v0, $a1
    ctx->r2 = ctx->r2 | ctx->r5;
    // 0x8006AB30: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x8006AB34: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8006AB38: and         $v0, $a2, $v0
    ctx->r2 = ctx->r6 & ctx->r2;
    // 0x8006AB3C: nor         $v1, $zero, $a3
    ctx->r3 = ~(0 | ctx->r7);
    // 0x8006AB40: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8006AB44: bnel        $v0, $zero, L_8006AB4C
    if (ctx->r2 != 0) {
        // 0x8006AB48: sh          $zero, 0x164($s0)
        MEM_H(0X164, ctx->r16) = 0;
            goto L_8006AB4C;
    }
    goto skip_1;
    // 0x8006AB48: sh          $zero, 0x164($s0)
    MEM_H(0X164, ctx->r16) = 0;
    skip_1:
L_8006AB4C:
    // 0x8006AB4C: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8006AB50: lhu         $a0, 0x10E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X10E);
    // 0x8006AB54: lhu         $v1, 0x116($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X116);
    // 0x8006AB58: lhu         $a1, 0x10E($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X10E);
    // 0x8006AB5C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8006AB60: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8006AB64: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8006AB68: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8006AB6C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8006AB70: bne         $v1, $zero, L_8006ABA0
    if (ctx->r3 != 0) {
        // 0x8006AB74: sh          $v1, 0x116($s0)
        MEM_H(0X116, ctx->r16) = ctx->r3;
            goto L_8006ABA0;
    }
    // 0x8006AB74: sh          $v1, 0x116($s0)
    MEM_H(0X116, ctx->r16) = ctx->r3;
    // 0x8006AB78: lh          $v0, 0x164($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X164);
    // 0x8006AB7C: sb          $zero, 0x112($s0)
    MEM_B(0X112, ctx->r16) = 0;
    // 0x8006AB80: beq         $v0, $zero, L_8006AB94
    if (ctx->r2 == 0) {
        // 0x8006AB84: sb          $zero, 0x9($s0)
        MEM_B(0X9, ctx->r16) = 0;
            goto L_8006AB94;
    }
    // 0x8006AB84: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8006AB88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006AB8C: j           L_8006AB98
    // 0x8006AB90: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
        goto L_8006AB98;
    // 0x8006AB90: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
L_8006AB94:
    // 0x8006AB94: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8006AB98:
    // 0x8006AB98: jal         0x80070100
    // 0x8006AB9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80070100_4B500(rdram, ctx);
        goto after_0;
    // 0x8006AB9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
L_8006ABA0:
    // 0x8006ABA0: lb          $v0, 0x174($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X174);
    // 0x8006ABA4: andi        $v0, $v0, 0xC0
    ctx->r2 = ctx->r2 & 0XC0;
    // 0x8006ABA8: bne         $v0, $zero, L_8006ABD0
    if (ctx->r2 != 0) {
        // 0x8006ABAC: nop
    
            goto L_8006ABD0;
    }
    // 0x8006ABAC: nop

    // 0x8006ABB0: lb          $v0, 0x177($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X177);
    // 0x8006ABB4: bne         $v0, $zero, L_8006ABD0
    if (ctx->r2 != 0) {
        // 0x8006ABB8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8006ABD0;
    }
    // 0x8006ABB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006ABBC: sh          $zero, 0xB4($s0)
    MEM_H(0XB4, ctx->r16) = 0;
    // 0x8006ABC0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8006ABC4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8006ABC8: jal         0x8006FB90
    // 0x8006ABCC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8006FB90_4AF90(rdram, ctx);
        goto after_1;
    // 0x8006ABCC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
L_8006ABD0:
    // 0x8006ABD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006ABD4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8006ABD8: jr          $ra
    // 0x8006ABDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8006ABDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800410F0_1C4F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800410F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800410F4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x800410F8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x800410FC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80041100: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x80041104: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80041108: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x8004110C: addu        $a1, $a3, $zero
    ctx->r5 = ADD32(ctx->r7, 0);
    // 0x80041110: beq         $a1, $zero, L_80041130
    if (ctx->r5 == 0) {
        // 0x80041114: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_80041130;
    }
    // 0x80041114: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80041118: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8004111C: addiu       $a0, $a0, -0x26B6
    ctx->r4 = ADD32(ctx->r4, -0X26B6);
    // 0x80041120: jal         0x8009A3B4
    // 0x80041124: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80041124: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_0:
    // 0x80041128: j           L_80041144
    // 0x8004112C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
        goto L_80041144;
    // 0x8004112C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_80041130:
    // 0x80041130: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80041134: addiu       $a0, $a0, -0x26B6
    ctx->r4 = ADD32(ctx->r4, -0X26B6);
    // 0x80041138: jal         0x8009A2B0
    // 0x8004113C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    bzero_recomp(rdram, ctx);
        goto after_1;
    // 0x8004113C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_1:
    // 0x80041140: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_80041144:
    // 0x80041144: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80041148: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x8004114C: jal         0x800411DC
    // 0x80041150: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_800411DC_1C5DC(rdram, ctx);
        goto after_2;
    // 0x80041150: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x80041154: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80041158: beql        $s0, $zero, L_800411C4
    if (ctx->r16 == 0) {
        // 0x8004115C: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_800411C4;
    }
    goto skip_0;
    // 0x8004115C: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    skip_0:
    // 0x80041160: blez        $s0, L_800411B0
    if (SIGNED(ctx->r16) <= 0) {
        // 0x80041164: andi        $v0, $s0, 0x300
        ctx->r2 = ctx->r16 & 0X300;
            goto L_800411B0;
    }
    // 0x80041164: andi        $v0, $s0, 0x300
    ctx->r2 = ctx->r16 & 0X300;
    // 0x80041168: beq         $v0, $zero, L_80041180
    if (ctx->r2 == 0) {
        // 0x8004116C: andi        $v0, $s0, 0xC00
        ctx->r2 = ctx->r16 & 0XC00;
            goto L_80041180;
    }
    // 0x8004116C: andi        $v0, $s0, 0xC00
    ctx->r2 = ctx->r16 & 0XC00;
    // 0x80041170: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80041174: lhu         $v0, -0x7158($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X7158);
    // 0x80041178: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8004117C: andi        $v0, $s0, 0xC00
    ctx->r2 = ctx->r16 & 0XC00;
L_80041180:
    // 0x80041180: beq         $v0, $zero, L_80041198
    if (ctx->r2 == 0) {
        // 0x80041184: andi        $v0, $s0, 0x3000
        ctx->r2 = ctx->r16 & 0X3000;
            goto L_80041198;
    }
    // 0x80041184: andi        $v0, $s0, 0x3000
    ctx->r2 = ctx->r16 & 0X3000;
    // 0x80041188: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8004118C: lhu         $v0, -0x7154($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X7154);
    // 0x80041190: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80041194: andi        $v0, $s0, 0x3000
    ctx->r2 = ctx->r16 & 0X3000;
L_80041198:
    // 0x80041198: beq         $v0, $zero, L_800411C4
    if (ctx->r2 == 0) {
        // 0x8004119C: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_800411C4;
    }
    // 0x8004119C: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x800411A0: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x800411A4: lhu         $v0, -0x7156($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X7156);
    // 0x800411A8: j           L_800411C0
    // 0x800411AC: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
        goto L_800411C0;
    // 0x800411AC: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
L_800411B0:
    // 0x800411B0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x800411B4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x800411B8: jal         0x8009A3B4
    // 0x800411BC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x800411BC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
L_800411C0:
    // 0x800411C0: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_800411C4:
    // 0x800411C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800411C8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x800411CC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x800411D0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x800411D4: jr          $ra
    // 0x800411D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x800411D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80089FA0_653A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80089FA0: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80089FA4: lw          $v0, 0x2BE8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2BE8);
    // 0x80089FA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80089FAC: bne         $v0, $zero, L_80089FC4
    if (ctx->r2 != 0) {
        // 0x80089FB0: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_80089FC4;
    }
    // 0x80089FB0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80089FB4: jal         0x80093BB0
    // 0x80089FB8: nop

    func_80093BB0_6EFB0(rdram, ctx);
        goto after_0;
    // 0x80089FB8: nop

    after_0:
    // 0x80089FBC: jal         0x80093BD0
    // 0x80089FC0: nop

    func_80093BD0_6EFD0(rdram, ctx);
        goto after_1;
    // 0x80089FC0: nop

    after_1:
L_80089FC4:
    // 0x80089FC4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80089FC8: jr          $ra
    // 0x80089FCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80089FCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80077D6C_5316C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80077D6C: jr          $ra
    // 0x80077D70: nop

    TRACE_RETURN()
    return;
    // 0x80077D70: nop

;}
RECOMP_FUNC void func_800706AC_4BAAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800706AC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800706B0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x800706B4: lb          $v1, 0x178($a0)
    ctx->r3 = MEM_B(ctx->r4, 0X178);
    // 0x800706B8: lb          $a1, 0x170($a0)
    ctx->r5 = MEM_B(ctx->r4, 0X170);
    // 0x800706BC: slti        $v0, $v1, 0x3
    ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x800706C0: beq         $v0, $zero, L_800706E0
    if (ctx->r2 == 0) {
        // 0x800706C4: addu        $a2, $v1, $zero
        ctx->r6 = ADD32(ctx->r3, 0);
            goto L_800706E0;
    }
    // 0x800706C4: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x800706C8: bgtz        $v1, L_8007074C
    if (SIGNED(ctx->r3) > 0) {
        // 0x800706CC: nop
    
            goto L_8007074C;
    }
    // 0x800706CC: nop

    // 0x800706D0: beq         $v1, $zero, L_800706F4
    if (ctx->r3 == 0) {
        // 0x800706D4: sll         $v0, $a1, 1
        ctx->r2 = S32(ctx->r5 << 1);
            goto L_800706F4;
    }
    // 0x800706D4: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x800706D8: j           L_8007077C
    // 0x800706DC: nop

        goto L_8007077C;
    // 0x800706DC: nop

L_800706E0:
    // 0x800706E0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x800706E4: beq         $v1, $v0, L_80070768
    if (ctx->r3 == ctx->r2) {
        // 0x800706E8: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80070768;
    }
    // 0x800706E8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x800706EC: j           L_8007077C
    // 0x800706F0: nop

        goto L_8007077C;
    // 0x800706F0: nop

L_800706F4:
    // 0x800706F4: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x800706F8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800706FC: lbu         $v1, 0x100($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X100);
    // 0x80070700: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80070704: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80070708: lbu         $v0, 0x30F4($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X30F4);
    // 0x8007070C: bnel        $v1, $v0, L_8007077C
    if (ctx->r3 != ctx->r2) {
        // 0x80070710: sh          $zero, 0x44($a0)
        MEM_H(0X44, ctx->r4) = 0;
            goto L_8007077C;
    }
    goto skip_0;
    // 0x80070710: sh          $zero, 0x44($a0)
    MEM_H(0X44, ctx->r4) = 0;
    skip_0:
    // 0x80070714: lbu         $v0, 0x174($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X174);
    // 0x80070718: addiu       $v1, $a2, 0x2
    ctx->r3 = ADD32(ctx->r6, 0X2);
    // 0x8007071C: sb          $v1, 0x178($a0)
    MEM_B(0X178, ctx->r4) = ctx->r3;
    // 0x80070720: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x80070724: sb          $v0, 0x174($a0)
    MEM_B(0X174, ctx->r4) = ctx->r2;
    // 0x80070728: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8007072C: lbu         $v1, -0x3B95($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3B95);
    // 0x80070730: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80070734: bne         $v1, $v0, L_80070744
    if (ctx->r3 != ctx->r2) {
        // 0x80070738: addiu       $v0, $zero, -0x300
        ctx->r2 = ADD32(0, -0X300);
            goto L_80070744;
    }
    // 0x80070738: addiu       $v0, $zero, -0x300
    ctx->r2 = ADD32(0, -0X300);
    // 0x8007073C: j           L_8007077C
    // 0x80070740: sh          $zero, 0x44($a0)
    MEM_H(0X44, ctx->r4) = 0;
        goto L_8007077C;
    // 0x80070740: sh          $zero, 0x44($a0)
    MEM_H(0X44, ctx->r4) = 0;
L_80070744:
    // 0x80070744: j           L_8007077C
    // 0x80070748: sh          $v0, 0x44($a0)
    MEM_H(0X44, ctx->r4) = ctx->r2;
        goto L_8007077C;
    // 0x80070748: sh          $v0, 0x44($a0)
    MEM_H(0X44, ctx->r4) = ctx->r2;
L_8007074C:
    // 0x8007074C: lbu         $v1, 0x178($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X178);
    // 0x80070750: lbu         $v0, 0x174($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X174);
    // 0x80070754: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80070758: andi        $v0, $v0, 0xCF
    ctx->r2 = ctx->r2 & 0XCF;
    // 0x8007075C: sb          $v0, 0x174($a0)
    MEM_B(0X174, ctx->r4) = ctx->r2;
    // 0x80070760: j           L_8007077C
    // 0x80070764: sb          $v1, 0x178($a0)
    MEM_B(0X178, ctx->r4) = ctx->r3;
        goto L_8007077C;
    // 0x80070764: sb          $v1, 0x178($a0)
    MEM_B(0X178, ctx->r4) = ctx->r3;
L_80070768:
    // 0x80070768: lb          $v1, 0x103($a0)
    ctx->r3 = MEM_B(ctx->r4, 0X103);
    // 0x8007076C: bne         $v1, $v0, L_8007077C
    if (ctx->r3 != ctx->r2) {
        // 0x80070770: nop
    
            goto L_8007077C;
    }
    // 0x80070770: nop

    // 0x80070774: sb          $zero, 0x174($a0)
    MEM_B(0X174, ctx->r4) = 0;
    // 0x80070778: sb          $zero, 0x177($a0)
    MEM_B(0X177, ctx->r4) = 0;
L_8007077C:
    // 0x8007077C: lhu         $v0, 0x44($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X44);
    // 0x80070780: addiu       $v0, $v0, 0xE0
    ctx->r2 = ADD32(ctx->r2, 0XE0);
    // 0x80070784: sh          $v0, 0x44($a0)
    MEM_H(0X44, ctx->r4) = ctx->r2;
    // 0x80070788: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8007078C: sra         $a1, $v0, 16
    ctx->r5 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80070790: bgezl       $a1, L_800707A4
    if (SIGNED(ctx->r5) >= 0) {
        // 0x80070794: sh          $zero, 0x44($a0)
        MEM_H(0X44, ctx->r4) = 0;
            goto L_800707A4;
    }
    goto skip_1;
    // 0x80070794: sh          $zero, 0x44($a0)
    MEM_H(0X44, ctx->r4) = 0;
    skip_1:
    // 0x80070798: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8007079C: jal         0x8006FC34
    // 0x800707A0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8006FC34_4B034(rdram, ctx);
        goto after_0;
    // 0x800707A0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
L_800707A4:
    // 0x800707A4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x800707A8: jr          $ra
    // 0x800707AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x800707AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800502EC_2B6EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800502EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800502F0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x800502F4: lw          $v1, 0x90($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X90);
    // 0x800502F8: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x800502FC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80050300: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80050304: sll         $a2, $a2, 3
    ctx->r6 = S32(ctx->r6 << 3);
    // 0x80050308: sb          $a1, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r5;
    // 0x8005030C: sw          $v0, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->r2;
    // 0x80050310: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80050314: sw          $v0, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->r2;
    // 0x80050318: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8005031C: jal         0x80051770
    // 0x80050320: sw          $v0, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->r2;
    func_80051770_2CB70(rdram, ctx);
        goto after_0;
    // 0x80050320: sw          $v0, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->r2;
    after_0:
    // 0x80050324: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80050328: jr          $ra
    // 0x8005032C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8005032C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void lldiv_recomp(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800A3244: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800A3248: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x800A324C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x800A3250: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x800A3254: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x800A3258: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x800A325C: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x800A3260: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x800A3264: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800A3268: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x800A326C: addu        $s1, $a3, $zero
    ctx->r17 = ADD32(ctx->r7, 0);
    // 0x800A3270: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x800A3274: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x800A3278: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800A327C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x800A3280: jal         0x800A3870
    // 0x800A3284: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    __divdi3_recomp(rdram, ctx);
        goto after_0;
    // 0x800A3284: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    after_0:
    // 0x800A3288: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x800A328C: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
    // 0x800A3290: multu       $s3, $a3
    result = U64(U32(ctx->r19)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800A3294: mfhi        $v0
    ctx->r2 = hi;
    // 0x800A3298: mflo        $v1
    ctx->r3 = lo;
    // 0x800A329C: nop

    // 0x800A32A0: nop

    // 0x800A32A4: mult        $s3, $a2
    result = S64(S32(ctx->r19)) * S64(S32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800A32A8: mflo        $a0
    ctx->r4 = lo;
    // 0x800A32AC: nop

    // 0x800A32B0: nop

    // 0x800A32B4: mult        $a3, $s2
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800A32B8: mflo        $a1
    ctx->r5 = lo;
    // 0x800A32BC: sw          $a2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r6;
    // 0x800A32C0: sw          $a3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r7;
    // 0x800A32C4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x800A32C8: lw          $a0, 0x10($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X10);
    // 0x800A32CC: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x800A32D0: sltu        $a1, $s1, $v1
    ctx->r5 = ctx->r17 < ctx->r3 ? 1 : 0;
    // 0x800A32D4: subu        $t1, $s1, $v1
    ctx->r9 = SUB32(ctx->r17, ctx->r3);
    // 0x800A32D8: subu        $t0, $s0, $v0
    ctx->r8 = SUB32(ctx->r16, ctx->r2);
    // 0x800A32DC: subu        $t0, $t0, $a1
    ctx->r8 = SUB32(ctx->r8, ctx->r5);
    // 0x800A32E0: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x800A32E4: bgez        $a0, L_800A3334
    if (SIGNED(ctx->r4) >= 0) {
        // 0x800A32E8: sw          $t1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r9;
            goto L_800A3334;
    }
    // 0x800A32E8: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x800A32EC: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x800A32F0: bgtzl       $v0, L_800A330C
    if (SIGNED(ctx->r2) > 0) {
        // 0x800A32F4: addiu       $v1, $a3, 0x1
        ctx->r3 = ADD32(ctx->r7, 0X1);
            goto L_800A330C;
    }
    goto skip_0;
    // 0x800A32F4: addiu       $v1, $a3, 0x1
    ctx->r3 = ADD32(ctx->r7, 0X1);
    skip_0:
    // 0x800A32F8: bne         $v0, $zero, L_800A3334
    if (ctx->r2 != 0) {
        // 0x800A32FC: nop
    
            goto L_800A3334;
    }
    // 0x800A32FC: nop

    // 0x800A3300: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x800A3304: beq         $v0, $zero, L_800A3334
    if (ctx->r2 == 0) {
        // 0x800A3308: addiu       $v1, $a3, 0x1
        ctx->r3 = ADD32(ctx->r7, 0X1);
            goto L_800A3334;
    }
    // 0x800A3308: addiu       $v1, $a3, 0x1
    ctx->r3 = ADD32(ctx->r7, 0X1);
L_800A330C:
    // 0x800A330C: sltiu       $a0, $v1, 0x1
    ctx->r4 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x800A3310: addu        $v0, $a2, $a0
    ctx->r2 = ADD32(ctx->r6, ctx->r4);
    // 0x800A3314: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x800A3318: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    // 0x800A331C: sltu        $a0, $t1, $s3
    ctx->r4 = ctx->r9 < ctx->r19 ? 1 : 0;
    // 0x800A3320: subu        $v1, $t1, $s3
    ctx->r3 = SUB32(ctx->r9, ctx->r19);
    // 0x800A3324: subu        $v0, $t0, $s2
    ctx->r2 = SUB32(ctx->r8, ctx->r18);
    // 0x800A3328: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x800A332C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x800A3330: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
L_800A3334:
    // 0x800A3334: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x800A3338: lw          $v1, 0x14($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X14);
    // 0x800A333C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800A3340: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x800A3344: sw          $v0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r2;
    // 0x800A3348: sw          $v1, 0x4($s4)
    MEM_W(0X4, ctx->r20) = ctx->r3;
    // 0x800A334C: sw          $a0, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r4;
    // 0x800A3350: sw          $a1, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->r5;
    // 0x800A3354: addu        $v0, $s4, $zero
    ctx->r2 = ADD32(ctx->r20, 0);
    // 0x800A3358: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x800A335C: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x800A3360: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x800A3364: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x800A3368: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x800A336C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800A3370: jr          $ra
    // 0x800A3374: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x800A3374: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800276EC_2AEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800276EC: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x800276F0: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x800276F4: slti        $a0, $a0, 0x2
    ctx->r4 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x800276F8: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x800276FC: sw          $fp, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r30;
    // 0x80027700: sw          $s7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r23;
    // 0x80027704: sw          $s6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r22;
    // 0x80027708: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x8002770C: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x80027710: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x80027714: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x80027718: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x8002771C: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x80027720: sdc1        $f20, 0x78($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X78, ctx->r29);
    // 0x80027724: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x80027728: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8002772C: sw          $zero, 0x53D8($at)
    MEM_W(0X53D8, ctx->r1) = 0;
    // 0x80027730: beq         $a0, $zero, L_80028120
    if (ctx->r4 == 0) {
        // 0x80027734: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_80028120;
    }
    // 0x80027734: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80027738: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8002773C: lw          $v0, -0x3E84($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3E84);
    // 0x80027740: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80027744: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80027748: sw          $v0, -0x3E84($at)
    MEM_W(-0X3E84, ctx->r1) = ctx->r2;
    // 0x8002774C: jal         0x8002CAD0
    // 0x80027750: addu        $s7, $zero, $zero
    ctx->r23 = ADD32(0, 0);
    func_8002CAD0_7ED0(rdram, ctx);
        goto after_0;
    // 0x80027750: addu        $s7, $zero, $zero
    ctx->r23 = ADD32(0, 0);
    after_0:
    // 0x80027754: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80027758: lbu         $v0, 0x559C($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X559C);
    // 0x8002775C: addiu       $s1, $zero, -0x100
    ctx->r17 = ADD32(0, -0X100);
    // 0x80027760: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80027764: addiu       $s0, $s0, 0x47F0
    ctx->r16 = ADD32(ctx->r16, 0X47F0);
    // 0x80027768: lw          $t4, 0x14($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X14);
    // 0x8002776C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80027770: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x80027774: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80027778: lw          $v1, 0x6FB0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6FB0);
    // 0x8002777C: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x80027780: ori         $v0, $v0, 0xE000
    ctx->r2 = ctx->r2 | 0XE000;
    // 0x80027784: lui         $at, 0x8019
    ctx->r1 = S32(0X8019 << 16);
    // 0x80027788: sw          $t4, 0x3C30($at)
    MEM_W(0X3C30, ctx->r1) = ctx->r12;
    // 0x8002778C: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x80027790: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80027794: sw          $v0, 0x6FB8($at)
    MEM_W(0X6FB8, ctx->r1) = ctx->r2;
    // 0x80027798: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x8002779C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800277A0: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x800277A4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800277A8: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x800277AC: lui         $v0, 0xDE00
    ctx->r2 = S32(0XDE00 << 16);
    // 0x800277B0: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x800277B4: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x800277B8: addiu       $v0, $v0, 0x4E80
    ctx->r2 = ADD32(ctx->r2, 0X4E80);
    // 0x800277BC: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
L_800277C0:
    // 0x800277C0: lbu         $v0, 0xA1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA1);
    // 0x800277C4: beql        $v0, $zero, L_8002784C
    if (ctx->r2 == 0) {
        // 0x800277C8: addiu       $s7, $s7, 0x1
        ctx->r23 = ADD32(ctx->r23, 0X1);
            goto L_8002784C;
    }
    goto skip_0;
    // 0x800277C8: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    skip_0:
    // 0x800277CC: lbu         $v1, 0xA0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA0);
    // 0x800277D0: lbu         $a0, 0x9F($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X9F);
    // 0x800277D4: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x800277D8: div         $zero, $v1, $v0
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r2)));
    // 0x800277DC: bne         $v0, $zero, L_800277E8
    if (ctx->r2 != 0) {
        // 0x800277E0: nop
    
            goto L_800277E8;
    }
    // 0x800277E0: nop

    // 0x800277E4: break       7
    do_break(2147645412);
L_800277E8:
    // 0x800277E8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800277EC: bne         $v0, $at, L_80027800
    if (ctx->r2 != ctx->r1) {
        // 0x800277F0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80027800;
    }
    // 0x800277F0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800277F4: bne         $v1, $at, L_80027800
    if (ctx->r3 != ctx->r1) {
        // 0x800277F8: nop
    
            goto L_80027800;
    }
    // 0x800277F8: nop

    // 0x800277FC: break       6
    do_break(2147645436);
L_80027800:
    // 0x80027800: mflo        $v1
    ctx->r3 = lo;
    // 0x80027804: lbu         $v0, 0xA1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA1);
    // 0x80027808: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8002780C: sb          $v0, 0xA1($s0)
    MEM_B(0XA1, ctx->r16) = ctx->r2;
    // 0x80027810: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80027814: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x80027818: bne         $v0, $zero, L_80027848
    if (ctx->r2 != 0) {
        // 0x8002781C: sb          $a0, 0x9F($s0)
        MEM_B(0X9F, ctx->r16) = ctx->r4;
            goto L_80027848;
    }
    // 0x8002781C: sb          $a0, 0x9F($s0)
    MEM_B(0X9F, ctx->r16) = ctx->r4;
    // 0x80027820: lbu         $v0, 0x9F($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9F);
    // 0x80027824: sltiu       $v0, $v0, 0xF1
    ctx->r2 = ctx->r2 < 0XF1 ? 1 : 0;
    // 0x80027828: bnel        $v0, $zero, L_8002784C
    if (ctx->r2 != 0) {
        // 0x8002782C: addiu       $s7, $s7, 0x1
        ctx->r23 = ADD32(ctx->r23, 0X1);
            goto L_8002784C;
    }
    goto skip_1;
    // 0x8002782C: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    skip_1:
    // 0x80027830: lw          $v0, 0x9C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X9C);
    // 0x80027834: and         $v0, $v0, $s1
    ctx->r2 = ctx->r2 & ctx->r17;
    // 0x80027838: bnel        $v0, $zero, L_8002784C
    if (ctx->r2 != 0) {
        // 0x8002783C: addiu       $s7, $s7, 0x1
        ctx->r23 = ADD32(ctx->r23, 0X1);
            goto L_8002784C;
    }
    goto skip_2;
    // 0x8002783C: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    skip_2:
    // 0x80027840: jal         0x80089EA0
    // 0x80027844: nop

    func_80089EA0_652A0(rdram, ctx);
        goto after_1;
    // 0x80027844: nop

    after_1:
L_80027848:
    // 0x80027848: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
L_8002784C:
    // 0x8002784C: blez        $s7, L_800277C0
    if (SIGNED(ctx->r23) <= 0) {
        // 0x80027850: addiu       $s0, $s0, 0x188
        ctx->r16 = ADD32(ctx->r16, 0X188);
            goto L_800277C0;
    }
    // 0x80027850: addiu       $s0, $s0, 0x188
    ctx->r16 = ADD32(ctx->r16, 0X188);
    // 0x80027854: addu        $s7, $zero, $zero
    ctx->r23 = ADD32(0, 0);
    // 0x80027858: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8002785C: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80027860: lui         $t4, 0xDD00
    ctx->r12 = S32(0XDD00 << 16);
    // 0x80027864: ori         $t4, $t4, 0x7FF
    ctx->r12 = ctx->r12 | 0X7FF;
    // 0x80027868: sw          $t4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r12;
    // 0x8002786C: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
L_80027870:
    // 0x80027870: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x80027874: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80027878: addiu       $v0, $v0, 0x47F0
    ctx->r2 = ADD32(ctx->r2, 0X47F0);
    // 0x8002787C: addu        $s1, $t4, $v0
    ctx->r17 = ADD32(ctx->r12, ctx->r2);
    // 0x80027880: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80027884: sw          $s1, -0x595C($at)
    MEM_W(-0X595C, ctx->r1) = ctx->r17;
    // 0x80027888: lb          $v0, 0xAA($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XAA);
    // 0x8002788C: beq         $v0, $zero, L_80028074
    if (ctx->r2 == 0) {
        // 0x80027890: nop
    
            goto L_80028074;
    }
    // 0x80027890: nop

    // 0x80027894: lh          $t4, 0x8C($s1)
    ctx->r12 = MEM_H(ctx->r17, 0X8C);
    // 0x80027898: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x8002789C: lh          $v0, 0x90($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X90);
    // 0x800278A0: lh          $v1, 0x92($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X92);
    // 0x800278A4: lh          $t4, 0x8E($s1)
    ctx->r12 = MEM_H(ctx->r17, 0X8E);
    // 0x800278A8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800278AC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800278B0: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    // 0x800278B4: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x800278B8: bne         $s7, $zero, L_800278E0
    if (ctx->r23 != 0) {
        // 0x800278BC: sw          $v1, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r3;
            goto L_800278E0;
    }
    // 0x800278BC: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    // 0x800278C0: lui         $t4, 0x800A
    ctx->r12 = S32(0X800A << 16);
    // 0x800278C4: lhu         $t4, 0x6C9A($t4)
    ctx->r12 = MEM_HU(ctx->r12, 0X6C9A);
    // 0x800278C8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x800278CC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x800278D0: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    // 0x800278D4: lui         $t4, 0x800A
    ctx->r12 = S32(0X800A << 16);
    // 0x800278D8: lhu         $t4, 0x6C9C($t4)
    ctx->r12 = MEM_HU(ctx->r12, 0X6C9C);
    // 0x800278DC: sw          $t4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r12;
L_800278E0:
    // 0x800278E0: lwc1        $f0, 0x1C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800278E4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x800278E8: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x800278EC: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x800278F0: lw          $a2, -0x6F10($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X6F10);
    // 0x800278F4: lwc1        $f2, 0x24($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800278F8: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x800278FC: mul.s       $f2, $f2, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f20.fl);
    // 0x80027900: addiu       $v0, $a2, 0x8
    ctx->r2 = ADD32(ctx->r6, 0X8);
    // 0x80027904: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80027908: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002790C: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80027910: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x80027914: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80027918: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8002791C: mul.s       $f4, $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x80027920: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80027924: sll         $v1, $v1, 12
    ctx->r3 = S32(ctx->r3 << 12);
    // 0x80027928: trunc.w.s   $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.u32l = TRUNC_W_S(ctx->f2.fl);
    // 0x8002792C: mfc1        $v0, $f0
    ctx->r2 = (int32_t)ctx->f0.u32l;
    // 0x80027930: nop

    // 0x80027934: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80027938: lui         $a0, 0xED00
    ctx->r4 = S32(0XED00 << 16);
    // 0x8002793C: lwc1        $f0, 0x34($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80027940: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x80027944: mul.s       $f0, $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x80027948: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x8002794C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80027950: sw          $v1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r3;
    // 0x80027954: trunc.w.s   $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80027958: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x8002795C: nop

    // 0x80027960: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80027964: sll         $v1, $v1, 12
    ctx->r3 = S32(ctx->r3 << 12);
    // 0x80027968: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x8002796C: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x80027970: nop

    // 0x80027974: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80027978: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8002797C: sw          $v1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r3;
    // 0x80027980: lb          $v0, 0xA9($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XA9);
    // 0x80027984: beq         $v0, $zero, L_80027A80
    if (ctx->r2 == 0) {
        // 0x80027988: nop
    
            goto L_80027A80;
    }
    // 0x80027988: nop

    // 0x8002798C: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80027990: lw          $v0, 0x6CA0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6CA0);
    // 0x80027994: bne         $v0, $zero, L_80027A80
    if (ctx->r2 != 0) {
        // 0x80027998: lui         $v1, 0xE300
        ctx->r3 = S32(0XE300 << 16);
            goto L_80027A80;
    }
    // 0x80027998: lui         $v1, 0xE300
    ctx->r3 = S32(0XE300 << 16);
    // 0x8002799C: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x800279A0: lw          $a1, -0x237C($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X237C);
    // 0x800279A4: lui         $a0, 0xFFFC
    ctx->r4 = S32(0XFFFC << 16);
    // 0x800279A8: ori         $a0, $a0, 0xFFFC
    ctx->r4 = ctx->r4 | 0XFFFC;
    // 0x800279AC: sw          $a0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->r4;
    // 0x800279B0: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x800279B4: lhu         $a0, 0x6C9A($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X6C9A);
    // 0x800279B8: ori         $v1, $v1, 0xA01
    ctx->r3 = ctx->r3 | 0XA01;
    // 0x800279BC: addiu       $v0, $a2, 0x10
    ctx->r2 = ADD32(ctx->r6, 0X10);
    // 0x800279C0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800279C4: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x800279C8: lui         $v0, 0xFE00
    ctx->r2 = S32(0XFE00 << 16);
    // 0x800279CC: sw          $v0, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r2;
    // 0x800279D0: addiu       $v0, $a2, 0x18
    ctx->r2 = ADD32(ctx->r6, 0X18);
    // 0x800279D4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800279D8: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x800279DC: lui         $v0, 0x30
    ctx->r2 = S32(0X30 << 16);
    // 0x800279E0: sw          $v0, 0x14($a2)
    MEM_W(0X14, ctx->r6) = ctx->r2;
    // 0x800279E4: addiu       $v0, $a2, 0x20
    ctx->r2 = ADD32(ctx->r6, 0X20);
    // 0x800279E8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800279EC: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x800279F0: addiu       $v0, $a2, 0x28
    ctx->r2 = ADD32(ctx->r6, 0X28);
    // 0x800279F4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800279F8: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x800279FC: lui         $v0, 0xF700
    ctx->r2 = S32(0XF700 << 16);
    // 0x80027A00: sw          $v0, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->r2;
    // 0x80027A04: addiu       $v0, $a2, 0x30
    ctx->r2 = ADD32(ctx->r6, 0X30);
    // 0x80027A08: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80027A0C: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80027A10: addiu       $v0, $a2, 0x38
    ctx->r2 = ADD32(ctx->r6, 0X38);
    // 0x80027A14: lui         $t4, 0xE700
    ctx->r12 = S32(0XE700 << 16);
    // 0x80027A18: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80027A1C: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80027A20: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x80027A24: sw          $v1, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->r3;
    // 0x80027A28: lui         $v1, 0xFF10
    ctx->r3 = S32(0XFF10 << 16);
    // 0x80027A2C: sw          $zero, 0x2C($a2)
    MEM_W(0X2C, ctx->r6) = 0;
    // 0x80027A30: sw          $t4, 0x30($a2)
    MEM_W(0X30, ctx->r6) = ctx->r12;
    // 0x80027A34: sw          $zero, 0x34($a2)
    MEM_W(0X34, ctx->r6) = 0;
    // 0x80027A38: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x80027A3C: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x80027A40: andi        $v0, $a0, 0xFFF
    ctx->r2 = ctx->r4 & 0XFFF;
    // 0x80027A44: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80027A48: sw          $v0, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->r2;
    // 0x80027A4C: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80027A50: lhu         $v0, 0x6C9C($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X6C9C);
    // 0x80027A54: andi        $a0, $a0, 0x3FF
    ctx->r4 = ctx->r4 & 0X3FF;
    // 0x80027A58: sll         $a0, $a0, 14
    ctx->r4 = S32(ctx->r4 << 14);
    // 0x80027A5C: lui         $v1, 0xF600
    ctx->r3 = S32(0XF600 << 16);
    // 0x80027A60: sw          $a1, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r5;
    // 0x80027A64: sw          $a1, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->r5;
    // 0x80027A68: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80027A6C: andi        $v0, $v0, 0x3FF
    ctx->r2 = ctx->r2 & 0X3FF;
    // 0x80027A70: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80027A74: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80027A78: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x80027A7C: sw          $a0, 0x28($a2)
    MEM_W(0X28, ctx->r6) = ctx->r4;
L_80027A80:
    // 0x80027A80: lb          $v0, 0xA8($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XA8);
    // 0x80027A84: beq         $v0, $zero, L_80027B88
    if (ctx->r2 == 0) {
        // 0x80027A88: nop
    
            goto L_80027B88;
    }
    // 0x80027A88: nop

    // 0x80027A8C: lui         $s0, 0x801B
    ctx->r16 = S32(0X801B << 16);
    // 0x80027A90: lw          $s0, -0x6F10($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X6F10);
    // 0x80027A94: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80027A98: lhu         $v0, 0x6C9A($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X6C9A);
    // 0x80027A9C: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80027AA0: lw          $a0, 0x980($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X980);
    // 0x80027AA4: addiu       $v1, $s0, 0x8
    ctx->r3 = ADD32(ctx->r16, 0X8);
    // 0x80027AA8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80027AAC: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80027AB0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80027AB4: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x80027AB8: lui         $v1, 0xFF10
    ctx->r3 = S32(0XFF10 << 16);
    // 0x80027ABC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80027AC0: jal         0x80099BB0
    // 0x80027AC4: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_2;
    // 0x80027AC4: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    after_2:
    // 0x80027AC8: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x80027ACC: lw          $a2, -0x6F10($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X6F10);
    // 0x80027AD0: lui         $a0, 0x800A
    ctx->r4 = S32(0X800A << 16);
    // 0x80027AD4: lhu         $a0, 0x6C9A($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X6C9A);
    // 0x80027AD8: lui         $v1, 0xF600
    ctx->r3 = S32(0XF600 << 16);
    // 0x80027ADC: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x80027AE0: addiu       $v0, $a2, 0x8
    ctx->r2 = ADD32(ctx->r6, 0X8);
    // 0x80027AE4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80027AE8: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80027AEC: lui         $v0, 0xF700
    ctx->r2 = S32(0XF700 << 16);
    // 0x80027AF0: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x80027AF4: lbu         $a1, 0xA4($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XA4);
    // 0x80027AF8: lbu         $a3, 0xA5($s1)
    ctx->r7 = MEM_BU(ctx->r17, 0XA5);
    // 0x80027AFC: lbu         $t0, 0xA6($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0XA6);
    // 0x80027B00: addiu       $v0, $a2, 0x10
    ctx->r2 = ADD32(ctx->r6, 0X10);
    // 0x80027B04: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x80027B08: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80027B0C: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80027B10: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80027B14: lhu         $v0, 0x6C9C($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X6C9C);
    // 0x80027B18: andi        $a0, $a0, 0x3FF
    ctx->r4 = ctx->r4 & 0X3FF;
    // 0x80027B1C: sll         $a0, $a0, 14
    ctx->r4 = S32(ctx->r4 << 14);
    // 0x80027B20: lui         $t4, 0xE700
    ctx->r12 = S32(0XE700 << 16);
    // 0x80027B24: sw          $zero, 0xC($a2)
    MEM_W(0XC, ctx->r6) = 0;
    // 0x80027B28: sw          $t4, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->r12;
    // 0x80027B2C: sw          $zero, 0x14($a2)
    MEM_W(0X14, ctx->r6) = 0;
    // 0x80027B30: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80027B34: andi        $v0, $v0, 0x3FF
    ctx->r2 = ctx->r2 & 0X3FF;
    // 0x80027B38: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80027B3C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80027B40: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x80027B44: addiu       $v0, $a2, 0x18
    ctx->r2 = ADD32(ctx->r6, 0X18);
    // 0x80027B48: sll         $a1, $a1, 8
    ctx->r5 = S32(ctx->r5 << 8);
    // 0x80027B4C: andi        $a1, $a1, 0xF800
    ctx->r5 = ctx->r5 & 0XF800;
    // 0x80027B50: sll         $a3, $a3, 3
    ctx->r7 = S32(ctx->r7 << 3);
    // 0x80027B54: andi        $a3, $a3, 0x7C0
    ctx->r7 = ctx->r7 & 0X7C0;
    // 0x80027B58: or          $a1, $a1, $a3
    ctx->r5 = ctx->r5 | ctx->r7;
    // 0x80027B5C: srl         $t0, $t0, 2
    ctx->r8 = S32(U32(ctx->r8) >> 2);
    // 0x80027B60: andi        $t0, $t0, 0x3E
    ctx->r8 = ctx->r8 & 0X3E;
    // 0x80027B64: or          $a1, $a1, $t0
    ctx->r5 = ctx->r5 | ctx->r8;
    // 0x80027B68: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80027B6C: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80027B70: ori         $v0, $a1, 0x1
    ctx->r2 = ctx->r5 | 0X1;
    // 0x80027B74: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80027B78: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80027B7C: or          $v0, $v0, $a1
    ctx->r2 = ctx->r2 | ctx->r5;
    // 0x80027B80: sw          $a0, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r4;
    // 0x80027B84: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
L_80027B88:
    // 0x80027B88: jal         0x800281C8
    // 0x80027B8C: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_800281C8_35C8(rdram, ctx);
        goto after_3;
    // 0x80027B8C: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_3:
    // 0x80027B90: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x80027B94: jal         0x800281C8
    // 0x80027B98: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    func_800281C8_35C8(rdram, ctx);
        goto after_4;
    // 0x80027B98: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    after_4:
    // 0x80027B9C: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x80027BA0: jal         0x800281C8
    // 0x80027BA4: addu        $s6, $v0, $zero
    ctx->r22 = ADD32(ctx->r2, 0);
    func_800281C8_35C8(rdram, ctx);
        goto after_5;
    // 0x80027BA4: addu        $s6, $v0, $zero
    ctx->r22 = ADD32(ctx->r2, 0);
    after_5:
    // 0x80027BA8: addu        $s5, $v0, $zero
    ctx->r21 = ADD32(ctx->r2, 0);
    // 0x80027BAC: sltu        $v0, $zero, $s2
    ctx->r2 = 0 < ctx->r18 ? 1 : 0;
    // 0x80027BB0: sltu        $v1, $zero, $s6
    ctx->r3 = 0 < ctx->r22 ? 1 : 0;
    // 0x80027BB4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80027BB8: beq         $v0, $zero, L_80028074
    if (ctx->r2 == 0) {
        // 0x80027BBC: nop
    
            goto L_80028074;
    }
    // 0x80027BBC: nop

    // 0x80027BC0: beq         $s5, $zero, L_80028074
    if (ctx->r21 == 0) {
        // 0x80027BC4: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_80028074;
    }
    // 0x80027BC4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80027BC8: addiu       $a1, $s1, 0xB0
    ctx->r5 = ADD32(ctx->r17, 0XB0);
    // 0x80027BCC: jal         0x8009A3B4
    // 0x80027BD0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x80027BD0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_6:
    // 0x80027BD4: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x80027BD8: addiu       $s0, $s1, 0x100
    ctx->r16 = ADD32(ctx->r17, 0X100);
    // 0x80027BDC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80027BE0: jal         0x8009A3B4
    // 0x80027BE4: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x80027BE4: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_7:
    // 0x80027BE8: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x80027BEC: addiu       $a1, $s1, 0xC0
    ctx->r5 = ADD32(ctx->r17, 0XC0);
    // 0x80027BF0: jal         0x8009A3B4
    // 0x80027BF4: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x80027BF4: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_8:
    // 0x80027BF8: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80027BFC: addiu       $a0, $a0, -0xC90
    ctx->r4 = ADD32(ctx->r4, -0XC90);
    // 0x80027C00: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80027C04: jal         0x8009A3B4
    // 0x80027C08: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x80027C08: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_9:
    // 0x80027C0C: lui         $v0, 0xDC08
    ctx->r2 = S32(0XDC08 << 16);
    // 0x80027C10: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
    // 0x80027C14: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x80027C18: lw          $a1, -0x6F10($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X6F10);
    // 0x80027C1C: lui         $v1, 0xDA38
    ctx->r3 = S32(0XDA38 << 16);
    // 0x80027C20: ori         $v1, $v1, 0x7
    ctx->r3 = ctx->r3 | 0X7;
    // 0x80027C24: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x80027C28: lui         $v0, 0xDB0E
    ctx->r2 = S32(0XDB0E << 16);
    // 0x80027C2C: sw          $s2, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r18;
    // 0x80027C30: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
    // 0x80027C34: lhu         $a0, 0x140($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X140);
    // 0x80027C38: lui         $v0, 0xDA38
    ctx->r2 = S32(0XDA38 << 16);
    // 0x80027C3C: ori         $v0, $v0, 0x5
    ctx->r2 = ctx->r2 | 0X5;
    // 0x80027C40: sw          $v0, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r2;
    // 0x80027C44: lui         $v0, 0xDB08
    ctx->r2 = S32(0XDB08 << 16);
    // 0x80027C48: sw          $v1, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r3;
    // 0x80027C4C: sw          $s6, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->r22;
    // 0x80027C50: sw          $s5, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r21;
    // 0x80027C54: sw          $v0, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->r2;
    // 0x80027C58: sw          $a0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r4;
    // 0x80027C5C: lh          $v0, 0x96($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X96);
    // 0x80027C60: lh          $a2, 0x94($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X94);
    // 0x80027C64: lui         $a0, 0x1
    ctx->r4 = S32(0X1 << 16);
    // 0x80027C68: ori         $a0, $a0, 0xF400
    ctx->r4 = ctx->r4 | 0XF400;
    // 0x80027C6C: subu        $v0, $v0, $a2
    ctx->r2 = SUB32(ctx->r2, ctx->r6);
    // 0x80027C70: div         $zero, $a0, $v0
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r2)));
    // 0x80027C74: bne         $v0, $zero, L_80027C80
    if (ctx->r2 != 0) {
        // 0x80027C78: nop
    
            goto L_80027C80;
    }
    // 0x80027C78: nop

    // 0x80027C7C: break       7
    do_break(2147646588);
L_80027C80:
    // 0x80027C80: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80027C84: bne         $v0, $at, L_80027C98
    if (ctx->r2 != ctx->r1) {
        // 0x80027C88: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80027C98;
    }
    // 0x80027C88: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80027C8C: bne         $a0, $at, L_80027C98
    if (ctx->r4 != ctx->r1) {
        // 0x80027C90: nop
    
            goto L_80027C98;
    }
    // 0x80027C90: nop

    // 0x80027C94: break       6
    do_break(2147646612);
L_80027C98:
    // 0x80027C98: mflo        $a0
    ctx->r4 = lo;
    // 0x80027C9C: addiu       $v1, $zero, 0x1F4
    ctx->r3 = ADD32(0, 0X1F4);
    // 0x80027CA0: subu        $v1, $v1, $a2
    ctx->r3 = SUB32(ctx->r3, ctx->r6);
    // 0x80027CA4: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x80027CA8: div         $zero, $v1, $v0
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r2)));
    // 0x80027CAC: bne         $v0, $zero, L_80027CB8
    if (ctx->r2 != 0) {
        // 0x80027CB0: nop
    
            goto L_80027CB8;
    }
    // 0x80027CB0: nop

    // 0x80027CB4: break       7
    do_break(2147646644);
L_80027CB8:
    // 0x80027CB8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80027CBC: bne         $v0, $at, L_80027CD0
    if (ctx->r2 != ctx->r1) {
        // 0x80027CC0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80027CD0;
    }
    // 0x80027CC0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80027CC4: bne         $v1, $at, L_80027CD0
    if (ctx->r3 != ctx->r1) {
        // 0x80027CC8: nop
    
            goto L_80027CD0;
    }
    // 0x80027CC8: nop

    // 0x80027CCC: break       6
    do_break(2147646668);
L_80027CD0:
    // 0x80027CD0: mflo        $v1
    ctx->r3 = lo;
    // 0x80027CD4: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x80027CD8: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x80027CDC: lui         $fp, 0xE300
    ctx->r30 = S32(0XE300 << 16);
    // 0x80027CE0: ori         $fp, $fp, 0x1801
    ctx->r30 = ctx->r30 | 0X1801;
    // 0x80027CE4: addu        $s2, $s1, $zero
    ctx->r18 = ADD32(ctx->r17, 0);
    // 0x80027CE8: lui         $a2, 0x1
    ctx->r6 = S32(0X1 << 16);
    // 0x80027CEC: ori         $a2, $a2, 0xD800
    ctx->r6 = ctx->r6 | 0XD800;
    // 0x80027CF0: addiu       $v0, $a1, 0x8
    ctx->r2 = ADD32(ctx->r5, 0X8);
    // 0x80027CF4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80027CF8: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80027CFC: addiu       $v0, $a1, 0x10
    ctx->r2 = ADD32(ctx->r5, 0X10);
    // 0x80027D00: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80027D04: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80027D08: addiu       $v0, $a1, 0x18
    ctx->r2 = ADD32(ctx->r5, 0X18);
    // 0x80027D0C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80027D10: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80027D14: addiu       $v0, $a1, 0x20
    ctx->r2 = ADD32(ctx->r5, 0X20);
    // 0x80027D18: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80027D1C: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80027D20: addiu       $v0, $a1, 0x28
    ctx->r2 = ADD32(ctx->r5, 0X28);
    // 0x80027D24: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80027D28: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80027D2C: addiu       $v0, $a1, 0x30
    ctx->r2 = ADD32(ctx->r5, 0X30);
    // 0x80027D30: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80027D34: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80027D38: lui         $v0, 0xF800
    ctx->r2 = S32(0XF800 << 16);
    // 0x80027D3C: sw          $v0, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->r2;
    // 0x80027D40: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80027D44: andi        $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 & 0XFFFF;
    // 0x80027D48: or          $a0, $a0, $v1
    ctx->r4 = ctx->r4 | ctx->r3;
    // 0x80027D4C: sw          $a0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r4;
    // 0x80027D50: lbu         $v0, 0x98($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X98);
    // 0x80027D54: lbu         $a0, 0x99($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X99);
    // 0x80027D58: lbu         $v1, 0x9A($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9A);
    // 0x80027D5C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80027D60: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80027D64: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x80027D68: lbu         $a0, 0x9B($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X9B);
    // 0x80027D6C: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x80027D70: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80027D74: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x80027D78: sw          $v0, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r2;
L_80027D7C:
    // 0x80027D7C: lw          $v1, 0x144($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X144);
    // 0x80027D80: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80027D84: lw          $v0, 0x53D8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X53D8);
    // 0x80027D88: beq         $v1, $v0, L_80027E84
    if (ctx->r3 == ctx->r2) {
        // 0x80027D8C: lw          $s0, 0x0($s2)
        ctx->r16 = MEM_W(ctx->r18, 0X0);
            goto L_80027E84;
    }
    // 0x80027D8C: lw          $s0, 0x0($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X0);
    // 0x80027D90: beql        $s0, $zero, L_80027F2C
    if (ctx->r16 == 0) {
        // 0x80027D94: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_80027F2C;
    }
    goto skip_3;
    // 0x80027D94: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_3:
    // 0x80027D98: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80027D9C: sw          $v1, 0x53D8($at)
    MEM_W(0X53D8, ctx->r1) = ctx->r3;
    // 0x80027DA0: beq         $v1, $zero, L_80027DB8
    if (ctx->r3 == 0) {
        // 0x80027DA4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80027DB8;
    }
    // 0x80027DA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80027DA8: beq         $v1, $v0, L_80027E00
    if (ctx->r3 == ctx->r2) {
        // 0x80027DAC: lui         $t4, 0xE100
        ctx->r12 = S32(0XE100 << 16);
            goto L_80027E00;
    }
    // 0x80027DAC: lui         $t4, 0xE100
    ctx->r12 = S32(0XE100 << 16);
    // 0x80027DB0: j           L_80027E48
    // 0x80027DB4: lui         $a0, 0xDA38
    ctx->r4 = S32(0XDA38 << 16);
        goto L_80027E48;
    // 0x80027DB4: lui         $a0, 0xDA38
    ctx->r4 = S32(0XDA38 << 16);
L_80027DB8:
    // 0x80027DB8: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80027DBC: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x80027DC0: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x80027DC4: lui         $t4, 0xE100
    ctx->r12 = S32(0XE100 << 16);
    // 0x80027DC8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80027DCC: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80027DD0: lui         $v0, 0xD
    ctx->r2 = S32(0XD << 16);
    // 0x80027DD4: addiu       $v0, $v0, 0x1450
    ctx->r2 = ADD32(ctx->r2, 0X1450);
    // 0x80027DD8: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x80027DDC: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x80027DE0: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80027DE4: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
    // 0x80027DE8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80027DEC: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80027DF0: lui         $v0, 0xA
    ctx->r2 = S32(0XA << 16);
    // 0x80027DF4: addiu       $v0, $v0, 0x4770
    ctx->r2 = ADD32(ctx->r2, 0X4770);
    // 0x80027DF8: j           L_80027E40
    // 0x80027DFC: sw          $v0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r2;
        goto L_80027E40;
    // 0x80027DFC: sw          $v0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r2;
L_80027E00:
    // 0x80027E00: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80027E04: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x80027E08: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x80027E0C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80027E10: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80027E14: lui         $v0, 0xD
    ctx->r2 = S32(0XD << 16);
    // 0x80027E18: addiu       $v0, $v0, 0x1870
    ctx->r2 = ADD32(ctx->r2, 0X1870);
    // 0x80027E1C: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x80027E20: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x80027E24: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80027E28: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
    // 0x80027E2C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80027E30: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80027E34: lui         $v0, 0xA
    ctx->r2 = S32(0XA << 16);
    // 0x80027E38: addiu       $v0, $v0, 0x5B00
    ctx->r2 = ADD32(ctx->r2, 0X5B00);
    // 0x80027E3C: sw          $v0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r2;
L_80027E40:
    // 0x80027E40: sw          $t4, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r12;
    // 0x80027E44: lui         $a0, 0xDA38
    ctx->r4 = S32(0XDA38 << 16);
L_80027E48:
    // 0x80027E48: ori         $a0, $a0, 0x7
    ctx->r4 = ctx->r4 | 0X7;
    // 0x80027E4C: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80027E50: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x80027E54: lui         $a1, 0xDA38
    ctx->r5 = S32(0XDA38 << 16);
    // 0x80027E58: ori         $a1, $a1, 0x5
    ctx->r5 = ctx->r5 | 0X5;
    // 0x80027E5C: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x80027E60: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80027E64: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80027E68: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
    // 0x80027E6C: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    // 0x80027E70: sw          $s6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r22;
    // 0x80027E74: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80027E78: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80027E7C: sw          $a1, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r5;
    // 0x80027E80: sw          $s5, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r21;
L_80027E84:
    // 0x80027E84: beql        $s0, $zero, L_80027F2C
    if (ctx->r16 == 0) {
        // 0x80027E88: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_80027F2C;
    }
    goto skip_4;
    // 0x80027E88: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_4:
    // 0x80027E8C: addiu       $s3, $zero, 0x40
    ctx->r19 = ADD32(0, 0X40);
L_80027E90:
    // 0x80027E90: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80027E94: lbu         $v0, 0x559C($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X559C);
    // 0x80027E98: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x80027E9C: addiu       $t4, $t4, 0x6FB0
    ctx->r12 = ADD32(ctx->r12, 0X6FB0);
    // 0x80027EA0: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80027EA4: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x80027EA8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80027EAC: addu        $v0, $v0, $t4
    ctx->r2 = ADD32(ctx->r2, ctx->r12);
    // 0x80027EB0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80027EB4: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x80027EB8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80027EBC: sw          $v0, 0x6FBC($at)
    MEM_W(0X6FBC, ctx->r1) = ctx->r2;
    // 0x80027EC0: sltu        $v0, $a2, $v0
    ctx->r2 = ctx->r6 < ctx->r2 ? 1 : 0;
    // 0x80027EC4: bnel        $v0, $zero, L_80027F2C
    if (ctx->r2 != 0) {
        // 0x80027EC8: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_80027F2C;
    }
    goto skip_5;
    // 0x80027EC8: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_5:
    // 0x80027ECC: lw          $t4, 0x14($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X14);
    // 0x80027ED0: bne         $t4, $a3, L_80027EF8
    if (ctx->r12 != ctx->r7) {
        // 0x80027ED4: nop
    
            goto L_80027EF8;
    }
    // 0x80027ED4: nop

    // 0x80027ED8: lui         $v0, 0x8019
    ctx->r2 = S32(0X8019 << 16);
    // 0x80027EDC: lw          $v0, 0x3C30($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3C30);
    // 0x80027EE0: beq         $v0, $t4, L_80027EF8
    if (ctx->r2 == ctx->r12) {
        // 0x80027EE4: addiu       $v0, $v1, 0x8
        ctx->r2 = ADD32(ctx->r3, 0X8);
            goto L_80027EF8;
    }
    // 0x80027EE4: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x80027EE8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80027EEC: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80027EF0: sw          $fp, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r30;
    // 0x80027EF4: sw          $s3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r19;
L_80027EF8:
    // 0x80027EF8: lw          $a0, 0xC($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XC);
    // 0x80027EFC: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x80027F00: lui         $t4, 0x8019
    ctx->r12 = S32(0X8019 << 16);
    // 0x80027F04: lw          $t4, 0x3C30($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X3C30);
    // 0x80027F08: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x80027F0C: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x80027F10: jalr        $v0
    // 0x80027F14: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_10;
    // 0x80027F14: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    after_10:
    // 0x80027F18: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x80027F1C: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x80027F20: bne         $s0, $zero, L_80027E90
    if (ctx->r16 != 0) {
        // 0x80027F24: lw          $a3, 0x4C($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X4C);
            goto L_80027E90;
    }
    // 0x80027F24: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x80027F28: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_80027F2C:
    // 0x80027F2C: slti        $v0, $s4, 0x10
    ctx->r2 = SIGNED(ctx->r20) < 0X10 ? 1 : 0;
    // 0x80027F30: bne         $v0, $zero, L_80027D7C
    if (ctx->r2 != 0) {
        // 0x80027F34: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_80027D7C;
    }
    // 0x80027F34: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x80027F38: lbu         $v0, 0x9F($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9F);
    // 0x80027F3C: beq         $v0, $zero, L_80028074
    if (ctx->r2 == 0) {
        // 0x80027F40: lui         $t2, 0x400
        ctx->r10 = S32(0X400 << 16);
            goto L_80028074;
    }
    // 0x80027F40: lui         $t2, 0x400
    ctx->r10 = S32(0X400 << 16);
    // 0x80027F44: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x80027F48: lw          $a1, -0x6F10($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X6F10);
    // 0x80027F4C: ori         $t2, $t2, 0x400
    ctx->r10 = ctx->r10 | 0X400;
    // 0x80027F50: lui         $t3, 0xE300
    ctx->r11 = S32(0XE300 << 16);
    // 0x80027F54: ori         $t3, $t3, 0x1801
    ctx->r11 = ctx->r11 | 0X1801;
    // 0x80027F58: addiu       $v0, $a1, 0x8
    ctx->r2 = ADD32(ctx->r5, 0X8);
    // 0x80027F5C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80027F60: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80027F64: lui         $v0, 0xDE00
    ctx->r2 = S32(0XDE00 << 16);
    // 0x80027F68: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x80027F6C: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x80027F70: addiu       $v0, $v0, 0x4F68
    ctx->r2 = ADD32(ctx->r2, 0X4F68);
    // 0x80027F74: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x80027F78: addiu       $v0, $a1, 0x10
    ctx->r2 = ADD32(ctx->r5, 0X10);
    // 0x80027F7C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80027F80: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80027F84: lui         $v0, 0xFA00
    ctx->r2 = S32(0XFA00 << 16);
    // 0x80027F88: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
    // 0x80027F8C: lbu         $a2, 0x9C($s1)
    ctx->r6 = MEM_BU(ctx->r17, 0X9C);
    // 0x80027F90: lbu         $a3, 0x9D($s1)
    ctx->r7 = MEM_BU(ctx->r17, 0X9D);
    // 0x80027F94: lbu         $t0, 0x9E($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X9E);
    // 0x80027F98: lbu         $t1, 0x9F($s1)
    ctx->r9 = MEM_BU(ctx->r17, 0X9F);
    // 0x80027F9C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80027FA0: lui         $a0, 0xE400
    ctx->r4 = S32(0XE400 << 16);
    // 0x80027FA4: addiu       $v0, $a1, 0x18
    ctx->r2 = ADD32(ctx->r5, 0X18);
    // 0x80027FA8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80027FAC: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80027FB0: sll         $v1, $t4, 2
    ctx->r3 = S32(ctx->r12 << 2);
    // 0x80027FB4: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80027FB8: sll         $v1, $v1, 12
    ctx->r3 = S32(ctx->r3 << 12);
    // 0x80027FBC: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80027FC0: sll         $a2, $a2, 24
    ctx->r6 = S32(ctx->r6 << 24);
    // 0x80027FC4: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x80027FC8: or          $a2, $a2, $a3
    ctx->r6 = ctx->r6 | ctx->r7;
    // 0x80027FCC: sll         $t0, $t0, 8
    ctx->r8 = S32(ctx->r8 << 8);
    // 0x80027FD0: sll         $v0, $t4, 2
    ctx->r2 = S32(ctx->r12 << 2);
    // 0x80027FD4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80027FD8: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x80027FDC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80027FE0: sw          $v1, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r3;
    // 0x80027FE4: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80027FE8: or          $a2, $a2, $t0
    ctx->r6 = ctx->r6 | ctx->r8;
    // 0x80027FEC: or          $a2, $a2, $t1
    ctx->r6 = ctx->r6 | ctx->r9;
    // 0x80027FF0: sll         $v1, $t4, 2
    ctx->r3 = S32(ctx->r12 << 2);
    // 0x80027FF4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80027FF8: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80027FFC: sll         $v1, $v1, 12
    ctx->r3 = S32(ctx->r3 << 12);
    // 0x80028000: sll         $v0, $t4, 2
    ctx->r2 = S32(ctx->r12 << 2);
    // 0x80028004: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80028008: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8002800C: addiu       $v0, $a1, 0x20
    ctx->r2 = ADD32(ctx->r5, 0X20);
    // 0x80028010: lui         $t4, 0xE100
    ctx->r12 = S32(0XE100 << 16);
    // 0x80028014: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80028018: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002801C: addiu       $v0, $a1, 0x28
    ctx->r2 = ADD32(ctx->r5, 0X28);
    // 0x80028020: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80028024: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80028028: lui         $v0, 0xF100
    ctx->r2 = S32(0XF100 << 16);
    // 0x8002802C: sw          $v0, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->r2;
    // 0x80028030: addiu       $v0, $a1, 0x30
    ctx->r2 = ADD32(ctx->r5, 0X30);
    // 0x80028034: sw          $t4, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r12;
    // 0x80028038: lui         $t4, 0xE700
    ctx->r12 = S32(0XE700 << 16);
    // 0x8002803C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80028040: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80028044: addiu       $v0, $a1, 0x38
    ctx->r2 = ADD32(ctx->r5, 0X38);
    // 0x80028048: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002804C: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80028050: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80028054: sw          $v1, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->r3;
    // 0x80028058: sw          $zero, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = 0;
    // 0x8002805C: sw          $t2, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r10;
    // 0x80028060: sw          $t4, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->r12;
    // 0x80028064: sw          $zero, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = 0;
    // 0x80028068: sw          $t3, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r11;
    // 0x8002806C: sw          $v0, 0x34($a1)
    MEM_W(0X34, ctx->r5) = ctx->r2;
    // 0x80028070: sw          $a2, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r6;
L_80028074:
    // 0x80028074: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x80028078: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x8002807C: addiu       $t4, $t4, 0x188
    ctx->r12 = ADD32(ctx->r12, 0X188);
    // 0x80028080: blez        $s7, L_80027870
    if (SIGNED(ctx->r23) <= 0) {
        // 0x80028084: sw          $t4, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r12;
            goto L_80027870;
    }
    // 0x80028084: sw          $t4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r12;
    // 0x80028088: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x8002808C: lw          $a1, -0x6F10($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X6F10);
    // 0x80028090: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80028094: lbu         $v1, 0x559C($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X559C);
    // 0x80028098: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8002809C: lui         $v0, 0xE900
    ctx->r2 = S32(0XE900 << 16);
    // 0x800280A0: lui         $a3, 0x4
    ctx->r7 = S32(0X4 << 16);
    // 0x800280A4: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x800280A8: sw          $zero, -0x595C($at)
    MEM_W(-0X595C, ctx->r1) = 0;
    // 0x800280AC: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x800280B0: lui         $v0, 0xDF00
    ctx->r2 = S32(0XDF00 << 16);
    // 0x800280B4: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
    // 0x800280B8: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x800280BC: addiu       $v0, $v0, 0x6FB0
    ctx->r2 = ADD32(ctx->r2, 0X6FB0);
    // 0x800280C0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x800280C4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x800280C8: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x800280CC: sw          $zero, 0xC($a1)
    MEM_W(0XC, ctx->r5) = 0;
    // 0x800280D0: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x800280D4: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x800280D8: addiu       $v0, $a1, 0x8
    ctx->r2 = ADD32(ctx->r5, 0X8);
    // 0x800280DC: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x800280E0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800280E4: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x800280E8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800280EC: sw          $a1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r5;
    // 0x800280F0: subu        $a1, $a1, $v1
    ctx->r5 = SUB32(ctx->r5, ctx->r3);
    // 0x800280F4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800280F8: sw          $a1, 0x6FBC($at)
    MEM_W(0X6FBC, ctx->r1) = ctx->r5;
    // 0x800280FC: jal         0x80092C6C
    // 0x80028100: ori         $a3, $a3, 0x1
    ctx->r7 = ctx->r7 | 0X1;
    func_80092C6C_6E06C(rdram, ctx);
        goto after_11;
    // 0x80028100: ori         $a3, $a3, 0x1
    ctx->r7 = ctx->r7 | 0X1;
    after_11:
    // 0x80028104: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80028108: lbu         $v1, 0x559C($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X559C);
    // 0x8002810C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80028110: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80028114: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80028118: sb          $v0, 0x559C($at)
    MEM_B(0X559C, ctx->r1) = ctx->r2;
    // 0x8002811C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_80028120:
    // 0x80028120: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80028124: addiu       $a1, $a1, 0x47F0
    ctx->r5 = ADD32(ctx->r5, 0X47F0);
L_80028128:
    // 0x80028128: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8002812C: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
L_80028130:
    // 0x80028130: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x80028134: sw          $zero, 0x40($v1)
    MEM_W(0X40, ctx->r3) = 0;
    // 0x80028138: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8002813C: slti        $v0, $a0, 0x10
    ctx->r2 = SIGNED(ctx->r4) < 0X10 ? 1 : 0;
    // 0x80028140: bne         $v0, $zero, L_80028130
    if (ctx->r2 != 0) {
        // 0x80028144: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_80028130;
    }
    // 0x80028144: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80028148: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8002814C: blez        $a2, L_80028128
    if (SIGNED(ctx->r6) <= 0) {
        // 0x80028150: addiu       $a1, $a1, 0x188
        ctx->r5 = ADD32(ctx->r5, 0X188);
            goto L_80028128;
    }
    // 0x80028150: addiu       $a1, $a1, 0x188
    ctx->r5 = ADD32(ctx->r5, 0X188);
    // 0x80028154: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80028158: lbu         $v0, 0x559C($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X559C);
    // 0x8002815C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80028160: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80028164: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80028168: lw          $v0, 0x6FA0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6FA0);
    // 0x8002816C: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
    // 0x80028170: ori         $v1, $v1, 0x1000
    ctx->r3 = ctx->r3 | 0X1000;
    // 0x80028174: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80028178: sw          $v0, 0x6FA8($at)
    MEM_W(0X6FA8, ctx->r1) = ctx->r2;
    // 0x8002817C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80028180: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80028184: sw          $v0, 0x6FAC($at)
    MEM_W(0X6FAC, ctx->r1) = ctx->r2;
    // 0x80028188: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    // 0x8002818C: lw          $fp, 0x70($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X70);
    // 0x80028190: lw          $s7, 0x6C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X6C);
    // 0x80028194: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x80028198: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x8002819C: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x800281A0: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x800281A4: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x800281A8: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x800281AC: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x800281B0: ldc1        $f20, 0x78($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X78);
    // 0x800281B4: jr          $ra
    // 0x800281B8: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    TRACE_RETURN()
    return;
    // 0x800281B8: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_80051AF0_2CEF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80051AF0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80051AF4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80051AF8: sw          $zero, -0x11CC($at)
    MEM_W(-0X11CC, ctx->r1) = 0;
    // 0x80051AFC: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80051B00: sw          $v0, -0x41B0($at)
    MEM_W(-0X41B0, ctx->r1) = ctx->r2;
    // 0x80051B04: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80051B08: sb          $zero, -0x49EA($at)
    MEM_B(-0X49EA, ctx->r1) = 0;
    // 0x80051B0C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80051B10: sb          $zero, -0x49D6($at)
    MEM_B(-0X49D6, ctx->r1) = 0;
    // 0x80051B14: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80051B18: sb          $zero, -0x49C2($at)
    MEM_B(-0X49C2, ctx->r1) = 0;
    // 0x80051B1C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80051B20: sb          $zero, -0x49AE($at)
    MEM_B(-0X49AE, ctx->r1) = 0;
    // 0x80051B24: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80051B28: sw          $zero, -0x49A0($at)
    MEM_W(-0X49A0, ctx->r1) = 0;
    // 0x80051B2C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80051B30: sw          $zero, -0x499C($at)
    MEM_W(-0X499C, ctx->r1) = 0;
    // 0x80051B34: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80051B38: sw          $zero, -0x4994($at)
    MEM_W(-0X4994, ctx->r1) = 0;
    // 0x80051B3C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80051B40: jr          $ra
    // 0x80051B44: sw          $zero, -0x4998($at)
    MEM_W(-0X4998, ctx->r1) = 0;
    TRACE_RETURN()
    return;
    // 0x80051B44: sw          $zero, -0x4998($at)
    MEM_W(-0X4998, ctx->r1) = 0;
;}
RECOMP_FUNC void func_8004F5C4_2A9C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004F5C4: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8004F5C8: addiu       $v1, $v1, -0x2290
    ctx->r3 = ADD32(ctx->r3, -0X2290);
    // 0x8004F5CC: subu        $v1, $a0, $v1
    ctx->r3 = SUB32(ctx->r4, ctx->r3);
    // 0x8004F5D0: lui         $v0, 0xBA2E
    ctx->r2 = S32(0XBA2E << 16);
    // 0x8004F5D4: ori         $v0, $v0, 0x8BA3
    ctx->r2 = ctx->r2 | 0X8BA3;
    // 0x8004F5D8: multu       $v1, $v0
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004F5DC: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x8004F5E0: addiu       $a2, $a2, -0x139C
    ctx->r6 = ADD32(ctx->r6, -0X139C);
    // 0x8004F5E4: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x8004F5E8: mfhi        $v1
    ctx->r3 = hi;
    // 0x8004F5EC: srl         $a3, $v1, 6
    ctx->r7 = S32(U32(ctx->r3) >> 6);
    // 0x8004F5F0: srl         $v1, $v1, 11
    ctx->r3 = S32(U32(ctx->r3) >> 11);
    // 0x8004F5F4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8004F5F8: addu        $a2, $v1, $a2
    ctx->r6 = ADD32(ctx->r3, ctx->r6);
    // 0x8004F5FC: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x8004F600: andi        $a3, $a3, 0x1F
    ctx->r7 = ctx->r7 & 0X1F;
    // 0x8004F604: srlv        $v0, $v0, $a3
    ctx->r2 = S32(U32(ctx->r2) >> (ctx->r7 & 31));
    // 0x8004F608: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
    // 0x8004F60C: sw          $a1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r5;
    // 0x8004F610: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8004F614: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8004F618: lw          $v0, -0x3F64($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3F64);
    // 0x8004F61C: and         $a1, $a1, $v0
    ctx->r5 = ctx->r5 & ctx->r2;
    // 0x8004F620: sw          $a1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r5;
    // 0x8004F624: jr          $ra
    // 0x8004F628: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    TRACE_RETURN()
    return;
    // 0x8004F628: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
;}
RECOMP_FUNC void func_8004A360_25760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004A360: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8004A364: jr          $ra
    // 0x8004A368: sb          $zero, -0x396D($at)
    MEM_B(-0X396D, ctx->r1) = 0;
    TRACE_RETURN()
    return;
    // 0x8004A368: sb          $zero, -0x396D($at)
    MEM_B(-0X396D, ctx->r1) = 0;
;}
RECOMP_FUNC void func_80078910_53D10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80078910: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80078914: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80078918: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007891C: jal         0x800A3450
    // 0x80078920: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80078920: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80078924: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80078928: beq         $v0, $zero, L_8007893C
    if (ctx->r2 == 0) {
        // 0x8007892C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8007893C;
    }
    // 0x8007892C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80078930: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80078934: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80078938: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_8007893C:
    // 0x8007893C: jal         0x8004D5D4
    // 0x80078940: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x80078940: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    after_1:
    // 0x80078944: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80078948: addiu       $a0, $zero, 0x9B
    ctx->r4 = ADD32(0, 0X9B);
    // 0x8007894C: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    // 0x80078950: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80078954: jal         0x8002A33C
    // 0x80078958: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x80078958: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    after_2:
    // 0x8007895C: jal         0x80078CA8
    // 0x80078960: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80078CA8_540A8(rdram, ctx);
        goto after_3;
    // 0x80078960: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80078964: jal         0x80078D64
    // 0x80078968: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80078D64_54164(rdram, ctx);
        goto after_4;
    // 0x80078968: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8007896C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80078970: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80078974: jr          $ra
    // 0x80078978: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80078978: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800695D4_449D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800695D4: lui         $a3, 0x8888
    ctx->r7 = S32(0X8888 << 16);
    // 0x800695D8: ori         $a3, $a3, 0x8889
    ctx->r7 = ctx->r7 | 0X8889;
    // 0x800695DC: multu       $a0, $a3
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800695E0: mfhi        $v0
    ctx->r2 = hi;
    // 0x800695E4: lui         $v1, 0xAAAA
    ctx->r3 = S32(0XAAAA << 16);
    // 0x800695E8: ori         $v1, $v1, 0xAAAB
    ctx->r3 = ctx->r3 | 0XAAAB;
    // 0x800695EC: multu       $a0, $v1
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800695F0: srl         $a2, $v0, 4
    ctx->r6 = S32(U32(ctx->r2) >> 4);
    // 0x800695F4: sll         $v0, $a2, 4
    ctx->r2 = S32(ctx->r6 << 4);
    // 0x800695F8: subu        $v0, $v0, $a2
    ctx->r2 = SUB32(ctx->r2, ctx->r6);
    // 0x800695FC: mfhi        $t0
    ctx->r8 = hi;
    // 0x80069600: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80069604: subu        $v0, $a0, $v0
    ctx->r2 = SUB32(ctx->r4, ctx->r2);
    // 0x80069608: multu       $v0, $v1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8006960C: mfhi        $t3
    ctx->r11 = hi;
    // 0x80069610: nop

    // 0x80069614: nop

    // 0x80069618: multu       $a2, $a3
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8006961C: mfhi        $t1
    ctx->r9 = hi;
    // 0x80069620: lui         $a3, 0xCCCC
    ctx->r7 = S32(0XCCCC << 16);
    // 0x80069624: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x80069628: multu       $a2, $a3
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8006962C: srl         $v1, $t0, 1
    ctx->r3 = S32(U32(ctx->r8) >> 1);
    // 0x80069630: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80069634: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80069638: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x8006963C: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80069640: addu        $t0, $v0, $a0
    ctx->r8 = ADD32(ctx->r2, ctx->r4);
    // 0x80069644: srl         $v1, $t1, 5
    ctx->r3 = S32(U32(ctx->r9) >> 5);
    // 0x80069648: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x8006964C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80069650: mfhi        $t2
    ctx->r10 = hi;
    // 0x80069654: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80069658: subu        $v0, $a2, $v0
    ctx->r2 = SUB32(ctx->r6, ctx->r2);
    // 0x8006965C: multu       $v0, $a3
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80069660: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80069664: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x80069668: lbu         $v0, 0x2D98($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2D98);
    // 0x8006966C: srl         $t0, $t3, 1
    ctx->r8 = S32(U32(ctx->r11) >> 1);
    // 0x80069670: sb          $v0, 0x6($a1)
    MEM_B(0X6, ctx->r5) = ctx->r2;
    // 0x80069674: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80069678: addu        $a0, $a0, $t0
    ctx->r4 = ADD32(ctx->r4, ctx->r8);
    // 0x8006967C: lbu         $a0, 0x2D98($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X2D98);
    // 0x80069680: srl         $t0, $t2, 3
    ctx->r8 = S32(U32(ctx->r10) >> 3);
    // 0x80069684: sll         $v0, $t0, 2
    ctx->r2 = S32(ctx->r8 << 2);
    // 0x80069688: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x8006968C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80069690: mfhi        $t1
    ctx->r9 = hi;
    // 0x80069694: subu        $t0, $a2, $v0
    ctx->r8 = SUB32(ctx->r6, ctx->r2);
    // 0x80069698: sb          $a0, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r4;
    // 0x8006969C: multu       $v1, $a3
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800696A0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x800696A4: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x800696A8: lbu         $v0, 0x2D98($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2D98);
    // 0x800696AC: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
    // 0x800696B0: srl         $t0, $t1, 3
    ctx->r8 = S32(U32(ctx->r9) >> 3);
    // 0x800696B4: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x800696B8: addu        $a0, $a0, $t0
    ctx->r4 = ADD32(ctx->r4, ctx->r8);
    // 0x800696BC: lbu         $a0, 0x2D98($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X2D98);
    // 0x800696C0: sb          $a0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r4;
    // 0x800696C4: mfhi        $a3
    ctx->r7 = hi;
    // 0x800696C8: srl         $t0, $a3, 3
    ctx->r8 = S32(U32(ctx->r7) >> 3);
    // 0x800696CC: sll         $v0, $t0, 2
    ctx->r2 = S32(ctx->r8 << 2);
    // 0x800696D0: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x800696D4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x800696D8: subu        $t0, $v1, $v0
    ctx->r8 = SUB32(ctx->r3, ctx->r2);
    // 0x800696DC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x800696E0: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x800696E4: lbu         $v0, 0x2D98($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2D98);
    // 0x800696E8: jr          $ra
    // 0x800696EC: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x800696EC: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_80029884_4C84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80029884: lui         $v0, 0x8019
    ctx->r2 = S32(0X8019 << 16);
    // 0x80029888: lw          $v0, 0x3C30($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3C30);
    // 0x8002988C: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x80029890: addu        $t9, $a0, $zero
    ctx->r25 = ADD32(ctx->r4, 0);
    // 0x80029894: sw          $s3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r19;
    // 0x80029898: sw          $s2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r18;
    // 0x8002989C: sw          $s1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r17;
    // 0x800298A0: sw          $s0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r16;
    // 0x800298A4: lb          $a3, 0x8($t9)
    ctx->r7 = MEM_B(ctx->r25, 0X8);
    // 0x800298A8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800298AC: beq         $v0, $a0, L_800298F8
    if (ctx->r2 == ctx->r4) {
        // 0x800298B0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_800298F8;
    }
    // 0x800298B0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x800298B4: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x800298B8: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x800298BC: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x800298C0: sw          $v0, 0x6F30($at)
    MEM_W(0X6F30, ctx->r1) = ctx->r2;
    // 0x800298C4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x800298C8: lui         $at, 0x8019
    ctx->r1 = S32(0X8019 << 16);
    // 0x800298CC: sw          $a0, 0x3C30($at)
    MEM_W(0X3C30, ctx->r1) = ctx->r4;
    // 0x800298D0: lui         $at, 0x8014
    ctx->r1 = S32(0X8014 << 16);
    // 0x800298D4: sb          $v0, -0x6FC0($at)
    MEM_B(-0X6FC0, ctx->r1) = ctx->r2;
    // 0x800298D8: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x800298DC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800298E0: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x800298E4: lui         $v0, 0xDE00
    ctx->r2 = S32(0XDE00 << 16);
    // 0x800298E8: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x800298EC: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x800298F0: addiu       $v0, $v0, 0x50F0
    ctx->r2 = ADD32(ctx->r2, 0X50F0);
    // 0x800298F4: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
L_800298F8:
    // 0x800298F8: lui         $v0, 0x8014
    ctx->r2 = S32(0X8014 << 16);
    // 0x800298FC: lb          $v0, -0x6FC0($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X6FC0);
    // 0x80029900: beq         $v0, $a3, L_800299C4
    if (ctx->r2 == ctx->r7) {
        // 0x80029904: lui         $a1, 0xF500
        ctx->r5 = S32(0XF500 << 16);
            goto L_800299C4;
    }
    // 0x80029904: lui         $a1, 0xF500
    ctx->r5 = S32(0XF500 << 16);
    // 0x80029908: ori         $a1, $a1, 0x100
    ctx->r5 = ctx->r5 | 0X100;
    // 0x8002990C: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80029910: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x80029914: lui         $a2, 0x703
    ctx->r6 = S32(0X703 << 16);
    // 0x80029918: ori         $a2, $a2, 0xC000
    ctx->r6 = ctx->r6 | 0XC000;
    // 0x8002991C: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80029920: addiu       $a0, $a0, 0x4FF0
    ctx->r4 = ADD32(ctx->r4, 0X4FF0);
    // 0x80029924: lui         $at, 0x8014
    ctx->r1 = S32(0X8014 << 16);
    // 0x80029928: sb          $a3, -0x6FC0($at)
    MEM_B(-0X6FC0, ctx->r1) = ctx->r7;
    // 0x8002992C: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x80029930: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80029934: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80029938: lui         $v0, 0xFD10
    ctx->r2 = S32(0XFD10 << 16);
    // 0x8002993C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80029940: sll         $v0, $a3, 5
    ctx->r2 = S32(ctx->r7 << 5);
    // 0x80029944: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80029948: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x8002994C: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
    // 0x80029950: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80029954: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80029958: lui         $v0, 0xE800
    ctx->r2 = S32(0XE800 << 16);
    // 0x8002995C: sw          $v0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r2;
    // 0x80029960: addiu       $v0, $v1, 0x18
    ctx->r2 = ADD32(ctx->r3, 0X18);
    // 0x80029964: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80029968: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002996C: lui         $v0, 0x700
    ctx->r2 = S32(0X700 << 16);
    // 0x80029970: sw          $v0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r2;
    // 0x80029974: addiu       $v0, $v1, 0x20
    ctx->r2 = ADD32(ctx->r3, 0X20);
    // 0x80029978: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002997C: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80029980: lui         $v0, 0xE600
    ctx->r2 = S32(0XE600 << 16);
    // 0x80029984: sw          $v0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r2;
    // 0x80029988: addiu       $v0, $v1, 0x28
    ctx->r2 = ADD32(ctx->r3, 0X28);
    // 0x8002998C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80029990: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80029994: lui         $v0, 0xF000
    ctx->r2 = S32(0XF000 << 16);
    // 0x80029998: sw          $v0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r2;
    // 0x8002999C: addiu       $v0, $v1, 0x30
    ctx->r2 = ADD32(ctx->r3, 0X30);
    // 0x800299A0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800299A4: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x800299A8: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x800299AC: sw          $zero, 0xC($v1)
    MEM_W(0XC, ctx->r3) = 0;
    // 0x800299B0: sw          $a1, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r5;
    // 0x800299B4: sw          $zero, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = 0;
    // 0x800299B8: sw          $a2, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r6;
    // 0x800299BC: sw          $v0, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r2;
    // 0x800299C0: sw          $zero, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = 0;
L_800299C4:
    // 0x800299C4: lw          $t3, 0x4($t9)
    ctx->r11 = MEM_W(ctx->r25, 0X4);
    // 0x800299C8: lbu         $v0, 0x0($t3)
    ctx->r2 = MEM_BU(ctx->r11, 0X0);
    // 0x800299CC: lh          $t4, 0x0($t9)
    ctx->r12 = MEM_H(ctx->r25, 0X0);
    // 0x800299D0: lh          $t6, 0x2($t9)
    ctx->r14 = MEM_H(ctx->r25, 0X2);
    // 0x800299D4: beq         $v0, $zero, L_80029BEC
    if (ctx->r2 == 0) {
        // 0x800299D8: addiu       $s3, $zero, 0xA
        ctx->r19 = ADD32(0, 0XA);
            goto L_80029BEC;
    }
    // 0x800299D8: addiu       $s3, $zero, 0xA
    ctx->r19 = ADD32(0, 0XA);
    // 0x800299DC: addiu       $s2, $zero, 0x20
    ctx->r18 = ADD32(0, 0X20);
    // 0x800299E0: lui         $s0, 0xE700
    ctx->r16 = S32(0XE700 << 16);
    // 0x800299E4: lui         $s1, 0x800A
    ctx->r17 = S32(0X800A << 16);
    // 0x800299E8: addiu       $s1, $s1, 0x6F34
    ctx->r17 = ADD32(ctx->r17, 0X6F34);
    // 0x800299EC: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
L_800299F0:
    // 0x800299F0: bne         $v1, $s3, L_80029A08
    if (ctx->r3 != ctx->r19) {
        // 0x800299F4: nop
    
            goto L_80029A08;
    }
    // 0x800299F4: nop

    // 0x800299F8: lh          $t4, 0x0($t9)
    ctx->r12 = MEM_H(ctx->r25, 0X0);
    // 0x800299FC: addiu       $t6, $t6, 0x8
    ctx->r14 = ADD32(ctx->r14, 0X8);
    // 0x80029A00: j           L_80029BE0
    // 0x80029A04: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
        goto L_80029BE0;
    // 0x80029A04: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
L_80029A08:
    // 0x80029A08: beq         $v1, $s2, L_80029BD8
    if (ctx->r3 == ctx->r18) {
        // 0x80029A0C: addiu       $t7, $t4, 0x8
        ctx->r15 = ADD32(ctx->r12, 0X8);
            goto L_80029BD8;
    }
    // 0x80029A0C: addiu       $t7, $t4, 0x8
    ctx->r15 = ADD32(ctx->r12, 0X8);
    // 0x80029A10: addiu       $v0, $v0, -0x21
    ctx->r2 = ADD32(ctx->r2, -0X21);
    // 0x80029A14: sltiu       $v0, $v0, 0x3E
    ctx->r2 = ctx->r2 < 0X3E ? 1 : 0;
    // 0x80029A18: beq         $v0, $zero, L_80029A2C
    if (ctx->r2 == 0) {
        // 0x80029A1C: addiu       $t8, $t6, 0x8
        ctx->r24 = ADD32(ctx->r14, 0X8);
            goto L_80029A2C;
    }
    // 0x80029A1C: addiu       $t8, $t6, 0x8
    ctx->r24 = ADD32(ctx->r14, 0X8);
    // 0x80029A20: addiu       $t5, $v1, -0x21
    ctx->r13 = ADD32(ctx->r3, -0X21);
    // 0x80029A24: j           L_80029A34
    // 0x80029A28: addu        $t2, $zero, $zero
    ctx->r10 = ADD32(0, 0);
        goto L_80029A34;
    // 0x80029A28: addu        $t2, $zero, $zero
    ctx->r10 = ADD32(0, 0);
L_80029A2C:
    // 0x80029A2C: addiu       $t5, $v1, -0x5F
    ctx->r13 = ADD32(ctx->r3, -0X5F);
    // 0x80029A30: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
L_80029A34:
    // 0x80029A34: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80029A38: lw          $v0, 0x6F30($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6F30);
    // 0x80029A3C: beq         $t2, $v0, L_80029B38
    if (ctx->r10 == ctx->r2) {
        // 0x80029A40: lui         $a0, 0x708
        ctx->r4 = S32(0X708 << 16);
            goto L_80029B38;
    }
    // 0x80029A40: lui         $a0, 0x708
    ctx->r4 = S32(0X708 << 16);
    // 0x80029A44: ori         $a0, $a0, 0x200
    ctx->r4 = ctx->r4 | 0X200;
    // 0x80029A48: lui         $a2, 0x73F
    ctx->r6 = S32(0X73F << 16);
    // 0x80029A4C: ori         $a2, $a2, 0xF200
    ctx->r6 = ctx->r6 | 0XF200;
    // 0x80029A50: lui         $t1, 0xF540
    ctx->r9 = S32(0XF540 << 16);
    // 0x80029A54: ori         $t1, $t1, 0x800
    ctx->r9 = ctx->r9 | 0X800;
    // 0x80029A58: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80029A5C: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x80029A60: lui         $t0, 0x8
    ctx->r8 = S32(0X8 << 16);
    // 0x80029A64: ori         $t0, $t0, 0x200
    ctx->r8 = ctx->r8 | 0X200;
    // 0x80029A68: lui         $v0, 0xFD50
    ctx->r2 = S32(0XFD50 << 16);
    // 0x80029A6C: sw          $v0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r2;
    // 0x80029A70: sll         $v0, $t2, 2
    ctx->r2 = S32(ctx->r10 << 2);
    // 0x80029A74: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80029A78: sw          $s0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r16;
    // 0x80029A7C: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80029A80: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x80029A84: lui         $a1, 0xF
    ctx->r5 = S32(0XF << 16);
    // 0x80029A88: ori         $a1, $a1, 0xC0FC
    ctx->r5 = ctx->r5 | 0XC0FC;
    // 0x80029A8C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80029A90: sw          $t2, 0x6F30($at)
    MEM_W(0X6F30, ctx->r1) = ctx->r10;
    // 0x80029A94: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x80029A98: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80029A9C: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80029AA0: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
    // 0x80029AA4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80029AA8: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80029AAC: addiu       $v0, $v1, 0x18
    ctx->r2 = ADD32(ctx->r3, 0X18);
    // 0x80029AB0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80029AB4: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80029AB8: lui         $v0, 0xF550
    ctx->r2 = S32(0XF550 << 16);
    // 0x80029ABC: sw          $v0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r2;
    // 0x80029AC0: addiu       $v0, $v1, 0x20
    ctx->r2 = ADD32(ctx->r3, 0X20);
    // 0x80029AC4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80029AC8: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80029ACC: lui         $v0, 0xE600
    ctx->r2 = S32(0XE600 << 16);
    // 0x80029AD0: sw          $v0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r2;
    // 0x80029AD4: addiu       $v0, $v1, 0x28
    ctx->r2 = ADD32(ctx->r3, 0X28);
    // 0x80029AD8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80029ADC: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80029AE0: lui         $v0, 0xF300
    ctx->r2 = S32(0XF300 << 16);
    // 0x80029AE4: sw          $v0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r2;
    // 0x80029AE8: addiu       $v0, $v1, 0x30
    ctx->r2 = ADD32(ctx->r3, 0X30);
    // 0x80029AEC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80029AF0: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80029AF4: addiu       $v0, $v1, 0x38
    ctx->r2 = ADD32(ctx->r3, 0X38);
    // 0x80029AF8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80029AFC: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80029B00: addiu       $v0, $v1, 0x40
    ctx->r2 = ADD32(ctx->r3, 0X40);
    // 0x80029B04: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80029B08: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80029B0C: lui         $v0, 0xF200
    ctx->r2 = S32(0XF200 << 16);
    // 0x80029B10: sw          $a0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r4;
    // 0x80029B14: sw          $zero, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = 0;
    // 0x80029B18: sw          $a2, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r6;
    // 0x80029B1C: sw          $s0, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r16;
    // 0x80029B20: sw          $zero, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = 0;
    // 0x80029B24: sw          $t1, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r9;
    // 0x80029B28: sw          $t0, 0x34($v1)
    MEM_W(0X34, ctx->r3) = ctx->r8;
    // 0x80029B2C: sw          $v0, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->r2;
    // 0x80029B30: sw          $a1, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->r5;
    // 0x80029B34: sw          $a3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r7;
L_80029B38:
    // 0x80029B38: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x80029B3C: lw          $a1, -0x6F10($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X6F10);
    // 0x80029B40: lui         $a2, 0x400
    ctx->r6 = S32(0X400 << 16);
    // 0x80029B44: ori         $a2, $a2, 0x400
    ctx->r6 = ctx->r6 | 0X400;
    // 0x80029B48: sll         $v1, $t7, 2
    ctx->r3 = S32(ctx->r15 << 2);
    // 0x80029B4C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80029B50: sll         $v1, $v1, 12
    ctx->r3 = S32(ctx->r3 << 12);
    // 0x80029B54: lui         $a0, 0xE400
    ctx->r4 = S32(0XE400 << 16);
    // 0x80029B58: addiu       $v0, $a1, 0x8
    ctx->r2 = ADD32(ctx->r5, 0X8);
    // 0x80029B5C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80029B60: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80029B64: sll         $v0, $t8, 2
    ctx->r2 = S32(ctx->r24 << 2);
    // 0x80029B68: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80029B6C: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x80029B70: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80029B74: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x80029B78: sll         $v1, $t4, 2
    ctx->r3 = S32(ctx->r12 << 2);
    // 0x80029B7C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80029B80: sll         $v1, $v1, 12
    ctx->r3 = S32(ctx->r3 << 12);
    // 0x80029B84: sll         $v0, $t6, 2
    ctx->r2 = S32(ctx->r14 << 2);
    // 0x80029B88: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80029B8C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80029B90: addiu       $v0, $a1, 0x10
    ctx->r2 = ADD32(ctx->r5, 0X10);
    // 0x80029B94: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80029B98: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80029B9C: lui         $v0, 0xE100
    ctx->r2 = S32(0XE100 << 16);
    // 0x80029BA0: sw          $v1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r3;
    // 0x80029BA4: andi        $v1, $t5, 0x7
    ctx->r3 = ctx->r13 & 0X7;
    // 0x80029BA8: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
    // 0x80029BAC: andi        $v0, $t5, 0x38
    ctx->r2 = ctx->r13 & 0X38;
    // 0x80029BB0: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x80029BB4: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x80029BB8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80029BBC: addiu       $v0, $a1, 0x18
    ctx->r2 = ADD32(ctx->r5, 0X18);
    // 0x80029BC0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80029BC4: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80029BC8: lui         $v0, 0xF100
    ctx->r2 = S32(0XF100 << 16);
    // 0x80029BCC: sw          $v1, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r3;
    // 0x80029BD0: sw          $v0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r2;
    // 0x80029BD4: sw          $a2, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->r6;
L_80029BD8:
    // 0x80029BD8: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    // 0x80029BDC: addiu       $t4, $t4, 0x8
    ctx->r12 = ADD32(ctx->r12, 0X8);
L_80029BE0:
    // 0x80029BE0: lbu         $v0, 0x0($t3)
    ctx->r2 = MEM_BU(ctx->r11, 0X0);
    // 0x80029BE4: bne         $v0, $zero, L_800299F0
    if (ctx->r2 != 0) {
        // 0x80029BE8: andi        $v1, $v0, 0xFF
        ctx->r3 = ctx->r2 & 0XFF;
            goto L_800299F0;
    }
    // 0x80029BE8: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
L_80029BEC:
    // 0x80029BEC: lw          $s3, 0xC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XC);
    // 0x80029BF0: lw          $s2, 0x8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X8);
    // 0x80029BF4: lw          $s1, 0x4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4);
    // 0x80029BF8: lw          $s0, 0x0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X0);
    // 0x80029BFC: jr          $ra
    // 0x80029C00: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    TRACE_RETURN()
    return;
    // 0x80029C00: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void alResampleParam(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80097E9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80097EA0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80097EA4: addiu       $a3, $a1, -0x1
    ctx->r7 = ADD32(ctx->r5, -0X1);
    // 0x80097EA8: sltiu       $v0, $a3, 0x9
    ctx->r2 = ctx->r7 < 0X9 ? 1 : 0;
    // 0x80097EAC: beq         $v0, $zero, L_80097F34
    if (ctx->r2 == 0) {
        // 0x80097EB0: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_80097F34;
    }
    // 0x80097EB0: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x80097EB4: sll         $v0, $a3, 2
    ctx->r2 = S32(ctx->r7 << 2);
    // 0x80097EB8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80097EBC: addu        $at, $at, $v0
    gpr jr_addend_80097EC4 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80097EC0: lw          $v0, 0x30F8($at)
    ctx->r2 = ADD32(ctx->r1, 0X30F8);
    // 0x80097EC4: jr          $v0
    // 0x80097EC8: nop

    switch (jr_addend_80097EC4 >> 2) {
        case 0: goto L_80097ECC; break;
        case 1: goto L_80097F34; break;
        case 2: goto L_80097F34; break;
        case 3: goto L_80097ED4; break;
        case 4: goto L_80097F34; break;
        case 5: goto L_80097F34; break;
        case 6: goto L_80097F20; break;
        case 7: goto L_80097F28; break;
        case 8: goto L_80097F00; break;
        default: switch_error(__func__, 0x80097EC4, 0x800D30F8);
    }
    // 0x80097EC8: nop

L_80097ECC:
    // 0x80097ECC: j           L_80097F4C
    // 0x80097ED0: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
        goto L_80097F4C;
    // 0x80097ED0: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
L_80097ED4:
    // 0x80097ED4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80097ED8: sw          $zero, 0x20($v1)
    MEM_W(0X20, ctx->r3) = 0;
    // 0x80097EDC: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
    // 0x80097EE0: sw          $zero, 0x30($v1)
    MEM_W(0X30, ctx->r3) = 0;
    // 0x80097EE4: sw          $zero, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = 0;
    // 0x80097EE8: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x80097EEC: beq         $a0, $zero, L_80097F4C
    if (ctx->r4 == 0) {
        // 0x80097EF0: addiu       $a1, $zero, 0x4
        ctx->r5 = ADD32(0, 0X4);
            goto L_80097F4C;
    }
    // 0x80097EF0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80097EF4: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x80097EF8: j           L_80097F44
    // 0x80097EFC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
        goto L_80097F44;
    // 0x80097EFC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_80097F00:
    // 0x80097F00: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80097F04: sw          $v0, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r2;
    // 0x80097F08: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x80097F0C: beq         $a0, $zero, L_80097F4C
    if (ctx->r4 == 0) {
        // 0x80097F10: addiu       $a1, $zero, 0x9
        ctx->r5 = ADD32(0, 0X9);
            goto L_80097F4C;
    }
    // 0x80097F10: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x80097F14: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x80097F18: j           L_80097F44
    // 0x80097F1C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
        goto L_80097F44;
    // 0x80097F1C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_80097F20:
    // 0x80097F20: j           L_80097F4C
    // 0x80097F24: sw          $a2, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r6;
        goto L_80097F4C;
    // 0x80097F24: sw          $a2, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r6;
L_80097F28:
    // 0x80097F28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80097F2C: j           L_80097F4C
    // 0x80097F30: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
        goto L_80097F4C;
    // 0x80097F30: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
L_80097F34:
    // 0x80097F34: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x80097F38: beq         $a0, $zero, L_80097F4C
    if (ctx->r4 == 0) {
        // 0x80097F3C: nop
    
            goto L_80097F4C;
    }
    // 0x80097F3C: nop

    // 0x80097F40: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
L_80097F44:
    // 0x80097F44: jalr        $v0
    // 0x80097F48: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80097F48: nop

    after_0:
L_80097F4C:
    // 0x80097F4C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80097F50: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80097F54: jr          $ra
    // 0x80097F58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80097F58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8002A290_5690(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002A290: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x8002A294: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x8002A298: addiu       $v0, $v0, 0x6F40
    ctx->r2 = ADD32(ctx->r2, 0X6F40);
    // 0x8002A29C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8002A2A0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8002A2A4: jr          $ra
    // 0x8002A2A8: sw          $a0, -0x3F6C($at)
    MEM_W(-0X3F6C, ctx->r1) = ctx->r4;
    TRACE_RETURN()
    return;
    // 0x8002A2A8: sw          $a0, -0x3F6C($at)
    MEM_W(-0X3F6C, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_80062DE0_3E1E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80062DE0: lui         $a1, 0xF7FF
    ctx->r5 = S32(0XF7FF << 16);
    // 0x80062DE4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80062DE8: lw          $v1, 0x6C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X6C);
    // 0x80062DEC: ori         $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 | 0XFFFF;
    // 0x80062DF0: and         $v0, $v0, $a1
    ctx->r2 = ctx->r2 & ctx->r5;
    // 0x80062DF4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80062DF8: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x80062DFC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80062E00: jr          $ra
    // 0x80062E04: sw          $v1, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x80062E04: sw          $v1, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r3;
;}
RECOMP_FUNC void func_80065438_40838(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80065438: lhu         $v1, 0xBE($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0XBE);
    // 0x8006543C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80065440: lbu         $a1, 0x6B39($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X6B39);
    // 0x80065444: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80065448: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8006544C: sh          $v0, 0xBE($a0)
    MEM_H(0XBE, ctx->r4) = ctx->r2;
    // 0x80065450: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x80065454: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80065458: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x8006545C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80065460: sw          $v0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r2;
    // 0x80065464: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80065468: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8006546C: lw          $v0, 0x28C4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X28C4);
    // 0x80065470: jr          $ra
    // 0x80065474: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80065474: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_8008D8EC_68CEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008D8EC: jr          $ra
    // 0x8008D8F0: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    TRACE_RETURN()
    return;
    // 0x8008D8F0: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
;}
RECOMP_FUNC void func_8004E428_29828(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004E428: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8004E42C: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x8004E430: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8004E434: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x8004E438: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8004E43C: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    // 0x8004E440: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8004E444: jal         0x8004E458
    // 0x8004E448: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8004E458_29858(rdram, ctx);
        goto after_0;
    // 0x8004E448: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x8004E44C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8004E450: jr          $ra
    // 0x8004E454: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8004E454: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8003B994_16D94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003B994: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8003B998: lhu         $v0, -0x2380($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X2380);
    // 0x8003B99C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8003B9A0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8003B9A4: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8003B9A8: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8003B9AC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8003B9B0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8003B9B4: blez        $v0, L_8003BA34
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8003B9B8: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_8003BA34;
    }
    // 0x8003B9B8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8003B9BC: lui         $s3, 0x2FF
    ctx->r19 = S32(0X2FF << 16);
    // 0x8003B9C0: ori         $s3, $s3, 0xFFFF
    ctx->r19 = ctx->r19 | 0XFFFF;
    // 0x8003B9C4: lui         $s2, 0x8021
    ctx->r18 = S32(0X8021 << 16);
    // 0x8003B9C8: addiu       $s2, $s2, 0x480
    ctx->r18 = ADD32(ctx->r18, 0X480);
L_8003B9CC:
    // 0x8003B9CC: lw          $s0, 0x0($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X0);
    // 0x8003B9D0: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8003B9D4: srl         $v0, $v0, 5
    ctx->r2 = S32(U32(ctx->r2) >> 5);
    // 0x8003B9D8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8003B9DC: beq         $v0, $zero, L_8003B9FC
    if (ctx->r2 == 0) {
        // 0x8003B9E0: nop
    
            goto L_8003B9FC;
    }
    // 0x8003B9E0: nop

    // 0x8003B9E4: jal         0x800859B0
    // 0x8003B9E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800859B0_60DB0(rdram, ctx);
        goto after_0;
    // 0x8003B9E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8003B9EC: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x8003B9F0: and         $v0, $v0, $s3
    ctx->r2 = ctx->r2 & ctx->r19;
    // 0x8003B9F4: j           L_8003BA1C
    // 0x8003B9F8: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
        goto L_8003BA1C;
    // 0x8003B9F8: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
L_8003B9FC:
    // 0x8003B9FC: jal         0x80086110
    // 0x8003BA00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80086110_61510(rdram, ctx);
        goto after_1;
    // 0x8003BA00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8003BA04: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x8003BA08: lw          $v1, 0x18($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X18);
    // 0x8003BA0C: and         $v0, $v0, $s3
    ctx->r2 = ctx->r2 & ctx->r19;
    // 0x8003BA10: and         $v1, $v1, $s3
    ctx->r3 = ctx->r3 & ctx->r19;
    // 0x8003BA14: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x8003BA18: sw          $v1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r3;
L_8003BA1C:
    // 0x8003BA1C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8003BA20: lhu         $v0, -0x2380($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X2380);
    // 0x8003BA24: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8003BA28: slt         $v0, $s1, $v0
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8003BA2C: bne         $v0, $zero, L_8003B9CC
    if (ctx->r2 != 0) {
        // 0x8003BA30: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_8003B9CC;
    }
    // 0x8003BA30: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
L_8003BA34:
    // 0x8003BA34: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8003BA38: sh          $zero, -0x2380($at)
    MEM_H(-0X2380, ctx->r1) = 0;
    // 0x8003BA3C: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8003BA40: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8003BA44: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8003BA48: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8003BA4C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8003BA50: jr          $ra
    // 0x8003BA54: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8003BA54: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80082F9C_5E39C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80082F9C: jr          $ra
    // 0x80082FA0: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    TRACE_RETURN()
    return;
    // 0x80082FA0: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
;}
RECOMP_FUNC void func_8008CFAC_683AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008CFAC: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8008CFB0: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8008CFB4: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8008CFB8: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x8008CFBC: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x8008CFC0: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x8008CFC4: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x8008CFC8: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x8008CFCC: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8008CFD0: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8008CFD4: lw          $v0, 0x28($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X28);
    // 0x8008CFD8: lw          $s4, 0x4($s2)
    ctx->r20 = MEM_W(ctx->r18, 0X4);
    // 0x8008CFDC: bne         $v0, $zero, L_8008D0B4
    if (ctx->r2 != 0) {
        // 0x8008CFE0: addu        $a2, $s2, $zero
        ctx->r6 = ADD32(ctx->r18, 0);
            goto L_8008D0B4;
    }
    // 0x8008CFE0: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x8008CFE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8008CFE8: sw          $v0, 0x28($s2)
    MEM_W(0X28, ctx->r18) = ctx->r2;
    // 0x8008CFEC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8008CFF0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8008CFF4: addiu       $v1, $s2, 0xC
    ctx->r3 = ADD32(ctx->r18, 0XC);
L_8008CFF8:
    // 0x8008CFF8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8008CFFC: beq         $v0, $zero, L_8008D00C
    if (ctx->r2 == 0) {
        // 0x8008D000: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_8008D00C;
    }
    // 0x8008D000: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8008D004: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8008D008: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_8008D00C:
    // 0x8008D00C: slti        $v0, $a0, 0x7
    ctx->r2 = SIGNED(ctx->r4) < 0X7 ? 1 : 0;
    // 0x8008D010: bne         $v0, $zero, L_8008CFF8
    if (ctx->r2 != 0) {
        // 0x8008D014: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_8008CFF8;
    }
    // 0x8008D014: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8008D018: lw          $v0, 0xC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XC);
    // 0x8008D01C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8008D020: blez        $s4, L_8008D050
    if (SIGNED(ctx->r20) <= 0) {
        // 0x8008D024: addu        $a1, $a2, $zero
        ctx->r5 = ADD32(ctx->r6, 0);
            goto L_8008D050;
    }
    // 0x8008D024: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x8008D028: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_8008D02C:
    // 0x8008D02C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8008D030: beq         $v0, $zero, L_8008D040
    if (ctx->r2 == 0) {
        // 0x8008D034: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_8008D040;
    }
    // 0x8008D034: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8008D038: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8008D03C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_8008D040:
    // 0x8008D040: slt         $v0, $a0, $s4
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x8008D044: bne         $v0, $zero, L_8008D02C
    if (ctx->r2 != 0) {
        // 0x8008D048: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_8008D02C;
    }
    // 0x8008D048: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8008D04C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_8008D050:
    // 0x8008D050: lw          $v0, 0x10($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X10);
    // 0x8008D054: blez        $s4, L_8008D080
    if (SIGNED(ctx->r20) <= 0) {
        // 0x8008D058: addu        $a1, $a2, $zero
        ctx->r5 = ADD32(ctx->r6, 0);
            goto L_8008D080;
    }
    // 0x8008D058: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x8008D05C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_8008D060:
    // 0x8008D060: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8008D064: beq         $v0, $zero, L_8008D074
    if (ctx->r2 == 0) {
        // 0x8008D068: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_8008D074;
    }
    // 0x8008D068: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8008D06C: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8008D070: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_8008D074:
    // 0x8008D074: slt         $v0, $a0, $s4
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x8008D078: bne         $v0, $zero, L_8008D060
    if (ctx->r2 != 0) {
        // 0x8008D07C: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_8008D060;
    }
    // 0x8008D07C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_8008D080:
    // 0x8008D080: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8008D084: lw          $v0, 0x14($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X14);
    // 0x8008D088: blez        $s4, L_8008D0B4
    if (SIGNED(ctx->r20) <= 0) {
        // 0x8008D08C: addu        $a1, $a2, $zero
        ctx->r5 = ADD32(ctx->r6, 0);
            goto L_8008D0B4;
    }
    // 0x8008D08C: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x8008D090: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_8008D094:
    // 0x8008D094: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8008D098: beq         $v0, $zero, L_8008D0A8
    if (ctx->r2 == 0) {
        // 0x8008D09C: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_8008D0A8;
    }
    // 0x8008D09C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8008D0A0: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8008D0A4: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_8008D0A8:
    // 0x8008D0A8: slt         $v0, $a0, $s4
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x8008D0AC: bne         $v0, $zero, L_8008D094
    if (ctx->r2 != 0) {
        // 0x8008D0B0: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_8008D094;
    }
    // 0x8008D0B0: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_8008D0B4:
    // 0x8008D0B4: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x8008D0B8: lw          $v1, 0x4FA0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4FA0);
    // 0x8008D0BC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8008D0C0: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x8008D0C4: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8008D0C8: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008D0CC: sw          $v0, 0x4FA0($at)
    MEM_W(0X4FA0, ctx->r1) = ctx->r2;
    // 0x8008D0D0: jal         0x8008CB54
    // 0x8008D0D4: addu        $s5, $v1, $zero
    ctx->r21 = ADD32(ctx->r3, 0);
    func_8008CB54_67F54(rdram, ctx);
        goto after_0;
    // 0x8008D0D4: addu        $s5, $v1, $zero
    ctx->r21 = ADD32(ctx->r3, 0);
    after_0:
    // 0x8008D0D8: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x8008D0DC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8008D0E0: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8008D0E4: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x8008D0E8: lw          $a0, 0x4F8C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4F8C);
    // 0x8008D0EC: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8008D0F0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8008D0F4: addu        $s0, $a0, $v1
    ctx->r16 = ADD32(ctx->r4, ctx->r3);
    // 0x8008D0F8: jal         0x8008CA18
    // 0x8008D0FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8008CA18_67E18(rdram, ctx);
        goto after_1;
    // 0x8008D0FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8008D100: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x8008D104: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8008D108: sb          $v0, 0xD2($s0)
    MEM_B(0XD2, ctx->r16) = ctx->r2;
    // 0x8008D10C: sw          $s2, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->r18;
    // 0x8008D110: ori         $v1, $v1, 0x3
    ctx->r3 = ctx->r3 | 0X3;
    // 0x8008D114: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x8008D118: lw          $v0, 0x24($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X24);
    // 0x8008D11C: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x8008D120: sw          $s5, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r21;
    // 0x8008D124: sw          $v0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r2;
    // 0x8008D128: blez        $s4, L_8008D1E4
    if (SIGNED(ctx->r20) <= 0) {
        // 0x8008D12C: sw          $v0, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r2;
            goto L_8008D1E4;
    }
    // 0x8008D12C: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x8008D130: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
L_8008D134:
    // 0x8008D134: lw          $v0, 0xC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XC);
    // 0x8008D138: sll         $s1, $s3, 2
    ctx->r17 = S32(ctx->r19 << 2);
    // 0x8008D13C: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x8008D140: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8008D144: beql        $v0, $zero, L_8008D1D8
    if (ctx->r2 == 0) {
        // 0x8008D148: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_8008D1D8;
    }
    goto skip_0;
    // 0x8008D148: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_0:
    // 0x8008D14C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8008D150: jal         0x8008CB54
    // 0x8008D154: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_8008CB54_67F54(rdram, ctx);
        goto after_2;
    // 0x8008D154: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_2:
    // 0x8008D158: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x8008D15C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8008D160: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8008D164: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x8008D168: lw          $a0, 0x4F8C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4F8C);
    // 0x8008D16C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8008D170: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8008D174: addu        $s0, $a0, $v1
    ctx->r16 = ADD32(ctx->r4, ctx->r3);
    // 0x8008D178: jal         0x8008CA18
    // 0x8008D17C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8008CA18_67E18(rdram, ctx);
        goto after_3;
    // 0x8008D17C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8008D180: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8008D184: sb          $s6, 0xD2($s0)
    MEM_B(0XD2, ctx->r16) = ctx->r22;
    // 0x8008D188: sw          $s2, 0x74($s0)
    MEM_W(0X74, ctx->r16) = ctx->r18;
    // 0x8008D18C: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8008D190: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x8008D194: lw          $v0, 0x10($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X10);
    // 0x8008D198: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x8008D19C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8008D1A0: sw          $v0, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r2;
    // 0x8008D1A4: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
    // 0x8008D1A8: lw          $v0, 0x14($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X14);
    // 0x8008D1AC: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x8008D1B0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8008D1B4: sw          $v0, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r2;
    // 0x8008D1B8: sw          $v0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r2;
    // 0x8008D1BC: lw          $v0, 0xC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XC);
    // 0x8008D1C0: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x8008D1C4: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8008D1C8: sw          $s5, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r21;
    // 0x8008D1CC: sw          $v0, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r2;
    // 0x8008D1D0: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x8008D1D4: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_8008D1D8:
    // 0x8008D1D8: slt         $v0, $s3, $s4
    ctx->r2 = SIGNED(ctx->r19) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x8008D1DC: bne         $v0, $zero, L_8008D134
    if (ctx->r2 != 0) {
        // 0x8008D1E0: nop
    
            goto L_8008D134;
    }
    // 0x8008D1E0: nop

L_8008D1E4:
    // 0x8008D1E4: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008D1E8: sw          $zero, 0x4FA8($at)
    MEM_W(0X4FA8, ctx->r1) = 0;
    // 0x8008D1EC: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
    // 0x8008D1F0: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x8008D1F4: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x8008D1F8: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x8008D1FC: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x8008D200: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x8008D204: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x8008D208: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8008D20C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8008D210: jr          $ra
    // 0x8008D214: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x8008D214: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80062510_3D910(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80062510: lhu         $v0, 0xC0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XC0);
    // 0x80062514: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80062518: sh          $v0, 0xC0($a0)
    MEM_H(0XC0, ctx->r4) = ctx->r2;
    // 0x8006251C: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80062520: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80062524: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80062528: lw          $v0, 0x4C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4C);
    // 0x8006252C: sw          $v0, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r2;
    // 0x80062530: jr          $ra
    // 0x80062534: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x80062534: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_800805F8_5B9F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800805F8: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x800805FC: sw          $s2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r18;
    // 0x80080600: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80080604: sw          $ra, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r31;
    // 0x80080608: sw          $fp, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r30;
    // 0x8008060C: sw          $s7, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r23;
    // 0x80080610: sw          $s6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r22;
    // 0x80080614: sw          $s5, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r21;
    // 0x80080618: sw          $s4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r20;
    // 0x8008061C: sw          $s3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r19;
    // 0x80080620: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    // 0x80080624: sw          $s0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r16;
    // 0x80080628: lbu         $v0, 0xD($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XD);
    // 0x8008062C: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x80080630: sb          $zero, 0x4F($sp)
    MEM_B(0X4F, ctx->r29) = 0;
    // 0x80080634: lbu         $s5, 0x10($s2)
    ctx->r21 = MEM_BU(ctx->r18, 0X10);
    // 0x80080638: beq         $v0, $zero, L_8008066C
    if (ctx->r2 == 0) {
        // 0x8008063C: addiu       $s0, $zero, 0xFF
        ctx->r16 = ADD32(0, 0XFF);
            goto L_8008066C;
    }
    // 0x8008063C: addiu       $s0, $zero, 0xFF
    ctx->r16 = ADD32(0, 0XFF);
    // 0x80080640: lbu         $s1, 0xF($s2)
    ctx->r17 = MEM_BU(ctx->r18, 0XF);
    // 0x80080644: lbu         $v0, 0xC($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XC);
    // 0x80080648: lw          $v1, 0x14($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X14);
    // 0x8008064C: lbu         $s0, 0xE($s2)
    ctx->r16 = MEM_BU(ctx->r18, 0XE);
    // 0x80080650: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80080654: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80080658: lw          $v1, 0x70($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X70);
    // 0x8008065C: sltiu       $v0, $s5, 0x4
    ctx->r2 = ctx->r21 < 0X4 ? 1 : 0;
    // 0x80080660: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80080664: and         $s5, $s5, $v0
    ctx->r21 = ctx->r21 & ctx->r2;
    // 0x80080668: sw          $v1, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r3;
L_8008066C:
    // 0x8008066C: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80080670: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x80080674: lui         $v0, 0xDA38
    ctx->r2 = S32(0XDA38 << 16);
    // 0x80080678: ori         $v0, $v0, 0x3
    ctx->r2 = ctx->r2 | 0X3;
    // 0x8008067C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x80080680: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80080684: addiu       $v0, $s2, 0x18
    ctx->r2 = ADD32(ctx->r18, 0X18);
    // 0x80080688: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x8008068C: lhu         $a1, 0x0($s2)
    ctx->r5 = MEM_HU(ctx->r18, 0X0);
    // 0x80080690: lw          $s6, 0x14($s2)
    ctx->r22 = MEM_W(ctx->r18, 0X14);
    // 0x80080694: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80080698: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x8008069C: lui         $at, 0x8019
    ctx->r1 = S32(0X8019 << 16);
    // 0x800806A0: sw          $v0, 0x3C30($at)
    MEM_W(0X3C30, ctx->r1) = ctx->r2;
    // 0x800806A4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800806A8: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x800806AC: jal         0x80082FA4
    // 0x800806B0: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    func_80082FA4_5E3A4(rdram, ctx);
        goto after_0;
    // 0x800806B0: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    after_0:
    // 0x800806B4: bne         $v0, $zero, L_8008125C
    if (ctx->r2 != 0) {
        // 0x800806B8: nop
    
            goto L_8008125C;
    }
    // 0x800806B8: nop

    // 0x800806BC: lw          $s3, 0x8($s6)
    ctx->r19 = MEM_W(ctx->r22, 0X8);
    // 0x800806C0: lw          $v0, 0x1C($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X1C);
    // 0x800806C4: addu        $a0, $s3, $v0
    ctx->r4 = ADD32(ctx->r19, ctx->r2);
    // 0x800806C8: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x800806CC: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x800806D0: addiu       $v0, $v0, 0x5
    ctx->r2 = ADD32(ctx->r2, 0X5);
    // 0x800806D4: addu        $a1, $a0, $v0
    ctx->r5 = ADD32(ctx->r4, ctx->r2);
    // 0x800806D8: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x800806DC: addu        $s4, $s3, $zero
    ctx->r20 = ADD32(ctx->r19, 0);
    // 0x800806E0: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x800806E4: bne         $v0, $zero, L_800806F0
    if (ctx->r2 != 0) {
        // 0x800806E8: addiu       $a2, $a0, 0x5
        ctx->r6 = ADD32(ctx->r4, 0X5);
            goto L_800806F0;
    }
    // 0x800806E8: addiu       $a2, $a0, 0x5
    ctx->r6 = ADD32(ctx->r4, 0X5);
    // 0x800806EC: sh          $zero, 0x0($s2)
    MEM_H(0X0, ctx->r18) = 0;
L_800806F0:
    // 0x800806F0: lhu         $v1, 0x0($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X0);
    // 0x800806F4: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x800806F8: sb          $s0, 0x47($sp)
    MEM_B(0X47, ctx->r29) = ctx->r16;
    // 0x800806FC: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80080700: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80080704: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80080708: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x8008070C: lbu         $t8, 0x2($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X2);
    // 0x80080710: lbu         $s7, 0x0($v0)
    ctx->r23 = MEM_BU(ctx->r2, 0X0);
    // 0x80080714: sb          $t8, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r24;
    // 0x80080718: lbu         $t8, 0x4($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X4);
    // 0x8008071C: lbu         $fp, 0x3($v0)
    ctx->r30 = MEM_BU(ctx->r2, 0X3);
    // 0x80080720: sb          $t8, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r24;
    // 0x80080724: lbu         $t8, 0x5($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X5);
    // 0x80080728: sb          $t8, 0x37($sp)
    MEM_B(0X37, ctx->r29) = ctx->r24;
    // 0x8008072C: lbu         $t8, 0x6($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X6);
    // 0x80080730: lbu         $v1, 0x4($s6)
    ctx->r3 = MEM_BU(ctx->r22, 0X4);
    // 0x80080734: sb          $t8, 0x3F($sp)
    MEM_B(0X3F, ctx->r29) = ctx->r24;
    // 0x80080738: lbu         $v0, 0x1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1);
    // 0x8008073C: addu        $v1, $a2, $v1
    ctx->r3 = ADD32(ctx->r6, ctx->r3);
    // 0x80080740: lbu         $v1, 0x0($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X0);
    // 0x80080744: or          $v0, $v0, $s1
    ctx->r2 = ctx->r2 | ctx->r17;
    // 0x80080748: sb          $v0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r2;
    // 0x8008074C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80080750: bne         $v1, $v0, L_8008075C
    if (ctx->r3 != ctx->r2) {
        // 0x80080754: nop
    
            goto L_8008075C;
    }
    // 0x80080754: nop

    // 0x80080758: lbu         $v1, 0x5($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X5);
L_8008075C:
    // 0x8008075C: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x80080760: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80080764: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x80080768: lui         $s0, 0x801B
    ctx->r16 = S32(0X801B << 16);
    // 0x8008076C: lw          $s0, -0x6F10($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X6F10);
    // 0x80080770: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80080774: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80080778: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8008077C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80080780: lui         $v0, 0xDB06
    ctx->r2 = S32(0XDB06 << 16);
    // 0x80080784: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80080788: lw          $a0, 0x4($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X4);
    // 0x8008078C: addiu       $v0, $s0, 0x8
    ctx->r2 = ADD32(ctx->r16, 0X8);
    // 0x80080790: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80080794: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80080798: jal         0x80099BB0
    // 0x8008079C: addu        $a0, $s4, $a0
    ctx->r4 = ADD32(ctx->r20, ctx->r4);
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_1;
    // 0x8008079C: addu        $a0, $s4, $a0
    ctx->r4 = ADD32(ctx->r20, ctx->r4);
    after_1:
    // 0x800807A0: lui         $s1, 0x801B
    ctx->r17 = S32(0X801B << 16);
    // 0x800807A4: lw          $s1, -0x6F10($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X6F10);
    // 0x800807A8: lui         $v1, 0xDB06
    ctx->r3 = S32(0XDB06 << 16);
    // 0x800807AC: ori         $v1, $v1, 0x8
    ctx->r3 = ctx->r3 | 0X8;
    // 0x800807B0: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x800807B4: sw          $v1, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r3;
    // 0x800807B8: lw          $a0, 0xC($s3)
    ctx->r4 = MEM_W(ctx->r19, 0XC);
    // 0x800807BC: addiu       $v0, $s1, 0x8
    ctx->r2 = ADD32(ctx->r17, 0X8);
    // 0x800807C0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800807C4: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x800807C8: jal         0x80099BB0
    // 0x800807CC: addu        $a0, $s4, $a0
    ctx->r4 = ADD32(ctx->r20, ctx->r4);
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_2;
    // 0x800807CC: addu        $a0, $s4, $a0
    ctx->r4 = ADD32(ctx->r20, ctx->r4);
    after_2:
    // 0x800807D0: lui         $s0, 0x801B
    ctx->r16 = S32(0X801B << 16);
    // 0x800807D4: lw          $s0, -0x6F10($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X6F10);
    // 0x800807D8: lui         $v1, 0xDB06
    ctx->r3 = S32(0XDB06 << 16);
    // 0x800807DC: ori         $v1, $v1, 0x4
    ctx->r3 = ctx->r3 | 0X4;
    // 0x800807E0: sw          $v0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r2;
    // 0x800807E4: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x800807E8: lw          $a0, 0x14($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X14);
    // 0x800807EC: addiu       $v0, $s0, 0x8
    ctx->r2 = ADD32(ctx->r16, 0X8);
    // 0x800807F0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800807F4: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x800807F8: jal         0x80099BB0
    // 0x800807FC: addu        $a0, $s4, $a0
    ctx->r4 = ADD32(ctx->r20, ctx->r4);
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_3;
    // 0x800807FC: addu        $a0, $s4, $a0
    ctx->r4 = ADD32(ctx->r20, ctx->r4);
    after_3:
    // 0x80080800: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x80080804: lbu         $v1, 0x2($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X2);
    // 0x80080808: beq         $v1, $zero, L_80080820
    if (ctx->r3 == 0) {
        // 0x8008080C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80080820;
    }
    // 0x8008080C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80080810: beq         $v1, $v0, L_800808A0
    if (ctx->r3 == ctx->r2) {
        // 0x80080814: lui         $v0, 0xDB06
        ctx->r2 = S32(0XDB06 << 16);
            goto L_800808A0;
    }
    // 0x80080814: lui         $v0, 0xDB06
    ctx->r2 = S32(0XDB06 << 16);
    // 0x80080818: j           L_80080960
    // 0x8008081C: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
        goto L_80080960;
    // 0x8008081C: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
L_80080820:
    // 0x80080820: lui         $s0, 0x801B
    ctx->r16 = S32(0X801B << 16);
    // 0x80080824: lw          $s0, -0x6F10($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X6F10);
    // 0x80080828: lui         $v0, 0xDB06
    ctx->r2 = S32(0XDB06 << 16);
    // 0x8008082C: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x80080830: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80080834: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x80080838: addiu       $v0, $s0, 0x8
    ctx->r2 = ADD32(ctx->r16, 0X8);
    // 0x8008083C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80080840: jal         0x80099BB0
    // 0x80080844: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_4;
    // 0x80080844: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    after_4:
    // 0x80080848: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x8008084C: lhu         $v1, 0x2($s6)
    ctx->r3 = MEM_HU(ctx->r22, 0X2);
    // 0x80080850: slti        $v0, $v1, 0x23
    ctx->r2 = SIGNED(ctx->r3) < 0X23 ? 1 : 0;
    // 0x80080854: bne         $v0, $zero, L_8008086C
    if (ctx->r2 != 0) {
        // 0x80080858: slti        $v0, $v1, 0x25
        ctx->r2 = SIGNED(ctx->r3) < 0X25 ? 1 : 0;
            goto L_8008086C;
    }
    // 0x80080858: slti        $v0, $v1, 0x25
    ctx->r2 = SIGNED(ctx->r3) < 0X25 ? 1 : 0;
    // 0x8008085C: bne         $v0, $zero, L_80080978
    if (ctx->r2 != 0) {
        // 0x80080860: addiu       $v0, $zero, 0x26
        ctx->r2 = ADD32(0, 0X26);
            goto L_80080978;
    }
    // 0x80080860: addiu       $v0, $zero, 0x26
    ctx->r2 = ADD32(0, 0X26);
    // 0x80080864: beq         $v1, $v0, L_80080978
    if (ctx->r3 == ctx->r2) {
        // 0x80080868: nop
    
            goto L_80080978;
    }
    // 0x80080868: nop

L_8008086C:
    // 0x8008086C: lui         $s0, 0x801B
    ctx->r16 = S32(0X801B << 16);
    // 0x80080870: lw          $s0, -0x6F10($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X6F10);
    // 0x80080874: lui         $v0, 0xDB06
    ctx->r2 = S32(0XDB06 << 16);
    // 0x80080878: ori         $v0, $v0, 0xC
    ctx->r2 = ctx->r2 | 0XC;
    // 0x8008087C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80080880: lw          $a0, 0x8($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X8);
    // 0x80080884: addiu       $v0, $s0, 0x8
    ctx->r2 = ADD32(ctx->r16, 0X8);
    // 0x80080888: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8008088C: jal         0x80099BB0
    // 0x80080890: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_5;
    // 0x80080890: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    after_5:
    // 0x80080894: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x80080898: j           L_800809B0
    // 0x8008089C: lw          $s1, 0x8($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X8);
        goto L_800809B0;
    // 0x8008089C: lw          $s1, 0x8($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X8);
L_800808A0:
    // 0x800808A0: lui         $s0, 0x801B
    ctx->r16 = S32(0X801B << 16);
    // 0x800808A4: lw          $s0, -0x6F10($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X6F10);
    // 0x800808A8: ori         $v0, $v0, 0x14
    ctx->r2 = ctx->r2 | 0X14;
    // 0x800808AC: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x800808B0: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x800808B4: addiu       $v0, $s0, 0x8
    ctx->r2 = ADD32(ctx->r16, 0X8);
    // 0x800808B8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800808BC: jal         0x80099BB0
    // 0x800808C0: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_6;
    // 0x800808C0: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    after_6:
    // 0x800808C4: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x800808C8: lhu         $v1, 0x2($s6)
    ctx->r3 = MEM_HU(ctx->r22, 0X2);
    // 0x800808CC: slti        $v0, $v1, 0x23
    ctx->r2 = SIGNED(ctx->r3) < 0X23 ? 1 : 0;
    // 0x800808D0: bne         $v0, $zero, L_80080924
    if (ctx->r2 != 0) {
        // 0x800808D4: slti        $v0, $v1, 0x25
        ctx->r2 = SIGNED(ctx->r3) < 0X25 ? 1 : 0;
            goto L_80080924;
    }
    // 0x800808D4: slti        $v0, $v1, 0x25
    ctx->r2 = SIGNED(ctx->r3) < 0X25 ? 1 : 0;
    // 0x800808D8: bne         $v0, $zero, L_800808E8
    if (ctx->r2 != 0) {
        // 0x800808DC: addiu       $v0, $zero, 0x26
        ctx->r2 = ADD32(0, 0X26);
            goto L_800808E8;
    }
    // 0x800808DC: addiu       $v0, $zero, 0x26
    ctx->r2 = ADD32(0, 0X26);
    // 0x800808E0: bne         $v1, $v0, L_80080924
    if (ctx->r3 != ctx->r2) {
        // 0x800808E4: nop
    
            goto L_80080924;
    }
    // 0x800808E4: nop

L_800808E8:
    // 0x800808E8: lw          $v0, 0x24($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X24);
    // 0x800808EC: lui         $v1, 0xDB06
    ctx->r3 = S32(0XDB06 << 16);
    // 0x800808F0: ori         $v1, $v1, 0xC
    ctx->r3 = ctx->r3 | 0XC;
    // 0x800808F4: lui         $s0, 0x801B
    ctx->r16 = S32(0X801B << 16);
    // 0x800808F8: lw          $s0, -0x6F10($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X6F10);
    // 0x800808FC: sll         $a0, $s5, 5
    ctx->r4 = S32(ctx->r21 << 5);
    // 0x80080900: addu        $s1, $s4, $v0
    ctx->r17 = ADD32(ctx->r20, ctx->r2);
    // 0x80080904: addu        $a0, $s1, $a0
    ctx->r4 = ADD32(ctx->r17, ctx->r4);
    // 0x80080908: addiu       $v0, $s0, 0x8
    ctx->r2 = ADD32(ctx->r16, 0X8);
    // 0x8008090C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80080910: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80080914: jal         0x80099BB0
    // 0x80080918: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_7;
    // 0x80080918: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    after_7:
    // 0x8008091C: j           L_80080954
    // 0x80080920: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
        goto L_80080954;
    // 0x80080920: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
L_80080924:
    // 0x80080924: lui         $s0, 0x801B
    ctx->r16 = S32(0X801B << 16);
    // 0x80080928: lw          $s0, -0x6F10($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X6F10);
    // 0x8008092C: lui         $v0, 0xDB06
    ctx->r2 = S32(0XDB06 << 16);
    // 0x80080930: ori         $v0, $v0, 0xC
    ctx->r2 = ctx->r2 | 0XC;
    // 0x80080934: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80080938: lw          $a0, 0x8($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X8);
    // 0x8008093C: addiu       $v0, $s0, 0x8
    ctx->r2 = ADD32(ctx->r16, 0X8);
    // 0x80080940: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80080944: jal         0x80099BB0
    // 0x80080948: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_8;
    // 0x80080948: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    after_8:
    // 0x8008094C: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x80080950: lw          $s1, 0x8($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X8);
L_80080954:
    // 0x80080954: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
    // 0x80080958: j           L_800809B0
    // 0x8008095C: addiu       $fp, $zero, 0x1
    ctx->r30 = ADD32(0, 0X1);
        goto L_800809B0;
    // 0x8008095C: addiu       $fp, $zero, 0x1
    ctx->r30 = ADD32(0, 0X1);
L_80080960:
    // 0x80080960: lhu         $v1, 0x2($s6)
    ctx->r3 = MEM_HU(ctx->r22, 0X2);
    // 0x80080964: bne         $v1, $v0, L_80080978
    if (ctx->r3 != ctx->r2) {
        // 0x80080968: addiu       $v0, $zero, 0xE
        ctx->r2 = ADD32(0, 0XE);
            goto L_80080978;
    }
    // 0x80080968: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x8008096C: lhu         $v1, 0x0($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X0);
    // 0x80080970: beql        $v1, $v0, L_80080978
    if (ctx->r3 == ctx->r2) {
        // 0x80080974: addiu       $s5, $zero, 0x1
        ctx->r21 = ADD32(0, 0X1);
            goto L_80080978;
    }
    goto skip_0;
    // 0x80080974: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    skip_0:
L_80080978:
    // 0x80080978: lw          $v0, 0x24($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X24);
    // 0x8008097C: lui         $v1, 0xDB06
    ctx->r3 = S32(0XDB06 << 16);
    // 0x80080980: ori         $v1, $v1, 0xC
    ctx->r3 = ctx->r3 | 0XC;
    // 0x80080984: lui         $s0, 0x801B
    ctx->r16 = S32(0X801B << 16);
    // 0x80080988: lw          $s0, -0x6F10($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X6F10);
    // 0x8008098C: sll         $a0, $s5, 5
    ctx->r4 = S32(ctx->r21 << 5);
    // 0x80080990: addu        $s1, $s4, $v0
    ctx->r17 = ADD32(ctx->r20, ctx->r2);
    // 0x80080994: addu        $a0, $s1, $a0
    ctx->r4 = ADD32(ctx->r17, ctx->r4);
    // 0x80080998: addiu       $v0, $s0, 0x8
    ctx->r2 = ADD32(ctx->r16, 0X8);
    // 0x8008099C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800809A0: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x800809A4: jal         0x80099BB0
    // 0x800809A8: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_9;
    // 0x800809A8: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    after_9:
    // 0x800809AC: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
L_800809B0:
    // 0x800809B0: lhu         $v1, 0x2($s6)
    ctx->r3 = MEM_HU(ctx->r22, 0X2);
    // 0x800809B4: addiu       $v0, $zero, 0x111
    ctx->r2 = ADD32(0, 0X111);
    // 0x800809B8: andi        $a0, $v1, 0xFFFF
    ctx->r4 = ctx->r3 & 0XFFFF;
    // 0x800809BC: bne         $a0, $v0, L_800809E8
    if (ctx->r4 != ctx->r2) {
        // 0x800809C0: addiu       $v0, $v1, -0x66
        ctx->r2 = ADD32(ctx->r3, -0X66);
            goto L_800809E8;
    }
    // 0x800809C0: addiu       $v0, $v1, -0x66
    ctx->r2 = ADD32(ctx->r3, -0X66);
    // 0x800809C4: addu        $s7, $zero, $zero
    ctx->r23 = ADD32(0, 0);
    // 0x800809C8: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x800809CC: addu        $fp, $zero, $zero
    ctx->r30 = ADD32(0, 0);
    // 0x800809D0: sb          $t8, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r24;
    // 0x800809D4: addiu       $t8, $zero, 0xCC
    ctx->r24 = ADD32(0, 0XCC);
    // 0x800809D8: sb          $t8, 0x47($sp)
    MEM_B(0X47, ctx->r29) = ctx->r24;
    // 0x800809DC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800809E0: j           L_80080A10
    // 0x800809E4: addiu       $a0, $zero, 0x111
    ctx->r4 = ADD32(0, 0X111);
        goto L_80080A10;
    // 0x800809E4: addiu       $a0, $zero, 0x111
    ctx->r4 = ADD32(0, 0X111);
L_800809E8:
    // 0x800809E8: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x800809EC: beq         $v0, $zero, L_80080A30
    if (ctx->r2 == 0) {
        // 0x800809F0: nop
    
            goto L_80080A30;
    }
    // 0x800809F0: nop

    // 0x800809F4: addu        $s7, $zero, $zero
    ctx->r23 = ADD32(0, 0);
    // 0x800809F8: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x800809FC: addu        $fp, $zero, $zero
    ctx->r30 = ADD32(0, 0);
    // 0x80080A00: sb          $t8, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r24;
    // 0x80080A04: addiu       $t8, $zero, 0xCC
    ctx->r24 = ADD32(0, 0XCC);
    // 0x80080A08: sb          $t8, 0x47($sp)
    MEM_B(0X47, ctx->r29) = ctx->r24;
    // 0x80080A0C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
L_80080A10:
    // 0x80080A10: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80080A14: sb          $zero, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = 0;
    // 0x80080A18: sb          $zero, 0x37($sp)
    MEM_B(0X37, ctx->r29) = 0;
    // 0x80080A1C: sb          $zero, 0x3F($sp)
    MEM_B(0X3F, ctx->r29) = 0;
    // 0x80080A20: jal         0x8007FC44
    // 0x80080A24: sb          $t8, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r24;
    func_8007FC44_5B044(rdram, ctx);
        goto after_10;
    // 0x80080A24: sb          $t8, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r24;
    after_10:
    // 0x80080A28: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80080A2C: sb          $t8, 0x4F($sp)
    MEM_B(0X4F, ctx->r29) = ctx->r24;
L_80080A30:
    // 0x80080A30: lbu         $v0, 0x1F($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X1F);
    // 0x80080A34: beq         $v0, $zero, L_80080A44
    if (ctx->r2 == 0) {
        // 0x80080A38: nop
    
            goto L_80080A44;
    }
    // 0x80080A38: nop

    // 0x80080A3C: jal         0x8008128C
    // 0x80080A40: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8008128C_5C68C(rdram, ctx);
        goto after_11;
    // 0x80080A40: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_11:
L_80080A44:
    // 0x80080A44: lbu         $v1, 0x66($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X66);
    // 0x80080A48: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80080A4C: beq         $v1, $v0, L_80080B14
    if (ctx->r3 == ctx->r2) {
        // 0x80080A50: addu        $t0, $zero, $zero
        ctx->r8 = ADD32(0, 0);
            goto L_80080B14;
    }
    // 0x80080A50: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x80080A54: lw          $v0, 0x10($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X10);
    // 0x80080A58: lw          $v1, 0xC($s3)
    ctx->r3 = MEM_W(ctx->r19, 0XC);
    // 0x80080A5C: lhu         $a2, 0x2($s6)
    ctx->r6 = MEM_HU(ctx->r22, 0X2);
    // 0x80080A60: srl         $t1, $v0, 4
    ctx->r9 = S32(U32(ctx->r2) >> 4);
    // 0x80080A64: slti        $v0, $a2, 0x129
    ctx->r2 = SIGNED(ctx->r6) < 0X129 ? 1 : 0;
    // 0x80080A68: beq         $v0, $zero, L_80080A8C
    if (ctx->r2 == 0) {
        // 0x80080A6C: addu        $a0, $s4, $v1
        ctx->r4 = ADD32(ctx->r20, ctx->r3);
            goto L_80080A8C;
    }
    // 0x80080A6C: addu        $a0, $s4, $v1
    ctx->r4 = ADD32(ctx->r20, ctx->r3);
    // 0x80080A70: slti        $v0, $a2, 0x126
    ctx->r2 = SIGNED(ctx->r6) < 0X126 ? 1 : 0;
    // 0x80080A74: beq         $v0, $zero, L_80080AA8
    if (ctx->r2 == 0) {
        // 0x80080A78: addiu       $v0, $zero, 0xFD
        ctx->r2 = ADD32(0, 0XFD);
            goto L_80080AA8;
    }
    // 0x80080A78: addiu       $v0, $zero, 0xFD
    ctx->r2 = ADD32(0, 0XFD);
    // 0x80080A7C: beq         $a2, $v0, L_80080AB4
    if (ctx->r6 == ctx->r2) {
        // 0x80080A80: nop
    
            goto L_80080AB4;
    }
    // 0x80080A80: nop

    // 0x80080A84: j           L_80080ABC
    // 0x80080A88: nop

        goto L_80080ABC;
    // 0x80080A88: nop

L_80080A8C:
    // 0x80080A8C: addiu       $v0, $zero, 0x167
    ctx->r2 = ADD32(0, 0X167);
    // 0x80080A90: bne         $a2, $v0, L_80080ABC
    if (ctx->r6 != ctx->r2) {
        // 0x80080A94: nop
    
            goto L_80080ABC;
    }
    // 0x80080A94: nop

    // 0x80080A98: lui         $t0, 0x8024
    ctx->r8 = S32(0X8024 << 16);
    // 0x80080A9C: addiu       $t0, $t0, -0x2968
    ctx->r8 = ADD32(ctx->r8, -0X2968);
    // 0x80080AA0: j           L_80080ABC
    // 0x80080AA4: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
        goto L_80080ABC;
    // 0x80080AA4: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
L_80080AA8:
    // 0x80080AA8: lui         $t0, 0x8023
    ctx->r8 = S32(0X8023 << 16);
    // 0x80080AAC: j           L_80080ABC
    // 0x80080AB0: addiu       $t0, $t0, 0x3B80
    ctx->r8 = ADD32(ctx->r8, 0X3B80);
        goto L_80080ABC;
    // 0x80080AB0: addiu       $t0, $t0, 0x3B80
    ctx->r8 = ADD32(ctx->r8, 0X3B80);
L_80080AB4:
    // 0x80080AB4: lui         $t0, 0x8024
    ctx->r8 = S32(0X8024 << 16);
    // 0x80080AB8: addiu       $t0, $t0, 0x2D80
    ctx->r8 = ADD32(ctx->r8, 0X2D80);
L_80080ABC:
    // 0x80080ABC: beq         $t0, $zero, L_80080B4C
    if (ctx->r8 == 0) {
        // 0x80080AC0: nop
    
            goto L_80080B4C;
    }
    // 0x80080AC0: nop

    // 0x80080AC4: beq         $t1, $zero, L_80080B4C
    if (ctx->r9 == 0) {
        // 0x80080AC8: addu        $a3, $zero, $zero
        ctx->r7 = ADD32(0, 0);
            goto L_80080B4C;
    }
    // 0x80080AC8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80080ACC: addu        $a2, $t0, $zero
    ctx->r6 = ADD32(ctx->r8, 0);
L_80080AD0:
    // 0x80080AD0: lbu         $v0, 0x66($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X66);
    // 0x80080AD4: lhu         $v1, 0x0($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X0);
    // 0x80080AD8: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x80080ADC: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x80080AE0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80080AE4: sh          $v1, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r3;
    // 0x80080AE8: lbu         $v0, 0x67($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X67);
    // 0x80080AEC: lhu         $v1, 0x2($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X2);
    // 0x80080AF0: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x80080AF4: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x80080AF8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80080AFC: sh          $v1, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r3;
    // 0x80080B00: slt         $v0, $a3, $t1
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80080B04: bne         $v0, $zero, L_80080AD0
    if (ctx->r2 != 0) {
        // 0x80080B08: addiu       $a0, $a0, 0x10
        ctx->r4 = ADD32(ctx->r4, 0X10);
            goto L_80080AD0;
    }
    // 0x80080B08: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x80080B0C: j           L_80080B4C
    // 0x80080B10: nop

        goto L_80080B4C;
    // 0x80080B10: nop

L_80080B14:
    // 0x80080B14: lhu         $v1, 0x2($s6)
    ctx->r3 = MEM_HU(ctx->r22, 0X2);
    // 0x80080B18: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x80080B1C: bne         $v1, $v0, L_80080B4C
    if (ctx->r3 != ctx->r2) {
        // 0x80080B20: nop
    
            goto L_80080B4C;
    }
    // 0x80080B20: nop

    // 0x80080B24: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80080B28: lb          $v0, -0x209E($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X209E);
    // 0x80080B2C: bne         $v0, $zero, L_80080B4C
    if (ctx->r2 != 0) {
        // 0x80080B30: addiu       $v0, $zero, 0xE
        ctx->r2 = ADD32(0, 0XE);
            goto L_80080B4C;
    }
    // 0x80080B30: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x80080B34: lhu         $v1, 0x0($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X0);
    // 0x80080B38: bne         $v1, $v0, L_80080B4C
    if (ctx->r3 != ctx->r2) {
        // 0x80080B3C: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_80080B4C;
    }
    // 0x80080B3C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80080B40: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x80080B44: jal         0x802325FC
    // 0x80080B48: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    func_802325FC_ovl13(rdram, ctx);
        goto after_12;
    // 0x80080B48: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_12:
L_80080B4C:
    // 0x80080B4C: lhu         $v1, 0x64($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X64);
    // 0x80080B50: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80080B54: beq         $v1, $v0, L_80080D14
    if (ctx->r3 == ctx->r2) {
        // 0x80080B58: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_80080D14;
    }
    // 0x80080B58: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80080B5C: lbu         $v1, 0x2($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X2);
    // 0x80080B60: bne         $v1, $v0, L_80080B70
    if (ctx->r3 != ctx->r2) {
        // 0x80080B64: addu        $t3, $zero, $zero
        ctx->r11 = ADD32(0, 0);
            goto L_80080B70;
    }
    // 0x80080B64: addu        $t3, $zero, $zero
    ctx->r11 = ADD32(0, 0);
    // 0x80080B68: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x80080B6C: lw          $t3, 0x208($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X208);
L_80080B70:
    // 0x80080B70: bne         $t3, $zero, L_80080CE0
    if (ctx->r11 != 0) {
        // 0x80080B74: lui         $v1, 0xDB06
        ctx->r3 = S32(0XDB06 << 16);
            goto L_80080CE0;
    }
    // 0x80080B74: lui         $v1, 0xDB06
    ctx->r3 = S32(0XDB06 << 16);
    // 0x80080B78: lw          $v0, 0x28($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X28);
    // 0x80080B7C: srl         $s3, $v0, 5
    ctx->r19 = S32(U32(ctx->r2) >> 5);
    // 0x80080B80: jal         0x800281C8
    // 0x80080B84: sll         $a0, $s3, 5
    ctx->r4 = S32(ctx->r19 << 5);
    func_800281C8_35C8(rdram, ctx);
        goto after_13;
    // 0x80080B84: sll         $a0, $s3, 5
    ctx->r4 = S32(ctx->r19 << 5);
    after_13:
    // 0x80080B88: addu        $t3, $v0, $zero
    ctx->r11 = ADD32(ctx->r2, 0);
    // 0x80080B8C: beq         $t3, $zero, L_80080D14
    if (ctx->r11 == 0) {
        // 0x80080B90: addu        $a3, $zero, $zero
        ctx->r7 = ADD32(0, 0);
            goto L_80080D14;
    }
    // 0x80080B90: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80080B94: lhu         $v0, 0x64($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X64);
    // 0x80080B98: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80080B9C: sw          $t3, 0x208($at)
    MEM_W(0X208, ctx->r1) = ctx->r11;
    // 0x80080BA0: andi        $v1, $v0, 0xFFFF
    ctx->r3 = ctx->r2 & 0XFFFF;
    // 0x80080BA4: srl         $a0, $v1, 10
    ctx->r4 = S32(U32(ctx->r3) >> 10);
    // 0x80080BA8: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x80080BAC: srl         $v1, $v1, 5
    ctx->r3 = S32(U32(ctx->r3) >> 5);
    // 0x80080BB0: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x80080BB4: beq         $s3, $zero, L_80080C94
    if (ctx->r19 == 0) {
        // 0x80080BB8: andi        $v0, $v0, 0x1F
        ctx->r2 = ctx->r2 & 0X1F;
            goto L_80080C94;
    }
    // 0x80080BB8: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x80080BBC: andi        $s0, $v0, 0xFFFF
    ctx->r16 = ctx->r2 & 0XFFFF;
    // 0x80080BC0: andi        $t7, $v1, 0xFFFF
    ctx->r15 = ctx->r3 & 0XFFFF;
    // 0x80080BC4: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x80080BC8: addu        $t5, $s1, $zero
    ctx->r13 = ADD32(ctx->r17, 0);
    // 0x80080BCC: addu        $t4, $t3, $zero
    ctx->r12 = ADD32(ctx->r11, 0);
L_80080BD0:
    // 0x80080BD0: addu        $t2, $zero, $zero
    ctx->r10 = ADD32(0, 0);
    // 0x80080BD4: addu        $a2, $t4, $zero
    ctx->r6 = ADD32(ctx->r12, 0);
    // 0x80080BD8: addu        $t1, $t5, $zero
    ctx->r9 = ADD32(ctx->r13, 0);
L_80080BDC:
    // 0x80080BDC: lhu         $v1, 0x0($t1)
    ctx->r3 = MEM_HU(ctx->r9, 0X0);
    // 0x80080BE0: andi        $t0, $v1, 0x1
    ctx->r8 = ctx->r3 & 0X1;
    // 0x80080BE4: addu        $v0, $t0, $zero
    ctx->r2 = ADD32(ctx->r8, 0);
    // 0x80080BE8: beq         $v0, $zero, L_80080C6C
    if (ctx->r2 == 0) {
        // 0x80080BEC: sh          $v1, 0x0($a2)
        MEM_H(0X0, ctx->r6) = ctx->r3;
            goto L_80080C6C;
    }
    // 0x80080BEC: sh          $v1, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r3;
    // 0x80080BF0: andi        $v0, $v1, 0xFFFF
    ctx->r2 = ctx->r3 & 0XFFFF;
    // 0x80080BF4: srl         $a0, $v0, 11
    ctx->r4 = S32(U32(ctx->r2) >> 11);
    // 0x80080BF8: mult        $a0, $s0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80080BFC: mflo        $a0
    ctx->r4 = lo;
    // 0x80080C00: srl         $v1, $v0, 6
    ctx->r3 = S32(U32(ctx->r2) >> 6);
    // 0x80080C04: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x80080C08: mult        $v1, $t7
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80080C0C: mflo        $v1
    ctx->r3 = lo;
    // 0x80080C10: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x80080C14: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x80080C18: mult        $v0, $t6
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80080C1C: mflo        $v0
    ctx->r2 = lo;
    // 0x80080C20: srl         $a0, $a0, 4
    ctx->r4 = S32(U32(ctx->r4) >> 4);
    // 0x80080C24: srl         $a1, $v0, 4
    ctx->r5 = S32(U32(ctx->r2) >> 4);
    // 0x80080C28: sltiu       $v0, $a0, 0x20
    ctx->r2 = ctx->r4 < 0X20 ? 1 : 0;
    // 0x80080C2C: bne         $v0, $zero, L_80080C38
    if (ctx->r2 != 0) {
        // 0x80080C30: srl         $v1, $v1, 4
        ctx->r3 = S32(U32(ctx->r3) >> 4);
            goto L_80080C38;
    }
    // 0x80080C30: srl         $v1, $v1, 4
    ctx->r3 = S32(U32(ctx->r3) >> 4);
    // 0x80080C34: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
L_80080C38:
    // 0x80080C38: sltiu       $v0, $v1, 0x20
    ctx->r2 = ctx->r3 < 0X20 ? 1 : 0;
    // 0x80080C3C: beql        $v0, $zero, L_80080C44
    if (ctx->r2 == 0) {
        // 0x80080C40: addiu       $v1, $zero, 0x1F
        ctx->r3 = ADD32(0, 0X1F);
            goto L_80080C44;
    }
    goto skip_1;
    // 0x80080C40: addiu       $v1, $zero, 0x1F
    ctx->r3 = ADD32(0, 0X1F);
    skip_1:
L_80080C44:
    // 0x80080C44: sltiu       $v0, $a1, 0x20
    ctx->r2 = ctx->r5 < 0X20 ? 1 : 0;
    // 0x80080C48: beql        $v0, $zero, L_80080C50
    if (ctx->r2 == 0) {
        // 0x80080C4C: addiu       $a1, $zero, 0x1F
        ctx->r5 = ADD32(0, 0X1F);
            goto L_80080C50;
    }
    goto skip_2;
    // 0x80080C4C: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    skip_2:
L_80080C50:
    // 0x80080C50: sll         $v0, $a0, 11
    ctx->r2 = S32(ctx->r4 << 11);
    // 0x80080C54: sll         $v1, $v1, 6
    ctx->r3 = S32(ctx->r3 << 6);
    // 0x80080C58: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80080C5C: sll         $v1, $a1, 1
    ctx->r3 = S32(ctx->r5 << 1);
    // 0x80080C60: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80080C64: or          $v0, $t0, $v0
    ctx->r2 = ctx->r8 | ctx->r2;
    // 0x80080C68: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
L_80080C6C:
    // 0x80080C6C: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    // 0x80080C70: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
    // 0x80080C74: slti        $v0, $t2, 0x10
    ctx->r2 = SIGNED(ctx->r10) < 0X10 ? 1 : 0;
    // 0x80080C78: bne         $v0, $zero, L_80080BDC
    if (ctx->r2 != 0) {
        // 0x80080C7C: addiu       $t1, $t1, 0x2
        ctx->r9 = ADD32(ctx->r9, 0X2);
            goto L_80080BDC;
    }
    // 0x80080C7C: addiu       $t1, $t1, 0x2
    ctx->r9 = ADD32(ctx->r9, 0X2);
    // 0x80080C80: addiu       $t5, $t5, 0x20
    ctx->r13 = ADD32(ctx->r13, 0X20);
    // 0x80080C84: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x80080C88: slt         $v0, $a3, $s3
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x80080C8C: bne         $v0, $zero, L_80080BD0
    if (ctx->r2 != 0) {
        // 0x80080C90: addiu       $t4, $t4, 0x20
        ctx->r12 = ADD32(ctx->r12, 0X20);
            goto L_80080BD0;
    }
    // 0x80080C90: addiu       $t4, $t4, 0x20
    ctx->r12 = ADD32(ctx->r12, 0X20);
L_80080C94:
    // 0x80080C94: lui         $v1, 0xDB06
    ctx->r3 = S32(0XDB06 << 16);
    // 0x80080C98: ori         $v1, $v1, 0xC
    ctx->r3 = ctx->r3 | 0XC;
    // 0x80080C9C: lui         $s0, 0x801B
    ctx->r16 = S32(0X801B << 16);
    // 0x80080CA0: lw          $s0, -0x6F10($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X6F10);
    // 0x80080CA4: sll         $a0, $s5, 5
    ctx->r4 = S32(ctx->r21 << 5);
    // 0x80080CA8: addu        $a0, $t3, $a0
    ctx->r4 = ADD32(ctx->r11, ctx->r4);
    // 0x80080CAC: addiu       $v0, $s0, 0x8
    ctx->r2 = ADD32(ctx->r16, 0X8);
    // 0x80080CB0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80080CB4: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80080CB8: jal         0x80099BB0
    // 0x80080CBC: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_14;
    // 0x80080CBC: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    after_14:
    // 0x80080CC0: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x80080CC4: lbu         $v1, 0x2($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X2);
    // 0x80080CC8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80080CCC: beq         $v1, $v0, L_80080D14
    if (ctx->r3 == ctx->r2) {
        // 0x80080CD0: nop
    
            goto L_80080D14;
    }
    // 0x80080CD0: nop

    // 0x80080CD4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80080CD8: j           L_80080D14
    // 0x80080CDC: sw          $zero, 0x208($at)
    MEM_W(0X208, ctx->r1) = 0;
        goto L_80080D14;
    // 0x80080CDC: sw          $zero, 0x208($at)
    MEM_W(0X208, ctx->r1) = 0;
L_80080CE0:
    // 0x80080CE0: ori         $v1, $v1, 0xC
    ctx->r3 = ctx->r3 | 0XC;
    // 0x80080CE4: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80080CE8: lw          $v0, 0x208($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X208);
    // 0x80080CEC: lui         $s0, 0x801B
    ctx->r16 = S32(0X801B << 16);
    // 0x80080CF0: lw          $s0, -0x6F10($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X6F10);
    // 0x80080CF4: sll         $a0, $s5, 5
    ctx->r4 = S32(ctx->r21 << 5);
    // 0x80080CF8: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    // 0x80080CFC: addiu       $v0, $s0, 0x8
    ctx->r2 = ADD32(ctx->r16, 0X8);
    // 0x80080D00: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80080D04: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80080D08: jal         0x80099BB0
    // 0x80080D0C: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_15;
    // 0x80080D0C: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    after_15:
    // 0x80080D10: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
L_80080D14:
    // 0x80080D14: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80080D18: lbu         $v0, -0x3D7F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3D7F);
    // 0x80080D1C: andi        $v1, $s7, 0xFF
    ctx->r3 = ctx->r23 & 0XFF;
    // 0x80080D20: beq         $v0, $v1, L_80080D78
    if (ctx->r2 == ctx->r3) {
        // 0x80080D24: nop
    
            goto L_80080D78;
    }
    // 0x80080D24: nop

    // 0x80080D28: bne         $v1, $zero, L_80080D48
    if (ctx->r3 != 0) {
        // 0x80080D2C: lui         $a1, 0xD9FF
        ctx->r5 = S32(0XD9FF << 16);
            goto L_80080D48;
    }
    // 0x80080D2C: lui         $a1, 0xD9FF
    ctx->r5 = S32(0XD9FF << 16);
    // 0x80080D30: ori         $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 | 0XFFFF;
    // 0x80080D34: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80080D38: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x80080D3C: lui         $a0, 0x21
    ctx->r4 = S32(0X21 << 16);
    // 0x80080D40: j           L_80080D5C
    // 0x80080D44: ori         $a0, $a0, 0x405
    ctx->r4 = ctx->r4 | 0X405;
        goto L_80080D5C;
    // 0x80080D44: ori         $a0, $a0, 0x405
    ctx->r4 = ctx->r4 | 0X405;
L_80080D48:
    // 0x80080D48: ori         $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 | 0XFFFF;
    // 0x80080D4C: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80080D50: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x80080D54: lui         $a0, 0x21
    ctx->r4 = S32(0X21 << 16);
    // 0x80080D58: ori         $a0, $a0, 0x5
    ctx->r4 = ctx->r4 | 0X5;
L_80080D5C:
    // 0x80080D5C: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x80080D60: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80080D64: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80080D68: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    // 0x80080D6C: sw          $a0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r4;
    // 0x80080D70: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80080D74: sb          $s7, -0x3D7F($at)
    MEM_B(-0X3D7F, ctx->r1) = ctx->r23;
L_80080D78:
    // 0x80080D78: lbu         $a2, 0x1F($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X1F);
    // 0x80080D7C: beq         $a2, $zero, L_80080DCC
    if (ctx->r6 == 0) {
        // 0x80080D80: nop
    
            goto L_80080DCC;
    }
    // 0x80080D80: nop

    // 0x80080D84: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80080D88: lw          $a0, -0x6F10($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X6F10);
    // 0x80080D8C: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    // 0x80080D90: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80080D94: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80080D98: lui         $v0, 0xFA00
    ctx->r2 = S32(0XFA00 << 16);
    // 0x80080D9C: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x80080DA0: lbu         $t8, 0x2F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X2F);
    // 0x80080DA4: sll         $v0, $t8, 24
    ctx->r2 = S32(ctx->r24 << 24);
    // 0x80080DA8: lbu         $t8, 0x37($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X37);
    // 0x80080DAC: sll         $v1, $t8, 16
    ctx->r3 = S32(ctx->r24 << 16);
    // 0x80080DB0: lbu         $t8, 0x3F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X3F);
    // 0x80080DB4: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80080DB8: sll         $v1, $t8, 8
    ctx->r3 = S32(ctx->r24 << 8);
    // 0x80080DBC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80080DC0: lbu         $v1, 0x47($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X47);
    // 0x80080DC4: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80080DC8: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
L_80080DCC:
    // 0x80080DCC: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x80080DD0: lw          $a1, -0x6F10($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X6F10);
    // 0x80080DD4: addiu       $v0, $a1, 0x8
    ctx->r2 = ADD32(ctx->r5, 0X8);
    // 0x80080DD8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80080DDC: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80080DE0: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x80080DE4: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x80080DE8: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x80080DEC: lbu         $t8, 0x27($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X27);
    // 0x80080DF0: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x80080DF4: sll         $v0, $t8, 24
    ctx->r2 = S32(ctx->r24 << 24);
    // 0x80080DF8: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80080DFC: beq         $v0, $v1, L_80080F60
    if (ctx->r2 == ctx->r3) {
        // 0x80080E00: nop
    
            goto L_80080F60;
    }
    // 0x80080E00: nop

    // 0x80080E04: beq         $a2, $zero, L_80080E3C
    if (ctx->r6 == 0) {
        // 0x80080E08: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80080E3C;
    }
    // 0x80080E08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80080E0C: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x80080E10: lbu         $v1, -0x3D7E($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3D7E);
    // 0x80080E14: beq         $v1, $v0, L_80080EB4
    if (ctx->r3 == ctx->r2) {
        // 0x80080E18: lui         $a0, 0xE200
        ctx->r4 = S32(0XE200 << 16);
            goto L_80080EB4;
    }
    // 0x80080E18: lui         $a0, 0xE200
    ctx->r4 = S32(0XE200 << 16);
    // 0x80080E1C: ori         $a0, $a0, 0x1C
    ctx->r4 = ctx->r4 | 0X1C;
    // 0x80080E20: lui         $v1, 0xC810
    ctx->r3 = S32(0XC810 << 16);
    // 0x80080E24: ori         $v1, $v1, 0x49D8
    ctx->r3 = ctx->r3 | 0X49D8;
    // 0x80080E28: addiu       $v0, $a1, 0x10
    ctx->r2 = ADD32(ctx->r5, 0X10);
    // 0x80080E2C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80080E30: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80080E34: j           L_80080EA4
    // 0x80080E38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80080EA4;
    // 0x80080E38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80080E3C:
    // 0x80080E3C: beq         $fp, $zero, L_80080E74
    if (ctx->r30 == 0) {
        // 0x80080E40: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80080E74;
    }
    // 0x80080E40: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80080E44: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x80080E48: lbu         $v1, -0x3D7E($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3D7E);
    // 0x80080E4C: beq         $v1, $v0, L_80080EB4
    if (ctx->r3 == ctx->r2) {
        // 0x80080E50: lui         $a0, 0xE200
        ctx->r4 = S32(0XE200 << 16);
            goto L_80080EB4;
    }
    // 0x80080E50: lui         $a0, 0xE200
    ctx->r4 = S32(0XE200 << 16);
    // 0x80080E54: ori         $a0, $a0, 0x1C
    ctx->r4 = ctx->r4 | 0X1C;
    // 0x80080E58: lui         $v1, 0xC811
    ctx->r3 = S32(0XC811 << 16);
    // 0x80080E5C: ori         $v1, $v1, 0x3078
    ctx->r3 = ctx->r3 | 0X3078;
    // 0x80080E60: addiu       $v0, $a1, 0x10
    ctx->r2 = ADD32(ctx->r5, 0X10);
    // 0x80080E64: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80080E68: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80080E6C: j           L_80080EA4
    // 0x80080E70: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80080EA4;
    // 0x80080E70: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80080E74:
    // 0x80080E74: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x80080E78: lbu         $v1, -0x3D7E($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3D7E);
    // 0x80080E7C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80080E80: beq         $v1, $v0, L_80080EB4
    if (ctx->r3 == ctx->r2) {
        // 0x80080E84: lui         $a0, 0xE200
        ctx->r4 = S32(0XE200 << 16);
            goto L_80080EB4;
    }
    // 0x80080E84: lui         $a0, 0xE200
    ctx->r4 = S32(0XE200 << 16);
    // 0x80080E88: ori         $a0, $a0, 0x1C
    ctx->r4 = ctx->r4 | 0X1C;
    // 0x80080E8C: lui         $v1, 0xC811
    ctx->r3 = S32(0XC811 << 16);
    // 0x80080E90: ori         $v1, $v1, 0x2078
    ctx->r3 = ctx->r3 | 0X2078;
    // 0x80080E94: addiu       $v0, $a1, 0x10
    ctx->r2 = ADD32(ctx->r5, 0X10);
    // 0x80080E98: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80080E9C: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80080EA0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80080EA4:
    // 0x80080EA4: sw          $a0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r4;
    // 0x80080EA8: sw          $v1, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r3;
    // 0x80080EAC: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80080EB0: sb          $v0, -0x3D7E($at)
    MEM_B(-0X3D7E, ctx->r1) = ctx->r2;
L_80080EB4:
    // 0x80080EB4: lui         $a0, 0xD700
    ctx->r4 = S32(0XD700 << 16);
    // 0x80080EB8: ori         $a0, $a0, 0x2
    ctx->r4 = ctx->r4 | 0X2;
    // 0x80080EBC: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x80080EC0: lw          $a1, -0x6F10($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X6F10);
    // 0x80080EC4: lui         $v1, 0x8000
    ctx->r3 = S32(0X8000 << 16);
    // 0x80080EC8: ori         $v1, $v1, 0x8000
    ctx->r3 = ctx->r3 | 0X8000;
    // 0x80080ECC: addiu       $v0, $a1, 0x8
    ctx->r2 = ADD32(ctx->r5, 0X8);
    // 0x80080ED0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80080ED4: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80080ED8: sw          $a0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r4;
    // 0x80080EDC: sw          $v1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r3;
    // 0x80080EE0: lbu         $v0, 0x1F($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X1F);
    // 0x80080EE4: beq         $v0, $zero, L_80080F1C
    if (ctx->r2 == 0) {
        // 0x80080EE8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80080F1C;
    }
    // 0x80080EE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80080EEC: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x80080EF0: lbu         $v1, -0x3D7D($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3D7D);
    // 0x80080EF4: beq         $v1, $v0, L_80081058
    if (ctx->r3 == ctx->r2) {
        // 0x80080EF8: lui         $a0, 0xFCFF
        ctx->r4 = S32(0XFCFF << 16);
            goto L_80081058;
    }
    // 0x80080EF8: lui         $a0, 0xFCFF
    ctx->r4 = S32(0XFCFF << 16);
    // 0x80080EFC: ori         $a0, $a0, 0xB3FF
    ctx->r4 = ctx->r4 | 0XB3FF;
    // 0x80080F00: lui         $v1, 0xFF00
    ctx->r3 = S32(0XFF00 << 16);
    // 0x80080F04: ori         $v1, $v1, 0xFE3F
    ctx->r3 = ctx->r3 | 0XFE3F;
    // 0x80080F08: addiu       $v0, $a1, 0x10
    ctx->r2 = ADD32(ctx->r5, 0X10);
    // 0x80080F0C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80080F10: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80080F14: j           L_80080F4C
    // 0x80080F18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80080F4C;
    // 0x80080F18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80080F1C:
    // 0x80080F1C: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x80080F20: lbu         $v1, -0x3D7D($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3D7D);
    // 0x80080F24: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80080F28: beq         $v1, $v0, L_80081058
    if (ctx->r3 == ctx->r2) {
        // 0x80080F2C: lui         $a0, 0xFCFF
        ctx->r4 = S32(0XFCFF << 16);
            goto L_80081058;
    }
    // 0x80080F2C: lui         $a0, 0xFCFF
    ctx->r4 = S32(0XFCFF << 16);
    // 0x80080F30: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x80080F34: lui         $v1, 0xFFFC
    ctx->r3 = S32(0XFFFC << 16);
    // 0x80080F38: ori         $v1, $v1, 0xF238
    ctx->r3 = ctx->r3 | 0XF238;
    // 0x80080F3C: addiu       $v0, $a1, 0x10
    ctx->r2 = ADD32(ctx->r5, 0X10);
    // 0x80080F40: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80080F44: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80080F48: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80080F4C:
    // 0x80080F4C: sw          $a0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r4;
    // 0x80080F50: sw          $v1, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r3;
    // 0x80080F54: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80080F58: j           L_80081058
    // 0x80080F5C: sb          $v0, -0x3D7D($at)
    MEM_B(-0X3D7D, ctx->r1) = ctx->r2;
        goto L_80081058;
    // 0x80080F5C: sb          $v0, -0x3D7D($at)
    MEM_B(-0X3D7D, ctx->r1) = ctx->r2;
L_80080F60:
    // 0x80080F60: beq         $a2, $zero, L_80080F98
    if (ctx->r6 == 0) {
        // 0x80080F64: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80080F98;
    }
    // 0x80080F64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80080F68: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x80080F6C: lbu         $v1, -0x3D7E($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3D7E);
    // 0x80080F70: beq         $v1, $v0, L_80080FD8
    if (ctx->r3 == ctx->r2) {
        // 0x80080F74: lui         $a0, 0xE200
        ctx->r4 = S32(0XE200 << 16);
            goto L_80080FD8;
    }
    // 0x80080F74: lui         $a0, 0xE200
    ctx->r4 = S32(0XE200 << 16);
    // 0x80080F78: ori         $a0, $a0, 0x1C
    ctx->r4 = ctx->r4 | 0X1C;
    // 0x80080F7C: lui         $v1, 0x50
    ctx->r3 = S32(0X50 << 16);
    // 0x80080F80: ori         $v1, $v1, 0x4A50
    ctx->r3 = ctx->r3 | 0X4A50;
    // 0x80080F84: addiu       $v0, $a1, 0x10
    ctx->r2 = ADD32(ctx->r5, 0X10);
    // 0x80080F88: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80080F8C: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80080F90: j           L_80080FC8
    // 0x80080F94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80080FC8;
    // 0x80080F94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80080F98:
    // 0x80080F98: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x80080F9C: lbu         $v1, -0x3D7E($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3D7E);
    // 0x80080FA0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80080FA4: beq         $v1, $v0, L_80080FD8
    if (ctx->r3 == ctx->r2) {
        // 0x80080FA8: lui         $a0, 0xE200
        ctx->r4 = S32(0XE200 << 16);
            goto L_80080FD8;
    }
    // 0x80080FA8: lui         $a0, 0xE200
    ctx->r4 = S32(0XE200 << 16);
    // 0x80080FAC: ori         $a0, $a0, 0x1C
    ctx->r4 = ctx->r4 | 0X1C;
    // 0x80080FB0: lui         $v1, 0xC811
    ctx->r3 = S32(0XC811 << 16);
    // 0x80080FB4: ori         $v1, $v1, 0x2078
    ctx->r3 = ctx->r3 | 0X2078;
    // 0x80080FB8: addiu       $v0, $a1, 0x10
    ctx->r2 = ADD32(ctx->r5, 0X10);
    // 0x80080FBC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80080FC0: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80080FC4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80080FC8:
    // 0x80080FC8: sw          $a0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r4;
    // 0x80080FCC: sw          $v1, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r3;
    // 0x80080FD0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80080FD4: sb          $v0, -0x3D7E($at)
    MEM_B(-0X3D7E, ctx->r1) = ctx->r2;
L_80080FD8:
    // 0x80080FD8: lbu         $v0, 0x4F($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X4F);
    // 0x80080FDC: beq         $v0, $zero, L_80081010
    if (ctx->r2 == 0) {
        // 0x80080FE0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80081010;
    }
    // 0x80080FE0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80080FE4: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x80080FE8: lbu         $v1, -0x3D7D($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3D7D);
    // 0x80080FEC: beq         $v1, $v0, L_80081058
    if (ctx->r3 == ctx->r2) {
        // 0x80080FF0: lui         $a1, 0xFCFF
        ctx->r5 = S32(0XFCFF << 16);
            goto L_80081058;
    }
    // 0x80080FF0: lui         $a1, 0xFCFF
    ctx->r5 = S32(0XFCFF << 16);
    // 0x80080FF4: ori         $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 | 0XFFFF;
    // 0x80080FF8: lui         $a0, 0xFFFE
    ctx->r4 = S32(0XFFFE << 16);
    // 0x80080FFC: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80081000: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x80081004: ori         $a0, $a0, 0x7638
    ctx->r4 = ctx->r4 | 0X7638;
    // 0x80081008: j           L_8008103C
    // 0x8008100C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_8008103C;
    // 0x8008100C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80081010:
    // 0x80081010: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x80081014: lbu         $v1, -0x3D7D($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3D7D);
    // 0x80081018: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8008101C: beq         $v1, $v0, L_80081058
    if (ctx->r3 == ctx->r2) {
        // 0x80081020: lui         $a1, 0xFCFF
        ctx->r5 = S32(0XFCFF << 16);
            goto L_80081058;
    }
    // 0x80081020: lui         $a1, 0xFCFF
    ctx->r5 = S32(0XFCFF << 16);
    // 0x80081024: ori         $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 | 0XFFFF;
    // 0x80081028: lui         $a0, 0xFFFD
    ctx->r4 = S32(0XFFFD << 16);
    // 0x8008102C: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80081030: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x80081034: ori         $a0, $a0, 0xF638
    ctx->r4 = ctx->r4 | 0XF638;
    // 0x80081038: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_8008103C:
    // 0x8008103C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80081040: sb          $v0, -0x3D7D($at)
    MEM_B(-0X3D7D, ctx->r1) = ctx->r2;
    // 0x80081044: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x80081048: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8008104C: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80081050: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    // 0x80081054: sw          $a0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r4;
L_80081058:
    // 0x80081058: lhu         $a0, 0x2($s6)
    ctx->r4 = MEM_HU(ctx->r22, 0X2);
    // 0x8008105C: addiu       $v0, $zero, 0x67
    ctx->r2 = ADD32(0, 0X67);
    // 0x80081060: beq         $a0, $v0, L_8008118C
    if (ctx->r4 == ctx->r2) {
        // 0x80081064: slti        $v0, $a0, 0x68
        ctx->r2 = SIGNED(ctx->r4) < 0X68 ? 1 : 0;
            goto L_8008118C;
    }
    // 0x80081064: slti        $v0, $a0, 0x68
    ctx->r2 = SIGNED(ctx->r4) < 0X68 ? 1 : 0;
    // 0x80081068: beq         $v0, $zero, L_80081080
    if (ctx->r2 == 0) {
        // 0x8008106C: addiu       $v0, $zero, 0x66
        ctx->r2 = ADD32(0, 0X66);
            goto L_80081080;
    }
    // 0x8008106C: addiu       $v0, $zero, 0x66
    ctx->r2 = ADD32(0, 0X66);
    // 0x80081070: beq         $a0, $v0, L_8008110C
    if (ctx->r4 == ctx->r2) {
        // 0x80081074: addu        $a3, $zero, $zero
        ctx->r7 = ADD32(0, 0);
            goto L_8008110C;
    }
    // 0x80081074: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80081078: j           L_80081218
    // 0x8008107C: nop

        goto L_80081218;
    // 0x8008107C: nop

L_80081080:
    // 0x80081080: addiu       $v0, $zero, 0x111
    ctx->r2 = ADD32(0, 0X111);
    // 0x80081084: bne         $a0, $v0, L_80081218
    if (ctx->r4 != ctx->r2) {
        // 0x80081088: addu        $a3, $zero, $zero
        ctx->r7 = ADD32(0, 0);
            goto L_80081218;
    }
    // 0x80081088: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8008108C: lui         $a2, 0x100
    ctx->r6 = S32(0X100 << 16);
    // 0x80081090: ori         $a2, $a2, 0x3006
    ctx->r6 = ctx->r6 | 0X3006;
    // 0x80081094: lui         $a1, 0x502
    ctx->r5 = S32(0X502 << 16);
    // 0x80081098: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8008109C: lw          $v0, -0x6F10($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6F10);
    // 0x800810A0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x800810A4: lw          $a0, 0x46B0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X46B0);
    // 0x800810A8: ori         $a1, $a1, 0x4
    ctx->r5 = ctx->r5 | 0X4;
    // 0x800810AC: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x800810B0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800810B4: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x800810B8: lui         $v1, 0xDB06
    ctx->r3 = S32(0XDB06 << 16);
    // 0x800810BC: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x800810C0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
L_800810C4:
    // 0x800810C4: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x800810C8: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x800810CC: addiu       $a3, $a3, 0x3
    ctx->r7 = ADD32(ctx->r7, 0X3);
    // 0x800810D0: sw          $a0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r4;
    // 0x800810D4: addiu       $a0, $a0, 0x30
    ctx->r4 = ADD32(ctx->r4, 0X30);
    // 0x800810D8: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x800810DC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800810E0: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x800810E4: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
    // 0x800810E8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800810EC: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x800810F0: slti        $v0, $a3, 0x10
    ctx->r2 = SIGNED(ctx->r7) < 0X10 ? 1 : 0;
    // 0x800810F4: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x800810F8: sw          $a1, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r5;
    // 0x800810FC: bne         $v0, $zero, L_800810C4
    if (ctx->r2 != 0) {
        // 0x80081100: sw          $zero, 0xC($v1)
        MEM_W(0XC, ctx->r3) = 0;
            goto L_800810C4;
    }
    // 0x80081100: sw          $zero, 0xC($v1)
    MEM_W(0XC, ctx->r3) = 0;
    // 0x80081104: j           L_8008123C
    // 0x80081108: nop

        goto L_8008123C;
    // 0x80081108: nop

L_8008110C:
    // 0x8008110C: lui         $a2, 0x100
    ctx->r6 = S32(0X100 << 16);
    // 0x80081110: ori         $a2, $a2, 0x3006
    ctx->r6 = ctx->r6 | 0X3006;
    // 0x80081114: lui         $a1, 0x502
    ctx->r5 = S32(0X502 << 16);
    // 0x80081118: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8008111C: lw          $v0, -0x6F10($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6F10);
    // 0x80081120: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80081124: lw          $a0, 0x46B0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X46B0);
    // 0x80081128: ori         $a1, $a1, 0x4
    ctx->r5 = ctx->r5 | 0X4;
    // 0x8008112C: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x80081130: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80081134: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x80081138: lui         $v1, 0xDB06
    ctx->r3 = S32(0XDB06 << 16);
    // 0x8008113C: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x80081140: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
L_80081144:
    // 0x80081144: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80081148: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x8008114C: addiu       $a3, $a3, 0x3
    ctx->r7 = ADD32(ctx->r7, 0X3);
    // 0x80081150: sw          $a0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r4;
    // 0x80081154: addiu       $a0, $a0, 0x30
    ctx->r4 = ADD32(ctx->r4, 0X30);
    // 0x80081158: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x8008115C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80081160: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80081164: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
    // 0x80081168: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8008116C: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80081170: slti        $v0, $a3, 0xA
    ctx->r2 = SIGNED(ctx->r7) < 0XA ? 1 : 0;
    // 0x80081174: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x80081178: sw          $a1, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r5;
    // 0x8008117C: bne         $v0, $zero, L_80081144
    if (ctx->r2 != 0) {
        // 0x80081180: sw          $zero, 0xC($v1)
        MEM_W(0XC, ctx->r3) = 0;
            goto L_80081144;
    }
    // 0x80081180: sw          $zero, 0xC($v1)
    MEM_W(0XC, ctx->r3) = 0;
    // 0x80081184: j           L_8008123C
    // 0x80081188: nop

        goto L_8008123C;
    // 0x80081188: nop

L_8008118C:
    // 0x8008118C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80081190: lui         $t0, 0x100
    ctx->r8 = S32(0X100 << 16);
    // 0x80081194: ori         $t0, $t0, 0x4008
    ctx->r8 = ctx->r8 | 0X4008;
    // 0x80081198: lui         $a2, 0x602
    ctx->r6 = S32(0X602 << 16);
    // 0x8008119C: ori         $a2, $a2, 0x4
    ctx->r6 = ctx->r6 | 0X4;
    // 0x800811A0: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    // 0x800811A4: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x800811A8: lw          $v0, -0x6F10($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6F10);
    // 0x800811AC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x800811B0: lw          $a0, 0x46B0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X46B0);
    // 0x800811B4: ori         $a1, $a1, 0x406
    ctx->r5 = ctx->r5 | 0X406;
    // 0x800811B8: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x800811BC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800811C0: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x800811C4: lui         $v1, 0xDB06
    ctx->r3 = S32(0XDB06 << 16);
    // 0x800811C8: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x800811CC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
L_800811D0:
    // 0x800811D0: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x800811D4: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x800811D8: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x800811DC: sw          $a0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r4;
    // 0x800811E0: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    // 0x800811E4: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x800811E8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800811EC: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x800811F0: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
    // 0x800811F4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800811F8: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x800811FC: slti        $v0, $a3, 0x15
    ctx->r2 = SIGNED(ctx->r7) < 0X15 ? 1 : 0;
    // 0x80081200: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x80081204: sw          $a2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r6;
    // 0x80081208: bne         $v0, $zero, L_800811D0
    if (ctx->r2 != 0) {
        // 0x8008120C: sw          $a1, 0xC($v1)
        MEM_W(0XC, ctx->r3) = ctx->r5;
            goto L_800811D0;
    }
    // 0x8008120C: sw          $a1, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r5;
    // 0x80081210: j           L_8008123C
    // 0x80081214: nop

        goto L_8008123C;
    // 0x80081214: nop

L_80081218:
    // 0x80081218: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8008121C: lw          $v0, -0x6F10($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6F10);
    // 0x80081220: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x80081224: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80081228: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x8008122C: lui         $v1, 0xDE00
    ctx->r3 = S32(0XDE00 << 16);
    // 0x80081230: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x80081234: lw          $t8, 0x14($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X14);
    // 0x80081238: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
L_8008123C:
    // 0x8008123C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80081240: lw          $v0, -0x6F10($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6F10);
    // 0x80081244: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x80081248: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8008124C: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x80081250: lui         $v1, 0xDB06
    ctx->r3 = S32(0XDB06 << 16);
    // 0x80081254: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x80081258: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
L_8008125C:
    // 0x8008125C: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
    // 0x80081260: lw          $fp, 0x80($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X80);
    // 0x80081264: lw          $s7, 0x7C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X7C);
    // 0x80081268: lw          $s6, 0x78($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X78);
    // 0x8008126C: lw          $s5, 0x74($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X74);
    // 0x80081270: lw          $s4, 0x70($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X70);
    // 0x80081274: lw          $s3, 0x6C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X6C);
    // 0x80081278: lw          $s2, 0x68($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X68);
    // 0x8008127C: lw          $s1, 0x64($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X64);
    // 0x80081280: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x80081284: jr          $ra
    // 0x80081288: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    TRACE_RETURN()
    return;
    // 0x80081288: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_80082FA4_5E3A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80082FA4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80082FA8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80082FAC: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x80082FB0: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80082FB4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80082FB8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80082FBC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80082FC0: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80082FC4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80082FC8: bne         $v1, $v0, L_80083E0C
    if (ctx->r3 != ctx->r2) {
        // 0x80082FCC: addu        $a2, $a1, $zero
        ctx->r6 = ADD32(ctx->r5, 0);
            goto L_80083E0C;
    }
    // 0x80082FCC: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x80082FD0: lhu         $a0, 0x2($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X2);
    // 0x80082FD4: slti        $v0, $a0, 0x2C
    ctx->r2 = SIGNED(ctx->r4) < 0X2C ? 1 : 0;
    // 0x80082FD8: beq         $v0, $zero, L_80083030
    if (ctx->r2 == 0) {
        // 0x80082FDC: slti        $v0, $a0, 0x28
        ctx->r2 = SIGNED(ctx->r4) < 0X28 ? 1 : 0;
            goto L_80083030;
    }
    // 0x80082FDC: slti        $v0, $a0, 0x28
    ctx->r2 = SIGNED(ctx->r4) < 0X28 ? 1 : 0;
    // 0x80082FE0: beq         $v0, $zero, L_80083638
    if (ctx->r2 == 0) {
        // 0x80082FE4: slti        $v0, $a0, 0x20
        ctx->r2 = SIGNED(ctx->r4) < 0X20 ? 1 : 0;
            goto L_80083638;
    }
    // 0x80082FE4: slti        $v0, $a0, 0x20
    ctx->r2 = SIGNED(ctx->r4) < 0X20 ? 1 : 0;
    // 0x80082FE8: beq         $v0, $zero, L_80083008
    if (ctx->r2 == 0) {
        // 0x80082FEC: slti        $v0, $a0, 0x1E
        ctx->r2 = SIGNED(ctx->r4) < 0X1E ? 1 : 0;
            goto L_80083008;
    }
    // 0x80082FEC: slti        $v0, $a0, 0x1E
    ctx->r2 = SIGNED(ctx->r4) < 0X1E ? 1 : 0;
    // 0x80082FF0: beq         $v0, $zero, L_800832C0
    if (ctx->r2 == 0) {
        // 0x80082FF4: slti        $v0, $a0, 0x19
        ctx->r2 = SIGNED(ctx->r4) < 0X19 ? 1 : 0;
            goto L_800832C0;
    }
    // 0x80082FF4: slti        $v0, $a0, 0x19
    ctx->r2 = SIGNED(ctx->r4) < 0X19 ? 1 : 0;
    // 0x80082FF8: bne         $v0, $zero, L_80083E10
    if (ctx->r2 != 0) {
        // 0x80082FFC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80083E10;
    }
    // 0x80082FFC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80083000: j           L_80083094
    // 0x80083004: addiu       $v0, $a2, -0x10
    ctx->r2 = ADD32(ctx->r6, -0X10);
        goto L_80083094;
    // 0x80083004: addiu       $v0, $a2, -0x10
    ctx->r2 = ADD32(ctx->r6, -0X10);
L_80083008:
    // 0x80083008: slti        $v0, $a0, 0x23
    ctx->r2 = SIGNED(ctx->r4) < 0X23 ? 1 : 0;
    // 0x8008300C: bne         $v0, $zero, L_80083E10
    if (ctx->r2 != 0) {
        // 0x80083010: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80083E10;
    }
    // 0x80083010: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80083014: slti        $v0, $a0, 0x25
    ctx->r2 = SIGNED(ctx->r4) < 0X25 ? 1 : 0;
    // 0x80083018: bne         $v0, $zero, L_8008347C
    if (ctx->r2 != 0) {
        // 0x8008301C: addiu       $v0, $zero, 0x26
        ctx->r2 = ADD32(0, 0X26);
            goto L_8008347C;
    }
    // 0x8008301C: addiu       $v0, $zero, 0x26
    ctx->r2 = ADD32(0, 0X26);
    // 0x80083020: beq         $a0, $v0, L_8008347C
    if (ctx->r4 == ctx->r2) {
        // 0x80083024: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8008347C;
    }
    // 0x80083024: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80083028: j           L_80083E10
    // 0x8008302C: nop

        goto L_80083E10;
    // 0x8008302C: nop

L_80083030:
    // 0x80083030: addiu       $v0, $zero, 0xEC
    ctx->r2 = ADD32(0, 0XEC);
    // 0x80083034: beq         $a0, $v0, L_800839B0
    if (ctx->r4 == ctx->r2) {
        // 0x80083038: slti        $v0, $a0, 0xED
        ctx->r2 = SIGNED(ctx->r4) < 0XED ? 1 : 0;
            goto L_800839B0;
    }
    // 0x80083038: slti        $v0, $a0, 0xED
    ctx->r2 = SIGNED(ctx->r4) < 0XED ? 1 : 0;
    // 0x8008303C: beq         $v0, $zero, L_8008305C
    if (ctx->r2 == 0) {
        // 0x80083040: addiu       $v0, $zero, 0x2E
        ctx->r2 = ADD32(0, 0X2E);
            goto L_8008305C;
    }
    // 0x80083040: addiu       $v0, $zero, 0x2E
    ctx->r2 = ADD32(0, 0X2E);
    // 0x80083044: beq         $a0, $v0, L_80083B6C
    if (ctx->r4 == ctx->r2) {
        // 0x80083048: addiu       $v0, $zero, 0x34
        ctx->r2 = ADD32(0, 0X34);
            goto L_80083B6C;
    }
    // 0x80083048: addiu       $v0, $zero, 0x34
    ctx->r2 = ADD32(0, 0X34);
    // 0x8008304C: beq         $a0, $v0, L_800837F4
    if (ctx->r4 == ctx->r2) {
        // 0x80083050: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_800837F4;
    }
    // 0x80083050: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80083054: j           L_80083E10
    // 0x80083058: nop

        goto L_80083E10;
    // 0x80083058: nop

L_8008305C:
    // 0x8008305C: addiu       $v0, $zero, 0xF1
    ctx->r2 = ADD32(0, 0XF1);
    // 0x80083060: beq         $a0, $v0, L_80083C50
    if (ctx->r4 == ctx->r2) {
        // 0x80083064: slti        $v0, $a0, 0xF2
        ctx->r2 = SIGNED(ctx->r4) < 0XF2 ? 1 : 0;
            goto L_80083C50;
    }
    // 0x80083064: slti        $v0, $a0, 0xF2
    ctx->r2 = SIGNED(ctx->r4) < 0XF2 ? 1 : 0;
    // 0x80083068: beq         $v0, $zero, L_80083080
    if (ctx->r2 == 0) {
        // 0x8008306C: addiu       $v0, $zero, 0xEF
        ctx->r2 = ADD32(0, 0XEF);
            goto L_80083080;
    }
    // 0x8008306C: addiu       $v0, $zero, 0xEF
    ctx->r2 = ADD32(0, 0XEF);
    // 0x80083070: beq         $a0, $v0, L_800839B0
    if (ctx->r4 == ctx->r2) {
        // 0x80083074: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_800839B0;
    }
    // 0x80083074: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80083078: j           L_80083E10
    // 0x8008307C: nop

        goto L_80083E10;
    // 0x8008307C: nop

L_80083080:
    // 0x80083080: addiu       $v0, $zero, 0x15F
    ctx->r2 = ADD32(0, 0X15F);
    // 0x80083084: beq         $a0, $v0, L_80083D34
    if (ctx->r4 == ctx->r2) {
        // 0x80083088: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80083D34;
    }
    // 0x80083088: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8008308C: j           L_80083E10
    // 0x80083090: nop

        goto L_80083E10;
    // 0x80083090: nop

L_80083094:
    // 0x80083094: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80083098: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x8008309C: beq         $v0, $zero, L_800831A8
    if (ctx->r2 == 0) {
        // 0x800830A0: addiu       $v0, $a2, -0x12
        ctx->r2 = ADD32(ctx->r6, -0X12);
            goto L_800831A8;
    }
    // 0x800830A0: addiu       $v0, $a2, -0x12
    ctx->r2 = ADD32(ctx->r6, -0X12);
    // 0x800830A4: lui         $s1, 0x8018
    ctx->r17 = S32(0X8018 << 16);
    // 0x800830A8: lhu         $s1, -0x3D60($s1)
    ctx->r17 = MEM_HU(ctx->r17, -0X3D60);
    // 0x800830AC: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x800830B0: lhu         $v0, -0x1AB4($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X1AB4);
    // 0x800830B4: andi        $s0, $s1, 0xFFFF
    ctx->r16 = ctx->r17 & 0XFFFF;
    // 0x800830B8: sltu        $v0, $s0, $v0
    ctx->r2 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x800830BC: beq         $v0, $zero, L_80083E10
    if (ctx->r2 == 0) {
        // 0x800830C0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80083E10;
    }
    // 0x800830C0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x800830C4: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x800830C8: lw          $v1, 0x442C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X442C);
    // 0x800830CC: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x800830D0: lw          $a1, -0x26E8($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X26E8);
    // 0x800830D4: lui         $a2, 0x801E
    ctx->r6 = S32(0X801E << 16);
    // 0x800830D8: lw          $a2, -0x72A8($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X72A8);
    // 0x800830DC: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x800830E0: addiu       $v0, $v0, -0x7C50
    ctx->r2 = ADD32(ctx->r2, -0X7C50);
    // 0x800830E4: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800830E8: sw          $v0, -0x3D38($at)
    MEM_W(-0X3D38, ctx->r1) = ctx->r2;
    // 0x800830EC: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800830F0: sw          $v1, -0x3D40($at)
    MEM_W(-0X3D40, ctx->r1) = ctx->r3;
    // 0x800830F4: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800830F8: sw          $a1, -0x3D3C($at)
    MEM_W(-0X3D3C, ctx->r1) = ctx->r5;
    // 0x800830FC: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80083100: sw          $a2, -0x3D34($at)
    MEM_W(-0X3D34, ctx->r1) = ctx->r6;
    // 0x80083104: jal         0x800281C8
    // 0x80083108: addiu       $a0, $zero, 0xA00
    ctx->r4 = ADD32(0, 0XA00);
    func_800281C8_35C8(rdram, ctx);
        goto after_0;
    // 0x80083108: addiu       $a0, $zero, 0xA00
    ctx->r4 = ADD32(0, 0XA00);
    after_0:
    // 0x8008310C: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x80083110: beq         $a3, $zero, L_80083E0C
    if (ctx->r7 == 0) {
        // 0x80083114: sll         $s0, $s0, 3
        ctx->r16 = S32(ctx->r16 << 3);
            goto L_80083E0C;
    }
    // 0x80083114: sll         $s0, $s0, 3
    ctx->r16 = S32(ctx->r16 << 3);
    // 0x80083118: sb          $zero, 0x2($s3)
    MEM_B(0X2, ctx->r19) = 0;
    // 0x8008311C: sb          $s1, 0x3($s3)
    MEM_B(0X3, ctx->r19) = ctx->r17;
    // 0x80083120: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80083124: lw          $v0, -0x3D40($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3D40);
    // 0x80083128: addu        $a0, $v0, $s0
    ctx->r4 = ADD32(ctx->r2, ctx->r16);
    // 0x8008312C: lh          $v0, 0x4($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X4);
    // 0x80083130: addiu       $s1, $zero, -0x8
    ctx->r17 = ADD32(0, -0X8);
    // 0x80083134: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80083138: addu        $v0, $a3, $v0
    ctx->r2 = ADD32(ctx->r7, ctx->r2);
    // 0x8008313C: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x80083140: and         $s2, $v0, $s1
    ctx->r18 = ctx->r2 & ctx->r17;
    // 0x80083144: sw          $s2, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r18;
    // 0x80083148: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8008314C: lui         $a1, 0x8018
    ctx->r5 = S32(0X8018 << 16);
    // 0x80083150: lw          $a1, -0x3D34($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3D34);
    // 0x80083154: lui         $a2, 0x8018
    ctx->r6 = S32(0X8018 << 16);
    // 0x80083158: lw          $a2, -0x3D38($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3D38);
    // 0x8008315C: lh          $a0, 0x0($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X0);
    // 0x80083160: jal         0x80028D30
    // 0x80083164: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    func_80028D30_4130(rdram, ctx);
        goto after_1;
    // 0x80083164: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    after_1:
    // 0x80083168: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x8008316C: lw          $v1, -0x3D3C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3D3C);
    // 0x80083170: addu        $a0, $v1, $s0
    ctx->r4 = ADD32(ctx->r3, ctx->r16);
    // 0x80083174: lh          $v1, 0x4($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X4);
    // 0x80083178: addu        $a3, $s2, $v0
    ctx->r7 = ADD32(ctx->r18, ctx->r2);
    // 0x8008317C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80083180: addu        $v1, $a3, $v1
    ctx->r3 = ADD32(ctx->r7, ctx->r3);
    // 0x80083184: addiu       $v1, $v1, 0x7
    ctx->r3 = ADD32(ctx->r3, 0X7);
    // 0x80083188: and         $s2, $v1, $s1
    ctx->r18 = ctx->r3 & ctx->r17;
    // 0x8008318C: sw          $s2, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r18;
    // 0x80083190: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80083194: lui         $a1, 0x8018
    ctx->r5 = S32(0X8018 << 16);
    // 0x80083198: lw          $a1, -0x3D34($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3D34);
    // 0x8008319C: lui         $a2, 0x8018
    ctx->r6 = S32(0X8018 << 16);
    // 0x800831A0: j           L_80083E00
    // 0x800831A4: lw          $a2, -0x3D38($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3D38);
        goto L_80083E00;
    // 0x800831A4: lw          $a2, -0x3D38($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3D38);
L_800831A8:
    // 0x800831A8: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x800831AC: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x800831B0: beq         $v0, $zero, L_80083E10
    if (ctx->r2 == 0) {
        // 0x800831B4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80083E10;
    }
    // 0x800831B4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x800831B8: lui         $s1, 0x8018
    ctx->r17 = S32(0X8018 << 16);
    // 0x800831BC: lhu         $s1, -0x3D5E($s1)
    ctx->r17 = MEM_HU(ctx->r17, -0X3D5E);
    // 0x800831C0: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x800831C4: lhu         $v0, -0x1AB4($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X1AB4);
    // 0x800831C8: andi        $s0, $s1, 0xFFFF
    ctx->r16 = ctx->r17 & 0XFFFF;
    // 0x800831CC: sltu        $v0, $s0, $v0
    ctx->r2 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x800831D0: beq         $v0, $zero, L_80083E10
    if (ctx->r2 == 0) {
        // 0x800831D4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80083E10;
    }
    // 0x800831D4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x800831D8: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x800831DC: lw          $v1, -0x738C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X738C);
    // 0x800831E0: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x800831E4: lw          $a1, -0xB94($a1)
    ctx->r5 = MEM_W(ctx->r5, -0XB94);
    // 0x800831E8: lui         $a2, 0x801E
    ctx->r6 = S32(0X801E << 16);
    // 0x800831EC: lw          $a2, -0x72A8($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X72A8);
    // 0x800831F0: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x800831F4: addiu       $v0, $v0, -0x7C50
    ctx->r2 = ADD32(ctx->r2, -0X7C50);
    // 0x800831F8: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800831FC: sw          $v0, -0x3D38($at)
    MEM_W(-0X3D38, ctx->r1) = ctx->r2;
    // 0x80083200: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80083204: sw          $v1, -0x3D40($at)
    MEM_W(-0X3D40, ctx->r1) = ctx->r3;
    // 0x80083208: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008320C: sw          $a1, -0x3D3C($at)
    MEM_W(-0X3D3C, ctx->r1) = ctx->r5;
    // 0x80083210: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80083214: sw          $a2, -0x3D34($at)
    MEM_W(-0X3D34, ctx->r1) = ctx->r6;
    // 0x80083218: jal         0x800281C8
    // 0x8008321C: addiu       $a0, $zero, 0xA00
    ctx->r4 = ADD32(0, 0XA00);
    func_800281C8_35C8(rdram, ctx);
        goto after_2;
    // 0x8008321C: addiu       $a0, $zero, 0xA00
    ctx->r4 = ADD32(0, 0XA00);
    after_2:
    // 0x80083220: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x80083224: beq         $a3, $zero, L_80083E0C
    if (ctx->r7 == 0) {
        // 0x80083228: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80083E0C;
    }
    // 0x80083228: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8008322C: sb          $v0, 0x2($s3)
    MEM_B(0X2, ctx->r19) = ctx->r2;
    // 0x80083230: sb          $s1, 0x3($s3)
    MEM_B(0X3, ctx->r19) = ctx->r17;
    // 0x80083234: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80083238: lw          $v0, -0x3D40($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3D40);
    // 0x8008323C: sll         $s0, $s0, 3
    ctx->r16 = S32(ctx->r16 << 3);
    // 0x80083240: addu        $a0, $v0, $s0
    ctx->r4 = ADD32(ctx->r2, ctx->r16);
    // 0x80083244: lh          $v0, 0x4($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X4);
    // 0x80083248: addiu       $s1, $zero, -0x8
    ctx->r17 = ADD32(0, -0X8);
    // 0x8008324C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80083250: addu        $v0, $a3, $v0
    ctx->r2 = ADD32(ctx->r7, ctx->r2);
    // 0x80083254: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x80083258: and         $s2, $v0, $s1
    ctx->r18 = ctx->r2 & ctx->r17;
    // 0x8008325C: sw          $s2, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r18;
    // 0x80083260: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80083264: lui         $a1, 0x8018
    ctx->r5 = S32(0X8018 << 16);
    // 0x80083268: lw          $a1, -0x3D34($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3D34);
    // 0x8008326C: lui         $a2, 0x8018
    ctx->r6 = S32(0X8018 << 16);
    // 0x80083270: lw          $a2, -0x3D38($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3D38);
    // 0x80083274: lh          $a0, 0x0($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X0);
    // 0x80083278: jal         0x80028D30
    // 0x8008327C: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    func_80028D30_4130(rdram, ctx);
        goto after_3;
    // 0x8008327C: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    after_3:
    // 0x80083280: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x80083284: lw          $v1, -0x3D3C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3D3C);
    // 0x80083288: addu        $a0, $v1, $s0
    ctx->r4 = ADD32(ctx->r3, ctx->r16);
    // 0x8008328C: lh          $v1, 0x4($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X4);
    // 0x80083290: addu        $a3, $s2, $v0
    ctx->r7 = ADD32(ctx->r18, ctx->r2);
    // 0x80083294: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80083298: addu        $v1, $a3, $v1
    ctx->r3 = ADD32(ctx->r7, ctx->r3);
    // 0x8008329C: addiu       $v1, $v1, 0x7
    ctx->r3 = ADD32(ctx->r3, 0X7);
    // 0x800832A0: and         $s2, $v1, $s1
    ctx->r18 = ctx->r3 & ctx->r17;
    // 0x800832A4: sw          $s2, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r18;
    // 0x800832A8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800832AC: lui         $a1, 0x8018
    ctx->r5 = S32(0X8018 << 16);
    // 0x800832B0: lw          $a1, -0x3D34($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3D34);
    // 0x800832B4: lui         $a2, 0x8018
    ctx->r6 = S32(0X8018 << 16);
    // 0x800832B8: j           L_80083E00
    // 0x800832BC: lw          $a2, -0x3D38($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3D38);
        goto L_80083E00;
    // 0x800832BC: lw          $a2, -0x3D38($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3D38);
L_800832C0:
    // 0x800832C0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x800832C4: lw          $v0, 0x624C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X624C);
    // 0x800832C8: beq         $v0, $zero, L_80083E0C
    if (ctx->r2 == 0) {
        // 0x800832CC: addiu       $v0, $a1, -0x10
        ctx->r2 = ADD32(ctx->r5, -0X10);
            goto L_80083E0C;
    }
    // 0x800832CC: addiu       $v0, $a1, -0x10
    ctx->r2 = ADD32(ctx->r5, -0X10);
    // 0x800832D0: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x800832D4: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x800832D8: beq         $v0, $zero, L_800833A4
    if (ctx->r2 == 0) {
        // 0x800832DC: addiu       $v0, $a1, -0x12
        ctx->r2 = ADD32(ctx->r5, -0X12);
            goto L_800833A4;
    }
    // 0x800832DC: addiu       $v0, $a1, -0x12
    ctx->r2 = ADD32(ctx->r5, -0X12);
    // 0x800832E0: lui         $s1, 0x8018
    ctx->r17 = S32(0X8018 << 16);
    // 0x800832E4: lhu         $s1, -0x3D5C($s1)
    ctx->r17 = MEM_HU(ctx->r17, -0X3D5C);
    // 0x800832E8: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x800832EC: lhu         $v0, -0x3D6E($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3D6E);
    // 0x800832F0: andi        $s0, $s1, 0xFFFF
    ctx->r16 = ctx->r17 & 0XFFFF;
    // 0x800832F4: sltu        $v0, $s0, $v0
    ctx->r2 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x800832F8: beq         $v0, $zero, L_80083E10
    if (ctx->r2 == 0) {
        // 0x800832FC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80083E10;
    }
    // 0x800832FC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80083300: jal         0x800281C8
    // 0x80083304: addiu       $a0, $zero, 0xA00
    ctx->r4 = ADD32(0, 0XA00);
    func_800281C8_35C8(rdram, ctx);
        goto after_4;
    // 0x80083304: addiu       $a0, $zero, 0xA00
    ctx->r4 = ADD32(0, 0XA00);
    after_4:
    // 0x80083308: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x8008330C: beq         $a3, $zero, L_80083E0C
    if (ctx->r7 == 0) {
        // 0x80083310: sll         $s0, $s0, 3
        ctx->r16 = S32(ctx->r16 << 3);
            goto L_80083E0C;
    }
    // 0x80083310: sll         $s0, $s0, 3
    ctx->r16 = S32(ctx->r16 << 3);
    // 0x80083314: sb          $zero, 0x2($s3)
    MEM_B(0X2, ctx->r19) = 0;
    // 0x80083318: sb          $s1, 0x3($s3)
    MEM_B(0X3, ctx->r19) = ctx->r17;
    // 0x8008331C: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80083320: lw          $v0, -0x3D28($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3D28);
    // 0x80083324: addu        $a0, $v0, $s0
    ctx->r4 = ADD32(ctx->r2, ctx->r16);
    // 0x80083328: lh          $v0, 0x4($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X4);
    // 0x8008332C: addiu       $s1, $zero, -0x8
    ctx->r17 = ADD32(0, -0X8);
    // 0x80083330: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80083334: addu        $v0, $a3, $v0
    ctx->r2 = ADD32(ctx->r7, ctx->r2);
    // 0x80083338: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x8008333C: and         $s2, $v0, $s1
    ctx->r18 = ctx->r2 & ctx->r17;
    // 0x80083340: sw          $s2, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r18;
    // 0x80083344: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80083348: lui         $a1, 0x8018
    ctx->r5 = S32(0X8018 << 16);
    // 0x8008334C: lw          $a1, -0x3D1C($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3D1C);
    // 0x80083350: lui         $a2, 0x8018
    ctx->r6 = S32(0X8018 << 16);
    // 0x80083354: lw          $a2, -0x3D20($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3D20);
    // 0x80083358: lh          $a0, 0x0($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X0);
    // 0x8008335C: jal         0x80028D30
    // 0x80083360: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    func_80028D30_4130(rdram, ctx);
        goto after_5;
    // 0x80083360: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    after_5:
    // 0x80083364: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x80083368: lw          $v1, -0x3D24($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3D24);
    // 0x8008336C: addu        $a0, $v1, $s0
    ctx->r4 = ADD32(ctx->r3, ctx->r16);
    // 0x80083370: lh          $v1, 0x4($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X4);
    // 0x80083374: addu        $a3, $s2, $v0
    ctx->r7 = ADD32(ctx->r18, ctx->r2);
    // 0x80083378: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8008337C: addu        $v1, $a3, $v1
    ctx->r3 = ADD32(ctx->r7, ctx->r3);
    // 0x80083380: addiu       $v1, $v1, 0x7
    ctx->r3 = ADD32(ctx->r3, 0X7);
    // 0x80083384: and         $s2, $v1, $s1
    ctx->r18 = ctx->r3 & ctx->r17;
    // 0x80083388: sw          $s2, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r18;
    // 0x8008338C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80083390: lui         $a1, 0x8018
    ctx->r5 = S32(0X8018 << 16);
    // 0x80083394: lw          $a1, -0x3D1C($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3D1C);
    // 0x80083398: lui         $a2, 0x8018
    ctx->r6 = S32(0X8018 << 16);
    // 0x8008339C: j           L_80083E00
    // 0x800833A0: lw          $a2, -0x3D20($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3D20);
        goto L_80083E00;
    // 0x800833A0: lw          $a2, -0x3D20($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3D20);
L_800833A4:
    // 0x800833A4: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x800833A8: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x800833AC: beq         $v0, $zero, L_80083E10
    if (ctx->r2 == 0) {
        // 0x800833B0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80083E10;
    }
    // 0x800833B0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x800833B4: lui         $s1, 0x8018
    ctx->r17 = S32(0X8018 << 16);
    // 0x800833B8: lhu         $s1, -0x3D5A($s1)
    ctx->r17 = MEM_HU(ctx->r17, -0X3D5A);
    // 0x800833BC: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x800833C0: lhu         $v0, -0x3D6E($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3D6E);
    // 0x800833C4: andi        $s0, $s1, 0xFFFF
    ctx->r16 = ctx->r17 & 0XFFFF;
    // 0x800833C8: sltu        $v0, $s0, $v0
    ctx->r2 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x800833CC: beq         $v0, $zero, L_80083E10
    if (ctx->r2 == 0) {
        // 0x800833D0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80083E10;
    }
    // 0x800833D0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x800833D4: jal         0x800281C8
    // 0x800833D8: addiu       $a0, $zero, 0xA00
    ctx->r4 = ADD32(0, 0XA00);
    func_800281C8_35C8(rdram, ctx);
        goto after_6;
    // 0x800833D8: addiu       $a0, $zero, 0xA00
    ctx->r4 = ADD32(0, 0XA00);
    after_6:
    // 0x800833DC: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x800833E0: beq         $a3, $zero, L_80083E0C
    if (ctx->r7 == 0) {
        // 0x800833E4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80083E0C;
    }
    // 0x800833E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800833E8: sb          $v0, 0x2($s3)
    MEM_B(0X2, ctx->r19) = ctx->r2;
    // 0x800833EC: sb          $s1, 0x3($s3)
    MEM_B(0X3, ctx->r19) = ctx->r17;
    // 0x800833F0: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x800833F4: lw          $v0, -0x3D28($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3D28);
    // 0x800833F8: sll         $s0, $s0, 3
    ctx->r16 = S32(ctx->r16 << 3);
    // 0x800833FC: addu        $a0, $v0, $s0
    ctx->r4 = ADD32(ctx->r2, ctx->r16);
    // 0x80083400: lh          $v0, 0x4($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X4);
    // 0x80083404: addiu       $s1, $zero, -0x8
    ctx->r17 = ADD32(0, -0X8);
    // 0x80083408: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8008340C: addu        $v0, $a3, $v0
    ctx->r2 = ADD32(ctx->r7, ctx->r2);
    // 0x80083410: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x80083414: and         $s2, $v0, $s1
    ctx->r18 = ctx->r2 & ctx->r17;
    // 0x80083418: sw          $s2, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r18;
    // 0x8008341C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80083420: lui         $a1, 0x8018
    ctx->r5 = S32(0X8018 << 16);
    // 0x80083424: lw          $a1, -0x3D1C($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3D1C);
    // 0x80083428: lui         $a2, 0x8018
    ctx->r6 = S32(0X8018 << 16);
    // 0x8008342C: lw          $a2, -0x3D20($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3D20);
    // 0x80083430: lh          $a0, 0x0($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X0);
    // 0x80083434: jal         0x80028D30
    // 0x80083438: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    func_80028D30_4130(rdram, ctx);
        goto after_7;
    // 0x80083438: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    after_7:
    // 0x8008343C: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x80083440: lw          $v1, -0x3D24($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3D24);
    // 0x80083444: addu        $a0, $v1, $s0
    ctx->r4 = ADD32(ctx->r3, ctx->r16);
    // 0x80083448: lh          $v1, 0x4($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X4);
    // 0x8008344C: addu        $a3, $s2, $v0
    ctx->r7 = ADD32(ctx->r18, ctx->r2);
    // 0x80083450: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80083454: addu        $v1, $a3, $v1
    ctx->r3 = ADD32(ctx->r7, ctx->r3);
    // 0x80083458: addiu       $v1, $v1, 0x7
    ctx->r3 = ADD32(ctx->r3, 0X7);
    // 0x8008345C: and         $s2, $v1, $s1
    ctx->r18 = ctx->r3 & ctx->r17;
    // 0x80083460: sw          $s2, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r18;
    // 0x80083464: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80083468: lui         $a1, 0x8018
    ctx->r5 = S32(0X8018 << 16);
    // 0x8008346C: lw          $a1, -0x3D1C($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3D1C);
    // 0x80083470: lui         $a2, 0x8018
    ctx->r6 = S32(0X8018 << 16);
    // 0x80083474: j           L_80083E00
    // 0x80083478: lw          $a2, -0x3D20($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3D20);
        goto L_80083E00;
    // 0x80083478: lw          $a2, -0x3D20($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3D20);
L_8008347C:
    // 0x8008347C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80083480: lw          $v0, 0x6250($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6250);
    // 0x80083484: beq         $v0, $zero, L_80083E0C
    if (ctx->r2 == 0) {
        // 0x80083488: addiu       $v0, $a2, -0xF
        ctx->r2 = ADD32(ctx->r6, -0XF);
            goto L_80083E0C;
    }
    // 0x80083488: addiu       $v0, $a2, -0xF
    ctx->r2 = ADD32(ctx->r6, -0XF);
    // 0x8008348C: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80083490: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x80083494: beq         $v0, $zero, L_80083560
    if (ctx->r2 == 0) {
        // 0x80083498: addiu       $v0, $a2, -0x11
        ctx->r2 = ADD32(ctx->r6, -0X11);
            goto L_80083560;
    }
    // 0x80083498: addiu       $v0, $a2, -0x11
    ctx->r2 = ADD32(ctx->r6, -0X11);
    // 0x8008349C: lui         $s1, 0x8018
    ctx->r17 = S32(0X8018 << 16);
    // 0x800834A0: lhu         $s1, -0x3D58($s1)
    ctx->r17 = MEM_HU(ctx->r17, -0X3D58);
    // 0x800834A4: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x800834A8: lhu         $v0, -0x3D6C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3D6C);
    // 0x800834AC: andi        $s0, $s1, 0xFFFF
    ctx->r16 = ctx->r17 & 0XFFFF;
    // 0x800834B0: sltu        $v0, $s0, $v0
    ctx->r2 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x800834B4: beq         $v0, $zero, L_80083E10
    if (ctx->r2 == 0) {
        // 0x800834B8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80083E10;
    }
    // 0x800834B8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x800834BC: jal         0x800281C8
    // 0x800834C0: addiu       $a0, $zero, 0xA00
    ctx->r4 = ADD32(0, 0XA00);
    func_800281C8_35C8(rdram, ctx);
        goto after_8;
    // 0x800834C0: addiu       $a0, $zero, 0xA00
    ctx->r4 = ADD32(0, 0XA00);
    after_8:
    // 0x800834C4: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x800834C8: beq         $a3, $zero, L_80083E0C
    if (ctx->r7 == 0) {
        // 0x800834CC: sll         $s0, $s0, 3
        ctx->r16 = S32(ctx->r16 << 3);
            goto L_80083E0C;
    }
    // 0x800834CC: sll         $s0, $s0, 3
    ctx->r16 = S32(ctx->r16 << 3);
    // 0x800834D0: sb          $zero, 0x2($s3)
    MEM_B(0X2, ctx->r19) = 0;
    // 0x800834D4: sb          $s1, 0x3($s3)
    MEM_B(0X3, ctx->r19) = ctx->r17;
    // 0x800834D8: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x800834DC: lw          $v0, -0x3D10($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3D10);
    // 0x800834E0: addu        $a0, $v0, $s0
    ctx->r4 = ADD32(ctx->r2, ctx->r16);
    // 0x800834E4: lh          $v0, 0x4($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X4);
    // 0x800834E8: addiu       $s1, $zero, -0x8
    ctx->r17 = ADD32(0, -0X8);
    // 0x800834EC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800834F0: addu        $v0, $a3, $v0
    ctx->r2 = ADD32(ctx->r7, ctx->r2);
    // 0x800834F4: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x800834F8: and         $s2, $v0, $s1
    ctx->r18 = ctx->r2 & ctx->r17;
    // 0x800834FC: sw          $s2, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r18;
    // 0x80083500: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80083504: lui         $a1, 0x8018
    ctx->r5 = S32(0X8018 << 16);
    // 0x80083508: lw          $a1, -0x3D04($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3D04);
    // 0x8008350C: lui         $a2, 0x8018
    ctx->r6 = S32(0X8018 << 16);
    // 0x80083510: lw          $a2, -0x3D08($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3D08);
    // 0x80083514: lh          $a0, 0x0($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X0);
    // 0x80083518: jal         0x80028D30
    // 0x8008351C: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    func_80028D30_4130(rdram, ctx);
        goto after_9;
    // 0x8008351C: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    after_9:
    // 0x80083520: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x80083524: lw          $v1, -0x3D0C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3D0C);
    // 0x80083528: addu        $a0, $v1, $s0
    ctx->r4 = ADD32(ctx->r3, ctx->r16);
    // 0x8008352C: lh          $v1, 0x4($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X4);
    // 0x80083530: addu        $a3, $s2, $v0
    ctx->r7 = ADD32(ctx->r18, ctx->r2);
    // 0x80083534: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80083538: addu        $v1, $a3, $v1
    ctx->r3 = ADD32(ctx->r7, ctx->r3);
    // 0x8008353C: addiu       $v1, $v1, 0x7
    ctx->r3 = ADD32(ctx->r3, 0X7);
    // 0x80083540: and         $s2, $v1, $s1
    ctx->r18 = ctx->r3 & ctx->r17;
    // 0x80083544: sw          $s2, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r18;
    // 0x80083548: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8008354C: lui         $a1, 0x8018
    ctx->r5 = S32(0X8018 << 16);
    // 0x80083550: lw          $a1, -0x3D04($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3D04);
    // 0x80083554: lui         $a2, 0x8018
    ctx->r6 = S32(0X8018 << 16);
    // 0x80083558: j           L_80083E00
    // 0x8008355C: lw          $a2, -0x3D08($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3D08);
        goto L_80083E00;
    // 0x8008355C: lw          $a2, -0x3D08($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3D08);
L_80083560:
    // 0x80083560: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80083564: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x80083568: beq         $v0, $zero, L_80083E10
    if (ctx->r2 == 0) {
        // 0x8008356C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80083E10;
    }
    // 0x8008356C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80083570: lui         $s1, 0x8018
    ctx->r17 = S32(0X8018 << 16);
    // 0x80083574: lhu         $s1, -0x3D56($s1)
    ctx->r17 = MEM_HU(ctx->r17, -0X3D56);
    // 0x80083578: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008357C: lhu         $v0, -0x3D6C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3D6C);
    // 0x80083580: andi        $s0, $s1, 0xFFFF
    ctx->r16 = ctx->r17 & 0XFFFF;
    // 0x80083584: sltu        $v0, $s0, $v0
    ctx->r2 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x80083588: beq         $v0, $zero, L_80083E10
    if (ctx->r2 == 0) {
        // 0x8008358C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80083E10;
    }
    // 0x8008358C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80083590: jal         0x800281C8
    // 0x80083594: addiu       $a0, $zero, 0xA00
    ctx->r4 = ADD32(0, 0XA00);
    func_800281C8_35C8(rdram, ctx);
        goto after_10;
    // 0x80083594: addiu       $a0, $zero, 0xA00
    ctx->r4 = ADD32(0, 0XA00);
    after_10:
    // 0x80083598: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x8008359C: beq         $a3, $zero, L_80083E0C
    if (ctx->r7 == 0) {
        // 0x800835A0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80083E0C;
    }
    // 0x800835A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800835A4: sb          $v0, 0x2($s3)
    MEM_B(0X2, ctx->r19) = ctx->r2;
    // 0x800835A8: sb          $s1, 0x3($s3)
    MEM_B(0X3, ctx->r19) = ctx->r17;
    // 0x800835AC: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x800835B0: lw          $v0, -0x3D10($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3D10);
    // 0x800835B4: sll         $s0, $s0, 3
    ctx->r16 = S32(ctx->r16 << 3);
    // 0x800835B8: addu        $a0, $v0, $s0
    ctx->r4 = ADD32(ctx->r2, ctx->r16);
    // 0x800835BC: lh          $v0, 0x4($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X4);
    // 0x800835C0: addiu       $s1, $zero, -0x8
    ctx->r17 = ADD32(0, -0X8);
    // 0x800835C4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800835C8: addu        $v0, $a3, $v0
    ctx->r2 = ADD32(ctx->r7, ctx->r2);
    // 0x800835CC: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x800835D0: and         $s2, $v0, $s1
    ctx->r18 = ctx->r2 & ctx->r17;
    // 0x800835D4: sw          $s2, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r18;
    // 0x800835D8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800835DC: lui         $a1, 0x8018
    ctx->r5 = S32(0X8018 << 16);
    // 0x800835E0: lw          $a1, -0x3D04($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3D04);
    // 0x800835E4: lui         $a2, 0x8018
    ctx->r6 = S32(0X8018 << 16);
    // 0x800835E8: lw          $a2, -0x3D08($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3D08);
    // 0x800835EC: lh          $a0, 0x0($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X0);
    // 0x800835F0: jal         0x80028D30
    // 0x800835F4: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    func_80028D30_4130(rdram, ctx);
        goto after_11;
    // 0x800835F4: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    after_11:
    // 0x800835F8: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x800835FC: lw          $v1, -0x3D0C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3D0C);
    // 0x80083600: addu        $a0, $v1, $s0
    ctx->r4 = ADD32(ctx->r3, ctx->r16);
    // 0x80083604: lh          $v1, 0x4($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X4);
    // 0x80083608: addu        $a3, $s2, $v0
    ctx->r7 = ADD32(ctx->r18, ctx->r2);
    // 0x8008360C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80083610: addu        $v1, $a3, $v1
    ctx->r3 = ADD32(ctx->r7, ctx->r3);
    // 0x80083614: addiu       $v1, $v1, 0x7
    ctx->r3 = ADD32(ctx->r3, 0X7);
    // 0x80083618: and         $s2, $v1, $s1
    ctx->r18 = ctx->r3 & ctx->r17;
    // 0x8008361C: sw          $s2, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r18;
    // 0x80083620: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80083624: lui         $a1, 0x8018
    ctx->r5 = S32(0X8018 << 16);
    // 0x80083628: lw          $a1, -0x3D04($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3D04);
    // 0x8008362C: lui         $a2, 0x8018
    ctx->r6 = S32(0X8018 << 16);
    // 0x80083630: j           L_80083E00
    // 0x80083634: lw          $a2, -0x3D08($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3D08);
        goto L_80083E00;
    // 0x80083634: lw          $a2, -0x3D08($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3D08);
L_80083638:
    // 0x80083638: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x8008363C: lw          $v0, 0x6254($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6254);
    // 0x80083640: beq         $v0, $zero, L_80083E0C
    if (ctx->r2 == 0) {
        // 0x80083644: addiu       $v0, $a1, -0x10
        ctx->r2 = ADD32(ctx->r5, -0X10);
            goto L_80083E0C;
    }
    // 0x80083644: addiu       $v0, $a1, -0x10
    ctx->r2 = ADD32(ctx->r5, -0X10);
    // 0x80083648: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8008364C: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x80083650: beq         $v0, $zero, L_8008371C
    if (ctx->r2 == 0) {
        // 0x80083654: addiu       $v0, $a1, -0x12
        ctx->r2 = ADD32(ctx->r5, -0X12);
            goto L_8008371C;
    }
    // 0x80083654: addiu       $v0, $a1, -0x12
    ctx->r2 = ADD32(ctx->r5, -0X12);
    // 0x80083658: lui         $s1, 0x8018
    ctx->r17 = S32(0X8018 << 16);
    // 0x8008365C: lhu         $s1, -0x3D54($s1)
    ctx->r17 = MEM_HU(ctx->r17, -0X3D54);
    // 0x80083660: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80083664: lhu         $v0, -0x3D6A($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3D6A);
    // 0x80083668: andi        $s0, $s1, 0xFFFF
    ctx->r16 = ctx->r17 & 0XFFFF;
    // 0x8008366C: sltu        $v0, $s0, $v0
    ctx->r2 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x80083670: beq         $v0, $zero, L_80083E10
    if (ctx->r2 == 0) {
        // 0x80083674: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80083E10;
    }
    // 0x80083674: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80083678: jal         0x800281C8
    // 0x8008367C: addiu       $a0, $zero, 0xA00
    ctx->r4 = ADD32(0, 0XA00);
    func_800281C8_35C8(rdram, ctx);
        goto after_12;
    // 0x8008367C: addiu       $a0, $zero, 0xA00
    ctx->r4 = ADD32(0, 0XA00);
    after_12:
    // 0x80083680: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x80083684: beq         $a3, $zero, L_80083E0C
    if (ctx->r7 == 0) {
        // 0x80083688: sll         $s0, $s0, 3
        ctx->r16 = S32(ctx->r16 << 3);
            goto L_80083E0C;
    }
    // 0x80083688: sll         $s0, $s0, 3
    ctx->r16 = S32(ctx->r16 << 3);
    // 0x8008368C: sb          $zero, 0x2($s3)
    MEM_B(0X2, ctx->r19) = 0;
    // 0x80083690: sb          $s1, 0x3($s3)
    MEM_B(0X3, ctx->r19) = ctx->r17;
    // 0x80083694: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80083698: lw          $v0, -0x3CF8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3CF8);
    // 0x8008369C: addu        $a0, $v0, $s0
    ctx->r4 = ADD32(ctx->r2, ctx->r16);
    // 0x800836A0: lh          $v0, 0x4($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X4);
    // 0x800836A4: addiu       $s1, $zero, -0x8
    ctx->r17 = ADD32(0, -0X8);
    // 0x800836A8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800836AC: addu        $v0, $a3, $v0
    ctx->r2 = ADD32(ctx->r7, ctx->r2);
    // 0x800836B0: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x800836B4: and         $s2, $v0, $s1
    ctx->r18 = ctx->r2 & ctx->r17;
    // 0x800836B8: sw          $s2, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r18;
    // 0x800836BC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800836C0: lui         $a1, 0x8018
    ctx->r5 = S32(0X8018 << 16);
    // 0x800836C4: lw          $a1, -0x3CEC($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3CEC);
    // 0x800836C8: lui         $a2, 0x8018
    ctx->r6 = S32(0X8018 << 16);
    // 0x800836CC: lw          $a2, -0x3CF0($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3CF0);
    // 0x800836D0: lh          $a0, 0x0($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X0);
    // 0x800836D4: jal         0x80028D30
    // 0x800836D8: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    func_80028D30_4130(rdram, ctx);
        goto after_13;
    // 0x800836D8: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    after_13:
    // 0x800836DC: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x800836E0: lw          $v1, -0x3CF4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3CF4);
    // 0x800836E4: addu        $a0, $v1, $s0
    ctx->r4 = ADD32(ctx->r3, ctx->r16);
    // 0x800836E8: lh          $v1, 0x4($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X4);
    // 0x800836EC: addu        $a3, $s2, $v0
    ctx->r7 = ADD32(ctx->r18, ctx->r2);
    // 0x800836F0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x800836F4: addu        $v1, $a3, $v1
    ctx->r3 = ADD32(ctx->r7, ctx->r3);
    // 0x800836F8: addiu       $v1, $v1, 0x7
    ctx->r3 = ADD32(ctx->r3, 0X7);
    // 0x800836FC: and         $s2, $v1, $s1
    ctx->r18 = ctx->r3 & ctx->r17;
    // 0x80083700: sw          $s2, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r18;
    // 0x80083704: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80083708: lui         $a1, 0x8018
    ctx->r5 = S32(0X8018 << 16);
    // 0x8008370C: lw          $a1, -0x3CEC($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3CEC);
    // 0x80083710: lui         $a2, 0x8018
    ctx->r6 = S32(0X8018 << 16);
    // 0x80083714: j           L_80083E00
    // 0x80083718: lw          $a2, -0x3CF0($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3CF0);
        goto L_80083E00;
    // 0x80083718: lw          $a2, -0x3CF0($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3CF0);
L_8008371C:
    // 0x8008371C: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80083720: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x80083724: beq         $v0, $zero, L_80083E10
    if (ctx->r2 == 0) {
        // 0x80083728: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80083E10;
    }
    // 0x80083728: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8008372C: lui         $s1, 0x8018
    ctx->r17 = S32(0X8018 << 16);
    // 0x80083730: lhu         $s1, -0x3D52($s1)
    ctx->r17 = MEM_HU(ctx->r17, -0X3D52);
    // 0x80083734: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80083738: lhu         $v0, -0x3D6A($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3D6A);
    // 0x8008373C: andi        $s0, $s1, 0xFFFF
    ctx->r16 = ctx->r17 & 0XFFFF;
    // 0x80083740: sltu        $v0, $s0, $v0
    ctx->r2 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x80083744: beq         $v0, $zero, L_80083E10
    if (ctx->r2 == 0) {
        // 0x80083748: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80083E10;
    }
    // 0x80083748: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8008374C: jal         0x800281C8
    // 0x80083750: addiu       $a0, $zero, 0xA00
    ctx->r4 = ADD32(0, 0XA00);
    func_800281C8_35C8(rdram, ctx);
        goto after_14;
    // 0x80083750: addiu       $a0, $zero, 0xA00
    ctx->r4 = ADD32(0, 0XA00);
    after_14:
    // 0x80083754: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x80083758: beq         $a3, $zero, L_80083E0C
    if (ctx->r7 == 0) {
        // 0x8008375C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80083E0C;
    }
    // 0x8008375C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80083760: sb          $v0, 0x2($s3)
    MEM_B(0X2, ctx->r19) = ctx->r2;
    // 0x80083764: sb          $s1, 0x3($s3)
    MEM_B(0X3, ctx->r19) = ctx->r17;
    // 0x80083768: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008376C: lw          $v0, -0x3CF8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3CF8);
    // 0x80083770: sll         $s0, $s0, 3
    ctx->r16 = S32(ctx->r16 << 3);
    // 0x80083774: addu        $a0, $v0, $s0
    ctx->r4 = ADD32(ctx->r2, ctx->r16);
    // 0x80083778: lh          $v0, 0x4($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X4);
    // 0x8008377C: addiu       $s1, $zero, -0x8
    ctx->r17 = ADD32(0, -0X8);
    // 0x80083780: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80083784: addu        $v0, $a3, $v0
    ctx->r2 = ADD32(ctx->r7, ctx->r2);
    // 0x80083788: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x8008378C: and         $s2, $v0, $s1
    ctx->r18 = ctx->r2 & ctx->r17;
    // 0x80083790: sw          $s2, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r18;
    // 0x80083794: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80083798: lui         $a1, 0x8018
    ctx->r5 = S32(0X8018 << 16);
    // 0x8008379C: lw          $a1, -0x3CEC($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3CEC);
    // 0x800837A0: lui         $a2, 0x8018
    ctx->r6 = S32(0X8018 << 16);
    // 0x800837A4: lw          $a2, -0x3CF0($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3CF0);
    // 0x800837A8: lh          $a0, 0x0($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X0);
    // 0x800837AC: jal         0x80028D30
    // 0x800837B0: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    func_80028D30_4130(rdram, ctx);
        goto after_15;
    // 0x800837B0: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    after_15:
    // 0x800837B4: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x800837B8: lw          $v1, -0x3CF4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3CF4);
    // 0x800837BC: addu        $a0, $v1, $s0
    ctx->r4 = ADD32(ctx->r3, ctx->r16);
    // 0x800837C0: lh          $v1, 0x4($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X4);
    // 0x800837C4: addu        $a3, $s2, $v0
    ctx->r7 = ADD32(ctx->r18, ctx->r2);
    // 0x800837C8: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x800837CC: addu        $v1, $a3, $v1
    ctx->r3 = ADD32(ctx->r7, ctx->r3);
    // 0x800837D0: addiu       $v1, $v1, 0x7
    ctx->r3 = ADD32(ctx->r3, 0X7);
    // 0x800837D4: and         $s2, $v1, $s1
    ctx->r18 = ctx->r3 & ctx->r17;
    // 0x800837D8: sw          $s2, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r18;
    // 0x800837DC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800837E0: lui         $a1, 0x8018
    ctx->r5 = S32(0X8018 << 16);
    // 0x800837E4: lw          $a1, -0x3CEC($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3CEC);
    // 0x800837E8: lui         $a2, 0x8018
    ctx->r6 = S32(0X8018 << 16);
    // 0x800837EC: j           L_80083E00
    // 0x800837F0: lw          $a2, -0x3CF0($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3CF0);
        goto L_80083E00;
    // 0x800837F0: lw          $a2, -0x3CF0($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3CF0);
L_800837F4:
    // 0x800837F4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x800837F8: lw          $v0, 0x6258($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6258);
    // 0x800837FC: beq         $v0, $zero, L_80083E0C
    if (ctx->r2 == 0) {
        // 0x80083800: addiu       $v0, $a1, -0xD
        ctx->r2 = ADD32(ctx->r5, -0XD);
            goto L_80083E0C;
    }
    // 0x80083800: addiu       $v0, $a1, -0xD
    ctx->r2 = ADD32(ctx->r5, -0XD);
    // 0x80083804: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80083808: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x8008380C: beq         $v0, $zero, L_800838D8
    if (ctx->r2 == 0) {
        // 0x80083810: addiu       $v0, $a1, -0xF
        ctx->r2 = ADD32(ctx->r5, -0XF);
            goto L_800838D8;
    }
    // 0x80083810: addiu       $v0, $a1, -0xF
    ctx->r2 = ADD32(ctx->r5, -0XF);
    // 0x80083814: lui         $s1, 0x8018
    ctx->r17 = S32(0X8018 << 16);
    // 0x80083818: lhu         $s1, -0x3D50($s1)
    ctx->r17 = MEM_HU(ctx->r17, -0X3D50);
    // 0x8008381C: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80083820: lhu         $v0, -0x3D68($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3D68);
    // 0x80083824: andi        $s0, $s1, 0xFFFF
    ctx->r16 = ctx->r17 & 0XFFFF;
    // 0x80083828: sltu        $v0, $s0, $v0
    ctx->r2 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x8008382C: beq         $v0, $zero, L_80083E10
    if (ctx->r2 == 0) {
        // 0x80083830: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80083E10;
    }
    // 0x80083830: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80083834: jal         0x800281C8
    // 0x80083838: addiu       $a0, $zero, 0xA00
    ctx->r4 = ADD32(0, 0XA00);
    func_800281C8_35C8(rdram, ctx);
        goto after_16;
    // 0x80083838: addiu       $a0, $zero, 0xA00
    ctx->r4 = ADD32(0, 0XA00);
    after_16:
    // 0x8008383C: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x80083840: beq         $a3, $zero, L_80083E0C
    if (ctx->r7 == 0) {
        // 0x80083844: sll         $s0, $s0, 3
        ctx->r16 = S32(ctx->r16 << 3);
            goto L_80083E0C;
    }
    // 0x80083844: sll         $s0, $s0, 3
    ctx->r16 = S32(ctx->r16 << 3);
    // 0x80083848: sb          $zero, 0x2($s3)
    MEM_B(0X2, ctx->r19) = 0;
    // 0x8008384C: sb          $s1, 0x3($s3)
    MEM_B(0X3, ctx->r19) = ctx->r17;
    // 0x80083850: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80083854: lw          $v0, -0x3CE0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3CE0);
    // 0x80083858: addu        $a0, $v0, $s0
    ctx->r4 = ADD32(ctx->r2, ctx->r16);
    // 0x8008385C: lh          $v0, 0x4($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X4);
    // 0x80083860: addiu       $s1, $zero, -0x8
    ctx->r17 = ADD32(0, -0X8);
    // 0x80083864: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80083868: addu        $v0, $a3, $v0
    ctx->r2 = ADD32(ctx->r7, ctx->r2);
    // 0x8008386C: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x80083870: and         $s2, $v0, $s1
    ctx->r18 = ctx->r2 & ctx->r17;
    // 0x80083874: sw          $s2, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r18;
    // 0x80083878: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8008387C: lui         $a1, 0x8018
    ctx->r5 = S32(0X8018 << 16);
    // 0x80083880: lw          $a1, -0x3CD4($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3CD4);
    // 0x80083884: lui         $a2, 0x8018
    ctx->r6 = S32(0X8018 << 16);
    // 0x80083888: lw          $a2, -0x3CD8($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3CD8);
    // 0x8008388C: lh          $a0, 0x0($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X0);
    // 0x80083890: jal         0x80028D30
    // 0x80083894: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    func_80028D30_4130(rdram, ctx);
        goto after_17;
    // 0x80083894: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    after_17:
    // 0x80083898: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x8008389C: lw          $v1, -0x3CDC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3CDC);
    // 0x800838A0: addu        $a0, $v1, $s0
    ctx->r4 = ADD32(ctx->r3, ctx->r16);
    // 0x800838A4: lh          $v1, 0x4($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X4);
    // 0x800838A8: addu        $a3, $s2, $v0
    ctx->r7 = ADD32(ctx->r18, ctx->r2);
    // 0x800838AC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x800838B0: addu        $v1, $a3, $v1
    ctx->r3 = ADD32(ctx->r7, ctx->r3);
    // 0x800838B4: addiu       $v1, $v1, 0x7
    ctx->r3 = ADD32(ctx->r3, 0X7);
    // 0x800838B8: and         $s2, $v1, $s1
    ctx->r18 = ctx->r3 & ctx->r17;
    // 0x800838BC: sw          $s2, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r18;
    // 0x800838C0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800838C4: lui         $a1, 0x8018
    ctx->r5 = S32(0X8018 << 16);
    // 0x800838C8: lw          $a1, -0x3CD4($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3CD4);
    // 0x800838CC: lui         $a2, 0x8018
    ctx->r6 = S32(0X8018 << 16);
    // 0x800838D0: j           L_80083E00
    // 0x800838D4: lw          $a2, -0x3CD8($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3CD8);
        goto L_80083E00;
    // 0x800838D4: lw          $a2, -0x3CD8($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3CD8);
L_800838D8:
    // 0x800838D8: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x800838DC: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x800838E0: beq         $v0, $zero, L_80083E10
    if (ctx->r2 == 0) {
        // 0x800838E4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80083E10;
    }
    // 0x800838E4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x800838E8: lui         $s1, 0x8018
    ctx->r17 = S32(0X8018 << 16);
    // 0x800838EC: lhu         $s1, -0x3D4E($s1)
    ctx->r17 = MEM_HU(ctx->r17, -0X3D4E);
    // 0x800838F0: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x800838F4: lhu         $v0, -0x3D68($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3D68);
    // 0x800838F8: andi        $s0, $s1, 0xFFFF
    ctx->r16 = ctx->r17 & 0XFFFF;
    // 0x800838FC: sltu        $v0, $s0, $v0
    ctx->r2 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x80083900: beq         $v0, $zero, L_80083E10
    if (ctx->r2 == 0) {
        // 0x80083904: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80083E10;
    }
    // 0x80083904: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80083908: jal         0x800281C8
    // 0x8008390C: addiu       $a0, $zero, 0xA00
    ctx->r4 = ADD32(0, 0XA00);
    func_800281C8_35C8(rdram, ctx);
        goto after_18;
    // 0x8008390C: addiu       $a0, $zero, 0xA00
    ctx->r4 = ADD32(0, 0XA00);
    after_18:
    // 0x80083910: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x80083914: beq         $a3, $zero, L_80083E0C
    if (ctx->r7 == 0) {
        // 0x80083918: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80083E0C;
    }
    // 0x80083918: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8008391C: sb          $v0, 0x2($s3)
    MEM_B(0X2, ctx->r19) = ctx->r2;
    // 0x80083920: sb          $s1, 0x3($s3)
    MEM_B(0X3, ctx->r19) = ctx->r17;
    // 0x80083924: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80083928: lw          $v0, -0x3CE0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3CE0);
    // 0x8008392C: sll         $s0, $s0, 3
    ctx->r16 = S32(ctx->r16 << 3);
    // 0x80083930: addu        $a0, $v0, $s0
    ctx->r4 = ADD32(ctx->r2, ctx->r16);
    // 0x80083934: lh          $v0, 0x4($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X4);
    // 0x80083938: addiu       $s1, $zero, -0x8
    ctx->r17 = ADD32(0, -0X8);
    // 0x8008393C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80083940: addu        $v0, $a3, $v0
    ctx->r2 = ADD32(ctx->r7, ctx->r2);
    // 0x80083944: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x80083948: and         $s2, $v0, $s1
    ctx->r18 = ctx->r2 & ctx->r17;
    // 0x8008394C: sw          $s2, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r18;
    // 0x80083950: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80083954: lui         $a1, 0x8018
    ctx->r5 = S32(0X8018 << 16);
    // 0x80083958: lw          $a1, -0x3CD4($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3CD4);
    // 0x8008395C: lui         $a2, 0x8018
    ctx->r6 = S32(0X8018 << 16);
    // 0x80083960: lw          $a2, -0x3CD8($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3CD8);
    // 0x80083964: lh          $a0, 0x0($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X0);
    // 0x80083968: jal         0x80028D30
    // 0x8008396C: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    func_80028D30_4130(rdram, ctx);
        goto after_19;
    // 0x8008396C: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    after_19:
    // 0x80083970: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x80083974: lw          $v1, -0x3CDC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3CDC);
    // 0x80083978: addu        $a0, $v1, $s0
    ctx->r4 = ADD32(ctx->r3, ctx->r16);
    // 0x8008397C: lh          $v1, 0x4($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X4);
    // 0x80083980: addu        $a3, $s2, $v0
    ctx->r7 = ADD32(ctx->r18, ctx->r2);
    // 0x80083984: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80083988: addu        $v1, $a3, $v1
    ctx->r3 = ADD32(ctx->r7, ctx->r3);
    // 0x8008398C: addiu       $v1, $v1, 0x7
    ctx->r3 = ADD32(ctx->r3, 0X7);
    // 0x80083990: and         $s2, $v1, $s1
    ctx->r18 = ctx->r3 & ctx->r17;
    // 0x80083994: sw          $s2, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r18;
    // 0x80083998: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8008399C: lui         $a1, 0x8018
    ctx->r5 = S32(0X8018 << 16);
    // 0x800839A0: lw          $a1, -0x3CD4($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3CD4);
    // 0x800839A4: lui         $a2, 0x8018
    ctx->r6 = S32(0X8018 << 16);
    // 0x800839A8: j           L_80083E00
    // 0x800839AC: lw          $a2, -0x3CD8($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3CD8);
        goto L_80083E00;
    // 0x800839AC: lw          $a2, -0x3CD8($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3CD8);
L_800839B0:
    // 0x800839B0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x800839B4: lw          $v0, 0x6258($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6258);
    // 0x800839B8: beq         $v0, $zero, L_80083E0C
    if (ctx->r2 == 0) {
        // 0x800839BC: addiu       $v0, $a2, -0x4
        ctx->r2 = ADD32(ctx->r6, -0X4);
            goto L_80083E0C;
    }
    // 0x800839BC: addiu       $v0, $a2, -0x4
    ctx->r2 = ADD32(ctx->r6, -0X4);
    // 0x800839C0: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x800839C4: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x800839C8: beq         $v0, $zero, L_80083A94
    if (ctx->r2 == 0) {
        // 0x800839CC: addiu       $v0, $a2, -0x6
        ctx->r2 = ADD32(ctx->r6, -0X6);
            goto L_80083A94;
    }
    // 0x800839CC: addiu       $v0, $a2, -0x6
    ctx->r2 = ADD32(ctx->r6, -0X6);
    // 0x800839D0: lui         $s1, 0x8018
    ctx->r17 = S32(0X8018 << 16);
    // 0x800839D4: lhu         $s1, -0x3D50($s1)
    ctx->r17 = MEM_HU(ctx->r17, -0X3D50);
    // 0x800839D8: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x800839DC: lhu         $v0, -0x3D68($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3D68);
    // 0x800839E0: andi        $s0, $s1, 0xFFFF
    ctx->r16 = ctx->r17 & 0XFFFF;
    // 0x800839E4: sltu        $v0, $s0, $v0
    ctx->r2 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x800839E8: beq         $v0, $zero, L_80083E10
    if (ctx->r2 == 0) {
        // 0x800839EC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80083E10;
    }
    // 0x800839EC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x800839F0: jal         0x800281C8
    // 0x800839F4: addiu       $a0, $zero, 0xA00
    ctx->r4 = ADD32(0, 0XA00);
    func_800281C8_35C8(rdram, ctx);
        goto after_20;
    // 0x800839F4: addiu       $a0, $zero, 0xA00
    ctx->r4 = ADD32(0, 0XA00);
    after_20:
    // 0x800839F8: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x800839FC: beq         $a3, $zero, L_80083E0C
    if (ctx->r7 == 0) {
        // 0x80083A00: sll         $s0, $s0, 3
        ctx->r16 = S32(ctx->r16 << 3);
            goto L_80083E0C;
    }
    // 0x80083A00: sll         $s0, $s0, 3
    ctx->r16 = S32(ctx->r16 << 3);
    // 0x80083A04: sb          $zero, 0x2($s3)
    MEM_B(0X2, ctx->r19) = 0;
    // 0x80083A08: sb          $s1, 0x3($s3)
    MEM_B(0X3, ctx->r19) = ctx->r17;
    // 0x80083A0C: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80083A10: lw          $v0, -0x3CE0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3CE0);
    // 0x80083A14: addu        $a0, $v0, $s0
    ctx->r4 = ADD32(ctx->r2, ctx->r16);
    // 0x80083A18: lh          $v0, 0x4($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X4);
    // 0x80083A1C: addiu       $s1, $zero, -0x8
    ctx->r17 = ADD32(0, -0X8);
    // 0x80083A20: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80083A24: addu        $v0, $a3, $v0
    ctx->r2 = ADD32(ctx->r7, ctx->r2);
    // 0x80083A28: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x80083A2C: and         $s2, $v0, $s1
    ctx->r18 = ctx->r2 & ctx->r17;
    // 0x80083A30: sw          $s2, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r18;
    // 0x80083A34: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80083A38: lui         $a1, 0x8018
    ctx->r5 = S32(0X8018 << 16);
    // 0x80083A3C: lw          $a1, -0x3CD4($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3CD4);
    // 0x80083A40: lui         $a2, 0x8018
    ctx->r6 = S32(0X8018 << 16);
    // 0x80083A44: lw          $a2, -0x3CD8($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3CD8);
    // 0x80083A48: lh          $a0, 0x0($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X0);
    // 0x80083A4C: jal         0x80028D30
    // 0x80083A50: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    func_80028D30_4130(rdram, ctx);
        goto after_21;
    // 0x80083A50: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    after_21:
    // 0x80083A54: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x80083A58: lw          $v1, -0x3CDC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3CDC);
    // 0x80083A5C: addu        $a0, $v1, $s0
    ctx->r4 = ADD32(ctx->r3, ctx->r16);
    // 0x80083A60: lh          $v1, 0x4($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X4);
    // 0x80083A64: addu        $a3, $s2, $v0
    ctx->r7 = ADD32(ctx->r18, ctx->r2);
    // 0x80083A68: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80083A6C: addu        $v1, $a3, $v1
    ctx->r3 = ADD32(ctx->r7, ctx->r3);
    // 0x80083A70: addiu       $v1, $v1, 0x7
    ctx->r3 = ADD32(ctx->r3, 0X7);
    // 0x80083A74: and         $s2, $v1, $s1
    ctx->r18 = ctx->r3 & ctx->r17;
    // 0x80083A78: sw          $s2, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r18;
    // 0x80083A7C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80083A80: lui         $a1, 0x8018
    ctx->r5 = S32(0X8018 << 16);
    // 0x80083A84: lw          $a1, -0x3CD4($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3CD4);
    // 0x80083A88: lui         $a2, 0x8018
    ctx->r6 = S32(0X8018 << 16);
    // 0x80083A8C: j           L_80083E00
    // 0x80083A90: lw          $a2, -0x3CD8($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3CD8);
        goto L_80083E00;
    // 0x80083A90: lw          $a2, -0x3CD8($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3CD8);
L_80083A94:
    // 0x80083A94: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80083A98: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x80083A9C: beq         $v0, $zero, L_80083E10
    if (ctx->r2 == 0) {
        // 0x80083AA0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80083E10;
    }
    // 0x80083AA0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80083AA4: lui         $s1, 0x8018
    ctx->r17 = S32(0X8018 << 16);
    // 0x80083AA8: lhu         $s1, -0x3D4E($s1)
    ctx->r17 = MEM_HU(ctx->r17, -0X3D4E);
    // 0x80083AAC: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80083AB0: lhu         $v0, -0x3D68($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3D68);
    // 0x80083AB4: andi        $s0, $s1, 0xFFFF
    ctx->r16 = ctx->r17 & 0XFFFF;
    // 0x80083AB8: sltu        $v0, $s0, $v0
    ctx->r2 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x80083ABC: beq         $v0, $zero, L_80083E10
    if (ctx->r2 == 0) {
        // 0x80083AC0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80083E10;
    }
    // 0x80083AC0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80083AC4: jal         0x800281C8
    // 0x80083AC8: addiu       $a0, $zero, 0xA00
    ctx->r4 = ADD32(0, 0XA00);
    func_800281C8_35C8(rdram, ctx);
        goto after_22;
    // 0x80083AC8: addiu       $a0, $zero, 0xA00
    ctx->r4 = ADD32(0, 0XA00);
    after_22:
    // 0x80083ACC: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x80083AD0: beq         $a3, $zero, L_80083E0C
    if (ctx->r7 == 0) {
        // 0x80083AD4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80083E0C;
    }
    // 0x80083AD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80083AD8: sb          $v0, 0x2($s3)
    MEM_B(0X2, ctx->r19) = ctx->r2;
    // 0x80083ADC: sb          $s1, 0x3($s3)
    MEM_B(0X3, ctx->r19) = ctx->r17;
    // 0x80083AE0: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80083AE4: lw          $v0, -0x3CE0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3CE0);
    // 0x80083AE8: sll         $s0, $s0, 3
    ctx->r16 = S32(ctx->r16 << 3);
    // 0x80083AEC: addu        $a0, $v0, $s0
    ctx->r4 = ADD32(ctx->r2, ctx->r16);
    // 0x80083AF0: lh          $v0, 0x4($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X4);
    // 0x80083AF4: addiu       $s1, $zero, -0x8
    ctx->r17 = ADD32(0, -0X8);
    // 0x80083AF8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80083AFC: addu        $v0, $a3, $v0
    ctx->r2 = ADD32(ctx->r7, ctx->r2);
    // 0x80083B00: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x80083B04: and         $s2, $v0, $s1
    ctx->r18 = ctx->r2 & ctx->r17;
    // 0x80083B08: sw          $s2, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r18;
    // 0x80083B0C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80083B10: lui         $a1, 0x8018
    ctx->r5 = S32(0X8018 << 16);
    // 0x80083B14: lw          $a1, -0x3CD4($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3CD4);
    // 0x80083B18: lui         $a2, 0x8018
    ctx->r6 = S32(0X8018 << 16);
    // 0x80083B1C: lw          $a2, -0x3CD8($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3CD8);
    // 0x80083B20: lh          $a0, 0x0($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X0);
    // 0x80083B24: jal         0x80028D30
    // 0x80083B28: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    func_80028D30_4130(rdram, ctx);
        goto after_23;
    // 0x80083B28: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    after_23:
    // 0x80083B2C: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x80083B30: lw          $v1, -0x3CDC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3CDC);
    // 0x80083B34: addu        $a0, $v1, $s0
    ctx->r4 = ADD32(ctx->r3, ctx->r16);
    // 0x80083B38: lh          $v1, 0x4($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X4);
    // 0x80083B3C: addu        $a3, $s2, $v0
    ctx->r7 = ADD32(ctx->r18, ctx->r2);
    // 0x80083B40: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80083B44: addu        $v1, $a3, $v1
    ctx->r3 = ADD32(ctx->r7, ctx->r3);
    // 0x80083B48: addiu       $v1, $v1, 0x7
    ctx->r3 = ADD32(ctx->r3, 0X7);
    // 0x80083B4C: and         $s2, $v1, $s1
    ctx->r18 = ctx->r3 & ctx->r17;
    // 0x80083B50: sw          $s2, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r18;
    // 0x80083B54: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80083B58: lui         $a1, 0x8018
    ctx->r5 = S32(0X8018 << 16);
    // 0x80083B5C: lw          $a1, -0x3CD4($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3CD4);
    // 0x80083B60: lui         $a2, 0x8018
    ctx->r6 = S32(0X8018 << 16);
    // 0x80083B64: j           L_80083E00
    // 0x80083B68: lw          $a2, -0x3CD8($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3CD8);
        goto L_80083E00;
    // 0x80083B68: lw          $a2, -0x3CD8($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3CD8);
L_80083B6C:
    // 0x80083B6C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80083B70: lw          $v0, 0x625C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X625C);
    // 0x80083B74: beq         $v0, $zero, L_80083E0C
    if (ctx->r2 == 0) {
        // 0x80083B78: addiu       $v0, $a1, -0xB
        ctx->r2 = ADD32(ctx->r5, -0XB);
            goto L_80083E0C;
    }
    // 0x80083B78: addiu       $v0, $a1, -0xB
    ctx->r2 = ADD32(ctx->r5, -0XB);
    // 0x80083B7C: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80083B80: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x80083B84: beq         $v0, $zero, L_80083E10
    if (ctx->r2 == 0) {
        // 0x80083B88: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80083E10;
    }
    // 0x80083B88: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80083B8C: lui         $s1, 0x8018
    ctx->r17 = S32(0X8018 << 16);
    // 0x80083B90: lhu         $s1, -0x3D4C($s1)
    ctx->r17 = MEM_HU(ctx->r17, -0X3D4C);
    // 0x80083B94: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80083B98: lhu         $v0, -0x3D66($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3D66);
    // 0x80083B9C: andi        $s0, $s1, 0xFFFF
    ctx->r16 = ctx->r17 & 0XFFFF;
    // 0x80083BA0: sltu        $v0, $s0, $v0
    ctx->r2 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x80083BA4: beq         $v0, $zero, L_80083E10
    if (ctx->r2 == 0) {
        // 0x80083BA8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80083E10;
    }
    // 0x80083BA8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80083BAC: jal         0x800281C8
    // 0x80083BB0: addiu       $a0, $zero, 0xA00
    ctx->r4 = ADD32(0, 0XA00);
    func_800281C8_35C8(rdram, ctx);
        goto after_24;
    // 0x80083BB0: addiu       $a0, $zero, 0xA00
    ctx->r4 = ADD32(0, 0XA00);
    after_24:
    // 0x80083BB4: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x80083BB8: beq         $a3, $zero, L_80083E0C
    if (ctx->r7 == 0) {
        // 0x80083BBC: sll         $s0, $s0, 3
        ctx->r16 = S32(ctx->r16 << 3);
            goto L_80083E0C;
    }
    // 0x80083BBC: sll         $s0, $s0, 3
    ctx->r16 = S32(ctx->r16 << 3);
    // 0x80083BC0: sb          $zero, 0x2($s3)
    MEM_B(0X2, ctx->r19) = 0;
    // 0x80083BC4: sb          $s1, 0x3($s3)
    MEM_B(0X3, ctx->r19) = ctx->r17;
    // 0x80083BC8: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80083BCC: lw          $v0, -0x3CC8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3CC8);
    // 0x80083BD0: addu        $a0, $v0, $s0
    ctx->r4 = ADD32(ctx->r2, ctx->r16);
    // 0x80083BD4: lh          $v0, 0x4($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X4);
    // 0x80083BD8: addiu       $s1, $zero, -0x8
    ctx->r17 = ADD32(0, -0X8);
    // 0x80083BDC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80083BE0: addu        $v0, $a3, $v0
    ctx->r2 = ADD32(ctx->r7, ctx->r2);
    // 0x80083BE4: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x80083BE8: and         $s2, $v0, $s1
    ctx->r18 = ctx->r2 & ctx->r17;
    // 0x80083BEC: sw          $s2, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r18;
    // 0x80083BF0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80083BF4: lui         $a1, 0x8018
    ctx->r5 = S32(0X8018 << 16);
    // 0x80083BF8: lw          $a1, -0x3CBC($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3CBC);
    // 0x80083BFC: lui         $a2, 0x8018
    ctx->r6 = S32(0X8018 << 16);
    // 0x80083C00: lw          $a2, -0x3CC0($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3CC0);
    // 0x80083C04: lh          $a0, 0x0($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X0);
    // 0x80083C08: jal         0x80028D30
    // 0x80083C0C: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    func_80028D30_4130(rdram, ctx);
        goto after_25;
    // 0x80083C0C: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    after_25:
    // 0x80083C10: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x80083C14: lw          $v1, -0x3CC4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3CC4);
    // 0x80083C18: addu        $a0, $v1, $s0
    ctx->r4 = ADD32(ctx->r3, ctx->r16);
    // 0x80083C1C: lh          $v1, 0x4($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X4);
    // 0x80083C20: addu        $a3, $s2, $v0
    ctx->r7 = ADD32(ctx->r18, ctx->r2);
    // 0x80083C24: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80083C28: addu        $v1, $a3, $v1
    ctx->r3 = ADD32(ctx->r7, ctx->r3);
    // 0x80083C2C: addiu       $v1, $v1, 0x7
    ctx->r3 = ADD32(ctx->r3, 0X7);
    // 0x80083C30: and         $s2, $v1, $s1
    ctx->r18 = ctx->r3 & ctx->r17;
    // 0x80083C34: sw          $s2, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r18;
    // 0x80083C38: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80083C3C: lui         $a1, 0x8018
    ctx->r5 = S32(0X8018 << 16);
    // 0x80083C40: lw          $a1, -0x3CBC($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3CBC);
    // 0x80083C44: lui         $a2, 0x8018
    ctx->r6 = S32(0X8018 << 16);
    // 0x80083C48: j           L_80083E00
    // 0x80083C4C: lw          $a2, -0x3CC0($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3CC0);
        goto L_80083E00;
    // 0x80083C4C: lw          $a2, -0x3CC0($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3CC0);
L_80083C50:
    // 0x80083C50: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80083C54: lw          $v0, 0x6260($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6260);
    // 0x80083C58: beq         $v0, $zero, L_80083E0C
    if (ctx->r2 == 0) {
        // 0x80083C5C: addiu       $v0, $a1, -0x7
        ctx->r2 = ADD32(ctx->r5, -0X7);
            goto L_80083E0C;
    }
    // 0x80083C5C: addiu       $v0, $a1, -0x7
    ctx->r2 = ADD32(ctx->r5, -0X7);
    // 0x80083C60: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80083C64: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x80083C68: beq         $v0, $zero, L_80083E10
    if (ctx->r2 == 0) {
        // 0x80083C6C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80083E10;
    }
    // 0x80083C6C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80083C70: lui         $s1, 0x8018
    ctx->r17 = S32(0X8018 << 16);
    // 0x80083C74: lhu         $s1, -0x3D48($s1)
    ctx->r17 = MEM_HU(ctx->r17, -0X3D48);
    // 0x80083C78: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80083C7C: lhu         $v0, -0x3D64($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3D64);
    // 0x80083C80: andi        $s0, $s1, 0xFFFF
    ctx->r16 = ctx->r17 & 0XFFFF;
    // 0x80083C84: sltu        $v0, $s0, $v0
    ctx->r2 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x80083C88: beq         $v0, $zero, L_80083E10
    if (ctx->r2 == 0) {
        // 0x80083C8C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80083E10;
    }
    // 0x80083C8C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80083C90: jal         0x800281C8
    // 0x80083C94: addiu       $a0, $zero, 0xA00
    ctx->r4 = ADD32(0, 0XA00);
    func_800281C8_35C8(rdram, ctx);
        goto after_26;
    // 0x80083C94: addiu       $a0, $zero, 0xA00
    ctx->r4 = ADD32(0, 0XA00);
    after_26:
    // 0x80083C98: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x80083C9C: beq         $a3, $zero, L_80083E0C
    if (ctx->r7 == 0) {
        // 0x80083CA0: sll         $s0, $s0, 3
        ctx->r16 = S32(ctx->r16 << 3);
            goto L_80083E0C;
    }
    // 0x80083CA0: sll         $s0, $s0, 3
    ctx->r16 = S32(ctx->r16 << 3);
    // 0x80083CA4: sb          $zero, 0x2($s3)
    MEM_B(0X2, ctx->r19) = 0;
    // 0x80083CA8: sb          $s1, 0x3($s3)
    MEM_B(0X3, ctx->r19) = ctx->r17;
    // 0x80083CAC: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80083CB0: lw          $v0, -0x3CB0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3CB0);
    // 0x80083CB4: addu        $a0, $v0, $s0
    ctx->r4 = ADD32(ctx->r2, ctx->r16);
    // 0x80083CB8: lh          $v0, 0x4($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X4);
    // 0x80083CBC: addiu       $s1, $zero, -0x8
    ctx->r17 = ADD32(0, -0X8);
    // 0x80083CC0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80083CC4: addu        $v0, $a3, $v0
    ctx->r2 = ADD32(ctx->r7, ctx->r2);
    // 0x80083CC8: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x80083CCC: and         $s2, $v0, $s1
    ctx->r18 = ctx->r2 & ctx->r17;
    // 0x80083CD0: sw          $s2, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r18;
    // 0x80083CD4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80083CD8: lui         $a1, 0x8018
    ctx->r5 = S32(0X8018 << 16);
    // 0x80083CDC: lw          $a1, -0x3CA4($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3CA4);
    // 0x80083CE0: lui         $a2, 0x8018
    ctx->r6 = S32(0X8018 << 16);
    // 0x80083CE4: lw          $a2, -0x3CA8($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3CA8);
    // 0x80083CE8: lh          $a0, 0x0($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X0);
    // 0x80083CEC: jal         0x80028D30
    // 0x80083CF0: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    func_80028D30_4130(rdram, ctx);
        goto after_27;
    // 0x80083CF0: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    after_27:
    // 0x80083CF4: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x80083CF8: lw          $v1, -0x3CAC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3CAC);
    // 0x80083CFC: addu        $a0, $v1, $s0
    ctx->r4 = ADD32(ctx->r3, ctx->r16);
    // 0x80083D00: lh          $v1, 0x4($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X4);
    // 0x80083D04: addu        $a3, $s2, $v0
    ctx->r7 = ADD32(ctx->r18, ctx->r2);
    // 0x80083D08: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80083D0C: addu        $v1, $a3, $v1
    ctx->r3 = ADD32(ctx->r7, ctx->r3);
    // 0x80083D10: addiu       $v1, $v1, 0x7
    ctx->r3 = ADD32(ctx->r3, 0X7);
    // 0x80083D14: and         $s2, $v1, $s1
    ctx->r18 = ctx->r3 & ctx->r17;
    // 0x80083D18: sw          $s2, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r18;
    // 0x80083D1C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80083D20: lui         $a1, 0x8018
    ctx->r5 = S32(0X8018 << 16);
    // 0x80083D24: lw          $a1, -0x3CA4($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3CA4);
    // 0x80083D28: lui         $a2, 0x8018
    ctx->r6 = S32(0X8018 << 16);
    // 0x80083D2C: j           L_80083E00
    // 0x80083D30: lw          $a2, -0x3CA8($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3CA8);
        goto L_80083E00;
    // 0x80083D30: lw          $a2, -0x3CA8($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3CA8);
L_80083D34:
    // 0x80083D34: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80083D38: lw          $v0, 0x6264($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6264);
    // 0x80083D3C: beq         $v0, $zero, L_80083E10
    if (ctx->r2 == 0) {
        // 0x80083D40: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80083E10;
    }
    // 0x80083D40: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80083D44: lbu         $s1, 0x67($s3)
    ctx->r17 = MEM_BU(ctx->r19, 0X67);
    // 0x80083D48: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80083D4C: lhu         $v0, -0x3D62($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3D62);
    // 0x80083D50: andi        $s0, $s1, 0xFFFF
    ctx->r16 = ctx->r17 & 0XFFFF;
    // 0x80083D54: sltu        $v0, $s0, $v0
    ctx->r2 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x80083D58: beq         $v0, $zero, L_80083E10
    if (ctx->r2 == 0) {
        // 0x80083D5C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80083E10;
    }
    // 0x80083D5C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80083D60: jal         0x800281C8
    // 0x80083D64: addiu       $a0, $zero, 0xA00
    ctx->r4 = ADD32(0, 0XA00);
    func_800281C8_35C8(rdram, ctx);
        goto after_28;
    // 0x80083D64: addiu       $a0, $zero, 0xA00
    ctx->r4 = ADD32(0, 0XA00);
    after_28:
    // 0x80083D68: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x80083D6C: beq         $a3, $zero, L_80083E0C
    if (ctx->r7 == 0) {
        // 0x80083D70: sll         $s0, $s0, 3
        ctx->r16 = S32(ctx->r16 << 3);
            goto L_80083E0C;
    }
    // 0x80083D70: sll         $s0, $s0, 3
    ctx->r16 = S32(ctx->r16 << 3);
    // 0x80083D74: sb          $zero, 0x2($s3)
    MEM_B(0X2, ctx->r19) = 0;
    // 0x80083D78: sb          $s1, 0x3($s3)
    MEM_B(0X3, ctx->r19) = ctx->r17;
    // 0x80083D7C: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80083D80: lw          $v0, -0x3C98($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3C98);
    // 0x80083D84: addu        $a0, $v0, $s0
    ctx->r4 = ADD32(ctx->r2, ctx->r16);
    // 0x80083D88: lh          $v0, 0x4($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X4);
    // 0x80083D8C: addiu       $s1, $zero, -0x8
    ctx->r17 = ADD32(0, -0X8);
    // 0x80083D90: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80083D94: addu        $v0, $a3, $v0
    ctx->r2 = ADD32(ctx->r7, ctx->r2);
    // 0x80083D98: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x80083D9C: and         $s2, $v0, $s1
    ctx->r18 = ctx->r2 & ctx->r17;
    // 0x80083DA0: sw          $s2, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r18;
    // 0x80083DA4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80083DA8: lui         $a1, 0x8018
    ctx->r5 = S32(0X8018 << 16);
    // 0x80083DAC: lw          $a1, -0x3C8C($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3C8C);
    // 0x80083DB0: lui         $a2, 0x8018
    ctx->r6 = S32(0X8018 << 16);
    // 0x80083DB4: lw          $a2, -0x3C90($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3C90);
    // 0x80083DB8: lh          $a0, 0x0($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X0);
    // 0x80083DBC: jal         0x80028D30
    // 0x80083DC0: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    func_80028D30_4130(rdram, ctx);
        goto after_29;
    // 0x80083DC0: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    after_29:
    // 0x80083DC4: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x80083DC8: lw          $v1, -0x3C94($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3C94);
    // 0x80083DCC: addu        $a0, $v1, $s0
    ctx->r4 = ADD32(ctx->r3, ctx->r16);
    // 0x80083DD0: lh          $v1, 0x4($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X4);
    // 0x80083DD4: addu        $a3, $s2, $v0
    ctx->r7 = ADD32(ctx->r18, ctx->r2);
    // 0x80083DD8: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80083DDC: addu        $v1, $a3, $v1
    ctx->r3 = ADD32(ctx->r7, ctx->r3);
    // 0x80083DE0: addiu       $v1, $v1, 0x7
    ctx->r3 = ADD32(ctx->r3, 0X7);
    // 0x80083DE4: and         $s2, $v1, $s1
    ctx->r18 = ctx->r3 & ctx->r17;
    // 0x80083DE8: sw          $s2, 0x8($s3)
    MEM_W(0X8, ctx->r19) = ctx->r18;
    // 0x80083DEC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80083DF0: lui         $a1, 0x8018
    ctx->r5 = S32(0X8018 << 16);
    // 0x80083DF4: lw          $a1, -0x3C8C($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3C8C);
    // 0x80083DF8: lui         $a2, 0x8018
    ctx->r6 = S32(0X8018 << 16);
    // 0x80083DFC: lw          $a2, -0x3C90($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3C90);
L_80083E00:
    // 0x80083E00: lh          $a0, 0x0($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X0);
    // 0x80083E04: jal         0x80028D30
    // 0x80083E08: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    func_80028D30_4130(rdram, ctx);
        goto after_30;
    // 0x80083E08: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    after_30:
L_80083E0C:
    // 0x80083E0C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80083E10:
    // 0x80083E10: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80083E14: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80083E18: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80083E1C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80083E20: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80083E24: jr          $ra
    // 0x80083E28: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80083E28: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80083E2C: nop

;}
RECOMP_FUNC void func_8006036C_3B76C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006036C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80060370: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80060374: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80060378: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8006037C: addiu       $a1, $a1, 0x55A8
    ctx->r5 = ADD32(ctx->r5, 0X55A8);
    // 0x80060380: srl         $v0, $s0, 3
    ctx->r2 = S32(U32(ctx->r16) >> 3);
    // 0x80060384: addu        $a1, $v0, $a1
    ctx->r5 = ADD32(ctx->r2, ctx->r5);
    // 0x80060388: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8006038C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80060390: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x80060394: andi        $a0, $s0, 0x7
    ctx->r4 = ctx->r16 & 0X7;
    // 0x80060398: srav        $v0, $v0, $a0
    ctx->r2 = S32(SIGNED(ctx->r2) >> (ctx->r4 & 31));
    // 0x8006039C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x800603A0: addiu       $v0, $s0, -0x500
    ctx->r2 = ADD32(ctx->r16, -0X500);
    // 0x800603A4: sltiu       $v0, $v0, 0x20
    ctx->r2 = ctx->r2 < 0X20 ? 1 : 0;
    // 0x800603A8: beq         $v0, $zero, L_800603D8
    if (ctx->r2 == 0) {
        // 0x800603AC: sb          $v1, 0x0($a1)
        MEM_B(0X0, ctx->r5) = ctx->r3;
            goto L_800603D8;
    }
    // 0x800603AC: sb          $v1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r3;
    // 0x800603B0: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_800603B4:
    // 0x800603B4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x800603B8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800603BC: lbu         $v0, 0x4E04($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4E04);
    // 0x800603C0: beq         $v0, $zero, L_80060450
    if (ctx->r2 == 0) {
        // 0x800603C4: addiu       $v0, $s0, 0x1
        ctx->r2 = ADD32(ctx->r16, 0X1);
            goto L_80060450;
    }
    // 0x800603C4: addiu       $v0, $s0, 0x1
    ctx->r2 = ADD32(ctx->r16, 0X1);
    // 0x800603C8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800603CC: slti        $v0, $v1, 0x20
    ctx->r2 = SIGNED(ctx->r3) < 0X20 ? 1 : 0;
    // 0x800603D0: bne         $v0, $zero, L_800603B4
    if (ctx->r2 != 0) {
        // 0x800603D4: nop
    
            goto L_800603B4;
    }
    // 0x800603D4: nop

L_800603D8:
    // 0x800603D8: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x800603DC: addiu       $a1, $a1, 0x4B1C
    ctx->r5 = ADD32(ctx->r5, 0X4B1C);
    // 0x800603E0: lb          $v1, 0x0($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X0);
    // 0x800603E4: sltiu       $v0, $s0, 0x53A
    ctx->r2 = ctx->r16 < 0X53A ? 1 : 0;
    // 0x800603E8: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x800603EC: sltu        $v1, $zero, $v1
    ctx->r3 = 0 < ctx->r3 ? 1 : 0;
    // 0x800603F0: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x800603F4: beq         $v1, $zero, L_80060430
    if (ctx->r3 == 0) {
        // 0x800603F8: sltiu       $v0, $s0, 0x53D
        ctx->r2 = ctx->r16 < 0X53D ? 1 : 0;
            goto L_80060430;
    }
    // 0x800603F8: sltiu       $v0, $s0, 0x53D
    ctx->r2 = ctx->r16 < 0X53D ? 1 : 0;
    // 0x800603FC: beq         $v0, $zero, L_80060434
    if (ctx->r2 == 0) {
        // 0x80060400: addiu       $v1, $s0, -0x500
        ctx->r3 = ADD32(ctx->r16, -0X500);
            goto L_80060434;
    }
    // 0x80060400: addiu       $v1, $s0, -0x500
    ctx->r3 = ADD32(ctx->r16, -0X500);
    // 0x80060404: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80060408: lbu         $v0, 0x564F($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X564F);
    // 0x8006040C: andi        $v1, $v0, 0x20
    ctx->r3 = ctx->r2 & 0X20;
    // 0x80060410: sltu        $v1, $zero, $v1
    ctx->r3 = 0 < ctx->r3 ? 1 : 0;
    // 0x80060414: andi        $a0, $v0, 0x10
    ctx->r4 = ctx->r2 & 0X10;
    // 0x80060418: sltu        $a0, $zero, $a0
    ctx->r4 = 0 < ctx->r4 ? 1 : 0;
    // 0x8006041C: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x80060420: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x80060424: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80060428: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8006042C: sb          $v1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r3;
L_80060430:
    // 0x80060430: addiu       $v1, $s0, -0x500
    ctx->r3 = ADD32(ctx->r16, -0X500);
L_80060434:
    // 0x80060434: sltiu       $v0, $v1, 0x80
    ctx->r2 = ctx->r3 < 0X80 ? 1 : 0;
    // 0x80060438: beq         $v0, $zero, L_80060538
    if (ctx->r2 == 0) {
        // 0x8006043C: sltiu       $v0, $v1, 0x20
        ctx->r2 = ctx->r3 < 0X20 ? 1 : 0;
            goto L_80060538;
    }
    // 0x8006043C: sltiu       $v0, $v1, 0x20
    ctx->r2 = ctx->r3 < 0X20 ? 1 : 0;
    // 0x80060440: beq         $v0, $zero, L_80060460
    if (ctx->r2 == 0) {
        // 0x80060444: addiu       $v0, $s0, -0x520
        ctx->r2 = ADD32(ctx->r16, -0X520);
            goto L_80060460;
    }
    // 0x80060444: addiu       $v0, $s0, -0x520
    ctx->r2 = ADD32(ctx->r16, -0X520);
    // 0x80060448: j           L_80060530
    // 0x8006044C: nop

        goto L_80060530;
    // 0x8006044C: nop

L_80060450:
    // 0x80060450: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80060454: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80060458: j           L_800603D8
    // 0x8006045C: sb          $v0, 0x4E04($at)
    MEM_B(0X4E04, ctx->r1) = ctx->r2;
        goto L_800603D8;
    // 0x8006045C: sb          $v0, 0x4E04($at)
    MEM_B(0X4E04, ctx->r1) = ctx->r2;
L_80060460:
    // 0x80060460: sltiu       $v0, $v0, 0x20
    ctx->r2 = ctx->r2 < 0X20 ? 1 : 0;
    // 0x80060464: beq         $v0, $zero, L_80060508
    if (ctx->r2 == 0) {
        // 0x80060468: addiu       $v0, $zero, 0x528
        ctx->r2 = ADD32(0, 0X528);
            goto L_80060508;
    }
    // 0x80060468: addiu       $v0, $zero, 0x528
    ctx->r2 = ADD32(0, 0X528);
    // 0x8006046C: bne         $s0, $v0, L_800604B8
    if (ctx->r16 != ctx->r2) {
        // 0x80060470: addiu       $v0, $zero, 0x53A
        ctx->r2 = ADD32(0, 0X53A);
            goto L_800604B8;
    }
    // 0x80060470: addiu       $v0, $zero, 0x53A
    ctx->r2 = ADD32(0, 0X53A);
    // 0x80060474: jal         0x8006036C
    // 0x80060478: addiu       $a0, $zero, 0x582
    ctx->r4 = ADD32(0, 0X582);
    func_8006036C_3B76C(rdram, ctx);
        goto after_0;
    // 0x80060478: addiu       $a0, $zero, 0x582
    ctx->r4 = ADD32(0, 0X582);
    after_0:
    // 0x8006047C: jal         0x8006036C
    // 0x80060480: addiu       $a0, $zero, 0x583
    ctx->r4 = ADD32(0, 0X583);
    func_8006036C_3B76C(rdram, ctx);
        goto after_1;
    // 0x80060480: addiu       $a0, $zero, 0x583
    ctx->r4 = ADD32(0, 0X583);
    after_1:
    // 0x80060484: jal         0x8006036C
    // 0x80060488: addiu       $a0, $zero, 0x584
    ctx->r4 = ADD32(0, 0X584);
    func_8006036C_3B76C(rdram, ctx);
        goto after_2;
    // 0x80060488: addiu       $a0, $zero, 0x584
    ctx->r4 = ADD32(0, 0X584);
    after_2:
    // 0x8006048C: jal         0x8006036C
    // 0x80060490: addiu       $a0, $zero, 0x585
    ctx->r4 = ADD32(0, 0X585);
    func_8006036C_3B76C(rdram, ctx);
        goto after_3;
    // 0x80060490: addiu       $a0, $zero, 0x585
    ctx->r4 = ADD32(0, 0X585);
    after_3:
    // 0x80060494: jal         0x8006036C
    // 0x80060498: addiu       $a0, $zero, 0x586
    ctx->r4 = ADD32(0, 0X586);
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x80060498: addiu       $a0, $zero, 0x586
    ctx->r4 = ADD32(0, 0X586);
    after_4:
    // 0x8006049C: jal         0x8006036C
    // 0x800604A0: addiu       $a0, $zero, 0x587
    ctx->r4 = ADD32(0, 0X587);
    func_8006036C_3B76C(rdram, ctx);
        goto after_5;
    // 0x800604A0: addiu       $a0, $zero, 0x587
    ctx->r4 = ADD32(0, 0X587);
    after_5:
    // 0x800604A4: jal         0x8006036C
    // 0x800604A8: addiu       $a0, $zero, 0x5C1
    ctx->r4 = ADD32(0, 0X5C1);
    func_8006036C_3B76C(rdram, ctx);
        goto after_6;
    // 0x800604A8: addiu       $a0, $zero, 0x5C1
    ctx->r4 = ADD32(0, 0X5C1);
    after_6:
    // 0x800604AC: jal         0x8006036C
    // 0x800604B0: addiu       $a0, $zero, 0x5C2
    ctx->r4 = ADD32(0, 0X5C2);
    func_8006036C_3B76C(rdram, ctx);
        goto after_7;
    // 0x800604B0: addiu       $a0, $zero, 0x5C2
    ctx->r4 = ADD32(0, 0X5C2);
    after_7:
    // 0x800604B4: addiu       $v0, $zero, 0x53A
    ctx->r2 = ADD32(0, 0X53A);
L_800604B8:
    // 0x800604B8: bne         $s0, $v0, L_800604D4
    if (ctx->r16 != ctx->r2) {
        // 0x800604BC: addiu       $v0, $zero, 0x53B
        ctx->r2 = ADD32(0, 0X53B);
            goto L_800604D4;
    }
    // 0x800604BC: addiu       $v0, $zero, 0x53B
    ctx->r2 = ADD32(0, 0X53B);
    // 0x800604C0: jal         0x80060590
    // 0x800604C4: addiu       $a0, $zero, 0x5BA
    ctx->r4 = ADD32(0, 0X5BA);
    func_80060590_3B990(rdram, ctx);
        goto after_8;
    // 0x800604C4: addiu       $a0, $zero, 0x5BA
    ctx->r4 = ADD32(0, 0X5BA);
    after_8:
    // 0x800604C8: jal         0x8006036C
    // 0x800604CC: addiu       $a0, $zero, 0x5BB
    ctx->r4 = ADD32(0, 0X5BB);
    func_8006036C_3B76C(rdram, ctx);
        goto after_9;
    // 0x800604CC: addiu       $a0, $zero, 0x5BB
    ctx->r4 = ADD32(0, 0X5BB);
    after_9:
    // 0x800604D0: addiu       $v0, $zero, 0x53B
    ctx->r2 = ADD32(0, 0X53B);
L_800604D4:
    // 0x800604D4: bne         $s0, $v0, L_800604F0
    if (ctx->r16 != ctx->r2) {
        // 0x800604D8: addiu       $v0, $zero, 0x53C
        ctx->r2 = ADD32(0, 0X53C);
            goto L_800604F0;
    }
    // 0x800604D8: addiu       $v0, $zero, 0x53C
    ctx->r2 = ADD32(0, 0X53C);
    // 0x800604DC: jal         0x80060590
    // 0x800604E0: addiu       $a0, $zero, 0x5BB
    ctx->r4 = ADD32(0, 0X5BB);
    func_80060590_3B990(rdram, ctx);
        goto after_10;
    // 0x800604E0: addiu       $a0, $zero, 0x5BB
    ctx->r4 = ADD32(0, 0X5BB);
    after_10:
    // 0x800604E4: jal         0x8006036C
    // 0x800604E8: addiu       $a0, $zero, 0x5BC
    ctx->r4 = ADD32(0, 0X5BC);
    func_8006036C_3B76C(rdram, ctx);
        goto after_11;
    // 0x800604E8: addiu       $a0, $zero, 0x5BC
    ctx->r4 = ADD32(0, 0X5BC);
    after_11:
    // 0x800604EC: addiu       $v0, $zero, 0x53C
    ctx->r2 = ADD32(0, 0X53C);
L_800604F0:
    // 0x800604F0: bne         $s0, $v0, L_80060580
    if (ctx->r16 != ctx->r2) {
        // 0x800604F4: nop
    
            goto L_80060580;
    }
    // 0x800604F4: nop

    // 0x800604F8: jal         0x80060590
    // 0x800604FC: addiu       $a0, $zero, 0x5BC
    ctx->r4 = ADD32(0, 0X5BC);
    func_80060590_3B990(rdram, ctx);
        goto after_12;
    // 0x800604FC: addiu       $a0, $zero, 0x5BC
    ctx->r4 = ADD32(0, 0X5BC);
    after_12:
    // 0x80060500: j           L_80060580
    // 0x80060504: nop

        goto L_80060580;
    // 0x80060504: nop

L_80060508:
    // 0x80060508: addiu       $v0, $s0, -0x540
    ctx->r2 = ADD32(ctx->r16, -0X540);
    // 0x8006050C: sltiu       $v0, $v0, 0x4
    ctx->r2 = ctx->r2 < 0X4 ? 1 : 0;
    // 0x80060510: bne         $v0, $zero, L_80060530
    if (ctx->r2 != 0) {
        // 0x80060514: addiu       $v0, $s0, -0x544
        ctx->r2 = ADD32(ctx->r16, -0X544);
            goto L_80060530;
    }
    // 0x80060514: addiu       $v0, $s0, -0x544
    ctx->r2 = ADD32(ctx->r16, -0X544);
    // 0x80060518: sltiu       $v0, $v0, 0x14
    ctx->r2 = ctx->r2 < 0X14 ? 1 : 0;
    // 0x8006051C: bne         $v0, $zero, L_80060580
    if (ctx->r2 != 0) {
        // 0x80060520: addiu       $v0, $s0, -0x558
        ctx->r2 = ADD32(ctx->r16, -0X558);
            goto L_80060580;
    }
    // 0x80060520: addiu       $v0, $s0, -0x558
    ctx->r2 = ADD32(ctx->r16, -0X558);
    // 0x80060524: sltiu       $v0, $v0, 0x28
    ctx->r2 = ctx->r2 < 0X28 ? 1 : 0;
    // 0x80060528: beq         $v0, $zero, L_8006053C
    if (ctx->r2 == 0) {
        // 0x8006052C: addiu       $v0, $zero, 0x2A
        ctx->r2 = ADD32(0, 0X2A);
            goto L_8006053C;
    }
    // 0x8006052C: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
L_80060530:
    // 0x80060530: jal         0x8006036C
    // 0x80060534: addiu       $a0, $s0, 0x80
    ctx->r4 = ADD32(ctx->r16, 0X80);
    func_8006036C_3B76C(rdram, ctx);
        goto after_13;
    // 0x80060534: addiu       $a0, $s0, 0x80
    ctx->r4 = ADD32(ctx->r16, 0X80);
    after_13:
L_80060538:
    // 0x80060538: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
L_8006053C:
    // 0x8006053C: bne         $s0, $v0, L_80060560
    if (ctx->r16 != ctx->r2) {
        // 0x80060540: addiu       $v0, $zero, 0x51
        ctx->r2 = ADD32(0, 0X51);
            goto L_80060560;
    }
    // 0x80060540: addiu       $v0, $zero, 0x51
    ctx->r2 = ADD32(0, 0X51);
    // 0x80060544: jal         0x8006036C
    // 0x80060548: addiu       $a0, $zero, 0x580
    ctx->r4 = ADD32(0, 0X580);
    func_8006036C_3B76C(rdram, ctx);
        goto after_14;
    // 0x80060548: addiu       $a0, $zero, 0x580
    ctx->r4 = ADD32(0, 0X580);
    after_14:
    // 0x8006054C: jal         0x8006036C
    // 0x80060550: addiu       $a0, $zero, 0x581
    ctx->r4 = ADD32(0, 0X581);
    func_8006036C_3B76C(rdram, ctx);
        goto after_15;
    // 0x80060550: addiu       $a0, $zero, 0x581
    ctx->r4 = ADD32(0, 0X581);
    after_15:
    // 0x80060554: jal         0x8006036C
    // 0x80060558: addiu       $a0, $zero, 0x5C3
    ctx->r4 = ADD32(0, 0X5C3);
    func_8006036C_3B76C(rdram, ctx);
        goto after_16;
    // 0x80060558: addiu       $a0, $zero, 0x5C3
    ctx->r4 = ADD32(0, 0X5C3);
    after_16:
    // 0x8006055C: addiu       $v0, $zero, 0x51
    ctx->r2 = ADD32(0, 0X51);
L_80060560:
    // 0x80060560: bne         $s0, $v0, L_80060580
    if (ctx->r16 != ctx->r2) {
        // 0x80060564: nop
    
            goto L_80060580;
    }
    // 0x80060564: nop

    // 0x80060568: jal         0x8006036C
    // 0x8006056C: addiu       $a0, $zero, 0x5BA
    ctx->r4 = ADD32(0, 0X5BA);
    func_8006036C_3B76C(rdram, ctx);
        goto after_17;
    // 0x8006056C: addiu       $a0, $zero, 0x5BA
    ctx->r4 = ADD32(0, 0X5BA);
    after_17:
    // 0x80060570: jal         0x8006036C
    // 0x80060574: addiu       $a0, $zero, 0x588
    ctx->r4 = ADD32(0, 0X588);
    func_8006036C_3B76C(rdram, ctx);
        goto after_18;
    // 0x80060574: addiu       $a0, $zero, 0x588
    ctx->r4 = ADD32(0, 0X588);
    after_18:
    // 0x80060578: jal         0x8006036C
    // 0x8006057C: addiu       $a0, $zero, 0x589
    ctx->r4 = ADD32(0, 0X589);
    func_8006036C_3B76C(rdram, ctx);
        goto after_19;
    // 0x8006057C: addiu       $a0, $zero, 0x589
    ctx->r4 = ADD32(0, 0X589);
    after_19:
L_80060580:
    // 0x80060580: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80060584: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80060588: jr          $ra
    // 0x8006058C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8006058C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8004DDE8_291E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004DDE8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8004DDEC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8004DDF0: lhu         $v1, 0x14($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X14);
    // 0x8004DDF4: lhu         $v0, 0x14($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X14);
    // 0x8004DDF8: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8004DDFC: sll         $a2, $v1, 16
    ctx->r6 = S32(ctx->r3 << 16);
    // 0x8004DE00: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8004DE04: mult        $a2, $a2
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004DE08: mflo        $a2
    ctx->r6 = lo;
    // 0x8004DE0C: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    // 0x8004DE10: lhu         $v1, 0x16($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X16);
    // 0x8004DE14: lhu         $v0, 0x16($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X16);
    // 0x8004DE18: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8004DE1C: sll         $a3, $v1, 16
    ctx->r7 = S32(ctx->r3 << 16);
    // 0x8004DE20: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    // 0x8004DE24: mult        $a3, $a3
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004DE28: mflo        $a3
    ctx->r7 = lo;
    // 0x8004DE2C: sh          $v1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r3;
    // 0x8004DE30: lhu         $v1, 0x18($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X18);
    // 0x8004DE34: lhu         $v0, 0x18($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X18);
    // 0x8004DE38: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8004DE3C: sll         $a0, $v1, 16
    ctx->r4 = S32(ctx->r3 << 16);
    // 0x8004DE40: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8004DE44: mult        $a0, $a0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004DE48: mflo        $a0
    ctx->r4 = lo;
    // 0x8004DE4C: sh          $v1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r3;
    // 0x8004DE50: addu        $a2, $a2, $a3
    ctx->r6 = ADD32(ctx->r6, ctx->r7);
    // 0x8004DE54: jal         0x80032424
    // 0x8004DE58: addu        $a0, $a2, $a0
    ctx->r4 = ADD32(ctx->r6, ctx->r4);
    func_80032424_D824(rdram, ctx);
        goto after_0;
    // 0x8004DE58: addu        $a0, $a2, $a0
    ctx->r4 = ADD32(ctx->r6, ctx->r4);
    after_0:
    // 0x8004DE5C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8004DE60: jr          $ra
    // 0x8004DE64: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8004DE64: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80029250_4650(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80029250: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80029254: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    // 0x80029258: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8002925C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80029260: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80029264: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80029268: sll         $s0, $v0, 3
    ctx->r16 = S32(ctx->r2 << 3);
    // 0x8002926C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80029270: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80029274: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x80029278: lw          $v0, -0x46C8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X46C8);
    // 0x8002927C: beq         $v0, $zero, L_800292AC
    if (ctx->r2 == 0) {
        // 0x80029280: nop
    
            goto L_800292AC;
    }
    // 0x80029280: nop

    // 0x80029284: jal         0x80029114
    // 0x80029288: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_80029114_4514(rdram, ctx);
        goto after_0;
    // 0x80029288: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_0:
    // 0x8002928C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80029290: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x80029294: lw          $v0, -0x46C8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X46C8);
    // 0x80029298: jalr        $v0
    // 0x8002929C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x8002929C: nop

    after_1:
    // 0x800292A0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800292A4: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x800292A8: sw          $zero, -0x46C8($at)
    MEM_W(-0X46C8, ctx->r1) = 0;
L_800292AC:
    // 0x800292AC: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x800292B0: addiu       $a0, $a0, -0x46C0
    ctx->r4 = ADD32(ctx->r4, -0X46C0);
    // 0x800292B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800292B8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800292BC: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x800292C0: sh          $zero, -0x46CE($at)
    MEM_H(-0X46CE, ctx->r1) = 0;
    // 0x800292C4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800292C8: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x800292CC: sb          $v0, -0x46CF($at)
    MEM_B(-0X46CF, ctx->r1) = ctx->r2;
    // 0x800292D0: jal         0x8009B820
    // 0x800292D4: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    osDestroyThread_recomp(rdram, ctx);
        goto after_2;
    // 0x800292D4: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    after_2:
    // 0x800292D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800292DC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x800292E0: jr          $ra
    // 0x800292E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x800292E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800630E8_3E4E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800630E8: lui         $a1, 0xDFFF
    ctx->r5 = S32(0XDFFF << 16);
    // 0x800630EC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800630F0: lw          $v1, 0x6C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X6C);
    // 0x800630F4: ori         $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 | 0XFFFF;
    // 0x800630F8: and         $v0, $v0, $a1
    ctx->r2 = ctx->r2 & ctx->r5;
    // 0x800630FC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80063100: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x80063104: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80063108: jr          $ra
    // 0x8006310C: sw          $v1, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x8006310C: sw          $v1, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r3;
;}
RECOMP_FUNC void func_8008A800_65C00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008A800: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8008A804: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8008A808: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x8008A80C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8008A810: addu        $s5, $a1, $zero
    ctx->r21 = ADD32(ctx->r5, 0);
    // 0x8008A814: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8008A818: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8008A81C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8008A820: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8008A824: jal         0x8008CFAC
    // 0x8008A828: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_8008CFAC_683AC(rdram, ctx);
        goto after_0;
    // 0x8008A828: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x8008A82C: lui         $s1, 0x8018
    ctx->r17 = S32(0X8018 << 16);
    // 0x8008A830: lw          $s1, 0x4F8C($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X4F8C);
    // 0x8008A834: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x8008A838: lw          $v1, 0x4F84($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4F84);
    // 0x8008A83C: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8008A840: blez        $v1, L_8008AA20
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8008A844: addu        $s3, $v0, $zero
        ctx->r19 = ADD32(ctx->r2, 0);
            goto L_8008AA20;
    }
    // 0x8008A844: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x8008A848: addiu       $s0, $s1, 0x34
    ctx->r16 = ADD32(ctx->r17, 0X34);
L_8008A84C:
    // 0x8008A84C: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x8008A850: bnel        $v0, $s3, L_8008AA08
    if (ctx->r2 != ctx->r19) {
        // 0x8008A854: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_8008AA08;
    }
    goto skip_0;
    // 0x8008A854: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_0:
    // 0x8008A858: lw          $v0, 0x40($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X40);
    // 0x8008A85C: bnel        $v0, $s4, L_8008AA08
    if (ctx->r2 != ctx->r20) {
        // 0x8008A860: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_8008AA08;
    }
    goto skip_1;
    // 0x8008A860: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_1:
    // 0x8008A864: lw          $v0, -0x30($s0)
    ctx->r2 = MEM_W(ctx->r16, -0X30);
    // 0x8008A868: beql        $v0, $zero, L_8008AA08
    if (ctx->r2 == 0) {
        // 0x8008A86C: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_8008AA08;
    }
    goto skip_2;
    // 0x8008A86C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_2:
L_8008A870:
    // 0x8008A870: lw          $a1, -0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, -0X30);
    // 0x8008A874: lbu         $a0, 0x0($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X0);
    // 0x8008A878: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x8008A87C: sltiu       $v0, $v1, 0x80
    ctx->r2 = ctx->r3 < 0X80 ? 1 : 0;
    // 0x8008A880: bne         $v0, $zero, L_8008A8C4
    if (ctx->r2 != 0) {
        // 0x8008A884: addiu       $v0, $a1, 0x1
        ctx->r2 = ADD32(ctx->r5, 0X1);
            goto L_8008A8C4;
    }
    // 0x8008A884: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x8008A888: addiu       $v0, $zero, 0xAB
    ctx->r2 = ADD32(0, 0XAB);
    // 0x8008A88C: bne         $v1, $v0, L_8008A8A0
    if (ctx->r3 != ctx->r2) {
        // 0x8008A890: andi        $v0, $a0, 0x7F
        ctx->r2 = ctx->r4 & 0X7F;
            goto L_8008A8A0;
    }
    // 0x8008A890: andi        $v0, $a0, 0x7F
    ctx->r2 = ctx->r4 & 0X7F;
    // 0x8008A894: lbu         $v0, 0x1($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X1);
    // 0x8008A898: beq         $v0, $s5, L_8008A988
    if (ctx->r2 == ctx->r21) {
        // 0x8008A89C: andi        $v0, $a0, 0x7F
        ctx->r2 = ctx->r4 & 0X7F;
            goto L_8008A988;
    }
    // 0x8008A89C: andi        $v0, $a0, 0x7F
    ctx->r2 = ctx->r4 & 0X7F;
L_8008A8A0:
    // 0x8008A8A0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8008A8A4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008A8A8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8008A8AC: lw          $v0, -0x1490($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1490);
    // 0x8008A8B0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8008A8B4: jalr        $v0
    // 0x8008A8B8: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x8008A8B8: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    after_1:
    // 0x8008A8BC: j           L_8008A97C
    // 0x8008A8C0: sw          $v0, -0x30($s0)
    MEM_W(-0X30, ctx->r16) = ctx->r2;
        goto L_8008A97C;
    // 0x8008A8C0: sw          $v0, -0x30($s0)
    MEM_W(-0X30, ctx->r16) = ctx->r2;
L_8008A8C4:
    // 0x8008A8C4: lbu         $v1, 0x9E($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9E);
    // 0x8008A8C8: beq         $v1, $zero, L_8008A904
    if (ctx->r3 == 0) {
        // 0x8008A8CC: sw          $v0, -0x30($s0)
        MEM_W(-0X30, ctx->r16) = ctx->r2;
            goto L_8008A904;
    }
    // 0x8008A8CC: sw          $v0, -0x30($s0)
    MEM_W(-0X30, ctx->r16) = ctx->r2;
    // 0x8008A8D0: addiu       $v0, $a1, 0x2
    ctx->r2 = ADD32(ctx->r5, 0X2);
    // 0x8008A8D4: sw          $v0, -0x30($s0)
    MEM_W(-0X30, ctx->r16) = ctx->r2;
    // 0x8008A8D8: lbu         $a1, 0x1($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X1);
    // 0x8008A8DC: andi        $v0, $a1, 0xFF
    ctx->r2 = ctx->r5 & 0XFF;
    // 0x8008A8E0: sltiu       $v0, $v0, 0x80
    ctx->r2 = ctx->r2 < 0X80 ? 1 : 0;
    // 0x8008A8E4: bne         $v0, $zero, L_8008A90C
    if (ctx->r2 != 0) {
        // 0x8008A8E8: sb          $a1, 0x87($s0)
        MEM_B(0X87, ctx->r16) = ctx->r5;
            goto L_8008A90C;
    }
    // 0x8008A8E8: sb          $a1, 0x87($s0)
    MEM_B(0X87, ctx->r16) = ctx->r5;
    // 0x8008A8EC: andi        $v0, $a1, 0x7F
    ctx->r2 = ctx->r5 & 0X7F;
    // 0x8008A8F0: sb          $v0, 0x87($s0)
    MEM_B(0X87, ctx->r16) = ctx->r2;
    // 0x8008A8F4: lbu         $v0, 0x87($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X87);
    // 0x8008A8F8: sb          $zero, 0x9E($s0)
    MEM_B(0X9E, ctx->r16) = 0;
    // 0x8008A8FC: j           L_8008A90C
    // 0x8008A900: sb          $v0, 0x9F($s0)
    MEM_B(0X9F, ctx->r16) = ctx->r2;
        goto L_8008A90C;
    // 0x8008A900: sb          $v0, 0x9F($s0)
    MEM_B(0X9F, ctx->r16) = ctx->r2;
L_8008A904:
    // 0x8008A904: lbu         $v0, 0x9F($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9F);
    // 0x8008A908: sb          $v0, 0x87($s0)
    MEM_B(0X87, ctx->r16) = ctx->r2;
L_8008A90C:
    // 0x8008A90C: lhu         $v1, 0x78($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X78);
    // 0x8008A910: beq         $v1, $zero, L_8008A924
    if (ctx->r3 == 0) {
        // 0x8008A914: nop
    
            goto L_8008A924;
    }
    // 0x8008A914: nop

    // 0x8008A918: lbu         $v0, 0x83($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X83);
    // 0x8008A91C: beql        $v0, $zero, L_8008A968
    if (ctx->r2 == 0) {
        // 0x8008A920: sh          $v1, 0x66($s0)
        MEM_H(0X66, ctx->r16) = ctx->r3;
            goto L_8008A968;
    }
    goto skip_3;
    // 0x8008A920: sh          $v1, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r3;
    skip_3:
L_8008A924:
    // 0x8008A924: lw          $v1, -0x30($s0)
    ctx->r3 = MEM_W(ctx->r16, -0X30);
    // 0x8008A928: sb          $zero, 0x83($s0)
    MEM_B(0X83, ctx->r16) = 0;
    // 0x8008A92C: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8008A930: sw          $v0, -0x30($s0)
    MEM_W(-0X30, ctx->r16) = ctx->r2;
    // 0x8008A934: lbu         $a0, 0x0($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X0);
    // 0x8008A938: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x8008A93C: sltiu       $v0, $v0, 0x80
    ctx->r2 = ctx->r2 < 0X80 ? 1 : 0;
    // 0x8008A940: beq         $v0, $zero, L_8008A950
    if (ctx->r2 == 0) {
        // 0x8008A944: addiu       $v0, $v1, 0x2
        ctx->r2 = ADD32(ctx->r3, 0X2);
            goto L_8008A950;
    }
    // 0x8008A944: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
    // 0x8008A948: j           L_8008A968
    // 0x8008A94C: sh          $a0, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r4;
        goto L_8008A968;
    // 0x8008A94C: sh          $a0, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r4;
L_8008A950:
    // 0x8008A950: sw          $v0, -0x30($s0)
    MEM_W(-0X30, ctx->r16) = ctx->r2;
    // 0x8008A954: lbu         $v1, 0x1($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X1);
    // 0x8008A958: andi        $v0, $a0, 0x7F
    ctx->r2 = ctx->r4 & 0X7F;
    // 0x8008A95C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8008A960: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8008A964: sh          $v1, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r3;
L_8008A968:
    // 0x8008A968: lhu         $v0, 0x66($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X66);
    // 0x8008A96C: lw          $v1, -0x28($s0)
    ctx->r3 = MEM_W(ctx->r16, -0X28);
    // 0x8008A970: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8008A974: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8008A978: sw          $v1, -0x28($s0)
    MEM_W(-0X28, ctx->r16) = ctx->r3;
L_8008A97C:
    // 0x8008A97C: lw          $v0, -0x30($s0)
    ctx->r2 = MEM_W(ctx->r16, -0X30);
    // 0x8008A980: bne         $v0, $zero, L_8008A870
    if (ctx->r2 != 0) {
        // 0x8008A984: nop
    
            goto L_8008A870;
    }
    // 0x8008A984: nop

L_8008A988:
    // 0x8008A988: lw          $v0, -0x28($s0)
    ctx->r2 = MEM_W(ctx->r16, -0X28);
    // 0x8008A98C: lw          $v1, -0x30($s0)
    ctx->r3 = MEM_W(ctx->r16, -0X30);
    // 0x8008A990: beq         $v1, $zero, L_8008A9D8
    if (ctx->r3 == 0) {
        // 0x8008A994: sw          $v0, 0x8($s0)
        MEM_W(0X8, ctx->r16) = ctx->r2;
            goto L_8008A9D8;
    }
    // 0x8008A994: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x8008A998: lbu         $a0, 0x2($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X2);
    // 0x8008A99C: slti        $v0, $a0, 0x80
    ctx->r2 = SIGNED(ctx->r4) < 0X80 ? 1 : 0;
    // 0x8008A9A0: bne         $v0, $zero, L_8008A9BC
    if (ctx->r2 != 0) {
        // 0x8008A9A4: addiu       $a1, $v1, 0x3
        ctx->r5 = ADD32(ctx->r3, 0X3);
            goto L_8008A9BC;
    }
    // 0x8008A9A4: addiu       $a1, $v1, 0x3
    ctx->r5 = ADD32(ctx->r3, 0X3);
    // 0x8008A9A8: andi        $a0, $a0, 0x7F
    ctx->r4 = ctx->r4 & 0X7F;
    // 0x8008A9AC: lbu         $v0, 0x3($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X3);
    // 0x8008A9B0: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x8008A9B4: addiu       $a1, $v1, 0x4
    ctx->r5 = ADD32(ctx->r3, 0X4);
    // 0x8008A9B8: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
L_8008A9BC:
    // 0x8008A9BC: lw          $v1, -0x28($s0)
    ctx->r3 = MEM_W(ctx->r16, -0X28);
    // 0x8008A9C0: sll         $v0, $a0, 8
    ctx->r2 = S32(ctx->r4 << 8);
    // 0x8008A9C4: sh          $zero, 0x76($s0)
    MEM_H(0X76, ctx->r16) = 0;
    // 0x8008A9C8: sh          $a0, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r4;
    // 0x8008A9CC: sw          $a1, -0x30($s0)
    MEM_W(-0X30, ctx->r16) = ctx->r5;
    // 0x8008A9D0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8008A9D4: sw          $v1, -0x28($s0)
    MEM_W(-0X28, ctx->r16) = ctx->r3;
L_8008A9D8:
    // 0x8008A9D8: lw          $v0, -0x28($s0)
    ctx->r2 = MEM_W(ctx->r16, -0X28);
    // 0x8008A9DC: lw          $v1, 0x4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4);
    // 0x8008A9E0: beq         $v1, $zero, L_8008A9F0
    if (ctx->r3 == 0) {
        // 0x8008A9E4: sw          $v0, 0xC($s0)
        MEM_W(0XC, ctx->r16) = ctx->r2;
            goto L_8008A9F0;
    }
    // 0x8008A9E4: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x8008A9E8: jal         0x8008C480
    // 0x8008A9EC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8008C480_67880(rdram, ctx);
        goto after_2;
    // 0x8008A9EC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
L_8008A9F0:
    // 0x8008A9F0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8008A9F4: beql        $v0, $zero, L_8008AA08
    if (ctx->r2 == 0) {
        // 0x8008A9F8: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_8008AA08;
    }
    goto skip_4;
    // 0x8008A9F8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_4:
    // 0x8008A9FC: jal         0x8008C544
    // 0x8008AA00: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8008C544_67944(rdram, ctx);
        goto after_3;
    // 0x8008AA00: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
    // 0x8008AA04: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8008AA08:
    // 0x8008AA08: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008AA0C: lw          $v0, 0x4F84($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4F84);
    // 0x8008AA10: addiu       $s0, $s0, 0x13C
    ctx->r16 = ADD32(ctx->r16, 0X13C);
    // 0x8008AA14: slt         $v0, $s2, $v0
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8008AA18: bne         $v0, $zero, L_8008A84C
    if (ctx->r2 != 0) {
        // 0x8008AA1C: addiu       $s1, $s1, 0x13C
        ctx->r17 = ADD32(ctx->r17, 0X13C);
            goto L_8008A84C;
    }
    // 0x8008AA1C: addiu       $s1, $s1, 0x13C
    ctx->r17 = ADD32(ctx->r17, 0X13C);
L_8008AA20:
    // 0x8008AA20: jal         0x8008B1A8
    // 0x8008AA24: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_8008B1A8_665A8(rdram, ctx);
        goto after_4;
    // 0x8008AA24: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_4:
    // 0x8008AA28: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x8008AA2C: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8008AA30: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8008AA34: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8008AA38: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8008AA3C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8008AA40: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8008AA44: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8008AA48: jr          $ra
    // 0x8008AA4C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8008AA4C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800772E8_526E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800772E8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800772EC: sh          $zero, -0xCBE($at)
    MEM_H(-0XCBE, ctx->r1) = 0;
    // 0x800772F0: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x800772F4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x800772F8: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x800772FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80077300: beq         $v1, $v0, L_80077370
    if (ctx->r3 == ctx->r2) {
        // 0x80077304: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80077370;
    }
    // 0x80077304: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80077308: beql        $v0, $zero, L_80077320
    if (ctx->r2 == 0) {
        // 0x8007730C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80077320;
    }
    goto skip_0;
    // 0x8007730C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80077310: beq         $v1, $zero, L_80077338
    if (ctx->r3 == 0) {
        // 0x80077314: nop
    
            goto L_80077338;
    }
    // 0x80077314: nop

    // 0x80077318: j           L_80077408
    // 0x8007731C: nop

        goto L_80077408;
    // 0x8007731C: nop

L_80077320:
    // 0x80077320: beq         $v1, $v0, L_80077398
    if (ctx->r3 == ctx->r2) {
        // 0x80077324: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80077398;
    }
    // 0x80077324: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80077328: beq         $v1, $v0, L_800773B8
    if (ctx->r3 == ctx->r2) {
        // 0x8007732C: nop
    
            goto L_800773B8;
    }
    // 0x8007732C: nop

    // 0x80077330: j           L_80077408
    // 0x80077334: nop

        goto L_80077408;
    // 0x80077334: nop

L_80077338:
    // 0x80077338: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8007733C: lb          $v0, -0x3BC8($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC8);
    // 0x80077340: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80077344: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80077348: lbu         $v0, -0x3464($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X3464);
    // 0x8007734C: sb          $v0, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r2;
    // 0x80077350: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80077354: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x80077358: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x8007735C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80077360: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
    // 0x80077364: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80077368: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8007736C: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_80077370:
    // 0x80077370: lhu         $v0, 0x124($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X124);
    // 0x80077374: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x80077378: addiu       $a2, $a2, -0xCBE
    ctx->r6 = ADD32(ctx->r6, -0XCBE);
    // 0x8007737C: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
    // 0x80077380: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80077384: slti        $v0, $v0, 0x25
    ctx->r2 = SIGNED(ctx->r2) < 0X25 ? 1 : 0;
    // 0x80077388: beq         $v0, $zero, L_800773DC
    if (ctx->r2 == 0) {
        // 0x8007738C: nop
    
            goto L_800773DC;
    }
    // 0x8007738C: nop

    // 0x80077390: j           L_80077408
    // 0x80077394: nop

        goto L_80077408;
    // 0x80077394: nop

L_80077398:
    // 0x80077398: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8007739C: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x800773A0: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x800773A4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800773A8: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
    // 0x800773AC: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x800773B0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800773B4: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_800773B8:
    // 0x800773B8: lhu         $v0, 0x124($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X124);
    // 0x800773BC: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x800773C0: addiu       $a2, $a2, -0xCBE
    ctx->r6 = ADD32(ctx->r6, -0XCBE);
    // 0x800773C4: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
    // 0x800773C8: lbu         $v0, 0xB($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XB);
    // 0x800773CC: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x800773D0: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800773D4: beq         $v0, $zero, L_80077408
    if (ctx->r2 == 0) {
        // 0x800773D8: nop
    
            goto L_80077408;
    }
    // 0x800773D8: nop

L_800773DC:
    // 0x800773DC: lbu         $v0, 0x5($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X5);
    // 0x800773E0: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x800773E4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800773E8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800773EC: sb          $v0, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r2;
    // 0x800773F0: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
    // 0x800773F4: lbu         $v0, 0xBD($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XBD);
    // 0x800773F8: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
    // 0x800773FC: andi        $v0, $v0, 0xDF
    ctx->r2 = ctx->r2 & 0XDF;
    // 0x80077400: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x80077404: sb          $v0, 0xBD($a1)
    MEM_B(0XBD, ctx->r5) = ctx->r2;
L_80077408:
    // 0x80077408: jr          $ra
    // 0x8007740C: nop

    TRACE_RETURN()
    return;
    // 0x8007740C: nop

;}
RECOMP_FUNC void func_80076BFC_51FFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80076BFC: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80076C00: lw          $v0, -0x3C04($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3C04);
    // 0x80076C04: lui         $v1, 0x8888
    ctx->r3 = S32(0X8888 << 16);
    // 0x80076C08: ori         $v1, $v1, 0x8889
    ctx->r3 = ctx->r3 | 0X8889;
    // 0x80076C0C: multu       $v0, $v1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80076C10: mfhi        $v0
    ctx->r2 = hi;
    // 0x80076C14: srl         $a0, $v0, 4
    ctx->r4 = S32(U32(ctx->r2) >> 4);
    // 0x80076C18: nop

    // 0x80076C1C: multu       $a0, $v1
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80076C20: mfhi        $v0
    ctx->r2 = hi;
    // 0x80076C24: lui         $a3, 0xCCCC
    ctx->r7 = S32(0XCCCC << 16);
    // 0x80076C28: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x80076C2C: multu       $a0, $a3
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80076C30: srl         $a1, $v0, 5
    ctx->r5 = S32(U32(ctx->r2) >> 5);
    // 0x80076C34: sll         $v0, $a1, 4
    ctx->r2 = S32(ctx->r5 << 4);
    // 0x80076C38: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x80076C3C: mfhi        $t0
    ctx->r8 = hi;
    // 0x80076C40: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80076C44: subu        $v0, $a0, $v0
    ctx->r2 = SUB32(ctx->r4, ctx->r2);
    // 0x80076C48: multu       $v0, $a3
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80076C4C: mfhi        $t2
    ctx->r10 = hi;
    // 0x80076C50: nop

    // 0x80076C54: nop

    // 0x80076C58: multu       $a1, $v1
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80076C5C: mfhi        $v0
    ctx->r2 = hi;
    // 0x80076C60: nop

    // 0x80076C64: nop

    // 0x80076C68: multu       $a1, $a3
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80076C6C: srl         $a2, $v0, 5
    ctx->r6 = S32(U32(ctx->r2) >> 5);
    // 0x80076C70: sll         $v0, $a2, 4
    ctx->r2 = S32(ctx->r6 << 4);
    // 0x80076C74: subu        $v0, $v0, $a2
    ctx->r2 = SUB32(ctx->r2, ctx->r6);
    // 0x80076C78: mfhi        $t3
    ctx->r11 = hi;
    // 0x80076C7C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80076C80: subu        $v0, $a1, $v0
    ctx->r2 = SUB32(ctx->r5, ctx->r2);
    // 0x80076C84: multu       $v0, $a3
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80076C88: srl         $t0, $t0, 3
    ctx->r8 = S32(U32(ctx->r8) >> 3);
    // 0x80076C8C: sll         $v0, $t0, 2
    ctx->r2 = S32(ctx->r8 << 2);
    // 0x80076C90: mfhi        $t4
    ctx->r12 = hi;
    // 0x80076C94: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x80076C98: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80076C9C: multu       $a2, $a3
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80076CA0: subu        $t0, $a0, $v0
    ctx->r8 = SUB32(ctx->r4, ctx->r2);
    // 0x80076CA4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80076CA8: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x80076CAC: lbu         $v0, 0x2D98($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2D98);
    // 0x80076CB0: lui         $a0, 0x51EB
    ctx->r4 = S32(0X51EB << 16);
    // 0x80076CB4: ori         $a0, $a0, 0x851F
    ctx->r4 = ctx->r4 | 0X851F;
    // 0x80076CB8: srl         $t0, $t2, 3
    ctx->r8 = S32(U32(ctx->r10) >> 3);
    // 0x80076CBC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80076CC0: sb          $v0, 0x2E63($at)
    MEM_B(0X2E63, ctx->r1) = ctx->r2;
    // 0x80076CC4: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80076CC8: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x80076CCC: lbu         $v1, 0x2D98($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X2D98);
    // 0x80076CD0: srl         $t0, $t3, 3
    ctx->r8 = S32(U32(ctx->r11) >> 3);
    // 0x80076CD4: sll         $v0, $t0, 2
    ctx->r2 = S32(ctx->r8 << 2);
    // 0x80076CD8: mfhi        $t1
    ctx->r9 = hi;
    // 0x80076CDC: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x80076CE0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80076CE4: multu       $a2, $a0
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80076CE8: subu        $t0, $a1, $v0
    ctx->r8 = SUB32(ctx->r5, ctx->r2);
    // 0x80076CEC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80076CF0: sb          $v1, 0x2E62($at)
    MEM_B(0X2E62, ctx->r1) = ctx->r3;
    // 0x80076CF4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80076CF8: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x80076CFC: lbu         $v0, 0x2D98($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2D98);
    // 0x80076D00: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80076D04: sb          $v0, 0x2E60($at)
    MEM_B(0X2E60, ctx->r1) = ctx->r2;
    // 0x80076D08: srl         $t0, $t4, 3
    ctx->r8 = S32(U32(ctx->r12) >> 3);
    // 0x80076D0C: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80076D10: addu        $a0, $a0, $t0
    ctx->r4 = ADD32(ctx->r4, ctx->r8);
    // 0x80076D14: lbu         $a0, 0x2D98($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X2D98);
    // 0x80076D18: srl         $t0, $t1, 3
    ctx->r8 = S32(U32(ctx->r9) >> 3);
    // 0x80076D1C: mfhi        $t2
    ctx->r10 = hi;
    // 0x80076D20: srl         $v1, $t2, 5
    ctx->r3 = S32(U32(ctx->r10) >> 5);
    // 0x80076D24: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80076D28: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80076D2C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80076D30: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80076D34: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80076D38: subu        $v0, $a2, $v0
    ctx->r2 = SUB32(ctx->r6, ctx->r2);
    // 0x80076D3C: multu       $v0, $a3
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80076D40: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80076D44: sb          $a0, 0x2E5F($at)
    MEM_B(0X2E5F, ctx->r1) = ctx->r4;
    // 0x80076D48: sll         $v0, $t0, 2
    ctx->r2 = S32(ctx->r8 << 2);
    // 0x80076D4C: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x80076D50: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80076D54: subu        $t0, $a2, $v0
    ctx->r8 = SUB32(ctx->r6, ctx->r2);
    // 0x80076D58: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80076D5C: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x80076D60: lbu         $v0, 0x2D98($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2D98);
    // 0x80076D64: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80076D68: sb          $v0, 0x2E5D($at)
    MEM_B(0X2E5D, ctx->r1) = ctx->r2;
    // 0x80076D6C: mfhi        $v1
    ctx->r3 = hi;
    // 0x80076D70: srl         $t0, $v1, 3
    ctx->r8 = S32(U32(ctx->r3) >> 3);
    // 0x80076D74: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80076D78: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x80076D7C: lbu         $v0, 0x2D98($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2D98);
    // 0x80076D80: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80076D84: jr          $ra
    // 0x80076D88: sb          $v0, 0x2E5C($at)
    MEM_B(0X2E5C, ctx->r1) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80076D88: sb          $v0, 0x2E5C($at)
    MEM_B(0X2E5C, ctx->r1) = ctx->r2;
;}
RECOMP_FUNC void func_80063BB0_3EFB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80063BB0: lbu         $v0, 0x3B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3B);
    // 0x80063BB4: lw          $v1, 0x6C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X6C);
    // 0x80063BB8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80063BBC: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x80063BC0: sb          $v0, 0x3B($a0)
    MEM_B(0X3B, ctx->r4) = ctx->r2;
    // 0x80063BC4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80063BC8: jr          $ra
    // 0x80063BCC: sw          $v1, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x80063BCC: sw          $v1, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r3;
;}
RECOMP_FUNC void func_8008DC44_69044(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008DC44: sh          $zero, 0xAC($a0)
    MEM_H(0XAC, ctx->r4) = 0;
    // 0x8008DC48: jr          $ra
    // 0x8008DC4C: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    TRACE_RETURN()
    return;
    // 0x8008DC4C: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
;}
RECOMP_FUNC void func_80030320_B720(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80030320: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x80030324: sll         $a1, $a1, 8
    ctx->r5 = S32(ctx->r5 << 8);
    // 0x80030328: or          $v0, $v0, $a1
    ctx->r2 = ctx->r2 | ctx->r5;
    // 0x8003032C: jr          $ra
    // 0x80030330: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80030330: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_8004AB78_25F78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004AB78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004AB7C: addu        $t3, $a0, $zero
    ctx->r11 = ADD32(ctx->r4, 0);
    // 0x8004AB80: addu        $t0, $a1, $zero
    ctx->r8 = ADD32(ctx->r5, 0);
    // 0x8004AB84: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8004AB88: lh          $v0, 0x0($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X0);
    // 0x8004AB8C: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x8004AB90: addu        $t1, $a2, $zero
    ctx->r9 = ADD32(ctx->r6, 0);
    // 0x8004AB94: addu        $a0, $v0, $t1
    ctx->r4 = ADD32(ctx->r2, ctx->r9);
    // 0x8004AB98: sltu        $v0, $a0, $t4
    ctx->r2 = ctx->r4 < ctx->r12 ? 1 : 0;
    // 0x8004AB9C: beq         $v0, $zero, L_8004AFFC
    if (ctx->r2 == 0) {
        // 0x8004ABA0: nop
    
            goto L_8004AFFC;
    }
    // 0x8004ABA0: nop

    // 0x8004ABA4: lh          $v0, 0x2($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X2);
    // 0x8004ABA8: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x8004ABAC: mult        $t4, $v0
    result = S64(S32(ctx->r12)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004ABB0: mflo        $v0
    ctx->r2 = lo;
    // 0x8004ABB4: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8004ABB8: lw          $v1, -0x2610($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X2610);
    // 0x8004ABBC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8004ABC0: sra         $v0, $v0, 3
    ctx->r2 = S32(SIGNED(ctx->r2) >> 3);
    // 0x8004ABC4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8004ABC8: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8004ABCC: andi        $v1, $a0, 0x7
    ctx->r3 = ctx->r4 & 0X7;
    // 0x8004ABD0: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x8004ABD4: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8004ABD8: bltz        $v0, L_8004AFFC
    if (SIGNED(ctx->r2) < 0) {
        // 0x8004ABDC: nop
    
            goto L_8004AFFC;
    }
    // 0x8004ABDC: nop

    // 0x8004ABE0: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x8004ABE4: lw          $v1, -0x5858($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5858);
    // 0x8004ABE8: addiu       $v0, $v1, 0x28
    ctx->r2 = ADD32(ctx->r3, 0X28);
    // 0x8004ABEC: addu        $t2, $v1, $zero
    ctx->r10 = ADD32(ctx->r3, 0);
    // 0x8004ABF0: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8004ABF4: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x8004ABF8: lui         $v0, 0x900
    ctx->r2 = S32(0X900 << 16);
    // 0x8004ABFC: sw          $v0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r2;
    // 0x8004AC00: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8004AC04: lw          $a0, -0x2ED4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2ED4);
    // 0x8004AC08: mult        $t1, $a0
    result = S64(S32(ctx->r9)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004AC0C: mflo        $a1
    ctx->r5 = lo;
    // 0x8004AC10: nop

    // 0x8004AC14: nop

    // 0x8004AC18: mult        $a3, $a0
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004AC1C: mflo        $a2
    ctx->r6 = lo;
    // 0x8004AC20: lui         $v0, 0xC0C0
    ctx->r2 = S32(0XC0C0 << 16);
    // 0x8004AC24: ori         $v0, $v0, 0xC02E
    ctx->r2 = ctx->r2 | 0XC02E;
    // 0x8004AC28: sw          $v0, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r2;
    // 0x8004AC2C: lh          $v0, 0x0($t3)
    ctx->r2 = MEM_H(ctx->r11, 0X0);
    // 0x8004AC30: lh          $v1, 0x2($t3)
    ctx->r3 = MEM_H(ctx->r11, 0X2);
    // 0x8004AC34: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8004AC38: addu        $a1, $v0, $a0
    ctx->r5 = ADD32(ctx->r2, ctx->r4);
    // 0x8004AC3C: subu        $v1, $v1, $a2
    ctx->r3 = SUB32(ctx->r3, ctx->r6);
    // 0x8004AC40: subu        $a0, $v1, $a0
    ctx->r4 = SUB32(ctx->r3, ctx->r4);
    // 0x8004AC44: sh          $v0, 0x18($t2)
    MEM_H(0X18, ctx->r10) = ctx->r2;
    // 0x8004AC48: sh          $v0, 0x8($t2)
    MEM_H(0X8, ctx->r10) = ctx->r2;
    // 0x8004AC4C: sh          $a1, 0x20($t2)
    MEM_H(0X20, ctx->r10) = ctx->r5;
    // 0x8004AC50: sh          $a1, 0x10($t2)
    MEM_H(0X10, ctx->r10) = ctx->r5;
    // 0x8004AC54: sh          $a0, 0x12($t2)
    MEM_H(0X12, ctx->r10) = ctx->r4;
    // 0x8004AC58: sh          $a0, 0xA($t2)
    MEM_H(0XA, ctx->r10) = ctx->r4;
    // 0x8004AC5C: sh          $v1, 0x22($t2)
    MEM_H(0X22, ctx->r10) = ctx->r3;
    // 0x8004AC60: sh          $v1, 0x1A($t2)
    MEM_H(0X1A, ctx->r10) = ctx->r3;
    // 0x8004AC64: lh          $v1, 0x2($t0)
    ctx->r3 = MEM_H(ctx->r8, 0X2);
    // 0x8004AC68: addu        $v1, $v1, $a3
    ctx->r3 = ADD32(ctx->r3, ctx->r7);
    // 0x8004AC6C: mult        $v1, $t4
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004AC70: mflo        $v1
    ctx->r3 = lo;
    // 0x8004AC74: lh          $v0, 0x0($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X0);
    // 0x8004AC78: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8004AC7C: lw          $a0, 0x5598($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5598);
    // 0x8004AC80: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x8004AC84: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x8004AC88: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8004AC8C: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x8004AC90: sltiu       $v0, $v1, 0x14
    ctx->r2 = ctx->r3 < 0X14 ? 1 : 0;
    // 0x8004AC94: beql        $v0, $zero, L_8004ACB8
    if (ctx->r2 == 0) {
        // 0x8004AC98: lui         $v1, 0x981
        ctx->r3 = S32(0X981 << 16);
            goto L_8004ACB8;
    }
    goto skip_0;
    // 0x8004AC98: lui         $v1, 0x981
    ctx->r3 = S32(0X981 << 16);
    skip_0:
    // 0x8004AC9C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8004ACA0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004ACA4: addu        $at, $at, $v0
    gpr jr_addend_8004ACAC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8004ACA8: lw          $v0, 0x2308($at)
    ctx->r2 = ADD32(ctx->r1, 0X2308);
    // 0x8004ACAC: jr          $v0
    // 0x8004ACB0: nop

    switch (jr_addend_8004ACAC >> 2) {
        case 0: goto L_8004ACB4; break;
        case 1: goto L_8004ACD8; break;
        case 2: goto L_8004ACFC; break;
        case 3: goto L_8004AD20; break;
        case 4: goto L_8004AD44; break;
        case 5: goto L_8004AD68; break;
        case 6: goto L_8004AD8C; break;
        case 7: goto L_8004ADB0; break;
        case 8: goto L_8004ADD4; break;
        case 9: goto L_8004ADF8; break;
        case 10: goto L_8004AE1C; break;
        case 11: goto L_8004AE40; break;
        case 12: goto L_8004AE64; break;
        case 13: goto L_8004AE88; break;
        case 14: goto L_8004AEAC; break;
        case 15: goto L_8004AED0; break;
        case 16: goto L_8004AEF4; break;
        case 17: goto L_8004AF18; break;
        case 18: goto L_8004AF3C; break;
        case 19: goto L_8004AF60; break;
        default: switch_error(__func__, 0x8004ACAC, 0x800D2308);
    }
    // 0x8004ACB0: nop

L_8004ACB4:
    // 0x8004ACB4: lui         $v1, 0x981
    ctx->r3 = S32(0X981 << 16);
L_8004ACB8:
    // 0x8004ACB8: ori         $v1, $v1, 0x3E74
    ctx->r3 = ctx->r3 | 0X3E74;
    // 0x8004ACBC: lui         $v0, 0xF81
    ctx->r2 = S32(0XF81 << 16);
    // 0x8004ACC0: ori         $v0, $v0, 0xD
    ctx->r2 = ctx->r2 | 0XD;
    // 0x8004ACC4: sw          $v0, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->r2;
    // 0x8004ACC8: lui         $v0, 0x987
    ctx->r2 = S32(0X987 << 16);
    // 0x8004ACCC: sw          $v0, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->r2;
    // 0x8004ACD0: j           L_8004AF80
    // 0x8004ACD4: lui         $v0, 0xF87
    ctx->r2 = S32(0XF87 << 16);
        goto L_8004AF80;
    // 0x8004ACD4: lui         $v0, 0xF87
    ctx->r2 = S32(0XF87 << 16);
L_8004ACD8:
    // 0x8004ACD8: lui         $v1, 0x181
    ctx->r3 = S32(0X181 << 16);
    // 0x8004ACDC: ori         $v1, $v1, 0x3E74
    ctx->r3 = ctx->r3 | 0X3E74;
    // 0x8004ACE0: lui         $v0, 0x781
    ctx->r2 = S32(0X781 << 16);
    // 0x8004ACE4: ori         $v0, $v0, 0xD
    ctx->r2 = ctx->r2 | 0XD;
    // 0x8004ACE8: sw          $v0, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->r2;
    // 0x8004ACEC: lui         $v0, 0x187
    ctx->r2 = S32(0X187 << 16);
    // 0x8004ACF0: sw          $v0, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->r2;
    // 0x8004ACF4: j           L_8004AF80
    // 0x8004ACF8: lui         $v0, 0x787
    ctx->r2 = S32(0X787 << 16);
        goto L_8004AF80;
    // 0x8004ACF8: lui         $v0, 0x787
    ctx->r2 = S32(0X787 << 16);
L_8004ACFC:
    // 0x8004ACFC: lui         $v1, 0x1181
    ctx->r3 = S32(0X1181 << 16);
    // 0x8004AD00: ori         $v1, $v1, 0x3E74
    ctx->r3 = ctx->r3 | 0X3E74;
    // 0x8004AD04: lui         $v0, 0x1781
    ctx->r2 = S32(0X1781 << 16);
    // 0x8004AD08: ori         $v0, $v0, 0xD
    ctx->r2 = ctx->r2 | 0XD;
    // 0x8004AD0C: sw          $v0, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->r2;
    // 0x8004AD10: lui         $v0, 0x1187
    ctx->r2 = S32(0X1187 << 16);
    // 0x8004AD14: sw          $v0, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->r2;
    // 0x8004AD18: j           L_8004AF80
    // 0x8004AD1C: lui         $v0, 0x1787
    ctx->r2 = S32(0X1787 << 16);
        goto L_8004AF80;
    // 0x8004AD1C: lui         $v0, 0x1787
    ctx->r2 = S32(0X1787 << 16);
L_8004AD20:
    // 0x8004AD20: lui         $v1, 0x1981
    ctx->r3 = S32(0X1981 << 16);
    // 0x8004AD24: ori         $v1, $v1, 0x3E74
    ctx->r3 = ctx->r3 | 0X3E74;
    // 0x8004AD28: lui         $v0, 0x1F81
    ctx->r2 = S32(0X1F81 << 16);
    // 0x8004AD2C: ori         $v0, $v0, 0xD
    ctx->r2 = ctx->r2 | 0XD;
    // 0x8004AD30: sw          $v0, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->r2;
    // 0x8004AD34: lui         $v0, 0x1987
    ctx->r2 = S32(0X1987 << 16);
    // 0x8004AD38: sw          $v0, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->r2;
    // 0x8004AD3C: j           L_8004AF80
    // 0x8004AD40: lui         $v0, 0x1F87
    ctx->r2 = S32(0X1F87 << 16);
        goto L_8004AF80;
    // 0x8004AD40: lui         $v0, 0x1F87
    ctx->r2 = S32(0X1F87 << 16);
L_8004AD44:
    // 0x8004AD44: lui         $v1, 0x2181
    ctx->r3 = S32(0X2181 << 16);
    // 0x8004AD48: ori         $v1, $v1, 0x3E74
    ctx->r3 = ctx->r3 | 0X3E74;
    // 0x8004AD4C: lui         $v0, 0x2781
    ctx->r2 = S32(0X2781 << 16);
    // 0x8004AD50: ori         $v0, $v0, 0xD
    ctx->r2 = ctx->r2 | 0XD;
    // 0x8004AD54: sw          $v0, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->r2;
    // 0x8004AD58: lui         $v0, 0x2187
    ctx->r2 = S32(0X2187 << 16);
    // 0x8004AD5C: sw          $v0, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->r2;
    // 0x8004AD60: j           L_8004AF80
    // 0x8004AD64: lui         $v0, 0x2787
    ctx->r2 = S32(0X2787 << 16);
        goto L_8004AF80;
    // 0x8004AD64: lui         $v0, 0x2787
    ctx->r2 = S32(0X2787 << 16);
L_8004AD68:
    // 0x8004AD68: lui         $v1, 0x2981
    ctx->r3 = S32(0X2981 << 16);
    // 0x8004AD6C: ori         $v1, $v1, 0x3E74
    ctx->r3 = ctx->r3 | 0X3E74;
    // 0x8004AD70: lui         $v0, 0x2F81
    ctx->r2 = S32(0X2F81 << 16);
    // 0x8004AD74: ori         $v0, $v0, 0xD
    ctx->r2 = ctx->r2 | 0XD;
    // 0x8004AD78: sw          $v0, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->r2;
    // 0x8004AD7C: lui         $v0, 0x2987
    ctx->r2 = S32(0X2987 << 16);
    // 0x8004AD80: sw          $v0, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->r2;
    // 0x8004AD84: j           L_8004AF80
    // 0x8004AD88: lui         $v0, 0x2F87
    ctx->r2 = S32(0X2F87 << 16);
        goto L_8004AF80;
    // 0x8004AD88: lui         $v0, 0x2F87
    ctx->r2 = S32(0X2F87 << 16);
L_8004AD8C:
    // 0x8004AD8C: lui         $v1, 0x3181
    ctx->r3 = S32(0X3181 << 16);
    // 0x8004AD90: ori         $v1, $v1, 0x3E74
    ctx->r3 = ctx->r3 | 0X3E74;
    // 0x8004AD94: lui         $v0, 0x3781
    ctx->r2 = S32(0X3781 << 16);
    // 0x8004AD98: ori         $v0, $v0, 0xD
    ctx->r2 = ctx->r2 | 0XD;
    // 0x8004AD9C: sw          $v0, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->r2;
    // 0x8004ADA0: lui         $v0, 0x3187
    ctx->r2 = S32(0X3187 << 16);
    // 0x8004ADA4: sw          $v0, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->r2;
    // 0x8004ADA8: j           L_8004AF80
    // 0x8004ADAC: lui         $v0, 0x3787
    ctx->r2 = S32(0X3787 << 16);
        goto L_8004AF80;
    // 0x8004ADAC: lui         $v0, 0x3787
    ctx->r2 = S32(0X3787 << 16);
L_8004ADB0:
    // 0x8004ADB0: lui         $v1, 0x3981
    ctx->r3 = S32(0X3981 << 16);
    // 0x8004ADB4: ori         $v1, $v1, 0x3E74
    ctx->r3 = ctx->r3 | 0X3E74;
    // 0x8004ADB8: lui         $v0, 0x3F81
    ctx->r2 = S32(0X3F81 << 16);
    // 0x8004ADBC: ori         $v0, $v0, 0xD
    ctx->r2 = ctx->r2 | 0XD;
    // 0x8004ADC0: sw          $v0, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->r2;
    // 0x8004ADC4: lui         $v0, 0x3987
    ctx->r2 = S32(0X3987 << 16);
    // 0x8004ADC8: sw          $v0, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->r2;
    // 0x8004ADCC: j           L_8004AF80
    // 0x8004ADD0: lui         $v0, 0x3F87
    ctx->r2 = S32(0X3F87 << 16);
        goto L_8004AF80;
    // 0x8004ADD0: lui         $v0, 0x3F87
    ctx->r2 = S32(0X3F87 << 16);
L_8004ADD4:
    // 0x8004ADD4: lui         $v1, 0x4181
    ctx->r3 = S32(0X4181 << 16);
    // 0x8004ADD8: ori         $v1, $v1, 0x3E74
    ctx->r3 = ctx->r3 | 0X3E74;
    // 0x8004ADDC: lui         $v0, 0x4781
    ctx->r2 = S32(0X4781 << 16);
    // 0x8004ADE0: ori         $v0, $v0, 0xD
    ctx->r2 = ctx->r2 | 0XD;
    // 0x8004ADE4: sw          $v0, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->r2;
    // 0x8004ADE8: lui         $v0, 0x4187
    ctx->r2 = S32(0X4187 << 16);
    // 0x8004ADEC: sw          $v0, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->r2;
    // 0x8004ADF0: j           L_8004AF80
    // 0x8004ADF4: lui         $v0, 0x4787
    ctx->r2 = S32(0X4787 << 16);
        goto L_8004AF80;
    // 0x8004ADF4: lui         $v0, 0x4787
    ctx->r2 = S32(0X4787 << 16);
L_8004ADF8:
    // 0x8004ADF8: lui         $v1, 0x4981
    ctx->r3 = S32(0X4981 << 16);
    // 0x8004ADFC: ori         $v1, $v1, 0x3E74
    ctx->r3 = ctx->r3 | 0X3E74;
    // 0x8004AE00: lui         $v0, 0x4F81
    ctx->r2 = S32(0X4F81 << 16);
    // 0x8004AE04: ori         $v0, $v0, 0xD
    ctx->r2 = ctx->r2 | 0XD;
    // 0x8004AE08: sw          $v0, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->r2;
    // 0x8004AE0C: lui         $v0, 0x4987
    ctx->r2 = S32(0X4987 << 16);
    // 0x8004AE10: sw          $v0, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->r2;
    // 0x8004AE14: j           L_8004AF80
    // 0x8004AE18: lui         $v0, 0x4F87
    ctx->r2 = S32(0X4F87 << 16);
        goto L_8004AF80;
    // 0x8004AE18: lui         $v0, 0x4F87
    ctx->r2 = S32(0X4F87 << 16);
L_8004AE1C:
    // 0x8004AE1C: lui         $v1, 0x989
    ctx->r3 = S32(0X989 << 16);
    // 0x8004AE20: ori         $v1, $v1, 0x3E74
    ctx->r3 = ctx->r3 | 0X3E74;
    // 0x8004AE24: lui         $v0, 0xF89
    ctx->r2 = S32(0XF89 << 16);
    // 0x8004AE28: ori         $v0, $v0, 0xD
    ctx->r2 = ctx->r2 | 0XD;
    // 0x8004AE2C: sw          $v0, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->r2;
    // 0x8004AE30: lui         $v0, 0x98F
    ctx->r2 = S32(0X98F << 16);
    // 0x8004AE34: sw          $v0, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->r2;
    // 0x8004AE38: j           L_8004AF80
    // 0x8004AE3C: lui         $v0, 0xF8F
    ctx->r2 = S32(0XF8F << 16);
        goto L_8004AF80;
    // 0x8004AE3C: lui         $v0, 0xF8F
    ctx->r2 = S32(0XF8F << 16);
L_8004AE40:
    // 0x8004AE40: lui         $v1, 0x189
    ctx->r3 = S32(0X189 << 16);
    // 0x8004AE44: ori         $v1, $v1, 0x3E74
    ctx->r3 = ctx->r3 | 0X3E74;
    // 0x8004AE48: lui         $v0, 0x789
    ctx->r2 = S32(0X789 << 16);
    // 0x8004AE4C: ori         $v0, $v0, 0xD
    ctx->r2 = ctx->r2 | 0XD;
    // 0x8004AE50: sw          $v0, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->r2;
    // 0x8004AE54: lui         $v0, 0x18F
    ctx->r2 = S32(0X18F << 16);
    // 0x8004AE58: sw          $v0, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->r2;
    // 0x8004AE5C: j           L_8004AF80
    // 0x8004AE60: lui         $v0, 0x78F
    ctx->r2 = S32(0X78F << 16);
        goto L_8004AF80;
    // 0x8004AE60: lui         $v0, 0x78F
    ctx->r2 = S32(0X78F << 16);
L_8004AE64:
    // 0x8004AE64: lui         $v1, 0x1189
    ctx->r3 = S32(0X1189 << 16);
    // 0x8004AE68: ori         $v1, $v1, 0x3E74
    ctx->r3 = ctx->r3 | 0X3E74;
    // 0x8004AE6C: lui         $v0, 0x1789
    ctx->r2 = S32(0X1789 << 16);
    // 0x8004AE70: ori         $v0, $v0, 0xD
    ctx->r2 = ctx->r2 | 0XD;
    // 0x8004AE74: sw          $v0, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->r2;
    // 0x8004AE78: lui         $v0, 0x118F
    ctx->r2 = S32(0X118F << 16);
    // 0x8004AE7C: sw          $v0, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->r2;
    // 0x8004AE80: j           L_8004AF80
    // 0x8004AE84: lui         $v0, 0x178F
    ctx->r2 = S32(0X178F << 16);
        goto L_8004AF80;
    // 0x8004AE84: lui         $v0, 0x178F
    ctx->r2 = S32(0X178F << 16);
L_8004AE88:
    // 0x8004AE88: lui         $v1, 0x1989
    ctx->r3 = S32(0X1989 << 16);
    // 0x8004AE8C: ori         $v1, $v1, 0x3E74
    ctx->r3 = ctx->r3 | 0X3E74;
    // 0x8004AE90: lui         $v0, 0x1F89
    ctx->r2 = S32(0X1F89 << 16);
    // 0x8004AE94: ori         $v0, $v0, 0xD
    ctx->r2 = ctx->r2 | 0XD;
    // 0x8004AE98: sw          $v0, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->r2;
    // 0x8004AE9C: lui         $v0, 0x198F
    ctx->r2 = S32(0X198F << 16);
    // 0x8004AEA0: sw          $v0, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->r2;
    // 0x8004AEA4: j           L_8004AF80
    // 0x8004AEA8: lui         $v0, 0x1F8F
    ctx->r2 = S32(0X1F8F << 16);
        goto L_8004AF80;
    // 0x8004AEA8: lui         $v0, 0x1F8F
    ctx->r2 = S32(0X1F8F << 16);
L_8004AEAC:
    // 0x8004AEAC: lui         $v1, 0x2189
    ctx->r3 = S32(0X2189 << 16);
    // 0x8004AEB0: ori         $v1, $v1, 0x3E74
    ctx->r3 = ctx->r3 | 0X3E74;
    // 0x8004AEB4: lui         $v0, 0x2789
    ctx->r2 = S32(0X2789 << 16);
    // 0x8004AEB8: ori         $v0, $v0, 0xD
    ctx->r2 = ctx->r2 | 0XD;
    // 0x8004AEBC: sw          $v0, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->r2;
    // 0x8004AEC0: lui         $v0, 0x218F
    ctx->r2 = S32(0X218F << 16);
    // 0x8004AEC4: sw          $v0, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->r2;
    // 0x8004AEC8: j           L_8004AF80
    // 0x8004AECC: lui         $v0, 0x278F
    ctx->r2 = S32(0X278F << 16);
        goto L_8004AF80;
    // 0x8004AECC: lui         $v0, 0x278F
    ctx->r2 = S32(0X278F << 16);
L_8004AED0:
    // 0x8004AED0: lui         $v1, 0x2989
    ctx->r3 = S32(0X2989 << 16);
    // 0x8004AED4: ori         $v1, $v1, 0x3E74
    ctx->r3 = ctx->r3 | 0X3E74;
    // 0x8004AED8: lui         $v0, 0x2F89
    ctx->r2 = S32(0X2F89 << 16);
    // 0x8004AEDC: ori         $v0, $v0, 0xD
    ctx->r2 = ctx->r2 | 0XD;
    // 0x8004AEE0: sw          $v0, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->r2;
    // 0x8004AEE4: lui         $v0, 0x298F
    ctx->r2 = S32(0X298F << 16);
    // 0x8004AEE8: sw          $v0, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->r2;
    // 0x8004AEEC: j           L_8004AF80
    // 0x8004AEF0: lui         $v0, 0x2F8F
    ctx->r2 = S32(0X2F8F << 16);
        goto L_8004AF80;
    // 0x8004AEF0: lui         $v0, 0x2F8F
    ctx->r2 = S32(0X2F8F << 16);
L_8004AEF4:
    // 0x8004AEF4: lui         $v1, 0x3189
    ctx->r3 = S32(0X3189 << 16);
    // 0x8004AEF8: ori         $v1, $v1, 0x3E74
    ctx->r3 = ctx->r3 | 0X3E74;
    // 0x8004AEFC: lui         $v0, 0x3789
    ctx->r2 = S32(0X3789 << 16);
    // 0x8004AF00: ori         $v0, $v0, 0xD
    ctx->r2 = ctx->r2 | 0XD;
    // 0x8004AF04: sw          $v0, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->r2;
    // 0x8004AF08: lui         $v0, 0x318F
    ctx->r2 = S32(0X318F << 16);
    // 0x8004AF0C: sw          $v0, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->r2;
    // 0x8004AF10: j           L_8004AF80
    // 0x8004AF14: lui         $v0, 0x378F
    ctx->r2 = S32(0X378F << 16);
        goto L_8004AF80;
    // 0x8004AF14: lui         $v0, 0x378F
    ctx->r2 = S32(0X378F << 16);
L_8004AF18:
    // 0x8004AF18: lui         $v1, 0x3989
    ctx->r3 = S32(0X3989 << 16);
    // 0x8004AF1C: ori         $v1, $v1, 0x3E74
    ctx->r3 = ctx->r3 | 0X3E74;
    // 0x8004AF20: lui         $v0, 0x3F89
    ctx->r2 = S32(0X3F89 << 16);
    // 0x8004AF24: ori         $v0, $v0, 0xD
    ctx->r2 = ctx->r2 | 0XD;
    // 0x8004AF28: sw          $v0, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->r2;
    // 0x8004AF2C: lui         $v0, 0x398F
    ctx->r2 = S32(0X398F << 16);
    // 0x8004AF30: sw          $v0, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->r2;
    // 0x8004AF34: j           L_8004AF80
    // 0x8004AF38: lui         $v0, 0x3F8F
    ctx->r2 = S32(0X3F8F << 16);
        goto L_8004AF80;
    // 0x8004AF38: lui         $v0, 0x3F8F
    ctx->r2 = S32(0X3F8F << 16);
L_8004AF3C:
    // 0x8004AF3C: lui         $v1, 0x4189
    ctx->r3 = S32(0X4189 << 16);
    // 0x8004AF40: ori         $v1, $v1, 0x3E74
    ctx->r3 = ctx->r3 | 0X3E74;
    // 0x8004AF44: lui         $v0, 0x4789
    ctx->r2 = S32(0X4789 << 16);
    // 0x8004AF48: ori         $v0, $v0, 0xD
    ctx->r2 = ctx->r2 | 0XD;
    // 0x8004AF4C: sw          $v0, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->r2;
    // 0x8004AF50: lui         $v0, 0x418F
    ctx->r2 = S32(0X418F << 16);
    // 0x8004AF54: sw          $v0, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->r2;
    // 0x8004AF58: j           L_8004AF80
    // 0x8004AF5C: lui         $v0, 0x478F
    ctx->r2 = S32(0X478F << 16);
        goto L_8004AF80;
    // 0x8004AF5C: lui         $v0, 0x478F
    ctx->r2 = S32(0X478F << 16);
L_8004AF60:
    // 0x8004AF60: lui         $v1, 0x4989
    ctx->r3 = S32(0X4989 << 16);
    // 0x8004AF64: ori         $v1, $v1, 0x3E74
    ctx->r3 = ctx->r3 | 0X3E74;
    // 0x8004AF68: lui         $v0, 0x4F89
    ctx->r2 = S32(0X4F89 << 16);
    // 0x8004AF6C: ori         $v0, $v0, 0xD
    ctx->r2 = ctx->r2 | 0XD;
    // 0x8004AF70: sw          $v0, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->r2;
    // 0x8004AF74: lui         $v0, 0x498F
    ctx->r2 = S32(0X498F << 16);
    // 0x8004AF78: sw          $v0, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->r2;
    // 0x8004AF7C: lui         $v0, 0x4F8F
    ctx->r2 = S32(0X4F8F << 16);
L_8004AF80:
    // 0x8004AF80: sw          $v1, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->r3;
    // 0x8004AF84: sw          $v0, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->r2;
    // 0x8004AF88: lbu         $v0, 0xC($t2)
    ctx->r2 = MEM_BU(ctx->r10, 0XC);
    // 0x8004AF8C: lbu         $v1, 0xD($t2)
    ctx->r3 = MEM_BU(ctx->r10, 0XD);
    // 0x8004AF90: lbu         $a0, 0x14($t2)
    ctx->r4 = MEM_BU(ctx->r10, 0X14);
    // 0x8004AF94: lbu         $a1, 0x15($t2)
    ctx->r5 = MEM_BU(ctx->r10, 0X15);
    // 0x8004AF98: lbu         $a2, 0x1C($t2)
    ctx->r6 = MEM_BU(ctx->r10, 0X1C);
    // 0x8004AF9C: lbu         $a3, 0x1D($t2)
    ctx->r7 = MEM_BU(ctx->r10, 0X1D);
    // 0x8004AFA0: lbu         $t0, 0x24($t2)
    ctx->r8 = MEM_BU(ctx->r10, 0X24);
    // 0x8004AFA4: lbu         $t1, 0x25($t2)
    ctx->r9 = MEM_BU(ctx->r10, 0X25);
    // 0x8004AFA8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8004AFAC: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8004AFB0: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x8004AFB4: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x8004AFB8: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x8004AFBC: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
    // 0x8004AFC0: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x8004AFC4: addiu       $t1, $t1, -0x1
    ctx->r9 = ADD32(ctx->r9, -0X1);
    // 0x8004AFC8: sb          $v0, 0xC($t2)
    MEM_B(0XC, ctx->r10) = ctx->r2;
    // 0x8004AFCC: sb          $v1, 0xD($t2)
    MEM_B(0XD, ctx->r10) = ctx->r3;
    // 0x8004AFD0: sb          $a0, 0x14($t2)
    MEM_B(0X14, ctx->r10) = ctx->r4;
    // 0x8004AFD4: sb          $a1, 0x15($t2)
    MEM_B(0X15, ctx->r10) = ctx->r5;
    // 0x8004AFD8: sb          $a2, 0x1C($t2)
    MEM_B(0X1C, ctx->r10) = ctx->r6;
    // 0x8004AFDC: sb          $a3, 0x1D($t2)
    MEM_B(0X1D, ctx->r10) = ctx->r7;
    // 0x8004AFE0: sb          $t0, 0x24($t2)
    MEM_B(0X24, ctx->r10) = ctx->r8;
    // 0x8004AFE4: sb          $t1, 0x25($t2)
    MEM_B(0X25, ctx->r10) = ctx->r9;
    // 0x8004AFE8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8004AFEC: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x8004AFF0: addu        $a1, $t2, $zero
    ctx->r5 = ADD32(ctx->r10, 0);
    // 0x8004AFF4: jal         0x8002FD30
    // 0x8004AFF8: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    func_8002FD30_B130(rdram, ctx);
        goto after_0;
    // 0x8004AFF8: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    after_0:
L_8004AFFC:
    // 0x8004AFFC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8004B000: jr          $ra
    // 0x8004B004: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8004B004: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
