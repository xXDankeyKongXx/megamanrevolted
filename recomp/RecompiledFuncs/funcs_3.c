#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8006205C_3D45C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006205C: lhu         $a1, 0x8($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0X8);
    // 0x80062060: lhu         $v0, 0x12($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X12);
    // 0x80062064: lw          $v1, 0x14($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X14);
    // 0x80062068: lbu         $a2, 0x70($a0)
    ctx->r6 = MEM_BU(ctx->r4, 0X70);
    // 0x8006206C: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x80062070: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80062074: sh          $a1, 0x10($a0)
    MEM_H(0X10, ctx->r4) = ctx->r5;
    // 0x80062078: sh          $v0, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r2;
    // 0x8006207C: sb          $a2, 0x3E($a0)
    MEM_B(0X3E, ctx->r4) = ctx->r6;
    // 0x80062080: jr          $ra
    // 0x80062084: sw          $v1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x80062084: sw          $v1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r3;
;}
RECOMP_FUNC void func_800941CC_6F5CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800941CC: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x800941D0: lw          $v0, -0x2368($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2368);
    // 0x800941D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800941D8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x800941DC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x800941E0: bne         $v0, $zero, L_80094290
    if (ctx->r2 != 0) {
        // 0x800941E4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80094290;
    }
    // 0x800941E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800941E8: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x800941EC: addiu       $a0, $a0, 0x5430
    ctx->r4 = ADD32(ctx->r4, 0X5430);
    // 0x800941F0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x800941F4: jal         0x8009A5E0
    // 0x800941F8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x800941F8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x800941FC: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80094200: jal         0x800996C0
    // 0x80094204: addiu       $a0, $a0, 0x58F8
    ctx->r4 = ADD32(ctx->r4, 0X58F8);
    osContStartReadData_recomp(rdram, ctx);
        goto after_1;
    // 0x80094204: addiu       $a0, $a0, 0x58F8
    ctx->r4 = ADD32(ctx->r4, 0X58F8);
    after_1:
    // 0x80094208: bne         $v0, $zero, L_80094264
    if (ctx->r2 != 0) {
        // 0x8009420C: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_80094264;
    }
    // 0x8009420C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80094210: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80094214: addiu       $a0, $a0, 0x58F8
    ctx->r4 = ADD32(ctx->r4, 0X58F8);
    // 0x80094218: jal         0x8009A5E0
    // 0x8009421C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x8009421C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x80094220: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80094224: lw          $v0, -0x2368($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2368);
    // 0x80094228: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8009422C: bne         $v0, $zero, L_80094264
    if (ctx->r2 != 0) {
        // 0x80094230: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_80094264;
    }
    // 0x80094230: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80094234: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80094238: addiu       $a0, $a0, -0x2658
    ctx->r4 = ADD32(ctx->r4, -0X2658);
    // 0x8009423C: jal         0x8009A710
    // 0x80094240: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x80094240: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x80094244: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80094248: jal         0x80099748
    // 0x8009424C: addiu       $a0, $a0, -0x38C8
    ctx->r4 = ADD32(ctx->r4, -0X38C8);
    osContGetReadData_recomp(rdram, ctx);
        goto after_4;
    // 0x8009424C: addiu       $a0, $a0, -0x38C8
    ctx->r4 = ADD32(ctx->r4, -0X38C8);
    after_4:
    // 0x80094250: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80094254: addiu       $a0, $a0, -0x2658
    ctx->r4 = ADD32(ctx->r4, -0X2658);
    // 0x80094258: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8009425C: jal         0x8009A5E0
    // 0x80094260: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_5;
    // 0x80094260: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
L_80094264:
    // 0x80094264: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80094268: lw          $v0, -0xE10($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XE10);
    // 0x8009426C: beq         $v0, $zero, L_8009427C
    if (ctx->r2 == 0) {
        // 0x80094270: nop
    
            goto L_8009427C;
    }
    // 0x80094270: nop

    // 0x80094274: jalr        $v0
    // 0x80094278: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_6;
    // 0x80094278: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    after_6:
L_8009427C:
    // 0x8009427C: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x80094280: addiu       $a0, $a0, 0x5430
    ctx->r4 = ADD32(ctx->r4, 0X5430);
    // 0x80094284: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80094288: jal         0x8009A710
    // 0x8009428C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    osSendMesg_recomp(rdram, ctx);
        goto after_7;
    // 0x8009428C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
L_80094290:
    // 0x80094290: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80094294: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80094298: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8009429C: jr          $ra
    // 0x800942A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x800942A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80031270_C670(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80031270: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80031274: addu        $t0, $a1, $zero
    ctx->r8 = ADD32(ctx->r5, 0);
    // 0x80031278: addu        $t1, $a2, $zero
    ctx->r9 = ADD32(ctx->r6, 0);
    // 0x8003127C: bne         $t0, $t1, L_8003135C
    if (ctx->r8 != ctx->r9) {
        // 0x80031280: addu        $a3, $a0, $zero
        ctx->r7 = ADD32(ctx->r4, 0);
            goto L_8003135C;
    }
    // 0x80031280: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x80031284: lh          $a2, 0x0($a3)
    ctx->r6 = MEM_H(ctx->r7, 0X0);
    // 0x80031288: lh          $v0, 0x0($t1)
    ctx->r2 = MEM_H(ctx->r9, 0X0);
    // 0x8003128C: mult        $a2, $v0
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80031290: mflo        $a2
    ctx->r6 = lo;
    // 0x80031294: lh          $a0, 0x2($a3)
    ctx->r4 = MEM_H(ctx->r7, 0X2);
    // 0x80031298: lh          $v0, 0x2($t1)
    ctx->r2 = MEM_H(ctx->r9, 0X2);
    // 0x8003129C: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800312A0: mflo        $a0
    ctx->r4 = lo;
    // 0x800312A4: lh          $v1, 0x4($t1)
    ctx->r3 = MEM_H(ctx->r9, 0X4);
    // 0x800312A8: lh          $v0, 0x4($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X4);
    // 0x800312AC: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800312B0: mflo        $v0
    ctx->r2 = lo;
    // 0x800312B4: addu        $a2, $a2, $a0
    ctx->r6 = ADD32(ctx->r6, ctx->r4);
    // 0x800312B8: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x800312BC: sra         $a2, $a2, 12
    ctx->r6 = S32(SIGNED(ctx->r6) >> 12);
    // 0x800312C0: sh          $a2, 0x0($sp)
    MEM_H(0X0, ctx->r29) = ctx->r6;
    // 0x800312C4: lh          $v0, 0x6($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X6);
    // 0x800312C8: lh          $v1, 0x0($t1)
    ctx->r3 = MEM_H(ctx->r9, 0X0);
    // 0x800312CC: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800312D0: mflo        $v0
    ctx->r2 = lo;
    // 0x800312D4: lh          $a1, 0x8($a3)
    ctx->r5 = MEM_H(ctx->r7, 0X8);
    // 0x800312D8: lh          $v1, 0x2($t1)
    ctx->r3 = MEM_H(ctx->r9, 0X2);
    // 0x800312DC: mult        $a1, $v1
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800312E0: mflo        $a1
    ctx->r5 = lo;
    // 0x800312E4: lh          $a0, 0x4($t1)
    ctx->r4 = MEM_H(ctx->r9, 0X4);
    // 0x800312E8: lh          $v1, 0xA($a3)
    ctx->r3 = MEM_H(ctx->r7, 0XA);
    // 0x800312EC: mult        $v1, $a0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800312F0: mflo        $v1
    ctx->r3 = lo;
    // 0x800312F4: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x800312F8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800312FC: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80031300: sh          $v0, 0x2($sp)
    MEM_H(0X2, ctx->r29) = ctx->r2;
    // 0x80031304: lh          $v0, 0xC($a3)
    ctx->r2 = MEM_H(ctx->r7, 0XC);
    // 0x80031308: lh          $v1, 0x0($t1)
    ctx->r3 = MEM_H(ctx->r9, 0X0);
    // 0x8003130C: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80031310: mflo        $v0
    ctx->r2 = lo;
    // 0x80031314: lh          $a1, 0xE($a3)
    ctx->r5 = MEM_H(ctx->r7, 0XE);
    // 0x80031318: lh          $v1, 0x2($t1)
    ctx->r3 = MEM_H(ctx->r9, 0X2);
    // 0x8003131C: mult        $a1, $v1
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80031320: mflo        $a1
    ctx->r5 = lo;
    // 0x80031324: lh          $a0, 0x4($t1)
    ctx->r4 = MEM_H(ctx->r9, 0X4);
    // 0x80031328: lh          $v1, 0x10($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X10);
    // 0x8003132C: mult        $v1, $a0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80031330: mflo        $v1
    ctx->r3 = lo;
    // 0x80031334: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80031338: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8003133C: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80031340: sh          $v0, 0x4($sp)
    MEM_H(0X4, ctx->r29) = ctx->r2;
    // 0x80031344: sh          $a2, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r6;
    // 0x80031348: lhu         $v0, 0x2($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X2);
    // 0x8003134C: sh          $v0, 0x2($t1)
    MEM_H(0X2, ctx->r9) = ctx->r2;
    // 0x80031350: lhu         $v0, 0x4($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X4);
    // 0x80031354: j           L_8003141C
    // 0x80031358: sh          $v0, 0x4($t1)
    MEM_H(0X4, ctx->r9) = ctx->r2;
        goto L_8003141C;
    // 0x80031358: sh          $v0, 0x4($t1)
    MEM_H(0X4, ctx->r9) = ctx->r2;
L_8003135C:
    // 0x8003135C: lh          $v0, 0x0($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X0);
    // 0x80031360: lh          $v1, 0x0($t0)
    ctx->r3 = MEM_H(ctx->r8, 0X0);
    // 0x80031364: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80031368: mflo        $v0
    ctx->r2 = lo;
    // 0x8003136C: lh          $a1, 0x2($a3)
    ctx->r5 = MEM_H(ctx->r7, 0X2);
    // 0x80031370: lh          $v1, 0x2($t0)
    ctx->r3 = MEM_H(ctx->r8, 0X2);
    // 0x80031374: mult        $a1, $v1
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80031378: mflo        $a1
    ctx->r5 = lo;
    // 0x8003137C: lh          $a0, 0x4($t0)
    ctx->r4 = MEM_H(ctx->r8, 0X4);
    // 0x80031380: lh          $v1, 0x4($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X4);
    // 0x80031384: mult        $v1, $a0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80031388: mflo        $v1
    ctx->r3 = lo;
    // 0x8003138C: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80031390: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80031394: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80031398: sh          $v0, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r2;
    // 0x8003139C: lh          $v0, 0x6($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X6);
    // 0x800313A0: lh          $v1, 0x0($t0)
    ctx->r3 = MEM_H(ctx->r8, 0X0);
    // 0x800313A4: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800313A8: mflo        $v0
    ctx->r2 = lo;
    // 0x800313AC: lh          $a1, 0x8($a3)
    ctx->r5 = MEM_H(ctx->r7, 0X8);
    // 0x800313B0: lh          $v1, 0x2($t0)
    ctx->r3 = MEM_H(ctx->r8, 0X2);
    // 0x800313B4: mult        $a1, $v1
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800313B8: mflo        $a1
    ctx->r5 = lo;
    // 0x800313BC: lh          $a0, 0x4($t0)
    ctx->r4 = MEM_H(ctx->r8, 0X4);
    // 0x800313C0: lh          $v1, 0xA($a3)
    ctx->r3 = MEM_H(ctx->r7, 0XA);
    // 0x800313C4: mult        $v1, $a0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800313C8: mflo        $v1
    ctx->r3 = lo;
    // 0x800313CC: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x800313D0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800313D4: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x800313D8: sh          $v0, 0x2($t1)
    MEM_H(0X2, ctx->r9) = ctx->r2;
    // 0x800313DC: lh          $v0, 0xC($a3)
    ctx->r2 = MEM_H(ctx->r7, 0XC);
    // 0x800313E0: lh          $v1, 0x0($t0)
    ctx->r3 = MEM_H(ctx->r8, 0X0);
    // 0x800313E4: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800313E8: mflo        $v0
    ctx->r2 = lo;
    // 0x800313EC: lh          $a1, 0xE($a3)
    ctx->r5 = MEM_H(ctx->r7, 0XE);
    // 0x800313F0: lh          $v1, 0x2($t0)
    ctx->r3 = MEM_H(ctx->r8, 0X2);
    // 0x800313F4: mult        $a1, $v1
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800313F8: mflo        $a1
    ctx->r5 = lo;
    // 0x800313FC: lh          $a0, 0x4($t0)
    ctx->r4 = MEM_H(ctx->r8, 0X4);
    // 0x80031400: lh          $v1, 0x10($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X10);
    // 0x80031404: mult        $v1, $a0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80031408: mflo        $v1
    ctx->r3 = lo;
    // 0x8003140C: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80031410: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80031414: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80031418: sh          $v0, 0x4($t1)
    MEM_H(0X4, ctx->r9) = ctx->r2;
L_8003141C:
    // 0x8003141C: addu        $v0, $t1, $zero
    ctx->r2 = ADD32(ctx->r9, 0);
    // 0x80031420: jr          $ra
    // 0x80031424: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x80031424: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80043E14_1F214(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80043E14: lhu         $a3, 0x0($a0)
    ctx->r7 = MEM_HU(ctx->r4, 0X0);
    // 0x80043E18: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x80043E1C: lhu         $v0, -0x26B4($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X26B4);
    // 0x80043E20: lhu         $a2, 0x2($a0)
    ctx->r6 = MEM_HU(ctx->r4, 0X2);
    // 0x80043E24: lhu         $a1, 0x4($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0X4);
    // 0x80043E28: lhu         $v1, 0x6($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X6);
    // 0x80043E2C: subu        $a3, $a3, $v0
    ctx->r7 = SUB32(ctx->r7, ctx->r2);
    // 0x80043E30: sh          $a3, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r7;
    // 0x80043E34: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x80043E38: lhu         $v0, -0x26B6($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X26B6);
    // 0x80043E3C: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x80043E40: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    // 0x80043E44: subu        $a2, $a2, $v0
    ctx->r6 = SUB32(ctx->r6, ctx->r2);
    // 0x80043E48: sh          $a2, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r6;
    // 0x80043E4C: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x80043E50: lhu         $v0, -0x26B0($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X26B0);
    // 0x80043E54: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x80043E58: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80043E5C: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x80043E60: sh          $a1, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r5;
    // 0x80043E64: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x80043E68: lhu         $v0, -0x26B2($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X26B2);
    // 0x80043E6C: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80043E70: sra         $t2, $a1, 16
    ctx->r10 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80043E74: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80043E78: sh          $v1, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r3;
    // 0x80043E7C: lui         $t3, 0x801E
    ctx->r11 = S32(0X801E << 16);
    // 0x80043E80: lh          $t3, -0x7158($t3)
    ctx->r11 = MEM_H(ctx->r11, -0X7158);
    // 0x80043E84: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80043E88: slt         $v0, $a3, $t3
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80043E8C: beq         $v0, $zero, L_80043F84
    if (ctx->r2 == 0) {
        // 0x80043E90: sra         $t1, $v1, 16
        ctx->r9 = S32(SIGNED(ctx->r3) >> 16);
            goto L_80043F84;
    }
    // 0x80043E90: sra         $t1, $v1, 16
    ctx->r9 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80043E94: slt         $v0, $t3, $a2
    ctx->r2 = SIGNED(ctx->r11) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80043E98: beq         $v0, $zero, L_80043F88
    if (ctx->r2 == 0) {
        // 0x80043E9C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80043F88;
    }
    // 0x80043E9C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80043EA0: lui         $t0, 0x801E
    ctx->r8 = S32(0X801E << 16);
    // 0x80043EA4: lh          $t0, -0x7154($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X7154);
    // 0x80043EA8: slt         $v0, $t2, $t0
    ctx->r2 = SIGNED(ctx->r10) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80043EAC: beq         $v0, $zero, L_80043F84
    if (ctx->r2 == 0) {
        // 0x80043EB0: slt         $v0, $t0, $t1
        ctx->r2 = SIGNED(ctx->r8) < SIGNED(ctx->r9) ? 1 : 0;
            goto L_80043F84;
    }
    // 0x80043EB0: slt         $v0, $t0, $t1
    ctx->r2 = SIGNED(ctx->r8) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80043EB4: beq         $v0, $zero, L_80043F84
    if (ctx->r2 == 0) {
        // 0x80043EB8: subu        $a0, $t0, $t2
        ctx->r4 = SUB32(ctx->r8, ctx->r10);
            goto L_80043F84;
    }
    // 0x80043EB8: subu        $a0, $t0, $t2
    ctx->r4 = SUB32(ctx->r8, ctx->r10);
    // 0x80043EBC: subu        $a1, $a2, $a3
    ctx->r5 = SUB32(ctx->r6, ctx->r7);
    // 0x80043EC0: mult        $a0, $a1
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80043EC4: mflo        $a0
    ctx->r4 = lo;
    // 0x80043EC8: subu        $v1, $t1, $t2
    ctx->r3 = SUB32(ctx->r9, ctx->r10);
    // 0x80043ECC: nop

    // 0x80043ED0: div         $zero, $a0, $v1
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r3)));
    // 0x80043ED4: bne         $v1, $zero, L_80043EE0
    if (ctx->r3 != 0) {
        // 0x80043ED8: nop
    
            goto L_80043EE0;
    }
    // 0x80043ED8: nop

    // 0x80043EDC: break       7
    do_break(2147761884);
L_80043EE0:
    // 0x80043EE0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80043EE4: bne         $v1, $at, L_80043EF8
    if (ctx->r3 != ctx->r1) {
        // 0x80043EE8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80043EF8;
    }
    // 0x80043EE8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80043EEC: bne         $a0, $at, L_80043EF8
    if (ctx->r4 != ctx->r1) {
        // 0x80043EF0: nop
    
            goto L_80043EF8;
    }
    // 0x80043EF0: nop

    // 0x80043EF4: break       6
    do_break(2147761908);
L_80043EF8:
    // 0x80043EF8: mflo        $a0
    ctx->r4 = lo;
    // 0x80043EFC: subu        $v0, $t1, $t0
    ctx->r2 = SUB32(ctx->r9, ctx->r8);
    // 0x80043F00: nop

    // 0x80043F04: mult        $v0, $a1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80043F08: mflo        $v0
    ctx->r2 = lo;
    // 0x80043F0C: nop

    // 0x80043F10: nop

    // 0x80043F14: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x80043F18: bne         $v1, $zero, L_80043F24
    if (ctx->r3 != 0) {
        // 0x80043F1C: nop
    
            goto L_80043F24;
    }
    // 0x80043F1C: nop

    // 0x80043F20: break       7
    do_break(2147761952);
L_80043F24:
    // 0x80043F24: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80043F28: bne         $v1, $at, L_80043F3C
    if (ctx->r3 != ctx->r1) {
        // 0x80043F2C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80043F3C;
    }
    // 0x80043F2C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80043F30: bne         $v0, $at, L_80043F3C
    if (ctx->r2 != ctx->r1) {
        // 0x80043F34: nop
    
            goto L_80043F3C;
    }
    // 0x80043F34: nop

    // 0x80043F38: break       6
    do_break(2147761976);
L_80043F3C:
    // 0x80043F3C: mflo        $v0
    ctx->r2 = lo;
    // 0x80043F40: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80043F44: sh          $a3, -0x3FAC($at)
    MEM_H(-0X3FAC, ctx->r1) = ctx->r7;
    // 0x80043F48: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80043F4C: sh          $a2, -0x72D0($at)
    MEM_H(-0X72D0, ctx->r1) = ctx->r6;
    // 0x80043F50: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80043F54: sh          $t2, -0x3FA8($at)
    MEM_H(-0X3FA8, ctx->r1) = ctx->r10;
    // 0x80043F58: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80043F5C: sh          $t1, -0x72CC($at)
    MEM_H(-0X72CC, ctx->r1) = ctx->r9;
    // 0x80043F60: addu        $a0, $a3, $a0
    ctx->r4 = ADD32(ctx->r7, ctx->r4);
    // 0x80043F64: slt         $a0, $t3, $a0
    ctx->r4 = SIGNED(ctx->r11) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80043F68: addu        $v0, $a3, $v0
    ctx->r2 = ADD32(ctx->r7, ctx->r2);
    // 0x80043F6C: slt         $v0, $t3, $v0
    ctx->r2 = SIGNED(ctx->r11) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80043F70: beq         $v0, $zero, L_80043F7C
    if (ctx->r2 == 0) {
        // 0x80043F74: sll         $a0, $a0, 1
        ctx->r4 = S32(ctx->r4 << 1);
            goto L_80043F7C;
    }
    // 0x80043F74: sll         $a0, $a0, 1
    ctx->r4 = S32(ctx->r4 << 1);
    // 0x80043F78: ori         $a0, $a0, 0x1
    ctx->r4 = ctx->r4 | 0X1;
L_80043F7C:
    // 0x80043F7C: j           L_80043F88
    // 0x80043F80: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
        goto L_80043F88;
    // 0x80043F80: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
L_80043F84:
    // 0x80043F84: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80043F88:
    // 0x80043F88: jr          $ra
    // 0x80043F8C: nop

    TRACE_RETURN()
    return;
    // 0x80043F8C: nop

;}
RECOMP_FUNC void func_80032664_DA64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80032664: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80032668: sltiu       $v0, $a1, 0x1
    ctx->r2 = ctx->r5 < 0X1 ? 1 : 0;
    // 0x8003266C: sltiu       $v1, $a0, 0x1
    ctx->r3 = ctx->r4 < 0X1 ? 1 : 0;
    // 0x80032670: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80032674: bne         $v0, $zero, L_800328C8
    if (ctx->r2 != 0) {
        // 0x80032678: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_800328C8;
    }
    // 0x80032678: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8003267C: nor         $v1, $zero, $a1
    ctx->r3 = ~(0 | ctx->r5);
    // 0x80032680: srl         $v1, $v1, 31
    ctx->r3 = S32(U32(ctx->r3) >> 31);
    // 0x80032684: nor         $v0, $zero, $a0
    ctx->r2 = ~(0 | ctx->r4);
    // 0x80032688: srl         $v0, $v0, 31
    ctx->r2 = S32(U32(ctx->r2) >> 31);
    // 0x8003268C: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80032690: beq         $v1, $zero, L_8003270C
    if (ctx->r3 == 0) {
        // 0x80032694: slt         $v0, $a0, $a1
        ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
            goto L_8003270C;
    }
    // 0x80032694: slt         $v0, $a0, $a1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80032698: beq         $v0, $zero, L_800326D4
    if (ctx->r2 == 0) {
        // 0x8003269C: addu        $a3, $a1, $zero
        ctx->r7 = ADD32(ctx->r5, 0);
            goto L_800326D4;
    }
    // 0x8003269C: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    // 0x800326A0: addiu       $v0, $zero, 0x280
    ctx->r2 = ADD32(0, 0X280);
    // 0x800326A4: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800326A8: sra         $a2, $a1, 31
    ctx->r6 = S32(SIGNED(ctx->r5) >> 31);
    // 0x800326AC: mfhi        $a0
    ctx->r4 = hi;
    // 0x800326B0: mflo        $a1
    ctx->r5 = lo;
    // 0x800326B4: jal         0x800A3870
    // 0x800326B8: nop

    __divdi3_recomp(rdram, ctx);
        goto after_0;
    // 0x800326B8: nop

    after_0:
    // 0x800326BC: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x800326C0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800326C4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800326C8: lh          $v0, -0x77A0($at)
    ctx->r2 = MEM_H(ctx->r1, -0X77A0);
    // 0x800326CC: j           L_800328CC
    // 0x800326D0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
        goto L_800328CC;
    // 0x800326D0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
L_800326D4:
    // 0x800326D4: addiu       $v0, $zero, 0x280
    ctx->r2 = ADD32(0, 0X280);
    // 0x800326D8: mult        $a1, $v0
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800326DC: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x800326E0: sra         $a2, $a0, 31
    ctx->r6 = S32(SIGNED(ctx->r4) >> 31);
    // 0x800326E4: mfhi        $a0
    ctx->r4 = hi;
    // 0x800326E8: mflo        $a1
    ctx->r5 = lo;
    // 0x800326EC: jal         0x800A3870
    // 0x800326F0: nop

    __divdi3_recomp(rdram, ctx);
        goto after_1;
    // 0x800326F0: nop

    after_1:
    // 0x800326F4: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x800326F8: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x800326FC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80032700: lh          $v1, -0x77A0($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X77A0);
    // 0x80032704: j           L_80032880
    // 0x80032708: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
        goto L_80032880;
    // 0x80032708: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
L_8003270C:
    // 0x8003270C: nor         $v0, $zero, $a0
    ctx->r2 = ~(0 | ctx->r4);
    // 0x80032710: srl         $v0, $v0, 31
    ctx->r2 = S32(U32(ctx->r2) >> 31);
    // 0x80032714: srl         $v1, $a1, 31
    ctx->r3 = S32(U32(ctx->r5) >> 31);
    // 0x80032718: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8003271C: beq         $v0, $zero, L_800327A4
    if (ctx->r2 == 0) {
        // 0x80032720: srl         $a2, $a0, 31
        ctx->r6 = S32(U32(ctx->r4) >> 31);
            goto L_800327A4;
    }
    // 0x80032720: srl         $a2, $a0, 31
    ctx->r6 = S32(U32(ctx->r4) >> 31);
    // 0x80032724: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    // 0x80032728: slt         $v0, $a0, $a1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8003272C: beq         $v0, $zero, L_80032768
    if (ctx->r2 == 0) {
        // 0x80032730: addu        $a3, $a1, $zero
        ctx->r7 = ADD32(ctx->r5, 0);
            goto L_80032768;
    }
    // 0x80032730: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    // 0x80032734: addiu       $v0, $zero, 0x280
    ctx->r2 = ADD32(0, 0X280);
    // 0x80032738: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003273C: sra         $a2, $a1, 31
    ctx->r6 = S32(SIGNED(ctx->r5) >> 31);
    // 0x80032740: mfhi        $a0
    ctx->r4 = hi;
    // 0x80032744: mflo        $a1
    ctx->r5 = lo;
    // 0x80032748: jal         0x800A3870
    // 0x8003274C: nop

    __divdi3_recomp(rdram, ctx);
        goto after_2;
    // 0x8003274C: nop

    after_2:
    // 0x80032750: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80032754: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80032758: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8003275C: lh          $v1, -0x77A0($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X77A0);
    // 0x80032760: j           L_80032880
    // 0x80032764: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
        goto L_80032880;
    // 0x80032764: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
L_80032768:
    // 0x80032768: addiu       $v0, $zero, 0x280
    ctx->r2 = ADD32(0, 0X280);
    // 0x8003276C: mult        $a1, $v0
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80032770: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x80032774: sra         $a2, $a0, 31
    ctx->r6 = S32(SIGNED(ctx->r4) >> 31);
    // 0x80032778: mfhi        $a0
    ctx->r4 = hi;
    // 0x8003277C: mflo        $a1
    ctx->r5 = lo;
    // 0x80032780: jal         0x800A3870
    // 0x80032784: nop

    __divdi3_recomp(rdram, ctx);
        goto after_3;
    // 0x80032784: nop

    after_3:
    // 0x80032788: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8003278C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80032790: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80032794: lh          $v0, -0x77A0($at)
    ctx->r2 = MEM_H(ctx->r1, -0X77A0);
    // 0x80032798: addiu       $v0, $v0, 0x400
    ctx->r2 = ADD32(ctx->r2, 0X400);
    // 0x8003279C: j           L_800328CC
    // 0x800327A0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
        goto L_800328CC;
    // 0x800327A0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
L_800327A4:
    // 0x800327A4: and         $v0, $v1, $a2
    ctx->r2 = ctx->r3 & ctx->r6;
    // 0x800327A8: beq         $v0, $zero, L_80032834
    if (ctx->r2 == 0) {
        // 0x800327AC: nor         $v0, $zero, $a1
        ctx->r2 = ~(0 | ctx->r5);
            goto L_80032834;
    }
    // 0x800327AC: nor         $v0, $zero, $a1
    ctx->r2 = ~(0 | ctx->r5);
    // 0x800327B0: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    // 0x800327B4: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
    // 0x800327B8: slt         $v0, $a0, $a1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x800327BC: beq         $v0, $zero, L_800327FC
    if (ctx->r2 == 0) {
        // 0x800327C0: addu        $a3, $a1, $zero
        ctx->r7 = ADD32(ctx->r5, 0);
            goto L_800327FC;
    }
    // 0x800327C0: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    // 0x800327C4: addiu       $v0, $zero, 0x280
    ctx->r2 = ADD32(0, 0X280);
    // 0x800327C8: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800327CC: sra         $a2, $a1, 31
    ctx->r6 = S32(SIGNED(ctx->r5) >> 31);
    // 0x800327D0: mfhi        $a0
    ctx->r4 = hi;
    // 0x800327D4: mflo        $a1
    ctx->r5 = lo;
    // 0x800327D8: jal         0x800A3870
    // 0x800327DC: nop

    __divdi3_recomp(rdram, ctx);
        goto after_4;
    // 0x800327DC: nop

    after_4:
    // 0x800327E0: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x800327E4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800327E8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800327EC: lh          $v0, -0x77A0($at)
    ctx->r2 = MEM_H(ctx->r1, -0X77A0);
    // 0x800327F0: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x800327F4: j           L_800328CC
    // 0x800327F8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
        goto L_800328CC;
    // 0x800327F8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
L_800327FC:
    // 0x800327FC: addiu       $v0, $zero, 0x280
    ctx->r2 = ADD32(0, 0X280);
    // 0x80032800: mult        $a1, $v0
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80032804: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x80032808: sra         $a2, $a0, 31
    ctx->r6 = S32(SIGNED(ctx->r4) >> 31);
    // 0x8003280C: mfhi        $a0
    ctx->r4 = hi;
    // 0x80032810: mflo        $a1
    ctx->r5 = lo;
    // 0x80032814: jal         0x800A3870
    // 0x80032818: nop

    __divdi3_recomp(rdram, ctx);
        goto after_5;
    // 0x80032818: nop

    after_5:
    // 0x8003281C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80032820: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80032824: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80032828: lh          $v1, -0x77A0($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X77A0);
    // 0x8003282C: j           L_80032880
    // 0x80032830: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
        goto L_80032880;
    // 0x80032830: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
L_80032834:
    // 0x80032834: srl         $v0, $v0, 31
    ctx->r2 = S32(U32(ctx->r2) >> 31);
    // 0x80032838: and         $v0, $v0, $a2
    ctx->r2 = ctx->r2 & ctx->r6;
    // 0x8003283C: beq         $v0, $zero, L_800328C8
    if (ctx->r2 == 0) {
        // 0x80032840: negu        $a0, $a0
        ctx->r4 = SUB32(0, ctx->r4);
            goto L_800328C8;
    }
    // 0x80032840: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
    // 0x80032844: slt         $v0, $a0, $a1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80032848: beq         $v0, $zero, L_8003288C
    if (ctx->r2 == 0) {
        // 0x8003284C: addu        $a3, $a1, $zero
        ctx->r7 = ADD32(ctx->r5, 0);
            goto L_8003288C;
    }
    // 0x8003284C: addu        $a3, $a1, $zero
    ctx->r7 = ADD32(ctx->r5, 0);
    // 0x80032850: addiu       $v0, $zero, 0x280
    ctx->r2 = ADD32(0, 0X280);
    // 0x80032854: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80032858: sra         $a2, $a1, 31
    ctx->r6 = S32(SIGNED(ctx->r5) >> 31);
    // 0x8003285C: mfhi        $a0
    ctx->r4 = hi;
    // 0x80032860: mflo        $a1
    ctx->r5 = lo;
    // 0x80032864: jal         0x800A3870
    // 0x80032868: nop

    __divdi3_recomp(rdram, ctx);
        goto after_6;
    // 0x80032868: nop

    after_6:
    // 0x8003286C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80032870: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80032874: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80032878: lh          $v1, -0x77A0($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X77A0);
    // 0x8003287C: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
L_80032880:
    // 0x80032880: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80032884: j           L_800328CC
    // 0x80032888: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
        goto L_800328CC;
    // 0x80032888: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
L_8003288C:
    // 0x8003288C: addiu       $v0, $zero, 0x280
    ctx->r2 = ADD32(0, 0X280);
    // 0x80032890: mult        $a1, $v0
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80032894: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x80032898: sra         $a2, $a0, 31
    ctx->r6 = S32(SIGNED(ctx->r4) >> 31);
    // 0x8003289C: mfhi        $a0
    ctx->r4 = hi;
    // 0x800328A0: mflo        $a1
    ctx->r5 = lo;
    // 0x800328A4: jal         0x800A3870
    // 0x800328A8: nop

    __divdi3_recomp(rdram, ctx);
        goto after_7;
    // 0x800328A8: nop

    after_7:
    // 0x800328AC: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x800328B0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800328B4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800328B8: lh          $v0, -0x77A0($at)
    ctx->r2 = MEM_H(ctx->r1, -0X77A0);
    // 0x800328BC: addiu       $v0, $v0, 0xC00
    ctx->r2 = ADD32(ctx->r2, 0XC00);
    // 0x800328C0: j           L_800328CC
    // 0x800328C4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
        goto L_800328CC;
    // 0x800328C4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
L_800328C8:
    // 0x800328C8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_800328CC:
    // 0x800328CC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x800328D0: jr          $ra
    // 0x800328D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x800328D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800328D8: nop

    // 0x800328DC: nop

