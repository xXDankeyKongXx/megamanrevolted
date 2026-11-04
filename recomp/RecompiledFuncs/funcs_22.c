#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80066070_41470(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80066070: lhu         $v0, 0xBE($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XBE);
    // 0x80066074: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x80066078: sh          $v1, 0xBE($a0)
    MEM_H(0XBE, ctx->r4) = ctx->r3;
    // 0x8006607C: lw          $v1, 0x14($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X14);
    // 0x80066080: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80066084: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80066088: addiu       $v1, $v1, 0x5
    ctx->r3 = ADD32(ctx->r3, 0X5);
    // 0x8006608C: sw          $v1, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r3;
    // 0x80066090: lhu         $v0, 0xC2($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XC2);
    // 0x80066094: lw          $a1, 0x44($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X44);
    // 0x80066098: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8006609C: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x800660A0: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x800660A4: srl         $v1, $v0, 8
    ctx->r3 = S32(U32(ctx->r2) >> 8);
    // 0x800660A8: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x800660AC: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x800660B0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x800660B4: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x800660B8: jr          $ra
    // 0x800660BC: sw          $a1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x800660BC: sw          $a1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_8002724C_264C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002724C: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80027250: subu        $a1, $a1, $a0
    ctx->r5 = SUB32(ctx->r5, ctx->r4);
    // 0x80027254: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80027258: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    // 0x8002725C: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x80027260: and         $s1, $a1, $v0
    ctx->r17 = ctx->r5 & ctx->r2;
    // 0x80027264: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x80027268: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8002726C: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x80027270: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x80027274: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80027278: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8002727C: sw          $ra, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r31;
    // 0x80027280: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x80027284: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x80027288: jal         0x80099440
    // 0x8002728C: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    osInvalDCache_recomp(rdram, ctx);
        goto after_0;
    // 0x8002728C: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    after_0:
    // 0x80027290: beq         $s1, $zero, L_80027310
    if (ctx->r17 == 0) {
        // 0x80027294: lui         $s5, 0x8000
        ctx->r21 = S32(0X8000 << 16);
            goto L_80027310;
    }
    // 0x80027294: lui         $s5, 0x8000
    ctx->r21 = S32(0X8000 << 16);
    // 0x80027298: lui         $s4, 0x800D
    ctx->r20 = S32(0X800D << 16);
    // 0x8002729C: addiu       $s4, $s4, 0x3A18
    ctx->r20 = ADD32(ctx->r20, 0X3A18);
L_800272A0:
    // 0x800272A0: sltiu       $v0, $s1, 0x1001
    ctx->r2 = ctx->r17 < 0X1001 ? 1 : 0;
    // 0x800272A4: bne         $v0, $zero, L_800272B0
    if (ctx->r2 != 0) {
        // 0x800272A8: addu        $s0, $s1, $zero
        ctx->r16 = ADD32(ctx->r17, 0);
            goto L_800272B0;
    }
    // 0x800272A8: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
    // 0x800272AC: addiu       $s0, $zero, 0x1000
    ctx->r16 = ADD32(0, 0X1000);
L_800272B0:
    // 0x800272B0: and         $v0, $s2, $s5
    ctx->r2 = ctx->r18 & ctx->r21;
    // 0x800272B4: beq         $v0, $zero, L_800272D0
    if (ctx->r2 == 0) {
        // 0x800272B8: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_800272D0;
    }
    // 0x800272B8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x800272BC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x800272C0: jal         0x8009A3B4
    // 0x800272C4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x800272C4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_1:
    // 0x800272C8: j           L_80027304
    // 0x800272CC: addu        $s2, $s2, $s0
    ctx->r18 = ADD32(ctx->r18, ctx->r16);
        goto L_80027304;
    // 0x800272CC: addu        $s2, $s2, $s0
    ctx->r18 = ADD32(ctx->r18, ctx->r16);
L_800272D0:
    // 0x800272D0: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x800272D4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x800272D8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x800272DC: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    // 0x800272E0: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x800272E4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800272E8: jal         0x80094F50
    // 0x800272EC: sw          $s4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r20;
    osPiStartDma_recomp(rdram, ctx);
        goto after_2;
    // 0x800272EC: sw          $s4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r20;
    after_2:
    // 0x800272F0: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x800272F4: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x800272F8: jal         0x8009A5E0
    // 0x800272FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x800272FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x80027300: addu        $s2, $s2, $s0
    ctx->r18 = ADD32(ctx->r18, ctx->r16);
L_80027304:
    // 0x80027304: subu        $s1, $s1, $s0
    ctx->r17 = SUB32(ctx->r17, ctx->r16);
    // 0x80027308: bne         $s1, $zero, L_800272A0
    if (ctx->r17 != 0) {
        // 0x8002730C: addu        $s3, $s3, $s0
        ctx->r19 = ADD32(ctx->r19, ctx->r16);
            goto L_800272A0;
    }
    // 0x8002730C: addu        $s3, $s3, $s0
    ctx->r19 = ADD32(ctx->r19, ctx->r16);
L_80027310:
    // 0x80027310: lw          $ra, 0x58($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X58);
    // 0x80027314: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x80027318: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x8002731C: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x80027320: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x80027324: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x80027328: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x8002732C: jr          $ra
    // 0x80027330: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x80027330: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80053CBC_2F0BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80053CBC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80053CC0: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80053CC4: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x80053CC8: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80053CCC: lui         $s5, 0x8020
    ctx->r21 = S32(0X8020 << 16);
    // 0x80053CD0: addiu       $s5, $s5, -0x420
    ctx->r21 = ADD32(ctx->r21, -0X420);
    // 0x80053CD4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80053CD8: lui         $s2, 0x1000
    ctx->r18 = S32(0X1000 << 16);
    // 0x80053CDC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80053CE0: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    // 0x80053CE4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80053CE8: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80053CEC: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80053CF0: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x80053CF4: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
L_80053CF8:
    // 0x80053CF8: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80053CFC: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80053D00: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80053D04: addu        $a1, $s3, $a1
    ctx->r5 = ADD32(ctx->r19, ctx->r5);
    // 0x80053D08: jal         0x8009A3B4
    // 0x80053D0C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80053D0C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80053D10: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80053D14: addu        $a3, $s5, $zero
    ctx->r7 = ADD32(ctx->r21, 0);
    // 0x80053D18: addu        $a1, $a3, $zero
    ctx->r5 = ADD32(ctx->r7, 0);
L_80053D1C:
    // 0x80053D1C: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x80053D20: addiu       $a3, $a1, 0x3C8
    ctx->r7 = ADD32(ctx->r5, 0X3C8);
    // 0x80053D24: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80053D28: beq         $v0, $zero, L_80053D84
    if (ctx->r2 == 0) {
        // 0x80053D2C: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_80053D84;
    }
    // 0x80053D2C: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80053D30: lh          $v0, 0x14($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X14);
    // 0x80053D34: lh          $v1, 0x10($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X10);
    // 0x80053D38: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80053D3C: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x80053D40: mult        $v0, $v0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80053D44: mflo        $a0
    ctx->r4 = lo;
    // 0x80053D48: lh          $v0, 0x18($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X18);
    // 0x80053D4C: lh          $v1, 0x14($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X14);
    // 0x80053D50: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80053D54: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x80053D58: mult        $v0, $v0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80053D5C: mflo        $v0
    ctx->r2 = lo;
    // 0x80053D60: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80053D64: sltu        $v0, $s2, $a0
    ctx->r2 = ctx->r18 < ctx->r4 ? 1 : 0;
    // 0x80053D68: beq         $v0, $zero, L_80053D78
    if (ctx->r2 == 0) {
        // 0x80053D6C: addu        $v0, $s0, $a1
        ctx->r2 = ADD32(ctx->r16, ctx->r5);
            goto L_80053D78;
    }
    // 0x80053D6C: addu        $v0, $s0, $a1
    ctx->r2 = ADD32(ctx->r16, ctx->r5);
    // 0x80053D70: j           L_80053D84
    // 0x80053D74: sw          $s1, 0x80($v0)
    MEM_W(0X80, ctx->r2) = ctx->r17;
        goto L_80053D84;
    // 0x80053D74: sw          $s1, 0x80($v0)
    MEM_W(0X80, ctx->r2) = ctx->r17;
L_80053D78:
    // 0x80053D78: addu        $v1, $s0, $a1
    ctx->r3 = ADD32(ctx->r16, ctx->r5);
    // 0x80053D7C: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x80053D80: sw          $v0, 0x80($v1)
    MEM_W(0X80, ctx->r3) = ctx->r2;
L_80053D84:
    // 0x80053D84: slti        $v0, $a2, 0x12
    ctx->r2 = SIGNED(ctx->r6) < 0X12 ? 1 : 0;
    // 0x80053D88: bne         $v0, $zero, L_80053D1C
    if (ctx->r2 != 0) {
        // 0x80053D8C: addu        $a1, $a3, $zero
        ctx->r5 = ADD32(ctx->r7, 0);
            goto L_80053D1C;
    }
    // 0x80053D8C: addu        $a1, $a3, $zero
    ctx->r5 = ADD32(ctx->r7, 0);
    // 0x80053D90: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80053D94: addu        $t0, $s0, $zero
    ctx->r8 = ADD32(ctx->r16, 0);
    // 0x80053D98: lui         $a3, 0x801C
    ctx->r7 = S32(0X801C << 16);
    // 0x80053D9C: addiu       $a3, $a3, -0x5F40
    ctx->r7 = ADD32(ctx->r7, -0X5F40);
    // 0x80053DA0: addu        $a1, $a3, $zero
    ctx->r5 = ADD32(ctx->r7, 0);
L_80053DA4:
    // 0x80053DA4: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x80053DA8: addiu       $a3, $a1, 0x5AC
    ctx->r7 = ADD32(ctx->r5, 0X5AC);
    // 0x80053DAC: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80053DB0: beq         $v0, $zero, L_80053E0C
    if (ctx->r2 == 0) {
        // 0x80053DB4: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_80053E0C;
    }
    // 0x80053DB4: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80053DB8: lh          $v0, 0x14($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X14);
    // 0x80053DBC: lh          $v1, 0x10($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X10);
    // 0x80053DC0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80053DC4: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x80053DC8: mult        $v0, $v0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80053DCC: mflo        $a0
    ctx->r4 = lo;
    // 0x80053DD0: lh          $v0, 0x18($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X18);
    // 0x80053DD4: lh          $v1, 0x14($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X14);
    // 0x80053DD8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80053DDC: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x80053DE0: mult        $v0, $v0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80053DE4: mflo        $v0
    ctx->r2 = lo;
    // 0x80053DE8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80053DEC: sltu        $v0, $s2, $a0
    ctx->r2 = ctx->r18 < ctx->r4 ? 1 : 0;
    // 0x80053DF0: beq         $v0, $zero, L_80053E00
    if (ctx->r2 == 0) {
        // 0x80053DF4: addu        $v0, $t0, $a1
        ctx->r2 = ADD32(ctx->r8, ctx->r5);
            goto L_80053E00;
    }
    // 0x80053DF4: addu        $v0, $t0, $a1
    ctx->r2 = ADD32(ctx->r8, ctx->r5);
    // 0x80053DF8: j           L_80053E0C
    // 0x80053DFC: sw          $s1, 0x80($v0)
    MEM_W(0X80, ctx->r2) = ctx->r17;
        goto L_80053E0C;
    // 0x80053DFC: sw          $s1, 0x80($v0)
    MEM_W(0X80, ctx->r2) = ctx->r17;
L_80053E00:
    // 0x80053E00: addu        $v1, $t0, $a1
    ctx->r3 = ADD32(ctx->r8, ctx->r5);
    // 0x80053E04: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x80053E08: sw          $v0, 0x80($v1)
    MEM_W(0X80, ctx->r3) = ctx->r2;
L_80053E0C:
    // 0x80053E0C: slti        $v0, $a2, 0x4
    ctx->r2 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
    // 0x80053E10: bne         $v0, $zero, L_80053DA4
    if (ctx->r2 != 0) {
        // 0x80053E14: addu        $a1, $a3, $zero
        ctx->r5 = ADD32(ctx->r7, 0);
            goto L_80053DA4;
    }
    // 0x80053E14: addu        $a1, $a3, $zero
    ctx->r5 = ADD32(ctx->r7, 0);
    // 0x80053E18: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80053E1C: addu        $t0, $s0, $zero
    ctx->r8 = ADD32(ctx->r16, 0);
    // 0x80053E20: lui         $a3, 0x8021
    ctx->r7 = S32(0X8021 << 16);
    // 0x80053E24: addiu       $a3, $a3, -0x2100
    ctx->r7 = ADD32(ctx->r7, -0X2100);
    // 0x80053E28: addu        $a1, $a3, $zero
    ctx->r5 = ADD32(ctx->r7, 0);
L_80053E2C:
    // 0x80053E2C: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x80053E30: addiu       $a3, $a1, 0x118
    ctx->r7 = ADD32(ctx->r5, 0X118);
    // 0x80053E34: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80053E38: beq         $v0, $zero, L_80053E94
    if (ctx->r2 == 0) {
        // 0x80053E3C: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_80053E94;
    }
    // 0x80053E3C: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80053E40: lh          $v0, 0x14($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X14);
    // 0x80053E44: lh          $v1, 0x10($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X10);
    // 0x80053E48: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80053E4C: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x80053E50: mult        $v0, $v0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80053E54: mflo        $a0
    ctx->r4 = lo;
    // 0x80053E58: lh          $v0, 0x18($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X18);
    // 0x80053E5C: lh          $v1, 0x14($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X14);
    // 0x80053E60: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80053E64: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x80053E68: mult        $v0, $v0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80053E6C: mflo        $v0
    ctx->r2 = lo;
    // 0x80053E70: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80053E74: sltu        $v0, $s2, $a0
    ctx->r2 = ctx->r18 < ctx->r4 ? 1 : 0;
    // 0x80053E78: beq         $v0, $zero, L_80053E88
    if (ctx->r2 == 0) {
        // 0x80053E7C: addu        $v0, $t0, $a1
        ctx->r2 = ADD32(ctx->r8, ctx->r5);
            goto L_80053E88;
    }
    // 0x80053E7C: addu        $v0, $t0, $a1
    ctx->r2 = ADD32(ctx->r8, ctx->r5);
    // 0x80053E80: j           L_80053E94
    // 0x80053E84: sw          $s1, 0x80($v0)
    MEM_W(0X80, ctx->r2) = ctx->r17;
        goto L_80053E94;
    // 0x80053E84: sw          $s1, 0x80($v0)
    MEM_W(0X80, ctx->r2) = ctx->r17;
L_80053E88:
    // 0x80053E88: addu        $v1, $t0, $a1
    ctx->r3 = ADD32(ctx->r8, ctx->r5);
    // 0x80053E8C: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x80053E90: sw          $v0, 0x80($v1)
    MEM_W(0X80, ctx->r3) = ctx->r2;
L_80053E94:
    // 0x80053E94: slti        $v0, $a2, 0x20
    ctx->r2 = SIGNED(ctx->r6) < 0X20 ? 1 : 0;
    // 0x80053E98: bne         $v0, $zero, L_80053E2C
    if (ctx->r2 != 0) {
        // 0x80053E9C: addu        $a1, $a3, $zero
        ctx->r5 = ADD32(ctx->r7, 0);
            goto L_80053E2C;
    }
    // 0x80053E9C: addu        $a1, $a3, $zero
    ctx->r5 = ADD32(ctx->r7, 0);
    // 0x80053EA0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80053EA4: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x80053EA8: slti        $v0, $s4, 0x2
    ctx->r2 = SIGNED(ctx->r20) < 0X2 ? 1 : 0;
    // 0x80053EAC: bne         $v0, $zero, L_80053CF8
    if (ctx->r2 != 0) {
        // 0x80053EB0: addiu       $s3, $s3, 0x5F4
        ctx->r19 = ADD32(ctx->r19, 0X5F4);
            goto L_80053CF8;
    }
    // 0x80053EB0: addiu       $s3, $s3, 0x5F4
    ctx->r19 = ADD32(ctx->r19, 0X5F4);
    // 0x80053EB4: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x80053EB8: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80053EBC: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80053EC0: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80053EC4: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80053EC8: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80053ECC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80053ED0: jr          $ra
    // 0x80053ED4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80053ED4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void __scTaskReady(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8009B15C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8009B160: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8009B164: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8009B168: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8009B16C: beq         $s1, $zero, L_8009B198
    if (ctx->r17 == 0) {
        // 0x8009B170: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_8009B198;
    }
    // 0x8009B170: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8009B174: jal         0x8009C250
    // 0x8009B178: nop

    osViGetCurrentFramebuffer_recomp(rdram, ctx);
        goto after_0;
    // 0x8009B178: nop

    after_0:
    // 0x8009B17C: jal         0x8009C290
    // 0x8009B180: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    osViGetNextFramebuffer_recomp(rdram, ctx);
        goto after_1;
    // 0x8009B180: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_1:
    // 0x8009B184: xor         $s0, $s0, $v0
    ctx->r16 = ctx->r16 ^ ctx->r2;
    // 0x8009B188: sltiu       $s0, $s0, 0x1
    ctx->r16 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x8009B18C: negu        $s0, $s0
    ctx->r16 = SUB32(0, ctx->r16);
    // 0x8009B190: j           L_8009B19C
    // 0x8009B194: and         $v0, $s1, $s0
    ctx->r2 = ctx->r17 & ctx->r16;
        goto L_8009B19C;
    // 0x8009B194: and         $v0, $s1, $s0
    ctx->r2 = ctx->r17 & ctx->r16;
L_8009B198:
    // 0x8009B198: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8009B19C:
    // 0x8009B19C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8009B1A0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8009B1A4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8009B1A8: jr          $ra
    // 0x8009B1AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8009B1AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80055060_30460(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80055060: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x80055064: lb          $a2, 0x4B20($a2)
    ctx->r6 = MEM_B(ctx->r6, 0X4B20);
    // 0x80055068: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8005506C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80055070: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80055074: sw          $zero, -0x4990($at)
    MEM_W(-0X4990, ctx->r1) = 0;
    // 0x80055078: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8005507C: sw          $zero, -0x498C($at)
    MEM_W(-0X498C, ctx->r1) = 0;
    // 0x80055080: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80055084: sw          $zero, -0x4988($at)
    MEM_W(-0X4988, ctx->r1) = 0;
    // 0x80055088: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8005508C: sw          $zero, -0x4984($at)
    MEM_W(-0X4984, ctx->r1) = 0;
L_80055090:
    // 0x80055090: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80055094: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80055098: lbu         $v0, 0x59A0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X59A0);
    // 0x8005509C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x800550A0: beq         $v0, $zero, L_800550E0
    if (ctx->r2 == 0) {
        // 0x800550A4: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_800550E0;
    }
    // 0x800550A4: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x800550A8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x800550AC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x800550B0: lbu         $v0, 0x59A2($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X59A2);
    // 0x800550B4: addiu       $v1, $v0, -0x80
    ctx->r3 = ADD32(ctx->r2, -0X80);
    // 0x800550B8: slti        $v0, $v1, 0x10
    ctx->r2 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x800550BC: beq         $v0, $zero, L_800550E0
    if (ctx->r2 == 0) {
        // 0x800550C0: nop
    
            goto L_800550E0;
    }
    // 0x800550C0: nop

    // 0x800550C4: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x800550C8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800550CC: lbu         $v0, -0x4990($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X4990);
    // 0x800550D0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800550D4: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800550D8: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x800550DC: sb          $v0, -0x4990($at)
    MEM_B(-0X4990, ctx->r1) = ctx->r2;
L_800550E0:
    // 0x800550E0: slti        $v0, $a1, 0x10
    ctx->r2 = SIGNED(ctx->r5) < 0X10 ? 1 : 0;
    // 0x800550E4: bne         $v0, $zero, L_80055090
    if (ctx->r2 != 0) {
        // 0x800550E8: addiu       $a0, $a0, 0x118
        ctx->r4 = ADD32(ctx->r4, 0X118);
            goto L_80055090;
    }
    // 0x800550E8: addiu       $a0, $a0, 0x118
    ctx->r4 = ADD32(ctx->r4, 0X118);
    // 0x800550EC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x800550F0: bne         $a2, $v0, L_80055108
    if (ctx->r6 != ctx->r2) {
        // 0x800550F4: sll         $v0, $a2, 3
        ctx->r2 = S32(ctx->r6 << 3);
            goto L_80055108;
    }
    // 0x800550F4: sll         $v0, $a2, 3
    ctx->r2 = S32(ctx->r6 << 3);
    // 0x800550F8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x800550FC: lb          $a0, 0x4ED8($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X4ED8);
    // 0x80055100: j           L_80055118
    // 0x80055104: slti        $v0, $a0, 0x4
    ctx->r2 = SIGNED(ctx->r4) < 0X4 ? 1 : 0;
        goto L_80055118;
    // 0x80055104: slti        $v0, $a0, 0x4
    ctx->r2 = SIGNED(ctx->r4) < 0X4 ? 1 : 0;
L_80055108:
    // 0x80055108: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8005510C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80055110: lb          $a0, 0x4EA7($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X4EA7);
    // 0x80055114: slti        $v0, $a0, 0x4
    ctx->r2 = SIGNED(ctx->r4) < 0X4 ? 1 : 0;
L_80055118:
    // 0x80055118: beql        $v0, $zero, L_80055120
    if (ctx->r2 == 0) {
        // 0x8005511C: addiu       $a0, $zero, 0x3
        ctx->r4 = ADD32(0, 0X3);
            goto L_80055120;
    }
    goto skip_0;
    // 0x8005511C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    skip_0:
L_80055120:
    // 0x80055120: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80055124: addiu       $v1, $v1, -0x1AB8
    ctx->r3 = ADD32(ctx->r3, -0X1AB8);
    // 0x80055128: sll         $v0, $a0, 4
    ctx->r2 = S32(ctx->r4 << 4);
    // 0x8005512C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80055130: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80055134: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x80055138: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8005513C: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80055140: lbu         $v0, -0x4990($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X4990);
    // 0x80055144: jr          $ra
    // 0x80055148: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    TRACE_RETURN()
    return;
    // 0x80055148: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8005514C: nop

;}
RECOMP_FUNC void func_800463C0_217C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800463C0: lh          $v0, 0x2($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X2);
    // 0x800463C4: jr          $ra
    // 0x800463C8: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    TRACE_RETURN()
    return;
    // 0x800463C8: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
;}
RECOMP_FUNC void func_8003B27C_1667C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003B27C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B280: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8003B284: jal         0x8003AFB0
    // 0x8003B288: nop

    func_8003AFB0_163B0(rdram, ctx);
        goto after_0;
    // 0x8003B288: nop

    after_0:
    // 0x8003B28C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8003B290: jr          $ra
    // 0x8003B294: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8003B294: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void recomp_entrypoint(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80025C00: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x80025C04: addiu       $t0, $t0, 0x34D0
    ctx->r8 = ADD32(ctx->r8, 0X34D0);
    // 0x80025C08: lui         $t1, 0x15
    ctx->r9 = S32(0X15 << 16);
    // 0x80025C0C: addiu       $t1, $t1, -0x5B00
    ctx->r9 = ADD32(ctx->r9, -0X5B00);
L_80025C10:
    // 0x80025C10: sw          $zero, 0x0($t0)
    MEM_W(0X0, ctx->r8) = 0;
    // 0x80025C14: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x80025C18: addi        $t0, $t0, 0x8
    ctx->r8 = ADD32(ctx->r8, 0X8);
    // 0x80025C1C: addi        $t1, $t1, -0x8
    ctx->r9 = ADD32(ctx->r9, -0X8);
    // 0x80025C20: bne         $t1, $zero, L_80025C10
    if (ctx->r9 != 0) {
        // 0x80025C24: nop
    
            goto L_80025C10;
    }
    // 0x80025C24: nop

    // 0x80025C28: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x80025C2C: addiu       $t2, $t2, -0x6030
    ctx->r10 = ADD32(ctx->r10, -0X6030);
    // 0x80025C30: lui         $sp, 0x801E
    ctx->r29 = S32(0X801E << 16);
    // 0x80025C34: jr          $t2
    // 0x80025C38: addiu       $sp, $sp, -0x21A0
    ctx->r29 = ADD32(ctx->r29, -0X21A0);
    LOOKUP_FUNC(ctx->r10)(rdram, ctx);
    TRACE_RETURN()
    return;
    // 0x80025C38: addiu       $sp, $sp, -0x21A0
    ctx->r29 = ADD32(ctx->r29, -0X21A0);
    // 0x80025C3C: nop

    // 0x80025C40: nop

    // 0x80025C44: nop

    // 0x80025C48: nop

    // 0x80025C4C: nop

;}
RECOMP_FUNC void func_8004BE1C_2721C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004BE1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004BE20: bne         $a0, $zero, L_8004BF84
    if (ctx->r4 != 0) {
        // 0x8004BE24: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_8004BF84;
    }
    // 0x8004BE24: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8004BE28: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x8004BE2C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8004BE30: addiu       $v1, $v1, -0x3B90
    ctx->r3 = ADD32(ctx->r3, -0X3B90);
    // 0x8004BE34: addiu       $t1, $v1, 0x4
    ctx->r9 = ADD32(ctx->r3, 0X4);
    // 0x8004BE38: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8004BE3C: addiu       $v0, $v0, 0x2DA4
    ctx->r2 = ADD32(ctx->r2, 0X2DA4);
    // 0x8004BE40: addiu       $a3, $v0, 0x4
    ctx->r7 = ADD32(ctx->r2, 0X4);
    // 0x8004BE44: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x8004BE48: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8004BE4C: addiu       $a1, $a1, -0x1BB8
    ctx->r5 = ADD32(ctx->r5, -0X1BB8);
    // 0x8004BE50: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_8004BE54:
    // 0x8004BE54: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x8004BE58: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x8004BE5C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8004BE60: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x8004BE64: sw          $v0, -0x3B94($at)
    MEM_W(-0X3B94, ctx->r1) = ctx->r2;
    // 0x8004BE68: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x8004BE6C: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8004BE70: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x8004BE74: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x8004BE78: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x8004BE7C: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    // 0x8004BE80: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x8004BE84: sw          $v0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r2;
    // 0x8004BE88: addiu       $t1, $t1, 0x10
    ctx->r9 = ADD32(ctx->r9, 0X10);
    // 0x8004BE8C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8004BE90: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x8004BE94: sw          $zero, -0x3B88($at)
    MEM_W(-0X3B88, ctx->r1) = 0;
    // 0x8004BE98: slti        $v0, $t0, 0x9
    ctx->r2 = SIGNED(ctx->r8) < 0X9 ? 1 : 0;
    // 0x8004BE9C: bne         $v0, $zero, L_8004BE54
    if (ctx->r2 != 0) {
        // 0x8004BEA0: addiu       $a0, $a0, 0x10
        ctx->r4 = ADD32(ctx->r4, 0X10);
            goto L_8004BE54;
    }
    // 0x8004BEA0: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x8004BEA4: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x8004BEA8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8004BEAC: addiu       $v1, $v1, -0x3B00
    ctx->r3 = ADD32(ctx->r3, -0X3B00);
    // 0x8004BEB0: addiu       $t6, $v1, 0x34
    ctx->r14 = ADD32(ctx->r3, 0X34);
    // 0x8004BEB4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8004BEB8: addiu       $v0, $v0, 0x2DEC
    ctx->r2 = ADD32(ctx->r2, 0X2DEC);
    // 0x8004BEBC: addiu       $t5, $v0, 0x1C
    ctx->r13 = ADD32(ctx->r2, 0X1C);
    // 0x8004BEC0: addiu       $t4, $v1, 0x30
    ctx->r12 = ADD32(ctx->r3, 0X30);
    // 0x8004BEC4: addiu       $t3, $v0, 0x18
    ctx->r11 = ADD32(ctx->r2, 0X18);
    // 0x8004BEC8: addiu       $t2, $v1, 0x4
    ctx->r10 = ADD32(ctx->r3, 0X4);
    // 0x8004BECC: addiu       $t1, $v0, 0x4
    ctx->r9 = ADD32(ctx->r2, 0X4);
    // 0x8004BED0: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x8004BED4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8004BED8: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x8004BEDC: addiu       $a2, $a2, -0x1BA0
    ctx->r6 = ADD32(ctx->r6, -0X1BA0);
    // 0x8004BEE0: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
