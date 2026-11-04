#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8003AFB0_163B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003AFB0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8003AFB4: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x8003AFB8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8003AFBC: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8003AFC0: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x8003AFC4: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x8003AFC8: lh          $a0, 0x24($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X24);
    // 0x8003AFCC: jal         0x80038CF8
    // 0x8003AFD0: lh          $a1, 0x28($s2)
    ctx->r5 = MEM_H(ctx->r18, 0X28);
    func_80038CF8_140F8(rdram, ctx);
        goto after_0;
    // 0x8003AFD0: lh          $a1, 0x28($s2)
    ctx->r5 = MEM_H(ctx->r18, 0X28);
    after_0:
    // 0x8003AFD4: bne         $v0, $zero, L_8003B264
    if (ctx->r2 != 0) {
        // 0x8003AFD8: nop
    
            goto L_8003B264;
    }
    // 0x8003AFD8: nop

    // 0x8003AFDC: lui         $s0, 0x801D
    ctx->r16 = S32(0X801D << 16);
    // 0x8003AFE0: addiu       $s0, $s0, 0x4760
    ctx->r16 = ADD32(ctx->r16, 0X4760);
    // 0x8003AFE4: jal         0x80031E5C
    // 0x8003AFE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80031E5C_D25C(rdram, ctx);
        goto after_1;
    // 0x8003AFE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8003AFEC: jal         0x80031E94
    // 0x8003AFF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80031E94_D294(rdram, ctx);
        goto after_2;
    // 0x8003AFF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8003AFF4: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8003AFF8: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x8003AFFC: addiu       $a1, $s2, 0x24
    ctx->r5 = ADD32(ctx->r18, 0X24);
    // 0x8003B000: jal         0x8009A3B4
    // 0x8003B004: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8003B004: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x8003B008: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8003B00C: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x8003B010: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8003B014: addiu       $a1, $a1, -0x3F58
    ctx->r5 = ADD32(ctx->r5, -0X3F58);
    // 0x8003B018: lui         $a2, 0x801E
    ctx->r6 = S32(0X801E << 16);
    // 0x8003B01C: jal         0x80032068
    // 0x8003B020: addiu       $a2, $a2, -0x7794
    ctx->r6 = ADD32(ctx->r6, -0X7794);
    func_80032068_D468(rdram, ctx);
        goto after_4;
    // 0x8003B020: addiu       $a2, $a2, -0x7794
    ctx->r6 = ADD32(ctx->r6, -0X7794);
    after_4:
    // 0x8003B024: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003B028: lw          $v1, -0x3F50($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3F50);
    // 0x8003B02C: bltzl       $v1, L_8003B034
    if (SIGNED(ctx->r3) < 0) {
        // 0x8003B030: addiu       $v1, $v1, 0x3
        ctx->r3 = ADD32(ctx->r3, 0X3);
            goto L_8003B034;
    }
    goto skip_0;
    // 0x8003B030: addiu       $v1, $v1, 0x3
    ctx->r3 = ADD32(ctx->r3, 0X3);
    skip_0:
L_8003B034:
    // 0x8003B034: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8003B038: lhu         $v0, -0x7810($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X7810);
    // 0x8003B03C: sra         $v1, $v1, 2
    ctx->r3 = S32(SIGNED(ctx->r3) >> 2);
    // 0x8003B040: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8003B044: bne         $v0, $zero, L_8003B264
    if (ctx->r2 != 0) {
        // 0x8003B048: sw          $v1, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r3;
            goto L_8003B264;
    }
    // 0x8003B048: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    // 0x8003B04C: slti        $v0, $v1, 0xC
    ctx->r2 = SIGNED(ctx->r3) < 0XC ? 1 : 0;
    // 0x8003B050: bne         $v0, $zero, L_8003B264
    if (ctx->r2 != 0) {
        // 0x8003B054: slti        $v0, $v1, 0x709
        ctx->r2 = SIGNED(ctx->r3) < 0X709 ? 1 : 0;
            goto L_8003B264;
    }
    // 0x8003B054: slti        $v0, $v1, 0x709
    ctx->r2 = SIGNED(ctx->r3) < 0X709 ? 1 : 0;
    // 0x8003B058: beq         $v0, $zero, L_8003B07C
    if (ctx->r2 == 0) {
        // 0x8003B05C: slti        $v0, $v1, 0x2BD
        ctx->r2 = SIGNED(ctx->r3) < 0X2BD ? 1 : 0;
            goto L_8003B07C;
    }
    // 0x8003B05C: slti        $v0, $v1, 0x2BD
    ctx->r2 = SIGNED(ctx->r3) < 0X2BD ? 1 : 0;
    // 0x8003B060: bnel        $v0, $zero, L_8003B080
    if (ctx->r2 != 0) {
        // 0x8003B064: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_8003B080;
    }
    goto skip_1;
    // 0x8003B064: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    skip_1:
    // 0x8003B068: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x8003B06C: lbu         $v0, -0x265E($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X265E);
    // 0x8003B070: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8003B074: beq         $v0, $zero, L_8003B080
    if (ctx->r2 == 0) {
        // 0x8003B078: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8003B080;
    }
    // 0x8003B078: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_8003B07C:
    // 0x8003B07C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
L_8003B080:
    // 0x8003B080: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x8003B084: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8003B088: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003B08C: sw          $v0, -0xC9C($at)
    MEM_W(-0XC9C, ctx->r1) = ctx->r2;
    // 0x8003B090: sb          $v1, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r3;
    // 0x8003B094: lw          $v0, 0x2C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X2C);
    // 0x8003B098: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x8003B09C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8003B0A0: beq         $v0, $zero, L_8003B0B4
    if (ctx->r2 == 0) {
        // 0x8003B0A4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8003B0B4;
    }
    // 0x8003B0A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8003B0A8: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x8003B0AC: j           L_8003B0D0
    // 0x8003B0B0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_8003B0D0;
    // 0x8003B0B0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8003B0B4:
    // 0x8003B0B4: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x8003B0B8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8003B0BC: jal         0x80081778
    // 0x8003B0C0: lw          $a0, -0xC9C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XC9C);
    func_80081778_5CB78(rdram, ctx);
        goto after_5;
    // 0x8003B0C0: lw          $a0, -0xC9C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XC9C);
    after_5:
    // 0x8003B0C4: bne         $v0, $zero, L_8003B0D0
    if (ctx->r2 != 0) {
        // 0x8003B0C8: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_8003B0D0;
    }
    // 0x8003B0C8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8003B0CC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_8003B0D0:
    // 0x8003B0D0: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x8003B0D4: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x8003B0D8: beq         $v0, $zero, L_8003B194
    if (ctx->r2 == 0) {
        // 0x8003B0DC: nop
    
            goto L_8003B194;
    }
    // 0x8003B0DC: nop

    // 0x8003B0E0: lw          $a0, 0x2C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X2C);
    // 0x8003B0E4: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x8003B0E8: sll         $v0, $v1, 8
    ctx->r2 = S32(ctx->r3 << 8);
    // 0x8003B0EC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8003B0F0: bltzl       $v0, L_8003B0F8
    if (SIGNED(ctx->r2) < 0) {
        // 0x8003B0F4: addiu       $v0, $v0, 0x7F
        ctx->r2 = ADD32(ctx->r2, 0X7F);
            goto L_8003B0F8;
    }
    goto skip_2;
    // 0x8003B0F4: addiu       $v0, $v0, 0x7F
    ctx->r2 = ADD32(ctx->r2, 0X7F);
    skip_2:
L_8003B0F8:
    // 0x8003B0F8: srl         $a3, $v0, 7
    ctx->r7 = S32(U32(ctx->r2) >> 7);
    // 0x8003B0FC: andi        $v1, $a0, 0xFF00
    ctx->r3 = ctx->r4 & 0XFF00;
    // 0x8003B100: srl         $v0, $v1, 8
    ctx->r2 = S32(U32(ctx->r3) >> 8);
    // 0x8003B104: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8003B108: bltzl       $v1, L_8003B110
    if (SIGNED(ctx->r3) < 0) {
        // 0x8003B10C: addiu       $v1, $v1, 0x7F
        ctx->r3 = ADD32(ctx->r3, 0X7F);
            goto L_8003B110;
    }
    goto skip_3;
    // 0x8003B10C: addiu       $v1, $v1, 0x7F
    ctx->r3 = ADD32(ctx->r3, 0X7F);
    skip_3:
L_8003B110:
    // 0x8003B110: srl         $a2, $v1, 7
    ctx->r6 = S32(U32(ctx->r3) >> 7);
    // 0x8003B114: srl         $v0, $a0, 16
    ctx->r2 = S32(U32(ctx->r4) >> 16);
    // 0x8003B118: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8003B11C: sll         $v1, $v0, 8
    ctx->r3 = S32(ctx->r2 << 8);
    // 0x8003B120: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8003B124: bltzl       $v1, L_8003B12C
    if (SIGNED(ctx->r3) < 0) {
        // 0x8003B128: addiu       $v1, $v1, 0x7F
        ctx->r3 = ADD32(ctx->r3, 0X7F);
            goto L_8003B12C;
    }
    goto skip_4;
    // 0x8003B128: addiu       $v1, $v1, 0x7F
    ctx->r3 = ADD32(ctx->r3, 0X7F);
    skip_4:
L_8003B12C:
    // 0x8003B12C: srl         $a0, $v1, 7
    ctx->r4 = S32(U32(ctx->r3) >> 7);
    // 0x8003B130: lui         $a1, 0x5555
    ctx->r5 = S32(0X5555 << 16);
    // 0x8003B134: ori         $a1, $a1, 0x5556
    ctx->r5 = ctx->r5 | 0X5556;
    // 0x8003B138: andi        $v0, $a3, 0xFF
    ctx->r2 = ctx->r7 & 0XFF;
    // 0x8003B13C: andi        $v1, $a2, 0xFF
    ctx->r3 = ctx->r6 & 0XFF;
    // 0x8003B140: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8003B144: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x8003B148: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8003B14C: mult        $v0, $a1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003B150: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x8003B154: mfhi        $t1
    ctx->r9 = hi;
    // 0x8003B158: subu        $v1, $t1, $v0
    ctx->r3 = SUB32(ctx->r9, ctx->r2);
    // 0x8003B15C: nop

    // 0x8003B160: bgez        $v1, L_8003B16C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8003B164: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_8003B16C;
    }
    // 0x8003B164: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x8003B168: addiu       $v0, $v1, 0xF
    ctx->r2 = ADD32(ctx->r3, 0XF);
L_8003B16C:
    // 0x8003B16C: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8003B170: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8003B174: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8003B178: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8003B17C: lh          $v0, -0x3664($at)
    ctx->r2 = MEM_H(ctx->r1, -0X3664);
    // 0x8003B180: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8003B184: slti        $v0, $v1, 0x100
    ctx->r2 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x8003B188: beql        $v0, $zero, L_8003B190
    if (ctx->r2 == 0) {
        // 0x8003B18C: addiu       $v1, $zero, 0xF8
        ctx->r3 = ADD32(0, 0XF8);
            goto L_8003B190;
    }
    goto skip_5;
    // 0x8003B18C: addiu       $v1, $zero, 0xF8
    ctx->r3 = ADD32(0, 0XF8);
    skip_5:
L_8003B190:
    // 0x8003B190: sb          $v1, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r3;
L_8003B194:
    // 0x8003B194: lui         $s0, 0x801D
    ctx->r16 = S32(0X801D << 16);
    // 0x8003B198: addiu       $s0, $s0, 0x4760
    ctx->r16 = ADD32(ctx->r16, 0X4760);
    // 0x8003B19C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8003B1A0: addiu       $a1, $s2, 0x4
    ctx->r5 = ADD32(ctx->r18, 0X4);
    // 0x8003B1A4: lui         $s1, 0x8021
    ctx->r17 = S32(0X8021 << 16);
    // 0x8003B1A8: addiu       $s1, $s1, 0x990
    ctx->r17 = ADD32(ctx->r17, 0X990);
    // 0x8003B1AC: jal         0x800306F0
    // 0x8003B1B0: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_800306F0_BAF0(rdram, ctx);
        goto after_6;
    // 0x8003B1B0: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_6:
    // 0x8003B1B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8003B1B8: addiu       $a1, $s2, 0x24
    ctx->r5 = ADD32(ctx->r18, 0X24);
    // 0x8003B1BC: jal         0x800308E8
    // 0x8003B1C0: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    func_800308E8_BCE8(rdram, ctx);
        goto after_7;
    // 0x8003B1C0: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_7:
    // 0x8003B1C4: lui         $v0, 0x801D
    ctx->r2 = S32(0X801D << 16);
    // 0x8003B1C8: lw          $v0, 0x4774($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4774);
    // 0x8003B1CC: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x8003B1D0: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x8003B1D4: lw          $v1, 0x4778($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4778);
    // 0x8003B1D8: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x8003B1DC: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x8003B1E0: lw          $a1, 0x477C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X477C);
    // 0x8003B1E4: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8003B1E8: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8003B1EC: addu        $v1, $v1, $a3
    ctx->r3 = ADD32(ctx->r3, ctx->r7);
    // 0x8003B1F0: addu        $a1, $a1, $t0
    ctx->r5 = ADD32(ctx->r5, ctx->r8);
    // 0x8003B1F4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8003B1F8: sw          $v0, 0x9A4($at)
    MEM_W(0X9A4, ctx->r1) = ctx->r2;
    // 0x8003B1FC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8003B200: sw          $v1, 0x9A8($at)
    MEM_W(0X9A8, ctx->r1) = ctx->r3;
    // 0x8003B204: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8003B208: sw          $a1, 0x9AC($at)
    MEM_W(0X9AC, ctx->r1) = ctx->r5;
    // 0x8003B20C: jal         0x80031E5C
    // 0x8003B210: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80031E5C_D25C(rdram, ctx);
        goto after_8;
    // 0x8003B210: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_8:
    // 0x8003B214: jal         0x80031E94
    // 0x8003B218: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80031E94_D294(rdram, ctx);
        goto after_9;
    // 0x8003B218: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_9:
    // 0x8003B21C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8003B220: lb          $a1, 0x33($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X33);
    // 0x8003B224: lui         $a2, 0x8008
    ctx->r6 = S32(0X8008 << 16);
    // 0x8003B228: addiu       $a2, $a2, 0x128C
    ctx->r6 = ADD32(ctx->r6, 0X128C);
    // 0x8003B22C: jal         0x800283A8
    // 0x8003B230: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_800283A8_37A8(rdram, ctx);
        goto after_10;
    // 0x8003B230: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_10:
    // 0x8003B234: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8003B238: lw          $v0, -0xC9C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XC9C);
    // 0x8003B23C: lhu         $a1, 0x32($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X32);
    // 0x8003B240: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8003B244: lw          $v0, 0x30($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X30);
    // 0x8003B248: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8003B24C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8003B250: lw          $v0, 0x2C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X2C);
    // 0x8003B254: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8003B258: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    // 0x8003B25C: jal         0x8008190C
    // 0x8003B260: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_8008190C_5CD0C(rdram, ctx);
        goto after_11;
    // 0x8003B260: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_11:
L_8003B264:
    // 0x8003B264: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8003B268: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x8003B26C: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x8003B270: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8003B274: jr          $ra
    // 0x8003B278: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x8003B278: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_800496C0_24AC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800496C0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x800496C4: lw          $v0, 0x6B30($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6B30);
    // 0x800496C8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800496CC: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x800496D0: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x800496D4: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x800496D8: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x800496DC: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x800496E0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x800496E4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x800496E8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x800496EC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x800496F0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x800496F4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800496F8: sw          $v0, 0x6B30($at)
    MEM_W(0X6B30, ctx->r1) = ctx->r2;
    // 0x800496FC: lbu         $v0, 0xE($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XE);
    // 0x80049700: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80049704: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x80049708: beq         $v0, $zero, L_8004971C
    if (ctx->r2 == 0) {
        // 0x8004970C: addiu       $s6, $zero, 0x110
        ctx->r22 = ADD32(0, 0X110);
            goto L_8004971C;
    }
    // 0x8004970C: addiu       $s6, $zero, 0x110
    ctx->r22 = ADD32(0, 0X110);
    // 0x80049710: lh          $s6, 0x14($a0)
    ctx->r22 = MEM_H(ctx->r4, 0X14);
    // 0x80049714: j           L_80049720
    // 0x80049718: lh          $s4, 0x16($a0)
    ctx->r20 = MEM_H(ctx->r4, 0X16);
        goto L_80049720;
    // 0x80049718: lh          $s4, 0x16($a0)
    ctx->r20 = MEM_H(ctx->r4, 0X16);
L_8004971C:
    // 0x8004971C: addiu       $s4, $zero, 0xBE
    ctx->r20 = ADD32(0, 0XBE);
L_80049720:
    // 0x80049720: lbu         $v0, 0xD($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD);
    // 0x80049724: beq         $v0, $zero, L_80049730
    if (ctx->r2 == 0) {
        // 0x80049728: addu        $s5, $zero, $zero
        ctx->r21 = ADD32(0, 0);
            goto L_80049730;
    }
    // 0x80049728: addu        $s5, $zero, $zero
    ctx->r21 = ADD32(0, 0);
    // 0x8004972C: lh          $s5, 0x1A($a0)
    ctx->r21 = MEM_H(ctx->r4, 0X1A);
L_80049730:
    // 0x80049730: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80049734: addiu       $a0, $a0, -0x30DC
    ctx->r4 = ADD32(ctx->r4, -0X30DC);
    // 0x80049738: addu        $s3, $s6, $zero
    ctx->r19 = ADD32(ctx->r22, 0);
    // 0x8004973C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80049740: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    // 0x80049744: jal         0x80049CCC
    // 0x80049748: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80049CCC_250CC(rdram, ctx);
        goto after_0;
    // 0x80049748: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x8004974C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80049750: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x80049754: lui         $a3, 0x8018
    ctx->r7 = S32(0X8018 << 16);
    // 0x80049758: lw          $a3, -0x4A00($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X4A00);
    // 0x8004975C: lui         $s7, 0x8009
    ctx->r23 = S32(0X8009 << 16);
    // 0x80049760: addiu       $s7, $s7, -0x6330
    ctx->r23 = ADD32(ctx->r23, -0X6330);
    // 0x80049764: jal         0x800283A8
    // 0x80049768: addu        $a2, $s7, $zero
    ctx->r6 = ADD32(ctx->r23, 0);
    func_800283A8_37A8(rdram, ctx);
        goto after_1;
    // 0x80049768: addu        $a2, $s7, $zero
    ctx->r6 = ADD32(ctx->r23, 0);
    after_1:
    // 0x8004976C: lb          $a0, 0x170($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X170);
    // 0x80049770: sll         $a1, $a0, 3
    ctx->r5 = S32(ctx->r4 << 3);
    // 0x80049774: addu        $a1, $s0, $a1
    ctx->r5 = ADD32(ctx->r16, ctx->r5);
    // 0x80049778: sll         $v1, $a0, 2
    ctx->r3 = S32(ctx->r4 << 2);
    // 0x8004977C: lb          $v0, 0x4F5($a1)
    ctx->r2 = MEM_B(ctx->r5, 0X4F5);
    // 0x80049780: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80049784: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80049788: lw          $v1, 0x351C($at)
    ctx->r3 = MEM_W(ctx->r1, 0X351C);
    // 0x8004978C: addiu       $a2, $zero, 0x7FFF
    ctx->r6 = ADD32(0, 0X7FFF);
    // 0x80049790: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80049794: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80049798: lh          $s2, 0x2($v0)
    ctx->r18 = MEM_H(ctx->r2, 0X2);
    // 0x8004979C: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x800497A0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x800497A4: lh          $v1, 0x4FA($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X4FA);
    // 0x800497A8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800497AC: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x800497B0: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x800497B4: lbu         $a0, 0x30FC($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X30FC);
    // 0x800497B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800497BC: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x800497C0: sllv        $v0, $v0, $a0
    ctx->r2 = S32(ctx->r2 << (ctx->r4 & 31));
    // 0x800497C4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x800497C8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x800497CC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x800497D0: bne         $s2, $a2, L_800497F8
    if (ctx->r18 != ctx->r6) {
        // 0x800497D4: srav        $v1, $v1, $a0
        ctx->r3 = S32(SIGNED(ctx->r3) >> (ctx->r4 & 31));
            goto L_800497F8;
    }
    // 0x800497D4: srav        $v1, $v1, $a0
    ctx->r3 = S32(SIGNED(ctx->r3) >> (ctx->r4 & 31));
    // 0x800497D8: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x800497DC: addiu       $a0, $a0, -0x3078
    ctx->r4 = ADD32(ctx->r4, -0X3078);
    // 0x800497E0: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x800497E4: addu        $a2, $s4, $s5
    ctx->r6 = ADD32(ctx->r20, ctx->r21);
    // 0x800497E8: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x800497EC: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x800497F0: j           L_800498BC
    // 0x800497F4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
        goto L_800498BC;
    // 0x800497F4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
L_800497F8:
    // 0x800497F8: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
    // 0x800497FC: beq         $v1, $zero, L_8004988C
    if (ctx->r3 == 0) {
        // 0x80049800: srav        $s2, $v0, $a0
        ctx->r18 = S32(SIGNED(ctx->r2) >> (ctx->r4 & 31));
            goto L_8004988C;
    }
    // 0x80049800: srav        $s2, $v0, $a0
    ctx->r18 = S32(SIGNED(ctx->r2) >> (ctx->r4 & 31));
    // 0x80049804: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x80049808: addiu       $s1, $s1, -0x30B4
    ctx->r17 = ADD32(ctx->r17, -0X30B4);
    // 0x8004980C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80049810: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80049814: addu        $s0, $s4, $s5
    ctx->r16 = ADD32(ctx->r20, ctx->r21);
    // 0x80049818: subu        $s0, $s0, $v1
    ctx->r16 = SUB32(ctx->r16, ctx->r3);
    // 0x8004981C: addiu       $a2, $s0, 0x1
    ctx->r6 = ADD32(ctx->r16, 0X1);
    // 0x80049820: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x80049824: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80049828: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x8004982C: lhu         $a3, -0x30AC($a3)
    ctx->r7 = MEM_HU(ctx->r7, -0X30AC);
    // 0x80049830: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80049834: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80049838: or          $a3, $a3, $v0
    ctx->r7 = ctx->r7 | ctx->r2;
    // 0x8004983C: jal         0x80049CCC
    // 0x80049840: andi        $a3, $a3, 0xFFFF
    ctx->r7 = ctx->r7 & 0XFFFF;
    func_80049CCC_250CC(rdram, ctx);
        goto after_2;
    // 0x80049840: andi        $a3, $a3, 0xFFFF
    ctx->r7 = ctx->r7 & 0XFFFF;
    after_2:
    // 0x80049844: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80049848: lui         $a3, 0x8018
    ctx->r7 = S32(0X8018 << 16);
    // 0x8004984C: lw          $a3, -0x4A00($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X4A00);
    // 0x80049850: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x80049854: jal         0x800283A8
    // 0x80049858: addu        $a2, $s7, $zero
    ctx->r6 = ADD32(ctx->r23, 0);
    func_800283A8_37A8(rdram, ctx);
        goto after_3;
    // 0x80049858: addu        $a2, $s7, $zero
    ctx->r6 = ADD32(ctx->r23, 0);
    after_3:
    // 0x8004985C: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x80049860: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80049864: sll         $s0, $s0, 16
    ctx->r16 = S32(ctx->r16 << 16);
    // 0x80049868: sra         $a2, $s0, 16
    ctx->r6 = S32(SIGNED(ctx->r16) >> 16);
    // 0x8004986C: jal         0x80049CCC
    // 0x80049870: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80049CCC_250CC(rdram, ctx);
        goto after_4;
    // 0x80049870: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
    // 0x80049874: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80049878: lui         $a3, 0x8018
    ctx->r7 = S32(0X8018 << 16);
    // 0x8004987C: lw          $a3, -0x4A00($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X4A00);
    // 0x80049880: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x80049884: jal         0x800283A8
    // 0x80049888: addu        $a2, $s7, $zero
    ctx->r6 = ADD32(ctx->r23, 0);
    func_800283A8_37A8(rdram, ctx);
        goto after_5;
    // 0x80049888: addu        $a2, $s7, $zero
    ctx->r6 = ADD32(ctx->r23, 0);
    after_5:
L_8004988C:
    // 0x8004988C: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80049890: addiu       $a0, $a0, -0x308C
    ctx->r4 = ADD32(ctx->r4, -0X308C);
    // 0x80049894: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80049898: addu        $a2, $s4, $s5
    ctx->r6 = ADD32(ctx->r20, ctx->r21);
    // 0x8004989C: subu        $a2, $a2, $s2
    ctx->r6 = SUB32(ctx->r6, ctx->r18);
    // 0x800498A0: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x800498A4: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x800498A8: lhu         $a3, -0x3084($a3)
    ctx->r7 = MEM_HU(ctx->r7, -0X3084);
    // 0x800498AC: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x800498B0: sll         $v0, $s2, 8
    ctx->r2 = S32(ctx->r18 << 8);
    // 0x800498B4: or          $a3, $a3, $v0
    ctx->r7 = ctx->r7 | ctx->r2;
    // 0x800498B8: andi        $a3, $a3, 0xFFFF
    ctx->r7 = ctx->r7 & 0XFFFF;
L_800498BC:
    // 0x800498BC: jal         0x80049CCC
    // 0x800498C0: nop

    func_80049CCC_250CC(rdram, ctx);
        goto after_6;
    // 0x800498C0: nop

    after_6:
    // 0x800498C4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x800498C8: lui         $a3, 0x8018
    ctx->r7 = S32(0X8018 << 16);
    // 0x800498CC: lw          $a3, -0x4A00($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X4A00);
    // 0x800498D0: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x800498D4: jal         0x800283A8
    // 0x800498D8: addu        $a2, $s7, $zero
    ctx->r6 = ADD32(ctx->r23, 0);
    func_800283A8_37A8(rdram, ctx);
        goto after_7;
    // 0x800498D8: addu        $a2, $s7, $zero
    ctx->r6 = ADD32(ctx->r23, 0);
    after_7:
    // 0x800498DC: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x800498E0: addiu       $a0, $a0, -0x30C8
    ctx->r4 = ADD32(ctx->r4, -0X30C8);
    // 0x800498E4: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    // 0x800498E8: addu        $a2, $s4, $s5
    ctx->r6 = ADD32(ctx->r20, ctx->r21);
    // 0x800498EC: subu        $a2, $a2, $s2
    ctx->r6 = SUB32(ctx->r6, ctx->r18);
    // 0x800498F0: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x800498F4: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x800498F8: jal         0x80049CCC
    // 0x800498FC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80049CCC_250CC(rdram, ctx);
        goto after_8;
    // 0x800498FC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_8:
    // 0x80049900: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80049904: lui         $a3, 0x8018
    ctx->r7 = S32(0X8018 << 16);
    // 0x80049908: lw          $a3, -0x4A00($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X4A00);
    // 0x8004990C: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x80049910: addiu       $a2, $a2, -0x6330
    ctx->r6 = ADD32(ctx->r6, -0X6330);
    // 0x80049914: jal         0x800283A8
    // 0x80049918: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_800283A8_37A8(rdram, ctx);
        goto after_9;
    // 0x80049918: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_9:
    // 0x8004991C: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80049920: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x80049924: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x80049928: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x8004992C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80049930: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80049934: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80049938: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8004993C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80049940: jr          $ra
    // 0x80049944: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80049944: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8007B794_56B94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007B794: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007B798: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8007B79C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8007B7A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007B7A4: jal         0x80053ED8
    // 0x8007B7A8: lbu         $a0, 0xC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XC);
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_0;
    // 0x8007B7A8: lbu         $a0, 0xC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XC);
    after_0:
    // 0x8007B7AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8007B7B0: jal         0x8004F568
    // 0x8007B7B4: sw          $zero, 0x198($v0)
    MEM_W(0X198, ctx->r2) = 0;
    func_8004F568_2A968(rdram, ctx);
        goto after_1;
    // 0x8007B7B4: sw          $zero, 0x198($v0)
    MEM_W(0X198, ctx->r2) = 0;
    after_1:
    // 0x8007B7B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007B7BC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8007B7C0: jr          $ra
    // 0x8007B7C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8007B7C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007B7C8: nop

    // 0x8007B7CC: nop