;}
RECOMP_FUNC void func_8004DF38_29338(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004DF38: lh          $v0, 0x0($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X0);
    // 0x8004DF3C: lh          $v1, 0x0($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X0);
    // 0x8004DF40: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8004DF44: mult        $v0, $v0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004DF48: mflo        $a2
    ctx->r6 = lo;
    // 0x8004DF4C: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8004DF50: sw          $v0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r2;
    // 0x8004DF54: lh          $v1, 0x4($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X4);
    // 0x8004DF58: lh          $v0, 0x4($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X4);
    // 0x8004DF5C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8004DF60: mult        $v1, $v1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004DF64: mflo        $v0
    ctx->r2 = lo;
    // 0x8004DF68: sw          $v1, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r3;
    // 0x8004DF6C: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
    // 0x8004DF70: jr          $ra
    // 0x8004DF74: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    TRACE_RETURN()
    return;
    // 0x8004DF74: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_8002FD5C_B15C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002FD5C: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x8002FD60: lbu         $v0, 0x3($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X3);
    // 0x8002FD64: srl         $v1, $v1, 8
    ctx->r3 = S32(U32(ctx->r3) >> 8);
    // 0x8002FD68: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x8002FD6C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8002FD70: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x8002FD74: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x8002FD78: sll         $a1, $a1, 8
    ctx->r5 = S32(ctx->r5 << 8);
    // 0x8002FD7C: or          $v0, $v0, $a1
    ctx->r2 = ctx->r2 | ctx->r5;
    // 0x8002FD80: jr          $ra
    // 0x8002FD84: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x8002FD84: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void alAudioFrame(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8009901C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80099020: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80099024: lui         $s2, 0x800D
    ctx->r18 = S32(0X800D << 16);
    // 0x80099028: lw          $s2, -0xAD0($s2)
    ctx->r18 = MEM_W(ctx->r18, -0XAD0);
    // 0x8009902C: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x80099030: addu        $s7, $a0, $zero
    ctx->r23 = ADD32(ctx->r4, 0);
    // 0x80099034: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x80099038: addu        $fp, $a1, $zero
    ctx->r30 = ADD32(ctx->r5, 0);
    // 0x8009903C: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80099040: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    // 0x80099044: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80099048: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x8009904C: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80099050: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80099054: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80099058: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8009905C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x80099060: addu        $s4, $s7, $zero
    ctx->r20 = ADD32(ctx->r23, 0);
    // 0x80099064: addu        $s5, $a2, $zero
    ctx->r21 = ADD32(ctx->r6, 0);
    // 0x80099068: bne         $v0, $zero, L_80099078
    if (ctx->r2 != 0) {
        // 0x8009906C: sh          $zero, 0x1C($sp)
        MEM_H(0X1C, ctx->r29) = 0;
            goto L_80099078;
    }
    // 0x8009906C: sh          $zero, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = 0;
    // 0x80099070: j           L_80099198
    // 0x80099074: sw          $zero, 0x0($fp)
    MEM_W(0X0, ctx->r30) = 0;
        goto L_80099198;
    // 0x80099074: sw          $zero, 0x0($fp)
    MEM_W(0X0, ctx->r30) = 0;
L_80099078:
    // 0x80099078: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8009907C: jal         0x80099338
    // 0x80099080: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    __nextSampleTime(rdram, ctx);
        goto after_0;
    // 0x80099080: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x80099084: lw          $v1, 0x20($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X20);
    // 0x80099088: sw          $v0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r2;
    // 0x8009908C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80099090: slt         $v0, $v0, $s3
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x80099094: beq         $v0, $zero, L_800990FC
    if (ctx->r2 == 0) {
        // 0x80099098: nop
    
            goto L_800990FC;
    }
    // 0x80099098: nop

    // 0x8009909C: addiu       $s0, $zero, -0x10
    ctx->r16 = ADD32(0, -0X10);
L_800990A0:
    // 0x800990A0: lw          $v0, 0x1C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X1C);
    // 0x800990A4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800990A8: and         $v0, $v0, $s0
    ctx->r2 = ctx->r2 & ctx->r16;
    // 0x800990AC: sw          $v0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r2;
    // 0x800990B0: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x800990B4: jalr        $v0
    // 0x800990B8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x800990B8: nop

    after_1:
    // 0x800990BC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x800990C0: jal         0x800992A4
    // 0x800990C4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    _timeToSamplesNoRound(rdram, ctx);
        goto after_2;
    // 0x800990C4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_2:
    // 0x800990C8: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x800990CC: lw          $v1, 0x10($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X10);
    // 0x800990D0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x800990D4: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x800990D8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x800990DC: jal         0x80099338
    // 0x800990E0: sw          $v1, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->r3;
    __nextSampleTime(rdram, ctx);
        goto after_3;
    // 0x800990E0: sw          $v1, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->r3;
    after_3:
    // 0x800990E4: lw          $v1, 0x20($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X20);
    // 0x800990E8: sw          $v0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r2;
    // 0x800990EC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x800990F0: slt         $v0, $v0, $s3
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x800990F4: bne         $v0, $zero, L_800990A0
    if (ctx->r2 != 0) {
        // 0x800990F8: nop
    
            goto L_800990A0;
    }
    // 0x800990F8: nop

L_800990FC:
    // 0x800990FC: lw          $v0, 0x1C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X1C);
    // 0x80099100: addiu       $v1, $zero, -0x10
    ctx->r3 = ADD32(0, -0X10);
    // 0x80099104: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80099108: blez        $s3, L_80099184
    if (SIGNED(ctx->r19) <= 0) {
        // 0x8009910C: sw          $v0, 0x1C($s2)
        MEM_W(0X1C, ctx->r18) = ctx->r2;
            goto L_80099184;
    }
    // 0x8009910C: sw          $v0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r2;
    // 0x80099110: lui         $s6, 0x700
    ctx->r22 = S32(0X700 << 16);
L_80099114:
    // 0x80099114: lw          $s1, 0x48($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X48);
    // 0x80099118: slt         $v0, $s3, $s1
    ctx->r2 = SIGNED(ctx->r19) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x8009911C: bnel        $v0, $zero, L_80099124
    if (ctx->r2 != 0) {
        // 0x80099120: addu        $s1, $s3, $zero
        ctx->r17 = ADD32(ctx->r19, 0);
            goto L_80099124;
    }
    goto skip_0;
    // 0x80099120: addu        $s1, $s3, $zero
    ctx->r17 = ADD32(ctx->r19, 0);
    skip_0:
L_80099124:
    // 0x80099124: sw          $s6, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r22;
    // 0x80099128: sw          $zero, 0x4($s4)
    MEM_W(0X4, ctx->r20) = 0;
    // 0x8009912C: lw          $s0, 0x38($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X38);
    // 0x80099130: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80099134: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    // 0x80099138: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x8009913C: subu        $s3, $s3, $s1
    ctx->r19 = SUB32(ctx->r19, ctx->r17);
    // 0x80099140: jalr        $v0
    // 0x80099144: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x80099144: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80099148: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8009914C: addiu       $v0, $s4, 0x8
    ctx->r2 = ADD32(ctx->r20, 0X8);
    // 0x80099150: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80099154: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x80099158: lw          $a3, 0x20($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X20);
    // 0x8009915C: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x80099160: jalr        $v0
    // 0x80099164: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x80099164: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_5:
    // 0x80099168: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    // 0x8009916C: lw          $v1, 0x20($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X20);
    // 0x80099170: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
    // 0x80099174: addu        $s5, $s5, $v0
    ctx->r21 = ADD32(ctx->r21, ctx->r2);
    // 0x80099178: addu        $v1, $v1, $s1
    ctx->r3 = ADD32(ctx->r3, ctx->r17);
    // 0x8009917C: bgtz        $s3, L_80099114
    if (SIGNED(ctx->r19) > 0) {
        // 0x80099180: sw          $v1, 0x20($s2)
        MEM_W(0X20, ctx->r18) = ctx->r3;
            goto L_80099114;
    }
    // 0x80099180: sw          $v1, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r3;
L_80099184:
    // 0x80099184: subu        $v0, $s4, $s7
    ctx->r2 = SUB32(ctx->r20, ctx->r23);
    // 0x80099188: sra         $v0, $v0, 3
    ctx->r2 = S32(SIGNED(ctx->r2) >> 3);
    // 0x8009918C: sw          $v0, 0x0($fp)
    MEM_W(0X0, ctx->r30) = ctx->r2;
    // 0x80099190: jal         0x80099210
    // 0x80099194: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    _collectPVoices(rdram, ctx);
        goto after_6;
    // 0x80099194: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_6:
L_80099198:
    // 0x80099198: addu        $v0, $s4, $zero
    ctx->r2 = ADD32(ctx->r20, 0);
    // 0x8009919C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x800991A0: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x800991A4: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x800991A8: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x800991AC: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x800991B0: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x800991B4: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x800991B8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x800991BC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x800991C0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800991C4: jr          $ra
    // 0x800991C8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x800991C8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8007D538_58938(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007D538: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
    // 0x8007D53C: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x8007D540: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x8007D544: lbu         $v1, -0x3E28($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3E28);
    // 0x8007D548: andi        $v0, $v1, 0x2
    ctx->r2 = ctx->r3 & 0X2;
    // 0x8007D54C: bne         $v0, $zero, L_8007D634
    if (ctx->r2 != 0) {
        // 0x8007D550: ori         $v0, $v1, 0x2
        ctx->r2 = ctx->r3 | 0X2;
            goto L_8007D634;
    }
    // 0x8007D550: ori         $v0, $v1, 0x2
    ctx->r2 = ctx->r3 | 0X2;
    // 0x8007D554: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007D558: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8007D55C: sb          $v0, -0x3E28($at)
    MEM_B(-0X3E28, ctx->r1) = ctx->r2;
    // 0x8007D560: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x8007D564: lw          $a3, -0x2650($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X2650);
    // 0x8007D568: sll         $a1, $t0, 4
    ctx->r5 = S32(ctx->r8 << 4);
    // 0x8007D56C: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8007D570: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8007D574: lw          $v0, -0x41A8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X41A8);
    // 0x8007D578: lh          $a0, 0x6($a3)
    ctx->r4 = MEM_H(ctx->r7, 0X6);
    // 0x8007D57C: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007D580: mflo        $a0
    ctx->r4 = lo;
    // 0x8007D584: lh          $a2, 0x8($a3)
    ctx->r6 = MEM_H(ctx->r7, 0X8);
    // 0x8007D588: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8007D58C: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8007D590: lw          $v0, -0x41A4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X41A4);
    // 0x8007D594: mult        $a2, $v0
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007D598: mflo        $a2
    ctx->r6 = lo;
    // 0x8007D59C: lh          $v1, 0xA($a3)
    ctx->r3 = MEM_H(ctx->r7, 0XA);
    // 0x8007D5A0: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8007D5A4: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8007D5A8: lw          $v0, -0x41A0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X41A0);
    // 0x8007D5AC: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007D5B0: mflo        $v1
    ctx->r3 = lo;
    // 0x8007D5B4: sll         $a1, $t0, 3
    ctx->r5 = S32(ctx->r8 << 3);
    // 0x8007D5B8: lw          $v0, 0x18($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X18);
    // 0x8007D5BC: addu        $a0, $a0, $a2
    ctx->r4 = ADD32(ctx->r4, ctx->r6);
    // 0x8007D5C0: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x8007D5C4: sra         $a0, $a0, 12
    ctx->r4 = S32(SIGNED(ctx->r4) >> 12);
    // 0x8007D5C8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8007D5CC: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8007D5D0: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8007D5D4: lh          $v0, -0x3FA4($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X3FA4);
    // 0x8007D5D8: sll         $v1, $a0, 16
    ctx->r3 = S32(ctx->r4 << 16);
    // 0x8007D5DC: sra         $v1, $v1, 8
    ctx->r3 = S32(SIGNED(ctx->r3) >> 8);
    // 0x8007D5E0: bltzl       $v0, L_8007D5E8
    if (SIGNED(ctx->r2) < 0) {
        // 0x8007D5E4: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_8007D5E8;
    }
    goto skip_0;
    // 0x8007D5E4: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_0:
L_8007D5E8:
    // 0x8007D5E8: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8007D5EC: div         $zero, $v1, $v0
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r2)));
    // 0x8007D5F0: bne         $v0, $zero, L_8007D5FC
    if (ctx->r2 != 0) {
        // 0x8007D5F4: nop
    
            goto L_8007D5FC;
    }
    // 0x8007D5F4: nop

    // 0x8007D5F8: break       7
    do_break(2147997176);
L_8007D5FC:
    // 0x8007D5FC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8007D600: bne         $v0, $at, L_8007D614
    if (ctx->r2 != ctx->r1) {
        // 0x8007D604: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8007D614;
    }
    // 0x8007D604: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8007D608: bne         $v1, $at, L_8007D614
    if (ctx->r3 != ctx->r1) {
        // 0x8007D60C: nop
    
            goto L_8007D614;
    }
    // 0x8007D60C: nop

    // 0x8007D610: break       6
    do_break(2147997200);
L_8007D614:
    // 0x8007D614: mflo        $v1
    ctx->r3 = lo;
    // 0x8007D618: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007D61C: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x8007D620: sh          $a0, -0x3FA6($at)
    MEM_H(-0X3FA6, ctx->r1) = ctx->r4;
    // 0x8007D624: sll         $v0, $t0, 2
    ctx->r2 = S32(ctx->r8 << 2);
    // 0x8007D628: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007D62C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8007D630: sh          $v1, -0x3EA6($at)
    MEM_H(-0X3EA6, ctx->r1) = ctx->r3;
L_8007D634:
    // 0x8007D634: jr          $ra
    // 0x8007D638: nop

    TRACE_RETURN()
    return;
    // 0x8007D638: nop

;}
RECOMP_FUNC void func_8003912C_1452C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003912C: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80039130: lw          $v0, -0x3688($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3688);
    // 0x80039134: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x80039138: sw          $ra, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r31;
    // 0x8003913C: sw          $fp, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r30;
    // 0x80039140: sw          $s7, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r23;
    // 0x80039144: sw          $s6, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r22;
    // 0x80039148: sw          $s5, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r21;
    // 0x8003914C: sw          $s4, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r20;
    // 0x80039150: sw          $s3, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r19;
    // 0x80039154: sw          $s2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r18;
    // 0x80039158: sw          $s1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r17;
    // 0x8003915C: bne         $v0, $zero, L_80039EE8
    if (ctx->r2 != 0) {
        // 0x80039160: sw          $s0, 0x88($sp)
        MEM_W(0X88, ctx->r29) = ctx->r16;
            goto L_80039EE8;
    }
    // 0x80039160: sw          $s0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r16;
    // 0x80039164: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80039168: lw          $v0, -0x35C0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X35C0);
    // 0x8003916C: beq         $v0, $zero, L_80039EE8
    if (ctx->r2 == 0) {
        // 0x80039170: nop
    
            goto L_80039EE8;
    }
    // 0x80039170: nop

    // 0x80039174: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80039178: lw          $v0, 0xB5C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XB5C);
    // 0x8003917C: beq         $v0, $zero, L_80039EE8
    if (ctx->r2 == 0) {
        // 0x80039180: nop
    
            goto L_80039EE8;
    }
    // 0x80039180: nop

    // 0x80039184: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80039188: lw          $v0, -0x2660($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2660);
    // 0x8003918C: beq         $v0, $zero, L_80039EE8
    if (ctx->r2 == 0) {
        // 0x80039190: nop
    
            goto L_80039EE8;
    }
    // 0x80039190: nop

    // 0x80039194: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80039198: lw          $v0, -0x265C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X265C);
    // 0x8003919C: beq         $v0, $zero, L_80039EE8
    if (ctx->r2 == 0) {
        // 0x800391A0: addiu       $t5, $zero, 0xFA0
        ctx->r13 = ADD32(0, 0XFA0);
            goto L_80039EE8;
    }
    // 0x800391A0: addiu       $t5, $zero, 0xFA0
    ctx->r13 = ADD32(0, 0XFA0);
    // 0x800391A4: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x800391A8: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x800391AC: beq         $v1, $zero, L_800391C8
    if (ctx->r3 == 0) {
        // 0x800391B0: sw          $t5, 0x74($sp)
        MEM_W(0X74, ctx->r29) = ctx->r13;
            goto L_800391C8;
    }
    // 0x800391B0: sw          $t5, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r13;
    // 0x800391B4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x800391B8: beq         $v1, $v0, L_800391EC
    if (ctx->r3 == ctx->r2) {
        // 0x800391BC: nop
    
            goto L_800391EC;
    }
    // 0x800391BC: nop

    // 0x800391C0: j           L_80039200
    // 0x800391C4: nop

        goto L_80039200;
    // 0x800391C4: nop

L_800391C8:
    // 0x800391C8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x800391CC: lb          $v1, -0x3BC7($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC7);
    // 0x800391D0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x800391D4: bne         $v1, $v0, L_80039200
    if (ctx->r3 != ctx->r2) {
        // 0x800391D8: nop
    
            goto L_80039200;
    }
    // 0x800391D8: nop

    // 0x800391DC: jal         0x8023C500
    // 0x800391E0: nop

    func_8023C500_ovl2(rdram, ctx);
        goto after_0;
    // 0x800391E0: nop

    after_0:
    // 0x800391E4: j           L_80039200
    // 0x800391E8: nop

        goto L_80039200;
    // 0x800391E8: nop

L_800391EC:
    // 0x800391EC: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x800391F0: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x800391F4: bne         $v0, $zero, L_80039200
    if (ctx->r2 != 0) {
        // 0x800391F8: addiu       $t5, $zero, 0x1194
        ctx->r13 = ADD32(0, 0X1194);
            goto L_80039200;
    }
    // 0x800391F8: addiu       $t5, $zero, 0x1194
    ctx->r13 = ADD32(0, 0X1194);
    // 0x800391FC: sw          $t5, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r13;
L_80039200:
    // 0x80039200: jal         0x8007F2D4
    // 0x80039204: nop

    func_8007F2D4_5A6D4(rdram, ctx);
        goto after_1;
    // 0x80039204: nop

    after_1:
    // 0x80039208: lui         $t5, 0x801B
    ctx->r13 = S32(0X801B << 16);
    // 0x8003920C: lw          $t5, -0x35C0($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X35C0);
    // 0x80039210: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80039214: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80039218: addiu       $v0, $v0, -0xD40
    ctx->r2 = ADD32(ctx->r2, -0XD40);
    // 0x8003921C: addiu       $a1, $v0, 0x10
    ctx->r5 = ADD32(ctx->r2, 0X10);
    // 0x80039220: addiu       $fp, $v0, 0xE
    ctx->r30 = ADD32(ctx->r2, 0XE);
    // 0x80039224: addiu       $s6, $v0, 0xC
    ctx->r22 = ADD32(ctx->r2, 0XC);
    // 0x80039228: addiu       $s5, $v0, 0xA
    ctx->r21 = ADD32(ctx->r2, 0XA);
    // 0x8003922C: addiu       $s4, $v0, 0x8
    ctx->r20 = ADD32(ctx->r2, 0X8);
    // 0x80039230: addiu       $s3, $v0, 0x6
    ctx->r19 = ADD32(ctx->r2, 0X6);
    // 0x80039234: addiu       $s2, $v0, 0x4
    ctx->r18 = ADD32(ctx->r2, 0X4);
    // 0x80039238: addiu       $s1, $v0, 0x2
    ctx->r17 = ADD32(ctx->r2, 0X2);
    // 0x8003923C: addu        $s7, $v0, $zero
    ctx->r23 = ADD32(ctx->r2, 0);
    // 0x80039240: sw          $t5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r13;
    // 0x80039244: lui         $t5, 0x8021
    ctx->r13 = S32(0X8021 << 16);
    // 0x80039248: lw          $t5, 0xB5C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0XB5C);
    // 0x8003924C: addu        $s0, $s7, $zero
    ctx->r16 = ADD32(ctx->r23, 0);
    // 0x80039250: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80039254: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    // 0x80039258: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8003925C: sw          $v0, -0x55F0($at)
    MEM_W(-0X55F0, ctx->r1) = ctx->r2;
    // 0x80039260: sw          $t5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r13;
L_80039264:
    // 0x80039264: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    // 0x80039268: sw          $a1, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r5;
    // 0x8003926C: jal         0x8002C678
    // 0x80039270: sw          $a2, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r6;
    func_8002C678_7A78(rdram, ctx);
        goto after_2;
    // 0x80039270: sw          $a2, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r6;
    after_2:
    // 0x80039274: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80039278: lbu         $v1, 0xB61($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0XB61);
    // 0x8003927C: lw          $a1, 0x80($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X80);
    // 0x80039280: lw          $a2, 0x84($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X84);
    // 0x80039284: beql        $v1, $zero, L_800392FC
    if (ctx->r3 == 0) {
        // 0x80039288: addiu       $a1, $a1, 0x20
        ctx->r5 = ADD32(ctx->r5, 0X20);
            goto L_800392FC;
    }
    goto skip_0;
    // 0x80039288: addiu       $a1, $a1, 0x20
    ctx->r5 = ADD32(ctx->r5, 0X20);
    skip_0:
    // 0x8003928C: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
    // 0x80039290: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x80039294: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    // 0x80039298: lh          $v0, 0x0($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X0);
    // 0x8003929C: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x800392A0: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x800392A4: lh          $v0, 0x0($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X0);
    // 0x800392A8: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x800392AC: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
    // 0x800392B0: lh          $v0, 0x0($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X0);
    // 0x800392B4: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x800392B8: sh          $v0, 0x0($s3)
    MEM_H(0X0, ctx->r19) = ctx->r2;
    // 0x800392BC: lh          $v0, 0x0($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X0);
    // 0x800392C0: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x800392C4: sh          $v0, 0x0($s4)
    MEM_H(0X0, ctx->r20) = ctx->r2;
    // 0x800392C8: lh          $v0, 0x0($s5)
    ctx->r2 = MEM_H(ctx->r21, 0X0);
    // 0x800392CC: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x800392D0: sh          $v0, 0x0($s5)
    MEM_H(0X0, ctx->r21) = ctx->r2;
    // 0x800392D4: lh          $v0, 0x0($s6)
    ctx->r2 = MEM_H(ctx->r22, 0X0);
    // 0x800392D8: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x800392DC: sh          $v0, 0x0($s6)
    MEM_H(0X0, ctx->r22) = ctx->r2;
    // 0x800392E0: lh          $v0, 0x0($fp)
    ctx->r2 = MEM_H(ctx->r30, 0X0);
    // 0x800392E4: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x800392E8: sh          $v0, 0x0($fp)
    MEM_H(0X0, ctx->r30) = ctx->r2;
    // 0x800392EC: lh          $v0, 0x0($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X0);
    // 0x800392F0: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x800392F4: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x800392F8: addiu       $a1, $a1, 0x20
    ctx->r5 = ADD32(ctx->r5, 0X20);
L_800392FC:
    // 0x800392FC: addiu       $fp, $fp, 0x20
    ctx->r30 = ADD32(ctx->r30, 0X20);
    // 0x80039300: addiu       $s6, $s6, 0x20
    ctx->r22 = ADD32(ctx->r22, 0X20);
    // 0x80039304: addiu       $s5, $s5, 0x20
    ctx->r21 = ADD32(ctx->r21, 0X20);
    // 0x80039308: addiu       $s4, $s4, 0x20
    ctx->r20 = ADD32(ctx->r20, 0X20);
    // 0x8003930C: addiu       $s3, $s3, 0x20
    ctx->r19 = ADD32(ctx->r19, 0X20);
    // 0x80039310: addiu       $s2, $s2, 0x20
    ctx->r18 = ADD32(ctx->r18, 0X20);
    // 0x80039314: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    // 0x80039318: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
    // 0x8003931C: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80039320: slti        $v0, $a2, 0x4
    ctx->r2 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
    // 0x80039324: bne         $v0, $zero, L_80039264
    if (ctx->r2 != 0) {
        // 0x80039328: addiu       $s7, $s7, 0x20
        ctx->r23 = ADD32(ctx->r23, 0X20);
            goto L_80039264;
    }
    // 0x80039328: addiu       $s7, $s7, 0x20
    ctx->r23 = ADD32(ctx->r23, 0X20);
    // 0x8003932C: addiu       $a0, $zero, 0x400
    ctx->r4 = ADD32(0, 0X400);
    // 0x80039330: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80039334: addiu       $s1, $s1, -0xD20
    ctx->r17 = ADD32(ctx->r17, -0XD20);
    // 0x80039338: jal         0x800319B4
    // 0x8003933C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_800319B4_CDB4(rdram, ctx);
        goto after_3;
    // 0x8003933C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_3:
    // 0x80039340: addiu       $a0, $zero, 0x800
    ctx->r4 = ADD32(0, 0X800);
    // 0x80039344: addiu       $s2, $s1, 0x20
    ctx->r18 = ADD32(ctx->r17, 0X20);
    // 0x80039348: jal         0x800319B4
    // 0x8003934C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_800319B4_CDB4(rdram, ctx);
        goto after_4;
    // 0x8003934C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_4:
    // 0x80039350: addiu       $a0, $zero, 0xC00
    ctx->r4 = ADD32(0, 0XC00);
    // 0x80039354: addiu       $s3, $s1, 0x40
    ctx->r19 = ADD32(ctx->r17, 0X40);
    // 0x80039358: jal         0x800319B4
    // 0x8003935C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    func_800319B4_CDB4(rdram, ctx);
        goto after_5;
    // 0x8003935C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    after_5:
    // 0x80039360: lui         $s4, 0x801D
    ctx->r20 = S32(0X801D << 16);
    // 0x80039364: addiu       $s4, $s4, 0x4760
    ctx->r20 = ADD32(ctx->r20, 0X4760);
    // 0x80039368: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8003936C: addiu       $a1, $s1, -0x20
    ctx->r5 = ADD32(ctx->r17, -0X20);
    // 0x80039370: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80039374: addiu       $s0, $s0, -0x11C8
    ctx->r16 = ADD32(ctx->r16, -0X11C8);
    // 0x80039378: jal         0x800306F0
    // 0x8003937C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_800306F0_BAF0(rdram, ctx);
        goto after_6;
    // 0x8003937C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_6:
    // 0x80039380: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x80039384: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80039388: jal         0x800306F0
    // 0x8003938C: addiu       $a2, $s0, 0x20
    ctx->r6 = ADD32(ctx->r16, 0X20);
    func_800306F0_BAF0(rdram, ctx);
        goto after_7;
    // 0x8003938C: addiu       $a2, $s0, 0x20
    ctx->r6 = ADD32(ctx->r16, 0X20);
    after_7:
    // 0x80039390: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x80039394: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80039398: jal         0x800306F0
    // 0x8003939C: addiu       $a2, $s0, 0x40
    ctx->r6 = ADD32(ctx->r16, 0X40);
    func_800306F0_BAF0(rdram, ctx);
        goto after_8;
    // 0x8003939C: addiu       $a2, $s0, 0x40
    ctx->r6 = ADD32(ctx->r16, 0X40);
    after_8:
    // 0x800393A0: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x800393A4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x800393A8: jal         0x800306F0
    // 0x800393AC: addiu       $a2, $s0, 0x60
    ctx->r6 = ADD32(ctx->r16, 0X60);
    func_800306F0_BAF0(rdram, ctx);
        goto after_9;
    // 0x800393AC: addiu       $a2, $s0, 0x60
    ctx->r6 = ADD32(ctx->r16, 0X60);
    after_9:
    // 0x800393B0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x800393B4: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x800393B8: lh          $v0, 0x0($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X0);
    // 0x800393BC: ori         $a2, $zero, 0x8000
    ctx->r6 = 0 | 0X8000;
    // 0x800393C0: addu        $a0, $v0, $a2
    ctx->r4 = ADD32(ctx->r2, ctx->r6);
    // 0x800393C4: bltzl       $a0, L_800393CC
    if (SIGNED(ctx->r4) < 0) {
        // 0x800393C8: addiu       $a0, $a0, 0x1FF
        ctx->r4 = ADD32(ctx->r4, 0X1FF);
            goto L_800393CC;
    }
    goto skip_1;
    // 0x800393C8: addiu       $a0, $a0, 0x1FF
    ctx->r4 = ADD32(ctx->r4, 0X1FF);
    skip_1:
L_800393CC:
    // 0x800393CC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x800393D0: lh          $v0, 0x49C8($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X49C8);
    // 0x800393D4: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x800393D8: lbu         $v1, 0x6B40($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X6B40);
    // 0x800393DC: addu        $a3, $v0, $a2
    ctx->r7 = ADD32(ctx->r2, ctx->r6);
    // 0x800393E0: sra         $v0, $a0, 9
    ctx->r2 = S32(SIGNED(ctx->r4) >> 9);
    // 0x800393E4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x800393E8: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800393EC: sw          $v0, -0x55EC($at)
    MEM_W(-0X55EC, ctx->r1) = ctx->r2;
    // 0x800393F0: bltzl       $a3, L_800393F8
    if (SIGNED(ctx->r7) < 0) {
        // 0x800393F4: addiu       $a3, $a3, 0x1FF
        ctx->r7 = ADD32(ctx->r7, 0X1FF);
            goto L_800393F8;
    }
    goto skip_2;
    // 0x800393F4: addiu       $a3, $a3, 0x1FF
    ctx->r7 = ADD32(ctx->r7, 0X1FF);
    skip_2:
L_800393F8:
    // 0x800393F8: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x800393FC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80039400: lbu         $v1, -0x39A6($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X39A6);
    // 0x80039404: sra         $v0, $a3, 9
    ctx->r2 = S32(SIGNED(ctx->r7) >> 9);
    // 0x80039408: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8003940C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80039410: sw          $v0, -0x55E8($at)
    MEM_W(-0X55E8, ctx->r1) = ctx->r2;
    // 0x80039414: jal         0x800308E8
    // 0x80039418: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    func_800308E8_BCE8(rdram, ctx);
        goto after_10;
    // 0x80039418: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    after_10:
    // 0x8003941C: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x80039420: lui         $a2, 0x801D
    ctx->r6 = S32(0X801D << 16);
    // 0x80039424: lw          $a2, 0x4774($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X4774);
    // 0x80039428: lw          $v1, 0x14($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X14);
    // 0x8003942C: lui         $a3, 0x801D
    ctx->r7 = S32(0X801D << 16);
    // 0x80039430: lw          $a3, 0x4778($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X4778);
    // 0x80039434: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80039438: lui         $t0, 0x801D
    ctx->r8 = S32(0X801D << 16);
    // 0x8003943C: lw          $t0, 0x477C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X477C);
    // 0x80039440: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80039444: lbu         $a1, 0xB61($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0XB61);
    // 0x80039448: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8003944C: addu        $v1, $v1, $a3
    ctx->r3 = ADD32(ctx->r3, ctx->r7);
    // 0x80039450: addu        $a0, $a0, $t0
    ctx->r4 = ADD32(ctx->r4, ctx->r8);
    // 0x80039454: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80039458: sllv        $v0, $v0, $a1
    ctx->r2 = S32(ctx->r2 << (ctx->r5 & 31));
    // 0x8003945C: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    // 0x80039460: sllv        $v1, $v1, $a1
    ctx->r3 = S32(ctx->r3 << (ctx->r5 & 31));
    // 0x80039464: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80039468: sllv        $a0, $a0, $a1
    ctx->r4 = S32(ctx->r4 << (ctx->r5 & 31));
    // 0x8003946C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80039470: sh          $v0, -0x44C($at)
    MEM_H(-0X44C, ctx->r1) = ctx->r2;
    // 0x80039474: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80039478: sh          $v1, -0x44A($at)
    MEM_H(-0X44A, ctx->r1) = ctx->r3;
    // 0x8003947C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80039480: jal         0x80038934
    // 0x80039484: sh          $a0, -0x448($at)
    MEM_H(-0X448, ctx->r1) = ctx->r4;
    func_80038934_13D34(rdram, ctx);
        goto after_11;
    // 0x80039484: sh          $a0, -0x448($at)
    MEM_H(-0X448, ctx->r1) = ctx->r4;
    after_11:
    // 0x80039488: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x8003948C: lw          $a0, -0x4DE0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4DE0);
    // 0x80039490: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80039494: lbu         $a1, 0x6B40($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X6B40);
    // 0x80039498: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8003949C: lw          $v0, -0x4DD8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4DD8);
    // 0x800394A0: lui         $a2, 0x8018
    ctx->r6 = S32(0X8018 << 16);
    // 0x800394A4: lw          $a2, -0x4DDC($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X4DDC);
    // 0x800394A8: lui         $a3, 0x801C
    ctx->r7 = S32(0X801C << 16);
    // 0x800394AC: lbu         $a3, -0x39A6($a3)
    ctx->r7 = MEM_BU(ctx->r7, -0X39A6);
    // 0x800394B0: addu        $a0, $a1, $a0
    ctx->r4 = ADD32(ctx->r5, ctx->r4);
    // 0x800394B4: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x800394B8: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x800394BC: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x800394C0: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x800394C4: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x800394C8: addu        $a2, $a3, $a2
    ctx->r6 = ADD32(ctx->r7, ctx->r6);
    // 0x800394CC: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x800394D0: lw          $v0, -0x4DD4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4DD4);
    // 0x800394D4: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x800394D8: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x800394DC: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x800394E0: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x800394E4: jal         0x800868C0
    // 0x800394E8: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    func_800868C0_61CC0(rdram, ctx);
        goto after_12;
    // 0x800394E8: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    after_12:
    // 0x800394EC: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x800394F0: lbu         $v0, -0x3A50($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3A50);
    // 0x800394F4: beq         $v0, $zero, L_8003950C
    if (ctx->r2 == 0) {
        // 0x800394F8: addiu       $v0, $zero, -0x1000
        ctx->r2 = ADD32(0, -0X1000);
            goto L_8003950C;
    }
    // 0x800394F8: addiu       $v0, $zero, -0x1000
    ctx->r2 = ADD32(0, -0X1000);
    // 0x800394FC: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80039500: lb          $v1, -0x72EC($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X72EC);
    // 0x80039504: j           L_8003951C
    // 0x80039508: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
        goto L_8003951C;
    // 0x80039508: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
L_8003950C:
    // 0x8003950C: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80039510: lbu         $v1, 0xB61($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0XB61);
    // 0x80039514: addiu       $v0, $zero, -0x280
    ctx->r2 = ADD32(0, -0X280);
    // 0x80039518: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
L_8003951C:
    // 0x8003951C: sw          $v0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r2;
    // 0x80039520: lui         $fp, 0x8018
    ctx->r30 = S32(0X8018 << 16);
    // 0x80039524: lw          $fp, -0x4DDC($fp)
    ctx->r30 = MEM_W(ctx->r30, -0X4DDC);
    // 0x80039528: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8003952C: lw          $v0, -0x4DD4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4DD4);
    // 0x80039530: slt         $v0, $fp, $v0
    ctx->r2 = SIGNED(ctx->r30) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80039534: beq         $v0, $zero, L_80039EE8
    if (ctx->r2 == 0) {
        // 0x80039538: nop
    
            goto L_80039EE8;
    }
    // 0x80039538: nop

L_8003953C:
    // 0x8003953C: lui         $s6, 0x8018
    ctx->r22 = S32(0X8018 << 16);
    // 0x80039540: lw          $s6, -0x4DE0($s6)
    ctx->r22 = MEM_W(ctx->r22, -0X4DE0);
    // 0x80039544: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80039548: lw          $v0, -0x4DD8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4DD8);
    // 0x8003954C: slt         $v0, $s6, $v0
    ctx->r2 = SIGNED(ctx->r22) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80039550: beq         $v0, $zero, L_80039ED0
    if (ctx->r2 == 0) {
        // 0x80039554: nop
    
            goto L_80039ED0;
    }
    // 0x80039554: nop