L_8004BEE4:
    // 0x8004BEE4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8004BEE8: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8004BEEC: lbu         $v0, -0x1BB0($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X1BB0);
    // 0x8004BEF0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8004BEF4: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x8004BEF8: sw          $v0, -0x3B04($at)
    MEM_W(-0X3B04, ctx->r1) = ctx->r2;
    // 0x8004BEFC: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x8004BF00: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8004BF04: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8004BF08: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8004BF0C: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x8004BF10: sw          $v0, -0x3AD4($at)
    MEM_W(-0X3AD4, ctx->r1) = ctx->r2;
    // 0x8004BF14: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x8004BF18: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    // 0x8004BF1C: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    // 0x8004BF20: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x8004BF24: lw          $v0, 0x0($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X0);
    // 0x8004BF28: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8004BF2C: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x8004BF30: sw          $v0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r2;
    // 0x8004BF34: lw          $v0, 0x0($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X0);
    // 0x8004BF38: addiu       $t3, $t3, 0x8
    ctx->r11 = ADD32(ctx->r11, 0X8);
    // 0x8004BF3C: addiu       $t2, $t2, 0x10
    ctx->r10 = ADD32(ctx->r10, 0X10);
    // 0x8004BF40: sw          $v0, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r2;
    // 0x8004BF44: lw          $v0, 0x0($t5)
    ctx->r2 = MEM_W(ctx->r13, 0X0);
    // 0x8004BF48: addiu       $t5, $t5, 0x8
    ctx->r13 = ADD32(ctx->r13, 0X8);
    // 0x8004BF4C: addiu       $t4, $t4, 0x10
    ctx->r12 = ADD32(ctx->r12, 0X10);
    // 0x8004BF50: sw          $v0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r2;
    // 0x8004BF54: addiu       $t6, $t6, 0x10
    ctx->r14 = ADD32(ctx->r14, 0X10);
    // 0x8004BF58: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8004BF5C: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x8004BF60: sw          $zero, -0x3AF8($at)
    MEM_W(-0X3AF8, ctx->r1) = 0;
    // 0x8004BF64: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8004BF68: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x8004BF6C: sw          $zero, -0x3AC8($at)
    MEM_W(-0X3AC8, ctx->r1) = 0;
    // 0x8004BF70: slti        $v0, $t0, 0x3
    ctx->r2 = SIGNED(ctx->r8) < 0X3 ? 1 : 0;
    // 0x8004BF74: bne         $v0, $zero, L_8004BEE4
    if (ctx->r2 != 0) {
        // 0x8004BF78: addiu       $a0, $a0, 0x10
        ctx->r4 = ADD32(ctx->r4, 0X10);
            goto L_8004BEE4;
    }
    // 0x8004BF78: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x8004BF7C: j           L_8004BF9C
    // 0x8004BF80: nop

        goto L_8004BF9C;
    // 0x8004BF80: nop

L_8004BF84:
    // 0x8004BF84: lui         $a0, 0x8019
    ctx->r4 = S32(0X8019 << 16);
    // 0x8004BF88: addiu       $a0, $a0, 0x52B0
    ctx->r4 = ADD32(ctx->r4, 0X52B0);
    // 0x8004BF8C: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8004BF90: addiu       $a1, $a1, -0x3B94
    ctx->r5 = ADD32(ctx->r5, -0X3B94);
    // 0x8004BF94: jal         0x8003BD34
    // 0x8004BF98: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_8003BD34_17134(rdram, ctx);
        goto after_0;
    // 0x8004BF98: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_0:
L_8004BF9C:
    // 0x8004BF9C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8004BFA0: jr          $ra
    // 0x8004BFA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8004BFA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004BFA8: nop

    // 0x8004BFAC: nop

;}
RECOMP_FUNC void func_800508D4_2BCD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800508D4: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x800508D8: sw          $s4, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r20;
    // 0x800508DC: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x800508E0: sw          $ra, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r31;
    // 0x800508E4: sw          $s3, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r19;
    // 0x800508E8: sw          $s2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r18;
    // 0x800508EC: sw          $s1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r17;
    // 0x800508F0: sw          $s0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r16;
    // 0x800508F4: lbu         $a3, 0xAC($s4)
    ctx->r7 = MEM_BU(ctx->r20, 0XAC);
    // 0x800508F8: sll         $v0, $a3, 24
    ctx->r2 = S32(ctx->r7 << 24);
    // 0x800508FC: sra         $v1, $v0, 28
    ctx->r3 = S32(SIGNED(ctx->r2) >> 28);
    // 0x80050900: sltiu       $v0, $v1, 0x9
    ctx->r2 = ctx->r3 < 0X9 ? 1 : 0;
    // 0x80050904: beq         $v0, $zero, L_80050964
    if (ctx->r2 == 0) {
        // 0x80050908: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80050964;
    }
    // 0x80050908: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8005090C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80050910: addu        $at, $at, $v0
    gpr jr_addend_80050918 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80050914: lw          $v0, 0x23E0($at)
    ctx->r2 = ADD32(ctx->r1, 0X23E0);
    // 0x80050918: jr          $v0
    // 0x8005091C: nop

    switch (jr_addend_80050918 >> 2) {
        case 0: goto L_80050920; break;
        case 1: goto L_80050920; break;
        case 2: goto L_80050920; break;
        case 3: goto L_80050920; break;
        case 4: goto L_8005092C; break;
        case 5: goto L_8005092C; break;
        case 6: goto L_80050948; break;
        case 7: goto L_80050948; break;
        case 8: goto L_80050964; break;
        default: switch_error(__func__, 0x80050918, 0x800D23E0);
    }
    // 0x8005091C: nop

L_80050920:
    // 0x80050920: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80050924: j           L_80050970
    // 0x80050928: addiu       $a0, $a0, -0x389C
    ctx->r4 = ADD32(ctx->r4, -0X389C);
        goto L_80050970;
    // 0x80050928: addiu       $a0, $a0, -0x389C
    ctx->r4 = ADD32(ctx->r4, -0X389C);
L_8005092C:
    // 0x8005092C: lb          $v0, 0x170($s4)
    ctx->r2 = MEM_B(ctx->r20, 0X170);
    // 0x80050930: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x80050934: addiu       $a0, $a0, -0x38A0
    ctx->r4 = ADD32(ctx->r4, -0X38A0);
    // 0x80050938: bnel        $v0, $zero, L_80050940
    if (ctx->r2 != 0) {
        // 0x8005093C: addiu       $a0, $a0, 0x2000
        ctx->r4 = ADD32(ctx->r4, 0X2000);
            goto L_80050940;
    }
    goto skip_0;
    // 0x8005093C: addiu       $a0, $a0, 0x2000
    ctx->r4 = ADD32(ctx->r4, 0X2000);
    skip_0:
L_80050940:
    // 0x80050940: j           L_80050970
    // 0x80050944: addiu       $a3, $a3, -0x40
    ctx->r7 = ADD32(ctx->r7, -0X40);
        goto L_80050970;
    // 0x80050944: addiu       $a3, $a3, -0x40
    ctx->r7 = ADD32(ctx->r7, -0X40);
L_80050948:
    // 0x80050948: lb          $v0, 0x171($s4)
    ctx->r2 = MEM_B(ctx->r20, 0X171);
    // 0x8005094C: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x80050950: addiu       $a0, $a0, 0x760
    ctx->r4 = ADD32(ctx->r4, 0X760);
    // 0x80050954: bnel        $v0, $zero, L_8005095C
    if (ctx->r2 != 0) {
        // 0x80050958: addiu       $a0, $a0, 0x2000
        ctx->r4 = ADD32(ctx->r4, 0X2000);
            goto L_8005095C;
    }
    goto skip_1;
    // 0x80050958: addiu       $a0, $a0, 0x2000
    ctx->r4 = ADD32(ctx->r4, 0X2000);
    skip_1:
L_8005095C:
    // 0x8005095C: j           L_80050970
    // 0x80050960: addiu       $a3, $a3, -0x60
    ctx->r7 = ADD32(ctx->r7, -0X60);
        goto L_80050970;
    // 0x80050960: addiu       $a3, $a3, -0x60
    ctx->r7 = ADD32(ctx->r7, -0X60);
L_80050964:
    // 0x80050964: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x80050968: addiu       $a0, $a0, -0x78A0
    ctx->r4 = ADD32(ctx->r4, -0X78A0);
    // 0x8005096C: addiu       $a3, $a3, -0x7F
    ctx->r7 = ADD32(ctx->r7, -0X7F);
L_80050970:
    // 0x80050970: lbu         $s3, 0x104($s4)
    ctx->r19 = MEM_BU(ctx->r20, 0X104);
    // 0x80050974: sll         $v0, $s3, 24
    ctx->r2 = S32(ctx->r19 << 24);
    // 0x80050978: sra         $v1, $v0, 28
    ctx->r3 = S32(SIGNED(ctx->r2) >> 28);
    // 0x8005097C: sltiu       $v0, $v1, 0x9
    ctx->r2 = ctx->r3 < 0X9 ? 1 : 0;
    // 0x80050980: beq         $v0, $zero, L_800509E0
    if (ctx->r2 == 0) {
        // 0x80050984: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_800509E0;
    }
    // 0x80050984: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80050988: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8005098C: addu        $at, $at, $v0
    gpr jr_addend_80050994 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80050990: lw          $v0, 0x2408($at)
    ctx->r2 = ADD32(ctx->r1, 0X2408);
    // 0x80050994: jr          $v0
    // 0x80050998: nop

    switch (jr_addend_80050994 >> 2) {
        case 0: goto L_8005099C; break;
        case 1: goto L_8005099C; break;
        case 2: goto L_8005099C; break;
        case 3: goto L_8005099C; break;
        case 4: goto L_800509A8; break;
        case 5: goto L_800509A8; break;
        case 6: goto L_800509C4; break;
        case 7: goto L_800509C4; break;
        case 8: goto L_800509E0; break;
        default: switch_error(__func__, 0x80050994, 0x800D2408);
    }
    // 0x80050998: nop

L_8005099C:
    // 0x8005099C: lui         $s2, 0x801C
    ctx->r18 = S32(0X801C << 16);
    // 0x800509A0: j           L_800509EC
    // 0x800509A4: addiu       $s2, $s2, -0x389C
    ctx->r18 = ADD32(ctx->r18, -0X389C);
        goto L_800509EC;
    // 0x800509A4: addiu       $s2, $s2, -0x389C
    ctx->r18 = ADD32(ctx->r18, -0X389C);
L_800509A8:
    // 0x800509A8: lb          $v0, 0x170($s4)
    ctx->r2 = MEM_B(ctx->r20, 0X170);
    // 0x800509AC: lui         $s2, 0x801D
    ctx->r18 = S32(0X801D << 16);
    // 0x800509B0: addiu       $s2, $s2, -0x38A0
    ctx->r18 = ADD32(ctx->r18, -0X38A0);
    // 0x800509B4: bnel        $v0, $zero, L_800509BC
    if (ctx->r2 != 0) {
        // 0x800509B8: addiu       $s2, $s2, 0x2000
        ctx->r18 = ADD32(ctx->r18, 0X2000);
            goto L_800509BC;
    }
    goto skip_2;
    // 0x800509B8: addiu       $s2, $s2, 0x2000
    ctx->r18 = ADD32(ctx->r18, 0X2000);
    skip_2:
L_800509BC:
    // 0x800509BC: j           L_800509EC
    // 0x800509C0: addiu       $s3, $s3, -0x40
    ctx->r19 = ADD32(ctx->r19, -0X40);
        goto L_800509EC;
    // 0x800509C0: addiu       $s3, $s3, -0x40
    ctx->r19 = ADD32(ctx->r19, -0X40);
L_800509C4:
    // 0x800509C4: lb          $v0, 0x171($s4)
    ctx->r2 = MEM_B(ctx->r20, 0X171);
    // 0x800509C8: lui         $s2, 0x801D
    ctx->r18 = S32(0X801D << 16);
    // 0x800509CC: addiu       $s2, $s2, 0x760
    ctx->r18 = ADD32(ctx->r18, 0X760);
    // 0x800509D0: bnel        $v0, $zero, L_800509D8
    if (ctx->r2 != 0) {
        // 0x800509D4: addiu       $s2, $s2, 0x2000
        ctx->r18 = ADD32(ctx->r18, 0X2000);
            goto L_800509D8;
    }
    goto skip_3;
    // 0x800509D4: addiu       $s2, $s2, 0x2000
    ctx->r18 = ADD32(ctx->r18, 0X2000);
    skip_3:
L_800509D8:
    // 0x800509D8: j           L_800509EC
    // 0x800509DC: addiu       $s3, $s3, -0x60
    ctx->r19 = ADD32(ctx->r19, -0X60);
        goto L_800509EC;
    // 0x800509DC: addiu       $s3, $s3, -0x60
    ctx->r19 = ADD32(ctx->r19, -0X60);
L_800509E0:
    // 0x800509E0: lui         $s2, 0x801D
    ctx->r18 = S32(0X801D << 16);
    // 0x800509E4: addiu       $s2, $s2, -0x78A0
    ctx->r18 = ADD32(ctx->r18, -0X78A0);
    // 0x800509E8: addiu       $s3, $s3, -0x7F
    ctx->r19 = ADD32(ctx->r19, -0X7F);