;}
RECOMP_FUNC void __osPfsReleasePages(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8009D6EC: lw          $t1, 0x10($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X10);
    // 0x8009D6F0: sll         $v0, $a3, 8
    ctx->r2 = S32(ctx->r7 << 8);
    // 0x8009D6F4: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
    // 0x8009D6F8: or          $v1, $v0, $a2
    ctx->r3 = ctx->r2 | ctx->r6;
    // 0x8009D6FC: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x8009D700: andi        $a3, $a3, 0xFF
    ctx->r7 = ctx->r7 & 0XFF;
    // 0x8009D704: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_8009D708:
    // 0x8009D708: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x8009D70C: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8009D710: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8009D714: lhu         $v1, 0x0($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X0);
    // 0x8009D718: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8009D71C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8009D720: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x8009D724: sh          $t0, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r8;
    // 0x8009D728: lw          $v0, 0x60($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X60);
    // 0x8009D72C: andi        $a2, $v1, 0xFFFF
    ctx->r6 = ctx->r3 & 0XFFFF;
    // 0x8009D730: slt         $v0, $a2, $v0
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8009D734: bnel        $v0, $zero, L_8009D74C
    if (ctx->r2 != 0) {
        // 0x8009D738: sh          $v1, 0x0($t1)
        MEM_H(0X0, ctx->r9) = ctx->r3;
            goto L_8009D74C;
    }
    goto skip_0;
    // 0x8009D738: sh          $v1, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r3;
    skip_0:
    // 0x8009D73C: srl         $v0, $a2, 8
    ctx->r2 = S32(U32(ctx->r6) >> 8);
    // 0x8009D740: beq         $v0, $a3, L_8009D708
    if (ctx->r2 == ctx->r7) {
        // 0x8009D744: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_8009D708;
    }
    // 0x8009D744: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x8009D748: sh          $v1, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r3;
L_8009D74C:
    // 0x8009D74C: jr          $ra
    // 0x8009D750: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    TRACE_RETURN()
    return;
    // 0x8009D750: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_80031AC0_CEC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80031AC0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80031AC4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80031AC8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80031ACC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80031AD0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80031AD4: jal         0x80032510
    // 0x80031AD8: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    func_80032510_D910(rdram, ctx);
        goto after_0;
    // 0x80031AD8: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    after_0:
    // 0x80031ADC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80031AE0: jal         0x800324D0
    // 0x80031AE4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_800324D0_D8D0(rdram, ctx);
        goto after_1;
    // 0x80031AE4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_1:
    // 0x80031AE8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80031AEC: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x80031AF0: addu        $v1, $s0, $zero
    ctx->r3 = ADD32(ctx->r16, 0);
    // 0x80031AF4: sh          $v1, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r3;
    // 0x80031AF8: addiu       $v1, $zero, 0x1000
    ctx->r3 = ADD32(0, 0X1000);
    // 0x80031AFC: negu        $s0, $s0
    ctx->r16 = SUB32(0, ctx->r16);
    // 0x80031B00: sh          $a0, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r4;
    // 0x80031B04: sh          $zero, 0x2($v0)
    MEM_H(0X2, ctx->r2) = 0;
    // 0x80031B08: sh          $zero, 0x6($v0)
    MEM_H(0X6, ctx->r2) = 0;
    // 0x80031B0C: sh          $v1, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r3;
    // 0x80031B10: sh          $zero, 0xA($v0)
    MEM_H(0XA, ctx->r2) = 0;
    // 0x80031B14: sh          $s0, 0xC($v0)
    MEM_H(0XC, ctx->r2) = ctx->r16;
    // 0x80031B18: sh          $zero, 0xE($v0)
    MEM_H(0XE, ctx->r2) = 0;
    // 0x80031B1C: sh          $a0, 0x10($v0)
    MEM_H(0X10, ctx->r2) = ctx->r4;
    // 0x80031B20: sw          $zero, 0x14($v0)
    MEM_W(0X14, ctx->r2) = 0;
    // 0x80031B24: sw          $zero, 0x18($v0)
    MEM_W(0X18, ctx->r2) = 0;
    // 0x80031B28: sw          $zero, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = 0;
    // 0x80031B2C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80031B30: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80031B34: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80031B38: jr          $ra
    // 0x80031B3C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80031B3C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800A3450_7E850(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800A3450: lui         $v0, 0x8019
    ctx->r2 = S32(0X8019 << 16);
    // 0x800A3454: lw          $v0, 0x3C20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3C20);
    // 0x800A3458: lui         $v1, 0x41C6
    ctx->r3 = S32(0X41C6 << 16);
    // 0x800A345C: ori         $v1, $v1, 0x4E6D
    ctx->r3 = ctx->r3 | 0X4E6D;
    // 0x800A3460: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800A3464: mflo        $v0
    ctx->r2 = lo;
    // 0x800A3468: addiu       $v1, $v0, 0x3039
    ctx->r3 = ADD32(ctx->r2, 0X3039);
    // 0x800A346C: lui         $at, 0x8019
    ctx->r1 = S32(0X8019 << 16);
    // 0x800A3470: sw          $v1, 0x3C20($at)
    MEM_W(0X3C20, ctx->r1) = ctx->r3;
    // 0x800A3474: addiu       $v0, $v0, 0x303A
    ctx->r2 = ADD32(ctx->r2, 0X303A);
    // 0x800A3478: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x800A347C: jr          $ra
    // 0x800A3480: andi        $v0, $v0, 0x7FFF
    ctx->r2 = ctx->r2 & 0X7FFF;
    TRACE_RETURN()
    return;
    // 0x800A3480: andi        $v0, $v0, 0x7FFF
    ctx->r2 = ctx->r2 & 0X7FFF;
;}
RECOMP_FUNC void alHeapInit(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80098C80: andi        $v1, $a1, 0xF
    ctx->r3 = ctx->r5 & 0XF;
    // 0x80098C84: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80098C88: subu        $v1, $v0, $v1
    ctx->r3 = SUB32(ctx->r2, ctx->r3);
    // 0x80098C8C: beq         $v1, $v0, L_80098C9C
    if (ctx->r3 == ctx->r2) {
        // 0x80098C90: addu        $v0, $a1, $v1
        ctx->r2 = ADD32(ctx->r5, ctx->r3);
            goto L_80098C9C;
    }
    // 0x80098C90: addu        $v0, $a1, $v1
    ctx->r2 = ADD32(ctx->r5, ctx->r3);
    // 0x80098C94: j           L_80098CA0
    // 0x80098C98: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
        goto L_80098CA0;
    // 0x80098C98: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
L_80098C9C:
    // 0x80098C9C: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
L_80098CA0:
    // 0x80098CA0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80098CA4: sw          $a2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r6;
    // 0x80098CA8: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x80098CAC: jr          $ra
    // 0x80098CB0: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80098CB0: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_80061E74_3D274(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80061E74: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x80061E78: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80061E7C: jr          $ra
    // 0x80061E80: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80061E80: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_8008B2E8_666E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008B2E8: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008B2EC: jr          $ra
    // 0x8008B2F0: sw          $a0, 0x4FB8($at)
    MEM_W(0X4FB8, ctx->r1) = ctx->r4;
    TRACE_RETURN()
    return;
    // 0x8008B2F0: sw          $a0, 0x4FB8($at)
    MEM_W(0X4FB8, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void alSynNew(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80098D50: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80098D54: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x80098D58: addu        $s5, $a1, $zero
    ctx->r21 = ADD32(ctx->r5, 0);
    // 0x80098D5C: sw          $ra, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r31;
    // 0x80098D60: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x80098D64: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x80098D68: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80098D6C: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80098D70: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80098D74: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80098D78: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80098D7C: lw          $s6, 0x14($s5)
    ctx->r22 = MEM_W(ctx->r21, 0X14);
    // 0x80098D80: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x80098D84: sw          $zero, 0x0($s4)
    MEM_W(0X0, ctx->r20) = 0;
    // 0x80098D88: lw          $v0, 0x4($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X4);
    // 0x80098D8C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80098D90: sw          $zero, 0x20($s4)
    MEM_W(0X20, ctx->r20) = 0;
    // 0x80098D94: sw          $zero, 0x1C($s4)
    MEM_W(0X1C, ctx->r20) = 0;
    // 0x80098D98: sw          $v0, 0x3C($s4)
    MEM_W(0X3C, ctx->r20) = ctx->r2;
    // 0x80098D9C: lw          $v1, 0x18($s5)
    ctx->r3 = MEM_W(ctx->r21, 0X18);
    // 0x80098DA0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80098DA4: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x80098DA8: sw          $v0, 0x48($s4)
    MEM_W(0X48, ctx->r20) = ctx->r2;
    // 0x80098DAC: sw          $v1, 0x44($s4)
    MEM_W(0X44, ctx->r20) = ctx->r3;
    // 0x80098DB0: lw          $v0, 0x10($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X10);
    // 0x80098DB4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80098DB8: addu        $a2, $s6, $zero
    ctx->r6 = ADD32(ctx->r22, 0);
    // 0x80098DBC: sw          $v0, 0x24($s4)
    MEM_W(0X24, ctx->r20) = ctx->r2;
    // 0x80098DC0: addiu       $v0, $zero, 0x1C
    ctx->r2 = ADD32(0, 0X1C);
    // 0x80098DC4: jal         0x80098CC0
    // 0x80098DC8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    alHeapDBAlloc(rdram, ctx);
        goto after_0;
    // 0x80098DC8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x80098DCC: addu        $s7, $v0, $zero
    ctx->r23 = ADD32(ctx->r2, 0);
    // 0x80098DD0: jal         0x80096208
    // 0x80098DD4: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    alSaveNew(rdram, ctx);
        goto after_1;
    // 0x80098DD4: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    after_1:
    // 0x80098DD8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80098DDC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80098DE0: addu        $a2, $s6, $zero
    ctx->r6 = ADD32(ctx->r22, 0);
    // 0x80098DE4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80098DE8: addiu       $v0, $zero, 0x4C
    ctx->r2 = ADD32(0, 0X4C);
    // 0x80098DEC: sw          $s7, 0x38($s4)
    MEM_W(0X38, ctx->r20) = ctx->r23;
    // 0x80098DF0: jal         0x80098CC0
    // 0x80098DF4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    alHeapDBAlloc(rdram, ctx);
        goto after_2;
    // 0x80098DF4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_2:
    // 0x80098DF8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80098DFC: sw          $v0, 0x34($s4)
    MEM_W(0X34, ctx->r20) = ctx->r2;
    // 0x80098E00: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80098E04: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
    // 0x80098E08: sw          $v0, 0x40($s4)
    MEM_W(0X40, ctx->r20) = ctx->r2;
    // 0x80098E0C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80098E10: lw          $a3, 0x4($s5)
    ctx->r7 = MEM_W(ctx->r21, 0X4);
    // 0x80098E14: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80098E18: jal         0x80098CC0
    // 0x80098E1C: addu        $a2, $s6, $zero
    ctx->r6 = ADD32(ctx->r22, 0);
    alHeapDBAlloc(rdram, ctx);
        goto after_3;
    // 0x80098E1C: addu        $a2, $s6, $zero
    ctx->r6 = ADD32(ctx->r22, 0);
    after_3:
    // 0x80098E20: lw          $a0, 0x34($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X34);
    // 0x80098E24: lw          $a2, 0x4($s5)
    ctx->r6 = MEM_W(ctx->r21, 0X4);
    // 0x80098E28: jal         0x80096150
    // 0x80098E2C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    alAuxBusNew(rdram, ctx);
        goto after_4;
    // 0x80098E2C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_4:
    // 0x80098E30: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80098E34: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80098E38: addu        $a2, $s6, $zero
    ctx->r6 = ADD32(ctx->r22, 0);
    // 0x80098E3C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80098E40: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80098E44: jal         0x80098CC0
    // 0x80098E48: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    alHeapDBAlloc(rdram, ctx);
        goto after_5;
    // 0x80098E48: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_5:
    // 0x80098E4C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80098E50: sw          $v0, 0x30($s4)
    MEM_W(0X30, ctx->r20) = ctx->r2;
    // 0x80098E54: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80098E58: lw          $a3, 0x4($s5)
    ctx->r7 = MEM_W(ctx->r21, 0X4);
    // 0x80098E5C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80098E60: jal         0x80098CC0
    // 0x80098E64: addu        $a2, $s6, $zero
    ctx->r6 = ADD32(ctx->r22, 0);
    alHeapDBAlloc(rdram, ctx);
        goto after_6;
    // 0x80098E64: addu        $a2, $s6, $zero
    ctx->r6 = ADD32(ctx->r22, 0);
    after_6:
    // 0x80098E68: lw          $a0, 0x30($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X30);
    // 0x80098E6C: lw          $a2, 0x4($s5)
    ctx->r6 = MEM_W(ctx->r21, 0X4);
    // 0x80098E70: jal         0x800961AC
    // 0x80098E74: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    alMainBusNew(rdram, ctx);
        goto after_7;
    // 0x80098E74: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_7:
    // 0x80098E78: lbu         $v0, 0x1C($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0X1C);
    // 0x80098E7C: beq         $v0, $zero, L_80098E9C
    if (ctx->r2 == 0) {
        // 0x80098E80: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_80098E9C;
    }
    // 0x80098E80: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x80098E84: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80098E88: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    // 0x80098E8C: jal         0x800993A0
    // 0x80098E90: addu        $a3, $s6, $zero
    ctx->r7 = ADD32(ctx->r22, 0);
    alSynAllocFX(rdram, ctx);
        goto after_8;
    // 0x80098E90: addu        $a3, $s6, $zero
    ctx->r7 = ADD32(ctx->r22, 0);
    after_8:
    // 0x80098E94: j           L_80098EB0
    // 0x80098E98: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
        goto L_80098EB0;
    // 0x80098E98: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_80098E9C:
    // 0x80098E9C: lw          $a0, 0x30($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X30);
    // 0x80098EA0: lw          $a2, 0x34($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X34);
    // 0x80098EA4: jal         0x80097C80
    // 0x80098EA8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    alMainBusParam(rdram, ctx);
        goto after_9;
    // 0x80098EA8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_9:
    // 0x80098EAC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_80098EB0:
    // 0x80098EB0: addiu       $v0, $zero, 0xDC
    ctx->r2 = ADD32(0, 0XDC);
    // 0x80098EB4: sw          $zero, 0x4($s4)
    MEM_W(0X4, ctx->r20) = 0;
    // 0x80098EB8: sw          $zero, 0x8($s4)
    MEM_W(0X8, ctx->r20) = 0;
    // 0x80098EBC: sw          $zero, 0x14($s4)
    MEM_W(0X14, ctx->r20) = 0;
    // 0x80098EC0: sw          $zero, 0x18($s4)
    MEM_W(0X18, ctx->r20) = 0;
    // 0x80098EC4: sw          $zero, 0xC($s4)
    MEM_W(0XC, ctx->r20) = 0;
    // 0x80098EC8: sw          $zero, 0x10($s4)
    MEM_W(0X10, ctx->r20) = 0;
    // 0x80098ECC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80098ED0: lw          $a3, 0x4($s5)
    ctx->r7 = MEM_W(ctx->r21, 0X4);
    // 0x80098ED4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80098ED8: jal         0x80098CC0
    // 0x80098EDC: addu        $a2, $s6, $zero
    ctx->r6 = ADD32(ctx->r22, 0);
    alHeapDBAlloc(rdram, ctx);
        goto after_10;
    // 0x80098EDC: addu        $a2, $s6, $zero
    ctx->r6 = ADD32(ctx->r22, 0);
    after_10:
    // 0x80098EE0: lw          $v1, 0x4($s5)
    ctx->r3 = MEM_W(ctx->r21, 0X4);
    // 0x80098EE4: blez        $v1, L_80098F8C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80098EE8: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_80098F8C;
    }
    // 0x80098EE8: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x80098EEC: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
L_80098EF0:
    // 0x80098EF0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80098EF4: jal         0x80098C2C
    // 0x80098EF8: addiu       $a1, $s4, 0x4
    ctx->r5 = ADD32(ctx->r20, 0X4);
    alLink(rdram, ctx);
        goto after_11;
    // 0x80098EF8: addiu       $a1, $s4, 0x4
    ctx->r5 = ADD32(ctx->r20, 0X4);
    after_11:
    // 0x80098EFC: sw          $zero, 0x8($s2)
    MEM_W(0X8, ctx->r18) = 0;
    // 0x80098F00: lw          $a1, 0x24($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X24);
    // 0x80098F04: addiu       $s0, $s2, 0x10
    ctx->r16 = ADD32(ctx->r18, 0X10);
    // 0x80098F08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80098F0C: jal         0x80096014
    // 0x80098F10: addu        $a2, $s6, $zero
    ctx->r6 = ADD32(ctx->r22, 0);
    alLoadNew(rdram, ctx);
        goto after_12;
    // 0x80098F10: addu        $a2, $s6, $zero
    ctx->r6 = ADD32(ctx->r22, 0);
    after_12:
    // 0x80098F14: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80098F18: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80098F1C: jal         0x80096A30
    // 0x80098F20: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    alLoadParam(rdram, ctx);
        goto after_13;
    // 0x80098F20: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_13:
    // 0x80098F24: addiu       $s1, $s2, 0x58
    ctx->r17 = ADD32(ctx->r18, 0X58);
    // 0x80098F28: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80098F2C: jal         0x800960C4
    // 0x80098F30: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    alResampleNew(rdram, ctx);
        goto after_14;
    // 0x80098F30: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    after_14:
    // 0x80098F34: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80098F38: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80098F3C: jal         0x80097E9C
    // 0x80098F40: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    alResampleParam(rdram, ctx);
        goto after_15;
    // 0x80098F40: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_15:
    // 0x80098F44: addiu       $s0, $s2, 0x8C
    ctx->r16 = ADD32(ctx->r18, 0X8C);
    // 0x80098F48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80098F4C: jal         0x80095F5C
    // 0x80098F50: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    alEnvmixerNew(rdram, ctx);
        goto after_16;
    // 0x80098F50: addu        $a1, $s6, $zero
    ctx->r5 = ADD32(ctx->r22, 0);
    after_16:
    // 0x80098F54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80098F58: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80098F5C: jal         0x80097370
    // 0x80098F60: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    alEnvmixerParam(rdram, ctx);
        goto after_17;
    // 0x80098F60: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_17:
    // 0x80098F64: lw          $a0, 0x34($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X34);
    // 0x80098F68: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80098F6C: jal         0x80096E3C
    // 0x80098F70: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    alAuxBusParam(rdram, ctx);
        goto after_18;
    // 0x80098F70: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_18:
    // 0x80098F74: sw          $s0, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r16;
    // 0x80098F78: lw          $v0, 0x4($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X4);
    // 0x80098F7C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80098F80: slt         $v0, $s3, $v0
    ctx->r2 = SIGNED(ctx->r19) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80098F84: bne         $v0, $zero, L_80098EF0
    if (ctx->r2 != 0) {
        // 0x80098F88: addiu       $s2, $s2, 0xDC
        ctx->r18 = ADD32(ctx->r18, 0XDC);
            goto L_80098EF0;
    }
    // 0x80098F88: addiu       $s2, $s2, 0xDC
    ctx->r18 = ADD32(ctx->r18, 0XDC);
L_80098F8C:
    // 0x80098F8C: lw          $a2, 0x30($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X30);
    // 0x80098F90: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    // 0x80098F94: jal         0x80098BA8
    // 0x80098F98: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    alSaveParam(rdram, ctx);
        goto after_19;
    // 0x80098F98: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_19:
    // 0x80098F9C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80098FA0: addiu       $v0, $zero, 0x1C
    ctx->r2 = ADD32(0, 0X1C);
    // 0x80098FA4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80098FA8: lw          $a3, 0x8($s5)
    ctx->r7 = MEM_W(ctx->r21, 0X8);
    // 0x80098FAC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80098FB0: jal         0x80098CC0
    // 0x80098FB4: addu        $a2, $s6, $zero
    ctx->r6 = ADD32(ctx->r22, 0);
    alHeapDBAlloc(rdram, ctx);
        goto after_20;
    // 0x80098FB4: addu        $a2, $s6, $zero
    ctx->r6 = ADD32(ctx->r22, 0);
    after_20:
    // 0x80098FB8: sw          $zero, 0x2C($s4)
    MEM_W(0X2C, ctx->r20) = 0;
    // 0x80098FBC: lw          $v1, 0x8($s5)
    ctx->r3 = MEM_W(ctx->r21, 0X8);
    // 0x80098FC0: blez        $v1, L_80098FEC
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80098FC4: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_80098FEC;
    }
    // 0x80098FC4: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x80098FC8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_80098FCC:
    // 0x80098FCC: lw          $v0, 0x2C($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X2C);
    // 0x80098FD0: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80098FD4: sw          $v1, 0x2C($s4)
    MEM_W(0X2C, ctx->r20) = ctx->r3;
    // 0x80098FD8: lw          $v0, 0x8($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X8);
    // 0x80098FDC: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80098FE0: slt         $v0, $s3, $v0
    ctx->r2 = SIGNED(ctx->r19) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80098FE4: bne         $v0, $zero, L_80098FCC
    if (ctx->r2 != 0) {
        // 0x80098FE8: addiu       $v1, $v1, 0x1C
        ctx->r3 = ADD32(ctx->r3, 0X1C);
            goto L_80098FCC;
    }
    // 0x80098FE8: addiu       $v1, $v1, 0x1C
    ctx->r3 = ADD32(ctx->r3, 0X1C);
L_80098FEC:
    // 0x80098FEC: sw          $s6, 0x28($s4)
    MEM_W(0X28, ctx->r20) = ctx->r22;
    // 0x80098FF0: lw          $ra, 0x48($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X48);
    // 0x80098FF4: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x80098FF8: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x80098FFC: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x80099000: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x80099004: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80099008: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8009900C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80099010: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80099014: jr          $ra
    // 0x80099018: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x80099018: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_8004B9DC_26DDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004B9DC: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8004B9E0: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x8004B9E4: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
    // 0x8004B9E8: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x8004B9EC: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x8004B9F0: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x8004B9F4: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x8004B9F8: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x8004B9FC: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x8004BA00: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8004BA04: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8004BA08: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8004BA0C: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    // 0x8004BA10: lw          $s7, 0x8($a0)
    ctx->r23 = MEM_W(ctx->r4, 0X8);
    // 0x8004BA14: lui         $s4, 0x801A
    ctx->r20 = S32(0X801A << 16);
    // 0x8004BA18: lw          $s4, -0x5858($s4)
    ctx->r20 = MEM_W(ctx->r20, -0X5858);
    // 0x8004BA1C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8004BA20: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8004BA24: addiu       $fp, $zero, 0x80
    ctx->r30 = ADD32(0, 0X80);
    // 0x8004BA28: addiu       $a3, $zero, 0xC
    ctx->r7 = ADD32(0, 0XC);
    // 0x8004BA2C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8004BA30: jal         0x8003055C
    // 0x8004BA34: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_8003055C_B95C(rdram, ctx);
        goto after_0;
    // 0x8004BA34: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_0:
    // 0x8004BA38: addiu       $v1, $s4, 0x28
    ctx->r3 = ADD32(ctx->r20, 0X28);
    // 0x8004BA3C: sll         $v0, $v1, 8
    ctx->r2 = S32(ctx->r3 << 8);
    // 0x8004BA40: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8004BA44: sw          $v0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r2;
    // 0x8004BA48: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x8004BA4C: addu        $s4, $v1, $zero
    ctx->r20 = ADD32(ctx->r3, 0);
    // 0x8004BA50: addiu       $s3, $s7, 0xA
    ctx->r19 = ADD32(ctx->r23, 0XA);
    // 0x8004BA54: addiu       $s2, $s4, 0xE
    ctx->r18 = ADD32(ctx->r20, 0XE);
L_8004BA58:
    // 0x8004BA58: lui         $v1, 0x2AAA
    ctx->r3 = S32(0X2AAA << 16);
    // 0x8004BA5C: ori         $v1, $v1, 0xAAAB
    ctx->r3 = ctx->r3 | 0XAAAB;
    // 0x8004BA60: lhu         $s1, 0x0($s7)
    ctx->r17 = MEM_HU(ctx->r23, 0X0);
    // 0x8004BA64: lh          $s0, -0x8($s3)
    ctx->r16 = MEM_H(ctx->r19, -0X8);
    // 0x8004BA68: addiu       $v0, $s4, 0x28
    ctx->r2 = ADD32(ctx->r20, 0X28);
    // 0x8004BA6C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8004BA70: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x8004BA74: sw          $v0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r2;
    // 0x8004BA78: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    // 0x8004BA7C: mult        $a0, $v1
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004BA80: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x8004BA84: sb          $v0, -0x7($s2)
    MEM_B(-0X7, ctx->r18) = ctx->r2;
    // 0x8004BA88: sb          $fp, -0x8($s2)
    MEM_B(-0X8, ctx->r18) = ctx->r30;
    // 0x8004BA8C: sb          $fp, -0x9($s2)
    MEM_B(-0X9, ctx->r18) = ctx->r30;
    // 0x8004BA90: sb          $fp, -0xA($s2)
    MEM_B(-0XA, ctx->r18) = ctx->r30;
    // 0x8004BA94: lhu         $v1, -0x6($s3)
    ctx->r3 = MEM_HU(ctx->r19, -0X6);
    // 0x8004BA98: sra         $a1, $a0, 31
    ctx->r5 = S32(SIGNED(ctx->r4) >> 31);
    // 0x8004BA9C: addiu       $v1, $v1, 0x22
    ctx->r3 = ADD32(ctx->r3, 0X22);
    // 0x8004BAA0: mfhi        $t0
    ctx->r8 = hi;
    // 0x8004BAA4: subu        $a1, $t0, $a1
    ctx->r5 = SUB32(ctx->r8, ctx->r5);
    // 0x8004BAA8: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x8004BAAC: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8004BAB0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8004BAB4: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x8004BAB8: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x8004BABC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8004BAC0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8004BAC4: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8004BAC8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8004BACC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8004BAD0: sh          $v0, -0x6($s2)
    MEM_H(-0X6, ctx->r18) = ctx->r2;
    // 0x8004BAD4: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x8004BAD8: lhu         $v1, -0x4($s3)
    ctx->r3 = MEM_HU(ctx->r19, -0X4);
    // 0x8004BADC: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8004BAE0: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8004BAE4: addiu       $v1, $v1, 0x3C
    ctx->r3 = ADD32(ctx->r3, 0X3C);
    // 0x8004BAE8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8004BAEC: sh          $v0, -0x4($s2)
    MEM_H(-0X4, ctx->r18) = ctx->r2;
    // 0x8004BAF0: lhu         $v0, 0x2($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X2);
    // 0x8004BAF4: sll         $s1, $s1, 16
    ctx->r17 = S32(ctx->r17 << 16);
    // 0x8004BAF8: sh          $v0, 0x2($s2)
    MEM_H(0X2, ctx->r18) = ctx->r2;
    // 0x8004BAFC: lhu         $v0, 0x4($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X4);
    // 0x8004BB00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8004BB04: jal         0x8006033C
    // 0x8004BB08: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x8004BB08: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
    after_1:
    // 0x8004BB0C: addiu       $a0, $s0, 0x1
    ctx->r4 = ADD32(ctx->r16, 0X1);
    // 0x8004BB10: jal         0x8006033C
    // 0x8004BB14: addu        $s5, $v0, $zero
    ctx->r21 = ADD32(ctx->r2, 0);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x8004BB14: addu        $s5, $v0, $zero
    ctx->r21 = ADD32(ctx->r2, 0);
    after_2:
    // 0x8004BB18: addiu       $a0, $s0, 0x2
    ctx->r4 = ADD32(ctx->r16, 0X2);
    // 0x8004BB1C: jal         0x8006033C
    // 0x8004BB20: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_8006033C_3B73C(rdram, ctx);
        goto after_3;
    // 0x8004BB20: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_3:
    // 0x8004BB24: addu        $s0, $s5, $s0
    ctx->r16 = ADD32(ctx->r21, ctx->r16);
    // 0x8004BB28: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x8004BB2C: sra         $s1, $s1, 24
    ctx->r17 = S32(SIGNED(ctx->r17) >> 24);
    // 0x8004BB30: sltiu       $v0, $s1, 0xE
    ctx->r2 = ctx->r17 < 0XE ? 1 : 0;
    // 0x8004BB34: beq         $v0, $zero, L_8004BD54
    if (ctx->r2 == 0) {
        // 0x8004BB38: sll         $v0, $s1, 2
        ctx->r2 = S32(ctx->r17 << 2);
            goto L_8004BD54;
    }
    // 0x8004BB38: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
    // 0x8004BB3C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004BB40: addu        $at, $at, $v0
    gpr jr_addend_8004BB48 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8004BB44: lw          $v0, 0x2358($at)
    ctx->r2 = ADD32(ctx->r1, 0X2358);
    // 0x8004BB48: jr          $v0
    // 0x8004BB4C: nop

    switch (jr_addend_8004BB48 >> 2) {
        case 0: goto L_8004BB50; break;
        case 1: goto L_8004BB68; break;
        case 2: goto L_8004BB7C; break;
        case 3: goto L_8004BB8C; break;
        case 4: goto L_8004BBA8; break;
        case 5: goto L_8004BBF4; break;
        case 6: goto L_8004BC50; break;
        case 7: goto L_8004BBF4; break;
        case 8: goto L_8004BC50; break;
        case 9: goto L_8004BCB0; break;
        case 10: goto L_8004BCB0; break;
        case 11: goto L_8004BCB0; break;
        case 12: goto L_8004BCB0; break;
        case 13: goto L_8004BB50; break;
        default: switch_error(__func__, 0x8004BB48, 0x800D2358);
    }
    // 0x8004BB4C: nop

L_8004BB50:
    // 0x8004BB50: bne         $s5, $zero, L_8004BD34
    if (ctx->r21 != 0) {
        // 0x8004BB54: nop
    
            goto L_8004BD34;
    }
    // 0x8004BB54: nop

    // 0x8004BB58: bnel        $s1, $zero, L_8004BD58
    if (ctx->r17 != 0) {
        // 0x8004BB5C: addiu       $s7, $s7, 0x10
        ctx->r23 = ADD32(ctx->r23, 0X10);
            goto L_8004BD58;
    }
    goto skip_0;
    // 0x8004BB5C: addiu       $s7, $s7, 0x10
    ctx->r23 = ADD32(ctx->r23, 0X10);
    skip_0:
    // 0x8004BB60: j           L_8004BBD8
    // 0x8004BB64: addiu       $t0, $zero, 0x40
    ctx->r8 = ADD32(0, 0X40);
        goto L_8004BBD8;
    // 0x8004BB64: addiu       $t0, $zero, 0x40
    ctx->r8 = ADD32(0, 0X40);
L_8004BB68:
    // 0x8004BB68: beq         $s0, $zero, L_8004BBD8
    if (ctx->r16 == 0) {
        // 0x8004BB6C: addiu       $t0, $zero, 0x40
        ctx->r8 = ADD32(0, 0X40);
            goto L_8004BBD8;
    }
    // 0x8004BB6C: addiu       $t0, $zero, 0x40
    ctx->r8 = ADD32(0, 0X40);
    // 0x8004BB70: lbu         $v0, -0x2($s3)
    ctx->r2 = MEM_BU(ctx->r19, -0X2);
    // 0x8004BB74: j           L_8004BBC0
    // 0x8004BB78: sb          $v0, -0x2($s2)
    MEM_B(-0X2, ctx->r18) = ctx->r2;
        goto L_8004BBC0;
    // 0x8004BB78: sb          $v0, -0x2($s2)
    MEM_B(-0X2, ctx->r18) = ctx->r2;
L_8004BB7C:
    // 0x8004BB7C: beql        $s0, $zero, L_8004BD58
    if (ctx->r16 == 0) {
        // 0x8004BB80: addiu       $s7, $s7, 0x10
        ctx->r23 = ADD32(ctx->r23, 0X10);
            goto L_8004BD58;
    }
    goto skip_1;
    // 0x8004BB80: addiu       $s7, $s7, 0x10
    ctx->r23 = ADD32(ctx->r23, 0X10);
    skip_1:
    // 0x8004BB84: j           L_8004BD34
    // 0x8004BB88: nop

        goto L_8004BD34;
    // 0x8004BB88: nop

L_8004BB8C:
    // 0x8004BB8C: beq         $s0, $zero, L_8004BD54
    if (ctx->r16 == 0) {
        // 0x8004BB90: addiu       $v0, $s0, -0x1
        ctx->r2 = ADD32(ctx->r16, -0X1);
            goto L_8004BD54;
    }
    // 0x8004BB90: addiu       $v0, $s0, -0x1
    ctx->r2 = ADD32(ctx->r16, -0X1);
    // 0x8004BB94: lbu         $v1, -0x2($s3)
    ctx->r3 = MEM_BU(ctx->r19, -0X2);
    // 0x8004BB98: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8004BB9C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8004BBA0: j           L_8004BD3C
    // 0x8004BBA4: sb          $v1, -0x2($s2)
    MEM_B(-0X2, ctx->r18) = ctx->r3;
        goto L_8004BD3C;
    // 0x8004BBA4: sb          $v1, -0x2($s2)
    MEM_B(-0X2, ctx->r18) = ctx->r3;
L_8004BBA8:
    // 0x8004BBA8: beq         $s0, $zero, L_8004BBD4
    if (ctx->r16 == 0) {
        // 0x8004BBAC: addiu       $v0, $s0, -0x1
        ctx->r2 = ADD32(ctx->r16, -0X1);
            goto L_8004BBD4;
    }
    // 0x8004BBAC: addiu       $v0, $s0, -0x1
    ctx->r2 = ADD32(ctx->r16, -0X1);
    // 0x8004BBB0: lbu         $v1, -0x2($s3)
    ctx->r3 = MEM_BU(ctx->r19, -0X2);
    // 0x8004BBB4: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x8004BBB8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8004BBBC: sb          $v1, -0x2($s2)
    MEM_B(-0X2, ctx->r18) = ctx->r3;
L_8004BBC0:
    // 0x8004BBC0: lbu         $v0, -0x1($s3)
    ctx->r2 = MEM_BU(ctx->r19, -0X1);
    // 0x8004BBC4: sb          $v0, -0x1($s2)
    MEM_B(-0X1, ctx->r18) = ctx->r2;
    // 0x8004BBC8: lhu         $v0, 0x0($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X0);
    // 0x8004BBCC: j           L_8004BBE8
    // 0x8004BBD0: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
        goto L_8004BBE8;
    // 0x8004BBD0: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
L_8004BBD4:
    // 0x8004BBD4: addiu       $t0, $zero, 0x40
    ctx->r8 = ADD32(0, 0X40);
L_8004BBD8:
    // 0x8004BBD8: sb          $t0, -0x1($s2)
    MEM_B(-0X1, ctx->r18) = ctx->r8;
    // 0x8004BBDC: addiu       $t0, $zero, 0x3C48
    ctx->r8 = ADD32(0, 0X3C48);
    // 0x8004BBE0: sb          $fp, -0x2($s2)
    MEM_B(-0X2, ctx->r18) = ctx->r30;
    // 0x8004BBE4: sh          $t0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r8;
L_8004BBE8:
    // 0x8004BBE8: addiu       $s2, $s2, 0x28
    ctx->r18 = ADD32(ctx->r18, 0X28);
    // 0x8004BBEC: j           L_8004BD54
    // 0x8004BBF0: addiu       $s4, $s4, 0x28
    ctx->r20 = ADD32(ctx->r20, 0X28);
        goto L_8004BD54;
    // 0x8004BBF0: addiu       $s4, $s4, 0x28
    ctx->r20 = ADD32(ctx->r20, 0X28);
L_8004BBF4:
    // 0x8004BBF4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8004BBF8: bne         $s1, $v0, L_8004BC0C
    if (ctx->r17 != ctx->r2) {
        // 0x8004BBFC: sltu        $v1, $zero, $s5
        ctx->r3 = 0 < ctx->r21 ? 1 : 0;
            goto L_8004BC0C;
    }
    // 0x8004BBFC: sltu        $v1, $zero, $s5
    ctx->r3 = 0 < ctx->r21 ? 1 : 0;
    // 0x8004BC00: lui         $s6, 0x801C
    ctx->r22 = S32(0X801C << 16);
    // 0x8004BC04: j           L_8004BC14
    // 0x8004BC08: lbu         $s6, -0x3B9C($s6)
    ctx->r22 = MEM_BU(ctx->r22, -0X3B9C);
        goto L_8004BC14;
    // 0x8004BC08: lbu         $s6, -0x3B9C($s6)
    ctx->r22 = MEM_BU(ctx->r22, -0X3B9C);
L_8004BC0C:
    // 0x8004BC0C: lui         $s6, 0x801C
    ctx->r22 = S32(0X801C << 16);
    // 0x8004BC10: lbu         $s6, -0x3B9B($s6)
    ctx->r22 = MEM_BU(ctx->r22, -0X3B9B);
L_8004BC14:
    // 0x8004BC14: sltiu       $v0, $s6, 0xA
    ctx->r2 = ctx->r22 < 0XA ? 1 : 0;
    // 0x8004BC18: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x8004BC1C: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8004BC20: beql        $v1, $zero, L_8004BD58
    if (ctx->r3 == 0) {
        // 0x8004BC24: addiu       $s7, $s7, 0x10
        ctx->r23 = ADD32(ctx->r23, 0X10);
            goto L_8004BD58;
    }
    goto skip_2;
    // 0x8004BC24: addiu       $s7, $s7, 0x10
    ctx->r23 = ADD32(ctx->r23, 0X10);
    skip_2:
    // 0x8004BC28: lui         $v0, 0xCCCC
    ctx->r2 = S32(0XCCCC << 16);
    // 0x8004BC2C: ori         $v0, $v0, 0xCCCD
    ctx->r2 = ctx->r2 | 0XCCCD;
    // 0x8004BC30: multu       $s6, $v0
    result = U64(U32(ctx->r22)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004BC34: lbu         $v1, -0x2($s3)
    ctx->r3 = MEM_BU(ctx->r19, -0X2);
    // 0x8004BC38: mfhi        $t0
    ctx->r8 = hi;
    // 0x8004BC3C: srl         $v0, $t0, 3
    ctx->r2 = S32(U32(ctx->r8) >> 3);
    // 0x8004BC40: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8004BC44: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8004BC48: j           L_8004BD3C
    // 0x8004BC4C: sb          $v1, -0x2($s2)
    MEM_B(-0X2, ctx->r18) = ctx->r3;
        goto L_8004BD3C;
    // 0x8004BC4C: sb          $v1, -0x2($s2)
    MEM_B(-0X2, ctx->r18) = ctx->r3;
L_8004BC50:
    // 0x8004BC50: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8004BC54: bne         $s1, $v0, L_8004BC68
    if (ctx->r17 != ctx->r2) {
        // 0x8004BC58: nop
    
            goto L_8004BC68;
    }
    // 0x8004BC58: nop

    // 0x8004BC5C: lui         $s6, 0x801C
    ctx->r22 = S32(0X801C << 16);
    // 0x8004BC60: j           L_8004BC70
    // 0x8004BC64: lbu         $s6, -0x3B9C($s6)
    ctx->r22 = MEM_BU(ctx->r22, -0X3B9C);
        goto L_8004BC70;
    // 0x8004BC64: lbu         $s6, -0x3B9C($s6)
    ctx->r22 = MEM_BU(ctx->r22, -0X3B9C);
L_8004BC68:
    // 0x8004BC68: lui         $s6, 0x801C
    ctx->r22 = S32(0X801C << 16);
    // 0x8004BC6C: lbu         $s6, -0x3B9B($s6)
    ctx->r22 = MEM_BU(ctx->r22, -0X3B9B);
L_8004BC70:
    // 0x8004BC70: beql        $s5, $zero, L_8004BD58
    if (ctx->r21 == 0) {
        // 0x8004BC74: addiu       $s7, $s7, 0x10
        ctx->r23 = ADD32(ctx->r23, 0X10);
            goto L_8004BD58;
    }
    goto skip_3;
    // 0x8004BC74: addiu       $s7, $s7, 0x10
    ctx->r23 = ADD32(ctx->r23, 0X10);
    skip_3:
    // 0x8004BC78: lui         $v0, 0xCCCC
    ctx->r2 = S32(0XCCCC << 16);
    // 0x8004BC7C: ori         $v0, $v0, 0xCCCD
    ctx->r2 = ctx->r2 | 0XCCCD;
    // 0x8004BC80: multu       $s6, $v0
    result = U64(U32(ctx->r22)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004BC84: mfhi        $t0
    ctx->r8 = hi;
    // 0x8004BC88: srl         $v1, $t0, 3
    ctx->r3 = S32(U32(ctx->r8) >> 3);
    // 0x8004BC8C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8004BC90: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8004BC94: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8004BC98: lbu         $v1, -0x2($s3)
    ctx->r3 = MEM_BU(ctx->r19, -0X2);
    // 0x8004BC9C: subu        $v0, $s6, $v0
    ctx->r2 = SUB32(ctx->r22, ctx->r2);
    // 0x8004BCA0: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8004BCA4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8004BCA8: j           L_8004BD3C
    // 0x8004BCAC: sb          $v1, -0x2($s2)
    MEM_B(-0X2, ctx->r18) = ctx->r3;
        goto L_8004BD3C;
    // 0x8004BCAC: sb          $v1, -0x2($s2)
    MEM_B(-0X2, ctx->r18) = ctx->r3;
L_8004BCB0:
    // 0x8004BCB0: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8004BCB4: beq         $s1, $v0, L_8004BCE8
    if (ctx->r17 == ctx->r2) {
        // 0x8004BCB8: sltiu       $v0, $s1, 0x9
        ctx->r2 = ctx->r17 < 0X9 ? 1 : 0;
            goto L_8004BCE8;
    }
    // 0x8004BCB8: sltiu       $v0, $s1, 0x9
    ctx->r2 = ctx->r17 < 0X9 ? 1 : 0;
    // 0x8004BCBC: bne         $v0, $zero, L_8004BD24
    if (ctx->r2 != 0) {
        // 0x8004BCC0: sltu        $v0, $zero, $s5
        ctx->r2 = 0 < ctx->r21 ? 1 : 0;
            goto L_8004BD24;
    }
    // 0x8004BCC0: sltu        $v0, $zero, $s5
    ctx->r2 = 0 < ctx->r21 ? 1 : 0;
    // 0x8004BCC4: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8004BCC8: beq         $s1, $v0, L_8004BCF8
    if (ctx->r17 == ctx->r2) {
        // 0x8004BCCC: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_8004BCF8;
    }
    // 0x8004BCCC: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8004BCD0: beq         $s1, $v0, L_8004BD08
    if (ctx->r17 == ctx->r2) {
        // 0x8004BCD4: addiu       $v0, $zero, 0xC
        ctx->r2 = ADD32(0, 0XC);
            goto L_8004BD08;
    }
    // 0x8004BCD4: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8004BCD8: beq         $s1, $v0, L_8004BD18
    if (ctx->r17 == ctx->r2) {
        // 0x8004BCDC: sltu        $v0, $zero, $s5
        ctx->r2 = 0 < ctx->r21 ? 1 : 0;
            goto L_8004BD18;
    }
    // 0x8004BCDC: sltu        $v0, $zero, $s5
    ctx->r2 = 0 < ctx->r21 ? 1 : 0;
    // 0x8004BCE0: j           L_8004BD24
    // 0x8004BCE4: nop

        goto L_8004BD24;
    // 0x8004BCE4: nop

L_8004BCE8:
    // 0x8004BCE8: lui         $s6, 0x8020
    ctx->r22 = S32(0X8020 << 16);
    // 0x8004BCEC: lb          $s6, 0x4B1A($s6)
    ctx->r22 = MEM_B(ctx->r22, 0X4B1A);
    // 0x8004BCF0: j           L_8004BD24
    // 0x8004BCF4: sltu        $v0, $zero, $s5
    ctx->r2 = 0 < ctx->r21 ? 1 : 0;
        goto L_8004BD24;
    // 0x8004BCF4: sltu        $v0, $zero, $s5
    ctx->r2 = 0 < ctx->r21 ? 1 : 0;
L_8004BCF8:
    // 0x8004BCF8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8004BCFC: lbu         $v0, 0x4B1B($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4B1B);
    // 0x8004BD00: j           L_8004BD20
    // 0x8004BD04: andi        $s6, $v0, 0x2
    ctx->r22 = ctx->r2 & 0X2;
        goto L_8004BD20;
    // 0x8004BD04: andi        $s6, $v0, 0x2
    ctx->r22 = ctx->r2 & 0X2;
L_8004BD08:
    // 0x8004BD08: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8004BD0C: lbu         $v0, 0x4B1B($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4B1B);
    // 0x8004BD10: j           L_8004BD20
    // 0x8004BD14: andi        $s6, $v0, 0x1
    ctx->r22 = ctx->r2 & 0X1;
        goto L_8004BD20;
    // 0x8004BD14: andi        $s6, $v0, 0x1
    ctx->r22 = ctx->r2 & 0X1;
L_8004BD18:
    // 0x8004BD18: lui         $s6, 0x8020
    ctx->r22 = S32(0X8020 << 16);
    // 0x8004BD1C: lb          $s6, 0x4B1C($s6)
    ctx->r22 = MEM_B(ctx->r22, 0X4B1C);
L_8004BD20:
    // 0x8004BD20: sltu        $v0, $zero, $s5
    ctx->r2 = 0 < ctx->r21 ? 1 : 0;
L_8004BD24:
    // 0x8004BD24: sltu        $v1, $zero, $s6
    ctx->r3 = 0 < ctx->r22 ? 1 : 0;
    // 0x8004BD28: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8004BD2C: beql        $v0, $zero, L_8004BD58
    if (ctx->r2 == 0) {
        // 0x8004BD30: addiu       $s7, $s7, 0x10
        ctx->r23 = ADD32(ctx->r23, 0X10);
            goto L_8004BD58;
    }
    goto skip_4;
    // 0x8004BD30: addiu       $s7, $s7, 0x10
    ctx->r23 = ADD32(ctx->r23, 0X10);
    skip_4:
L_8004BD34:
    // 0x8004BD34: lbu         $v0, -0x2($s3)
    ctx->r2 = MEM_BU(ctx->r19, -0X2);
    // 0x8004BD38: sb          $v0, -0x2($s2)
    MEM_B(-0X2, ctx->r18) = ctx->r2;
L_8004BD3C:
    // 0x8004BD3C: lbu         $v0, -0x1($s3)
    ctx->r2 = MEM_BU(ctx->r19, -0X1);
    // 0x8004BD40: sb          $v0, -0x1($s2)
    MEM_B(-0X1, ctx->r18) = ctx->r2;
    // 0x8004BD44: lhu         $v0, 0x0($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X0);
    // 0x8004BD48: addiu       $s4, $s4, 0x28
    ctx->r20 = ADD32(ctx->r20, 0X28);
    // 0x8004BD4C: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
    // 0x8004BD50: addiu       $s2, $s2, 0x28
    ctx->r18 = ADD32(ctx->r18, 0X28);
L_8004BD54:
    // 0x8004BD54: addiu       $s7, $s7, 0x10
    ctx->r23 = ADD32(ctx->r23, 0X10);
L_8004BD58:
    // 0x8004BD58: lh          $v0, 0x0($s7)
    ctx->r2 = MEM_H(ctx->r23, 0X0);
    // 0x8004BD5C: bgez        $v0, L_8004BA58
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8004BD60: addiu       $s3, $s3, 0x10
        ctx->r19 = ADD32(ctx->r19, 0X10);
            goto L_8004BA58;
    }
    // 0x8004BD60: addiu       $s3, $s3, 0x10
    ctx->r19 = ADD32(ctx->r19, 0X10);
    // 0x8004BD64: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8004BD68: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8004BD6C: lb          $a0, 0x5($t0)
    ctx->r4 = MEM_B(ctx->r8, 0X5);
    // 0x8004BD70: addiu       $a2, $s4, -0x28
    ctx->r6 = ADD32(ctx->r20, -0X28);
    // 0x8004BD74: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8004BD78: lw          $v0, 0x497C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X497C);
    // 0x8004BD7C: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x8004BD80: addiu       $a0, $a0, 0x70
    ctx->r4 = ADD32(ctx->r4, 0X70);
    // 0x8004BD84: jal         0x8002FD5C
    // 0x8004BD88: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_8002FD5C_B15C(rdram, ctx);
        goto after_4;
    // 0x8004BD88: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_4:
    // 0x8004BD8C: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8004BD90: sw          $s4, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r20;
    // 0x8004BD94: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x8004BD98: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x8004BD9C: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x8004BDA0: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x8004BDA4: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x8004BDA8: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x8004BDAC: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x8004BDB0: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x8004BDB4: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8004BDB8: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8004BDBC: jr          $ra
    // 0x8004BDC0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x8004BDC0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x8004BDC4: nop

    // 0x8004BDC8: nop

    // 0x8004BDCC: nop

;}
RECOMP_FUNC void func_8003D8AC_18CAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003D8AC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8003D8B0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8003D8B4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8003D8B8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8003D8BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8003D8C0: lb          $v1, 0x1($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X1);
    // 0x8003D8C4: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x8003D8C8: beq         $v0, $zero, L_8003DEA8
    if (ctx->r2 == 0) {
        // 0x8003D8CC: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8003DEA8;
    }
    // 0x8003D8CC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8003D8D0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8003D8D4: addu        $at, $at, $v0
    gpr jr_addend_8003D8DC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8003D8D8: lw          $v0, 0x1E68($at)
    ctx->r2 = ADD32(ctx->r1, 0X1E68);
    // 0x8003D8DC: jr          $v0
    // 0x8003D8E0: nop

    switch (jr_addend_8003D8DC >> 2) {
        case 0: goto L_8003D8E4; break;
        case 1: goto L_8003DA0C; break;
        case 2: goto L_8003DB30; break;
        case 3: goto L_8003DBB8; break;
        case 4: goto L_8003DC90; break;
        case 5: goto L_8003DDA4; break;
        case 6: goto L_8003DEA0; break;
        default: switch_error(__func__, 0x8003D8DC, 0x800D1E68);
    }
    // 0x8003D8E0: nop

L_8003D8E4:
    // 0x8003D8E4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8003D8E8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003D8EC: jal         0x80076A3C
    // 0x8003D8F0: sb          $v0, -0xC5C($at)
    MEM_B(-0XC5C, ctx->r1) = ctx->r2;
    func_80076A3C_51E3C(rdram, ctx);
        goto after_0;
    // 0x8003D8F0: sb          $v0, -0xC5C($at)
    MEM_B(-0XC5C, ctx->r1) = ctx->r2;
    after_0:
    // 0x8003D8F4: jal         0x8004C3C0
    // 0x8003D8F8: nop

    func_8004C3C0_277C0(rdram, ctx);
        goto after_1;
    // 0x8003D8F8: nop

    after_1:
    // 0x8003D8FC: jal         0x8006EF7C
    // 0x8003D900: nop

    func_8006EF7C_4A37C(rdram, ctx);
        goto after_2;
    // 0x8003D900: nop

    after_2:
    // 0x8003D904: jal         0x80053CBC
    // 0x8003D908: nop

    func_80053CBC_2F0BC(rdram, ctx);
        goto after_3;
    // 0x8003D908: nop

    after_3:
    // 0x8003D90C: jal         0x8004C05C
    // 0x8003D910: nop

    func_8004C05C_2745C(rdram, ctx);
        goto after_4;
    // 0x8003D910: nop

    after_4:
    // 0x8003D914: jal         0x8004BFB0
    // 0x8003D918: nop

    func_8004BFB0_273B0(rdram, ctx);
        goto after_5;
    // 0x8003D918: nop

    after_5:
    // 0x8003D91C: jal         0x8004C1AC
    // 0x8003D920: nop

    func_8004C1AC_275AC(rdram, ctx);
        goto after_6;
    // 0x8003D920: nop

    after_6:
    // 0x8003D924: jal         0x8004C270
    // 0x8003D928: nop

    func_8004C270_27670(rdram, ctx);
        goto after_7;
    // 0x8003D928: nop

    after_7:
    // 0x8003D92C: jal         0x8004C45C
    // 0x8003D930: nop

    func_8004C45C_2785C(rdram, ctx);
        goto after_8;
    // 0x8003D930: nop

    after_8:
    // 0x8003D934: jal         0x800472F0
    // 0x8003D938: nop

    func_800472F0_226F0(rdram, ctx);
        goto after_9;
    // 0x8003D938: nop

    after_9:
    // 0x8003D93C: jal         0x80069D44
    // 0x8003D940: nop

    func_80069D44_45144(rdram, ctx);
        goto after_10;
    // 0x8003D940: nop

    after_10:
    // 0x8003D944: jal         0x8004C108
    // 0x8003D948: nop

    func_8004C108_27508(rdram, ctx);
        goto after_11;
    // 0x8003D948: nop

    after_11:
    // 0x8003D94C: jal         0x8004C314
    // 0x8003D950: nop

    func_8004C314_27714(rdram, ctx);
        goto after_12;
    // 0x8003D950: nop

    after_12:
    // 0x8003D954: jal         0x80033950
    // 0x8003D958: nop

    func_80033950_ED50(rdram, ctx);
        goto after_13;
    // 0x8003D958: nop

    after_13:
    // 0x8003D95C: jal         0x800521A8
    // 0x8003D960: nop

    func_800521A8_2D5A8(rdram, ctx);
        goto after_14;
    // 0x8003D960: nop

    after_14:
    // 0x8003D964: jal         0x800719B4
    // 0x8003D968: nop

    func_800719B4_4CDB4(rdram, ctx);
        goto after_15;
    // 0x8003D968: nop

    after_15:
    // 0x8003D96C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003D970: lb          $v1, -0x3C18($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3C18);
    // 0x8003D974: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8003D978: bne         $v1, $v0, L_8003D9B8
    if (ctx->r3 != ctx->r2) {
        // 0x8003D97C: lui         $v0, 0xFFFF
        ctx->r2 = S32(0XFFFF << 16);
            goto L_8003D9B8;
    }
    // 0x8003D97C: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x8003D980: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003D984: lw          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3BC8);
    // 0x8003D988: and         $a0, $v1, $v0
    ctx->r4 = ctx->r3 & ctx->r2;
    // 0x8003D98C: lui         $v1, 0x302
    ctx->r3 = S32(0X302 << 16);
    // 0x8003D990: xor         $v1, $a0, $v1
    ctx->r3 = ctx->r4 ^ ctx->r3;
    // 0x8003D994: sltu        $v1, $zero, $v1
    ctx->r3 = 0 < ctx->r3 ? 1 : 0;
    // 0x8003D998: lui         $v0, 0x130B
    ctx->r2 = S32(0X130B << 16);
    // 0x8003D99C: xor         $v0, $a0, $v0
    ctx->r2 = ctx->r4 ^ ctx->r2;
    // 0x8003D9A0: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x8003D9A4: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8003D9A8: beq         $v1, $zero, L_8003D9C0
    if (ctx->r3 == 0) {
        // 0x8003D9AC: lui         $v0, 0x1B06
        ctx->r2 = S32(0X1B06 << 16);
            goto L_8003D9C0;
    }
    // 0x8003D9AC: lui         $v0, 0x1B06
    ctx->r2 = S32(0X1B06 << 16);
    // 0x8003D9B0: beq         $a0, $v0, L_8003D9C0
    if (ctx->r4 == ctx->r2) {
        // 0x8003D9B4: nop
    
            goto L_8003D9C0;
    }
    // 0x8003D9B4: nop

L_8003D9B8:
    // 0x8003D9B8: jal         0x80048C7C
    // 0x8003D9BC: nop

    func_80048C7C_2407C(rdram, ctx);
        goto after_16;
    // 0x8003D9BC: nop

    after_16:
L_8003D9C0:
    // 0x8003D9C0: jal         0x8004A6B4
    // 0x8003D9C4: nop

    func_8004A6B4_25AB4(rdram, ctx);
        goto after_17;
    // 0x8003D9C4: nop

    after_17:
    // 0x8003D9C8: jal         0x8003912C
    // 0x8003D9CC: nop

    func_8003912C_1452C(rdram, ctx);
        goto after_18;
    // 0x8003D9CC: nop

    after_18:
    // 0x8003D9D0: jal         0x80037F78
    // 0x8003D9D4: nop

    func_80037F78_13378(rdram, ctx);
        goto after_19;
    // 0x8003D9D4: nop

    after_19:
    // 0x8003D9D8: jal         0x8003A248
    // 0x8003D9DC: nop

    func_8003A248_15648(rdram, ctx);
        goto after_20;
    // 0x8003D9DC: nop

    after_20:
    // 0x8003D9E0: jal         0x8003A7CC
    // 0x8003D9E4: nop

    func_8003A7CC_15BCC(rdram, ctx);
        goto after_21;
    // 0x8003D9E4: nop

    after_21:
    // 0x8003D9E8: jal         0x80036E48
    // 0x8003D9EC: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    func_80036E48_12248(rdram, ctx);
        goto after_22;
    // 0x8003D9EC: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_22:
    // 0x8003D9F0: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x8003D9F4: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x8003D9F8: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x8003D9FC: sb          $zero, 0x3($s1)
    MEM_B(0X3, ctx->r17) = 0;
    // 0x8003DA00: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8003DA04: j           L_8003DEA8
    // 0x8003DA08: sb          $v1, 0x1($s1)
    MEM_B(0X1, ctx->r17) = ctx->r3;
        goto L_8003DEA8;
    // 0x8003DA08: sb          $v1, 0x1($s1)
    MEM_B(0X1, ctx->r17) = ctx->r3;
L_8003DA0C:
    // 0x8003DA0C: jal         0x80076A3C
    // 0x8003DA10: nop

    func_80076A3C_51E3C(rdram, ctx);
        goto after_23;
    // 0x8003DA10: nop

    after_23:
    // 0x8003DA14: jal         0x8004C3C0
    // 0x8003DA18: nop

    func_8004C3C0_277C0(rdram, ctx);
        goto after_24;
    // 0x8003DA18: nop

    after_24:
    // 0x8003DA1C: jal         0x8006EF7C
    // 0x8003DA20: nop

    func_8006EF7C_4A37C(rdram, ctx);
        goto after_25;
    // 0x8003DA20: nop

    after_25:
    // 0x8003DA24: jal         0x80053CBC
    // 0x8003DA28: nop

    func_80053CBC_2F0BC(rdram, ctx);
        goto after_26;
    // 0x8003DA28: nop

    after_26:
    // 0x8003DA2C: jal         0x8004C05C
    // 0x8003DA30: nop

    func_8004C05C_2745C(rdram, ctx);
        goto after_27;
    // 0x8003DA30: nop

    after_27:
    // 0x8003DA34: jal         0x8004BFB0
    // 0x8003DA38: nop

    func_8004BFB0_273B0(rdram, ctx);
        goto after_28;
    // 0x8003DA38: nop

    after_28:
    // 0x8003DA3C: jal         0x8004C1AC
    // 0x8003DA40: nop

    func_8004C1AC_275AC(rdram, ctx);
        goto after_29;
    // 0x8003DA40: nop

    after_29:
    // 0x8003DA44: jal         0x8004C270
    // 0x8003DA48: nop

    func_8004C270_27670(rdram, ctx);
        goto after_30;
    // 0x8003DA48: nop

    after_30:
    // 0x8003DA4C: jal         0x8004C45C
    // 0x8003DA50: nop

    func_8004C45C_2785C(rdram, ctx);
        goto after_31;
    // 0x8003DA50: nop

    after_31:
    // 0x8003DA54: jal         0x800472F0
    // 0x8003DA58: nop

    func_800472F0_226F0(rdram, ctx);
        goto after_32;
    // 0x8003DA58: nop

    after_32:
    // 0x8003DA5C: jal         0x80069D44
    // 0x8003DA60: nop

    func_80069D44_45144(rdram, ctx);
        goto after_33;
    // 0x8003DA60: nop

    after_33:
    // 0x8003DA64: jal         0x8004C108
    // 0x8003DA68: nop

    func_8004C108_27508(rdram, ctx);
        goto after_34;
    // 0x8003DA68: nop

    after_34:
    // 0x8003DA6C: jal         0x8004C314
    // 0x8003DA70: nop

    func_8004C314_27714(rdram, ctx);
        goto after_35;
    // 0x8003DA70: nop

    after_35:
    // 0x8003DA74: jal         0x80033950
    // 0x8003DA78: nop

    func_80033950_ED50(rdram, ctx);
        goto after_36;
    // 0x8003DA78: nop

    after_36:
    // 0x8003DA7C: jal         0x800521A8
    // 0x8003DA80: nop

    func_800521A8_2D5A8(rdram, ctx);
        goto after_37;
    // 0x8003DA80: nop

    after_37:
    // 0x8003DA84: jal         0x800719B4
    // 0x8003DA88: nop

    func_800719B4_4CDB4(rdram, ctx);
        goto after_38;
    // 0x8003DA88: nop

    after_38:
    // 0x8003DA8C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003DA90: lb          $v1, -0x3C18($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3C18);
    // 0x8003DA94: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8003DA98: bne         $v1, $v0, L_8003DAD8
    if (ctx->r3 != ctx->r2) {
        // 0x8003DA9C: lui         $v0, 0xFFFF
        ctx->r2 = S32(0XFFFF << 16);
            goto L_8003DAD8;
    }
    // 0x8003DA9C: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x8003DAA0: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8003DAA4: lw          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3BC8);
    // 0x8003DAA8: and         $a0, $v1, $v0
    ctx->r4 = ctx->r3 & ctx->r2;
    // 0x8003DAAC: lui         $v1, 0x302
    ctx->r3 = S32(0X302 << 16);
    // 0x8003DAB0: xor         $v1, $a0, $v1
    ctx->r3 = ctx->r4 ^ ctx->r3;
    // 0x8003DAB4: sltu        $v1, $zero, $v1
    ctx->r3 = 0 < ctx->r3 ? 1 : 0;
    // 0x8003DAB8: lui         $v0, 0x130B
    ctx->r2 = S32(0X130B << 16);
    // 0x8003DABC: xor         $v0, $a0, $v0
    ctx->r2 = ctx->r4 ^ ctx->r2;
    // 0x8003DAC0: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x8003DAC4: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8003DAC8: beq         $v1, $zero, L_8003DAE0
    if (ctx->r3 == 0) {
        // 0x8003DACC: lui         $v0, 0x1B06
        ctx->r2 = S32(0X1B06 << 16);
            goto L_8003DAE0;
    }
    // 0x8003DACC: lui         $v0, 0x1B06
    ctx->r2 = S32(0X1B06 << 16);
    // 0x8003DAD0: beq         $a0, $v0, L_8003DAE0
    if (ctx->r4 == ctx->r2) {
        // 0x8003DAD4: nop
    
            goto L_8003DAE0;
    }
    // 0x8003DAD4: nop

L_8003DAD8:
    // 0x8003DAD8: jal         0x80048C7C
    // 0x8003DADC: nop

    func_80048C7C_2407C(rdram, ctx);
        goto after_39;
    // 0x8003DADC: nop

    after_39:
L_8003DAE0:
    // 0x8003DAE0: jal         0x8004A6B4
    // 0x8003DAE4: nop

    func_8004A6B4_25AB4(rdram, ctx);
        goto after_40;
    // 0x8003DAE4: nop

    after_40:
    // 0x8003DAE8: jal         0x8003912C
    // 0x8003DAEC: nop

    func_8003912C_1452C(rdram, ctx);
        goto after_41;
    // 0x8003DAEC: nop

    after_41:
    // 0x8003DAF0: jal         0x80037F78
    // 0x8003DAF4: nop

    func_80037F78_13378(rdram, ctx);
        goto after_42;
    // 0x8003DAF4: nop

    after_42:
    // 0x8003DAF8: jal         0x8003A248
    // 0x8003DAFC: nop

    func_8003A248_15648(rdram, ctx);
        goto after_43;
    // 0x8003DAFC: nop

    after_43:
    // 0x8003DB00: jal         0x8003A7CC
    // 0x8003DB04: nop

    func_8003A7CC_15BCC(rdram, ctx);
        goto after_44;
    // 0x8003DB04: nop

    after_44:
    // 0x8003DB08: jal         0x8003D774
    // 0x8003DB0C: nop

    func_8003D774_18B74(rdram, ctx);
        goto after_45;
    // 0x8003DB0C: nop

    after_45:
    // 0x8003DB10: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x8003DB14: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x8003DB18: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x8003DB1C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8003DB20: bltzl       $v0, L_8003DE70
    if (SIGNED(ctx->r2) < 0) {
        // 0x8003DB24: sh          $zero, 0x8($s1)
        MEM_H(0X8, ctx->r17) = 0;
            goto L_8003DE70;
    }
    goto skip_0;
    // 0x8003DB24: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    skip_0:
    // 0x8003DB28: j           L_8003DE70
    // 0x8003DB2C: nop

        goto L_8003DE70;
    // 0x8003DB2C: nop

L_8003DB30:
    // 0x8003DB30: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8003DB34: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003DB38: sb          $v0, -0xC5C($at)
    MEM_B(-0XC5C, ctx->r1) = ctx->r2;
    // 0x8003DB3C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003DB40: jal         0x80061724
    // 0x8003DB44: sh          $zero, -0xC68($at)
    MEM_H(-0XC68, ctx->r1) = 0;
    func_80061724_3CB24(rdram, ctx);
        goto after_46;
    // 0x8003DB44: sh          $zero, -0xC68($at)
    MEM_H(-0XC68, ctx->r1) = 0;
    after_46:
    // 0x8003DB48: jal         0x80061090
    // 0x8003DB4C: nop

    func_80061090_3C490(rdram, ctx);
        goto after_47;
    // 0x8003DB4C: nop

    after_47:
    // 0x8003DB50: jal         0x8004B5B0
    // 0x8003DB54: nop

    func_8004B5B0_269B0(rdram, ctx);
        goto after_48;
    // 0x8003DB54: nop

    after_48:
    // 0x8003DB58: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8003DB5C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8003DB60: jal         0x80036B00
    // 0x8003DB64: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_49;
    // 0x8003DB64: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_49:
    // 0x8003DB68: jal         0x8002A4A4
    // 0x8003DB6C: nop

    func_8002A4A4_58A4(rdram, ctx);
        goto after_50;
    // 0x8003DB6C: nop

    after_50:
    // 0x8003DB70: jal         0x8002A488
    // 0x8003DB74: nop

    func_8002A488_5888(rdram, ctx);
        goto after_51;
    // 0x8003DB74: nop

    after_51:
    // 0x8003DB78: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    // 0x8003DB7C: jal         0x80036340
    // 0x8003DB80: addiu       $a1, $zero, -0x2
    ctx->r5 = ADD32(0, -0X2);
    func_80036340_11740(rdram, ctx);
        goto after_52;
    // 0x8003DB80: addiu       $a1, $zero, -0x2
    ctx->r5 = ADD32(0, -0X2);
    after_52:
    // 0x8003DB84: addiu       $a0, $zero, 0x41
    ctx->r4 = ADD32(0, 0X41);
    // 0x8003DB88: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8003DB8C: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x8003DB90: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8003DB94: addiu       $v0, $zero, 0x96
    ctx->r2 = ADD32(0, 0X96);
    // 0x8003DB98: sh          $v0, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r2;
    // 0x8003DB9C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8003DBA0: jal         0x8002A2F8
    // 0x8003DBA4: sb          $v1, 0x1($s1)
    MEM_B(0X1, ctx->r17) = ctx->r3;
    func_8002A2F8_56F8(rdram, ctx);
        goto after_53;
    // 0x8003DBA4: sb          $v1, 0x1($s1)
    MEM_B(0X1, ctx->r17) = ctx->r3;
    after_53:
    // 0x8003DBA8: jal         0x80036E48
    // 0x8003DBAC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80036E48_12248(rdram, ctx);
        goto after_54;
    // 0x8003DBAC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_54:
    // 0x8003DBB0: j           L_8003DEA8
    // 0x8003DBB4: nop

        goto L_8003DEA8;
    // 0x8003DBB4: nop

L_8003DBB8:
    // 0x8003DBB8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8003DBBC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8003DBC0: lui         $s0, 0x801A
    ctx->r16 = S32(0X801A << 16);
    // 0x8003DBC4: lw          $s0, -0x5858($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X5858);
    // 0x8003DBC8: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    // 0x8003DBCC: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    // 0x8003DBD0: addiu       $v0, $s0, 0x28
    ctx->r2 = ADD32(ctx->r16, 0X28);
    // 0x8003DBD4: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8003DBD8: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x8003DBDC: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8003DBE0: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x8003DBE4: addiu       $v0, $zero, 0x2C
    ctx->r2 = ADD32(0, 0X2C);
    // 0x8003DBE8: sb          $v0, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r2;
    // 0x8003DBEC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8003DBF0: jal         0x80030284
    // 0x8003DBF4: sh          $v0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r2;
    func_80030284_B684(rdram, ctx);
        goto after_55;
    // 0x8003DBF4: sh          $v0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r2;
    after_55:
    // 0x8003DBF8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8003DBFC: addiu       $a1, $zero, 0x1F0
    ctx->r5 = ADD32(0, 0X1F0);
    // 0x8003DC00: jal         0x8003026C
    // 0x8003DC04: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    func_8003026C_B66C(rdram, ctx);
        goto after_56;
    // 0x8003DC04: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    after_56:
    // 0x8003DC08: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x8003DC0C: addiu       $v1, $zero, 0x80
    ctx->r3 = ADD32(0, 0X80);
    // 0x8003DC10: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x8003DC14: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x8003DC18: sb          $a0, 0x14($s0)
    MEM_B(0X14, ctx->r16) = ctx->r4;
    // 0x8003DC1C: sb          $zero, 0x15($s0)
    MEM_B(0X15, ctx->r16) = 0;
    // 0x8003DC20: sb          $zero, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = 0;
    // 0x8003DC24: sb          $v1, 0x1D($s0)
    MEM_B(0X1D, ctx->r16) = ctx->r3;
    // 0x8003DC28: sb          $a0, 0x24($s0)
    MEM_B(0X24, ctx->r16) = ctx->r4;
    // 0x8003DC2C: sb          $v1, 0x25($s0)
    MEM_B(0X25, ctx->r16) = ctx->r3;
    // 0x8003DC30: sb          $v1, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r3;
    // 0x8003DC34: sb          $v1, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r3;
    // 0x8003DC38: sb          $v1, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r3;
    // 0x8003DC3C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8003DC40: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x8003DC44: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8003DC48: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x8003DC4C: sh          $v0, 0xE($a1)
    MEM_H(0XE, ctx->r5) = ctx->r2;
    // 0x8003DC50: addiu       $v0, $zero, 0x38
    ctx->r2 = ADD32(0, 0X38);
    // 0x8003DC54: addiu       $v1, $zero, 0x11F
    ctx->r3 = ADD32(0, 0X11F);
    // 0x8003DC58: sh          $v0, 0xA($a1)
    MEM_H(0XA, ctx->r5) = ctx->r2;
    // 0x8003DC5C: sh          $v0, 0x12($a1)
    MEM_H(0X12, ctx->r5) = ctx->r2;
    // 0x8003DC60: addiu       $v0, $zero, 0xB8
    ctx->r2 = ADD32(0, 0XB8);
    // 0x8003DC64: sh          $a2, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r6;
    // 0x8003DC68: sh          $v1, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r3;
    // 0x8003DC6C: sh          $a2, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r6;
    // 0x8003DC70: sh          $v0, 0x1A($a1)
    MEM_H(0X1A, ctx->r5) = ctx->r2;
    // 0x8003DC74: sh          $v1, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r3;
    // 0x8003DC78: sh          $v0, 0x22($a1)
    MEM_H(0X22, ctx->r5) = ctx->r2;
    // 0x8003DC7C: jal         0x800302C8
    // 0x8003DC80: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    func_800302C8_B6C8(rdram, ctx);
        goto after_57;
    // 0x8003DC80: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    after_57:
    // 0x8003DC84: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8003DC88: j           L_8003DE88
    // 0x8003DC8C: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
        goto L_8003DE88;
    // 0x8003DC8C: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
L_8003DC90:
    // 0x8003DC90: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8003DC94: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8003DC98: lui         $s0, 0x801A
    ctx->r16 = S32(0X801A << 16);
    // 0x8003DC9C: lw          $s0, -0x5858($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X5858);
    // 0x8003DCA0: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    // 0x8003DCA4: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    // 0x8003DCA8: addiu       $v0, $s0, 0x28
    ctx->r2 = ADD32(ctx->r16, 0X28);
    // 0x8003DCAC: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8003DCB0: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x8003DCB4: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8003DCB8: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x8003DCBC: addiu       $v0, $zero, 0x2C
    ctx->r2 = ADD32(0, 0X2C);
    // 0x8003DCC0: sb          $v0, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r2;
    // 0x8003DCC4: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8003DCC8: jal         0x80030284
    // 0x8003DCCC: sh          $v0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r2;
    func_80030284_B684(rdram, ctx);
        goto after_58;
    // 0x8003DCCC: sh          $v0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r2;
    after_58:
    // 0x8003DCD0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8003DCD4: addiu       $a1, $zero, 0x1F0
    ctx->r5 = ADD32(0, 0X1F0);
    // 0x8003DCD8: jal         0x8003026C
    // 0x8003DCDC: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    func_8003026C_B66C(rdram, ctx);
        goto after_59;
    // 0x8003DCDC: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    after_59:
    // 0x8003DCE0: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x8003DCE4: addiu       $v1, $zero, 0x80
    ctx->r3 = ADD32(0, 0X80);
    // 0x8003DCE8: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x8003DCEC: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x8003DCF0: sb          $a0, 0x14($s0)
    MEM_B(0X14, ctx->r16) = ctx->r4;
    // 0x8003DCF4: sb          $zero, 0x15($s0)
    MEM_B(0X15, ctx->r16) = 0;
    // 0x8003DCF8: sb          $zero, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = 0;
    // 0x8003DCFC: sb          $v1, 0x1D($s0)
    MEM_B(0X1D, ctx->r16) = ctx->r3;
    // 0x8003DD00: sb          $a0, 0x24($s0)
    MEM_B(0X24, ctx->r16) = ctx->r4;
    // 0x8003DD04: sb          $v1, 0x25($s0)
    MEM_B(0X25, ctx->r16) = ctx->r3;
    // 0x8003DD08: sb          $v1, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r3;
    // 0x8003DD0C: sb          $v1, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r3;
    // 0x8003DD10: sb          $v1, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r3;
    // 0x8003DD14: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8003DD18: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x8003DD1C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8003DD20: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x8003DD24: sh          $v0, 0xE($a1)
    MEM_H(0XE, ctx->r5) = ctx->r2;
    // 0x8003DD28: addiu       $v0, $zero, 0x38
    ctx->r2 = ADD32(0, 0X38);
    // 0x8003DD2C: addiu       $v1, $zero, 0x11F
    ctx->r3 = ADD32(0, 0X11F);
    // 0x8003DD30: sh          $v0, 0xA($a1)
    MEM_H(0XA, ctx->r5) = ctx->r2;
    // 0x8003DD34: sh          $v0, 0x12($a1)
    MEM_H(0X12, ctx->r5) = ctx->r2;
    // 0x8003DD38: addiu       $v0, $zero, 0xB8
    ctx->r2 = ADD32(0, 0XB8);
    // 0x8003DD3C: sh          $a2, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r6;
    // 0x8003DD40: sh          $v1, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r3;
    // 0x8003DD44: sh          $a2, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r6;
    // 0x8003DD48: sh          $v0, 0x1A($a1)
    MEM_H(0X1A, ctx->r5) = ctx->r2;
    // 0x8003DD4C: sh          $v1, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r3;
    // 0x8003DD50: sh          $v0, 0x22($a1)
    MEM_H(0X22, ctx->r5) = ctx->r2;
    // 0x8003DD54: jal         0x800302C8
    // 0x8003DD58: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    func_800302C8_B6C8(rdram, ctx);
        goto after_60;
    // 0x8003DD58: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    after_60:
    // 0x8003DD5C: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8003DD60: lhu         $v0, -0x783A($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X783A);
    // 0x8003DD64: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8003DD68: bne         $v0, $zero, L_8003DD80
    if (ctx->r2 != 0) {
        // 0x8003DD6C: nop
    
            goto L_8003DD80;
    }
    // 0x8003DD6C: nop

    // 0x8003DD70: jal         0x8002A398
    // 0x8003DD74: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8002A398_5798(rdram, ctx);
        goto after_61;
    // 0x8003DD74: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_61:
    // 0x8003DD78: bne         $v0, $zero, L_8003DEA8
    if (ctx->r2 != 0) {
        // 0x8003DD7C: nop
    
            goto L_8003DEA8;
    }
    // 0x8003DD7C: nop

L_8003DD80:
    // 0x8003DD80: lbu         $v0, 0x1($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X1);
    // 0x8003DD84: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x8003DD88: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8003DD8C: jal         0x80036B58
    // 0x8003DD90: sb          $v0, 0x1($s1)
    MEM_B(0X1, ctx->r17) = ctx->r2;
    func_80036B58_11F58(rdram, ctx);
        goto after_62;
    // 0x8003DD90: sb          $v0, 0x1($s1)
    MEM_B(0X1, ctx->r17) = ctx->r2;
    after_62:
    // 0x8003DD94: jal         0x80036E48
    // 0x8003DD98: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80036E48_12248(rdram, ctx);
        goto after_63;
    // 0x8003DD98: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_63:
    // 0x8003DD9C: j           L_8003DEA8
    // 0x8003DDA0: nop

        goto L_8003DEA8;
    // 0x8003DDA0: nop

L_8003DDA4:
    // 0x8003DDA4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8003DDA8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8003DDAC: lui         $s0, 0x801A
    ctx->r16 = S32(0X801A << 16);
    // 0x8003DDB0: lw          $s0, -0x5858($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X5858);
    // 0x8003DDB4: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    // 0x8003DDB8: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    // 0x8003DDBC: addiu       $v0, $s0, 0x28
    ctx->r2 = ADD32(ctx->r16, 0X28);
    // 0x8003DDC0: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8003DDC4: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x8003DDC8: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8003DDCC: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x8003DDD0: addiu       $v0, $zero, 0x2C
    ctx->r2 = ADD32(0, 0X2C);
    // 0x8003DDD4: sb          $v0, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r2;
    // 0x8003DDD8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8003DDDC: jal         0x80030284
    // 0x8003DDE0: sh          $v0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r2;
    func_80030284_B684(rdram, ctx);
        goto after_64;
    // 0x8003DDE0: sh          $v0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r2;
    after_64:
    // 0x8003DDE4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8003DDE8: addiu       $a1, $zero, 0x1F0
    ctx->r5 = ADD32(0, 0X1F0);
    // 0x8003DDEC: jal         0x8003026C
    // 0x8003DDF0: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    func_8003026C_B66C(rdram, ctx);
        goto after_65;
    // 0x8003DDF0: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    after_65:
    // 0x8003DDF4: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x8003DDF8: addiu       $v1, $zero, 0x80
    ctx->r3 = ADD32(0, 0X80);
    // 0x8003DDFC: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x8003DE00: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x8003DE04: sb          $a0, 0x14($s0)
    MEM_B(0X14, ctx->r16) = ctx->r4;
    // 0x8003DE08: sb          $zero, 0x15($s0)
    MEM_B(0X15, ctx->r16) = 0;
    // 0x8003DE0C: sb          $zero, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = 0;
    // 0x8003DE10: sb          $v1, 0x1D($s0)
    MEM_B(0X1D, ctx->r16) = ctx->r3;
    // 0x8003DE14: sb          $a0, 0x24($s0)
    MEM_B(0X24, ctx->r16) = ctx->r4;
    // 0x8003DE18: sb          $v1, 0x25($s0)
    MEM_B(0X25, ctx->r16) = ctx->r3;
    // 0x8003DE1C: sb          $v1, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r3;
    // 0x8003DE20: sb          $v1, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r3;
    // 0x8003DE24: sb          $v1, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r3;
    // 0x8003DE28: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8003DE2C: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x8003DE30: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8003DE34: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x8003DE38: sh          $v0, 0xE($a1)
    MEM_H(0XE, ctx->r5) = ctx->r2;
    // 0x8003DE3C: addiu       $v0, $zero, 0x38
    ctx->r2 = ADD32(0, 0X38);
    // 0x8003DE40: addiu       $v1, $zero, 0x11F
    ctx->r3 = ADD32(0, 0X11F);
    // 0x8003DE44: sh          $v0, 0xA($a1)
    MEM_H(0XA, ctx->r5) = ctx->r2;
    // 0x8003DE48: sh          $v0, 0x12($a1)
    MEM_H(0X12, ctx->r5) = ctx->r2;
    // 0x8003DE4C: addiu       $v0, $zero, 0xB8
    ctx->r2 = ADD32(0, 0XB8);
    // 0x8003DE50: sh          $a2, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r6;
    // 0x8003DE54: sh          $v1, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r3;
    // 0x8003DE58: sh          $a2, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r6;
    // 0x8003DE5C: sh          $v0, 0x1A($a1)
    MEM_H(0X1A, ctx->r5) = ctx->r2;
    // 0x8003DE60: sh          $v1, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r3;
    // 0x8003DE64: sh          $v0, 0x22($a1)
    MEM_H(0X22, ctx->r5) = ctx->r2;
    // 0x8003DE68: jal         0x800302C8
    // 0x8003DE6C: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    func_800302C8_B6C8(rdram, ctx);
        goto after_66;
    // 0x8003DE6C: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    after_66:
L_8003DE70:
    // 0x8003DE70: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8003DE74: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8003DE78: bne         $v0, $zero, L_8003DEA8
    if (ctx->r2 != 0) {
        // 0x8003DE7C: nop
    
            goto L_8003DEA8;
    }
    // 0x8003DE7C: nop

    // 0x8003DE80: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8003DE84: lbu         $v0, -0x7388($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7388);
L_8003DE88:
    // 0x8003DE88: bne         $v0, $zero, L_8003DEA8
    if (ctx->r2 != 0) {
        // 0x8003DE8C: nop
    
            goto L_8003DEA8;
    }
    // 0x8003DE8C: nop

    // 0x8003DE90: lbu         $v0, 0x1($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X1);
    // 0x8003DE94: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8003DE98: j           L_8003DEA8
    // 0x8003DE9C: sb          $v0, 0x1($s1)
    MEM_B(0X1, ctx->r17) = ctx->r2;
        goto L_8003DEA8;
    // 0x8003DE9C: sb          $v0, 0x1($s1)
    MEM_B(0X1, ctx->r17) = ctx->r2;
L_8003DEA0:
    // 0x8003DEA0: jal         0x8003DEBC
    // 0x8003DEA4: sb          $zero, 0x3($s1)
    MEM_B(0X3, ctx->r17) = 0;
    func_8003DEBC_192BC(rdram, ctx);
        goto after_67;
    // 0x8003DEA4: sb          $zero, 0x3($s1)
    MEM_B(0X3, ctx->r17) = 0;
    after_67:
L_8003DEA8:
    // 0x8003DEA8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8003DEAC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8003DEB0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8003DEB4: jr          $ra
    // 0x8003DEB8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8003DEB8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8007B7D0_56BD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007B7D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007B7D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8007B7D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8007B7DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007B7E0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8007B7E4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8007B7E8: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x8007B7EC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8007B7F0: lw          $v0, -0x2CD4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X2CD4);
    // 0x8007B7F4: jalr        $v0
    // 0x8007B7F8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8007B7F8: nop

    after_0:
    // 0x8007B7FC: jal         0x800472C0
    // 0x8007B800: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800472C0_226C0(rdram, ctx);
        goto after_1;
    // 0x8007B800: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8007B804: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007B808: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8007B80C: jr          $ra
    // 0x8007B810: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8007B810: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8004BDD0_271D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004BDD0: lui         $v0, 0x3F
    ctx->r2 = S32(0X3F << 16);
    // 0x8004BDD4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8004BDD8: sw          $v0, 0x5658($at)
    MEM_W(0X5658, ctx->r1) = ctx->r2;
    // 0x8004BDDC: lui         $v0, 0x1800
    ctx->r2 = S32(0X1800 << 16);
    // 0x8004BDE0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8004BDE4: sw          $v0, 0x565C($at)
    MEM_W(0X565C, ctx->r1) = ctx->r2;
    // 0x8004BDE8: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x8004BDEC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8004BDF0: sw          $v0, 0x5660($at)
    MEM_W(0X5660, ctx->r1) = ctx->r2;
    // 0x8004BDF4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8004BDF8: jr          $ra
    // 0x8004BDFC: sw          $zero, 0x5664($at)
    MEM_W(0X5664, ctx->r1) = 0;
    TRACE_RETURN()
    return;
    // 0x8004BDFC: sw          $zero, 0x5664($at)
    MEM_W(0X5664, ctx->r1) = 0;
;}
RECOMP_FUNC void func_8004FD60_2B160(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004FD60: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8004FD64: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8004FD68: lhu         $s2, 0x3A($sp)
    ctx->r18 = MEM_HU(ctx->r29, 0X3A);
    // 0x8004FD6C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8004FD70: lhu         $s1, 0x3E($sp)
    ctx->r17 = MEM_HU(ctx->r29, 0X3E);
    // 0x8004FD74: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8004FD78: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x8004FD7C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8004FD80: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x8004FD84: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8004FD88: lh          $v0, 0x4($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X4);
    // 0x8004FD8C: lh          $a1, 0x4($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X4);
    // 0x8004FD90: lh          $v1, 0x0($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X0);
    // 0x8004FD94: lh          $a0, 0x0($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X0);
    // 0x8004FD98: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x8004FD9C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8004FDA0: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x8004FDA4: blez        $v0, L_8004FDE8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8004FDA8: sll         $v1, $v1, 16
        ctx->r3 = S32(ctx->r3 << 16);
            goto L_8004FDE8;
    }
    // 0x8004FDA8: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8004FDAC: div         $zero, $v1, $v0
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r2)));
    // 0x8004FDB0: bne         $v0, $zero, L_8004FDBC
    if (ctx->r2 != 0) {
        // 0x8004FDB4: nop
    
            goto L_8004FDBC;
    }
    // 0x8004FDB4: nop

    // 0x8004FDB8: break       7
    do_break(2147810744);