L_80039558:
    // 0x80039558: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8003955C: lhu         $v0, 0x49AE($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X49AE);
    // 0x80039560: mult        $v0, $fp
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80039564: mflo        $v0
    ctx->r2 = lo;
    // 0x80039568: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8003956C: lbu         $a0, 0x6B40($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X6B40);
    // 0x80039570: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x80039574: lbu         $a1, -0x39A6($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X39A6);
    // 0x80039578: addu        $s7, $zero, $zero
    ctx->r23 = ADD32(0, 0);
    // 0x8003957C: lw          $t5, 0x5C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X5C);
    // 0x80039580: addu        $a0, $a0, $s6
    ctx->r4 = ADD32(ctx->r4, ctx->r22);
    // 0x80039584: addu        $v0, $v0, $s6
    ctx->r2 = ADD32(ctx->r2, ctx->r22);
    // 0x80039588: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8003958C: addu        $v0, $v0, $t5
    ctx->r2 = ADD32(ctx->r2, ctx->r13);
    // 0x80039590: lhu         $s0, 0x0($v0)
    ctx->r16 = MEM_HU(ctx->r2, 0X0);
    // 0x80039594: jal         0x8008699C
    // 0x80039598: addu        $a1, $a1, $fp
    ctx->r5 = ADD32(ctx->r5, ctx->r30);
    func_8008699C_61D9C(rdram, ctx);
        goto after_13;
    // 0x80039598: addu        $a1, $a1, $fp
    ctx->r5 = ADD32(ctx->r5, ctx->r30);
    after_13:
    // 0x8003959C: bne         $v0, $zero, L_80039EB8
    if (ctx->r2 != 0) {
        // 0x800395A0: andi        $a3, $s0, 0xFFFF
        ctx->r7 = ctx->r16 & 0XFFFF;
            goto L_80039EB8;
    }
    // 0x800395A0: andi        $a3, $s0, 0xFFFF
    ctx->r7 = ctx->r16 & 0XFFFF;
    // 0x800395A4: beq         $a3, $zero, L_80039EB8
    if (ctx->r7 == 0) {
        // 0x800395A8: nop
    
            goto L_80039EB8;
    }
    // 0x800395A8: nop

    // 0x800395AC: bgez        $s6, L_800395B8
    if (SIGNED(ctx->r22) >= 0) {
        // 0x800395B0: addu        $v1, $s6, $zero
        ctx->r3 = ADD32(ctx->r22, 0);
            goto L_800395B8;
    }
    // 0x800395B0: addu        $v1, $s6, $zero
    ctx->r3 = ADD32(ctx->r22, 0);
    // 0x800395B4: addiu       $v1, $s6, 0x1F
    ctx->r3 = ADD32(ctx->r22, 0X1F);
L_800395B8:
    // 0x800395B8: sra         $v1, $v1, 5
    ctx->r3 = S32(SIGNED(ctx->r3) >> 5);
    // 0x800395BC: sll         $v0, $fp, 2
    ctx->r2 = S32(ctx->r30 << 2);
    // 0x800395C0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800395C4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800395C8: andi        $a0, $s6, 0x1F
    ctx->r4 = ctx->r22 & 0X1F;
    // 0x800395CC: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x800395D0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x800395D4: lw          $v1, -0x55E0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X55E0);
    // 0x800395D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800395DC: sllv        $v0, $v0, $a0
    ctx->r2 = S32(ctx->r2 << (ctx->r4 & 31));
    // 0x800395E0: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x800395E4: bne         $v1, $zero, L_80039EB8
    if (ctx->r3 != 0) {
        // 0x800395E8: nop
    
            goto L_80039EB8;
    }
    // 0x800395E8: nop

    // 0x800395EC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x800395F0: lbu         $v0, 0x6B40($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X6B40);
    // 0x800395F4: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x800395F8: lbu         $a2, 0xB61($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0XB61);
    // 0x800395FC: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x80039600: lh          $v1, 0x476C($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X476C);
    // 0x80039604: addu        $v0, $v0, $s6
    ctx->r2 = ADD32(ctx->r2, ctx->r22);
    // 0x80039608: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x8003960C: addiu       $v0, $v0, -0x7F00
    ctx->r2 = ADD32(ctx->r2, -0X7F00);
    // 0x80039610: sllv        $a1, $v0, $a2
    ctx->r5 = S32(ctx->r2 << (ctx->r6 & 31));
    // 0x80039614: mult        $v1, $a1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80039618: mflo        $v1
    ctx->r3 = lo;
    // 0x8003961C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80039620: lbu         $v0, -0x39A6($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X39A6);
    // 0x80039624: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x80039628: lh          $a0, 0x4770($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4770);
    // 0x8003962C: addu        $v0, $v0, $fp
    ctx->r2 = ADD32(ctx->r2, ctx->r30);
    // 0x80039630: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x80039634: addiu       $v0, $v0, -0x7F00
    ctx->r2 = ADD32(ctx->r2, -0X7F00);
    // 0x80039638: sllv        $t1, $v0, $a2
    ctx->r9 = S32(ctx->r2 << (ctx->r6 & 31));
    // 0x8003963C: mult        $a0, $t1
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80039640: mflo        $a0
    ctx->r4 = lo;
    // 0x80039644: lw          $t5, 0x6C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X6C);
    // 0x80039648: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8003964C: lhu         $v0, -0x7810($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X7810);
    // 0x80039650: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x80039654: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    // 0x80039658: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x8003965C: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x80039660: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80039664: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x80039668: lw          $a0, 0x477C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X477C);
    // 0x8003966C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80039670: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x80039674: addu        $t0, $v1, $a0
    ctx->r8 = ADD32(ctx->r3, ctx->r4);
    // 0x80039678: slt         $v0, $t0, $v0
    ctx->r2 = SIGNED(ctx->r8) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8003967C: slt         $v1, $t5, $t0
    ctx->r3 = SIGNED(ctx->r13) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80039680: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80039684: beq         $v0, $zero, L_80039EB8
    if (ctx->r2 == 0) {
        // 0x80039688: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_80039EB8;
    }
    // 0x80039688: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8003968C: lui         $v0, 0x801D
    ctx->r2 = S32(0X801D << 16);
    // 0x80039690: lh          $v0, 0x4760($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X4760);
    // 0x80039694: mult        $v0, $a1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80039698: mflo        $v0
    ctx->r2 = lo;
    // 0x8003969C: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x800396A0: lh          $v1, 0x4764($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X4764);
    // 0x800396A4: mult        $v1, $t1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800396A8: mflo        $v1
    ctx->r3 = lo;
    // 0x800396AC: addu        $s5, $zero, $zero
    ctx->r21 = ADD32(0, 0);
    // 0x800396B0: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x800396B4: lw          $a0, 0x4774($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4774);
    // 0x800396B8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800396BC: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x800396C0: addu        $t2, $v0, $a0
    ctx->r10 = ADD32(ctx->r2, ctx->r4);
    // 0x800396C4: srl         $v0, $s0, 15
    ctx->r2 = S32(U32(ctx->r16) >> 15);
    // 0x800396C8: beq         $v0, $zero, L_800398B0
    if (ctx->r2 == 0) {
        // 0x800396CC: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_800398B0;
    }
    // 0x800396CC: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x800396D0: andi        $v0, $s0, 0x1F00
    ctx->r2 = ctx->r16 & 0X1F00;
    // 0x800396D4: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x800396D8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x800396DC: lbu         $v1, -0x3A50($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A50);
    // 0x800396E0: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x800396E4: sllv        $a3, $v0, $a2
    ctx->r7 = S32(ctx->r2 << (ctx->r6 & 31));
    // 0x800396E8: bne         $v1, $zero, L_80039708
    if (ctx->r3 != 0) {
        // 0x800396EC: sw          $a3, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r7;
            goto L_80039708;
    }
    // 0x800396EC: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x800396F0: lui         $v0, 0x8019
    ctx->r2 = S32(0X8019 << 16);
    // 0x800396F4: lh          $v0, 0x5E92($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X5E92);
    // 0x800396F8: addiu       $v0, $v0, -0xC0
    ctx->r2 = ADD32(ctx->r2, -0XC0);
    // 0x800396FC: slt         $v0, $a3, $v0
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80039700: bne         $v0, $zero, L_80039EB8
    if (ctx->r2 != 0) {
        // 0x80039704: nop
    
            goto L_80039EB8;
    }
    // 0x80039704: nop

L_80039708:
    // 0x80039708: beq         $a3, $zero, L_8003978C
    if (ctx->r7 == 0) {
        // 0x8003970C: nop
    
            goto L_8003978C;
    }
    // 0x8003970C: nop

    // 0x80039710: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x80039714: lh          $a0, 0x4762($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4762);
    // 0x80039718: mult        $a0, $a3
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003971C: mflo        $a0
    ctx->r4 = lo;
    // 0x80039720: lui         $v0, 0x801D
    ctx->r2 = S32(0X801D << 16);
    // 0x80039724: lh          $v0, 0x4766($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X4766);
    // 0x80039728: mult        $v0, $a1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003972C: mflo        $v0
    ctx->r2 = lo;
    // 0x80039730: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x80039734: lh          $a1, 0x4768($a1)
    ctx->r5 = MEM_H(ctx->r5, 0X4768);
    // 0x80039738: mult        $a1, $a3
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003973C: mflo        $a1
    ctx->r5 = lo;
    // 0x80039740: lui         $a2, 0x801D
    ctx->r6 = S32(0X801D << 16);
    // 0x80039744: lh          $a2, 0x476A($a2)
    ctx->r6 = MEM_H(ctx->r6, 0X476A);
    // 0x80039748: mult        $a2, $t1
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003974C: mflo        $a2
    ctx->r6 = lo;
    // 0x80039750: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x80039754: lh          $v1, 0x476E($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X476E);
    // 0x80039758: mult        $v1, $a3
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003975C: mflo        $v1
    ctx->r3 = lo;
    // 0x80039760: sra         $a0, $a0, 12
    ctx->r4 = S32(SIGNED(ctx->r4) >> 12);
    // 0x80039764: addu        $t2, $t2, $a0
    ctx->r10 = ADD32(ctx->r10, ctx->r4);
    // 0x80039768: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x8003976C: lw          $a0, 0x4778($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4778);
    // 0x80039770: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80039774: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80039778: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x8003977C: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    // 0x80039780: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x80039784: j           L_800397C0
    // 0x80039788: addu        $t0, $t0, $v1
    ctx->r8 = ADD32(ctx->r8, ctx->r3);
        goto L_800397C0;
    // 0x80039788: addu        $t0, $t0, $v1
    ctx->r8 = ADD32(ctx->r8, ctx->r3);
L_8003978C:
    // 0x8003978C: lui         $v0, 0x801D
    ctx->r2 = S32(0X801D << 16);
    // 0x80039790: lh          $v0, 0x4766($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X4766);
    // 0x80039794: mult        $v0, $a1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80039798: mflo        $v0
    ctx->r2 = lo;
    // 0x8003979C: lui         $v1, 0x801D
    ctx->r3 = S32(0X801D << 16);
    // 0x800397A0: lh          $v1, 0x476A($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X476A);
    // 0x800397A4: mult        $v1, $t1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800397A8: mflo        $v1
    ctx->r3 = lo;
    // 0x800397AC: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x800397B0: lw          $a0, 0x4778($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4778);
    // 0x800397B4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800397B8: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x800397BC: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
L_800397C0:
    // 0x800397C0: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x800397C4: lbu         $a2, 0xB61($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0XB61);
    // 0x800397C8: addiu       $v0, $zero, -0x80
    ctx->r2 = ADD32(0, -0X80);
    // 0x800397CC: sllv        $v0, $v0, $a2
    ctx->r2 = S32(ctx->r2 << (ctx->r6 & 31));
    // 0x800397D0: slt         $v0, $t0, $v0
    ctx->r2 = SIGNED(ctx->r8) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800397D4: bne         $v0, $zero, L_80039EB8
    if (ctx->r2 != 0) {
        // 0x800397D8: sll         $v1, $a0, 8
        ctx->r3 = S32(ctx->r4 << 8);
            goto L_80039EB8;
    }
    // 0x800397D8: sll         $v1, $a0, 8
    ctx->r3 = S32(ctx->r4 << 8);
    // 0x800397DC: ori         $v0, $t0, 0x1
    ctx->r2 = ctx->r8 | 0X1;
    // 0x800397E0: div         $zero, $v1, $v0
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r2)));
    // 0x800397E4: bne         $v0, $zero, L_800397F0
    if (ctx->r2 != 0) {
        // 0x800397E8: nop
    
            goto L_800397F0;
    }
    // 0x800397E8: nop

    // 0x800397EC: break       7
    do_break(2147719148);
L_800397F0:
    // 0x800397F0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800397F4: bne         $v0, $at, L_80039808
    if (ctx->r2 != ctx->r1) {
        // 0x800397F8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80039808;
    }
    // 0x800397F8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800397FC: bne         $v1, $at, L_80039808
    if (ctx->r3 != ctx->r1) {
        // 0x80039800: nop
    
            goto L_80039808;
    }
    // 0x80039800: nop

    // 0x80039804: break       6
    do_break(2147719172);
L_80039808:
    // 0x80039808: mflo        $v1
    ctx->r3 = lo;
    // 0x8003980C: addiu       $t5, $zero, 0x80
    ctx->r13 = ADD32(0, 0X80);
    // 0x80039810: sllv        $v0, $t5, $a2
    ctx->r2 = S32(ctx->r13 << (ctx->r6 & 31));
    // 0x80039814: addiu       $a1, $v1, 0x78
    ctx->r5 = ADD32(ctx->r3, 0X78);
    // 0x80039818: bgez        $t0, L_80039824
    if (SIGNED(ctx->r8) >= 0) {
        // 0x8003981C: addu        $v1, $t0, $zero
        ctx->r3 = ADD32(ctx->r8, 0);
            goto L_80039824;
    }
    // 0x8003981C: addu        $v1, $t0, $zero
    ctx->r3 = ADD32(ctx->r8, 0);
    // 0x80039820: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
L_80039824:
    // 0x80039824: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80039828: beq         $v0, $zero, L_80039854
    if (ctx->r2 == 0) {
        // 0x8003982C: slti        $v0, $a1, -0x140
        ctx->r2 = SIGNED(ctx->r5) < -0X140 ? 1 : 0;
            goto L_80039854;
    }
    // 0x8003982C: slti        $v0, $a1, -0x140
    ctx->r2 = SIGNED(ctx->r5) < -0X140 ? 1 : 0;
    // 0x80039830: bne         $v0, $zero, L_80039EB8
    if (ctx->r2 != 0) {
        // 0x80039834: nop
    
            goto L_80039EB8;
    }
    // 0x80039834: nop

    // 0x80039838: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8003983C: lbu         $v0, -0x3A50($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3A50);
    // 0x80039840: bnel        $v0, $zero, L_80039858
    if (ctx->r2 != 0) {
        // 0x80039844: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_80039858;
    }
    goto skip_3;
    // 0x80039844: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    skip_3:
    // 0x80039848: slti        $v0, $a1, 0x231
    ctx->r2 = SIGNED(ctx->r5) < 0X231 ? 1 : 0;
    // 0x8003984C: beq         $v0, $zero, L_80039EB8
    if (ctx->r2 == 0) {
        // 0x80039850: nop
    
            goto L_80039EB8;
    }
    // 0x80039850: nop

L_80039854:
    // 0x80039854: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_80039858:
    // 0x80039858: andi        $v0, $s0, 0x7C
    ctx->r2 = ctx->r16 & 0X7C;
    // 0x8003985C: srl         $s1, $v0, 2
    ctx->r17 = S32(U32(ctx->r2) >> 2);
    // 0x80039860: andi        $v0, $s0, 0x80
    ctx->r2 = ctx->r16 & 0X80;
    // 0x80039864: beq         $v0, $zero, L_80039A1C
    if (ctx->r2 == 0) {
        // 0x80039868: andi        $a2, $s0, 0x3
        ctx->r6 = ctx->r16 & 0X3;
            goto L_80039A1C;
    }
    // 0x80039868: andi        $a2, $s0, 0x3
    ctx->r6 = ctx->r16 & 0X3;
    // 0x8003986C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80039870: lw          $v1, 0x4000($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4000);
    // 0x80039874: sll         $v0, $s1, 3
    ctx->r2 = S32(ctx->r17 << 3);
    // 0x80039878: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8003987C: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x80039880: lui         $v0, 0xAAAA
    ctx->r2 = S32(0XAAAA << 16);
    // 0x80039884: ori         $v0, $v0, 0xAAAB
    ctx->r2 = ctx->r2 | 0XAAAB;
    // 0x80039888: multu       $v1, $v0
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003988C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80039890: lw          $v0, 0x55A0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X55A0);
    // 0x80039894: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80039898: addu        $s3, $v1, $v0
    ctx->r19 = ADD32(ctx->r3, ctx->r2);
    // 0x8003989C: mfhi        $t5
    ctx->r13 = hi;
    // 0x800398A0: nop

    // 0x800398A4: nop

    // 0x800398A8: j           L_80039A1C
    // 0x800398AC: srl         $s7, $t5, 5
    ctx->r23 = S32(U32(ctx->r13) >> 5);
        goto L_80039A1C;
    // 0x800398AC: srl         $s7, $t5, 5
    ctx->r23 = S32(U32(ctx->r13) >> 5);