L_800509EC:
    // 0x800509EC: lui         $s0, 0x801B
    ctx->r16 = S32(0X801B << 16);
    // 0x800509F0: addiu       $s0, $s0, -0xC50
    ctx->r16 = ADD32(ctx->r16, -0XC50);
    // 0x800509F4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x800509F8: lw          $v1, 0x98($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X98);
    // 0x800509FC: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    // 0x80050A00: sll         $v0, $a3, 24
    ctx->r2 = S32(ctx->r7 << 24);
    // 0x80050A04: sra         $v0, $v0, 22
    ctx->r2 = S32(SIGNED(ctx->r2) >> 22);
    // 0x80050A08: lbu         $v1, 0x0($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X0);
    // 0x80050A0C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80050A10: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80050A14: sll         $a0, $v1, 4
    ctx->r4 = S32(ctx->r3 << 4);
    // 0x80050A18: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x80050A1C: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x80050A20: jal         0x8003BD00
    // 0x80050A24: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_8003BD00_17100(rdram, ctx);
        goto after_0;
    // 0x80050A24: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_0:
    // 0x80050A28: lui         $s1, 0x801E
    ctx->r17 = S32(0X801E << 16);
    // 0x80050A2C: addiu       $s1, $s1, -0x72A0
    ctx->r17 = ADD32(ctx->r17, -0X72A0);
    // 0x80050A30: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80050A34: lw          $v1, 0xFC($s4)
    ctx->r3 = MEM_W(ctx->r20, 0XFC);
    // 0x80050A38: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x80050A3C: sll         $v0, $s3, 24
    ctx->r2 = S32(ctx->r19 << 24);
    // 0x80050A40: sra         $v0, $v0, 22
    ctx->r2 = S32(SIGNED(ctx->r2) >> 22);
    // 0x80050A44: lbu         $v1, 0x0($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X0);
    // 0x80050A48: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80050A4C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80050A50: sll         $a0, $v1, 4
    ctx->r4 = S32(ctx->r3 << 4);
    // 0x80050A54: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x80050A58: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x80050A5C: jal         0x8003BD00
    // 0x80050A60: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_8003BD00_17100(rdram, ctx);
        goto after_1;
    // 0x80050A60: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_1:
    // 0x80050A64: lui         $t0, 0x801C
    ctx->r8 = S32(0X801C << 16);
    // 0x80050A68: addiu       $t0, $t0, -0x3D98
    ctx->r8 = ADD32(ctx->r8, -0X3D98);
    // 0x80050A6C: lui         $a1, 0xFF
    ctx->r5 = S32(0XFF << 16);
    // 0x80050A70: ori         $a1, $a1, 0xF000
    ctx->r5 = ctx->r5 | 0XF000;
    // 0x80050A74: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x80050A78: lui         $a2, 0xF
    ctx->r6 = S32(0XF << 16);
    // 0x80050A7C: ori         $a2, $a2, 0xFF00
    ctx->r6 = ctx->r6 | 0XFF00;
    // 0x80050A80: lui         $a3, 0xFFF
    ctx->r7 = S32(0XFFF << 16);
    // 0x80050A84: andi        $v0, $v1, 0xFFF
    ctx->r2 = ctx->r3 & 0XFFF;
    // 0x80050A88: sh          $v0, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r2;
    // 0x80050A8C: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x80050A90: and         $v0, $v1, $a1
    ctx->r2 = ctx->r3 & ctx->r5;
    // 0x80050A94: srl         $v0, $v0, 12
    ctx->r2 = S32(U32(ctx->r2) >> 12);
    // 0x80050A98: sh          $v0, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r2;
    // 0x80050A9C: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80050AA0: lw          $a0, -0xC4C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XC4C);
    // 0x80050AA4: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x80050AA8: srl         $v1, $v1, 24
    ctx->r3 = S32(U32(ctx->r3) >> 24);
    // 0x80050AAC: andi        $v0, $a0, 0xF
    ctx->r2 = ctx->r4 & 0XF;
    // 0x80050AB0: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80050AB4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80050AB8: sh          $v1, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r3;
    // 0x80050ABC: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x80050AC0: andi        $v0, $a0, 0xFFF0
    ctx->r2 = ctx->r4 & 0XFFF0;
    // 0x80050AC4: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
    // 0x80050AC8: sh          $v0, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r2;
    // 0x80050ACC: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x80050AD0: and         $v0, $a0, $a3
    ctx->r2 = ctx->r4 & ctx->r7;
    // 0x80050AD4: srl         $v0, $v0, 16
    ctx->r2 = S32(U32(ctx->r2) >> 16);
    // 0x80050AD8: sh          $v0, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r2;
    // 0x80050ADC: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80050AE0: lw          $v1, -0xC48($v1)
    ctx->r3 = MEM_W(ctx->r3, -0XC48);
    // 0x80050AE4: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x80050AE8: srl         $a0, $a0, 28
    ctx->r4 = S32(U32(ctx->r4) >> 28);
    // 0x80050AEC: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x80050AF0: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80050AF4: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x80050AF8: sh          $a0, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r4;
    // 0x80050AFC: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x80050B00: and         $v0, $v1, $a2
    ctx->r2 = ctx->r3 & ctx->r6;
    // 0x80050B04: srl         $v0, $v0, 8
    ctx->r2 = S32(U32(ctx->r2) >> 8);
    // 0x80050B08: sh          $v0, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r2;
    // 0x80050B0C: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x80050B10: srl         $v1, $v1, 20
    ctx->r3 = S32(U32(ctx->r3) >> 20);
    // 0x80050B14: sh          $v1, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r3;
    // 0x80050B18: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80050B1C: lw          $v1, -0xC44($v1)
    ctx->r3 = MEM_W(ctx->r3, -0XC44);
    // 0x80050B20: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x80050B24: andi        $v0, $v1, 0xFFF
    ctx->r2 = ctx->r3 & 0XFFF;
    // 0x80050B28: sh          $v0, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r2;
    // 0x80050B2C: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x80050B30: and         $v0, $v1, $a1
    ctx->r2 = ctx->r3 & ctx->r5;
    // 0x80050B34: srl         $v0, $v0, 12
    ctx->r2 = S32(U32(ctx->r2) >> 12);
    // 0x80050B38: sh          $v0, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r2;
    // 0x80050B3C: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80050B40: lw          $a0, -0xC40($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XC40);
    // 0x80050B44: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x80050B48: srl         $v1, $v1, 24
    ctx->r3 = S32(U32(ctx->r3) >> 24);
    // 0x80050B4C: andi        $v0, $a0, 0xF
    ctx->r2 = ctx->r4 & 0XF;
    // 0x80050B50: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80050B54: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80050B58: sh          $v1, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r3;
    // 0x80050B5C: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x80050B60: andi        $v0, $a0, 0xFFF0
    ctx->r2 = ctx->r4 & 0XFFF0;
    // 0x80050B64: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
    // 0x80050B68: sh          $v0, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r2;
    // 0x80050B6C: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x80050B70: and         $v0, $a0, $a3
    ctx->r2 = ctx->r4 & ctx->r7;
    // 0x80050B74: srl         $v0, $v0, 16
    ctx->r2 = S32(U32(ctx->r2) >> 16);
    // 0x80050B78: sh          $v0, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r2;
    // 0x80050B7C: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x80050B80: sh          $zero, 0x0($t0)
    MEM_H(0X0, ctx->r8) = 0;
    // 0x80050B84: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x80050B88: sh          $zero, 0x0($t0)
    MEM_H(0X0, ctx->r8) = 0;
    // 0x80050B8C: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x80050B90: sh          $zero, 0x0($t0)
    MEM_H(0X0, ctx->r8) = 0;
    // 0x80050B94: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80050B98: lw          $v1, -0xC3C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0XC3C);
    // 0x80050B9C: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x80050BA0: srl         $a0, $a0, 28
    ctx->r4 = S32(U32(ctx->r4) >> 28);
    // 0x80050BA4: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x80050BA8: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80050BAC: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x80050BB0: sh          $a0, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r4;
    // 0x80050BB4: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x80050BB8: and         $v0, $v1, $a2
    ctx->r2 = ctx->r3 & ctx->r6;
    // 0x80050BBC: srl         $v0, $v0, 8
    ctx->r2 = S32(U32(ctx->r2) >> 8);
    // 0x80050BC0: sh          $v0, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r2;
    // 0x80050BC4: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x80050BC8: srl         $v1, $v1, 20
    ctx->r3 = S32(U32(ctx->r3) >> 20);
    // 0x80050BCC: sh          $v1, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r3;
    // 0x80050BD0: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80050BD4: lw          $v1, -0xC38($v1)
    ctx->r3 = MEM_W(ctx->r3, -0XC38);
    // 0x80050BD8: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x80050BDC: andi        $v0, $v1, 0xFFF
    ctx->r2 = ctx->r3 & 0XFFF;
    // 0x80050BE0: sh          $v0, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r2;
    // 0x80050BE4: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x80050BE8: and         $v0, $v1, $a1
    ctx->r2 = ctx->r3 & ctx->r5;
    // 0x80050BEC: srl         $v0, $v0, 12
    ctx->r2 = S32(U32(ctx->r2) >> 12);
    // 0x80050BF0: sh          $v0, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r2;
    // 0x80050BF4: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80050BF8: lw          $a0, -0xC34($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XC34);
    // 0x80050BFC: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x80050C00: srl         $v1, $v1, 24
    ctx->r3 = S32(U32(ctx->r3) >> 24);
    // 0x80050C04: andi        $v0, $a0, 0xF
    ctx->r2 = ctx->r4 & 0XF;
    // 0x80050C08: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80050C0C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80050C10: sh          $v1, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r3;
    // 0x80050C14: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x80050C18: sh          $zero, 0x0($t0)
    MEM_H(0X0, ctx->r8) = 0;
    // 0x80050C1C: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x80050C20: sh          $zero, 0x0($t0)
    MEM_H(0X0, ctx->r8) = 0;
    // 0x80050C24: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x80050C28: sh          $zero, 0x0($t0)
    MEM_H(0X0, ctx->r8) = 0;
    // 0x80050C2C: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x80050C30: andi        $v0, $a0, 0xFFF0
    ctx->r2 = ctx->r4 & 0XFFF0;
    // 0x80050C34: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
    // 0x80050C38: sh          $v0, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r2;
    // 0x80050C3C: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x80050C40: and         $v0, $a0, $a3
    ctx->r2 = ctx->r4 & ctx->r7;
    // 0x80050C44: srl         $v0, $v0, 16
    ctx->r2 = S32(U32(ctx->r2) >> 16);
    // 0x80050C48: sh          $v0, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r2;
    // 0x80050C4C: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80050C50: lw          $v1, -0xC30($v1)
    ctx->r3 = MEM_W(ctx->r3, -0XC30);
    // 0x80050C54: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x80050C58: srl         $a0, $a0, 28
    ctx->r4 = S32(U32(ctx->r4) >> 28);
    // 0x80050C5C: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x80050C60: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80050C64: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x80050C68: sh          $a0, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r4;
    // 0x80050C6C: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x80050C70: and         $v0, $v1, $a2
    ctx->r2 = ctx->r3 & ctx->r6;
    // 0x80050C74: srl         $v0, $v0, 8
    ctx->r2 = S32(U32(ctx->r2) >> 8);
    // 0x80050C78: sh          $v0, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r2;
    // 0x80050C7C: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x80050C80: srl         $v1, $v1, 20
    ctx->r3 = S32(U32(ctx->r3) >> 20);
    // 0x80050C84: sh          $v1, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r3;
    // 0x80050C88: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80050C8C: lw          $v1, -0xC2C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0XC2C);
    // 0x80050C90: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x80050C94: andi        $v0, $v1, 0xFFF
    ctx->r2 = ctx->r3 & 0XFFF;
    // 0x80050C98: sh          $v0, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r2;
    // 0x80050C9C: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x80050CA0: and         $v0, $v1, $a1
    ctx->r2 = ctx->r3 & ctx->r5;
    // 0x80050CA4: srl         $v0, $v0, 12
    ctx->r2 = S32(U32(ctx->r2) >> 12);
    // 0x80050CA8: sh          $v0, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r2;
    // 0x80050CAC: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80050CB0: lw          $a0, -0xC28($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XC28);
    // 0x80050CB4: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x80050CB8: srl         $v1, $v1, 24
    ctx->r3 = S32(U32(ctx->r3) >> 24);
    // 0x80050CBC: andi        $v0, $a0, 0xF
    ctx->r2 = ctx->r4 & 0XF;
    // 0x80050CC0: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80050CC4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80050CC8: sh          $v1, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r3;
    // 0x80050CCC: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x80050CD0: andi        $v0, $a0, 0xFFF0
    ctx->r2 = ctx->r4 & 0XFFF0;
    // 0x80050CD4: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
    // 0x80050CD8: sh          $v0, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r2;
    // 0x80050CDC: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x80050CE0: sh          $zero, 0x0($t0)
    MEM_H(0X0, ctx->r8) = 0;
    // 0x80050CE4: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x80050CE8: sh          $zero, 0x0($t0)
    MEM_H(0X0, ctx->r8) = 0;
    // 0x80050CEC: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x80050CF0: and         $v0, $a0, $a3
    ctx->r2 = ctx->r4 & ctx->r7;
    // 0x80050CF4: srl         $v0, $v0, 16
    ctx->r2 = S32(U32(ctx->r2) >> 16);
    // 0x80050CF8: sh          $v0, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r2;
    // 0x80050CFC: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80050D00: lw          $v1, -0xC24($v1)
    ctx->r3 = MEM_W(ctx->r3, -0XC24);
    // 0x80050D04: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x80050D08: srl         $a0, $a0, 28
    ctx->r4 = S32(U32(ctx->r4) >> 28);
    // 0x80050D0C: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x80050D10: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80050D14: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x80050D18: sh          $a0, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r4;
    // 0x80050D1C: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x80050D20: and         $v0, $v1, $a2
    ctx->r2 = ctx->r3 & ctx->r6;
    // 0x80050D24: srl         $v0, $v0, 8
    ctx->r2 = S32(U32(ctx->r2) >> 8);
    // 0x80050D28: sh          $v0, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r2;
    // 0x80050D2C: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x80050D30: srl         $v1, $v1, 20
    ctx->r3 = S32(U32(ctx->r3) >> 20);
    // 0x80050D34: sh          $v1, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r3;
    // 0x80050D38: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80050D3C: lw          $v1, -0xC20($v1)
    ctx->r3 = MEM_W(ctx->r3, -0XC20);
    // 0x80050D40: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x80050D44: andi        $v0, $v1, 0xFFF
    ctx->r2 = ctx->r3 & 0XFFF;
    // 0x80050D48: sh          $v0, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r2;
    // 0x80050D4C: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x80050D50: and         $v0, $v1, $a1
    ctx->r2 = ctx->r3 & ctx->r5;
    // 0x80050D54: srl         $v0, $v0, 12
    ctx->r2 = S32(U32(ctx->r2) >> 12);
    // 0x80050D58: sh          $v0, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r2;
    // 0x80050D5C: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80050D60: lw          $a0, -0xC1C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XC1C);
    // 0x80050D64: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x80050D68: srl         $v1, $v1, 24
    ctx->r3 = S32(U32(ctx->r3) >> 24);
    // 0x80050D6C: andi        $v0, $a0, 0xF
    ctx->r2 = ctx->r4 & 0XF;
    // 0x80050D70: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80050D74: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80050D78: sh          $v1, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r3;
    // 0x80050D7C: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x80050D80: sh          $zero, 0x0($t0)
    MEM_H(0X0, ctx->r8) = 0;
    // 0x80050D84: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x80050D88: sh          $zero, 0x0($t0)
    MEM_H(0X0, ctx->r8) = 0;
    // 0x80050D8C: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x80050D90: andi        $v0, $a0, 0xFFF0
    ctx->r2 = ctx->r4 & 0XFFF0;
    // 0x80050D94: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
    // 0x80050D98: sh          $v0, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r2;
    // 0x80050D9C: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x80050DA0: and         $v0, $a0, $a3
    ctx->r2 = ctx->r4 & ctx->r7;
    // 0x80050DA4: srl         $v0, $v0, 16
    ctx->r2 = S32(U32(ctx->r2) >> 16);
    // 0x80050DA8: sh          $v0, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r2;
    // 0x80050DAC: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80050DB0: lbu         $v0, -0xC15($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0XC15);
    // 0x80050DB4: srl         $a0, $a0, 28
    ctx->r4 = S32(U32(ctx->r4) >> 28);
    // 0x80050DB8: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80050DBC: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x80050DC0: sh          $a0, 0x2($t0)
    MEM_H(0X2, ctx->r8) = ctx->r4;
    // 0x80050DC4: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x80050DC8: lui         $t0, 0x801E
    ctx->r8 = S32(0X801E << 16);
    // 0x80050DCC: addiu       $t0, $t0, -0x14E8
    ctx->r8 = ADD32(ctx->r8, -0X14E8);
    // 0x80050DD0: andi        $v0, $v1, 0xFFF
    ctx->r2 = ctx->r3 & 0XFFF;
    // 0x80050DD4: sh          $v0, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r2;
    // 0x80050DD8: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x80050DDC: and         $v0, $v1, $a1
    ctx->r2 = ctx->r3 & ctx->r5;
    // 0x80050DE0: srl         $v0, $v0, 12
    ctx->r2 = S32(U32(ctx->r2) >> 12);
    // 0x80050DE4: sh          $v0, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r2;
    // 0x80050DE8: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x80050DEC: lw          $a0, -0x729C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X729C);
    // 0x80050DF0: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x80050DF4: srl         $v1, $v1, 24
    ctx->r3 = S32(U32(ctx->r3) >> 24);
    // 0x80050DF8: andi        $v0, $a0, 0xF
    ctx->r2 = ctx->r4 & 0XF;
    // 0x80050DFC: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80050E00: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80050E04: sh          $v1, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r3;
    // 0x80050E08: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x80050E0C: andi        $v0, $a0, 0xFFF0
    ctx->r2 = ctx->r4 & 0XFFF0;
    // 0x80050E10: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
    // 0x80050E14: sh          $v0, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r2;
    // 0x80050E18: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x80050E1C: and         $v0, $a0, $a3
    ctx->r2 = ctx->r4 & ctx->r7;
    // 0x80050E20: srl         $v0, $v0, 16
    ctx->r2 = S32(U32(ctx->r2) >> 16);
    // 0x80050E24: sh          $v0, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r2;
    // 0x80050E28: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80050E2C: lw          $v1, -0x7298($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7298);
    // 0x80050E30: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x80050E34: srl         $a0, $a0, 28
    ctx->r4 = S32(U32(ctx->r4) >> 28);
    // 0x80050E38: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x80050E3C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80050E40: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x80050E44: sh          $a0, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r4;
    // 0x80050E48: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x80050E4C: and         $v0, $v1, $a2
    ctx->r2 = ctx->r3 & ctx->r6;
    // 0x80050E50: srl         $v0, $v0, 8
    ctx->r2 = S32(U32(ctx->r2) >> 8);
    // 0x80050E54: sh          $v0, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r2;
    // 0x80050E58: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x80050E5C: srl         $v1, $v1, 20
    ctx->r3 = S32(U32(ctx->r3) >> 20);
    // 0x80050E60: sh          $v1, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r3;
    // 0x80050E64: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80050E68: lw          $v1, -0x7294($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7294);
    // 0x80050E6C: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x80050E70: andi        $v0, $v1, 0xFFF
    ctx->r2 = ctx->r3 & 0XFFF;
    // 0x80050E74: sh          $v0, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r2;
    // 0x80050E78: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x80050E7C: and         $v0, $v1, $a1
    ctx->r2 = ctx->r3 & ctx->r5;
    // 0x80050E80: srl         $v0, $v0, 12
    ctx->r2 = S32(U32(ctx->r2) >> 12);
    // 0x80050E84: sh          $v0, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r2;
    // 0x80050E88: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x80050E8C: lw          $a0, -0x7290($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7290);
    // 0x80050E90: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x80050E94: srl         $v1, $v1, 24
    ctx->r3 = S32(U32(ctx->r3) >> 24);
    // 0x80050E98: andi        $v0, $a0, 0xF
    ctx->r2 = ctx->r4 & 0XF;
    // 0x80050E9C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80050EA0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80050EA4: sh          $v1, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r3;
    // 0x80050EA8: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x80050EAC: andi        $v0, $a0, 0xFFF0
    ctx->r2 = ctx->r4 & 0XFFF0;
    // 0x80050EB0: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
    // 0x80050EB4: sh          $v0, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r2;
    // 0x80050EB8: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x80050EBC: and         $v0, $a0, $a3
    ctx->r2 = ctx->r4 & ctx->r7;
    // 0x80050EC0: srl         $v0, $v0, 16
    ctx->r2 = S32(U32(ctx->r2) >> 16);
    // 0x80050EC4: sh          $v0, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r2;
    // 0x80050EC8: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x80050ECC: sh          $zero, 0x0($t0)
    MEM_H(0X0, ctx->r8) = 0;
    // 0x80050ED0: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x80050ED4: sh          $zero, 0x0($t0)
    MEM_H(0X0, ctx->r8) = 0;
    // 0x80050ED8: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x80050EDC: sh          $zero, 0x0($t0)
    MEM_H(0X0, ctx->r8) = 0;
    // 0x80050EE0: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80050EE4: lw          $v1, -0x728C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X728C);
    // 0x80050EE8: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x80050EEC: srl         $a0, $a0, 28
    ctx->r4 = S32(U32(ctx->r4) >> 28);
    // 0x80050EF0: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x80050EF4: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80050EF8: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x80050EFC: sh          $a0, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r4;
    // 0x80050F00: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x80050F04: and         $a2, $v1, $a2
    ctx->r6 = ctx->r3 & ctx->r6;
    // 0x80050F08: srl         $a2, $a2, 8
    ctx->r6 = S32(U32(ctx->r6) >> 8);
    // 0x80050F0C: sh          $a2, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r6;
    // 0x80050F10: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x80050F14: srl         $v1, $v1, 20
    ctx->r3 = S32(U32(ctx->r3) >> 20);
    // 0x80050F18: sh          $v1, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r3;
    // 0x80050F1C: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80050F20: lw          $v1, -0x7288($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7288);
    // 0x80050F24: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x80050F28: andi        $v0, $v1, 0xFFF
    ctx->r2 = ctx->r3 & 0XFFF;
    // 0x80050F2C: sh          $v0, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r2;
    // 0x80050F30: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x80050F34: and         $a1, $v1, $a1
    ctx->r5 = ctx->r3 & ctx->r5;
    // 0x80050F38: srl         $a1, $a1, 12
    ctx->r5 = S32(U32(ctx->r5) >> 12);
    // 0x80050F3C: sh          $a1, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r5;
    // 0x80050F40: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x80050F44: lw          $a0, -0x7284($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7284);
    // 0x80050F48: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x80050F4C: srl         $v1, $v1, 24
    ctx->r3 = S32(U32(ctx->r3) >> 24);
    // 0x80050F50: andi        $v0, $a0, 0xF
    ctx->r2 = ctx->r4 & 0XF;
    // 0x80050F54: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80050F58: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80050F5C: sh          $v1, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r3;
    // 0x80050F60: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x80050F64: sh          $zero, 0x0($t0)
    MEM_H(0X0, ctx->r8) = 0;
    // 0x80050F68: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x80050F6C: sh          $zero, 0x0($t0)
    MEM_H(0X0, ctx->r8) = 0;
    // 0x80050F70: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x80050F74: sh          $zero, 0x0($t0)
    MEM_H(0X0, ctx->r8) = 0;
    // 0x80050F78: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x80050F7C: andi        $v0, $a0, 0xFFF0
    ctx->r2 = ctx->r4 & 0XFFF0;
    // 0x80050F80: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
    // 0x80050F84: and         $a0, $a0, $a3
    ctx->r4 = ctx->r4 & ctx->r7;
    // 0x80050F88: srl         $a0, $a0, 16
    ctx->r4 = S32(U32(ctx->r4) >> 16);
    // 0x80050F8C: sh          $a0, 0x2($t0)
    MEM_H(0X2, ctx->r8) = ctx->r4;
    // 0x80050F90: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80050F94: addiu       $a0, $a0, -0x3D98
    ctx->r4 = ADD32(ctx->r4, -0X3D98);
    // 0x80050F98: sh          $v0, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r2;
    // 0x80050F9C: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x80050FA0: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80050FA4: lhu         $v1, -0x3D96($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X3D96);
    // 0x80050FA8: sll         $v0, $v0, 20
    ctx->r2 = S32(ctx->r2 << 20);
    // 0x80050FAC: sra         $v0, $v0, 20
    ctx->r2 = S32(SIGNED(ctx->r2) >> 20);
    // 0x80050FB0: sll         $v1, $v1, 20
    ctx->r3 = S32(ctx->r3 << 20);
    // 0x80050FB4: sra         $v1, $v1, 20
    ctx->r3 = S32(SIGNED(ctx->r3) >> 20);
    // 0x80050FB8: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x80050FBC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80050FC0: sh          $v1, -0x3D96($at)
    MEM_H(-0X3D96, ctx->r1) = ctx->r3;
    // 0x80050FC4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80050FC8: lhu         $v0, -0x3D94($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3D94);
    // 0x80050FCC: sll         $v0, $v0, 20
    ctx->r2 = S32(ctx->r2 << 20);
    // 0x80050FD0: sra         $v0, $v0, 20
    ctx->r2 = S32(SIGNED(ctx->r2) >> 20);
    // 0x80050FD4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80050FD8: sh          $v0, -0x3D94($at)
    MEM_H(-0X3D94, ctx->r1) = ctx->r2;
    // 0x80050FDC: lw          $ra, 0xB4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XB4);
    // 0x80050FE0: lw          $s4, 0xB0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XB0);
    // 0x80050FE4: lw          $s3, 0xAC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XAC);
    // 0x80050FE8: lw          $s2, 0xA8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XA8);
    // 0x80050FEC: lw          $s1, 0xA4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XA4);
    // 0x80050FF0: lw          $s0, 0xA0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XA0);
    // 0x80050FF4: jr          $ra
    // 0x80050FF8: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    TRACE_RETURN()
    return;
    // 0x80050FF8: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void func_80079180_54580(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80079180: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80079184: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80079188: jal         0x8004DA68
    // 0x8007918C: lbu         $a0, 0x1($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1);
    func_8004DA68_28E68(rdram, ctx);
        goto after_0;
    // 0x8007918C: lbu         $a0, 0x1($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1);
    after_0:
    // 0x80079190: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80079194: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80079198: jr          $ra
    // 0x8007919C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8007919C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80073D20_4F120(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80073D20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80073D24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80073D28: jal         0x80073A18
    // 0x80073D2C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80073A18_4EE18(rdram, ctx);
        goto after_0;
    // 0x80073D2C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x80073D30: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80073D34: lb          $v0, 0x4B1A($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4B1A);
    // 0x80073D38: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x80073D3C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x80073D40: lbu         $s0, 0x3984($s0)
    ctx->r16 = MEM_BU(ctx->r16, 0X3984);
    // 0x80073D44: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80073D48: lh          $v0, -0x3BA8($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X3BA8);
    // 0x80073D4C: beq         $v0, $s0, L_80073D8C
    if (ctx->r2 == ctx->r16) {
        // 0x80073D50: nop
    
            goto L_80073D8C;
    }
    // 0x80073D50: nop

    // 0x80073D54: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80073D58: jal         0x80092EB0
    // 0x80073D5C: sh          $s0, -0x3BA8($at)
    MEM_H(-0X3BA8, ctx->r1) = ctx->r16;
    func_80092EB0_6E2B0(rdram, ctx);
        goto after_1;
    // 0x80073D5C: sh          $s0, -0x3BA8($at)
    MEM_H(-0X3BA8, ctx->r1) = ctx->r16;
    after_1:
    // 0x80073D60: jal         0x80087570
    // 0x80073D64: nop

    Graph_ThreadStop(rdram, ctx);
        goto after_2;
    // 0x80073D64: nop

    after_2:
    // 0x80073D68: jal         0x80083E30
    // 0x80073D6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80083E30_5F230(rdram, ctx);
        goto after_3;
    // 0x80073D6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80073D70: jal         0x80087590
    // 0x80073D74: nop

    func_80087590_62990(rdram, ctx);
        goto after_4;
    // 0x80073D74: nop

    after_4:
    // 0x80073D78: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80073D7C: jal         0x80036D34
    // 0x80073D80: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80036D34_12134(rdram, ctx);
        goto after_5;
    // 0x80073D80: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x80073D84: jal         0x80036BCC
    // 0x80073D88: nop

    func_80036BCC_11FCC(rdram, ctx);
        goto after_6;
    // 0x80073D88: nop

    after_6:
L_80073D8C:
    // 0x80073D8C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80073D90: lbu         $v0, 0x4B1B($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4B1B);
    // 0x80073D94: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80073D98: sra         $v0, $v0, 25
    ctx->r2 = S32(SIGNED(ctx->r2) >> 25);
    // 0x80073D9C: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x80073DA0: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x80073DA4: lbu         $s0, 0x3988($s0)
    ctx->r16 = MEM_BU(ctx->r16, 0X3988);
    // 0x80073DA8: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80073DAC: lh          $v0, -0x3BA6($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X3BA6);
    // 0x80073DB0: beq         $v0, $s0, L_80073DFC
    if (ctx->r2 == ctx->r16) {
        // 0x80073DB4: nop
    
            goto L_80073DFC;
    }
    // 0x80073DB4: nop

    // 0x80073DB8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80073DBC: jal         0x80092EB0
    // 0x80073DC0: sh          $s0, -0x3BA6($at)
    MEM_H(-0X3BA6, ctx->r1) = ctx->r16;
    func_80092EB0_6E2B0(rdram, ctx);
        goto after_7;
    // 0x80073DC0: sh          $s0, -0x3BA6($at)
    MEM_H(-0X3BA6, ctx->r1) = ctx->r16;
    after_7:
    // 0x80073DC4: jal         0x80087570
    // 0x80073DC8: nop

    Graph_ThreadStop(rdram, ctx);
        goto after_8;
    // 0x80073DC8: nop

    after_8:
    // 0x80073DCC: jal         0x80083E30
    // 0x80073DD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80083E30_5F230(rdram, ctx);
        goto after_9;
    // 0x80073DD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x80073DD4: jal         0x80087590
    // 0x80073DD8: nop

    func_80087590_62990(rdram, ctx);
        goto after_10;
    // 0x80073DD8: nop

    after_10:
    // 0x80073DDC: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x80073DE0: jal         0x80036D34
    // 0x80073DE4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80036D34_12134(rdram, ctx);
        goto after_11;
    // 0x80073DE4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_11:
    // 0x80073DE8: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x80073DEC: jal         0x80036D34
    // 0x80073DF0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80036D34_12134(rdram, ctx);
        goto after_12;
    // 0x80073DF0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_12:
    // 0x80073DF4: jal         0x80036BCC
    // 0x80073DF8: nop

    func_80036BCC_11FCC(rdram, ctx);
        goto after_13;
    // 0x80073DF8: nop

    after_13:
L_80073DFC:
    // 0x80073DFC: jal         0x800736E0
    // 0x80073E00: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800736E0_4EAE0(rdram, ctx);
        goto after_14;
    // 0x80073E00: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_14:
    // 0x80073E04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80073E08: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80073E0C: jr          $ra
    // 0x80073E10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80073E10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8007BF9C_5739C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007BF9C: slt         $v0, $a0, $a1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8007BFA0: bnel        $v0, $zero, L_8007BFA8
    if (ctx->r2 != 0) {
        // 0x8007BFA4: addu        $a0, $a1, $zero
        ctx->r4 = ADD32(ctx->r5, 0);
            goto L_8007BFA8;
    }
    goto skip_0;
    // 0x8007BFA4: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    skip_0:
L_8007BFA8:
    // 0x8007BFA8: slt         $v0, $a0, $a2
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8007BFAC: bnel        $v0, $zero, L_8007BFB4
    if (ctx->r2 != 0) {
        // 0x8007BFB0: addu        $a0, $a2, $zero
        ctx->r4 = ADD32(ctx->r6, 0);
            goto L_8007BFB4;
    }
    goto skip_1;
    // 0x8007BFB0: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    skip_1:
L_8007BFB4:
    // 0x8007BFB4: slt         $v0, $a0, $a3
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x8007BFB8: bnel        $v0, $zero, L_8007BFC0
    if (ctx->r2 != 0) {
        // 0x8007BFBC: addu        $a0, $a3, $zero
        ctx->r4 = ADD32(ctx->r7, 0);
            goto L_8007BFC0;
    }
    goto skip_2;
    // 0x8007BFBC: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
    skip_2:
L_8007BFC0:
    // 0x8007BFC0: jr          $ra
    // 0x8007BFC4: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    TRACE_RETURN()
    return;
    // 0x8007BFC4: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
;}
RECOMP_FUNC void func_80028D30_4130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80028D30: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80028D34: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80028D38: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    // 0x80028D3C: lui         $a3, 0xFF
    ctx->r7 = S32(0XFF << 16);
    // 0x80028D40: ori         $a3, $a3, 0xFFFF
    ctx->r7 = ctx->r7 | 0XFFFF;
    // 0x80028D44: lui         $v1, 0xFFF
    ctx->r3 = S32(0XFFF << 16);
    // 0x80028D48: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x80028D4C: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x80028D50: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80028D54: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80028D58: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80028D5C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80028D60: lw          $a0, 0x4($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X4);
    // 0x80028D64: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x80028D68: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x80028D6C: and         $s2, $a0, $v1
    ctx->r18 = ctx->r4 & ctx->r3;
    // 0x80028D70: and         $v0, $v0, $a3
    ctx->r2 = ctx->r2 & ctx->r7;
    // 0x80028D74: addu        $s1, $a2, $v0
    ctx->r17 = ADD32(ctx->r6, ctx->r2);
    // 0x80028D78: addu        $s0, $s1, $s2
    ctx->r16 = ADD32(ctx->r17, ctx->r18);
    // 0x80028D7C: addiu       $v1, $s0, 0x1
    ctx->r3 = ADD32(ctx->r16, 0X1);
    // 0x80028D80: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    // 0x80028D84: bgez        $a0, L_80028DB0
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80028D88: and         $s0, $v1, $v0
        ctx->r16 = ctx->r3 & ctx->r2;
            goto L_80028DB0;
    }
    // 0x80028D88: and         $s0, $v1, $v0
    ctx->r16 = ctx->r3 & ctx->r2;
    // 0x80028D8C: jal         0x80027490
    // 0x80028D90: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80027490_2890(rdram, ctx);
        goto after_0;
    // 0x80028D90: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x80028D94: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80028D98: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80028D9C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80028DA0: jal         0x80027334
    // 0x80028DA4: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    func_80027334_2734(rdram, ctx);
        goto after_1;
    // 0x80028DA4: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_1:
    // 0x80028DA8: j           L_80028DC4
    // 0x80028DAC: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
        goto L_80028DC4;
    // 0x80028DAC: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
L_80028DB0:
    // 0x80028DB0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80028DB4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80028DB8: jal         0x8002724C
    // 0x80028DBC: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    func_8002724C_264C(rdram, ctx);
        goto after_2;
    // 0x80028DBC: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_2:
    // 0x80028DC0: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
L_80028DC4:
    // 0x80028DC4: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80028DC8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80028DCC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80028DD0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80028DD4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80028DD8: jr          $ra
    // 0x80028DDC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80028DDC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8008D52C_6892C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008D52C: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x8008D530: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8008D534: sb          $v0, 0xB6($a0)
    MEM_B(0XB6, ctx->r4) = ctx->r2;
    // 0x8008D538: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x8008D53C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8008D540: sb          $v0, 0xD5($a0)
    MEM_B(0XD5, ctx->r4) = ctx->r2;
    // 0x8008D544: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x8008D548: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008D54C: ldc1        $f0, 0x2DB8($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X2DB8);
    // 0x8008D550: mtc1        $v0, $f2
    ctx->f2.u32l = ctx->r2;
    // 0x8008D554: nop

    // 0x8008D558: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x8008D55C: cvt.d.s     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.d = CVT_D_S(ctx->f2.fl);
    // 0x8008D560: div.d       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = DIV_D(ctx->f2.d, ctx->f0.d);
    // 0x8008D564: lbu         $v0, 0xD5($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD5);
    // 0x8008D568: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008D56C: ldc1        $f4, 0x2DC0($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, 0X2DC0);
    // 0x8008D570: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x8008D574: nop

    // 0x8008D578: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x8008D57C: cvt.d.s     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.d = CVT_D_S(ctx->f0.fl);
    // 0x8008D580: div.d       $f4, $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = DIV_D(ctx->f4.d, ctx->f0.d);
    // 0x8008D584: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x8008D588: cvt.s.d     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); 
    ctx->f2.fl = CVT_S_D(ctx->f2.d);
    // 0x8008D58C: swc1        $f2, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f2.u32l;
    // 0x8008D590: cvt.s.d     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f4.fl = CVT_S_D(ctx->f4.d);
    // 0x8008D594: jr          $ra
    // 0x8008D598: swc1        $f4, 0xDC($a0)
    MEM_W(0XDC, ctx->r4) = ctx->f4.u32l;
    TRACE_RETURN()
    return;
    // 0x8008D598: swc1        $f4, 0xDC($a0)
    MEM_W(0XDC, ctx->r4) = ctx->f4.u32l;
;}
RECOMP_FUNC void __freeParam(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800991F8: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x800991FC: lw          $v1, -0xAD0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0XAD0);
    // 0x80099200: lw          $v0, 0x2C($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X2C);
    // 0x80099204: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x80099208: jr          $ra
    // 0x8009920C: sw          $a0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r4;
    TRACE_RETURN()
    return;
    // 0x8009920C: sw          $a0, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r4;
;}
RECOMP_FUNC void func_8008B328_66728(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008B328: beq         $a0, $zero, L_8008B380
    if (ctx->r4 == 0) {
        // 0x8008B32C: addiu       $sp, $sp, -0x8
        ctx->r29 = ADD32(ctx->r29, -0X8);
            goto L_8008B380;
    }
    // 0x8008B32C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8008B330: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x8008B334: lw          $v1, 0x4F84($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4F84);
    // 0x8008B338: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008B33C: lw          $v0, 0x4F8C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4F8C);
    // 0x8008B340: blez        $v1, L_8008B380
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8008B344: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_8008B380;
    }
    // 0x8008B344: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8008B348: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x8008B34C: addiu       $v1, $v0, 0x78
    ctx->r3 = ADD32(ctx->r2, 0X78);
L_8008B350:
    // 0x8008B350: lw          $v0, -0x34($v1)
    ctx->r2 = MEM_W(ctx->r3, -0X34);
    // 0x8008B354: bnel        $v0, $a0, L_8008B374
    if (ctx->r2 != ctx->r4) {
        // 0x8008B358: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_8008B374;
    }
    goto skip_0;
    // 0x8008B358: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    skip_0:
    // 0x8008B35C: lw          $v0, -0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, -0X4);
    // 0x8008B360: bne         $v0, $zero, L_8008B36C
    if (ctx->r2 != 0) {
        // 0x8008B364: nop
    
            goto L_8008B36C;
    }
    // 0x8008B364: nop

    // 0x8008B368: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
L_8008B36C:
    // 0x8008B36C: j           L_8008B384
    // 0x8008B370: lw          $v0, 0x8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X8);
        goto L_8008B384;
    // 0x8008B370: lw          $v0, 0x8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X8);
L_8008B374:
    // 0x8008B374: slt         $v0, $a1, $a2
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8008B378: bne         $v0, $zero, L_8008B350
    if (ctx->r2 != 0) {
        // 0x8008B37C: addiu       $v1, $v1, 0x13C
        ctx->r3 = ADD32(ctx->r3, 0X13C);
            goto L_8008B350;
    }
    // 0x8008B37C: addiu       $v1, $v1, 0x13C
    ctx->r3 = ADD32(ctx->r3, 0X13C);
L_8008B380:
    // 0x8008B380: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8008B384:
    // 0x8008B384: jr          $ra
    // 0x8008B388: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x8008B388: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800A37A4_7EBA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800A37A4: divu        $zero, $a0, $a3
    lo = S32(U32(ctx->r4) / U32(ctx->r7)); hi = S32(U32(ctx->r4) % U32(ctx->r7));
    // 0x800A37A8: bne         $a3, $zero, L_800A37B4
    if (ctx->r7 != 0) {
        // 0x800A37AC: nop
    
            goto L_800A37B4;
    }
    // 0x800A37AC: nop

    // 0x800A37B0: break       7
    do_break(2148153264);
L_800A37B4:
    // 0x800A37B4: mflo        $t2
    ctx->r10 = lo;
    // 0x800A37B8: mfhi        $a0
    ctx->r4 = hi;
    // 0x800A37BC: xor         $t0, $t0, $t0
    ctx->r8 = ctx->r8 ^ ctx->r8;
L_800A37C0:
    // 0x800A37C0: beq         $a0, $zero, L_800A383C
    if (ctx->r4 == 0) {
        // 0x800A37C4: nop
    
            goto L_800A383C;
    }
    // 0x800A37C4: nop

    // 0x800A37C8: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    // 0x800A37CC: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x800A37D0: addu        $t1, $a3, $zero
    ctx->r9 = ADD32(ctx->r7, 0);
L_800A37D4:
    // 0x800A37D4: sll         $t9, $v0, 31
    ctx->r25 = S32(ctx->r2 << 31);
    // 0x800A37D8: srl         $v1, $v1, 1
    ctx->r3 = S32(U32(ctx->r3) >> 1);
    // 0x800A37DC: or          $v1, $v1, $t9
    ctx->r3 = ctx->r3 | ctx->r25;
    // 0x800A37E0: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x800A37E4: bne         $v0, $zero, L_800A37D4
    if (ctx->r2 != 0) {
        // 0x800A37E8: srl         $t1, $t1, 1
        ctx->r9 = S32(U32(ctx->r9) >> 1);
            goto L_800A37D4;
    }
    // 0x800A37E8: srl         $t1, $t1, 1
    ctx->r9 = S32(U32(ctx->r9) >> 1);
    // 0x800A37EC: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x800A37F0: divu        $zero, $v1, $t1
    lo = S32(U32(ctx->r3) / U32(ctx->r9)); hi = S32(U32(ctx->r3) % U32(ctx->r9));
    // 0x800A37F4: bne         $t1, $zero, L_800A3800
    if (ctx->r9 != 0) {
        // 0x800A37F8: nop
    
            goto L_800A3800;
    }
    // 0x800A37F8: nop

    // 0x800A37FC: break       7
    do_break(2148153340);