L_8004FDBC:
    // 0x8004FDBC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8004FDC0: bne         $v0, $at, L_8004FDD4
    if (ctx->r2 != ctx->r1) {
        // 0x8004FDC4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8004FDD4;
    }
    // 0x8004FDC4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8004FDC8: bne         $v1, $at, L_8004FDD4
    if (ctx->r3 != ctx->r1) {
        // 0x8004FDCC: nop
    
            goto L_8004FDD4;
    }
    // 0x8004FDCC: nop

    // 0x8004FDD0: break       6
    do_break(2147810768);
L_8004FDD4:
    // 0x8004FDD4: mflo        $a0
    ctx->r4 = lo;
    // 0x8004FDD8: jal         0x80032554
    // 0x8004FDDC: nop

    func_80032554_D954(rdram, ctx);
        goto after_0;
    // 0x8004FDDC: nop

    after_0:
    // 0x8004FDE0: j           L_8004FE44
    // 0x8004FDE4: addiu       $a0, $v0, 0x800
    ctx->r4 = ADD32(ctx->r2, 0X800);
        goto L_8004FE44;
    // 0x8004FDE4: addiu       $a0, $v0, 0x800
    ctx->r4 = ADD32(ctx->r2, 0X800);
L_8004FDE8:
    // 0x8004FDE8: bgezl       $v0, L_8004FE38
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8004FDEC: nor         $v0, $zero, $v1
        ctx->r2 = ~(0 | ctx->r3);
            goto L_8004FE38;
    }
    goto skip_0;
    // 0x8004FDEC: nor         $v0, $zero, $v1
    ctx->r2 = ~(0 | ctx->r3);
    skip_0:
    // 0x8004FDF0: negu        $a0, $v1
    ctx->r4 = SUB32(0, ctx->r3);
    // 0x8004FDF4: div         $zero, $a0, $v0
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r2)));
    // 0x8004FDF8: bne         $v0, $zero, L_8004FE04
    if (ctx->r2 != 0) {
        // 0x8004FDFC: nop
    
            goto L_8004FE04;
    }
    // 0x8004FDFC: nop

    // 0x8004FE00: break       7
    do_break(2147810816);