L_800398B0:
    // 0x800398B0: sll         $v0, $a3, 1
    ctx->r2 = S32(ctx->r7 << 1);
    // 0x800398B4: lw          $t5, 0x64($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X64);
    // 0x800398B8: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x800398BC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800398C0: addu        $s5, $t5, $v0
    ctx->r21 = ADD32(ctx->r13, ctx->r2);
    // 0x800398C4: lh          $v1, 0x0($s5)
    ctx->r3 = MEM_H(ctx->r21, 0X0);
    // 0x800398C8: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x800398CC: lh          $a1, 0x4760($a1)
    ctx->r5 = MEM_H(ctx->r5, 0X4760);
    // 0x800398D0: sllv        $v1, $v1, $a2
    ctx->r3 = S32(ctx->r3 << (ctx->r6 & 31));
    // 0x800398D4: mult        $a1, $v1
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800398D8: mflo        $a1
    ctx->r5 = lo;
    // 0x800398DC: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    // 0x800398E0: lh          $v0, 0x2($s5)
    ctx->r2 = MEM_H(ctx->r21, 0X2);
    // 0x800398E4: lui         $t3, 0x801D
    ctx->r11 = S32(0X801D << 16);
    // 0x800398E8: lh          $t3, 0x4762($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X4762);
    // 0x800398EC: sllv        $v0, $v0, $a2
    ctx->r2 = S32(ctx->r2 << (ctx->r6 & 31));
    // 0x800398F0: mult        $t3, $v0
    result = S64(S32(ctx->r11)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800398F4: mflo        $t3
    ctx->r11 = lo;
    // 0x800398F8: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800398FC: lh          $a3, 0x4($s5)
    ctx->r7 = MEM_H(ctx->r21, 0X4);
    // 0x80039900: lui         $t2, 0x801D
    ctx->r10 = S32(0X801D << 16);
    // 0x80039904: lh          $t2, 0x4764($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4764);
    // 0x80039908: sllv        $a3, $a3, $a2
    ctx->r7 = S32(ctx->r7 << (ctx->r6 & 31));
    // 0x8003990C: mult        $t2, $a3
    result = S64(S32(ctx->r10)) * S64(S32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80039910: mflo        $t2
    ctx->r10 = lo;
    // 0x80039914: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x80039918: lh          $a0, 0x4766($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4766);
    // 0x8003991C: mult        $a0, $v1
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80039920: mflo        $a0
    ctx->r4 = lo;
    // 0x80039924: lui         $t0, 0x801D
    ctx->r8 = S32(0X801D << 16);
    // 0x80039928: lh          $t0, 0x4768($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X4768);
    // 0x8003992C: mult        $t0, $v0
    result = S64(S32(ctx->r8)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80039930: mflo        $t0
    ctx->r8 = lo;
    // 0x80039934: lui         $t1, 0x801D
    ctx->r9 = S32(0X801D << 16);
    // 0x80039938: lh          $t1, 0x476A($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X476A);
    // 0x8003993C: mult        $t1, $a3
    result = S64(S32(ctx->r9)) * S64(S32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80039940: mflo        $t1
    ctx->r9 = lo;
    // 0x80039944: lui         $a2, 0x801D
    ctx->r6 = S32(0X801D << 16);
    // 0x80039948: lh          $a2, 0x476C($a2)
    ctx->r6 = MEM_H(ctx->r6, 0X476C);
    // 0x8003994C: mult        $a2, $v1
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80039950: mflo        $a2
    ctx->r6 = lo;
    // 0x80039954: lui         $t4, 0x801D
    ctx->r12 = S32(0X801D << 16);
    // 0x80039958: lh          $t4, 0x476E($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X476E);
    // 0x8003995C: mult        $t4, $v0
    result = S64(S32(ctx->r12)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80039960: mflo        $t4
    ctx->r12 = lo;
    // 0x80039964: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    // 0x80039968: lw          $v0, 0x8($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X8);
    // 0x8003996C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80039970: lw          $v1, 0x55A0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X55A0);
    // 0x80039974: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x80039978: subu        $v1, $s3, $v1
    ctx->r3 = SUB32(ctx->r19, ctx->r3);
    // 0x8003997C: lui         $v0, 0xAAAA
    ctx->r2 = S32(0XAAAA << 16);
    // 0x80039980: ori         $v0, $v0, 0xAAAB
    ctx->r2 = ctx->r2 | 0XAAAB;
    // 0x80039984: multu       $v1, $v0
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80039988: lui         $v0, 0x801D
    ctx->r2 = S32(0X801D << 16);
    // 0x8003998C: lw          $v0, 0x4774($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4774);
    // 0x80039990: addu        $a1, $a1, $t3
    ctx->r5 = ADD32(ctx->r5, ctx->r11);
    // 0x80039994: addu        $a1, $a1, $t2
    ctx->r5 = ADD32(ctx->r5, ctx->r10);
    // 0x80039998: sra         $a1, $a1, 12
    ctx->r5 = S32(SIGNED(ctx->r5) >> 12);
    // 0x8003999C: addu        $t2, $a1, $v0
    ctx->r10 = ADD32(ctx->r5, ctx->r2);
    // 0x800399A0: addu        $a0, $a0, $t0
    ctx->r4 = ADD32(ctx->r4, ctx->r8);
    // 0x800399A4: lui         $a1, 0x801D
    ctx->r5 = S32(0X801D << 16);
    // 0x800399A8: lh          $a1, 0x4770($a1)
    ctx->r5 = MEM_H(ctx->r5, 0X4770);
    // 0x800399AC: lui         $v0, 0x801D
    ctx->r2 = S32(0X801D << 16);
    // 0x800399B0: lw          $v0, 0x4778($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4778);
    // 0x800399B4: addu        $a0, $a0, $t1
    ctx->r4 = ADD32(ctx->r4, ctx->r9);
    // 0x800399B8: sra         $a0, $a0, 12
    ctx->r4 = S32(SIGNED(ctx->r4) >> 12);
    // 0x800399BC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x800399C0: mfhi        $v1
    ctx->r3 = hi;
    // 0x800399C4: srl         $s7, $v1, 5
    ctx->r23 = S32(U32(ctx->r3) >> 5);
    // 0x800399C8: sll         $v0, $s7, 2
    ctx->r2 = S32(ctx->r23 << 2);
    // 0x800399CC: mult        $a1, $a3
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800399D0: mflo        $a1
    ctx->r5 = lo;
    // 0x800399D4: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x800399D8: lw          $v1, -0x2660($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X2660);
    // 0x800399DC: addu        $v0, $v0, $s7
    ctx->r2 = ADD32(ctx->r2, ctx->r23);
    // 0x800399E0: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x800399E4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x800399E8: lui         $v0, 0x801D
    ctx->r2 = S32(0X801D << 16);
    // 0x800399EC: lw          $v0, 0x477C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X477C);
    // 0x800399F0: addu        $a2, $a2, $t4
    ctx->r6 = ADD32(ctx->r6, ctx->r12);
    // 0x800399F4: sw          $v1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r3;
    // 0x800399F8: lw          $v1, 0xC($v1)
    ctx->r3 = MEM_W(ctx->r3, 0XC);
    // 0x800399FC: addu        $a2, $a2, $a1
    ctx->r6 = ADD32(ctx->r6, ctx->r5);
    // 0x80039A00: sra         $a2, $a2, 12
    ctx->r6 = S32(SIGNED(ctx->r6) >> 12);
    // 0x80039A04: beq         $v1, $zero, L_80039EB8
    if (ctx->r3 == 0) {
        // 0x80039A08: addu        $t0, $a2, $v0
        ctx->r8 = ADD32(ctx->r6, ctx->r2);
            goto L_80039EB8;
    }
    // 0x80039A08: addu        $t0, $a2, $v0
    ctx->r8 = ADD32(ctx->r6, ctx->r2);
    // 0x80039A0C: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x80039A10: lhu         $v0, 0x26($t5)
    ctx->r2 = MEM_HU(ctx->r13, 0X26);
    // 0x80039A14: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80039A18: andi        $a2, $v0, 0x3
    ctx->r6 = ctx->r2 & 0X3;
L_80039A1C:
    // 0x80039A1C: beq         $a1, $zero, L_80039EB8
    if (ctx->r5 == 0) {
        // 0x80039A20: sll         $v1, $a2, 5
        ctx->r3 = S32(ctx->r6 << 5);
            goto L_80039EB8;
    }
    // 0x80039A20: sll         $v1, $a2, 5
    ctx->r3 = S32(ctx->r6 << 5);
    // 0x80039A24: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80039A28: addiu       $v0, $v0, -0x11C8
    ctx->r2 = ADD32(ctx->r2, -0X11C8);
    // 0x80039A2C: addu        $s2, $v1, $v0
    ctx->r18 = ADD32(ctx->r3, ctx->r2);
    // 0x80039A30: sll         $v1, $t2, 8
    ctx->r3 = S32(ctx->r10 << 8);
    // 0x80039A34: ori         $v0, $t0, 0x1
    ctx->r2 = ctx->r8 | 0X1;
    // 0x80039A38: sw          $a0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r4;
    // 0x80039A3C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80039A40: div         $zero, $v1, $v0
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r2)));
    // 0x80039A44: bne         $v0, $zero, L_80039A50
    if (ctx->r2 != 0) {
        // 0x80039A48: nop
    
            goto L_80039A50;
    }
    // 0x80039A48: nop

    // 0x80039A4C: break       7
    do_break(2147719756);
L_80039A50:
    // 0x80039A50: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80039A54: bne         $v0, $at, L_80039A68
    if (ctx->r2 != ctx->r1) {
        // 0x80039A58: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80039A68;
    }
    // 0x80039A58: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80039A5C: bne         $v1, $at, L_80039A68
    if (ctx->r3 != ctx->r1) {
        // 0x80039A60: nop
    
            goto L_80039A68;
    }
    // 0x80039A60: nop

    // 0x80039A64: break       6
    do_break(2147719780);
L_80039A68:
    // 0x80039A68: mflo        $v1
    ctx->r3 = lo;
    // 0x80039A6C: sw          $t2, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r10;
    // 0x80039A70: nop

    // 0x80039A74: beq         $a1, $a0, L_80039B50
    if (ctx->r5 == ctx->r4) {
        // 0x80039A78: sw          $t0, 0x1C($s2)
        MEM_W(0X1C, ctx->r18) = ctx->r8;
            goto L_80039B50;
    }
    // 0x80039A78: sw          $t0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r8;
    // 0x80039A7C: slti        $v0, $a1, 0x3
    ctx->r2 = SIGNED(ctx->r5) < 0X3 ? 1 : 0;
    // 0x80039A80: beq         $v0, $zero, L_80039A98
    if (ctx->r2 == 0) {
        // 0x80039A84: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80039A98;
    }
    // 0x80039A84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80039A88: beq         $a1, $v0, L_80039AAC
    if (ctx->r5 == ctx->r2) {
        // 0x80039A8C: addiu       $v0, $v1, 0x280
        ctx->r2 = ADD32(ctx->r3, 0X280);
            goto L_80039AAC;
    }
    // 0x80039A8C: addiu       $v0, $v1, 0x280
    ctx->r2 = ADD32(ctx->r3, 0X280);
    // 0x80039A90: j           L_80039EB8
    // 0x80039A94: nop

        goto L_80039EB8;
    // 0x80039A94: nop

L_80039A98:
    // 0x80039A98: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80039A9C: beq         $a1, $v0, L_80039C30
    if (ctx->r5 == ctx->r2) {
        // 0x80039AA0: nop
    
            goto L_80039C30;
    }
    // 0x80039AA0: nop

    // 0x80039AA4: j           L_80039EB8
    // 0x80039AA8: nop

        goto L_80039EB8;
    // 0x80039AA8: nop

L_80039AAC:
    // 0x80039AAC: sltiu       $v0, $v0, 0x501
    ctx->r2 = ctx->r2 < 0X501 ? 1 : 0;
    // 0x80039AB0: bne         $v0, $zero, L_80039AEC
    if (ctx->r2 != 0) {
        // 0x80039AB4: addiu       $t5, $zero, 0x80
        ctx->r13 = ADD32(0, 0X80);
            goto L_80039AEC;
    }
    // 0x80039AB4: addiu       $t5, $zero, 0x80
    ctx->r13 = ADD32(0, 0X80);
    // 0x80039AB8: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80039ABC: lbu         $v0, 0xB61($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XB61);
    // 0x80039AC0: bgez        $t0, L_80039ACC
    if (SIGNED(ctx->r8) >= 0) {
        // 0x80039AC4: addu        $v1, $t0, $zero
        ctx->r3 = ADD32(ctx->r8, 0);
            goto L_80039ACC;
    }
    // 0x80039AC4: addu        $v1, $t0, $zero
    ctx->r3 = ADD32(ctx->r8, 0);
    // 0x80039AC8: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
L_80039ACC:
    // 0x80039ACC: sllv        $v0, $t5, $v0
    ctx->r2 = S32(ctx->r13 << (ctx->r2 & 31));
    // 0x80039AD0: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80039AD4: beq         $v0, $zero, L_80039AEC
    if (ctx->r2 == 0) {
        // 0x80039AD8: nop
    
            goto L_80039AEC;
    }
    // 0x80039AD8: nop

    // 0x80039ADC: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80039AE0: lbu         $v0, -0x3A50($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3A50);
    // 0x80039AE4: beq         $v0, $zero, L_80039EB8
    if (ctx->r2 == 0) {
        // 0x80039AE8: nop
    
            goto L_80039EB8;
    }
    // 0x80039AE8: nop

L_80039AEC:
    // 0x80039AEC: jal         0x800281C8
    // 0x80039AF0: addiu       $a0, $zero, 0x48
    ctx->r4 = ADD32(0, 0X48);
    func_800281C8_35C8(rdram, ctx);
        goto after_14;
    // 0x80039AF0: addiu       $a0, $zero, 0x48
    ctx->r4 = ADD32(0, 0X48);
    after_14:
    // 0x80039AF4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80039AF8: beq         $s0, $zero, L_80039EB8
    if (ctx->r16 == 0) {
        // 0x80039AFC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80039EB8;
    }
    // 0x80039AFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80039B00: jal         0x8009A2B0
    // 0x80039B04: addiu       $a1, $zero, 0x48
    ctx->r5 = ADD32(0, 0X48);
    bzero_recomp(rdram, ctx);
        goto after_15;
    // 0x80039B04: addiu       $a1, $zero, 0x48
    ctx->r5 = ADD32(0, 0X48);
    after_15:
    // 0x80039B08: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80039B0C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80039B10: jal         0x8002C5A4
    // 0x80039B14: sw          $s1, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r17;
    func_8002C5A4_79A4(rdram, ctx);
        goto after_16;
    // 0x80039B14: sw          $s1, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r17;
    after_16:
    // 0x80039B18: lw          $v0, 0x1C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X1C);
    // 0x80039B1C: slti        $v0, $v0, 0x157D
    ctx->r2 = SIGNED(ctx->r2) < 0X157D ? 1 : 0;
    // 0x80039B20: bne         $v0, $zero, L_80039B3C
    if (ctx->r2 != 0) {
        // 0x80039B24: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80039B3C;
    }
    // 0x80039B24: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80039B28: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80039B2C: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x80039B30: addiu       $a2, $a2, -0x7230
    ctx->r6 = ADD32(ctx->r6, -0X7230);
    // 0x80039B34: j           L_80039EB0
    // 0x80039B38: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
        goto L_80039EB0;
    // 0x80039B38: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
L_80039B3C:
    // 0x80039B3C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80039B40: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x80039B44: addiu       $a2, $a2, -0x784C
    ctx->r6 = ADD32(ctx->r6, -0X784C);
    // 0x80039B48: j           L_80039EB0
    // 0x80039B4C: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
        goto L_80039EB0;
    // 0x80039B4C: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
L_80039B50:
    // 0x80039B50: addiu       $v0, $v1, 0x280
    ctx->r2 = ADD32(ctx->r3, 0X280);
    // 0x80039B54: sltiu       $v0, $v0, 0x501
    ctx->r2 = ctx->r2 < 0X501 ? 1 : 0;
    // 0x80039B58: bne         $v0, $zero, L_80039B94
    if (ctx->r2 != 0) {
        // 0x80039B5C: addiu       $t5, $zero, 0x80
        ctx->r13 = ADD32(0, 0X80);
            goto L_80039B94;
    }
    // 0x80039B5C: addiu       $t5, $zero, 0x80
    ctx->r13 = ADD32(0, 0X80);
    // 0x80039B60: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80039B64: lbu         $v0, 0xB61($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XB61);
    // 0x80039B68: bgez        $t0, L_80039B74
    if (SIGNED(ctx->r8) >= 0) {
        // 0x80039B6C: addu        $v1, $t0, $zero
        ctx->r3 = ADD32(ctx->r8, 0);
            goto L_80039B74;
    }
    // 0x80039B6C: addu        $v1, $t0, $zero
    ctx->r3 = ADD32(ctx->r8, 0);
    // 0x80039B70: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
L_80039B74:
    // 0x80039B74: sllv        $v0, $t5, $v0
    ctx->r2 = S32(ctx->r13 << (ctx->r2 & 31));
    // 0x80039B78: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80039B7C: beq         $v0, $zero, L_80039B94
    if (ctx->r2 == 0) {
        // 0x80039B80: nop
    
            goto L_80039B94;
    }
    // 0x80039B80: nop

    // 0x80039B84: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80039B88: lbu         $v0, -0x3A50($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3A50);
    // 0x80039B8C: beq         $v0, $zero, L_80039EB8
    if (ctx->r2 == 0) {
        // 0x80039B90: nop
    
            goto L_80039EB8;
    }
    // 0x80039B90: nop

L_80039B94:
    // 0x80039B94: jal         0x800281C8
    // 0x80039B98: addiu       $a0, $zero, 0x48
    ctx->r4 = ADD32(0, 0X48);
    func_800281C8_35C8(rdram, ctx);
        goto after_17;
    // 0x80039B98: addiu       $a0, $zero, 0x48
    ctx->r4 = ADD32(0, 0X48);
    after_17:
    // 0x80039B9C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80039BA0: sltu        $v0, $zero, $s1
    ctx->r2 = 0 < ctx->r17 ? 1 : 0;
    // 0x80039BA4: sltu        $v1, $zero, $s3
    ctx->r3 = 0 < ctx->r19 ? 1 : 0;
    // 0x80039BA8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80039BAC: beq         $v0, $zero, L_80039EB8
    if (ctx->r2 == 0) {
        // 0x80039BB0: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80039EB8;
    }
    // 0x80039BB0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80039BB4: jal         0x8009A2B0
    // 0x80039BB8: addiu       $a1, $zero, 0x48
    ctx->r5 = ADD32(0, 0X48);
    bzero_recomp(rdram, ctx);
        goto after_18;
    // 0x80039BB8: addiu       $a1, $zero, 0x48
    ctx->r5 = ADD32(0, 0X48);
    after_18:
    // 0x80039BBC: lw          $v1, 0x1C($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X1C);
    // 0x80039BC0: lw          $t5, 0x74($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X74);
    // 0x80039BC4: slt         $v0, $t5, $v1
    ctx->r2 = SIGNED(ctx->r13) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80039BC8: beql        $v0, $zero, L_80039BE0
    if (ctx->r2 == 0) {
        // 0x80039BCC: slti        $v0, $v1, 0x1771
        ctx->r2 = SIGNED(ctx->r3) < 0X1771 ? 1 : 0;
            goto L_80039BE0;
    }
    goto skip_4;
    // 0x80039BCC: slti        $v0, $v1, 0x1771
    ctx->r2 = SIGNED(ctx->r3) < 0X1771 ? 1 : 0;
    skip_4:
    // 0x80039BD0: lhu         $v0, 0x46($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X46);
    // 0x80039BD4: andi        $v0, $v0, 0x8FFF
    ctx->r2 = ctx->r2 & 0X8FFF;
    // 0x80039BD8: j           L_80039BF4
    // 0x80039BDC: ori         $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 | 0X1000;
        goto L_80039BF4;
    // 0x80039BDC: ori         $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 | 0X1000;
L_80039BE0:
    // 0x80039BE0: bne         $v0, $zero, L_80039BF8
    if (ctx->r2 != 0) {
        // 0x80039BE4: nop
    
            goto L_80039BF8;
    }
    // 0x80039BE4: nop

    // 0x80039BE8: lhu         $v0, 0x46($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X46);
    // 0x80039BEC: andi        $v0, $v0, 0x8FFF
    ctx->r2 = ctx->r2 & 0X8FFF;
    // 0x80039BF0: ori         $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 | 0X2000;
L_80039BF4:
    // 0x80039BF4: sh          $v0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r2;
L_80039BF8:
    // 0x80039BF8: lhu         $v0, 0x46($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X46);
    // 0x80039BFC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80039C00: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80039C04: andi        $v1, $s7, 0x1FF
    ctx->r3 = ctx->r23 & 0X1FF;
    // 0x80039C08: andi        $v0, $v0, 0xFE00
    ctx->r2 = ctx->r2 & 0XFE00;
    // 0x80039C0C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80039C10: jal         0x8002C5A4
    // 0x80039C14: sh          $v0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r2;
    func_8002C5A4_79A4(rdram, ctx);
        goto after_19;
    // 0x80039C14: sh          $v0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r2;
    after_19:
    // 0x80039C18: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80039C1C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80039C20: lui         $a2, 0x8008
    ctx->r6 = S32(0X8008 << 16);
    // 0x80039C24: addiu       $a2, $a2, -0xD84
    ctx->r6 = ADD32(ctx->r6, -0XD84);
    // 0x80039C28: j           L_80039EB0
    // 0x80039C2C: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
        goto L_80039EB0;
    // 0x80039C2C: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
L_80039C30:
    // 0x80039C30: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80039C34: lbu         $v0, -0x3A50($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3A50);
    // 0x80039C38: beq         $v0, $zero, L_80039C48
    if (ctx->r2 == 0) {
        // 0x80039C3C: addiu       $v0, $v1, 0xAA0
        ctx->r2 = ADD32(ctx->r3, 0XAA0);
            goto L_80039C48;
    }
    // 0x80039C3C: addiu       $v0, $v1, 0xAA0
    ctx->r2 = ADD32(ctx->r3, 0XAA0);
    // 0x80039C40: j           L_80039C50
    // 0x80039C44: sltiu       $v0, $v0, 0x1541
    ctx->r2 = ctx->r2 < 0X1541 ? 1 : 0;
        goto L_80039C50;
    // 0x80039C44: sltiu       $v0, $v0, 0x1541
    ctx->r2 = ctx->r2 < 0X1541 ? 1 : 0;
L_80039C48:
    // 0x80039C48: addiu       $v0, $v1, 0x520
    ctx->r2 = ADD32(ctx->r3, 0X520);
    // 0x80039C4C: sltiu       $v0, $v0, 0xA41
    ctx->r2 = ctx->r2 < 0XA41 ? 1 : 0;
L_80039C50:
    // 0x80039C50: bne         $v0, $zero, L_80039C7C
    if (ctx->r2 != 0) {
        // 0x80039C54: addiu       $t5, $zero, 0x80
        ctx->r13 = ADD32(0, 0X80);
            goto L_80039C7C;
    }
    // 0x80039C54: addiu       $t5, $zero, 0x80
    ctx->r13 = ADD32(0, 0X80);
    // 0x80039C58: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80039C5C: lbu         $v0, 0xB61($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XB61);
    // 0x80039C60: bgez        $t0, L_80039C6C
    if (SIGNED(ctx->r8) >= 0) {
        // 0x80039C64: addu        $v1, $t0, $zero
        ctx->r3 = ADD32(ctx->r8, 0);
            goto L_80039C6C;
    }
    // 0x80039C64: addu        $v1, $t0, $zero
    ctx->r3 = ADD32(ctx->r8, 0);
    // 0x80039C68: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
L_80039C6C:
    // 0x80039C6C: sllv        $v0, $t5, $v0
    ctx->r2 = S32(ctx->r13 << (ctx->r2 & 31));
    // 0x80039C70: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80039C74: bne         $v0, $zero, L_80039EB8
    if (ctx->r2 != 0) {
        // 0x80039C78: nop
    
            goto L_80039EB8;
    }
    // 0x80039C78: nop

L_80039C7C:
    // 0x80039C7C: jal         0x800281C8
    // 0x80039C80: addiu       $a0, $zero, 0x48
    ctx->r4 = ADD32(0, 0X48);
    func_800281C8_35C8(rdram, ctx);
        goto after_20;
    // 0x80039C80: addiu       $a0, $zero, 0x48
    ctx->r4 = ADD32(0, 0X48);
    after_20:
    // 0x80039C84: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80039C88: sltu        $v0, $zero, $s1
    ctx->r2 = 0 < ctx->r17 ? 1 : 0;
    // 0x80039C8C: sltu        $v1, $zero, $s3
    ctx->r3 = 0 < ctx->r19 ? 1 : 0;
    // 0x80039C90: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80039C94: beq         $v0, $zero, L_80039EB8
    if (ctx->r2 == 0) {
        // 0x80039C98: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80039EB8;
    }
    // 0x80039C98: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80039C9C: jal         0x8009A2B0
    // 0x80039CA0: addiu       $a1, $zero, 0x48
    ctx->r5 = ADD32(0, 0X48);
    bzero_recomp(rdram, ctx);
        goto after_21;
    // 0x80039CA0: addiu       $a1, $zero, 0x48
    ctx->r5 = ADD32(0, 0X48);
    after_21:
    // 0x80039CA4: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x80039CA8: sh          $v0, 0x40($s1)
    MEM_H(0X40, ctx->r17) = ctx->r2;
    // 0x80039CAC: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x80039CB0: sh          $v0, 0x42($s1)
    MEM_H(0X42, ctx->r17) = ctx->r2;
    // 0x80039CB4: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x80039CB8: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80039CBC: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x80039CC0: lw          $v1, 0x1C($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X1C);
    // 0x80039CC4: lw          $t5, 0x74($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X74);
    // 0x80039CC8: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x80039CCC: slt         $v0, $t5, $v1
    ctx->r2 = SIGNED(ctx->r13) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80039CD0: beq         $v0, $zero, L_80039CE0
    if (ctx->r2 == 0) {
        // 0x80039CD4: addu        $s4, $zero, $zero
        ctx->r20 = ADD32(0, 0);
            goto L_80039CE0;
    }
    // 0x80039CD4: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x80039CD8: j           L_80039CEC
    // 0x80039CDC: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
        goto L_80039CEC;
    // 0x80039CDC: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_80039CE0:
    // 0x80039CE0: slti        $v0, $v1, 0x1771
    ctx->r2 = SIGNED(ctx->r3) < 0X1771 ? 1 : 0;
    // 0x80039CE4: beql        $v0, $zero, L_80039CEC
    if (ctx->r2 == 0) {
        // 0x80039CE8: addiu       $s0, $zero, 0x2
        ctx->r16 = ADD32(0, 0X2);
            goto L_80039CEC;
    }
    goto skip_5;
    // 0x80039CE8: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
    skip_5:
L_80039CEC:
    // 0x80039CEC: lh          $v0, 0x6($s5)
    ctx->r2 = MEM_H(ctx->r21, 0X6);
    // 0x80039CF0: beql        $v0, $zero, L_80039CF8
    if (ctx->r2 == 0) {
        // 0x80039CF4: addiu       $s0, $s0, 0x3
        ctx->r16 = ADD32(ctx->r16, 0X3);
            goto L_80039CF8;
    }
    goto skip_6;
    // 0x80039CF4: addiu       $s0, $s0, 0x3
    ctx->r16 = ADD32(ctx->r16, 0X3);
    skip_6:
L_80039CF8:
    // 0x80039CF8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80039CFC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80039D00: lhu         $v0, 0x46($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X46);
    // 0x80039D04: andi        $v1, $s0, 0x7
    ctx->r3 = ctx->r16 & 0X7;
    // 0x80039D08: sll         $v1, $v1, 12
    ctx->r3 = S32(ctx->r3 << 12);
    // 0x80039D0C: andi        $v0, $v0, 0x8E00
    ctx->r2 = ctx->r2 & 0X8E00;
    // 0x80039D10: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80039D14: andi        $v1, $s7, 0x1FF
    ctx->r3 = ctx->r23 & 0X1FF;
    // 0x80039D18: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80039D1C: jal         0x8002C5A4
    // 0x80039D20: sh          $v0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r2;
    func_8002C5A4_79A4(rdram, ctx);
        goto after_22;
    // 0x80039D20: sh          $v0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r2;
    after_22:
    // 0x80039D24: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80039D28: lbu         $v0, -0x3A50($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3A50);
    // 0x80039D2C: bne         $v0, $zero, L_80039DB8
    if (ctx->r2 != 0) {
        // 0x80039D30: nop
    
            goto L_80039DB8;
    }
    // 0x80039D30: nop

    // 0x80039D34: lw          $t5, 0x54($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X54);
    // 0x80039D38: lhu         $v0, 0x0($t5)
    ctx->r2 = MEM_HU(ctx->r13, 0X0);
    // 0x80039D3C: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x80039D40: lhu         $a2, -0x2332($a2)
    ctx->r6 = MEM_HU(ctx->r6, -0X2332);
    // 0x80039D44: srl         $a1, $v0, 14
    ctx->r5 = S32(U32(ctx->r2) >> 14);
    // 0x80039D48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80039D4C: bne         $a2, $v0, L_80039D5C
    if (ctx->r6 != ctx->r2) {
        // 0x80039D50: sll         $v1, $a1, 2
        ctx->r3 = S32(ctx->r5 << 2);
            goto L_80039D5C;
    }
    // 0x80039D50: sll         $v1, $a1, 2
    ctx->r3 = S32(ctx->r5 << 2);
    // 0x80039D54: j           L_80039DB8
    // 0x80039D58: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
        goto L_80039DB8;
    // 0x80039D58: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_80039D5C:
    // 0x80039D5C: lw          $v0, 0x1C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X1C);
    // 0x80039D60: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80039D64: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80039D68: lw          $v1, -0x36A0($at)
    ctx->r3 = MEM_W(ctx->r1, -0X36A0);
    // 0x80039D6C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80039D70: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80039D74: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80039D78: beq         $v0, $zero, L_80039DAC
    if (ctx->r2 == 0) {
        // 0x80039D7C: addiu       $a0, $sp, 0x30
        ctx->r4 = ADD32(ctx->r29, 0X30);
            goto L_80039DAC;
    }
    // 0x80039D7C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x80039D80: lw          $v0, 0x14($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X14);
    // 0x80039D84: jal         0x80038DB8
    // 0x80039D88: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    func_80038DB8_141B8(rdram, ctx);
        goto after_23;
    // 0x80039D88: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    after_23:
    // 0x80039D8C: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80039D90: lhu         $v1, -0x2332($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X2332);
    // 0x80039D94: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x80039D98: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80039D9C: beql        $v1, $v0, L_80039DB8
    if (ctx->r3 == ctx->r2) {
        // 0x80039DA0: addiu       $s4, $zero, 0x2
        ctx->r20 = ADD32(0, 0X2);
            goto L_80039DB8;
    }
    goto skip_7;
    // 0x80039DA0: addiu       $s4, $zero, 0x2
    ctx->r20 = ADD32(0, 0X2);
    skip_7:
    // 0x80039DA4: j           L_80039DB8
    // 0x80039DA8: nop

        goto L_80039DB8;
    // 0x80039DA8: nop

L_80039DAC:
    // 0x80039DAC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80039DB0: beql        $a2, $v0, L_80039DB8
    if (ctx->r6 == ctx->r2) {
        // 0x80039DB4: addiu       $s4, $zero, 0x1
        ctx->r20 = ADD32(0, 0X1);
            goto L_80039DB8;
    }
    goto skip_8;
    // 0x80039DB4: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    skip_8:
L_80039DB8:
    // 0x80039DB8: beq         $s3, $zero, L_80039E34
    if (ctx->r19 == 0) {
        // 0x80039DBC: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80039E34;
    }
    // 0x80039DBC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80039DC0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80039DC4: lhu         $v0, 0x46($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X46);
    // 0x80039DC8: lui         $a2, 0x8008
    ctx->r6 = S32(0X8008 << 16);
    // 0x80039DCC: addiu       $a2, $a2, -0xD84
    ctx->r6 = ADD32(ctx->r6, -0XD84);
    // 0x80039DD0: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    // 0x80039DD4: addiu       $t5, $zero, -0xE01
    ctx->r13 = ADD32(0, -0XE01);
    // 0x80039DD8: and         $v0, $v0, $t5
    ctx->r2 = ctx->r2 & ctx->r13;
    // 0x80039DDC: ori         $v0, $v0, 0x600
    ctx->r2 = ctx->r2 | 0X600;
    // 0x80039DE0: jal         0x800283A8
    // 0x80039DE4: sh          $v0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r2;
    func_800283A8_37A8(rdram, ctx);
        goto after_24;
    // 0x80039DE4: sh          $v0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r2;
    after_24:
    // 0x80039DE8: jal         0x800281C8
    // 0x80039DEC: addiu       $a0, $zero, 0x48
    ctx->r4 = ADD32(0, 0X48);
    func_800281C8_35C8(rdram, ctx);
        goto after_25;
    // 0x80039DEC: addiu       $a0, $zero, 0x48
    ctx->r4 = ADD32(0, 0X48);
    after_25:
    // 0x80039DF0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80039DF4: beq         $s0, $zero, L_80039E5C
    if (ctx->r16 == 0) {
        // 0x80039DF8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80039E5C;
    }
    // 0x80039DF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80039DFC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80039E00: jal         0x8009A3B4
    // 0x80039E04: addiu       $a2, $zero, 0x48
    ctx->r6 = ADD32(0, 0X48);
    memcpy_recomp(rdram, ctx);
        goto after_26;
    // 0x80039E04: addiu       $a2, $zero, 0x48
    ctx->r6 = ADD32(0, 0X48);
    after_26:
    // 0x80039E08: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80039E0C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80039E10: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x80039E14: lui         $a2, 0x8008
    ctx->r6 = S32(0X8008 << 16);
    // 0x80039E18: addiu       $a2, $a2, -0xD84
    ctx->r6 = ADD32(ctx->r6, -0XD84);
    // 0x80039E1C: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x80039E20: addiu       $t5, $zero, -0xE01
    ctx->r13 = ADD32(0, -0XE01);
    // 0x80039E24: and         $v0, $v0, $t5
    ctx->r2 = ctx->r2 & ctx->r13;
    // 0x80039E28: ori         $v0, $v0, 0x800
    ctx->r2 = ctx->r2 | 0X800;
    // 0x80039E2C: j           L_80039E54
    // 0x80039E30: sh          $v0, 0x46($a3)
    MEM_H(0X46, ctx->r7) = ctx->r2;
        goto L_80039E54;
    // 0x80039E30: sh          $v0, 0x46($a3)
    MEM_H(0X46, ctx->r7) = ctx->r2;
L_80039E34:
    // 0x80039E34: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80039E38: lhu         $v0, 0x46($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X46);
    // 0x80039E3C: lui         $a2, 0x8008
    ctx->r6 = S32(0X8008 << 16);
    // 0x80039E40: addiu       $a2, $a2, -0xD84
    ctx->r6 = ADD32(ctx->r6, -0XD84);
    // 0x80039E44: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    // 0x80039E48: addiu       $t5, $zero, -0xE01
    ctx->r13 = ADD32(0, -0XE01);
    // 0x80039E4C: and         $v0, $v0, $t5
    ctx->r2 = ctx->r2 & ctx->r13;
    // 0x80039E50: sh          $v0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r2;
L_80039E54:
    // 0x80039E54: jal         0x800283A8
    // 0x80039E58: nop

    func_800283A8_37A8(rdram, ctx);
        goto after_27;
    // 0x80039E58: nop

    after_27:
L_80039E5C:
    // 0x80039E5C: beq         $s4, $zero, L_80039EB8
    if (ctx->r20 == 0) {
        // 0x80039E60: nop
    
            goto L_80039EB8;
    }
    // 0x80039E60: nop

    // 0x80039E64: jal         0x800281C8
    // 0x80039E68: addiu       $a0, $zero, 0x48
    ctx->r4 = ADD32(0, 0X48);
    func_800281C8_35C8(rdram, ctx);
        goto after_28;
    // 0x80039E68: addiu       $a0, $zero, 0x48
    ctx->r4 = ADD32(0, 0X48);
    after_28:
    // 0x80039E6C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80039E70: beq         $s0, $zero, L_80039EB8
    if (ctx->r16 == 0) {
        // 0x80039E74: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80039EB8;
    }
    // 0x80039E74: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80039E78: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80039E7C: jal         0x8009A3B4
    // 0x80039E80: addiu       $a2, $zero, 0x48
    ctx->r6 = ADD32(0, 0X48);
    memcpy_recomp(rdram, ctx);
        goto after_29;
    // 0x80039E80: addiu       $a2, $zero, 0x48
    ctx->r6 = ADD32(0, 0X48);
    after_29:
    // 0x80039E84: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80039E88: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80039E8C: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x80039E90: lui         $a2, 0x8008
    ctx->r6 = S32(0X8008 << 16);
    // 0x80039E94: addiu       $a2, $a2, -0xD84
    ctx->r6 = ADD32(ctx->r6, -0XD84);
    // 0x80039E98: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x80039E9C: addiu       $t5, $zero, -0xE01
    ctx->r13 = ADD32(0, -0XE01);
    // 0x80039EA0: sll         $v1, $s4, 9
    ctx->r3 = S32(ctx->r20 << 9);
    // 0x80039EA4: and         $v0, $v0, $t5
    ctx->r2 = ctx->r2 & ctx->r13;
    // 0x80039EA8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80039EAC: sh          $v0, 0x46($a3)
    MEM_H(0X46, ctx->r7) = ctx->r2;
L_80039EB0:
    // 0x80039EB0: jal         0x800283A8
    // 0x80039EB4: nop

    func_800283A8_37A8(rdram, ctx);
        goto after_30;
    // 0x80039EB4: nop

    after_30:
L_80039EB8:
    // 0x80039EB8: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80039EBC: lw          $v0, -0x4DD8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4DD8);
    // 0x80039EC0: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x80039EC4: slt         $v0, $s6, $v0
    ctx->r2 = SIGNED(ctx->r22) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80039EC8: bne         $v0, $zero, L_80039558
    if (ctx->r2 != 0) {
        // 0x80039ECC: nop
    
            goto L_80039558;
    }
    // 0x80039ECC: nop

L_80039ED0:
    // 0x80039ED0: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80039ED4: lw          $v0, -0x4DD4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4DD4);
    // 0x80039ED8: addiu       $fp, $fp, 0x1
    ctx->r30 = ADD32(ctx->r30, 0X1);
    // 0x80039EDC: slt         $v0, $fp, $v0
    ctx->r2 = SIGNED(ctx->r30) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80039EE0: bne         $v0, $zero, L_8003953C
    if (ctx->r2 != 0) {
        // 0x80039EE4: nop
    
            goto L_8003953C;
    }
    // 0x80039EE4: nop

L_80039EE8:
    // 0x80039EE8: lw          $ra, 0xAC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XAC);
    // 0x80039EEC: lw          $fp, 0xA8($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XA8);
    // 0x80039EF0: lw          $s7, 0xA4($sp)
    ctx->r23 = MEM_W(ctx->r29, 0XA4);
    // 0x80039EF4: lw          $s6, 0xA0($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XA0);
    // 0x80039EF8: lw          $s5, 0x9C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X9C);
    // 0x80039EFC: lw          $s4, 0x98($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X98);
    // 0x80039F00: lw          $s3, 0x94($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X94);
    // 0x80039F04: lw          $s2, 0x90($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X90);
    // 0x80039F08: lw          $s1, 0x8C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X8C);
    // 0x80039F0C: lw          $s0, 0x88($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X88);
    // 0x80039F10: jr          $ra
    // 0x80039F14: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    TRACE_RETURN()
    return;
    // 0x80039F14: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void __scHandleRDP(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8009B0CC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009B0D0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8009B0D4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8009B0D8: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8009B0DC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8009B0E0: lw          $a1, 0x278($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X278);
    // 0x8009B0E4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8009B0E8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8009B0EC: sw          $zero, 0x278($s1)
    MEM_W(0X278, ctx->r17) = 0;
    // 0x8009B0F0: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x8009B0F4: addiu       $v1, $zero, -0x2
    ctx->r3 = ADD32(0, -0X2);
    // 0x8009B0F8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8009B0FC: jal         0x8009B1B0
    // 0x8009B100: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    __scTaskComplete(rdram, ctx);
        goto after_0;
    // 0x8009B100: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    after_0:
    // 0x8009B104: lw          $v0, 0x274($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X274);
    // 0x8009B108: lw          $v1, 0x278($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X278);
    // 0x8009B10C: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8009B110: bne         $v1, $zero, L_8009B11C
    if (ctx->r3 != 0) {
        // 0x8009B114: sll         $s0, $v0, 1
        ctx->r16 = S32(ctx->r2 << 1);
            goto L_8009B11C;
    }
    // 0x8009B114: sll         $s0, $v0, 1
    ctx->r16 = S32(ctx->r2 << 1);
    // 0x8009B118: ori         $s0, $s0, 0x1
    ctx->r16 = ctx->r16 | 0X1;
L_8009B11C:
    // 0x8009B11C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8009B120: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8009B124: addiu       $a2, $sp, 0x14
    ctx->r6 = ADD32(ctx->r29, 0X14);
    // 0x8009B128: jal         0x8009B39C
    // 0x8009B12C: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    __scSchedule(rdram, ctx);
        goto after_1;
    // 0x8009B12C: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8009B130: beq         $v0, $s0, L_8009B148
    if (ctx->r2 == ctx->r16) {
        // 0x8009B134: nop
    
            goto L_8009B148;
    }
    // 0x8009B134: nop

    // 0x8009B138: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x8009B13C: lw          $a2, 0x14($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X14);
    // 0x8009B140: jal         0x8009B294
    // 0x8009B144: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    __scExec(rdram, ctx);
        goto after_2;
    // 0x8009B144: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
L_8009B148:
    // 0x8009B148: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8009B14C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8009B150: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8009B154: jr          $ra
    // 0x8009B158: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8009B158: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80077D64_53164(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80077D64: jr          $ra
    // 0x80077D68: nop

    TRACE_RETURN()
    return;
    // 0x80077D68: nop

;}
RECOMP_FUNC void func_80031E8C_D28C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80031E8C: jr          $ra
    // 0x80031E90: nop

    TRACE_RETURN()
    return;
    // 0x80031E90: nop

;}
RECOMP_FUNC void func_80056428_31828(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80056428: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x8005642C: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x80056430: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80056434: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x80056438: lb          $a0, -0x1CB8($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X1CB8);
    // 0x8005643C: lbu         $v1, 0x14($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X14);
    // 0x80056440: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x80056444: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80056448: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8005644C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80056450: sb          $v1, 0x14($a2)
    MEM_B(0X14, ctx->r6) = ctx->r3;
    // 0x80056454: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80056458: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x8005645C: lb          $a0, -0x1CB7($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X1CB7);
    // 0x80056460: lbu         $v1, 0x1C($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X1C);
    // 0x80056464: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x80056468: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8005646C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80056470: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80056474: sb          $v1, 0x1C($a2)
    MEM_B(0X1C, ctx->r6) = ctx->r3;
    // 0x80056478: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8005647C: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x80056480: lb          $a0, -0x1CB6($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X1CB6);
    // 0x80056484: lbu         $v1, 0x24($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X24);
    // 0x80056488: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x8005648C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80056490: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80056494: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80056498: sb          $v1, 0x24($a2)
    MEM_B(0X24, ctx->r6) = ctx->r3;
    // 0x8005649C: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x800564A0: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x800564A4: lb          $v1, -0x1CB5($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X1CB5);
    // 0x800564A8: lbu         $a0, 0x14($a2)
    ctx->r4 = MEM_BU(ctx->r6, 0X14);
    // 0x800564AC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x800564B0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800564B4: lbu         $v1, 0x2C($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X2C);
    // 0x800564B8: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x800564BC: sltiu       $a0, $a0, 0x47
    ctx->r4 = ctx->r4 < 0X47 ? 1 : 0;
    // 0x800564C0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x800564C4: bne         $a0, $zero, L_800564D4
    if (ctx->r4 != 0) {
        // 0x800564C8: sb          $v1, 0x2C($a2)
        MEM_B(0X2C, ctx->r6) = ctx->r3;
            goto L_800564D4;
    }
    // 0x800564C8: sb          $v1, 0x2C($a2)
    MEM_B(0X2C, ctx->r6) = ctx->r3;
    // 0x800564CC: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x800564D0: sb          $v0, 0x14($a2)
    MEM_B(0X14, ctx->r6) = ctx->r2;
L_800564D4:
    // 0x800564D4: lbu         $v0, 0x1C($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X1C);
    // 0x800564D8: sltiu       $v0, $v0, 0x47
    ctx->r2 = ctx->r2 < 0X47 ? 1 : 0;
    // 0x800564DC: bne         $v0, $zero, L_800564E8
    if (ctx->r2 != 0) {
        // 0x800564E0: addiu       $v0, $zero, 0x46
        ctx->r2 = ADD32(0, 0X46);
            goto L_800564E8;
    }
    // 0x800564E0: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x800564E4: sb          $v0, 0x1C($a2)
    MEM_B(0X1C, ctx->r6) = ctx->r2;
L_800564E8:
    // 0x800564E8: lbu         $v0, 0x24($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X24);
    // 0x800564EC: sltiu       $v0, $v0, 0x47
    ctx->r2 = ctx->r2 < 0X47 ? 1 : 0;
    // 0x800564F0: bne         $v0, $zero, L_800564FC
    if (ctx->r2 != 0) {
        // 0x800564F4: addiu       $v0, $zero, 0x46
        ctx->r2 = ADD32(0, 0X46);
            goto L_800564FC;
    }
    // 0x800564F4: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x800564F8: sb          $v0, 0x24($a2)
    MEM_B(0X24, ctx->r6) = ctx->r2;
L_800564FC:
    // 0x800564FC: lbu         $v0, 0x2C($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X2C);
    // 0x80056500: sltiu       $v0, $v0, 0x29
    ctx->r2 = ctx->r2 < 0X29 ? 1 : 0;
    // 0x80056504: bne         $v0, $zero, L_80056510
    if (ctx->r2 != 0) {
        // 0x80056508: addiu       $v0, $zero, 0x28
        ctx->r2 = ADD32(0, 0X28);
            goto L_80056510;
    }
    // 0x80056508: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x8005650C: sb          $v0, 0x2C($a2)
    MEM_B(0X2C, ctx->r6) = ctx->r2;
L_80056510:
    // 0x80056510: jr          $ra
    // 0x80056514: nop

    TRACE_RETURN()
    return;
    // 0x80056514: nop

;}
RECOMP_FUNC void func_8002A6D8_5AD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002A6D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002A6DC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8002A6E0: jal         0x8006033C
    // 0x8002A6E4: addiu       $a0, $zero, 0x1E1
    ctx->r4 = ADD32(0, 0X1E1);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8002A6E4: addiu       $a0, $zero, 0x1E1
    ctx->r4 = ADD32(0, 0X1E1);
    after_0:
    // 0x8002A6E8: bne         $v0, $zero, L_8002A6F4
    if (ctx->r2 != 0) {
        // 0x8002A6EC: addiu       $v0, $zero, 0x25
        ctx->r2 = ADD32(0, 0X25);
            goto L_8002A6F4;
    }
    // 0x8002A6EC: addiu       $v0, $zero, 0x25
    ctx->r2 = ADD32(0, 0X25);
    // 0x8002A6F0: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
L_8002A6F4:
    // 0x8002A6F4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x8002A6F8: sh          $v0, 0x6F60($at)
    MEM_H(0X6F60, ctx->r1) = ctx->r2;
    // 0x8002A6FC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8002A700: jr          $ra
    // 0x8002A704: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8002A704: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002A708: nop

    // 0x8002A70C: nop

;}
RECOMP_FUNC void func_80070F38_4C338(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80070F38: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x80070F3C: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80070F40: sll         $v1, $v0, 7
    ctx->r3 = S32(ctx->r2 << 7);
    // 0x80070F44: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80070F48: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80070F4C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80070F50: addiu       $v0, $v0, 0x49B0
    ctx->r2 = ADD32(ctx->r2, 0X49B0);
    // 0x80070F54: addu        $a2, $v1, $v0
    ctx->r6 = ADD32(ctx->r3, ctx->r2);
    // 0x80070F58: lhu         $v0, 0x6E($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X6E);
    // 0x80070F5C: lh          $v1, 0xB0($a2)
    ctx->r3 = MEM_H(ctx->r6, 0XB0);
    // 0x80070F60: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80070F64: sh          $v0, 0x6E($a2)
    MEM_H(0X6E, ctx->r6) = ctx->r2;
    // 0x80070F68: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80070F6C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80070F70: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
    // 0x80070F74: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80070F78: beq         $v1, $zero, L_80070F84
    if (ctx->r3 == 0) {
        // 0x80070F7C: addiu       $sp, $sp, -0x8
        ctx->r29 = ADD32(ctx->r29, -0X8);
            goto L_80070F84;
    }
    // 0x80070F7C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80070F80: sh          $a3, 0x6E($a2)
    MEM_H(0X6E, ctx->r6) = ctx->r7;
L_80070F84:
    // 0x80070F84: srl         $v0, $a0, 31
    ctx->r2 = S32(U32(ctx->r4) >> 31);
    // 0x80070F88: sltiu       $v1, $a1, 0x1
    ctx->r3 = ctx->r5 < 0X1 ? 1 : 0;
    // 0x80070F8C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80070F90: beq         $v0, $zero, L_80070FAC
    if (ctx->r2 == 0) {
        // 0x80070F94: nop
    
            goto L_80070FAC;
    }
    // 0x80070F94: nop

    // 0x80070F98: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80070F9C: addiu       $v1, $v1, -0x3BCC
    ctx->r3 = ADD32(ctx->r3, -0X3BCC);
    // 0x80070FA0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80070FA4: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80070FA8: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_80070FAC:
    // 0x80070FAC: jr          $ra
    // 0x80070FB0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x80070FB0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x80070FB4: nop

    // 0x80070FB8: nop

    // 0x80070FBC: nop

;}
RECOMP_FUNC void func_800511DC_2C5DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800511DC: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x800511E0: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x800511E4: lw          $a0, 0x988($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X988);
    // 0x800511E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800511EC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x800511F0: addiu       $a0, $a0, -0x20
    ctx->r4 = ADD32(ctx->r4, -0X20);
    // 0x800511F4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x800511F8: sw          $a0, 0x988($at)
    MEM_W(0X988, ctx->r1) = ctx->r4;
    // 0x800511FC: jal         0x8009A3B4
    // 0x80051200: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80051200: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_0:
    // 0x80051204: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80051208: jr          $ra
    // 0x8005120C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8005120C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8006219C_3D59C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006219C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x800621A0: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x800621A4: lui         $a2, 0x100
    ctx->r6 = S32(0X100 << 16);
    // 0x800621A8: and         $v0, $a0, $a2
    ctx->r2 = ctx->r4 & ctx->r6;
    // 0x800621AC: bne         $v0, $zero, L_800621D4
    if (ctx->r2 != 0) {
        // 0x800621B0: addiu       $sp, $sp, -0x8
        ctx->r29 = ADD32(ctx->r29, -0X8);
            goto L_800621D4;
    }
    // 0x800621B0: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800621B4: lw          $v1, 0x6C($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X6C);
    // 0x800621B8: or          $v0, $a0, $a2
    ctx->r2 = ctx->r4 | ctx->r6;
    // 0x800621BC: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x800621C0: lbu         $v0, 0x2($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X2);
    // 0x800621C4: lbu         $v1, 0x1($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X1);
    // 0x800621C8: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x800621CC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x800621D0: sh          $v1, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r3;
L_800621D4:
    // 0x800621D4: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x800621D8: lh          $a0, 0x4($a1)
    ctx->r4 = MEM_H(ctx->r5, 0X4);
    // 0x800621DC: lui         $v1, 0x1000
    ctx->r3 = S32(0X1000 << 16);
    // 0x800621E0: or          $a2, $v0, $v1
    ctx->r6 = ctx->r2 | ctx->r3;
    // 0x800621E4: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x800621E8: bgtz        $a0, L_80062210
    if (SIGNED(ctx->r4) > 0) {
        // 0x800621EC: sw          $a2, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r6;
            goto L_80062210;
    }
    // 0x800621EC: sw          $a2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r6;
    // 0x800621F0: lui         $v0, 0xFEFF
    ctx->r2 = S32(0XFEFF << 16);
    // 0x800621F4: lw          $v1, 0x6C($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X6C);
    // 0x800621F8: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x800621FC: and         $v0, $a2, $v0
    ctx->r2 = ctx->r6 & ctx->r2;
    // 0x80062200: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x80062204: addiu       $v1, $v1, 0x3
    ctx->r3 = ADD32(ctx->r3, 0X3);
    // 0x80062208: j           L_80062218
    // 0x8006220C: sw          $v1, 0x6C($a1)
    MEM_W(0X6C, ctx->r5) = ctx->r3;
        goto L_80062218;
    // 0x8006220C: sw          $v1, 0x6C($a1)
    MEM_W(0X6C, ctx->r5) = ctx->r3;
L_80062210:
    // 0x80062210: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80062214: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
L_80062218:
    // 0x80062218: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8006221C: jr          $ra
    // 0x80062220: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x80062220: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800607C4_3BBC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800607C4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800607C8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x800607CC: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x800607D0: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x800607D4: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x800607D8: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x800607DC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x800607E0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x800607E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x800607E8: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x800607EC: beq         $v0, $zero, L_80060884
    if (ctx->r2 == 0) {
        // 0x800607F0: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_80060884;
    }
    // 0x800607F0: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x800607F4: lui         $s5, 0x801E
    ctx->r21 = S32(0X801E << 16);
    // 0x800607F8: addiu       $s5, $s5, -0x71D8
    ctx->r21 = ADD32(ctx->r21, -0X71D8);
    // 0x800607FC: lui         $s4, 0x801C
    ctx->r20 = S32(0X801C << 16);
    // 0x80060800: addiu       $s4, $s4, -0x3A2C
    ctx->r20 = ADD32(ctx->r20, -0X3A2C);
    // 0x80060804: lui         $s3, 0x8000
    ctx->r19 = S32(0X8000 << 16);
    // 0x80060808: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