L_800A3800:
    // 0x800A3800: mflo        $v1
    ctx->r3 = lo;
    // 0x800A3804: xor         $v0, $v0, $v0
    ctx->r2 = ctx->r2 ^ ctx->r2;
    // 0x800A3808: addu        $t0, $t0, $v1
    ctx->r8 = ADD32(ctx->r8, ctx->r3);
    // 0x800A380C: sltu        $t9, $t0, $v1
    ctx->r25 = ctx->r8 < ctx->r3 ? 1 : 0;
    // 0x800A3810: addu        $t2, $t2, $v0
    ctx->r10 = ADD32(ctx->r10, ctx->r2);
    // 0x800A3814: addu        $t2, $t2, $t9
    ctx->r10 = ADD32(ctx->r10, ctx->r25);
    // 0x800A3818: nop

    // 0x800A381C: multu       $v1, $a3
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800A3820: mflo        $v1
    ctx->r3 = lo;
    // 0x800A3824: mfhi        $v0
    ctx->r2 = hi;
    // 0x800A3828: sltu        $t9, $a1, $v1
    ctx->r25 = ctx->r5 < ctx->r3 ? 1 : 0;
    // 0x800A382C: subu        $a1, $a1, $v1
    ctx->r5 = SUB32(ctx->r5, ctx->r3);
    // 0x800A3830: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x800A3834: j           L_800A37C0
    // 0x800A3838: subu        $a0, $a0, $t9
    ctx->r4 = SUB32(ctx->r4, ctx->r25);
        goto L_800A37C0;
    // 0x800A3838: subu        $a0, $a0, $t9
    ctx->r4 = SUB32(ctx->r4, ctx->r25);
L_800A383C:
    // 0x800A383C: divu        $zero, $a1, $a3
    lo = S32(U32(ctx->r5) / U32(ctx->r7)); hi = S32(U32(ctx->r5) % U32(ctx->r7));
    // 0x800A3840: bne         $a3, $zero, L_800A384C
    if (ctx->r7 != 0) {
        // 0x800A3844: nop
    
            goto L_800A384C;
    }
    // 0x800A3844: nop

    // 0x800A3848: break       7
    do_break(2148153416);
L_800A384C:
    // 0x800A384C: mflo        $v1
    ctx->r3 = lo;
    // 0x800A3850: mfhi        $t1
    ctx->r9 = hi;
    // 0x800A3854: xor         $v0, $v0, $v0
    ctx->r2 = ctx->r2 ^ ctx->r2;
    // 0x800A3858: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x800A385C: sltu        $t9, $v1, $t0
    ctx->r25 = ctx->r3 < ctx->r8 ? 1 : 0;
    // 0x800A3860: addu        $v0, $v0, $t2
    ctx->r2 = ADD32(ctx->r2, ctx->r10);
    // 0x800A3864: jr          $ra
    // 0x800A3868: addu        $v0, $v0, $t9
    ctx->r2 = ADD32(ctx->r2, ctx->r25);
    TRACE_RETURN()
    return;
    // 0x800A3868: addu        $v0, $v0, $t9
    ctx->r2 = ADD32(ctx->r2, ctx->r25);
    // 0x800A386C: nop

;}
RECOMP_FUNC void func_8004A36C_2576C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004A36C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8004A370: lh          $v0, -0x3984($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X3984);
    // 0x8004A374: bgtz        $v0, L_8004A3A8
    if (SIGNED(ctx->r2) > 0) {
        // 0x8004A378: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8004A3A8;
    }
    // 0x8004A378: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8004A37C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8004A380: lbu         $v1, -0x3993($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3993);
    // 0x8004A384: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8004A388: sb          $v0, -0x3991($at)
    MEM_B(-0X3991, ctx->r1) = ctx->r2;
    // 0x8004A38C: bne         $v1, $zero, L_8004A3A8
    if (ctx->r3 != 0) {
        // 0x8004A390: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8004A3A8;
    }
    // 0x8004A390: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8004A394: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8004A398: sb          $v0, -0x3993($at)
    MEM_B(-0X3993, ctx->r1) = ctx->r2;
    // 0x8004A39C: addiu       $v0, $zero, 0x1C
    ctx->r2 = ADD32(0, 0X1C);
    // 0x8004A3A0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8004A3A4: sb          $v0, -0x3997($at)
    MEM_B(-0X3997, ctx->r1) = ctx->r2;
L_8004A3A8:
    // 0x8004A3A8: jr          $ra
    // 0x8004A3AC: nop

    TRACE_RETURN()
    return;
    // 0x8004A3AC: nop

;}
RECOMP_FUNC void func_80058AF0_33EF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80058AF0: jr          $ra
    // 0x80058AF4: nop

    TRACE_RETURN()
    return;
    // 0x80058AF4: nop

;}
RECOMP_FUNC void func_800320E4_D4E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800320E4: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x800320E8: lw          $v1, 0x8($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X8);
    // 0x800320EC: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800320F0: mflo        $v0
    ctx->r2 = lo;
    // 0x800320F4: lw          $a3, 0x4($a1)
    ctx->r7 = MEM_W(ctx->r5, 0X4);
    // 0x800320F8: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x800320FC: mult        $v1, $a3
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80032100: mflo        $v1
    ctx->r3 = lo;
    // 0x80032104: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80032108: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x8003210C: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x80032110: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x80032114: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80032118: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003211C: mflo        $v0
    ctx->r2 = lo;
    // 0x80032120: lw          $a3, 0x8($a1)
    ctx->r7 = MEM_W(ctx->r5, 0X8);
    // 0x80032124: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80032128: mult        $v1, $a3
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003212C: mflo        $v1
    ctx->r3 = lo;
    // 0x80032130: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80032134: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80032138: sw          $v0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r2;
    // 0x8003213C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80032140: lw          $v1, 0x4($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X4);
    // 0x80032144: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80032148: mflo        $v0
    ctx->r2 = lo;
    // 0x8003214C: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x80032150: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x80032154: mult        $v1, $a0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80032158: mflo        $v1
    ctx->r3 = lo;
    // 0x8003215C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80032160: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80032164: jr          $ra
    // 0x80032168: sw          $v0, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80032168: sw          $v0, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r2;
;}
RECOMP_FUNC void func_8006F8D0_4ACD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006F8D0: jr          $ra
    // 0x8006F8D4: nop

    TRACE_RETURN()
    return;
    // 0x8006F8D4: nop

;}
RECOMP_FUNC void func_8005B568_36968(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8005B568: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8005B56C: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x8005B570: addu        $s6, $a1, $zero
    ctx->r22 = ADD32(ctx->r5, 0);
    // 0x8005B574: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8005B578: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x8005B57C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8005B580: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8005B584: sw          $fp, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r30;
    // 0x8005B588: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x8005B58C: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x8005B590: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8005B594: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8005B598: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8005B59C: bne         $a0, $v0, L_8005B69C
    if (ctx->r4 != ctx->r2) {
        // 0x8005B5A0: sw          $s1, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r17;
            goto L_8005B69C;
    }
    // 0x8005B5A0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8005B5A4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005B5A8: lh          $v0, -0x3E36($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X3E36);
    // 0x8005B5AC: sltiu       $v1, $s0, 0x1
    ctx->r3 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x8005B5B0: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8005B5B4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8005B5B8: beq         $v0, $zero, L_8005B698
    if (ctx->r2 == 0) {
        // 0x8005B5BC: addiu       $a2, $s6, 0x60
        ctx->r6 = ADD32(ctx->r22, 0X60);
            goto L_8005B698;
    }
    // 0x8005B5BC: addiu       $a2, $s6, 0x60
    ctx->r6 = ADD32(ctx->r22, 0X60);
    // 0x8005B5C0: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x8005B5C4: lw          $v0, -0x5858($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5858);
    // 0x8005B5C8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8005B5CC: addiu       $v0, $a1, 0x28
    ctx->r2 = ADD32(ctx->r5, 0X28);
    // 0x8005B5D0: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8005B5D4: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x8005B5D8: lui         $v0, 0x900
    ctx->r2 = S32(0X900 << 16);
    // 0x8005B5DC: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x8005B5E0: addiu       $v0, $zero, 0x2C
    ctx->r2 = ADD32(0, 0X2C);
    // 0x8005B5E4: sb          $v0, 0x7($a1)
    MEM_B(0X7, ctx->r5) = ctx->r2;
    // 0x8005B5E8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8005B5EC: sb          $v0, 0x6($a1)
    MEM_B(0X6, ctx->r5) = ctx->r2;
    // 0x8005B5F0: sb          $v0, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r2;
    // 0x8005B5F4: sb          $v0, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r2;
    // 0x8005B5F8: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005B5FC: lhu         $v0, -0x3DDC($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3DDC);
    // 0x8005B600: addiu       $v0, $v0, 0x4E
    ctx->r2 = ADD32(ctx->r2, 0X4E);
    // 0x8005B604: sh          $v0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r2;
    // 0x8005B608: sh          $v0, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r2;
    // 0x8005B60C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005B610: lhu         $v0, -0x3DDC($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3DDC);
    // 0x8005B614: addiu       $v0, $v0, 0x76
    ctx->r2 = ADD32(ctx->r2, 0X76);
    // 0x8005B618: sh          $v0, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r2;
    // 0x8005B61C: sh          $v0, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r2;
    // 0x8005B620: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005B624: lhu         $v0, -0x3DDA($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3DDA);
    // 0x8005B628: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8005B62C: sh          $v0, 0x12($a1)
    MEM_H(0X12, ctx->r5) = ctx->r2;
    // 0x8005B630: sh          $v0, 0xA($a1)
    MEM_H(0XA, ctx->r5) = ctx->r2;
    // 0x8005B634: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8005B638: lhu         $v1, -0x3DDA($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X3DDA);
    // 0x8005B63C: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x8005B640: sb          $v0, 0x24($a1)
    MEM_B(0X24, ctx->r5) = ctx->r2;
    // 0x8005B644: sb          $v0, 0x14($a1)
    MEM_B(0X14, ctx->r5) = ctx->r2;
    // 0x8005B648: addiu       $v0, $zero, 0xE8
    ctx->r2 = ADD32(0, 0XE8);
    // 0x8005B64C: sb          $v0, 0x15($a1)
    MEM_B(0X15, ctx->r5) = ctx->r2;
    // 0x8005B650: sb          $v0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r2;
    // 0x8005B654: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
    // 0x8005B658: sb          $zero, 0x1C($a1)
    MEM_B(0X1C, ctx->r5) = 0;
    // 0x8005B65C: sb          $zero, 0xC($a1)
    MEM_B(0XC, ctx->r5) = 0;
    // 0x8005B660: sb          $v0, 0x25($a1)
    MEM_B(0X25, ctx->r5) = ctx->r2;
    // 0x8005B664: sb          $v0, 0x1D($a1)
    MEM_B(0X1D, ctx->r5) = ctx->r2;
    // 0x8005B668: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8005B66C: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x8005B670: addiu       $v0, $zero, 0x3D09
    ctx->r2 = ADD32(0, 0X3D09);
    // 0x8005B674: sh          $v0, 0xE($a1)
    MEM_H(0XE, ctx->r5) = ctx->r2;
    // 0x8005B678: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8005B67C: sh          $v0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r2;
    // 0x8005B680: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x8005B684: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x8005B688: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    // 0x8005B68C: sh          $v1, 0x22($a1)
    MEM_H(0X22, ctx->r5) = ctx->r3;
    // 0x8005B690: jal         0x8002FD30
    // 0x8005B694: sh          $v1, 0x1A($a1)
    MEM_H(0X1A, ctx->r5) = ctx->r3;
    func_8002FD30_B130(rdram, ctx);
        goto after_0;
    // 0x8005B694: sh          $v1, 0x1A($a1)
    MEM_H(0X1A, ctx->r5) = ctx->r3;
    after_0:
L_8005B698:
    // 0x8005B698: addiu       $a0, $zero, 0x58
    ctx->r4 = ADD32(0, 0X58);
L_8005B69C:
    // 0x8005B69C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8005B6A0: lh          $v1, -0x3E36($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X3E36);
    // 0x8005B6A4: bgez        $v1, L_8005B6B4
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8005B6A8: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_8005B6B4;
    }
    // 0x8005B6A8: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8005B6AC: j           L_8005B6B8
    // 0x8005B6B0: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
        goto L_8005B6B8;
    // 0x8005B6B0: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
L_8005B6B4:
    // 0x8005B6B4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
L_8005B6B8:
    // 0x8005B6B8: nop

    // 0x8005B6BC: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8005B6C0: mflo        $v0
    ctx->r2 = lo;
    // 0x8005B6C4: nop

    // 0x8005B6C8: nop

    // 0x8005B6CC: bltzl       $v0, L_8005B6D4
    if (SIGNED(ctx->r2) < 0) {
        // 0x8005B6D0: addiu       $v0, $v0, 0xF
        ctx->r2 = ADD32(ctx->r2, 0XF);
            goto L_8005B6D4;
    }
    goto skip_0;
    // 0x8005B6D0: addiu       $v0, $v0, 0xF
    ctx->r2 = ADD32(ctx->r2, 0XF);
    skip_0:
L_8005B6D4:
    // 0x8005B6D4: sra         $a0, $v0, 4
    ctx->r4 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8005B6D8: slti        $v0, $a0, 0x4
    ctx->r2 = SIGNED(ctx->r4) < 0X4 ? 1 : 0;
    // 0x8005B6DC: bne         $v0, $zero, L_8005B888
    if (ctx->r2 != 0) {
        // 0x8005B6E0: addiu       $s1, $zero, 0x80
        ctx->r17 = ADD32(0, 0X80);
            goto L_8005B888;
    }
    // 0x8005B6E0: addiu       $s1, $zero, 0x80
    ctx->r17 = ADD32(0, 0X80);
    // 0x8005B6E4: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x8005B6E8: lw          $v0, -0x5858($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5858);
    // 0x8005B6EC: lui         $s3, 0x801C
    ctx->r19 = S32(0X801C << 16);
    // 0x8005B6F0: addiu       $s3, $s3, -0x3DDC
    ctx->r19 = ADD32(ctx->r19, -0X3DDC);
    // 0x8005B6F4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8005B6F8: addiu       $v0, $a1, 0x28
    ctx->r2 = ADD32(ctx->r5, 0X28);
    // 0x8005B6FC: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8005B700: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x8005B704: lui         $a3, 0x900
    ctx->r7 = S32(0X900 << 16);
    // 0x8005B708: sw          $a3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r7;
    // 0x8005B70C: addiu       $a3, $zero, 0x2C
    ctx->r7 = ADD32(0, 0X2C);
    // 0x8005B710: sb          $a3, 0x7($a1)
    MEM_B(0X7, ctx->r5) = ctx->r7;
    // 0x8005B714: sb          $s1, 0x6($a1)
    MEM_B(0X6, ctx->r5) = ctx->r17;
    // 0x8005B718: sb          $s1, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r17;
    // 0x8005B71C: sb          $s1, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r17;
    // 0x8005B720: lhu         $v0, 0x0($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X0);
    // 0x8005B724: addiu       $s5, $a0, 0x36
    ctx->r21 = ADD32(ctx->r4, 0X36);
    // 0x8005B728: addiu       $v0, $v0, 0x36
    ctx->r2 = ADD32(ctx->r2, 0X36);
    // 0x8005B72C: sh          $v0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r2;
    // 0x8005B730: sh          $v0, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r2;
    // 0x8005B734: lhu         $v0, 0x0($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X0);
    // 0x8005B738: sll         $s0, $s0, 3
    ctx->r16 = S32(ctx->r16 << 3);
    // 0x8005B73C: addiu       $s4, $s0, 0x8
    ctx->r20 = ADD32(ctx->r16, 0X8);
    // 0x8005B740: addu        $v0, $v0, $s5
    ctx->r2 = ADD32(ctx->r2, ctx->r21);
    // 0x8005B744: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x8005B748: sh          $v0, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r2;
    // 0x8005B74C: sh          $v0, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r2;
    // 0x8005B750: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005B754: lhu         $v0, -0x3DDA($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3DDA);
    // 0x8005B758: addiu       $s6, $s6, 0x60
    ctx->r22 = ADD32(ctx->r22, 0X60);
    // 0x8005B75C: addiu       $s2, $zero, 0xB8
    ctx->r18 = ADD32(0, 0XB8);
    // 0x8005B760: addu        $v0, $v0, $s6
    ctx->r2 = ADD32(ctx->r2, ctx->r22);
    // 0x8005B764: sh          $v0, 0x12($a1)
    MEM_H(0X12, ctx->r5) = ctx->r2;
    // 0x8005B768: sh          $v0, 0xA($a1)
    MEM_H(0XA, ctx->r5) = ctx->r2;
    // 0x8005B76C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8005B770: lhu         $v1, -0x3DDA($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X3DDA);
    // 0x8005B774: addiu       $v0, $zero, 0x88
    ctx->r2 = ADD32(0, 0X88);
    // 0x8005B778: sb          $v0, 0x1C($a1)
    MEM_B(0X1C, ctx->r5) = ctx->r2;
    // 0x8005B77C: sb          $v0, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r2;
    // 0x8005B780: sb          $s2, 0x24($a1)
    MEM_B(0X24, ctx->r5) = ctx->r18;
    // 0x8005B784: sb          $s2, 0x14($a1)
    MEM_B(0X14, ctx->r5) = ctx->r18;
    // 0x8005B788: sb          $s0, 0x15($a1)
    MEM_B(0X15, ctx->r5) = ctx->r16;
    // 0x8005B78C: sb          $s0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r16;
    // 0x8005B790: sb          $s4, 0x25($a1)
    MEM_B(0X25, ctx->r5) = ctx->r20;
    // 0x8005B794: sb          $s4, 0x1D($a1)
    MEM_B(0X1D, ctx->r5) = ctx->r20;
    // 0x8005B798: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8005B79C: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x8005B7A0: addiu       $fp, $zero, 0x3D09
    ctx->r30 = ADD32(0, 0X3D09);
    // 0x8005B7A4: addiu       $s7, $zero, 0xC
    ctx->r23 = ADD32(0, 0XC);
    // 0x8005B7A8: sh          $fp, 0xE($a1)
    MEM_H(0XE, ctx->r5) = ctx->r30;
    // 0x8005B7AC: sh          $s7, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r23;
    // 0x8005B7B0: addu        $v1, $v1, $s6
    ctx->r3 = ADD32(ctx->r3, ctx->r22);
    // 0x8005B7B4: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x8005B7B8: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    // 0x8005B7BC: sh          $v1, 0x22($a1)
    MEM_H(0X22, ctx->r5) = ctx->r3;
    // 0x8005B7C0: jal         0x8002FD30
    // 0x8005B7C4: sh          $v1, 0x1A($a1)
    MEM_H(0X1A, ctx->r5) = ctx->r3;
    func_8002FD30_B130(rdram, ctx);
        goto after_1;
    // 0x8005B7C4: sh          $v1, 0x1A($a1)
    MEM_H(0X1A, ctx->r5) = ctx->r3;
    after_1:
    // 0x8005B7C8: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x8005B7CC: lw          $v0, -0x5858($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5858);
    // 0x8005B7D0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8005B7D4: addiu       $v0, $a1, 0x28
    ctx->r2 = ADD32(ctx->r5, 0X28);
    // 0x8005B7D8: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8005B7DC: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x8005B7E0: lui         $a3, 0x900
    ctx->r7 = S32(0X900 << 16);
    // 0x8005B7E4: sw          $a3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r7;
    // 0x8005B7E8: addiu       $a3, $zero, 0x2C
    ctx->r7 = ADD32(0, 0X2C);
    // 0x8005B7EC: sb          $a3, 0x7($a1)
    MEM_B(0X7, ctx->r5) = ctx->r7;
    // 0x8005B7F0: sb          $s1, 0x6($a1)
    MEM_B(0X6, ctx->r5) = ctx->r17;
    // 0x8005B7F4: sb          $s1, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r17;
    // 0x8005B7F8: sb          $s1, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r17;
    // 0x8005B7FC: lhu         $v0, 0x0($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X0);
    // 0x8005B800: addu        $v0, $v0, $s5
    ctx->r2 = ADD32(ctx->r2, ctx->r21);
    // 0x8005B804: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x8005B808: sh          $v0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r2;
    // 0x8005B80C: sh          $v0, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r2;
    // 0x8005B810: lhu         $v0, 0x0($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X0);
    // 0x8005B814: addu        $v0, $v0, $s5
    ctx->r2 = ADD32(ctx->r2, ctx->r21);
    // 0x8005B818: sh          $v0, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r2;
    // 0x8005B81C: sh          $v0, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r2;
    // 0x8005B820: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005B824: lhu         $v0, -0x3DDA($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3DDA);
    // 0x8005B828: addu        $v0, $v0, $s6
    ctx->r2 = ADD32(ctx->r2, ctx->r22);
    // 0x8005B82C: sh          $v0, 0x12($a1)
    MEM_H(0X12, ctx->r5) = ctx->r2;
    // 0x8005B830: sh          $v0, 0xA($a1)
    MEM_H(0XA, ctx->r5) = ctx->r2;
    // 0x8005B834: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8005B838: lhu         $v1, -0x3DDA($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X3DDA);
    // 0x8005B83C: addiu       $v0, $zero, 0xBA
    ctx->r2 = ADD32(0, 0XBA);
    // 0x8005B840: sb          $s2, 0x1C($a1)
    MEM_B(0X1C, ctx->r5) = ctx->r18;
    // 0x8005B844: sb          $s2, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r18;
    // 0x8005B848: sb          $v0, 0x24($a1)
    MEM_B(0X24, ctx->r5) = ctx->r2;
    // 0x8005B84C: sb          $v0, 0x14($a1)
    MEM_B(0X14, ctx->r5) = ctx->r2;
    // 0x8005B850: sb          $s0, 0x15($a1)
    MEM_B(0X15, ctx->r5) = ctx->r16;
    // 0x8005B854: sb          $s0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r16;
    // 0x8005B858: sb          $s4, 0x25($a1)
    MEM_B(0X25, ctx->r5) = ctx->r20;
    // 0x8005B85C: sb          $s4, 0x1D($a1)
    MEM_B(0X1D, ctx->r5) = ctx->r20;
    // 0x8005B860: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8005B864: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x8005B868: sh          $fp, 0xE($a1)
    MEM_H(0XE, ctx->r5) = ctx->r30;
    // 0x8005B86C: sh          $s7, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r23;
    // 0x8005B870: addu        $v1, $v1, $s6
    ctx->r3 = ADD32(ctx->r3, ctx->r22);
    // 0x8005B874: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x8005B878: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    // 0x8005B87C: sh          $v1, 0x22($a1)
    MEM_H(0X22, ctx->r5) = ctx->r3;
    // 0x8005B880: jal         0x8002FD30
    // 0x8005B884: sh          $v1, 0x1A($a1)
    MEM_H(0X1A, ctx->r5) = ctx->r3;
    func_8002FD30_B130(rdram, ctx);
        goto after_2;
    // 0x8005B884: sh          $v1, 0x1A($a1)
    MEM_H(0X1A, ctx->r5) = ctx->r3;
    after_2:
L_8005B888:
    // 0x8005B888: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8005B88C: lw          $fp, 0x30($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X30);
    // 0x8005B890: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x8005B894: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x8005B898: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x8005B89C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8005B8A0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8005B8A4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8005B8A8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8005B8AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8005B8B0: jr          $ra
    // 0x8005B8B4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8005B8B4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8007C450_57850(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007C450: lui         $v0, 0x8019
    ctx->r2 = S32(0X8019 << 16);
    // 0x8007C454: lw          $v0, 0x3C30($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3C30);
    // 0x8007C458: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8007C45C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8007C460: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8007C464: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x8007C468: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8007C46C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8007C470: beq         $v0, $a0, L_8007C4A8
    if (ctx->r2 == ctx->r4) {
        // 0x8007C474: sw          $s1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r17;
            goto L_8007C4A8;
    }
    // 0x8007C474: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8007C478: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8007C47C: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x8007C480: lui         $at, 0x8019
    ctx->r1 = S32(0X8019 << 16);
    // 0x8007C484: sw          $a0, 0x3C30($at)
    MEM_W(0X3C30, ctx->r1) = ctx->r4;
    // 0x8007C488: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x8007C48C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007C490: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007C494: lui         $v0, 0xDE00
    ctx->r2 = S32(0XDE00 << 16);
    // 0x8007C498: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x8007C49C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x8007C4A0: addiu       $v0, $v0, -0x2628
    ctx->r2 = ADD32(ctx->r2, -0X2628);
    // 0x8007C4A4: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
L_8007C4A8:
    // 0x8007C4A8: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x8007C4AC: lw          $a1, -0x6F10($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X6F10);
    // 0x8007C4B0: lui         $v0, 0xDA38
    ctx->r2 = S32(0XDA38 << 16);
    // 0x8007C4B4: ori         $v0, $v0, 0x3
    ctx->r2 = ctx->r2 | 0X3;
    // 0x8007C4B8: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x8007C4BC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8007C4C0: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x8007C4C4: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x8007C4C8: lhu         $v1, 0x6($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X6);
    // 0x8007C4CC: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007C4D0: sh          $zero, -0x44E6($at)
    MEM_H(-0X44E6, ctx->r1) = 0;
    // 0x8007C4D4: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007C4D8: sh          $zero, -0x44E8($at)
    MEM_H(-0X44E8, ctx->r1) = 0;
    // 0x8007C4DC: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007C4E0: sw          $zero, -0x44E4($at)
    MEM_W(-0X44E4, ctx->r1) = 0;
    // 0x8007C4E4: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007C4E8: sw          $zero, -0x44DC($at)
    MEM_W(-0X44DC, ctx->r1) = 0;
    // 0x8007C4EC: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007C4F0: sb          $zero, -0x44E0($at)
    MEM_B(-0X44E0, ctx->r1) = 0;
    // 0x8007C4F4: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007C4F8: sb          $zero, -0x44D8($at)
    MEM_B(-0X44D8, ctx->r1) = 0;
    // 0x8007C4FC: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007C500: sb          $zero, -0x44D7($at)
    MEM_B(-0X44D7, ctx->r1) = 0;
    // 0x8007C504: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007C508: sb          $zero, -0x44D6($at)
    MEM_B(-0X44D6, ctx->r1) = 0;
    // 0x8007C50C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007C510: sb          $zero, -0x44D5($at)
    MEM_B(-0X44D5, ctx->r1) = 0;
    // 0x8007C514: addiu       $v0, $a1, 0x8
    ctx->r2 = ADD32(ctx->r5, 0X8);
    // 0x8007C518: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007C51C: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007C520: andi        $v1, $v1, 0x40
    ctx->r3 = ctx->r3 & 0X40;
    // 0x8007C524: beq         $v1, $zero, L_8007C54C
    if (ctx->r3 == 0) {
        // 0x8007C528: lui         $v0, 0xD9FF
        ctx->r2 = S32(0XD9FF << 16);
            goto L_8007C54C;
    }
    // 0x8007C528: lui         $v0, 0xD9FF
    ctx->r2 = S32(0XD9FF << 16);
    // 0x8007C52C: ori         $v0, $v0, 0xF9FF
    ctx->r2 = ctx->r2 | 0XF9FF;
    // 0x8007C530: addiu       $v1, $a1, 0x10
    ctx->r3 = ADD32(ctx->r5, 0X10);
    // 0x8007C534: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
    // 0x8007C538: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8007C53C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007C540: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x8007C544: j           L_8007C58C
    // 0x8007C548: sw          $zero, 0xC($a1)
    MEM_W(0XC, ctx->r5) = 0;
        goto L_8007C58C;
    // 0x8007C548: sw          $zero, 0xC($a1)
    MEM_W(0XC, ctx->r5) = 0;