L_8004FE04:
    // 0x8004FE04: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8004FE08: bne         $v0, $at, L_8004FE1C
    if (ctx->r2 != ctx->r1) {
        // 0x8004FE0C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8004FE1C;
    }
    // 0x8004FE0C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8004FE10: bne         $a0, $at, L_8004FE1C
    if (ctx->r4 != ctx->r1) {
        // 0x8004FE14: nop
    
            goto L_8004FE1C;
    }
    // 0x8004FE14: nop

    // 0x8004FE18: break       6
    do_break(2147810840);
L_8004FE1C:
    // 0x8004FE1C: mflo        $a0
    ctx->r4 = lo;
    // 0x8004FE20: jal         0x80032554
    // 0x8004FE24: nop

    func_80032554_D954(rdram, ctx);
        goto after_1;
    // 0x8004FE24: nop

    after_1:
    // 0x8004FE28: addiu       $v1, $zero, 0x1000
    ctx->r3 = ADD32(0, 0X1000);
    // 0x8004FE2C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8004FE30: j           L_8004FE44
    // 0x8004FE34: andi        $a0, $v1, 0xFFF
    ctx->r4 = ctx->r3 & 0XFFF;
        goto L_8004FE44;
    // 0x8004FE34: andi        $a0, $v1, 0xFFF
    ctx->r4 = ctx->r3 & 0XFFF;
L_8004FE38:
    // 0x8004FE38: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x8004FE3C: andi        $v0, $v0, 0xC00
    ctx->r2 = ctx->r2 & 0XC00;
    // 0x8004FE40: ori         $a0, $v0, 0x400
    ctx->r4 = ctx->r2 | 0X400;
L_8004FE44:
    // 0x8004FE44: addiu       $v1, $s2, -0x800
    ctx->r3 = ADD32(ctx->r18, -0X800);
    // 0x8004FE48: subu        $v1, $a0, $v1
    ctx->r3 = SUB32(ctx->r4, ctx->r3);
    // 0x8004FE4C: addu        $v1, $s1, $v1
    ctx->r3 = ADD32(ctx->r17, ctx->r3);
    // 0x8004FE50: andi        $a1, $v1, 0xFFF
    ctx->r5 = ctx->r3 & 0XFFF;
    // 0x8004FE54: subu        $a0, $a0, $s3
    ctx->r4 = SUB32(ctx->r4, ctx->r19);
    // 0x8004FE58: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    // 0x8004FE5C: andi        $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 & 0XFFF;
    // 0x8004FE60: sll         $v1, $s0, 16
    ctx->r3 = S32(ctx->r16 << 16);
    // 0x8004FE64: sra         $v1, $v1, 15
    ctx->r3 = S32(SIGNED(ctx->r3) >> 15);
    // 0x8004FE68: slt         $v1, $v1, $a0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8004FE6C: bne         $v1, $zero, L_8004FE84
    if (ctx->r3 != 0) {
        // 0x8004FE70: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8004FE84;
    }
    // 0x8004FE70: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8004FE74: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x8004FE78: sra         $v0, $v0, 15
    ctx->r2 = S32(SIGNED(ctx->r2) >> 15);
    // 0x8004FE7C: slt         $v0, $v0, $a1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8004FE80: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
L_8004FE84:
    // 0x8004FE84: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8004FE88: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8004FE8C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8004FE90: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8004FE94: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8004FE98: jr          $ra
    // 0x8004FE9C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8004FE9C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800588E4_33CE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800588E4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x800588E8: lb          $v0, -0x3BC6($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC6);
    // 0x800588EC: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800588F0: sb          $zero, -0x4857($at)
    MEM_B(-0X4857, ctx->r1) = 0;
    // 0x800588F4: slti        $v0, $v0, 0x9
    ctx->r2 = SIGNED(ctx->r2) < 0X9 ? 1 : 0;
    // 0x800588F8: beq         $v0, $zero, L_8005890C
    if (ctx->r2 == 0) {
        // 0x800588FC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8005890C;
    }
    // 0x800588FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80058900: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80058904: j           L_80058914
    // 0x80058908: sb          $zero, -0x4858($at)
    MEM_B(-0X4858, ctx->r1) = 0;
        goto L_80058914;
    // 0x80058908: sb          $zero, -0x4858($at)
    MEM_B(-0X4858, ctx->r1) = 0;
L_8005890C:
    // 0x8005890C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80058910: sb          $v0, -0x4858($at)
    MEM_B(-0X4858, ctx->r1) = ctx->r2;
L_80058914:
    // 0x80058914: jr          $ra
    // 0x80058918: nop

    TRACE_RETURN()
    return;
    // 0x80058918: nop

;}
RECOMP_FUNC void func_800336AC_EAAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800336AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800336B0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x800336B4: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x800336B8: addiu       $s0, $s0, 0x4348
    ctx->r16 = ADD32(ctx->r16, 0X4348);
    // 0x800336BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x800336C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800336C4: jal         0x8003BDA4
    // 0x800336C8: addiu       $a1, $s0, 0xE0
    ctx->r5 = ADD32(ctx->r16, 0XE0);
    func_8003BDA4_171A4(rdram, ctx);
        goto after_0;
    // 0x800336C8: addiu       $a1, $s0, 0xE0
    ctx->r5 = ADD32(ctx->r16, 0XE0);
    after_0:
    // 0x800336CC: addiu       $t0, $zero, 0xF
    ctx->r8 = ADD32(0, 0XF);
    // 0x800336D0: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x800336D4: lh          $v1, 0x49C4($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X49C4);
    // 0x800336D8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x800336DC: lh          $a0, 0x49C6($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X49C6);
    // 0x800336E0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x800336E4: lh          $a1, 0x49C8($a1)
    ctx->r5 = MEM_H(ctx->r5, 0X49C8);
    // 0x800336E8: lui         $a3, 0x8016
    ctx->r7 = S32(0X8016 << 16);
    // 0x800336EC: addiu       $a3, $a3, 0x288C
    ctx->r7 = ADD32(ctx->r7, 0X288C);
    // 0x800336F0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800336F4: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x800336F8: sb          $a2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r6;
    // 0x800336FC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80033700: sw          $v0, 0x4384($at)
    MEM_W(0X4384, ctx->r1) = ctx->r2;
    // 0x80033704: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80033708: sw          $v0, 0x436C($at)
    MEM_W(0X436C, ctx->r1) = ctx->r2;
    // 0x8003370C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80033710: sw          $v0, 0x4354($at)
    MEM_W(0X4354, ctx->r1) = ctx->r2;
    // 0x80033714: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80033718: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003371C: sw          $v0, 0x438C($at)
    MEM_W(0X438C, ctx->r1) = ctx->r2;
    // 0x80033720: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80033724: sw          $v0, 0x4374($at)
    MEM_W(0X4374, ctx->r1) = ctx->r2;
    // 0x80033728: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003372C: sw          $v0, 0x435C($at)
    MEM_W(0X435C, ctx->r1) = ctx->r2;
    // 0x80033730: addiu       $v0, $zero, 0x96
    ctx->r2 = ADD32(0, 0X96);
    // 0x80033734: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80033738: sw          $v0, 0x43A4($at)
    MEM_W(0X43A4, ctx->r1) = ctx->r2;
    // 0x8003373C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80033740: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80033744: sb          $zero, 0x4349($at)
    MEM_B(0X4349, ctx->r1) = 0;
    // 0x80033748: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003374C: sb          $zero, 0x434A($at)
    MEM_B(0X434A, ctx->r1) = 0;
    // 0x80033750: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80033754: sb          $zero, 0x434B($at)
    MEM_B(0X434B, ctx->r1) = 0;
    // 0x80033758: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003375C: sw          $zero, 0x434C($at)
    MEM_W(0X434C, ctx->r1) = 0;
    // 0x80033760: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80033764: sw          $zero, 0x4350($at)
    MEM_W(0X4350, ctx->r1) = 0;
    // 0x80033768: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003376C: sw          $zero, 0x4360($at)
    MEM_W(0X4360, ctx->r1) = 0;
    // 0x80033770: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80033774: sw          $zero, 0x4368($at)
    MEM_W(0X4368, ctx->r1) = 0;
    // 0x80033778: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003377C: sw          $zero, 0x4364($at)
    MEM_W(0X4364, ctx->r1) = 0;
    // 0x80033780: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80033784: sw          $zero, 0x4388($at)
    MEM_W(0X4388, ctx->r1) = 0;
    // 0x80033788: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003378C: sw          $zero, 0x4370($at)
    MEM_W(0X4370, ctx->r1) = 0;
    // 0x80033790: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80033794: sw          $zero, 0x4358($at)
    MEM_W(0X4358, ctx->r1) = 0;
    // 0x80033798: sw          $zero, 0xE0($s0)
    MEM_W(0XE0, ctx->r16) = 0;
    // 0x8003379C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800337A0: sw          $v1, 0x43D0($at)
    MEM_W(0X43D0, ctx->r1) = ctx->r3;
    // 0x800337A4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800337A8: sw          $v1, 0x43B0($at)
    MEM_W(0X43B0, ctx->r1) = ctx->r3;
    // 0x800337AC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800337B0: sw          $v1, 0x4390($at)
    MEM_W(0X4390, ctx->r1) = ctx->r3;
    // 0x800337B4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800337B8: sw          $v1, 0x43E0($at)
    MEM_W(0X43E0, ctx->r1) = ctx->r3;
    // 0x800337BC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800337C0: sw          $a0, 0x43D4($at)
    MEM_W(0X43D4, ctx->r1) = ctx->r4;
    // 0x800337C4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800337C8: sw          $a0, 0x43B4($at)
    MEM_W(0X43B4, ctx->r1) = ctx->r4;
    // 0x800337CC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800337D0: sw          $a0, 0x4394($at)
    MEM_W(0X4394, ctx->r1) = ctx->r4;
    // 0x800337D4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800337D8: sw          $a0, 0x43E4($at)
    MEM_W(0X43E4, ctx->r1) = ctx->r4;
    // 0x800337DC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800337E0: sw          $a1, 0x43D8($at)
    MEM_W(0X43D8, ctx->r1) = ctx->r5;
    // 0x800337E4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800337E8: sw          $a1, 0x43B8($at)
    MEM_W(0X43B8, ctx->r1) = ctx->r5;
    // 0x800337EC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800337F0: sw          $a1, 0x4398($at)
    MEM_W(0X4398, ctx->r1) = ctx->r5;
    // 0x800337F4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800337F8: sw          $a1, 0x43E8($at)
    MEM_W(0X43E8, ctx->r1) = ctx->r5;
    // 0x800337FC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80033800: sb          $zero, 0x434D($at)
    MEM_B(0X434D, ctx->r1) = 0;
    // 0x80033804: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80033808: sb          $zero, 0x434E($at)
    MEM_B(0X434E, ctx->r1) = 0;
    // 0x8003380C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80033810: sb          $zero, 0x434F($at)
    MEM_B(0X434F, ctx->r1) = 0;
    // 0x80033814: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80033818: sb          $a2, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r6;
    // 0x8003381C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80033820: sb          $v0, 0x4352($at)
    MEM_B(0X4352, ctx->r1) = ctx->r2;
    // 0x80033824: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80033828: sw          $zero, 0x281C($at)
    MEM_W(0X281C, ctx->r1) = 0;
    // 0x8003382C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80033830: sw          $zero, 0x2820($at)
    MEM_W(0X2820, ctx->r1) = 0;
    // 0x80033834: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80033838: sw          $zero, 0x2824($at)
    MEM_W(0X2824, ctx->r1) = 0;
    // 0x8003383C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80033840: sw          $zero, 0x2828($at)
    MEM_W(0X2828, ctx->r1) = 0;
    // 0x80033844: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80033848: sw          $zero, 0x2838($at)
    MEM_W(0X2838, ctx->r1) = 0;
    // 0x8003384C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80033850: sw          $zero, 0x2834($at)
    MEM_W(0X2834, ctx->r1) = 0;
    // 0x80033854: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80033858: sw          $zero, 0x2830($at)
    MEM_W(0X2830, ctx->r1) = 0;
    // 0x8003385C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80033860: sw          $zero, 0x2848($at)
    MEM_W(0X2848, ctx->r1) = 0;
    // 0x80033864: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80033868: sw          $zero, 0x2844($at)
    MEM_W(0X2844, ctx->r1) = 0;
    // 0x8003386C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80033870: sw          $zero, 0x2840($at)
    MEM_W(0X2840, ctx->r1) = 0;
    // 0x80033874: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80033878: sw          $zero, 0x284C($at)
    MEM_W(0X284C, ctx->r1) = 0;
    // 0x8003387C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80033880: sw          $zero, -0x7260($at)
    MEM_W(-0X7260, ctx->r1) = 0;
L_80033884:
    // 0x80033884: sw          $zero, 0x0($a3)
    MEM_W(0X0, ctx->r7) = 0;
    // 0x80033888: addiu       $t0, $t0, -0x1
    ctx->r8 = ADD32(ctx->r8, -0X1);
    // 0x8003388C: bgez        $t0, L_80033884
    if (SIGNED(ctx->r8) >= 0) {
        // 0x80033890: addiu       $a3, $a3, -0x4
        ctx->r7 = ADD32(ctx->r7, -0X4);
            goto L_80033884;
    }
    // 0x80033890: addiu       $a3, $a3, -0x4
    ctx->r7 = ADD32(ctx->r7, -0X4);
    // 0x80033894: lw          $a1, 0xC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC);
    // 0x80033898: lw          $a2, 0x10($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X10);
    // 0x8003389C: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    // 0x800338A0: addiu       $v1, $zero, 0x200
    ctx->r3 = ADD32(0, 0X200);
    // 0x800338A4: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x800338A8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800338AC: sw          $v0, -0x7258($at)
    MEM_W(-0X7258, ctx->r1) = ctx->r2;
    // 0x800338B0: addiu       $v0, $zero, 0x300
    ctx->r2 = ADD32(0, 0X300);
    // 0x800338B4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800338B8: sw          $v0, -0x7250($at)
    MEM_W(-0X7250, ctx->r1) = ctx->r2;
    // 0x800338BC: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x800338C0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800338C4: sw          $v0, -0x724C($at)
    MEM_W(-0X724C, ctx->r1) = ctx->r2;
    // 0x800338C8: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x800338CC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800338D0: sw          $v0, -0x7248($at)
    MEM_W(-0X7248, ctx->r1) = ctx->r2;
    // 0x800338D4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x800338D8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800338DC: sw          $v0, -0x7244($at)
    MEM_W(-0X7244, ctx->r1) = ctx->r2;
    // 0x800338E0: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x800338E4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800338E8: sw          $v0, -0x7240($at)
    MEM_W(-0X7240, ctx->r1) = ctx->r2;
    // 0x800338EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800338F0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800338F4: sw          $v0, -0x723C($at)
    MEM_W(-0X723C, ctx->r1) = ctx->r2;
    // 0x800338F8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800338FC: sw          $v0, -0x7238($at)
    MEM_W(-0X7238, ctx->r1) = ctx->r2;
    // 0x80033900: addiu       $v0, $zero, 0x4B0
    ctx->r2 = ADD32(0, 0X4B0);
    // 0x80033904: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80033908: sw          $zero, 0x2890($at)
    MEM_W(0X2890, ctx->r1) = 0;
    // 0x8003390C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80033910: sw          $v1, -0x725C($at)
    MEM_W(-0X725C, ctx->r1) = ctx->r3;
    // 0x80033914: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80033918: sw          $v1, -0x7254($at)
    MEM_W(-0X7254, ctx->r1) = ctx->r3;
    // 0x8003391C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80033920: sw          $v0, -0x7234($at)
    MEM_W(-0X7234, ctx->r1) = ctx->r2;
    // 0x80033924: jal         0x80032FC0
    // 0x80033928: addiu       $a0, $s0, 0x48
    ctx->r4 = ADD32(ctx->r16, 0X48);
    func_80032FC0_E3C0(rdram, ctx);
        goto after_1;
    // 0x80033928: addiu       $a0, $s0, 0x48
    ctx->r4 = ADD32(ctx->r16, 0X48);
    after_1:
    // 0x8003392C: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80033930: jal         0x80034A54
    // 0x80033934: addiu       $a0, $a0, -0x7230
    ctx->r4 = ADD32(ctx->r4, -0X7230);
    func_80034A54_FE54(rdram, ctx);
        goto after_2;
    // 0x80033934: addiu       $a0, $a0, -0x7230
    ctx->r4 = ADD32(ctx->r4, -0X7230);
    after_2:
    // 0x80033938: jal         0x8003480C
    // 0x8003393C: nop

    func_8003480C_FC0C(rdram, ctx);
        goto after_3;
    // 0x8003393C: nop

    after_3:
    // 0x80033940: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80033944: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80033948: jr          $ra
    // 0x8003394C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8003394C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8008B094_66494(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008B094: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008B098: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8008B09C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008B0A0: jal         0x8008C7EC
    // 0x8008B0A4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8008C7EC_67BEC(rdram, ctx);
        goto after_0;
    // 0x8008B0A4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8008B0A8: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008B0AC: lw          $v0, 0x4FAC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4FAC);
    // 0x8008B0B0: bne         $v0, $zero, L_8008B0C0
    if (ctx->r2 != 0) {
        // 0x8008B0B4: nop
    
            goto L_8008B0C0;
    }
    // 0x8008B0B4: nop

    // 0x8008B0B8: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008B0BC: sw          $s0, 0x4FAC($at)
    MEM_W(0X4FAC, ctx->r1) = ctx->r16;