L_8006080C:
    // 0x8006080C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80060810: lw          $v1, 0x4($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X4);
    // 0x80060814: sll         $a0, $v0, 2
    ctx->r4 = S32(ctx->r2 << 2);
    // 0x80060818: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8006081C: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x80060820: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x80060824: jal         0x8005FA7C
    // 0x80060828: lbu         $s0, 0x0($a0)
    ctx->r16 = MEM_BU(ctx->r4, 0X0);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_0;
    // 0x80060828: lbu         $s0, 0x0($a0)
    ctx->r16 = MEM_BU(ctx->r4, 0X0);
    after_0:
    // 0x8006082C: sll         $v1, $s0, 2
    ctx->r3 = S32(ctx->r16 << 2);
    // 0x80060830: addu        $v0, $v1, $s4
    ctx->r2 = ADD32(ctx->r3, ctx->r20);
    // 0x80060834: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x80060838: addu        $v1, $v1, $s5
    ctx->r3 = ADD32(ctx->r3, ctx->r21);
    // 0x8006083C: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    // 0x80060840: lbu         $v0, 0x6($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X6);
    // 0x80060844: srlv        $s0, $s3, $s0
    ctx->r16 = S32(U32(ctx->r19) >> (ctx->r16 & 31));
    // 0x80060848: andi        $v0, $v0, 0xDF
    ctx->r2 = ctx->r2 & 0XDF;
    // 0x8006084C: sb          $v0, 0x6($a0)
    MEM_B(0X6, ctx->r4) = ctx->r2;
    // 0x80060850: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x80060854: lw          $v1, -0x5810($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5810);
    // 0x80060858: addiu       $v0, $s1, 0x1
    ctx->r2 = ADD32(ctx->r17, 0X1);
    // 0x8006085C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80060860: or          $v1, $v1, $s0
    ctx->r3 = ctx->r3 | ctx->r16;
    // 0x80060864: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80060868: sw          $v1, -0x5810($at)
    MEM_W(-0X5810, ctx->r1) = ctx->r3;
    // 0x8006086C: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x80060870: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80060874: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80060878: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8006087C: bne         $v0, $zero, L_8006080C
    if (ctx->r2 != 0) {
        // 0x80060880: sll         $v0, $s1, 16
        ctx->r2 = S32(ctx->r17 << 16);
            goto L_8006080C;
    }
    // 0x80060880: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
L_80060884:
    // 0x80060884: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80060888: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x8006088C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80060890: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80060894: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80060898: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8006089C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x800608A0: jr          $ra
    // 0x800608A4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x800608A4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8008DA74_68E74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008DA74: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8008DA78: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8008DA7C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8008DA80: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8008DA84: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8008DA88: lbu         $a1, 0x0($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X0);
    // 0x8008DA8C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8008DA90: slti        $v0, $a1, 0x80
    ctx->r2 = SIGNED(ctx->r5) < 0X80 ? 1 : 0;
    // 0x8008DA94: bne         $v0, $zero, L_8008DAB0
    if (ctx->r2 != 0) {
        // 0x8008DA98: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8008DAB0;
    }
    // 0x8008DA98: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8008DA9C: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x8008DAA0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8008DAA4: andi        $v0, $a1, 0x7F
    ctx->r2 = ctx->r5 & 0X7F;
    // 0x8008DAA8: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8008DAAC: addu        $a1, $v0, $v1
    ctx->r5 = ADD32(ctx->r2, ctx->r3);
L_8008DAB0:
    // 0x8008DAB0: lw          $v0, 0x48($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X48);
    // 0x8008DAB4: lh          $a2, 0x9E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X9E);
    // 0x8008DAB8: lh          $a3, 0xB0($s0)
    ctx->r7 = MEM_H(ctx->r16, 0XB0);
    // 0x8008DABC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8008DAC0: sw          $v0, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r2;
    // 0x8008DAC4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8008DAC8: jal         0x8008CE04
    // 0x8008DACC: lw          $a0, 0x78($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X78);
    func_8008CE04_68204(rdram, ctx);
        goto after_0;
    // 0x8008DACC: lw          $a0, 0x78($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X78);
    after_0:
    // 0x8008DAD0: lw          $v1, 0x48($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X48);
    // 0x8008DAD4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8008DAD8: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8008DADC: beq         $a1, $zero, L_8008DB2C
    if (ctx->r5 == 0) {
        // 0x8008DAE0: sw          $v1, 0x48($s0)
        MEM_W(0X48, ctx->r16) = ctx->r3;
            goto L_8008DB2C;
    }
    // 0x8008DAE0: sw          $v1, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r3;
    // 0x8008DAE4: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008DAE8: lw          $v0, 0x4F84($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4F84);
    // 0x8008DAEC: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x8008DAF0: lw          $v1, 0x4F8C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4F8C);
    // 0x8008DAF4: blez        $v0, L_8008DB2C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8008DAF8: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8008DB2C;
    }
    // 0x8008DAF8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8008DAFC: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x8008DB00: addiu       $v1, $v1, 0x7C
    ctx->r3 = ADD32(ctx->r3, 0X7C);
L_8008DB04:
    // 0x8008DB04: lw          $v0, -0x38($v1)
    ctx->r2 = MEM_W(ctx->r3, -0X38);
    // 0x8008DB08: bne         $v0, $a1, L_8008DB20
    if (ctx->r2 != ctx->r5) {
        // 0x8008DB0C: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_8008DB20;
    }
    // 0x8008DB0C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8008DB10: lw          $v0, 0x44($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X44);
    // 0x8008DB14: sw          $v0, -0x38($v1)
    MEM_W(-0X38, ctx->r3) = ctx->r2;
    // 0x8008DB18: lw          $v0, 0x7C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X7C);
    // 0x8008DB1C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_8008DB20:
    // 0x8008DB20: slt         $v0, $a0, $a2
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8008DB24: bne         $v0, $zero, L_8008DB04
    if (ctx->r2 != 0) {
        // 0x8008DB28: addiu       $v1, $v1, 0x13C
        ctx->r3 = ADD32(ctx->r3, 0X13C);
            goto L_8008DB04;
    }
    // 0x8008DB28: addiu       $v1, $v1, 0x13C
    ctx->r3 = ADD32(ctx->r3, 0X13C);
L_8008DB2C:
    // 0x8008DB2C: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x8008DB30: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8008DB34: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8008DB38: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8008DB3C: jr          $ra
    // 0x8008DB40: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8008DB40: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8003516C_1056C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003516C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80035170: lb          $v0, 0x4352($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4352);
    // 0x80035174: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
    // 0x80035178: jr          $ra
    // 0x8003517C: srl         $v0, $v0, 31
    ctx->r2 = S32(U32(ctx->r2) >> 31);
    TRACE_RETURN()
    return;
    // 0x8003517C: srl         $v0, $v0, 31
    ctx->r2 = S32(U32(ctx->r2) >> 31);
;}
RECOMP_FUNC void func_8007B4B0_568B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007B4B0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8007B4B4: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8007B4B8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8007B4BC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8007B4C0: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8007B4C4: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8007B4C8: lb          $s2, 0xC($s0)
    ctx->r18 = MEM_B(ctx->r16, 0XC);
    // 0x8007B4CC: jal         0x80053ED8
    // 0x8007B4D0: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_0;
    // 0x8007B4D0: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    after_0:
    // 0x8007B4D4: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x8007B4D8: beq         $v1, $zero, L_8007B518
    if (ctx->r3 == 0) {
        // 0x8007B4DC: addiu       $s1, $s0, 0x14
        ctx->r17 = ADD32(ctx->r16, 0X14);
            goto L_8007B518;
    }
    // 0x8007B4DC: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x8007B4E0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8007B4E4: addiu       $a1, $v0, 0x400
    ctx->r5 = ADD32(ctx->r2, 0X400);
    // 0x8007B4E8: jal         0x8009A3B4
    // 0x8007B4EC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8007B4EC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8007B4F0: beq         $s2, $zero, L_8007B550
    if (ctx->r18 == 0) {
        // 0x8007B4F4: lui         $t0, 0x2800
        ctx->r8 = S32(0X2800 << 16);
            goto L_8007B550;
    }
    // 0x8007B4F4: lui         $t0, 0x2800
    ctx->r8 = S32(0X2800 << 16);
    // 0x8007B4F8: ori         $t0, $t0, 0x8
    ctx->r8 = ctx->r8 | 0X8;
    // 0x8007B4FC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8007B500: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x8007B504: addiu       $a2, $s0, 0x2C
    ctx->r6 = ADD32(ctx->r16, 0X2C);
    // 0x8007B508: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8007B50C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8007B510: j           L_8007B570
    // 0x8007B514: addiu       $v0, $zero, 0x6000
    ctx->r2 = ADD32(0, 0X6000);
        goto L_8007B570;
    // 0x8007B514: addiu       $v0, $zero, 0x6000
    ctx->r2 = ADD32(0, 0X6000);
L_8007B518:
    // 0x8007B518: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8007B51C: addiu       $a1, $v0, 0x418
    ctx->r5 = ADD32(ctx->r2, 0X418);
    // 0x8007B520: jal         0x8009A3B4
    // 0x8007B524: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8007B524: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8007B528: beq         $s2, $zero, L_8007B550
    if (ctx->r18 == 0) {
        // 0x8007B52C: lui         $t0, 0x2800
        ctx->r8 = S32(0X2800 << 16);
            goto L_8007B550;
    }
    // 0x8007B52C: lui         $t0, 0x2800
    ctx->r8 = S32(0X2800 << 16);
    // 0x8007B530: ori         $t0, $t0, 0x8
    ctx->r8 = ctx->r8 | 0X8;
    // 0x8007B534: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8007B538: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x8007B53C: addiu       $a2, $s0, 0x2C
    ctx->r6 = ADD32(ctx->r16, 0X2C);
    // 0x8007B540: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8007B544: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8007B548: j           L_8007B570
    // 0x8007B54C: addiu       $v0, $zero, 0x6000
    ctx->r2 = ADD32(0, 0X6000);
        goto L_8007B570;
    // 0x8007B54C: addiu       $v0, $zero, 0x6000
    ctx->r2 = ADD32(0, 0X6000);
L_8007B550:
    // 0x8007B550: lui         $t0, 0x2800
    ctx->r8 = S32(0X2800 << 16);
    // 0x8007B554: ori         $t0, $t0, 0x8
    ctx->r8 = ctx->r8 | 0X8;
    // 0x8007B558: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8007B55C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x8007B560: addiu       $a2, $s0, 0x2C
    ctx->r6 = ADD32(ctx->r16, 0X2C);
    // 0x8007B564: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8007B568: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8007B56C: addiu       $v0, $zero, 0x4000
    ctx->r2 = ADD32(0, 0X4000);
L_8007B570:
    // 0x8007B570: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8007B574: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x8007B578: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x8007B57C: addiu       $v0, $s0, 0xC8
    ctx->r2 = ADD32(ctx->r16, 0XC8);
    // 0x8007B580: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8007B584: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8007B588: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x8007B58C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8007B590: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x8007B594: jal         0x80051F9C
    // 0x8007B598: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051F9C_2D39C(rdram, ctx);
        goto after_3;
    // 0x8007B598: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_3:
    // 0x8007B59C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8007B5A0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8007B5A4: jal         0x8009A3B4
    // 0x8007B5A8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8007B5A8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x8007B5AC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8007B5B0: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x8007B5B4: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8007B5B8: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8007B5BC: jr          $ra
    // 0x8007B5C0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8007B5C0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8003358C_E98C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003358C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80033590: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80033594: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80033598: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8003359C: addiu       $a0, $a0, 0x4400
    ctx->r4 = ADD32(ctx->r4, 0X4400);
    // 0x800335A0: andi        $v0, $a1, 0xFFF
    ctx->r2 = ctx->r5 & 0XFFF;
    // 0x800335A4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800335A8: lui         $s0, 0x8021
    ctx->r16 = S32(0X8021 << 16);
    // 0x800335AC: addiu       $s0, $s0, 0x990
    ctx->r16 = ADD32(ctx->r16, 0X990);
    // 0x800335B0: negu        $a2, $a2
    ctx->r6 = SUB32(0, ctx->r6);
    // 0x800335B4: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    // 0x800335B8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800335BC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x800335C0: sh          $a2, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r6;
    // 0x800335C4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800335C8: sh          $v0, 0x4402($at)
    MEM_H(0X4402, ctx->r1) = ctx->r2;
    // 0x800335CC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800335D0: sh          $zero, 0x4404($at)
    MEM_H(0X4404, ctx->r1) = 0;
    // 0x800335D4: jal         0x80031600
    // 0x800335D8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031600_CA00(rdram, ctx);
        goto after_0;
    // 0x800335D8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x800335DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x800335E0: addiu       $s1, $s0, 0x20
    ctx->r17 = ADD32(ctx->r16, 0X20);
    // 0x800335E4: jal         0x80031E10
    // 0x800335E8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_80031E10_D210(rdram, ctx);
        goto after_1;
    // 0x800335E8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x800335EC: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x800335F0: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x800335F4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x800335F8: lw          $v0, 0x4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4);
    // 0x800335FC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80033600: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80033604: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80033608: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
    // 0x8003360C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80033610: addiu       $a2, $s0, 0x34
    ctx->r6 = ADD32(ctx->r16, 0X34);
    // 0x80033614: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80033618: jal         0x80030AA0
    // 0x8003361C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80030AA0_BEA0(rdram, ctx);
        goto after_2;
    // 0x8003361C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_2:
    // 0x80033620: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x80033624: addiu       $a0, $a0, 0x4760
    ctx->r4 = ADD32(ctx->r4, 0X4760);
    // 0x80033628: lw          $v0, 0x10($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X10);
    // 0x8003362C: lw          $v1, 0x14($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X14);
    // 0x80033630: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80033634: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80033638: lui         $at, 0x8019
    ctx->r1 = S32(0X8019 << 16);
    // 0x8003363C: sh          $v0, 0x5E90($at)
    MEM_H(0X5E90, ctx->r1) = ctx->r2;
    // 0x80033640: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80033644: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80033648: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003364C: sw          $v0, 0x43E0($at)
    MEM_W(0X43E0, ctx->r1) = ctx->r2;
    // 0x80033650: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x80033654: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    // 0x80033658: lui         $at, 0x8019
    ctx->r1 = S32(0X8019 << 16);
    // 0x8003365C: sh          $v1, 0x5E92($at)
    MEM_H(0X5E92, ctx->r1) = ctx->r3;
    // 0x80033660: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80033664: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80033668: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003366C: sw          $v1, 0x43E4($at)
    MEM_W(0X43E4, ctx->r1) = ctx->r3;
    // 0x80033670: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80033674: lui         $at, 0x8019
    ctx->r1 = S32(0X8019 << 16);
    // 0x80033678: sh          $v0, 0x5E94($at)
    MEM_H(0X5E94, ctx->r1) = ctx->r2;
    // 0x8003367C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80033680: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80033684: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80033688: sw          $v0, 0x43E8($at)
    MEM_W(0X43E8, ctx->r1) = ctx->r2;
    // 0x8003368C: jal         0x8009A3B4
    // 0x80033690: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80033690: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_3:
    // 0x80033694: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80033698: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8003369C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x800336A0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800336A4: jr          $ra
    // 0x800336A8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x800336A8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80065588_40988(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80065588: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006558C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80065590: lw          $a2, 0x14($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X14);
    // 0x80065594: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x80065598: lw          $a1, -0x2378($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X2378);
    // 0x8006559C: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x800655A0: sw          $a2, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r6;
    // 0x800655A4: jal         0x80069518
    // 0x800655A8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80069518_44918(rdram, ctx);
        goto after_0;
    // 0x800655A8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x800655AC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x800655B0: jr          $ra
    // 0x800655B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x800655B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80075BFC_50FFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80075BFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80075C00: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80075C04: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80075C08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80075C0C: lb          $v1, 0x6($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X6);
    // 0x80075C10: beq         $v1, $zero, L_80075C28
    if (ctx->r3 == 0) {
        // 0x80075C14: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80075C28;
    }
    // 0x80075C14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80075C18: beq         $v1, $v0, L_80075C80
    if (ctx->r3 == ctx->r2) {
        // 0x80075C1C: lui         $v1, 0x8
        ctx->r3 = S32(0X8 << 16);
            goto L_80075C80;
    }
    // 0x80075C1C: lui         $v1, 0x8
    ctx->r3 = S32(0X8 << 16);
    // 0x80075C20: j           L_80075CA0
    // 0x80075C24: nop

        goto L_80075CA0;
    // 0x80075C24: nop

L_80075C28:
    // 0x80075C28: jal         0x80061724
    // 0x80075C2C: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_0;
    // 0x80075C2C: nop

    after_0:
    // 0x80075C30: lb          $v1, 0x4($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X4);
    // 0x80075C34: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80075C38: bne         $v1, $v0, L_80075C4C
    if (ctx->r3 != ctx->r2) {
        // 0x80075C3C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80075C4C;
    }
    // 0x80075C3C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80075C40: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80075C44: j           L_80075C54
    // 0x80075C48: lw          $a1, 0x280C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X280C);
        goto L_80075C54;
    // 0x80075C48: lw          $a1, 0x280C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X280C);
L_80075C4C:
    // 0x80075C4C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80075C50: lw          $a1, 0x2860($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2860);
L_80075C54:
    // 0x80075C54: jal         0x80061510
    // 0x80075C58: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_1;
    // 0x80075C58: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_1:
    // 0x80075C5C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80075C60: lw          $a1, 0x2824($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2824);
    // 0x80075C64: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80075C68: jal         0x80061510
    // 0x80075C6C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_2;
    // 0x80075C6C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_2:
    // 0x80075C70: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x80075C74: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80075C78: j           L_80075C9C
    // 0x80075C7C: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
        goto L_80075C9C;
    // 0x80075C7C: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
L_80075C80:
    // 0x80075C80: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80075C84: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80075C88: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80075C8C: beq         $v0, $zero, L_80075C9C
    if (ctx->r2 == 0) {
        // 0x80075C90: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80075C9C;
    }
    // 0x80075C90: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80075C94: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x80075C98: sh          $zero, 0x6($s0)
    MEM_H(0X6, ctx->r16) = 0;
L_80075C9C:
    // 0x80075C9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80075CA0:
    // 0x80075CA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80075CA4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80075CA8: jr          $ra
    // 0x80075CAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80075CAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80069E20_45220(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80069E20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80069E24: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80069E28: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80069E2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80069E30: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80069E34: bne         $v0, $zero, L_80069EAC
    if (ctx->r2 != 0) {
        // 0x80069E38: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80069EAC;
    }
    // 0x80069E38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80069E3C: lbu         $v1, 0xB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB);
    // 0x80069E40: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80069E44: bne         $v1, $zero, L_80069E54
    if (ctx->r3 != 0) {
        // 0x80069E48: sh          $zero, 0x48($s0)
        MEM_H(0X48, ctx->r16) = 0;
            goto L_80069E54;
    }
    // 0x80069E48: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80069E4C: j           L_80069E58
    // 0x80069E50: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
        goto L_80069E58;
    // 0x80069E50: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
L_80069E54:
    // 0x80069E54: addiu       $v0, $zero, -0x50
    ctx->r2 = ADD32(0, -0X50);
L_80069E58:
    // 0x80069E58: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80069E5C: lbu         $v0, 0x174($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X174);
    // 0x80069E60: ori         $v1, $v0, 0x4
    ctx->r3 = ctx->r2 | 0X4;
    // 0x80069E64: andi        $v0, $v1, 0xC0
    ctx->r2 = ctx->r3 & 0XC0;
    // 0x80069E68: bne         $v0, $zero, L_80069E7C
    if (ctx->r2 != 0) {
        // 0x80069E6C: sb          $v1, 0x174($s0)
        MEM_B(0X174, ctx->r16) = ctx->r3;
            goto L_80069E7C;
    }
    // 0x80069E6C: sb          $v1, 0x174($s0)
    MEM_B(0X174, ctx->r16) = ctx->r3;
    // 0x80069E70: lb          $v0, 0x177($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X177);
    // 0x80069E74: beq         $v0, $zero, L_80069EAC
    if (ctx->r2 == 0) {
        // 0x80069E78: nop
    
            goto L_80069EAC;
    }
    // 0x80069E78: nop

L_80069E7C:
    // 0x80069E7C: andi        $v0, $v1, 0x40
    ctx->r2 = ctx->r3 & 0X40;
    // 0x80069E80: beq         $v0, $zero, L_80069E94
    if (ctx->r2 == 0) {
        // 0x80069E84: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80069E94;
    }
    // 0x80069E84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80069E88: lbu         $a2, 0x100($a0)
    ctx->r6 = MEM_BU(ctx->r4, 0X100);
    // 0x80069E8C: j           L_80069E9C
    // 0x80069E90: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
        goto L_80069E9C;
    // 0x80069E90: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
L_80069E94:
    // 0x80069E94: lbu         $a2, 0x100($a0)
    ctx->r6 = MEM_BU(ctx->r4, 0X100);
    // 0x80069E98: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
L_80069E9C:
    // 0x80069E9C: jal         0x8006FB90
    // 0x80069EA0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8006FB90_4AF90(rdram, ctx);
        goto after_0;
    // 0x80069EA0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x80069EA4: j           L_80069F48
    // 0x80069EA8: nop

        goto L_80069F48;
    // 0x80069EA8: nop

L_80069EAC:
    // 0x80069EAC: lb          $v0, 0x174($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X174);
    // 0x80069EB0: andi        $v0, $v0, 0xC0
    ctx->r2 = ctx->r2 & 0XC0;
    // 0x80069EB4: bne         $v0, $zero, L_80069F48
    if (ctx->r2 != 0) {
        // 0x80069EB8: nop
    
            goto L_80069F48;
    }
    // 0x80069EB8: nop

    // 0x80069EBC: lb          $v0, 0x177($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X177);
    // 0x80069EC0: bne         $v0, $zero, L_80069F48
    if (ctx->r2 != 0) {
        // 0x80069EC4: nop
    
            goto L_80069F48;
    }
    // 0x80069EC4: nop

    // 0x80069EC8: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80069ECC: bne         $v0, $zero, L_80069EF4
    if (ctx->r2 != 0) {
        // 0x80069ED0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80069EF4;
    }
    // 0x80069ED0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80069ED4: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x80069ED8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80069EDC: jal         0x8006FB90
    // 0x80069EE0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8006FB90_4AF90(rdram, ctx);
        goto after_1;
    // 0x80069EE0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x80069EE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80069EE8: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x80069EEC: j           L_80069F10
    // 0x80069EF0: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
        goto L_80069F10;
    // 0x80069EF0: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
L_80069EF4:
    // 0x80069EF4: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x80069EF8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80069EFC: jal         0x8006FB90
    // 0x80069F00: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8006FB90_4AF90(rdram, ctx);
        goto after_2;
    // 0x80069F00: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x80069F04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80069F08: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80069F0C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
L_80069F10:
    // 0x80069F10: jal         0x8006FDAC
    // 0x80069F14: nop

    func_8006FDAC_4B1AC(rdram, ctx);
        goto after_3;
    // 0x80069F14: nop

    after_3:
    // 0x80069F18: lb          $v0, 0xA6($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA6);
    // 0x80069F1C: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80069F20: beq         $v0, $zero, L_80069F34
    if (ctx->r2 == 0) {
        // 0x80069F24: addiu       $a0, $zero, 0x90
        ctx->r4 = ADD32(0, 0X90);
            goto L_80069F34;
    }
    // 0x80069F24: addiu       $a0, $zero, 0x90
    ctx->r4 = ADD32(0, 0X90);
    // 0x80069F28: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80069F2C: jal         0x8002A2F8
    // 0x80069F30: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_4;
    // 0x80069F30: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
L_80069F34:
    // 0x80069F34: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80069F38: lh          $a1, 0x44($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X44);
    // 0x80069F3C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80069F40: jal         0x8006FC34
    // 0x80069F44: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8006FC34_4B034(rdram, ctx);
        goto after_5;
    // 0x80069F44: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_5:
L_80069F48:
    // 0x80069F48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80069F4C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80069F50: jr          $ra
    // 0x80069F54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80069F54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80028600_3A00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80028600: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80028604: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80028608: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x8002860C: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x80028610: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80028614: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80028618: sll         $s0, $a0, 1
    ctx->r16 = S32(ctx->r4 << 1);
    // 0x8002861C: addu        $s0, $s0, $a0
    ctx->r16 = ADD32(ctx->r16, ctx->r4);
    // 0x80028620: sll         $s0, $s0, 4
    ctx->r16 = S32(ctx->r16 << 4);
    // 0x80028624: addu        $s0, $s0, $a0
    ctx->r16 = ADD32(ctx->r16, ctx->r4);
    // 0x80028628: sll         $s0, $s0, 3
    ctx->r16 = S32(ctx->r16 << 3);
    // 0x8002862C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80028630: addiu       $v0, $v0, 0x47F0
    ctx->r2 = ADD32(ctx->r2, 0X47F0);
    // 0x80028634: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x80028638: addiu       $a0, $s0, 0x100
    ctx->r4 = ADD32(ctx->r16, 0X100);
    // 0x8002863C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80028640: jal         0x8009A3B4
    // 0x80028644: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80028644: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x80028648: sh          $s1, 0x140($s0)
    MEM_H(0X140, ctx->r16) = ctx->r17;
    // 0x8002864C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80028650: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80028654: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80028658: jr          $ra
    // 0x8002865C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8002865C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800371E8_125E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800371E8: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x800371EC: lhu         $v1, 0x5448($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X5448);
    // 0x800371F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800371F4: addiu       $v0, $zero, 0x504
    ctx->r2 = ADD32(0, 0X504);
    // 0x800371F8: bne         $v1, $v0, L_80037214
    if (ctx->r3 != ctx->r2) {
        // 0x800371FC: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_80037214;
    }
    // 0x800371FC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80037200: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80037204: lb          $v1, -0x3B96($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3B96);
    // 0x80037208: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8003720C: beq         $v1, $v0, L_8003721C
    if (ctx->r3 == ctx->r2) {
        // 0x80037210: nop
    
            goto L_8003721C;
    }
    // 0x80037210: nop

L_80037214:
    // 0x80037214: jal         0x80061724
    // 0x80037218: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_0;
    // 0x80037218: nop

    after_0:
L_8003721C:
    // 0x8003721C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80037220: addiu       $v1, $v1, -0xC6E
    ctx->r3 = ADD32(ctx->r3, -0XC6E);
    // 0x80037224: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80037228: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003722C: sb          $zero, -0xC6D($at)
    MEM_B(-0XC6D, ctx->r1) = 0;
    // 0x80037230: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80037234: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80037238: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8003723C: jr          $ra
    // 0x80037240: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80037240: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8007F2A8_5A6A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007F2A8: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x8007F2AC: lw          $a1, -0x2658($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X2658);
    // 0x8007F2B0: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x8007F2B4: lw          $a2, -0x2654($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X2654);
    // 0x8007F2B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007F2BC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8007F2C0: jal         0x8007E8D4
    // 0x8007F2C4: nop

    func_8007E8D4_59CD4(rdram, ctx);
        goto after_0;
    // 0x8007F2C4: nop

    after_0:
    // 0x8007F2C8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8007F2CC: jr          $ra
    // 0x8007F2D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8007F2D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8002C69C_7A9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002C69C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002C6A0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8002C6A4: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8002C6A8: addiu       $a1, $a1, -0x78C0
    ctx->r5 = ADD32(ctx->r5, -0X78C0);
    // 0x8002C6AC: jal         0x8009A3B4
    // 0x8002C6B0: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8002C6B0: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    after_0:
    // 0x8002C6B4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8002C6B8: jr          $ra
    // 0x8002C6BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8002C6BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8008D704_68B04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008D704: sb          $zero, 0xD7($a0)
    MEM_B(0XD7, ctx->r4) = 0;
    // 0x8008D708: jr          $ra
    // 0x8008D70C: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    TRACE_RETURN()
    return;
    // 0x8008D70C: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
;}
RECOMP_FUNC void func_8009F550_7A950(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8009F550: nop

    // 0x8009F554: nop

    // 0x8009F558: nop

    // 0x8009F55C: nop

    // 0x8009F560: nop

    // 0x8009F564: nop

    // 0x8009F568: nop

    // 0x8009F56C: nop

    // 0x8009F570: nop

    // 0x8009F574: nop

    // 0x8009F578: nop

    // 0x8009F57C: nop

    // 0x8009F580: nop

    // 0x8009F584: nop

    // 0x8009F588: nop

    // 0x8009F58C: nop

    // 0x8009F590: nop

    // 0x8009F594: nop

    // 0x8009F598: nop

    // 0x8009F59C: nop

    // 0x8009F5A0: nop

    // 0x8009F5A4: nop

    // 0x8009F5A8: nop

    // 0x8009F5AC: nop

;}
RECOMP_FUNC void func_80091510_6C910(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80091510: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80091514: lw          $v0, -0xEEC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XEEC);
    // 0x80091518: jr          $ra
    // 0x8009151C: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    TRACE_RETURN()
    return;
    // 0x8009151C: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
;}
RECOMP_FUNC void func_80031F0C_D30C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80031F0C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80031F10: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x80031F14: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80031F18: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x80031F1C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80031F20: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x80031F24: addiu       $s0, $s0, -0x3F58
    ctx->r16 = ADD32(ctx->r16, -0X3F58);
    // 0x80031F28: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80031F2C: addiu       $a0, $a0, -0x22C0
    ctx->r4 = ADD32(ctx->r4, -0X22C0);
    // 0x80031F30: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80031F34: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80031F38: jal         0x800308E8
    // 0x80031F3C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_800308E8_BCE8(rdram, ctx);
        goto after_0;
    // 0x80031F3C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80031F40: lw          $a3, 0x0($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X0);
    // 0x80031F44: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80031F48: lw          $v0, 0x46A0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X46A0);
    // 0x80031F4C: lui         $v1, 0x8019
    ctx->r3 = S32(0X8019 << 16);
    // 0x80031F50: lw          $v1, 0x5470($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X5470);
    // 0x80031F54: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x80031F58: srl         $v0, $v1, 31
    ctx->r2 = S32(U32(ctx->r3) >> 31);
    // 0x80031F5C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80031F60: sra         $v1, $v1, 1
    ctx->r3 = S32(SIGNED(ctx->r3) >> 1);
    // 0x80031F64: mult        $v1, $a3
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80031F68: mflo        $a0
    ctx->r4 = lo;
    // 0x80031F6C: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x80031F70: lw          $a1, -0x3F50($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3F50);
    // 0x80031F74: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80031F78: lw          $v0, 0x46A8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X46A8);
    // 0x80031F7C: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80031F80: ori         $v0, $a1, 0x1
    ctx->r2 = ctx->r5 | 0X1;
    // 0x80031F84: div         $zero, $a0, $v0
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r2)));
    // 0x80031F88: bne         $v0, $zero, L_80031F94
    if (ctx->r2 != 0) {
        // 0x80031F8C: nop
    
            goto L_80031F94;
    }
    // 0x80031F8C: nop

    // 0x80031F90: break       7
    do_break(2147688336);
L_80031F94:
    // 0x80031F94: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80031F98: bne         $v0, $at, L_80031FAC
    if (ctx->r2 != ctx->r1) {
        // 0x80031F9C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80031FAC;
    }
    // 0x80031F9C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80031FA0: bne         $a0, $at, L_80031FAC
    if (ctx->r4 != ctx->r1) {
        // 0x80031FA4: nop
    
            goto L_80031FAC;
    }
    // 0x80031FA4: nop

    // 0x80031FA8: break       6
    do_break(2147688360);
L_80031FAC:
    // 0x80031FAC: mflo        $a0
    ctx->r4 = lo;
    // 0x80031FB0: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x80031FB4: lw          $a2, 0x46A4($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X46A4);
    // 0x80031FB8: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x80031FBC: lw          $t0, 0x4698($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X4698);
    // 0x80031FC0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80031FC4: lw          $v0, -0x3F54($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3F54);
    // 0x80031FC8: sw          $a3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r7;
    // 0x80031FCC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80031FD0: sw          $a1, -0x3F50($at)
    MEM_W(-0X3F50, ctx->r1) = ctx->r5;
    // 0x80031FD4: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80031FD8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80031FDC: sw          $v0, -0x3F54($at)
    MEM_W(-0X3F54, ctx->r1) = ctx->r2;
    // 0x80031FE0: addu        $a0, $a0, $t0
    ctx->r4 = ADD32(ctx->r4, ctx->r8);
    // 0x80031FE4: sh          $a0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r4;
    // 0x80031FE8: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80031FEC: lw          $v0, -0x3F54($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3F54);
    // 0x80031FF0: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80031FF4: mflo        $v1
    ctx->r3 = lo;
    // 0x80031FF8: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80031FFC: lw          $v0, -0x3F50($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3F50);
    // 0x80032000: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80032004: div         $zero, $v1, $v0
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r2)));
    // 0x80032008: bne         $v0, $zero, L_80032014
    if (ctx->r2 != 0) {
        // 0x8003200C: nop
    
            goto L_80032014;
    }
    // 0x8003200C: nop

    // 0x80032010: break       7
    do_break(2147688464);
L_80032014:
    // 0x80032014: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80032018: bne         $v0, $at, L_8003202C
    if (ctx->r2 != ctx->r1) {
        // 0x8003201C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8003202C;
    }
    // 0x8003201C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80032020: bne         $v1, $at, L_8003202C
    if (ctx->r3 != ctx->r1) {
        // 0x80032024: nop
    
            goto L_8003202C;
    }
    // 0x80032024: nop

    // 0x80032028: break       6
    do_break(2147688488);
L_8003202C:
    // 0x8003202C: mflo        $v1
    ctx->r3 = lo;
    // 0x80032030: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80032034: lw          $v0, -0x2328($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2328);
    // 0x80032038: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8003203C: sh          $v1, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r3;
    // 0x80032040: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80032044: lw          $v0, -0x3F50($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3F50);
    // 0x80032048: bltzl       $v0, L_80032050
    if (SIGNED(ctx->r2) < 0) {
        // 0x8003204C: addiu       $v0, $v0, 0x3
        ctx->r2 = ADD32(ctx->r2, 0X3);
            goto L_80032050;
    }
    goto skip_0;
    // 0x8003204C: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    skip_0:
L_80032050:
    // 0x80032050: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
    // 0x80032054: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80032058: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8003205C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80032060: jr          $ra
    // 0x80032064: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80032064: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80062168_3D568(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80062168: lw          $v1, 0x6C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X6C);
    // 0x8006216C: lw          $v0, 0x6C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X6C);
    // 0x80062170: lbu         $a1, 0x1($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X1);
    // 0x80062174: lbu         $v1, 0x2($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X2);
    // 0x80062178: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x8006217C: sw          $v0, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r2;
    // 0x80062180: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80062184: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x80062188: or          $a1, $a1, $v1
    ctx->r5 = ctx->r5 | ctx->r3;
    // 0x8006218C: sb          $a1, 0x3F($a0)
    MEM_B(0X3F, ctx->r4) = ctx->r5;
    // 0x80062190: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x80062194: jr          $ra
    // 0x80062198: sh          $a1, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x80062198: sh          $a1, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_8003480C_FC0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003480C: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80034810: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034814: sw          $v0, 0x435C($at)
    MEM_W(0X435C, ctx->r1) = ctx->r2;
    // 0x80034818: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8003481C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80034820: sw          $v0, -0x725C($at)
    MEM_W(-0X725C, ctx->r1) = ctx->r2;
    // 0x80034824: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034828: sw          $v0, 0x4354($at)
    MEM_W(0X4354, ctx->r1) = ctx->r2;
    // 0x8003482C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80034830: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034834: sb          $v0, 0x4352($at)
    MEM_B(0X4352, ctx->r1) = ctx->r2;
    // 0x80034838: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003483C: jr          $ra
    // 0x80034840: sb          $zero, 0x4DFD($at)
    MEM_B(0X4DFD, ctx->r1) = 0;
    TRACE_RETURN()
    return;
    // 0x80034840: sb          $zero, 0x4DFD($at)
    MEM_B(0X4DFD, ctx->r1) = 0;
;}
RECOMP_FUNC void func_8002A488_5888(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002A488: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002A48C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8002A490: jal         0x8002BEC4
    // 0x8002A494: nop

    func_8002BEC4_72C4(rdram, ctx);
        goto after_0;
    // 0x8002A494: nop

    after_0:
    // 0x8002A498: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8002A49C: jr          $ra
    // 0x8002A4A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8002A4A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800472C0_226C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800472C0: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x800472C4: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x800472C8: beq         $v0, $zero, L_800472E8
    if (ctx->r2 == 0) {
        // 0x800472CC: nop
    
            goto L_800472E8;
    }
    // 0x800472CC: nop

    // 0x800472D0: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x800472D4: lw          $v0, -0x72D4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X72D4);
    // 0x800472D8: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    // 0x800472DC: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800472E0: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x800472E4: sw          $v0, -0x72D4($at)
    MEM_W(-0X72D4, ctx->r1) = ctx->r2;
L_800472E8:
    // 0x800472E8: jr          $ra
    // 0x800472EC: sh          $zero, 0x7C($a0)
    MEM_H(0X7C, ctx->r4) = 0;
    TRACE_RETURN()
    return;
    // 0x800472EC: sh          $zero, 0x7C($a0)
    MEM_H(0X7C, ctx->r4) = 0;
;}
RECOMP_FUNC void func_80074DEC_501EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80074DEC: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x80074DF0: lui         $a3, 0x8019
    ctx->r7 = S32(0X8019 << 16);
    // 0x80074DF4: addiu       $a3, $a3, 0x3C70
    ctx->r7 = ADD32(ctx->r7, 0X3C70);
    // 0x80074DF8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80074DFC: addu        $v1, $sp, $zero
    ctx->r3 = ADD32(ctx->r29, 0);
L_80074E00:
    // 0x80074E00: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x80074E04: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80074E08: sltiu       $v0, $a1, 0x3
    ctx->r2 = ctx->r5 < 0X3 ? 1 : 0;
    // 0x80074E0C: bne         $v0, $zero, L_80074E00
    if (ctx->r2 != 0) {
        // 0x80074E10: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_80074E00;
    }
    // 0x80074E10: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80074E14: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80074E18: addu        $t0, $a3, $zero
    ctx->r8 = ADD32(ctx->r7, 0);
L_80074E1C:
    // 0x80074E1C: lw          $a2, 0x0($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X0);
    // 0x80074E20: lw          $a0, 0x0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X0);
    // 0x80074E24: sll         $v1, $a2, 16
    ctx->r3 = S32(ctx->r6 << 16);
    // 0x80074E28: srl         $v0, $a2, 16
    ctx->r2 = S32(U32(ctx->r6) >> 16);
    // 0x80074E2C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80074E30: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x80074E34: andi        $v0, $a1, 0x1
    ctx->r2 = ctx->r5 & 0X1;
    // 0x80074E38: beq         $v0, $zero, L_80074E5C
    if (ctx->r2 == 0) {
        // 0x80074E3C: sw          $a0, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r4;
            goto L_80074E5C;
    }
    // 0x80074E3C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80074E40: lw          $v0, 0x70($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X70);
    // 0x80074E44: lw          $v1, 0x4($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4);
    // 0x80074E48: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80074E4C: xor         $v0, $a2, $v0
    ctx->r2 = ctx->r6 ^ ctx->r2;
    // 0x80074E50: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80074E54: j           L_80074E74
    // 0x80074E58: sw          $v1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r3;
        goto L_80074E74;
    // 0x80074E58: sw          $v1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r3;
L_80074E5C:
    // 0x80074E5C: lw          $v0, 0x70($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X70);
    // 0x80074E60: lw          $v1, 0x8($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X8);
    // 0x80074E64: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80074E68: xor         $v0, $a2, $v0
    ctx->r2 = ctx->r6 ^ ctx->r2;
    // 0x80074E6C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80074E70: sw          $v1, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r3;
L_80074E74:
    // 0x80074E74: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80074E78: sltiu       $v0, $a1, 0x8
    ctx->r2 = ctx->r5 < 0X8 ? 1 : 0;
    // 0x80074E7C: bne         $v0, $zero, L_80074E1C
    if (ctx->r2 != 0) {
        // 0x80074E80: addiu       $t0, $t0, 0x4
        ctx->r8 = ADD32(ctx->r8, 0X4);
            goto L_80074E1C;
    }
    // 0x80074E80: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x80074E84: lw          $a1, 0x70($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X70);
    // 0x80074E88: lw          $v0, 0x0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X0);
    // 0x80074E8C: lw          $v1, 0x74($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X74);
    // 0x80074E90: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x80074E94: bne         $v1, $v0, L_8007547C
    if (ctx->r3 != ctx->r2) {
        // 0x80074E98: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8007547C;
    }
    // 0x80074E98: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80074E9C: lui         $v0, 0xE1E1
    ctx->r2 = S32(0XE1E1 << 16);
    // 0x80074EA0: ori         $v0, $v0, 0xE1E1
    ctx->r2 = ctx->r2 | 0XE1E1;
    // 0x80074EA4: lw          $v1, 0x4($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4);
    // 0x80074EA8: lw          $a0, 0x78($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X78);
    // 0x80074EAC: xor         $v0, $a1, $v0
    ctx->r2 = ctx->r5 ^ ctx->r2;
    // 0x80074EB0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80074EB4: bne         $a0, $v0, L_8007547C
    if (ctx->r4 != ctx->r2) {
        // 0x80074EB8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8007547C;
    }
    // 0x80074EB8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80074EBC: lui         $v0, 0x5757
    ctx->r2 = S32(0X5757 << 16);
    // 0x80074EC0: ori         $v0, $v0, 0x5757
    ctx->r2 = ctx->r2 | 0X5757;
    // 0x80074EC4: lw          $v1, 0x8($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X8);
    // 0x80074EC8: lw          $a0, 0x7C($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X7C);
    // 0x80074ECC: xor         $v0, $a1, $v0
    ctx->r2 = ctx->r5 ^ ctx->r2;
    // 0x80074ED0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80074ED4: bne         $a0, $v0, L_8007547C
    if (ctx->r4 != ctx->r2) {
        // 0x80074ED8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8007547C;
    }
    // 0x80074ED8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80074EDC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80074EE0: addu        $v1, $sp, $zero
    ctx->r3 = ADD32(ctx->r29, 0);
L_80074EE4:
    // 0x80074EE4: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x80074EE8: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80074EEC: sltiu       $v0, $a1, 0x3
    ctx->r2 = ctx->r5 < 0X3 ? 1 : 0;
    // 0x80074EF0: bne         $v0, $zero, L_80074EE4
    if (ctx->r2 != 0) {
        // 0x80074EF4: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_80074EE4;
    }
    // 0x80074EF4: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80074EF8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80074EFC: addu        $t0, $a3, $zero
    ctx->r8 = ADD32(ctx->r7, 0);
L_80074F00:
    // 0x80074F00: lw          $a2, 0x0($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X0);
    // 0x80074F04: lw          $a0, 0x0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X0);
    // 0x80074F08: sll         $v1, $a2, 16
    ctx->r3 = S32(ctx->r6 << 16);
    // 0x80074F0C: srl         $v0, $a2, 16
    ctx->r2 = S32(U32(ctx->r6) >> 16);
    // 0x80074F10: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80074F14: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x80074F18: andi        $v0, $a1, 0x1
    ctx->r2 = ctx->r5 & 0X1;
    // 0x80074F1C: beq         $v0, $zero, L_80074F40
    if (ctx->r2 == 0) {
        // 0x80074F20: sw          $a0, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r4;
            goto L_80074F40;
    }
    // 0x80074F20: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80074F24: lw          $v0, 0xB0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XB0);
    // 0x80074F28: lw          $v1, 0x4($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4);
    // 0x80074F2C: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80074F30: xor         $v0, $a2, $v0
    ctx->r2 = ctx->r6 ^ ctx->r2;
    // 0x80074F34: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80074F38: j           L_80074F58
    // 0x80074F3C: sw          $v1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r3;
        goto L_80074F58;
    // 0x80074F3C: sw          $v1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r3;
L_80074F40:
    // 0x80074F40: lw          $v0, 0xB0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XB0);
    // 0x80074F44: lw          $v1, 0x8($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X8);
    // 0x80074F48: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80074F4C: xor         $v0, $a2, $v0
    ctx->r2 = ctx->r6 ^ ctx->r2;
    // 0x80074F50: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80074F54: sw          $v1, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r3;
L_80074F58:
    // 0x80074F58: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80074F5C: sltiu       $v0, $a1, 0x8
    ctx->r2 = ctx->r5 < 0X8 ? 1 : 0;
    // 0x80074F60: bne         $v0, $zero, L_80074F00
    if (ctx->r2 != 0) {
        // 0x80074F64: addiu       $t0, $t0, 0x4
        ctx->r8 = ADD32(ctx->r8, 0X4);
            goto L_80074F00;
    }
    // 0x80074F64: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x80074F68: lw          $a1, 0xB0($a3)
    ctx->r5 = MEM_W(ctx->r7, 0XB0);
    // 0x80074F6C: lw          $v0, 0x0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X0);
    // 0x80074F70: lw          $a0, 0xB4($a3)
    ctx->r4 = MEM_W(ctx->r7, 0XB4);
    // 0x80074F74: nor         $v1, $zero, $a1
    ctx->r3 = ~(0 | ctx->r5);
    // 0x80074F78: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80074F7C: bne         $a0, $v1, L_8007547C
    if (ctx->r4 != ctx->r3) {
        // 0x80074F80: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8007547C;
    }
    // 0x80074F80: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80074F84: lui         $v0, 0x3333
    ctx->r2 = S32(0X3333 << 16);
    // 0x80074F88: ori         $v0, $v0, 0x3333
    ctx->r2 = ctx->r2 | 0X3333;
    // 0x80074F8C: lw          $v1, 0x4($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4);
    // 0x80074F90: lw          $a0, 0xB8($a3)
    ctx->r4 = MEM_W(ctx->r7, 0XB8);
    // 0x80074F94: xor         $v0, $a1, $v0
    ctx->r2 = ctx->r5 ^ ctx->r2;
    // 0x80074F98: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80074F9C: bne         $a0, $v0, L_8007547C
    if (ctx->r4 != ctx->r2) {
        // 0x80074FA0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8007547C;
    }
    // 0x80074FA0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80074FA4: lui         $v0, 0xCCCC
    ctx->r2 = S32(0XCCCC << 16);
    // 0x80074FA8: ori         $v0, $v0, 0xCCCC
    ctx->r2 = ctx->r2 | 0XCCCC;
    // 0x80074FAC: lw          $v1, 0x8($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X8);
    // 0x80074FB0: lw          $a0, 0xBC($a3)
    ctx->r4 = MEM_W(ctx->r7, 0XBC);
    // 0x80074FB4: xor         $v0, $a1, $v0
    ctx->r2 = ctx->r5 ^ ctx->r2;
    // 0x80074FB8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80074FBC: bne         $a0, $v0, L_8007547C
    if (ctx->r4 != ctx->r2) {
        // 0x80074FC0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8007547C;
    }
    // 0x80074FC0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80074FC4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80074FC8: addu        $v1, $sp, $zero
    ctx->r3 = ADD32(ctx->r29, 0);
L_80074FCC:
    // 0x80074FCC: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x80074FD0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80074FD4: sltiu       $v0, $a1, 0x3
    ctx->r2 = ctx->r5 < 0X3 ? 1 : 0;
    // 0x80074FD8: bne         $v0, $zero, L_80074FCC
    if (ctx->r2 != 0) {
        // 0x80074FDC: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_80074FCC;
    }
    // 0x80074FDC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80074FE0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80074FE4: addu        $t0, $a3, $zero
    ctx->r8 = ADD32(ctx->r7, 0);
L_80074FE8:
    // 0x80074FE8: lw          $a2, 0x0($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X0);
    // 0x80074FEC: lw          $a0, 0x0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X0);
    // 0x80074FF0: sll         $v1, $a2, 16
    ctx->r3 = S32(ctx->r6 << 16);
    // 0x80074FF4: srl         $v0, $a2, 16
    ctx->r2 = S32(U32(ctx->r6) >> 16);
    // 0x80074FF8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80074FFC: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x80075000: andi        $v0, $a1, 0x1
    ctx->r2 = ctx->r5 & 0X1;
    // 0x80075004: beq         $v0, $zero, L_80075028
    if (ctx->r2 == 0) {
        // 0x80075008: sw          $a0, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r4;
            goto L_80075028;
    }
    // 0x80075008: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8007500C: lw          $v0, 0xF0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XF0);
    // 0x80075010: lw          $v1, 0x4($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4);
    // 0x80075014: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80075018: xor         $v0, $a2, $v0
    ctx->r2 = ctx->r6 ^ ctx->r2;
    // 0x8007501C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80075020: j           L_80075040
    // 0x80075024: sw          $v1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r3;
        goto L_80075040;
    // 0x80075024: sw          $v1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r3;
L_80075028:
    // 0x80075028: lw          $v0, 0xF0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XF0);
    // 0x8007502C: lw          $v1, 0x8($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X8);
    // 0x80075030: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80075034: xor         $v0, $a2, $v0
    ctx->r2 = ctx->r6 ^ ctx->r2;
    // 0x80075038: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8007503C: sw          $v1, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r3;
L_80075040:
    // 0x80075040: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80075044: sltiu       $v0, $a1, 0x8
    ctx->r2 = ctx->r5 < 0X8 ? 1 : 0;
    // 0x80075048: bne         $v0, $zero, L_80074FE8
    if (ctx->r2 != 0) {
        // 0x8007504C: addiu       $t0, $t0, 0x4
        ctx->r8 = ADD32(ctx->r8, 0X4);
            goto L_80074FE8;
    }
    // 0x8007504C: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x80075050: lui         $v0, 0x6969
    ctx->r2 = S32(0X6969 << 16);
    // 0x80075054: ori         $v0, $v0, 0x6969
    ctx->r2 = ctx->r2 | 0X6969;
    // 0x80075058: lw          $a1, 0xF0($a3)
    ctx->r5 = MEM_W(ctx->r7, 0XF0);
    // 0x8007505C: lw          $v1, 0x0($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X0);
    // 0x80075060: lw          $a0, 0xF4($a3)
    ctx->r4 = MEM_W(ctx->r7, 0XF4);
    // 0x80075064: xor         $v0, $a1, $v0
    ctx->r2 = ctx->r5 ^ ctx->r2;
    // 0x80075068: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8007506C: bne         $a0, $v0, L_8007547C
    if (ctx->r4 != ctx->r2) {
        // 0x80075070: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8007547C;
    }
    // 0x80075070: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80075074: lui         $v0, 0x2B2B
    ctx->r2 = S32(0X2B2B << 16);
    // 0x80075078: ori         $v0, $v0, 0x2B2B
    ctx->r2 = ctx->r2 | 0X2B2B;
    // 0x8007507C: lw          $v1, 0x4($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4);
    // 0x80075080: lw          $a0, 0xF8($a3)
    ctx->r4 = MEM_W(ctx->r7, 0XF8);
    // 0x80075084: xor         $v0, $a1, $v0
    ctx->r2 = ctx->r5 ^ ctx->r2;
    // 0x80075088: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8007508C: bne         $a0, $v0, L_8007547C
    if (ctx->r4 != ctx->r2) {
        // 0x80075090: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8007547C;
    }
    // 0x80075090: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80075094: lui         $v0, 0xB8B8
    ctx->r2 = S32(0XB8B8 << 16);
    // 0x80075098: ori         $v0, $v0, 0xB8B8
    ctx->r2 = ctx->r2 | 0XB8B8;
    // 0x8007509C: lw          $v1, 0x8($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X8);
    // 0x800750A0: lw          $a0, 0xFC($a3)
    ctx->r4 = MEM_W(ctx->r7, 0XFC);
    // 0x800750A4: xor         $v0, $a1, $v0
    ctx->r2 = ctx->r5 ^ ctx->r2;
    // 0x800750A8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800750AC: bne         $a0, $v0, L_8007547C
    if (ctx->r4 != ctx->r2) {
        // 0x800750B0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8007547C;
    }
    // 0x800750B0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x800750B4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x800750B8: addu        $v1, $sp, $zero
    ctx->r3 = ADD32(ctx->r29, 0);
L_800750BC:
    // 0x800750BC: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x800750C0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x800750C4: sltiu       $v0, $a1, 0x3
    ctx->r2 = ctx->r5 < 0X3 ? 1 : 0;
    // 0x800750C8: bne         $v0, $zero, L_800750BC
    if (ctx->r2 != 0) {
        // 0x800750CC: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_800750BC;
    }
    // 0x800750CC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800750D0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x800750D4: addu        $t0, $a3, $zero
    ctx->r8 = ADD32(ctx->r7, 0);
L_800750D8:
    // 0x800750D8: lw          $a2, 0x0($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X0);
    // 0x800750DC: lw          $a0, 0x0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X0);
    // 0x800750E0: sll         $v1, $a2, 16
    ctx->r3 = S32(ctx->r6 << 16);
    // 0x800750E4: srl         $v0, $a2, 16
    ctx->r2 = S32(U32(ctx->r6) >> 16);
    // 0x800750E8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x800750EC: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x800750F0: andi        $v0, $a1, 0x1
    ctx->r2 = ctx->r5 & 0X1;
    // 0x800750F4: beq         $v0, $zero, L_80075118
    if (ctx->r2 == 0) {
        // 0x800750F8: sw          $a0, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r4;
            goto L_80075118;
    }
    // 0x800750F8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x800750FC: lw          $v0, 0x270($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X270);
    // 0x80075100: lw          $v1, 0x4($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4);
    // 0x80075104: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80075108: xor         $v0, $a2, $v0
    ctx->r2 = ctx->r6 ^ ctx->r2;
    // 0x8007510C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80075110: j           L_80075130
    // 0x80075114: sw          $v1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r3;
        goto L_80075130;
    // 0x80075114: sw          $v1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r3;
L_80075118:
    // 0x80075118: lw          $v0, 0x270($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X270);
    // 0x8007511C: lw          $v1, 0x8($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X8);
    // 0x80075120: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80075124: xor         $v0, $a2, $v0
    ctx->r2 = ctx->r6 ^ ctx->r2;
    // 0x80075128: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8007512C: sw          $v1, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r3;
L_80075130:
    // 0x80075130: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80075134: sltiu       $v0, $a1, 0x8
    ctx->r2 = ctx->r5 < 0X8 ? 1 : 0;
    // 0x80075138: bne         $v0, $zero, L_800750D8
    if (ctx->r2 != 0) {
        // 0x8007513C: addiu       $t0, $t0, 0x4
        ctx->r8 = ADD32(ctx->r8, 0X4);
            goto L_800750D8;
    }
    // 0x8007513C: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x80075140: lw          $a1, 0x270($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X270);
    // 0x80075144: lw          $v0, 0x0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X0);
    // 0x80075148: lw          $v1, 0x274($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X274);
    // 0x8007514C: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x80075150: bne         $v1, $v0, L_8007547C
    if (ctx->r3 != ctx->r2) {
        // 0x80075154: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8007547C;
    }
    // 0x80075154: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80075158: lui         $v0, 0x1E1E
    ctx->r2 = S32(0X1E1E << 16);
    // 0x8007515C: ori         $v0, $v0, 0x1E1E
    ctx->r2 = ctx->r2 | 0X1E1E;
    // 0x80075160: lw          $v1, 0x4($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4);
    // 0x80075164: lw          $a0, 0x278($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X278);
    // 0x80075168: xor         $v0, $a1, $v0
    ctx->r2 = ctx->r5 ^ ctx->r2;
    // 0x8007516C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80075170: bne         $a0, $v0, L_8007547C
    if (ctx->r4 != ctx->r2) {
        // 0x80075174: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8007547C;
    }
    // 0x80075174: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80075178: lui         $v0, 0x7575
    ctx->r2 = S32(0X7575 << 16);
    // 0x8007517C: ori         $v0, $v0, 0x7575
    ctx->r2 = ctx->r2 | 0X7575;
    // 0x80075180: lw          $v1, 0x8($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X8);
    // 0x80075184: lw          $a0, 0x27C($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X27C);
    // 0x80075188: xor         $v0, $a1, $v0
    ctx->r2 = ctx->r5 ^ ctx->r2;
    // 0x8007518C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80075190: bne         $a0, $v0, L_8007547C
    if (ctx->r4 != ctx->r2) {
        // 0x80075194: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8007547C;
    }
    // 0x80075194: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80075198: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8007519C: addu        $v1, $sp, $zero
    ctx->r3 = ADD32(ctx->r29, 0);
L_800751A0:
    // 0x800751A0: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x800751A4: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x800751A8: sltiu       $v0, $a1, 0x3
    ctx->r2 = ctx->r5 < 0X3 ? 1 : 0;
    // 0x800751AC: bne         $v0, $zero, L_800751A0
    if (ctx->r2 != 0) {
        // 0x800751B0: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_800751A0;
    }
    // 0x800751B0: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800751B4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x800751B8: addu        $t0, $a3, $zero
    ctx->r8 = ADD32(ctx->r7, 0);
L_800751BC:
    // 0x800751BC: lw          $a2, 0x0($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X0);
    // 0x800751C0: lw          $a0, 0x0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X0);
    // 0x800751C4: sll         $v1, $a2, 16
    ctx->r3 = S32(ctx->r6 << 16);
    // 0x800751C8: srl         $v0, $a2, 16
    ctx->r2 = S32(U32(ctx->r6) >> 16);
    // 0x800751CC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x800751D0: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x800751D4: andi        $v0, $a1, 0x1
    ctx->r2 = ctx->r5 & 0X1;
    // 0x800751D8: beq         $v0, $zero, L_800751FC
    if (ctx->r2 == 0) {
        // 0x800751DC: sw          $a0, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r4;
            goto L_800751FC;
    }
    // 0x800751DC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x800751E0: lw          $v0, 0x1630($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X1630);
    // 0x800751E4: lw          $v1, 0x4($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4);
    // 0x800751E8: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x800751EC: xor         $v0, $a2, $v0
    ctx->r2 = ctx->r6 ^ ctx->r2;
    // 0x800751F0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x800751F4: j           L_80075214
    // 0x800751F8: sw          $v1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r3;
        goto L_80075214;
    // 0x800751F8: sw          $v1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r3;
L_800751FC:
    // 0x800751FC: lw          $v0, 0x1630($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X1630);
    // 0x80075200: lw          $v1, 0x8($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X8);
    // 0x80075204: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80075208: xor         $v0, $a2, $v0
    ctx->r2 = ctx->r6 ^ ctx->r2;
    // 0x8007520C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80075210: sw          $v1, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r3;
L_80075214:
    // 0x80075214: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80075218: sltiu       $v0, $a1, 0x8
    ctx->r2 = ctx->r5 < 0X8 ? 1 : 0;
    // 0x8007521C: bne         $v0, $zero, L_800751BC
    if (ctx->r2 != 0) {
        // 0x80075220: addiu       $t0, $t0, 0x4
        ctx->r8 = ADD32(ctx->r8, 0X4);
            goto L_800751BC;
    }
    // 0x80075220: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x80075224: lw          $a1, 0x1630($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X1630);
    // 0x80075228: lw          $v0, 0x0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X0);
    // 0x8007522C: lw          $a0, 0x1634($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X1634);
    // 0x80075230: nor         $v1, $zero, $a1
    ctx->r3 = ~(0 | ctx->r5);
    // 0x80075234: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80075238: bne         $a0, $v1, L_8007547C
    if (ctx->r4 != ctx->r3) {
        // 0x8007523C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8007547C;
    }
    // 0x8007523C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80075240: lui         $v0, 0x3333
    ctx->r2 = S32(0X3333 << 16);
    // 0x80075244: ori         $v0, $v0, 0x3333
    ctx->r2 = ctx->r2 | 0X3333;
    // 0x80075248: lw          $v1, 0x4($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4);
    // 0x8007524C: lw          $a0, 0x1638($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X1638);
    // 0x80075250: xor         $v0, $a1, $v0
    ctx->r2 = ctx->r5 ^ ctx->r2;
    // 0x80075254: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80075258: bne         $a0, $v0, L_8007547C
    if (ctx->r4 != ctx->r2) {
        // 0x8007525C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8007547C;
    }
    // 0x8007525C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80075260: lui         $v0, 0xCCCC
    ctx->r2 = S32(0XCCCC << 16);
    // 0x80075264: ori         $v0, $v0, 0xCCCC
    ctx->r2 = ctx->r2 | 0XCCCC;
    // 0x80075268: lw          $v1, 0x8($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X8);
    // 0x8007526C: lw          $a0, 0x163C($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X163C);
    // 0x80075270: xor         $v0, $a1, $v0
    ctx->r2 = ctx->r5 ^ ctx->r2;
    // 0x80075274: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80075278: bne         $a0, $v0, L_8007547C
    if (ctx->r4 != ctx->r2) {
        // 0x8007527C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8007547C;
    }
    // 0x8007527C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80075280: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80075284: addu        $v1, $sp, $zero
    ctx->r3 = ADD32(ctx->r29, 0);
L_80075288:
    // 0x80075288: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x8007528C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80075290: sltiu       $v0, $a1, 0x3
    ctx->r2 = ctx->r5 < 0X3 ? 1 : 0;
    // 0x80075294: bne         $v0, $zero, L_80075288
    if (ctx->r2 != 0) {
        // 0x80075298: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_80075288;
    }
    // 0x80075298: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8007529C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x800752A0: addu        $t0, $a3, $zero
    ctx->r8 = ADD32(ctx->r7, 0);
L_800752A4:
    // 0x800752A4: lw          $a2, 0x0($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X0);
    // 0x800752A8: lw          $a0, 0x0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X0);
    // 0x800752AC: sll         $v1, $a2, 16
    ctx->r3 = S32(ctx->r6 << 16);
    // 0x800752B0: srl         $v0, $a2, 16
    ctx->r2 = S32(U32(ctx->r6) >> 16);
    // 0x800752B4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x800752B8: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x800752BC: andi        $v0, $a1, 0x1
    ctx->r2 = ctx->r5 & 0X1;
    // 0x800752C0: beq         $v0, $zero, L_800752E4
    if (ctx->r2 == 0) {
        // 0x800752C4: sw          $a0, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r4;
            goto L_800752E4;
    }
    // 0x800752C4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x800752C8: lw          $v0, 0x17E0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X17E0);
    // 0x800752CC: lw          $v1, 0x4($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4);
    // 0x800752D0: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x800752D4: xor         $v0, $a2, $v0
    ctx->r2 = ctx->r6 ^ ctx->r2;
    // 0x800752D8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x800752DC: j           L_800752FC
    // 0x800752E0: sw          $v1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r3;
        goto L_800752FC;
    // 0x800752E0: sw          $v1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r3;
L_800752E4:
    // 0x800752E4: lw          $v0, 0x17E0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X17E0);
    // 0x800752E8: lw          $v1, 0x8($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X8);
    // 0x800752EC: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x800752F0: xor         $v0, $a2, $v0
    ctx->r2 = ctx->r6 ^ ctx->r2;
    // 0x800752F4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x800752F8: sw          $v1, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r3;
L_800752FC:
    // 0x800752FC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80075300: sltiu       $v0, $a1, 0x8
    ctx->r2 = ctx->r5 < 0X8 ? 1 : 0;
    // 0x80075304: bne         $v0, $zero, L_800752A4
    if (ctx->r2 != 0) {
        // 0x80075308: addiu       $t0, $t0, 0x4
        ctx->r8 = ADD32(ctx->r8, 0X4);
            goto L_800752A4;
    }
    // 0x80075308: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x8007530C: lui         $v0, 0x9696
    ctx->r2 = S32(0X9696 << 16);
    // 0x80075310: ori         $v0, $v0, 0x9696
    ctx->r2 = ctx->r2 | 0X9696;
    // 0x80075314: lw          $a2, 0x17E0($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X17E0);
    // 0x80075318: lw          $v1, 0x0($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X0);
    // 0x8007531C: lw          $a1, 0x17E4($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X17E4);
    // 0x80075320: xor         $v0, $a2, $v0
    ctx->r2 = ctx->r6 ^ ctx->r2;
    // 0x80075324: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80075328: bne         $a1, $v0, L_8007547C
    if (ctx->r5 != ctx->r2) {
        // 0x8007532C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8007547C;
    }
    // 0x8007532C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80075330: lui         $v0, 0xB2B2
    ctx->r2 = S32(0XB2B2 << 16);
    // 0x80075334: ori         $v0, $v0, 0xB2B2
    ctx->r2 = ctx->r2 | 0XB2B2;
    // 0x80075338: lw          $v1, 0x4($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4);
    // 0x8007533C: lw          $t1, 0x17E8($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X17E8);
    // 0x80075340: xor         $v0, $a2, $v0
    ctx->r2 = ctx->r6 ^ ctx->r2;
    // 0x80075344: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80075348: bne         $t1, $v0, L_8007547C
    if (ctx->r9 != ctx->r2) {
        // 0x8007534C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8007547C;
    }
    // 0x8007534C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80075350: lui         $v0, 0x8B8B
    ctx->r2 = S32(0X8B8B << 16);
    // 0x80075354: ori         $v0, $v0, 0x8B8B
    ctx->r2 = ctx->r2 | 0X8B8B;
    // 0x80075358: lw          $v1, 0x8($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X8);
    // 0x8007535C: lw          $t5, 0x17EC($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X17EC);
    // 0x80075360: xor         $v0, $a2, $v0
    ctx->r2 = ctx->r6 ^ ctx->r2;
    // 0x80075364: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80075368: bne         $t5, $v0, L_8007547C
    if (ctx->r13 != ctx->r2) {
        // 0x8007536C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8007547C;
    }
    // 0x8007536C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80075370: lw          $v1, 0x74($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X74);
    // 0x80075374: lw          $v0, 0xB4($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XB4);
    // 0x80075378: lw          $t2, 0x70($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X70);
    // 0x8007537C: lw          $a0, 0xF4($a3)
    ctx->r4 = MEM_W(ctx->r7, 0XF4);
    // 0x80075380: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80075384: lw          $v0, 0x274($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X274);
    // 0x80075388: lw          $t4, 0xF0($a3)
    ctx->r12 = MEM_W(ctx->r7, 0XF0);
    // 0x8007538C: xor         $v1, $v1, $t2
    ctx->r3 = ctx->r3 ^ ctx->r10;
    // 0x80075390: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80075394: xor         $a0, $a0, $t4
    ctx->r4 = ctx->r4 ^ ctx->r12;
    // 0x80075398: lw          $v0, 0x1634($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X1634);
    // 0x8007539C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x800753A0: lw          $a0, 0x1630($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X1630);
    // 0x800753A4: lw          $t3, 0x17F4($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X17F4);
    // 0x800753A8: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x800753AC: xor         $v0, $v0, $a0
    ctx->r2 = ctx->r2 ^ ctx->r4;
    // 0x800753B0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x800753B4: bne         $t3, $v1, L_8007547C
    if (ctx->r11 != ctx->r3) {
        // 0x800753B8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8007547C;
    }
    // 0x800753B8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x800753BC: lw          $v1, 0x78($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X78);
    // 0x800753C0: lw          $v0, 0xB8($a3)
    ctx->r2 = MEM_W(ctx->r7, 0XB8);
    // 0x800753C4: lw          $t0, 0xB0($a3)
    ctx->r8 = MEM_W(ctx->r7, 0XB0);
    // 0x800753C8: lw          $a0, 0xF8($a3)
    ctx->r4 = MEM_W(ctx->r7, 0XF8);
    // 0x800753CC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x800753D0: lw          $v0, 0x278($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X278);
    // 0x800753D4: lw          $a1, 0x270($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X270);
    // 0x800753D8: xor         $v1, $v1, $t0
    ctx->r3 = ctx->r3 ^ ctx->r8;
    // 0x800753DC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x800753E0: lw          $v0, 0x1638($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X1638);
    // 0x800753E4: xor         $a0, $a0, $a1
    ctx->r4 = ctx->r4 ^ ctx->r5;
    // 0x800753E8: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x800753EC: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x800753F0: lw          $t1, 0x17F8($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X17F8);
    // 0x800753F4: xor         $v0, $v0, $a2
    ctx->r2 = ctx->r2 ^ ctx->r6;
    // 0x800753F8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x800753FC: bne         $t1, $v1, L_8007547C
    if (ctx->r9 != ctx->r3) {
        // 0x80075400: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8007547C;
    }
    // 0x80075400: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80075404: lw          $v0, 0x7C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X7C);
    // 0x80075408: lw          $v1, 0xBC($a3)
    ctx->r3 = MEM_W(ctx->r7, 0XBC);
    // 0x8007540C: lw          $a0, 0xFC($a3)
    ctx->r4 = MEM_W(ctx->r7, 0XFC);
    // 0x80075410: lw          $a1, 0x27C($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X27C);
    // 0x80075414: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80075418: xor         $v0, $v0, $t2
    ctx->r2 = ctx->r2 ^ ctx->r10;
    // 0x8007541C: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x80075420: lw          $v1, 0x163C($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X163C);
    // 0x80075424: xor         $a0, $a0, $t0
    ctx->r4 = ctx->r4 ^ ctx->r8;
    // 0x80075428: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8007542C: lw          $a1, 0x17FC($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X17FC);
    // 0x80075430: addu        $v1, $v1, $t5
    ctx->r3 = ADD32(ctx->r3, ctx->r13);
    // 0x80075434: xor         $v1, $v1, $t4
    ctx->r3 = ctx->r3 ^ ctx->r12;
    // 0x80075438: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8007543C: bne         $a1, $v0, L_8007547C
    if (ctx->r5 != ctx->r2) {
        // 0x80075440: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8007547C;
    }
    // 0x80075440: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80075444: lui         $v0, 0xAAAA
    ctx->r2 = S32(0XAAAA << 16);
    // 0x80075448: ori         $v0, $v0, 0xAAAA
    ctx->r2 = ctx->r2 | 0XAAAA;
    // 0x8007544C: lui         $a0, 0x5555
    ctx->r4 = S32(0X5555 << 16);
    // 0x80075450: ori         $a0, $a0, 0x5555
    ctx->r4 = ctx->r4 | 0X5555;
    // 0x80075454: nor         $v1, $zero, $t3
    ctx->r3 = ~(0 | ctx->r11);
    // 0x80075458: xor         $v0, $t1, $v0
    ctx->r2 = ctx->r9 ^ ctx->r2;
    // 0x8007545C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80075460: lw          $v0, 0x17F0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X17F0);
    // 0x80075464: xor         $a0, $a1, $a0
    ctx->r4 = ctx->r5 ^ ctx->r4;
    // 0x80075468: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8007546C: xor         $v0, $v0, $v1
    ctx->r2 = ctx->r2 ^ ctx->r3;
    // 0x80075470: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x80075474: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80075478: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