L_8007C54C:
    // 0x8007C54C: lui         $v1, 0xD9FF
    ctx->r3 = S32(0XD9FF << 16);
    // 0x8007C550: ori         $v1, $v1, 0xF9FF
    ctx->r3 = ctx->r3 | 0XF9FF;
    // 0x8007C554: lui         $a0, 0xD9FF
    ctx->r4 = S32(0XD9FF << 16);
    // 0x8007C558: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x8007C55C: addiu       $v0, $a1, 0x10
    ctx->r2 = ADD32(ctx->r5, 0X10);
    // 0x8007C560: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007C564: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007C568: addiu       $v0, $a1, 0x18
    ctx->r2 = ADD32(ctx->r5, 0X18);
    // 0x8007C56C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007C570: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007C574: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8007C578: sw          $v0, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->r2;
    // 0x8007C57C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8007C580: sw          $v1, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r3;
    // 0x8007C584: sw          $zero, 0xC($a1)
    MEM_W(0XC, ctx->r5) = 0;
    // 0x8007C588: sw          $a0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r4;
L_8007C58C:
    // 0x8007C58C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007C590: sw          $v0, -0x44DC($at)
    MEM_W(-0X44DC, ctx->r1) = ctx->r2;
    // 0x8007C594: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8007C598: lw          $v0, -0x44E4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X44E4);
    // 0x8007C59C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x8007C5A0: beq         $v0, $a2, L_8007C614
    if (ctx->r2 == ctx->r6) {
        // 0x8007C5A4: nop
    
            goto L_8007C614;
    }
    // 0x8007C5A4: nop

    // 0x8007C5A8: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8007C5AC: lbu         $v0, -0x44E0($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X44E0);
    // 0x8007C5B0: bne         $v0, $zero, L_8007C5E4
    if (ctx->r2 != 0) {
        // 0x8007C5B4: lui         $a1, 0xE200
        ctx->r5 = S32(0XE200 << 16);
            goto L_8007C5E4;
    }
    // 0x8007C5B4: lui         $a1, 0xE200
    ctx->r5 = S32(0XE200 << 16);
    // 0x8007C5B8: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8007C5BC: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x8007C5C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8007C5C4: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007C5C8: sb          $v0, -0x44E0($at)
    MEM_B(-0X44E0, ctx->r1) = ctx->r2;
    // 0x8007C5CC: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x8007C5D0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007C5D4: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007C5D8: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x8007C5DC: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x8007C5E0: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
L_8007C5E4:
    // 0x8007C5E4: ori         $a1, $a1, 0x1C
    ctx->r5 = ctx->r5 | 0X1C;
    // 0x8007C5E8: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8007C5EC: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x8007C5F0: lui         $a0, 0xC810
    ctx->r4 = S32(0XC810 << 16);
    // 0x8007C5F4: ori         $a0, $a0, 0x49D8
    ctx->r4 = ctx->r4 | 0X49D8;
    // 0x8007C5F8: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007C5FC: sw          $a2, -0x44E4($at)
    MEM_W(-0X44E4, ctx->r1) = ctx->r6;
    // 0x8007C600: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x8007C604: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007C608: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007C60C: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    // 0x8007C610: sw          $a0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r4;
L_8007C614:
    // 0x8007C614: jal         0x8007BFC8
    // 0x8007C618: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    func_8007BFC8_573C8(rdram, ctx);
        goto after_0;
    // 0x8007C618: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_0:
    // 0x8007C61C: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8007C620: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8007C624: addiu       $s1, $sp, 0x10
    ctx->r17 = ADD32(ctx->r29, 0X10);
    // 0x8007C628: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x8007C62C: andi        $s2, $v0, 0x81F
    ctx->r18 = ctx->r2 & 0X81F;
    // 0x8007C630: andi        $v1, $v0, 0xF
    ctx->r3 = ctx->r2 & 0XF;
    // 0x8007C634: sll         $a1, $v1, 6
    ctx->r5 = S32(ctx->r3 << 6);
    // 0x8007C638: andi        $v1, $v0, 0x10
    ctx->r3 = ctx->r2 & 0X10;
    // 0x8007C63C: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8007C640: andi        $v0, $v0, 0x800
    ctx->r2 = ctx->r2 & 0X800;
    // 0x8007C644: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
    // 0x8007C648: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007C64C: sh          $s2, -0x44E8($at)
    MEM_H(-0X44E8, ctx->r1) = ctx->r18;
    // 0x8007C650: bgez        $a0, L_8007C668
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8007C654: or          $v1, $v1, $v0
        ctx->r3 = ctx->r3 | ctx->r2;
            goto L_8007C668;
    }
    // 0x8007C654: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8007C658: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8007C65C: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x8007C660: j           L_8007C674
    // 0x8007C664: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
        goto L_8007C674;
    // 0x8007C664: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
L_8007C668:
    // 0x8007C668: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8007C66C: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x8007C670: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
L_8007C674:
    // 0x8007C674: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x8007C678: lh          $a2, 0x0($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X0);
    // 0x8007C67C: lh          $a3, 0x12($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X12);
    // 0x8007C680: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x8007C684: jal         0x8002C9BC
    // 0x8007C688: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    func_8002C9BC_7DBC(rdram, ctx);
        goto after_1;
    // 0x8007C688: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    after_1:
    // 0x8007C68C: beq         $v0, $zero, L_8007C6EC
    if (ctx->r2 == 0) {
        // 0x8007C690: nop
    
            goto L_8007C6EC;
    }
    // 0x8007C690: nop

    // 0x8007C694: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8007C698: lw          $a0, -0x6F10($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X6F10);
    // 0x8007C69C: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x8007C6A0: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    // 0x8007C6A4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007C6A8: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007C6AC: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x8007C6B0: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x8007C6B4: addiu       $v0, $a0, 0x10
    ctx->r2 = ADD32(ctx->r4, 0X10);
    // 0x8007C6B8: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007C6BC: sw          $v1, -0x44EC($at)
    MEM_W(-0X44EC, ctx->r1) = ctx->r3;
    // 0x8007C6C0: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x8007C6C4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007C6C8: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007C6CC: lh          $v0, 0x0($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X0);
    // 0x8007C6D0: sw          $v1, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r3;
    // 0x8007C6D4: lui         $v1, 0xFD48
    ctx->r3 = S32(0XFD48 << 16);
    // 0x8007C6D8: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8007C6DC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8007C6E0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8007C6E4: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8007C6E8: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
L_8007C6EC:
    // 0x8007C6EC: lbu         $a1, 0xC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XC);
    // 0x8007C6F0: lbu         $a2, 0xD($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0XD);
    // 0x8007C6F4: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8007C6F8: lhu         $v0, -0x44E8($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X44E8);
    // 0x8007C6FC: lbu         $v1, 0xE($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XE);
    // 0x8007C700: lbu         $a0, 0xF($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XF);
    // 0x8007C704: bne         $v0, $s2, L_8007C754
    if (ctx->r2 != ctx->r18) {
        // 0x8007C708: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8007C754;
    }
    // 0x8007C708: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8007C70C: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8007C710: lbu         $v0, -0x44D8($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X44D8);
    // 0x8007C714: bne         $v0, $a1, L_8007C754
    if (ctx->r2 != ctx->r5) {
        // 0x8007C718: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8007C754;
    }
    // 0x8007C718: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8007C71C: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8007C720: lbu         $v0, -0x44D7($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X44D7);
    // 0x8007C724: bne         $v0, $a2, L_8007C754
    if (ctx->r2 != ctx->r6) {
        // 0x8007C728: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8007C754;
    }
    // 0x8007C728: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8007C72C: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8007C730: lbu         $v0, -0x44D6($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X44D6);
    // 0x8007C734: bne         $v0, $v1, L_8007C754
    if (ctx->r2 != ctx->r3) {
        // 0x8007C738: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8007C754;
    }
    // 0x8007C738: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8007C73C: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8007C740: lbu         $v0, -0x44D5($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X44D5);
    // 0x8007C744: bne         $v0, $a0, L_8007C754
    if (ctx->r2 != ctx->r4) {
        // 0x8007C748: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8007C754;
    }
    // 0x8007C748: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8007C74C: j           L_8007C774
    // 0x8007C750: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8007C774;
    // 0x8007C750: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8007C754:
    // 0x8007C754: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007C758: sb          $a1, -0x44D8($at)
    MEM_B(-0X44D8, ctx->r1) = ctx->r5;
    // 0x8007C75C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007C760: sb          $a2, -0x44D7($at)
    MEM_B(-0X44D7, ctx->r1) = ctx->r6;
    // 0x8007C764: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007C768: sb          $v1, -0x44D6($at)
    MEM_B(-0X44D6, ctx->r1) = ctx->r3;
    // 0x8007C76C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007C770: sb          $a0, -0x44D5($at)
    MEM_B(-0X44D5, ctx->r1) = ctx->r4;
L_8007C774:
    // 0x8007C774: beq         $v0, $zero, L_8007C8D0
    if (ctx->r2 == 0) {
        // 0x8007C778: lui         $v1, 0x708
        ctx->r3 = S32(0X708 << 16);
            goto L_8007C8D0;
    }
    // 0x8007C778: lui         $v1, 0x708
    ctx->r3 = S32(0X708 << 16);
    // 0x8007C77C: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x8007C780: lw          $a1, -0x6F10($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X6F10);
    // 0x8007C784: addiu       $v0, $a1, 0x8
    ctx->r2 = ADD32(ctx->r5, 0X8);
    // 0x8007C788: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007C78C: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007C790: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x8007C794: lbu         $a0, 0xC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XC);
    // 0x8007C798: ori         $v1, $v1, 0x200
    ctx->r3 = ctx->r3 | 0X200;
    // 0x8007C79C: sw          $v1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r3;
    // 0x8007C7A0: addiu       $v1, $a1, 0x10
    ctx->r3 = ADD32(ctx->r5, 0X10);
    // 0x8007C7A4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007C7A8: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x8007C7AC: lui         $v1, 0xE600
    ctx->r3 = S32(0XE600 << 16);
    // 0x8007C7B0: sw          $v1, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r3;
    // 0x8007C7B4: addiu       $v1, $a1, 0x18
    ctx->r3 = ADD32(ctx->r5, 0X18);
    // 0x8007C7B8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007C7BC: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x8007C7C0: lui         $v1, 0xF548
    ctx->r3 = S32(0XF548 << 16);
    // 0x8007C7C4: sw          $zero, 0xC($a1)
    MEM_W(0XC, ctx->r5) = 0;
    // 0x8007C7C8: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8007C7CC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8007C7D0: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x8007C7D4: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x8007C7D8: sra         $v0, $v0, 3
    ctx->r2 = S32(SIGNED(ctx->r2) >> 3);
    // 0x8007C7DC: andi        $v0, $v0, 0x1FF
    ctx->r2 = ctx->r2 & 0X1FF;
    // 0x8007C7E0: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x8007C7E4: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8007C7E8: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x8007C7EC: lbu         $a0, 0xC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XC);
    // 0x8007C7F0: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8007C7F4: lui         $v1, 0xF400
    ctx->r3 = S32(0XF400 << 16);
    // 0x8007C7F8: sll         $a0, $a0, 13
    ctx->r4 = S32(ctx->r4 << 13);
    // 0x8007C7FC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8007C800: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8007C804: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x8007C808: sw          $a0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r4;
    // 0x8007C80C: lbu         $a0, 0xE($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XE);
    // 0x8007C810: lbu         $v1, 0xF($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XF);
    // 0x8007C814: addiu       $v0, $a1, 0x20
    ctx->r2 = ADD32(ctx->r5, 0X20);
    // 0x8007C818: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007C81C: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007C820: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x8007C824: sw          $v0, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r2;
    // 0x8007C828: addiu       $v0, $a1, 0x28
    ctx->r2 = ADD32(ctx->r5, 0X28);
    // 0x8007C82C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007C830: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007C834: lui         $v0, 0x700
    ctx->r2 = S32(0X700 << 16);
    // 0x8007C838: sw          $zero, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = 0;
    // 0x8007C83C: sll         $a0, $a0, 13
    ctx->r4 = S32(ctx->r4 << 13);
    // 0x8007C840: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8007C844: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8007C848: or          $a0, $a0, $v1
    ctx->r4 = ctx->r4 | ctx->r3;
    // 0x8007C84C: sw          $a0, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->r4;
    // 0x8007C850: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x8007C854: lbu         $a0, 0xC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XC);
    // 0x8007C858: lui         $v1, 0x8
    ctx->r3 = S32(0X8 << 16);
    // 0x8007C85C: ori         $v1, $v1, 0x200
    ctx->r3 = ctx->r3 | 0X200;
    // 0x8007C860: sw          $v1, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r3;
    // 0x8007C864: addiu       $v1, $a1, 0x30
    ctx->r3 = ADD32(ctx->r5, 0X30);
    // 0x8007C868: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007C86C: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x8007C870: lui         $v1, 0xF540
    ctx->r3 = S32(0XF540 << 16);
    // 0x8007C874: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8007C878: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8007C87C: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x8007C880: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x8007C884: sra         $v0, $v0, 3
    ctx->r2 = S32(SIGNED(ctx->r2) >> 3);
    // 0x8007C888: andi        $v0, $v0, 0x1FF
    ctx->r2 = ctx->r2 & 0X1FF;
    // 0x8007C88C: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x8007C890: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8007C894: sw          $v0, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->r2;
    // 0x8007C898: lbu         $a0, 0xC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XC);
    // 0x8007C89C: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8007C8A0: lui         $v1, 0xF200
    ctx->r3 = S32(0XF200 << 16);
    // 0x8007C8A4: sll         $a0, $a0, 14
    ctx->r4 = S32(ctx->r4 << 14);
    // 0x8007C8A8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8007C8AC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8007C8B0: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x8007C8B4: sw          $a0, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->r4;
    // 0x8007C8B8: lbu         $v1, 0xE($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XE);
    // 0x8007C8BC: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8007C8C0: sll         $v1, $v1, 14
    ctx->r3 = S32(ctx->r3 << 14);
    // 0x8007C8C4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8007C8C8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8007C8CC: sw          $v1, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->r3;
L_8007C8D0:
    // 0x8007C8D0: lui         $v0, 0x100
    ctx->r2 = S32(0X100 << 16);
    // 0x8007C8D4: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8007C8D8: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x8007C8DC: ori         $v0, $v0, 0x4008
    ctx->r2 = ctx->r2 | 0X4008;
    // 0x8007C8E0: lui         $a0, 0x600
    ctx->r4 = S32(0X600 << 16);
    // 0x8007C8E4: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x8007C8E8: lw          $a1, 0x8($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X8);
    // 0x8007C8EC: ori         $a0, $a0, 0x602
    ctx->r4 = ctx->r4 | 0X602;
    // 0x8007C8F0: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x8007C8F4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007C8F8: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007C8FC: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
    // 0x8007C900: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007C904: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007C908: addiu       $v0, $zero, 0x406
    ctx->r2 = ADD32(0, 0X406);
    // 0x8007C90C: sw          $a0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r4;
    // 0x8007C910: sw          $v0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r2;
    // 0x8007C914: sw          $a1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r5;
    // 0x8007C918: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8007C91C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8007C920: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8007C924: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8007C928: jr          $ra
    // 0x8007C92C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8007C92C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80091CBC_6D0BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80091CBC: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80091CC0: lw          $v0, -0xEEC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XEEC);
    // 0x80091CC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80091CC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80091CCC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80091CD0: lw          $s0, 0x14($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X14);
    // 0x80091CD4: beq         $s0, $zero, L_80091D0C
    if (ctx->r16 == 0) {
        // 0x80091CD8: nop
    
            goto L_80091D0C;
    }
    // 0x80091CD8: nop

L_80091CDC:
    // 0x80091CDC: jal         0x80098C4C
    // 0x80091CE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    alUnlink(rdram, ctx);
        goto after_0;
    // 0x80091CE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80091CE4: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80091CE8: lw          $a1, -0xEEC($a1)
    ctx->r5 = MEM_W(ctx->r5, -0XEEC);
    // 0x80091CEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80091CF0: jal         0x80098C2C
    // 0x80091CF4: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    alLink(rdram, ctx);
        goto after_1;
    // 0x80091CF4: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    after_1:
    // 0x80091CF8: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80091CFC: lw          $v0, -0xEEC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XEEC);
    // 0x80091D00: lw          $s0, 0x14($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X14);
    // 0x80091D04: bne         $s0, $zero, L_80091CDC
    if (ctx->r16 != 0) {
        // 0x80091D08: nop
    
            goto L_80091CDC;
    }
    // 0x80091D08: nop

L_80091D0C:
    // 0x80091D0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80091D10: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80091D14: jr          $ra
    // 0x80091D18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80091D18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8002E34C_974C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002E34C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8002E350: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8002E354: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x8002E358: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8002E35C: addu        $s6, $a1, $zero
    ctx->r22 = ADD32(ctx->r5, 0);
    // 0x8002E360: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8002E364: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x8002E368: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8002E36C: addu        $s5, $a3, $zero
    ctx->r21 = ADD32(ctx->r7, 0);
    // 0x8002E370: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x8002E374: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8002E378: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8002E37C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8002E380: blez        $s6, L_8002E4D0
    if (SIGNED(ctx->r22) <= 0) {
        // 0x8002E384: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_8002E4D0;
    }
    // 0x8002E384: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8002E388: addu        $s1, $s4, $zero
    ctx->r17 = ADD32(ctx->r20, 0);
    // 0x8002E38C: addu        $s0, $s1, $s2
    ctx->r16 = ADD32(ctx->r17, ctx->r18);
    // 0x8002E390: addiu       $v0, $s6, -0x1
    ctx->r2 = ADD32(ctx->r22, -0X1);
    // 0x8002E394: blez        $v0, L_8002E444
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8002E398: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_8002E444;
    }
    // 0x8002E398: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x8002E39C: addu        $s7, $v0, $zero
    ctx->r23 = ADD32(ctx->r2, 0);
L_8002E3A0:
    // 0x8002E3A0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8002E3A4: jalr        $s5
    // 0x8002E3A8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r21)(rdram, ctx);
        goto after_0;
    // 0x8002E3A8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8002E3AC: blez        $v0, L_8002E434
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8002E3B0: subu        $v0, $s0, $s1
        ctx->r2 = SUB32(ctx->r16, ctx->r17);
            goto L_8002E434;
    }
    // 0x8002E3B0: subu        $v0, $s0, $s1
    ctx->r2 = SUB32(ctx->r16, ctx->r17);
    // 0x8002E3B4: div         $zero, $v0, $s2
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r18))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r18)));
    // 0x8002E3B8: bne         $s2, $zero, L_8002E3C4
    if (ctx->r18 != 0) {
        // 0x8002E3BC: nop
    
            goto L_8002E3C4;
    }
    // 0x8002E3BC: nop

    // 0x8002E3C0: break       7
    do_break(2147673024);
L_8002E3C4:
    // 0x8002E3C4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8002E3C8: bne         $s2, $at, L_8002E3DC
    if (ctx->r18 != ctx->r1) {
        // 0x8002E3CC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8002E3DC;
    }
    // 0x8002E3CC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8002E3D0: bne         $v0, $at, L_8002E3DC
    if (ctx->r2 != ctx->r1) {
        // 0x8002E3D4: nop
    
            goto L_8002E3DC;
    }
    // 0x8002E3D4: nop

    // 0x8002E3D8: break       6
    do_break(2147673048);
L_8002E3DC:
    // 0x8002E3DC: mflo        $v0
    ctx->r2 = lo;
    // 0x8002E3E0: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x8002E3E4: nop

    // 0x8002E3E8: beq         $v0, $zero, L_8002E3FC
    if (ctx->r2 == 0) {
        // 0x8002E3EC: addu        $v0, $s1, $s2
        ctx->r2 = ADD32(ctx->r17, ctx->r18);
            goto L_8002E3FC;
    }
    // 0x8002E3EC: addu        $v0, $s1, $s2
    ctx->r2 = ADD32(ctx->r17, ctx->r18);
    // 0x8002E3F0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002E3F4: j           L_8002E41C
    // 0x8002E3F8: sw          $s0, 0x2728($at)
    MEM_W(0X2728, ctx->r1) = ctx->r16;
        goto L_8002E41C;
    // 0x8002E3F8: sw          $s0, 0x2728($at)
    MEM_W(0X2728, ctx->r1) = ctx->r16;
L_8002E3FC:
    // 0x8002E3FC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002E400: sw          $v0, 0x2728($at)
    MEM_W(0X2728, ctx->r1) = ctx->r2;
    // 0x8002E404: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8002E408: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x8002E40C: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x8002E410: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8002E414: lw          $v0, 0x2728($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2728);
    // 0x8002E418: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
L_8002E41C:
    // 0x8002E41C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8002E420: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x8002E424: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x8002E428: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x8002E42C: lui         $s1, 0x8016
    ctx->r17 = S32(0X8016 << 16);
    // 0x8002E430: lw          $s1, 0x2728($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X2728);
L_8002E434:
    // 0x8002E434: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8002E438: slt         $v0, $s3, $s7
    ctx->r2 = SIGNED(ctx->r19) < SIGNED(ctx->r23) ? 1 : 0;
    // 0x8002E43C: bne         $v0, $zero, L_8002E3A0
    if (ctx->r2 != 0) {
        // 0x8002E440: addu        $s0, $s0, $s2
        ctx->r16 = ADD32(ctx->r16, ctx->r18);
            goto L_8002E3A0;
    }
    // 0x8002E440: addu        $s0, $s0, $s2
    ctx->r16 = ADD32(ctx->r16, ctx->r18);
L_8002E444:
    // 0x8002E444: lui         $v0, 0x8016
    ctx->r2 = S32(0X8016 << 16);
    // 0x8002E448: lw          $v0, 0x2728($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2728);
    // 0x8002E44C: subu        $v0, $v0, $s4
    ctx->r2 = SUB32(ctx->r2, ctx->r20);
    // 0x8002E450: div         $zero, $v0, $s2
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r18))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r18)));
    // 0x8002E454: bne         $s2, $zero, L_8002E460
    if (ctx->r18 != 0) {
        // 0x8002E458: nop
    
            goto L_8002E460;
    }
    // 0x8002E458: nop

    // 0x8002E45C: break       7
    do_break(2147673180);
L_8002E460:
    // 0x8002E460: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8002E464: bne         $s2, $at, L_8002E478
    if (ctx->r18 != ctx->r1) {
        // 0x8002E468: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8002E478;
    }
    // 0x8002E468: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8002E46C: bne         $v0, $at, L_8002E478
    if (ctx->r2 != ctx->r1) {
        // 0x8002E470: nop
    
            goto L_8002E478;
    }
    // 0x8002E470: nop

    // 0x8002E474: break       6
    do_break(2147673204);
L_8002E478:
    // 0x8002E478: mflo        $v0
    ctx->r2 = lo;
    // 0x8002E47C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002E480: sw          $s1, 0x2728($at)
    MEM_W(0X2728, ctx->r1) = ctx->r17;
    // 0x8002E484: addiu       $s0, $v0, 0x1
    ctx->r16 = ADD32(ctx->r2, 0X1);
    // 0x8002E488: slti        $v0, $s0, 0x2
    ctx->r2 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x8002E48C: bne         $v0, $zero, L_8002E4AC
    if (ctx->r2 != 0) {
        // 0x8002E490: addu        $a0, $s1, $s2
        ctx->r4 = ADD32(ctx->r17, ctx->r18);
            goto L_8002E4AC;
    }
    // 0x8002E490: addu        $a0, $s1, $s2
    ctx->r4 = ADD32(ctx->r17, ctx->r18);
    // 0x8002E494: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8002E498: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8002E49C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x8002E4A0: jal         0x8002E34C
    // 0x8002E4A4: addu        $a3, $s5, $zero
    ctx->r7 = ADD32(ctx->r21, 0);
    func_8002E34C_974C(rdram, ctx);
        goto after_1;
    // 0x8002E4A4: addu        $a3, $s5, $zero
    ctx->r7 = ADD32(ctx->r21, 0);
    after_1:
    // 0x8002E4A8: addu        $a0, $s1, $s2
    ctx->r4 = ADD32(ctx->r17, ctx->r18);
L_8002E4AC:
    // 0x8002E4AC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002E4B0: sw          $a0, 0x2728($at)
    MEM_W(0X2728, ctx->r1) = ctx->r4;
    // 0x8002E4B4: subu        $s0, $s6, $s0
    ctx->r16 = SUB32(ctx->r22, ctx->r16);
    // 0x8002E4B8: slti        $v0, $s0, 0x2
    ctx->r2 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x8002E4BC: bne         $v0, $zero, L_8002E4D0
    if (ctx->r2 != 0) {
        // 0x8002E4C0: addu        $a1, $s0, $zero
        ctx->r5 = ADD32(ctx->r16, 0);
            goto L_8002E4D0;
    }
    // 0x8002E4C0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8002E4C4: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x8002E4C8: jal         0x8002E34C
    // 0x8002E4CC: addu        $a3, $s5, $zero
    ctx->r7 = ADD32(ctx->r21, 0);
    func_8002E34C_974C(rdram, ctx);
        goto after_2;
    // 0x8002E4CC: addu        $a3, $s5, $zero
    ctx->r7 = ADD32(ctx->r21, 0);
    after_2:
L_8002E4D0:
    // 0x8002E4D0: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x8002E4D4: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8002E4D8: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8002E4DC: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8002E4E0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8002E4E4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8002E4E8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8002E4EC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8002E4F0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8002E4F4: jr          $ra
    // 0x8002E4F8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8002E4F8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800625C0_3D9C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800625C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800625C4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x800625C8: lbu         $v0, 0x7C($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X7C);
    // 0x800625CC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800625D0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800625D4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800625D8: lw          $v0, 0x798($at)
    ctx->r2 = MEM_W(ctx->r1, 0X798);
    // 0x800625DC: jalr        $v0
    // 0x800625E0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x800625E0: nop

    after_0:
    // 0x800625E4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x800625E8: jr          $ra
    // 0x800625EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x800625EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8008DF28_69328(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008DF28: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x8008DF2C: lw          $v0, -0xEEC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XEEC);
    // 0x8008DF30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008DF34: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8008DF38: sll         $s0, $a0, 16
    ctx->r16 = S32(ctx->r4 << 16);
    // 0x8008DF3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008DF40: lw          $v0, 0x34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X34);
    // 0x8008DF44: sra         $s0, $s0, 14
    ctx->r16 = S32(SIGNED(ctx->r16) >> 14);
    // 0x8008DF48: addiu       $a0, $s0, 0x24
    ctx->r4 = ADD32(ctx->r16, 0X24);
    // 0x8008DF4C: jal         0x8008DF78
    // 0x8008DF50: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_8008DF78_69378(rdram, ctx);
        goto after_0;
    // 0x8008DF50: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_0:
    // 0x8008DF54: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x8008DF58: lw          $v0, -0xEEC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XEEC);
    // 0x8008DF5C: lw          $v0, 0x34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X34);
    // 0x8008DF60: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x8008DF64: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x8008DF68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008DF6C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8008DF70: jr          $ra
    // 0x8008DF74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8008DF74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void alSavePull(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80098B00: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80098B04: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x80098B08: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80098B0C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80098B10: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80098B14: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80098B18: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80098B1C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80098B20: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x80098B24: jalr        $v0
    // 0x80098B28: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80098B28: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    after_0:
    // 0x80098B2C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80098B30: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x80098B34: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x80098B38: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x80098B3C: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x80098B40: lui         $t0, 0x440
    ctx->r8 = S32(0X440 << 16);
    // 0x80098B44: ori         $t0, $t0, 0x580
    ctx->r8 = ctx->r8 | 0X580;
    // 0x80098B48: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
    // 0x80098B4C: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x80098B50: lui         $a0, 0x800
    ctx->r4 = S32(0X800 << 16);
    // 0x80098B54: sll         $v0, $s0, 1
    ctx->r2 = S32(ctx->r16 << 1);
    // 0x80098B58: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80098B5C: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x80098B60: lui         $v0, 0xD00
    ctx->r2 = S32(0XD00 << 16);
    // 0x80098B64: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    // 0x80098B68: andi        $s0, $s0, 0xFFFF
    ctx->r16 = ctx->r16 & 0XFFFF;
    // 0x80098B6C: sw          $a0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r4;
    // 0x80098B70: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x80098B74: lui         $v0, 0x600
    ctx->r2 = S32(0X600 << 16);
    // 0x80098B78: sw          $t0, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r8;
    // 0x80098B7C: sw          $a0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r4;
    // 0x80098B80: sw          $s0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r16;
    // 0x80098B84: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80098B88: lw          $a0, 0x14($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X14);
    // 0x80098B8C: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x80098B90: sw          $a0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r4;
    // 0x80098B94: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80098B98: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80098B9C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80098BA0: jr          $ra
    // 0x80098BA4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80098BA4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8009271C_6DB1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8009271C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80092720: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80092724: addiu       $a1, $a1, 0x572D
    ctx->r5 = ADD32(ctx->r5, 0X572D);
    // 0x80092728: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8009272C: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80092730: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80092734: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80092738: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8009273C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80092740: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x80092744: lw          $s2, 0xC($a0)
    ctx->r18 = MEM_W(ctx->r4, 0XC);
    // 0x80092748: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8009274C: beq         $v1, $v0, L_80092820
    if (ctx->r3 == ctx->r2) {
        // 0x80092750: addiu       $s1, $sp, 0x10
        ctx->r17 = ADD32(ctx->r29, 0X10);
            goto L_80092820;
    }
    // 0x80092750: addiu       $s1, $sp, 0x10
    ctx->r17 = ADD32(ctx->r29, 0X10);
    // 0x80092754: addiu       $s3, $a1, -0x561
    ctx->r19 = ADD32(ctx->r5, -0X561);
    // 0x80092758: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