L_8008B0C0:
    // 0x8008B0C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008B0C4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8008B0C8: jr          $ra
    // 0x8008B0CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8008B0CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800305E4_B9E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800305E4: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x800305E8: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
    // 0x800305EC: addiu       $v0, $zero, 0x2C
    ctx->r2 = ADD32(0, 0X2C);
    // 0x800305F0: sb          $v0, 0x7($a0)
    MEM_B(0X7, ctx->r4) = ctx->r2;
    // 0x800305F4: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x800305F8: jr          $ra
    // 0x800305FC: sh          $v0, 0x1E($a0)
    MEM_H(0X1E, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x800305FC: sh          $v0, 0x1E($a0)
    MEM_H(0X1E, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_80036340_11740(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80036340: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80036344: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x80036348: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x8003634C: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x80036350: addu        $fp, $s0, $zero
    ctx->r30 = ADD32(ctx->r16, 0);
    // 0x80036354: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x80036358: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x8003635C: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x80036360: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x80036364: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x80036368: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x8003636C: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x80036370: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x80036374: jal         0x80092EB0
    // 0x80036378: sh          $a0, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r4;
    func_80092EB0_6E2B0(rdram, ctx);
        goto after_0;
    // 0x80036378: sh          $a0, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r4;
    after_0:
    // 0x8003637C: jal         0x80087570
    // 0x80036380: sll         $s0, $s0, 16
    ctx->r16 = S32(ctx->r16 << 16);
    Graph_ThreadStop(rdram, ctx);
        goto after_1;
    // 0x80036380: sll         $s0, $s0, 16
    ctx->r16 = S32(ctx->r16 << 16);
    after_1:
    // 0x80036384: sra         $s4, $s0, 16
    ctx->r20 = S32(SIGNED(ctx->r16) >> 16);
    // 0x80036388: slti        $v0, $s4, 0x2
    ctx->r2 = SIGNED(ctx->r20) < 0X2 ? 1 : 0;
    // 0x8003638C: beql        $v0, $zero, L_80036394
    if (ctx->r2 == 0) {
        // 0x80036390: addiu       $s4, $zero, 0x1
        ctx->r20 = ADD32(0, 0X1);
            goto L_80036394;
    }
    goto skip_0;
    // 0x80036390: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    skip_0:
L_80036394:
    // 0x80036394: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    // 0x80036398: bne         $s4, $v0, L_8003646C
    if (ctx->r20 != ctx->r2) {
        // 0x8003639C: nop
    
            goto L_8003646C;
    }
    // 0x8003639C: nop

    // 0x800363A0: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x800363A4: lw          $v0, -0xBD0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XBD0);
    // 0x800363A8: addu        $fp, $zero, $zero
    ctx->r30 = ADD32(0, 0);
    // 0x800363AC: beq         $v0, $zero, L_80036488
    if (ctx->r2 == 0) {
        // 0x800363B0: addiu       $s4, $zero, 0x2
        ctx->r20 = ADD32(0, 0X2);
            goto L_80036488;
    }
    // 0x800363B0: addiu       $s4, $zero, 0x2
    ctx->r20 = ADD32(0, 0X2);
    // 0x800363B4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x800363B8: lui         $t2, 0x8000
    ctx->r10 = S32(0X8000 << 16);
    // 0x800363BC: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x800363C0: lw          $a3, 0x55A0($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X55A0);
    // 0x800363C4: lui         $t1, 0xAAAA
    ctx->r9 = S32(0XAAAA << 16);
    // 0x800363C8: ori         $t1, $t1, 0xAAAB
    ctx->r9 = ctx->r9 | 0XAAAB;
    // 0x800363CC: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x800363D0: lw          $t0, -0x2660($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X2660);
    // 0x800363D4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_800363D8:
    // 0x800363D8: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x800363DC: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x800363E0: lw          $a0, 0x5088($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5088);
    // 0x800363E4: and         $v0, $a0, $t2
    ctx->r2 = ctx->r4 & ctx->r10;
    // 0x800363E8: beq         $v0, $zero, L_80036420
    if (ctx->r2 == 0) {
        // 0x800363EC: sltu        $v0, $a0, $a3
        ctx->r2 = ctx->r4 < ctx->r7 ? 1 : 0;
            goto L_80036420;
    }
    // 0x800363EC: sltu        $v0, $a0, $a3
    ctx->r2 = ctx->r4 < ctx->r7 ? 1 : 0;
    // 0x800363F0: bnel        $v0, $zero, L_80036424
    if (ctx->r2 != 0) {
        // 0x800363F4: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_80036424;
    }
    goto skip_1;
    // 0x800363F4: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    skip_1:
    // 0x800363F8: subu        $v0, $a0, $a3
    ctx->r2 = SUB32(ctx->r4, ctx->r7);
    // 0x800363FC: multu       $v0, $t1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80036400: mfhi        $t3
    ctx->r11 = hi;
    // 0x80036404: srl         $v1, $t3, 5
    ctx->r3 = S32(U32(ctx->r11) >> 5);
    // 0x80036408: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8003640C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80036410: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80036414: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x80036418: lhu         $v0, 0x24($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X24);
    // 0x8003641C: sw          $v0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r2;
L_80036420:
    // 0x80036420: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
L_80036424:
    // 0x80036424: slti        $v0, $a2, 0x6B0
    ctx->r2 = SIGNED(ctx->r6) < 0X6B0 ? 1 : 0;
    // 0x80036428: bne         $v0, $zero, L_800363D8
    if (ctx->r2 != 0) {
        // 0x8003642C: addiu       $a1, $a1, 0xC
        ctx->r5 = ADD32(ctx->r5, 0XC);
            goto L_800363D8;
    }
    // 0x8003642C: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    // 0x80036430: lui         $s0, 0x801B
    ctx->r16 = S32(0X801B << 16);
    // 0x80036434: addiu       $s0, $s0, -0xBD0
    ctx->r16 = ADD32(ctx->r16, -0XBD0);
    // 0x80036438: jal         0x80025FF8
    // 0x8003643C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    func_80025FF8_13F8(rdram, ctx);
        goto after_2;
    // 0x8003643C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_2:
    // 0x80036440: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80036444: jal         0x80025FF8
    // 0x80036448: lw          $a0, -0xBCC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XBCC);
    func_80025FF8_13F8(rdram, ctx);
        goto after_3;
    // 0x80036448: lw          $a0, -0xBCC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XBCC);
    after_3:
    // 0x8003644C: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80036450: sw          $zero, -0x2660($at)
    MEM_W(-0X2660, ctx->r1) = 0;
    // 0x80036454: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80036458: sw          $zero, -0x265C($at)
    MEM_W(-0X265C, ctx->r1) = 0;
    // 0x8003645C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80036460: sw          $zero, -0xBCC($at)
    MEM_W(-0XBCC, ctx->r1) = 0;
    // 0x80036464: j           L_80036488
    // 0x80036468: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
        goto L_80036488;
    // 0x80036468: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
L_8003646C:
    // 0x8003646C: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80036470: lw          $v0, -0x7814($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7814);
    // 0x80036474: andi        $v0, $v0, 0x800
    ctx->r2 = ctx->r2 & 0X800;
    // 0x80036478: beq         $v0, $zero, L_80036488
    if (ctx->r2 == 0) {
        // 0x8003647C: nop
    
            goto L_80036488;
    }
    // 0x8003647C: nop

    // 0x80036480: jal         0x8002A4A4
    // 0x80036484: nop

    func_8002A4A4_58A4(rdram, ctx);
        goto after_4;
    // 0x80036484: nop

    after_4:
L_80036488:
    // 0x80036488: beq         $s4, $zero, L_80036650
    if (ctx->r20 == 0) {
        // 0x8003648C: nop
    
            goto L_80036650;
    }
    // 0x8003648C: nop

    // 0x80036490: jal         0x80092EB0
    // 0x80036494: addu        $s3, $s4, $zero
    ctx->r19 = ADD32(ctx->r20, 0);
    func_80092EB0_6E2B0(rdram, ctx);
        goto after_5;
    // 0x80036494: addu        $s3, $s4, $zero
    ctx->r19 = ADD32(ctx->r20, 0);
    after_5:
    // 0x80036498: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8003649C: sll         $v0, $s4, 6
    ctx->r2 = S32(ctx->r20 << 6);
    // 0x800364A0: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x800364A4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800364A8: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x800364AC: addiu       $v1, $v1, -0x7148
    ctx->r3 = ADD32(ctx->r3, -0X7148);
    // 0x800364B0: addu        $s2, $v0, $v1
    ctx->r18 = ADD32(ctx->r2, ctx->r3);
    // 0x800364B4: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
L_800364B8:
    // 0x800364B8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x800364BC: beq         $a0, $zero, L_800364CC
    if (ctx->r4 == 0) {
        // 0x800364C0: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_800364CC;
    }
    // 0x800364C0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800364C4: jal         0x80025FF8
    // 0x800364C8: nop

    func_80025FF8_13F8(rdram, ctx);
        goto after_6;
    // 0x800364C8: nop

    after_6:
L_800364CC:
    // 0x800364CC: slti        $v0, $s1, 0x40
    ctx->r2 = SIGNED(ctx->r17) < 0X40 ? 1 : 0;
    // 0x800364D0: bne         $v0, $zero, L_800364B8
    if (ctx->r2 != 0) {
        // 0x800364D4: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_800364B8;
    }
    // 0x800364D4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x800364D8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x800364DC: jal         0x8009A2B0
    // 0x800364E0: addiu       $a1, $zero, 0x104
    ctx->r5 = ADD32(0, 0X104);
    bzero_recomp(rdram, ctx);
        goto after_7;
    // 0x800364E0: addiu       $a1, $zero, 0x104
    ctx->r5 = ADD32(0, 0X104);
    after_7:
    // 0x800364E4: sll         $v0, $s3, 16
    ctx->r2 = S32(ctx->r19 << 16);
    // 0x800364E8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x800364EC: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x800364F0: bne         $v0, $v1, L_80036518
    if (ctx->r2 != ctx->r3) {
        // 0x800364F4: nop
    
            goto L_80036518;
    }
    // 0x800364F4: nop

    // 0x800364F8: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x800364FC: lw          $a0, 0x478C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X478C);
    // 0x80036500: beq         $a0, $zero, L_80036510
    if (ctx->r4 == 0) {
        // 0x80036504: nop
    
            goto L_80036510;
    }
    // 0x80036504: nop

    // 0x80036508: jal         0x80025FF8
    // 0x8003650C: nop

    func_80025FF8_13F8(rdram, ctx);
        goto after_8;
    // 0x8003650C: nop

    after_8:
L_80036510:
    // 0x80036510: lui         $at, 0x801D
    ctx->r1 = S32(0X801D << 16);
    // 0x80036514: sw          $zero, 0x478C($at)
    MEM_W(0X478C, ctx->r1) = 0;
L_80036518:
    // 0x80036518: lhu         $t3, 0x16($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X16);
    // 0x8003651C: sll         $v0, $t3, 16
    ctx->r2 = S32(ctx->r11 << 16);
    // 0x80036520: sra         $a0, $v0, 14
    ctx->r4 = S32(SIGNED(ctx->r2) >> 14);
    // 0x80036524: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80036528: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8003652C: lw          $v0, -0x3954($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3954);
    // 0x80036530: sll         $v1, $fp, 16
    ctx->r3 = S32(ctx->r30 << 16);
    // 0x80036534: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80036538: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8003653C: lbu         $s3, 0x0($v0)
    ctx->r19 = MEM_BU(ctx->r2, 0X0);
    // 0x80036540: beq         $s3, $zero, L_800366C4
    if (ctx->r19 == 0) {
        // 0x80036544: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_800366C4;
    }
    // 0x80036544: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x80036548: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8003654C: addiu       $v0, $v0, -0x38B0
    ctx->r2 = ADD32(ctx->r2, -0X38B0);
    // 0x80036550: addu        $s7, $a0, $v0
    ctx->r23 = ADD32(ctx->r4, ctx->r2);
    // 0x80036554: sll         $s6, $v1, 2
    ctx->r22 = S32(ctx->r3 << 2);
    // 0x80036558: lui         $s5, 0x700
    ctx->r21 = S32(0X700 << 16);
L_8003655C:
    // 0x8003655C: lw          $v0, 0x0($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X0);
    // 0x80036560: addu        $v0, $s6, $v0
    ctx->r2 = ADD32(ctx->r22, ctx->r2);
    // 0x80036564: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x80036568: sll         $v0, $s2, 3
    ctx->r2 = S32(ctx->r18 << 3);
    // 0x8003656C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80036570: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x80036574: lui         $v0, 0xFF00
    ctx->r2 = S32(0XFF00 << 16);
    // 0x80036578: and         $s0, $v1, $v0
    ctx->r16 = ctx->r3 & ctx->r2;
    // 0x8003657C: xor         $v1, $s0, $s5
    ctx->r3 = ctx->r16 ^ ctx->r21;
    // 0x80036580: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80036584: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x80036588: xor         $v0, $s0, $v0
    ctx->r2 = ctx->r16 ^ ctx->r2;
    // 0x8003658C: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80036590: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80036594: bne         $v1, $zero, L_800365AC
    if (ctx->r3 != 0) {
        // 0x80036598: subu        $v0, $s0, $s5
        ctx->r2 = SUB32(ctx->r16, ctx->r21);
            goto L_800365AC;
    }
    // 0x80036598: subu        $v0, $s0, $s5
    ctx->r2 = SUB32(ctx->r16, ctx->r21);
    // 0x8003659C: lui         $v0, 0x900
    ctx->r2 = S32(0X900 << 16);
    // 0x800365A0: bne         $s0, $v0, L_800365D8
    if (ctx->r16 != ctx->r2) {
        // 0x800365A4: lui         $v1, 0x1200
        ctx->r3 = S32(0X1200 << 16);
            goto L_800365D8;
    }
    // 0x800365A4: lui         $v1, 0x1200
    ctx->r3 = S32(0X1200 << 16);
    // 0x800365A8: subu        $v0, $s0, $s5
    ctx->r2 = SUB32(ctx->r16, ctx->r21);
L_800365AC:
    // 0x800365AC: sra         $v0, $v0, 22
    ctx->r2 = S32(SIGNED(ctx->r2) >> 22);
    // 0x800365B0: lui         $t3, 0x801D
    ctx->r11 = S32(0X801D << 16);
    // 0x800365B4: addiu       $t3, $t3, 0x4784
    ctx->r11 = ADD32(ctx->r11, 0X4784);
    // 0x800365B8: addu        $s1, $v0, $t3
    ctx->r17 = ADD32(ctx->r2, ctx->r11);
    // 0x800365BC: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x800365C0: beql        $a0, $zero, L_800365D4
    if (ctx->r4 == 0) {
        // 0x800365C4: sw          $zero, 0x0($s1)
        MEM_W(0X0, ctx->r17) = 0;
            goto L_800365D4;
    }
    goto skip_2;
    // 0x800365C4: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    skip_2:
    // 0x800365C8: jal         0x80025FF8
    // 0x800365CC: nop

    func_80025FF8_13F8(rdram, ctx);
        goto after_9;
    // 0x800365CC: nop

    after_9:
    // 0x800365D0: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
L_800365D4:
    // 0x800365D4: lui         $v1, 0x1200
    ctx->r3 = S32(0X1200 << 16);
L_800365D8:
    // 0x800365D8: xor         $v1, $s0, $v1
    ctx->r3 = ctx->r16 ^ ctx->r3;
    // 0x800365DC: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x800365E0: lui         $v0, 0x1100
    ctx->r2 = S32(0X1100 << 16);
    // 0x800365E4: xor         $v0, $s0, $v0
    ctx->r2 = ctx->r16 ^ ctx->r2;
    // 0x800365E8: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x800365EC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x800365F0: beql        $v1, $zero, L_8003663C
    if (ctx->r3 == 0) {
        // 0x800365F4: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_8003663C;
    }
    goto skip_3;
    // 0x800365F4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_3:
    // 0x800365F8: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x800365FC: lw          $a0, -0xBD0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XBD0);
    // 0x80036600: beq         $a0, $zero, L_80036610
    if (ctx->r4 == 0) {
        // 0x80036604: nop
    
            goto L_80036610;
    }
    // 0x80036604: nop

    // 0x80036608: jal         0x80025FF8
    // 0x8003660C: nop

    func_80025FF8_13F8(rdram, ctx);
        goto after_10;
    // 0x8003660C: nop

    after_10:
L_80036610:
    // 0x80036610: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80036614: lw          $a0, -0xBCC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XBCC);
    // 0x80036618: beq         $a0, $zero, L_80036628
    if (ctx->r4 == 0) {
        // 0x8003661C: nop
    
            goto L_80036628;
    }
    // 0x8003661C: nop

    // 0x80036620: jal         0x80025FF8
    // 0x80036624: nop

    func_80025FF8_13F8(rdram, ctx);
        goto after_11;
    // 0x80036624: nop

    after_11:
L_80036628:
    // 0x80036628: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8003662C: addiu       $a0, $a0, -0xBD0
    ctx->r4 = ADD32(ctx->r4, -0XBD0);
    // 0x80036630: jal         0x8009A2B0
    // 0x80036634: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    bzero_recomp(rdram, ctx);
        goto after_12;
    // 0x80036634: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_12:
    // 0x80036638: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8003663C:
    // 0x8003663C: slt         $v0, $s2, $s3
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x80036640: beq         $v0, $zero, L_800366C4
    if (ctx->r2 == 0) {
        // 0x80036644: nop
    
            goto L_800366C4;
    }
    // 0x80036644: nop

    // 0x80036648: j           L_8003655C
    // 0x8003664C: nop

        goto L_8003655C;
    // 0x8003664C: nop

L_80036650:
    // 0x80036650: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80036654: lbu         $v1, -0x35A6($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X35A6);
    // 0x80036658: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8003665C: lbu         $v0, -0x35A8($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X35A8);
    // 0x80036660: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80036664: sw          $zero, -0x26F0($at)
    MEM_W(-0X26F0, ctx->r1) = 0;
    // 0x80036668: bnel        $v0, $v1, L_80036670
    if (ctx->r2 != ctx->r3) {
        // 0x8003666C: andi        $fp, $v1, 0xFF
        ctx->r30 = ctx->r3 & 0XFF;
            goto L_80036670;
    }
    goto skip_4;
    // 0x8003666C: andi        $fp, $v1, 0xFF
    ctx->r30 = ctx->r3 & 0XFF;
    skip_4:
L_80036670:
    // 0x80036670: lhu         $t3, 0x16($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X16);
    // 0x80036674: addiu       $v1, $zero, 0xC
    ctx->r3 = ADD32(0, 0XC);
    // 0x80036678: sll         $v0, $t3, 16
    ctx->r2 = S32(ctx->r11 << 16);
    // 0x8003667C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80036680: bne         $v0, $v1, L_800366C4
    if (ctx->r2 != ctx->r3) {
        // 0x80036684: nop
    
            goto L_800366C4;
    }
    // 0x80036684: nop

    // 0x80036688: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8003668C: lw          $v0, -0x38BC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X38BC);
    // 0x80036690: lbu         $s3, 0xF($v0)
    ctx->r19 = MEM_BU(ctx->r2, 0XF);
    // 0x80036694: slt         $v0, $s4, $s3
    ctx->r2 = SIGNED(ctx->r20) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x80036698: beq         $v0, $zero, L_800366C4
    if (ctx->r2 == 0) {
        // 0x8003669C: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_800366C4;
    }
    // 0x8003669C: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x800366A0: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
L_800366A4:
    // 0x800366A4: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x800366A8: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x800366AC: jal         0x80035CA0
    // 0x800366B0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80035CA0_110A0(rdram, ctx);
        goto after_13;
    // 0x800366B0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_13:
    // 0x800366B4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x800366B8: slt         $v0, $s2, $s3
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x800366BC: bne         $v0, $zero, L_800366A4
    if (ctx->r2 != 0) {
        // 0x800366C0: addiu       $a0, $zero, 0x26
        ctx->r4 = ADD32(0, 0X26);
            goto L_800366A4;
    }
    // 0x800366C0: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
L_800366C4:
    // 0x800366C4: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x800366C8: lbu         $a0, -0x35A5($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X35A5);
    // 0x800366CC: sll         $v0, $fp, 16
    ctx->r2 = S32(ctx->r30 << 16);
    // 0x800366D0: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x800366D4: sltu        $v1, $zero, $a0
    ctx->r3 = 0 < ctx->r4 ? 1 : 0;
    // 0x800366D8: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x800366DC: beq         $v1, $zero, L_800367E0
    if (ctx->r3 == 0) {
        // 0x800366E0: nop
    
            goto L_800367E0;
    }
    // 0x800366E0: nop

    // 0x800366E4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x800366E8: lw          $v0, -0x38BC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X38BC);
    // 0x800366EC: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x800366F0: lbu         $s3, -0x1($v0)
    ctx->r19 = MEM_BU(ctx->r2, -0X1);
    // 0x800366F4: beq         $s3, $zero, L_800367A4
    if (ctx->r19 == 0) {
        // 0x800366F8: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_800367A4;
    }
    // 0x800366F8: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x800366FC: lui         $s6, 0xFF00
    ctx->r22 = S32(0XFF00 << 16);
    // 0x80036700: lui         $s5, 0x1200
    ctx->r21 = S32(0X1200 << 16);
    // 0x80036704: lui         $s1, 0x1100
    ctx->r17 = S32(0X1100 << 16);
L_80036708:
    // 0x80036708: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8003670C: lbu         $v0, -0x35A5($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X35A5);
    // 0x80036710: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80036714: lw          $v1, -0x3818($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3818);
    // 0x80036718: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8003671C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80036720: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80036724: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x80036728: sll         $v0, $s2, 3
    ctx->r2 = S32(ctx->r18 << 3);
    // 0x8003672C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80036730: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80036734: and         $s0, $v0, $s6
    ctx->r16 = ctx->r2 & ctx->r22;
    // 0x80036738: xor         $v1, $s0, $s5
    ctx->r3 = ctx->r16 ^ ctx->r21;
    // 0x8003673C: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80036740: xor         $v0, $s0, $s1
    ctx->r2 = ctx->r16 ^ ctx->r17;
    // 0x80036744: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80036748: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8003674C: beql        $v1, $zero, L_80036798
    if (ctx->r3 == 0) {
        // 0x80036750: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_80036798;
    }
    goto skip_5;
    // 0x80036750: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_5:
    // 0x80036754: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80036758: lw          $a0, -0xBD0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XBD0);
    // 0x8003675C: beq         $a0, $zero, L_8003676C
    if (ctx->r4 == 0) {
        // 0x80036760: nop
    
            goto L_8003676C;
    }
    // 0x80036760: nop

    // 0x80036764: jal         0x80025FF8
    // 0x80036768: nop

    func_80025FF8_13F8(rdram, ctx);
        goto after_14;
    // 0x80036768: nop

    after_14:
L_8003676C:
    // 0x8003676C: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80036770: lw          $a0, -0xBCC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XBCC);
    // 0x80036774: beq         $a0, $zero, L_80036784
    if (ctx->r4 == 0) {
        // 0x80036778: nop
    
            goto L_80036784;
    }
    // 0x80036778: nop

    // 0x8003677C: jal         0x80025FF8
    // 0x80036780: nop

    func_80025FF8_13F8(rdram, ctx);
        goto after_15;
    // 0x80036780: nop

    after_15:
L_80036784:
    // 0x80036784: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80036788: addiu       $a0, $a0, -0xBD0
    ctx->r4 = ADD32(ctx->r4, -0XBD0);
    // 0x8003678C: jal         0x8009A2B0
    // 0x80036790: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    bzero_recomp(rdram, ctx);
        goto after_16;
    // 0x80036790: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_16:
    // 0x80036794: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_80036798:
    // 0x80036798: slt         $v0, $s2, $s3
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x8003679C: bne         $v0, $zero, L_80036708
    if (ctx->r2 != 0) {
        // 0x800367A0: nop
    
            goto L_80036708;
    }
    // 0x800367A0: nop

L_800367A4:
    // 0x800367A4: beq         $s3, $zero, L_800367D8
    if (ctx->r19 == 0) {
        // 0x800367A8: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_800367D8;
    }
    // 0x800367A8: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x800367AC: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
L_800367B0:
    // 0x800367B0: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x800367B4: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x800367B8: lbu         $a1, -0x35A5($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X35A5);
    // 0x800367BC: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    // 0x800367C0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x800367C4: jal         0x80035CA0
    // 0x800367C8: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    func_80035CA0_110A0(rdram, ctx);
        goto after_17;
    // 0x800367C8: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    after_17:
    // 0x800367CC: slt         $v0, $s2, $s3
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x800367D0: bne         $v0, $zero, L_800367B0
    if (ctx->r2 != 0) {
        // 0x800367D4: addiu       $a0, $zero, 0x26
        ctx->r4 = ADD32(0, 0X26);
            goto L_800367B0;
    }
    // 0x800367D4: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
L_800367D8:
    // 0x800367D8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800367DC: sb          $zero, -0x35A5($at)
    MEM_B(-0X35A5, ctx->r1) = 0;
L_800367E0:
    // 0x800367E0: lhu         $t3, 0x16($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X16);
    // 0x800367E4: sll         $a0, $t3, 16
    ctx->r4 = S32(ctx->r11 << 16);
    // 0x800367E8: sra         $v0, $a0, 14
    ctx->r2 = S32(SIGNED(ctx->r4) >> 14);
    // 0x800367EC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800367F0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800367F4: lw          $v0, -0x3954($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3954);
    // 0x800367F8: sll         $a1, $fp, 16
    ctx->r5 = S32(ctx->r30 << 16);
    // 0x800367FC: sra         $v1, $a1, 16
    ctx->r3 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80036800: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80036804: lbu         $s3, 0x0($v0)
    ctx->r19 = MEM_BU(ctx->r2, 0X0);
    // 0x80036808: beq         $s3, $zero, L_8003683C
    if (ctx->r19 == 0) {
        // 0x8003680C: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_8003683C;
    }
    // 0x8003680C: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x80036810: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80036814: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x80036818: sra         $a0, $s1, 16
    ctx->r4 = S32(SIGNED(ctx->r17) >> 16);
L_8003681C:
    // 0x8003681C: sra         $a1, $s0, 16
    ctx->r5 = S32(SIGNED(ctx->r16) >> 16);
    // 0x80036820: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x80036824: jal         0x80035CA0
    // 0x80036828: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    func_80035CA0_110A0(rdram, ctx);
        goto after_18;
    // 0x80036828: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    after_18:
    // 0x8003682C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80036830: slt         $v0, $s2, $s3
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x80036834: bne         $v0, $zero, L_8003681C
    if (ctx->r2 != 0) {
        // 0x80036838: sra         $a0, $s1, 16
        ctx->r4 = S32(SIGNED(ctx->r17) >> 16);
            goto L_8003681C;
    }
    // 0x80036838: sra         $a0, $s1, 16
    ctx->r4 = S32(SIGNED(ctx->r17) >> 16);
L_8003683C:
    // 0x8003683C: bne         $s4, $zero, L_80036850
    if (ctx->r20 != 0) {
        // 0x80036840: nop
    
            goto L_80036850;
    }
    // 0x80036840: nop

    // 0x80036844: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x80036848: jal         0x80029394
    // 0x8003684C: addiu       $a0, $a0, 0x5574
    ctx->r4 = ADD32(ctx->r4, 0X5574);
    func_80029394_4794(rdram, ctx);
        goto after_19;
    // 0x8003684C: addiu       $a0, $a0, 0x5574
    ctx->r4 = ADD32(ctx->r4, 0X5574);
    after_19:
L_80036850:
    // 0x80036850: jal         0x80087590
    // 0x80036854: nop

    func_80087590_62990(rdram, ctx);
        goto after_20;
    // 0x80036854: nop

    after_20:
    // 0x80036858: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x8003685C: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x80036860: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x80036864: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x80036868: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x8003686C: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x80036870: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x80036874: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x80036878: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x8003687C: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x80036880: jr          $ra
    // 0x80036884: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x80036884: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void osScAddClient(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8009ACE8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8009ACEC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8009ACF0: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8009ACF4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8009ACF8: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x8009ACFC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8009AD00: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x8009AD04: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009AD08: jal         0x80094460
    // 0x8009AD0C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osSetIntMask_recomp(rdram, ctx);
        goto after_0;
    // 0x8009AD0C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x8009AD10: sw          $s1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r17;
    // 0x8009AD14: lw          $v1, 0x260($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X260);
    // 0x8009AD18: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8009AD1C: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x8009AD20: jal         0x80094460
    // 0x8009AD24: sw          $s0, 0x260($s2)
    MEM_W(0X260, ctx->r18) = ctx->r16;
    osSetIntMask_recomp(rdram, ctx);
        goto after_1;
    // 0x8009AD24: sw          $s0, 0x260($s2)
    MEM_W(0X260, ctx->r18) = ctx->r16;
    after_1:
    // 0x8009AD28: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009AD2C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8009AD30: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8009AD34: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8009AD38: jr          $ra
    // 0x8009AD3C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8009AD3C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8005DF8C_3938C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8005DF8C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8005DF90: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8005DF94: lui         $s0, 0x801A
    ctx->r16 = S32(0X801A << 16);
    // 0x8005DF98: lw          $s0, -0x5858($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X5858);
    // 0x8005DF9C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8005DFA0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8005DFA4: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    // 0x8005DFA8: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    // 0x8005DFAC: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x8005DFB0: addiu       $s5, $zero, 0x9
    ctx->r21 = ADD32(0, 0X9);
    // 0x8005DFB4: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8005DFB8: addiu       $s4, $zero, 0x2C
    ctx->r20 = ADD32(0, 0X2C);
    // 0x8005DFBC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8005DFC0: addiu       $s3, $zero, 0x80
    ctx->r19 = ADD32(0, 0X80);
    // 0x8005DFC4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8005DFC8: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x8005DFCC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8005DFD0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8005DFD4: sb          $s5, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r21;
    // 0x8005DFD8: sb          $s4, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r20;
    // 0x8005DFDC: jal         0x80030284
    // 0x8005DFE0: sh          $s3, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r19;
    func_80030284_B684(rdram, ctx);
        goto after_0;
    // 0x8005DFE0: sh          $s3, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r19;
    after_0:
    // 0x8005DFE4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8005DFE8: addiu       $a1, $zero, 0x1F0
    ctx->r5 = ADD32(0, 0X1F0);
    // 0x8005DFEC: jal         0x8003026C
    // 0x8005DFF0: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    func_8003026C_B66C(rdram, ctx);
        goto after_1;
    // 0x8005DFF0: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    after_1:
    // 0x8005DFF4: lbu         $v1, 0x7($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X7);
    // 0x8005DFF8: addiu       $s6, $zero, 0xFF
    ctx->r22 = ADD32(0, 0XFF);
    // 0x8005DFFC: addiu       $s1, $zero, 0x80
    ctx->r17 = ADD32(0, 0X80);
    // 0x8005E000: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x8005E004: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x8005E008: sb          $s6, 0x14($s0)
    MEM_B(0X14, ctx->r16) = ctx->r22;
    // 0x8005E00C: sb          $zero, 0x15($s0)
    MEM_B(0X15, ctx->r16) = 0;
    // 0x8005E010: sb          $zero, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = 0;
    // 0x8005E014: sb          $s1, 0x1D($s0)
    MEM_B(0X1D, ctx->r16) = ctx->r17;
    // 0x8005E018: sb          $s6, 0x24($s0)
    MEM_B(0X24, ctx->r16) = ctx->r22;
    // 0x8005E01C: sb          $s1, 0x25($s0)
    MEM_B(0X25, ctx->r16) = ctx->r17;
    // 0x8005E020: sb          $s1, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r17;
    // 0x8005E024: sb          $s1, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r17;
    // 0x8005E028: sb          $s1, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r17;
    // 0x8005E02C: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x8005E030: sb          $v1, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r3;
    // 0x8005E034: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8005E038: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x8005E03C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8005E040: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x8005E044: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
    // 0x8005E048: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8005E04C: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
    // 0x8005E050: sh          $v0, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r2;
    // 0x8005E054: addiu       $v0, $zero, 0x48
    ctx->r2 = ADD32(0, 0X48);
    // 0x8005E058: sh          $a2, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r6;
    // 0x8005E05C: sh          $a2, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r6;
    // 0x8005E060: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
    // 0x8005E064: sh          $v0, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r2;
    // 0x8005E068: addiu       $v1, $zero, 0x11F
    ctx->r3 = ADD32(0, 0X11F);
    // 0x8005E06C: sh          $v1, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r3;
    // 0x8005E070: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    // 0x8005E074: addiu       $s0, $s0, 0x28
    ctx->r16 = ADD32(ctx->r16, 0X28);
    // 0x8005E078: jal         0x800302C8
    // 0x8005E07C: addiu       $a0, $a0, 0xA0
    ctx->r4 = ADD32(ctx->r4, 0XA0);
    func_800302C8_B6C8(rdram, ctx);
        goto after_2;
    // 0x8005E07C: addiu       $a0, $a0, 0xA0
    ctx->r4 = ADD32(ctx->r4, 0XA0);
    after_2:
    // 0x8005E080: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8005E084: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8005E088: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8005E08C: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    // 0x8005E090: sb          $s5, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r21;
    // 0x8005E094: sb          $s4, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r20;
    // 0x8005E098: jal         0x80030284
    // 0x8005E09C: sh          $s3, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r19;
    func_80030284_B684(rdram, ctx);
        goto after_3;
    // 0x8005E09C: sh          $s3, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r19;
    after_3:
    // 0x8005E0A0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8005E0A4: addiu       $a1, $zero, 0x1F2
    ctx->r5 = ADD32(0, 0X1F2);
    // 0x8005E0A8: jal         0x8003026C
    // 0x8005E0AC: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    func_8003026C_B66C(rdram, ctx);
        goto after_4;
    // 0x8005E0AC: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    after_4:
    // 0x8005E0B0: lbu         $v1, 0x7($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X7);
    // 0x8005E0B4: addiu       $s2, $zero, 0xA0
    ctx->r18 = ADD32(0, 0XA0);
    // 0x8005E0B8: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x8005E0BC: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x8005E0C0: sb          $s2, 0x14($s0)
    MEM_B(0X14, ctx->r16) = ctx->r18;
    // 0x8005E0C4: sb          $zero, 0x15($s0)
    MEM_B(0X15, ctx->r16) = 0;
    // 0x8005E0C8: sb          $zero, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = 0;
    // 0x8005E0CC: sb          $s2, 0x1D($s0)
    MEM_B(0X1D, ctx->r16) = ctx->r18;
    // 0x8005E0D0: sb          $s2, 0x24($s0)
    MEM_B(0X24, ctx->r16) = ctx->r18;
    // 0x8005E0D4: sb          $s2, 0x25($s0)
    MEM_B(0X25, ctx->r16) = ctx->r18;
    // 0x8005E0D8: sb          $s1, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r17;
    // 0x8005E0DC: sb          $s1, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r17;
    // 0x8005E0E0: sb          $s1, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r17;
    // 0x8005E0E4: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x8005E0E8: sb          $v1, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r3;
    // 0x8005E0EC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8005E0F0: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x8005E0F4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8005E0F8: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
    // 0x8005E0FC: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x8005E100: sh          $zero, 0x8($s0)
    MEM_H(0X8, ctx->r16) = 0;
    // 0x8005E104: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8005E108: sh          $v0, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r2;
    // 0x8005E10C: sh          $zero, 0x12($s0)
    MEM_H(0X12, ctx->r16) = 0;
    // 0x8005E110: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x8005E114: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
    // 0x8005E118: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
    // 0x8005E11C: sh          $v0, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r2;
    // 0x8005E120: addiu       $s0, $s0, 0x28
    ctx->r16 = ADD32(ctx->r16, 0X28);
    // 0x8005E124: jal         0x800302C8
    // 0x8005E128: addiu       $a0, $a0, 0xA8
    ctx->r4 = ADD32(ctx->r4, 0XA8);
    func_800302C8_B6C8(rdram, ctx);
        goto after_5;
    // 0x8005E128: addiu       $a0, $a0, 0xA8
    ctx->r4 = ADD32(ctx->r4, 0XA8);
    after_5:
    // 0x8005E12C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8005E130: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8005E134: addiu       $a2, $zero, 0x280
    ctx->r6 = ADD32(0, 0X280);
    // 0x8005E138: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    // 0x8005E13C: sb          $s5, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r21;
    // 0x8005E140: sb          $s4, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r20;
    // 0x8005E144: jal         0x80030284
    // 0x8005E148: sh          $s3, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r19;
    func_80030284_B684(rdram, ctx);
        goto after_6;
    // 0x8005E148: sh          $s3, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r19;
    after_6:
    // 0x8005E14C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8005E150: addiu       $a1, $zero, 0x1F2
    ctx->r5 = ADD32(0, 0X1F2);
    // 0x8005E154: jal         0x8003026C
    // 0x8005E158: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    func_8003026C_B66C(rdram, ctx);
        goto after_7;
    // 0x8005E158: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    after_7:
    // 0x8005E15C: lbu         $v1, 0x7($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X7);
    // 0x8005E160: addiu       $s4, $zero, 0xC0
    ctx->r20 = ADD32(0, 0XC0);
    // 0x8005E164: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x8005E168: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x8005E16C: sb          $s4, 0x14($s0)
    MEM_B(0X14, ctx->r16) = ctx->r20;
    // 0x8005E170: sb          $zero, 0x15($s0)
    MEM_B(0X15, ctx->r16) = 0;
    // 0x8005E174: sb          $zero, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = 0;
    // 0x8005E178: sb          $s2, 0x1D($s0)
    MEM_B(0X1D, ctx->r16) = ctx->r18;
    // 0x8005E17C: sb          $s4, 0x24($s0)
    MEM_B(0X24, ctx->r16) = ctx->r20;
    // 0x8005E180: sb          $s2, 0x25($s0)
    MEM_B(0X25, ctx->r16) = ctx->r18;
    // 0x8005E184: sb          $s1, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r17;
    // 0x8005E188: sb          $s1, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r17;
    // 0x8005E18C: sb          $s1, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r17;
    // 0x8005E190: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x8005E194: sb          $v1, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r3;
    // 0x8005E198: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8005E19C: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x8005E1A0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8005E1A4: addiu       $s1, $zero, 0x140
    ctx->r17 = ADD32(0, 0X140);
    // 0x8005E1A8: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
    // 0x8005E1AC: sh          $s3, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r19;
    // 0x8005E1B0: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8005E1B4: sh          $s1, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r17;
    // 0x8005E1B8: sh          $zero, 0x12($s0)
    MEM_H(0X12, ctx->r16) = 0;
    // 0x8005E1BC: sh          $s3, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r19;
    // 0x8005E1C0: sh          $s3, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r19;
    // 0x8005E1C4: sh          $s1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r17;
    // 0x8005E1C8: sh          $s3, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r19;
    // 0x8005E1CC: addiu       $s0, $s0, 0x28
    ctx->r16 = ADD32(ctx->r16, 0X28);
    // 0x8005E1D0: jal         0x800302C8
    // 0x8005E1D4: addiu       $a0, $a0, 0xA8
    ctx->r4 = ADD32(ctx->r4, 0XA8);
    func_800302C8_B6C8(rdram, ctx);
        goto after_8;
    // 0x8005E1D4: addiu       $a0, $a0, 0xA8
    ctx->r4 = ADD32(ctx->r4, 0XA8);
    after_8:
    // 0x8005E1D8: addiu       $s3, $zero, 0x38
    ctx->r19 = ADD32(0, 0X38);
    // 0x8005E1DC: sb          $s3, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r19;
    // 0x8005E1E0: lbu         $v0, 0x7($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X7);
    // 0x8005E1E4: addiu       $s2, $zero, 0x8
    ctx->r18 = ADD32(0, 0X8);
    // 0x8005E1E8: sb          $s2, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r18;
    // 0x8005E1EC: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
    // 0x8005E1F0: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x8005E1F4: sb          $zero, 0x6($s0)
    MEM_B(0X6, ctx->r16) = 0;
    // 0x8005E1F8: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x8005E1FC: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x8005E200: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x8005E204: sb          $zero, 0x14($s0)
    MEM_B(0X14, ctx->r16) = 0;
    // 0x8005E208: sb          $zero, 0x15($s0)
    MEM_B(0X15, ctx->r16) = 0;
    // 0x8005E20C: sb          $zero, 0x16($s0)
    MEM_B(0X16, ctx->r16) = 0;
    // 0x8005E210: sb          $zero, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = 0;
    // 0x8005E214: sb          $zero, 0x1D($s0)
    MEM_B(0X1D, ctx->r16) = 0;
    // 0x8005E218: sb          $zero, 0x1E($s0)
    MEM_B(0X1E, ctx->r16) = 0;
    // 0x8005E21C: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8005E220: sb          $v0, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r2;
    // 0x8005E224: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8005E228: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x8005E22C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8005E230: sh          $zero, 0x8($s0)
    MEM_H(0X8, ctx->r16) = 0;
    // 0x8005E234: sh          $s1, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r17;
    // 0x8005E238: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x8005E23C: sh          $s1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r17;
    // 0x8005E240: addiu       $v0, $zero, 0x81
    ctx->r2 = ADD32(0, 0X81);
    // 0x8005E244: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
    // 0x8005E248: sh          $v0, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r2;
    // 0x8005E24C: addiu       $v0, $zero, 0xA1
    ctx->r2 = ADD32(0, 0XA1);
    // 0x8005E250: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
    // 0x8005E254: sh          $v0, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r2;
    // 0x8005E258: addiu       $s0, $s0, 0x28
    ctx->r16 = ADD32(ctx->r16, 0X28);
    // 0x8005E25C: jal         0x800302C8
    // 0x8005E260: addiu       $a0, $a0, 0xA8
    ctx->r4 = ADD32(ctx->r4, 0XA8);
    func_800302C8_B6C8(rdram, ctx);
        goto after_9;
    // 0x8005E260: addiu       $a0, $a0, 0xA8
    ctx->r4 = ADD32(ctx->r4, 0XA8);
    after_9:
    // 0x8005E264: sb          $s3, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r19;
    // 0x8005E268: lbu         $v1, 0x7($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X7);
    // 0x8005E26C: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x8005E270: sb          $s2, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r18;
    // 0x8005E274: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
    // 0x8005E278: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x8005E27C: sb          $zero, 0x6($s0)
    MEM_B(0X6, ctx->r16) = 0;
    // 0x8005E280: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x8005E284: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x8005E288: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x8005E28C: sb          $s4, 0x14($s0)
    MEM_B(0X14, ctx->r16) = ctx->r20;
    // 0x8005E290: sb          $s6, 0x15($s0)
    MEM_B(0X15, ctx->r16) = ctx->r22;
    // 0x8005E294: sb          $v0, 0x16($s0)
    MEM_B(0X16, ctx->r16) = ctx->r2;
    // 0x8005E298: sb          $s4, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = ctx->r20;
    // 0x8005E29C: sb          $s6, 0x1D($s0)
    MEM_B(0X1D, ctx->r16) = ctx->r22;
    // 0x8005E2A0: sb          $v0, 0x1E($s0)
    MEM_B(0X1E, ctx->r16) = ctx->r2;
    // 0x8005E2A4: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x8005E2A8: sb          $v1, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r3;
    // 0x8005E2AC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8005E2B0: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x8005E2B4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8005E2B8: addiu       $v0, $zero, 0xA2
    ctx->r2 = ADD32(0, 0XA2);
    // 0x8005E2BC: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
    // 0x8005E2C0: sh          $v0, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r2;
    // 0x8005E2C4: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
    // 0x8005E2C8: sh          $zero, 0x8($s0)
    MEM_H(0X8, ctx->r16) = 0;
    // 0x8005E2CC: sh          $s1, 0x10($s0)
    MEM_H(0X10, ctx->r16) = ctx->r17;
    // 0x8005E2D0: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x8005E2D4: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
    // 0x8005E2D8: sh          $s1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r17;
    // 0x8005E2DC: sh          $v0, 0x22($s0)
    MEM_H(0X22, ctx->r16) = ctx->r2;
    // 0x8005E2E0: addiu       $s0, $s0, 0x28
    ctx->r16 = ADD32(ctx->r16, 0X28);
    // 0x8005E2E4: jal         0x800302C8
    // 0x8005E2E8: addiu       $a0, $a0, 0xA8
    ctx->r4 = ADD32(ctx->r4, 0XA8);
    func_800302C8_B6C8(rdram, ctx);
        goto after_10;
    // 0x8005E2E8: addiu       $a0, $a0, 0xA8
    ctx->r4 = ADD32(ctx->r4, 0XA8);
    after_10:
    // 0x8005E2EC: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x8005E2F0: addiu       $a0, $a0, 0x5448
    ctx->r4 = ADD32(ctx->r4, 0X5448);
    // 0x8005E2F4: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8005E2F8: jal         0x8005F2CC
    // 0x8005E2FC: sw          $s0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r16;
    func_8005F2CC_3A6CC(rdram, ctx);
        goto after_11;
    // 0x8005E2FC: sw          $s0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r16;
    after_11:
    // 0x8005E300: jal         0x8004BFB0
    // 0x8005E304: nop

    func_8004BFB0_273B0(rdram, ctx);
        goto after_12;
    // 0x8005E304: nop

    after_12:
    // 0x8005E308: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8005E30C: addiu       $a0, $a0, -0x13A8
    ctx->r4 = ADD32(ctx->r4, -0X13A8);
    // 0x8005E310: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8005E314: jal         0x80033358
    // 0x8005E318: addiu       $a1, $a1, -0x1398
    ctx->r5 = ADD32(ctx->r5, -0X1398);
    func_80033358_E758(rdram, ctx);
        goto after_13;
    // 0x8005E318: addiu       $a1, $a1, -0x1398
    ctx->r5 = ADD32(ctx->r5, -0X1398);
    after_13:
    // 0x8005E31C: jal         0x8003A7CC
    // 0x8005E320: nop

    func_8003A7CC_15BCC(rdram, ctx);
        goto after_14;
    // 0x8005E320: nop

    after_14:
    // 0x8005E324: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8005E328: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x8005E32C: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x8005E330: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8005E334: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8005E338: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8005E33C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8005E340: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8005E344: jr          $ra
    // 0x8005E348: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8005E348: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void alClose(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80098BFC: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80098C00: lw          $v0, -0xAD0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XAD0);
    // 0x80098C04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80098C08: beq         $v0, $zero, L_80098C20
    if (ctx->r2 == 0) {
        // 0x80098C0C: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_80098C20;
    }
    // 0x80098C0C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80098C10: jal         0x80099390
    // 0x80098C14: nop

    alSynDelete(rdram, ctx);
        goto after_0;
    // 0x80098C14: nop

    after_0:
    // 0x80098C18: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80098C1C: sw          $zero, -0xAD0($at)
    MEM_W(-0XAD0, ctx->r1) = 0;
L_80098C20:
    // 0x80098C20: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80098C24: jr          $ra
    // 0x80098C28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80098C28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80092ED0_6E2D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80092ED0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80092ED4: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x80092ED8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80092EDC: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x80092EE0: addiu       $s0, $sp, 0x20
    ctx->r16 = ADD32(ctx->r29, 0X20);
    // 0x80092EE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80092EE8: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x80092EEC: sw          $ra, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r31;
    // 0x80092EF0: jal         0x8009A470
    // 0x80092EF4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x80092EF4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x80092EF8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80092EFC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80092F00: jal         0x800922D0
    // 0x80092F04: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800922D0_6D6D0(rdram, ctx);
        goto after_1;
    // 0x80092F04: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x80092F08: beq         $s1, $zero, L_80092F28
    if (ctx->r17 == 0) {
        // 0x80092F0C: addiu       $a0, $sp, 0x20
        ctx->r4 = ADD32(ctx->r29, 0X20);
            goto L_80092F28;
    }
    // 0x80092F0C: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
L_80092F10:
    // 0x80092F10: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80092F14: jal         0x8009A5E0
    // 0x80092F18: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x80092F18: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x80092F1C: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x80092F20: bne         $s1, $zero, L_80092F10
    if (ctx->r17 != 0) {
        // 0x80092F24: addiu       $a0, $sp, 0x20
        ctx->r4 = ADD32(ctx->r29, 0X20);
            goto L_80092F10;
    }
    // 0x80092F24: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
L_80092F28:
    // 0x80092F28: jal         0x800923A0
    // 0x80092F2C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_800923A0_6D7A0(rdram, ctx);
        goto after_3;
    // 0x80092F2C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_3:
    // 0x80092F30: lw          $ra, 0x48($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X48);
    // 0x80092F34: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x80092F38: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x80092F3C: jr          $ra
    // 0x80092F40: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x80092F40: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x80092F44: nop

    // 0x80092F48: nop

    // 0x80092F4C: nop

;}
RECOMP_FUNC void func_80093060_6E460(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80093060: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80093064: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80093068: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8009306C: sw          $zero, -0x3E88($at)
    MEM_W(-0X3E88, ctx->r1) = 0;
    // 0x80093070: jal         0x8009CBE0
    // 0x80093074: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osViBlack_recomp(rdram, ctx);
        goto after_0;
    // 0x80093074: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x80093078: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8009307C: jr          $ra
    // 0x80093080: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80093080: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80093084: nop

    // 0x80093088: nop

    // 0x8009308C: nop

;}
RECOMP_FUNC void func_80063BD0_3EFD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80063BD0: lhu         $v0, 0x8($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8);
    // 0x80063BD4: lw          $v1, 0x14($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X14);
    // 0x80063BD8: lbu         $a1, 0x70($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X70);
    // 0x80063BDC: sh          $v0, 0x10($a0)
    MEM_H(0X10, ctx->r4) = ctx->r2;
    // 0x80063BE0: lbu         $a2, 0x1($v1)
    ctx->r6 = MEM_BU(ctx->r3, 0X1);
    // 0x80063BE4: lhu         $v1, 0x12($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X12);
    // 0x80063BE8: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x80063BEC: sb          $a1, 0x3E($a0)
    MEM_B(0X3E, ctx->r4) = ctx->r5;
    // 0x80063BF0: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80063BF4: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x80063BF8: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x80063BFC: jr          $ra
    // 0x80063C00: sh          $v1, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x80063C00: sh          $v1, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r3;
;}
RECOMP_FUNC void func_80092AE4_6DEE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80092AE4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80092AE8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80092AEC: lui         $at, 0x8019
    ctx->r1 = S32(0X8019 << 16);
    // 0x80092AF0: sh          $v0, -0x2DCC($at)
    MEM_H(-0X2DCC, ctx->r1) = ctx->r2;
    // 0x80092AF4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80092AF8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80092AFC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80092B00: lui         $at, 0x8019
    ctx->r1 = S32(0X8019 << 16);
    // 0x80092B04: sh          $v0, -0x2DCA($at)
    MEM_H(-0X2DCA, ctx->r1) = ctx->r2;
    // 0x80092B08: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80092B0C: jal         0x80093060
    // 0x80092B10: sw          $zero, -0x450($at)
    MEM_W(-0X450, ctx->r1) = 0;
    func_80093060_6E460(rdram, ctx);
        goto after_0;
    // 0x80092B10: sw          $zero, -0x450($at)
    MEM_W(-0X450, ctx->r1) = 0;
    after_0:
    // 0x80092B14: lui         $s0, 0x8019
    ctx->r16 = S32(0X8019 << 16);
    // 0x80092B18: addiu       $s0, $s0, -0x2DC8
    ctx->r16 = ADD32(ctx->r16, -0X2DC8);
    // 0x80092B1C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80092B20: lui         $v0, 0x8019
    ctx->r2 = S32(0X8019 << 16);
    // 0x80092B24: addiu       $v0, $v0, -0xC10
    ctx->r2 = ADD32(ctx->r2, -0XC10);
    // 0x80092B28: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80092B2C: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80092B30: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80092B34: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x80092B38: addiu       $a2, $a2, 0x29D0
    ctx->r6 = ADD32(ctx->r6, 0X29D0);
    // 0x80092B3C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80092B40: jal         0x8009B750
    // 0x80092B44: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    osCreateThread_recomp(rdram, ctx);
        goto after_1;
    // 0x80092B44: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_1:
    // 0x80092B48: jal         0x8009B9F0
    // 0x80092B4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    osStartThread_recomp(rdram, ctx);
        goto after_2;
    // 0x80092B4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80092B50: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80092B54: lui         $t7, 0x8022
    ctx->r15 = S32(0X8022 << 16);
    // 0x80092B58: addiu       $t7, $t7, -0x26D0
    ctx->r15 = ADD32(ctx->r15, -0X26D0);
    // 0x80092B5C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80092B60: lui         $a2, 0x800A
    ctx->r6 = S32(0X800A << 16);
    // 0x80092B64: addiu       $a2, $a2, 0x3A40
    ctx->r6 = ADD32(ctx->r6, 0X3A40);
    // 0x80092B68: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80092B6C: addiu       $v0, $v0, 0x3B10
    ctx->r2 = ADD32(ctx->r2, 0X3B10);
    // 0x80092B70: subu        $a3, $v0, $a2
    ctx->r7 = SUB32(ctx->r2, ctx->r6);
    // 0x80092B74: addiu       $t5, $zero, 0x1000
    ctx->r13 = ADD32(0, 0X1000);
    // 0x80092B78: addiu       $t4, $zero, 0x800
    ctx->r12 = ADD32(0, 0X800);
    // 0x80092B7C: lui         $t3, 0x8021
    ctx->r11 = S32(0X8021 << 16);
    // 0x80092B80: addiu       $t3, $t3, 0x4CB0
    ctx->r11 = ADD32(ctx->r11, 0X4CB0);
    // 0x80092B84: addiu       $t2, $zero, 0x400
    ctx->r10 = ADD32(0, 0X400);
    // 0x80092B88: lui         $t1, 0x801E
    ctx->r9 = S32(0X801E << 16);
    // 0x80092B8C: addiu       $t1, $t1, -0x2100
    ctx->r9 = ADD32(ctx->r9, -0X2100);
    // 0x80092B90: addiu       $t0, $zero, 0xC10
    ctx->r8 = ADD32(0, 0XC10);
    // 0x80092B94: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80092B98: addiu       $a0, $a0, -0x2420
    ctx->r4 = ADD32(ctx->r4, -0X2420);
    // 0x80092B9C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_80092BA0:
    // 0x80092BA0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80092BA4: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80092BA8: sw          $a0, -0x2478($at)
    MEM_W(-0X2478, ctx->r1) = ctx->r4;
    // 0x80092BAC: addiu       $a0, $a0, 0x58
    ctx->r4 = ADD32(ctx->r4, 0X58);
    // 0x80092BB0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80092BB4: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80092BB8: sw          $t7, -0x2428($at)
    MEM_W(-0X2428, ctx->r1) = ctx->r15;
    // 0x80092BBC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80092BC0: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80092BC4: sw          $t6, -0x2468($at)
    MEM_W(-0X2468, ctx->r1) = ctx->r14;
    // 0x80092BC8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80092BCC: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80092BD0: sw          $zero, -0x2464($at)
    MEM_W(-0X2464, ctx->r1) = 0;
    // 0x80092BD4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80092BD8: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80092BDC: sw          $a2, -0x2460($at)
    MEM_W(-0X2460, ctx->r1) = ctx->r6;
    // 0x80092BE0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80092BE4: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80092BE8: sw          $a3, -0x245C($at)
    MEM_W(-0X245C, ctx->r1) = ctx->r7;
    // 0x80092BEC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80092BF0: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80092BF4: sw          $t5, -0x2454($at)
    MEM_W(-0X2454, ctx->r1) = ctx->r13;
    // 0x80092BF8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80092BFC: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80092C00: sw          $t4, -0x244C($at)
    MEM_W(-0X244C, ctx->r1) = ctx->r12;
    // 0x80092C04: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80092C08: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80092C0C: sw          $t3, -0x2448($at)
    MEM_W(-0X2448, ctx->r1) = ctx->r11;
    // 0x80092C10: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80092C14: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80092C18: sw          $t2, -0x2444($at)
    MEM_W(-0X2444, ctx->r1) = ctx->r10;
    // 0x80092C1C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80092C20: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80092C24: sw          $t1, -0x2430($at)
    MEM_W(-0X2430, ctx->r1) = ctx->r9;
    // 0x80092C28: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80092C2C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80092C30: sw          $t0, -0x242C($at)
    MEM_W(-0X242C, ctx->r1) = ctx->r8;
    // 0x80092C34: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80092C38: sltiu       $v0, $a1, 0xA
    ctx->r2 = ctx->r5 < 0XA ? 1 : 0;
    // 0x80092C3C: bne         $v0, $zero, L_80092BA0
    if (ctx->r2 != 0) {
        // 0x80092C40: addiu       $v1, $v1, 0x58
        ctx->r3 = ADD32(ctx->r3, 0X58);
            goto L_80092BA0;
    }
    // 0x80092C40: addiu       $v1, $v1, 0x58
    ctx->r3 = ADD32(ctx->r3, 0X58);
    // 0x80092C44: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80092C48: addiu       $v0, $v0, -0x2160
    ctx->r2 = ADD32(ctx->r2, -0X2160);
    // 0x80092C4C: addiu       $v1, $v0, -0x318
    ctx->r3 = ADD32(ctx->r2, -0X318);
    // 0x80092C50: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x80092C54: lui         $at, 0x8019
    ctx->r1 = S32(0X8019 << 16);
    // 0x80092C58: sw          $v1, -0x2DD0($at)
    MEM_W(-0X2DD0, ctx->r1) = ctx->r3;
    // 0x80092C5C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80092C60: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80092C64: jr          $ra
    // 0x80092C68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80092C68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80028BF0_3FF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80028BF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80028BF4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80028BF8: jal         0x80093100
    // 0x80028BFC: nop

    func_80093100_6E500(rdram, ctx);
        goto after_0;
    // 0x80028BFC: nop

    after_0:
    // 0x80028C00: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80028C04: sb          $v0, -0x26AA($at)
    MEM_B(-0X26AA, ctx->r1) = ctx->r2;
    // 0x80028C08: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80028C0C: jr          $ra
    // 0x80028C10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80028C10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800875E8_629E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    mm64_on_game_save(rdram, ctx);
    // 0x800875E8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800875EC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800875F0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x800875F4: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x800875F8: addu        $s6, $a1, $zero
    ctx->r22 = ADD32(ctx->r5, 0);
    // 0x800875FC: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80087600: addu        $s7, $a2, $zero
    ctx->r23 = ADD32(ctx->r6, 0);
    // 0x80087604: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x80087608: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8008760C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80087610: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80087614: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80087618: jal         0x80092EB0
    // 0x8008761C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    func_80092EB0_6E2B0(rdram, ctx);
        goto after_0;
    // 0x8008761C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    after_0:
    // 0x80087620: jal         0x80025E1C
    // 0x80087624: addiu       $a0, $zero, 0x4000
    ctx->r4 = ADD32(0, 0X4000);
    func_80025E1C_121C(rdram, ctx);
        goto after_1;
    // 0x80087624: addiu       $a0, $zero, 0x4000
    ctx->r4 = ADD32(0, 0X4000);
    after_1:
    // 0x80087628: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x8008762C: beq         $s3, $zero, L_800877E8
    if (ctx->r19 == 0) {
        // 0x80087630: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_800877E8;
    }
    // 0x80087630: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80087634: jal         0x80087570
    // 0x80087638: nop

    Graph_ThreadStop(rdram, ctx);
        goto after_2;
    // 0x80087638: nop

    after_2:
    // 0x8008763C: lui         $s1, 0x8018
    ctx->r17 = S32(0X8018 << 16);
    // 0x80087640: addiu       $s1, $s1, -0x29D8
    ctx->r17 = ADD32(ctx->r17, -0X29D8);
    // 0x80087644: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80087648: lui         $a1, 0x8018
    ctx->r5 = S32(0X8018 << 16);
    // 0x8008764C: addiu       $a1, $a1, -0x29C0
    ctx->r5 = ADD32(ctx->r5, -0X29C0);
    // 0x80087650: jal         0x8009A470
    // 0x80087654: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_3;
    // 0x80087654: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x80087658: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8008765C: lbu         $a2, 0x5($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X5);
    // 0x80087660: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x80087664: addiu       $a1, $zero, 0x4000
    ctx->r5 = ADD32(0, 0X4000);
    // 0x80087668: addiu       $a2, $a2, -0x30
    ctx->r6 = ADD32(ctx->r6, -0X30);
    // 0x8008766C: addiu       $v1, $v1, -0x30
    ctx->r3 = ADD32(ctx->r3, -0X30);
    // 0x80087670: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80087674: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80087678: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8008767C: addu        $s2, $a2, $v0
    ctx->r18 = ADD32(ctx->r6, ctx->r2);
    // 0x80087680: sra         $s5, $s2, 31
    ctx->r21 = S32(SIGNED(ctx->r18) >> 31);
    // 0x80087684: subu        $s0, $s2, $s5
    ctx->r16 = SUB32(ctx->r18, ctx->r21);
    // 0x80087688: jal         0x80099440
    // 0x8008768C: sra         $s0, $s0, 1
    ctx->r16 = S32(SIGNED(ctx->r16) >> 1);
    osInvalDCache_recomp(rdram, ctx);
        goto after_4;
    // 0x8008768C: sra         $s0, $s0, 1
    ctx->r16 = S32(SIGNED(ctx->r16) >> 1);
    after_4:
    // 0x80087690: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x80087694: addiu       $a0, $a0, -0x29F0
    ctx->r4 = ADD32(ctx->r4, -0X29F0);
    // 0x80087698: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8008769C: sll         $s4, $s0, 7
    ctx->r20 = S32(ctx->r16 << 7);
    // 0x800876A0: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    // 0x800876A4: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    // 0x800876A8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x800876AC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x800876B0: jal         0x80095690
    // 0x800876B4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    osFlashReadArray_recomp(rdram, ctx);
        goto after_5;
    // 0x800876B4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_5:
    // 0x800876B8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x800876BC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x800876C0: jal         0x8009A5E0
    // 0x800876C4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_6;
    // 0x800876C4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x800876C8: jal         0x80095350
    // 0x800876CC: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    osFlashSectorErase_recomp(rdram, ctx);
        goto after_7;
    // 0x800876CC: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_7:
    // 0x800876D0: addu        $a0, $s6, $zero
    ctx->r4 = ADD32(ctx->r22, 0);
    // 0x800876D4: sll         $s0, $s0, 1
    ctx->r16 = S32(ctx->r16 << 1);
    // 0x800876D8: subu        $s0, $s2, $s0
    ctx->r16 = SUB32(ctx->r18, ctx->r16);
    // 0x800876DC: sll         $s0, $s0, 13
    ctx->r16 = S32(ctx->r16 << 13);
    // 0x800876E0: addu        $a1, $s3, $s0
    ctx->r5 = ADD32(ctx->r19, ctx->r16);
    // 0x800876E4: jal         0x80099F90
    // 0x800876E8: addu        $a2, $s7, $zero
    ctx->r6 = ADD32(ctx->r23, 0);
    bcopy_recomp(rdram, ctx);
        goto after_8;
    // 0x800876E8: addu        $a2, $s7, $zero
    ctx->r6 = ADD32(ctx->r23, 0);
    after_8:
    // 0x800876EC: slti        $v0, $s2, 0xA
    ctx->r2 = SIGNED(ctx->r18) < 0XA ? 1 : 0;
    // 0x800876F0: beq         $v0, $zero, L_80087708
    if (ctx->r2 == 0) {
        // 0x800876F4: addiu       $v0, $s2, 0x30
        ctx->r2 = ADD32(ctx->r18, 0X30);
            goto L_80087708;
    }
    // 0x800876F4: addiu       $v0, $s2, 0x30
    ctx->r2 = ADD32(ctx->r18, 0X30);
    // 0x800876F8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800876FC: sb          $v0, -0x1600($at)
    MEM_B(-0X1600, ctx->r1) = ctx->r2;
    // 0x80087700: j           L_80087740
    // 0x80087704: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
        goto L_80087740;
    // 0x80087704: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
L_80087708:
    // 0x80087708: lui         $v0, 0x6666
    ctx->r2 = S32(0X6666 << 16);
    // 0x8008770C: ori         $v0, $v0, 0x6667
    ctx->r2 = ctx->r2 | 0X6667;
    // 0x80087710: mult        $s2, $v0
    result = S64(S32(ctx->r18)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80087714: mfhi        $t0
    ctx->r8 = hi;
    // 0x80087718: sra         $v1, $t0, 2
    ctx->r3 = S32(SIGNED(ctx->r8) >> 2);
    // 0x8008771C: subu        $v1, $v1, $s5
    ctx->r3 = SUB32(ctx->r3, ctx->r21);
    // 0x80087720: addiu       $v0, $v1, 0x30
    ctx->r2 = ADD32(ctx->r3, 0X30);
    // 0x80087724: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80087728: sb          $v0, -0x1600($at)
    MEM_B(-0X1600, ctx->r1) = ctx->r2;
    // 0x8008772C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80087730: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80087734: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80087738: subu        $v0, $s2, $v0
    ctx->r2 = SUB32(ctx->r18, ctx->r2);
    // 0x8008773C: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
L_80087740:
    // 0x80087740: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80087744: sb          $v0, -0x15FF($at)
    MEM_B(-0X15FF, ctx->r1) = ctx->r2;
    // 0x80087748: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8008774C: addiu       $a0, $a0, -0x1600
    ctx->r4 = ADD32(ctx->r4, -0X1600);
    // 0x80087750: srl         $a1, $s2, 31
    ctx->r5 = S32(U32(ctx->r18) >> 31);
    // 0x80087754: addu        $a1, $s2, $a1
    ctx->r5 = ADD32(ctx->r18, ctx->r5);
    // 0x80087758: sra         $a1, $a1, 1
    ctx->r5 = S32(SIGNED(ctx->r5) >> 1);
    // 0x8008775C: sll         $a1, $a1, 1
    ctx->r5 = S32(ctx->r5 << 1);
    // 0x80087760: subu        $a1, $s2, $a1
    ctx->r5 = SUB32(ctx->r18, ctx->r5);
    // 0x80087764: sll         $a1, $a1, 13
    ctx->r5 = S32(ctx->r5 << 13);
    // 0x80087768: addu        $a1, $s3, $a1
    ctx->r5 = ADD32(ctx->r19, ctx->r5);
    // 0x8008776C: addiu       $a1, $a1, 0x1900
    ctx->r5 = ADD32(ctx->r5, 0X1900);
    // 0x80087770: jal         0x80099F90
    // 0x80087774: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    bcopy_recomp(rdram, ctx);
        goto after_9;
    // 0x80087774: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_9:
    // 0x80087778: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8008777C: jal         0x80099570
    // 0x80087780: addiu       $a1, $zero, 0x4000
    ctx->r5 = ADD32(0, 0X4000);
    osWritebackDCache_recomp(rdram, ctx);
        goto after_10;
    // 0x80087780: addiu       $a1, $zero, 0x4000
    ctx->r5 = ADD32(0, 0X4000);
    after_10:
    // 0x80087784: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80087788: lui         $s2, 0x8018
    ctx->r18 = S32(0X8018 << 16);
    // 0x8008778C: addiu       $s2, $s2, -0x29D8
    ctx->r18 = ADD32(ctx->r18, -0X29D8);
    // 0x80087790: addu        $s1, $s3, $zero
    ctx->r17 = ADD32(ctx->r19, 0);
L_80087794:
    // 0x80087794: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x80087798: addiu       $a0, $a0, -0x29F0
    ctx->r4 = ADD32(ctx->r4, -0X29F0);
    // 0x8008779C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x800877A0: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x800877A4: jal         0x800954A0
    // 0x800877A8: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    osFlashWriteBuffer_recomp(rdram, ctx);
        goto after_11;
    // 0x800877A8: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    after_11:
    // 0x800877AC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x800877B0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x800877B4: jal         0x8009A5E0
    // 0x800877B8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_12;
    // 0x800877B8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_12:
    // 0x800877BC: jal         0x80095540
    // 0x800877C0: addu        $a0, $s4, $s0
    ctx->r4 = ADD32(ctx->r20, ctx->r16);
    osFlashWriteArray_recomp(rdram, ctx);
        goto after_13;
    // 0x800877C0: addu        $a0, $s4, $s0
    ctx->r4 = ADD32(ctx->r20, ctx->r16);
    after_13:
    // 0x800877C4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800877C8: slti        $v0, $s0, 0x80
    ctx->r2 = SIGNED(ctx->r16) < 0X80 ? 1 : 0;
    // 0x800877CC: bne         $v0, $zero, L_80087794
    if (ctx->r2 != 0) {
        // 0x800877D0: addiu       $s1, $s1, 0x80
        ctx->r17 = ADD32(ctx->r17, 0X80);
            goto L_80087794;
    }
    // 0x800877D0: addiu       $s1, $s1, 0x80
    ctx->r17 = ADD32(ctx->r17, 0X80);
    // 0x800877D4: jal         0x80087590
    // 0x800877D8: nop

    func_80087590_62990(rdram, ctx);
        goto after_14;
    // 0x800877D8: nop

    after_14:
    // 0x800877DC: jal         0x80025FF8
    // 0x800877E0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_80025FF8_13F8(rdram, ctx);
        goto after_15;
    // 0x800877E0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_15:
    // 0x800877E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800877E8:
    // 0x800877E8: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x800877EC: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x800877F0: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x800877F4: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x800877F8: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800877FC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80087800: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80087804: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80087808: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8008780C: jr          $ra
    // 0x80087810: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80087810: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8005310C_2E50C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8005310C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80053110: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80053114: lui         $s0, 0x801D
    ctx->r16 = S32(0X801D << 16);
    // 0x80053118: addiu       $s0, $s0, 0x4760
    ctx->r16 = ADD32(ctx->r16, 0X4760);
    // 0x8005311C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80053120: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x80053124: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80053128: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8005312C: jal         0x80031E5C
    // 0x80053130: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    func_80031E5C_D25C(rdram, ctx);
        goto after_0;
    // 0x80053130: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    after_0:
    // 0x80053134: jal         0x80031E94
    // 0x80053138: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80031E94_D294(rdram, ctx);
        goto after_1;
    // 0x80053138: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8005313C: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80053140: lw          $v1, -0x41B0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X41B0);
    // 0x80053144: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
    // 0x80053148: and         $s1, $v1, $v0
    ctx->r17 = ctx->r3 & ctx->r2;
    // 0x8005314C: beq         $s1, $zero, L_800531FC
    if (ctx->r17 == 0) {
        // 0x80053150: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_800531FC;
    }
    // 0x80053150: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x80053154: lui         $s3, 0x7FFF
    ctx->r19 = S32(0X7FFF << 16);
    // 0x80053158: ori         $s3, $s3, 0xFFFF
    ctx->r19 = ctx->r19 | 0XFFFF;
    // 0x8005315C: lui         $s0, 0x801E
    ctx->r16 = S32(0X801E << 16);
    // 0x80053160: addiu       $s0, $s0, -0x21A0
    ctx->r16 = ADD32(ctx->r16, -0X21A0);
L_80053164:
    // 0x80053164: sltu        $v0, $s3, $s1
    ctx->r2 = ctx->r19 < ctx->r17 ? 1 : 0;
    // 0x80053168: beql        $v0, $zero, L_800531EC
    if (ctx->r2 == 0) {
        // 0x8005316C: sll         $s1, $s1, 1
        ctx->r17 = S32(ctx->r17 << 1);
            goto L_800531EC;
    }
    goto skip_0;
    // 0x8005316C: sll         $s1, $s1, 1
    ctx->r17 = S32(ctx->r17 << 1);
    skip_0:
    // 0x80053170: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x80053174: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80053178: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x8005317C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80053180: jal         0x8009A3B4
    // 0x80053184: addiu       $a1, $a1, 0xC0
    ctx->r5 = ADD32(ctx->r5, 0XC0);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80053184: addiu       $a1, $a1, 0xC0
    ctx->r5 = ADD32(ctx->r5, 0XC0);
    after_2:
    // 0x80053188: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8005318C: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x80053190: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80053194: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x80053198: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x8005319C: addiu       $a2, $a2, -0x236C
    ctx->r6 = ADD32(ctx->r6, -0X236C);
    // 0x800531A0: lui         $a3, 0x801E
    ctx->r7 = S32(0X801E << 16);
    // 0x800531A4: jal         0x80031F0C
    // 0x800531A8: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    func_80031F0C_D30C(rdram, ctx);
        goto after_3;
    // 0x800531A8: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    after_3:
    // 0x800531AC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800531B0: sw          $zero, 0xC0($v0)
    MEM_W(0XC0, ctx->r2) = 0;
    // 0x800531B4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800531B8: sw          $zero, 0xC4($v0)
    MEM_W(0XC4, ctx->r2) = 0;
    // 0x800531BC: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x800531C0: lw          $v0, -0x3F50($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3F50);
    // 0x800531C4: bltzl       $v0, L_800531CC
    if (SIGNED(ctx->r2) < 0) {
        // 0x800531C8: addiu       $v0, $v0, 0x3
        ctx->r2 = ADD32(ctx->r2, 0X3);
            goto L_800531CC;
    }
    goto skip_1;
    // 0x800531C8: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    skip_1:
L_800531CC:
    // 0x800531CC: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
    // 0x800531D0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x800531D4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x800531D8: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x800531DC: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x800531E0: jal         0x8009A3B4
    // 0x800531E4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x800531E4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_4:
    // 0x800531E8: sll         $s1, $s1, 1
    ctx->r17 = S32(ctx->r17 << 1);
L_800531EC:
    // 0x800531EC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x800531F0: slti        $v0, $s2, 0x18
    ctx->r2 = SIGNED(ctx->r18) < 0X18 ? 1 : 0;
    // 0x800531F4: bne         $v0, $zero, L_80053164
    if (ctx->r2 != 0) {
        // 0x800531F8: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_80053164;
    }
    // 0x800531F8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_800531FC:
    // 0x800531FC: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80053200: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80053204: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80053208: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8005320C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80053210: jr          $ra
    // 0x80053214: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80053214: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void alSaveParam(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80098BA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80098BAC: beq         $a1, $v0, L_80098BC4
    if (ctx->r5 == ctx->r2) {
        // 0x80098BB0: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80098BC4;
    }
    // 0x80098BB0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80098BB4: beql        $a1, $v0, L_80098BC8
    if (ctx->r5 == ctx->r2) {
        // 0x80098BB8: sw          $a2, 0x14($a0)
        MEM_W(0X14, ctx->r4) = ctx->r6;
            goto L_80098BC8;
    }
    goto skip_0;
    // 0x80098BB8: sw          $a2, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r6;
    skip_0:
    // 0x80098BBC: j           L_80098BC8
    // 0x80098BC0: nop

        goto L_80098BC8;
    // 0x80098BC0: nop

L_80098BC4:
    // 0x80098BC4: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
L_80098BC8:
    // 0x80098BC8: jr          $ra
    // 0x80098BCC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    TRACE_RETURN()
    return;
    // 0x80098BCC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_8005F420_3A820(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8005F420: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8005F424: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8005F428: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8005F42C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8005F430: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8005F434: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8005F438: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8005F43C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8005F440: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8005F444: jal         0x8004D5D4
    // 0x8005F448: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8005F448: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8005F44C: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x8005F450: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x8005F454: ori         $v0, $v0, 0x400
    ctx->r2 = ctx->r2 | 0X400;
    // 0x8005F458: sw          $v0, 0x158($s0)
    MEM_W(0X158, ctx->r16) = ctx->r2;
    // 0x8005F45C: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8005F460: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8005F464: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8005F468: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8005F46C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8005F470: addiu       $v0, $v0, -0x12D0
    ctx->r2 = ADD32(ctx->r2, -0X12D0);
    // 0x8005F474: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x8005F478: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8005F47C: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8005F480: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8005F484: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x8005F488: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x8005F48C: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x8005F490: sw          $zero, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = 0;
    // 0x8005F494: sw          $zero, 0x50($s0)
    MEM_W(0X50, ctx->r16) = 0;
    // 0x8005F498: sw          $zero, 0x54($s0)
    MEM_W(0X54, ctx->r16) = 0;
    // 0x8005F49C: sw          $zero, 0x58($s0)
    MEM_W(0X58, ctx->r16) = 0;
    // 0x8005F4A0: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x8005F4A4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8005F4A8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8005F4AC: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8005F4B0: lw          $v1, 0x4B0($at)
    ctx->r3 = MEM_W(ctx->r1, 0X4B0);
    // 0x8005F4B4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8005F4B8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005F4BC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8005F4C0: bne         $v0, $zero, L_8005F4D4
    if (ctx->r2 != 0) {
        // 0x8005F4C4: sw          $v0, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->r2;
            goto L_8005F4D4;
    }
    // 0x8005F4C4: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x8005F4C8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8005F4CC: j           L_8005F514
    // 0x8005F4D0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8005F514;
    // 0x8005F4D0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8005F4D4:
    // 0x8005F4D4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8005F4D8: sh          $zero, 0x4($s1)
    MEM_H(0X4, ctx->r17) = 0;
    // 0x8005F4DC: sh          $zero, 0x6($s1)
    MEM_H(0X6, ctx->r17) = 0;
    // 0x8005F4E0: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    // 0x8005F4E4: sb          $zero, 0x12($s1)
    MEM_B(0X12, ctx->r17) = 0;
    // 0x8005F4E8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8005F4EC: sb          $v0, 0x13($s1)
    MEM_B(0X13, ctx->r17) = ctx->r2;
    // 0x8005F4F0: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
    // 0x8005F4F4: sh          $zero, 0xC($s1)
    MEM_H(0XC, ctx->r17) = 0;
    // 0x8005F4F8: sh          $zero, 0xE($s1)
    MEM_H(0XE, ctx->r17) = 0;
    // 0x8005F4FC: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8005F500: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8005F504: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8005F508: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8005F50C: jal         0x8005F01C
    // 0x8005F510: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    func_8005F01C_3A41C(rdram, ctx);
        goto after_1;
    // 0x8005F510: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    after_1:
L_8005F514:
    // 0x8005F514: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8005F518: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8005F51C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8005F520: jr          $ra
    // 0x8005F524: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8005F524: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8004DA68_28E68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004DA68: sltiu       $v0, $a0, 0x20
    ctx->r2 = ctx->r4 < 0X20 ? 1 : 0;
    // 0x8004DA6C: beql        $v0, $zero, L_8004DA7C
    if (ctx->r2 == 0) {
        // 0x8004DA70: andi        $a0, $a0, 0xE0
        ctx->r4 = ctx->r4 & 0XE0;
            goto L_8004DA7C;
    }
    goto skip_0;
    // 0x8004DA70: andi        $a0, $a0, 0xE0
    ctx->r4 = ctx->r4 & 0XE0;
    skip_0:
    // 0x8004DA74: j           L_8004DA88
    // 0x8004DA78: andi        $a0, $a0, 0x10
    ctx->r4 = ctx->r4 & 0X10;
        goto L_8004DA88;
    // 0x8004DA78: andi        $a0, $a0, 0x10
    ctx->r4 = ctx->r4 & 0X10;
L_8004DA7C:
    // 0x8004DA7C: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x8004DA80: beql        $a0, $v0, L_8004DA88
    if (ctx->r4 == ctx->r2) {
        // 0x8004DA84: addiu       $a0, $zero, 0x80
        ctx->r4 = ADD32(0, 0X80);
            goto L_8004DA88;
    }
    goto skip_1;
    // 0x8004DA84: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    skip_1:
L_8004DA88:
    // 0x8004DA88: jr          $ra
    // 0x8004DA8C: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    TRACE_RETURN()
    return;
    // 0x8004DA8C: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
;}
RECOMP_FUNC void func_80088DD0_641D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80088DD0: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x80088DD4: lw          $v1, -0x15DC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X15DC);
    // 0x80088DD8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80088DDC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80088DE0: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80088DE4: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80088DE8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80088DEC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80088DF0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80088DF4: lw          $v0, 0x40($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X40);
    // 0x80088DF8: lui         $a0, 0x8019
    ctx->r4 = S32(0X8019 << 16);
    // 0x80088DFC: lw          $a0, 0x3C30($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3C30);
    // 0x80088E00: addiu       $s3, $v1, 0x10
    ctx->r19 = ADD32(ctx->r3, 0X10);
    // 0x80088E04: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80088E08: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80088E0C: addiu       $v1, $v1, 0x46B8
    ctx->r3 = ADD32(ctx->r3, 0X46B8);
    // 0x80088E10: addu        $s1, $v0, $v1
    ctx->r17 = ADD32(ctx->r2, ctx->r3);
    // 0x80088E14: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x80088E18: beq         $a0, $v1, L_80088F18
    if (ctx->r4 == ctx->r3) {
        // 0x80088E1C: lui         $v0, 0xDE00
        ctx->r2 = S32(0XDE00 << 16);
            goto L_80088F18;
    }
    // 0x80088E1C: lui         $v0, 0xDE00
    ctx->r2 = S32(0XDE00 << 16);
    // 0x80088E20: lui         $s0, 0x801B
    ctx->r16 = S32(0X801B << 16);
    // 0x80088E24: lw          $s0, -0x6F10($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X6F10);
    // 0x80088E28: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80088E2C: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80088E30: addiu       $v0, $v0, -0x15D0
    ctx->r2 = ADD32(ctx->r2, -0X15D0);
    // 0x80088E34: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x80088E38: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x80088E3C: lui         $at, 0x8019
    ctx->r1 = S32(0X8019 << 16);
    // 0x80088E40: sw          $v1, 0x3C30($at)
    MEM_W(0X3C30, ctx->r1) = ctx->r3;
    // 0x80088E44: addiu       $v0, $s0, 0x8
    ctx->r2 = ADD32(ctx->r16, 0X8);
    // 0x80088E48: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80088E4C: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80088E50: addiu       $v0, $s0, 0x10
    ctx->r2 = ADD32(ctx->r16, 0X10);
    // 0x80088E54: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80088E58: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80088E5C: lui         $v0, 0xFD10
    ctx->r2 = S32(0XFD10 << 16);
    // 0x80088E60: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x80088E64: andi        $a0, $a1, 0x3F
    ctx->r4 = ctx->r5 & 0X3F;
    // 0x80088E68: sll         $a0, $a0, 4
    ctx->r4 = S32(ctx->r4 << 4);
    // 0x80088E6C: sll         $a1, $a1, 10
    ctx->r5 = S32(ctx->r5 << 10);
    // 0x80088E70: jal         0x80087248
    // 0x80088E74: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    func_80087248_62648(rdram, ctx);
        goto after_0;
    // 0x80088E74: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    after_0:
    // 0x80088E78: lui         $a0, 0xF500
    ctx->r4 = S32(0XF500 << 16);
    // 0x80088E7C: ori         $a0, $a0, 0x100
    ctx->r4 = ctx->r4 | 0X100;
    // 0x80088E80: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80088E84: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x80088E88: lui         $a1, 0x703
    ctx->r5 = S32(0X703 << 16);
    // 0x80088E8C: ori         $a1, $a1, 0xC000
    ctx->r5 = ctx->r5 | 0XC000;
    // 0x80088E90: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x80088E94: lui         $v0, 0xE800
    ctx->r2 = S32(0XE800 << 16);
    // 0x80088E98: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80088E9C: lui         $v0, 0x700
    ctx->r2 = S32(0X700 << 16);
    // 0x80088EA0: sw          $v0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r2;
    // 0x80088EA4: lui         $v0, 0xE600
    ctx->r2 = S32(0XE600 << 16);
    // 0x80088EA8: sw          $v0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r2;
    // 0x80088EAC: lui         $v0, 0xF000
    ctx->r2 = S32(0XF000 << 16);
    // 0x80088EB0: sw          $v0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r2;
    // 0x80088EB4: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x80088EB8: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80088EBC: sw          $a0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r4;
    // 0x80088EC0: sw          $zero, 0x14($v1)
    MEM_W(0X14, ctx->r3) = 0;
    // 0x80088EC4: sw          $a1, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r5;
    // 0x80088EC8: sw          $v0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r2;
    // 0x80088ECC: sw          $zero, 0x24($v1)
    MEM_W(0X24, ctx->r3) = 0;
    // 0x80088ED0: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80088ED4: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x80088ED8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80088EDC: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80088EE0: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
    // 0x80088EE4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80088EE8: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80088EEC: addiu       $v0, $v1, 0x18
    ctx->r2 = ADD32(ctx->r3, 0X18);
    // 0x80088EF0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80088EF4: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80088EF8: addiu       $v0, $v1, 0x20
    ctx->r2 = ADD32(ctx->r3, 0X20);
    // 0x80088EFC: addiu       $v1, $v1, 0x28
    ctx->r3 = ADD32(ctx->r3, 0X28);
    // 0x80088F00: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80088F04: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80088F08: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80088F0C: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x80088F10: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80088F14: sw          $a0, 0xA50($at)
    MEM_W(0XA50, ctx->r1) = ctx->r4;