L_8007547C:
    // 0x8007547C: jr          $ra
    // 0x80075480: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    TRACE_RETURN()
    return;
    // 0x80075480: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_800A3420_7E820(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800A3420: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800A3424: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x800A3428: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    // 0x800A342C: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x800A3430: jal         0x800A3380
    // 0x800A3434: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_800A3380_7E780(rdram, ctx);
        goto after_0;
    // 0x800A3434: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_0:
    // 0x800A3438: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x800A343C: jr          $ra
    // 0x800A3440: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x800A3440: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800A3444: nop

    // 0x800A3448: nop

    // 0x800A344C: nop

;}
RECOMP_FUNC void func_80061E84_3D284(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80061E84: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x80061E88: addiu       $v0, $v0, 0x5
    ctx->r2 = ADD32(ctx->r2, 0X5);
    // 0x80061E8C: jr          $ra
    // 0x80061E90: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80061E90: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_8004D08C_2848C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004D08C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8004D090: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x8004D094: addu        $s7, $a0, $zero
    ctx->r23 = ADD32(ctx->r4, 0);
    // 0x8004D098: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8004D09C: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x8004D0A0: andi        $v0, $s7, 0x2
    ctx->r2 = ctx->r23 & 0X2;
    // 0x8004D0A4: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8004D0A8: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x8004D0AC: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x8004D0B0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8004D0B4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8004D0B8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8004D0BC: beq         $v0, $zero, L_8004D128
    if (ctx->r2 == 0) {
        // 0x8004D0C0: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_8004D128;
    }
    // 0x8004D0C0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8004D0C4: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8004D0C8: addiu       $s1, $s1, -0x420
    ctx->r17 = ADD32(ctx->r17, -0X420);
    // 0x8004D0CC: lui         $s5, 0x801E
    ctx->r21 = S32(0X801E << 16);
    // 0x8004D0D0: lw          $s5, -0x714C($s5)
    ctx->r21 = MEM_W(ctx->r21, -0X714C);
    // 0x8004D0D4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_8004D0D8:
    // 0x8004D0D8: sllv        $v0, $s5, $s0
    ctx->r2 = S32(ctx->r21 << (ctx->r16 & 31));
    // 0x8004D0DC: bgezl       $v0, L_8004D11C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8004D0E0: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8004D11C;
    }
    goto skip_0;
    // 0x8004D0E0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x8004D0E4: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x8004D0E8: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x8004D0EC: beq         $v0, $zero, L_8004D110
    if (ctx->r2 == 0) {
        // 0x8004D0F0: nop
    
            goto L_8004D110;
    }
    // 0x8004D0F0: nop

    // 0x8004D0F4: beql        $s4, $zero, L_8004D11C
    if (ctx->r20 == 0) {
        // 0x8004D0F8: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8004D11C;
    }
    goto skip_1;
    // 0x8004D0F8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_1:
    // 0x8004D0FC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8004D100: jal         0x8004D4C0
    // 0x8004D104: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_8004D4C0_288C0(rdram, ctx);
        goto after_0;
    // 0x8004D104: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_0:
    // 0x8004D108: j           L_8004D11C
    // 0x8004D10C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_8004D11C;
    // 0x8004D10C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8004D110:
    // 0x8004D110: jal         0x8004F418
    // 0x8004D114: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_1;
    // 0x8004D114: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x8004D118: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8004D11C:
    // 0x8004D11C: slti        $v0, $s0, 0x12
    ctx->r2 = SIGNED(ctx->r16) < 0X12 ? 1 : 0;
    // 0x8004D120: bne         $v0, $zero, L_8004D0D8
    if (ctx->r2 != 0) {
        // 0x8004D124: addiu       $s1, $s1, 0x3C8
        ctx->r17 = ADD32(ctx->r17, 0X3C8);
            goto L_8004D0D8;
    }
    // 0x8004D124: addiu       $s1, $s1, 0x3C8
    ctx->r17 = ADD32(ctx->r17, 0X3C8);
L_8004D128:
    // 0x8004D128: andi        $v0, $s7, 0x4
    ctx->r2 = ctx->r23 & 0X4;
    // 0x8004D12C: beq         $v0, $zero, L_8004D19C
    if (ctx->r2 == 0) {
        // 0x8004D130: andi        $v0, $s7, 0x8
        ctx->r2 = ctx->r23 & 0X8;
            goto L_8004D19C;
    }
    // 0x8004D130: andi        $v0, $s7, 0x8
    ctx->r2 = ctx->r23 & 0X8;
    // 0x8004D134: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x8004D138: addiu       $s1, $s1, -0x5F40
    ctx->r17 = ADD32(ctx->r17, -0X5F40);
    // 0x8004D13C: lui         $s5, 0x801E
    ctx->r21 = S32(0X801E << 16);
    // 0x8004D140: lw          $s5, -0x7798($s5)
    ctx->r21 = MEM_W(ctx->r21, -0X7798);
    // 0x8004D144: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_8004D148:
    // 0x8004D148: sllv        $v0, $s5, $s0
    ctx->r2 = S32(ctx->r21 << (ctx->r16 & 31));
    // 0x8004D14C: bgezl       $v0, L_8004D18C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8004D150: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8004D18C;
    }
    goto skip_2;
    // 0x8004D150: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_2:
    // 0x8004D154: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x8004D158: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x8004D15C: beq         $v0, $zero, L_8004D180
    if (ctx->r2 == 0) {
        // 0x8004D160: nop
    
            goto L_8004D180;
    }
    // 0x8004D160: nop

    // 0x8004D164: beql        $s4, $zero, L_8004D18C
    if (ctx->r20 == 0) {
        // 0x8004D168: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8004D18C;
    }
    goto skip_3;
    // 0x8004D168: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_3:
    // 0x8004D16C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8004D170: jal         0x8004D4C0
    // 0x8004D174: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_8004D4C0_288C0(rdram, ctx);
        goto after_2;
    // 0x8004D174: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_2:
    // 0x8004D178: j           L_8004D18C
    // 0x8004D17C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_8004D18C;
    // 0x8004D17C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8004D180:
    // 0x8004D180: jal         0x8004F488
    // 0x8004D184: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F488_2A888(rdram, ctx);
        goto after_3;
    // 0x8004D184: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
    // 0x8004D188: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8004D18C:
    // 0x8004D18C: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x8004D190: bne         $v0, $zero, L_8004D148
    if (ctx->r2 != 0) {
        // 0x8004D194: addiu       $s1, $s1, 0x5AC
        ctx->r17 = ADD32(ctx->r17, 0X5AC);
            goto L_8004D148;
    }
    // 0x8004D194: addiu       $s1, $s1, 0x5AC
    ctx->r17 = ADD32(ctx->r17, 0X5AC);
    // 0x8004D198: andi        $v0, $s7, 0x8
    ctx->r2 = ctx->r23 & 0X8;
L_8004D19C:
    // 0x8004D19C: beq         $v0, $zero, L_8004D20C
    if (ctx->r2 == 0) {
        // 0x8004D1A0: andi        $v0, $s7, 0x10
        ctx->r2 = ctx->r23 & 0X10;
            goto L_8004D20C;
    }
    // 0x8004D1A0: andi        $v0, $s7, 0x10
    ctx->r2 = ctx->r23 & 0X10;
    // 0x8004D1A4: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8004D1A8: addiu       $s1, $s1, 0x59A0
    ctx->r17 = ADD32(ctx->r17, 0X59A0);
    // 0x8004D1AC: lui         $s5, 0x801C
    ctx->r21 = S32(0X801C << 16);
    // 0x8004D1B0: lw          $s5, -0x3FB0($s5)
    ctx->r21 = MEM_W(ctx->r21, -0X3FB0);
    // 0x8004D1B4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_8004D1B8:
    // 0x8004D1B8: sllv        $v0, $s5, $s0
    ctx->r2 = S32(ctx->r21 << (ctx->r16 & 31));
    // 0x8004D1BC: bgezl       $v0, L_8004D1FC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8004D1C0: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8004D1FC;
    }
    goto skip_4;
    // 0x8004D1C0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_4:
    // 0x8004D1C4: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x8004D1C8: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x8004D1CC: beq         $v0, $zero, L_8004D1F0
    if (ctx->r2 == 0) {
        // 0x8004D1D0: nop
    
            goto L_8004D1F0;
    }
    // 0x8004D1D0: nop

    // 0x8004D1D4: beql        $s4, $zero, L_8004D1FC
    if (ctx->r20 == 0) {
        // 0x8004D1D8: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8004D1FC;
    }
    goto skip_5;
    // 0x8004D1D8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_5:
    // 0x8004D1DC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8004D1E0: jal         0x8004D4C0
    // 0x8004D1E4: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_8004D4C0_288C0(rdram, ctx);
        goto after_4;
    // 0x8004D1E4: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_4:
    // 0x8004D1E8: j           L_8004D1FC
    // 0x8004D1EC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_8004D1FC;
    // 0x8004D1EC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8004D1F0:
    // 0x8004D1F0: jal         0x8004F568
    // 0x8004D1F4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F568_2A968(rdram, ctx);
        goto after_5;
    // 0x8004D1F4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
    // 0x8004D1F8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8004D1FC:
    // 0x8004D1FC: slti        $v0, $s0, 0x10
    ctx->r2 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
    // 0x8004D200: bne         $v0, $zero, L_8004D1B8
    if (ctx->r2 != 0) {
        // 0x8004D204: addiu       $s1, $s1, 0x118
        ctx->r17 = ADD32(ctx->r17, 0X118);
            goto L_8004D1B8;
    }
    // 0x8004D204: addiu       $s1, $s1, 0x118
    ctx->r17 = ADD32(ctx->r17, 0X118);
    // 0x8004D208: andi        $v0, $s7, 0x10
    ctx->r2 = ctx->r23 & 0X10;
L_8004D20C:
    // 0x8004D20C: beq         $v0, $zero, L_8004D27C
    if (ctx->r2 == 0) {
        // 0x8004D210: andi        $v0, $s7, 0x20
        ctx->r2 = ctx->r23 & 0X20;
            goto L_8004D27C;
    }
    // 0x8004D210: andi        $v0, $s7, 0x20
    ctx->r2 = ctx->r23 & 0X20;
    // 0x8004D214: lui         $s1, 0x8021
    ctx->r17 = S32(0X8021 << 16);
    // 0x8004D218: addiu       $s1, $s1, -0x2100
    ctx->r17 = ADD32(ctx->r17, -0X2100);
    // 0x8004D21C: lui         $s5, 0x801E
    ctx->r21 = S32(0X801E << 16);
    // 0x8004D220: lw          $s5, -0x781C($s5)
    ctx->r21 = MEM_W(ctx->r21, -0X781C);
    // 0x8004D224: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_8004D228:
    // 0x8004D228: sllv        $v0, $s5, $s0
    ctx->r2 = S32(ctx->r21 << (ctx->r16 & 31));
    // 0x8004D22C: bgezl       $v0, L_8004D26C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8004D230: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8004D26C;
    }
    goto skip_6;
    // 0x8004D230: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_6:
    // 0x8004D234: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x8004D238: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x8004D23C: beq         $v0, $zero, L_8004D260
    if (ctx->r2 == 0) {
        // 0x8004D240: nop
    
            goto L_8004D260;
    }
    // 0x8004D240: nop

    // 0x8004D244: beql        $s4, $zero, L_8004D26C
    if (ctx->r20 == 0) {
        // 0x8004D248: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8004D26C;
    }
    goto skip_7;
    // 0x8004D248: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_7:
    // 0x8004D24C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8004D250: jal         0x8004D4C0
    // 0x8004D254: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_8004D4C0_288C0(rdram, ctx);
        goto after_6;
    // 0x8004D254: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_6:
    // 0x8004D258: j           L_8004D26C
    // 0x8004D25C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_8004D26C;
    // 0x8004D25C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8004D260:
    // 0x8004D260: jal         0x8004F4F8
    // 0x8004D264: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_7;
    // 0x8004D264: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_7:
    // 0x8004D268: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8004D26C:
    // 0x8004D26C: slti        $v0, $s0, 0x20
    ctx->r2 = SIGNED(ctx->r16) < 0X20 ? 1 : 0;
    // 0x8004D270: bne         $v0, $zero, L_8004D228
    if (ctx->r2 != 0) {
        // 0x8004D274: addiu       $s1, $s1, 0x118
        ctx->r17 = ADD32(ctx->r17, 0X118);
            goto L_8004D228;
    }
    // 0x8004D274: addiu       $s1, $s1, 0x118
    ctx->r17 = ADD32(ctx->r17, 0X118);
    // 0x8004D278: andi        $v0, $s7, 0x20
    ctx->r2 = ctx->r23 & 0X20;
L_8004D27C:
    // 0x8004D27C: beq         $v0, $zero, L_8004D31C
    if (ctx->r2 == 0) {
        // 0x8004D280: andi        $v0, $s7, 0x40
        ctx->r2 = ctx->r23 & 0X40;
            goto L_8004D31C;
    }
    // 0x8004D280: andi        $v0, $s7, 0x40
    ctx->r2 = ctx->r23 & 0X40;
    // 0x8004D284: lui         $s2, 0x801B
    ctx->r18 = S32(0X801B << 16);
    // 0x8004D288: addiu       $s2, $s2, -0x2290
    ctx->r18 = ADD32(ctx->r18, -0X2290);
    // 0x8004D28C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8004D290: lui         $s6, 0x801C
    ctx->r22 = S32(0X801C << 16);
    // 0x8004D294: addiu       $s6, $s6, -0x3F64
    ctx->r22 = ADD32(ctx->r22, -0X3F64);
L_8004D298:
    // 0x8004D298: lw          $s5, 0x0($s6)
    ctx->r21 = MEM_W(ctx->r22, 0X0);
    // 0x8004D29C: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8004D2A0: addiu       $s3, $s2, 0x6
    ctx->r19 = ADD32(ctx->r18, 0X6);
L_8004D2A4:
    // 0x8004D2A4: sllv        $v0, $s5, $s1
    ctx->r2 = S32(ctx->r21 << (ctx->r17 & 31));
    // 0x8004D2A8: bgezl       $v0, L_8004D2F8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8004D2AC: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8004D2F8;
    }
    goto skip_8;
    // 0x8004D2AC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_8:
    // 0x8004D2B0: lbu         $v0, -0x4($s3)
    ctx->r2 = MEM_BU(ctx->r19, -0X4);
    // 0x8004D2B4: sltiu       $v0, $v0, 0x80
    ctx->r2 = ctx->r2 < 0X80 ? 1 : 0;
    // 0x8004D2B8: bnel        $v0, $zero, L_8004D2F8
    if (ctx->r2 != 0) {
        // 0x8004D2BC: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8004D2F8;
    }
    goto skip_9;
    // 0x8004D2BC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_9:
    // 0x8004D2C0: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x8004D2C4: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x8004D2C8: beq         $v0, $zero, L_8004D2EC
    if (ctx->r2 == 0) {
        // 0x8004D2CC: nop
    
            goto L_8004D2EC;
    }
    // 0x8004D2CC: nop

    // 0x8004D2D0: beql        $s4, $zero, L_8004D2F8
    if (ctx->r20 == 0) {
        // 0x8004D2D4: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8004D2F8;
    }
    goto skip_10;
    // 0x8004D2D4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_10:
    // 0x8004D2D8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8004D2DC: jal         0x8004D554
    // 0x8004D2E0: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_8004D554_28954(rdram, ctx);
        goto after_8;
    // 0x8004D2E0: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_8:
    // 0x8004D2E4: j           L_8004D2F8
    // 0x8004D2E8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
        goto L_8004D2F8;
    // 0x8004D2E8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_8004D2EC:
    // 0x8004D2EC: jal         0x8004F5C4
    // 0x8004D2F0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_9;
    // 0x8004D2F0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_9:
    // 0x8004D2F4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_8004D2F8:
    // 0x8004D2F8: addiu       $s3, $s3, 0x58
    ctx->r19 = ADD32(ctx->r19, 0X58);
    // 0x8004D2FC: slti        $v0, $s1, 0x20
    ctx->r2 = SIGNED(ctx->r17) < 0X20 ? 1 : 0;
    // 0x8004D300: bne         $v0, $zero, L_8004D2A4
    if (ctx->r2 != 0) {
        // 0x8004D304: addiu       $s2, $s2, 0x58
        ctx->r18 = ADD32(ctx->r18, 0X58);
            goto L_8004D2A4;
    }
    // 0x8004D304: addiu       $s2, $s2, 0x58
    ctx->r18 = ADD32(ctx->r18, 0X58);
    // 0x8004D308: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8004D30C: slti        $v0, $s0, 0x2
    ctx->r2 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x8004D310: bne         $v0, $zero, L_8004D298
    if (ctx->r2 != 0) {
        // 0x8004D314: addiu       $s6, $s6, 0x4
        ctx->r22 = ADD32(ctx->r22, 0X4);
            goto L_8004D298;
    }
    // 0x8004D314: addiu       $s6, $s6, 0x4
    ctx->r22 = ADD32(ctx->r22, 0X4);
    // 0x8004D318: andi        $v0, $s7, 0x40
    ctx->r2 = ctx->r23 & 0X40;
L_8004D31C:
    // 0x8004D31C: beq         $v0, $zero, L_8004D3BC
    if (ctx->r2 == 0) {
        // 0x8004D320: andi        $v0, $s7, 0x80
        ctx->r2 = ctx->r23 & 0X80;
            goto L_8004D3BC;
    }
    // 0x8004D320: andi        $v0, $s7, 0x80
    ctx->r2 = ctx->r23 & 0X80;
    // 0x8004D324: lui         $s2, 0x801B
    ctx->r18 = S32(0X801B << 16);
    // 0x8004D328: addiu       $s2, $s2, -0x2290
    ctx->r18 = ADD32(ctx->r18, -0X2290);
    // 0x8004D32C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8004D330: lui         $s6, 0x801C
    ctx->r22 = S32(0X801C << 16);
    // 0x8004D334: addiu       $s6, $s6, -0x3F64
    ctx->r22 = ADD32(ctx->r22, -0X3F64);
L_8004D338:
    // 0x8004D338: lw          $s5, 0x0($s6)
    ctx->r21 = MEM_W(ctx->r22, 0X0);
    // 0x8004D33C: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8004D340: addiu       $s3, $s2, 0x6
    ctx->r19 = ADD32(ctx->r18, 0X6);
L_8004D344:
    // 0x8004D344: sllv        $v0, $s5, $s1
    ctx->r2 = S32(ctx->r21 << (ctx->r17 & 31));
    // 0x8004D348: bgezl       $v0, L_8004D398
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8004D34C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8004D398;
    }
    goto skip_11;
    // 0x8004D34C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_11:
    // 0x8004D350: lbu         $v0, -0x4($s3)
    ctx->r2 = MEM_BU(ctx->r19, -0X4);
    // 0x8004D354: sltiu       $v0, $v0, 0x80
    ctx->r2 = ctx->r2 < 0X80 ? 1 : 0;
    // 0x8004D358: beql        $v0, $zero, L_8004D398
    if (ctx->r2 == 0) {
        // 0x8004D35C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8004D398;
    }
    goto skip_12;
    // 0x8004D35C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_12:
    // 0x8004D360: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x8004D364: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x8004D368: beq         $v0, $zero, L_8004D38C
    if (ctx->r2 == 0) {
        // 0x8004D36C: nop
    
            goto L_8004D38C;
    }
    // 0x8004D36C: nop

    // 0x8004D370: beql        $s4, $zero, L_8004D398
    if (ctx->r20 == 0) {
        // 0x8004D374: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8004D398;
    }
    goto skip_13;
    // 0x8004D374: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_13:
    // 0x8004D378: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8004D37C: jal         0x8004D554
    // 0x8004D380: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_8004D554_28954(rdram, ctx);
        goto after_10;
    // 0x8004D380: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_10:
    // 0x8004D384: j           L_8004D398
    // 0x8004D388: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
        goto L_8004D398;
    // 0x8004D388: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_8004D38C:
    // 0x8004D38C: jal         0x8004F5C4
    // 0x8004D390: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_11;
    // 0x8004D390: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_11:
    // 0x8004D394: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_8004D398:
    // 0x8004D398: addiu       $s3, $s3, 0x58
    ctx->r19 = ADD32(ctx->r19, 0X58);
    // 0x8004D39C: slti        $v0, $s1, 0x20
    ctx->r2 = SIGNED(ctx->r17) < 0X20 ? 1 : 0;
    // 0x8004D3A0: bne         $v0, $zero, L_8004D344
    if (ctx->r2 != 0) {
        // 0x8004D3A4: addiu       $s2, $s2, 0x58
        ctx->r18 = ADD32(ctx->r18, 0X58);
            goto L_8004D344;
    }
    // 0x8004D3A4: addiu       $s2, $s2, 0x58
    ctx->r18 = ADD32(ctx->r18, 0X58);
    // 0x8004D3A8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8004D3AC: slti        $v0, $s0, 0x2
    ctx->r2 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x8004D3B0: bne         $v0, $zero, L_8004D338
    if (ctx->r2 != 0) {
        // 0x8004D3B4: addiu       $s6, $s6, 0x4
        ctx->r22 = ADD32(ctx->r22, 0X4);
            goto L_8004D338;
    }
    // 0x8004D3B4: addiu       $s6, $s6, 0x4
    ctx->r22 = ADD32(ctx->r22, 0X4);
    // 0x8004D3B8: andi        $v0, $s7, 0x80
    ctx->r2 = ctx->r23 & 0X80;
L_8004D3BC:
    // 0x8004D3BC: beq         $v0, $zero, L_8004D42C
    if (ctx->r2 == 0) {
        // 0x8004D3C0: andi        $v0, $s7, 0x100
        ctx->r2 = ctx->r23 & 0X100;
            goto L_8004D42C;
    }
    // 0x8004D3C0: andi        $v0, $s7, 0x100
    ctx->r2 = ctx->r23 & 0X100;
    // 0x8004D3C4: lui         $s1, 0x8021
    ctx->r17 = S32(0X8021 << 16);
    // 0x8004D3C8: addiu       $s1, $s1, -0x3050
    ctx->r17 = ADD32(ctx->r17, -0X3050);
    // 0x8004D3CC: lui         $s5, 0x801A
    ctx->r21 = S32(0X801A << 16);
    // 0x8004D3D0: lw          $s5, 0x5210($s5)
    ctx->r21 = MEM_W(ctx->r21, 0X5210);
    // 0x8004D3D4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
L_8004D3D8:
    // 0x8004D3D8: sllv        $v0, $s5, $s0
    ctx->r2 = S32(ctx->r21 << (ctx->r16 & 31));
    // 0x8004D3DC: bgezl       $v0, L_8004D41C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8004D3E0: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8004D41C;
    }
    goto skip_14;
    // 0x8004D3E0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_14:
    // 0x8004D3E4: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x8004D3E8: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x8004D3EC: beq         $v0, $zero, L_8004D410
    if (ctx->r2 == 0) {
        // 0x8004D3F0: nop
    
            goto L_8004D410;
    }
    // 0x8004D3F0: nop

    // 0x8004D3F4: beql        $s4, $zero, L_8004D41C
    if (ctx->r20 == 0) {
        // 0x8004D3F8: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8004D41C;
    }
    goto skip_15;
    // 0x8004D3F8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_15:
    // 0x8004D3FC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8004D400: jal         0x8004D5B0
    // 0x8004D404: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_8004D5B0_289B0(rdram, ctx);
        goto after_12;
    // 0x8004D404: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_12:
    // 0x8004D408: j           L_8004D41C
    // 0x8004D40C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_8004D41C;
    // 0x8004D40C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8004D410:
    // 0x8004D410: jal         0x8004F62C
    // 0x8004D414: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F62C_2AA2C(rdram, ctx);
        goto after_13;
    // 0x8004D414: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_13:
    // 0x8004D418: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8004D41C:
    // 0x8004D41C: slti        $v0, $s0, 0x10
    ctx->r2 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
    // 0x8004D420: bne         $v0, $zero, L_8004D3D8
    if (ctx->r2 != 0) {
        // 0x8004D424: addiu       $s1, $s1, 0x24
        ctx->r17 = ADD32(ctx->r17, 0X24);
            goto L_8004D3D8;
    }
    // 0x8004D424: addiu       $s1, $s1, 0x24
    ctx->r17 = ADD32(ctx->r17, 0X24);
    // 0x8004D428: andi        $v0, $s7, 0x100
    ctx->r2 = ctx->r23 & 0X100;
L_8004D42C:
    // 0x8004D42C: beq         $v0, $zero, L_8004D494
    if (ctx->r2 == 0) {
        // 0x8004D430: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_8004D494;
    }
    // 0x8004D430: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8004D434: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8004D438: addiu       $s1, $s1, 0x6B70
    ctx->r17 = ADD32(ctx->r17, 0X6B70);
    // 0x8004D43C: lui         $s5, 0x801E
    ctx->r21 = S32(0X801E << 16);
    // 0x8004D440: lw          $s5, -0x72C8($s5)
    ctx->r21 = MEM_W(ctx->r21, -0X72C8);
L_8004D444:
    // 0x8004D444: sllv        $v0, $s5, $s0
    ctx->r2 = S32(ctx->r21 << (ctx->r16 & 31));
    // 0x8004D448: bgezl       $v0, L_8004D488
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8004D44C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8004D488;
    }
    goto skip_16;
    // 0x8004D44C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_16:
    // 0x8004D450: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x8004D454: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x8004D458: beq         $v0, $zero, L_8004D47C
    if (ctx->r2 == 0) {
        // 0x8004D45C: nop
    
            goto L_8004D47C;
    }
    // 0x8004D45C: nop

    // 0x8004D460: beql        $s4, $zero, L_8004D488
    if (ctx->r20 == 0) {
        // 0x8004D464: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8004D488;
    }
    goto skip_17;
    // 0x8004D464: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_17:
    // 0x8004D468: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8004D46C: jal         0x8004D554
    // 0x8004D470: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    func_8004D554_28954(rdram, ctx);
        goto after_14;
    // 0x8004D470: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    after_14:
    // 0x8004D474: j           L_8004D488
    // 0x8004D478: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_8004D488;
    // 0x8004D478: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8004D47C:
    // 0x8004D47C: jal         0x8004F684
    // 0x8004D480: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F684_2AA84(rdram, ctx);
        goto after_15;
    // 0x8004D480: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_15:
    // 0x8004D484: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_8004D488:
    // 0x8004D488: slti        $v0, $s0, 0x20
    ctx->r2 = SIGNED(ctx->r16) < 0X20 ? 1 : 0;
    // 0x8004D48C: bne         $v0, $zero, L_8004D444
    if (ctx->r2 != 0) {
        // 0x8004D490: addiu       $s1, $s1, 0x5C
        ctx->r17 = ADD32(ctx->r17, 0X5C);
            goto L_8004D444;
    }
    // 0x8004D490: addiu       $s1, $s1, 0x5C
    ctx->r17 = ADD32(ctx->r17, 0X5C);
L_8004D494:
    // 0x8004D494: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8004D498: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x8004D49C: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x8004D4A0: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x8004D4A4: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8004D4A8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8004D4AC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8004D4B0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8004D4B4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8004D4B8: jr          $ra
    // 0x8004D4BC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8004D4BC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800260E4_14E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800260E4: jr          $ra
    // 0x800260E8: lhu         $v0, -0x24($a0)
    ctx->r2 = MEM_HU(ctx->r4, -0X24);
    TRACE_RETURN()
    return;
    // 0x800260E8: lhu         $v0, -0x24($a0)
    ctx->r2 = MEM_HU(ctx->r4, -0X24);