L_8009275C:
    // 0x8009275C: jal         0x8009C250
    // 0x80092760: nop

    osViGetCurrentFramebuffer_recomp(rdram, ctx);
        goto after_0;
    // 0x80092760: nop

    after_0:
    // 0x80092764: beq         $v0, $s2, L_8009277C
    if (ctx->r2 == ctx->r18) {
        // 0x80092768: nop
    
            goto L_8009277C;
    }
    // 0x80092768: nop

    // 0x8009276C: jal         0x8009C290
    // 0x80092770: nop

    osViGetNextFramebuffer_recomp(rdram, ctx);
        goto after_1;
    // 0x80092770: nop

    after_1:
    // 0x80092774: bne         $v0, $s2, L_80092820
    if (ctx->r2 != ctx->r18) {
        // 0x80092778: nop
    
            goto L_80092820;
    }
    // 0x80092778: nop

L_8009277C:
    // 0x8009277C: jal         0x80094460
    // 0x80092780: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osSetIntMask_recomp(rdram, ctx);
        goto after_2;
    // 0x80092780: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x80092784: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80092788: lw          $v1, 0x5718($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X5718);
    // 0x8009278C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80092790: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x80092794: sh          $s4, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r20;
    // 0x80092798: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8009279C: sw          $s1, 0x5718($at)
    MEM_W(0X5718, ctx->r1) = ctx->r17;
    // 0x800927A0: jal         0x80094460
    // 0x800927A4: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    osSetIntMask_recomp(rdram, ctx);
        goto after_3;
    // 0x800927A4: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_3:
    // 0x800927A8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x800927AC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x800927B0: jal         0x8009A5E0
    // 0x800927B4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_4;
    // 0x800927B4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x800927B8: jal         0x80094460
    // 0x800927BC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osSetIntMask_recomp(rdram, ctx);
        goto after_5;
    // 0x800927BC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_5:
    // 0x800927C0: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x800927C4: lw          $v1, 0x5718($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X5718);
    // 0x800927C8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x800927CC: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
    // 0x800927D0: beq         $v1, $zero, L_80092804
    if (ctx->r3 == 0) {
        // 0x800927D4: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_80092804;
    }
    // 0x800927D4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
L_800927D8:
    // 0x800927D8: bnel        $v1, $s0, L_800927F8
    if (ctx->r3 != ctx->r16) {
        // 0x800927DC: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_800927F8;
    }
    goto skip_0;
    // 0x800927DC: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    skip_0:
    // 0x800927E0: bne         $a1, $zero, L_80092814
    if (ctx->r5 != 0) {
        // 0x800927E4: nop
    
            goto L_80092814;
    }
    // 0x800927E4: nop

    // 0x800927E8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800927EC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x800927F0: j           L_80092804
    // 0x800927F4: sw          $v0, 0x5718($at)
    MEM_W(0X5718, ctx->r1) = ctx->r2;
        goto L_80092804;
    // 0x800927F4: sw          $v0, 0x5718($at)
    MEM_W(0X5718, ctx->r1) = ctx->r2;
L_800927F8:
    // 0x800927F8: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x800927FC: bne         $v1, $zero, L_800927D8
    if (ctx->r3 != 0) {
        // 0x80092800: nop
    
            goto L_800927D8;
    }
    // 0x80092800: nop

L_80092804:
    // 0x80092804: jal         0x80094460
    // 0x80092808: nop

    osSetIntMask_recomp(rdram, ctx);
        goto after_6;
    // 0x80092808: nop

    after_6:
    // 0x8009280C: j           L_8009275C
    // 0x80092810: nop

        goto L_8009275C;
    // 0x80092810: nop

L_80092814:
    // 0x80092814: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80092818: j           L_80092804
    // 0x8009281C: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
        goto L_80092804;
    // 0x8009281C: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
L_80092820:
    // 0x80092820: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80092824: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80092828: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8009282C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80092830: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80092834: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80092838: jr          $ra
    // 0x8009283C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8009283C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80078360_53760(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80078360: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80078364: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80078368: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8007836C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80078370: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80078374: bne         $v0, $zero, L_80078410
    if (ctx->r2 != 0) {
        // 0x80078378: lui         $v1, 0x2E20
        ctx->r3 = S32(0X2E20 << 16);
            goto L_80078410;
    }
    // 0x80078378: lui         $v1, 0x2E20
    ctx->r3 = S32(0X2E20 << 16);
    // 0x8007837C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80078380: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x80078384: sw          $v1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r3;
    // 0x80078388: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8007838C: lui         $a0, 0x3D48
    ctx->r4 = S32(0X3D48 << 16);
    // 0x80078390: ori         $a0, $a0, 0x2E
    ctx->r4 = ctx->r4 | 0X2E;
    // 0x80078394: sw          $a0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r4;
    // 0x80078398: ori         $v0, $v0, 0x22
    ctx->r2 = ctx->r2 | 0X22;
    // 0x8007839C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x800783A0: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x800783A4: lbu         $v0, -0x3310($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3310);
    // 0x800783A8: sb          $v0, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r2;
    // 0x800783AC: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x800783B0: lbu         $v0, -0x330F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X330F);
    // 0x800783B4: bne         $v1, $zero, L_800783C4
    if (ctx->r3 != 0) {
        // 0x800783B8: sb          $v0, 0x23($s0)
        MEM_B(0X23, ctx->r16) = ctx->r2;
            goto L_800783C4;
    }
    // 0x800783B8: sb          $v0, 0x23($s0)
    MEM_B(0X23, ctx->r16) = ctx->r2;
    // 0x800783BC: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x800783C0: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
L_800783C4:
    // 0x800783C4: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x800783C8: lbu         $v0, -0x3304($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3304);
    // 0x800783CC: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x800783D0: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800783D4: mflo        $v0
    ctx->r2 = lo;
    // 0x800783D8: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x800783DC: nop

    // 0x800783E0: jal         0x800A3450
    // 0x800783E4: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x800783E4: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
    after_0:
    // 0x800783E8: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x800783EC: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x800783F0: sh          $v0, 0x26($s0)
    MEM_H(0X26, ctx->r16) = ctx->r2;
    // 0x800783F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800783F8: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x800783FC: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80078400: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80078404: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80078408: j           L_800784A8
    // 0x8007840C: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
        goto L_800784A8;
    // 0x8007840C: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
L_80078410:
    // 0x80078410: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80078414: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80078418: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8007841C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80078420: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x80078424: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80078428: bne         $v0, $zero, L_800784A8
    if (ctx->r2 != 0) {
        // 0x8007842C: sb          $v1, 0x9($s0)
        MEM_B(0X9, ctx->r16) = ctx->r3;
            goto L_800784A8;
    }
    // 0x8007842C: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x80078430: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80078434: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80078438: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x8007843C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80078440: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x80078444: bne         $v0, $zero, L_8007845C
    if (ctx->r2 != 0) {
        // 0x80078448: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8007845C;
    }
    // 0x80078448: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8007844C: jal         0x8004F5C4
    // 0x80078450: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_1;
    // 0x80078450: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80078454: j           L_800784A8
    // 0x80078458: nop

        goto L_800784A8;
    // 0x80078458: nop

L_8007845C:
    // 0x8007845C: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80078460: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x80078464: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80078468: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8007846C: lbu         $v0, -0x3310($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3310);
    // 0x80078470: sb          $v0, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r2;
    // 0x80078474: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80078478: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8007847C: lbu         $v0, -0x330F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X330F);
    // 0x80078480: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80078484: sb          $v0, 0x23($s0)
    MEM_B(0X23, ctx->r16) = ctx->r2;
    // 0x80078488: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x8007848C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80078490: lbu         $v0, -0x3304($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3304);
    // 0x80078494: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x80078498: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007849C: mflo        $v0
    ctx->r2 = lo;
    // 0x800784A0: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x800784A4: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
L_800784A8:
    // 0x800784A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800784AC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800784B0: jr          $ra
    // 0x800784B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x800784B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800784B8: nop

    // 0x800784BC: nop

;}
RECOMP_FUNC void func_80047110_22510(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80047110: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80047114: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80047118: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8004711C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80047120: jal         0x8006033C
    // 0x80047124: addiu       $a0, $zero, 0x7E0
    ctx->r4 = ADD32(0, 0X7E0);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80047124: addiu       $a0, $zero, 0x7E0
    ctx->r4 = ADD32(0, 0X7E0);
    after_0:
    // 0x80047128: bne         $v0, $zero, L_80047148
    if (ctx->r2 != 0) {
        // 0x8004712C: nop
    
            goto L_80047148;
    }
    // 0x8004712C: nop

    // 0x80047130: lhu         $a0, 0x0($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X0);
    // 0x80047134: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x80047138: jal         0x8006033C
    // 0x8004713C: ori         $a0, $a0, 0x7E0
    ctx->r4 = ctx->r4 | 0X7E0;
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x8004713C: ori         $a0, $a0, 0x7E0
    ctx->r4 = ctx->r4 | 0X7E0;
    after_1:
    // 0x80047140: beq         $v0, $zero, L_80047188
    if (ctx->r2 == 0) {
        // 0x80047144: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80047188;
    }
    // 0x80047144: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80047148:
    // 0x80047148: jal         0x8006033C
    // 0x8004714C: addiu       $a0, $zero, 0x7C0
    ctx->r4 = ADD32(0, 0X7C0);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x8004714C: addiu       $a0, $zero, 0x7C0
    ctx->r4 = ADD32(0, 0X7C0);
    after_2:
    // 0x80047150: bne         $v0, $zero, L_80047188
    if (ctx->r2 != 0) {
        // 0x80047154: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80047188;
    }
    // 0x80047154: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80047158: lhu         $a0, 0x0($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X0);
    // 0x8004715C: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x80047160: jal         0x8006033C
    // 0x80047164: ori         $a0, $a0, 0x7C0
    ctx->r4 = ctx->r4 | 0X7C0;
    func_8006033C_3B73C(rdram, ctx);
        goto after_3;
    // 0x80047164: ori         $a0, $a0, 0x7C0
    ctx->r4 = ctx->r4 | 0X7C0;
    after_3:
    // 0x80047168: bne         $v0, $zero, L_80047188
    if (ctx->r2 != 0) {
        // 0x8004716C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80047188;
    }
    // 0x8004716C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80047170: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80047174: lh          $a3, 0x4($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X4);
    // 0x80047178: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8004717C: jal         0x800610AC
    // 0x80047180: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_4;
    // 0x80047180: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x80047184: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80047188:
    // 0x80047188: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004718C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80047190: jr          $ra
    // 0x80047194: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80047194: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800938DC_6ECDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800938DC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x800938E0: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x800938E4: addiu       $v1, $v1, -0x3C39
    ctx->r3 = ADD32(ctx->r3, -0X3C39);
L_800938E8:
    // 0x800938E8: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x800938EC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800938F0: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x800938F4: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x800938F8: sltiu       $v0, $a0, 0x4
    ctx->r2 = ctx->r4 < 0X4 ? 1 : 0;
    // 0x800938FC: bne         $v0, $zero, L_800938E8
    if (ctx->r2 != 0) {
        // 0x80093900: addiu       $v1, $v1, 0xA
        ctx->r3 = ADD32(ctx->r3, 0XA);
            goto L_800938E8;
    }
    // 0x80093900: addiu       $v1, $v1, 0xA
    ctx->r3 = ADD32(ctx->r3, 0XA);
    // 0x80093904: jr          $ra
    // 0x80093908: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    TRACE_RETURN()
    return;
    // 0x80093908: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_80037BDC_12FDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80037BDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80037BE0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80037BE4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80037BE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80037BEC: jal         0x80030518
    // 0x80037BF0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80030518_B918(rdram, ctx);
        goto after_0;
    // 0x80037BF0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x80037BF4: jal         0x80061404
    // 0x80037BF8: nop

    func_80061404_3C804(rdram, ctx);
        goto after_1;
    // 0x80037BF8: nop

    after_1:
    // 0x80037BFC: jal         0x80073E14
    // 0x80037C00: nop

    func_80073E14_4F214(rdram, ctx);
        goto after_2;
    // 0x80037C00: nop

    after_2:
    // 0x80037C04: jal         0x800875B0
    // 0x80037C08: nop

    func_800875B0_629B0(rdram, ctx);
        goto after_3;
    // 0x80037C08: nop

    after_3:
    // 0x80037C0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80037C10: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80037C14: sb          $v0, -0x3BBD($at)
    MEM_B(-0X3BBD, ctx->r1) = ctx->r2;
    // 0x80037C18: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80037C1C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80037C20: sb          $zero, 0xB61($at)
    MEM_B(0XB61, ctx->r1) = 0;
    // 0x80037C24: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80037C28: sw          $zero, -0x3C08($at)
    MEM_W(-0X3C08, ctx->r1) = 0;
    // 0x80037C2C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80037C30: sw          $zero, -0x3C04($at)
    MEM_W(-0X3C04, ctx->r1) = 0;
    // 0x80037C34: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80037C38: sh          $zero, -0x3C00($at)
    MEM_H(-0X3C00, ctx->r1) = 0;
    // 0x80037C3C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80037C40: sh          $zero, -0x3BFE($at)
    MEM_H(-0X3BFE, ctx->r1) = 0;
    // 0x80037C44: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80037C48: sb          $zero, -0x3BC4($at)
    MEM_B(-0X3BC4, ctx->r1) = 0;
    // 0x80037C4C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80037C50: sb          $zero, -0x3BC3($at)
    MEM_B(-0X3BC3, ctx->r1) = 0;
    // 0x80037C54: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80037C58: sb          $zero, -0x3BC0($at)
    MEM_B(-0X3BC0, ctx->r1) = 0;
    // 0x80037C5C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80037C60: sb          $zero, -0x3BBF($at)
    MEM_B(-0X3BBF, ctx->r1) = 0;
    // 0x80037C64: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80037C68: sh          $v0, -0x3BA8($at)
    MEM_H(-0X3BA8, ctx->r1) = ctx->r2;
    // 0x80037C6C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80037C70: sh          $v0, -0x3BA6($at)
    MEM_H(-0X3BA6, ctx->r1) = ctx->r2;
    // 0x80037C74: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80037C78: sh          $v0, -0x3BA4($at)
    MEM_H(-0X3BA4, ctx->r1) = ctx->r2;
    // 0x80037C7C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80037C80: sh          $v0, -0x3BA2($at)
    MEM_H(-0X3BA2, ctx->r1) = ctx->r2;
    // 0x80037C84: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80037C88: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80037C8C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80037C90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80037C94: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80037C98: jr          $ra
    // 0x80037C9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80037C9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void _getVol(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80097A9C: sra         $a1, $a1, 3
    ctx->r5 = S32(SIGNED(ctx->r5) >> 3);
    // 0x80097AA0: bne         $a1, $zero, L_80097AB0
    if (ctx->r5 != 0) {
        // 0x80097AA4: sll         $v0, $a2, 16
        ctx->r2 = S32(ctx->r6 << 16);
            goto L_80097AB0;
    }
    // 0x80097AA4: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x80097AA8: j           L_80097B18
    // 0x80097AAC: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
        goto L_80097B18;
    // 0x80097AAC: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_80097AB0:
    // 0x80097AB0: mtc1        $v0, $f2
    ctx->f2.u32l = ctx->r2;
    // 0x80097AB4: nop

    // 0x80097AB8: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x80097ABC: andi        $v0, $a3, 0xFFFF
    ctx->r2 = ctx->r7 & 0XFFFF;
    // 0x80097AC0: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x80097AC4: nop

    // 0x80097AC8: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x80097ACC: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x80097AD0: lui         $at, 0x4780
    ctx->r1 = S32(0X4780 << 16);
    // 0x80097AD4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80097AD8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80097ADC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80097AE0: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x80097AE4: div.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f2.fl, ctx->f0.fl);
L_80097AE8:
    // 0x80097AE8: andi        $v0, $a1, 0x1
    ctx->r2 = ctx->r5 & 0X1;
    // 0x80097AEC: bnel        $v0, $zero, L_80097AF4
    if (ctx->r2 != 0) {
        // 0x80097AF0: mul.s       $f4, $f4, $f2
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
            goto L_80097AF4;
    }
    goto skip_0;
    // 0x80097AF0: mul.s       $f4, $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    skip_0:
L_80097AF4:
    // 0x80097AF4: sra         $a1, $a1, 1
    ctx->r5 = S32(SIGNED(ctx->r5) >> 1);
    // 0x80097AF8: beql        $a1, $zero, L_80097B18
    if (ctx->r5 == 0) {
        // 0x80097AFC: mul.s       $f0, $f12, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
            goto L_80097B18;
    }
    goto skip_1;
    // 0x80097AFC: mul.s       $f0, $f12, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
    skip_1:
    // 0x80097B00: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80097B04: slti        $v0, $v1, 0x20
    ctx->r2 = SIGNED(ctx->r3) < 0X20 ? 1 : 0;
    // 0x80097B08: bne         $v0, $zero, L_80097AE8
    if (ctx->r2 != 0) {
        // 0x80097B0C: mul.s       $f2, $f2, $f2
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
            goto L_80097AE8;
    }
    // 0x80097B0C: mul.s       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80097B10: nop

    // 0x80097B14: mul.s       $f0, $f12, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f12.fl, ctx->f4.fl);
L_80097B18:
    // 0x80097B18: jr          $ra
    // 0x80097B1C: nop

    TRACE_RETURN()
    return;
    // 0x80097B1C: nop

;}
RECOMP_FUNC void func_800637E0_3EBE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800637E0: lbu         $v1, 0x72($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X72);
    // 0x800637E4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800637E8: lw          $a1, 0x6C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X6C);
    // 0x800637EC: lui         $a2, 0x40
    ctx->r6 = S32(0X40 << 16);
    // 0x800637F0: ori         $a2, $a2, 0x4000
    ctx->r6 = ctx->r6 | 0X4000;
    // 0x800637F4: sh          $zero, 0xBC($a0)
    MEM_H(0XBC, ctx->r4) = 0;
    // 0x800637F8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800637FC: or          $v0, $v0, $a2
    ctx->r2 = ctx->r2 | ctx->r6;
    // 0x80063800: addiu       $a1, $a1, 0x7
    ctx->r5 = ADD32(ctx->r5, 0X7);
    // 0x80063804: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x80063808: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006380C: sb          $v1, 0x72($a0)
    MEM_B(0X72, ctx->r4) = ctx->r3;
    // 0x80063810: jr          $ra
    // 0x80063814: sw          $a1, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x80063814: sw          $a1, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_80092E50_6E250(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80092E50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80092E54: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80092E58: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80092E5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80092E60: jal         0x80094460
    // 0x80092E64: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osSetIntMask_recomp(rdram, ctx);
        goto after_0;
    // 0x80092E64: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x80092E68: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80092E6C: sw          $s0, -0xEA4($at)
    MEM_W(-0XEA4, ctx->r1) = ctx->r16;
    // 0x80092E70: jal         0x80094460
    // 0x80092E74: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    osSetIntMask_recomp(rdram, ctx);
        goto after_1;
    // 0x80092E74: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_1:
    // 0x80092E78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80092E7C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80092E80: jr          $ra
    // 0x80092E84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80092E84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80092E88: nop

    // 0x80092E8C: nop

