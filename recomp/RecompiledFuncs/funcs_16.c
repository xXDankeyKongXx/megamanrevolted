#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8002DFA8_93A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002DFA8: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x8002DFAC: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8002DFB0: sw          $s0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r16;
    // 0x8002DFB4: addiu       $s0, $sp, 0x18
    ctx->r16 = ADD32(ctx->r29, 0X18);
    // 0x8002DFB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8002DFBC: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    // 0x8002DFC0: sw          $ra, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r31;
    // 0x8002DFC4: sw          $s6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r22;
    // 0x8002DFC8: sw          $s5, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r21;
    // 0x8002DFCC: sw          $s4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r20;
    // 0x8002DFD0: sw          $s3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r19;
    // 0x8002DFD4: sw          $s2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r18;
    // 0x8002DFD8: jal         0x8009A3B4
    // 0x8002DFDC: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8002DFDC: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    after_0:
    // 0x8002DFE0: lh          $v0, 0x20($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X20);
    // 0x8002DFE4: bgez        $v0, L_8002E000
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8002DFE8: nop
    
            goto L_8002E000;
    }
    // 0x8002DFE8: nop

    // 0x8002DFEC: lh          $v0, 0x28($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X28);
    // 0x8002DFF0: bgez        $v0, L_8002E000
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8002DFF4: nop
    
            goto L_8002E000;
    }
    // 0x8002DFF4: nop

    // 0x8002DFF8: j           L_8002E018
    // 0x8002DFFC: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
        goto L_8002E018;
    // 0x8002DFFC: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
L_8002E000:
    // 0x8002E000: lh          $v0, 0xA($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XA);
    // 0x8002E004: bgez        $v0, L_8002E018
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8002E008: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_8002E018;
    }
    // 0x8002E008: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x8002E00C: lhu         $v0, 0x1A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1A);
    // 0x8002E010: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8002E014: sra         $v1, $v0, 31
    ctx->r3 = S32(SIGNED(ctx->r2) >> 31);
L_8002E018:
    // 0x8002E018: bne         $v1, $zero, L_8002E144
    if (ctx->r3 != 0) {
        // 0x8002E01C: nop
    
            goto L_8002E144;
    }
    // 0x8002E01C: nop

    // 0x8002E020: lbu         $v1, 0x3C($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X3C);
    // 0x8002E024: lbu         $v0, 0x24($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X24);
    // 0x8002E028: lbu         $a0, 0x25($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X25);
    // 0x8002E02C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8002E030: bltzl       $v1, L_8002E038
    if (SIGNED(ctx->r3) < 0) {
        // 0x8002E034: negu        $v1, $v1
        ctx->r3 = SUB32(0, ctx->r3);
            goto L_8002E038;
    }
    goto skip_0;
    // 0x8002E034: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    skip_0:
L_8002E038:
    // 0x8002E038: lbu         $v0, 0x3D($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X3D);
    // 0x8002E03C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8002E040: addu        $t0, $v1, $zero
    ctx->r8 = ADD32(ctx->r3, 0);
    // 0x8002E044: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8002E048: sra         $s4, $v1, 16
    ctx->r20 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8002E04C: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8002E050: bltzl       $v0, L_8002E058
    if (SIGNED(ctx->r2) < 0) {
        // 0x8002E054: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_8002E058;
    }
    goto skip_1;
    // 0x8002E054: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_1:
L_8002E058:
    // 0x8002E058: addiu       $a2, $v0, 0x1
    ctx->r6 = ADD32(ctx->r2, 0X1);
    // 0x8002E05C: lh          $v0, 0x28($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X28);
    // 0x8002E060: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x8002E064: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    // 0x8002E068: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8002E06C: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8002E070: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8002E074: beq         $s4, $v0, L_8002E084
    if (ctx->r20 == ctx->r2) {
        // 0x8002E078: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_8002E084;
    }
    // 0x8002E078: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x8002E07C: subu        $v0, $a1, $v1
    ctx->r2 = SUB32(ctx->r5, ctx->r3);
    // 0x8002E080: addiu       $t0, $v0, 0x1
    ctx->r8 = ADD32(ctx->r2, 0X1);
L_8002E084:
    // 0x8002E084: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x8002E088: lh          $v1, 0x32($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X32);
    // 0x8002E08C: lh          $a0, 0x22($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X22);
    // 0x8002E090: sra         $s3, $v0, 16
    ctx->r19 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8002E094: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x8002E098: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x8002E09C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8002E0A0: beq         $s3, $v1, L_8002E0B0
    if (ctx->r19 == ctx->r3) {
        // 0x8002E0A4: addu        $a1, $a0, $zero
        ctx->r5 = ADD32(ctx->r4, 0);
            goto L_8002E0B0;
    }
    // 0x8002E0A4: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8002E0A8: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x8002E0AC: addiu       $a3, $v0, 0x1
    ctx->r7 = ADD32(ctx->r2, 0X1);
L_8002E0B0:
    // 0x8002E0B0: sltiu       $v0, $s4, 0x1
    ctx->r2 = ctx->r20 < 0X1 ? 1 : 0;
    // 0x8002E0B4: sltiu       $v1, $s3, 0x1
    ctx->r3 = ctx->r19 < 0X1 ? 1 : 0;
    // 0x8002E0B8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8002E0BC: bne         $v0, $zero, L_8002E144
    if (ctx->r2 != 0) {
        // 0x8002E0C0: sll         $v0, $t0, 16
        ctx->r2 = S32(ctx->r8 << 16);
            goto L_8002E144;
    }
    // 0x8002E0C0: sll         $v0, $t0, 16
    ctx->r2 = S32(ctx->r8 << 16);
    // 0x8002E0C4: sra         $s6, $v0, 16
    ctx->r22 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8002E0C8: sltiu       $v1, $s6, 0x1
    ctx->r3 = ctx->r22 < 0X1 ? 1 : 0;
    // 0x8002E0CC: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x8002E0D0: sra         $s5, $v0, 16
    ctx->r21 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8002E0D4: sltiu       $v0, $s5, 0x1
    ctx->r2 = ctx->r21 < 0X1 ? 1 : 0;
    // 0x8002E0D8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8002E0DC: bne         $v1, $zero, L_8002E144
    if (ctx->r3 != 0) {
        // 0x8002E0E0: addiu       $a0, $sp, 0x18
        ctx->r4 = ADD32(ctx->r29, 0X18);
            goto L_8002E144;
    }
    // 0x8002E0E0: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x8002E0E4: lhu         $s1, 0x2E($sp)
    ctx->r17 = MEM_HU(ctx->r29, 0X2E);
    // 0x8002E0E8: srl         $s1, $s1, 7
    ctx->r17 = S32(U32(ctx->r17) >> 7);
    // 0x8002E0EC: andi        $s1, $s1, 0x3
    ctx->r17 = ctx->r17 & 0X3;
    // 0x8002E0F0: sll         $s0, $s1, 4
    ctx->r16 = S32(ctx->r17 << 4);
    // 0x8002E0F4: subu        $s0, $s0, $s1
    ctx->r16 = SUB32(ctx->r16, ctx->r17);
    // 0x8002E0F8: sll         $s0, $s0, 4
    ctx->r16 = S32(ctx->r16 << 4);
    // 0x8002E0FC: jal         0x8002CD50
    // 0x8002E100: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    func_8002CD50_8150(rdram, ctx);
        goto after_1;
    // 0x8002E100: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    after_1:
    // 0x8002E104: addiu       $s2, $sp, 0x18
    ctx->r18 = ADD32(ctx->r29, 0X18);
    // 0x8002E108: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8002E10C: lhu         $a3, 0x2E($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X2E);
    // 0x8002E110: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8002E114: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x8002E118: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8002E11C: srl         $a3, $a3, 5
    ctx->r7 = S32(U32(ctx->r7) >> 5);
    // 0x8002E120: jal         0x8002D08C
    // 0x8002E124: andi        $a3, $a3, 0x3
    ctx->r7 = ctx->r7 & 0X3;
    func_8002D08C_848C(rdram, ctx);
        goto after_2;
    // 0x8002E124: andi        $a3, $a3, 0x3
    ctx->r7 = ctx->r7 & 0X3;
    after_2:
    // 0x8002E128: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8002E12C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x8002E130: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x8002E134: addu        $a3, $s6, $zero
    ctx->r7 = ADD32(ctx->r22, 0);
    // 0x8002E138: sw          $s5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r21;
    // 0x8002E13C: jal         0x8002D370
    // 0x8002E140: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_8002D370_8770(rdram, ctx);
        goto after_3;
    // 0x8002E140: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_3:
L_8002E144:
    // 0x8002E144: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    // 0x8002E148: lw          $s6, 0x78($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X78);
    // 0x8002E14C: lw          $s5, 0x74($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X74);
    // 0x8002E150: lw          $s4, 0x70($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X70);
    // 0x8002E154: lw          $s3, 0x6C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X6C);
    // 0x8002E158: lw          $s2, 0x68($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X68);
    // 0x8002E15C: lw          $s1, 0x64($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X64);
    // 0x8002E160: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x8002E164: jr          $ra
    // 0x8002E168: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    TRACE_RETURN()
    return;
    // 0x8002E168: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_8002AD74_6174(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002AD74: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8002AD78: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
    // 0x8002AD7C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8002AD80: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8002AD84: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x8002AD88: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8002AD8C: addu        $s2, $a3, $zero
    ctx->r18 = ADD32(ctx->r7, 0);
    // 0x8002AD90: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8002AD94: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8002AD98: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8002AD9C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8002ADA0: lbu         $v1, 0x0($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0X0);
    // 0x8002ADA4: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x8002ADA8: beq         $v1, $zero, L_8002ADC4
    if (ctx->r3 == 0) {
        // 0x8002ADAC: addu        $s3, $a0, $zero
        ctx->r19 = ADD32(ctx->r4, 0);
            goto L_8002ADC4;
    }
    // 0x8002ADAC: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x8002ADB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8002ADB4: beq         $v1, $v0, L_8002AE5C
    if (ctx->r3 == ctx->r2) {
        // 0x8002ADB8: sll         $v0, $a1, 16
        ctx->r2 = S32(ctx->r5 << 16);
            goto L_8002AE5C;
    }
    // 0x8002ADB8: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x8002ADBC: j           L_8002AFA0
    // 0x8002ADC0: nop

        goto L_8002AFA0;
    // 0x8002ADC0: nop

L_8002ADC4:
    // 0x8002ADC4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8002ADC8: lb          $v0, -0x3BC0($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC0);
    // 0x8002ADCC: bne         $v0, $zero, L_8002ADE4
    if (ctx->r2 != 0) {
        // 0x8002ADD0: sll         $v0, $a0, 16
        ctx->r2 = S32(ctx->r4 << 16);
            goto L_8002ADE4;
    }
    // 0x8002ADD0: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x8002ADD4: lw          $v0, 0x4($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X4);
    // 0x8002ADD8: addiu       $v0, $v0, 0x80
    ctx->r2 = ADD32(ctx->r2, 0X80);
    // 0x8002ADDC: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
    // 0x8002ADE0: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
L_8002ADE4:
    // 0x8002ADE4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8002ADE8: beq         $v0, $zero, L_8002AF20
    if (ctx->r2 == 0) {
        // 0x8002ADEC: lui         $a0, 0x6666
        ctx->r4 = S32(0X6666 << 16);
            goto L_8002AF20;
    }
    // 0x8002ADEC: lui         $a0, 0x6666
    ctx->r4 = S32(0X6666 << 16);
    // 0x8002ADF0: ori         $a0, $a0, 0x6667
    ctx->r4 = ctx->r4 | 0X6667;
    // 0x8002ADF4: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x8002ADF8: subu        $v1, $a1, $v0
    ctx->r3 = SUB32(ctx->r5, ctx->r2);
    // 0x8002ADFC: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x8002AE00: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8002AE04: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002AE08: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x8002AE0C: mfhi        $t1
    ctx->r9 = hi;
    // 0x8002AE10: sra         $v1, $t1, 3
    ctx->r3 = S32(SIGNED(ctx->r9) >> 3);
    // 0x8002AE14: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8002AE18: subu        $v1, $a1, $v1
    ctx->r3 = SUB32(ctx->r5, ctx->r3);
    // 0x8002AE1C: sh          $v1, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r3;
    // 0x8002AE20: lw          $v0, 0x8($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X8);
    // 0x8002AE24: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8002AE28: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8002AE2C: srl         $a0, $v0, 31
    ctx->r4 = S32(U32(ctx->r2) >> 31);
    // 0x8002AE30: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8002AE34: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x8002AE38: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x8002AE3C: mult        $v1, $a1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002AE40: mflo        $v0
    ctx->r2 = lo;
    // 0x8002AE44: nop

    // 0x8002AE48: nop

    // 0x8002AE4C: bltzl       $v0, L_8002AE54
    if (SIGNED(ctx->r2) < 0) {
        // 0x8002AE50: addiu       $v0, $v0, 0x7F
        ctx->r2 = ADD32(ctx->r2, 0X7F);
            goto L_8002AE54;
    }
    goto skip_0;
    // 0x8002AE50: addiu       $v0, $v0, 0x7F
    ctx->r2 = ADD32(ctx->r2, 0X7F);
    skip_0:
L_8002AE54:
    // 0x8002AE54: j           L_8002AF9C
    // 0x8002AE58: sra         $v0, $v0, 7
    ctx->r2 = S32(SIGNED(ctx->r2) >> 7);
        goto L_8002AF9C;
    // 0x8002AE58: sra         $v0, $v0, 7
    ctx->r2 = S32(SIGNED(ctx->r2) >> 7);
L_8002AE5C:
    // 0x8002AE5C: bne         $v0, $zero, L_8002AEA0
    if (ctx->r2 != 0) {
        // 0x8002AE60: lui         $a1, 0x6666
        ctx->r5 = S32(0X6666 << 16);
            goto L_8002AEA0;
    }
    // 0x8002AE60: lui         $a1, 0x6666
    ctx->r5 = S32(0X6666 << 16);
    // 0x8002AE64: ori         $a1, $a1, 0x6667
    ctx->r5 = ctx->r5 | 0X6667;
    // 0x8002AE68: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x8002AE6C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8002AE70: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    // 0x8002AE74: subu        $v0, $a0, $v0
    ctx->r2 = SUB32(ctx->r4, ctx->r2);
    // 0x8002AE78: sll         $v1, $v0, 4
    ctx->r3 = S32(ctx->r2 << 4);
    // 0x8002AE7C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8002AE80: mult        $v1, $a1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002AE84: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x8002AE88: mfhi        $t1
    ctx->r9 = hi;
    // 0x8002AE8C: sra         $v0, $t1, 3
    ctx->r2 = S32(SIGNED(ctx->r9) >> 3);
    // 0x8002AE90: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8002AE94: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x8002AE98: j           L_8002AFA0
    // 0x8002AE9C: sh          $a0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r4;
        goto L_8002AFA0;
    // 0x8002AE9C: sh          $a0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r4;
L_8002AEA0:
    // 0x8002AEA0: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x8002AEA4: lw          $v0, 0x290($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X290);
    // 0x8002AEA8: lh          $a2, 0x4($t0)
    ctx->r6 = MEM_H(ctx->r8, 0X4);
    // 0x8002AEAC: lh          $a3, 0x8($t0)
    ctx->r7 = MEM_H(ctx->r8, 0X8);
    // 0x8002AEB0: lh          $a0, 0x14($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X14);
    // 0x8002AEB4: jal         0x8005F7D4
    // 0x8002AEB8: lh          $a1, 0x18($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X18);
    func_8005F7D4_3ABD4(rdram, ctx);
        goto after_0;
    // 0x8002AEB8: lh          $a1, 0x18($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X18);
    after_0:
    // 0x8002AEBC: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8002AEC0: lw          $v1, 0x290($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X290);
    // 0x8002AEC4: lh          $v1, 0x56($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X56);
    // 0x8002AEC8: subu        $s0, $v1, $v0
    ctx->r16 = SUB32(ctx->r3, ctx->r2);
    // 0x8002AECC: andi        $s0, $s0, 0xFFF
    ctx->r16 = ctx->r16 & 0XFFF;
    // 0x8002AED0: jal         0x800324D0
    // 0x8002AED4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800324D0_D8D0(rdram, ctx);
        goto after_1;
    // 0x8002AED4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8002AED8: sll         $v0, $v0, 7
    ctx->r2 = S32(ctx->r2 << 7);
    // 0x8002AEDC: sra         $v1, $v0, 12
    ctx->r3 = S32(SIGNED(ctx->r2) >> 12);
    // 0x8002AEE0: bltzl       $v1, L_8002AEE8
    if (SIGNED(ctx->r3) < 0) {
        // 0x8002AEE4: negu        $v1, $v1
        ctx->r3 = SUB32(0, ctx->r3);
            goto L_8002AEE8;
    }
    goto skip_1;
    // 0x8002AEE4: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    skip_1:
L_8002AEE8:
    // 0x8002AEE8: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8002AEEC: lb          $v0, -0x3BC0($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC0);
    // 0x8002AEF0: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    // 0x8002AEF4: bne         $v0, $zero, L_8002AF10
    if (ctx->r2 != 0) {
        // 0x8002AEF8: subu        $v1, $a0, $v1
        ctx->r3 = SUB32(ctx->r4, ctx->r3);
            goto L_8002AF10;
    }
    // 0x8002AEF8: subu        $v1, $a0, $v1
    ctx->r3 = SUB32(ctx->r4, ctx->r3);
    // 0x8002AEFC: slti        $v0, $s0, 0x800
    ctx->r2 = SIGNED(ctx->r16) < 0X800 ? 1 : 0;
    // 0x8002AF00: bne         $v0, $zero, L_8002AF0C
    if (ctx->r2 != 0) {
        // 0x8002AF04: subu        $v0, $a0, $v1
        ctx->r2 = SUB32(ctx->r4, ctx->r3);
            goto L_8002AF0C;
    }
    // 0x8002AF04: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x8002AF08: addiu       $v0, $v1, 0x80
    ctx->r2 = ADD32(ctx->r3, 0X80);
L_8002AF0C:
    // 0x8002AF0C: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
L_8002AF10:
    // 0x8002AF10: sll         $v0, $s3, 16
    ctx->r2 = S32(ctx->r19 << 16);
    // 0x8002AF14: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8002AF18: bne         $v0, $zero, L_8002AF28
    if (ctx->r2 != 0) {
        // 0x8002AF1C: lui         $a1, 0x6666
        ctx->r5 = S32(0X6666 << 16);
            goto L_8002AF28;
    }
    // 0x8002AF1C: lui         $a1, 0x6666
    ctx->r5 = S32(0X6666 << 16);
L_8002AF20:
    // 0x8002AF20: j           L_8002AFA0
    // 0x8002AF24: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
        goto L_8002AFA0;
    // 0x8002AF24: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
L_8002AF28:
    // 0x8002AF28: ori         $a1, $a1, 0x6667
    ctx->r5 = ctx->r5 | 0X6667;
    // 0x8002AF2C: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    // 0x8002AF30: subu        $v1, $a0, $v0
    ctx->r3 = SUB32(ctx->r4, ctx->r2);
    // 0x8002AF34: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x8002AF38: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8002AF3C: mult        $v0, $a1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002AF40: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x8002AF44: mfhi        $t1
    ctx->r9 = hi;
    // 0x8002AF48: sra         $v1, $t1, 3
    ctx->r3 = S32(SIGNED(ctx->r9) >> 3);
    // 0x8002AF4C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8002AF50: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x8002AF54: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8002AF58: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8002AF5C: sll         $v0, $s4, 16
    ctx->r2 = S32(ctx->r20 << 16);
    // 0x8002AF60: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8002AF64: srl         $v0, $v0, 31
    ctx->r2 = S32(U32(ctx->r2) >> 31);
    // 0x8002AF68: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8002AF6C: sra         $v1, $v1, 1
    ctx->r3 = S32(SIGNED(ctx->r3) >> 1);
    // 0x8002AF70: addiu       $v0, $zero, 0x1388
    ctx->r2 = ADD32(0, 0X1388);
    // 0x8002AF74: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8002AF78: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002AF7C: mflo        $a0
    ctx->r4 = lo;
    // 0x8002AF80: lui         $v0, 0x68DB
    ctx->r2 = S32(0X68DB << 16);
    // 0x8002AF84: ori         $v0, $v0, 0x8BAD
    ctx->r2 = ctx->r2 | 0X8BAD;
    // 0x8002AF88: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002AF8C: sra         $a0, $a0, 31
    ctx->r4 = S32(SIGNED(ctx->r4) >> 31);
    // 0x8002AF90: mfhi        $t1
    ctx->r9 = hi;
    // 0x8002AF94: sra         $v0, $t1, 11
    ctx->r2 = S32(SIGNED(ctx->r9) >> 11);
    // 0x8002AF98: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
L_8002AF9C:
    // 0x8002AF9C: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8002AFA0:
    // 0x8002AFA0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8002AFA4: lh          $v0, -0x3F80($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X3F80);
    // 0x8002AFA8: lh          $v1, 0x0($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X0);
    // 0x8002AFAC: addiu       $v0, $v0, 0x2E
    ctx->r2 = ADD32(ctx->r2, 0X2E);
    // 0x8002AFB0: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002AFB4: mflo        $v1
    ctx->r3 = lo;
    // 0x8002AFB8: lui         $a0, 0x8102
    ctx->r4 = S32(0X8102 << 16);
    // 0x8002AFBC: ori         $a0, $a0, 0x409
    ctx->r4 = ctx->r4 | 0X409;
    // 0x8002AFC0: mult        $v1, $a0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002AFC4: mfhi        $t1
    ctx->r9 = hi;
    // 0x8002AFC8: addu        $v0, $t1, $v1
    ctx->r2 = ADD32(ctx->r9, ctx->r3);
    // 0x8002AFCC: sra         $v0, $v0, 6
    ctx->r2 = S32(SIGNED(ctx->r2) >> 6);
    // 0x8002AFD0: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x8002AFD4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8002AFD8: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8002AFDC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8002AFE0: lh          $v1, -0x3F78($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X3F78);
    // 0x8002AFE4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8002AFE8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8002AFEC: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002AFF0: mflo        $v0
    ctx->r2 = lo;
    // 0x8002AFF4: nop

    // 0x8002AFF8: nop

    // 0x8002AFFC: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002B000: mfhi        $t1
    ctx->r9 = hi;
    // 0x8002B004: addu        $v1, $t1, $v0
    ctx->r3 = ADD32(ctx->r9, ctx->r2);
    // 0x8002B008: sra         $v1, $v1, 6
    ctx->r3 = S32(SIGNED(ctx->r3) >> 6);
    // 0x8002B00C: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x8002B010: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8002B014: sh          $v1, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r3;
    // 0x8002B018: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8002B01C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8002B020: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8002B024: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8002B028: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8002B02C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8002B030: jr          $ra
    // 0x8002B034: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8002B034: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80091260_6C660(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80091260: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80091264: lw          $v0, -0xEF0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XEF0);
    // 0x80091268: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009126C: bne         $v0, $zero, L_80091298
    if (ctx->r2 != 0) {
        // 0x80091270: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_80091298;
    }
    // 0x80091270: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80091274: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80091278: lw          $v0, -0xEEC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XEEC);
    // 0x8009127C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80091280: bne         $v0, $zero, L_80091298
    if (ctx->r2 != 0) {
        // 0x80091284: sw          $a0, -0xEF0($at)
        MEM_W(-0XEF0, ctx->r1) = ctx->r4;
            goto L_80091298;
    }
    // 0x80091284: sw          $a0, -0xEF0($at)
    MEM_W(-0XEF0, ctx->r1) = ctx->r4;
    // 0x80091288: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8009128C: sw          $a0, -0xEEC($at)
    MEM_W(-0XEEC, ctx->r1) = ctx->r4;
    // 0x80091290: jal         0x800918A0
    // 0x80091294: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    func_800918A0_6CCA0(rdram, ctx);
        goto after_0;
    // 0x80091294: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    after_0:
L_80091298:
    // 0x80091298: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8009129C: jr          $ra
    // 0x800912A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x800912A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8006DFD4_493D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006DFD4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8006DFD8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8006DFDC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8006DFE0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8006DFE4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8006DFE8: lb          $v0, 0x174($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X174);
    // 0x8006DFEC: lhu         $s1, 0x11C($s0)
    ctx->r17 = MEM_HU(ctx->r16, 0X11C);
    // 0x8006DFF0: andi        $a0, $v0, 0xC0
    ctx->r4 = ctx->r2 & 0XC0;
    // 0x8006DFF4: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8006DFF8: bne         $a0, $v0, L_8006E024
    if (ctx->r4 != ctx->r2) {
        // 0x8006DFFC: addiu       $v0, $zero, 0x80
        ctx->r2 = ADD32(0, 0X80);
            goto L_8006E024;
    }
    // 0x8006DFFC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8006E000: lb          $v0, 0x170($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X170);
    // 0x8006E004: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8006E008: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8006E00C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8006E010: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8006E014: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8006E018: lbu         $v0, 0x30FA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X30FA);
    // 0x8006E01C: beq         $v0, $zero, L_8006E050
    if (ctx->r2 == 0) {
        // 0x8006E020: addiu       $v0, $zero, 0x80
        ctx->r2 = ADD32(0, 0X80);
            goto L_8006E050;
    }
    // 0x8006E020: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
L_8006E024:
    // 0x8006E024: bne         $a0, $v0, L_8006E054
    if (ctx->r4 != ctx->r2) {
        // 0x8006E028: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8006E054;
    }
    // 0x8006E028: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8006E02C: lb          $v0, 0x171($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X171);
    // 0x8006E030: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8006E034: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8006E038: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8006E03C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8006E040: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8006E044: lbu         $v0, 0x30FA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X30FA);
    // 0x8006E048: bne         $v0, $zero, L_8006E054
    if (ctx->r2 != 0) {
        // 0x8006E04C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8006E054;
    }
    // 0x8006E04C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8006E050:
    // 0x8006E050: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8006E054:
    // 0x8006E054: bnel        $v0, $zero, L_8006E3C8
    if (ctx->r2 != 0) {
        // 0x8006E058: sb          $zero, 0x9($s0)
        MEM_B(0X9, ctx->r16) = 0;
            goto L_8006E3C8;
    }
    goto skip_0;
    // 0x8006E058: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    skip_0:
    // 0x8006E05C: lhu         $a0, 0x124($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X124);
    // 0x8006E060: lhu         $v0, 0x126($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X126);
    // 0x8006E064: lhu         $v1, 0x12C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X12C);
    // 0x8006E068: lhu         $a1, 0x12E($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X12E);
    // 0x8006E06C: lhu         $a2, 0x12A($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X12A);
    // 0x8006E070: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x8006E074: lhu         $v0, 0x138($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X138);
    // 0x8006E078: or          $v1, $v1, $a1
    ctx->r3 = ctx->r3 | ctx->r5;
    // 0x8006E07C: or          $a0, $a0, $v1
    ctx->r4 = ctx->r4 | ctx->r3;
    // 0x8006E080: lhu         $v1, 0x13A($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X13A);
    // 0x8006E084: lhu         $a1, 0x13C($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X13C);
    // 0x8006E088: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x8006E08C: lhu         $a0, 0x128($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X128);
    // 0x8006E090: or          $v1, $v1, $a1
    ctx->r3 = ctx->r3 | ctx->r5;
    // 0x8006E094: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8006E098: or          $a0, $a0, $a2
    ctx->r4 = ctx->r4 | ctx->r6;
    // 0x8006E09C: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x8006E0A0: and         $v0, $s1, $v0
    ctx->r2 = ctx->r17 & ctx->r2;
    // 0x8006E0A4: beq         $v0, $zero, L_8006E3C4
    if (ctx->r2 == 0) {
        // 0x8006E0A8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8006E3C4;
    }
    // 0x8006E0A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006E0AC: jal         0x8006CC14
    // 0x8006E0B0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8006CC14_48014(rdram, ctx);
        goto after_0;
    // 0x8006E0B0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x8006E0B4: bne         $v0, $zero, L_8006E3CC
    if (ctx->r2 != 0) {
        // 0x8006E0B8: nop
    
            goto L_8006E3CC;
    }
    // 0x8006E0B8: nop

    // 0x8006E0BC: lhu         $v1, 0x11E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X11E);
    // 0x8006E0C0: lhu         $v0, 0x138($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X138);
    // 0x8006E0C4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8006E0C8: beq         $v0, $zero, L_8006E0E0
    if (ctx->r2 == 0) {
        // 0x8006E0CC: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8006E0E0;
    }
    // 0x8006E0CC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8006E0D0: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8006E0D4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8006E0D8: j           L_8006E0E4
    // 0x8006E0DC: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_8006E0E4;
    // 0x8006E0DC: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8006E0E0:
    // 0x8006E0E0: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_8006E0E4:
    // 0x8006E0E4: bne         $v1, $zero, L_8006E3CC
    if (ctx->r3 != 0) {
        // 0x8006E0E8: nop
    
            goto L_8006E3CC;
    }
    // 0x8006E0E8: nop

    // 0x8006E0EC: lhu         $a0, 0x11C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X11C);
    // 0x8006E0F0: lhu         $v0, 0x13C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X13C);
    // 0x8006E0F4: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x8006E0F8: beq         $v0, $zero, L_8006E124
    if (ctx->r2 == 0) {
        // 0x8006E0FC: nop
    
            goto L_8006E124;
    }
    // 0x8006E0FC: nop

    // 0x8006E100: lb          $v0, 0x170($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X170);
    // 0x8006E104: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8006E108: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8006E10C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8006E110: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8006E114: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8006E118: lbu         $v0, 0x30F8($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X30F8);
    // 0x8006E11C: beq         $v0, $zero, L_8006E15C
    if (ctx->r2 == 0) {
        // 0x8006E120: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8006E15C;
    }
    // 0x8006E120: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8006E124:
    // 0x8006E124: lhu         $v0, 0x13A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X13A);
    // 0x8006E128: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x8006E12C: beq         $v0, $zero, L_8006E15C
    if (ctx->r2 == 0) {
        // 0x8006E130: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8006E15C;
    }
    // 0x8006E130: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8006E134: lb          $v0, 0x171($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X171);
    // 0x8006E138: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8006E13C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8006E140: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8006E144: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8006E148: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8006E14C: lbu         $v0, 0x30F8($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X30F8);
    // 0x8006E150: bne         $v0, $zero, L_8006E15C
    if (ctx->r2 != 0) {
        // 0x8006E154: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8006E15C;
    }
    // 0x8006E154: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8006E158: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8006E15C:
    // 0x8006E15C: bne         $v0, $zero, L_8006E2C4
    if (ctx->r2 != 0) {
        // 0x8006E160: nop
    
            goto L_8006E2C4;
    }
    // 0x8006E160: nop

    // 0x8006E164: lhu         $a1, 0x12C($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X12C);
    // 0x8006E168: lhu         $v0, 0x12E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X12E);
    // 0x8006E16C: lhu         $a0, 0x11C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X11C);
    // 0x8006E170: or          $v0, $a1, $v0
    ctx->r2 = ctx->r5 | ctx->r2;
    // 0x8006E174: and         $v1, $a0, $v0
    ctx->r3 = ctx->r4 & ctx->r2;
    // 0x8006E178: beq         $v1, $v0, L_8006E1BC
    if (ctx->r3 == ctx->r2) {
        // 0x8006E17C: and         $v0, $a1, $a0
        ctx->r2 = ctx->r5 & ctx->r4;
            goto L_8006E1BC;
    }
    // 0x8006E17C: and         $v0, $a1, $a0
    ctx->r2 = ctx->r5 & ctx->r4;
    // 0x8006E180: beql        $v0, $zero, L_8006E1C0
    if (ctx->r2 == 0) {
        // 0x8006E184: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8006E1C0;
    }
    goto skip_1;
    // 0x8006E184: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    skip_1:
    // 0x8006E188: lhu         $v0, 0x134($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X134);
    // 0x8006E18C: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x8006E190: bne         $v0, $zero, L_8006E1C0
    if (ctx->r2 != 0) {
        // 0x8006E194: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8006E1C0;
    }
    // 0x8006E194: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8006E198: lbu         $v0, 0x112($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X112);
    // 0x8006E19C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8006E1A0: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8006E1A4: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x8006E1A8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8006E1AC: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8006E1B0: sb          $v1, 0x112($s0)
    MEM_B(0X112, ctx->r16) = ctx->r3;
    // 0x8006E1B4: j           L_8006E1C0
    // 0x8006E1B8: sb          $v0, 0x113($s0)
    MEM_B(0X113, ctx->r16) = ctx->r2;
        goto L_8006E1C0;
    // 0x8006E1B8: sb          $v0, 0x113($s0)
    MEM_B(0X113, ctx->r16) = ctx->r2;
L_8006E1BC:
    // 0x8006E1BC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_8006E1C0:
    // 0x8006E1C0: bne         $a0, $zero, L_8006E3CC
    if (ctx->r4 != 0) {
        // 0x8006E1C4: nop
    
            goto L_8006E3CC;
    }
    // 0x8006E1C4: nop

    // 0x8006E1C8: lhu         $v0, 0x12C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X12C);
    // 0x8006E1CC: lhu         $a1, 0x12E($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X12E);
    // 0x8006E1D0: lhu         $a0, 0x11C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X11C);
    // 0x8006E1D4: or          $v0, $v0, $a1
    ctx->r2 = ctx->r2 | ctx->r5;
    // 0x8006E1D8: and         $v1, $a0, $v0
    ctx->r3 = ctx->r4 & ctx->r2;
    // 0x8006E1DC: beq         $v1, $v0, L_8006E220
    if (ctx->r3 == ctx->r2) {
        // 0x8006E1E0: and         $v0, $a1, $a0
        ctx->r2 = ctx->r5 & ctx->r4;
            goto L_8006E220;
    }
    // 0x8006E1E0: and         $v0, $a1, $a0
    ctx->r2 = ctx->r5 & ctx->r4;
    // 0x8006E1E4: beql        $v0, $zero, L_8006E224
    if (ctx->r2 == 0) {
        // 0x8006E1E8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8006E224;
    }
    goto skip_2;
    // 0x8006E1E8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    skip_2:
    // 0x8006E1EC: lhu         $v0, 0x134($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X134);
    // 0x8006E1F0: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x8006E1F4: bne         $v0, $zero, L_8006E224
    if (ctx->r2 != 0) {
        // 0x8006E1F8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8006E224;
    }
    // 0x8006E1F8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8006E1FC: lbu         $v0, 0x112($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X112);
    // 0x8006E200: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8006E204: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8006E208: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x8006E20C: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8006E210: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8006E214: sb          $v1, 0x112($s0)
    MEM_B(0X112, ctx->r16) = ctx->r3;
    // 0x8006E218: j           L_8006E224
    // 0x8006E21C: sb          $v0, 0x113($s0)
    MEM_B(0X113, ctx->r16) = ctx->r2;
        goto L_8006E224;
    // 0x8006E21C: sb          $v0, 0x113($s0)
    MEM_B(0X113, ctx->r16) = ctx->r2;
L_8006E220:
    // 0x8006E220: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_8006E224:
    // 0x8006E224: bne         $a0, $zero, L_8006E3CC
    if (ctx->r4 != 0) {
        // 0x8006E228: nop
    
            goto L_8006E3CC;
    }
    // 0x8006E228: nop

    // 0x8006E22C: lhu         $v1, 0x11C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X11C);
    // 0x8006E230: lhu         $v0, 0x124($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X124);
    // 0x8006E234: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8006E238: beq         $v0, $zero, L_8006E268
    if (ctx->r2 == 0) {
        // 0x8006E23C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8006E268;
    }
    // 0x8006E23C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8006E240: lhu         $v0, 0x134($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X134);
    // 0x8006E244: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8006E248: bne         $v0, $zero, L_8006E268
    if (ctx->r2 != 0) {
        // 0x8006E24C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8006E268;
    }
    // 0x8006E24C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8006E250: lbu         $v1, 0x112($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X112);
    // 0x8006E254: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8006E258: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8006E25C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8006E260: sb          $zero, 0x112($s0)
    MEM_B(0X112, ctx->r16) = 0;
    // 0x8006E264: sb          $v1, 0x113($s0)
    MEM_B(0X113, ctx->r16) = ctx->r3;
L_8006E268:
    // 0x8006E268: bne         $a0, $zero, L_8006E3CC
    if (ctx->r4 != 0) {
        // 0x8006E26C: nop
    
            goto L_8006E3CC;
    }
    // 0x8006E26C: nop

    // 0x8006E270: lb          $v0, 0x174($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X174);
    // 0x8006E274: andi        $v0, $v0, 0xC0
    ctx->r2 = ctx->r2 & 0XC0;
    // 0x8006E278: bne         $v0, $zero, L_8006E3AC
    if (ctx->r2 != 0) {
        // 0x8006E27C: nop
    
            goto L_8006E3AC;
    }
    // 0x8006E27C: nop

    // 0x8006E280: lhu         $v1, 0x11C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X11C);
    // 0x8006E284: lhu         $v0, 0x126($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X126);
    // 0x8006E288: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8006E28C: beq         $v0, $zero, L_8006E2BC
    if (ctx->r2 == 0) {
        // 0x8006E290: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8006E2BC;
    }
    // 0x8006E290: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8006E294: lhu         $v0, 0x134($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X134);
    // 0x8006E298: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8006E29C: bne         $v0, $zero, L_8006E2BC
    if (ctx->r2 != 0) {
        // 0x8006E2A0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8006E2BC;
    }
    // 0x8006E2A0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8006E2A4: lbu         $v1, 0x112($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X112);
    // 0x8006E2A8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8006E2AC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8006E2B0: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8006E2B4: sb          $v0, 0x112($s0)
    MEM_B(0X112, ctx->r16) = ctx->r2;
    // 0x8006E2B8: sb          $v1, 0x113($s0)
    MEM_B(0X113, ctx->r16) = ctx->r3;
L_8006E2BC:
    // 0x8006E2BC: bne         $a0, $zero, L_8006E3CC
    if (ctx->r4 != 0) {
        // 0x8006E2C0: nop
    
            goto L_8006E3CC;
    }
    // 0x8006E2C0: nop

L_8006E2C4:
    // 0x8006E2C4: lb          $v0, 0x174($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X174);
    // 0x8006E2C8: andi        $v0, $v0, 0xC0
    ctx->r2 = ctx->r2 & 0XC0;
    // 0x8006E2CC: bne         $v0, $zero, L_8006E3AC
    if (ctx->r2 != 0) {
        // 0x8006E2D0: nop
    
            goto L_8006E3AC;
    }
    // 0x8006E2D0: nop

    // 0x8006E2D4: lb          $v0, 0x177($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X177);
    // 0x8006E2D8: bne         $v0, $zero, L_8006E3AC
    if (ctx->r2 != 0) {
        // 0x8006E2DC: nop
    
            goto L_8006E3AC;
    }
    // 0x8006E2DC: nop

    // 0x8006E2E0: lhu         $v1, 0x11C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X11C);
    // 0x8006E2E4: lhu         $v0, 0x124($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X124);
    // 0x8006E2E8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8006E2EC: beql        $v0, $zero, L_8006E318
    if (ctx->r2 == 0) {
        // 0x8006E2F0: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_8006E318;
    }
    goto skip_3;
    // 0x8006E2F0: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    skip_3:
    // 0x8006E2F4: lhu         $v0, 0x134($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X134);
    // 0x8006E2F8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8006E2FC: beq         $v0, $zero, L_8006E314
    if (ctx->r2 == 0) {
        // 0x8006E300: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8006E314;
    }
    // 0x8006E300: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8006E304: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006E308: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8006E30C: j           L_8006E318
    // 0x8006E310: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_8006E318;
    // 0x8006E310: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8006E314:
    // 0x8006E314: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_8006E318:
    // 0x8006E318: bne         $v1, $zero, L_8006E3CC
    if (ctx->r3 != 0) {
        // 0x8006E31C: nop
    
            goto L_8006E3CC;
    }
    // 0x8006E31C: nop

    // 0x8006E320: lhu         $a0, 0x11C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X11C);
    // 0x8006E324: lhu         $v0, 0x134($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X134);
    // 0x8006E328: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x8006E32C: beq         $v0, $zero, L_8006E360
    if (ctx->r2 == 0) {
        // 0x8006E330: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_8006E360;
    }
    // 0x8006E330: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x8006E334: lhu         $v0, 0x130($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X130);
    // 0x8006E338: lhu         $v1, 0x132($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X132);
    // 0x8006E33C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8006E340: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x8006E344: beq         $v0, $zero, L_8006E35C
    if (ctx->r2 == 0) {
        // 0x8006E348: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8006E35C;
    }
    // 0x8006E348: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8006E34C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8006E350: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8006E354: j           L_8006E360
    // 0x8006E358: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_8006E360;
    // 0x8006E358: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8006E35C:
    // 0x8006E35C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_8006E360:
    // 0x8006E360: bne         $v1, $zero, L_8006E3CC
    if (ctx->r3 != 0) {
        // 0x8006E364: nop
    
            goto L_8006E3CC;
    }
    // 0x8006E364: nop

    // 0x8006E368: lhu         $v1, 0x11C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X11C);
    // 0x8006E36C: lhu         $v0, 0x126($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X126);
    // 0x8006E370: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8006E374: beql        $v0, $zero, L_8006E3A4
    if (ctx->r2 == 0) {
        // 0x8006E378: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_8006E3A4;
    }
    goto skip_4;
    // 0x8006E378: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    skip_4:
    // 0x8006E37C: lhu         $v0, 0x134($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X134);
    // 0x8006E380: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8006E384: beq         $v0, $zero, L_8006E3A0
    if (ctx->r2 == 0) {
        // 0x8006E388: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8006E3A0;
    }
    // 0x8006E388: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8006E38C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006E390: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8006E394: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006E398: j           L_8006E3A4
    // 0x8006E39C: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
        goto L_8006E3A4;
    // 0x8006E39C: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
L_8006E3A0:
    // 0x8006E3A0: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_8006E3A4:
    // 0x8006E3A4: bne         $v1, $zero, L_8006E3CC
    if (ctx->r3 != 0) {
        // 0x8006E3A8: nop
    
            goto L_8006E3CC;
    }
    // 0x8006E3A8: nop

L_8006E3AC:
    // 0x8006E3AC: lhu         $v0, 0x128($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X128);
    // 0x8006E3B0: lhu         $v1, 0x12A($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X12A);
    // 0x8006E3B4: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8006E3B8: and         $v0, $s1, $v0
    ctx->r2 = ctx->r17 & ctx->r2;
    // 0x8006E3BC: bne         $v0, $zero, L_8006E3CC
    if (ctx->r2 != 0) {
        // 0x8006E3C0: nop
    
            goto L_8006E3CC;
    }
    // 0x8006E3C0: nop

L_8006E3C4:
    // 0x8006E3C4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_8006E3C8:
    // 0x8006E3C8: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8006E3CC:
    // 0x8006E3CC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8006E3D0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8006E3D4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8006E3D8: jr          $ra
    // 0x8006E3DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8006E3DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8003D774_18B74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003D774: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8003D778: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8003D77C: lui         $s0, 0x801A
    ctx->r16 = S32(0X801A << 16);
    // 0x8003D780: lw          $s0, -0x5858($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X5858);
    // 0x8003D784: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8003D788: addiu       $s3, $zero, 0x5
    ctx->r19 = ADD32(0, 0X5);
    // 0x8003D78C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8003D790: addiu       $s2, $zero, 0x28
    ctx->r18 = ADD32(0, 0X28);
    // 0x8003D794: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8003D798: addiu       $s1, $zero, 0x140
    ctx->r17 = ADD32(0, 0X140);
    // 0x8003D79C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8003D7A0: sb          $s3, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r19;
    // 0x8003D7A4: sb          $s2, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r18;
    // 0x8003D7A8: sh          $zero, 0x8($s0)
    MEM_H(0X8, ctx->r16) = 0;
    // 0x8003D7AC: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8003D7B0: sh          $s1, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r17;
    // 0x8003D7B4: sh          $zero, 0xE($s0)
    MEM_H(0XE, ctx->r16) = 0;
    // 0x8003D7B8: sh          $zero, 0x10($s0)
    MEM_H(0X10, ctx->r16) = 0;
    // 0x8003D7BC: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003D7C0: lhu         $v0, -0x3C10($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3C10);
    // 0x8003D7C4: addiu       $v1, $zero, 0x78
    ctx->r3 = ADD32(0, 0X78);
    // 0x8003D7C8: sh          $s1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r17;
    // 0x8003D7CC: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x8003D7D0: sh          $v0, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r2;
    // 0x8003D7D4: lui         $a2, 0x801C
    ctx->r6 = S32(0X801C << 16);
    // 0x8003D7D8: lhu         $a2, -0x3C10($a2)
    ctx->r6 = MEM_HU(ctx->r6, -0X3C10);
    // 0x8003D7DC: lbu         $v0, 0x7($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X7);
    // 0x8003D7E0: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
    // 0x8003D7E4: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x8003D7E8: sb          $zero, 0x6($s0)
    MEM_B(0X6, ctx->r16) = 0;
    // 0x8003D7EC: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8003D7F0: sb          $v0, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r2;
    // 0x8003D7F4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8003D7F8: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x8003D7FC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8003D800: subu        $v1, $v1, $a2
    ctx->r3 = SUB32(ctx->r3, ctx->r6);
    // 0x8003D804: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x8003D808: addiu       $s0, $s0, 0x28
    ctx->r16 = ADD32(ctx->r16, 0X28);
    // 0x8003D80C: jal         0x800302C8
    // 0x8003D810: addiu       $a0, $a0, 0x74
    ctx->r4 = ADD32(ctx->r4, 0X74);
    func_800302C8_B6C8(rdram, ctx);
        goto after_0;
    // 0x8003D810: addiu       $a0, $a0, 0x74
    ctx->r4 = ADD32(ctx->r4, 0X74);
    after_0:
    // 0x8003D814: sb          $s3, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r19;
    // 0x8003D818: sb          $s2, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r18;
    // 0x8003D81C: sh          $zero, 0x8($s0)
    MEM_H(0X8, ctx->r16) = 0;
    // 0x8003D820: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003D824: lhu         $v0, -0x3C10($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3C10);
    // 0x8003D828: sh          $s1, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r17;
    // 0x8003D82C: addiu       $v0, $v0, 0x77
    ctx->r2 = ADD32(ctx->r2, 0X77);
    // 0x8003D830: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
    // 0x8003D834: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003D838: lhu         $v1, -0x3C10($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X3C10);
    // 0x8003D83C: lbu         $v0, 0x7($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X7);
    // 0x8003D840: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8003D844: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
    // 0x8003D848: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x8003D84C: sb          $zero, 0x6($s0)
    MEM_B(0X6, ctx->r16) = 0;
    // 0x8003D850: sh          $zero, 0x10($s0)
    MEM_H(0X10, ctx->r16) = 0;
    // 0x8003D854: sh          $s1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r17;
    // 0x8003D858: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8003D85C: sb          $v0, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r2;
    // 0x8003D860: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8003D864: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x8003D868: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
    // 0x8003D86C: addiu       $v1, $v1, 0x77
    ctx->r3 = ADD32(ctx->r3, 0X77);
    // 0x8003D870: sh          $v0, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r2;
    // 0x8003D874: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8003D878: sh          $v1, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r3;
    // 0x8003D87C: addiu       $s0, $s0, 0x28
    ctx->r16 = ADD32(ctx->r16, 0X28);
    // 0x8003D880: jal         0x800302C8
    // 0x8003D884: addiu       $a0, $a0, 0x74
    ctx->r4 = ADD32(ctx->r4, 0X74);
    func_800302C8_B6C8(rdram, ctx);
        goto after_1;
    // 0x8003D884: addiu       $a0, $a0, 0x74
    ctx->r4 = ADD32(ctx->r4, 0X74);
    after_1:
    // 0x8003D888: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8003D88C: sw          $s0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r16;
    // 0x8003D890: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8003D894: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8003D898: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8003D89C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8003D8A0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8003D8A4: jr          $ra
    // 0x8003D8A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8003D8A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8007ACD0_560D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007ACD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007ACD4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8007ACD8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8007ACDC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8007ACE0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x8007ACE4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8007ACE8: lw          $v0, -0x2D80($at)
    ctx->r2 = MEM_W(ctx->r1, -0X2D80);
    // 0x8007ACEC: jalr        $v0
    // 0x8007ACF0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8007ACF0: nop

    after_0:
    // 0x8007ACF4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8007ACF8: jr          $ra
    // 0x8007ACFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8007ACFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80034FCC_103CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80034FCC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80034FD0: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80034FD4: addiu       $v1, $v1, -0x3A4F
    ctx->r3 = ADD32(ctx->r3, -0X3A4F);
    // 0x80034FD8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80034FDC: lbu         $t0, 0x0($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X0);
    // 0x80034FE0: lui         $t1, 0x801C
    ctx->r9 = S32(0X801C << 16);
    // 0x80034FE4: lbu         $t1, -0x3A50($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X3A50);
    // 0x80034FE8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80034FEC: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80034FF0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80034FF4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80034FF8: sb          $v0, -0x3A50($at)
    MEM_B(-0X3A50, ctx->r1) = ctx->r2;
    // 0x80034FFC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80035000: sw          $t0, 0x2828($at)
    MEM_W(0X2828, ctx->r1) = ctx->r8;
    // 0x80035004: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80035008: jal         0x8003501C
    // 0x8003500C: sw          $t1, 0x2824($at)
    MEM_W(0X2824, ctx->r1) = ctx->r9;
    func_8003501C_1041C(rdram, ctx);
        goto after_0;
    // 0x8003500C: sw          $t1, 0x2824($at)
    MEM_W(0X2824, ctx->r1) = ctx->r9;
    after_0:
    // 0x80035010: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80035014: jr          $ra
    // 0x80035018: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80035018: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800460D8_214D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800460D8: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x800460DC: lh          $v1, -0x35BA($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X35BA);
    // 0x800460E0: beq         $v1, $zero, L_8004611C
    if (ctx->r3 == 0) {
        // 0x800460E4: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_8004611C;
    }
    // 0x800460E4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x800460E8: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x800460EC: bltzl       $v1, L_800460F4
    if (SIGNED(ctx->r3) < 0) {
        // 0x800460F0: negu        $v1, $v1
        ctx->r3 = SUB32(0, ctx->r3);
            goto L_800460F4;
    }
    goto skip_0;
    // 0x800460F0: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    skip_0:
L_800460F4:
    // 0x800460F4: bltzl       $v0, L_80046110
    if (SIGNED(ctx->r2) < 0) {
        // 0x800460F8: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_80046110;
    }
    goto skip_1;
    // 0x800460F8: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_1:
    // 0x800460FC: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80046100: bnel        $v0, $zero, L_80046120
    if (ctx->r2 != 0) {
        // 0x80046104: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_80046120;
    }
    goto skip_2;
    // 0x80046104: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    skip_2:
    // 0x80046108: j           L_80046124
    // 0x8004610C: xori        $v1, $a1, 0x1
    ctx->r3 = ctx->r5 ^ 0X1;
        goto L_80046124;
    // 0x8004610C: xori        $v1, $a1, 0x1
    ctx->r3 = ctx->r5 ^ 0X1;
L_80046110:
    // 0x80046110: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80046114: beq         $v0, $zero, L_80046124
    if (ctx->r2 == 0) {
        // 0x80046118: xori        $v1, $a1, 0x1
        ctx->r3 = ctx->r5 ^ 0X1;
            goto L_80046124;
    }
    // 0x80046118: xori        $v1, $a1, 0x1
    ctx->r3 = ctx->r5 ^ 0X1;
L_8004611C:
    // 0x8004611C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_80046120:
    // 0x80046120: xori        $v1, $a1, 0x1
    ctx->r3 = ctx->r5 ^ 0X1;
L_80046124:
    // 0x80046124: beq         $v1, $zero, L_8004616C
    if (ctx->r3 == 0) {
        // 0x80046128: nop
    
            goto L_8004616C;
    }
    // 0x80046128: nop

    // 0x8004612C: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x80046130: blez        $v0, L_80046154
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80046134: nop
    
            goto L_80046154;
    }
    // 0x80046134: nop

    // 0x80046138: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8004613C: lbu         $v0, -0x7818($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7818);
    // 0x80046140: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80046144: beq         $v0, $zero, L_8004616C
    if (ctx->r2 == 0) {
        // 0x80046148: andi        $v1, $v1, 0x1
        ctx->r3 = ctx->r3 & 0X1;
            goto L_8004616C;
    }
    // 0x80046148: andi        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 & 0X1;
    // 0x8004614C: j           L_8004616C
    // 0x80046150: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
        goto L_8004616C;
    // 0x80046150: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_80046154:
    // 0x80046154: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80046158: lbu         $v0, -0x7818($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7818);
    // 0x8004615C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80046160: bnel        $v0, $zero, L_8004616C
    if (ctx->r2 != 0) {
        // 0x80046164: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_8004616C;
    }
    goto skip_3;
    // 0x80046164: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    skip_3:
    // 0x80046168: andi        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 & 0X1;
L_8004616C:
    // 0x8004616C: jr          $ra
    // 0x80046170: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    TRACE_RETURN()
    return;
    // 0x80046170: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
;}
RECOMP_FUNC void func_8008C7EC_67BEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008C7EC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8008C7F0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8008C7F4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8008C7F8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8008C7FC: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
    // 0x8008C800: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8008C804: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8008C808: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x8008C80C: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x8008C810: bltz        $v0, L_8008C96C
    if (SIGNED(ctx->r2) < 0) {
        // 0x8008C814: lui         $v1, 0x8000
        ctx->r3 = S32(0X8000 << 16);
            goto L_8008C96C;
    }
    // 0x8008C814: lui         $v1, 0x8000
    ctx->r3 = S32(0X8000 << 16);
    // 0x8008C818: addiu       $a0, $s0, 0x24
    ctx->r4 = ADD32(ctx->r16, 0X24);
    // 0x8008C81C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8008C820: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x8008C824: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8008C828: jal         0x8008CD1C
    // 0x8008C82C: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    func_8008CD1C_6811C(rdram, ctx);
        goto after_0;
    // 0x8008C82C: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    after_0:
    // 0x8008C830: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    // 0x8008C834: lw          $a2, 0x20($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X20);
    // 0x8008C838: jal         0x8008CD1C
    // 0x8008C83C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8008CD1C_6811C(rdram, ctx);
        goto after_1;
    // 0x8008C83C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8008C840: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x8008C844: blez        $v0, L_8008C964
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8008C848: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_8008C964;
    }
    // 0x8008C848: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8008C84C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008C850: ldc1        $f4, 0x2DA8($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, 0X2DA8);
    // 0x8008C854: lui         $a3, 0xFF00
    ctx->r7 = S32(0XFF00 << 16);
    // 0x8008C858: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8008C85C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_8008C860:
    // 0x8008C860: lw          $v0, 0x28($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X28);
    // 0x8008C864: addu        $a0, $v0, $a1
    ctx->r4 = ADD32(ctx->r2, ctx->r5);
    // 0x8008C868: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x8008C86C: andi        $v0, $v1, 0x80
    ctx->r2 = ctx->r3 & 0X80;
    // 0x8008C870: beq         $v0, $zero, L_8008C87C
    if (ctx->r2 == 0) {
        // 0x8008C874: andi        $v0, $v1, 0xFF
        ctx->r2 = ctx->r3 & 0XFF;
            goto L_8008C87C;
    }
    // 0x8008C874: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x8008C878: addiu       $v0, $v0, -0x100
    ctx->r2 = ADD32(ctx->r2, -0X100);
L_8008C87C:
    // 0x8008C87C: mtc1        $v0, $f2
    ctx->f2.u32l = ctx->r2;
    // 0x8008C880: nop

    // 0x8008C884: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x8008C888: cvt.d.s     $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.d = CVT_D_S(ctx->f2.fl);
    // 0x8008C88C: div.d       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f4.d); 
    ctx->f0.d = DIV_D(ctx->f0.d, ctx->f4.d);
    // 0x8008C890: cvt.s.d     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f0.fl = CVT_S_D(ctx->f0.d);
    // 0x8008C894: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    // 0x8008C898: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x8008C89C: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8008C8A0: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8008C8A4: addiu       $v0, $v0, -0x30
    ctx->r2 = ADD32(ctx->r2, -0X30);
    // 0x8008C8A8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8008C8AC: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8008C8B0: beq         $v0, $zero, L_8008C8BC
    if (ctx->r2 == 0) {
        // 0x8008C8B4: andi        $v0, $v1, 0xFF
        ctx->r2 = ctx->r3 & 0XFF;
            goto L_8008C8BC;
    }
    // 0x8008C8B4: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x8008C8B8: addiu       $v0, $v0, -0x100
    ctx->r2 = ADD32(ctx->r2, -0X100);
L_8008C8BC:
    // 0x8008C8BC: mtc1        $v0, $f2
    ctx->f2.u32l = ctx->r2;
    // 0x8008C8C0: nop

    // 0x8008C8C4: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x8008C8C8: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8008C8CC: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x8008C8D0: swc1        $f0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f0.u32l;
    // 0x8008C8D4: lw          $v0, 0x2C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2C);
    // 0x8008C8D8: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x8008C8DC: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x8008C8E0: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x8008C8E4: bne         $v0, $zero, L_8008C950
    if (ctx->r2 != 0) {
        // 0x8008C8E8: nop
    
            goto L_8008C950;
    }
    // 0x8008C8E8: nop

    // 0x8008C8EC: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x8008C8F0: and         $v0, $v1, $a3
    ctx->r2 = ctx->r3 & ctx->r7;
    // 0x8008C8F4: beq         $v0, $a3, L_8008C900
    if (ctx->r2 == ctx->r7) {
        // 0x8008C8F8: addu        $v1, $v1, $s2
        ctx->r3 = ADD32(ctx->r3, ctx->r18);
            goto L_8008C900;
    }
    // 0x8008C8F8: addu        $v1, $v1, $s2
    ctx->r3 = ADD32(ctx->r3, ctx->r18);
    // 0x8008C8FC: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
L_8008C900:
    // 0x8008C900: lw          $v0, 0x2C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2C);
    // 0x8008C904: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x8008C908: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8008C90C: sb          $t0, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r8;
    // 0x8008C910: lw          $v0, 0x2C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2C);
    // 0x8008C914: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x8008C918: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x8008C91C: lw          $v0, 0xC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC);
    // 0x8008C920: beq         $v0, $zero, L_8008C92C
    if (ctx->r2 == 0) {
        // 0x8008C924: addu        $v0, $v0, $s1
        ctx->r2 = ADD32(ctx->r2, ctx->r17);
            goto L_8008C92C;
    }
    // 0x8008C924: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8008C928: sw          $v0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r2;
L_8008C92C:
    // 0x8008C92C: lw          $v0, 0x2C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2C);
    // 0x8008C930: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x8008C934: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x8008C938: lbu         $v0, 0x8($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X8);
    // 0x8008C93C: bne         $v0, $zero, L_8008C950
    if (ctx->r2 != 0) {
        // 0x8008C940: nop
    
            goto L_8008C950;
    }
    // 0x8008C940: nop

    // 0x8008C944: lw          $v0, 0x10($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X10);
    // 0x8008C948: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8008C94C: sw          $v0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r2;
L_8008C950:
    // 0x8008C950: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x8008C954: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8008C958: slt         $v0, $a2, $v0
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8008C95C: bne         $v0, $zero, L_8008C860
    if (ctx->r2 != 0) {
        // 0x8008C960: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_8008C860;
    }
    // 0x8008C960: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
L_8008C964:
    // 0x8008C964: jal         0x800995F0
    // 0x8008C968: nop

    osWritebackDCacheAll_recomp(rdram, ctx);
        goto after_2;
    // 0x8008C968: nop

    after_2:
L_8008C96C:
    // 0x8008C96C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8008C970: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8008C974: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8008C978: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8008C97C: jr          $ra
    // 0x8008C980: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8008C980: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80034D08_10108(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80034D08: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80034D0C: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x80034D10: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80034D14: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x80034D18: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80034D1C: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x80034D20: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80034D24: addu        $s2, $a3, $zero
    ctx->r18 = ADD32(ctx->r7, 0);
    // 0x80034D28: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80034D2C: addiu       $a0, $a0, 0x43D0
    ctx->r4 = ADD32(ctx->r4, 0X43D0);
    // 0x80034D30: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80034D34: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80034D38: jal         0x8009A3B4
    // 0x80034D3C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80034D3C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_0:
    // 0x80034D40: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034D44: sw          $s0, 0x4384($at)
    MEM_W(0X4384, ctx->r1) = ctx->r16;
    // 0x80034D48: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034D4C: sw          $s1, 0x4388($at)
    MEM_W(0X4388, ctx->r1) = ctx->r17;
    // 0x80034D50: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034D54: sw          $s2, 0x438C($at)
    MEM_W(0X438C, ctx->r1) = ctx->r18;
    // 0x80034D58: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80034D5C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80034D60: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80034D64: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80034D68: jr          $ra
    // 0x80034D6C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80034D6C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80061EA4_3D2A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80061EA4: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x80061EA8: addiu       $v0, $v0, 0x9
    ctx->r2 = ADD32(ctx->r2, 0X9);
    // 0x80061EAC: jr          $ra
    // 0x80061EB0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80061EB0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_8005C480_37880(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8005C480: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005C484: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8005C488: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x8005C48C: addiu       $s0, $s0, -0x3E3D
    ctx->r16 = ADD32(ctx->r16, -0X3E3D);
    // 0x8005C490: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005C494: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8005C498: beq         $v1, $zero, L_8005C4B0
    if (ctx->r3 == 0) {
        // 0x8005C49C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8005C4B0;
    }
    // 0x8005C49C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8005C4A0: beq         $v1, $v0, L_8005C4D0
    if (ctx->r3 == ctx->r2) {
        // 0x8005C4A4: nop
    
            goto L_8005C4D0;
    }
    // 0x8005C4A4: nop

    // 0x8005C4A8: j           L_8005C574
    // 0x8005C4AC: nop

        goto L_8005C574;
    // 0x8005C4AC: nop

L_8005C4B0:
    // 0x8005C4B0: jal         0x80036E48
    // 0x8005C4B4: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    func_80036E48_12248(rdram, ctx);
        goto after_0;
    // 0x8005C4B4: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    after_0:
    // 0x8005C4B8: jal         0x80036B58
    // 0x8005C4BC: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_80036B58_11F58(rdram, ctx);
        goto after_1;
    // 0x8005C4BC: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_1:
    // 0x8005C4C0: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8005C4C4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8005C4C8: j           L_8005C574
    // 0x8005C4CC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
        goto L_8005C574;
    // 0x8005C4CC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_8005C4D0:
    // 0x8005C4D0: jal         0x800598DC
    // 0x8005C4D4: nop

    func_800598DC_34CDC(rdram, ctx);
        goto after_2;
    // 0x8005C4D4: nop

    after_2:
    // 0x8005C4D8: jal         0x800599D4
    // 0x8005C4DC: nop

    func_800599D4_34DD4(rdram, ctx);
        goto after_3;
    // 0x8005C4DC: nop

    after_3:
    // 0x8005C4E0: jal         0x80059710
    // 0x8005C4E4: nop

    func_80059710_34B10(rdram, ctx);
        goto after_4;
    // 0x8005C4E4: nop

    after_4:
    // 0x8005C4E8: jal         0x8005974C
    // 0x8005C4EC: nop

    func_8005974C_34B4C(rdram, ctx);
        goto after_5;
    // 0x8005C4EC: nop

    after_5:
    // 0x8005C4F0: jal         0x8003E03C
    // 0x8005C4F4: nop

    func_8003E03C_1943C(rdram, ctx);
        goto after_6;
    // 0x8005C4F4: nop

    after_6:
    // 0x8005C4F8: jal         0x8002A4A4
    // 0x8005C4FC: nop

    func_8002A4A4_58A4(rdram, ctx);
        goto after_7;
    // 0x8005C4FC: nop

    after_7:
    // 0x8005C500: jal         0x8002A488
    // 0x8005C504: nop

    func_8002A488_5888(rdram, ctx);
        goto after_8;
    // 0x8005C504: nop

    after_8:
    // 0x8005C508: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8005C50C: lw          $v0, -0x7814($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7814);
    // 0x8005C510: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x8005C514: addiu       $s0, $s0, -0x3BC8
    ctx->r16 = ADD32(ctx->r16, -0X3BC8);
    // 0x8005C518: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8005C51C: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8005C520: lbu         $a0, -0x3BC7($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X3BC7);
    // 0x8005C524: ori         $v0, $v0, 0x800
    ctx->r2 = ctx->r2 | 0X800;
    // 0x8005C528: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x8005C52C: sw          $v0, -0x7814($at)
    MEM_W(-0X7814, ctx->r1) = ctx->r2;
    // 0x8005C530: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8005C534: sb          $v1, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r3;
    // 0x8005C538: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8005C53C: jal         0x8002A02C
    // 0x8005C540: sb          $a0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r4;
    func_8002A02C_542C(rdram, ctx);
        goto after_9;
    // 0x8005C540: sb          $a0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r4;
    after_9:
    // 0x8005C544: jal         0x80073510
    // 0x8005C548: nop

    func_80073510_4E910(rdram, ctx);
        goto after_10;
    // 0x8005C548: nop

    after_10:
    // 0x8005C54C: jal         0x80073828
    // 0x8005C550: nop

    func_80073828_4EC28(rdram, ctx);
        goto after_11;
    // 0x8005C550: nop

    after_11:
    // 0x8005C554: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x8005C558: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8005C55C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8005C560: jal         0x8005C890
    // 0x8005C564: lb          $a0, -0x1450($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X1450);
    func_8005C890_37C90(rdram, ctx);
        goto after_12;
    // 0x8005C564: lb          $a0, -0x1450($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X1450);
    after_12:
    // 0x8005C568: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8005C56C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005C570: sh          $v0, -0x3E38($at)
    MEM_H(-0X3E38, ctx->r1) = ctx->r2;
L_8005C574:
    // 0x8005C574: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005C578: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8005C57C: jr          $ra
    // 0x8005C580: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8005C580: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800281C8_35C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800281C8: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x800281CC: lw          $v0, 0x6CA8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6CA8);
    // 0x800281D0: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x800281D4: beq         $v0, $zero, L_80028214
    if (ctx->r2 == 0) {
        // 0x800281D8: addiu       $a0, $a0, 0x7
        ctx->r4 = ADD32(ctx->r4, 0X7);
            goto L_80028214;
    }
    // 0x800281D8: addiu       $a0, $a0, 0x7
    ctx->r4 = ADD32(ctx->r4, 0X7);
    // 0x800281DC: addiu       $v1, $zero, -0x8
    ctx->r3 = ADD32(0, -0X8);
    // 0x800281E0: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x800281E4: lw          $a1, 0x6FA8($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X6FA8);
    // 0x800281E8: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x800281EC: lw          $v0, 0x6FAC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6FAC);
    // 0x800281F0: and         $a0, $a0, $v1
    ctx->r4 = ctx->r4 & ctx->r3;
    // 0x800281F4: addu        $a0, $a1, $a0
    ctx->r4 = ADD32(ctx->r5, ctx->r4);
    // 0x800281F8: sltu        $v0, $v0, $a0
    ctx->r2 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x800281FC: bne         $v0, $zero, L_80028218
    if (ctx->r2 != 0) {
        // 0x80028200: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80028218;
    }
    // 0x80028200: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80028204: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80028208: sw          $a0, 0x6FA8($at)
    MEM_W(0X6FA8, ctx->r1) = ctx->r4;
    // 0x8002820C: j           L_80028218
    // 0x80028210: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
        goto L_80028218;
    // 0x80028210: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
L_80028214:
    // 0x80028214: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80028218:
    // 0x80028218: jr          $ra
    // 0x8002821C: nop

    TRACE_RETURN()
    return;
    // 0x8002821C: nop

;}
RECOMP_FUNC void _Ldtob(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800A26F0: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x800A26F4: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x800A26F8: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x800A26FC: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x800A2700: addiu       $s1, $sp, 0x18
    ctx->r17 = ADD32(ctx->r29, 0X18);
    // 0x800A2704: sw          $ra, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r31;
    // 0x800A2708: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x800A270C: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x800A2710: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x800A2714: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x800A2718: sdc1        $f24, 0x78($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X78, ctx->r29);
    // 0x800A271C: sdc1        $f22, 0x70($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X70, ctx->r29);
    // 0x800A2720: sdc1        $f20, 0x68($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X68, ctx->r29);
    // 0x800A2724: lw          $v1, 0x24($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X24);
    // 0x800A2728: ldc1        $f20, 0x0($s3)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r19, 0X0);
    // 0x800A272C: bgez        $v1, L_800A273C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x800A2730: addu        $s5, $a1, $zero
        ctx->r21 = ADD32(ctx->r5, 0);
            goto L_800A273C;
    }
    // 0x800A2730: addu        $s5, $a1, $zero
    ctx->r21 = ADD32(ctx->r5, 0);
    // 0x800A2734: j           L_800A2768
    // 0x800A2738: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_800A2768;
    // 0x800A2738: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_800A273C:
    // 0x800A273C: bne         $v1, $zero, L_800A2770
    if (ctx->r3 != 0) {
        // 0x800A2740: addiu       $a0, $sp, 0x38
        ctx->r4 = ADD32(ctx->r29, 0X38);
            goto L_800A2770;
    }
    // 0x800A2740: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x800A2744: sll         $v0, $a1, 24
    ctx->r2 = S32(ctx->r5 << 24);
    // 0x800A2748: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x800A274C: xori        $v1, $v0, 0x67
    ctx->r3 = ctx->r2 ^ 0X67;
    // 0x800A2750: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x800A2754: xori        $v0, $v0, 0x47
    ctx->r2 = ctx->r2 ^ 0X47;
    // 0x800A2758: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x800A275C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x800A2760: beq         $v1, $zero, L_800A2770
    if (ctx->r3 == 0) {
        // 0x800A2764: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_800A2770;
    }
    // 0x800A2764: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800A2768:
    // 0x800A2768: sw          $v0, 0x24($s3)
    MEM_W(0X24, ctx->r19) = ctx->r2;
    // 0x800A276C: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
L_800A2770:
    // 0x800A2770: jal         0x800A2B3C
    // 0x800A2774: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    _Ldunscale(rdram, ctx);
        goto after_0;
    // 0x800A2774: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_0:
    // 0x800A2778: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x800A277C: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x800A2780: blez        $v1, L_800A27C4
    if (SIGNED(ctx->r3) <= 0) {
        // 0x800A2784: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_800A27C4;
    }
    // 0x800A2784: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x800A2788: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x800A278C: addiu       $a2, $a2, 0x34AC
    ctx->r6 = ADD32(ctx->r6, 0X34AC);
    // 0x800A2790: lw          $a3, 0x8($s3)
    ctx->r7 = MEM_W(ctx->r19, 0X8);
    // 0x800A2794: bne         $v1, $v0, L_800A27A4
    if (ctx->r3 != ctx->r2) {
        // 0x800A2798: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_800A27A4;
    }
    // 0x800A2798: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x800A279C: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x800A27A0: addiu       $a2, $a2, 0x34A8
    ctx->r6 = ADD32(ctx->r6, 0X34A8);
L_800A27A4:
    // 0x800A27A4: sw          $v0, 0x14($s3)
    MEM_W(0X14, ctx->r19) = ctx->r2;
    // 0x800A27A8: lb          $v0, 0x0($a2)
    ctx->r2 = MEM_B(ctx->r6, 0X0);
    // 0x800A27AC: lb          $v1, 0x1($a2)
    ctx->r3 = MEM_B(ctx->r6, 0X1);
    // 0x800A27B0: lb          $a0, 0x2($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X2);
    // 0x800A27B4: sb          $v0, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r2;
    // 0x800A27B8: sb          $v1, 0x1($a3)
    MEM_B(0X1, ctx->r7) = ctx->r3;
    // 0x800A27BC: j           L_800A2B0C
    // 0x800A27C0: sb          $a0, 0x2($a3)
    MEM_B(0X2, ctx->r7) = ctx->r4;
        goto L_800A2B0C;
    // 0x800A27C0: sb          $a0, 0x2($a3)
    MEM_B(0X2, ctx->r7) = ctx->r4;
L_800A27C4:
    // 0x800A27C4: bne         $v1, $zero, L_800A27D4
    if (ctx->r3 != 0) {
        // 0x800A27C8: addu        $a3, $zero, $zero
        ctx->r7 = ADD32(0, 0);
            goto L_800A27D4;
    }
    // 0x800A27C8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x800A27CC: j           L_800A2AE8
    // 0x800A27D0: sh          $zero, 0x38($sp)
    MEM_H(0X38, ctx->r29) = 0;
        goto L_800A2AE8;
    // 0x800A27D0: sh          $zero, 0x38($sp)
    MEM_H(0X38, ctx->r29) = 0;
L_800A27D4:
    // 0x800A27D4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800A27D8: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x800A27DC: nop

    // 0x800A27E0: c.lt.d      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.d < ctx->f0.d;
    // 0x800A27E4: nop

    // 0x800A27E8: nop

    // 0x800A27EC: bc1tl       L_800A27F4
    if (c1cs) {
        // 0x800A27F0: neg.d       $f20, $f20
        CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.d); 
    ctx->f20.d = -ctx->f20.d;
            goto L_800A27F4;
    }
    goto skip_0;
    // 0x800A27F0: neg.d       $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.d); 
    ctx->f20.d = -ctx->f20.d;
    skip_0:
L_800A27F4:
    // 0x800A27F4: lh          $v1, 0x38($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X38);
    // 0x800A27F8: addiu       $v0, $zero, 0x7597
    ctx->r2 = ADD32(0, 0X7597);
    // 0x800A27FC: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800A2800: mflo        $v1
    ctx->r3 = lo;
    // 0x800A2804: lui         $v0, 0x14F8
    ctx->r2 = S32(0X14F8 << 16);
    // 0x800A2808: ori         $v0, $v0, 0xB589
    ctx->r2 = ctx->r2 | 0XB589;
    // 0x800A280C: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800A2810: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x800A2814: mfhi        $t0
    ctx->r8 = hi;
    // 0x800A2818: sra         $v0, $t0, 13
    ctx->r2 = S32(SIGNED(ctx->r8) >> 13);
    // 0x800A281C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x800A2820: addiu       $v1, $v0, -0x4
    ctx->r3 = ADD32(ctx->r2, -0X4);
    // 0x800A2824: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x800A2828: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x800A282C: bgez        $v0, L_800A287C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x800A2830: sh          $v1, 0x38($sp)
        MEM_H(0X38, ctx->r29) = ctx->r3;
            goto L_800A287C;
    }
    // 0x800A2830: sh          $v1, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r3;
    // 0x800A2834: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x800A2838: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x800A283C: addiu       $v1, $zero, -0x4
    ctx->r3 = ADD32(0, -0X4);
    // 0x800A2840: and         $v1, $v0, $v1
    ctx->r3 = ctx->r2 & ctx->r3;
    // 0x800A2844: negu        $v0, $v1
    ctx->r2 = SUB32(0, ctx->r3);
    // 0x800A2848: blez        $v1, L_800A28C8
    if (SIGNED(ctx->r3) <= 0) {
        // 0x800A284C: sh          $v0, 0x38($sp)
        MEM_H(0X38, ctx->r29) = ctx->r2;
            goto L_800A28C8;
    }
    // 0x800A284C: sh          $v0, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r2;
    // 0x800A2850: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x800A2854: addiu       $a0, $a0, 0x3460
    ctx->r4 = ADD32(ctx->r4, 0X3460);
L_800A2858:
    // 0x800A2858: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x800A285C: beq         $v0, $zero, L_800A286C
    if (ctx->r2 == 0) {
        // 0x800A2860: sra         $v1, $v1, 1
        ctx->r3 = S32(SIGNED(ctx->r3) >> 1);
            goto L_800A286C;
    }
    // 0x800A2860: sra         $v1, $v1, 1
    ctx->r3 = S32(SIGNED(ctx->r3) >> 1);
    // 0x800A2864: ldc1        $f0, 0x0($a0)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r4, 0X0);
    // 0x800A2868: mul.d       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.d); NAN_CHECK(ctx->f0.d); 
    ctx->f20.d = MUL_D(ctx->f20.d, ctx->f0.d);
L_800A286C:
    // 0x800A286C: bgtz        $v1, L_800A2858
    if (SIGNED(ctx->r3) > 0) {
        // 0x800A2870: addiu       $a0, $a0, 0x8
        ctx->r4 = ADD32(ctx->r4, 0X8);
            goto L_800A2858;
    }
    // 0x800A2870: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x800A2874: j           L_800A28C8
    // 0x800A2878: nop

        goto L_800A28C8;
    // 0x800A2878: nop

L_800A287C:
    // 0x800A287C: blez        $v0, L_800A28C8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x800A2880: addiu       $v0, $zero, -0x4
        ctx->r2 = ADD32(0, -0X4);
            goto L_800A28C8;
    }
    // 0x800A2880: addiu       $v0, $zero, -0x4
    ctx->r2 = ADD32(0, -0X4);
    // 0x800A2884: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800A2888: ldc1        $f2, 0x34B0($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, 0X34B0);
    // 0x800A288C: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x800A2890: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x800A2894: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x800A2898: blez        $v1, L_800A28C4
    if (SIGNED(ctx->r3) <= 0) {
        // 0x800A289C: sh          $v0, 0x38($sp)
        MEM_H(0X38, ctx->r29) = ctx->r2;
            goto L_800A28C4;
    }
    // 0x800A289C: sh          $v0, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r2;
    // 0x800A28A0: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x800A28A4: addiu       $a0, $a0, 0x3460
    ctx->r4 = ADD32(ctx->r4, 0X3460);
L_800A28A8:
    // 0x800A28A8: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x800A28AC: beq         $v0, $zero, L_800A28BC
    if (ctx->r2 == 0) {
        // 0x800A28B0: sra         $v1, $v1, 1
        ctx->r3 = S32(SIGNED(ctx->r3) >> 1);
            goto L_800A28BC;
    }
    // 0x800A28B0: sra         $v1, $v1, 1
    ctx->r3 = S32(SIGNED(ctx->r3) >> 1);
    // 0x800A28B4: ldc1        $f0, 0x0($a0)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r4, 0X0);
    // 0x800A28B8: mul.d       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = MUL_D(ctx->f2.d, ctx->f0.d);
L_800A28BC:
    // 0x800A28BC: bgtz        $v1, L_800A28A8
    if (SIGNED(ctx->r3) > 0) {
        // 0x800A28C0: addiu       $a0, $a0, 0x8
        ctx->r4 = ADD32(ctx->r4, 0X8);
            goto L_800A28A8;
    }
    // 0x800A28C0: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
L_800A28C4:
    // 0x800A28C4: div.d       $f20, $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.d); NAN_CHECK(ctx->f2.d); 
    ctx->f20.d = DIV_D(ctx->f20.d, ctx->f2.d);
L_800A28C8:
    // 0x800A28C8: lw          $a0, 0x24($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X24);
    // 0x800A28CC: sll         $v0, $s5, 24
    ctx->r2 = S32(ctx->r21 << 24);
    // 0x800A28D0: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x800A28D4: addiu       $v1, $zero, 0x66
    ctx->r3 = ADD32(0, 0X66);
    // 0x800A28D8: bne         $v0, $v1, L_800A28EC
    if (ctx->r2 != ctx->r3) {
        // 0x800A28DC: addiu       $s2, $a0, 0x6
        ctx->r18 = ADD32(ctx->r4, 0X6);
            goto L_800A28EC;
    }
    // 0x800A28DC: addiu       $s2, $a0, 0x6
    ctx->r18 = ADD32(ctx->r4, 0X6);
    // 0x800A28E0: lh          $v1, 0x38($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X38);
    // 0x800A28E4: addiu       $v0, $a0, 0xA
    ctx->r2 = ADD32(ctx->r4, 0XA);
    // 0x800A28E8: addu        $s2, $v0, $v1
    ctx->r18 = ADD32(ctx->r2, ctx->r3);
L_800A28EC:
    // 0x800A28EC: slti        $v0, $s2, 0x14
    ctx->r2 = SIGNED(ctx->r18) < 0X14 ? 1 : 0;
    // 0x800A28F0: beql        $v0, $zero, L_800A28F8
    if (ctx->r2 == 0) {
        // 0x800A28F4: addiu       $s2, $zero, 0x13
        ctx->r18 = ADD32(0, 0X13);
            goto L_800A28F8;
    }
    goto skip_1;
    // 0x800A28F4: addiu       $s2, $zero, 0x13
    ctx->r18 = ADD32(0, 0X13);
    skip_1:
L_800A28F8:
    // 0x800A28F8: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x800A28FC: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x800A2900: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800A2904: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x800A2908: mtc1        $zero, $f25
    ctx->f_odd[(25 - 1) * 2] = 0;
    // 0x800A290C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800A2910: ldc1        $f22, 0x34B8($at)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r1, 0X34B8);
    // 0x800A2914: addiu       $s4, $zero, 0x30
    ctx->r20 = ADD32(0, 0X30);
L_800A2918:
    // 0x800A2918: c.lt.d      $f24, $f20
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f24.d < ctx->f20.d;
    // 0x800A291C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x800A2920: nop

    // 0x800A2924: bc1t        L_800A2930
    if (c1cs) {
        // 0x800A2928: slt         $v0, $zero, $s2
        ctx->r2 = SIGNED(0) < SIGNED(ctx->r18) ? 1 : 0;
            goto L_800A2930;
    }
    // 0x800A2928: slt         $v0, $zero, $s2
    ctx->r2 = SIGNED(0) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x800A292C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_800A2930:
    // 0x800A2930: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x800A2934: beq         $v0, $zero, L_800A29BC
    if (ctx->r2 == 0) {
        // 0x800A2938: addiu       $s2, $s2, -0x8
        ctx->r18 = ADD32(ctx->r18, -0X8);
            goto L_800A29BC;
    }
    // 0x800A2938: addiu       $s2, $s2, -0x8
    ctx->r18 = ADD32(ctx->r18, -0X8);
    // 0x800A293C: trunc.w.d   $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.u32l = TRUNC_W_D(ctx->f20.d);
    // 0x800A2940: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x800A2944: nop

    // 0x800A2948: blez        $s2, L_800A2964
    if (SIGNED(ctx->r18) <= 0) {
        // 0x800A294C: addiu       $s1, $s1, 0x8
        ctx->r17 = ADD32(ctx->r17, 0X8);
            goto L_800A2964;
    }
    // 0x800A294C: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x800A2950: mtc1        $a1, $f0
    ctx->f0.u32l = ctx->r5;
    // 0x800A2954: nop

    // 0x800A2958: cvt.d.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.d = CVT_D_W(ctx->f0.u32l);
    // 0x800A295C: sub.d       $f0, $f20, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = ctx->f20.d - ctx->f0.d;
    // 0x800A2960: mul.d       $f20, $f0, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f22.d); 
    ctx->f20.d = MUL_D(ctx->f0.d, ctx->f22.d);
L_800A2964:
    // 0x800A2964: blez        $a1, L_800A29A8
    if (SIGNED(ctx->r5) <= 0) {
        // 0x800A2968: addiu       $s0, $zero, 0x8
        ctx->r16 = ADD32(0, 0X8);
            goto L_800A29A8;
    }
    // 0x800A2968: addiu       $s0, $zero, 0x8
    ctx->r16 = ADD32(0, 0X8);
    // 0x800A296C: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
L_800A2970:
    // 0x800A2970: bltz        $s0, L_800A29A8
    if (SIGNED(ctx->r16) < 0) {
        // 0x800A2974: addiu       $a0, $sp, 0x40
        ctx->r4 = ADD32(ctx->r29, 0X40);
            goto L_800A29A8;
    }
    // 0x800A2974: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x800A2978: jal         0x800A31C0
    // 0x800A297C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    ldiv_recomp(rdram, ctx);
        goto after_1;
    // 0x800A297C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_1:
    // 0x800A2980: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
    // 0x800A2984: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x800A2988: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
    // 0x800A298C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x800A2990: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x800A2994: bgtz        $a1, L_800A2970
    if (SIGNED(ctx->r5) > 0) {
        // 0x800A2998: addiu       $s0, $s0, -0x1
        ctx->r16 = ADD32(ctx->r16, -0X1);
            goto L_800A2970;
    }
    // 0x800A2998: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x800A299C: j           L_800A29AC
    // 0x800A29A0: nop

        goto L_800A29AC;
    // 0x800A29A0: nop

L_800A29A4:
    // 0x800A29A4: sb          $s4, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r20;
L_800A29A8:
    // 0x800A29A8: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
L_800A29AC:
    // 0x800A29AC: bgezl       $s0, L_800A29A4
    if (SIGNED(ctx->r16) >= 0) {
        // 0x800A29B0: addiu       $s1, $s1, -0x1
        ctx->r17 = ADD32(ctx->r17, -0X1);
            goto L_800A29A4;
    }
    goto skip_2;
    // 0x800A29B0: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    skip_2:
    // 0x800A29B4: j           L_800A2918
    // 0x800A29B8: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
        goto L_800A2918;
    // 0x800A29B8: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
L_800A29BC:
    // 0x800A29BC: addiu       $v1, $s1, -0x1
    ctx->r3 = ADD32(ctx->r17, -0X1);
    // 0x800A29C0: addiu       $v0, $sp, 0x18
    ctx->r2 = ADD32(ctx->r29, 0X18);
    // 0x800A29C4: subu        $s2, $v1, $v0
    ctx->r18 = SUB32(ctx->r3, ctx->r2);
    // 0x800A29C8: lhu         $v0, 0x38($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X38);
    // 0x800A29CC: lb          $v1, 0x19($sp)
    ctx->r3 = MEM_B(ctx->r29, 0X19);
    // 0x800A29D0: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x800A29D4: sh          $v0, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r2;
    // 0x800A29D8: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x800A29DC: bne         $v1, $v0, L_800A2A04
    if (ctx->r3 != ctx->r2) {
        // 0x800A29E0: addiu       $s1, $sp, 0x19
        ctx->r17 = ADD32(ctx->r29, 0X19);
            goto L_800A2A04;
    }
    // 0x800A29E0: addiu       $s1, $sp, 0x19
    ctx->r17 = ADD32(ctx->r29, 0X19);
    // 0x800A29E4: addiu       $v1, $zero, 0x30
    ctx->r3 = ADD32(0, 0X30);
L_800A29E8:
    // 0x800A29E8: lhu         $v0, 0x38($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X38);
    // 0x800A29EC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800A29F0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x800A29F4: sh          $v0, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r2;
    // 0x800A29F8: lb          $v0, 0x0($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X0);
    // 0x800A29FC: beq         $v0, $v1, L_800A29E8
    if (ctx->r2 == ctx->r3) {
        // 0x800A2A00: addiu       $s2, $s2, -0x1
        ctx->r18 = ADD32(ctx->r18, -0X1);
            goto L_800A29E8;
    }
    // 0x800A2A00: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
L_800A2A04:
    // 0x800A2A04: lw          $a1, 0x24($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X24);
    // 0x800A2A08: sll         $v0, $s5, 24
    ctx->r2 = S32(ctx->r21 << 24);
    // 0x800A2A0C: sra         $a0, $v0, 24
    ctx->r4 = S32(SIGNED(ctx->r2) >> 24);
    // 0x800A2A10: addiu       $v0, $zero, 0x66
    ctx->r2 = ADD32(0, 0X66);
    // 0x800A2A14: bne         $a0, $v0, L_800A2A2C
    if (ctx->r4 != ctx->r2) {
        // 0x800A2A18: xori        $v1, $a0, 0x65
        ctx->r3 = ctx->r4 ^ 0X65;
            goto L_800A2A2C;
    }
    // 0x800A2A18: xori        $v1, $a0, 0x65
    ctx->r3 = ctx->r4 ^ 0X65;
    // 0x800A2A1C: lh          $v1, 0x38($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X38);
    // 0x800A2A20: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x800A2A24: j           L_800A2A40
    // 0x800A2A28: addu        $a3, $v0, $v1
    ctx->r7 = ADD32(ctx->r2, ctx->r3);
        goto L_800A2A40;
    // 0x800A2A28: addu        $a3, $v0, $v1
    ctx->r7 = ADD32(ctx->r2, ctx->r3);
L_800A2A2C:
    // 0x800A2A2C: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x800A2A30: xori        $v0, $a0, 0x45
    ctx->r2 = ctx->r4 ^ 0X45;
    // 0x800A2A34: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x800A2A38: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x800A2A3C: addu        $a3, $a1, $v1
    ctx->r7 = ADD32(ctx->r5, ctx->r3);
L_800A2A40:
    // 0x800A2A40: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x800A2A44: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x800A2A48: slt         $v0, $s2, $v0
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800A2A4C: bnel        $v0, $zero, L_800A2A54
    if (ctx->r2 != 0) {
        // 0x800A2A50: addu        $a3, $s2, $zero
        ctx->r7 = ADD32(ctx->r18, 0);
            goto L_800A2A54;
    }
    goto skip_3;
    // 0x800A2A50: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    skip_3:
L_800A2A54:
    // 0x800A2A54: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x800A2A58: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x800A2A5C: blez        $a0, L_800A2AE8
    if (SIGNED(ctx->r4) <= 0) {
        // 0x800A2A60: slt         $v0, $a0, $s2
        ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r18) ? 1 : 0;
            goto L_800A2AE8;
    }
    // 0x800A2A60: slt         $v0, $a0, $s2
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x800A2A64: beq         $v0, $zero, L_800A2A88
    if (ctx->r2 == 0) {
        // 0x800A2A68: addiu       $v1, $zero, 0x30
        ctx->r3 = ADD32(0, 0X30);
            goto L_800A2A88;
    }
    // 0x800A2A68: addiu       $v1, $zero, 0x30
    ctx->r3 = ADD32(0, 0X30);
    // 0x800A2A6C: addu        $v0, $s1, $a0
    ctx->r2 = ADD32(ctx->r17, ctx->r4);
    // 0x800A2A70: lb          $v0, 0x0($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X0);
    // 0x800A2A74: slti        $v0, $v0, 0x35
    ctx->r2 = SIGNED(ctx->r2) < 0X35 ? 1 : 0;
    // 0x800A2A78: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x800A2A7C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x800A2A80: andi        $v0, $v0, 0x39
    ctx->r2 = ctx->r2 & 0X39;
    // 0x800A2A84: ori         $v1, $v0, 0x30
    ctx->r3 = ctx->r2 | 0X30;
L_800A2A88:
    // 0x800A2A88: addiu       $a1, $a0, -0x1
    ctx->r5 = ADD32(ctx->r4, -0X1);
    // 0x800A2A8C: addu        $a0, $s1, $a1
    ctx->r4 = ADD32(ctx->r17, ctx->r5);
    // 0x800A2A90: lb          $v0, 0x0($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X0);
    // 0x800A2A94: bnel        $v0, $v1, L_800A2AB8
    if (ctx->r2 != ctx->r3) {
        // 0x800A2A98: addiu       $v0, $zero, 0x39
        ctx->r2 = ADD32(0, 0X39);
            goto L_800A2AB8;
    }
    goto skip_4;
    // 0x800A2A98: addiu       $v0, $zero, 0x39
    ctx->r2 = ADD32(0, 0X39);
    skip_4:
    // 0x800A2A9C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
L_800A2AA0:
    // 0x800A2AA0: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x800A2AA4: lb          $v0, 0x0($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X0);
    // 0x800A2AA8: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
    // 0x800A2AAC: beq         $v0, $a2, L_800A2AA0
    if (ctx->r2 == ctx->r6) {
        // 0x800A2AB0: addiu       $a1, $a1, -0x1
        ctx->r5 = ADD32(ctx->r5, -0X1);
            goto L_800A2AA0;
    }
    // 0x800A2AB0: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x800A2AB4: addiu       $v0, $zero, 0x39
    ctx->r2 = ADD32(0, 0X39);
L_800A2AB8:
    // 0x800A2AB8: bne         $v1, $v0, L_800A2ACC
    if (ctx->r3 != ctx->r2) {
        // 0x800A2ABC: addu        $v1, $s1, $a1
        ctx->r3 = ADD32(ctx->r17, ctx->r5);
            goto L_800A2ACC;
    }
    // 0x800A2ABC: addu        $v1, $s1, $a1
    ctx->r3 = ADD32(ctx->r17, ctx->r5);
    // 0x800A2AC0: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x800A2AC4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800A2AC8: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
L_800A2ACC:
    // 0x800A2ACC: bgez        $a1, L_800A2AEC
    if (SIGNED(ctx->r5) >= 0) {
        // 0x800A2AD0: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_800A2AEC;
    }
    // 0x800A2AD0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x800A2AD4: lhu         $v0, 0x38($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X38);
    // 0x800A2AD8: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x800A2ADC: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x800A2AE0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800A2AE4: sh          $v0, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r2;
L_800A2AE8:
    // 0x800A2AE8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_800A2AEC:
    // 0x800A2AEC: sll         $a1, $s5, 24
    ctx->r5 = S32(ctx->r21 << 24);
    // 0x800A2AF0: lh          $v0, 0x38($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X38);
    // 0x800A2AF4: sra         $a1, $a1, 24
    ctx->r5 = S32(SIGNED(ctx->r5) >> 24);
    // 0x800A2AF8: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x800A2AFC: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x800A2B00: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    // 0x800A2B04: jal         0x800A2BD4
    // 0x800A2B08: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    _Genld(rdram, ctx);
        goto after_2;
    // 0x800A2B08: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_2:
L_800A2B0C:
    // 0x800A2B0C: lw          $ra, 0x60($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X60);
    // 0x800A2B10: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x800A2B14: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x800A2B18: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x800A2B1C: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x800A2B20: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x800A2B24: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x800A2B28: ldc1        $f24, 0x78($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X78);
    // 0x800A2B2C: ldc1        $f22, 0x70($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X70);
    // 0x800A2B30: ldc1        $f20, 0x68($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X68);
    // 0x800A2B34: jr          $ra
    // 0x800A2B38: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    TRACE_RETURN()
    return;
    // 0x800A2B38: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_8009247C_6D87C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8009247C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80092480: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80092484: lui         $s4, 0x8021
    ctx->r20 = S32(0X8021 << 16);
    // 0x80092488: addiu       $s4, $s4, 0x50B4
    ctx->r20 = ADD32(ctx->r20, 0X50B4);
    // 0x8009248C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80092490: addiu       $s3, $s4, 0x66C
    ctx->r19 = ADD32(ctx->r20, 0X66C);
    // 0x80092494: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80092498: addiu       $s5, $s4, 0xA8
    ctx->r21 = ADD32(ctx->r20, 0XA8);
    // 0x8009249C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800924A0: addiu       $s2, $sp, 0x14
    ctx->r18 = ADD32(ctx->r29, 0X14);
    // 0x800924A4: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x800924A8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800924AC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800924B0: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
L_800924B4:
    // 0x800924B4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x800924B8: jal         0x8009A5E0
    // 0x800924BC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x800924BC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x800924C0: lui         $v0, 0x8019
    ctx->r2 = S32(0X8019 << 16);
    // 0x800924C4: lbu         $v0, 0x5474($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X5474);
    // 0x800924C8: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x800924CC: bne         $v0, $zero, L_80092598
    if (ctx->r2 != 0) {
        // 0x800924D0: nop
    
            goto L_80092598;
    }
    // 0x800924D0: nop

    // 0x800924D4: jal         0x800995F0
    // 0x800924D8: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    osWritebackDCacheAll_recomp(rdram, ctx);
        goto after_1;
    // 0x800924D8: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    after_1:
    // 0x800924DC: lui         $s1, 0x8021
    ctx->r17 = S32(0X8021 << 16);
    // 0x800924E0: lw          $s1, 0x571C($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X571C);
    // 0x800924E4: beq         $s1, $zero, L_80092514
    if (ctx->r17 == 0) {
        // 0x800924E8: nop
    
            goto L_80092514;
    }
    // 0x800924E8: nop

    // 0x800924EC: jal         0x8009AB30
    // 0x800924F0: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
    osSpTaskYield_recomp(rdram, ctx);
        goto after_2;
    // 0x800924F0: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
    after_2:
    // 0x800924F4: addiu       $a0, $s4, 0xA8
    ctx->r4 = ADD32(ctx->r20, 0XA8);
    // 0x800924F8: addiu       $a1, $sp, 0x14
    ctx->r5 = ADD32(ctx->r29, 0X14);
    // 0x800924FC: jal         0x8009A5E0
    // 0x80092500: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x80092500: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x80092504: jal         0x8009AB50
    // 0x80092508: addiu       $a0, $s1, 0x10
    ctx->r4 = ADD32(ctx->r17, 0X10);
    osSpTaskYielded_recomp(rdram, ctx);
        goto after_4;
    // 0x80092508: addiu       $a0, $s1, 0x10
    ctx->r4 = ADD32(ctx->r17, 0X10);
    after_4:
    // 0x8009250C: bnel        $v0, $zero, L_80092514
    if (ctx->r2 != 0) {
        // 0x80092510: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_80092514;
    }
    goto skip_0;
    // 0x80092510: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    skip_0:
L_80092514:
    // 0x80092514: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x80092518: addiu       $a0, $v0, 0x10
    ctx->r4 = ADD32(ctx->r2, 0X10);
    // 0x8009251C: jal         0x8009A8F0
    // 0x80092520: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    osSpTaskLoad_recomp(rdram, ctx);
        goto after_5;
    // 0x80092520: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    after_5:
    // 0x80092524: lw          $a0, 0x10($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X10);
    // 0x80092528: jal         0x8009AAFC
    // 0x8009252C: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    osSpTaskStartGo_recomp(rdram, ctx);
        goto after_6;
    // 0x8009252C: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_6:
    // 0x80092530: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x80092534: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80092538: jal         0x8009A5E0
    // 0x8009253C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_7;
    // 0x8009253C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x80092540: lw          $v0, 0x4($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X4);
    // 0x80092544: beq         $v0, $zero, L_8009255C
    if (ctx->r2 == 0) {
        // 0x80092548: sw          $zero, 0x0($s3)
        MEM_W(0X0, ctx->r19) = 0;
            goto L_8009255C;
    }
    // 0x80092548: sw          $zero, 0x0($s3)
    MEM_W(0X0, ctx->r19) = 0;
    // 0x8009254C: addiu       $a0, $s3, -0x554
    ctx->r4 = ADD32(ctx->r19, -0X554);
    // 0x80092550: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80092554: jal         0x8009A710
    // 0x80092558: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_8;
    // 0x80092558: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_8:
L_8009255C:
    // 0x8009255C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80092560: bne         $s0, $v0, L_80092584
    if (ctx->r16 != ctx->r2) {
        // 0x80092564: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80092584;
    }
    // 0x80092564: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80092568: addiu       $s0, $s1, 0x10
    ctx->r16 = ADD32(ctx->r17, 0X10);
    // 0x8009256C: jal         0x8009A8F0
    // 0x80092570: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    osSpTaskLoad_recomp(rdram, ctx);
        goto after_9;
    // 0x80092570: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x80092574: jal         0x8009AAFC
    // 0x80092578: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    osSpTaskStartGo_recomp(rdram, ctx);
        goto after_10;
    // 0x80092578: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_10:
    // 0x8009257C: j           L_80092598
    // 0x80092580: nop

        goto L_80092598;
    // 0x80092580: nop

L_80092584:
    // 0x80092584: bne         $s0, $v0, L_80092598
    if (ctx->r16 != ctx->r2) {
        // 0x80092588: addu        $a0, $s5, $zero
        ctx->r4 = ADD32(ctx->r21, 0);
            goto L_80092598;
    }
    // 0x80092588: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x8009258C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80092590: jal         0x8009A710
    // 0x80092594: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_11;
    // 0x80092594: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_11:
L_80092598:
    // 0x80092598: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x8009259C: lw          $a0, 0x50($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X50);
    // 0x800925A0: lw          $a1, 0x54($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X54);
    // 0x800925A4: jal         0x8009A710
    // 0x800925A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_12;
    // 0x800925A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_12:
    // 0x800925AC: j           L_800924B4
    // 0x800925B0: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
        goto L_800924B4;
    // 0x800925B0: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x800925B4: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x800925B8: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x800925BC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800925C0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800925C4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800925C8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800925CC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800925D0: jr          $ra
    // 0x800925D4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x800925D4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80075CB0_510B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80075CB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80075CB4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80075CB8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80075CBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80075CC0: lb          $v1, 0x6($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X6);
    // 0x80075CC4: beq         $v1, $zero, L_80075CDC
    if (ctx->r3 == 0) {
        // 0x80075CC8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80075CDC;
    }
    // 0x80075CC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80075CCC: beq         $v1, $v0, L_80075D48
    if (ctx->r3 == ctx->r2) {
        // 0x80075CD0: lui         $v1, 0x8
        ctx->r3 = S32(0X8 << 16);
            goto L_80075D48;
    }
    // 0x80075CD0: lui         $v1, 0x8
    ctx->r3 = S32(0X8 << 16);
    // 0x80075CD4: j           L_80075D68
    // 0x80075CD8: nop

        goto L_80075D68;
    // 0x80075CD8: nop

L_80075CDC:
    // 0x80075CDC: jal         0x80061724
    // 0x80075CE0: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_0;
    // 0x80075CE0: nop

    after_0:
    // 0x80075CE4: lb          $v1, 0x4($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X4);
    // 0x80075CE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80075CEC: bne         $v1, $v0, L_80075D14
    if (ctx->r3 != ctx->r2) {
        // 0x80075CF0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80075D14;
    }
    // 0x80075CF0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80075CF4: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80075CF8: lw          $a1, 0x280C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X280C);
    // 0x80075CFC: jal         0x80061510
    // 0x80075D00: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_1;
    // 0x80075D00: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_1:
    // 0x80075D04: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80075D08: lw          $a1, 0x2828($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2828);
    // 0x80075D0C: j           L_80075D30
    // 0x80075D10: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
        goto L_80075D30;
    // 0x80075D10: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
L_80075D14:
    // 0x80075D14: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80075D18: lw          $a1, 0x2860($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2860);
    // 0x80075D1C: jal         0x80061510
    // 0x80075D20: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_2;
    // 0x80075D20: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_2:
    // 0x80075D24: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80075D28: lw          $a1, 0x27FC($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X27FC);
    // 0x80075D2C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
L_80075D30:
    // 0x80075D30: jal         0x80061510
    // 0x80075D34: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_3;
    // 0x80075D34: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_3:
    // 0x80075D38: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x80075D3C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80075D40: j           L_80075D64
    // 0x80075D44: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
        goto L_80075D64;
    // 0x80075D44: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
L_80075D48:
    // 0x80075D48: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80075D4C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80075D50: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80075D54: beq         $v0, $zero, L_80075D64
    if (ctx->r2 == 0) {
        // 0x80075D58: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80075D64;
    }
    // 0x80075D58: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80075D5C: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x80075D60: sh          $zero, 0x6($s0)
    MEM_H(0X6, ctx->r16) = 0;
L_80075D64:
    // 0x80075D64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80075D68:
    // 0x80075D68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80075D6C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80075D70: jr          $ra
    // 0x80075D74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80075D74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80093100_6E500(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80093100: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80093104: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80093108: jal         0x80093BF0
    // 0x8009310C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80093BF0_6EFF0(rdram, ctx);
        goto after_0;
    // 0x8009310C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x80093110: jal         0x80094040
    // 0x80093114: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_80094040_6F440(rdram, ctx);
        goto after_1;
    // 0x80093114: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_1:
    // 0x80093118: jal         0x800931F0
    // 0x8009311C: nop

    func_800931F0_6E5F0(rdram, ctx);
        goto after_2;
    // 0x8009311C: nop

    after_2:
    // 0x80093120: jal         0x80093460
    // 0x80093124: nop

    func_80093460_6E860(rdram, ctx);
        goto after_3;
    // 0x80093124: nop

    after_3:
    // 0x80093128: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x8009312C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80093130: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80093134: jr          $ra
    // 0x80093138: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80093138: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8009313C: nop

;}
RECOMP_FUNC void func_80030674_BA74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80030674: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80030678: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
    // 0x8003067C: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x80030680: jr          $ra
    // 0x80030684: sb          $v0, 0x7($a0)
    MEM_B(0X7, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80030684: sb          $v0, 0x7($a0)
    MEM_B(0X7, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_80026A30_1E30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80026A30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80026A34: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80026A38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80026A3C: jal         0x80089F1C
    // 0x80026A40: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_80089F1C_6531C(rdram, ctx);
        goto after_0;
    // 0x80026A40: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80026A44: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80026A48: lw          $v0, 0x6C90($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6C90);
    // 0x80026A4C: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x80026A50: lbu         $v1, 0x6DB0($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X6DB0);
    // 0x80026A54: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80026A58: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80026A5C: sw          $v0, 0x6C90($at)
    MEM_W(0X6C90, ctx->r1) = ctx->r2;
    // 0x80026A60: bne         $v1, $zero, L_80026B8C
    if (ctx->r3 != 0) {
        // 0x80026A64: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_80026B8C;
    }
    // 0x80026A64: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80026A68: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80026A6C: lw          $v0, 0x6C94($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6C94);
    // 0x80026A70: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80026A74: sb          $v1, 0x6DB0($at)
    MEM_B(0X6DB0, ctx->r1) = ctx->r3;
    // 0x80026A78: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80026A7C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80026A80: jal         0x80028C14
    // 0x80026A84: sw          $v0, 0x6C94($at)
    MEM_W(0X6C94, ctx->r1) = ctx->r2;
    func_80028C14_4014(rdram, ctx);
        goto after_1;
    // 0x80026A84: sw          $v0, 0x6C94($at)
    MEM_W(0X6C94, ctx->r1) = ctx->r2;
    after_1:
    // 0x80026A88: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80026A8C: lbu         $v0, 0x6C98($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X6C98);
    // 0x80026A90: bne         $v0, $zero, L_80026B40
    if (ctx->r2 != 0) {
        // 0x80026A94: nop
    
            goto L_80026B40;
    }
    // 0x80026A94: nop

    // 0x80026A98: jal         0x8002609C
    // 0x80026A9C: nop

    func_8002609C_149C(rdram, ctx);
        goto after_2;
    // 0x80026A9C: nop

    after_2:
    // 0x80026AA0: jal         0x800281BC
    // 0x80026AA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800281BC_35BC(rdram, ctx);
        goto after_3;
    // 0x80026AA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80026AA8: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x80026AAC: lbu         $v1, -0x14C0($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X14C0);
    // 0x80026AB0: beq         $v1, $zero, L_80026B24
    if (ctx->r3 == 0) {
        // 0x80026AB4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80026B24;
    }
    // 0x80026AB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80026AB8: bne         $v1, $v0, L_80026AF0
    if (ctx->r3 != ctx->r2) {
        // 0x80026ABC: addiu       $a0, $zero, 0x10
        ctx->r4 = ADD32(0, 0X10);
            goto L_80026AF0;
    }
    // 0x80026ABC: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x80026AC0: jal         0x80028470
    // 0x80026AC4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80028470_3870(rdram, ctx);
        goto after_4;
    // 0x80026AC4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_4:
    // 0x80026AC8: jal         0x8002891C
    // 0x80026ACC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8002891C_3D1C(rdram, ctx);
        goto after_5;
    // 0x80026ACC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_5:
    // 0x80026AD0: jal         0x80028978
    // 0x80026AD4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80028978_3D78(rdram, ctx);
        goto after_6;
    // 0x80026AD4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_6:
    // 0x80026AD8: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80026ADC: lbu         $v0, -0x14C0($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X14C0);
    // 0x80026AE0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80026AE4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80026AE8: sb          $v0, -0x14C0($at)
    MEM_B(-0X14C0, ctx->r1) = ctx->r2;
    // 0x80026AEC: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
L_80026AF0:
    // 0x80026AF0: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x80026AF4: lui         $a3, 0x800D
    ctx->r7 = S32(0X800D << 16);
    // 0x80026AF8: addiu       $a3, $a3, 0x1C60
    ctx->r7 = ADD32(ctx->r7, 0X1C60);
    // 0x80026AFC: jal         0x80029C7C
    // 0x80026B00: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80029C7C_507C(rdram, ctx);
        goto after_7;
    // 0x80026B00: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x80026B04: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x80026B08: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x80026B0C: lui         $a3, 0x800D
    ctx->r7 = S32(0X800D << 16);
    // 0x80026B10: addiu       $a3, $a3, 0x1C84
    ctx->r7 = ADD32(ctx->r7, 0X1C84);
    // 0x80026B14: jal         0x80029C7C
    // 0x80026B18: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80029C7C_507C(rdram, ctx);
        goto after_8;
    // 0x80026B18: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_8:
    // 0x80026B1C: j           L_80026B30
    // 0x80026B20: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
        goto L_80026B30;
    // 0x80026B20: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
L_80026B24:
    // 0x80026B24: jal         0x800261C4
    // 0x80026B28: nop

    func_800261C4_15C4(rdram, ctx);
        goto after_9;
    // 0x80026B28: nop

    after_9:
    // 0x80026B2C: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
L_80026B30:
    // 0x80026B30: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80026B34: sh          $v0, -0x77B0($at)
    MEM_H(-0X77B0, ctx->r1) = ctx->r2;
    // 0x80026B38: jal         0x800276EC
    // 0x80026B3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800276EC_2AEC(rdram, ctx);
        goto after_10;
    // 0x80026B3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_10:
L_80026B40:
    // 0x80026B40: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x80026B44: lw          $v1, 0x6CA4($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6CA4);
    // 0x80026B48: beq         $v1, $zero, L_80026B60
    if (ctx->r3 == 0) {
        // 0x80026B4C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80026B60;
    }
    // 0x80026B4C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80026B50: beq         $v1, $v0, L_80026B70
    if (ctx->r3 == ctx->r2) {
        // 0x80026B54: nop
    
            goto L_80026B70;
    }
    // 0x80026B54: nop

    // 0x80026B58: j           L_80026B84
    // 0x80026B5C: nop

        goto L_80026B84;
    // 0x80026B5C: nop

L_80026B60:
    // 0x80026B60: jal         0x80028B28
    // 0x80026B64: nop

    func_80028B28_3F28(rdram, ctx);
        goto after_11;
    // 0x80026B64: nop

    after_11:
    // 0x80026B68: j           L_80026B7C
    // 0x80026B6C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80026B7C;
    // 0x80026B6C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80026B70:
    // 0x80026B70: jal         0x80028A58
    // 0x80026B74: nop

    func_80028A58_3E58(rdram, ctx);
        goto after_12;
    // 0x80026B74: nop

    after_12:
    // 0x80026B78: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80026B7C:
    // 0x80026B7C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80026B80: sw          $v0, 0x6CA4($at)
    MEM_W(0X6CA4, ctx->r1) = ctx->r2;
L_80026B84:
    // 0x80026B84: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80026B88: sb          $zero, 0x6DB0($at)
    MEM_B(0X6DB0, ctx->r1) = 0;
L_80026B8C:
    // 0x80026B8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80026B90: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80026B94: jr          $ra
    // 0x80026B98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80026B98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8007FC44_5B044(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007FC44: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x8007FC48: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x8007FC4C: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x8007FC50: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x8007FC54: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8007FC58: sw          $fp, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r30;
    // 0x8007FC5C: addu        $fp, $zero, $zero
    ctx->r30 = ADD32(0, 0);
    // 0x8007FC60: sw          $s7, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r23;
    // 0x8007FC64: addu        $s7, $zero, $zero
    ctx->r23 = ADD32(0, 0);
    // 0x8007FC68: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x8007FC6C: addu        $s5, $zero, $zero
    ctx->r21 = ADD32(0, 0);
    // 0x8007FC70: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x8007FC74: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x8007FC78: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x8007FC7C: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
    // 0x8007FC80: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x8007FC84: addiu       $s0, $sp, 0x10
    ctx->r16 = ADD32(ctx->r29, 0X10);
    // 0x8007FC88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8007FC8C: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8007FC90: addiu       $a1, $a1, 0x2CA0
    ctx->r5 = ADD32(ctx->r5, 0X2CA0);
    // 0x8007FC94: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x8007FC98: sw          $ra, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r31;
    // 0x8007FC9C: jal         0x8009A3B4
    // 0x8007FCA0: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8007FCA0: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    after_0:
    // 0x8007FCA4: lw          $t2, 0x5C($s1)
    ctx->r10 = MEM_W(ctx->r17, 0X5C);
    // 0x8007FCA8: lw          $a3, 0x60($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X60);
    // 0x8007FCAC: beq         $t2, $zero, L_800805C8
    if (ctx->r10 == 0) {
        // 0x8007FCB0: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_800805C8;
    }
    // 0x8007FCB0: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x8007FCB4: andi        $v0, $a3, 0xFF00
    ctx->r2 = ctx->r7 & 0XFF00;
    // 0x8007FCB8: srl         $t4, $v0, 8
    ctx->r12 = S32(U32(ctx->r2) >> 8);
    // 0x8007FCBC: srl         $v0, $a3, 16
    ctx->r2 = S32(U32(ctx->r7) >> 16);
    // 0x8007FCC0: andi        $t3, $v0, 0xFF
    ctx->r11 = ctx->r2 & 0XFF;
    // 0x8007FCC4: addiu       $v0, $zero, 0x111
    ctx->r2 = ADD32(0, 0X111);
    // 0x8007FCC8: bne         $s3, $v0, L_8007FCDC
    if (ctx->r19 != ctx->r2) {
        // 0x8007FCCC: andi        $t5, $a3, 0xFF
        ctx->r13 = ctx->r7 & 0XFF;
            goto L_8007FCDC;
    }
    // 0x8007FCCC: andi        $t5, $a3, 0xFF
    ctx->r13 = ctx->r7 & 0XFF;
    // 0x8007FCD0: addiu       $s6, $zero, 0x18
    ctx->r22 = ADD32(0, 0X18);
    // 0x8007FCD4: j           L_8007FCF8
    // 0x8007FCD8: addu        $v1, $s0, $zero
    ctx->r3 = ADD32(ctx->r16, 0);
        goto L_8007FCF8;
    // 0x8007FCD8: addu        $v1, $s0, $zero
    ctx->r3 = ADD32(ctx->r16, 0);
L_8007FCDC:
    // 0x8007FCDC: addiu       $v0, $zero, 0x66
    ctx->r2 = ADD32(0, 0X66);
    // 0x8007FCE0: bne         $s3, $v0, L_8007FCF0
    if (ctx->r19 != ctx->r2) {
        // 0x8007FCE4: addiu       $v0, $zero, 0x67
        ctx->r2 = ADD32(0, 0X67);
            goto L_8007FCF0;
    }
    // 0x8007FCE4: addiu       $v0, $zero, 0x67
    ctx->r2 = ADD32(0, 0X67);
    // 0x8007FCE8: j           L_8007FCF8
    // 0x8007FCEC: addiu       $s6, $zero, 0x10
    ctx->r22 = ADD32(0, 0X10);
        goto L_8007FCF8;
    // 0x8007FCEC: addiu       $s6, $zero, 0x10
    ctx->r22 = ADD32(0, 0X10);
L_8007FCF0:
    // 0x8007FCF0: beql        $s3, $v0, L_8007FCF8
    if (ctx->r19 == ctx->r2) {
        // 0x8007FCF4: addiu       $s6, $zero, 0x18
        ctx->r22 = ADD32(0, 0X18);
            goto L_8007FCF8;
    }
    goto skip_0;
    // 0x8007FCF4: addiu       $s6, $zero, 0x18
    ctx->r22 = ADD32(0, 0X18);
    skip_0:
L_8007FCF8:
    // 0x8007FCF8: beq         $s6, $zero, L_8007FFC4
    if (ctx->r22 == 0) {
        // 0x8007FCFC: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_8007FFC4;
    }
    // 0x8007FCFC: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8007FD00: addiu       $v0, $s3, -0x66
    ctx->r2 = ADD32(ctx->r19, -0X66);
    // 0x8007FD04: sltiu       $t6, $v0, 0x2
    ctx->r14 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x8007FD08: lui         $t0, 0xFF
    ctx->r8 = S32(0XFF << 16);
    // 0x8007FD0C: addu        $t1, $v1, $zero
    ctx->r9 = ADD32(ctx->r3, 0);
L_8007FD10:
    // 0x8007FD10: addiu       $v0, $zero, 0x111
    ctx->r2 = ADD32(0, 0X111);
    // 0x8007FD14: bne         $s3, $v0, L_8007FD50
    if (ctx->r19 != ctx->r2) {
        // 0x8007FD18: nop
    
            goto L_8007FD50;
    }
    // 0x8007FD18: nop

    // 0x8007FD1C: lbu         $v0, 0x0($t1)
    ctx->r2 = MEM_BU(ctx->r9, 0X0);
    // 0x8007FD20: lbu         $v1, 0x1($t1)
    ctx->r3 = MEM_BU(ctx->r9, 0X1);
    // 0x8007FD24: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8007FD28: addiu       $fp, $v0, 0x1
    ctx->r30 = ADD32(ctx->r2, 0X1);
    // 0x8007FD2C: andi        $v1, $v1, 0x3
    ctx->r3 = ctx->r3 & 0X3;
    // 0x8007FD30: lbu         $v0, 0x2($t1)
    ctx->r2 = MEM_BU(ctx->r9, 0X2);
    // 0x8007FD34: addiu       $s7, $v1, 0x1
    ctx->r23 = ADD32(ctx->r3, 0X1);
    // 0x8007FD38: lbu         $v1, 0x3($t1)
    ctx->r3 = MEM_BU(ctx->r9, 0X3);
    // 0x8007FD3C: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8007FD40: addiu       $s5, $v0, 0x1
    ctx->r21 = ADD32(ctx->r2, 0X1);
    // 0x8007FD44: andi        $v1, $v1, 0x3
    ctx->r3 = ctx->r3 & 0X3;
    // 0x8007FD48: j           L_8007FD68
    // 0x8007FD4C: addiu       $s4, $v1, 0x1
    ctx->r20 = ADD32(ctx->r3, 0X1);
        goto L_8007FD68;
    // 0x8007FD4C: addiu       $s4, $v1, 0x1
    ctx->r20 = ADD32(ctx->r3, 0X1);
L_8007FD50:
    // 0x8007FD50: beq         $t6, $zero, L_8007FD6C
    if (ctx->r14 == 0) {
        // 0x8007FD54: sll         $v0, $fp, 2
        ctx->r2 = S32(ctx->r30 << 2);
            goto L_8007FD6C;
    }
    // 0x8007FD54: sll         $v0, $fp, 2
    ctx->r2 = S32(ctx->r30 << 2);
    // 0x8007FD58: addu        $fp, $zero, $zero
    ctx->r30 = ADD32(0, 0);
    // 0x8007FD5C: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    // 0x8007FD60: addiu       $s5, $zero, 0x2
    ctx->r21 = ADD32(0, 0X2);
    // 0x8007FD64: addiu       $s4, $zero, 0x3
    ctx->r20 = ADD32(0, 0X3);
L_8007FD68:
    // 0x8007FD68: sll         $v0, $fp, 2
    ctx->r2 = S32(ctx->r30 << 2);
L_8007FD6C:
    // 0x8007FD6C: addu        $v0, $v0, $t2
    ctx->r2 = ADD32(ctx->r2, ctx->r10);
    // 0x8007FD70: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x8007FD74: andi        $a0, $a3, 0xFF
    ctx->r4 = ctx->r7 & 0XFF;
    // 0x8007FD78: mult        $a0, $t5
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007FD7C: mflo        $a0
    ctx->r4 = lo;
    // 0x8007FD80: andi        $v0, $a3, 0xFF00
    ctx->r2 = ctx->r7 & 0XFF00;
    // 0x8007FD84: nop

    // 0x8007FD88: mult        $v0, $t4
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007FD8C: mflo        $v0
    ctx->r2 = lo;
    // 0x8007FD90: and         $v1, $a3, $t0
    ctx->r3 = ctx->r7 & ctx->r8;
    // 0x8007FD94: nop

    // 0x8007FD98: mult        $v1, $t3
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007FD9C: mflo        $v1
    ctx->r3 = lo;
    // 0x8007FDA0: lw          $a1, 0x58($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X58);
    // 0x8007FDA4: sll         $a2, $s2, 1
    ctx->r6 = S32(ctx->r18 << 1);
    // 0x8007FDA8: addu        $a1, $a2, $a1
    ctx->r5 = ADD32(ctx->r6, ctx->r5);
    // 0x8007FDAC: srl         $a0, $a0, 7
    ctx->r4 = S32(U32(ctx->r4) >> 7);
    // 0x8007FDB0: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x8007FDB4: srl         $v0, $v0, 7
    ctx->r2 = S32(U32(ctx->r2) >> 7);
    // 0x8007FDB8: andi        $v0, $v0, 0xFF00
    ctx->r2 = ctx->r2 & 0XFF00;
    // 0x8007FDBC: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x8007FDC0: srl         $v1, $v1, 7
    ctx->r3 = S32(U32(ctx->r3) >> 7);
    // 0x8007FDC4: and         $v1, $v1, $t0
    ctx->r3 = ctx->r3 & ctx->r8;
    // 0x8007FDC8: or          $a3, $a0, $v1
    ctx->r7 = ctx->r4 | ctx->r3;
    // 0x8007FDCC: andi        $v0, $a3, 0xFF
    ctx->r2 = ctx->r7 & 0XFF;
    // 0x8007FDD0: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x8007FDD4: lw          $v1, 0x58($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X58);
    // 0x8007FDD8: andi        $v0, $a3, 0xFF00
    ctx->r2 = ctx->r7 & 0XFF00;
    // 0x8007FDDC: srl         $v0, $v0, 8
    ctx->r2 = S32(U32(ctx->r2) >> 8);
    // 0x8007FDE0: addu        $v1, $a2, $v1
    ctx->r3 = ADD32(ctx->r6, ctx->r3);
    // 0x8007FDE4: sh          $v0, 0x30($v1)
    MEM_H(0X30, ctx->r3) = ctx->r2;
    // 0x8007FDE8: lw          $v1, 0x58($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X58);
    // 0x8007FDEC: and         $v0, $a3, $t0
    ctx->r2 = ctx->r7 & ctx->r8;
    // 0x8007FDF0: srl         $v0, $v0, 16
    ctx->r2 = S32(U32(ctx->r2) >> 16);
    // 0x8007FDF4: addu        $v1, $a2, $v1
    ctx->r3 = ADD32(ctx->r6, ctx->r3);
    // 0x8007FDF8: sh          $v0, 0x60($v1)
    MEM_H(0X60, ctx->r3) = ctx->r2;
    // 0x8007FDFC: sll         $v0, $s7, 2
    ctx->r2 = S32(ctx->r23 << 2);
    // 0x8007FE00: addu        $v0, $v0, $t2
    ctx->r2 = ADD32(ctx->r2, ctx->r10);
    // 0x8007FE04: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x8007FE08: andi        $a0, $a3, 0xFF
    ctx->r4 = ctx->r7 & 0XFF;
    // 0x8007FE0C: mult        $a0, $t5
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007FE10: mflo        $a0
    ctx->r4 = lo;
    // 0x8007FE14: andi        $v0, $a3, 0xFF00
    ctx->r2 = ctx->r7 & 0XFF00;
    // 0x8007FE18: nop

    // 0x8007FE1C: mult        $v0, $t4
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007FE20: mflo        $v0
    ctx->r2 = lo;
    // 0x8007FE24: and         $v1, $a3, $t0
    ctx->r3 = ctx->r7 & ctx->r8;
    // 0x8007FE28: nop

    // 0x8007FE2C: mult        $v1, $t3
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007FE30: mflo        $v1
    ctx->r3 = lo;
    // 0x8007FE34: lw          $a1, 0x58($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X58);
    // 0x8007FE38: addu        $a1, $a2, $a1
    ctx->r5 = ADD32(ctx->r6, ctx->r5);
    // 0x8007FE3C: srl         $a0, $a0, 7
    ctx->r4 = S32(U32(ctx->r4) >> 7);
    // 0x8007FE40: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x8007FE44: srl         $v0, $v0, 7
    ctx->r2 = S32(U32(ctx->r2) >> 7);
    // 0x8007FE48: andi        $v0, $v0, 0xFF00
    ctx->r2 = ctx->r2 & 0XFF00;
    // 0x8007FE4C: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x8007FE50: srl         $v1, $v1, 7
    ctx->r3 = S32(U32(ctx->r3) >> 7);
    // 0x8007FE54: and         $v1, $v1, $t0
    ctx->r3 = ctx->r3 & ctx->r8;
    // 0x8007FE58: or          $a3, $a0, $v1
    ctx->r7 = ctx->r4 | ctx->r3;
    // 0x8007FE5C: andi        $v0, $a3, 0xFF
    ctx->r2 = ctx->r7 & 0XFF;
    // 0x8007FE60: sh          $v0, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r2;
    // 0x8007FE64: lw          $v1, 0x58($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X58);
    // 0x8007FE68: andi        $v0, $a3, 0xFF00
    ctx->r2 = ctx->r7 & 0XFF00;
    // 0x8007FE6C: srl         $v0, $v0, 8
    ctx->r2 = S32(U32(ctx->r2) >> 8);
    // 0x8007FE70: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x8007FE74: sh          $v0, 0x32($v1)
    MEM_H(0X32, ctx->r3) = ctx->r2;
    // 0x8007FE78: lw          $v1, 0x58($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X58);
    // 0x8007FE7C: and         $v0, $a3, $t0
    ctx->r2 = ctx->r7 & ctx->r8;
    // 0x8007FE80: srl         $v0, $v0, 16
    ctx->r2 = S32(U32(ctx->r2) >> 16);
    // 0x8007FE84: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x8007FE88: sh          $v0, 0x62($v1)
    MEM_H(0X62, ctx->r3) = ctx->r2;
    // 0x8007FE8C: sll         $v0, $s5, 2
    ctx->r2 = S32(ctx->r21 << 2);
    // 0x8007FE90: addu        $v0, $v0, $t2
    ctx->r2 = ADD32(ctx->r2, ctx->r10);
    // 0x8007FE94: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x8007FE98: andi        $a0, $a3, 0xFF
    ctx->r4 = ctx->r7 & 0XFF;
    // 0x8007FE9C: mult        $a0, $t5
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007FEA0: mflo        $a0
    ctx->r4 = lo;
    // 0x8007FEA4: andi        $v0, $a3, 0xFF00
    ctx->r2 = ctx->r7 & 0XFF00;
    // 0x8007FEA8: nop

    // 0x8007FEAC: mult        $v0, $t4
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007FEB0: mflo        $v0
    ctx->r2 = lo;
    // 0x8007FEB4: and         $v1, $a3, $t0
    ctx->r3 = ctx->r7 & ctx->r8;
    // 0x8007FEB8: nop

    // 0x8007FEBC: mult        $v1, $t3
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007FEC0: mflo        $v1
    ctx->r3 = lo;
    // 0x8007FEC4: lw          $a1, 0x58($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X58);
    // 0x8007FEC8: addu        $a1, $a2, $a1
    ctx->r5 = ADD32(ctx->r6, ctx->r5);
    // 0x8007FECC: srl         $a0, $a0, 7
    ctx->r4 = S32(U32(ctx->r4) >> 7);
    // 0x8007FED0: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x8007FED4: srl         $v0, $v0, 7
    ctx->r2 = S32(U32(ctx->r2) >> 7);
    // 0x8007FED8: andi        $v0, $v0, 0xFF00
    ctx->r2 = ctx->r2 & 0XFF00;
    // 0x8007FEDC: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x8007FEE0: srl         $v1, $v1, 7
    ctx->r3 = S32(U32(ctx->r3) >> 7);
    // 0x8007FEE4: and         $v1, $v1, $t0
    ctx->r3 = ctx->r3 & ctx->r8;
    // 0x8007FEE8: or          $a3, $a0, $v1
    ctx->r7 = ctx->r4 | ctx->r3;
    // 0x8007FEEC: andi        $v0, $a3, 0xFF
    ctx->r2 = ctx->r7 & 0XFF;
    // 0x8007FEF0: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x8007FEF4: lw          $v1, 0x58($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X58);
    // 0x8007FEF8: andi        $v0, $a3, 0xFF00
    ctx->r2 = ctx->r7 & 0XFF00;
    // 0x8007FEFC: srl         $v0, $v0, 8
    ctx->r2 = S32(U32(ctx->r2) >> 8);
    // 0x8007FF00: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x8007FF04: sh          $v0, 0x34($v1)
    MEM_H(0X34, ctx->r3) = ctx->r2;
    // 0x8007FF08: lw          $v1, 0x58($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X58);
    // 0x8007FF0C: and         $v0, $a3, $t0
    ctx->r2 = ctx->r7 & ctx->r8;
    // 0x8007FF10: srl         $v0, $v0, 16
    ctx->r2 = S32(U32(ctx->r2) >> 16);
    // 0x8007FF14: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x8007FF18: sh          $v0, 0x64($v1)
    MEM_H(0X64, ctx->r3) = ctx->r2;
    // 0x8007FF1C: sll         $v0, $s4, 2
    ctx->r2 = S32(ctx->r20 << 2);
    // 0x8007FF20: addu        $v0, $v0, $t2
    ctx->r2 = ADD32(ctx->r2, ctx->r10);
    // 0x8007FF24: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x8007FF28: andi        $a0, $a3, 0xFF
    ctx->r4 = ctx->r7 & 0XFF;
    // 0x8007FF2C: mult        $a0, $t5
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007FF30: mflo        $a0
    ctx->r4 = lo;
    // 0x8007FF34: andi        $v0, $a3, 0xFF00
    ctx->r2 = ctx->r7 & 0XFF00;
    // 0x8007FF38: nop

    // 0x8007FF3C: mult        $v0, $t4
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007FF40: mflo        $v0
    ctx->r2 = lo;
    // 0x8007FF44: and         $v1, $a3, $t0
    ctx->r3 = ctx->r7 & ctx->r8;
    // 0x8007FF48: nop

    // 0x8007FF4C: mult        $v1, $t3
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007FF50: mflo        $v1
    ctx->r3 = lo;
    // 0x8007FF54: lw          $a1, 0x58($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X58);
    // 0x8007FF58: addu        $a1, $a2, $a1
    ctx->r5 = ADD32(ctx->r6, ctx->r5);
    // 0x8007FF5C: srl         $a0, $a0, 7
    ctx->r4 = S32(U32(ctx->r4) >> 7);
    // 0x8007FF60: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x8007FF64: srl         $v0, $v0, 7
    ctx->r2 = S32(U32(ctx->r2) >> 7);
    // 0x8007FF68: andi        $v0, $v0, 0xFF00
    ctx->r2 = ctx->r2 & 0XFF00;
    // 0x8007FF6C: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x8007FF70: srl         $v1, $v1, 7
    ctx->r3 = S32(U32(ctx->r3) >> 7);
    // 0x8007FF74: and         $v1, $v1, $t0
    ctx->r3 = ctx->r3 & ctx->r8;
    // 0x8007FF78: or          $a3, $a0, $v1
    ctx->r7 = ctx->r4 | ctx->r3;
    // 0x8007FF7C: andi        $v0, $a3, 0xFF
    ctx->r2 = ctx->r7 & 0XFF;
    // 0x8007FF80: sh          $v0, 0x6($a1)
    MEM_H(0X6, ctx->r5) = ctx->r2;
    // 0x8007FF84: lw          $v1, 0x58($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X58);
    // 0x8007FF88: andi        $v0, $a3, 0xFF00
    ctx->r2 = ctx->r7 & 0XFF00;
    // 0x8007FF8C: srl         $v0, $v0, 8
    ctx->r2 = S32(U32(ctx->r2) >> 8);
    // 0x8007FF90: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x8007FF94: sh          $v0, 0x36($v1)
    MEM_H(0X36, ctx->r3) = ctx->r2;
    // 0x8007FF98: lw          $v1, 0x58($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X58);
    // 0x8007FF9C: and         $v0, $a3, $t0
    ctx->r2 = ctx->r7 & ctx->r8;
    // 0x8007FFA0: srl         $v0, $v0, 16
    ctx->r2 = S32(U32(ctx->r2) >> 16);
    // 0x8007FFA4: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x8007FFA8: beq         $t6, $zero, L_8007FFB4
    if (ctx->r14 == 0) {
        // 0x8007FFAC: sh          $v0, 0x66($v1)
        MEM_H(0X66, ctx->r3) = ctx->r2;
            goto L_8007FFB4;
    }
    // 0x8007FFAC: sh          $v0, 0x66($v1)
    MEM_H(0X66, ctx->r3) = ctx->r2;
    // 0x8007FFB0: addiu       $t2, $t2, 0x10
    ctx->r10 = ADD32(ctx->r10, 0X10);
L_8007FFB4:
    // 0x8007FFB4: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x8007FFB8: slt         $v0, $s2, $s6
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x8007FFBC: bne         $v0, $zero, L_8007FD10
    if (ctx->r2 != 0) {
        // 0x8007FFC0: addiu       $t1, $t1, 0x4
        ctx->r9 = ADD32(ctx->r9, 0X4);
            goto L_8007FD10;
    }
    // 0x8007FFC0: addiu       $t1, $t1, 0x4
    ctx->r9 = ADD32(ctx->r9, 0X4);
L_8007FFC4:
    // 0x8007FFC4: addiu       $v0, $zero, 0x111
    ctx->r2 = ADD32(0, 0X111);
    // 0x8007FFC8: bne         $s3, $v0, L_80080194
    if (ctx->r19 != ctx->r2) {
        // 0x8007FFCC: addiu       $v0, $zero, 0x66
        ctx->r2 = ADD32(0, 0X66);
            goto L_80080194;
    }
    // 0x8007FFCC: addiu       $v0, $zero, 0x66
    ctx->r2 = ADD32(0, 0X66);
    // 0x8007FFD0: jal         0x800281C8
    // 0x8007FFD4: addiu       $a0, $zero, 0x120
    ctx->r4 = ADD32(0, 0X120);
    func_800281C8_35C8(rdram, ctx);
        goto after_1;
    // 0x8007FFD4: addiu       $a0, $zero, 0x120
    ctx->r4 = ADD32(0, 0X120);
    after_1:
    // 0x8007FFD8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8007FFDC: beq         $v0, $zero, L_8007FFF0
    if (ctx->r2 == 0) {
        // 0x8007FFE0: sw          $v0, 0x46B0($at)
        MEM_W(0X46B0, ctx->r1) = ctx->r2;
            goto L_8007FFF0;
    }
    // 0x8007FFE0: sw          $v0, 0x46B0($at)
    MEM_W(0X46B0, ctx->r1) = ctx->r2;
    // 0x8007FFE4: lw          $v0, 0x58($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X58);
    // 0x8007FFE8: bne         $v0, $zero, L_80080004
    if (ctx->r2 != 0) {
        // 0x8007FFEC: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_80080004;
    }
    // 0x8007FFEC: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
L_8007FFF0:
    // 0x8007FFF0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x8007FFF4: addiu       $v0, $v0, -0x2400
    ctx->r2 = ADD32(ctx->r2, -0X2400);
    // 0x8007FFF8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8007FFFC: j           L_800805C8
    // 0x80080000: sw          $v0, 0x46B0($at)
    MEM_W(0X46B0, ctx->r1) = ctx->r2;
        goto L_800805C8;
    // 0x80080000: sw          $v0, 0x46B0($at)
    MEM_W(0X46B0, ctx->r1) = ctx->r2;
L_80080004:
    // 0x80080004: beq         $s6, $zero, L_800805C8
    if (ctx->r22 == 0) {
        // 0x80080008: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_800805C8;
    }
    // 0x80080008: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8008000C: lui         $s7, 0x800C
    ctx->r23 = S32(0X800C << 16);
    // 0x80080010: addiu       $s7, $s7, -0x2400
    ctx->r23 = ADD32(ctx->r23, -0X2400);
    // 0x80080014: addiu       $s5, $s7, 0x20
    ctx->r21 = ADD32(ctx->r23, 0X20);
    // 0x80080018: addu        $s4, $s7, $zero
    ctx->r20 = ADD32(ctx->r23, 0);
L_8008001C:
    // 0x8008001C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x80080020: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80080024: lw          $a0, 0x46B0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X46B0);
    // 0x80080028: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x8008002C: sll         $s0, $s3, 4
    ctx->r16 = S32(ctx->r19 << 4);
    // 0x80080030: jal         0x8009A3B4
    // 0x80080034: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80080034: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    after_2:
    // 0x80080038: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8008003C: lw          $a0, 0x46B0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X46B0);
    // 0x80080040: addiu       $a1, $s7, 0x10
    ctx->r5 = ADD32(ctx->r23, 0X10);
    // 0x80080044: addu        $a1, $s0, $a1
    ctx->r5 = ADD32(ctx->r16, ctx->r5);
    // 0x80080048: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x8008004C: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    // 0x80080050: jal         0x8009A3B4
    // 0x80080054: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80080054: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_3:
    // 0x80080058: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8008005C: lw          $a0, 0x46B0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X46B0);
    // 0x80080060: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x80080064: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80080068: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    // 0x8008006C: jal         0x8009A3B4
    // 0x80080070: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80080070: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    after_4:
    // 0x80080074: lw          $v0, 0x58($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X58);
    // 0x80080078: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8008007C: lw          $v1, 0x46B0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X46B0);
    // 0x80080080: sll         $a0, $s2, 1
    ctx->r4 = S32(ctx->r18 << 1);
    // 0x80080084: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x80080088: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x8008008C: addu        $v1, $s0, $v1
    ctx->r3 = ADD32(ctx->r16, ctx->r3);
    // 0x80080090: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x80080094: lw          $v0, 0x58($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X58);
    // 0x80080098: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8008009C: lw          $v1, 0x46B0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X46B0);
    // 0x800800A0: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x800800A4: lhu         $v0, 0x30($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X30);
    // 0x800800A8: addu        $v1, $s0, $v1
    ctx->r3 = ADD32(ctx->r16, ctx->r3);
    // 0x800800AC: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    // 0x800800B0: lw          $v0, 0x58($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X58);
    // 0x800800B4: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x800800B8: lw          $v1, 0x46B0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X46B0);
    // 0x800800BC: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x800800C0: lhu         $v0, 0x60($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X60);
    // 0x800800C4: addu        $v1, $s0, $v1
    ctx->r3 = ADD32(ctx->r16, ctx->r3);
    // 0x800800C8: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x800800CC: lw          $v0, 0x58($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X58);
    // 0x800800D0: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x800800D4: lw          $v1, 0x46B0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X46B0);
    // 0x800800D8: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x800800DC: lhu         $v0, 0x2($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X2);
    // 0x800800E0: addu        $v1, $s0, $v1
    ctx->r3 = ADD32(ctx->r16, ctx->r3);
    // 0x800800E4: sb          $v0, 0x1C($v1)
    MEM_B(0X1C, ctx->r3) = ctx->r2;
    // 0x800800E8: lw          $v0, 0x58($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X58);
    // 0x800800EC: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x800800F0: lw          $v1, 0x46B0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X46B0);
    // 0x800800F4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x800800F8: lhu         $v0, 0x32($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X32);
    // 0x800800FC: addu        $v1, $s0, $v1
    ctx->r3 = ADD32(ctx->r16, ctx->r3);
    // 0x80080100: sb          $v0, 0x1D($v1)
    MEM_B(0X1D, ctx->r3) = ctx->r2;
    // 0x80080104: lw          $v0, 0x58($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X58);
    // 0x80080108: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8008010C: lw          $v1, 0x46B0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X46B0);
    // 0x80080110: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80080114: lhu         $v0, 0x64($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X64);
    // 0x80080118: addu        $v1, $s0, $v1
    ctx->r3 = ADD32(ctx->r16, ctx->r3);
    // 0x8008011C: sb          $v0, 0x1E($v1)
    MEM_B(0X1E, ctx->r3) = ctx->r2;
    // 0x80080120: lw          $v0, 0x58($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X58);
    // 0x80080124: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80080128: lw          $v1, 0x46B0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X46B0);
    // 0x8008012C: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x80080130: lhu         $v0, 0x4($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4);
    // 0x80080134: addu        $v1, $s0, $v1
    ctx->r3 = ADD32(ctx->r16, ctx->r3);
    // 0x80080138: sb          $v0, 0x2C($v1)
    MEM_B(0X2C, ctx->r3) = ctx->r2;
    // 0x8008013C: lw          $v0, 0x58($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X58);
    // 0x80080140: addiu       $s4, $s4, 0x30
    ctx->r20 = ADD32(ctx->r20, 0X30);
    // 0x80080144: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80080148: lw          $v1, 0x46B0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X46B0);
    // 0x8008014C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80080150: lhu         $v0, 0x34($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X34);
    // 0x80080154: addiu       $s3, $s3, 0x3
    ctx->r19 = ADD32(ctx->r19, 0X3);
    // 0x80080158: addu        $v1, $s0, $v1
    ctx->r3 = ADD32(ctx->r16, ctx->r3);
    // 0x8008015C: sb          $v0, 0x2D($v1)
    MEM_B(0X2D, ctx->r3) = ctx->r2;
    // 0x80080160: lw          $v0, 0x58($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X58);
    // 0x80080164: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80080168: lw          $v1, 0x46B0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X46B0);
    // 0x8008016C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80080170: lhu         $v0, 0x64($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X64);
    // 0x80080174: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x80080178: addu        $s0, $s0, $v1
    ctx->r16 = ADD32(ctx->r16, ctx->r3);
    // 0x8008017C: sb          $v0, 0x2E($s0)
    MEM_B(0X2E, ctx->r16) = ctx->r2;
    // 0x80080180: slt         $v0, $s2, $s6
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x80080184: bne         $v0, $zero, L_8008001C
    if (ctx->r2 != 0) {
        // 0x80080188: addiu       $s5, $s5, 0x30
        ctx->r21 = ADD32(ctx->r21, 0X30);
            goto L_8008001C;
    }
    // 0x80080188: addiu       $s5, $s5, 0x30
    ctx->r21 = ADD32(ctx->r21, 0X30);
    // 0x8008018C: j           L_800805C8
    // 0x80080190: nop

        goto L_800805C8;
    // 0x80080190: nop

L_80080194:
    // 0x80080194: bne         $s3, $v0, L_80080360
    if (ctx->r19 != ctx->r2) {
        // 0x80080198: addiu       $v0, $zero, 0x67
        ctx->r2 = ADD32(0, 0X67);
            goto L_80080360;
    }
    // 0x80080198: addiu       $v0, $zero, 0x67
    ctx->r2 = ADD32(0, 0X67);
    // 0x8008019C: jal         0x800281C8
    // 0x800801A0: addiu       $a0, $zero, 0xC0
    ctx->r4 = ADD32(0, 0XC0);
    func_800281C8_35C8(rdram, ctx);
        goto after_5;
    // 0x800801A0: addiu       $a0, $zero, 0xC0
    ctx->r4 = ADD32(0, 0XC0);
    after_5:
    // 0x800801A4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800801A8: beq         $v0, $zero, L_800801BC
    if (ctx->r2 == 0) {
        // 0x800801AC: sw          $v0, 0x46B0($at)
        MEM_W(0X46B0, ctx->r1) = ctx->r2;
            goto L_800801BC;
    }
    // 0x800801AC: sw          $v0, 0x46B0($at)
    MEM_W(0X46B0, ctx->r1) = ctx->r2;
    // 0x800801B0: lw          $v0, 0x58($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X58);
    // 0x800801B4: bne         $v0, $zero, L_800801D0
    if (ctx->r2 != 0) {
        // 0x800801B8: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_800801D0;
    }
    // 0x800801B8: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
L_800801BC:
    // 0x800801BC: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x800801C0: addiu       $v0, $v0, -0x22E0
    ctx->r2 = ADD32(ctx->r2, -0X22E0);
    // 0x800801C4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800801C8: j           L_800805C8
    // 0x800801CC: sw          $v0, 0x46B0($at)
    MEM_W(0X46B0, ctx->r1) = ctx->r2;
        goto L_800805C8;
    // 0x800801CC: sw          $v0, 0x46B0($at)
    MEM_W(0X46B0, ctx->r1) = ctx->r2;
L_800801D0:
    // 0x800801D0: beq         $s6, $zero, L_800805C8
    if (ctx->r22 == 0) {
        // 0x800801D4: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_800805C8;
    }
    // 0x800801D4: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x800801D8: lui         $s7, 0x800C
    ctx->r23 = S32(0X800C << 16);
    // 0x800801DC: addiu       $s7, $s7, -0x22E0
    ctx->r23 = ADD32(ctx->r23, -0X22E0);
    // 0x800801E0: addiu       $s5, $s7, 0x20
    ctx->r21 = ADD32(ctx->r23, 0X20);
    // 0x800801E4: addu        $s4, $s7, $zero
    ctx->r20 = ADD32(ctx->r23, 0);
L_800801E8:
    // 0x800801E8: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x800801EC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x800801F0: lw          $a0, 0x46B0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X46B0);
    // 0x800801F4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x800801F8: sll         $s0, $s3, 4
    ctx->r16 = S32(ctx->r19 << 4);
    // 0x800801FC: jal         0x8009A3B4
    // 0x80080200: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x80080200: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    after_6:
    // 0x80080204: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80080208: lw          $a0, 0x46B0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X46B0);
    // 0x8008020C: addiu       $a1, $s7, 0x10
    ctx->r5 = ADD32(ctx->r23, 0X10);
    // 0x80080210: addu        $a1, $s0, $a1
    ctx->r5 = ADD32(ctx->r16, ctx->r5);
    // 0x80080214: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80080218: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    // 0x8008021C: jal         0x8009A3B4
    // 0x80080220: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x80080220: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_7:
    // 0x80080224: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80080228: lw          $a0, 0x46B0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X46B0);
    // 0x8008022C: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x80080230: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80080234: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    // 0x80080238: jal         0x8009A3B4
    // 0x8008023C: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x8008023C: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    after_8:
    // 0x80080240: lw          $v0, 0x58($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X58);
    // 0x80080244: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80080248: lw          $v1, 0x46B0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X46B0);
    // 0x8008024C: sll         $a0, $s2, 1
    ctx->r4 = S32(ctx->r18 << 1);
    // 0x80080250: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x80080254: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80080258: addu        $v1, $s0, $v1
    ctx->r3 = ADD32(ctx->r16, ctx->r3);
    // 0x8008025C: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x80080260: lw          $v0, 0x58($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X58);
    // 0x80080264: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80080268: lw          $v1, 0x46B0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X46B0);
    // 0x8008026C: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x80080270: lhu         $v0, 0x30($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X30);
    // 0x80080274: addu        $v1, $s0, $v1
    ctx->r3 = ADD32(ctx->r16, ctx->r3);
    // 0x80080278: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    // 0x8008027C: lw          $v0, 0x58($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X58);
    // 0x80080280: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80080284: lw          $v1, 0x46B0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X46B0);
    // 0x80080288: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x8008028C: lhu         $v0, 0x60($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X60);
    // 0x80080290: addu        $v1, $s0, $v1
    ctx->r3 = ADD32(ctx->r16, ctx->r3);
    // 0x80080294: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x80080298: lw          $v0, 0x58($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X58);
    // 0x8008029C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x800802A0: lw          $v1, 0x46B0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X46B0);
    // 0x800802A4: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x800802A8: lhu         $v0, 0x2($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X2);
    // 0x800802AC: addu        $v1, $s0, $v1
    ctx->r3 = ADD32(ctx->r16, ctx->r3);
    // 0x800802B0: sb          $v0, 0x1C($v1)
    MEM_B(0X1C, ctx->r3) = ctx->r2;
    // 0x800802B4: lw          $v0, 0x58($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X58);
    // 0x800802B8: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x800802BC: lw          $v1, 0x46B0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X46B0);
    // 0x800802C0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x800802C4: lhu         $v0, 0x32($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X32);
    // 0x800802C8: addu        $v1, $s0, $v1
    ctx->r3 = ADD32(ctx->r16, ctx->r3);
    // 0x800802CC: sb          $v0, 0x1D($v1)
    MEM_B(0X1D, ctx->r3) = ctx->r2;
    // 0x800802D0: lw          $v0, 0x58($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X58);
    // 0x800802D4: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x800802D8: lw          $v1, 0x46B0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X46B0);
    // 0x800802DC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x800802E0: lhu         $v0, 0x64($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X64);
    // 0x800802E4: addu        $v1, $s0, $v1
    ctx->r3 = ADD32(ctx->r16, ctx->r3);
    // 0x800802E8: sb          $v0, 0x1E($v1)
    MEM_B(0X1E, ctx->r3) = ctx->r2;
    // 0x800802EC: lw          $v0, 0x58($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X58);
    // 0x800802F0: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x800802F4: lw          $v1, 0x46B0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X46B0);
    // 0x800802F8: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x800802FC: lhu         $v0, 0x4($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4);
    // 0x80080300: addu        $v1, $s0, $v1
    ctx->r3 = ADD32(ctx->r16, ctx->r3);
    // 0x80080304: sb          $v0, 0x2C($v1)
    MEM_B(0X2C, ctx->r3) = ctx->r2;
    // 0x80080308: lw          $v0, 0x58($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X58);
    // 0x8008030C: addiu       $s4, $s4, 0x30
    ctx->r20 = ADD32(ctx->r20, 0X30);
    // 0x80080310: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80080314: lw          $v1, 0x46B0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X46B0);
    // 0x80080318: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8008031C: lhu         $v0, 0x34($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X34);
    // 0x80080320: addiu       $s3, $s3, 0x3
    ctx->r19 = ADD32(ctx->r19, 0X3);
    // 0x80080324: addu        $v1, $s0, $v1
    ctx->r3 = ADD32(ctx->r16, ctx->r3);
    // 0x80080328: sb          $v0, 0x2D($v1)
    MEM_B(0X2D, ctx->r3) = ctx->r2;
    // 0x8008032C: lw          $v0, 0x58($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X58);
    // 0x80080330: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80080334: lw          $v1, 0x46B0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X46B0);
    // 0x80080338: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8008033C: lhu         $v0, 0x64($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X64);
    // 0x80080340: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x80080344: addu        $s0, $s0, $v1
    ctx->r16 = ADD32(ctx->r16, ctx->r3);
    // 0x80080348: sb          $v0, 0x2E($s0)
    MEM_B(0X2E, ctx->r16) = ctx->r2;
    // 0x8008034C: slt         $v0, $s2, $s6
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x80080350: bne         $v0, $zero, L_800801E8
    if (ctx->r2 != 0) {
        // 0x80080354: addiu       $s5, $s5, 0x30
        ctx->r21 = ADD32(ctx->r21, 0X30);
            goto L_800801E8;
    }
    // 0x80080354: addiu       $s5, $s5, 0x30
    ctx->r21 = ADD32(ctx->r21, 0X30);
    // 0x80080358: j           L_800805C8
    // 0x8008035C: nop

        goto L_800805C8;
    // 0x8008035C: nop

L_80080360:
    // 0x80080360: bne         $s3, $v0, L_800805C8
    if (ctx->r19 != ctx->r2) {
        // 0x80080364: nop
    
            goto L_800805C8;
    }
    // 0x80080364: nop

    // 0x80080368: jal         0x800281C8
    // 0x8008036C: addiu       $a0, $zero, 0x180
    ctx->r4 = ADD32(0, 0X180);
    func_800281C8_35C8(rdram, ctx);
        goto after_9;
    // 0x8008036C: addiu       $a0, $zero, 0x180
    ctx->r4 = ADD32(0, 0X180);
    after_9:
    // 0x80080370: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80080374: beq         $v0, $zero, L_80080388
    if (ctx->r2 == 0) {
        // 0x80080378: sw          $v0, 0x46B0($at)
        MEM_W(0X46B0, ctx->r1) = ctx->r2;
            goto L_80080388;
    }
    // 0x80080378: sw          $v0, 0x46B0($at)
    MEM_W(0X46B0, ctx->r1) = ctx->r2;
    // 0x8008037C: lw          $v0, 0x58($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X58);
    // 0x80080380: bne         $v0, $zero, L_8008039C
    if (ctx->r2 != 0) {
        // 0x80080384: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_8008039C;
    }
    // 0x80080384: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
L_80080388:
    // 0x80080388: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x8008038C: addiu       $v0, $v0, -0x2220
    ctx->r2 = ADD32(ctx->r2, -0X2220);
    // 0x80080390: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80080394: j           L_800805C8
    // 0x80080398: sw          $v0, 0x46B0($at)
    MEM_W(0X46B0, ctx->r1) = ctx->r2;
        goto L_800805C8;
    // 0x80080398: sw          $v0, 0x46B0($at)
    MEM_W(0X46B0, ctx->r1) = ctx->r2;
L_8008039C:
    // 0x8008039C: beq         $s6, $zero, L_800805C8
    if (ctx->r22 == 0) {
        // 0x800803A0: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_800805C8;
    }
    // 0x800803A0: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x800803A4: lui         $s7, 0x800C
    ctx->r23 = S32(0X800C << 16);
    // 0x800803A8: addiu       $s7, $s7, -0x2220
    ctx->r23 = ADD32(ctx->r23, -0X2220);
    // 0x800803AC: addiu       $s5, $s7, 0x30
    ctx->r21 = ADD32(ctx->r23, 0X30);
    // 0x800803B0: addu        $s4, $s7, $zero
    ctx->r20 = ADD32(ctx->r23, 0);
L_800803B4:
    // 0x800803B4: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x800803B8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x800803BC: lw          $a0, 0x46B0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X46B0);
    // 0x800803C0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x800803C4: sll         $s0, $s3, 4
    ctx->r16 = S32(ctx->r19 << 4);
    // 0x800803C8: jal         0x8009A3B4
    // 0x800803CC: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    memcpy_recomp(rdram, ctx);
        goto after_10;
    // 0x800803CC: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    after_10:
    // 0x800803D0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x800803D4: lw          $a0, 0x46B0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X46B0);
    // 0x800803D8: addiu       $a1, $s7, 0x10
    ctx->r5 = ADD32(ctx->r23, 0X10);
    // 0x800803DC: addu        $a1, $s0, $a1
    ctx->r5 = ADD32(ctx->r16, ctx->r5);
    // 0x800803E0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x800803E4: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    // 0x800803E8: jal         0x8009A3B4
    // 0x800803EC: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_11;
    // 0x800803EC: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    after_11:
    // 0x800803F0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x800803F4: lw          $a0, 0x46B0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X46B0);
    // 0x800803F8: addiu       $a1, $s7, 0x20
    ctx->r5 = ADD32(ctx->r23, 0X20);
    // 0x800803FC: addu        $a1, $s0, $a1
    ctx->r5 = ADD32(ctx->r16, ctx->r5);
    // 0x80080400: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80080404: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    // 0x80080408: jal         0x8009A3B4
    // 0x8008040C: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    memcpy_recomp(rdram, ctx);
        goto after_12;
    // 0x8008040C: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    after_12:
    // 0x80080410: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80080414: lw          $a0, 0x46B0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X46B0);
    // 0x80080418: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x8008041C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80080420: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    // 0x80080424: jal         0x8009A3B4
    // 0x80080428: addiu       $a0, $a0, 0x30
    ctx->r4 = ADD32(ctx->r4, 0X30);
    memcpy_recomp(rdram, ctx);
        goto after_13;
    // 0x80080428: addiu       $a0, $a0, 0x30
    ctx->r4 = ADD32(ctx->r4, 0X30);
    after_13:
    // 0x8008042C: lw          $v0, 0x58($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X58);
    // 0x80080430: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80080434: lw          $v1, 0x46B0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X46B0);
    // 0x80080438: sll         $a0, $s2, 1
    ctx->r4 = S32(ctx->r18 << 1);
    // 0x8008043C: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x80080440: lbu         $v0, 0x1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1);
    // 0x80080444: addu        $v1, $s0, $v1
    ctx->r3 = ADD32(ctx->r16, ctx->r3);
    // 0x80080448: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8008044C: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x80080450: lw          $v0, 0x58($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X58);
    // 0x80080454: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80080458: lw          $v1, 0x46B0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X46B0);
    // 0x8008045C: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x80080460: lbu         $v0, 0x31($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X31);
    // 0x80080464: addu        $v1, $s0, $v1
    ctx->r3 = ADD32(ctx->r16, ctx->r3);
    // 0x80080468: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8008046C: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    // 0x80080470: lw          $v0, 0x58($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X58);
    // 0x80080474: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80080478: lw          $v1, 0x46B0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X46B0);
    // 0x8008047C: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x80080480: lbu         $v0, 0x61($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X61);
    // 0x80080484: addu        $v1, $s0, $v1
    ctx->r3 = ADD32(ctx->r16, ctx->r3);
    // 0x80080488: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8008048C: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x80080490: lw          $v0, 0x58($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X58);
    // 0x80080494: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80080498: lw          $v1, 0x46B0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X46B0);
    // 0x8008049C: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x800804A0: lbu         $v0, 0x3($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3);
    // 0x800804A4: addu        $v1, $s0, $v1
    ctx->r3 = ADD32(ctx->r16, ctx->r3);
    // 0x800804A8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800804AC: sb          $v0, 0x1C($v1)
    MEM_B(0X1C, ctx->r3) = ctx->r2;
    // 0x800804B0: lw          $v0, 0x58($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X58);
    // 0x800804B4: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x800804B8: lw          $v1, 0x46B0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X46B0);
    // 0x800804BC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x800804C0: lbu         $v0, 0x33($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X33);
    // 0x800804C4: addu        $v1, $s0, $v1
    ctx->r3 = ADD32(ctx->r16, ctx->r3);
    // 0x800804C8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x800804CC: sb          $v0, 0x1D($v1)
    MEM_B(0X1D, ctx->r3) = ctx->r2;
    // 0x800804D0: lw          $v0, 0x58($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X58);
    // 0x800804D4: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x800804D8: lw          $v1, 0x46B0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X46B0);
    // 0x800804DC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x800804E0: lbu         $v0, 0x65($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X65);
    // 0x800804E4: addu        $v1, $s0, $v1
    ctx->r3 = ADD32(ctx->r16, ctx->r3);
    // 0x800804E8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x800804EC: sb          $v0, 0x1E($v1)
    MEM_B(0X1E, ctx->r3) = ctx->r2;
    // 0x800804F0: lw          $v0, 0x58($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X58);
    // 0x800804F4: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x800804F8: lw          $v1, 0x46B0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X46B0);
    // 0x800804FC: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x80080500: lbu         $v0, 0x5($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X5);
    // 0x80080504: addu        $v1, $s0, $v1
    ctx->r3 = ADD32(ctx->r16, ctx->r3);
    // 0x80080508: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8008050C: sb          $v0, 0x2C($v1)
    MEM_B(0X2C, ctx->r3) = ctx->r2;
    // 0x80080510: lw          $v0, 0x58($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X58);
    // 0x80080514: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80080518: lw          $v1, 0x46B0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X46B0);
    // 0x8008051C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80080520: lbu         $v0, 0x35($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X35);
    // 0x80080524: addu        $v1, $s0, $v1
    ctx->r3 = ADD32(ctx->r16, ctx->r3);
    // 0x80080528: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8008052C: sb          $v0, 0x2D($v1)
    MEM_B(0X2D, ctx->r3) = ctx->r2;
    // 0x80080530: lw          $v0, 0x58($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X58);
    // 0x80080534: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80080538: lw          $v1, 0x46B0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X46B0);
    // 0x8008053C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80080540: lbu         $v0, 0x65($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X65);
    // 0x80080544: addu        $v1, $s0, $v1
    ctx->r3 = ADD32(ctx->r16, ctx->r3);
    // 0x80080548: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8008054C: sb          $v0, 0x2E($v1)
    MEM_B(0X2E, ctx->r3) = ctx->r2;
    // 0x80080550: lw          $v0, 0x58($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X58);
    // 0x80080554: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80080558: lw          $v1, 0x46B0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X46B0);
    // 0x8008055C: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x80080560: lbu         $v0, 0x7($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X7);
    // 0x80080564: addu        $v1, $s0, $v1
    ctx->r3 = ADD32(ctx->r16, ctx->r3);
    // 0x80080568: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8008056C: sb          $v0, 0x3C($v1)
    MEM_B(0X3C, ctx->r3) = ctx->r2;
    // 0x80080570: lw          $v0, 0x58($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X58);
    // 0x80080574: addiu       $s4, $s4, 0x40
    ctx->r20 = ADD32(ctx->r20, 0X40);
    // 0x80080578: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8008057C: lw          $v1, 0x46B0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X46B0);
    // 0x80080580: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80080584: lbu         $v0, 0x37($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X37);
    // 0x80080588: addiu       $s3, $s3, 0x4
    ctx->r19 = ADD32(ctx->r19, 0X4);
    // 0x8008058C: addu        $v1, $s0, $v1
    ctx->r3 = ADD32(ctx->r16, ctx->r3);
    // 0x80080590: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80080594: sb          $v0, 0x3D($v1)
    MEM_B(0X3D, ctx->r3) = ctx->r2;
    // 0x80080598: lw          $v0, 0x58($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X58);
    // 0x8008059C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x800805A0: lw          $v1, 0x46B0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X46B0);
    // 0x800805A4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x800805A8: lbu         $v0, 0x67($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X67);
    // 0x800805AC: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x800805B0: addu        $s0, $s0, $v1
    ctx->r16 = ADD32(ctx->r16, ctx->r3);
    // 0x800805B4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x800805B8: sb          $v0, 0x3E($s0)
    MEM_B(0X3E, ctx->r16) = ctx->r2;
    // 0x800805BC: slt         $v0, $s2, $s6
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x800805C0: bne         $v0, $zero, L_800803B4
    if (ctx->r2 != 0) {
        // 0x800805C4: addiu       $s5, $s5, 0x40
        ctx->r21 = ADD32(ctx->r21, 0X40);
            goto L_800803B4;
    }
    // 0x800805C4: addiu       $s5, $s5, 0x40
    ctx->r21 = ADD32(ctx->r21, 0X40);
L_800805C8:
    // 0x800805C8: lw          $ra, 0x6C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X6C);
    // 0x800805CC: lw          $fp, 0x68($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X68);
    // 0x800805D0: lw          $s7, 0x64($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X64);
    // 0x800805D4: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x800805D8: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x800805DC: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x800805E0: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x800805E4: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x800805E8: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x800805EC: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x800805F0: jr          $ra
    // 0x800805F4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    TRACE_RETURN()
    return;
    // 0x800805F4: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_8004DA90_28E90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004DA90: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8004DA94: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8004DA98: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8004DA9C: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x8004DAA0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8004DAA4: lh          $v1, 0x56($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X56);
    // 0x8004DAA8: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x8004DAAC: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    // 0x8004DAB0: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x8004DAB4: sw          $a3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r7;
    // 0x8004DAB8: sll         $a3, $a2, 16
    ctx->r7 = S32(ctx->r6 << 16);
    // 0x8004DABC: sra         $a2, $v0, 16
    ctx->r6 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8004DAC0: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    // 0x8004DAC4: jal         0x8004DC2C
    // 0x8004DAC8: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    func_8004DC2C_2902C(rdram, ctx);
        goto after_0;
    // 0x8004DAC8: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    after_0:
    // 0x8004DACC: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x8004DAD0: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x8004DAD4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8004DAD8: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8004DADC: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x8004DAE0: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8004DAE4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8004DAE8: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8004DAEC: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x8004DAF0: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x8004DAF4: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8004DAF8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8004DAFC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8004DB00: jal         0x8004DD04
    // 0x8004DB04: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    func_8004DD04_29104(rdram, ctx);
        goto after_1;
    // 0x8004DB04: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    after_1:
    // 0x8004DB08: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8004DB0C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8004DB10: jr          $ra
    // 0x8004DB14: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8004DB14: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8007E5F8_599F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007E5F8: lui         $t2, 0x800C
    ctx->r10 = S32(0X800C << 16);
    // 0x8007E5FC: lw          $t2, -0x2660($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X2660);
    // 0x8007E600: lui         $v0, 0x8019
    ctx->r2 = S32(0X8019 << 16);
    // 0x8007E604: lw          $v0, 0x3C30($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3C30);
    // 0x8007E608: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x8007E60C: lw          $a2, -0x265C($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X265C);
    // 0x8007E610: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8007E614: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8007E618: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8007E61C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x8007E620: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8007E624: beq         $v0, $a1, L_8007E678
    if (ctx->r2 == ctx->r5) {
        // 0x8007E628: sw          $s1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r17;
            goto L_8007E678;
    }
    // 0x8007E628: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8007E62C: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8007E630: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x8007E634: lui         $a0, 0xDB06
    ctx->r4 = S32(0XDB06 << 16);
    // 0x8007E638: ori         $a0, $a0, 0x14
    ctx->r4 = ctx->r4 | 0X14;
    // 0x8007E63C: lui         $at, 0x8019
    ctx->r1 = S32(0X8019 << 16);
    // 0x8007E640: sw          $a1, 0x3C30($at)
    MEM_W(0X3C30, ctx->r1) = ctx->r5;
    // 0x8007E644: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x8007E648: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007E64C: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007E650: lui         $v0, 0xDE00
    ctx->r2 = S32(0XDE00 << 16);
    // 0x8007E654: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x8007E658: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x8007E65C: addiu       $v0, $v0, -0x2628
    ctx->r2 = ADD32(ctx->r2, -0X2628);
    // 0x8007E660: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x8007E664: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
    // 0x8007E668: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007E66C: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007E670: sw          $a0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r4;
    // 0x8007E674: sw          $a2, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r6;
L_8007E678:
    // 0x8007E678: lui         $a0, 0xDB06
    ctx->r4 = S32(0XDB06 << 16);
    // 0x8007E67C: ori         $a0, $a0, 0x10
    ctx->r4 = ctx->r4 | 0X10;
    // 0x8007E680: lui         $a1, 0xDB06
    ctx->r5 = S32(0XDB06 << 16);
    // 0x8007E684: ori         $a1, $a1, 0xC
    ctx->r5 = ctx->r5 | 0XC;
    // 0x8007E688: lui         $a2, 0xDB06
    ctx->r6 = S32(0XDB06 << 16);
    // 0x8007E68C: ori         $a2, $a2, 0x8
    ctx->r6 = ctx->r6 | 0X8;
    // 0x8007E690: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x8007E694: lui         $a3, 0xDA38
    ctx->r7 = S32(0XDA38 << 16);
    // 0x8007E698: ori         $a3, $a3, 0x3
    ctx->r7 = ctx->r7 | 0X3;
    // 0x8007E69C: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8007E6A0: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x8007E6A4: lw          $t1, 0xC($v0)
    ctx->r9 = MEM_W(ctx->r2, 0XC);
    // 0x8007E6A8: lui         $t0, 0xE200
    ctx->r8 = S32(0XE200 << 16);
    // 0x8007E6AC: ori         $t0, $t0, 0x1C
    ctx->r8 = ctx->r8 | 0X1C;
    // 0x8007E6B0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007E6B4: sh          $zero, -0x44E6($at)
    MEM_H(-0X44E6, ctx->r1) = 0;
    // 0x8007E6B8: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007E6BC: sh          $zero, -0x44E8($at)
    MEM_H(-0X44E8, ctx->r1) = 0;
    // 0x8007E6C0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007E6C4: sw          $zero, -0x44E4($at)
    MEM_W(-0X44E4, ctx->r1) = 0;
    // 0x8007E6C8: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007E6CC: sw          $zero, -0x44DC($at)
    MEM_W(-0X44DC, ctx->r1) = 0;
    // 0x8007E6D0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007E6D4: sb          $zero, -0x44E0($at)
    MEM_B(-0X44E0, ctx->r1) = 0;
    // 0x8007E6D8: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007E6DC: sb          $zero, -0x44D8($at)
    MEM_B(-0X44D8, ctx->r1) = 0;
    // 0x8007E6E0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007E6E4: sb          $zero, -0x44D7($at)
    MEM_B(-0X44D7, ctx->r1) = 0;
    // 0x8007E6E8: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007E6EC: sb          $zero, -0x44D6($at)
    MEM_B(-0X44D6, ctx->r1) = 0;
    // 0x8007E6F0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007E6F4: sb          $zero, -0x44D5($at)
    MEM_B(-0X44D5, ctx->r1) = 0;
    // 0x8007E6F8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x8007E6FC: addiu       $v0, $v0, -0x25A8
    ctx->r2 = ADD32(ctx->r2, -0X25A8);
    // 0x8007E700: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x8007E704: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x8007E708: addiu       $v0, $v0, -0x24A8
    ctx->r2 = ADD32(ctx->r2, -0X24A8);
    // 0x8007E70C: sw          $v0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r2;
    // 0x8007E710: sw          $v0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r2;
    // 0x8007E714: lui         $v0, 0xDE00
    ctx->r2 = S32(0XDE00 << 16);
    // 0x8007E718: sw          $v0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r2;
    // 0x8007E71C: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x8007E720: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    // 0x8007E724: sw          $a1, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r5;
    // 0x8007E728: sw          $a2, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r6;
    // 0x8007E72C: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x8007E730: sw          $a3, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r7;
    // 0x8007E734: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8007E738: lui         $a1, 0xC810
    ctx->r5 = S32(0XC810 << 16);
    // 0x8007E73C: ori         $a1, $a1, 0x49D8
    ctx->r5 = ctx->r5 | 0X49D8;
    // 0x8007E740: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8007E744: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007E748: sb          $v0, -0x44E0($at)
    MEM_B(-0X44E0, ctx->r1) = ctx->r2;
    // 0x8007E74C: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x8007E750: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007E754: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007E758: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
    // 0x8007E75C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007E760: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007E764: addiu       $v0, $v1, 0x18
    ctx->r2 = ADD32(ctx->r3, 0X18);
    // 0x8007E768: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007E76C: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007E770: addiu       $v0, $v1, 0x20
    ctx->r2 = ADD32(ctx->r3, 0X20);
    // 0x8007E774: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007E778: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007E77C: addiu       $v0, $v1, 0x28
    ctx->r2 = ADD32(ctx->r3, 0X28);
    // 0x8007E780: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007E784: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007E788: addiu       $v0, $v1, 0x30
    ctx->r2 = ADD32(ctx->r3, 0X30);
    // 0x8007E78C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007E790: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007E794: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x8007E798: sw          $v0, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r2;
    // 0x8007E79C: addiu       $v0, $v1, 0x38
    ctx->r2 = ADD32(ctx->r3, 0X38);
    // 0x8007E7A0: sw          $zero, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = 0;
    // 0x8007E7A4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007E7A8: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007E7AC: sw          $a0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r4;
    // 0x8007E7B0: sw          $t0, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r8;
    // 0x8007E7B4: sw          $a1, 0x34($v1)
    MEM_W(0X34, ctx->r3) = ctx->r5;
    // 0x8007E7B8: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8007E7BC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8007E7C0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007E7C4: sw          $v0, -0x44E4($at)
    MEM_W(-0X44E4, ctx->r1) = ctx->r2;
    // 0x8007E7C8: jal         0x8007BFC8
    // 0x8007E7CC: addu        $s1, $t2, $t1
    ctx->r17 = ADD32(ctx->r10, ctx->r9);
    func_8007BFC8_573C8(rdram, ctx);
        goto after_0;
    // 0x8007E7CC: addu        $s1, $t2, $t1
    ctx->r17 = ADD32(ctx->r10, ctx->r9);
    after_0:
    // 0x8007E7D0: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8007E7D4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8007E7D8: addiu       $s0, $sp, 0x10
    ctx->r16 = ADD32(ctx->r29, 0X10);
    // 0x8007E7DC: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x8007E7E0: andi        $a1, $v0, 0x81F
    ctx->r5 = ctx->r2 & 0X81F;
    // 0x8007E7E4: andi        $v1, $v0, 0xF
    ctx->r3 = ctx->r2 & 0XF;
    // 0x8007E7E8: sll         $t0, $v1, 6
    ctx->r8 = S32(ctx->r3 << 6);
    // 0x8007E7EC: andi        $v1, $v0, 0x10
    ctx->r3 = ctx->r2 & 0X10;
    // 0x8007E7F0: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8007E7F4: andi        $v0, $v0, 0x800
    ctx->r2 = ctx->r2 & 0X800;
    // 0x8007E7F8: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
    // 0x8007E7FC: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007E800: sh          $a1, -0x44E8($at)
    MEM_H(-0X44E8, ctx->r1) = ctx->r5;
    // 0x8007E804: bgez        $a0, L_8007E81C
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8007E808: or          $v1, $v1, $v0
        ctx->r3 = ctx->r3 | ctx->r2;
            goto L_8007E81C;
    }
    // 0x8007E808: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8007E80C: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8007E810: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x8007E814: j           L_8007E828
    // 0x8007E818: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
        goto L_8007E828;
    // 0x8007E818: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
L_8007E81C:
    // 0x8007E81C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8007E820: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x8007E824: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
L_8007E828:
    // 0x8007E828: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x8007E82C: lh          $a2, 0x0($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X0);
    // 0x8007E830: lh          $a3, 0x12($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X12);
    // 0x8007E834: addu        $a0, $t0, $zero
    ctx->r4 = ADD32(ctx->r8, 0);
    // 0x8007E838: jal         0x8002C9BC
    // 0x8007E83C: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    func_8002C9BC_7DBC(rdram, ctx);
        goto after_1;
    // 0x8007E83C: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    after_1:
    // 0x8007E840: beq         $v0, $zero, L_8007E8A0
    if (ctx->r2 == 0) {
        // 0x8007E844: nop
    
            goto L_8007E8A0;
    }
    // 0x8007E844: nop

    // 0x8007E848: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8007E84C: lw          $a0, -0x6F10($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X6F10);
    // 0x8007E850: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x8007E854: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    // 0x8007E858: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007E85C: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007E860: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x8007E864: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x8007E868: addiu       $v0, $a0, 0x10
    ctx->r2 = ADD32(ctx->r4, 0X10);
    // 0x8007E86C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007E870: sw          $v1, -0x44EC($at)
    MEM_W(-0X44EC, ctx->r1) = ctx->r3;
    // 0x8007E874: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x8007E878: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007E87C: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007E880: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
    // 0x8007E884: sw          $v1, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r3;
    // 0x8007E888: lui         $v1, 0xFD48
    ctx->r3 = S32(0XFD48 << 16);
    // 0x8007E88C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8007E890: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8007E894: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8007E898: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8007E89C: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
L_8007E8A0:
    // 0x8007E8A0: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8007E8A4: lw          $v0, -0x6F10($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6F10);
    // 0x8007E8A8: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x8007E8AC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007E8B0: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x8007E8B4: lui         $v1, 0xDE00
    ctx->r3 = S32(0XDE00 << 16);
    // 0x8007E8B8: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x8007E8BC: sw          $s1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r17;
    // 0x8007E8C0: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8007E8C4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8007E8C8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8007E8CC: jr          $ra
    // 0x8007E8D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8007E8D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8008FBBC_6AFBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008FBBC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8008FBC0: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8008FBC4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8008FBC8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8008FBCC: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8008FBD0: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8008FBD4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8008FBD8: lw          $v0, 0x84($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X84);
    // 0x8008FBDC: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x8008FBE0: sltiu       $a3, $a3, 0x1
    ctx->r7 = ctx->r7 < 0X1 ? 1 : 0;
    // 0x8008FBE4: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x8008FBE8: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x8008FBEC: or          $v0, $v0, $a3
    ctx->r2 = ctx->r2 | ctx->r7;
    // 0x8008FBF0: beq         $v0, $zero, L_8008FC00
    if (ctx->r2 == 0) {
        // 0x8008FBF4: addu        $s3, $a1, $zero
        ctx->r19 = ADD32(ctx->r5, 0);
            goto L_8008FC00;
    }
    // 0x8008FBF4: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x8008FBF8: j           L_8008FDC0
    // 0x8008FBFC: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
        goto L_8008FDC0;
    // 0x8008FBFC: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
L_8008FC00:
    // 0x8008FC00: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8008FC04: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8008FC08: jal         0x80090690
    // 0x8008FC0C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    func_80090690_6BA90(rdram, ctx);
        goto after_0;
    // 0x8008FC0C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    after_0:
    // 0x8008FC10: lw          $v1, 0x78($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X78);
    // 0x8008FC14: beq         $v1, $zero, L_8008FD88
    if (ctx->r3 == 0) {
        // 0x8008FC18: addu        $s2, $v0, $zero
        ctx->r18 = ADD32(ctx->r2, 0);
            goto L_8008FD88;
    }
    // 0x8008FC18: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x8008FC1C: lh          $v0, 0x58($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X58);
    // 0x8008FC20: lh          $v1, 0x5A($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X5A);
    // 0x8008FC24: sw          $zero, 0x78($s1)
    MEM_W(0X78, ctx->r17) = 0;
    // 0x8008FC28: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8008FC2C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008FC30: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8008FC34: lh          $v0, -0x1000($at)
    ctx->r2 = MEM_H(ctx->r1, -0X1000);
    // 0x8008FC38: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8008FC3C: mflo        $v1
    ctx->r3 = lo;
    // 0x8008FC40: lh          $v0, 0x5C($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X5C);
    // 0x8008FC44: lw          $a0, 0x74($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X74);
    // 0x8008FC48: mtc1        $v0, $f12
    ctx->f12.u32l = ctx->r2;
    // 0x8008FC4C: nop

    // 0x8008FC50: cvt.d.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.d = CVT_D_W(ctx->f12.u32l);
    // 0x8008FC54: sra         $v1, $v1, 15
    ctx->r3 = S32(SIGNED(ctx->r3) >> 15);
    // 0x8008FC58: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8008FC5C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8008FC60: mtc1        $v0, $f14
    ctx->f14.u32l = ctx->r2;
    // 0x8008FC64: nop

    // 0x8008FC68: cvt.d.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.d = CVT_D_W(ctx->f14.u32l);
    // 0x8008FC6C: addiu       $v0, $s1, 0x64
    ctx->r2 = ADD32(ctx->r17, 0X64);
    // 0x8008FC70: sh          $v1, 0x68($s1)
    MEM_H(0X68, ctx->r17) = ctx->r3;
    // 0x8008FC74: sw          $a0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r4;
    // 0x8008FC78: jal         0x8008FDDC
    // 0x8008FC7C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_8008FDDC_6B1DC(rdram, ctx);
        goto after_1;
    // 0x8008FC7C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_1:
    // 0x8008FC80: lh          $a0, 0x58($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X58);
    // 0x8008FC84: lh          $v1, 0x5A($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X5A);
    // 0x8008FC88: sh          $v0, 0x66($s1)
    MEM_H(0X66, ctx->r17) = ctx->r2;
    // 0x8008FC8C: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x8008FC90: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8008FC94: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8008FC98: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008FC9C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8008FCA0: lh          $v0, -0x1000($at)
    ctx->r2 = MEM_H(ctx->r1, -0X1000);
    // 0x8008FCA4: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8008FCA8: mflo        $v1
    ctx->r3 = lo;
    // 0x8008FCAC: lh          $v0, 0x5E($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X5E);
    // 0x8008FCB0: lw          $a0, 0x74($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X74);
    // 0x8008FCB4: mtc1        $v0, $f12
    ctx->f12.u32l = ctx->r2;
    // 0x8008FCB8: nop

    // 0x8008FCBC: cvt.d.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.d = CVT_D_W(ctx->f12.u32l);
    // 0x8008FCC0: sra         $v1, $v1, 15
    ctx->r3 = S32(SIGNED(ctx->r3) >> 15);
    // 0x8008FCC4: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8008FCC8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8008FCCC: mtc1        $v0, $f14
    ctx->f14.u32l = ctx->r2;
    // 0x8008FCD0: nop

    // 0x8008FCD4: cvt.d.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.d = CVT_D_W(ctx->f14.u32l);
    // 0x8008FCD8: addiu       $v0, $s1, 0x6A
    ctx->r2 = ADD32(ctx->r17, 0X6A);
    // 0x8008FCDC: sh          $v1, 0x6E($s1)
    MEM_H(0X6E, ctx->r17) = ctx->r3;
    // 0x8008FCE0: sw          $a0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r4;
    // 0x8008FCE4: jal         0x8008FDDC
    // 0x8008FCE8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_8008FDDC_6B1DC(rdram, ctx);
        goto after_2;
    // 0x8008FCE8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_2:
    // 0x8008FCEC: sh          $v0, 0x6C($s1)
    MEM_H(0X6C, ctx->r17) = ctx->r2;
    // 0x8008FCF0: lhu         $v0, 0x68($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X68);
    // 0x8008FCF4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8008FCF8: lui         $v1, 0x900
    ctx->r3 = S32(0X900 << 16);
    // 0x8008FCFC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8008FD00: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x8008FD04: lhu         $v0, 0x66($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X66);
    // 0x8008FD08: lhu         $v1, 0x64($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X64);
    // 0x8008FD0C: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x8008FD10: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8008FD14: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8008FD18: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x8008FD1C: lhu         $v0, 0x5C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X5C);
    // 0x8008FD20: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8008FD24: lui         $v1, 0x906
    ctx->r3 = S32(0X906 << 16);
    // 0x8008FD28: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8008FD2C: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x8008FD30: lhu         $v0, 0x60($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X60);
    // 0x8008FD34: lhu         $v1, 0x62($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X62);
    // 0x8008FD38: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x8008FD3C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8008FD40: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8008FD44: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x8008FD48: lhu         $v0, 0x6E($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X6E);
    // 0x8008FD4C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8008FD50: lui         $v1, 0x904
    ctx->r3 = S32(0X904 << 16);
    // 0x8008FD54: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8008FD58: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x8008FD5C: lhu         $v0, 0x6C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X6C);
    // 0x8008FD60: lhu         $v1, 0x6A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X6A);
    // 0x8008FD64: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x8008FD68: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8008FD6C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8008FD70: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x8008FD74: lhu         $v0, 0x5E($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X5E);
    // 0x8008FD78: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
    // 0x8008FD7C: lui         $v1, 0x301
    ctx->r3 = S32(0X301 << 16);
    // 0x8008FD80: j           L_8008FD90
    // 0x8008FD84: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
        goto L_8008FD90;
    // 0x8008FD84: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
L_8008FD88:
    // 0x8008FD88: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
    // 0x8008FD8C: lui         $v0, 0x300
    ctx->r2 = S32(0X300 << 16);
L_8008FD90:
    // 0x8008FD90: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x8008FD94: lw          $a0, 0x54($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X54);
    // 0x8008FD98: jal         0x80099BB0
    // 0x8008FD9C: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_3;
    // 0x8008FD9C: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    after_3:
    // 0x8008FDA0: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x8008FDA4: lhu         $v0, 0x0($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X0);
    // 0x8008FDA8: addiu       $v0, $v0, 0x170
    ctx->r2 = ADD32(ctx->r2, 0X170);
    // 0x8008FDAC: sh          $v0, 0x0($s3)
    MEM_H(0X0, ctx->r19) = ctx->r2;
    // 0x8008FDB0: lw          $v1, 0x70($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X70);
    // 0x8008FDB4: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x8008FDB8: addiu       $v1, $v1, 0xB8
    ctx->r3 = ADD32(ctx->r3, 0XB8);
    // 0x8008FDBC: sw          $v1, 0x70($s1)
    MEM_W(0X70, ctx->r17) = ctx->r3;
L_8008FDC0:
    // 0x8008FDC0: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8008FDC4: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8008FDC8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8008FDCC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8008FDD0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8008FDD4: jr          $ra
    // 0x8008FDD8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8008FDD8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80071A10_4CE10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80071A10: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80071A14: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80071A18: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x80071A1C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80071A20: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80071A24: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
L_80071A28:
    // 0x80071A28: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80071A2C: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    // 0x80071A30: lw          $a0, 0x5088($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5088);
    // 0x80071A34: beq         $a0, $zero, L_80071A50
    if (ctx->r4 == 0) {
        // 0x80071A38: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80071A50;
    }
    // 0x80071A38: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80071A3C: jal         0x80039F18
    // 0x80071A40: nop

    func_80039F18_15318(rdram, ctx);
        goto after_0;
    // 0x80071A40: nop

    after_0:
    // 0x80071A44: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80071A48: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x80071A4C: sh          $v0, 0x5086($at)
    MEM_H(0X5086, ctx->r1) = ctx->r2;
L_80071A50:
    // 0x80071A50: slti        $v0, $s1, 0x6B0
    ctx->r2 = SIGNED(ctx->r17) < 0X6B0 ? 1 : 0;
    // 0x80071A54: bne         $v0, $zero, L_80071A28
    if (ctx->r2 != 0) {
        // 0x80071A58: addiu       $s0, $s0, 0xC
        ctx->r16 = ADD32(ctx->r16, 0XC);
            goto L_80071A28;
    }
    // 0x80071A58: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x80071A5C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80071A60: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80071A64: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80071A68: jr          $ra
    // 0x80071A6C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80071A6C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800260A4_14A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800260A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800260A8: jr          $ra
    // 0x800260AC: sh          $v0, -0x24($a0)
    MEM_H(-0X24, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x800260AC: sh          $v0, -0x24($a0)
    MEM_H(-0X24, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_80034BD0_FFD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80034BD0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80034BD4: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x80034BD8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80034BDC: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x80034BE0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80034BE4: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x80034BE8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80034BEC: addu        $s2, $a3, $zero
    ctx->r18 = ADD32(ctx->r7, 0);
    // 0x80034BF0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80034BF4: addiu       $a0, $a0, 0x43C0
    ctx->r4 = ADD32(ctx->r4, 0X43C0);
    // 0x80034BF8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80034BFC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80034C00: jal         0x8009A3B4
    // 0x80034C04: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80034C04: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_0:
    // 0x80034C08: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034C0C: sw          $s0, 0x4378($at)
    MEM_W(0X4378, ctx->r1) = ctx->r16;
    // 0x80034C10: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034C14: sw          $s1, 0x437C($at)
    MEM_W(0X437C, ctx->r1) = ctx->r17;
    // 0x80034C18: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034C1C: sw          $s2, 0x4380($at)
    MEM_W(0X4380, ctx->r1) = ctx->r18;
    // 0x80034C20: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80034C24: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80034C28: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80034C2C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80034C30: jr          $ra
    // 0x80034C34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80034C34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8007B270_56670(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007B270: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x8007B274: lui         $a1, 0x3D48
    ctx->r5 = S32(0X3D48 << 16);
    // 0x8007B278: ori         $a1, $a1, 0x2C
    ctx->r5 = ctx->r5 | 0X2C;
    // 0x8007B27C: lui         $a0, 0x2EC0
    ctx->r4 = S32(0X2EC0 << 16);
    // 0x8007B280: lbu         $v1, 0x0($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X0);
    // 0x8007B284: lbu         $a2, 0x3($a3)
    ctx->r6 = MEM_BU(ctx->r7, 0X3);
    // 0x8007B288: ori         $a0, $a0, 0x6060
    ctx->r4 = ctx->r4 | 0X6060;
    // 0x8007B28C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8007B290: sh          $v0, 0x24($a3)
    MEM_H(0X24, ctx->r7) = ctx->r2;
    // 0x8007B294: addiu       $v0, $zero, -0x80
    ctx->r2 = ADD32(0, -0X80);
    // 0x8007B298: sw          $a1, 0x14($a3)
    MEM_W(0X14, ctx->r7) = ctx->r5;
    // 0x8007B29C: sw          $a0, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->r4;
    // 0x8007B2A0: sb          $v0, 0xC($a3)
    MEM_B(0XC, ctx->r7) = ctx->r2;
    // 0x8007B2A4: sb          $zero, 0xD($a3)
    MEM_B(0XD, ctx->r7) = 0;
    // 0x8007B2A8: ori         $v1, $v1, 0x22
    ctx->r3 = ctx->r3 | 0X22;
    // 0x8007B2AC: beq         $a2, $zero, L_8007B304
    if (ctx->r6 == 0) {
        // 0x8007B2B0: sb          $v1, 0x0($a3)
        MEM_B(0X0, ctx->r7) = ctx->r3;
            goto L_8007B304;
    }
    // 0x8007B2B0: sb          $v1, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r3;
    // 0x8007B2B4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x8007B2B8: lbu         $v0, -0x2D54($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X2D54);
    // 0x8007B2BC: lb          $v1, 0xD($a3)
    ctx->r3 = MEM_B(ctx->r7, 0XD);
    // 0x8007B2C0: sb          $v0, 0xE($a3)
    MEM_B(0XE, ctx->r7) = ctx->r2;
    // 0x8007B2C4: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8007B2C8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8007B2CC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8007B2D0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x8007B2D4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8007B2D8: lhu         $v0, -0x2D58($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X2D58);
    // 0x8007B2DC: lb          $v1, 0xD($a3)
    ctx->r3 = MEM_B(ctx->r7, 0XD);
    // 0x8007B2E0: sb          $v0, 0x22($a3)
    MEM_B(0X22, ctx->r7) = ctx->r2;
    // 0x8007B2E4: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8007B2E8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8007B2EC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8007B2F0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x8007B2F4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8007B2F8: lhu         $v0, -0x2D56($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X2D56);
    // 0x8007B2FC: j           L_8007B350
    // 0x8007B300: sb          $v0, 0x23($a3)
    MEM_B(0X23, ctx->r7) = ctx->r2;
        goto L_8007B350;
    // 0x8007B300: sb          $v0, 0x23($a3)
    MEM_B(0X23, ctx->r7) = ctx->r2;
L_8007B304:
    // 0x8007B304: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x8007B308: lbu         $v0, -0x2D6C($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X2D6C);
    // 0x8007B30C: lb          $v1, 0xD($a3)
    ctx->r3 = MEM_B(ctx->r7, 0XD);
    // 0x8007B310: sb          $v0, 0xE($a3)
    MEM_B(0XE, ctx->r7) = ctx->r2;
    // 0x8007B314: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8007B318: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8007B31C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8007B320: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x8007B324: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8007B328: lhu         $v0, -0x2D70($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X2D70);
    // 0x8007B32C: lb          $v1, 0xD($a3)
    ctx->r3 = MEM_B(ctx->r7, 0XD);
    // 0x8007B330: sb          $v0, 0x22($a3)
    MEM_B(0X22, ctx->r7) = ctx->r2;
    // 0x8007B334: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8007B338: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8007B33C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8007B340: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x8007B344: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8007B348: lhu         $v0, -0x2D6E($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X2D6E);
    // 0x8007B34C: sb          $v0, 0x23($a3)
    MEM_B(0X23, ctx->r7) = ctx->r2;
L_8007B350:
    // 0x8007B350: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8007B354: sb          $v0, 0x8($a3)
    MEM_B(0X8, ctx->r7) = ctx->r2;
    // 0x8007B358: jr          $ra
    // 0x8007B35C: sb          $zero, 0xB($a3)
    MEM_B(0XB, ctx->r7) = 0;
    TRACE_RETURN()
    return;
    // 0x8007B35C: sb          $zero, 0xB($a3)
    MEM_B(0XB, ctx->r7) = 0;
;}
RECOMP_FUNC void func_80059AF0_34EF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80059AF0: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80059AF4: lbu         $v1, -0x3E3F($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3E3F);
    // 0x80059AF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80059AFC: sltiu       $v0, $v1, 0xC
    ctx->r2 = ctx->r3 < 0XC ? 1 : 0;
    // 0x80059B00: beq         $v0, $zero, L_80059DB0
    if (ctx->r2 == 0) {
        // 0x80059B04: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_80059DB0;
    }
    // 0x80059B04: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80059B08: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80059B0C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80059B10: addu        $at, $at, $v0
    gpr jr_addend_80059B18 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80059B14: lw          $v0, 0x25B8($at)
    ctx->r2 = ADD32(ctx->r1, 0X25B8);
    // 0x80059B18: jr          $v0
    // 0x80059B1C: nop

    switch (jr_addend_80059B18 >> 2) {
        case 0: goto L_80059B20; break;
        case 1: goto L_80059E70; break;
        case 2: goto L_80059BD4; break;
        case 3: goto L_80059C0C; break;
        case 4: goto L_80059C28; break;
        case 5: goto L_80059CA0; break;
        case 6: goto L_80059D5C; break;
        case 7: goto L_80059D6C; break;
        case 8: goto L_80059DB0; break;
        case 9: goto L_80059DC8; break;
        case 10: goto L_80059E70; break;
        case 11: goto L_80059EB4; break;
        default: switch_error(__func__, 0x80059B18, 0x800D25B8);
    }
    // 0x80059B1C: nop

L_80059B20:
    // 0x80059B20: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80059B24: addiu       $a0, $a0, -0x3E18
    ctx->r4 = ADD32(ctx->r4, -0X3E18);
    // 0x80059B28: addiu       $a1, $a0, -0x1C
    ctx->r5 = ADD32(ctx->r4, -0X1C);
    // 0x80059B2C: jal         0x8009A3B4
    // 0x80059B30: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80059B30: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_0:
    // 0x80059B34: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80059B38: lw          $v0, -0x3E24($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3E24);
    // 0x80059B3C: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x80059B40: lw          $a1, -0x3E20($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3E20);
    // 0x80059B44: lui         $a2, 0x801C
    ctx->r6 = S32(0X801C << 16);
    // 0x80059B48: lw          $a2, -0x3E1C($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3E1C);
    // 0x80059B4C: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x80059B50: lw          $v1, -0x484C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X484C);
    // 0x80059B54: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80059B58: sw          $v0, -0x3E08($at)
    MEM_W(-0X3E08, ctx->r1) = ctx->r2;
    // 0x80059B5C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80059B60: sw          $a1, -0x3E04($at)
    MEM_W(-0X3E04, ctx->r1) = ctx->r5;
    // 0x80059B64: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80059B68: sw          $a2, -0x3E00($at)
    MEM_W(-0X3E00, ctx->r1) = ctx->r6;
    // 0x80059B6C: lh          $v0, 0x14($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X14);
    // 0x80059B70: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80059B74: sw          $v0, -0x3DFC($at)
    MEM_W(-0X3DFC, ctx->r1) = ctx->r2;
    // 0x80059B78: lh          $v0, 0x16($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X16);
    // 0x80059B7C: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80059B80: lbu         $a0, -0x3E3F($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X3E3F);
    // 0x80059B84: addiu       $v0, $v0, -0x76
    ctx->r2 = ADD32(ctx->r2, -0X76);
    // 0x80059B88: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80059B8C: sw          $v0, -0x3DF8($at)
    MEM_W(-0X3DF8, ctx->r1) = ctx->r2;
    // 0x80059B90: lh          $v1, 0x18($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X18);
    // 0x80059B94: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80059B98: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x80059B9C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80059BA0: sw          $v0, -0x3DEC($at)
    MEM_W(-0X3DEC, ctx->r1) = ctx->r2;
    // 0x80059BA4: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80059BA8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80059BAC: sw          $a1, -0x3DE8($at)
    MEM_W(-0X3DE8, ctx->r1) = ctx->r5;
    // 0x80059BB0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80059BB4: sw          $a2, -0x3DE4($at)
    MEM_W(-0X3DE4, ctx->r1) = ctx->r6;
    // 0x80059BB8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80059BBC: sh          $v0, -0x3E36($at)
    MEM_H(-0X3E36, ctx->r1) = ctx->r2;
    // 0x80059BC0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80059BC4: sb          $a0, -0x3E3F($at)
    MEM_B(-0X3E3F, ctx->r1) = ctx->r4;
    // 0x80059BC8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80059BCC: j           L_80059EC0
    // 0x80059BD0: sw          $v1, -0x3DF4($at)
    MEM_W(-0X3DF4, ctx->r1) = ctx->r3;
        goto L_80059EC0;
    // 0x80059BD0: sw          $v1, -0x3DF4($at)
    MEM_W(-0X3DF4, ctx->r1) = ctx->r3;
L_80059BD4:
    // 0x80059BD4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80059BD8: lw          $a1, 0x5998($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5998);
    // 0x80059BDC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80059BE0: jal         0x80061510
    // 0x80059BE4: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_80061510_3C910(rdram, ctx);
        goto after_1;
    // 0x80059BE4: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_1:
    // 0x80059BE8: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80059BEC: lbu         $v0, -0x3E3F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3E3F);
    // 0x80059BF0: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x80059BF4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80059BF8: sh          $v1, -0x3DAC($at)
    MEM_H(-0X3DAC, ctx->r1) = ctx->r3;
    // 0x80059BFC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80059C00: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80059C04: j           L_80059EC0
    // 0x80059C08: sb          $v0, -0x3E3F($at)
    MEM_B(-0X3E3F, ctx->r1) = ctx->r2;
        goto L_80059EC0;
    // 0x80059C08: sb          $v0, -0x3E3F($at)
    MEM_B(-0X3E3F, ctx->r1) = ctx->r2;
L_80059C0C:
    // 0x80059C0C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80059C10: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80059C14: bltz        $v0, L_80059EC0
    if (SIGNED(ctx->r2) < 0) {
        // 0x80059C18: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_80059EC0;
    }
    // 0x80059C18: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80059C1C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80059C20: j           L_80059EC0
    // 0x80059C24: sb          $v0, -0x3E3F($at)
    MEM_B(-0X3E3F, ctx->r1) = ctx->r2;
        goto L_80059EC0;
    // 0x80059C24: sb          $v0, -0x3E3F($at)
    MEM_B(-0X3E3F, ctx->r1) = ctx->r2;
L_80059C28:
    // 0x80059C28: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80059C2C: lbu         $a0, -0x3E3E($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X3E3E);
    // 0x80059C30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80059C34: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x80059C38: beq         $v1, $v0, L_80059C80
    if (ctx->r3 == ctx->r2) {
        // 0x80059C3C: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80059C80;
    }
    // 0x80059C3C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80059C40: beql        $v0, $zero, L_80059C58
    if (ctx->r2 == 0) {
        // 0x80059C44: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80059C58;
    }
    goto skip_0;
    // 0x80059C44: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80059C48: beq         $v1, $zero, L_80059C70
    if (ctx->r3 == 0) {
        // 0x80059C4C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80059C70;
    }
    // 0x80059C4C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80059C50: j           L_80059EC0
    // 0x80059C54: nop

        goto L_80059EC0;
    // 0x80059C54: nop

L_80059C58:
    // 0x80059C58: beq         $v1, $v0, L_80059C90
    if (ctx->r3 == ctx->r2) {
        // 0x80059C5C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80059C90;
    }
    // 0x80059C5C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80059C60: beq         $v1, $v0, L_80059EB8
    if (ctx->r3 == ctx->r2) {
        // 0x80059C64: lui         $v0, 0x302
        ctx->r2 = S32(0X302 << 16);
            goto L_80059EB8;
    }
    // 0x80059C64: lui         $v0, 0x302
    ctx->r2 = S32(0X302 << 16);
    // 0x80059C68: j           L_80059EC0
    // 0x80059C6C: nop

        goto L_80059EC0;
    // 0x80059C6C: nop

L_80059C70:
    // 0x80059C70: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80059C74: lw          $a1, 0x5998($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5998);
    // 0x80059C78: j           L_80059CEC
    // 0x80059C7C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
        goto L_80059CEC;
    // 0x80059C7C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
L_80059C80:
    // 0x80059C80: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80059C84: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80059C88: bltz        $v0, L_80059EC0
    if (SIGNED(ctx->r2) < 0) {
        // 0x80059C8C: nop
    
            goto L_80059EC0;
    }
    // 0x80059C8C: nop

L_80059C90:
    // 0x80059C90: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80059C94: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80059C98: j           L_80059EC0
    // 0x80059C9C: sb          $v0, -0x3E3E($at)
    MEM_B(-0X3E3E, ctx->r1) = ctx->r2;
        goto L_80059EC0;
    // 0x80059C9C: sb          $v0, -0x3E3E($at)
    MEM_B(-0X3E3E, ctx->r1) = ctx->r2;
L_80059CA0:
    // 0x80059CA0: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80059CA4: lbu         $v1, -0x3E3E($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3E3E);
    // 0x80059CA8: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80059CAC: beq         $v0, $zero, L_80059EC0
    if (ctx->r2 == 0) {
        // 0x80059CB0: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80059EC0;
    }
    // 0x80059CB0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80059CB4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80059CB8: addu        $at, $at, $v0
    gpr jr_addend_80059CC0 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80059CBC: lw          $v0, 0x25E8($at)
    ctx->r2 = ADD32(ctx->r1, 0X25E8);
    // 0x80059CC0: jr          $v0
    // 0x80059CC4: nop

    switch (jr_addend_80059CC0 >> 2) {
        case 0: goto L_80059CC8; break;
        case 1: goto L_80059D18; break;
        case 2: goto L_80059D34; break;
        case 3: goto L_80059D44; break;
        case 4: goto L_80059D54; break;
        default: switch_error(__func__, 0x80059CC0, 0x800D25E8);
    }
    // 0x80059CC4: nop

L_80059CC8:
    // 0x80059CC8: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80059CCC: lw          $a1, 0x5998($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5998);
    // 0x80059CD0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80059CD4: jal         0x80061510
    // 0x80059CD8: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_80061510_3C910(rdram, ctx);
        goto after_2;
    // 0x80059CD8: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_2:
    // 0x80059CDC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80059CE0: lw          $a1, 0x5998($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5998);
    // 0x80059CE4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80059CE8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
L_80059CEC:
    // 0x80059CEC: jal         0x80061510
    // 0x80059CF0: nop

    func_80061510_3C910(rdram, ctx);
        goto after_3;
    // 0x80059CF0: nop

    after_3:
    // 0x80059CF4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80059CF8: lbu         $v0, -0x3E3E($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3E3E);
    // 0x80059CFC: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x80059D00: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80059D04: sh          $v1, -0x3DAC($at)
    MEM_H(-0X3DAC, ctx->r1) = ctx->r3;
    // 0x80059D08: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80059D0C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80059D10: j           L_80059EC0
    // 0x80059D14: sb          $v0, -0x3E3E($at)
    MEM_B(-0X3E3E, ctx->r1) = ctx->r2;
        goto L_80059EC0;
    // 0x80059D14: sb          $v0, -0x3E3E($at)
    MEM_B(-0X3E3E, ctx->r1) = ctx->r2;
L_80059D18:
    // 0x80059D18: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80059D1C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80059D20: bltz        $v0, L_80059EC0
    if (SIGNED(ctx->r2) < 0) {
        // 0x80059D24: addiu       $v0, $v0, 0x2
        ctx->r2 = ADD32(ctx->r2, 0X2);
            goto L_80059EC0;
    }
    // 0x80059D24: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80059D28: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80059D2C: j           L_80059EC0
    // 0x80059D30: sb          $v0, -0x3E3E($at)
    MEM_B(-0X3E3E, ctx->r1) = ctx->r2;
        goto L_80059EC0;
    // 0x80059D30: sb          $v0, -0x3E3E($at)
    MEM_B(-0X3E3E, ctx->r1) = ctx->r2;
L_80059D34:
    // 0x80059D34: jal         0x80059EFC
    // 0x80059D38: nop

    func_80059EFC_352FC(rdram, ctx);
        goto after_4;
    // 0x80059D38: nop

    after_4:
    // 0x80059D3C: j           L_80059EC0
    // 0x80059D40: nop

        goto L_80059EC0;
    // 0x80059D40: nop

L_80059D44:
    // 0x80059D44: jal         0x8005B8B8
    // 0x80059D48: nop

    func_8005B8B8_36CB8(rdram, ctx);
        goto after_5;
    // 0x80059D48: nop

    after_5:
    // 0x80059D4C: j           L_80059EC0
    // 0x80059D50: nop

        goto L_80059EC0;
    // 0x80059D50: nop

L_80059D54:
    // 0x80059D54: j           L_80059EB8
    // 0x80059D58: lui         $v0, 0x302
    ctx->r2 = S32(0X302 << 16);
        goto L_80059EB8;
    // 0x80059D58: lui         $v0, 0x302
    ctx->r2 = S32(0X302 << 16);
L_80059D5C:
    // 0x80059D5C: jal         0x8005BECC
    // 0x80059D60: nop

    func_8005BECC_372CC(rdram, ctx);
        goto after_6;
    // 0x80059D60: nop

    after_6:
    // 0x80059D64: j           L_80059EC0
    // 0x80059D68: nop

        goto L_80059EC0;
    // 0x80059D68: nop

L_80059D6C:
    // 0x80059D6C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80059D70: lw          $v0, -0x3BC8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3BC8);
    // 0x80059D74: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x80059D78: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80059D7C: lui         $v1, 0x130B
    ctx->r3 = S32(0X130B << 16);
    // 0x80059D80: bne         $v0, $v1, L_80059DA0
    if (ctx->r2 != ctx->r3) {
        // 0x80059D84: nop
    
            goto L_80059DA0;
    }
    // 0x80059D84: nop

    // 0x80059D88: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80059D8C: addiu       $v1, $v1, -0x3E3F
    ctx->r3 = ADD32(ctx->r3, -0X3E3F);
    // 0x80059D90: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80059D94: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80059D98: j           L_80059EC0
    // 0x80059D9C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
        goto L_80059EC0;
    // 0x80059D9C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
L_80059DA0:
    // 0x80059DA0: jal         0x8005C260
    // 0x80059DA4: nop

    func_8005C260_37660(rdram, ctx);
        goto after_7;
    // 0x80059DA4: nop

    after_7:
    // 0x80059DA8: j           L_80059EC0
    // 0x80059DAC: nop

        goto L_80059EC0;
    // 0x80059DAC: nop

L_80059DB0:
    // 0x80059DB0: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80059DB4: addiu       $v1, $v1, -0x3E3F
    ctx->r3 = ADD32(ctx->r3, -0X3E3F);
    // 0x80059DB8: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80059DBC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80059DC0: j           L_80059EC0
    // 0x80059DC4: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
        goto L_80059EC0;
    // 0x80059DC4: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
L_80059DC8:
    // 0x80059DC8: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80059DCC: addiu       $a0, $a0, -0x3E18
    ctx->r4 = ADD32(ctx->r4, -0X3E18);
    // 0x80059DD0: addiu       $a1, $a0, -0x1C
    ctx->r5 = ADD32(ctx->r4, -0X1C);
    // 0x80059DD4: jal         0x8009A3B4
    // 0x80059DD8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x80059DD8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_8:
    // 0x80059DDC: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80059DE0: lw          $a0, -0x3E24($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3E24);
    // 0x80059DE4: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x80059DE8: lw          $a1, -0x3E20($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3E20);
    // 0x80059DEC: lui         $a2, 0x801C
    ctx->r6 = S32(0X801C << 16);
    // 0x80059DF0: lw          $a2, -0x3E1C($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3E1C);
    // 0x80059DF4: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80059DF8: lbu         $v1, -0x3E3F($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3E3F);
    // 0x80059DFC: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80059E00: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80059E04: sw          $v0, -0x3DFC($at)
    MEM_W(-0X3DFC, ctx->r1) = ctx->r2;
    // 0x80059E08: addiu       $v0, $zero, -0x96
    ctx->r2 = ADD32(0, -0X96);
    // 0x80059E0C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80059E10: sw          $v0, -0x3DF8($at)
    MEM_W(-0X3DF8, ctx->r1) = ctx->r2;
    // 0x80059E14: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
    // 0x80059E18: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80059E1C: sw          $v0, -0x3DEC($at)
    MEM_W(-0X3DEC, ctx->r1) = ctx->r2;
    // 0x80059E20: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80059E24: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80059E28: sw          $v0, -0x3DE4($at)
    MEM_W(-0X3DE4, ctx->r1) = ctx->r2;
    // 0x80059E2C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80059E30: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80059E34: sw          $zero, -0x3DF4($at)
    MEM_W(-0X3DF4, ctx->r1) = 0;
    // 0x80059E38: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80059E3C: sw          $zero, -0x3DE8($at)
    MEM_W(-0X3DE8, ctx->r1) = 0;
    // 0x80059E40: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80059E44: sh          $v0, -0x3E36($at)
    MEM_H(-0X3E36, ctx->r1) = ctx->r2;
    // 0x80059E48: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80059E4C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80059E50: sw          $a0, -0x3E08($at)
    MEM_W(-0X3E08, ctx->r1) = ctx->r4;
    // 0x80059E54: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80059E58: sw          $a1, -0x3E04($at)
    MEM_W(-0X3E04, ctx->r1) = ctx->r5;
    // 0x80059E5C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80059E60: sw          $a2, -0x3E00($at)
    MEM_W(-0X3E00, ctx->r1) = ctx->r6;
    // 0x80059E64: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80059E68: j           L_80059EC0
    // 0x80059E6C: sb          $v1, -0x3E3F($at)
    MEM_B(-0X3E3F, ctx->r1) = ctx->r3;
        goto L_80059EC0;
    // 0x80059E6C: sb          $v1, -0x3E3F($at)
    MEM_B(-0X3E3F, ctx->r1) = ctx->r3;
L_80059E70:
    // 0x80059E70: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80059E74: addiu       $v1, $v1, -0x3E36
    ctx->r3 = ADD32(ctx->r3, -0X3E36);
    // 0x80059E78: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x80059E7C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80059E80: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x80059E84: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80059E88: bne         $v0, $zero, L_80059EA4
    if (ctx->r2 != 0) {
        // 0x80059E8C: nop
    
            goto L_80059EA4;
    }
    // 0x80059E8C: nop

    // 0x80059E90: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80059E94: lbu         $v0, -0x3E3F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3E3F);
    // 0x80059E98: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80059E9C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80059EA0: sb          $v0, -0x3E3F($at)
    MEM_B(-0X3E3F, ctx->r1) = ctx->r2;
L_80059EA4:
    // 0x80059EA4: jal         0x800597A8
    // 0x80059EA8: nop

    func_800597A8_34BA8(rdram, ctx);
        goto after_9;
    // 0x80059EA8: nop

    after_9:
    // 0x80059EAC: j           L_80059EC0
    // 0x80059EB0: nop

        goto L_80059EC0;
    // 0x80059EB0: nop

L_80059EB4:
    // 0x80059EB4: lui         $v0, 0x100
    ctx->r2 = S32(0X100 << 16);
L_80059EB8:
    // 0x80059EB8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80059EBC: sw          $v0, -0x3E40($at)
    MEM_W(-0X3E40, ctx->r1) = ctx->r2;
L_80059EC0:
    // 0x80059EC0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80059EC4: lh          $v0, -0x3E38($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X3E38);
    // 0x80059EC8: bltz        $v0, L_80059EF0
    if (SIGNED(ctx->r2) < 0) {
        // 0x80059ECC: nop
    
            goto L_80059EF0;
    }
    // 0x80059ECC: nop

    // 0x80059ED0: jal         0x800598DC
    // 0x80059ED4: nop

    func_800598DC_34CDC(rdram, ctx);
        goto after_10;
    // 0x80059ED4: nop

    after_10:
    // 0x80059ED8: jal         0x800599D4
    // 0x80059EDC: nop

    func_800599D4_34DD4(rdram, ctx);
        goto after_11;
    // 0x80059EDC: nop

    after_11:
    // 0x80059EE0: jal         0x80059710
    // 0x80059EE4: nop

    func_80059710_34B10(rdram, ctx);
        goto after_12;
    // 0x80059EE4: nop

    after_12:
    // 0x80059EE8: jal         0x8005974C
    // 0x80059EEC: nop

    func_8005974C_34B4C(rdram, ctx);
        goto after_13;
    // 0x80059EEC: nop

    after_13:
L_80059EF0:
    // 0x80059EF0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80059EF4: jr          $ra
    // 0x80059EF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80059EF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8004F374_2A774(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004F374: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8004F378: slti        $v0, $a0, 0x20
    ctx->r2 = SIGNED(ctx->r4) < 0X20 ? 1 : 0;
    // 0x8004F37C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8004F380: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8004F384: beq         $v0, $zero, L_8004F400
    if (ctx->r2 == 0) {
        // 0x8004F388: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_8004F400;
    }
    // 0x8004F388: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8004F38C: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8004F390: lw          $v1, -0x72C8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X72C8);
    // 0x8004F394: sllv        $v0, $v1, $a0
    ctx->r2 = S32(ctx->r3 << (ctx->r4 & 31));
    // 0x8004F398: bltz        $v0, L_8004F400
    if (SIGNED(ctx->r2) < 0) {
        // 0x8004F39C: lui         $v0, 0x8000
        ctx->r2 = S32(0X8000 << 16);
            goto L_8004F400;
    }
    // 0x8004F39C: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x8004F3A0: srlv        $v0, $v0, $a0
    ctx->r2 = S32(U32(ctx->r2) >> (ctx->r4 & 31));
    // 0x8004F3A4: or          $v0, $v1, $v0
    ctx->r2 = ctx->r3 | ctx->r2;
    // 0x8004F3A8: sll         $s0, $a0, 1
    ctx->r16 = S32(ctx->r4 << 1);
    // 0x8004F3AC: addu        $s0, $s0, $a0
    ctx->r16 = ADD32(ctx->r16, ctx->r4);
    // 0x8004F3B0: sll         $s0, $s0, 3
    ctx->r16 = S32(ctx->r16 << 3);
    // 0x8004F3B4: subu        $s0, $s0, $a0
    ctx->r16 = SUB32(ctx->r16, ctx->r4);
    // 0x8004F3B8: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    // 0x8004F3BC: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x8004F3C0: sw          $v0, -0x72C8($at)
    MEM_W(-0X72C8, ctx->r1) = ctx->r2;
    // 0x8004F3C4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8004F3C8: addiu       $v0, $v0, 0x6B70
    ctx->r2 = ADD32(ctx->r2, 0X6B70);
    // 0x8004F3CC: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x8004F3D0: lbu         $s1, 0x1($s0)
    ctx->r17 = MEM_BU(ctx->r16, 0X1);
    // 0x8004F3D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8004F3D8: jal         0x8009A2B0
    // 0x8004F3DC: addiu       $a1, $zero, 0x5C
    ctx->r5 = ADD32(0, 0X5C);
    bzero_recomp(rdram, ctx);
        goto after_0;
    // 0x8004F3DC: addiu       $a1, $zero, 0x5C
    ctx->r5 = ADD32(0, 0X5C);
    after_0:
    // 0x8004F3E0: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x8004F3E4: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8004F3E8: sb          $v1, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r3;
    // 0x8004F3EC: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x8004F3F0: sb          $v1, 0x49($v0)
    MEM_B(0X49, ctx->r2) = ctx->r3;
    // 0x8004F3F4: sb          $v1, 0x48($v0)
    MEM_B(0X48, ctx->r2) = ctx->r3;
    // 0x8004F3F8: j           L_8004F404
    // 0x8004F3FC: sb          $s1, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r17;
        goto L_8004F404;
    // 0x8004F3FC: sb          $s1, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r17;
L_8004F400:
    // 0x8004F400: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8004F404:
    // 0x8004F404: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8004F408: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8004F40C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8004F410: jr          $ra
    // 0x8004F414: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8004F414: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80063E04_3F204(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80063E04: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80063E08: lbu         $v0, 0x297($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X297);
    // 0x80063E0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80063E10: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80063E14: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80063E18: bne         $v0, $zero, L_80063E40
    if (ctx->r2 != 0) {
        // 0x80063E1C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80063E40;
    }
    // 0x80063E1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80063E20: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80063E24: lbu         $v0, 0x5410($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X5410);
    // 0x80063E28: lb          $v1, 0x71($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X71);
    // 0x80063E2C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80063E30: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80063E34: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80063E38: j           L_80063E60
    // 0x80063E3C: lbu         $v0, -0x6F90($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X6F90);
        goto L_80063E60;
    // 0x80063E3C: lbu         $v0, -0x6F90($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X6F90);
L_80063E40:
    // 0x80063E40: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80063E44: lbu         $v0, 0x5410($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X5410);
    // 0x80063E48: lb          $v1, 0x71($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X71);
    // 0x80063E4C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80063E50: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80063E54: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80063E58: lbu         $v0, -0x6F90($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X6F90);
    // 0x80063E5C: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
L_80063E60:
    // 0x80063E60: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80063E64: sb          $v0, 0x6B39($at)
    MEM_B(0X6B39, ctx->r1) = ctx->r2;
    // 0x80063E68: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80063E6C: andi        $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 & 0X2000;
    // 0x80063E70: beq         $v0, $zero, L_80063EFC
    if (ctx->r2 == 0) {
        // 0x80063E74: nop
    
            goto L_80063EFC;
    }
    // 0x80063E74: nop

    // 0x80063E78: lw          $a1, 0x44($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X44);
    // 0x80063E7C: beql        $a1, $zero, L_80063EB8
    if (ctx->r5 == 0) {
        // 0x80063E80: addiu       $a2, $zero, 0xFF
        ctx->r6 = ADD32(0, 0XFF);
            goto L_80063EB8;
    }
    goto skip_0;
    // 0x80063E80: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    skip_0:
    // 0x80063E84: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80063E88: lbu         $v0, 0x5410($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X5410);
    // 0x80063E8C: lb          $v1, 0x71($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X71);
    // 0x80063E90: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x80063E94: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80063E98: lbu         $a2, 0x2($a0)
    ctx->r6 = MEM_BU(ctx->r4, 0X2);
    // 0x80063E9C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80063EA0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80063EA4: lbu         $v0, -0x6F90($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X6F90);
    // 0x80063EA8: lbu         $a0, 0x1($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1);
    // 0x80063EAC: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x80063EB0: j           L_80063EF4
    // 0x80063EB4: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
        goto L_80063EF4;
    // 0x80063EB4: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
L_80063EB8:
    // 0x80063EB8: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    // 0x80063EBC: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80063EC0: lbu         $v0, 0x5410($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X5410);
    // 0x80063EC4: lb          $a0, 0x71($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X71);
    // 0x80063EC8: lbu         $v1, 0x2($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X2);
    // 0x80063ECC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80063ED0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80063ED4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80063ED8: lbu         $v0, -0x6F90($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X6F90);
    // 0x80063EDC: lbu         $a0, 0x1($a1)
    ctx->r4 = MEM_BU(ctx->r5, 0X1);
    // 0x80063EE0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80063EE4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80063EE8: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80063EEC: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x80063EF0: lw          $a1, 0x27EC($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X27EC);
L_80063EF4:
    // 0x80063EF4: jal         0x80061510
    // 0x80063EF8: nop

    func_80061510_3C910(rdram, ctx);
        goto after_0;
    // 0x80063EF8: nop

    after_0:
L_80063EFC:
    // 0x80063EFC: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x80063F00: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x80063F04: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x80063F08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80063F0C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80063F10: jr          $ra
    // 0x80063F14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80063F14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8004E7C0_29BC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004E7C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8004E7C4: lh          $v0, 0x32($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X32);
    // 0x8004E7C8: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8004E7CC: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x8004E7D0: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x8004E7D4: addiu       $a1, $a1, 0xC4
    ctx->r5 = ADD32(ctx->r5, 0XC4);
    // 0x8004E7D8: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8004E7DC: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    // 0x8004E7E0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8004E7E4: jal         0x8004E800
    // 0x8004E7E8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8004E800_29C00(rdram, ctx);
        goto after_0;
    // 0x8004E7E8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x8004E7EC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8004E7F0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8004E7F4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8004E7F8: jr          $ra
    // 0x8004E7FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8004E7FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80063C20_3F020(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80063C20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80063C24: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80063C28: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80063C2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80063C30: jal         0x8004A49C
    // 0x80063C34: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8004A49C_2589C(rdram, ctx);
        goto after_0;
    // 0x80063C34: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x80063C38: bne         $v0, $zero, L_80063C48
    if (ctx->r2 != 0) {
        // 0x80063C3C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80063C48;
    }
    // 0x80063C3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80063C40: j           L_80063C54
    // 0x80063C44: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_80063C54;
    // 0x80063C44: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80063C48:
    // 0x80063C48: lw          $v1, 0x6C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X6C);
    // 0x80063C4C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80063C50: sw          $v1, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r3;
L_80063C54:
    // 0x80063C54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80063C58: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80063C5C: jr          $ra
    // 0x80063C60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80063C60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8009384C_6EC4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8009384C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80093850: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80093854: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x80093858: lbu         $a2, 0x0($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X0);
    // 0x8009385C: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80093860: addiu       $a0, $a0, 0x58F8
    ctx->r4 = ADD32(ctx->r4, 0X58F8);
    // 0x80093864: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80093868: addiu       $v0, $v0, 0x5750
    ctx->r2 = ADD32(ctx->r2, 0X5750);
    // 0x8009386C: sll         $a1, $a2, 1
    ctx->r5 = S32(ctx->r6 << 1);
    // 0x80093870: addu        $a1, $a1, $a2
    ctx->r5 = ADD32(ctx->r5, ctx->r6);
    // 0x80093874: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x80093878: addu        $a1, $a1, $a2
    ctx->r5 = ADD32(ctx->r5, ctx->r6);
    // 0x8009387C: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x80093880: jal         0x8009CEC4
    // 0x80093884: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    osMotorInit_recomp(rdram, ctx);
        goto after_0;
    // 0x80093884: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    after_0:
    // 0x80093888: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8009388C: jr          $ra
    // 0x80093890: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80093890: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800911C0_6C5C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800911C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800911C4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x800911C8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x800911CC: lui         $v0, 0xB00
    ctx->r2 = S32(0XB00 << 16);
    // 0x800911D0: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x800911D4: addiu       $a0, $s2, 0x8
    ctx->r4 = ADD32(ctx->r18, 0X8);
    // 0x800911D8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x800911DC: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x800911E0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x800911E4: sra         $s0, $a1, 8
    ctx->r16 = S32(SIGNED(ctx->r5) >> 8);
    // 0x800911E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800911EC: jal         0x80099BB0
    // 0x800911F0: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_0;
    // 0x800911F0: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    after_0:
    // 0x800911F4: sw          $v0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r2;
    // 0x800911F8: lbu         $v0, 0x2F($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X2F);
    // 0x800911FC: lhu         $v1, 0x2($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X2);
    // 0x80091200: lui         $a0, 0xE00
    ctx->r4 = S32(0XE00 << 16);
    // 0x80091204: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80091208: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x8009120C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80091210: sw          $v0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r2;
    // 0x80091214: lw          $a0, 0x28($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X28);
    // 0x80091218: jal         0x80099BB0
    // 0x8009121C: sll         $s0, $s0, 24
    ctx->r16 = S32(ctx->r16 << 24);
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_1;
    // 0x8009121C: sll         $s0, $s0, 24
    ctx->r16 = S32(ctx->r16 << 24);
    after_1:
    // 0x80091220: lui         $a0, 0xFF
    ctx->r4 = S32(0XFF << 16);
    // 0x80091224: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x80091228: addiu       $v1, $s1, 0x10
    ctx->r3 = ADD32(ctx->r17, 0X10);
    // 0x8009122C: and         $a0, $v0, $a0
    ctx->r4 = ctx->r2 & ctx->r4;
    // 0x80091230: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x80091234: or          $s0, $s0, $a0
    ctx->r16 = ctx->r16 | ctx->r4;
    // 0x80091238: sw          $s0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r16;
    // 0x8009123C: sw          $zero, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = 0;
    // 0x80091240: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80091244: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80091248: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8009124C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80091250: jr          $ra
    // 0x80091254: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80091254: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80091258: nop

    // 0x8009125C: nop

;}
RECOMP_FUNC void func_8004F418_2A818(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004F418: lui         $v1, 0x43B
    ctx->r3 = S32(0X43B << 16);
    // 0x8004F41C: ori         $v1, $v1, 0x3D5B
    ctx->r3 = ctx->r3 | 0X3D5B;
    // 0x8004F420: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8004F424: addiu       $v0, $v0, -0x420
    ctx->r2 = ADD32(ctx->r2, -0X420);
    // 0x8004F428: subu        $v0, $a0, $v0
    ctx->r2 = SUB32(ctx->r4, ctx->r2);
    // 0x8004F42C: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
    // 0x8004F430: multu       $v0, $v1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004F434: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x8004F438: lw          $v0, 0x5214($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5214);
    // 0x8004F43C: lui         $a2, 0x801E
    ctx->r6 = S32(0X801E << 16);
    // 0x8004F440: lw          $a2, -0x714C($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X714C);
    // 0x8004F444: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004F448: lui         $v1, 0x8000
    ctx->r3 = S32(0X8000 << 16);
    // 0x8004F44C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8004F450: mfhi        $a3
    ctx->r7 = hi;
    // 0x8004F454: srl         $a1, $a3, 1
    ctx->r5 = S32(U32(ctx->r7) >> 1);
    // 0x8004F458: srlv        $v1, $v1, $a1
    ctx->r3 = S32(U32(ctx->r3) >> (ctx->r5 & 31));
    // 0x8004F45C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8004F460: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8004F464: sw          $v0, 0x5214($at)
    MEM_W(0X5214, ctx->r1) = ctx->r2;
    // 0x8004F468: and         $v0, $v0, $a2
    ctx->r2 = ctx->r2 & ctx->r6;
    // 0x8004F46C: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8004F470: sw          $v0, 0x5214($at)
    MEM_W(0X5214, ctx->r1) = ctx->r2;
    // 0x8004F474: jal         0x80053530
    // 0x8004F478: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    func_80053530_2E930(rdram, ctx);
        goto after_0;
    // 0x8004F478: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    after_0:
    // 0x8004F47C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8004F480: jr          $ra
    // 0x8004F484: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8004F484: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80031EC4_D2C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80031EC4: jr          $ra
    // 0x80031EC8: nop

    TRACE_RETURN()
    return;
    // 0x80031EC8: nop

;}
RECOMP_FUNC void func_80065938_40D38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80065938: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8006593C: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x80065940: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80065944: sw          $ra, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r31;
    // 0x80065948: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x8006594C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80065950: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x80065954: and         $a1, $v0, $a0
    ctx->r5 = ctx->r2 & ctx->r4;
    // 0x80065958: bne         $a1, $zero, L_80065A04
    if (ctx->r5 != 0) {
        // 0x8006595C: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_80065A04;
    }
    // 0x8006595C: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x80065960: lw          $v1, 0x6C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X6C);
    // 0x80065964: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x80065968: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x8006596C: sh          $zero, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = 0;
    // 0x80065970: sh          $zero, 0x86($s0)
    MEM_H(0X86, ctx->r16) = 0;
    // 0x80065974: lbu         $v0, 0x1($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X1);
    // 0x80065978: sb          $zero, 0x73($s0)
    MEM_B(0X73, ctx->r16) = 0;
    // 0x8006597C: sb          $zero, 0x71($s0)
    MEM_B(0X71, ctx->r16) = 0;
    // 0x80065980: sb          $v0, 0x72($s0)
    MEM_B(0X72, ctx->r16) = ctx->r2;
    // 0x80065984: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x80065988: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8006598C: sb          $v0, -0x4830($at)
    MEM_B(-0X4830, ctx->r1) = ctx->r2;
    // 0x80065990: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80065994: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80065998: sb          $v0, -0x482F($at)
    MEM_B(-0X482F, ctx->r1) = ctx->r2;
    // 0x8006599C: lb          $v0, 0x72($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X72);
    // 0x800659A0: lbu         $a0, 0x72($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X72);
    // 0x800659A4: slt         $v0, $a1, $v0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800659A8: beq         $v0, $zero, L_80065A00
    if (ctx->r2 == 0) {
        // 0x800659AC: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_80065A00;
    }
    // 0x800659AC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x800659B0: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x800659B4: addiu       $a3, $a3, 0x2E1C
    ctx->r7 = ADD32(ctx->r7, 0X2E1C);
    // 0x800659B8: andi        $v1, $a2, 0xFFFF
    ctx->r3 = ctx->r6 & 0XFFFF;
L_800659BC:
    // 0x800659BC: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x800659C0: sll         $v0, $a0, 24
    ctx->r2 = S32(ctx->r4 << 24);
    // 0x800659C4: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x800659C8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x800659CC: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x800659D0: lw          $a0, 0x6C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6C);
    // 0x800659D4: lbu         $a1, 0x0($a3)
    ctx->r5 = MEM_BU(ctx->r7, 0X0);
    // 0x800659D8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x800659DC: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x800659E0: sb          $a1, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r5;
    // 0x800659E4: lb          $v1, 0x72($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X72);
    // 0x800659E8: andi        $v0, $a2, 0xFFFF
    ctx->r2 = ctx->r6 & 0XFFFF;
    // 0x800659EC: lbu         $a0, 0x72($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X72);
    // 0x800659F0: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800659F4: bnel        $v0, $zero, L_800659BC
    if (ctx->r2 != 0) {
        // 0x800659F8: andi        $v1, $a2, 0xFFFF
        ctx->r3 = ctx->r6 & 0XFFFF;
            goto L_800659BC;
    }
    goto skip_0;
    // 0x800659F8: andi        $v1, $a2, 0xFFFF
    ctx->r3 = ctx->r6 & 0XFFFF;
    skip_0:
    // 0x800659FC: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
L_80065A00:
    // 0x80065A00: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
L_80065A04:
    // 0x80065A04: lbu         $a0, 0x71($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X71);
    // 0x80065A08: lw          $a1, 0xB8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XB8);
    // 0x80065A0C: lui         $v1, 0x1000
    ctx->r3 = S32(0X1000 << 16);
    // 0x80065A10: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80065A14: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80065A18: andi        $v0, $a1, 0x6020
    ctx->r2 = ctx->r5 & 0X6020;
    // 0x80065A1C: beq         $v0, $zero, L_80065B30
    if (ctx->r2 == 0) {
        // 0x80065A20: sll         $v1, $a0, 24
        ctx->r3 = S32(ctx->r4 << 24);
            goto L_80065B30;
    }
    // 0x80065A20: sll         $v1, $a0, 24
    ctx->r3 = S32(ctx->r4 << 24);
    // 0x80065A24: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80065A28: lb          $a0, 0x72($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X72);
    // 0x80065A2C: sb          $v0, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r2;
    // 0x80065A30: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80065A34: sra         $v1, $v0, 24
    ctx->r3 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80065A38: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80065A3C: bne         $v0, $zero, L_80065AD0
    if (ctx->r2 != 0) {
        // 0x80065A40: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_80065AD0;
    }
    // 0x80065A40: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80065A44: lui         $a0, 0xFEFF
    ctx->r4 = S32(0XFEFF << 16);
    // 0x80065A48: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x80065A4C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80065A50: lbu         $a3, 0x72($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X72);
    // 0x80065A54: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80065A58: lbu         $v1, -0x11D0($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X11D0);
    // 0x80065A5C: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x80065A60: lb          $a0, 0x72($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X72);
    // 0x80065A64: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x80065A68: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80065A6C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80065A70: addiu       $v0, $v0, -0x3B94
    ctx->r2 = ADD32(ctx->r2, -0X3B94);
    // 0x80065A74: blez        $a0, L_80065AC8
    if (SIGNED(ctx->r4) <= 0) {
        // 0x80065A78: addu        $t0, $v1, $v0
        ctx->r8 = ADD32(ctx->r3, ctx->r2);
            goto L_80065AC8;
    }
    // 0x80065A78: addu        $t0, $v1, $v0
    ctx->r8 = ADD32(ctx->r3, ctx->r2);
    // 0x80065A7C: andi        $a1, $a2, 0xFFFF
    ctx->r5 = ctx->r6 & 0XFFFF;
L_80065A80:
    // 0x80065A80: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80065A84: sll         $v1, $a3, 24
    ctx->r3 = S32(ctx->r7 << 24);
    // 0x80065A88: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x80065A8C: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x80065A90: lw          $a0, 0x6C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6C);
    // 0x80065A94: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80065A98: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80065A9C: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x80065AA0: lbu         $v0, 0x2($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X2);
    // 0x80065AA4: sll         $a1, $a1, 1
    ctx->r5 = S32(ctx->r5 << 1);
    // 0x80065AA8: addu        $a1, $a1, $t0
    ctx->r5 = ADD32(ctx->r5, ctx->r8);
    // 0x80065AAC: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x80065AB0: lb          $v1, 0x72($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X72);
    // 0x80065AB4: lbu         $a3, 0x72($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X72);
    // 0x80065AB8: andi        $v0, $a2, 0xFFFF
    ctx->r2 = ctx->r6 & 0XFFFF;
    // 0x80065ABC: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80065AC0: bne         $v0, $zero, L_80065A80
    if (ctx->r2 != 0) {
        // 0x80065AC4: andi        $a1, $a2, 0xFFFF
        ctx->r5 = ctx->r6 & 0XFFFF;
            goto L_80065A80;
    }
    // 0x80065AC4: andi        $a1, $a2, 0xFFFF
    ctx->r5 = ctx->r6 & 0XFFFF;
L_80065AC8:
    // 0x80065AC8: j           L_80065B18
    // 0x80065ACC: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
        goto L_80065B18;
    // 0x80065ACC: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_80065AD0:
    // 0x80065AD0: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x80065AD4: lw          $v1, 0x6C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X6C);
    // 0x80065AD8: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80065ADC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80065AE0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80065AE4: lbu         $v1, 0x2($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X2);
    // 0x80065AE8: andi        $v0, $a2, 0xFFFF
    ctx->r2 = ctx->r6 & 0XFFFF;
L_80065AEC:
    // 0x80065AEC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80065AF0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80065AF4: lbu         $v0, 0x2E1C($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X2E1C);
    // 0x80065AF8: beql        $v1, $v0, L_80065B18
    if (ctx->r3 == ctx->r2) {
        // 0x80065AFC: sh          $a2, 0x86($s0)
        MEM_H(0X86, ctx->r16) = ctx->r6;
            goto L_80065B18;
    }
    goto skip_1;
    // 0x80065AFC: sh          $a2, 0x86($s0)
    MEM_H(0X86, ctx->r16) = ctx->r6;
    skip_1:
    // 0x80065B00: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80065B04: andi        $v0, $a2, 0xFFFF
    ctx->r2 = ctx->r6 & 0XFFFF;
    // 0x80065B08: sltiu       $v0, $v0, 0x25
    ctx->r2 = ctx->r2 < 0X25 ? 1 : 0;
    // 0x80065B0C: bne         $v0, $zero, L_80065AEC
    if (ctx->r2 != 0) {
        // 0x80065B10: andi        $v0, $a2, 0xFFFF
        ctx->r2 = ctx->r6 & 0XFFFF;
            goto L_80065AEC;
    }
    // 0x80065B10: andi        $v0, $a2, 0xFFFF
    ctx->r2 = ctx->r6 & 0XFFFF;
    // 0x80065B14: sh          $a2, 0x86($s0)
    MEM_H(0X86, ctx->r16) = ctx->r6;
L_80065B18:
    // 0x80065B18: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
    // 0x80065B1C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80065B20: jal         0x8002A2F8
    // 0x80065B24: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_0;
    // 0x80065B24: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80065B28: j           L_80065CA4
    // 0x80065B2C: nop

        goto L_80065CA4;
    // 0x80065B2C: nop

L_80065B30:
    // 0x80065B30: andi        $v0, $a1, 0x8080
    ctx->r2 = ctx->r5 & 0X8080;
    // 0x80065B34: beq         $v0, $zero, L_80065BB0
    if (ctx->r2 == 0) {
        // 0x80065B38: nop
    
            goto L_80065BB0;
    }
    // 0x80065B38: nop

    // 0x80065B3C: beq         $v1, $zero, L_80065B48
    if (ctx->r3 == 0) {
        // 0x80065B40: addiu       $v0, $a0, -0x1
        ctx->r2 = ADD32(ctx->r4, -0X1);
            goto L_80065B48;
    }
    // 0x80065B40: addiu       $v0, $a0, -0x1
    ctx->r2 = ADD32(ctx->r4, -0X1);
    // 0x80065B44: sb          $v0, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r2;
L_80065B48:
    // 0x80065B48: addiu       $a0, $zero, 0x83
    ctx->r4 = ADD32(0, 0X83);
    // 0x80065B4C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80065B50: jal         0x8002A2F8
    // 0x80065B54: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_1;
    // 0x80065B54: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80065B58: lb          $a0, 0x72($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X72);
    // 0x80065B5C: lb          $v0, 0x71($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X71);
    // 0x80065B60: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80065B64: lw          $v1, 0x6C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X6C);
    // 0x80065B68: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x80065B6C: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80065B70: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80065B74: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80065B78: lbu         $v1, 0x2($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X2);
    // 0x80065B7C: andi        $v0, $a2, 0xFFFF
    ctx->r2 = ctx->r6 & 0XFFFF;
L_80065B80:
    // 0x80065B80: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80065B84: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80065B88: lbu         $v0, 0x2E1C($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X2E1C);
    // 0x80065B8C: beql        $v1, $v0, L_80065CA4
    if (ctx->r3 == ctx->r2) {
        // 0x80065B90: sh          $a2, 0x86($s0)
        MEM_H(0X86, ctx->r16) = ctx->r6;
            goto L_80065CA4;
    }
    goto skip_2;
    // 0x80065B90: sh          $a2, 0x86($s0)
    MEM_H(0X86, ctx->r16) = ctx->r6;
    skip_2:
    // 0x80065B94: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80065B98: andi        $v0, $a2, 0xFFFF
    ctx->r2 = ctx->r6 & 0XFFFF;
    // 0x80065B9C: sltiu       $v0, $v0, 0x25
    ctx->r2 = ctx->r2 < 0X25 ? 1 : 0;
    // 0x80065BA0: bne         $v0, $zero, L_80065B80
    if (ctx->r2 != 0) {
        // 0x80065BA4: andi        $v0, $a2, 0xFFFF
        ctx->r2 = ctx->r6 & 0XFFFF;
            goto L_80065B80;
    }
    // 0x80065BA4: andi        $v0, $a2, 0xFFFF
    ctx->r2 = ctx->r6 & 0XFFFF;
    // 0x80065BA8: j           L_80065CA4
    // 0x80065BAC: sh          $a2, 0x86($s0)
    MEM_H(0X86, ctx->r16) = ctx->r6;
        goto L_80065CA4;
    // 0x80065BAC: sh          $a2, 0x86($s0)
    MEM_H(0X86, ctx->r16) = ctx->r6;
L_80065BB0:
    // 0x80065BB0: lhu         $a0, 0xBA($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XBA);
    // 0x80065BB4: andi        $v0, $a0, 0x10
    ctx->r2 = ctx->r4 & 0X10;
    // 0x80065BB8: beq         $v0, $zero, L_80065BD8
    if (ctx->r2 == 0) {
        // 0x80065BBC: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_80065BD8;
    }
    // 0x80065BBC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80065BC0: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    // 0x80065BC4: lhu         $v0, 0x86($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X86);
    // 0x80065BC8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80065BCC: sh          $zero, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = 0;
    // 0x80065BD0: j           L_80065C3C
    // 0x80065BD4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80065C3C;
    // 0x80065BD4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80065BD8:
    // 0x80065BD8: lui         $v0, 0x10
    ctx->r2 = S32(0X10 << 16);
    // 0x80065BDC: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x80065BE0: and         $v0, $a1, $v0
    ctx->r2 = ctx->r5 & ctx->r2;
    // 0x80065BE4: lui         $v1, 0x10
    ctx->r3 = S32(0X10 << 16);
    // 0x80065BE8: bne         $v0, $v1, L_80065C20
    if (ctx->r2 != ctx->r3) {
        // 0x80065BEC: andi        $v0, $a0, 0x40
        ctx->r2 = ctx->r4 & 0X40;
            goto L_80065C20;
    }
    // 0x80065BEC: andi        $v0, $a0, 0x40
    ctx->r2 = ctx->r4 & 0X40;
    // 0x80065BF0: lhu         $v1, 0xBC($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XBC);
    // 0x80065BF4: sltiu       $v0, $v1, 0xD
    ctx->r2 = ctx->r3 < 0XD ? 1 : 0;
    // 0x80065BF8: bne         $v0, $zero, L_80065CA0
    if (ctx->r2 != 0) {
        // 0x80065BFC: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80065CA0;
    }
    // 0x80065BFC: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80065C00: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    // 0x80065C04: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80065C08: lhu         $v1, 0x86($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X86);
    // 0x80065C0C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80065C10: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80065C14: sh          $v0, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = ctx->r2;
    // 0x80065C18: j           L_80065C90
    // 0x80065C1C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
        goto L_80065C90;
    // 0x80065C1C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_80065C20:
    // 0x80065C20: beq         $v0, $zero, L_80065C4C
    if (ctx->r2 == 0) {
        // 0x80065C24: addiu       $a0, $zero, 0x81
        ctx->r4 = ADD32(0, 0X81);
            goto L_80065C4C;
    }
    // 0x80065C24: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    // 0x80065C28: lhu         $v0, 0x86($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X86);
    // 0x80065C2C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80065C30: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80065C34: sh          $zero, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = 0;
    // 0x80065C38: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_80065C3C:
    // 0x80065C3C: jal         0x8002A2F8
    // 0x80065C40: sh          $v0, 0x86($s0)
    MEM_H(0X86, ctx->r16) = ctx->r2;
    func_8002A2F8_56F8(rdram, ctx);
        goto after_2;
    // 0x80065C40: sh          $v0, 0x86($s0)
    MEM_H(0X86, ctx->r16) = ctx->r2;
    after_2:
    // 0x80065C44: j           L_80065CA4
    // 0x80065C48: nop

        goto L_80065CA4;
    // 0x80065C48: nop

L_80065C4C:
    // 0x80065C4C: lui         $v0, 0x40
    ctx->r2 = S32(0X40 << 16);
    // 0x80065C50: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x80065C54: and         $v0, $a1, $v0
    ctx->r2 = ctx->r5 & ctx->r2;
    // 0x80065C58: lui         $v1, 0x40
    ctx->r3 = S32(0X40 << 16);
    // 0x80065C5C: bne         $v0, $v1, L_80065CA4
    if (ctx->r2 != ctx->r3) {
        // 0x80065C60: nop
    
            goto L_80065CA4;
    }
    // 0x80065C60: nop

    // 0x80065C64: lhu         $v1, 0xBC($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XBC);
    // 0x80065C68: sltiu       $v0, $v1, 0xD
    ctx->r2 = ctx->r3 < 0XD ? 1 : 0;
    // 0x80065C6C: bne         $v0, $zero, L_80065CA0
    if (ctx->r2 != 0) {
        // 0x80065C70: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80065CA0;
    }
    // 0x80065C70: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80065C74: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    // 0x80065C78: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80065C7C: lhu         $v1, 0x86($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X86);
    // 0x80065C80: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80065C84: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80065C88: sh          $v0, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = ctx->r2;
    // 0x80065C8C: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
L_80065C90:
    // 0x80065C90: jal         0x8002A2F8
    // 0x80065C94: sh          $v1, 0x86($s0)
    MEM_H(0X86, ctx->r16) = ctx->r3;
    func_8002A2F8_56F8(rdram, ctx);
        goto after_3;
    // 0x80065C94: sh          $v1, 0x86($s0)
    MEM_H(0X86, ctx->r16) = ctx->r3;
    after_3:
    // 0x80065C98: j           L_80065CA4
    // 0x80065C9C: nop

        goto L_80065CA4;
    // 0x80065C9C: nop

L_80065CA0:
    // 0x80065CA0: sh          $v0, 0xBC($s0)
    MEM_H(0XBC, ctx->r16) = ctx->r2;
L_80065CA4:
    // 0x80065CA4: lh          $v0, 0x86($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X86);
    // 0x80065CA8: slti        $v0, $v0, 0x25
    ctx->r2 = SIGNED(ctx->r2) < 0X25 ? 1 : 0;
    // 0x80065CAC: beql        $v0, $zero, L_80065CB4
    if (ctx->r2 == 0) {
        // 0x80065CB0: sh          $zero, 0x86($s0)
        MEM_H(0X86, ctx->r16) = 0;
            goto L_80065CB4;
    }
    goto skip_3;
    // 0x80065CB0: sh          $zero, 0x86($s0)
    MEM_H(0X86, ctx->r16) = 0;
    skip_3:
L_80065CB4:
    // 0x80065CB4: lh          $v0, 0x86($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X86);
    // 0x80065CB8: bgez        $v0, L_80065CC8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80065CBC: andi        $v1, $s1, 0xFFFF
        ctx->r3 = ctx->r17 & 0XFFFF;
            goto L_80065CC8;
    }
    // 0x80065CBC: andi        $v1, $s1, 0xFFFF
    ctx->r3 = ctx->r17 & 0XFFFF;
    // 0x80065CC0: addiu       $v0, $zero, 0x24
    ctx->r2 = ADD32(0, 0X24);
    // 0x80065CC4: sh          $v0, 0x86($s0)
    MEM_H(0X86, ctx->r16) = ctx->r2;
L_80065CC8:
    // 0x80065CC8: bne         $v1, $zero, L_80065DC8
    if (ctx->r3 != 0) {
        // 0x80065CCC: nop
    
            goto L_80065DC8;
    }
    // 0x80065CCC: nop

    // 0x80065CD0: lb          $v0, 0x72($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X72);
    // 0x80065CD4: lbu         $a0, 0x72($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X72);
    // 0x80065CD8: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80065CDC: beq         $v0, $zero, L_80065D28
    if (ctx->r2 == 0) {
        // 0x80065CE0: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_80065D28;
    }
    // 0x80065CE0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80065CE4: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x80065CE8: andi        $v0, $a2, 0xFFFF
    ctx->r2 = ctx->r6 & 0XFFFF;
L_80065CEC:
    // 0x80065CEC: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80065CF0: sll         $v1, $a0, 24
    ctx->r3 = S32(ctx->r4 << 24);
    // 0x80065CF4: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x80065CF8: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80065CFC: lw          $a0, 0x6C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6C);
    // 0x80065D00: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80065D04: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80065D08: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x80065D0C: sb          $a1, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r5;
    // 0x80065D10: lb          $v1, 0x72($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X72);
    // 0x80065D14: lbu         $a0, 0x72($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X72);
    // 0x80065D18: andi        $v0, $a2, 0xFFFF
    ctx->r2 = ctx->r6 & 0XFFFF;
    // 0x80065D1C: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80065D20: bne         $v0, $zero, L_80065CEC
    if (ctx->r2 != 0) {
        // 0x80065D24: andi        $v0, $a2, 0xFFFF
        ctx->r2 = ctx->r6 & 0XFFFF;
            goto L_80065CEC;
    }
    // 0x80065D24: andi        $v0, $a2, 0xFFFF
    ctx->r2 = ctx->r6 & 0XFFFF;
L_80065D28:
    // 0x80065D28: lb          $a0, 0x72($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X72);
    // 0x80065D2C: lb          $v0, 0x71($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X71);
    // 0x80065D30: lh          $a1, 0x86($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X86);
    // 0x80065D34: lw          $v1, 0x6C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X6C);
    // 0x80065D38: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x80065D3C: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80065D40: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80065D44: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x80065D48: lbu         $a1, 0x2E1C($at)
    ctx->r5 = MEM_BU(ctx->r1, 0X2E1C);
    // 0x80065D4C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80065D50: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80065D54: sb          $a1, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r5;
    // 0x80065D58: lb          $a0, 0x72($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X72);
    // 0x80065D5C: lb          $v0, 0x71($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X71);
    // 0x80065D60: lw          $v1, 0x6C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X6C);
    // 0x80065D64: lui         $a1, 0x8018
    ctx->r5 = S32(0X8018 << 16);
    // 0x80065D68: lbu         $a1, -0x4830($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X4830);
    // 0x80065D6C: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x80065D70: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80065D74: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80065D78: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80065D7C: sb          $a1, 0x1($v1)
    MEM_B(0X1, ctx->r3) = ctx->r5;
    // 0x80065D80: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80065D84: lbu         $v0, -0x4830($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X4830);
    // 0x80065D88: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x80065D8C: lbu         $a0, -0x482F($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X482F);
    // 0x80065D90: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80065D94: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80065D98: sb          $v0, -0x4830($at)
    MEM_B(-0X4830, ctx->r1) = ctx->r2;
    // 0x80065D9C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80065DA0: xori        $v1, $v0, 0x80
    ctx->r3 = ctx->r2 ^ 0X80;
    // 0x80065DA4: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80065DA8: xori        $v0, $v0, 0x60
    ctx->r2 = ctx->r2 ^ 0X60;
    // 0x80065DAC: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80065DB0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80065DB4: beq         $v1, $zero, L_80065E28
    if (ctx->r3 == 0) {
        // 0x80065DB8: negu        $v0, $a0
        ctx->r2 = SUB32(0, ctx->r4);
            goto L_80065E28;
    }
    // 0x80065DB8: negu        $v0, $a0
    ctx->r2 = SUB32(0, ctx->r4);
    // 0x80065DBC: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80065DC0: j           L_80065E28
    // 0x80065DC4: sb          $v0, -0x482F($at)
    MEM_B(-0X482F, ctx->r1) = ctx->r2;
        goto L_80065E28;
    // 0x80065DC4: sb          $v0, -0x482F($at)
    MEM_B(-0X482F, ctx->r1) = ctx->r2;
L_80065DC8:
    // 0x80065DC8: lb          $v0, 0x72($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X72);
    // 0x80065DCC: lbu         $a0, 0x72($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X72);
    // 0x80065DD0: blez        $v0, L_80065E1C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80065DD4: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_80065E1C;
    }
    // 0x80065DD4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80065DD8: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x80065DDC: andi        $v0, $a2, 0xFFFF
    ctx->r2 = ctx->r6 & 0XFFFF;
L_80065DE0:
    // 0x80065DE0: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80065DE4: sll         $v1, $a0, 24
    ctx->r3 = S32(ctx->r4 << 24);
    // 0x80065DE8: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x80065DEC: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80065DF0: lw          $a0, 0x6C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6C);
    // 0x80065DF4: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80065DF8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80065DFC: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x80065E00: sb          $a1, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r5;
    // 0x80065E04: lb          $v1, 0x72($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X72);
    // 0x80065E08: lbu         $a0, 0x72($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X72);
    // 0x80065E0C: andi        $v0, $a2, 0xFFFF
    ctx->r2 = ctx->r6 & 0XFFFF;
    // 0x80065E10: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80065E14: bne         $v0, $zero, L_80065DE0
    if (ctx->r2 != 0) {
        // 0x80065E18: andi        $v0, $a2, 0xFFFF
        ctx->r2 = ctx->r6 & 0XFFFF;
            goto L_80065DE0;
    }
    // 0x80065E18: andi        $v0, $a2, 0xFFFF
    ctx->r2 = ctx->r6 & 0XFFFF;
L_80065E1C:
    // 0x80065E1C: lw          $v0, 0x6C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X6C);
    // 0x80065E20: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80065E24: sw          $v0, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r2;
L_80065E28:
    // 0x80065E28: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80065E2C: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x80065E30: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80065E34: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80065E38: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x80065E3C: lw          $ra, 0x58($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X58);
    // 0x80065E40: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x80065E44: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x80065E48: jr          $ra
    // 0x80065E4C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x80065E4C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80046210_21610(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80046210: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80046214: lh          $v1, -0x35B8($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X35B8);
    // 0x80046218: beq         $v1, $zero, L_80046254
    if (ctx->r3 == 0) {
        // 0x8004621C: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_80046254;
    }
    // 0x8004621C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80046220: lh          $v0, 0x2($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X2);
    // 0x80046224: bltzl       $v1, L_8004622C
    if (SIGNED(ctx->r3) < 0) {
        // 0x80046228: negu        $v1, $v1
        ctx->r3 = SUB32(0, ctx->r3);
            goto L_8004622C;
    }
    goto skip_0;
    // 0x80046228: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    skip_0:
L_8004622C:
    // 0x8004622C: bltzl       $v0, L_80046248
    if (SIGNED(ctx->r2) < 0) {
        // 0x80046230: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_80046248;
    }
    goto skip_1;
    // 0x80046230: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_1:
    // 0x80046234: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80046238: bnel        $v0, $zero, L_80046258
    if (ctx->r2 != 0) {
        // 0x8004623C: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_80046258;
    }
    goto skip_2;
    // 0x8004623C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    skip_2:
    // 0x80046240: j           L_8004625C
    // 0x80046244: xori        $v1, $a1, 0x1
    ctx->r3 = ctx->r5 ^ 0X1;
        goto L_8004625C;
    // 0x80046244: xori        $v1, $a1, 0x1
    ctx->r3 = ctx->r5 ^ 0X1;
L_80046248:
    // 0x80046248: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8004624C: beq         $v0, $zero, L_8004625C
    if (ctx->r2 == 0) {
        // 0x80046250: xori        $v1, $a1, 0x1
        ctx->r3 = ctx->r5 ^ 0X1;
            goto L_8004625C;
    }
    // 0x80046250: xori        $v1, $a1, 0x1
    ctx->r3 = ctx->r5 ^ 0X1;
L_80046254:
    // 0x80046254: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_80046258:
    // 0x80046258: xori        $v1, $a1, 0x1
    ctx->r3 = ctx->r5 ^ 0X1;
L_8004625C:
    // 0x8004625C: beq         $v1, $zero, L_800462A4
    if (ctx->r3 == 0) {
        // 0x80046260: nop
    
            goto L_800462A4;
    }
    // 0x80046260: nop

    // 0x80046264: lh          $v0, 0x2($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X2);
    // 0x80046268: blez        $v0, L_8004628C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8004626C: nop
    
            goto L_8004628C;
    }
    // 0x8004626C: nop

    // 0x80046270: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80046274: lbu         $v0, -0x7818($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7818);
    // 0x80046278: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x8004627C: beq         $v0, $zero, L_800462A4
    if (ctx->r2 == 0) {
        // 0x80046280: andi        $v1, $v1, 0x1
        ctx->r3 = ctx->r3 & 0X1;
            goto L_800462A4;
    }
    // 0x80046280: andi        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 & 0X1;
    // 0x80046284: j           L_800462A4
    // 0x80046288: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
        goto L_800462A4;
    // 0x80046288: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_8004628C:
    // 0x8004628C: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80046290: lbu         $v0, -0x7818($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7818);
    // 0x80046294: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x80046298: bnel        $v0, $zero, L_800462A4
    if (ctx->r2 != 0) {
        // 0x8004629C: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_800462A4;
    }
    goto skip_3;
    // 0x8004629C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    skip_3:
    // 0x800462A0: andi        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 & 0X1;
L_800462A4:
    // 0x800462A4: jr          $ra
    // 0x800462A8: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    TRACE_RETURN()
    return;
    // 0x800462A8: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
;}
RECOMP_FUNC void func_8008C2F0_676F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008C2F0: lw          $v1, 0x40($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X40);
    // 0x8008C2F4: lbu         $v0, 0xBD($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XBD);
    // 0x8008C2F8: sb          $zero, 0xD9($a0)
    MEM_B(0XD9, ctx->r4) = 0;
    // 0x8008C2FC: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8008C300: sw          $v1, 0x94($a0)
    MEM_W(0X94, ctx->r4) = ctx->r3;
    // 0x8008C304: jr          $ra
    // 0x8008C308: sb          $v0, 0xDA($a0)
    MEM_B(0XDA, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x8008C308: sb          $v0, 0xDA($a0)
    MEM_B(0XDA, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_8007ADE8_561E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007ADE8: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8007ADEC: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8007ADF0: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8007ADF4: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x8007ADF8: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x8007ADFC: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x8007AE00: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x8007AE04: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x8007AE08: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x8007AE0C: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x8007AE10: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8007AE14: jal         0x8007B19C
    // 0x8007AE18: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    func_8007B19C_5659C(rdram, ctx);
        goto after_0;
    // 0x8007AE18: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    after_0:
    // 0x8007AE1C: addiu       $a3, $s2, 0x28
    ctx->r7 = ADD32(ctx->r18, 0X28);
    // 0x8007AE20: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8007AE24: bne         $v0, $zero, L_8007B130
    if (ctx->r2 != 0) {
        // 0x8007AE28: sw          $a3, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r7;
            goto L_8007B130;
    }
    // 0x8007AE28: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8007AE2C: lbu         $v0, 0x3($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X3);
    // 0x8007AE30: beq         $v0, $zero, L_8007AE60
    if (ctx->r2 == 0) {
        // 0x8007AE34: nop
    
            goto L_8007AE60;
    }
    // 0x8007AE34: nop

    // 0x8007AE38: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8007AE3C: lhu         $v0, 0x4DB0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4DB0);
    // 0x8007AE40: sh          $v0, 0x1C($s2)
    MEM_H(0X1C, ctx->r18) = ctx->r2;
    // 0x8007AE44: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8007AE48: lhu         $v0, 0x4DB2($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4DB2);
    // 0x8007AE4C: sh          $v0, 0x1E($s2)
    MEM_H(0X1E, ctx->r18) = ctx->r2;
    // 0x8007AE50: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8007AE54: lhu         $v0, 0x4DB4($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4DB4);
    // 0x8007AE58: j           L_8007AE84
    // 0x8007AE5C: sh          $v0, 0x20($s2)
    MEM_H(0X20, ctx->r18) = ctx->r2;
        goto L_8007AE84;
    // 0x8007AE5C: sh          $v0, 0x20($s2)
    MEM_H(0X20, ctx->r18) = ctx->r2;
L_8007AE60:
    // 0x8007AE60: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8007AE64: lhu         $v0, 0x4DC8($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4DC8);
    // 0x8007AE68: sh          $v0, 0x1C($s2)
    MEM_H(0X1C, ctx->r18) = ctx->r2;
    // 0x8007AE6C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8007AE70: lhu         $v0, 0x4DCA($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4DCA);
    // 0x8007AE74: sh          $v0, 0x1E($s2)
    MEM_H(0X1E, ctx->r18) = ctx->r2;
    // 0x8007AE78: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8007AE7C: lhu         $v0, 0x4DCC($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4DCC);
    // 0x8007AE80: sh          $v0, 0x20($s2)
    MEM_H(0X20, ctx->r18) = ctx->r2;
L_8007AE84:
    // 0x8007AE84: addu        $s5, $zero, $zero
    ctx->r21 = ADD32(0, 0);
    // 0x8007AE88: addu        $s7, $zero, $zero
    ctx->r23 = ADD32(0, 0);
L_8007AE8C:
    // 0x8007AE8C: addiu       $s4, $zero, 0x5
    ctx->r20 = ADD32(0, 0X5);
    // 0x8007AE90: jal         0x800A3450
    // 0x8007AE94: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x8007AE94: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
    after_1:
    // 0x8007AE98: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8007AE9C: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x8007AEA0: jal         0x800A3450
    // 0x8007AEA4: sh          $v0, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x8007AEA4: sh          $v0, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r2;
    after_2:
    // 0x8007AEA8: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x8007AEAC: andi        $v1, $s5, 0xFF
    ctx->r3 = ctx->r21 & 0XFF;
    // 0x8007AEB0: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8007AEB4: addu        $s0, $v1, $a3
    ctx->r16 = ADD32(ctx->r3, ctx->r7);
    // 0x8007AEB8: lhu         $v1, 0x10($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X10);
    // 0x8007AEBC: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8007AEC0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8007AEC4: sh          $v1, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r3;
    // 0x8007AEC8: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8007AECC: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8007AED0: slti        $v1, $v1, 0x8
    ctx->r3 = SIGNED(ctx->r3) < 0X8 ? 1 : 0;
    // 0x8007AED4: bne         $v1, $zero, L_8007AEE0
    if (ctx->r3 != 0) {
        // 0x8007AED8: addiu       $fp, $v0, 0x28
        ctx->r30 = ADD32(ctx->r2, 0X28);
            goto L_8007AEE0;
    }
    // 0x8007AED8: addiu       $fp, $v0, 0x28
    ctx->r30 = ADD32(ctx->r2, 0X28);
    // 0x8007AEDC: sh          $zero, 0x10($s0)
    MEM_H(0X10, ctx->r16) = 0;
L_8007AEE0:
    // 0x8007AEE0: lbu         $v0, 0x3($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X3);
    // 0x8007AEE4: beq         $v0, $zero, L_8007AF08
    if (ctx->r2 == 0) {
        // 0x8007AEE8: nop
    
            goto L_8007AF08;
    }
    // 0x8007AEE8: nop

    // 0x8007AEEC: jal         0x800A3450
    // 0x8007AEF0: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x8007AEF0: nop

    after_3:
    // 0x8007AEF4: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8007AEF8: lhu         $v1, 0x4A06($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X4A06);
    // 0x8007AEFC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8007AF00: j           L_8007AF20
    // 0x8007AF04: addiu       $v1, $v1, 0x80
    ctx->r3 = ADD32(ctx->r3, 0X80);
        goto L_8007AF20;
    // 0x8007AF04: addiu       $v1, $v1, 0x80
    ctx->r3 = ADD32(ctx->r3, 0X80);
L_8007AF08:
    // 0x8007AF08: jal         0x800A3450
    // 0x8007AF0C: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x8007AF0C: nop

    after_4:
    // 0x8007AF10: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8007AF14: lhu         $v1, 0x4A06($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X4A06);
    // 0x8007AF18: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8007AF1C: addiu       $v1, $v1, -0x100
    ctx->r3 = ADD32(ctx->r3, -0X100);
L_8007AF20:
    // 0x8007AF20: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8007AF24: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8007AF28: sh          $v1, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r3;
    // 0x8007AF2C: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x8007AF30: andi        $s1, $s5, 0xFF
    ctx->r17 = ctx->r21 & 0XFF;
    // 0x8007AF34: sll         $v0, $s1, 1
    ctx->r2 = S32(ctx->r17 << 1);
    // 0x8007AF38: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x8007AF3C: lh          $v0, 0x10($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X10);
    // 0x8007AF40: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8007AF44: blez        $v0, L_8007B10C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8007AF48: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_8007B10C;
    }
    // 0x8007AF48: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x8007AF4C: andi        $fp, $fp, 0xFFFF
    ctx->r30 = ctx->r30 & 0XFFFF;
    // 0x8007AF50: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x8007AF54: sll         $s1, $s1, 1
    ctx->r17 = S32(ctx->r17 << 1);
L_8007AF58:
    // 0x8007AF58: addu        $s1, $s1, $a3
    ctx->r17 = ADD32(ctx->r17, ctx->r7);
    // 0x8007AF5C: lhu         $a0, 0x0($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X0);
    // 0x8007AF60: jal         0x800324B4
    // 0x8007AF64: andi        $s0, $s4, 0xFFFF
    ctx->r16 = ctx->r20 & 0XFFFF;
    func_800324B4_D8B4(rdram, ctx);
        goto after_5;
    // 0x8007AF64: andi        $s0, $s4, 0xFFFF
    ctx->r16 = ctx->r20 & 0XFFFF;
    after_5:
    // 0x8007AF68: nop

    // 0x8007AF6C: mult        $v0, $s0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007AF70: mflo        $v0
    ctx->r2 = lo;
    // 0x8007AF74: lhu         $v1, 0x1C($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X1C);
    // 0x8007AF78: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x8007AF7C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8007AF80: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    // 0x8007AF84: jal         0x80032498
    // 0x8007AF88: lhu         $a0, 0x0($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X0);
    func_80032498_D898(rdram, ctx);
        goto after_6;
    // 0x8007AF88: lhu         $a0, 0x0($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X0);
    after_6:
    // 0x8007AF8C: mult        $v0, $s0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007AF90: mflo        $v0
    ctx->r2 = lo;
    // 0x8007AF94: lhu         $v1, 0x20($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X20);
    // 0x8007AF98: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x8007AF9C: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x8007AFA0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8007AFA4: jal         0x800324B4
    // 0x8007AFA8: sh          $v1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r3;
    func_800324B4_D8B4(rdram, ctx);
        goto after_7;
    // 0x8007AFA8: sh          $v1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r3;
    after_7:
    // 0x8007AFAC: nop

    // 0x8007AFB0: mult        $v0, $fp
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007AFB4: mflo        $v0
    ctx->r2 = lo;
    // 0x8007AFB8: lhu         $a3, 0x26($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X26);
    // 0x8007AFBC: lhu         $v1, 0x1E($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X1E);
    // 0x8007AFC0: addu        $s4, $s4, $a3
    ctx->r20 = ADD32(ctx->r20, ctx->r7);
    // 0x8007AFC4: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x8007AFC8: addiu       $v0, $v0, -0x10
    ctx->r2 = ADD32(ctx->r2, -0X10);
    // 0x8007AFCC: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8007AFD0: sh          $v1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r3;
    // 0x8007AFD4: lhu         $a0, 0x0($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X0);
    // 0x8007AFD8: andi        $v0, $s3, 0xFF
    ctx->r2 = ctx->r19 & 0XFF;
    // 0x8007AFDC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8007AFE0: jal         0x800324B4
    // 0x8007AFE4: sll         $s6, $v0, 6
    ctx->r22 = S32(ctx->r2 << 6);
    func_800324B4_D8B4(rdram, ctx);
        goto after_8;
    // 0x8007AFE4: sll         $s6, $v0, 6
    ctx->r22 = S32(ctx->r2 << 6);
    after_8:
    // 0x8007AFE8: andi        $s0, $s4, 0xFFFF
    ctx->r16 = ctx->r20 & 0XFFFF;
    // 0x8007AFEC: mult        $v0, $s0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007AFF0: mflo        $v0
    ctx->r2 = lo;
    // 0x8007AFF4: lhu         $v1, 0x1C($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X1C);
    // 0x8007AFF8: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x8007AFFC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8007B000: sh          $v1, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r3;
    // 0x8007B004: jal         0x80032498
    // 0x8007B008: lhu         $a0, 0x0($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X0);
    func_80032498_D898(rdram, ctx);
        goto after_9;
    // 0x8007B008: lhu         $a0, 0x0($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X0);
    after_9:
    // 0x8007B00C: mult        $v0, $s0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007B010: mflo        $v0
    ctx->r2 = lo;
    // 0x8007B014: lhu         $v1, 0x20($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X20);
    // 0x8007B018: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x8007B01C: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x8007B020: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8007B024: jal         0x800324B4
    // 0x8007B028: sh          $v1, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r3;
    func_800324B4_D8B4(rdram, ctx);
        goto after_10;
    // 0x8007B028: sh          $v1, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r3;
    after_10:
    // 0x8007B02C: nop

    // 0x8007B030: mult        $v0, $fp
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007B034: mflo        $v0
    ctx->r2 = lo;
    // 0x8007B038: lhu         $v1, 0x1E($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X1E);
    // 0x8007B03C: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x8007B040: addiu       $v0, $v0, -0x10
    ctx->r2 = ADD32(ctx->r2, -0X10);
    // 0x8007B044: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8007B048: jal         0x800A3450
    // 0x8007B04C: sh          $v1, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_11;
    // 0x8007B04C: sh          $v1, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r3;
    after_11:
    // 0x8007B050: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8007B054: beql        $v0, $zero, L_8007B0E0
    if (ctx->r2 == 0) {
        // 0x8007B058: addu        $s7, $zero, $zero
        ctx->r23 = ADD32(0, 0);
            goto L_8007B0E0;
    }
    goto skip_0;
    // 0x8007B058: addu        $s7, $zero, $zero
    ctx->r23 = ADD32(0, 0);
    skip_0:
    // 0x8007B05C: jal         0x8003B8FC
    // 0x8007B060: nop

    func_8003B8FC_16CFC(rdram, ctx);
        goto after_12;
    // 0x8007B060: nop

    after_12:
    // 0x8007B064: lui         $a0, 0x5210
    ctx->r4 = S32(0X5210 << 16);
    // 0x8007B068: lh          $v1, 0x12($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X12);
    // 0x8007B06C: lh          $a1, 0x10($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X10);
    // 0x8007B070: ori         $a0, $a0, 0x4080
    ctx->r4 = ctx->r4 | 0X4080;
    // 0x8007B074: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x8007B078: sw          $a0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r4;
    // 0x8007B07C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8007B080: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8007B084: sw          $v1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r3;
    // 0x8007B088: lh          $v0, 0x1A($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X1A);
    // 0x8007B08C: lh          $v1, 0x18($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X18);
    // 0x8007B090: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8007B094: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8007B098: sw          $v0, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r2;
    // 0x8007B09C: andi        $v0, $s7, 0xFF
    ctx->r2 = ctx->r23 & 0XFF;
    // 0x8007B0A0: beq         $v0, $zero, L_8007B0B0
    if (ctx->r2 == 0) {
        // 0x8007B0A4: lui         $v0, 0x10
        ctx->r2 = S32(0X10 << 16);
            goto L_8007B0B0;
    }
    // 0x8007B0A4: lui         $v0, 0x10
    ctx->r2 = S32(0X10 << 16);
    // 0x8007B0A8: j           L_8007B0B8
    // 0x8007B0AC: ori         $v0, $v0, 0x4080
    ctx->r2 = ctx->r2 | 0X4080;
        goto L_8007B0B8;
    // 0x8007B0AC: ori         $v0, $v0, 0x4080
    ctx->r2 = ctx->r2 | 0X4080;
L_8007B0B0:
    // 0x8007B0B0: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x8007B0B4: ori         $v0, $v0, 0x101
    ctx->r2 = ctx->r2 | 0X101;
L_8007B0B8:
    // 0x8007B0B8: sw          $v0, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r2;
    // 0x8007B0BC: lui         $v0, 0xE100
    ctx->r2 = S32(0XE100 << 16);
    // 0x8007B0C0: lh          $v1, 0x14($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X14);
    // 0x8007B0C4: lh          $a0, 0x1C($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1C);
    // 0x8007B0C8: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x8007B0CC: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    // 0x8007B0D0: sw          $v0, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->r2;
    // 0x8007B0D4: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8007B0D8: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8007B0DC: sw          $v1, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->r3;
L_8007B0E0:
    // 0x8007B0E0: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x8007B0E4: andi        $s1, $s5, 0xFF
    ctx->r17 = ctx->r21 & 0XFF;
    // 0x8007B0E8: sll         $v0, $s1, 1
    ctx->r2 = S32(ctx->r17 << 1);
    // 0x8007B0EC: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x8007B0F0: lh          $v1, 0x10($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X10);
    // 0x8007B0F4: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8007B0F8: andi        $v0, $s3, 0xFF
    ctx->r2 = ctx->r19 & 0XFF;
    // 0x8007B0FC: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8007B100: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8007B104: bnel        $v0, $zero, L_8007AF58
    if (ctx->r2 != 0) {
        // 0x8007B108: sll         $s1, $s1, 1
        ctx->r17 = S32(ctx->r17 << 1);
            goto L_8007AF58;
    }
    goto skip_1;
    // 0x8007B108: sll         $s1, $s1, 1
    ctx->r17 = S32(ctx->r17 << 1);
    skip_1:
L_8007B10C:
    // 0x8007B10C: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x8007B110: andi        $v0, $s5, 0xFF
    ctx->r2 = ctx->r21 & 0XFF;
    // 0x8007B114: sltiu       $v0, $v0, 0x8
    ctx->r2 = ctx->r2 < 0X8 ? 1 : 0;
    // 0x8007B118: bnel        $v0, $zero, L_8007AE8C
    if (ctx->r2 != 0) {
        // 0x8007B11C: addu        $s7, $zero, $zero
        ctx->r23 = ADD32(0, 0);
            goto L_8007AE8C;
    }
    goto skip_2;
    // 0x8007B11C: addu        $s7, $zero, $zero
    ctx->r23 = ADD32(0, 0);
    skip_2:
    // 0x8007B120: addiu       $a0, $zero, 0x8D
    ctx->r4 = ADD32(0, 0X8D);
    // 0x8007B124: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8007B128: jal         0x8002A2F8
    // 0x8007B12C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_13;
    // 0x8007B12C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_13:
L_8007B130:
    // 0x8007B130: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x8007B134: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x8007B138: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x8007B13C: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x8007B140: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x8007B144: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x8007B148: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x8007B14C: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x8007B150: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8007B154: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8007B158: jr          $ra
    // 0x8007B15C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x8007B15C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_800918A0_6CCA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800918A0: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x800918A4: lw          $v1, -0xEEC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0XEEC);
    // 0x800918A8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800918AC: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x800918B0: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x800918B4: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x800918B8: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x800918BC: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x800918C0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x800918C4: lw          $s3, 0x14($s2)
    ctx->r19 = MEM_W(ctx->r18, 0X14);
    // 0x800918C8: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x800918CC: lw          $v0, 0x4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4);
    // 0x800918D0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x800918D4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x800918D8: sw          $zero, 0x20($v1)
    MEM_W(0X20, ctx->r3) = 0;
    // 0x800918DC: sw          $zero, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = 0;
    // 0x800918E0: sw          $v0, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->r2;
    // 0x800918E4: lw          $a2, 0x18($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X18);
    // 0x800918E8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x800918EC: addiu       $v0, $zero, 0xB8
    ctx->r2 = ADD32(0, 0XB8);
    // 0x800918F0: sw          $v0, 0x44($v1)
    MEM_W(0X44, ctx->r3) = ctx->r2;
    // 0x800918F4: sw          $a2, 0x40($v1)
    MEM_W(0X40, ctx->r3) = ctx->r6;
    // 0x800918F8: lw          $t0, 0x10($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X10);
    // 0x800918FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80091900: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x80091904: sw          $v0, 0x4C($v1)
    MEM_W(0X4C, ctx->r3) = ctx->r2;
    // 0x80091908: addiu       $v0, $zero, 0x44
    ctx->r2 = ADD32(0, 0X44);
    // 0x8009190C: sw          $zero, 0x48($v1)
    MEM_W(0X48, ctx->r3) = 0;
    // 0x80091910: sw          $t0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r8;
    // 0x80091914: jal         0x80098CC0
    // 0x80091918: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    alHeapDBAlloc(rdram, ctx);
        goto after_0;
    // 0x80091918: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x8009191C: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x80091920: lw          $v1, -0xEEC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0XEEC);
    // 0x80091924: sw          $v0, 0x34($v1)
    MEM_W(0X34, ctx->r3) = ctx->r2;
    // 0x80091928: sw          $zero, 0x14($v0)
    MEM_W(0X14, ctx->r2) = 0;
    // 0x8009192C: lw          $v1, 0x34($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X34);
    // 0x80091930: lw          $v0, 0x4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4);
    // 0x80091934: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80091938: sw          $v0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r2;
    // 0x8009193C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80091940: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80091944: lw          $a3, 0x4($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X4);
    // 0x80091948: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8009194C: jal         0x80098CC0
    // 0x80091950: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    alHeapDBAlloc(rdram, ctx);
        goto after_1;
    // 0x80091950: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_1:
    // 0x80091954: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x80091958: lw          $v1, -0xEEC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0XEEC);
    // 0x8009195C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80091960: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80091964: lw          $v1, 0x34($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X34);
    // 0x80091968: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x8009196C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80091970: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x80091974: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80091978: jal         0x80098CC0
    // 0x8009197C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    alHeapDBAlloc(rdram, ctx);
        goto after_2;
    // 0x8009197C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_2:
    // 0x80091980: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x80091984: lw          $v1, -0xEEC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0XEEC);
    // 0x80091988: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8009198C: sw          $a0, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r4;
    // 0x80091990: lbu         $v0, 0x1C($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X1C);
    // 0x80091994: beq         $v0, $zero, L_800919CC
    if (ctx->r2 == 0) {
        // 0x80091998: addu        $a1, $s2, $zero
        ctx->r5 = ADD32(ctx->r18, 0);
            goto L_800919CC;
    }
    // 0x80091998: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8009199C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x800919A0: jal         0x80091E50
    // 0x800919A4: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    func_80091E50_6D250(rdram, ctx);
        goto after_3;
    // 0x800919A4: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_3:
    // 0x800919A8: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x800919AC: lw          $a0, -0xEEC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XEEC);
    // 0x800919B0: lw          $v1, 0x34($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X34);
    // 0x800919B4: sw          $v0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r2;
    // 0x800919B8: lw          $v1, 0x30($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X30);
    // 0x800919BC: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x800919C0: addiu       $v0, $v0, 0x870
    ctx->r2 = ADD32(ctx->r2, 0X870);
    // 0x800919C4: j           L_800919D8
    // 0x800919C8: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
        goto L_800919D8;
    // 0x800919C8: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
L_800919CC:
    // 0x800919CC: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x800919D0: addiu       $v0, $v0, -0x1020
    ctx->r2 = ADD32(ctx->r2, -0X1020);
    // 0x800919D4: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
L_800919D8:
    // 0x800919D8: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x800919DC: lw          $v0, -0xEEC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XEEC);
    // 0x800919E0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x800919E4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x800919E8: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x800919EC: sw          $zero, 0x14($v0)
    MEM_W(0X14, ctx->r2) = 0;
    // 0x800919F0: sw          $zero, 0x18($v0)
    MEM_W(0X18, ctx->r2) = 0;
    // 0x800919F4: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x800919F8: sw          $zero, 0x10($v0)
    MEM_W(0X10, ctx->r2) = 0;
    // 0x800919FC: addiu       $v0, $zero, 0x8C
    ctx->r2 = ADD32(0, 0X8C);
    // 0x80091A00: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80091A04: lw          $a3, 0x4($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X4);
    // 0x80091A08: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80091A0C: jal         0x80098CC0
    // 0x80091A10: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    alHeapDBAlloc(rdram, ctx);
        goto after_4;
    // 0x80091A10: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_4:
    // 0x80091A14: lw          $v1, 0x4($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X4);
    // 0x80091A18: blez        $v1, L_80091A90
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80091A1C: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_80091A90;
    }
    // 0x80091A1C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80091A20: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
L_80091A24:
    // 0x80091A24: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80091A28: lw          $a1, -0xEEC($a1)
    ctx->r5 = MEM_W(ctx->r5, -0XEEC);
    // 0x80091A2C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80091A30: jal         0x80098C2C
    // 0x80091A34: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    alLink(rdram, ctx);
        goto after_5;
    // 0x80091A34: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    after_5:
    // 0x80091A38: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80091A3C: lw          $v0, -0xEEC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XEEC);
    // 0x80091A40: sw          $zero, 0x8($s1)
    MEM_W(0X8, ctx->r17) = 0;
    // 0x80091A44: lw          $a1, 0x24($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X24);
    // 0x80091A48: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80091A4C: jal         0x8008F46C
    // 0x80091A50: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    func_8008F46C_6A86C(rdram, ctx);
        goto after_6;
    // 0x80091A50: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_6:
    // 0x80091A54: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80091A58: lw          $v0, -0xEEC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XEEC);
    // 0x80091A5C: lw          $a0, 0x34($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X34);
    // 0x80091A60: lw          $v1, 0x14($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X14);
    // 0x80091A64: lw          $a1, 0x1C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X1C);
    // 0x80091A68: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80091A6C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80091A70: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80091A74: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x80091A78: sw          $s1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r17;
    // 0x80091A7C: lw          $v0, 0x4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4);
    // 0x80091A80: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80091A84: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80091A88: bne         $v0, $zero, L_80091A24
    if (ctx->r2 != 0) {
        // 0x80091A8C: addiu       $s1, $s1, 0x8C
        ctx->r17 = ADD32(ctx->r17, 0X8C);
            goto L_80091A24;
    }
    // 0x80091A8C: addiu       $s1, $s1, 0x8C
    ctx->r17 = ADD32(ctx->r17, 0X8C);
L_80091A90:
    // 0x80091A90: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80091A94: addiu       $v0, $zero, 0x1C
    ctx->r2 = ADD32(0, 0X1C);
    // 0x80091A98: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80091A9C: lw          $a3, 0x8($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X8);
    // 0x80091AA0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80091AA4: jal         0x80098CC0
    // 0x80091AA8: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    alHeapDBAlloc(rdram, ctx);
        goto after_7;
    // 0x80091AA8: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_7:
    // 0x80091AAC: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80091AB0: lw          $a0, -0xEEC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XEEC);
    // 0x80091AB4: sw          $zero, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = 0;
    // 0x80091AB8: lw          $v1, 0x8($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X8);
    // 0x80091ABC: blez        $v1, L_80091AE8
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80091AC0: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_80091AE8;
    }
    // 0x80091AC0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80091AC4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_80091AC8:
    // 0x80091AC8: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
    // 0x80091ACC: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80091AD0: sw          $v1, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r3;
    // 0x80091AD4: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
    // 0x80091AD8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80091ADC: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80091AE0: bne         $v0, $zero, L_80091AC8
    if (ctx->r2 != 0) {
        // 0x80091AE4: addiu       $v1, $v1, 0x1C
        ctx->r3 = ADD32(ctx->r3, 0X1C);
            goto L_80091AC8;
    }
    // 0x80091AE4: addiu       $v1, $v1, 0x1C
    ctx->r3 = ADD32(ctx->r3, 0X1C);
L_80091AE8:
    // 0x80091AE8: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80091AEC: lw          $v0, -0xEEC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XEEC);
    // 0x80091AF0: sw          $s3, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r19;
    // 0x80091AF4: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x80091AF8: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80091AFC: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80091B00: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80091B04: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80091B08: jr          $ra
    // 0x80091B0C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80091B0C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80025DD0_11D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80025DD0: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80025DD4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80025DD8: sw          $zero, 0x34D0($at)
    MEM_W(0X34D0, ctx->r1) = 0;
    // 0x80025DDC: lui         $v1, 0x803B
    ctx->r3 = S32(0X803B << 16);
    // 0x80025DE0: ori         $v1, $v1, 0x5000
    ctx->r3 = ctx->r3 | 0X5000;
    // 0x80025DE4: lui         $v0, 0x8026
    ctx->r2 = S32(0X8026 << 16);
    // 0x80025DE8: addiu       $v0, $v0, -0x6D20
    ctx->r2 = ADD32(ctx->r2, -0X6D20);
    // 0x80025DEC: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80025DF0: beq         $v1, $zero, L_80025E14
    if (ctx->r3 == 0) {
        // 0x80025DF4: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80025E14;
    }
    // 0x80025DF4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_80025DF8:
    // 0x80025DF8: lui         $at, 0x8026
    ctx->r1 = S32(0X8026 << 16);
    // 0x80025DFC: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x80025E00: sb          $zero, -0x6D20($at)
    MEM_B(-0X6D20, ctx->r1) = 0;
    // 0x80025E04: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80025E08: sltu        $v0, $a0, $v1
    ctx->r2 = ctx->r4 < ctx->r3 ? 1 : 0;
    // 0x80025E0C: bne         $v0, $zero, L_80025DF8
    if (ctx->r2 != 0) {
        // 0x80025E10: nop
    
            goto L_80025DF8;
    }
    // 0x80025E10: nop

L_80025E14:
    // 0x80025E14: jr          $ra
    // 0x80025E18: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x80025E18: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8003064C_BA4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003064C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80030650: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
    // 0x80030654: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x80030658: jr          $ra
    // 0x8003065C: sb          $v0, 0x7($a0)
    MEM_B(0X7, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x8003065C: sb          $v0, 0x7($a0)
    MEM_B(0X7, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_80070A18_4BE18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80070A18: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80070A1C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80070A20: lb          $v1, 0x178($a0)
    ctx->r3 = MEM_B(ctx->r4, 0X178);
    // 0x80070A24: lb          $a1, 0x170($a0)
    ctx->r5 = MEM_B(ctx->r4, 0X170);
    // 0x80070A28: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80070A2C: beq         $v1, $a3, L_80070AB0
    if (ctx->r3 == ctx->r7) {
        // 0x80070A30: addu        $a2, $v1, $zero
        ctx->r6 = ADD32(ctx->r3, 0);
            goto L_80070AB0;
    }
    // 0x80070A30: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x80070A34: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80070A38: beql        $v0, $zero, L_80070A50
    if (ctx->r2 == 0) {
        // 0x80070A3C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80070A50;
    }
    goto skip_0;
    // 0x80070A3C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80070A40: beq         $v1, $zero, L_80070A68
    if (ctx->r3 == 0) {
        // 0x80070A44: sll         $v0, $a1, 1
        ctx->r2 = S32(ctx->r5 << 1);
            goto L_80070A68;
    }
    // 0x80070A44: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x80070A48: j           L_80070B58
    // 0x80070A4C: nop

        goto L_80070B58;
    // 0x80070A4C: nop

L_80070A50:
    // 0x80070A50: beq         $v1, $v0, L_80070AEC
    if (ctx->r3 == ctx->r2) {
        // 0x80070A54: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80070AEC;
    }
    // 0x80070A54: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80070A58: beq         $v1, $v0, L_80070B40
    if (ctx->r3 == ctx->r2) {
        // 0x80070A5C: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80070B40;
    }
    // 0x80070A5C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80070A60: j           L_80070B58
    // 0x80070A64: nop

        goto L_80070B58;
    // 0x80070A64: nop

L_80070A68:
    // 0x80070A68: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80070A6C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80070A70: lbu         $v1, 0x100($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X100);
    // 0x80070A74: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80070A78: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80070A7C: lbu         $v0, 0x30F4($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X30F4);
    // 0x80070A80: bne         $v1, $v0, L_80070A98
    if (ctx->r3 != ctx->r2) {
        // 0x80070A84: addiu       $v1, $a2, 0x1
        ctx->r3 = ADD32(ctx->r6, 0X1);
            goto L_80070A98;
    }
    // 0x80070A84: addiu       $v1, $a2, 0x1
    ctx->r3 = ADD32(ctx->r6, 0X1);
    // 0x80070A88: lbu         $v0, 0x174($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X174);
    // 0x80070A8C: sb          $v1, 0x178($a0)
    MEM_B(0X178, ctx->r4) = ctx->r3;
    // 0x80070A90: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x80070A94: sb          $v0, 0x174($a0)
    MEM_B(0X174, ctx->r4) = ctx->r2;
L_80070A98:
    // 0x80070A98: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80070A9C: lbu         $v0, -0x3B95($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3B95);
    // 0x80070AA0: beq         $v0, $a3, L_80070B54
    if (ctx->r2 == ctx->r7) {
        // 0x80070AA4: addiu       $v0, $zero, 0x90
        ctx->r2 = ADD32(0, 0X90);
            goto L_80070B54;
    }
    // 0x80070AA4: addiu       $v0, $zero, 0x90
    ctx->r2 = ADD32(0, 0X90);
    // 0x80070AA8: j           L_80070B58
    // 0x80070AAC: sh          $v0, 0x44($a0)
    MEM_H(0X44, ctx->r4) = ctx->r2;
        goto L_80070B58;
    // 0x80070AAC: sh          $v0, 0x44($a0)
    MEM_H(0X44, ctx->r4) = ctx->r2;
L_80070AB0:
    // 0x80070AB0: lbu         $v0, 0x174($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X174);
    // 0x80070AB4: lbu         $v1, 0x100($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X100);
    // 0x80070AB8: andi        $v0, $v0, 0xCF
    ctx->r2 = ctx->r2 & 0XCF;
    // 0x80070ABC: sb          $v0, 0x174($a0)
    MEM_B(0X174, ctx->r4) = ctx->r2;
    // 0x80070AC0: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x80070AC4: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80070AC8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80070ACC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80070AD0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80070AD4: lbu         $v0, 0x30F5($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X30F5);
    // 0x80070AD8: bne         $v1, $v0, L_80070B58
    if (ctx->r3 != ctx->r2) {
        // 0x80070ADC: nop
    
            goto L_80070B58;
    }
    // 0x80070ADC: nop

    // 0x80070AE0: lbu         $v0, 0x178($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X178);
    // 0x80070AE4: j           L_80070B34
    // 0x80070AE8: sh          $zero, 0x44($a0)
    MEM_H(0X44, ctx->r4) = 0;
        goto L_80070B34;
    // 0x80070AE8: sh          $zero, 0x44($a0)
    MEM_H(0X44, ctx->r4) = 0;
L_80070AEC:
    // 0x80070AEC: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x80070AF0: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80070AF4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80070AF8: lbu         $v1, 0x100($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X100);
    // 0x80070AFC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80070B00: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80070B04: lbu         $v0, 0x30F6($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X30F6);
    // 0x80070B08: sltu        $v1, $v1, $v0
    ctx->r3 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x80070B0C: bne         $v1, $zero, L_80070B58
    if (ctx->r3 != 0) {
        // 0x80070B10: nop
    
            goto L_80070B58;
    }
    // 0x80070B10: nop

    // 0x80070B14: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80070B18: lbu         $v0, -0x3B95($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3B95);
    // 0x80070B1C: bne         $v0, $a3, L_80070B2C
    if (ctx->r2 != ctx->r7) {
        // 0x80070B20: addiu       $v0, $zero, 0x60
        ctx->r2 = ADD32(0, 0X60);
            goto L_80070B2C;
    }
    // 0x80070B20: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x80070B24: j           L_80070B30
    // 0x80070B28: sh          $zero, 0x44($a0)
    MEM_H(0X44, ctx->r4) = 0;
        goto L_80070B30;
    // 0x80070B28: sh          $zero, 0x44($a0)
    MEM_H(0X44, ctx->r4) = 0;
L_80070B2C:
    // 0x80070B2C: sh          $v0, 0x44($a0)
    MEM_H(0X44, ctx->r4) = ctx->r2;
L_80070B30:
    // 0x80070B30: lbu         $v0, 0x178($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X178);
L_80070B34:
    // 0x80070B34: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80070B38: j           L_80070B58
    // 0x80070B3C: sb          $v0, 0x178($a0)
    MEM_B(0X178, ctx->r4) = ctx->r2;
        goto L_80070B58;
    // 0x80070B3C: sb          $v0, 0x178($a0)
    MEM_B(0X178, ctx->r4) = ctx->r2;
L_80070B40:
    // 0x80070B40: lb          $v1, 0x103($a0)
    ctx->r3 = MEM_B(ctx->r4, 0X103);
    // 0x80070B44: bne         $v1, $v0, L_80070B58
    if (ctx->r3 != ctx->r2) {
        // 0x80070B48: nop
    
            goto L_80070B58;
    }
    // 0x80070B48: nop

    // 0x80070B4C: sb          $zero, 0x174($a0)
    MEM_B(0X174, ctx->r4) = 0;
    // 0x80070B50: sb          $zero, 0x177($a0)
    MEM_B(0X177, ctx->r4) = 0;
L_80070B54:
    // 0x80070B54: sh          $zero, 0x44($a0)
    MEM_H(0X44, ctx->r4) = 0;
L_80070B58:
    // 0x80070B58: lh          $a1, 0x44($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X44);
    // 0x80070B5C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80070B60: jal         0x8006FC34
    // 0x80070B64: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8006FC34_4B034(rdram, ctx);
        goto after_0;
    // 0x80070B64: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x80070B68: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80070B6C: jr          $ra
    // 0x80070B70: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80070B70: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80032554_D954(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80032554: blez        $a0, L_800325D0
    if (SIGNED(ctx->r4) <= 0) {
        // 0x80032558: slti        $v0, $a0, 0x1000
        ctx->r2 = SIGNED(ctx->r4) < 0X1000 ? 1 : 0;
            goto L_800325D0;
    }
    // 0x80032558: slti        $v0, $a0, 0x1000
    ctx->r2 = SIGNED(ctx->r4) < 0X1000 ? 1 : 0;
    // 0x8003255C: beql        $v0, $zero, L_8003258C
    if (ctx->r2 == 0) {
        // 0x80032560: lui         $v0, 0x28
        ctx->r2 = S32(0X28 << 16);
            goto L_8003258C;
    }
    goto skip_0;
    // 0x80032560: lui         $v0, 0x28
    ctx->r2 = S32(0X28 << 16);
    skip_0:
    // 0x80032564: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x80032568: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8003256C: sll         $v0, $v0, 7
    ctx->r2 = S32(ctx->r2 << 7);
    // 0x80032570: sra         $a0, $v0, 12
    ctx->r4 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80032574: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80032578: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8003257C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80032580: lh          $a0, -0x77A0($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X77A0);
    // 0x80032584: j           L_8003265C
    // 0x80032588: andi        $v0, $a0, 0xFFF
    ctx->r2 = ctx->r4 & 0XFFF;
        goto L_8003265C;
    // 0x80032588: andi        $v0, $a0, 0xFFF
    ctx->r2 = ctx->r4 & 0XFFF;
L_8003258C:
    // 0x8003258C: div         $zero, $v0, $a0
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r4)));
    // 0x80032590: bne         $a0, $zero, L_8003259C
    if (ctx->r4 != 0) {
        // 0x80032594: nop
    
            goto L_8003259C;
    }
    // 0x80032594: nop

    // 0x80032598: break       7
    do_break(2147689880);
L_8003259C:
    // 0x8003259C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800325A0: bne         $a0, $at, L_800325B4
    if (ctx->r4 != ctx->r1) {
        // 0x800325A4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800325B4;
    }
    // 0x800325A4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800325A8: bne         $v0, $at, L_800325B4
    if (ctx->r2 != ctx->r1) {
        // 0x800325AC: nop
    
            goto L_800325B4;
    }
    // 0x800325AC: nop

    // 0x800325B0: break       6
    do_break(2147689904);
L_800325B4:
    // 0x800325B4: mflo        $a0
    ctx->r4 = lo;
    // 0x800325B8: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x800325BC: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x800325C0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x800325C4: lh          $v1, -0x77A0($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X77A0);
    // 0x800325C8: j           L_8003260C
    // 0x800325CC: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
        goto L_8003260C;
    // 0x800325CC: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
L_800325D0:
    // 0x800325D0: bgez        $a0, L_8003265C
    if (SIGNED(ctx->r4) >= 0) {
        // 0x800325D4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8003265C;
    }
    // 0x800325D4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x800325D8: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
    // 0x800325DC: slti        $v0, $a0, 0x1000
    ctx->r2 = SIGNED(ctx->r4) < 0X1000 ? 1 : 0;
    // 0x800325E0: beql        $v0, $zero, L_80032618
    if (ctx->r2 == 0) {
        // 0x800325E4: lui         $v0, 0x28
        ctx->r2 = S32(0X28 << 16);
            goto L_80032618;
    }
    goto skip_1;
    // 0x800325E4: lui         $v0, 0x28
    ctx->r2 = S32(0X28 << 16);
    skip_1:
    // 0x800325E8: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x800325EC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x800325F0: sll         $v0, $v0, 7
    ctx->r2 = S32(ctx->r2 << 7);
    // 0x800325F4: sra         $a0, $v0, 12
    ctx->r4 = S32(SIGNED(ctx->r2) >> 12);
    // 0x800325F8: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x800325FC: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80032600: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80032604: lh          $v1, -0x77A0($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X77A0);
    // 0x80032608: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
L_8003260C:
    // 0x8003260C: subu        $a0, $v0, $v1
    ctx->r4 = SUB32(ctx->r2, ctx->r3);
    // 0x80032610: j           L_8003265C
    // 0x80032614: andi        $v0, $a0, 0xFFF
    ctx->r2 = ctx->r4 & 0XFFF;
        goto L_8003265C;
    // 0x80032614: andi        $v0, $a0, 0xFFF
    ctx->r2 = ctx->r4 & 0XFFF;
L_80032618:
    // 0x80032618: div         $zero, $v0, $a0
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r4)));
    // 0x8003261C: bne         $a0, $zero, L_80032628
    if (ctx->r4 != 0) {
        // 0x80032620: nop
    
            goto L_80032628;
    }
    // 0x80032620: nop

    // 0x80032624: break       7
    do_break(2147690020);
L_80032628:
    // 0x80032628: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8003262C: bne         $a0, $at, L_80032640
    if (ctx->r4 != ctx->r1) {
        // 0x80032630: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80032640;
    }
    // 0x80032630: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80032634: bne         $v0, $at, L_80032640
    if (ctx->r2 != ctx->r1) {
        // 0x80032638: nop
    
            goto L_80032640;
    }
    // 0x80032638: nop

    // 0x8003263C: break       6
    do_break(2147690044);
L_80032640:
    // 0x80032640: mflo        $a0
    ctx->r4 = lo;
    // 0x80032644: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80032648: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8003264C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80032650: lh          $v0, -0x77A0($at)
    ctx->r2 = MEM_H(ctx->r1, -0X77A0);
    // 0x80032654: addiu       $a0, $v0, 0xC00
    ctx->r4 = ADD32(ctx->r2, 0XC00);
    // 0x80032658: andi        $v0, $a0, 0xFFF
    ctx->r2 = ctx->r4 & 0XFFF;
L_8003265C:
    // 0x8003265C: jr          $ra
    // 0x80032660: nop

    TRACE_RETURN()
    return;
    // 0x80032660: nop

;}
RECOMP_FUNC void func_8008E3A0_697A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008E3A0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8008E3A4: sb          $v0, 0x1C($a0)
    MEM_B(0X1C, ctx->r4) = ctx->r2;
    // 0x8008E3A8: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x8008E3AC: addiu       $v0, $v0, -0x1368
    ctx->r2 = ADD32(ctx->r2, -0X1368);
    // 0x8008E3B0: jr          $ra
    // 0x8008E3B4: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x8008E3B4: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_800740A8_4F4A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800740A8: jr          $ra
    // 0x800740AC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    TRACE_RETURN()
    return;
    // 0x800740AC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_80081398_5C798(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80081398: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8008139C: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x800813A0: addu        $s5, $a2, $zero
    ctx->r21 = ADD32(ctx->r6, 0);
    // 0x800813A4: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x800813A8: addu        $s6, $a0, $zero
    ctx->r22 = ADD32(ctx->r4, 0);
    // 0x800813AC: sltiu       $v0, $a1, 0x1
    ctx->r2 = ctx->r5 < 0X1 ? 1 : 0;
    // 0x800813B0: sltiu       $v1, $s5, 0x1
    ctx->r3 = ctx->r21 < 0X1 ? 1 : 0;
    // 0x800813B4: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x800813B8: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x800813BC: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x800813C0: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x800813C4: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x800813C8: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x800813CC: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x800813D0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x800813D4: bne         $v0, $zero, L_800813E4
    if (ctx->r2 != 0) {
        // 0x800813D8: sw          $s0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r16;
            goto L_800813E4;
    }
    // 0x800813D8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800813DC: bnel        $a3, $zero, L_800813EC
    if (ctx->r7 != 0) {
        // 0x800813E0: sw          $s5, 0x4($a1)
        MEM_W(0X4, ctx->r5) = ctx->r21;
            goto L_800813EC;
    }
    goto skip_0;
    // 0x800813E0: sw          $s5, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r21;
    skip_0:
L_800813E4:
    // 0x800813E4: j           L_80081658
    // 0x800813E8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_80081658;
    // 0x800813E8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_800813EC:
    // 0x800813EC: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x800813F0: addiu       $a0, $a0, -0x72FC
    ctx->r4 = ADD32(ctx->r4, -0X72FC);
    // 0x800813F4: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x800813F8: andi        $v1, $s6, 0xFFFF
    ctx->r3 = ctx->r22 & 0XFFFF;
    // 0x800813FC: bne         $v0, $v1, L_80081434
    if (ctx->r2 != ctx->r3) {
        // 0x80081400: addu        $s4, $a3, $zero
        ctx->r20 = ADD32(ctx->r7, 0);
            goto L_80081434;
    }
    // 0x80081400: addu        $s4, $a3, $zero
    ctx->r20 = ADD32(ctx->r7, 0);
    // 0x80081404: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80081408: addiu       $v1, $a0, -0xC
    ctx->r3 = ADD32(ctx->r4, -0XC);
    // 0x8008140C: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
L_80081410:
    // 0x80081410: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80081414: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80081418: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8008141C: sw          $v0, 0x70($a1)
    MEM_W(0X70, ctx->r5) = ctx->r2;
    // 0x80081420: slti        $v0, $s0, 0x3
    ctx->r2 = SIGNED(ctx->r16) < 0X3 ? 1 : 0;
    // 0x80081424: bne         $v0, $zero, L_80081410
    if (ctx->r2 != 0) {
        // 0x80081428: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_80081410;
    }
    // 0x80081428: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x8008142C: j           L_80081658
    // 0x80081430: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
        goto L_80081658;
    // 0x80081430: addu        $v0, $a3, $zero
    ctx->r2 = ADD32(ctx->r7, 0);
L_80081434:
    // 0x80081434: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80081438: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x8008143C: addiu       $v0, $v0, 0x2DF4
    ctx->r2 = ADD32(ctx->r2, 0X2DF4);
    // 0x80081440: addu        $s3, $v1, $v0
    ctx->r19 = ADD32(ctx->r3, ctx->r2);
    // 0x80081444: sw          $s5, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r21;
    // 0x80081448: sw          $s4, 0x78($s5)
    MEM_W(0X78, ctx->r21) = ctx->r20;
    // 0x8008144C: sw          $s4, 0x74($s5)
    MEM_W(0X74, ctx->r21) = ctx->r20;
    // 0x80081450: sw          $s4, 0x70($s5)
    MEM_W(0X70, ctx->r21) = ctx->r20;
    // 0x80081454: lh          $a0, 0x4($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X4);
    // 0x80081458: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8008145C: addiu       $v1, $zero, -0x8
    ctx->r3 = ADD32(0, -0X8);
    // 0x80081460: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x80081464: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x80081468: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x8008146C: blez        $a0, L_80081500
    if (SIGNED(ctx->r4) <= 0) {
        // 0x80081470: and         $s4, $v0, $v1
        ctx->r20 = ctx->r2 & ctx->r3;
            goto L_80081500;
    }
    // 0x80081470: and         $s4, $v0, $v1
    ctx->r20 = ctx->r2 & ctx->r3;
    // 0x80081474: addiu       $fp, $zero, -0x1
    ctx->r30 = ADD32(0, -0X1);
    // 0x80081478: addiu       $s7, $zero, -0x8
    ctx->r23 = ADD32(0, -0X8);
    // 0x8008147C: addu        $s1, $a3, $zero
    ctx->r17 = ADD32(ctx->r7, 0);
L_80081480:
    // 0x80081480: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x80081484: sll         $s2, $s0, 1
    ctx->r18 = S32(ctx->r16 << 1);
    // 0x80081488: addu        $v0, $s2, $v0
    ctx->r2 = ADD32(ctx->r18, ctx->r2);
    // 0x8008148C: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    // 0x80081490: beq         $v0, $fp, L_800814E4
    if (ctx->r2 == ctx->r30) {
        // 0x80081494: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_800814E4;
    }
    // 0x80081494: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x80081498: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8008149C: andi        $a2, $s6, 0xFFFF
    ctx->r6 = ctx->r22 & 0XFFFF;
    // 0x800814A0: addiu       $a3, $s5, 0x70
    ctx->r7 = ADD32(ctx->r21, 0X70);
    // 0x800814A4: jal         0x8007FB78
    // 0x800814A8: sw          $a0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r4;
    func_8007FB78_5AF78(rdram, ctx);
        goto after_0;
    // 0x800814A8: sw          $a0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r4;
    after_0:
    // 0x800814AC: lw          $v1, 0x0($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X0);
    // 0x800814B0: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    // 0x800814B4: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x800814B8: addiu       $a1, $a1, -0x2090
    ctx->r5 = ADD32(ctx->r5, -0X2090);
    // 0x800814BC: addu        $v1, $s2, $v1
    ctx->r3 = ADD32(ctx->r18, ctx->r3);
    // 0x800814C0: lh          $a0, 0x0($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X0);
    // 0x800814C4: lui         $a2, 0x2D
    ctx->r6 = S32(0X2D << 16);
    // 0x800814C8: addiu       $a2, $a2, -0x53A0
    ctx->r6 = ADD32(ctx->r6, -0X53A0);
    // 0x800814CC: jal         0x80028D30
    // 0x800814D0: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    func_80028D30_4130(rdram, ctx);
        goto after_1;
    // 0x800814D0: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    after_1:
    // 0x800814D4: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x800814D8: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x800814DC: j           L_800814E8
    // 0x800814E0: and         $s4, $v0, $s7
    ctx->r20 = ctx->r2 & ctx->r23;
        goto L_800814E8;
    // 0x800814E0: and         $s4, $v0, $s7
    ctx->r20 = ctx->r2 & ctx->r23;
L_800814E4:
    // 0x800814E4: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
L_800814E8:
    // 0x800814E8: lh          $v0, 0x4($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X4);
    // 0x800814EC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800814F0: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800814F4: bne         $v0, $zero, L_80081480
    if (ctx->r2 != 0) {
        // 0x800814F8: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_80081480;
    }
    // 0x800814F8: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x800814FC: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_80081500:
    // 0x80081500: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x80081504: addiu       $a0, $a0, -0x7308
    ctx->r4 = ADD32(ctx->r4, -0X7308);
    // 0x80081508: addu        $v1, $s5, $zero
    ctx->r3 = ADD32(ctx->r21, 0);
L_8008150C:
    // 0x8008150C: lw          $v0, 0x70($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X70);
    // 0x80081510: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80081514: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80081518: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x8008151C: slti        $v0, $s0, 0x3
    ctx->r2 = SIGNED(ctx->r16) < 0X3 ? 1 : 0;
    // 0x80081520: bne         $v0, $zero, L_8008150C
    if (ctx->r2 != 0) {
        // 0x80081524: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_8008150C;
    }
    // 0x80081524: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80081528: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x8008152C: sh          $s6, -0x72FC($at)
    MEM_H(-0X72FC, ctx->r1) = ctx->r22;
    // 0x80081530: addiu       $v1, $s6, -0x19
    ctx->r3 = ADD32(ctx->r22, -0X19);
    // 0x80081534: andi        $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 & 0XFFFF;
    // 0x80081538: sltiu       $v1, $v1, 0x2
    ctx->r3 = ctx->r3 < 0X2 ? 1 : 0;
    // 0x8008153C: andi        $v0, $s6, 0xFFFF
    ctx->r2 = ctx->r22 & 0XFFFF;
    // 0x80081540: xori        $v0, $v0, 0x1B
    ctx->r2 = ctx->r2 ^ 0X1B;
    // 0x80081544: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80081548: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8008154C: bne         $v1, $zero, L_80081564
    if (ctx->r3 != 0) {
        // 0x80081550: addiu       $v0, $s6, -0x1C
        ctx->r2 = ADD32(ctx->r22, -0X1C);
            goto L_80081564;
    }
    // 0x80081550: addiu       $v0, $s6, -0x1C
    ctx->r2 = ADD32(ctx->r22, -0X1C);
    // 0x80081554: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80081558: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x8008155C: beq         $v0, $zero, L_80081658
    if (ctx->r2 == 0) {
        // 0x80081560: addu        $v0, $s4, $zero
        ctx->r2 = ADD32(ctx->r20, 0);
            goto L_80081658;
    }
    // 0x80081560: addu        $v0, $s4, $zero
    ctx->r2 = ADD32(ctx->r20, 0);
L_80081564:
    // 0x80081564: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x80081568: addiu       $s0, $s0, -0x3BB8
    ctx->r16 = ADD32(ctx->r16, -0X3BB8);
    // 0x8008156C: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
    // 0x80081570: slti        $v0, $v0, 0x41
    ctx->r2 = SIGNED(ctx->r2) < 0X41 ? 1 : 0;
    // 0x80081574: beq         $v0, $zero, L_80081654
    if (ctx->r2 == 0) {
        // 0x80081578: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_80081654;
    }
    // 0x80081578: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8008157C: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x80081580: ori         $a2, $zero, 0xFFFF
    ctx->r6 = 0 | 0XFFFF;
    // 0x80081584: jal         0x8007FBC0
    // 0x80081588: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    func_8007FBC0_5AFC0(rdram, ctx);
        goto after_2;
    // 0x80081588: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    after_2:
    // 0x8008158C: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
    // 0x80081590: addu        $t2, $v0, $zero
    ctx->r10 = ADD32(ctx->r2, 0);
    // 0x80081594: slti        $v0, $v1, 0x41
    ctx->r2 = SIGNED(ctx->r3) < 0X41 ? 1 : 0;
    // 0x80081598: bne         $v0, $zero, L_800815A8
    if (ctx->r2 != 0) {
        // 0x8008159C: slti        $v0, $v1, 0x21
        ctx->r2 = SIGNED(ctx->r3) < 0X21 ? 1 : 0;
            goto L_800815A8;
    }
    // 0x8008159C: slti        $v0, $v1, 0x21
    ctx->r2 = SIGNED(ctx->r3) < 0X21 ? 1 : 0;
    // 0x800815A0: j           L_800815B4
    // 0x800815A4: addu        $t3, $zero, $zero
    ctx->r11 = ADD32(0, 0);
        goto L_800815B4;
    // 0x800815A4: addu        $t3, $zero, $zero
    ctx->r11 = ADD32(0, 0);
L_800815A8:
    // 0x800815A8: bne         $v0, $zero, L_800815B4
    if (ctx->r2 != 0) {
        // 0x800815AC: addiu       $t3, $zero, -0x12
        ctx->r11 = ADD32(0, -0X12);
            goto L_800815B4;
    }
    // 0x800815AC: addiu       $t3, $zero, -0x12
    ctx->r11 = ADD32(0, -0X12);
    // 0x800815B0: addiu       $t3, $zero, -0x8
    ctx->r11 = ADD32(0, -0X8);
L_800815B4:
    // 0x800815B4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x800815B8: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x800815BC: addu        $t4, $zero, $zero
    ctx->r12 = ADD32(0, 0);
    // 0x800815C0: addu        $t1, $zero, $zero
    ctx->r9 = ADD32(0, 0);
L_800815C4:
    // 0x800815C4: lhu         $t0, 0x0($t2)
    ctx->r8 = MEM_HU(ctx->r10, 0X0);
    // 0x800815C8: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x800815CC: andi        $v1, $t0, 0xFFFF
    ctx->r3 = ctx->r8 & 0XFFFF;
    // 0x800815D0: srl         $a3, $v1, 11
    ctx->r7 = S32(U32(ctx->r3) >> 11);
    // 0x800815D4: srl         $a0, $v1, 6
    ctx->r4 = S32(U32(ctx->r3) >> 6);
    // 0x800815D8: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x800815DC: srl         $v1, $v1, 1
    ctx->r3 = S32(U32(ctx->r3) >> 1);
    // 0x800815E0: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x800815E4: addu        $a3, $a3, $t3
    ctx->r7 = ADD32(ctx->r7, ctx->r11);
    // 0x800815E8: addu        $a0, $a0, $t3
    ctx->r4 = ADD32(ctx->r4, ctx->r11);
    // 0x800815EC: addu        $v1, $v1, $t3
    ctx->r3 = ADD32(ctx->r3, ctx->r11);
    // 0x800815F0: nor         $a2, $zero, $a3
    ctx->r6 = ~(0 | ctx->r7);
    // 0x800815F4: sra         $a2, $a2, 31
    ctx->r6 = S32(SIGNED(ctx->r6) >> 31);
    // 0x800815F8: nor         $a1, $zero, $a0
    ctx->r5 = ~(0 | ctx->r4);
    // 0x800815FC: sra         $a1, $a1, 31
    ctx->r5 = S32(SIGNED(ctx->r5) >> 31);
    // 0x80081600: nor         $v0, $zero, $v1
    ctx->r2 = ~(0 | ctx->r3);
    // 0x80081604: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x80081608: and         $a3, $a3, $a2
    ctx->r7 = ctx->r7 & ctx->r6;
    // 0x8008160C: and         $a0, $a0, $a1
    ctx->r4 = ctx->r4 & ctx->r5;
    // 0x80081610: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80081614: andi        $v0, $t0, 0x1
    ctx->r2 = ctx->r8 & 0X1;
    // 0x80081618: sll         $a3, $a3, 11
    ctx->r7 = S32(ctx->r7 << 11);
    // 0x8008161C: or          $v0, $v0, $a3
    ctx->r2 = ctx->r2 | ctx->r7;
    // 0x80081620: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    // 0x80081624: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x80081628: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8008162C: or          $t0, $v0, $v1
    ctx->r8 = ctx->r2 | ctx->r3;
    // 0x80081630: sh          $t0, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r8;
    // 0x80081634: slti        $v0, $t1, 0x10
    ctx->r2 = SIGNED(ctx->r9) < 0X10 ? 1 : 0;
    // 0x80081638: bne         $v0, $zero, L_800815C4
    if (ctx->r2 != 0) {
        // 0x8008163C: addiu       $t2, $t2, 0x2
        ctx->r10 = ADD32(ctx->r10, 0X2);
            goto L_800815C4;
    }
    // 0x8008163C: addiu       $t2, $t2, 0x2
    ctx->r10 = ADD32(ctx->r10, 0X2);
    // 0x80081640: lhu         $v0, 0x10($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X10);
    // 0x80081644: addiu       $t4, $t4, 0x1
    ctx->r12 = ADD32(ctx->r12, 0X1);
    // 0x80081648: slt         $v0, $t4, $v0
    ctx->r2 = SIGNED(ctx->r12) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8008164C: bnel        $v0, $zero, L_800815C4
    if (ctx->r2 != 0) {
        // 0x80081650: addu        $t1, $zero, $zero
        ctx->r9 = ADD32(0, 0);
            goto L_800815C4;
    }
    goto skip_1;
    // 0x80081650: addu        $t1, $zero, $zero
    ctx->r9 = ADD32(0, 0);
    skip_1:
L_80081654:
    // 0x80081654: addu        $v0, $s4, $zero
    ctx->r2 = ADD32(ctx->r20, 0);
L_80081658:
    // 0x80081658: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8008165C: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x80081660: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x80081664: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80081668: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8008166C: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80081670: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80081674: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80081678: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8008167C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80081680: jr          $ra
    // 0x80081684: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x80081684: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_800522DC_2D6DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800522DC: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x800522E0: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x800522E4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x800522E8: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x800522EC: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x800522F0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x800522F4: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x800522F8: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x800522FC: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x80052300: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x80052304: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x80052308: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x8005230C: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x80052310: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x80052314: jal         0x8009A2B0
    // 0x80052318: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    bzero_recomp(rdram, ctx);
        goto after_0;
    // 0x80052318: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    after_0:
    // 0x8005231C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80052320: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80052324: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80052328: lui         $s0, 0x801B
    ctx->r16 = S32(0X801B << 16);
    // 0x8005232C: addiu       $s0, $s0, -0x2788
    ctx->r16 = ADD32(ctx->r16, -0X2788);
    // 0x80052330: sll         $a1, $v0, 1
    ctx->r5 = S32(ctx->r2 << 1);
    // 0x80052334: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80052338: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x8005233C: jal         0x8009A3B4
    // 0x80052340: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80052340: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    after_1:
    // 0x80052344: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x80052348: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x8005234C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80052350: sll         $a1, $v0, 1
    ctx->r5 = S32(ctx->r2 << 1);
    // 0x80052354: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80052358: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x8005235C: jal         0x8009A3B4
    // 0x80052360: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80052360: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    after_2:
    // 0x80052364: lhu         $a1, 0x16($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X16);
    // 0x80052368: lhu         $a2, 0x26($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X26);
    // 0x8005236C: andi        $v1, $a1, 0x1FF
    ctx->r3 = ctx->r5 & 0X1FF;
    // 0x80052370: andi        $a0, $a2, 0x1FF
    ctx->r4 = ctx->r6 & 0X1FF;
    // 0x80052374: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
    // 0x80052378: sll         $t0, $v0, 2
    ctx->r8 = S32(ctx->r2 << 2);
    // 0x8005237C: sll         $a3, $t0, 1
    ctx->r7 = S32(ctx->r8 << 1);
    // 0x80052380: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80052384: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x80052388: lh          $v0, 0x10($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X10);
    // 0x8005238C: andi        $a1, $a1, 0x600
    ctx->r5 = ctx->r5 & 0X600;
    // 0x80052390: srl         $s4, $a1, 9
    ctx->r20 = S32(U32(ctx->r5) >> 9);
    // 0x80052394: sh          $v1, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r3;
    // 0x80052398: lh          $v1, 0x20($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X20);
    // 0x8005239C: andi        $a2, $a2, 0x600
    ctx->r6 = ctx->r6 & 0X600;
    // 0x800523A0: srl         $t9, $a2, 9
    ctx->r25 = S32(U32(ctx->r6) >> 9);
    // 0x800523A4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x800523A8: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x800523AC: sltu        $v0, $a3, $v0
    ctx->r2 = ctx->r7 < ctx->r2 ? 1 : 0;
    // 0x800523B0: bne         $v0, $zero, L_800523F0
    if (ctx->r2 != 0) {
        // 0x800523B4: sh          $a0, 0x26($sp)
        MEM_H(0X26, ctx->r29) = ctx->r4;
            goto L_800523F0;
    }
    // 0x800523B4: sh          $a0, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r4;
    // 0x800523B8: lh          $v0, 0x12($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X12);
    // 0x800523BC: lh          $v1, 0x22($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X22);
    // 0x800523C0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x800523C4: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x800523C8: sltu        $v0, $a3, $v0
    ctx->r2 = ctx->r7 < ctx->r2 ? 1 : 0;
    // 0x800523CC: bne         $v0, $zero, L_800523F0
    if (ctx->r2 != 0) {
        // 0x800523D0: nop
    
            goto L_800523F0;
    }
    // 0x800523D0: nop

    // 0x800523D4: lh          $v0, 0x14($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X14);
    // 0x800523D8: lh          $v1, 0x24($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X24);
    // 0x800523DC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x800523E0: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x800523E4: sltu        $v0, $a3, $v0
    ctx->r2 = ctx->r7 < ctx->r2 ? 1 : 0;
    // 0x800523E8: beql        $v0, $zero, L_8005241C
    if (ctx->r2 == 0) {
        // 0x800523EC: addiu       $s0, $zero, 0x9
        ctx->r16 = ADD32(0, 0X9);
            goto L_8005241C;
    }
    goto skip_0;
    // 0x800523EC: addiu       $s0, $zero, 0x9
    ctx->r16 = ADD32(0, 0X9);
    skip_0:
L_800523F0:
    // 0x800523F0: beq         $s4, $zero, L_80052404
    if (ctx->r20 == 0) {
        // 0x800523F4: nop
    
            goto L_80052404;
    }
    // 0x800523F4: nop

    // 0x800523F8: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x800523FC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80052400: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
L_80052404:
    // 0x80052404: beq         $t9, $zero, L_80052ABC
    if (ctx->r25 == 0) {
        // 0x80052408: nop
    
            goto L_80052ABC;
    }
    // 0x80052408: nop

    // 0x8005240C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x80052410: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80052414: j           L_80052ABC
    // 0x80052418: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
        goto L_80052ABC;
    // 0x80052418: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
L_8005241C:
    // 0x8005241C: beq         $s4, $zero, L_800524D0
    if (ctx->r20 == 0) {
        // 0x80052420: addiu       $fp, $zero, 0x9
        ctx->r30 = ADD32(0, 0X9);
            goto L_800524D0;
    }
    // 0x80052420: addiu       $fp, $zero, 0x9
    ctx->r30 = ADD32(0, 0X9);
    // 0x80052424: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x80052428: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8005242C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80052430: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80052434: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80052438: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8005243C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80052440: lhu         $v0, -0x2788($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X2788);
    // 0x80052444: sh          $v0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r2;
    // 0x80052448: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x8005244C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80052450: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80052454: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80052458: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8005245C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80052460: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80052464: lhu         $v0, -0x2786($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X2786);
    // 0x80052468: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    // 0x8005246C: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x80052470: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80052474: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80052478: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005247C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80052480: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80052484: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80052488: lhu         $v0, -0x2784($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X2784);
    // 0x8005248C: sh          $v0, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r2;
    // 0x80052490: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x80052494: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80052498: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8005249C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800524A0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800524A4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800524A8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800524AC: lhu         $v0, -0x2782($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X2782);
    // 0x800524B0: andi        $v0, $v0, 0x1FF
    ctx->r2 = ctx->r2 & 0X1FF;
    // 0x800524B4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800524B8: sh          $v0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r2;
    // 0x800524BC: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x800524C0: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x800524C4: srav        $fp, $v1, $s4
    ctx->r30 = S32(SIGNED(ctx->r3) >> (ctx->r20 & 31));
    // 0x800524C8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800524CC: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
L_800524D0:
    // 0x800524D0: beq         $t9, $zero, L_80052584
    if (ctx->r25 == 0) {
        // 0x800524D4: addu        $t5, $zero, $zero
        ctx->r13 = ADD32(0, 0);
            goto L_80052584;
    }
    // 0x800524D4: addu        $t5, $zero, $zero
    ctx->r13 = ADD32(0, 0);
    // 0x800524D8: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x800524DC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800524E0: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x800524E4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800524E8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800524EC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800524F0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800524F4: lhu         $v0, -0x2788($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X2788);
    // 0x800524F8: sh          $v0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r2;
    // 0x800524FC: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x80052500: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80052504: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80052508: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005250C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80052510: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80052514: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80052518: lhu         $v0, -0x2786($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X2786);
    // 0x8005251C: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x80052520: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x80052524: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80052528: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8005252C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80052530: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80052534: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80052538: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8005253C: lhu         $v0, -0x2784($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X2784);
    // 0x80052540: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
    // 0x80052544: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x80052548: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8005254C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80052550: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80052554: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80052558: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8005255C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80052560: lhu         $v0, -0x2782($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X2782);
    // 0x80052564: andi        $v0, $v0, 0x1FF
    ctx->r2 = ctx->r2 & 0X1FF;
    // 0x80052568: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8005256C: sh          $v0, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r2;
    // 0x80052570: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x80052574: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x80052578: srav        $s0, $v1, $t9
    ctx->r16 = S32(SIGNED(ctx->r3) >> (ctx->r25 & 31));
    // 0x8005257C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80052580: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
L_80052584:
    // 0x80052584: lui         $s5, 0x7F
    ctx->r21 = S32(0X7F << 16);
    // 0x80052588: ori         $s5, $s5, 0xFFFF
    ctx->r21 = ctx->r21 | 0XFFFF;
    // 0x8005258C: lui         $s3, 0x801A
    ctx->r19 = S32(0X801A << 16);
    // 0x80052590: addiu       $s3, $s3, -0x5958
    ctx->r19 = ADD32(ctx->r19, -0X5958);
    // 0x80052594: addu        $t4, $zero, $zero
    ctx->r12 = ADD32(0, 0);
L_80052598:
    // 0x80052598: addiu       $s6, $zero, 0x8
    ctx->r22 = ADD32(0, 0X8);
    // 0x8005259C: subu        $t7, $s6, $t5
    ctx->r15 = SUB32(ctx->r22, ctx->r13);
    // 0x800525A0: lui         $t8, 0x7FFF
    ctx->r24 = S32(0X7FFF << 16);
    // 0x800525A4: ori         $t8, $t8, 0xFFFF
    ctx->r24 = ctx->r24 | 0XFFFF;
    // 0x800525A8: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
L_800525AC:
    // 0x800525AC: lh          $a0, 0x10($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X10);
    // 0x800525B0: mult        $a0, $t7
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800525B4: mflo        $a0
    ctx->r4 = lo;
    // 0x800525B8: lh          $a1, 0x18($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X18);
    // 0x800525BC: nop

    // 0x800525C0: mult        $a1, $t5
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800525C4: mflo        $a1
    ctx->r5 = lo;
    // 0x800525C8: lh          $v0, 0x20($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X20);
    // 0x800525CC: nop

    // 0x800525D0: mult        $v0, $t6
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800525D4: mflo        $v0
    ctx->r2 = lo;
    // 0x800525D8: lh          $v1, 0x28($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X28);
    // 0x800525DC: nop

    // 0x800525E0: mult        $v1, $t4
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800525E4: mflo        $v1
    ctx->r3 = lo;
    // 0x800525E8: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x800525EC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800525F0: subu        $a2, $a0, $v0
    ctx->r6 = SUB32(ctx->r4, ctx->r2);
    // 0x800525F4: bltzl       $a2, L_800525FC
    if (SIGNED(ctx->r6) < 0) {
        // 0x800525F8: addiu       $a2, $a2, 0x7
        ctx->r6 = ADD32(ctx->r6, 0X7);
            goto L_800525FC;
    }
    goto skip_1;
    // 0x800525F8: addiu       $a2, $a2, 0x7
    ctx->r6 = ADD32(ctx->r6, 0X7);
    skip_1:
L_800525FC:
    // 0x800525FC: lh          $a0, 0x12($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X12);
    // 0x80052600: mult        $a0, $t7
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80052604: mflo        $a0
    ctx->r4 = lo;
    // 0x80052608: lh          $a1, 0x1A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X1A);
    // 0x8005260C: nop

    // 0x80052610: mult        $a1, $t5
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80052614: mflo        $a1
    ctx->r5 = lo;
    // 0x80052618: lh          $v0, 0x22($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X22);
    // 0x8005261C: nop

    // 0x80052620: mult        $v0, $t6
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80052624: mflo        $v0
    ctx->r2 = lo;
    // 0x80052628: lh          $v1, 0x2A($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X2A);
    // 0x8005262C: nop

    // 0x80052630: mult        $v1, $t4
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80052634: mflo        $v1
    ctx->r3 = lo;
    // 0x80052638: sra         $t3, $a2, 3
    ctx->r11 = S32(SIGNED(ctx->r6) >> 3);
    // 0x8005263C: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x80052640: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80052644: subu        $a2, $a0, $v0
    ctx->r6 = SUB32(ctx->r4, ctx->r2);
    // 0x80052648: bltzl       $a2, L_80052650
    if (SIGNED(ctx->r6) < 0) {
        // 0x8005264C: addiu       $a2, $a2, 0x7
        ctx->r6 = ADD32(ctx->r6, 0X7);
            goto L_80052650;
    }
    goto skip_2;
    // 0x8005264C: addiu       $a2, $a2, 0x7
    ctx->r6 = ADD32(ctx->r6, 0X7);
    skip_2:
L_80052650:
    // 0x80052650: lh          $a0, 0x14($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X14);
    // 0x80052654: mult        $a0, $t7
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80052658: mflo        $a0
    ctx->r4 = lo;
    // 0x8005265C: lh          $a1, 0x1C($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X1C);
    // 0x80052660: nop

    // 0x80052664: mult        $a1, $t5
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80052668: mflo        $a1
    ctx->r5 = lo;
    // 0x8005266C: lh          $v0, 0x24($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X24);
    // 0x80052670: nop

    // 0x80052674: mult        $v0, $t6
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80052678: mflo        $v0
    ctx->r2 = lo;
    // 0x8005267C: lh          $v1, 0x2C($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X2C);
    // 0x80052680: nop

    // 0x80052684: mult        $v1, $t4
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80052688: mflo        $v1
    ctx->r3 = lo;
    // 0x8005268C: sra         $t1, $a2, 3
    ctx->r9 = S32(SIGNED(ctx->r6) >> 3);
    // 0x80052690: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x80052694: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80052698: subu        $a2, $a0, $v0
    ctx->r6 = SUB32(ctx->r4, ctx->r2);
    // 0x8005269C: bltzl       $a2, L_800526A4
    if (SIGNED(ctx->r6) < 0) {
        // 0x800526A0: addiu       $a2, $a2, 0x7
        ctx->r6 = ADD32(ctx->r6, 0X7);
            goto L_800526A4;
    }
    goto skip_3;
    // 0x800526A0: addiu       $a2, $a2, 0x7
    ctx->r6 = ADD32(ctx->r6, 0X7);
    skip_3:
L_800526A4:
    // 0x800526A4: lh          $v0, 0x16($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X16);
    // 0x800526A8: mult        $v0, $t7
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800526AC: mflo        $v0
    ctx->r2 = lo;
    // 0x800526B0: lh          $a1, 0x1E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X1E);
    // 0x800526B4: nop

    // 0x800526B8: mult        $a1, $t5
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800526BC: mflo        $a1
    ctx->r5 = lo;
    // 0x800526C0: lh          $a0, 0x26($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X26);
    // 0x800526C4: nop

    // 0x800526C8: mult        $a0, $t6
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800526CC: mflo        $a0
    ctx->r4 = lo;
    // 0x800526D0: lh          $v1, 0x2E($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X2E);
    // 0x800526D4: nop

    // 0x800526D8: mult        $v1, $t4
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800526DC: mflo        $v1
    ctx->r3 = lo;
    // 0x800526E0: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x800526E4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x800526E8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800526EC: bgez        $v0, L_800526F8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x800526F0: sra         $t0, $a2, 3
        ctx->r8 = S32(SIGNED(ctx->r6) >> 3);
            goto L_800526F8;
    }
    // 0x800526F0: sra         $t0, $a2, 3
    ctx->r8 = S32(SIGNED(ctx->r6) >> 3);
    // 0x800526F4: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
L_800526F8:
    // 0x800526F8: nop

    // 0x800526FC: mult        $t3, $t3
    result = S64(S32(ctx->r11)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80052700: mfhi        $a2
    ctx->r6 = hi;
    // 0x80052704: mflo        $a3
    ctx->r7 = lo;
    // 0x80052708: nop

    // 0x8005270C: nop

    // 0x80052710: mult        $t1, $t1
    result = S64(S32(ctx->r9)) * S64(S32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80052714: mfhi        $s6
    ctx->r22 = hi;
    // 0x80052718: mflo        $s7
    ctx->r23 = lo;
    // 0x8005271C: nop

    // 0x80052720: nop

    // 0x80052724: mult        $t0, $t0
    result = S64(S32(ctx->r8)) * S64(S32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80052728: mfhi        $a0
    ctx->r4 = hi;
    // 0x8005272C: mflo        $a1
    ctx->r5 = lo;
    // 0x80052730: sra         $v0, $v0, 3
    ctx->r2 = S32(SIGNED(ctx->r2) >> 3);
    // 0x80052734: nop

    // 0x80052738: mult        $v0, $v0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8005273C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80052740: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80052744: addu        $v1, $a3, $s7
    ctx->r3 = ADD32(ctx->r7, ctx->r23);
    // 0x80052748: sltu        $t0, $v1, $s7
    ctx->r8 = ctx->r3 < ctx->r23 ? 1 : 0;
    // 0x8005274C: addu        $v0, $a2, $s6
    ctx->r2 = ADD32(ctx->r6, ctx->r22);
    // 0x80052750: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x80052754: addu        $s7, $v1, $a1
    ctx->r23 = ADD32(ctx->r3, ctx->r5);
    // 0x80052758: sltu        $a2, $s7, $a1
    ctx->r6 = ctx->r23 < ctx->r5 ? 1 : 0;
    // 0x8005275C: addu        $s6, $v0, $a0
    ctx->r22 = ADD32(ctx->r2, ctx->r4);
    // 0x80052760: addu        $s6, $s6, $a2
    ctx->r22 = ADD32(ctx->r22, ctx->r6);
    // 0x80052764: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x80052768: addu        $a1, $s7, $zero
    ctx->r5 = ADD32(ctx->r23, 0);
    // 0x8005276C: mfhi        $t2
    ctx->r10 = hi;
    // 0x80052770: mflo        $t3
    ctx->r11 = lo;
    // 0x80052774: slt         $v0, $t2, $a0
    ctx->r2 = SIGNED(ctx->r10) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80052778: nop

    // 0x8005277C: bnel        $v0, $zero, L_80052AA0
    if (ctx->r2 != 0) {
        // 0x80052780: addu        $t4, $t4, $s0
        ctx->r12 = ADD32(ctx->r12, ctx->r16);
            goto L_80052AA0;
    }
    goto skip_4;
    // 0x80052780: addu        $t4, $t4, $s0
    ctx->r12 = ADD32(ctx->r12, ctx->r16);
    skip_4:
    // 0x80052784: bne         $a0, $t2, L_80052794
    if (ctx->r4 != ctx->r10) {
        // 0x80052788: sltu        $v0, $t3, $a1
        ctx->r2 = ctx->r11 < ctx->r5 ? 1 : 0;
            goto L_80052794;
    }
    // 0x80052788: sltu        $v0, $t3, $a1
    ctx->r2 = ctx->r11 < ctx->r5 ? 1 : 0;
    // 0x8005278C: bnel        $v0, $zero, L_80052AA0
    if (ctx->r2 != 0) {
        // 0x80052790: addu        $t4, $t4, $s0
        ctx->r12 = ADD32(ctx->r12, ctx->r16);
            goto L_80052AA0;
    }
    goto skip_5;
    // 0x80052790: addu        $t4, $t4, $s0
    ctx->r12 = ADD32(ctx->r12, ctx->r16);
    skip_5:
L_80052794:
    // 0x80052794: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x80052798: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x8005279C: lui         $s7, 0x8000
    ctx->r23 = S32(0X8000 << 16);
    // 0x800527A0: lui         $s6, 0xFF00
    ctx->r22 = S32(0XFF00 << 16);
    // 0x800527A4: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x800527A8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800527AC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800527B0: lui         $t1, 0x801B
    ctx->r9 = S32(0X801B << 16);
    // 0x800527B4: addu        $t1, $t1, $v0
    ctx->r9 = ADD32(ctx->r9, ctx->r2);
    // 0x800527B8: lw          $t1, -0x2780($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X2780);
    // 0x800527BC: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x800527C0: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x800527C4: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x800527C8: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x800527CC: addu        $v1, $v1, $s3
    ctx->r3 = ADD32(ctx->r3, ctx->r19);
    // 0x800527D0: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x800527D4: and         $v0, $t1, $s5
    ctx->r2 = ctx->r9 & ctx->r21;
    // 0x800527D8: or          $a2, $v0, $s7
    ctx->r6 = ctx->r2 | ctx->r23;
    // 0x800527DC: lw          $a3, 0x0($a2)
    ctx->r7 = MEM_W(ctx->r6, 0X0);
    // 0x800527E0: and         $a1, $t0, $s6
    ctx->r5 = ctx->r8 & ctx->r22;
    // 0x800527E4: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x800527E8: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x800527EC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800527F0: lui         $s7, 0x801B
    ctx->r23 = S32(0X801B << 16);
    // 0x800527F4: addiu       $s7, $s7, -0x2782
    ctx->r23 = ADD32(ctx->r23, -0X2782);
    // 0x800527F8: addu        $v0, $v0, $s7
    ctx->r2 = ADD32(ctx->r2, ctx->r23);
    // 0x800527FC: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80052800: lui         $s6, 0xFF
    ctx->r22 = S32(0XFF << 16);
    // 0x80052804: and         $v1, $v1, $s6
    ctx->r3 = ctx->r3 & ctx->r22;
    // 0x80052808: srl         $v0, $v0, 13
    ctx->r2 = S32(U32(ctx->r2) >> 13);
    // 0x8005280C: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80052810: sllv        $v1, $v1, $v0
    ctx->r3 = S32(ctx->r3 << (ctx->r2 & 31));
    // 0x80052814: sltu        $v1, $t8, $v1
    ctx->r3 = ctx->r24 < ctx->r3 ? 1 : 0;
    // 0x80052818: bne         $v1, $zero, L_80052828
    if (ctx->r3 != 0) {
        // 0x8005281C: or          $a3, $a3, $a1
        ctx->r7 = ctx->r7 | ctx->r5;
            goto L_80052828;
    }
    // 0x8005281C: or          $a3, $a3, $a1
    ctx->r7 = ctx->r7 | ctx->r5;
    // 0x80052820: andi        $v0, $t0, 0xFFFF
    ctx->r2 = ctx->r8 & 0XFFFF;
    // 0x80052824: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
L_80052828:
    // 0x80052828: lui         $s7, 0x80
    ctx->r23 = S32(0X80 << 16);
    // 0x8005282C: and         $v0, $t1, $s7
    ctx->r2 = ctx->r9 & ctx->r23;
    // 0x80052830: beq         $v0, $zero, L_80052918
    if (ctx->r2 == 0) {
        // 0x80052834: sw          $a3, 0x0($a2)
        MEM_W(0X0, ctx->r6) = ctx->r7;
            goto L_80052918;
    }
    // 0x80052834: sw          $a3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r7;
    // 0x80052838: lh          $a3, 0x20($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X20);
    // 0x8005283C: lh          $t2, 0x28($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X28);
    // 0x80052840: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    // 0x80052844: lh          $v1, 0x2A($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X2A);
    // 0x80052848: lh          $a0, 0x24($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X24);
    // 0x8005284C: lh          $v0, 0x2C($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X2C);
    // 0x80052850: subu        $t3, $a3, $t2
    ctx->r11 = SUB32(ctx->r7, ctx->r10);
    // 0x80052854: subu        $t1, $a1, $v1
    ctx->r9 = SUB32(ctx->r5, ctx->r3);
    // 0x80052858: bne         $t9, $zero, L_80052908
    if (ctx->r25 != 0) {
        // 0x8005285C: subu        $t0, $a0, $v0
        ctx->r8 = SUB32(ctx->r4, ctx->r2);
            goto L_80052908;
    }
    // 0x8005285C: subu        $t0, $a0, $v0
    ctx->r8 = SUB32(ctx->r4, ctx->r2);
    // 0x80052860: nop

    // 0x80052864: mult        $a3, $t6
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80052868: mflo        $v1
    ctx->r3 = lo;
    // 0x8005286C: nop

    // 0x80052870: nop

    // 0x80052874: mult        $t2, $t4
    result = S64(S32(ctx->r10)) * S64(S32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80052878: mflo        $v0
    ctx->r2 = lo;
    // 0x8005287C: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x80052880: nop

    // 0x80052884: bltzl       $v0, L_8005288C
    if (SIGNED(ctx->r2) < 0) {
        // 0x80052888: addiu       $v0, $v0, 0x7
        ctx->r2 = ADD32(ctx->r2, 0X7);
            goto L_8005288C;
    }
    goto skip_6;
    // 0x80052888: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    skip_6:
L_8005288C:
    // 0x8005288C: sra         $v0, $v0, 3
    ctx->r2 = S32(SIGNED(ctx->r2) >> 3);
    // 0x80052890: sh          $v0, 0x8($a2)
    MEM_H(0X8, ctx->r6) = ctx->r2;
    // 0x80052894: lh          $v1, 0x22($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X22);
    // 0x80052898: mult        $v1, $t6
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8005289C: mflo        $v1
    ctx->r3 = lo;
    // 0x800528A0: lh          $v0, 0x2A($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X2A);
    // 0x800528A4: nop

    // 0x800528A8: mult        $v0, $t4
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800528AC: mflo        $v0
    ctx->r2 = lo;
    // 0x800528B0: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x800528B4: nop

    // 0x800528B8: bltzl       $v0, L_800528C0
    if (SIGNED(ctx->r2) < 0) {
        // 0x800528BC: addiu       $v0, $v0, 0x7
        ctx->r2 = ADD32(ctx->r2, 0X7);
            goto L_800528C0;
    }
    goto skip_7;
    // 0x800528BC: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    skip_7:
L_800528C0:
    // 0x800528C0: sra         $v0, $v0, 3
    ctx->r2 = S32(SIGNED(ctx->r2) >> 3);
    // 0x800528C4: sh          $v0, 0xA($a2)
    MEM_H(0XA, ctx->r6) = ctx->r2;
    // 0x800528C8: lh          $v1, 0x24($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X24);
    // 0x800528CC: mult        $v1, $t6
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800528D0: mflo        $v1
    ctx->r3 = lo;
    // 0x800528D4: lh          $v0, 0x2C($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X2C);
    // 0x800528D8: nop

    // 0x800528DC: mult        $v0, $t4
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800528E0: mflo        $v0
    ctx->r2 = lo;
    // 0x800528E4: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x800528E8: nop

    // 0x800528EC: bltzl       $v0, L_800528F4
    if (SIGNED(ctx->r2) < 0) {
        // 0x800528F0: addiu       $v0, $v0, 0x7
        ctx->r2 = ADD32(ctx->r2, 0X7);
            goto L_800528F4;
    }
    goto skip_8;
    // 0x800528F0: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    skip_8:
L_800528F4:
    // 0x800528F4: sra         $v0, $v0, 3
    ctx->r2 = S32(SIGNED(ctx->r2) >> 3);
    // 0x800528F8: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    // 0x800528FC: sh          $v0, 0xC($a2)
    MEM_H(0XC, ctx->r6) = ctx->r2;
    // 0x80052900: j           L_80052918
    // 0x80052904: sh          $s6, 0xE($a2)
    MEM_H(0XE, ctx->r6) = ctx->r22;
        goto L_80052918;
    // 0x80052904: sh          $s6, 0xE($a2)
    MEM_H(0XE, ctx->r6) = ctx->r22;
L_80052908:
    // 0x80052908: sh          $t3, 0x8($a2)
    MEM_H(0X8, ctx->r6) = ctx->r11;
    // 0x8005290C: sh          $t1, 0xA($a2)
    MEM_H(0XA, ctx->r6) = ctx->r9;
    // 0x80052910: sh          $t0, 0xC($a2)
    MEM_H(0XC, ctx->r6) = ctx->r8;
    // 0x80052914: sh          $zero, 0xE($a2)
    MEM_H(0XE, ctx->r6) = 0;
L_80052918:
    // 0x80052918: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x8005291C: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80052920: lui         $s7, 0x8000
    ctx->r23 = S32(0X8000 << 16);
    // 0x80052924: lui         $s6, 0xFF00
    ctx->r22 = S32(0XFF00 << 16);
    // 0x80052928: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8005292C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80052930: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80052934: lui         $t1, 0x801B
    ctx->r9 = S32(0X801B << 16);
    // 0x80052938: addu        $t1, $t1, $v0
    ctx->r9 = ADD32(ctx->r9, ctx->r2);
    // 0x8005293C: lw          $t1, -0x2780($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X2780);
    // 0x80052940: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x80052944: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x80052948: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x8005294C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80052950: addu        $v1, $v1, $s3
    ctx->r3 = ADD32(ctx->r3, ctx->r19);
    // 0x80052954: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x80052958: and         $v0, $t1, $s5
    ctx->r2 = ctx->r9 & ctx->r21;
    // 0x8005295C: or          $a2, $v0, $s7
    ctx->r6 = ctx->r2 | ctx->r23;
    // 0x80052960: lw          $a3, 0x0($a2)
    ctx->r7 = MEM_W(ctx->r6, 0X0);
    // 0x80052964: and         $a1, $t0, $s6
    ctx->r5 = ctx->r8 & ctx->r22;
    // 0x80052968: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x8005296C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80052970: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80052974: lui         $s7, 0x801B
    ctx->r23 = S32(0X801B << 16);
    // 0x80052978: addiu       $s7, $s7, -0x2782
    ctx->r23 = ADD32(ctx->r23, -0X2782);
    // 0x8005297C: addu        $v0, $v0, $s7
    ctx->r2 = ADD32(ctx->r2, ctx->r23);
    // 0x80052980: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80052984: lui         $s6, 0xFF
    ctx->r22 = S32(0XFF << 16);
    // 0x80052988: and         $v1, $v1, $s6
    ctx->r3 = ctx->r3 & ctx->r22;
    // 0x8005298C: srl         $v0, $v0, 13
    ctx->r2 = S32(U32(ctx->r2) >> 13);
    // 0x80052990: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80052994: sllv        $v1, $v1, $v0
    ctx->r3 = S32(ctx->r3 << (ctx->r2 & 31));
    // 0x80052998: sltu        $v1, $t8, $v1
    ctx->r3 = ctx->r24 < ctx->r3 ? 1 : 0;
    // 0x8005299C: bne         $v1, $zero, L_800529AC
    if (ctx->r3 != 0) {
        // 0x800529A0: or          $a3, $a3, $a1
        ctx->r7 = ctx->r7 | ctx->r5;
            goto L_800529AC;
    }
    // 0x800529A0: or          $a3, $a3, $a1
    ctx->r7 = ctx->r7 | ctx->r5;
    // 0x800529A4: andi        $v0, $t0, 0xFFFF
    ctx->r2 = ctx->r8 & 0XFFFF;
    // 0x800529A8: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
L_800529AC:
    // 0x800529AC: lui         $s7, 0x80
    ctx->r23 = S32(0X80 << 16);
    // 0x800529B0: and         $v0, $t1, $s7
    ctx->r2 = ctx->r9 & ctx->r23;
    // 0x800529B4: beq         $v0, $zero, L_80052ABC
    if (ctx->r2 == 0) {
        // 0x800529B8: sw          $a3, 0x0($a2)
        MEM_W(0X0, ctx->r6) = ctx->r7;
            goto L_80052ABC;
    }
    // 0x800529B8: sw          $a3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r7;
    // 0x800529BC: lh          $a3, 0x10($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X10);
    // 0x800529C0: lh          $t2, 0x18($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X18);
    // 0x800529C4: lh          $a1, 0x12($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X12);
    // 0x800529C8: lh          $v1, 0x1A($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X1A);
    // 0x800529CC: lh          $a0, 0x14($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X14);
    // 0x800529D0: lh          $v0, 0x1C($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X1C);
    // 0x800529D4: subu        $t3, $a3, $t2
    ctx->r11 = SUB32(ctx->r7, ctx->r10);
    // 0x800529D8: subu        $t1, $a1, $v1
    ctx->r9 = SUB32(ctx->r5, ctx->r3);
    // 0x800529DC: bne         $s4, $zero, L_80052A8C
    if (ctx->r20 != 0) {
        // 0x800529E0: subu        $t0, $a0, $v0
        ctx->r8 = SUB32(ctx->r4, ctx->r2);
            goto L_80052A8C;
    }
    // 0x800529E0: subu        $t0, $a0, $v0
    ctx->r8 = SUB32(ctx->r4, ctx->r2);
    // 0x800529E4: nop

    // 0x800529E8: mult        $a3, $t6
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800529EC: mflo        $v1
    ctx->r3 = lo;
    // 0x800529F0: nop

    // 0x800529F4: nop

    // 0x800529F8: mult        $t2, $t4
    result = S64(S32(ctx->r10)) * S64(S32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800529FC: mflo        $v0
    ctx->r2 = lo;
    // 0x80052A00: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x80052A04: nop

    // 0x80052A08: bltzl       $v0, L_80052A10
    if (SIGNED(ctx->r2) < 0) {
        // 0x80052A0C: addiu       $v0, $v0, 0x7
        ctx->r2 = ADD32(ctx->r2, 0X7);
            goto L_80052A10;
    }
    goto skip_9;
    // 0x80052A0C: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    skip_9:
L_80052A10:
    // 0x80052A10: sra         $v0, $v0, 3
    ctx->r2 = S32(SIGNED(ctx->r2) >> 3);
    // 0x80052A14: sh          $v0, 0x8($a2)
    MEM_H(0X8, ctx->r6) = ctx->r2;
    // 0x80052A18: lh          $v1, 0x12($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X12);
    // 0x80052A1C: mult        $v1, $t6
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80052A20: mflo        $v1
    ctx->r3 = lo;
    // 0x80052A24: lh          $v0, 0x1A($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X1A);
    // 0x80052A28: nop

    // 0x80052A2C: mult        $v0, $t4
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80052A30: mflo        $v0
    ctx->r2 = lo;
    // 0x80052A34: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x80052A38: nop

    // 0x80052A3C: bltzl       $v0, L_80052A44
    if (SIGNED(ctx->r2) < 0) {
        // 0x80052A40: addiu       $v0, $v0, 0x7
        ctx->r2 = ADD32(ctx->r2, 0X7);
            goto L_80052A44;
    }
    goto skip_10;
    // 0x80052A40: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    skip_10:
L_80052A44:
    // 0x80052A44: sra         $v0, $v0, 3
    ctx->r2 = S32(SIGNED(ctx->r2) >> 3);
    // 0x80052A48: sh          $v0, 0xA($a2)
    MEM_H(0XA, ctx->r6) = ctx->r2;
    // 0x80052A4C: lh          $v1, 0x14($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X14);
    // 0x80052A50: mult        $v1, $t6
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80052A54: mflo        $v1
    ctx->r3 = lo;
    // 0x80052A58: lh          $v0, 0x1C($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X1C);
    // 0x80052A5C: nop

    // 0x80052A60: mult        $v0, $t4
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80052A64: mflo        $v0
    ctx->r2 = lo;
    // 0x80052A68: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x80052A6C: nop

    // 0x80052A70: bltzl       $v0, L_80052A78
    if (SIGNED(ctx->r2) < 0) {
        // 0x80052A74: addiu       $v0, $v0, 0x7
        ctx->r2 = ADD32(ctx->r2, 0X7);
            goto L_80052A78;
    }
    goto skip_11;
    // 0x80052A74: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    skip_11:
L_80052A78:
    // 0x80052A78: sra         $v0, $v0, 3
    ctx->r2 = S32(SIGNED(ctx->r2) >> 3);
    // 0x80052A7C: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    // 0x80052A80: sh          $v0, 0xC($a2)
    MEM_H(0XC, ctx->r6) = ctx->r2;
    // 0x80052A84: j           L_80052ABC
    // 0x80052A88: sh          $s6, 0xE($a2)
    MEM_H(0XE, ctx->r6) = ctx->r22;
        goto L_80052ABC;
    // 0x80052A88: sh          $s6, 0xE($a2)
    MEM_H(0XE, ctx->r6) = ctx->r22;
L_80052A8C:
    // 0x80052A8C: sh          $t3, 0x8($a2)
    MEM_H(0X8, ctx->r6) = ctx->r11;
    // 0x80052A90: sh          $t1, 0xA($a2)
    MEM_H(0XA, ctx->r6) = ctx->r9;
    // 0x80052A94: sh          $t0, 0xC($a2)
    MEM_H(0XC, ctx->r6) = ctx->r8;
    // 0x80052A98: j           L_80052ABC
    // 0x80052A9C: sh          $zero, 0xE($a2)
    MEM_H(0XE, ctx->r6) = 0;
        goto L_80052ABC;
    // 0x80052A9C: sh          $zero, 0xE($a2)
    MEM_H(0XE, ctx->r6) = 0;
L_80052AA0:
    // 0x80052AA0: slti        $v0, $t4, 0x9
    ctx->r2 = SIGNED(ctx->r12) < 0X9 ? 1 : 0;
    // 0x80052AA4: bne         $v0, $zero, L_800525AC
    if (ctx->r2 != 0) {
        // 0x80052AA8: subu        $t6, $t6, $s0
        ctx->r14 = SUB32(ctx->r14, ctx->r16);
            goto L_800525AC;
    }
    // 0x80052AA8: subu        $t6, $t6, $s0
    ctx->r14 = SUB32(ctx->r14, ctx->r16);
    // 0x80052AAC: addu        $t5, $t5, $fp
    ctx->r13 = ADD32(ctx->r13, ctx->r30);
    // 0x80052AB0: slti        $v0, $t5, 0x9
    ctx->r2 = SIGNED(ctx->r13) < 0X9 ? 1 : 0;
    // 0x80052AB4: bne         $v0, $zero, L_80052598
    if (ctx->r2 != 0) {
        // 0x80052AB8: addu        $t4, $zero, $zero
        ctx->r12 = ADD32(0, 0);
            goto L_80052598;
    }
    // 0x80052AB8: addu        $t4, $zero, $zero
    ctx->r12 = ADD32(0, 0);
L_80052ABC:
    // 0x80052ABC: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x80052AC0: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x80052AC4: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x80052AC8: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x80052ACC: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x80052AD0: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x80052AD4: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x80052AD8: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x80052ADC: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x80052AE0: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x80052AE4: jr          $ra
    // 0x80052AE8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x80052AE8: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80035ACC_10ECC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80035ACC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80035AD0: lui         $v0, 0xE00
    ctx->r2 = S32(0XE00 << 16);
    // 0x80035AD4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80035AD8: beq         $a0, $v0, L_80035BEC
    if (ctx->r4 == ctx->r2) {
        // 0x80035ADC: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_80035BEC;
    }
    // 0x80035ADC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80035AE0: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80035AE4: bne         $v0, $zero, L_80035B24
    if (ctx->r2 != 0) {
        // 0x80035AE8: lui         $v0, 0x1000
        ctx->r2 = S32(0X1000 << 16);
            goto L_80035B24;
    }
    // 0x80035AE8: lui         $v0, 0x1000
    ctx->r2 = S32(0X1000 << 16);
    // 0x80035AEC: lui         $v0, 0x500
    ctx->r2 = S32(0X500 << 16);
    // 0x80035AF0: beq         $a0, $v0, L_80035B7C
    if (ctx->r4 == ctx->r2) {
        // 0x80035AF4: slt         $v0, $v0, $a0
        ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
            goto L_80035B7C;
    }
    // 0x80035AF4: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80035AF8: bne         $v0, $zero, L_80035B14
    if (ctx->r2 != 0) {
        // 0x80035AFC: lui         $v0, 0xD00
        ctx->r2 = S32(0XD00 << 16);
            goto L_80035B14;
    }
    // 0x80035AFC: lui         $v0, 0xD00
    ctx->r2 = S32(0XD00 << 16);
    // 0x80035B00: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x80035B04: beq         $a0, $v0, L_80035B60
    if (ctx->r4 == ctx->r2) {
        // 0x80035B08: nop
    
            goto L_80035B60;
    }
    // 0x80035B08: nop

    // 0x80035B0C: j           L_80035C90
    // 0x80035B10: nop

        goto L_80035C90;
    // 0x80035B10: nop

L_80035B14:
    // 0x80035B14: beq         $a0, $v0, L_80035BD0
    if (ctx->r4 == ctx->r2) {
        // 0x80035B18: nop
    
            goto L_80035BD0;
    }
    // 0x80035B18: nop

    // 0x80035B1C: j           L_80035C90
    // 0x80035B20: nop

        goto L_80035C90;
    // 0x80035B20: nop

L_80035B24:
    // 0x80035B24: beq         $a0, $v0, L_80035BB4
    if (ctx->r4 == ctx->r2) {
        // 0x80035B28: slt         $v0, $v0, $a0
        ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
            goto L_80035BB4;
    }
    // 0x80035B28: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80035B2C: bne         $v0, $zero, L_80035B48
    if (ctx->r2 != 0) {
        // 0x80035B30: lui         $v0, 0x1300
        ctx->r2 = S32(0X1300 << 16);
            goto L_80035B48;
    }
    // 0x80035B30: lui         $v0, 0x1300
    ctx->r2 = S32(0X1300 << 16);
    // 0x80035B34: lui         $v0, 0xF00
    ctx->r2 = S32(0XF00 << 16);
    // 0x80035B38: beq         $a0, $v0, L_80035B98
    if (ctx->r4 == ctx->r2) {
        // 0x80035B3C: nop
    
            goto L_80035B98;
    }
    // 0x80035B3C: nop

    // 0x80035B40: j           L_80035C90
    // 0x80035B44: nop

        goto L_80035C90;
    // 0x80035B44: nop

L_80035B48:
    // 0x80035B48: beq         $a0, $v0, L_80035C5C
    if (ctx->r4 == ctx->r2) {
        // 0x80035B4C: lui         $v0, 0x1400
        ctx->r2 = S32(0X1400 << 16);
            goto L_80035C5C;
    }
    // 0x80035B4C: lui         $v0, 0x1400
    ctx->r2 = S32(0X1400 << 16);
    // 0x80035B50: beq         $a0, $v0, L_80035C78
    if (ctx->r4 == ctx->r2) {
        // 0x80035B54: nop
    
            goto L_80035C78;
    }
    // 0x80035B54: nop

    // 0x80035B58: j           L_80035C90
    // 0x80035B5C: nop

        goto L_80035C90;
    // 0x80035B5C: nop

L_80035B60:
    // 0x80035B60: lh          $v0, 0x100($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X100);
    // 0x80035B64: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80035B68: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80035B6C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80035B70: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80035B74: j           L_80035C90
    // 0x80035B78: sw          $v0, 0x55A0($at)
    MEM_W(0X55A0, ctx->r1) = ctx->r2;
        goto L_80035C90;
    // 0x80035B78: sw          $v0, 0x55A0($at)
    MEM_W(0X55A0, ctx->r1) = ctx->r2;
L_80035B7C:
    // 0x80035B7C: lh          $v0, 0x100($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X100);
    // 0x80035B80: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80035B84: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80035B88: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80035B8C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80035B90: j           L_80035C90
    // 0x80035B94: sw          $v0, 0x4000($at)
    MEM_W(0X4000, ctx->r1) = ctx->r2;
        goto L_80035C90;
    // 0x80035B94: sw          $v0, 0x4000($at)
    MEM_W(0X4000, ctx->r1) = ctx->r2;
L_80035B98:
    // 0x80035B98: lh          $v0, 0x100($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X100);
    // 0x80035B9C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80035BA0: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80035BA4: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80035BA8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80035BAC: j           L_80035C90
    // 0x80035BB0: sw          $v0, -0x15DC($at)
    MEM_W(-0X15DC, ctx->r1) = ctx->r2;
        goto L_80035C90;
    // 0x80035BB0: sw          $v0, -0x15DC($at)
    MEM_W(-0X15DC, ctx->r1) = ctx->r2;
L_80035BB4:
    // 0x80035BB4: lh          $v0, 0x100($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X100);
    // 0x80035BB8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80035BBC: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80035BC0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80035BC4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80035BC8: j           L_80035C90
    // 0x80035BCC: sw          $v0, -0x15E0($at)
    MEM_W(-0X15E0, ctx->r1) = ctx->r2;
        goto L_80035C90;
    // 0x80035BCC: sw          $v0, -0x15E0($at)
    MEM_W(-0X15E0, ctx->r1) = ctx->r2;
L_80035BD0:
    // 0x80035BD0: lh          $v0, 0x100($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X100);
    // 0x80035BD4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80035BD8: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80035BDC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80035BE0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80035BE4: j           L_80035C90
    // 0x80035BE8: sw          $v0, 0x984($at)
    MEM_W(0X984, ctx->r1) = ctx->r2;
        goto L_80035C90;
    // 0x80035BE8: sw          $v0, 0x984($at)
    MEM_W(0X984, ctx->r1) = ctx->r2;
L_80035BEC:
    // 0x80035BEC: lh          $v0, 0x100($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X100);
    // 0x80035BF0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80035BF4: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80035BF8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80035BFC: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80035C00: sw          $v0, -0x26F0($at)
    MEM_W(-0X26F0, ctx->r1) = ctx->r2;
    // 0x80035C04: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80035C08: blez        $v0, L_80035C90
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80035C0C: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_80035C90;
    }
    // 0x80035C0C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_80035C10:
    // 0x80035C10: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x80035C14: lw          $v1, -0x26F0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X26F0);
    // 0x80035C18: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x80035C1C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80035C20: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x80035C24: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    // 0x80035C28: lw          $a1, 0x10($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X10);
    // 0x80035C2C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80035C30: jal         0x800870A0
    // 0x80035C34: addu        $a1, $v1, $a1
    ctx->r5 = ADD32(ctx->r3, ctx->r5);
    func_800870A0_624A0(rdram, ctx);
        goto after_0;
    // 0x80035C34: addu        $a1, $v1, $a1
    ctx->r5 = ADD32(ctx->r3, ctx->r5);
    after_0:
    // 0x80035C38: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x80035C3C: lw          $v0, -0x26F0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X26F0);
    // 0x80035C40: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80035C44: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80035C48: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80035C4C: beq         $v0, $zero, L_80035C90
    if (ctx->r2 == 0) {
        // 0x80035C50: nop
    
            goto L_80035C90;
    }
    // 0x80035C50: nop

    // 0x80035C54: j           L_80035C10
    // 0x80035C58: nop

        goto L_80035C10;
    // 0x80035C58: nop

L_80035C5C:
    // 0x80035C5C: lh          $v0, 0x100($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X100);
    // 0x80035C60: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80035C64: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80035C68: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80035C6C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80035C70: j           L_80035C90
    // 0x80035C74: sw          $v0, -0x2658($at)
    MEM_W(-0X2658, ctx->r1) = ctx->r2;
        goto L_80035C90;
    // 0x80035C74: sw          $v0, -0x2658($at)
    MEM_W(-0X2658, ctx->r1) = ctx->r2;
L_80035C78:
    // 0x80035C78: lh          $v0, 0x100($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X100);
    // 0x80035C7C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80035C80: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80035C84: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80035C88: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80035C8C: sw          $v0, -0x2654($at)
    MEM_W(-0X2654, ctx->r1) = ctx->r2;
L_80035C90:
    // 0x80035C90: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80035C94: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80035C98: jr          $ra
    // 0x80035C9C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80035C9C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