L_80088F18:
    // 0x80088F18: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80088F1C: lw          $v0, 0xA50($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XA50);
    // 0x80088F20: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x80088F24: beq         $v0, $a1, L_80088FF8
    if (ctx->r2 == ctx->r5) {
        // 0x80088F28: andi        $a0, $a1, 0x3F
        ctx->r4 = ctx->r5 & 0X3F;
            goto L_80088FF8;
    }
    // 0x80088F28: andi        $a0, $a1, 0x3F
    ctx->r4 = ctx->r5 & 0X3F;
    // 0x80088F2C: sll         $a0, $a0, 4
    ctx->r4 = S32(ctx->r4 << 4);
    // 0x80088F30: lui         $s0, 0x801B
    ctx->r16 = S32(0X801B << 16);
    // 0x80088F34: lw          $s0, -0x6F10($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X6F10);
    // 0x80088F38: sll         $a1, $a1, 10
    ctx->r5 = S32(ctx->r5 << 10);
    // 0x80088F3C: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80088F40: addiu       $v0, $s0, 0x8
    ctx->r2 = ADD32(ctx->r16, 0X8);
    // 0x80088F44: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80088F48: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80088F4C: lui         $v0, 0xFD10
    ctx->r2 = S32(0XFD10 << 16);
    // 0x80088F50: jal         0x80087248
    // 0x80088F54: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    func_80087248_62648(rdram, ctx);
        goto after_1;
    // 0x80088F54: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    after_1:
    // 0x80088F58: lui         $a0, 0xF500
    ctx->r4 = S32(0XF500 << 16);
    // 0x80088F5C: ori         $a0, $a0, 0x100
    ctx->r4 = ctx->r4 | 0X100;
    // 0x80088F60: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80088F64: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x80088F68: lui         $a1, 0x703
    ctx->r5 = S32(0X703 << 16);
    // 0x80088F6C: ori         $a1, $a1, 0xC000
    ctx->r5 = ctx->r5 | 0XC000;
    // 0x80088F70: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x80088F74: lui         $v0, 0xE800
    ctx->r2 = S32(0XE800 << 16);
    // 0x80088F78: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80088F7C: lui         $v0, 0x700
    ctx->r2 = S32(0X700 << 16);
    // 0x80088F80: sw          $v0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r2;
    // 0x80088F84: lui         $v0, 0xE600
    ctx->r2 = S32(0XE600 << 16);
    // 0x80088F88: sw          $v0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r2;
    // 0x80088F8C: lui         $v0, 0xF000
    ctx->r2 = S32(0XF000 << 16);
    // 0x80088F90: sw          $v0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r2;
    // 0x80088F94: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x80088F98: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80088F9C: sw          $a0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r4;
    // 0x80088FA0: sw          $zero, 0x14($v1)
    MEM_W(0X14, ctx->r3) = 0;
    // 0x80088FA4: sw          $a1, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r5;
    // 0x80088FA8: sw          $v0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r2;
    // 0x80088FAC: sw          $zero, 0x24($v1)
    MEM_W(0X24, ctx->r3) = 0;
    // 0x80088FB0: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80088FB4: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x80088FB8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80088FBC: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80088FC0: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
    // 0x80088FC4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80088FC8: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80088FCC: addiu       $v0, $v1, 0x18
    ctx->r2 = ADD32(ctx->r3, 0X18);
    // 0x80088FD0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80088FD4: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80088FD8: addiu       $v0, $v1, 0x20
    ctx->r2 = ADD32(ctx->r3, 0X20);
    // 0x80088FDC: addiu       $v1, $v1, 0x28
    ctx->r3 = ADD32(ctx->r3, 0X28);
    // 0x80088FE0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80088FE4: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80088FE8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80088FEC: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x80088FF0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80088FF4: sw          $a0, 0xA50($at)
    MEM_W(0XA50, ctx->r1) = ctx->r4;
L_80088FF8:
    // 0x80088FF8: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80088FFC: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x80089000: lui         $a0, 0xDA38
    ctx->r4 = S32(0XDA38 << 16);
    // 0x80089004: ori         $a0, $a0, 0x3
    ctx->r4 = ctx->r4 | 0X3;
    // 0x80089008: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x8008900C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80089010: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80089014: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    // 0x80089018: sw          $s2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r18;
    // 0x8008901C: lbu         $v0, 0x4($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4);
    // 0x80089020: lui         $a1, 0x708
    ctx->r5 = S32(0X708 << 16);
    // 0x80089024: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80089028: lw          $a0, -0x15DC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X15DC);
    // 0x8008902C: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80089030: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80089034: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x80089038: addu        $a3, $s3, $v0
    ctx->r7 = ADD32(ctx->r19, ctx->r2);
    // 0x8008903C: lw          $a2, 0x4($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X4);
    // 0x80089040: ori         $a1, $a1, 0x200
    ctx->r5 = ctx->r5 | 0X200;
    // 0x80089044: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x80089048: sw          $v0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r2;
    // 0x8008904C: lui         $v0, 0xFD50
    ctx->r2 = S32(0XFD50 << 16);
    // 0x80089050: sw          $v0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r2;
    // 0x80089054: lui         $v0, 0xF550
    ctx->r2 = S32(0XF550 << 16);
    // 0x80089058: sw          $v0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r2;
    // 0x8008905C: lui         $v0, 0xE600
    ctx->r2 = S32(0XE600 << 16);
    // 0x80089060: sw          $v0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r2;
    // 0x80089064: lui         $v0, 0xF300
    ctx->r2 = S32(0XF300 << 16);
    // 0x80089068: sw          $v0, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r2;
    // 0x8008906C: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
    // 0x80089070: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80089074: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80089078: addiu       $v0, $v1, 0x18
    ctx->r2 = ADD32(ctx->r3, 0X18);
    // 0x8008907C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80089080: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80089084: addiu       $v0, $v1, 0x20
    ctx->r2 = ADD32(ctx->r3, 0X20);
    // 0x80089088: sw          $zero, 0xC($v1)
    MEM_W(0XC, ctx->r3) = 0;
    // 0x8008908C: sw          $a1, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r5;
    // 0x80089090: sw          $zero, 0x24($v1)
    MEM_W(0X24, ctx->r3) = 0;
    // 0x80089094: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80089098: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8008909C: addu        $a0, $a0, $a2
    ctx->r4 = ADD32(ctx->r4, ctx->r6);
    // 0x800890A0: sw          $a0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r4;
    // 0x800890A4: lh          $a0, 0xC($a3)
    ctx->r4 = MEM_H(ctx->r7, 0XC);
    // 0x800890A8: addiu       $v0, $v1, 0x28
    ctx->r2 = ADD32(ctx->r3, 0X28);
    // 0x800890AC: addu        $t1, $v0, $zero
    ctx->r9 = ADD32(ctx->r2, 0);
    // 0x800890B0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800890B4: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x800890B8: addiu       $v1, $v1, 0x30
    ctx->r3 = ADD32(ctx->r3, 0X30);
    // 0x800890BC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800890C0: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x800890C4: bgez        $a0, L_800890D0
    if (SIGNED(ctx->r4) >= 0) {
        // 0x800890C8: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_800890D0;
    }
    // 0x800890C8: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x800890CC: addiu       $v1, $a0, 0xF
    ctx->r3 = ADD32(ctx->r4, 0XF);