;}
RECOMP_FUNC void func_80070E24_4C224(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80070E24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80070E28: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80070E2C: lb          $v0, 0x171($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X171);
    // 0x80070E30: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80070E34: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80070E38: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80070E3C: lw          $v0, 0x3088($at)
    ctx->r2 = MEM_W(ctx->r1, 0X3088);
    // 0x80070E40: jalr        $v0
    // 0x80070E44: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80070E44: nop

    after_0:
    // 0x80070E48: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80070E4C: jr          $ra
    // 0x80070E50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80070E50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800283A8_37A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800283A8: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x800283AC: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x800283B0: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x800283B4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x800283B8: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x800283BC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x800283C0: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x800283C4: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x800283C8: addiu       $v1, $v1, 0x47F0
    ctx->r3 = ADD32(ctx->r3, 0X47F0);
    // 0x800283CC: addu        $t0, $v0, $v1
    ctx->r8 = ADD32(ctx->r2, ctx->r3);
    // 0x800283D0: lb          $v0, 0xAA($t0)
    ctx->r2 = MEM_B(ctx->r8, 0XAA);
    // 0x800283D4: beq         $v0, $zero, L_80028468
    if (ctx->r2 == 0) {
        // 0x800283D8: nop
    
            goto L_80028468;
    }
    // 0x800283D8: nop

    // 0x800283DC: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x800283E0: lw          $v0, 0x6CA8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6CA8);
    // 0x800283E4: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x800283E8: beq         $v0, $zero, L_80028424
    if (ctx->r2 == 0) {
        // 0x800283EC: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_80028424;
    }
    // 0x800283EC: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x800283F0: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x800283F4: lw          $a0, 0x6FA8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6FA8);
    // 0x800283F8: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x800283FC: lw          $v0, 0x6FAC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6FAC);
    // 0x80028400: addiu       $v1, $a0, 0x18
    ctx->r3 = ADD32(ctx->r4, 0X18);
    // 0x80028404: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80028408: beq         $v0, $zero, L_80028418
    if (ctx->r2 == 0) {
        // 0x8002840C: nop
    
            goto L_80028418;
    }
    // 0x8002840C: nop

    // 0x80028410: j           L_80028424
    // 0x80028414: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
        goto L_80028424;
    // 0x80028414: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_80028418:
    // 0x80028418: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8002841C: sw          $v1, 0x6FA8($at)
    MEM_W(0X6FA8, ctx->r1) = ctx->r3;
    // 0x80028420: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
L_80028424:
    // 0x80028424: beq         $v1, $zero, L_80028468
    if (ctx->r3 == 0) {
        // 0x80028428: sll         $v0, $a1, 24
        ctx->r2 = S32(ctx->r5 << 24);
            goto L_80028468;
    }
    // 0x80028428: sll         $v0, $a1, 24
    ctx->r2 = S32(ctx->r5 << 24);
    // 0x8002842C: sra         $v0, $v0, 22
    ctx->r2 = S32(SIGNED(ctx->r2) >> 22);
    // 0x80028430: addu        $a0, $v0, $t0
    ctx->r4 = ADD32(ctx->r2, ctx->r8);
    // 0x80028434: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x80028438: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8002843C: sw          $a2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r6;
    // 0x80028440: sb          $a1, 0x10($v1)
    MEM_B(0X10, ctx->r3) = ctx->r5;
    // 0x80028444: sw          $a3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r7;
    // 0x80028448: sh          $zero, 0x12($v1)
    MEM_H(0X12, ctx->r3) = 0;
    // 0x8002844C: lw          $v0, 0x40($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X40);
    // 0x80028450: beql        $v0, $zero, L_80028464
    if (ctx->r2 == 0) {
        // 0x80028454: sw          $v1, 0x0($a0)
        MEM_W(0X0, ctx->r4) = ctx->r3;
            goto L_80028464;
    }
    goto skip_0;
    // 0x80028454: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    skip_0:
    // 0x80028458: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x8002845C: lw          $v0, 0x40($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X40);
    // 0x80028460: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
L_80028464:
    // 0x80028464: sw          $v1, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->r3;
L_80028468:
    // 0x80028468: jr          $ra
    // 0x8002846C: nop

    TRACE_RETURN()
    return;
    // 0x8002846C: nop

;}
RECOMP_FUNC void alFilterNew(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80097B20: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x80097B24: sw          $a1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r5;
    // 0x80097B28: sw          $a2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r6;
    // 0x80097B2C: sh          $zero, 0xC($a0)
    MEM_H(0XC, ctx->r4) = 0;
    // 0x80097B30: sh          $zero, 0xE($a0)
    MEM_H(0XE, ctx->r4) = 0;
    // 0x80097B34: jr          $ra
    // 0x80097B38: sw          $a3, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r7;
    TRACE_RETURN()
    return;
    // 0x80097B38: sw          $a3, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r7;
;}
RECOMP_FUNC void __scMain(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8009ADD8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8009ADDC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8009ADE0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8009ADE4: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8009ADE8: addiu       $s5, $zero, 0x29B
    ctx->r21 = ADD32(0, 0X29B);
    // 0x8009ADEC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8009ADF0: addiu       $s4, $zero, 0x29A
    ctx->r20 = ADD32(0, 0X29A);
    // 0x8009ADF4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8009ADF8: addiu       $s3, $zero, 0x29C
    ctx->r19 = ADD32(0, 0X29C);
    // 0x8009ADFC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8009AE00: addiu       $s2, $zero, 0x29D
    ctx->r18 = ADD32(0, 0X29D);
    // 0x8009AE04: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8009AE08: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8009AE0C: addiu       $a0, $s1, 0x40
    ctx->r4 = ADD32(ctx->r17, 0X40);
L_8009AE10:
    // 0x8009AE10: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8009AE14: jal         0x8009A5E0
    // 0x8009AE18: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x8009AE18: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x8009AE1C: lw          $v1, 0x10($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X10);
    // 0x8009AE20: beq         $v1, $s5, L_8009AE68
    if (ctx->r3 == ctx->r21) {
        // 0x8009AE24: slti        $v0, $v1, 0x29C
        ctx->r2 = SIGNED(ctx->r3) < 0X29C ? 1 : 0;
            goto L_8009AE68;
    }
    // 0x8009AE24: slti        $v0, $v1, 0x29C
    ctx->r2 = SIGNED(ctx->r3) < 0X29C ? 1 : 0;
    // 0x8009AE28: beq         $v0, $zero, L_8009AE40
    if (ctx->r2 == 0) {
        // 0x8009AE2C: nop
    
            goto L_8009AE40;
    }
    // 0x8009AE2C: nop

    // 0x8009AE30: beq         $v1, $s4, L_8009AE58
    if (ctx->r3 == ctx->r20) {
        // 0x8009AE34: addiu       $a0, $s1, 0x40
        ctx->r4 = ADD32(ctx->r17, 0X40);
            goto L_8009AE58;
    }
    // 0x8009AE34: addiu       $a0, $s1, 0x40
    ctx->r4 = ADD32(ctx->r17, 0X40);
    // 0x8009AE38: j           L_8009AE10
    // 0x8009AE3C: nop

        goto L_8009AE10;
    // 0x8009AE3C: nop

L_8009AE40:
    // 0x8009AE40: beq         $v1, $s3, L_8009AE78
    if (ctx->r3 == ctx->r19) {
        // 0x8009AE44: nop
    
            goto L_8009AE78;
    }
    // 0x8009AE44: nop

    // 0x8009AE48: beq         $v1, $s2, L_8009AE88
    if (ctx->r3 == ctx->r18) {
        // 0x8009AE4C: addiu       $a0, $s1, 0x40
        ctx->r4 = ADD32(ctx->r17, 0X40);
            goto L_8009AE88;
    }
    // 0x8009AE4C: addiu       $a0, $s1, 0x40
    ctx->r4 = ADD32(ctx->r17, 0X40);
    // 0x8009AE50: j           L_8009AE10
    // 0x8009AE54: nop

        goto L_8009AE10;
    // 0x8009AE54: nop

L_8009AE58:
    // 0x8009AE58: jal         0x8009AEDC
    // 0x8009AE5C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    __scHandleRetrace(rdram, ctx);
        goto after_1;
    // 0x8009AE5C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x8009AE60: j           L_8009AE10
    // 0x8009AE64: addiu       $a0, $s1, 0x40
    ctx->r4 = ADD32(ctx->r17, 0X40);
        goto L_8009AE10;
    // 0x8009AE64: addiu       $a0, $s1, 0x40
    ctx->r4 = ADD32(ctx->r17, 0X40);
L_8009AE68:
    // 0x8009AE68: jal         0x8009AFDC
    // 0x8009AE6C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    __scHandleRSP(rdram, ctx);
        goto after_2;
    // 0x8009AE6C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x8009AE70: j           L_8009AE10
    // 0x8009AE74: addiu       $a0, $s1, 0x40
    ctx->r4 = ADD32(ctx->r17, 0X40);
        goto L_8009AE10;
    // 0x8009AE74: addiu       $a0, $s1, 0x40
    ctx->r4 = ADD32(ctx->r17, 0X40);
L_8009AE78:
    // 0x8009AE78: jal         0x8009B0CC
    // 0x8009AE7C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    __scHandleRDP(rdram, ctx);
        goto after_3;
    // 0x8009AE7C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
    // 0x8009AE80: j           L_8009AE10
    // 0x8009AE84: addiu       $a0, $s1, 0x40
    ctx->r4 = ADD32(ctx->r17, 0X40);
        goto L_8009AE10;
    // 0x8009AE84: addiu       $a0, $s1, 0x40
    ctx->r4 = ADD32(ctx->r17, 0X40);
L_8009AE88:
    // 0x8009AE88: lw          $s0, 0x260($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X260);
    // 0x8009AE8C: beq         $s0, $zero, L_8009AE10
    if (ctx->r16 == 0) {
        // 0x8009AE90: nop
    
            goto L_8009AE10;
    }
    // 0x8009AE90: nop

L_8009AE94:
    // 0x8009AE94: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8009AE98: addiu       $a1, $s1, 0x20
    ctx->r5 = ADD32(ctx->r17, 0X20);
    // 0x8009AE9C: jal         0x8009A710
    // 0x8009AEA0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    osSendMesg_recomp(rdram, ctx);
        goto after_4;
    // 0x8009AEA0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x8009AEA4: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x8009AEA8: bne         $s0, $zero, L_8009AE94
    if (ctx->r16 != 0) {
        // 0x8009AEAC: addiu       $a0, $s1, 0x40
        ctx->r4 = ADD32(ctx->r17, 0X40);
            goto L_8009AE94;
    }
    // 0x8009AEAC: addiu       $a0, $s1, 0x40
    ctx->r4 = ADD32(ctx->r17, 0X40);
    // 0x8009AEB0: j           L_8009AE10
    // 0x8009AEB4: nop

        goto L_8009AE10;
    // 0x8009AEB4: nop

    // 0x8009AEB8: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8009AEBC: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8009AEC0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8009AEC4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8009AEC8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8009AECC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8009AED0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8009AED4: jr          $ra
    // 0x8009AED8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8009AED8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8008E6F0_69AF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008E6F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008E6F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8008E6F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008E6FC: jal         0x8008E75C
    // 0x8008E700: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8008E75C_69B5C(rdram, ctx);
        goto after_0;
    // 0x8008E700: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8008E704: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8008E708: bne         $a1, $zero, L_8008E718
    if (ctx->r5 != 0) {
        // 0x8008E70C: lui         $v1, 0xFF00
        ctx->r3 = S32(0XFF00 << 16);
            goto L_8008E718;
    }
    // 0x8008E70C: lui         $v1, 0xFF00
    ctx->r3 = S32(0XFF00 << 16);
    // 0x8008E710: j           L_8008E744
    // 0x8008E714: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_8008E744;
    // 0x8008E714: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8008E718:
    // 0x8008E718: and         $v0, $s0, $v1
    ctx->r2 = ctx->r16 & ctx->r3;
    // 0x8008E71C: bne         $v0, $v1, L_8008E734
    if (ctx->r2 != ctx->r3) {
        // 0x8008E720: lui         $v0, 0xFF
        ctx->r2 = S32(0XFF << 16);
            goto L_8008E734;
    }
    // 0x8008E720: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x8008E724: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8008E728: and         $s0, $s0, $v0
    ctx->r16 = ctx->r16 & ctx->r2;
    // 0x8008E72C: lui         $v0, 0x14
    ctx->r2 = S32(0X14 << 16);
    // 0x8008E730: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
L_8008E734:
    // 0x8008E734: lw          $a0, 0x10($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X10);
    // 0x8008E738: lw          $v0, 0xC($a1)
    ctx->r2 = MEM_W(ctx->r5, 0XC);
    // 0x8008E73C: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    // 0x8008E740: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
L_8008E744:
    // 0x8008E744: jal         0x80099BB0
    // 0x8008E748: nop

    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_1;
    // 0x8008E748: nop

    after_1:
    // 0x8008E74C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008E750: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8008E754: jr          $ra
    // 0x8008E758: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8008E758: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8003BD34_17134(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003BD34: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8003BD38: sll         $a2, $a2, 4
    ctx->r6 = S32(ctx->r6 << 4);
    // 0x8003BD3C: blez        $a2, L_8003BD60
    if (SIGNED(ctx->r6) <= 0) {
        // 0x8003BD40: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_8003BD60;
    }
    // 0x8003BD40: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_8003BD44:
    // 0x8003BD44: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x8003BD48: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8003BD4C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8003BD50: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x8003BD54: slt         $v0, $v1, $a2
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8003BD58: bne         $v0, $zero, L_8003BD44
    if (ctx->r2 != 0) {
        // 0x8003BD5C: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_8003BD44;
    }
    // 0x8003BD5C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_8003BD60:
    // 0x8003BD60: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x8003BD64: jr          $ra
    // 0x8003BD68: nop

    TRACE_RETURN()
    return;
    // 0x8003BD68: nop

;}
RECOMP_FUNC void func_8004D024_28424(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004D024: andi        $v0, $a1, 0x1
    ctx->r2 = ctx->r5 & 0X1;
    // 0x8004D028: beq         $v0, $zero, L_8004D040
    if (ctx->r2 == 0) {
        // 0x8004D02C: andi        $v0, $a1, 0x4
        ctx->r2 = ctx->r5 & 0X4;
            goto L_8004D040;
    }
    // 0x8004D02C: andi        $v0, $a1, 0x4
    ctx->r2 = ctx->r5 & 0X4;
    // 0x8004D030: lbu         $v0, 0x6($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X6);
    // 0x8004D034: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x8004D038: sb          $v0, 0x6($a0)
    MEM_B(0X6, ctx->r4) = ctx->r2;
    // 0x8004D03C: andi        $v0, $a1, 0x4
    ctx->r2 = ctx->r5 & 0X4;
L_8004D040:
    // 0x8004D040: beq         $v0, $zero, L_8004D058
    if (ctx->r2 == 0) {
        // 0x8004D044: andi        $v0, $a1, 0x2
        ctx->r2 = ctx->r5 & 0X2;
            goto L_8004D058;
    }
    // 0x8004D044: andi        $v0, $a1, 0x2
    ctx->r2 = ctx->r5 & 0X2;
    // 0x8004D048: lbu         $v0, 0x6($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X6);
    // 0x8004D04C: xori        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 ^ 0X2;
    // 0x8004D050: sb          $v0, 0x6($a0)
    MEM_B(0X6, ctx->r4) = ctx->r2;
    // 0x8004D054: andi        $v0, $a1, 0x2
    ctx->r2 = ctx->r5 & 0X2;
L_8004D058:
    // 0x8004D058: beq         $v0, $zero, L_8004D070
    if (ctx->r2 == 0) {
        // 0x8004D05C: andi        $v0, $a1, 0x8
        ctx->r2 = ctx->r5 & 0X8;
            goto L_8004D070;
    }
    // 0x8004D05C: andi        $v0, $a1, 0x8
    ctx->r2 = ctx->r5 & 0X8;
    // 0x8004D060: lbu         $v0, 0x6($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X6);
    // 0x8004D064: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8004D068: sb          $v0, 0x6($a0)
    MEM_B(0X6, ctx->r4) = ctx->r2;
    // 0x8004D06C: andi        $v0, $a1, 0x8
    ctx->r2 = ctx->r5 & 0X8;
L_8004D070:
    // 0x8004D070: beq         $v0, $zero, L_8004D084
    if (ctx->r2 == 0) {
        // 0x8004D074: nop
    
            goto L_8004D084;
    }
    // 0x8004D074: nop

    // 0x8004D078: lbu         $v0, 0x6($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X6);
    // 0x8004D07C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8004D080: sb          $v0, 0x6($a0)
    MEM_B(0X6, ctx->r4) = ctx->r2;
L_8004D084:
    // 0x8004D084: jr          $ra
    // 0x8004D088: nop

    TRACE_RETURN()
    return;
    // 0x8004D088: nop

;}
RECOMP_FUNC void func_8008190C_5CD0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008190C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80081910: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80081914: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x80081918: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8008191C: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x80081920: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80081924: lw          $s1, 0x50($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X50);
    // 0x80081928: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8008192C: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    // 0x80081930: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80081934: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x80081938: addiu       $a0, $zero, 0x68
    ctx->r4 = ADD32(0, 0X68);
    // 0x8008193C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80081940: addu        $s5, $a1, $zero
    ctx->r21 = ADD32(ctx->r5, 0);
    // 0x80081944: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80081948: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x8008194C: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x80081950: jal         0x800281C8
    // 0x80081954: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_800281C8_35C8(rdram, ctx);
        goto after_0;
    // 0x80081954: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x80081958: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8008195C: beq         $s0, $zero, L_80081A5C
    if (ctx->r16 == 0) {
        // 0x80081960: nop
    
            goto L_80081A5C;
    }
    // 0x80081960: nop

    // 0x80081964: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80081968: beq         $v0, $zero, L_800819A0
    if (ctx->r2 == 0) {
        // 0x8008196C: sh          $s2, 0x0($s0)
        MEM_H(0X0, ctx->r16) = ctx->r18;
            goto L_800819A0;
    }
    // 0x8008196C: sh          $s2, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r18;
    // 0x80081970: lbu         $v0, 0xF($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XF);
    // 0x80081974: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80081978: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8008197C: lw          $v0, 0x70($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X70);
    // 0x80081980: lhu         $v0, 0x2($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X2);
    // 0x80081984: addiu       $v0, $v0, -0x66
    ctx->r2 = ADD32(ctx->r2, -0X66);
    // 0x80081988: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x8008198C: bne         $v0, $zero, L_800819A4
    if (ctx->r2 != 0) {
        // 0x80081990: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_800819A4;
    }
    // 0x80081990: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80081994: lw          $v0, 0x18($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X18);
    // 0x80081998: addiu       $v0, $v0, -0xC
    ctx->r2 = ADD32(ctx->r2, -0XC);
    // 0x8008199C: sw          $v0, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->r2;
L_800819A0:
    // 0x800819A0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_800819A4:
    // 0x800819A4: jal         0x8002C5A4
    // 0x800819A8: addiu       $a1, $s0, 0x18
    ctx->r5 = ADD32(ctx->r16, 0X18);
    func_8002C5A4_79A4(rdram, ctx);
        goto after_1;
    // 0x800819A8: addiu       $a1, $s0, 0x18
    ctx->r5 = ADD32(ctx->r16, 0X18);
    after_1:
    // 0x800819AC: lbu         $v1, 0xF($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XF);
    // 0x800819B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800819B4: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x800819B8: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x800819BC: sb          $a1, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r5;
    // 0x800819C0: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
    // 0x800819C4: lbu         $v0, 0xD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XD);
    // 0x800819C8: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x800819CC: lbu         $v1, 0xE($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XE);
    // 0x800819D0: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x800819D4: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x800819D8: sb          $v1, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r3;
    // 0x800819DC: lbu         $v0, 0xC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC);
    // 0x800819E0: addiu       $a0, $zero, 0x90
    ctx->r4 = ADD32(0, 0X90);
    // 0x800819E4: sw          $s1, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r17;
    // 0x800819E8: sw          $s6, 0x60($s0)
    MEM_W(0X60, ctx->r16) = ctx->r22;
    // 0x800819EC: sw          $s7, 0x5C($s0)
    MEM_W(0X5C, ctx->r16) = ctx->r23;
    // 0x800819F0: sb          $a1, 0x67($s0)
    MEM_B(0X67, ctx->r16) = ctx->r5;
    // 0x800819F4: sb          $a1, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r5;
    // 0x800819F8: jal         0x800281C8
    // 0x800819FC: sb          $v0, 0x10($s0)
    MEM_B(0X10, ctx->r16) = ctx->r2;
    func_800281C8_35C8(rdram, ctx);
        goto after_2;
    // 0x800819FC: sb          $v0, 0x10($s0)
    MEM_B(0X10, ctx->r16) = ctx->r2;
    after_2:
    // 0x80081A00: lbu         $v1, 0xF($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XF);
    // 0x80081A04: beq         $v1, $zero, L_80081A3C
    if (ctx->r3 == 0) {
        // 0x80081A08: sw          $v0, 0x58($s0)
        MEM_W(0X58, ctx->r16) = ctx->r2;
            goto L_80081A3C;
    }
    // 0x80081A08: sw          $v0, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->r2;
    // 0x80081A0C: sll         $a0, $s4, 24
    ctx->r4 = S32(ctx->r20 << 24);
    // 0x80081A10: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80081A14: sll         $a1, $s5, 24
    ctx->r5 = S32(ctx->r21 << 24);
    // 0x80081A18: sra         $a1, $a1, 24
    ctx->r5 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80081A1C: lhu         $v0, 0x1E($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X1E);
    // 0x80081A20: lui         $a2, 0x8008
    ctx->r6 = S32(0X8008 << 16);
    // 0x80081A24: addiu       $a2, $a2, 0x5F8
    ctx->r6 = ADD32(ctx->r6, 0X5F8);
    // 0x80081A28: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x80081A2C: jal         0x80028220
    // 0x80081A30: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80028220_3620(rdram, ctx);
        goto after_3;
    // 0x80081A30: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_3:
    // 0x80081A34: j           L_80081A5C
    // 0x80081A38: nop

        goto L_80081A5C;
    // 0x80081A38: nop

L_80081A3C:
    // 0x80081A3C: sll         $a0, $s4, 24
    ctx->r4 = S32(ctx->r20 << 24);
    // 0x80081A40: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80081A44: sll         $a1, $s5, 24
    ctx->r5 = S32(ctx->r21 << 24);
    // 0x80081A48: sra         $a1, $a1, 24
    ctx->r5 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80081A4C: lui         $a2, 0x8008
    ctx->r6 = S32(0X8008 << 16);
    // 0x80081A50: addiu       $a2, $a2, 0x5F8
    ctx->r6 = ADD32(ctx->r6, 0X5F8);
    // 0x80081A54: jal         0x800283A8
    // 0x80081A58: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_800283A8_37A8(rdram, ctx);
        goto after_4;
    // 0x80081A58: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_4:
L_80081A5C:
    // 0x80081A5C: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x80081A60: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80081A64: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80081A68: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80081A6C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80081A70: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80081A74: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80081A78: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80081A7C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80081A80: jr          $ra
    // 0x80081A84: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80081A84: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800261C4_15C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800261C4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800261C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x800261CC: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x800261D0: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x800261D4: addiu       $a0, $a0, 0x3530
    ctx->r4 = ADD32(ctx->r4, 0X3530);
    // 0x800261D8: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x800261DC: addiu       $v1, $v1, 0x34F0
    ctx->r3 = ADD32(ctx->r3, 0X34F0);
    // 0x800261E0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800261E4: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x800261E8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x800261EC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x800261F0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
L_800261F4:
    // 0x800261F4: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x800261F8: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x800261FC: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80026200: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80026204: slti        $v0, $s0, 0x10
    ctx->r2 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
    // 0x80026208: bne         $v0, $zero, L_800261F4
    if (ctx->r2 != 0) {
        // 0x8002620C: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_800261F4;
    }
    // 0x8002620C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80026210: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80026214: lw          $v0, 0x34E4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X34E4);
    // 0x80026218: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8002621C: sw          $v0, -0x46DC($at)
    MEM_W(-0X46DC, ctx->r1) = ctx->r2;
    // 0x80026220: beql        $v0, $zero, L_800262A0
    if (ctx->r2 == 0) {
        // 0x80026224: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_800262A0;
    }
    goto skip_0;
    // 0x80026224: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    skip_0:
    // 0x80026228: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x8002622C: addiu       $a2, $a2, 0x34F0
    ctx->r6 = ADD32(ctx->r6, 0X34F0);
    // 0x80026230: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80026234: addiu       $a1, $a1, 0x3530
    ctx->r5 = ADD32(ctx->r5, 0X3530);
L_80026238:
    // 0x80026238: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8002623C: lw          $a0, -0x46DC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X46DC);
    // 0x80026240: lb          $v0, 0x34($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X34);
    // 0x80026244: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    // 0x80026248: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8002624C: addu        $v1, $v0, $a2
    ctx->r3 = ADD32(ctx->r2, ctx->r6);
    // 0x80026250: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80026254: beql        $v0, $zero, L_8002625C
    if (ctx->r2 == 0) {
        // 0x80026258: sw          $a0, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r4;
            goto L_8002625C;
    }
    goto skip_1;
    // 0x80026258: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    skip_1:
L_8002625C:
    // 0x8002625C: lb          $v0, 0x34($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X34);
    // 0x80026260: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80026264: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80026268: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8002626C: bnel        $v0, $zero, L_80026274
    if (ctx->r2 != 0) {
        // 0x80026270: sw          $a0, 0x8($v0)
        MEM_W(0X8, ctx->r2) = ctx->r4;
            goto L_80026274;
    }
    goto skip_2;
    // 0x80026270: sw          $a0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r4;
    skip_2:
L_80026274:
    // 0x80026274: lb          $v0, 0x34($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X34);
    // 0x80026278: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8002627C: lw          $v1, -0x46DC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X46DC);
    // 0x80026280: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80026284: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80026288: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    // 0x8002628C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80026290: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80026294: bne         $v0, $zero, L_80026238
    if (ctx->r2 != 0) {
        // 0x80026298: sw          $v0, -0x46DC($at)
        MEM_W(-0X46DC, ctx->r1) = ctx->r2;
            goto L_80026238;
    }
    // 0x80026298: sw          $v0, -0x46DC($at)
    MEM_W(-0X46DC, ctx->r1) = ctx->r2;
    // 0x8002629C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_800262A0:
    // 0x800262A0: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x800262A4: addiu       $s4, $zero, 0x2
    ctx->r20 = ADD32(0, 0X2);
    // 0x800262A8: addiu       $s3, $zero, 0x4
    ctx->r19 = ADD32(0, 0X4);
    // 0x800262AC: lui         $s2, 0x800D
    ctx->r18 = S32(0X800D << 16);
    // 0x800262B0: addiu       $s2, $s2, 0x34F0
    ctx->r18 = ADD32(ctx->r18, 0X34F0);
L_800262B4:
    // 0x800262B4: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x800262B8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800262BC: sw          $v0, -0x46DC($at)
    MEM_W(-0X46DC, ctx->r1) = ctx->r2;
    // 0x800262C0: beql        $v0, $zero, L_800264C4
    if (ctx->r2 == 0) {
        // 0x800262C4: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_800264C4;
    }
    goto skip_3;
    // 0x800262C4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_3:
L_800262C8:
    // 0x800262C8: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x800262CC: lw          $a0, -0x46DC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X46DC);
    // 0x800262D0: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x800262D4: beq         $v1, $s1, L_80026314
    if (ctx->r3 == ctx->r17) {
        // 0x800262D8: nop
    
            goto L_80026314;
    }
    // 0x800262D8: nop

    // 0x800262DC: beql        $v1, $zero, L_800262FC
    if (ctx->r3 == 0) {
        // 0x800262E0: sb          $s1, 0x36($a0)
        MEM_B(0X36, ctx->r4) = ctx->r17;
            goto L_800262FC;
    }
    goto skip_4;
    // 0x800262E0: sb          $s1, 0x36($a0)
    MEM_B(0X36, ctx->r4) = ctx->r17;
    skip_4:
    // 0x800262E4: beq         $v1, $s4, L_80026384
    if (ctx->r3 == ctx->r20) {
        // 0x800262E8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80026384;
    }
    // 0x800262E8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x800262EC: beq         $v1, $v0, L_800263A8
    if (ctx->r3 == ctx->r2) {
        // 0x800262F0: nop
    
            goto L_800263A8;
    }
    // 0x800262F0: nop

    // 0x800262F4: j           L_800263F0
    // 0x800262F8: nop

        goto L_800263F0;
    // 0x800262F8: nop

L_800262FC:
    // 0x800262FC: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80026300: lw          $v0, -0x46DC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X46DC);
    // 0x80026304: sb          $zero, 0x37($v0)
    MEM_B(0X37, ctx->r2) = 0;
    // 0x80026308: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8002630C: lw          $v0, -0x46DC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X46DC);
    // 0x80026310: sw          $s1, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r17;
L_80026314:
    // 0x80026314: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80026318: lw          $v0, -0x46DC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X46DC);
    // 0x8002631C: lw          $v1, 0x14($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X14);
    // 0x80026320: beq         $v1, $zero, L_80026340
    if (ctx->r3 == 0) {
        // 0x80026324: nop
    
            goto L_80026340;
    }
    // 0x80026324: nop

    // 0x80026328: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x8002632C: lb          $v0, 0x34E0($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X34E0);
    // 0x80026330: bne         $v0, $zero, L_80026340
    if (ctx->r2 != 0) {
        // 0x80026334: nop
    
            goto L_80026340;
    }
    // 0x80026334: nop

    // 0x80026338: jalr        $v1
    // 0x8002633C: nop

    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_0;
    // 0x8002633C: nop

    after_0:
L_80026340:
    // 0x80026340: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80026344: lw          $v1, -0x46DC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X46DC);
    // 0x80026348: lh          $v0, 0x2E($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X2E);
    // 0x8002634C: beq         $v0, $zero, L_8002635C
    if (ctx->r2 == 0) {
        // 0x80026350: nop
    
            goto L_8002635C;
    }
    // 0x80026350: nop

    // 0x80026354: j           L_800263F0
    // 0x80026358: sw          $s4, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r20;
        goto L_800263F0;
    // 0x80026358: sw          $s4, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r20;
L_8002635C:
    // 0x8002635C: lw          $a0, 0x1C($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X1C);
    // 0x80026360: beq         $a0, $zero, L_800263F0
    if (ctx->r4 == 0) {
        // 0x80026364: nop
    
            goto L_800263F0;
    }
    // 0x80026364: nop

    // 0x80026368: lb          $v0, 0x36($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X36);
    // 0x8002636C: beq         $v0, $zero, L_800263F0
    if (ctx->r2 == 0) {
        // 0x80026370: nop
    
            goto L_800263F0;
    }
    // 0x80026370: nop

    // 0x80026374: jalr        $a0
    // 0x80026378: nop

    LOOKUP_FUNC(ctx->r4)(rdram, ctx);
        goto after_1;
    // 0x80026378: nop

    after_1:
    // 0x8002637C: j           L_800263F0
    // 0x80026380: nop

        goto L_800263F0;
    // 0x80026380: nop

L_80026384:
    // 0x80026384: jal         0x8002753C
    // 0x80026388: nop

    func_8002753C_293C(rdram, ctx);
        goto after_2;
    // 0x80026388: nop

    after_2:
    // 0x8002638C: bne         $v0, $zero, L_800263F0
    if (ctx->r2 != 0) {
        // 0x80026390: nop
    
            goto L_800263F0;
    }
    // 0x80026390: nop

    // 0x80026394: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80026398: lw          $v0, -0x46DC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X46DC);
    // 0x8002639C: sh          $zero, 0x2E($v0)
    MEM_H(0X2E, ctx->r2) = 0;
    // 0x800263A0: j           L_800263F0
    // 0x800263A4: sw          $s1, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r17;
        goto L_800263F0;
    // 0x800263A4: sw          $s1, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r17;
L_800263A8:
    // 0x800263A8: lh          $v0, 0x32($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X32);
    // 0x800263AC: bne         $v0, $zero, L_800263F0
    if (ctx->r2 != 0) {
        // 0x800263B0: nop
    
            goto L_800263F0;
    }
    // 0x800263B0: nop

    // 0x800263B4: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x800263B8: beq         $v0, $zero, L_800263E4
    if (ctx->r2 == 0) {
        // 0x800263BC: nop
    
            goto L_800263E4;
    }
    // 0x800263BC: nop

    // 0x800263C0: jalr        $v0
    // 0x800263C4: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x800263C4: nop

    after_3:
    // 0x800263C8: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x800263CC: lw          $v0, -0x46DC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X46DC);
    // 0x800263D0: lh          $v0, 0x30($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X30);
    // 0x800263D4: beq         $v0, $zero, L_800263E4
    if (ctx->r2 == 0) {
        // 0x800263D8: nop
    
            goto L_800263E4;
    }
    // 0x800263D8: nop

L_800263DC:
    // 0x800263DC: j           L_800263DC
    pause_self(rdram);
    // 0x800263E0: nop

L_800263E4:
    // 0x800263E4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x800263E8: lw          $v0, -0x46DC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X46DC);
    // 0x800263EC: sw          $s3, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r19;
L_800263F0:
    // 0x800263F0: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x800263F4: lw          $a0, -0x46DC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X46DC);
    // 0x800263F8: lb          $v0, 0x37($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X37);
    // 0x800263FC: bnel        $v0, $zero, L_80026410
    if (ctx->r2 != 0) {
        // 0x80026400: sb          $zero, 0x37($a0)
        MEM_B(0X37, ctx->r4) = 0;
            goto L_80026410;
    }
    goto skip_5;
    // 0x80026400: sb          $zero, 0x37($a0)
    MEM_B(0X37, ctx->r4) = 0;
    skip_5:
    // 0x80026404: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x80026408: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8002640C: sw          $v0, -0x46DC($at)
    MEM_W(-0X46DC, ctx->r1) = ctx->r2;
L_80026410:
    // 0x80026410: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x80026414: bne         $v0, $s3, L_800264B0
    if (ctx->r2 != ctx->r19) {
        // 0x80026418: nop
    
            goto L_800264B0;
    }
    // 0x80026418: nop

    // 0x8002641C: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80026420: beq         $v1, $zero, L_80026430
    if (ctx->r3 == 0) {
        // 0x80026424: nop
    
            goto L_80026430;
    }
    // 0x80026424: nop

    // 0x80026428: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x8002642C: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