;}
RECOMP_FUNC void func_80076154_51554(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80076154: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80076158: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8007615C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80076160: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80076164: jal         0x80075F78
    // 0x80076168: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_80075F78_51378(rdram, ctx);
        goto after_0;
    // 0x80076168: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x8007616C: jal         0x8004B5E8
    // 0x80076170: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8004B5E8_269E8(rdram, ctx);
        goto after_1;
    // 0x80076170: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_1:
    // 0x80076174: jal         0x8004B5E8
    // 0x80076178: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8004B5E8_269E8(rdram, ctx);
        goto after_2;
    // 0x80076178: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x8007617C: lb          $v1, 0x6($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X6);
    // 0x80076180: sltiu       $v0, $v1, 0xC
    ctx->r2 = ctx->r3 < 0XC ? 1 : 0;
    // 0x80076184: beq         $v0, $zero, L_80076880
    if (ctx->r2 == 0) {
        // 0x80076188: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80076880;
    }
    // 0x80076188: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8007618C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80076190: addu        $at, $at, $v0
    gpr jr_addend_80076198 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80076194: lw          $v0, 0x2B70($at)
    ctx->r2 = ADD32(ctx->r1, 0X2B70);
    // 0x80076198: jr          $v0
    // 0x8007619C: nop

    switch (jr_addend_80076198 >> 2) {
        case 0: goto L_800761A0; break;
        case 1: goto L_8007620C; break;
        case 2: goto L_800764B4; break;
        case 3: goto L_80076570; break;
        case 4: goto L_80076740; break;
        case 5: goto L_80076880; break;
        case 6: goto L_80076880; break;
        case 7: goto L_80076880; break;
        case 8: goto L_80076880; break;
        case 9: goto L_80076880; break;
        case 10: goto L_80076764; break;
        case 11: goto L_80076854; break;
        default: switch_error(__func__, 0x80076198, 0x800D2B70);
    }
    // 0x8007619C: nop

L_800761A0:
    // 0x800761A0: jal         0x80061724
    // 0x800761A4: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_3;
    // 0x800761A4: nop

    after_3:
    // 0x800761A8: lb          $v1, 0x4($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X4);
    // 0x800761AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800761B0: bne         $v1, $v0, L_800761C4
    if (ctx->r3 != ctx->r2) {
        // 0x800761B4: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_800761C4;
    }
    // 0x800761B4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x800761B8: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x800761BC: j           L_800761CC
    // 0x800761C0: lw          $a1, 0x280C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X280C);
        goto L_800761CC;
    // 0x800761C0: lw          $a1, 0x280C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X280C);
L_800761C4:
    // 0x800761C4: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x800761C8: lw          $a1, 0x2860($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2860);
L_800761CC:
    // 0x800761CC: jal         0x80061510
    // 0x800761D0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_4;
    // 0x800761D0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_4:
    // 0x800761D4: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x800761D8: lw          $a1, 0x2840($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2840);
    // 0x800761DC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x800761E0: jal         0x80061510
    // 0x800761E4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_5;
    // 0x800761E4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_5:
    // 0x800761E8: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x800761EC: addiu       $v1, $zero, 0x1E
    ctx->r3 = ADD32(0, 0X1E);
    // 0x800761F0: sw          $v1, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r3;
    // 0x800761F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800761F8: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
    // 0x800761FC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80076200: sb          $zero, 0x599E($at)
    MEM_B(0X599E, ctx->r1) = 0;
    // 0x80076204: j           L_80076884
    // 0x80076208: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80076884;
    // 0x80076208: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8007620C:
    // 0x8007620C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80076210: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    // 0x80076214: jal         0x8004B6A0
    // 0x80076218: ori         $a1, $a1, 0x1D
    ctx->r5 = ctx->r5 | 0X1D;
    func_8004B6A0_26AA0(rdram, ctx);
        goto after_6;
    // 0x80076218: ori         $a1, $a1, 0x1D
    ctx->r5 = ctx->r5 | 0X1D;
    after_6:
    // 0x8007621C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80076220: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    // 0x80076224: jal         0x8004B6A0
    // 0x80076228: ori         $a1, $a1, 0x1E
    ctx->r5 = ctx->r5 | 0X1E;
    func_8004B6A0_26AA0(rdram, ctx);
        goto after_7;
    // 0x80076228: ori         $a1, $a1, 0x1E
    ctx->r5 = ctx->r5 | 0X1E;
    after_7:
    // 0x8007622C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80076230: lw          $a0, 0x3FF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3FF0);
    // 0x80076234: lui         $v0, 0x6000
    ctx->r2 = S32(0X6000 << 16);
    // 0x80076238: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x8007623C: beq         $v0, $zero, L_800764A0
    if (ctx->r2 == 0) {
        // 0x80076240: nop
    
            goto L_800764A0;
    }
    // 0x80076240: nop

    // 0x80076244: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80076248: lbu         $v0, 0x599E($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X599E);
    // 0x8007624C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80076250: sb          $a0, -0x6F9F($at)
    MEM_B(-0X6F9F, ctx->r1) = ctx->r4;
    // 0x80076254: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x80076258: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x8007625C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80076260: sb          $v0, -0x6F9F($at)
    MEM_B(-0X6F9F, ctx->r1) = ctx->r2;
    // 0x80076264: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80076268: beq         $v1, $v0, L_8007627C
    if (ctx->r3 == ctx->r2) {
        // 0x8007626C: lui         $v0, 0x2000
        ctx->r2 = S32(0X2000 << 16);
            goto L_8007627C;
    }
    // 0x8007626C: lui         $v0, 0x2000
    ctx->r2 = S32(0X2000 << 16);
    // 0x80076270: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x80076274: beq         $v0, $zero, L_800762A0
    if (ctx->r2 == 0) {
        // 0x80076278: sll         $v1, $v1, 7
        ctx->r3 = S32(ctx->r3 << 7);
            goto L_800762A0;
    }
    // 0x80076278: sll         $v1, $v1, 7
    ctx->r3 = S32(ctx->r3 << 7);
L_8007627C:
    // 0x8007627C: addiu       $a0, $zero, 0x83
    ctx->r4 = ADD32(0, 0X83);
    // 0x80076280: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80076284: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80076288: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8007628C: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x80076290: jal         0x8002A2F8
    // 0x80076294: sh          $zero, 0x6($s0)
    MEM_H(0X6, ctx->r16) = 0;
    func_8002A2F8_56F8(rdram, ctx);
        goto after_8;
    // 0x80076294: sh          $zero, 0x6($s0)
    MEM_H(0X6, ctx->r16) = 0;
    after_8:
    // 0x80076298: j           L_80076884
    // 0x8007629C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80076884;
    // 0x8007629C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800762A0:
    // 0x800762A0: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x800762A4: addiu       $v0, $v0, -0x2E10
    ctx->r2 = ADD32(ctx->r2, -0X2E10);
    // 0x800762A8: lb          $a0, 0x4($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X4);
    // 0x800762AC: addu        $s1, $v1, $v0
    ctx->r17 = ADD32(ctx->r3, ctx->r2);
    // 0x800762B0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x800762B4: bne         $a0, $v0, L_800762C8
    if (ctx->r4 != ctx->r2) {
        // 0x800762B8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_800762C8;
    }
    // 0x800762B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800762BC: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x800762C0: beq         $v0, $zero, L_800762E0
    if (ctx->r2 == 0) {
        // 0x800762C4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_800762E0;
    }
    // 0x800762C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800762C8:
    // 0x800762C8: bne         $a0, $v0, L_8007648C
    if (ctx->r4 != ctx->r2) {
        // 0x800762CC: addiu       $a0, $zero, 0x83
        ctx->r4 = ADD32(0, 0X83);
            goto L_8007648C;
    }
    // 0x800762CC: addiu       $a0, $zero, 0x83
    ctx->r4 = ADD32(0, 0X83);
    // 0x800762D0: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x800762D4: sltiu       $v0, $v0, 0x3
    ctx->r2 = ctx->r2 < 0X3 ? 1 : 0;
    // 0x800762D8: beq         $v0, $zero, L_80076490
    if (ctx->r2 == 0) {
        // 0x800762DC: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_80076490;
    }
    // 0x800762DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_800762E0:
    // 0x800762E0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x800762E4: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x800762E8: addiu       $a2, $a2, 0x2BFC
    ctx->r6 = ADD32(ctx->r6, 0X2BFC);
L_800762EC:
    // 0x800762EC: sll         $a0, $a3, 16
    ctx->r4 = S32(ctx->r7 << 16);
    // 0x800762F0: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x800762F4: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x800762F8: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x800762FC: lw          $a1, 0x2F18($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2F18);
    // 0x80076300: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80076304: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80076308: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8007630C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80076310: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80076314: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80076318: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8007631C: addiu       $v0, $a3, 0x1
    ctx->r2 = ADD32(ctx->r7, 0X1);
    // 0x80076320: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x80076324: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x80076328: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8007632C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80076330: slti        $v0, $v0, 0xD
    ctx->r2 = SIGNED(ctx->r2) < 0XD ? 1 : 0;
    // 0x80076334: bne         $v0, $zero, L_800762EC
    if (ctx->r2 != 0) {
        // 0x80076338: sb          $v1, 0x0($a1)
        MEM_B(0X0, ctx->r5) = ctx->r3;
            goto L_800762EC;
    }
    // 0x80076338: sb          $v1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r3;
    // 0x8007633C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
L_80076340:
    // 0x80076340: sll         $v1, $a3, 16
    ctx->r3 = S32(ctx->r7 << 16);
    // 0x80076344: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80076348: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8007634C: lw          $a0, 0x2F38($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2F38);
    // 0x80076350: addu        $v0, $s1, $v1
    ctx->r2 = ADD32(ctx->r17, ctx->r3);
    // 0x80076354: lbu         $a1, 0x1($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X1);
    // 0x80076358: addiu       $v0, $a3, 0x1
    ctx->r2 = ADD32(ctx->r7, 0X1);
    // 0x8007635C: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x80076360: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80076364: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80076368: slti        $v0, $v0, 0x8
    ctx->r2 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x8007636C: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x80076370: bne         $v0, $zero, L_80076340
    if (ctx->r2 != 0) {
        // 0x80076374: sb          $a1, 0x0($a0)
        MEM_B(0X0, ctx->r4) = ctx->r5;
            goto L_80076340;
    }
    // 0x80076374: sb          $a1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r5;
    // 0x80076378: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8007637C: lbu         $a0, -0x6F9F($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X6F9F);
    // 0x80076380: lui         $v0, 0x6666
    ctx->r2 = S32(0X6666 << 16);
    // 0x80076384: ori         $v0, $v0, 0x6667
    ctx->r2 = ctx->r2 | 0X6667;
    // 0x80076388: addiu       $v1, $a0, 0x1
    ctx->r3 = ADD32(ctx->r4, 0X1);
    // 0x8007638C: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80076390: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80076394: lbu         $v0, 0x2D98($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2D98);
    // 0x80076398: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x8007639C: addiu       $a1, $v0, 0x1
    ctx->r5 = ADD32(ctx->r2, 0X1);
    // 0x800763A0: mfhi        $t2
    ctx->r10 = hi;
    // 0x800763A4: sra         $v0, $t2, 2
    ctx->r2 = S32(SIGNED(ctx->r10) >> 2);
    // 0x800763A8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x800763AC: bne         $v0, $zero, L_800763C4
    if (ctx->r2 != 0) {
        // 0x800763B0: addu        $v0, $a1, $v0
        ctx->r2 = ADD32(ctx->r5, ctx->r2);
            goto L_800763C4;
    }
    // 0x800763B0: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x800763B4: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x800763B8: lw          $v1, 0x2F18($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2F18);
    // 0x800763BC: j           L_800763D0
    // 0x800763C0: addiu       $v0, $zero, 0x4F
    ctx->r2 = ADD32(0, 0X4F);
        goto L_800763D0;
    // 0x800763C0: addiu       $v0, $zero, 0x4F
    ctx->r2 = ADD32(0, 0X4F);
L_800763C4:
    // 0x800763C4: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x800763C8: lw          $v1, 0x2F18($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2F18);
    // 0x800763CC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_800763D0:
    // 0x800763D0: sb          $v0, -0x3($v1)
    MEM_B(-0X3, ctx->r3) = ctx->r2;
    // 0x800763D4: lui         $v0, 0x6666
    ctx->r2 = S32(0X6666 << 16);
    // 0x800763D8: ori         $v0, $v0, 0x6667
    ctx->r2 = ctx->r2 | 0X6667;
    // 0x800763DC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800763E0: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800763E4: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x800763E8: lw          $a2, 0x2F18($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X2F18);
    // 0x800763EC: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x800763F0: sra         $v0, $a0, 31
    ctx->r2 = S32(SIGNED(ctx->r4) >> 31);
    // 0x800763F4: mfhi        $t2
    ctx->r10 = hi;
    // 0x800763F8: sra         $v1, $t2, 2
    ctx->r3 = S32(SIGNED(ctx->r10) >> 2);
    // 0x800763FC: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80076400: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80076404: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80076408: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8007640C: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x80076410: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x80076414: sb          $a1, -0x2($a2)
    MEM_B(-0X2, ctx->r6) = ctx->r5;
    // 0x80076418: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8007641C: lw          $v1, 0x2F18($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2F18);
    // 0x80076420: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x80076424: sb          $v0, -0x1($v1)
    MEM_B(-0X1, ctx->r3) = ctx->r2;
    // 0x80076428: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8007642C: lw          $a1, 0x2844($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2844);
    // 0x80076430: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80076434: jal         0x80061510
    // 0x80076438: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_9;
    // 0x80076438: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_9:
    // 0x8007643C: lb          $v1, 0x4($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X4);
    // 0x80076440: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80076444: bne         $v1, $v0, L_80076458
    if (ctx->r3 != ctx->r2) {
        // 0x80076448: addiu       $a0, $zero, 0x3
        ctx->r4 = ADD32(0, 0X3);
            goto L_80076458;
    }
    // 0x80076448: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x8007644C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80076450: j           L_80076460
    // 0x80076454: lw          $a1, 0x2848($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2848);
        goto L_80076460;
    // 0x80076454: lw          $a1, 0x2848($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2848);
L_80076458:
    // 0x80076458: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8007645C: lw          $a1, 0x286C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X286C);
L_80076460:
    // 0x80076460: jal         0x80061510
    // 0x80076464: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_10;
    // 0x80076464: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_10:
    // 0x80076468: addiu       $a0, $zero, 0x82
    ctx->r4 = ADD32(0, 0X82);
    // 0x8007646C: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x80076470: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80076474: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80076478: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8007647C: jal         0x8002A2F8
    // 0x80076480: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
    func_8002A2F8_56F8(rdram, ctx);
        goto after_11;
    // 0x80076480: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
    after_11:
    // 0x80076484: j           L_80076884
    // 0x80076488: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80076884;
    // 0x80076488: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8007648C:
    // 0x8007648C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_80076490:
    // 0x80076490: jal         0x8002A2F8
    // 0x80076494: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_12;
    // 0x80076494: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_12:
    // 0x80076498: j           L_80076884
    // 0x8007649C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80076884;
    // 0x8007649C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800764A0:
    // 0x800764A0: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x800764A4: bne         $v0, $zero, L_8007653C
    if (ctx->r2 != 0) {
        // 0x800764A8: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8007653C;
    }
    // 0x800764A8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x800764AC: j           L_80076544
    // 0x800764B0: nop

        goto L_80076544;
    // 0x800764B0: nop

L_800764B4:
    // 0x800764B4: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x800764B8: lw          $v1, 0x3FF0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3FF0);
    // 0x800764BC: lui         $v0, 0x4000
    ctx->r2 = S32(0X4000 << 16);
    // 0x800764C0: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x800764C4: beq         $v0, $zero, L_80076530
    if (ctx->r2 == 0) {
        // 0x800764C8: andi        $v0, $v1, 0xFF
        ctx->r2 = ctx->r3 & 0XFF;
            goto L_80076530;
    }
    // 0x800764C8: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x800764CC: bne         $v0, $zero, L_80076520
    if (ctx->r2 != 0) {
        // 0x800764D0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80076520;
    }
    // 0x800764D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800764D4: lb          $v1, 0x4($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X4);
    // 0x800764D8: bne         $v1, $v0, L_800764FC
    if (ctx->r3 != ctx->r2) {
        // 0x800764DC: addiu       $a0, $zero, 0x3
        ctx->r4 = ADD32(0, 0X3);
            goto L_800764FC;
    }
    // 0x800764DC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x800764E0: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x800764E4: lw          $a1, 0x284C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X284C);
    // 0x800764E8: jal         0x80061510
    // 0x800764EC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_13;
    // 0x800764EC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_13:
    // 0x800764F0: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x800764F4: j           L_80076510
    // 0x800764F8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80076510;
    // 0x800764F8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_800764FC:
    // 0x800764FC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80076500: lw          $a1, 0x2870($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2870);
    // 0x80076504: jal         0x80061510
    // 0x80076508: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_14;
    // 0x80076508: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_14:
    // 0x8007650C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_80076510:
    // 0x80076510: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
    // 0x80076514: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x80076518: j           L_80076880
    // 0x8007651C: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
        goto L_80076880;
    // 0x8007651C: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
L_80076520:
    // 0x80076520: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80076524: sb          $zero, 0x599E($at)
    MEM_B(0X599E, ctx->r1) = 0;
    // 0x80076528: j           L_80076564
    // 0x8007652C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_80076564;
    // 0x8007652C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_80076530:
    // 0x80076530: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x80076534: beq         $v0, $zero, L_80076544
    if (ctx->r2 == 0) {
        // 0x80076538: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_80076544;
    }
    // 0x80076538: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_8007653C:
    // 0x8007653C: j           L_80076880
    // 0x80076540: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
        goto L_80076880;
    // 0x80076540: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
L_80076544:
    // 0x80076544: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80076548: lbu         $a0, 0x469E($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X469E);
    // 0x8007654C: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80076550: jal         0x80073F80
    // 0x80076554: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    func_80073F80_4F380(rdram, ctx);
        goto after_15;
    // 0x80076554: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    after_15:
    // 0x80076558: bne         $v0, $zero, L_80076884
    if (ctx->r2 != 0) {
        // 0x8007655C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80076884;
    }
    // 0x8007655C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80076560: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80076564:
    // 0x80076564: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
    // 0x80076568: j           L_80076880
    // 0x8007656C: sh          $zero, 0x6($s0)
    MEM_H(0X6, ctx->r16) = 0;
        goto L_80076880;
    // 0x8007656C: sh          $zero, 0x6($s0)
    MEM_H(0X6, ctx->r16) = 0;
L_80076570:
    // 0x80076570: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x80076574: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80076578: bne         $v0, $zero, L_80076880
    if (ctx->r2 != 0) {
        // 0x8007657C: sw          $v0, 0xC($s0)
        MEM_W(0XC, ctx->r16) = ctx->r2;
            goto L_80076880;
    }
    // 0x8007657C: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x80076580: jal         0x800740B0
    // 0x80076584: nop

    func_800740B0_4F4B0(rdram, ctx);
        goto after_16;
    // 0x80076584: nop

    after_16:
    // 0x80076588: jal         0x800743A8
    // 0x8007658C: nop

    func_800743A8_4F7A8(rdram, ctx);
        goto after_17;
    // 0x8007658C: nop

    after_17:
    // 0x80076590: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80076594: lbu         $v0, -0x6F9F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X6F9F);
    // 0x80076598: lui         $s1, 0x8019
    ctx->r17 = S32(0X8019 << 16);
    // 0x8007659C: addiu       $s1, $s1, 0x3C70
    ctx->r17 = ADD32(ctx->r17, 0X3C70);
    // 0x800765A0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x800765A4: lbu         $a0, 0x469E($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X469E);
    // 0x800765A8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800765AC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x800765B0: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x800765B4: lw          $a1, 0x45E0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X45E0);
    // 0x800765B8: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x800765BC: jal         0x80073F90
    // 0x800765C0: addiu       $a3, $zero, 0x1800
    ctx->r7 = ADD32(0, 0X1800);
    func_80073F90_4F390(rdram, ctx);
        goto after_18;
    // 0x800765C0: addiu       $a3, $zero, 0x1800
    ctx->r7 = ADD32(0, 0X1800);
    after_18:
    // 0x800765C4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800765C8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x800765CC: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x800765D0: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x800765D4: beq         $v0, $zero, L_8007671C
    if (ctx->r2 == 0) {
        // 0x800765D8: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8007671C;
    }
    // 0x800765D8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x800765DC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800765E0: addu        $at, $at, $v0
    gpr jr_addend_800765E8 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800765E4: lw          $v0, 0x2BA0($at)
    ctx->r2 = ADD32(ctx->r1, 0X2BA0);
    // 0x800765E8: jr          $v0
    // 0x800765EC: nop

    switch (jr_addend_800765E8 >> 2) {
        case 0: goto L_8007671C; break;
        case 1: goto L_800765F0; break;
        case 2: goto L_80076704; break;
        case 3: goto L_80076710; break;
        case 4: goto L_8007671C; break;
        case 5: goto L_80076840; break;
        default: switch_error(__func__, 0x800765E8, 0x800D2BA0);
    }
    // 0x800765EC: nop

L_800765F0:
    // 0x800765F0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x800765F4: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x800765F8: addiu       $t1, $t1, 0x2F00
    ctx->r9 = ADD32(ctx->r9, 0X2F00);
    // 0x800765FC: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x80076600: addiu       $t0, $t0, 0x2BFC
    ctx->r8 = ADD32(ctx->r8, 0X2BFC);
L_80076604:
    // 0x80076604: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80076608: lbu         $v0, -0x6F9F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X6F9F);
    // 0x8007660C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80076610: lb          $v1, 0x599E($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X599E);
    // 0x80076614: sll         $a0, $a3, 16
    ctx->r4 = S32(ctx->r7 << 16);
    // 0x80076618: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8007661C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80076620: lw          $a1, 0x2F18($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2F18);
    // 0x80076624: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80076628: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8007662C: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x80076630: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x80076634: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x80076638: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x8007663C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80076640: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80076644: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80076648: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8007664C: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x80076650: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80076654: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x80076658: addiu       $v0, $a3, 0x1
    ctx->r2 = ADD32(ctx->r7, 0X1);
    // 0x8007665C: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x80076660: addu        $a2, $a2, $a0
    ctx->r6 = ADD32(ctx->r6, ctx->r4);
    // 0x80076664: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80076668: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8007666C: slti        $v0, $v0, 0xD
    ctx->r2 = SIGNED(ctx->r2) < 0XD ? 1 : 0;
    // 0x80076670: sb          $v1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r3;
    // 0x80076674: bne         $v0, $zero, L_80076604
    if (ctx->r2 != 0) {
        // 0x80076678: sb          $v1, 0x0($a2)
        MEM_B(0X0, ctx->r6) = ctx->r3;
            goto L_80076604;
    }
    // 0x80076678: sb          $v1, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r3;
    // 0x8007667C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80076680: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x80076684: addiu       $t0, $t0, 0x2F00
    ctx->r8 = ADD32(ctx->r8, 0X2F00);
L_80076688:
    // 0x80076688: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8007668C: lbu         $v0, -0x6F9F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X6F9F);
    // 0x80076690: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80076694: lb          $v1, 0x599E($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X599E);
    // 0x80076698: sll         $a0, $a3, 16
    ctx->r4 = S32(ctx->r7 << 16);
    // 0x8007669C: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x800766A0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x800766A4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800766A8: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x800766AC: lw          $a1, 0x0($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X0);
    // 0x800766B0: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x800766B4: lw          $v1, 0x2F38($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X2F38);
    // 0x800766B8: addu        $v0, $s1, $a0
    ctx->r2 = ADD32(ctx->r17, ctx->r4);
    // 0x800766BC: lbu         $a2, 0x1($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X1);
    // 0x800766C0: addiu       $v0, $a3, 0x1
    ctx->r2 = ADD32(ctx->r7, 0X1);
    // 0x800766C4: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x800766C8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x800766CC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x800766D0: slti        $v0, $v0, 0x8
    ctx->r2 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x800766D4: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x800766D8: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x800766DC: sb          $a2, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r6;
    // 0x800766E0: bne         $v0, $zero, L_80076688
    if (ctx->r2 != 0) {
        // 0x800766E4: sb          $a2, 0x0($a1)
        MEM_B(0X0, ctx->r5) = ctx->r6;
            goto L_80076688;
    }
    // 0x800766E4: sb          $a2, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r6;
    // 0x800766E8: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x800766EC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800766F0: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
    // 0x800766F4: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x800766F8: lw          $a1, 0x2850($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2850);
    // 0x800766FC: j           L_80076804
    // 0x80076700: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
        goto L_80076804;
    // 0x80076700: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
L_80076704:
    // 0x80076704: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80076708: j           L_80076848
    // 0x8007670C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
        goto L_80076848;
    // 0x8007670C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
L_80076710:
    // 0x80076710: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80076714: j           L_80076848
    // 0x80076718: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
        goto L_80076848;
    // 0x80076718: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
L_8007671C:
    // 0x8007671C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80076720: lw          $a1, 0x2854($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2854);
    // 0x80076724: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x80076728: jal         0x80061510
    // 0x8007672C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_19;
    // 0x8007672C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_19:
    // 0x80076730: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x80076734: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80076738: j           L_80076880
    // 0x8007673C: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
        goto L_80076880;
    // 0x8007673C: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
L_80076740:
    // 0x80076740: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80076744: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80076748: lui         $v1, 0x8
    ctx->r3 = S32(0X8 << 16);
    // 0x8007674C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80076750: beq         $v0, $zero, L_80076880
    if (ctx->r2 == 0) {
        // 0x80076754: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80076880;
    }
    // 0x80076754: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80076758: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x8007675C: j           L_80076880
    // 0x80076760: sh          $zero, 0x6($s0)
    MEM_H(0X6, ctx->r16) = 0;
        goto L_80076880;
    // 0x80076760: sh          $zero, 0x6($s0)
    MEM_H(0X6, ctx->r16) = 0;
L_80076764:
    // 0x80076764: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x80076768: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8007676C: bne         $v0, $zero, L_80076880
    if (ctx->r2 != 0) {
        // 0x80076770: sw          $v0, 0xC($s0)
        MEM_W(0XC, ctx->r16) = ctx->r2;
            goto L_80076880;
    }
    // 0x80076770: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x80076774: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80076778: lbu         $v0, -0x6F9F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X6F9F);
    // 0x8007677C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80076780: lbu         $a0, 0x469E($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X469E);
    // 0x80076784: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80076788: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8007678C: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80076790: lw          $a1, 0x45E0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X45E0);
    // 0x80076794: lui         $a2, 0x8019
    ctx->r6 = S32(0X8019 << 16);
    // 0x80076798: addiu       $a2, $a2, 0x3C70
    ctx->r6 = ADD32(ctx->r6, 0X3C70);
    // 0x8007679C: jal         0x80074020
    // 0x800767A0: addiu       $a3, $zero, 0x1800
    ctx->r7 = ADD32(0, 0X1800);
    func_80074020_4F420(rdram, ctx);
        goto after_20;
    // 0x800767A0: addiu       $a3, $zero, 0x1800
    ctx->r7 = ADD32(0, 0X1800);
    after_20:
    // 0x800767A4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x800767A8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x800767AC: bne         $v0, $zero, L_800767C4
    if (ctx->r2 != 0) {
        // 0x800767B0: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_800767C4;
    }
    // 0x800767B0: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x800767B4: jal         0x80074DEC
    // 0x800767B8: nop

    func_80074DEC_501EC(rdram, ctx);
        goto after_21;
    // 0x800767B8: nop

    after_21:
    // 0x800767BC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x800767C0: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
L_800767C4:
    // 0x800767C4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x800767C8: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x800767CC: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x800767D0: beq         $v0, $zero, L_80076820
    if (ctx->r2 == 0) {
        // 0x800767D4: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80076820;
    }
    // 0x800767D4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x800767D8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800767DC: addu        $at, $at, $v0
    gpr jr_addend_800767E4 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800767E0: lw          $v0, 0x2BB8($at)
    ctx->r2 = ADD32(ctx->r1, 0X2BB8);
    // 0x800767E4: jr          $v0
    // 0x800767E8: nop

    switch (jr_addend_800767E4 >> 2) {
        case 0: goto L_80076820; break;
        case 1: goto L_800767EC; break;
        case 2: goto L_80076814; break;
        case 3: goto L_80076820; break;
        case 4: goto L_80076820; break;
        case 5: goto L_80076840; break;
        default: switch_error(__func__, 0x800767E4, 0x800D2BB8);
    }
    // 0x800767E8: nop

L_800767EC:
    // 0x800767EC: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x800767F0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800767F4: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
    // 0x800767F8: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x800767FC: lw          $a1, 0x2874($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2874);
    // 0x80076800: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
L_80076804:
    // 0x80076804: jal         0x80061510
    // 0x80076808: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_22;
    // 0x80076808: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_22:
    // 0x8007680C: j           L_80076884
    // 0x80076810: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80076884;
    // 0x80076810: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80076814:
    // 0x80076814: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80076818: j           L_80076848
    // 0x8007681C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
        goto L_80076848;
    // 0x8007681C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
L_80076820:
    // 0x80076820: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80076824: lw          $a1, 0x2878($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2878);
    // 0x80076828: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x8007682C: jal         0x80061510
    // 0x80076830: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_23;
    // 0x80076830: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_23:
    // 0x80076834: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80076838: j           L_80076880
    // 0x8007683C: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
        goto L_80076880;
    // 0x8007683C: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
L_80076840:
    // 0x80076840: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80076844: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
L_80076848:
    // 0x80076848: sb          $v1, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r3;
    // 0x8007684C: j           L_80076884
    // 0x80076850: sh          $zero, 0x6($s0)
    MEM_H(0X6, ctx->r16) = 0;
        goto L_80076884;
    // 0x80076850: sh          $zero, 0x6($s0)
    MEM_H(0X6, ctx->r16) = 0;
L_80076854:
    // 0x80076854: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80076858: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8007685C: bgez        $v0, L_80076884
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80076860: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80076884;
    }
    // 0x80076860: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80076864: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80076868: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8007686C: addiu       $v1, $v1, -0x3B96
    ctx->r3 = ADD32(ctx->r3, -0X3B96);
    // 0x80076870: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x80076874: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80076878: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8007687C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
L_80076880:
    // 0x80076880: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80076884:
    // 0x80076884: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80076888: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8007688C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80076890: jr          $ra
    // 0x80076894: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80076894: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800540B4_2F4B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800540B4: jr          $ra
    // 0x800540B8: sb          $zero, 0x7($a0)
    MEM_B(0X7, ctx->r4) = 0;
    TRACE_RETURN()
    return;
    // 0x800540B8: sb          $zero, 0x7($a0)
    MEM_B(0X7, ctx->r4) = 0;
;}
RECOMP_FUNC void func_80032424_D824(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80032424: bne         $a0, $zero, L_80032434
    if (ctx->r4 != 0) {
        // 0x80032428: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_80032434;
    }
    // 0x80032428: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8003242C: j           L_80032488
    // 0x80032430: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_80032488;
    // 0x80032430: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80032434:
    // 0x80032434: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80032438: sltu        $v0, $v1, $a1
    ctx->r2 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x8003243C: beql        $v0, $zero, L_8003245C
    if (ctx->r2 == 0) {
        // 0x80032440: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_8003245C;
    }
    goto skip_0;
    // 0x80032440: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    skip_0:
    // 0x80032444: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
L_80032448:
    // 0x80032448: srl         $a1, $a1, 1
    ctx->r5 = S32(U32(ctx->r5) >> 1);
    // 0x8003244C: sltu        $v0, $v1, $a1
    ctx->r2 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x80032450: bnel        $v0, $zero, L_80032448
    if (ctx->r2 != 0) {
        // 0x80032454: sll         $v1, $v1, 1
        ctx->r3 = S32(ctx->r3 << 1);
            goto L_80032448;
    }
    goto skip_1;
    // 0x80032454: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    skip_1:
    // 0x80032458: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
L_8003245C:
    // 0x8003245C: divu        $zero, $a0, $a1
    lo = S32(U32(ctx->r4) / U32(ctx->r5)); hi = S32(U32(ctx->r4) % U32(ctx->r5));
    // 0x80032460: bne         $a1, $zero, L_8003246C
    if (ctx->r5 != 0) {
        // 0x80032464: nop
    
            goto L_8003246C;
    }
    // 0x80032464: nop

    // 0x80032468: break       7
    do_break(2147689576);
L_8003246C:
    // 0x8003246C: mflo        $v0
    ctx->r2 = lo;
    // 0x80032470: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80032474: srl         $v1, $v0, 1
    ctx->r3 = S32(U32(ctx->r2) >> 1);
    // 0x80032478: sltu        $v0, $v1, $a1
    ctx->r2 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x8003247C: bnel        $v0, $zero, L_8003245C
    if (ctx->r2 != 0) {
        // 0x80032480: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_8003245C;
    }
    goto skip_2;
    // 0x80032480: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    skip_2:
    // 0x80032484: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
L_80032488:
    // 0x80032488: jr          $ra
    // 0x8003248C: nop

    TRACE_RETURN()
    return;
    // 0x8003248C: nop

;}
RECOMP_FUNC void func_80074020_4F420(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80074020: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80074024: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80074028: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8007402C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80074030: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x80074034: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80074038: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x8007403C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80074040: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80074044: jal         0x80087570
    // 0x80074048: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    Graph_ThreadStop(rdram, ctx);
        goto after_0;
    // 0x80074048: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    after_0:
    // 0x8007404C: bne         $s0, $zero, L_80074078
    if (ctx->r16 != 0) {
        // 0x80074050: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80074078;
    }
    // 0x80074050: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80074054: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80074058: jal         0x80087814
    // 0x8007405C: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    loadSaveData(rdram, ctx);
        goto after_1;
    // 0x8007405C: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_1:
    // 0x80074060: beq         $v0, $zero, L_80074078
    if (ctx->r2 == 0) {
        // 0x80074064: nop
    
            goto L_80074078;
    }
    // 0x80074064: nop

    // 0x80074068: jal         0x80087590
    // 0x8007406C: nop

    func_80087590_62990(rdram, ctx);
        goto after_2;
    // 0x8007406C: nop

    after_2:
    // 0x80074070: j           L_80074084
    // 0x80074074: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_80074084;
    // 0x80074074: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80074078:
    // 0x80074078: jal         0x80087590
    // 0x8007407C: nop

    func_80087590_62990(rdram, ctx);
        goto after_3;
    // 0x8007407C: nop

    after_3:
    // 0x80074080: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80074084:
    // 0x80074084: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80074088: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8007408C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80074090: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80074094: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80074098: jr          $ra
    // 0x8007409C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8007409C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80079898_54C98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80079898: lbu         $v1, 0x8($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X8);
    // 0x8007989C: addiu       $v0, $zero, -0x28
    ctx->r2 = ADD32(0, -0X28);
    // 0x800798A0: sh          $v0, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r2;
    // 0x800798A4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x800798A8: sh          $v0, 0x34($a0)
    MEM_H(0X34, ctx->r4) = ctx->r2;
    // 0x800798AC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800798B0: jr          $ra
    // 0x800798B4: sb          $v1, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x800798B4: sb          $v1, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r3;
;}
RECOMP_FUNC void func_80069844_44C44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80069844: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80069848: jr          $ra
    // 0x8006984C: sw          $a0, -0x3E74($at)
    MEM_W(-0X3E74, ctx->r1) = ctx->r4;
    TRACE_RETURN()
    return;
    // 0x8006984C: sw          $a0, -0x3E74($at)
    MEM_W(-0X3E74, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_80051E18_2D218(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80051E18: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80051E1C: sw          $fp, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r30;
    // 0x80051E20: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x80051E24: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80051E28: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x80051E2C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80051E30: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80051E34: lw          $s1, -0x11CC($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X11CC);
    // 0x80051E38: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x80051E3C: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x80051E40: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80051E44: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x80051E48: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80051E4C: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x80051E50: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x80051E54: addu        $s5, $a2, $zero
    ctx->r21 = ADD32(ctx->r6, 0);
    // 0x80051E58: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x80051E5C: addu        $s6, $a3, $zero
    ctx->r22 = ADD32(ctx->r7, 0);
    // 0x80051E60: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80051E64: sltiu       $v0, $s1, 0x40
    ctx->r2 = ctx->r17 < 0X40 ? 1 : 0;
    // 0x80051E68: bne         $v0, $zero, L_80051E78
    if (ctx->r2 != 0) {
        // 0x80051E6C: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_80051E78;
    }
    // 0x80051E6C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80051E70: j           L_80051F6C
    // 0x80051E74: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_80051F6C;
    // 0x80051E74: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80051E78:
    // 0x80051E78: sll         $s0, $s1, 1
    ctx->r16 = S32(ctx->r17 << 1);
    // 0x80051E7C: addu        $s0, $s0, $s1
    ctx->r16 = ADD32(ctx->r16, ctx->r17);
    // 0x80051E80: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    // 0x80051E84: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80051E88: addiu       $v0, $v0, -0x2788
    ctx->r2 = ADD32(ctx->r2, -0X2788);
    // 0x80051E8C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x80051E90: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80051E94: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x80051E98: jal         0x8009A3B4
    // 0x80051E9C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80051E9C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80051EA0: lui         $v1, 0x7F
    ctx->r3 = S32(0X7F << 16);
    // 0x80051EA4: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x80051EA8: srl         $v0, $s2, 2
    ctx->r2 = S32(U32(ctx->r18) >> 2);
    // 0x80051EAC: or          $v0, $v0, $s5
    ctx->r2 = ctx->r2 | ctx->r21;
    // 0x80051EB0: or          $v0, $v0, $s6
    ctx->r2 = ctx->r2 | ctx->r22;
    // 0x80051EB4: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
    // 0x80051EB8: sll         $v0, $fp, 24
    ctx->r2 = S32(ctx->r30 << 24);
    // 0x80051EBC: and         $v1, $s3, $v1
    ctx->r3 = ctx->r19 & ctx->r3;
    // 0x80051EC0: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80051EC4: or          $v0, $v0, $s7
    ctx->r2 = ctx->r2 | ctx->r23;
    // 0x80051EC8: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x80051ECC: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x80051ED0: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80051ED4: lw          $v1, -0x41B0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X41B0);
    // 0x80051ED8: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
    // 0x80051EDC: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80051EE0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80051EE4: sw          $t0, -0x5958($at)
    MEM_W(-0X5958, ctx->r1) = ctx->r8;
    // 0x80051EE8: lw          $s1, 0x4($s3)
    ctx->r17 = MEM_W(ctx->r19, 0X4);
    // 0x80051EEC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80051EF0: lw          $v0, -0x11CC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X11CC);
    // 0x80051EF4: and         $s0, $s1, $v1
    ctx->r16 = ctx->r17 & ctx->r3;
    // 0x80051EF8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80051EFC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80051F00: sw          $v0, -0x11CC($at)
    MEM_W(-0X11CC, ctx->r1) = ctx->r2;
    // 0x80051F04: andi        $v0, $s0, 0x80
    ctx->r2 = ctx->r16 & 0X80;
    // 0x80051F08: beq         $v0, $zero, L_80051F14
    if (ctx->r2 == 0) {
        // 0x80051F0C: addiu       $v0, $zero, -0x100
        ctx->r2 = ADD32(0, -0X100);
            goto L_80051F14;
    }
    // 0x80051F0C: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
    // 0x80051F10: and         $s0, $s0, $v0
    ctx->r16 = ctx->r16 & ctx->r2;
L_80051F14:
    // 0x80051F14: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x80051F18: or          $v0, $s0, $t0
    ctx->r2 = ctx->r16 | ctx->r8;
    // 0x80051F1C: beq         $s0, $zero, L_80051F68
    if (ctx->r16 == 0) {
        // 0x80051F20: sw          $v0, 0x4($s3)
        MEM_W(0X4, ctx->r19) = ctx->r2;
            goto L_80051F68;
    }
    // 0x80051F20: sw          $v0, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r2;
    // 0x80051F24: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x80051F28: lui         $s3, 0x7FFF
    ctx->r19 = S32(0X7FFF << 16);
    // 0x80051F2C: ori         $s3, $s3, 0xFFFF
    ctx->r19 = ctx->r19 | 0XFFFF;
    // 0x80051F30: lui         $s2, 0x801E
    ctx->r18 = S32(0X801E << 16);
    // 0x80051F34: addiu       $s2, $s2, -0x21A0
    ctx->r18 = ADD32(ctx->r18, -0X21A0);
L_80051F38:
    // 0x80051F38: sltu        $v0, $s3, $s0
    ctx->r2 = ctx->r19 < ctx->r16 ? 1 : 0;
    // 0x80051F3C: beq         $v0, $zero, L_80051F54
    if (ctx->r2 == 0) {
        // 0x80051F40: addu        $a1, $s4, $zero
        ctx->r5 = ADD32(ctx->r20, 0);
            goto L_80051F54;
    }
    // 0x80051F40: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x80051F44: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x80051F48: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80051F4C: jal         0x8009A3B4
    // 0x80051F50: addiu       $a0, $a0, 0xC0
    ctx->r4 = ADD32(ctx->r4, 0XC0);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80051F50: addiu       $a0, $a0, 0xC0
    ctx->r4 = ADD32(ctx->r4, 0XC0);
    after_1:
L_80051F54:
    // 0x80051F54: sll         $s0, $s0, 1
    ctx->r16 = S32(ctx->r16 << 1);
    // 0x80051F58: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80051F5C: sltiu       $v0, $s1, 0x18
    ctx->r2 = ctx->r17 < 0X18 ? 1 : 0;
    // 0x80051F60: bne         $v0, $zero, L_80051F38
    if (ctx->r2 != 0) {
        // 0x80051F64: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_80051F38;
    }
    // 0x80051F64: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
L_80051F68:
    // 0x80051F68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80051F6C:
    // 0x80051F6C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80051F70: lw          $fp, 0x30($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X30);
    // 0x80051F74: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x80051F78: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x80051F7C: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x80051F80: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80051F84: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80051F88: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80051F8C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80051F90: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80051F94: jr          $ra
    // 0x80051F98: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80051F98: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