L_800890D0:
    // 0x800890D0: sra         $v0, $v1, 4
    ctx->r2 = S32(SIGNED(ctx->r3) >> 4);
    // 0x800890D4: blez        $v0, L_800890E0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x800890D8: addiu       $a1, $zero, 0x800
        ctx->r5 = ADD32(0, 0X800);
            goto L_800890E0;
    }
    // 0x800890D8: addiu       $a1, $zero, 0x800
    ctx->r5 = ADD32(0, 0X800);
    // 0x800890DC: addiu       $a1, $v0, 0x7FF
    ctx->r5 = ADD32(ctx->r2, 0X7FF);
L_800890E0:
    // 0x800890E0: lh          $a0, 0xC($a3)
    ctx->r4 = MEM_H(ctx->r7, 0XC);
    // 0x800890E4: lh          $v0, 0xE($a3)
    ctx->r2 = MEM_H(ctx->r7, 0XE);
    // 0x800890E8: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800890EC: mflo        $v0
    ctx->r2 = lo;
    // 0x800890F0: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x800890F4: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
    // 0x800890F8: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x800890FC: slti        $v0, $v1, 0x800
    ctx->r2 = SIGNED(ctx->r3) < 0X800 ? 1 : 0;
    // 0x80089100: beql        $v0, $zero, L_80089108
    if (ctx->r2 == 0) {
        // 0x80089104: addiu       $v1, $zero, 0x7FF
        ctx->r3 = ADD32(0, 0X7FF);
            goto L_80089108;
    }
    goto skip_0;
    // 0x80089104: addiu       $v1, $zero, 0x7FF
    ctx->r3 = ADD32(0, 0X7FF);
    skip_0:
L_80089108:
    // 0x80089108: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x8008910C: andi        $v0, $v1, 0xFFF
    ctx->r2 = ctx->r3 & 0XFFF;
    // 0x80089110: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x80089114: lui         $v1, 0x700
    ctx->r3 = S32(0X700 << 16);
    // 0x80089118: bgez        $a0, L_80089124
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8008911C: or          $t0, $v0, $v1
        ctx->r8 = ctx->r2 | ctx->r3;
            goto L_80089124;
    }
    // 0x8008911C: or          $t0, $v0, $v1
    ctx->r8 = ctx->r2 | ctx->r3;
    // 0x80089120: addiu       $a2, $a0, 0xF
    ctx->r6 = ADD32(ctx->r4, 0XF);
L_80089124:
    // 0x80089124: sra         $v0, $a2, 4
    ctx->r2 = S32(SIGNED(ctx->r6) >> 4);
    // 0x80089128: blezl       $v0, L_80089160
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8008912C: andi        $v0, $a1, 0xFFF
        ctx->r2 = ctx->r5 & 0XFFF;
            goto L_80089160;
    }
    goto skip_1;
    // 0x8008912C: andi        $v0, $a1, 0xFFF
    ctx->r2 = ctx->r5 & 0XFFF;
    skip_1:
    // 0x80089130: div         $zero, $a1, $v0
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r2)));
    // 0x80089134: bne         $v0, $zero, L_80089140
    if (ctx->r2 != 0) {
        // 0x80089138: nop
    
            goto L_80089140;
    }
    // 0x80089138: nop

    // 0x8008913C: break       7
    do_break(2148045116);
L_80089140:
    // 0x80089140: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80089144: bne         $v0, $at, L_80089158
    if (ctx->r2 != ctx->r1) {
        // 0x80089148: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80089158;
    }
    // 0x80089148: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8008914C: bne         $a1, $at, L_80089158
    if (ctx->r5 != ctx->r1) {
        // 0x80089150: nop
    
            goto L_80089158;
    }
    // 0x80089150: nop

    // 0x80089154: break       6
    do_break(2148045140);
L_80089158:
    // 0x80089158: mflo        $v0
    ctx->r2 = lo;
    // 0x8008915C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
L_80089160:
    // 0x80089160: or          $v0, $t0, $v0
    ctx->r2 = ctx->r8 | ctx->r2;
    // 0x80089164: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x80089168: lw          $a1, -0x6F10($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X6F10);
    // 0x8008916C: lui         $v1, 0x8
    ctx->r3 = S32(0X8 << 16);
    // 0x80089170: sw          $v0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r2;
    // 0x80089174: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x80089178: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x8008917C: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x80089180: lhu         $v0, 0xC($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0XC);
    // 0x80089184: ori         $v1, $v1, 0x200
    ctx->r3 = ctx->r3 | 0X200;
    // 0x80089188: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x8008918C: sw          $v1, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r3;
    // 0x80089190: lui         $v1, 0xF200
    ctx->r3 = S32(0XF200 << 16);
    // 0x80089194: sw          $v1, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r3;
    // 0x80089198: lui         $v1, 0xF540
    ctx->r3 = S32(0XF540 << 16);
    // 0x8008919C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x800891A0: sra         $v0, $v0, 17
    ctx->r2 = S32(SIGNED(ctx->r2) >> 17);
    // 0x800891A4: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x800891A8: sra         $v0, $v0, 3
    ctx->r2 = S32(SIGNED(ctx->r2) >> 3);
    // 0x800891AC: andi        $v0, $v0, 0x1FF
    ctx->r2 = ctx->r2 & 0X1FF;
    // 0x800891B0: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x800891B4: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x800891B8: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
    // 0x800891BC: lh          $v0, 0xC($a3)
    ctx->r2 = MEM_H(ctx->r7, 0XC);
    // 0x800891C0: lh          $v1, 0xE($a3)
    ctx->r3 = MEM_H(ctx->r7, 0XE);
    // 0x800891C4: ori         $a0, $a0, 0x4008
    ctx->r4 = ctx->r4 | 0X4008;
    // 0x800891C8: lui         $a3, 0x600
    ctx->r7 = S32(0X600 << 16);
    // 0x800891CC: sw          $a0, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r4;
    // 0x800891D0: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x800891D4: lw          $a0, -0x15D8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X15D8);
    // 0x800891D8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x800891DC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800891E0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x800891E4: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x800891E8: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x800891EC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x800891F0: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x800891F4: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x800891F8: sw          $v0, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->r2;
    // 0x800891FC: lw          $a2, 0x40($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X40);
    // 0x80089200: ori         $a3, $a3, 0x406
    ctx->r7 = ctx->r7 | 0X406;
    // 0x80089204: addiu       $v0, $a1, 0x8
    ctx->r2 = ADD32(ctx->r5, 0X8);
    // 0x80089208: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8008920C: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80089210: addiu       $v0, $a1, 0x10
    ctx->r2 = ADD32(ctx->r5, 0X10);
    // 0x80089214: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80089218: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8008921C: addiu       $v0, $a1, 0x18
    ctx->r2 = ADD32(ctx->r5, 0X18);
    // 0x80089220: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80089224: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80089228: addiu       $v0, $a1, 0x20
    ctx->r2 = ADD32(ctx->r5, 0X20);
    // 0x8008922C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80089230: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80089234: addiu       $v0, $a1, 0x28
    ctx->r2 = ADD32(ctx->r5, 0X28);
    // 0x80089238: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8008923C: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80089240: addiu       $v0, $zero, 0x602
    ctx->r2 = ADD32(0, 0X602);
    // 0x80089244: sll         $v1, $a0, 1
    ctx->r3 = S32(ctx->r4 << 1);
    // 0x80089248: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8008924C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80089250: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80089254: sll         $v1, $v1, 9
    ctx->r3 = S32(ctx->r3 << 9);
    // 0x80089258: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x8008925C: addiu       $a0, $a0, -0x29B0
    ctx->r4 = ADD32(ctx->r4, -0X29B0);
    // 0x80089260: sw          $a3, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->r7;
    // 0x80089264: sw          $v0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r2;
    // 0x80089268: sll         $v0, $a2, 1
    ctx->r2 = S32(ctx->r6 << 1);
    // 0x8008926C: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80089270: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80089274: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80089278: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8008927C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80089280: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80089284: addiu       $v1, $v1, 0x90
    ctx->r3 = ADD32(ctx->r3, 0X90);
    // 0x80089288: sw          $v1, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r3;
    // 0x8008928C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80089290: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80089294: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80089298: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8008929C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x800892A0: jr          $ra
    // 0x800892A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x800892A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800892A8: nop

    // 0x800892AC: nop

;}
RECOMP_FUNC void func_80054578_2F978(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80054578: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8005457C: lbu         $a0, -0x2338($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X2338);
    // 0x80054580: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x80054584: lbu         $a1, -0x2337($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X2337);
    // 0x80054588: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x8005458C: lbu         $a2, -0x2336($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X2336);
    // 0x80054590: lui         $a3, 0x801B
    ctx->r7 = S32(0X801B << 16);
    // 0x80054594: lhu         $a3, -0x2334($a3)
    ctx->r7 = MEM_HU(ctx->r7, -0X2334);
    // 0x80054598: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005459C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x800545A0: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x800545A4: sb          $zero, -0x72EC($at)
    MEM_B(-0X72EC, ctx->r1) = 0;
    // 0x800545A8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x800545AC: jal         0x80054984
    // 0x800545B0: sb          $zero, 0xB61($at)
    MEM_B(0XB61, ctx->r1) = 0;
    func_80054984_2FD84(rdram, ctx);
        goto after_0;
    // 0x800545B0: sb          $zero, 0xB61($at)
    MEM_B(0XB61, ctx->r1) = 0;
    after_0:
    // 0x800545B4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x800545B8: jr          $ra
    // 0x800545BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x800545BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800656E8_40AE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800656E8: lhu         $v0, 0xBE($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XBE);
    // 0x800656EC: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x800656F0: sh          $v1, 0xBE($a0)
    MEM_H(0XBE, ctx->r4) = ctx->r3;
    // 0x800656F4: lw          $v1, 0x14($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X14);
    // 0x800656F8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800656FC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80065700: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x80065704: sw          $v1, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r3;
    // 0x80065708: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x8006570C: lbu         $v0, 0x1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1);
    // 0x80065710: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80065714: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80065718: lbu         $v0, -0x6F90($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X6F90);
    // 0x8006571C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80065720: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80065724: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80065728: lw          $v0, 0x2B30($at)
    ctx->r2 = MEM_W(ctx->r1, 0X2B30);
    // 0x8006572C: jr          $ra
    // 0x80065730: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80065730: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_8004B580_26980(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004B580: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8004B584: jr          $ra
    // 0x8004B588: sh          $a0, -0x3984($at)
    MEM_H(-0X3984, ctx->r1) = ctx->r4;
    TRACE_RETURN()
    return;
    // 0x8004B588: sh          $a0, -0x3984($at)
    MEM_H(-0X3984, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_8008EE3C_6A23C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008EE3C: sltu        $v0, $a1, $a0
    ctx->r2 = ctx->r5 < ctx->r4 ? 1 : 0;
    // 0x8008EE40: beq         $v0, $zero, L_8008EE80
    if (ctx->r2 == 0) {
        // 0x8008EE44: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8008EE80;
    }
    // 0x8008EE44: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8008EE48: addu        $a0, $a0, $a2
    ctx->r4 = ADD32(ctx->r4, ctx->r6);
    // 0x8008EE4C: addu        $a1, $a1, $a2
    ctx->r5 = ADD32(ctx->r5, ctx->r6);
    // 0x8008EE50: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x8008EE54: beq         $a2, $v0, L_8008EEA8
    if (ctx->r6 == ctx->r2) {
        // 0x8008EE58: nop
    
            goto L_8008EEA8;
    }
    // 0x8008EE58: nop

    // 0x8008EE5C: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
L_8008EE60:
    // 0x8008EE60: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x8008EE64: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x8008EE68: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x8008EE6C: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x8008EE70: bne         $a2, $v1, L_8008EE60
    if (ctx->r6 != ctx->r3) {
        // 0x8008EE74: sb          $v0, 0x0($a0)
        MEM_B(0X0, ctx->r4) = ctx->r2;
            goto L_8008EE60;
    }
    // 0x8008EE74: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x8008EE78: j           L_8008EEA8
    // 0x8008EE7C: nop

        goto L_8008EEA8;
    // 0x8008EE7C: nop

L_8008EE80:
    // 0x8008EE80: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x8008EE84: beq         $a2, $v0, L_8008EEA8
    if (ctx->r6 == ctx->r2) {
        // 0x8008EE88: nop
    
            goto L_8008EEA8;
    }
    // 0x8008EE88: nop

    // 0x8008EE8C: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
L_8008EE90:
    // 0x8008EE90: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x8008EE94: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8008EE98: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x8008EE9C: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x8008EEA0: bne         $a2, $v1, L_8008EE90
    if (ctx->r6 != ctx->r3) {
        // 0x8008EEA4: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_8008EE90;
    }
    // 0x8008EEA4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_8008EEA8:
    // 0x8008EEA8: jr          $ra
    // 0x8008EEAC: nop

    TRACE_RETURN()
    return;
    // 0x8008EEAC: nop

;}
RECOMP_FUNC void func_8006331C_3E71C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006331C: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x80063320: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x80063324: lui         $a1, 0x100
    ctx->r5 = S32(0X100 << 16);
    // 0x80063328: and         $v0, $a0, $a1
    ctx->r2 = ctx->r4 & ctx->r5;
    // 0x8006332C: bne         $v0, $zero, L_80063354
    if (ctx->r2 != 0) {
        // 0x80063330: addiu       $sp, $sp, -0x8
        ctx->r29 = ADD32(ctx->r29, -0X8);
            goto L_80063354;
    }
    // 0x80063330: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80063334: lw          $v1, 0x6C($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X6C);
    // 0x80063338: or          $v0, $a0, $a1
    ctx->r2 = ctx->r4 | ctx->r5;
    // 0x8006333C: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x80063340: lbu         $v0, 0x2($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X2);
    // 0x80063344: lbu         $v1, 0x1($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X1);
    // 0x80063348: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8006334C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80063350: sh          $v1, 0x4($a2)
    MEM_H(0X4, ctx->r6) = ctx->r3;
L_80063354:
    // 0x80063354: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x80063358: lh          $a0, 0x4($a2)
    ctx->r4 = MEM_H(ctx->r6, 0X4);
    // 0x8006335C: lui         $v1, 0x1000
    ctx->r3 = S32(0X1000 << 16);
    // 0x80063360: or          $v1, $v0, $v1
    ctx->r3 = ctx->r2 | ctx->r3;
    // 0x80063364: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80063368: blez        $a0, L_80063380
    if (SIGNED(ctx->r4) <= 0) {
        // 0x8006336C: sw          $v1, 0x0($a2)
        MEM_W(0X0, ctx->r6) = ctx->r3;
            goto L_80063380;
    }
    // 0x8006336C: sw          $v1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r3;
    // 0x80063370: lui         $v0, 0x4
    ctx->r2 = S32(0X4 << 16);
    // 0x80063374: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80063378: bne         $v0, $zero, L_800633AC
    if (ctx->r2 != 0) {
        // 0x8006337C: addiu       $v0, $a1, -0x1
        ctx->r2 = ADD32(ctx->r5, -0X1);
            goto L_800633AC;
    }
    // 0x8006337C: addiu       $v0, $a1, -0x1
    ctx->r2 = ADD32(ctx->r5, -0X1);
L_80063380:
    // 0x80063380: lui         $v1, 0xEEFF
    ctx->r3 = S32(0XEEFF << 16);
    // 0x80063384: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x80063388: lw          $a1, 0x6C($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X6C);
    // 0x8006338C: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x80063390: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80063394: sh          $zero, 0x4($a2)
    MEM_H(0X4, ctx->r6) = 0;
    // 0x80063398: and         $a0, $a0, $v1
    ctx->r4 = ctx->r4 & ctx->r3;
    // 0x8006339C: addiu       $a1, $a1, 0x3
    ctx->r5 = ADD32(ctx->r5, 0X3);
    // 0x800633A0: sw          $a0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r4;
    // 0x800633A4: j           L_800633B4
    // 0x800633A8: sw          $a1, 0x6C($a2)
    MEM_W(0X6C, ctx->r6) = ctx->r5;
        goto L_800633B4;
    // 0x800633A8: sw          $a1, 0x6C($a2)
    MEM_W(0X6C, ctx->r6) = ctx->r5;
L_800633AC:
    // 0x800633AC: sh          $v0, 0x4($a2)
    MEM_H(0X4, ctx->r6) = ctx->r2;
    // 0x800633B0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_800633B4:
    // 0x800633B4: jr          $ra
    // 0x800633B8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x800633B8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8008C41C_6781C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008C41C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008C420: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8008C424: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8008C428: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008C42C: lhu         $v1, 0xAA($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XAA);
    // 0x8008C430: lbu         $v0, 0xB6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB6);
    // 0x8008C434: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8008C438: bgtz        $v1, L_8008C44C
    if (SIGNED(ctx->r3) > 0) {
        // 0x8008C43C: nop
    
            goto L_8008C44C;
    }
    // 0x8008C43C: nop

    // 0x8008C440: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8008C444: j           L_8008C470
    // 0x8008C448: nop

        goto L_8008C470;
    // 0x8008C448: nop

L_8008C44C:
    // 0x8008C44C: lwc1        $f0, 0xDC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0XDC);
    // 0x8008C450: mtc1        $v1, $f12
    ctx->f12.u32l = ctx->r3;
    // 0x8008C454: nop

    // 0x8008C458: cvt.s.w     $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    ctx->f12.fl = CVT_S_W(ctx->f12.u32l);
    // 0x8008C45C: jal         0x80099D90
    // 0x8008C460: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    __sinf_recomp(rdram, ctx);
        goto after_0;
    // 0x8008C460: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    after_0:
    // 0x8008C464: lwc1        $f2, 0x20($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X20);
    // 0x8008C468: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x8008C46C: swc1        $f0, 0x68($s0)
    MEM_W(0X68, ctx->r16) = ctx->f0.u32l;
L_8008C470:
    // 0x8008C470: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008C474: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8008C478: jr          $ra
    // 0x8008C47C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8008C47C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80051248_2C648(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80051248: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8005124C: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x80051250: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80051254: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80051258: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x8005125C: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x80051260: sh          $zero, 0x10($sp)
    MEM_H(0X10, ctx->r29) = 0;
    // 0x80051264: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80051268: addiu       $s1, $sp, 0x18
    ctx->r17 = ADD32(ctx->r29, 0X18);
    // 0x8005126C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80051270: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    // 0x80051274: jal         0x80031428
    // 0x80051278: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    func_80031428_C828(rdram, ctx);
        goto after_0;
    // 0x80051278: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    after_0:
    // 0x8005127C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80051280: jal         0x80051364
    // 0x80051284: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_80051364_2C764(rdram, ctx);
        goto after_1;
    // 0x80051284: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x80051288: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x8005128C: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x80051290: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x80051294: jr          $ra
    // 0x80051298: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x80051298: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8005A2B8_356B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8005A2B8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8005A2BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8005A2C0: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x8005A2C4: lw          $s0, -0x16D0($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X16D0);
    // 0x8005A2C8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8005A2CC: lui         $s3, 0x800B
    ctx->r19 = S32(0X800B << 16);
    // 0x8005A2D0: addiu       $s3, $s3, -0x1614
    ctx->r19 = ADD32(ctx->r19, -0X1614);
    // 0x8005A2D4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8005A2D8: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8005A2DC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8005A2E0: addiu       $s2, $zero, -0xD
    ctx->r18 = ADD32(0, -0XD);
    // 0x8005A2E4: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
L_8005A2E8:
    // 0x8005A2E8: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8005A2EC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8005A2F0: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x8005A2F4: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
    // 0x8005A2F8: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x8005A2FC: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x8005A300: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8005A304: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8005A308: lhu         $v0, -0x160E($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X160E);
    // 0x8005A30C: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x8005A310: sltiu       $v0, $s2, 0xD
    ctx->r2 = ctx->r18 < 0XD ? 1 : 0;
    // 0x8005A314: beq         $v0, $zero, L_8005A338
    if (ctx->r2 == 0) {
        // 0x8005A318: nop
    
            goto L_8005A338;
    }
    // 0x8005A318: nop

    // 0x8005A31C: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8005A320: addu        $a0, $a0, $s2
    ctx->r4 = ADD32(ctx->r4, ctx->r18);
    // 0x8005A324: lbu         $a0, -0x14B0($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X14B0);
    // 0x8005A328: jal         0x8006033C
    // 0x8005A32C: addiu       $a0, $a0, 0x4C0
    ctx->r4 = ADD32(ctx->r4, 0X4C0);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8005A32C: addiu       $a0, $a0, 0x4C0
    ctx->r4 = ADD32(ctx->r4, 0X4C0);
    after_0:
    // 0x8005A330: beq         $v0, $zero, L_8005A344
    if (ctx->r2 == 0) {
        // 0x8005A334: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8005A344;
    }
    // 0x8005A334: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_8005A338:
    // 0x8005A338: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8005A33C: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8005A340: lhu         $v0, -0x160E($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X160E);
L_8005A344:
    // 0x8005A344: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x8005A348: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x8005A34C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8005A350: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8005A354: jal         0x8009A3B4
    // 0x8005A358: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8005A358: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    after_1:
    // 0x8005A35C: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8005A360: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x8005A364: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
    // 0x8005A368: jal         0x8002C69C
    // 0x8005A36C: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    func_8002C69C_7A9C(rdram, ctx);
        goto after_2;
    // 0x8005A36C: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    after_2:
    // 0x8005A370: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8005A374: jal         0x8004D624
    // 0x8005A378: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    func_8004D624_28A24(rdram, ctx);
        goto after_3;
    // 0x8005A378: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    after_3:
    // 0x8005A37C: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x8005A380: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8005A384: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x8005A388: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8005A38C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8005A390: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8005A394: slti        $v0, $s1, 0x140
    ctx->r2 = SIGNED(ctx->r17) < 0X140 ? 1 : 0;
    // 0x8005A398: bne         $v0, $zero, L_8005A2E8
    if (ctx->r2 != 0) {
        // 0x8005A39C: addiu       $s0, $s0, 0x5C
        ctx->r16 = ADD32(ctx->r16, 0X5C);
            goto L_8005A2E8;
    }
    // 0x8005A39C: addiu       $s0, $s0, 0x5C
    ctx->r16 = ADD32(ctx->r16, 0X5C);
    // 0x8005A3A0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8005A3A4: lb          $v0, 0x4B22($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4B22);
    // 0x8005A3A8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8005A3AC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8005A3B0: lbu         $v0, -0x14C4($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X14C4);
    // 0x8005A3B4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005A3B8: sh          $zero, -0x3E36($at)
    MEM_H(-0X3E36, ctx->r1) = 0;
    // 0x8005A3BC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005A3C0: sh          $zero, -0x3DAE($at)
    MEM_H(-0X3DAE, ctx->r1) = 0;
    // 0x8005A3C4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005A3C8: sw          $v0, -0x3DE0($at)
    MEM_W(-0X3DE0, ctx->r1) = ctx->r2;
    // 0x8005A3CC: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8005A3D0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8005A3D4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8005A3D8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8005A3DC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8005A3E0: jr          $ra
    // 0x8005A3E4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8005A3E4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8008B2F4_666F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008B2F4: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008B2F8: jr          $ra
    // 0x8008B2FC: sw          $a0, 0x4FBC($at)
    MEM_W(0X4FBC, ctx->r1) = ctx->r4;
    TRACE_RETURN()
    return;
    // 0x8008B2FC: sw          $a0, 0x4FBC($at)
    MEM_W(0X4FBC, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_8002CD50_8150(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002CD50: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x8002CD54: lbu         $a0, 0x4($a2)
    ctx->r4 = MEM_BU(ctx->r6, 0X4);
    // 0x8002CD58: lbu         $a1, 0x7($a2)
    ctx->r5 = MEM_BU(ctx->r6, 0X7);
    // 0x8002CD5C: lhu         $v1, 0x16($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X16);
    // 0x8002CD60: sll         $v0, $a0, 8
    ctx->r2 = S32(ctx->r4 << 8);
    // 0x8002CD64: subu        $a0, $v0, $a0
    ctx->r4 = SUB32(ctx->r2, ctx->r4);
    // 0x8002CD68: andi        $t0, $a1, 0x2
    ctx->r8 = ctx->r5 & 0X2;
    // 0x8002CD6C: srl         $v1, $v1, 5
    ctx->r3 = S32(U32(ctx->r3) >> 5);
    // 0x8002CD70: bgez        $a0, L_8002CD7C
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8002CD74: andi        $t1, $v1, 0x3
        ctx->r9 = ctx->r3 & 0X3;
            goto L_8002CD7C;
    }
    // 0x8002CD74: andi        $t1, $v1, 0x3
    ctx->r9 = ctx->r3 & 0X3;
    // 0x8002CD78: addiu       $a0, $a0, 0x7F
    ctx->r4 = ADD32(ctx->r4, 0X7F);
L_8002CD7C:
    // 0x8002CD7C: lbu         $v0, 0x5($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X5);
    // 0x8002CD80: sra         $v1, $a0, 7
    ctx->r3 = S32(SIGNED(ctx->r4) >> 7);
    // 0x8002CD84: sb          $v1, 0x4($a2)
    MEM_B(0X4, ctx->r6) = ctx->r3;
    // 0x8002CD88: sll         $v1, $v0, 8
    ctx->r3 = S32(ctx->r2 << 8);
    // 0x8002CD8C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8002CD90: bltzl       $v1, L_8002CD98
    if (SIGNED(ctx->r3) < 0) {
        // 0x8002CD94: addiu       $v1, $v1, 0x7F
        ctx->r3 = ADD32(ctx->r3, 0X7F);
            goto L_8002CD98;
    }
    goto skip_0;
    // 0x8002CD94: addiu       $v1, $v1, 0x7F
    ctx->r3 = ADD32(ctx->r3, 0X7F);
    skip_0:
L_8002CD98:
    // 0x8002CD98: lbu         $v0, 0x6($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X6);
    // 0x8002CD9C: sra         $v1, $v1, 7
    ctx->r3 = S32(SIGNED(ctx->r3) >> 7);
    // 0x8002CDA0: sb          $v1, 0x5($a2)
    MEM_B(0X5, ctx->r6) = ctx->r3;
    // 0x8002CDA4: sll         $v1, $v0, 8
    ctx->r3 = S32(ctx->r2 << 8);
    // 0x8002CDA8: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x8002CDAC: bltzl       $v0, L_8002CDB4
    if (SIGNED(ctx->r2) < 0) {
        // 0x8002CDB0: addiu       $v0, $v0, 0x7F
        ctx->r2 = ADD32(ctx->r2, 0X7F);
            goto L_8002CDB4;
    }
    goto skip_1;
    // 0x8002CDB0: addiu       $v0, $v0, 0x7F
    ctx->r2 = ADD32(ctx->r2, 0X7F);
    skip_1:
L_8002CDB4:
    // 0x8002CDB4: sra         $a0, $v0, 7
    ctx->r4 = S32(SIGNED(ctx->r2) >> 7);
    // 0x8002CDB8: sb          $a0, 0x6($a2)
    MEM_B(0X6, ctx->r6) = ctx->r4;
    // 0x8002CDBC: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8002CDC0: lw          $v0, 0x271C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X271C);
    // 0x8002CDC4: bne         $t0, $v0, L_8002CE14
    if (ctx->r8 != ctx->r2) {
        // 0x8002CDC8: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8002CE14;
    }
    // 0x8002CDC8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8002CDCC: lui         $v1, 0x8019
    ctx->r3 = S32(0X8019 << 16);
    // 0x8002CDD0: lw          $v1, 0x3C30($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3C30);
    // 0x8002CDD4: bne         $v1, $v0, L_8002CE14
    if (ctx->r3 != ctx->r2) {
        // 0x8002CDD8: nop
    
            goto L_8002CE14;
    }
    // 0x8002CDD8: nop

    // 0x8002CDDC: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x8002CDE0: lh          $v1, 0x2720($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X2720);
    // 0x8002CDE4: lbu         $v0, 0x4($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X4);
    // 0x8002CDE8: bne         $v1, $v0, L_8002CE14
    if (ctx->r3 != ctx->r2) {
        // 0x8002CDEC: nop
    
            goto L_8002CE14;
    }
    // 0x8002CDEC: nop

    // 0x8002CDF0: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x8002CDF4: lh          $v1, 0x2722($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X2722);
    // 0x8002CDF8: lbu         $v0, 0x5($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X5);
    // 0x8002CDFC: bne         $v1, $v0, L_8002CE14
    if (ctx->r3 != ctx->r2) {
        // 0x8002CE00: andi        $v0, $a0, 0xFF
        ctx->r2 = ctx->r4 & 0XFF;
            goto L_8002CE14;
    }
    // 0x8002CE00: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x8002CE04: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x8002CE08: lh          $v1, 0x2724($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X2724);
    // 0x8002CE0C: beq         $v1, $v0, L_8002D038
    if (ctx->r3 == ctx->r2) {
        // 0x8002CE10: nop
    
            goto L_8002D038;
    }
    // 0x8002CE10: nop

L_8002CE14:
    // 0x8002CE14: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x8002CE18: lw          $a1, -0x6F10($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X6F10);
    // 0x8002CE1C: addiu       $v0, $a1, 0x8
    ctx->r2 = ADD32(ctx->r5, 0X8);
    // 0x8002CE20: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002CE24: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002CE28: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x8002CE2C: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x8002CE30: beq         $t0, $zero, L_8002CE4C
    if (ctx->r8 == 0) {
        // 0x8002CE34: sw          $zero, 0x4($a1)
        MEM_W(0X4, ctx->r5) = 0;
            goto L_8002CE4C;
    }
    // 0x8002CE34: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x8002CE38: lui         $a0, 0xE200
    ctx->r4 = S32(0XE200 << 16);
    // 0x8002CE3C: ori         $a0, $a0, 0x1C
    ctx->r4 = ctx->r4 | 0X1C;
    // 0x8002CE40: lui         $v1, 0x50
    ctx->r3 = S32(0X50 << 16);
    // 0x8002CE44: j           L_8002CE5C
    // 0x8002CE48: ori         $v1, $v1, 0x4240
    ctx->r3 = ctx->r3 | 0X4240;
        goto L_8002CE5C;
    // 0x8002CE48: ori         $v1, $v1, 0x4240
    ctx->r3 = ctx->r3 | 0X4240;
L_8002CE4C:
    // 0x8002CE4C: lui         $a0, 0xE200
    ctx->r4 = S32(0XE200 << 16);
    // 0x8002CE50: ori         $a0, $a0, 0x1C
    ctx->r4 = ctx->r4 | 0X1C;
    // 0x8002CE54: lui         $v1, 0xF0A
    ctx->r3 = S32(0XF0A << 16);
    // 0x8002CE58: ori         $v1, $v1, 0x7008
    ctx->r3 = ctx->r3 | 0X7008;
L_8002CE5C:
    // 0x8002CE5C: addiu       $v0, $a1, 0x10
    ctx->r2 = ADD32(ctx->r5, 0X10);
    // 0x8002CE60: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002CE64: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002CE68: sw          $a0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r4;
    // 0x8002CE6C: sw          $v1, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r3;
    // 0x8002CE70: lbu         $v0, 0x4($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X4);
    // 0x8002CE74: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002CE78: sh          $v0, 0x2720($at)
    MEM_H(0X2720, ctx->r1) = ctx->r2;
    // 0x8002CE7C: lbu         $v0, 0x5($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X5);
    // 0x8002CE80: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002CE84: sh          $v0, 0x2722($at)
    MEM_H(0X2722, ctx->r1) = ctx->r2;
    // 0x8002CE88: lbu         $v0, 0x6($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X6);
    // 0x8002CE8C: lui         $a1, 0x5555
    ctx->r5 = S32(0X5555 << 16);
    // 0x8002CE90: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002CE94: sw          $t0, 0x271C($at)
    MEM_W(0X271C, ctx->r1) = ctx->r8;
    // 0x8002CE98: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002CE9C: sh          $v0, 0x2724($at)
    MEM_H(0X2724, ctx->r1) = ctx->r2;
    // 0x8002CEA0: lbu         $v0, 0x4($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X4);
    // 0x8002CEA4: lbu         $v1, 0x5($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X5);
    // 0x8002CEA8: lbu         $a0, 0x6($a2)
    ctx->r4 = MEM_BU(ctx->r6, 0X6);
    // 0x8002CEAC: ori         $a1, $a1, 0x5556
    ctx->r5 = ctx->r5 | 0X5556;
    // 0x8002CEB0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8002CEB4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8002CEB8: mult        $v0, $a1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002CEBC: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x8002CEC0: mfhi        $t2
    ctx->r10 = hi;
    // 0x8002CEC4: subu        $v0, $t2, $v0
    ctx->r2 = SUB32(ctx->r10, ctx->r2);
    // 0x8002CEC8: nop

    // 0x8002CECC: beq         $t0, $zero, L_8002CF24
    if (ctx->r8 == 0) {
        // 0x8002CED0: andi        $a3, $v0, 0xFF
        ctx->r7 = ctx->r2 & 0XFF;
            goto L_8002CF24;
    }
    // 0x8002CED0: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    // 0x8002CED4: beq         $t1, $zero, L_8002CEFC
    if (ctx->r9 == 0) {
        // 0x8002CED8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8002CEFC;
    }
    // 0x8002CED8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8002CEDC: bne         $t1, $v0, L_8002CF00
    if (ctx->r9 != ctx->r2) {
        // 0x8002CEE0: sll         $v1, $a3, 7
        ctx->r3 = S32(ctx->r7 << 7);
            goto L_8002CF00;
    }
    // 0x8002CEE0: sll         $v1, $a3, 7
    ctx->r3 = S32(ctx->r7 << 7);
    // 0x8002CEE4: sll         $v0, $a3, 1
    ctx->r2 = S32(ctx->r7 << 1);
    // 0x8002CEE8: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x8002CEEC: lui         $v1, 0x8080
    ctx->r3 = S32(0X8080 << 16);
    // 0x8002CEF0: ori         $v1, $v1, 0x8081
    ctx->r3 = ctx->r3 | 0X8081;
    // 0x8002CEF4: j           L_8002CF08
    // 0x8002CEF8: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
        goto L_8002CF08;
    // 0x8002CEF8: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
L_8002CEFC:
    // 0x8002CEFC: sll         $v1, $a3, 7
    ctx->r3 = S32(ctx->r7 << 7);
L_8002CF00:
    // 0x8002CF00: lui         $v0, 0x8080
    ctx->r2 = S32(0X8080 << 16);
    // 0x8002CF04: ori         $v0, $v0, 0x8081
    ctx->r2 = ctx->r2 | 0X8081;
L_8002CF08:
    // 0x8002CF08: nop

    // 0x8002CF0C: multu       $v1, $v0
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002CF10: mfhi        $t2
    ctx->r10 = hi;
    // 0x8002CF14: nop

    // 0x8002CF18: nop

    // 0x8002CF1C: j           L_8002CF28
    // 0x8002CF20: srl         $a3, $t2, 7
    ctx->r7 = S32(U32(ctx->r10) >> 7);
        goto L_8002CF28;
    // 0x8002CF20: srl         $a3, $t2, 7
    ctx->r7 = S32(U32(ctx->r10) >> 7);
L_8002CF24:
    // 0x8002CF24: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
L_8002CF28:
    // 0x8002CF28: lbu         $a0, 0x4($a2)
    ctx->r4 = MEM_BU(ctx->r6, 0X4);
    // 0x8002CF2C: lbu         $v0, 0x5($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X5);
    // 0x8002CF30: lbu         $v1, 0x6($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X6);
    // 0x8002CF34: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8002CF38: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x8002CF3C: lui         $v0, 0xAAAA
    ctx->r2 = S32(0XAAAA << 16);
    // 0x8002CF40: ori         $v0, $v0, 0xAAAB
    ctx->r2 = ctx->r2 | 0XAAAB;
    // 0x8002CF44: multu       $a0, $v0
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002CF48: mfhi        $t2
    ctx->r10 = hi;
    // 0x8002CF4C: srl         $a0, $t2, 1
    ctx->r4 = S32(U32(ctx->r10) >> 1);
    // 0x8002CF50: sltiu       $v0, $a0, 0x100
    ctx->r2 = ctx->r4 < 0X100 ? 1 : 0;
    // 0x8002CF54: beql        $v0, $zero, L_8002CF5C
    if (ctx->r2 == 0) {
        // 0x8002CF58: addiu       $a0, $zero, 0xFF
        ctx->r4 = ADD32(0, 0XFF);
            goto L_8002CF5C;
    }
    goto skip_2;
    // 0x8002CF58: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    skip_2:
L_8002CF5C:
    // 0x8002CF5C: sltu        $v1, $zero, $t0
    ctx->r3 = 0 < ctx->r8 ? 1 : 0;
    // 0x8002CF60: xori        $v0, $t1, 0x2
    ctx->r2 = ctx->r9 ^ 0X2;
    // 0x8002CF64: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8002CF68: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8002CF6C: beq         $v1, $zero, L_8002CF9C
    if (ctx->r3 == 0) {
        // 0x8002CF70: nop
    
            goto L_8002CF9C;
    }
    // 0x8002CF70: nop

    // 0x8002CF74: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8002CF78: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x8002CF7C: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x8002CF80: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002CF84: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002CF88: lui         $v0, 0xFA00
    ctx->r2 = S32(0XFA00 << 16);
    // 0x8002CF8C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x8002CF90: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x8002CF94: j           L_8002D038
    // 0x8002CF98: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
        goto L_8002D038;
    // 0x8002CF98: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
L_8002CF9C:
    // 0x8002CF9C: beq         $t0, $zero, L_8002CFF0
    if (ctx->r8 == 0) {
        // 0x8002CFA0: addiu       $t0, $zero, -0x100
        ctx->r8 = ADD32(0, -0X100);
            goto L_8002CFF0;
    }
    // 0x8002CFA0: addiu       $t0, $zero, -0x100
    ctx->r8 = ADD32(0, -0X100);
    // 0x8002CFA4: lw          $a1, 0x4($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X4);
    // 0x8002CFA8: and         $v0, $a1, $t0
    ctx->r2 = ctx->r5 & ctx->r8;
    // 0x8002CFAC: beq         $v0, $t0, L_8002CFF0
    if (ctx->r2 == ctx->r8) {
        // 0x8002CFB0: srl         $v0, $a1, 8
        ctx->r2 = S32(U32(ctx->r5) >> 8);
            goto L_8002CFF0;
    }
    // 0x8002CFB0: srl         $v0, $a1, 8
    ctx->r2 = S32(U32(ctx->r5) >> 8);
    // 0x8002CFB4: lhu         $v1, 0x4($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X4);
    // 0x8002CFB8: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8002CFBC: bne         $v1, $v0, L_8002CFF0
    if (ctx->r3 != ctx->r2) {
        // 0x8002CFC0: nop
    
            goto L_8002CFF0;
    }
    // 0x8002CFC0: nop

    // 0x8002CFC4: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8002CFC8: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x8002CFCC: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x8002CFD0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002CFD4: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002CFD8: lui         $v0, 0xFA00
    ctx->r2 = S32(0XFA00 << 16);
    // 0x8002CFDC: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x8002CFE0: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x8002CFE4: or          $v0, $v0, $t0
    ctx->r2 = ctx->r2 | ctx->r8;
    // 0x8002CFE8: j           L_8002D038
    // 0x8002CFEC: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
        goto L_8002D038;
    // 0x8002CFEC: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
L_8002CFF0:
    // 0x8002CFF0: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x8002CFF4: lw          $a1, -0x6F10($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X6F10);
    // 0x8002CFF8: addiu       $v0, $a1, 0x8
    ctx->r2 = ADD32(ctx->r5, 0X8);
    // 0x8002CFFC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002D000: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002D004: lui         $v0, 0xFA00
    ctx->r2 = S32(0XFA00 << 16);
    // 0x8002D008: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x8002D00C: lbu         $v0, 0x4($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X4);
    // 0x8002D010: lbu         $v1, 0x5($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X5);
    // 0x8002D014: lbu         $a0, 0x6($a2)
    ctx->r4 = MEM_BU(ctx->r6, 0X6);
    // 0x8002D018: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8002D01C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8002D020: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8002D024: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x8002D028: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x8002D02C: andi        $v1, $a3, 0xFF
    ctx->r3 = ctx->r7 & 0XFF;
    // 0x8002D030: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8002D034: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
L_8002D038:
    // 0x8002D038: lui         $v0, 0x8019
    ctx->r2 = S32(0X8019 << 16);
    // 0x8002D03C: lw          $v0, 0x3C30($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3C30);
    // 0x8002D040: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x8002D044: beq         $v0, $a0, L_8002D084
    if (ctx->r2 == ctx->r4) {
        // 0x8002D048: ori         $v0, $zero, 0xFFFF
        ctx->r2 = 0 | 0XFFFF;
            goto L_8002D084;
    }
    // 0x8002D048: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x8002D04C: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8002D050: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x8002D054: lui         $at, 0x8019
    ctx->r1 = S32(0X8019 << 16);
    // 0x8002D058: sw          $a0, 0x3C30($at)
    MEM_W(0X3C30, ctx->r1) = ctx->r4;
    // 0x8002D05C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002D060: sh          $v0, 0x2710($at)
    MEM_H(0X2710, ctx->r1) = ctx->r2;
    // 0x8002D064: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x8002D068: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002D06C: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002D070: lui         $v0, 0xDE00
    ctx->r2 = S32(0XDE00 << 16);
    // 0x8002D074: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x8002D078: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8002D07C: addiu       $v0, $v0, -0x7880
    ctx->r2 = ADD32(ctx->r2, -0X7880);
    // 0x8002D080: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
L_8002D084:
    // 0x8002D084: jr          $ra
    // 0x8002D088: nop

    TRACE_RETURN()
    return;
    // 0x8002D088: nop

;}
RECOMP_FUNC void func_8005FA7C_3AE7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8005FA7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005FA80: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8005FA84: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8005FA88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005FA8C: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x8005FA90: lbu         $a1, 0x1($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X1);
    // 0x8005FA94: lbu         $a2, 0x3($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X3);
    // 0x8005FA98: jal         0x8005F8FC
    // 0x8005FA9C: addiu       $a3, $s0, 0xC
    ctx->r7 = ADD32(ctx->r16, 0XC);
    func_8005F8FC_3ACFC(rdram, ctx);
        goto after_0;
    // 0x8005FA9C: addiu       $a3, $s0, 0xC
    ctx->r7 = ADD32(ctx->r16, 0XC);
    after_0:
    // 0x8005FAA0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8005FAA4: bne         $v1, $zero, L_8005FAB4
    if (ctx->r3 != 0) {
        // 0x8005FAA8: addiu       $v0, $zero, 0x40
        ctx->r2 = ADD32(0, 0X40);
            goto L_8005FAB4;
    }
    // 0x8005FAA8: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8005FAAC: j           L_8005FB20
    // 0x8005FAB0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8005FB20;
    // 0x8005FAB0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8005FAB4:
    // 0x8005FAB4: lbu         $a0, 0x3($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X3);
    // 0x8005FAB8: beq         $a0, $v0, L_8005FAEC
    if (ctx->r4 == ctx->r2) {
        // 0x8005FABC: slti        $v0, $a0, 0x41
        ctx->r2 = SIGNED(ctx->r4) < 0X41 ? 1 : 0;
            goto L_8005FAEC;
    }
    // 0x8005FABC: slti        $v0, $a0, 0x41
    ctx->r2 = SIGNED(ctx->r4) < 0X41 ? 1 : 0;
    // 0x8005FAC0: beq         $v0, $zero, L_8005FAD8
    if (ctx->r2 == 0) {
        // 0x8005FAC4: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_8005FAD8;
    }
    // 0x8005FAC4: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8005FAC8: beq         $a0, $v0, L_8005FAEC
    if (ctx->r4 == ctx->r2) {
        // 0x8005FACC: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_8005FAEC;
    }
    // 0x8005FACC: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x8005FAD0: j           L_8005FB20
    // 0x8005FAD4: nop

        goto L_8005FB20;
    // 0x8005FAD4: nop

L_8005FAD8:
    // 0x8005FAD8: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x8005FADC: beq         $a0, $v0, L_8005FAEC
    if (ctx->r4 == ctx->r2) {
        // 0x8005FAE0: addiu       $v0, $zero, 0xE0
        ctx->r2 = ADD32(0, 0XE0);
            goto L_8005FAEC;
    }
    // 0x8005FAE0: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x8005FAE4: bne         $a0, $v0, L_8005FB20
    if (ctx->r4 != ctx->r2) {
        // 0x8005FAE8: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_8005FB20;
    }
    // 0x8005FAE8: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_8005FAEC:
    // 0x8005FAEC: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8005FAF0: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x8005FAF4: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8005FAF8: sb          $v0, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r2;
    // 0x8005FAFC: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8005FB00: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x8005FB04: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8005FB08: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    // 0x8005FB0C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8005FB10: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x8005FB14: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8005FB18: sb          $v0, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r2;
    // 0x8005FB1C: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_8005FB20:
    // 0x8005FB20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005FB24: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8005FB28: jr          $ra
    // 0x8005FB2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8005FB2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8007FBC0_5AFC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007FBC0: andi        $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 & 0XFFFF;
    // 0x8007FBC4: beq         $a0, $zero, L_8007FBD8
    if (ctx->r4 == 0) {
        // 0x8007FBC8: andi        $v0, $a2, 0xFFFF
        ctx->r2 = ctx->r6 & 0XFFFF;
            goto L_8007FBD8;
    }
    // 0x8007FBC8: andi        $v0, $a2, 0xFFFF
    ctx->r2 = ctx->r6 & 0XFFFF;
    // 0x8007FBCC: lw          $v1, 0x70($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X70);
    // 0x8007FBD0: j           L_8007FBFC
    // 0x8007FBD4: nop

        goto L_8007FBFC;
    // 0x8007FBD4: nop

L_8007FBD8:
    // 0x8007FBD8: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8007FBDC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8007FBE0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8007FBE4: lhu         $v0, 0x4988($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X4988);
    // 0x8007FBE8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8007FBEC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8007FBF0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8007FBF4: lw          $v0, -0x1AB0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1AB0);
    // 0x8007FBF8: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
L_8007FBFC:
    // 0x8007FBFC: lw          $a0, 0x8($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X8);
    // 0x8007FC00: lw          $v0, 0x28($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X28);
    // 0x8007FC04: srl         $a1, $v0, 5
    ctx->r5 = S32(U32(ctx->r2) >> 5);
    // 0x8007FC08: sh          $a1, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r5;
    // 0x8007FC0C: lhu         $v1, 0x2($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X2);
    // 0x8007FC10: addiu       $v0, $v1, -0x1A
    ctx->r2 = ADD32(ctx->r3, -0X1A);
    // 0x8007FC14: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x8007FC18: bne         $v0, $zero, L_8007FC30
    if (ctx->r2 != 0) {
        // 0x8007FC1C: addu        $a2, $a0, $zero
        ctx->r6 = ADD32(ctx->r4, 0);
            goto L_8007FC30;
    }
    // 0x8007FC1C: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x8007FC20: andi        $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 & 0XFFFF;
    // 0x8007FC24: addiu       $v0, $zero, 0x1C
    ctx->r2 = ADD32(0, 0X1C);
    // 0x8007FC28: bne         $v1, $v0, L_8007FC38
    if (ctx->r3 != ctx->r2) {
        // 0x8007FC2C: nop
    
            goto L_8007FC38;
    }
    // 0x8007FC2C: nop

L_8007FC30:
    // 0x8007FC30: addiu       $v0, $a1, -0x1
    ctx->r2 = ADD32(ctx->r5, -0X1);
    // 0x8007FC34: sh          $v0, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r2;
L_8007FC38:
    // 0x8007FC38: lw          $v0, 0x24($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X24);
    // 0x8007FC3C: jr          $ra
    // 0x8007FC40: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    TRACE_RETURN()
    return;
    // 0x8007FC40: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
;}
RECOMP_FUNC void func_8004DB18_28F18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004DB18: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8004DB1C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8004DB20: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8004DB24: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x8004DB28: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8004DB2C: lh          $v1, 0x56($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X56);
    // 0x8004DB30: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x8004DB34: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    // 0x8004DB38: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x8004DB3C: sw          $a3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r7;
    // 0x8004DB40: sll         $a3, $a2, 16
    ctx->r7 = S32(ctx->r6 << 16);
    // 0x8004DB44: sra         $a2, $v0, 16
    ctx->r6 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8004DB48: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    // 0x8004DB4C: jal         0x8004DC2C
    // 0x8004DB50: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    func_8004DC2C_2902C(rdram, ctx);
        goto after_0;
    // 0x8004DB50: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    after_0:
    // 0x8004DB54: lw          $v0, 0x428($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X428);
    // 0x8004DB58: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x8004DB5C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8004DB60: sw          $v0, 0x428($s0)
    MEM_W(0X428, ctx->r16) = ctx->r2;
    // 0x8004DB64: lw          $v0, 0x42C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X42C);
    // 0x8004DB68: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8004DB6C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8004DB70: sw          $v0, 0x42C($s0)
    MEM_W(0X42C, ctx->r16) = ctx->r2;
    // 0x8004DB74: lw          $v0, 0x430($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X430);
    // 0x8004DB78: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x8004DB7C: addiu       $a0, $s0, 0x428
    ctx->r4 = ADD32(ctx->r16, 0X428);
    // 0x8004DB80: addiu       $a1, $s0, 0x438
    ctx->r5 = ADD32(ctx->r16, 0X438);
    // 0x8004DB84: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8004DB88: jal         0x8004DD04
    // 0x8004DB8C: sw          $v0, 0x430($s0)
    MEM_W(0X430, ctx->r16) = ctx->r2;
    func_8004DD04_29104(rdram, ctx);
        goto after_1;
    // 0x8004DB8C: sw          $v0, 0x430($s0)
    MEM_W(0X430, ctx->r16) = ctx->r2;
    after_1:
    // 0x8004DB90: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8004DB94: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8004DB98: jr          $ra
    // 0x8004DB9C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8004DB9C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80049330_24730(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80049330: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80049334: lw          $v0, 0x6B30($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6B30);
    // 0x80049338: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8004933C: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x80049340: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80049344: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x80049348: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x8004934C: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x80049350: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x80049354: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x80049358: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x8004935C: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x80049360: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x80049364: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x80049368: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8004936C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80049370: sw          $v0, 0x6B30($at)
    MEM_W(0X6B30, ctx->r1) = ctx->r2;
    // 0x80049374: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x80049378: beq         $v0, $zero, L_80049390
    if (ctx->r2 == 0) {
        // 0x8004937C: addiu       $t0, $zero, 0x10
        ctx->r8 = ADD32(0, 0X10);
            goto L_80049390;
    }
    // 0x8004937C: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
    // 0x80049380: lh          $t0, 0x14($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X14);
    // 0x80049384: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x80049388: j           L_80049398
    // 0x8004938C: lh          $s7, 0x16($s0)
    ctx->r23 = MEM_H(ctx->r16, 0X16);
        goto L_80049398;
    // 0x8004938C: lh          $s7, 0x16($s0)
    ctx->r23 = MEM_H(ctx->r16, 0X16);