L_80026430:
    // 0x80026430: lw          $v1, 0x4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X4);
    // 0x80026434: beq         $v1, $zero, L_80026444
    if (ctx->r3 == 0) {
        // 0x80026438: nop
    
            goto L_80026444;
    }
    // 0x80026438: nop

    // 0x8002643C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80026440: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_80026444:
    // 0x80026444: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80026448: lw          $v0, 0x34E4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X34E4);
    // 0x8002644C: bne         $a0, $v0, L_80026460
    if (ctx->r4 != ctx->r2) {
        // 0x80026450: nop
    
            goto L_80026460;
    }
    // 0x80026450: nop

    // 0x80026454: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80026458: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8002645C: sw          $v0, 0x34E4($at)
    MEM_W(0X34E4, ctx->r1) = ctx->r2;
L_80026460:
    // 0x80026460: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80026464: lw          $v0, 0x34E8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X34E8);
    // 0x80026468: bne         $a0, $v0, L_8002647C
    if (ctx->r4 != ctx->r2) {
        // 0x8002646C: nop
    
            goto L_8002647C;
    }
    // 0x8002646C: nop

    // 0x80026470: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x80026474: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80026478: sw          $v0, 0x34E8($at)
    MEM_W(0X34E8, ctx->r1) = ctx->r2;
L_8002647C:
    // 0x8002647C: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80026480: beq         $v1, $zero, L_80026494
    if (ctx->r3 == 0) {
        // 0x80026484: nop
    
            goto L_80026494;
    }
    // 0x80026484: nop

    // 0x80026488: lhu         $v0, 0x32($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X32);
    // 0x8002648C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80026490: sh          $v0, 0x32($v1)
    MEM_H(0X32, ctx->r3) = ctx->r2;
L_80026494:
    // 0x80026494: jal         0x80025FF8
    // 0x80026498: nop

    func_80025FF8_13F8(rdram, ctx);
        goto after_4;
    // 0x80026498: nop

    after_4:
    // 0x8002649C: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x800264A0: lw          $v0, 0x3570($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3570);
    // 0x800264A4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x800264A8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800264AC: sw          $v0, 0x3570($at)
    MEM_W(0X3570, ctx->r1) = ctx->r2;
L_800264B0:
    // 0x800264B0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x800264B4: lw          $v0, -0x46DC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X46DC);
    // 0x800264B8: bne         $v0, $zero, L_800262C8
    if (ctx->r2 != 0) {
        // 0x800264BC: nop
    
            goto L_800262C8;
    }
    // 0x800264BC: nop

    // 0x800264C0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_800264C4:
    // 0x800264C4: slti        $v0, $s0, 0x10
    ctx->r2 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
    // 0x800264C8: bne         $v0, $zero, L_800262B4
    if (ctx->r2 != 0) {
        // 0x800264CC: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_800262B4;
    }
    // 0x800264CC: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x800264D0: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x800264D4: lw          $v0, 0x3570($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3570);
    // 0x800264D8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800264DC: sw          $zero, -0x46DC($at)
    MEM_W(-0X46DC, ctx->r1) = 0;
    // 0x800264E0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800264E4: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x800264E8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x800264EC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x800264F0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x800264F4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x800264F8: jr          $ra
    // 0x800264FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x800264FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80035400_10800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80035400: jr          $ra
    // 0x80035404: nop

    TRACE_RETURN()
    return;
    // 0x80035404: nop

;}
RECOMP_FUNC void alLink(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80098C2C: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x80098C30: sw          $a1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r5;
    // 0x80098C34: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x80098C38: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x80098C3C: bnel        $v0, $zero, L_80098C44
    if (ctx->r2 != 0) {
        // 0x80098C40: sw          $a0, 0x4($v0)
        MEM_W(0X4, ctx->r2) = ctx->r4;
            goto L_80098C44;
    }
    goto skip_0;
    // 0x80098C40: sw          $a0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r4;
    skip_0:
L_80098C44:
    // 0x80098C44: jr          $ra
    // 0x80098C48: sw          $a0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r4;
    TRACE_RETURN()
    return;
    // 0x80098C48: sw          $a0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r4;
;}
RECOMP_FUNC void func_80061E94_3D294(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80061E94: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x80061E98: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x80061E9C: jr          $ra
    // 0x80061EA0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80061EA0: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_800372C4_126C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800372C4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800372C8: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x800372CC: addiu       $t0, $t0, -0xC6D
    ctx->r8 = ADD32(ctx->r8, -0XC6D);
    // 0x800372D0: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x800372D4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800372D8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800372DC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800372E0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800372E4: lb          $v1, 0x0($t0)
    ctx->r3 = MEM_B(ctx->r8, 0X0);
    // 0x800372E8: beq         $v1, $zero, L_80037304
    if (ctx->r3 == 0) {
        // 0x800372EC: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_80037304;
    }
    // 0x800372EC: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x800372F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800372F4: beq         $v1, $v0, L_8003736C
    if (ctx->r3 == ctx->r2) {
        // 0x800372F8: nop
    
            goto L_8003736C;
    }
    // 0x800372F8: nop

    // 0x800372FC: j           L_800373F4
    // 0x80037300: nop

        goto L_800373F4;
    // 0x80037300: nop

L_80037304:
    // 0x80037304: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
L_80037308:
    // 0x80037308: sll         $s0, $s2, 7
    ctx->r16 = S32(ctx->r18 << 7);
    // 0x8003730C: jal         0x80032498
    // 0x80037310: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80032498_D898(rdram, ctx);
        goto after_0;
    // 0x80037310: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80037314: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80037318: addu        $at, $at, $s1
    ctx->r1 = ADD32(ctx->r1, ctx->r17);
    // 0x8003731C: sh          $v0, -0x5690($at)
    MEM_H(-0X5690, ctx->r1) = ctx->r2;
    // 0x80037320: jal         0x800324B4
    // 0x80037324: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800324B4_D8B4(rdram, ctx);
        goto after_1;
    // 0x80037324: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80037328: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8003732C: addu        $at, $at, $s1
    ctx->r1 = ADD32(ctx->r1, ctx->r17);
    // 0x80037330: sh          $v0, -0x568E($at)
    MEM_H(-0X568E, ctx->r1) = ctx->r2;
    // 0x80037334: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80037338: slti        $v0, $s2, 0x20
    ctx->r2 = SIGNED(ctx->r18) < 0X20 ? 1 : 0;
    // 0x8003733C: bne         $v0, $zero, L_80037308
    if (ctx->r2 != 0) {
        // 0x80037340: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_80037308;
    }
    // 0x80037340: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80037344: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80037348: lbu         $v1, -0xC6D($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0XC6D);
    // 0x8003734C: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80037350: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80037354: sb          $v0, -0xC6C($at)
    MEM_B(-0XC6C, ctx->r1) = ctx->r2;
    // 0x80037358: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8003735C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80037360: sb          $v1, -0xC6D($at)
    MEM_B(-0XC6D, ctx->r1) = ctx->r3;
    // 0x80037364: j           L_800373F4
    // 0x80037368: addiu       $s1, $zero, 0xF0
    ctx->r17 = ADD32(0, 0XF0);
        goto L_800373F4;
    // 0x80037368: addiu       $s1, $zero, 0xF0
    ctx->r17 = ADD32(0, 0XF0);
L_8003736C:
    // 0x8003736C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80037370: lbu         $v1, -0xC6C($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0XC6C);
    // 0x80037374: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80037378: sh          $zero, -0x38AC($at)
    MEM_H(-0X38AC, ctx->r1) = 0;
    // 0x8003737C: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80037380: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80037384: sb          $v0, -0xC6C($at)
    MEM_B(-0XC6C, ctx->r1) = ctx->r2;
    // 0x80037388: bne         $v1, $zero, L_800373E8
    if (ctx->r3 != 0) {
        // 0x8003738C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_800373E8;
    }
    // 0x8003738C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80037390: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80037394: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80037398: lbu         $v0, -0xC6E($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0XC6E);
    // 0x8003739C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x800373A0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x800373A4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800373A8: sb          $zero, -0xC70($at)
    MEM_B(-0XC70, ctx->r1) = 0;
    // 0x800373AC: sb          $zero, 0x0($t0)
    MEM_B(0X0, ctx->r8) = 0;
    // 0x800373B0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800373B4: sh          $v1, -0xC68($at)
    MEM_H(-0XC68, ctx->r1) = ctx->r3;
    // 0x800373B8: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x800373BC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800373C0: sh          $v1, -0xC62($at)
    MEM_H(-0XC62, ctx->r1) = ctx->r3;
    // 0x800373C4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800373C8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800373CC: sb          $v0, -0xC6E($at)
    MEM_B(-0XC6E, ctx->r1) = ctx->r2;
    // 0x800373D0: jal         0x80028794
    // 0x800373D4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80028794_3B94(rdram, ctx);
        goto after_2;
    // 0x800373D4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x800373D8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x800373DC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x800373E0: jal         0x800287CC
    // 0x800373E4: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    func_800287CC_3BCC(rdram, ctx);
        goto after_3;
    // 0x800373E4: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    after_3:
L_800373E8:
    // 0x800373E8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x800373EC: lb          $v0, -0xC6C($v0)
    ctx->r2 = MEM_B(ctx->r2, -0XC6C);
    // 0x800373F0: sll         $s1, $v0, 2
    ctx->r17 = S32(ctx->r2 << 2);
L_800373F4:
    // 0x800373F4: jal         0x800281C8
    // 0x800373F8: addiu       $a0, $zero, 0x900
    ctx->r4 = ADD32(0, 0X900);
    func_800281C8_35C8(rdram, ctx);
        goto after_4;
    // 0x800373F8: addiu       $a0, $zero, 0x900
    ctx->r4 = ADD32(0, 0X900);
    after_4:
    // 0x800373FC: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x80037400: beq         $s3, $zero, L_800377D0
    if (ctx->r19 == 0) {
        // 0x80037404: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_800377D0;
    }
    // 0x80037404: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x80037408: sll         $v0, $s2, 3
    ctx->r2 = S32(ctx->r18 << 3);
L_8003740C:
    // 0x8003740C: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80037410: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80037414: addiu       $v0, $v0, 0x480
    ctx->r2 = ADD32(ctx->r2, 0X480);
    // 0x80037418: addu        $a1, $s3, $v0
    ctx->r5 = ADD32(ctx->r19, ctx->r2);
    // 0x8003741C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80037420: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x80037424: addiu       $v0, $zero, 0xC0
    ctx->r2 = ADD32(0, 0XC0);
    // 0x80037428: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x8003742C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80037430: sll         $a0, $s2, 2
    ctx->r4 = S32(ctx->r18 << 2);
    // 0x80037434: sw          $v0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r2;
    // 0x80037438: sw          $zero, 0x14($a1)
    MEM_W(0X14, ctx->r5) = 0;
    // 0x8003743C: sw          $zero, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = 0;
    // 0x80037440: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80037444: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80037448: lh          $v0, -0x5690($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X5690);
    // 0x8003744C: mult        $v0, $s1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80037450: mflo        $v0
    ctx->r2 = lo;
    // 0x80037454: srl         $v0, $v0, 12
    ctx->r2 = S32(U32(ctx->r2) >> 12);
    // 0x80037458: addiu       $v0, $v0, 0xA0
    ctx->r2 = ADD32(ctx->r2, 0XA0);
    // 0x8003745C: sh          $v0, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r2;
    // 0x80037460: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80037464: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80037468: lh          $v0, -0x568E($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X568E);
    // 0x8003746C: mult        $v0, $s1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80037470: mflo        $v0
    ctx->r2 = lo;
    // 0x80037474: addiu       $s0, $s2, 0x1
    ctx->r16 = ADD32(ctx->r18, 0X1);
    // 0x80037478: srl         $v0, $v0, 12
    ctx->r2 = S32(U32(ctx->r2) >> 12);
    // 0x8003747C: addiu       $v0, $v0, 0x78
    ctx->r2 = ADD32(ctx->r2, 0X78);
    // 0x80037480: sh          $v0, 0xA($a1)
    MEM_H(0XA, ctx->r5) = ctx->r2;
    // 0x80037484: andi        $v0, $s0, 0x1F
    ctx->r2 = ctx->r16 & 0X1F;
    // 0x80037488: sll         $a2, $v0, 2
    ctx->r6 = S32(ctx->r2 << 2);
    // 0x8003748C: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80037490: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80037494: lh          $v0, -0x5690($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X5690);
    // 0x80037498: mult        $v0, $s1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003749C: mflo        $v0
    ctx->r2 = lo;
    // 0x800374A0: srl         $v0, $v0, 12
    ctx->r2 = S32(U32(ctx->r2) >> 12);
    // 0x800374A4: addiu       $v0, $v0, 0xA0
    ctx->r2 = ADD32(ctx->r2, 0XA0);
    // 0x800374A8: sh          $v0, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r2;
    // 0x800374AC: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x800374B0: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x800374B4: lh          $v0, -0x568E($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X568E);
    // 0x800374B8: mult        $v0, $s1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800374BC: mflo        $v0
    ctx->r2 = lo;
    // 0x800374C0: srl         $v0, $v0, 12
    ctx->r2 = S32(U32(ctx->r2) >> 12);
    // 0x800374C4: addiu       $v0, $v0, 0x78
    ctx->r2 = ADD32(ctx->r2, 0X78);
    // 0x800374C8: sh          $v0, 0x12($a1)
    MEM_H(0X12, ctx->r5) = ctx->r2;
    // 0x800374CC: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x800374D0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x800374D4: lh          $v0, -0x5690($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X5690);
    // 0x800374D8: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x800374DC: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x800374E0: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x800374E4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x800374E8: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x800374EC: bltzl       $v0, L_800374F4
    if (SIGNED(ctx->r2) < 0) {
        // 0x800374F0: addiu       $v0, $v0, 0xFFF
        ctx->r2 = ADD32(ctx->r2, 0XFFF);
            goto L_800374F4;
    }
    goto skip_0;
    // 0x800374F0: addiu       $v0, $v0, 0xFFF
    ctx->r2 = ADD32(ctx->r2, 0XFFF);
    skip_0:
L_800374F4:
    // 0x800374F4: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x800374F8: addiu       $v0, $v0, 0xA0
    ctx->r2 = ADD32(ctx->r2, 0XA0);
    // 0x800374FC: sh          $v0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r2;
    // 0x80037500: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80037504: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80037508: lh          $v0, -0x568E($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X568E);
    // 0x8003750C: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x80037510: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80037514: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x80037518: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8003751C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80037520: bltzl       $v0, L_80037528
    if (SIGNED(ctx->r2) < 0) {
        // 0x80037524: addiu       $v0, $v0, 0xFFF
        ctx->r2 = ADD32(ctx->r2, 0XFFF);
            goto L_80037528;
    }
    goto skip_1;
    // 0x80037524: addiu       $v0, $v0, 0xFFF
    ctx->r2 = ADD32(ctx->r2, 0XFFF);
    skip_1:
L_80037528:
    // 0x80037528: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x8003752C: addiu       $v0, $v0, 0x78
    ctx->r2 = ADD32(ctx->r2, 0X78);
    // 0x80037530: sh          $v0, 0x1A($a1)
    MEM_H(0X1A, ctx->r5) = ctx->r2;
    // 0x80037534: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80037538: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8003753C: lh          $v0, -0x5690($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X5690);
    // 0x80037540: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x80037544: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80037548: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x8003754C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80037550: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80037554: bltzl       $v0, L_8003755C
    if (SIGNED(ctx->r2) < 0) {
        // 0x80037558: addiu       $v0, $v0, 0xFFF
        ctx->r2 = ADD32(ctx->r2, 0XFFF);
            goto L_8003755C;
    }
    goto skip_2;
    // 0x80037558: addiu       $v0, $v0, 0xFFF
    ctx->r2 = ADD32(ctx->r2, 0XFFF);
    skip_2:
L_8003755C:
    // 0x8003755C: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80037560: addiu       $v0, $v0, 0xA0
    ctx->r2 = ADD32(ctx->r2, 0XA0);
    // 0x80037564: sh          $v0, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r2;
    // 0x80037568: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8003756C: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80037570: lh          $v0, -0x568E($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X568E);
    // 0x80037574: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x80037578: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8003757C: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x80037580: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80037584: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80037588: bltzl       $v0, L_80037590
    if (SIGNED(ctx->r2) < 0) {
        // 0x8003758C: addiu       $v0, $v0, 0xFFF
        ctx->r2 = ADD32(ctx->r2, 0XFFF);
            goto L_80037590;
    }
    goto skip_3;
    // 0x8003758C: addiu       $v0, $v0, 0xFFF
    ctx->r2 = ADD32(ctx->r2, 0XFFF);
    skip_3:
L_80037590:
    // 0x80037590: addu        $s2, $s0, $zero
    ctx->r18 = ADD32(ctx->r16, 0);
    // 0x80037594: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80037598: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x8003759C: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x800375A0: addiu       $v0, $v0, 0x78
    ctx->r2 = ADD32(ctx->r2, 0X78);
    // 0x800375A4: sh          $v0, 0x22($a1)
    MEM_H(0X22, ctx->r5) = ctx->r2;
    // 0x800375A8: jal         0x8002FD30
    // 0x800375AC: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    func_8002FD30_B130(rdram, ctx);
        goto after_5;
    // 0x800375AC: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    after_5:
    // 0x800375B0: slti        $v0, $s2, 0x20
    ctx->r2 = SIGNED(ctx->r18) < 0X20 ? 1 : 0;
    // 0x800375B4: bne         $v0, $zero, L_8003740C
    if (ctx->r2 != 0) {
        // 0x800375B8: sll         $v0, $s2, 3
        ctx->r2 = S32(ctx->r18 << 3);
            goto L_8003740C;
    }
    // 0x800375B8: sll         $v0, $s2, 3
    ctx->r2 = S32(ctx->r18 << 3);
    // 0x800375BC: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x800375C0: addiu       $a3, $s1, -0x20
    ctx->r7 = ADD32(ctx->r17, -0X20);
L_800375C4:
    // 0x800375C4: nor         $v1, $zero, $a3
    ctx->r3 = ~(0 | ctx->r7);
    // 0x800375C8: sll         $v0, $s2, 3
    ctx->r2 = S32(ctx->r18 << 3);
    // 0x800375CC: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x800375D0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800375D4: addu        $a1, $s3, $v0
    ctx->r5 = ADD32(ctx->r19, ctx->r2);
    // 0x800375D8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x800375DC: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x800375E0: addiu       $v0, $zero, 0xC0
    ctx->r2 = ADD32(0, 0XC0);
    // 0x800375E4: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x800375E8: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x800375EC: sll         $a2, $s2, 2
    ctx->r6 = S32(ctx->r18 << 2);
    // 0x800375F0: sw          $v0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r2;
    // 0x800375F4: sw          $zero, 0x14($a1)
    MEM_W(0X14, ctx->r5) = 0;
    // 0x800375F8: sw          $zero, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = 0;
    // 0x800375FC: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80037600: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80037604: lh          $v0, -0x5690($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X5690);
    // 0x80037608: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x8003760C: and         $v1, $a3, $v1
    ctx->r3 = ctx->r7 & ctx->r3;
    // 0x80037610: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80037614: mflo        $v0
    ctx->r2 = lo;
    // 0x80037618: nop

    // 0x8003761C: nop

    // 0x80037620: bgez        $v0, L_8003762C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80037624: addu        $a3, $v1, $zero
        ctx->r7 = ADD32(ctx->r3, 0);
            goto L_8003762C;
    }
    // 0x80037624: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
    // 0x80037628: addiu       $v0, $v0, 0xFFF
    ctx->r2 = ADD32(ctx->r2, 0XFFF);
L_8003762C:
    // 0x8003762C: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80037630: addiu       $v0, $v0, 0xA0
    ctx->r2 = ADD32(ctx->r2, 0XA0);
    // 0x80037634: sh          $v0, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r2;
    // 0x80037638: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8003763C: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80037640: lh          $v0, -0x568E($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X568E);
    // 0x80037644: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80037648: mflo        $v0
    ctx->r2 = lo;
    // 0x8003764C: nop

    // 0x80037650: nop

    // 0x80037654: bltzl       $v0, L_8003765C
    if (SIGNED(ctx->r2) < 0) {
        // 0x80037658: addiu       $v0, $v0, 0xFFF
        ctx->r2 = ADD32(ctx->r2, 0XFFF);
            goto L_8003765C;
    }
    goto skip_4;
    // 0x80037658: addiu       $v0, $v0, 0xFFF
    ctx->r2 = ADD32(ctx->r2, 0XFFF);
    skip_4:
L_8003765C:
    // 0x8003765C: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80037660: addiu       $v0, $v0, 0x78
    ctx->r2 = ADD32(ctx->r2, 0X78);
    // 0x80037664: addiu       $s0, $s2, 0x1
    ctx->r16 = ADD32(ctx->r18, 0X1);
    // 0x80037668: sh          $v0, 0xA($a1)
    MEM_H(0XA, ctx->r5) = ctx->r2;
    // 0x8003766C: andi        $v0, $s0, 0x1F
    ctx->r2 = ctx->r16 & 0X1F;
    // 0x80037670: sll         $a0, $v0, 2
    ctx->r4 = S32(ctx->r2 << 2);
    // 0x80037674: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80037678: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8003767C: lh          $v0, -0x5690($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X5690);
    // 0x80037680: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80037684: mflo        $v0
    ctx->r2 = lo;
    // 0x80037688: nop

    // 0x8003768C: nop

    // 0x80037690: bltzl       $v0, L_80037698
    if (SIGNED(ctx->r2) < 0) {
        // 0x80037694: addiu       $v0, $v0, 0xFFF
        ctx->r2 = ADD32(ctx->r2, 0XFFF);
            goto L_80037698;
    }
    goto skip_5;
    // 0x80037694: addiu       $v0, $v0, 0xFFF
    ctx->r2 = ADD32(ctx->r2, 0XFFF);
    skip_5:
L_80037698:
    // 0x80037698: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x8003769C: addiu       $v0, $v0, 0xA0
    ctx->r2 = ADD32(ctx->r2, 0XA0);
    // 0x800376A0: sh          $v0, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r2;
    // 0x800376A4: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x800376A8: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x800376AC: lh          $v0, -0x568E($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X568E);
    // 0x800376B0: mult        $v0, $a3
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800376B4: mflo        $v0
    ctx->r2 = lo;
    // 0x800376B8: nop

    // 0x800376BC: nop

    // 0x800376C0: bltzl       $v0, L_800376C8
    if (SIGNED(ctx->r2) < 0) {
        // 0x800376C4: addiu       $v0, $v0, 0xFFF
        ctx->r2 = ADD32(ctx->r2, 0XFFF);
            goto L_800376C8;
    }
    goto skip_6;
    // 0x800376C4: addiu       $v0, $v0, 0xFFF
    ctx->r2 = ADD32(ctx->r2, 0XFFF);
    skip_6:
L_800376C8:
    // 0x800376C8: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x800376CC: addiu       $v0, $v0, 0x78
    ctx->r2 = ADD32(ctx->r2, 0X78);
    // 0x800376D0: sh          $v0, 0x12($a1)
    MEM_H(0X12, ctx->r5) = ctx->r2;
    // 0x800376D4: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x800376D8: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x800376DC: lh          $v0, -0x5690($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X5690);
    // 0x800376E0: mult        $v0, $s1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800376E4: mflo        $v0
    ctx->r2 = lo;
    // 0x800376E8: srl         $v0, $v0, 12
    ctx->r2 = S32(U32(ctx->r2) >> 12);
    // 0x800376EC: addiu       $v0, $v0, 0xA0
    ctx->r2 = ADD32(ctx->r2, 0XA0);
    // 0x800376F0: sh          $v0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r2;
    // 0x800376F4: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x800376F8: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x800376FC: lh          $v0, -0x568E($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X568E);
    // 0x80037700: mult        $v0, $s1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80037704: mflo        $v0
    ctx->r2 = lo;
    // 0x80037708: srl         $v0, $v0, 12
    ctx->r2 = S32(U32(ctx->r2) >> 12);
    // 0x8003770C: addiu       $v0, $v0, 0x78
    ctx->r2 = ADD32(ctx->r2, 0X78);
    // 0x80037710: sh          $v0, 0x1A($a1)
    MEM_H(0X1A, ctx->r5) = ctx->r2;
    // 0x80037714: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80037718: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8003771C: lh          $v0, -0x5690($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X5690);
    // 0x80037720: mult        $v0, $s1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80037724: mflo        $v0
    ctx->r2 = lo;
    // 0x80037728: srl         $v0, $v0, 12
    ctx->r2 = S32(U32(ctx->r2) >> 12);
    // 0x8003772C: addiu       $v0, $v0, 0xA0
    ctx->r2 = ADD32(ctx->r2, 0XA0);
    // 0x80037730: sh          $v0, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r2;
    // 0x80037734: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80037738: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8003773C: lh          $v0, -0x568E($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X568E);
    // 0x80037740: mult        $v0, $s1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80037744: mflo        $v0
    ctx->r2 = lo;
    // 0x80037748: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8003774C: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x80037750: addu        $s2, $s0, $zero
    ctx->r18 = ADD32(ctx->r16, 0);
    // 0x80037754: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    // 0x80037758: srl         $v0, $v0, 12
    ctx->r2 = S32(U32(ctx->r2) >> 12);
    // 0x8003775C: addiu       $v0, $v0, 0x78
    ctx->r2 = ADD32(ctx->r2, 0X78);
    // 0x80037760: jal         0x8002FD30
    // 0x80037764: sh          $v0, 0x22($a1)
    MEM_H(0X22, ctx->r5) = ctx->r2;
    func_8002FD30_B130(rdram, ctx);
        goto after_6;
    // 0x80037764: sh          $v0, 0x22($a1)
    MEM_H(0X22, ctx->r5) = ctx->r2;
    after_6:
    // 0x80037768: slti        $v0, $s2, 0x20
    ctx->r2 = SIGNED(ctx->r18) < 0X20 ? 1 : 0;
    // 0x8003776C: bne         $v0, $zero, L_800375C4
    if (ctx->r2 != 0) {
        // 0x80037770: addiu       $a3, $s1, -0x20
        ctx->r7 = ADD32(ctx->r17, -0X20);
            goto L_800375C4;
    }
    // 0x80037770: addiu       $a3, $s1, -0x20
    ctx->r7 = ADD32(ctx->r17, -0X20);
    // 0x80037774: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80037778: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8003777C: lbu         $v0, -0x2348($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X2348);
    // 0x80037780: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80037784: addiu       $a3, $zero, 0x140
    ctx->r7 = ADD32(0, 0X140);
    // 0x80037788: lui         $s0, 0x8018
    ctx->r16 = S32(0X8018 << 16);
    // 0x8003778C: addiu       $s0, $s0, -0x5610
    ctx->r16 = ADD32(ctx->r16, -0X5610);
    // 0x80037790: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80037794: sll         $a0, $v0, 1
    ctx->r4 = S32(ctx->r2 << 1);
    // 0x80037798: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8003779C: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x800377A0: jal         0x8003055C
    // 0x800377A4: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    func_8003055C_B95C(rdram, ctx);
        goto after_7;
    // 0x800377A4: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    after_7:
    // 0x800377A8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x800377AC: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x800377B0: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x800377B4: lbu         $v0, -0x2348($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X2348);
    // 0x800377B8: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    // 0x800377BC: sll         $a1, $v0, 1
    ctx->r5 = S32(ctx->r2 << 1);
    // 0x800377C0: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x800377C4: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x800377C8: jal         0x8002FD30
    // 0x800377CC: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    func_8002FD30_B130(rdram, ctx);
        goto after_8;
    // 0x800377CC: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    after_8:
L_800377D0:
    // 0x800377D0: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x800377D4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800377D8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800377DC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800377E0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800377E4: jr          $ra
    // 0x800377E8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x800377E8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