L_80049390:
    // 0x80049390: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x80049394: addiu       $s7, $zero, 0x88
    ctx->r23 = ADD32(0, 0X88);
L_80049398:
    // 0x80049398: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8004939C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800493A0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x800493A4: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x800493A8: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x800493AC: slti        $v0, $v0, 0xC
    ctx->r2 = SIGNED(ctx->r2) < 0XC ? 1 : 0;
    // 0x800493B0: beql        $v0, $zero, L_800493B8
    if (ctx->r2 == 0) {
        // 0x800493B4: sb          $zero, 0x8($s0)
        MEM_B(0X8, ctx->r16) = 0;
            goto L_800493B8;
    }
    goto skip_0;
    // 0x800493B4: sb          $zero, 0x8($s0)
    MEM_B(0X8, ctx->r16) = 0;
    skip_0:
L_800493B8:
    // 0x800493B8: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x800493BC: beq         $v0, $zero, L_800493FC
    if (ctx->r2 == 0) {
        // 0x800493C0: addu        $a2, $s7, $zero
        ctx->r6 = ADD32(ctx->r23, 0);
            goto L_800493FC;
    }
    // 0x800493C0: addu        $a2, $s7, $zero
    ctx->r6 = ADD32(ctx->r23, 0);
    // 0x800493C4: lb          $v0, 0x8($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X8);
    // 0x800493C8: lw          $a1, 0x14($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X14);
    // 0x800493CC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800493D0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800493D4: lbu         $v0, -0x2F08($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X2F08);
    // 0x800493D8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x800493DC: sll         $a0, $v0, 2
    ctx->r4 = S32(ctx->r2 << 2);
    // 0x800493E0: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x800493E4: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x800493E8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x800493EC: addiu       $v0, $v0, -0x317C
    ctx->r2 = ADD32(ctx->r2, -0X317C);
    // 0x800493F0: jal         0x80049CCC
    // 0x800493F4: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_80049CCC_250CC(rdram, ctx);
        goto after_0;
    // 0x800493F4: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_0:
    // 0x800493F8: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
L_800493FC:
    // 0x800493FC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80049400: beql        $v0, $a0, L_80049408
    if (ctx->r2 == ctx->r4) {
        // 0x80049404: sb          $zero, 0xC($s0)
        MEM_B(0XC, ctx->r16) = 0;
            goto L_80049408;
    }
    goto skip_1;
    // 0x80049404: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    skip_1:
L_80049408:
    // 0x80049408: lbu         $v1, 0xD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XD);
    // 0x8004940C: beq         $v1, $a0, L_80049438
    if (ctx->r3 == ctx->r4) {
        // 0x80049410: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80049438;
    }
    // 0x80049410: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80049414: bne         $v0, $zero, L_80049494
    if (ctx->r2 != 0) {
        // 0x80049418: addu        $s6, $zero, $zero
        ctx->r22 = ADD32(0, 0);
            goto L_80049494;
    }
    // 0x80049418: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
    // 0x8004941C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80049420: beq         $v1, $v0, L_80049440
    if (ctx->r3 == ctx->r2) {
        // 0x80049424: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80049440;
    }
    // 0x80049424: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80049428: beq         $v1, $v0, L_80049470
    if (ctx->r3 == ctx->r2) {
        // 0x8004942C: nop
    
            goto L_80049470;
    }
    // 0x8004942C: nop

    // 0x80049430: j           L_80049498
    // 0x80049434: sll         $s0, $s6, 1
    ctx->r16 = S32(ctx->r22 << 1);
        goto L_80049498;
    // 0x80049434: sll         $s0, $s6, 1
    ctx->r16 = S32(ctx->r22 << 1);
L_80049438:
    // 0x80049438: j           L_80049494
    // 0x8004943C: addiu       $s6, $zero, 0x4
    ctx->r22 = ADD32(0, 0X4);
        goto L_80049494;
    // 0x8004943C: addiu       $s6, $zero, 0x4
    ctx->r22 = ADD32(0, 0X4);
L_80049440:
    // 0x80049440: lb          $v0, 0x9($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X9);
    // 0x80049444: lui         $s6, 0x800B
    ctx->r22 = S32(0X800B << 16);
    // 0x80049448: addu        $s6, $s6, $v0
    ctx->r22 = ADD32(ctx->r22, ctx->r2);
    // 0x8004944C: lbu         $s6, -0x2EFC($s6)
    ctx->r22 = MEM_BU(ctx->r22, -0X2EFC);
    // 0x80049450: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80049454: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80049458: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8004945C: bnel        $v0, $zero, L_80049498
    if (ctx->r2 != 0) {
        // 0x80049460: sll         $s0, $s6, 1
        ctx->r16 = S32(ctx->r22 << 1);
            goto L_80049498;
    }
    goto skip_2;
    // 0x80049460: sll         $s0, $s6, 1
    ctx->r16 = S32(ctx->r22 << 1);
    skip_2:
    // 0x80049464: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80049468: j           L_80049494
    // 0x8004946C: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
        goto L_80049494;
    // 0x8004946C: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
L_80049470:
    // 0x80049470: lb          $v0, 0x9($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X9);
    // 0x80049474: lui         $s6, 0x800B
    ctx->r22 = S32(0X800B << 16);
    // 0x80049478: addu        $s6, $s6, $v0
    ctx->r22 = ADD32(ctx->r22, ctx->r2);
    // 0x8004947C: lbu         $s6, -0x2EDC($s6)
    ctx->r22 = MEM_BU(ctx->r22, -0X2EDC);
    // 0x80049480: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80049484: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80049488: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8004948C: beql        $v0, $zero, L_80049494
    if (ctx->r2 == 0) {
        // 0x80049490: sb          $zero, 0xD($s0)
        MEM_B(0XD, ctx->r16) = 0;
            goto L_80049494;
    }
    goto skip_3;
    // 0x80049490: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    skip_3:
L_80049494:
    // 0x80049494: sll         $s0, $s6, 1
    ctx->r16 = S32(ctx->r22 << 1);
L_80049498:
    // 0x80049498: addu        $s0, $s0, $s6
    ctx->r16 = ADD32(ctx->r16, ctx->r22);
    // 0x8004949C: sll         $s0, $s0, 3
    ctx->r16 = S32(ctx->r16 << 3);
    // 0x800494A0: addu        $s0, $s0, $s6
    ctx->r16 = ADD32(ctx->r16, ctx->r22);
    // 0x800494A4: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    // 0x800494A8: lui         $s2, 0x800B
    ctx->r18 = S32(0X800B << 16);
    // 0x800494AC: addiu       $s2, $s2, -0x3370
    ctx->r18 = ADD32(ctx->r18, -0X3370);
    // 0x800494B0: addu        $a0, $s0, $s2
    ctx->r4 = ADD32(ctx->r16, ctx->r18);
    // 0x800494B4: lw          $t0, 0x14($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X14);
    // 0x800494B8: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x800494BC: lhu         $v1, 0x4A60($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X4A60);
    // 0x800494C0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x800494C4: sll         $t0, $t0, 16
    ctx->r8 = S32(ctx->r8 << 16);
    // 0x800494C8: sra         $s4, $t0, 16
    ctx->r20 = S32(SIGNED(ctx->r8) >> 16);
    // 0x800494CC: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x800494D0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x800494D4: sra         $v1, $v1, 20
    ctx->r3 = S32(SIGNED(ctx->r3) >> 20);
    // 0x800494D8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x800494DC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800494E0: addiu       $fp, $v0, -0xA
    ctx->r30 = ADD32(ctx->r2, -0XA);
    // 0x800494E4: subu        $s1, $s7, $fp
    ctx->r17 = SUB32(ctx->r23, ctx->r30);
    // 0x800494E8: sll         $s1, $s1, 16
    ctx->r17 = S32(ctx->r17 << 16);
    // 0x800494EC: sra         $s1, $s1, 16
    ctx->r17 = S32(SIGNED(ctx->r17) >> 16);
    // 0x800494F0: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x800494F4: jal         0x80049CCC
    // 0x800494F8: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    func_80049CCC_250CC(rdram, ctx);
        goto after_1;
    // 0x800494F8: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    after_1:
    // 0x800494FC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80049500: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x80049504: lui         $a3, 0x8018
    ctx->r7 = S32(0X8018 << 16);
    // 0x80049508: lw          $a3, -0x4A00($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X4A00);
    // 0x8004950C: lui         $s3, 0x8009
    ctx->r19 = S32(0X8009 << 16);
    // 0x80049510: addiu       $s3, $s3, -0x6330
    ctx->r19 = ADD32(ctx->r19, -0X6330);
    // 0x80049514: jal         0x800283A8
    // 0x80049518: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    func_800283A8_37A8(rdram, ctx);
        goto after_2;
    // 0x80049518: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_2:
    // 0x8004951C: addiu       $a0, $s2, 0x28
    ctx->r4 = ADD32(ctx->r18, 0X28);
    // 0x80049520: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    // 0x80049524: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x80049528: addu        $s5, $s7, $zero
    ctx->r21 = ADD32(ctx->r23, 0);
    // 0x8004952C: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    // 0x80049530: jal         0x80049CCC
    // 0x80049534: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80049CCC_250CC(rdram, ctx);
        goto after_3;
    // 0x80049534: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
    // 0x80049538: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8004953C: lui         $a3, 0x8018
    ctx->r7 = S32(0X8018 << 16);
    // 0x80049540: lw          $a3, -0x4A00($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X4A00);
    // 0x80049544: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x80049548: jal         0x800283A8
    // 0x8004954C: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    func_800283A8_37A8(rdram, ctx);
        goto after_4;
    // 0x8004954C: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_4:
    // 0x80049550: addiu       $a0, $s2, 0x14
    ctx->r4 = ADD32(ctx->r18, 0X14);
    // 0x80049554: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    // 0x80049558: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x8004955C: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x80049560: addu        $a3, $a3, $s0
    ctx->r7 = ADD32(ctx->r7, ctx->r16);
    // 0x80049564: lhu         $a3, -0x3354($a3)
    ctx->r7 = MEM_HU(ctx->r7, -0X3354);
    // 0x80049568: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x8004956C: sll         $v0, $fp, 8
    ctx->r2 = S32(ctx->r30 << 8);
    // 0x80049570: or          $a3, $a3, $v0
    ctx->r7 = ctx->r7 | ctx->r2;
    // 0x80049574: jal         0x80049CCC
    // 0x80049578: andi        $a3, $a3, 0xFFFF
    ctx->r7 = ctx->r7 & 0XFFFF;
    func_80049CCC_250CC(rdram, ctx);
        goto after_5;
    // 0x80049578: andi        $a3, $a3, 0xFFFF
    ctx->r7 = ctx->r7 & 0XFFFF;
    after_5:
    // 0x8004957C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80049580: lui         $a3, 0x8018
    ctx->r7 = S32(0X8018 << 16);
    // 0x80049584: lw          $a3, -0x4A00($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X4A00);
    // 0x80049588: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x8004958C: jal         0x800283A8
    // 0x80049590: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    func_800283A8_37A8(rdram, ctx);
        goto after_6;
    // 0x80049590: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_6:
    // 0x80049594: addiu       $s2, $s2, 0x3C
    ctx->r18 = ADD32(ctx->r18, 0X3C);
    // 0x80049598: addu        $a0, $s0, $s2
    ctx->r4 = ADD32(ctx->r16, ctx->r18);
    // 0x8004959C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x800495A0: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    // 0x800495A4: jal         0x80049CCC
    // 0x800495A8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80049CCC_250CC(rdram, ctx);
        goto after_7;
    // 0x800495A8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_7:
    // 0x800495AC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x800495B0: lui         $a3, 0x8018
    ctx->r7 = S32(0X8018 << 16);
    // 0x800495B4: lw          $a3, -0x4A00($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X4A00);
    // 0x800495B8: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x800495BC: jal         0x800283A8
    // 0x800495C0: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    func_800283A8_37A8(rdram, ctx);
        goto after_8;
    // 0x800495C0: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_8:
    // 0x800495C4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x800495C8: lhu         $v0, 0x4A1E($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4A1E);
    // 0x800495CC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x800495D0: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x800495D4: blez        $v1, L_8004964C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x800495D8: sra         $s2, $v0, 20
        ctx->r18 = S32(SIGNED(ctx->r2) >> 20);
            goto L_8004964C;
    }
    // 0x800495D8: sra         $s2, $v0, 20
    ctx->r18 = S32(SIGNED(ctx->r2) >> 20);
    // 0x800495DC: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x800495E0: sll         $v0, $s2, 4
    ctx->r2 = S32(ctx->r18 << 4);
    // 0x800495E4: beq         $s2, $zero, L_80049620
    if (ctx->r18 == 0) {
        // 0x800495E8: subu        $s3, $v1, $v0
        ctx->r19 = SUB32(ctx->r3, ctx->r2);
            goto L_80049620;
    }
    // 0x800495E8: subu        $s3, $v1, $v0
    ctx->r19 = SUB32(ctx->r3, ctx->r2);
    // 0x800495EC: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x800495F0: addu        $s1, $s7, $zero
    ctx->r17 = ADD32(ctx->r23, 0);
L_800495F4:
    // 0x800495F4: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x800495F8: addiu       $a0, $a0, -0x3104
    ctx->r4 = ADD32(ctx->r4, -0X3104);
    // 0x800495FC: sra         $a1, $s4, 16
    ctx->r5 = S32(SIGNED(ctx->r20) >> 16);
    // 0x80049600: sll         $a2, $s1, 16
    ctx->r6 = S32(ctx->r17 << 16);
    // 0x80049604: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80049608: jal         0x80049CCC
    // 0x8004960C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80049CCC_250CC(rdram, ctx);
        goto after_9;
    // 0x8004960C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_9:
    // 0x80049610: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80049614: sltu        $v0, $s0, $s2
    ctx->r2 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x80049618: bne         $v0, $zero, L_800495F4
    if (ctx->r2 != 0) {
        // 0x8004961C: addiu       $s1, $s1, -0x5
        ctx->r17 = ADD32(ctx->r17, -0X5);
            goto L_800495F4;
    }
    // 0x8004961C: addiu       $s1, $s1, -0x5
    ctx->r17 = ADD32(ctx->r17, -0X5);
L_80049620:
    // 0x80049620: beq         $s3, $zero, L_8004964C
    if (ctx->r19 == 0) {
        // 0x80049624: sll         $a2, $s2, 2
        ctx->r6 = S32(ctx->r18 << 2);
            goto L_8004964C;
    }
    // 0x80049624: sll         $a2, $s2, 2
    ctx->r6 = S32(ctx->r18 << 2);
    // 0x80049628: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8004962C: addiu       $a0, $a0, -0x30F0
    ctx->r4 = ADD32(ctx->r4, -0X30F0);
    // 0x80049630: lw          $a1, 0x14($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X14);
    // 0x80049634: addu        $a2, $a2, $s2
    ctx->r6 = ADD32(ctx->r6, ctx->r18);
    // 0x80049638: subu        $a2, $s7, $a2
    ctx->r6 = SUB32(ctx->r23, ctx->r6);
    // 0x8004963C: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x80049640: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80049644: jal         0x80049CCC
    // 0x80049648: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80049CCC_250CC(rdram, ctx);
        goto after_10;
    // 0x80049648: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_10:
L_8004964C:
    // 0x8004964C: sll         $a0, $s6, 1
    ctx->r4 = S32(ctx->r22 << 1);
    // 0x80049650: addu        $a0, $a0, $s6
    ctx->r4 = ADD32(ctx->r4, ctx->r22);
    // 0x80049654: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x80049658: addu        $a0, $a0, $s6
    ctx->r4 = ADD32(ctx->r4, ctx->r22);
    // 0x8004965C: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x80049660: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80049664: addiu       $v0, $v0, -0x3320
    ctx->r2 = ADD32(ctx->r2, -0X3320);
    // 0x80049668: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8004966C: lw          $a1, 0x14($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X14);
    // 0x80049670: subu        $a2, $s7, $fp
    ctx->r6 = SUB32(ctx->r23, ctx->r30);
    // 0x80049674: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x80049678: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8004967C: addiu       $a3, $fp, 0x10
    ctx->r7 = ADD32(ctx->r30, 0X10);
    // 0x80049680: sll         $a3, $a3, 8
    ctx->r7 = S32(ctx->r7 << 8);
    // 0x80049684: ori         $a3, $a3, 0x10
    ctx->r7 = ctx->r7 | 0X10;
    // 0x80049688: jal         0x80049CCC
    // 0x8004968C: andi        $a3, $a3, 0xFF10
    ctx->r7 = ctx->r7 & 0XFF10;
    func_80049CCC_250CC(rdram, ctx);
        goto after_11;
    // 0x8004968C: andi        $a3, $a3, 0xFF10
    ctx->r7 = ctx->r7 & 0XFF10;
    after_11:
    // 0x80049690: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x80049694: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x80049698: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x8004969C: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x800496A0: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x800496A4: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x800496A8: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x800496AC: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x800496B0: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x800496B4: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x800496B8: jr          $ra
    // 0x800496BC: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x800496BC: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_8005D5E8_389E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8005D5E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005D5EC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8005D5F0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8005D5F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005D5F8: lb          $v1, 0x1($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X1);
    // 0x8005D5FC: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8005D600: beq         $v0, $zero, L_8005D6D8
    if (ctx->r2 == 0) {
        // 0x8005D604: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8005D6D8;
    }
    // 0x8005D604: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8005D608: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8005D60C: addu        $at, $at, $v0
    gpr jr_addend_8005D614 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8005D610: lw          $v0, 0x2720($at)
    ctx->r2 = ADD32(ctx->r1, 0X2720);
    // 0x8005D614: jr          $v0
    // 0x8005D618: nop

    switch (jr_addend_8005D614 >> 2) {
        case 0: goto L_8005D61C; break;
        case 1: goto L_8005D640; break;
        case 2: goto L_8005D668; break;
        case 3: goto L_8005D680; break;
        case 4: goto L_8005D6C0; break;
        default: switch_error(__func__, 0x8005D614, 0x800D2720);
    }
    // 0x8005D618: nop

L_8005D61C:
    // 0x8005D61C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8005D620: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8005D624: bne         $v0, $zero, L_8005D6D8
    if (ctx->r2 != 0) {
        // 0x8005D628: nop
    
            goto L_8005D6D8;
    }
    // 0x8005D628: nop

    // 0x8005D62C: jal         0x80036E48
    // 0x8005D630: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80036E48_12248(rdram, ctx);
        goto after_0;
    // 0x8005D630: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_0:
    // 0x8005D634: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x8005D638: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8005D63C: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
L_8005D640:
    // 0x8005D640: jal         0x80061724
    // 0x8005D644: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_1;
    // 0x8005D644: nop

    after_1:
    // 0x8005D648: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x8005D64C: addiu       $v1, $zero, 0x384
    ctx->r3 = ADD32(0, 0X384);
    // 0x8005D650: sh          $v1, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r3;
    // 0x8005D654: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8005D658: jal         0x8005DF8C
    // 0x8005D65C: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
    func_8005DF8C_3938C(rdram, ctx);
        goto after_2;
    // 0x8005D65C: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
    after_2:
    // 0x8005D660: j           L_8005D6D8
    // 0x8005D664: nop

        goto L_8005D6D8;
    // 0x8005D664: nop

L_8005D668:
    // 0x8005D668: jal         0x8005DF8C
    // 0x8005D66C: nop

    func_8005DF8C_3938C(rdram, ctx);
        goto after_3;
    // 0x8005D66C: nop

    after_3:
    // 0x8005D670: jal         0x8005DF40
    // 0x8005D674: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005DF40_39340(rdram, ctx);
        goto after_4;
    // 0x8005D674: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8005D678: j           L_8005D6D8
    // 0x8005D67C: nop

        goto L_8005D6D8;
    // 0x8005D67C: nop

L_8005D680:
    // 0x8005D680: jal         0x8005DF8C
    // 0x8005D684: nop

    func_8005DF8C_3938C(rdram, ctx);
        goto after_5;
    // 0x8005D684: nop

    after_5:
    // 0x8005D688: jal         0x8005E34C
    // 0x8005D68C: nop

    func_8005E34C_3974C(rdram, ctx);
        goto after_6;
    // 0x8005D68C: nop

    after_6:
    // 0x8005D690: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x8005D694: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8005D698: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x8005D69C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8005D6A0: bne         $v0, $zero, L_8005D6D8
    if (ctx->r2 != 0) {
        // 0x8005D6A4: addiu       $a0, $zero, 0xA
        ctx->r4 = ADD32(0, 0XA);
            goto L_8005D6D8;
    }
    // 0x8005D6A4: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x8005D6A8: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x8005D6AC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8005D6B0: jal         0x80036E48
    // 0x8005D6B4: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
    func_80036E48_12248(rdram, ctx);
        goto after_7;
    // 0x8005D6B4: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
    after_7:
    // 0x8005D6B8: j           L_8005D6D8
    // 0x8005D6BC: nop

        goto L_8005D6D8;
    // 0x8005D6BC: nop

L_8005D6C0:
    // 0x8005D6C0: jal         0x80061724
    // 0x8005D6C4: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_8;
    // 0x8005D6C4: nop

    after_8:
    // 0x8005D6C8: jal         0x8005DF8C
    // 0x8005D6CC: nop

    func_8005DF8C_3938C(rdram, ctx);
        goto after_9;
    // 0x8005D6CC: nop

    after_9:
    // 0x8005D6D0: jal         0x8005DF64
    // 0x8005D6D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005DF64_39364(rdram, ctx);
        goto after_10;
    // 0x8005D6D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_10:
L_8005D6D8:
    // 0x8005D6D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005D6DC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8005D6E0: jr          $ra
    // 0x8005D6E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8005D6E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800799AC_54DAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800799AC: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x800799B0: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x800799B4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x800799B8: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x800799BC: addiu       $s1, $sp, 0x18
    ctx->r17 = ADD32(ctx->r29, 0X18);
    // 0x800799C0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x800799C4: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x800799C8: addiu       $s2, $s0, 0x18
    ctx->r18 = ADD32(ctx->r16, 0X18);
    // 0x800799CC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x800799D0: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x800799D4: jal         0x8009A3B4
    // 0x800799D8: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x800799D8: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_0:
    // 0x800799DC: jal         0x800A3450
    // 0x800799E0: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x800799E0: nop

    after_1:
    // 0x800799E4: lhu         $v1, 0xE($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XE);
    // 0x800799E8: andi        $a0, $v0, 0x7F
    ctx->r4 = ctx->r2 & 0X7F;
    // 0x800799EC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x800799F0: addiu       $v1, $v1, 0x80
    ctx->r3 = ADD32(ctx->r3, 0X80);
    // 0x800799F4: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x800799F8: sh          $v1, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r3;
    // 0x800799FC: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    // 0x80079A00: lhu         $v1, 0xC($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XC);
    // 0x80079A04: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80079A08: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80079A0C: addiu       $v1, $v1, 0x40
    ctx->r3 = ADD32(ctx->r3, 0X40);
    // 0x80079A10: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80079A14: sh          $v1, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r3;
    // 0x80079A18: sh          $v1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r3;
    // 0x80079A1C: jal         0x80031428
    // 0x80079A20: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    func_80031428_C828(rdram, ctx);
        goto after_2;
    // 0x80079A20: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    after_2:
    // 0x80079A24: lh          $v0, 0x3E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X3E);
    // 0x80079A28: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80079A2C: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x80079A30: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x80079A34: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x80079A38: jal         0x80031DA8
    // 0x80079A3C: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_3;
    // 0x80079A3C: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    after_3:
    // 0x80079A40: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80079A44: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80079A48: jal         0x8009A3B4
    // 0x80079A4C: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80079A4C: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_4:
    // 0x80079A50: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x80079A54: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x80079A58: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x80079A5C: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x80079A60: jr          $ra
    // 0x80079A64: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x80079A64: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
