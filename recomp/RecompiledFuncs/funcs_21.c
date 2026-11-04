#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80037CA0_130A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80037CA0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80037CA4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80037CA8: addiu       $s1, $sp, 0x10
    ctx->r17 = ADD32(ctx->r29, 0X10);
    // 0x80037CAC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80037CB0: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80037CB4: addiu       $a1, $a1, 0x1DF0
    ctx->r5 = ADD32(ctx->r5, 0X1DF0);
    // 0x80037CB8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80037CBC: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80037CC0: jal         0x8009A3B4
    // 0x80037CC4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80037CC4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    after_0:
    // 0x80037CC8: lui         $a0, 0x801A
    ctx->r4 = S32(0X801A << 16);
    // 0x80037CCC: addiu       $a0, $a0, 0x5448
    ctx->r4 = ADD32(ctx->r4, 0X5448);
    // 0x80037CD0: jal         0x8009A2B0
    // 0x80037CD4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    bzero_recomp(rdram, ctx);
        goto after_1;
    // 0x80037CD4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_1:
    // 0x80037CD8: lui         $s0, 0x8021
    ctx->r16 = S32(0X8021 << 16);
    // 0x80037CDC: addiu       $s0, $s0, 0xB68
    ctx->r16 = ADD32(ctx->r16, 0XB68);
    // 0x80037CE0: jal         0x80087AE8
    // 0x80037CE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80087AE8_62EE8(rdram, ctx);
        goto after_2;
    // 0x80037CE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80037CE8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80037CEC: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    // 0x80037CF0: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x80037CF4: addiu       $a1, $a1, -0x3C00
    ctx->r5 = ADD32(ctx->r5, -0X3C00);
    // 0x80037CF8: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
L_80037CFC:
    // 0x80037CFC: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80037D00: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80037D04: lbu         $v1, 0xB68($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0XB68);
    // 0x80037D08: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80037D0C: bne         $v1, $v0, L_80037D38
    if (ctx->r3 != ctx->r2) {
        // 0x80037D10: nop
    
            goto L_80037D38;
    }
    // 0x80037D10: nop

    // 0x80037D14: bne         $a0, $a2, L_80037D2C
    if (ctx->r4 != ctx->r6) {
        // 0x80037D18: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_80037D2C;
    }
    // 0x80037D18: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80037D1C: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x80037D20: lhu         $v1, 0x2($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X2);
    // 0x80037D24: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x80037D28: sh          $v1, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r3;
L_80037D2C:
    // 0x80037D2C: slti        $v0, $a0, 0x10
    ctx->r2 = SIGNED(ctx->r4) < 0X10 ? 1 : 0;
    // 0x80037D30: bne         $v0, $zero, L_80037CFC
    if (ctx->r2 != 0) {
        // 0x80037D34: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80037CFC;
    }
    // 0x80037D34: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_80037D38:
    // 0x80037D38: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80037D3C: addiu       $a0, $a0, -0xC70
    ctx->r4 = ADD32(ctx->r4, -0XC70);
    // 0x80037D40: jal         0x8009A2B0
    // 0x80037D44: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    bzero_recomp(rdram, ctx);
        goto after_3;
    // 0x80037D44: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_3:
    // 0x80037D48: lui         $a0, 0x8006
    ctx->r4 = S32(0X8006 << 16);
    // 0x80037D4C: jal         0x800292E8
    // 0x80037D50: addiu       $a0, $a0, -0x2DC0
    ctx->r4 = ADD32(ctx->r4, -0X2DC0);
    func_800292E8_46E8(rdram, ctx);
        goto after_4;
    // 0x80037D50: addiu       $a0, $a0, -0x2DC0
    ctx->r4 = ADD32(ctx->r4, -0X2DC0);
    after_4:
    // 0x80037D54: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80037D58: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80037D5C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80037D60: jr          $ra
    // 0x80037D64: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80037D64: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void _loadOutputBuffer(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800984D8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x800984DC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800984E0: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x800984E4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800984E8: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x800984EC: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x800984F0: addu        $s6, $a2, $zero
    ctx->r22 = ADD32(ctx->r6, 0);
    // 0x800984F4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800984F8: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x800984FC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80098500: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80098504: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80098508: sdc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X40, ctx->r29);
    // 0x8009850C: sdc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X38, ctx->r29);
    // 0x80098510: lw          $v0, 0x24($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X24);
    // 0x80098514: lw          $s3, 0x58($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X58);
    // 0x80098518: beq         $v0, $zero, L_80098694
    if (ctx->r2 == 0) {
        // 0x8009851C: addu        $s5, $a3, $zero
        ctx->r21 = ADD32(ctx->r7, 0);
            goto L_80098694;
    }
    // 0x8009851C: addu        $s5, $a3, $zero
    ctx->r21 = ADD32(ctx->r7, 0);
    // 0x80098520: lw          $s0, 0x4($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X4);
    // 0x80098524: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x80098528: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8009852C: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x80098530: jal         0x80098A6C
    // 0x80098534: subu        $s0, $s0, $v0
    ctx->r16 = SUB32(ctx->r16, ctx->r2);
    _doModFunc(rdram, ctx);
        goto after_0;
    // 0x80098534: subu        $s0, $s0, $v0
    ctx->r16 = SUB32(ctx->r16, ctx->r2);
    after_0:
    // 0x80098538: mtc1        $s0, $f2
    ctx->f2.u32l = ctx->r16;
    // 0x8009853C: nop

    // 0x80098540: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x80098544: div.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    // 0x80098548: lui         $at, 0x4700
    ctx->r1 = S32(0X4700 << 16);
    // 0x8009854C: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80098550: nop

    // 0x80098554: mul.s       $f0, $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f22.fl);
    // 0x80098558: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x8009855C: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x80098560: nop

    // 0x80098564: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x80098568: nop

    // 0x8009856C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x80098570: div.s       $f0, $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f22.fl);
    // 0x80098574: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80098578: ldc1        $f20, 0x3150($at)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r1, 0X3150);
    // 0x8009857C: cvt.d.s     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.d = CVT_D_S(ctx->f0.fl);
    // 0x80098580: sub.d       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.d); NAN_CHECK(ctx->f0.d); 
    ctx->f20.d = ctx->f20.d - ctx->f0.d;
    // 0x80098584: mtc1        $s5, $f2
    ctx->f2.u32l = ctx->r21;
    // 0x80098588: nop

    // 0x8009858C: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x80098590: cvt.s.d     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.d); 
    ctx->f20.fl = CVT_S_D(ctx->f20.d);
    // 0x80098594: mul.s       $f2, $f20, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f20.fl, ctx->f2.fl);
    // 0x80098598: lw          $v0, 0x24($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X24);
    // 0x8009859C: lwc1        $f0, 0x20($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X20);
    // 0x800985A0: add.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x800985A4: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x800985A8: mfc1        $s1, $f2
    ctx->r17 = (int32_t)ctx->f2.u32l;
    // 0x800985AC: nop

    // 0x800985B0: mtc1        $s1, $f2
    ctx->f2.u32l = ctx->r17;
    // 0x800985B4: nop

    // 0x800985B8: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x800985BC: sub.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x800985C0: swc1        $f0, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f0.u32l;
    // 0x800985C4: lw          $v0, 0x18($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X18);
    // 0x800985C8: lw          $v1, 0x4($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X4);
    // 0x800985CC: lw          $a1, 0x18($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X18);
    // 0x800985D0: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x800985D4: addiu       $a2, $zero, 0x280
    ctx->r6 = ADD32(0, 0X280);
    // 0x800985D8: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x800985DC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x800985E0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x800985E4: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x800985E8: andi        $a3, $a1, 0x7
    ctx->r7 = ctx->r5 & 0X7;
    // 0x800985EC: sra         $a3, $a3, 1
    ctx->r7 = S32(SIGNED(ctx->r7) >> 1);
    // 0x800985F0: sll         $s0, $a3, 1
    ctx->r16 = S32(ctx->r7 << 1);
    // 0x800985F4: subu        $a1, $a1, $s0
    ctx->r5 = SUB32(ctx->r5, ctx->r16);
    // 0x800985F8: jal         0x800986F0
    // 0x800985FC: addu        $a3, $s1, $a3
    ctx->r7 = ADD32(ctx->r17, ctx->r7);
    _loadBuffer(rdram, ctx);
        goto after_1;
    // 0x800985FC: addu        $a3, $s1, $a3
    ctx->r7 = ADD32(ctx->r17, ctx->r7);
    after_1:
    // 0x80098600: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x80098604: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x80098608: ori         $v0, $v0, 0x280
    ctx->r2 = ctx->r2 | 0X280;
    // 0x8009860C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80098610: or          $s0, $s0, $v0
    ctx->r16 = ctx->r16 | ctx->r2;
    // 0x80098614: sll         $v1, $s6, 16
    ctx->r3 = S32(ctx->r22 << 16);
    // 0x80098618: sll         $v0, $s5, 1
    ctx->r2 = S32(ctx->r21 << 1);
    // 0x8009861C: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80098620: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80098624: sw          $s0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r16;
    // 0x80098628: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
    // 0x8009862C: lw          $v0, 0x24($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X24);
    // 0x80098630: mul.s       $f20, $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f22.fl);
    // 0x80098634: lbu         $a0, 0x27($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X27);
    // 0x80098638: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x8009863C: addu        $s0, $s3, $zero
    ctx->r16 = ADD32(ctx->r19, 0);
    // 0x80098640: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80098644: trunc.w.s   $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    ctx->f0.u32l = TRUNC_W_S(ctx->f20.fl);
    // 0x80098648: mfc1        $v0, $f0
    ctx->r2 = (int32_t)ctx->f0.u32l;
    // 0x8009864C: nop

    // 0x80098650: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80098654: lui         $v1, 0x500
    ctx->r3 = S32(0X500 << 16);
    // 0x80098658: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8009865C: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x80098660: sw          $a0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r4;
    // 0x80098664: lw          $v0, 0x24($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X24);
    // 0x80098668: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x8009866C: jal         0x80099BB0
    // 0x80098670: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_2;
    // 0x80098670: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    after_2:
    // 0x80098674: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x80098678: lw          $v0, 0x24($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X24);
    // 0x8009867C: sw          $zero, 0x24($v0)
    MEM_W(0X24, ctx->r2) = 0;
    // 0x80098680: lw          $v0, 0x18($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X18);
    // 0x80098684: subu        $s1, $s1, $s5
    ctx->r17 = SUB32(ctx->r17, ctx->r21);
    // 0x80098688: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8009868C: j           L_800986BC
    // 0x80098690: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
        goto L_800986BC;
    // 0x80098690: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
L_80098694:
    // 0x80098694: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x80098698: lw          $a1, 0x4($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X4);
    // 0x8009869C: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
    // 0x800986A0: addu        $a2, $s6, $zero
    ctx->r6 = ADD32(ctx->r22, 0);
    // 0x800986A4: addu        $a3, $s5, $zero
    ctx->r7 = ADD32(ctx->r21, 0);
    // 0x800986A8: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x800986AC: sll         $a1, $a1, 1
    ctx->r5 = S32(ctx->r5 << 1);
    // 0x800986B0: jal         0x800986F0
    // 0x800986B4: subu        $a1, $v0, $a1
    ctx->r5 = SUB32(ctx->r2, ctx->r5);
    _loadBuffer(rdram, ctx);
        goto after_3;
    // 0x800986B4: subu        $a1, $v0, $a1
    ctx->r5 = SUB32(ctx->r2, ctx->r5);
    after_3:
    // 0x800986B8: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
L_800986BC:
    // 0x800986BC: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x800986C0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x800986C4: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x800986C8: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x800986CC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800986D0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800986D4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800986D8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800986DC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800986E0: ldc1        $f22, 0x40($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X40);
    // 0x800986E4: ldc1        $f20, 0x38($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X38);
    // 0x800986E8: jr          $ra
    // 0x800986EC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x800986EC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_800292E8_46E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800292E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800292EC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x800292F0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x800292F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x800292F8: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x800292FC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80029300: jal         0x8009B900
    // 0x80029304: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    osGetThreadPri_recomp(rdram, ctx);
        goto after_0;
    // 0x80029304: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
    // 0x80029308: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8002930C: addiu       $v1, $v0, 0x36
    ctx->r3 = ADD32(ctx->r2, 0X36);
    // 0x80029310: sltiu       $v0, $v1, 0x4
    ctx->r2 = ctx->r3 < 0X4 ? 1 : 0;
    // 0x80029314: beq         $v0, $zero, L_80029338
    if (ctx->r2 == 0) {
        // 0x80029318: sll         $v0, $v1, 3
        ctx->r2 = S32(ctx->r3 << 3);
            goto L_80029338;
    }
    // 0x80029318: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x8002931C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80029320: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80029324: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80029328: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8002932C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80029330: addiu       $v1, $v1, -0x46D0
    ctx->r3 = ADD32(ctx->r3, -0X46D0);
    // 0x80029334: addu        $s0, $v0, $v1
    ctx->r16 = ADD32(ctx->r2, ctx->r3);
L_80029338:
    // 0x80029338: beq         $s0, $zero, L_80029378
    if (ctx->r16 == 0) {
        // 0x8002933C: nop
    
            goto L_80029378;
    }
    // 0x8002933C: nop

    // 0x80029340: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x80029344: beq         $v0, $zero, L_80029368
    if (ctx->r2 == 0) {
        // 0x80029348: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_80029368;
    }
    // 0x80029348: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8002934C: jal         0x80029114
    // 0x80029350: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_80029114_4514(rdram, ctx);
        goto after_1;
    // 0x80029350: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_1:
    // 0x80029354: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x80029358: jalr        $v0
    // 0x8002935C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x8002935C: nop

    after_2:
    // 0x80029360: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x80029364: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80029368:
    // 0x80029368: sh          $v0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r2;
    // 0x8002936C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80029370: sw          $s1, 0x1C0($s0)
    MEM_W(0X1C0, ctx->r16) = ctx->r17;
    // 0x80029374: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
L_80029378:
    // 0x80029378: jal         0x8009B820
    // 0x8002937C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    osDestroyThread_recomp(rdram, ctx);
        goto after_3;
    // 0x8002937C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_3:
    // 0x80029380: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80029384: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80029388: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8002938C: jr          $ra
    // 0x80029390: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80029390: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8008DCB8_690B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008DCB8: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x8008DCBC: lw          $v1, -0xEEC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0XEEC);
    // 0x8008DCC0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8008DCC4: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8008DCC8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8008DCCC: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x8008DCD0: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x8008DCD4: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8008DCD8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8008DCDC: lw          $s3, 0x14($s2)
    ctx->r19 = MEM_W(ctx->r18, 0X14);
    // 0x8008DCE0: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x8008DCE4: lw          $v0, 0x4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4);
    // 0x8008DCE8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8008DCEC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8008DCF0: sw          $zero, 0x20($v1)
    MEM_W(0X20, ctx->r3) = 0;
    // 0x8008DCF4: sw          $zero, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = 0;
    // 0x8008DCF8: sw          $v0, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->r2;
    // 0x8008DCFC: lw          $a2, 0x18($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X18);
    // 0x8008DD00: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8008DD04: addiu       $v0, $zero, 0xB8
    ctx->r2 = ADD32(0, 0XB8);
    // 0x8008DD08: sw          $v0, 0x44($v1)
    MEM_W(0X44, ctx->r3) = ctx->r2;
    // 0x8008DD0C: sw          $a2, 0x40($v1)
    MEM_W(0X40, ctx->r3) = ctx->r6;
    // 0x8008DD10: lw          $t0, 0x10($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X10);
    // 0x8008DD14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8008DD18: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x8008DD1C: sw          $v0, 0x4C($v1)
    MEM_W(0X4C, ctx->r3) = ctx->r2;
    // 0x8008DD20: addiu       $v0, $zero, 0x44
    ctx->r2 = ADD32(0, 0X44);
    // 0x8008DD24: sw          $zero, 0x48($v1)
    MEM_W(0X48, ctx->r3) = 0;
    // 0x8008DD28: sw          $t0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r8;
    // 0x8008DD2C: jal         0x80098CC0
    // 0x8008DD30: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    alHeapDBAlloc(rdram, ctx);
        goto after_0;
    // 0x8008DD30: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x8008DD34: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x8008DD38: lw          $v1, -0xEEC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0XEEC);
    // 0x8008DD3C: sw          $v0, 0x34($v1)
    MEM_W(0X34, ctx->r3) = ctx->r2;
    // 0x8008DD40: sw          $zero, 0x14($v0)
    MEM_W(0X14, ctx->r2) = 0;
    // 0x8008DD44: lw          $v1, 0x34($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X34);
    // 0x8008DD48: lw          $v0, 0x4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4);
    // 0x8008DD4C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8008DD50: sw          $v0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r2;
    // 0x8008DD54: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8008DD58: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8008DD5C: lw          $a3, 0x4($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X4);
    // 0x8008DD60: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8008DD64: jal         0x80098CC0
    // 0x8008DD68: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    alHeapDBAlloc(rdram, ctx);
        goto after_1;
    // 0x8008DD68: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_1:
    // 0x8008DD6C: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x8008DD70: lw          $v1, -0xEEC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0XEEC);
    // 0x8008DD74: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8008DD78: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8008DD7C: lw          $v1, 0x34($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X34);
    // 0x8008DD80: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x8008DD84: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8008DD88: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x8008DD8C: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8008DD90: jal         0x80098CC0
    // 0x8008DD94: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    alHeapDBAlloc(rdram, ctx);
        goto after_2;
    // 0x8008DD94: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_2:
    // 0x8008DD98: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x8008DD9C: lw          $v1, -0xEEC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0XEEC);
    // 0x8008DDA0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8008DDA4: sw          $a0, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r4;
    // 0x8008DDA8: lbu         $v0, 0x1C($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X1C);
    // 0x8008DDAC: beq         $v0, $zero, L_8008DDE4
    if (ctx->r2 == 0) {
        // 0x8008DDB0: addu        $a1, $s2, $zero
        ctx->r5 = ADD32(ctx->r18, 0);
            goto L_8008DDE4;
    }
    // 0x8008DDB0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8008DDB4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8008DDB8: jal         0x8008DF28
    // 0x8008DDBC: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    func_8008DF28_69328(rdram, ctx);
        goto after_3;
    // 0x8008DDBC: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_3:
    // 0x8008DDC0: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8008DDC4: lw          $a0, -0xEEC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XEEC);
    // 0x8008DDC8: lw          $v1, 0x34($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X34);
    // 0x8008DDCC: sw          $v0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r2;
    // 0x8008DDD0: lw          $v1, 0x30($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X30);
    // 0x8008DDD4: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8008DDD8: addiu       $v0, $v0, 0x870
    ctx->r2 = ADD32(ctx->r2, 0X870);
    // 0x8008DDDC: j           L_8008DDF0
    // 0x8008DDE0: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
        goto L_8008DDF0;
    // 0x8008DDE0: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
L_8008DDE4:
    // 0x8008DDE4: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8008DDE8: addiu       $v0, $v0, -0x1020
    ctx->r2 = ADD32(ctx->r2, -0X1020);
    // 0x8008DDEC: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
L_8008DDF0:
    // 0x8008DDF0: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x8008DDF4: lw          $v0, -0xEEC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XEEC);
    // 0x8008DDF8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8008DDFC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8008DE00: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    // 0x8008DE04: sw          $zero, 0x14($v0)
    MEM_W(0X14, ctx->r2) = 0;
    // 0x8008DE08: sw          $zero, 0x18($v0)
    MEM_W(0X18, ctx->r2) = 0;
    // 0x8008DE0C: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x8008DE10: sw          $zero, 0x10($v0)
    MEM_W(0X10, ctx->r2) = 0;
    // 0x8008DE14: addiu       $v0, $zero, 0x8C
    ctx->r2 = ADD32(0, 0X8C);
    // 0x8008DE18: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8008DE1C: lw          $a3, 0x4($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X4);
    // 0x8008DE20: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8008DE24: jal         0x80098CC0
    // 0x8008DE28: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    alHeapDBAlloc(rdram, ctx);
        goto after_4;
    // 0x8008DE28: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_4:
    // 0x8008DE2C: lw          $v1, 0x4($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X4);
    // 0x8008DE30: blez        $v1, L_8008DEA8
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8008DE34: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_8008DEA8;
    }
    // 0x8008DE34: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8008DE38: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
L_8008DE3C:
    // 0x8008DE3C: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8008DE40: lw          $a1, -0xEEC($a1)
    ctx->r5 = MEM_W(ctx->r5, -0XEEC);
    // 0x8008DE44: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8008DE48: jal         0x80098C2C
    // 0x8008DE4C: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    alLink(rdram, ctx);
        goto after_5;
    // 0x8008DE4C: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    after_5:
    // 0x8008DE50: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x8008DE54: lw          $v0, -0xEEC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XEEC);
    // 0x8008DE58: sw          $zero, 0x8($s1)
    MEM_W(0X8, ctx->r17) = 0;
    // 0x8008DE5C: lw          $a1, 0x24($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X24);
    // 0x8008DE60: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8008DE64: jal         0x8008F46C
    // 0x8008DE68: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    func_8008F46C_6A86C(rdram, ctx);
        goto after_6;
    // 0x8008DE68: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_6:
    // 0x8008DE6C: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x8008DE70: lw          $v0, -0xEEC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XEEC);
    // 0x8008DE74: lw          $a0, 0x34($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X34);
    // 0x8008DE78: lw          $v1, 0x14($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X14);
    // 0x8008DE7C: lw          $a1, 0x1C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X1C);
    // 0x8008DE80: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8008DE84: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8008DE88: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8008DE8C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x8008DE90: sw          $s1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r17;
    // 0x8008DE94: lw          $v0, 0x4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4);
    // 0x8008DE98: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8008DE9C: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8008DEA0: bne         $v0, $zero, L_8008DE3C
    if (ctx->r2 != 0) {
        // 0x8008DEA4: addiu       $s1, $s1, 0x8C
        ctx->r17 = ADD32(ctx->r17, 0X8C);
            goto L_8008DE3C;
    }
    // 0x8008DEA4: addiu       $s1, $s1, 0x8C
    ctx->r17 = ADD32(ctx->r17, 0X8C);
L_8008DEA8:
    // 0x8008DEA8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8008DEAC: addiu       $v0, $zero, 0x1C
    ctx->r2 = ADD32(0, 0X1C);
    // 0x8008DEB0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8008DEB4: lw          $a3, 0x8($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X8);
    // 0x8008DEB8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8008DEBC: jal         0x80098CC0
    // 0x8008DEC0: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    alHeapDBAlloc(rdram, ctx);
        goto after_7;
    // 0x8008DEC0: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_7:
    // 0x8008DEC4: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8008DEC8: lw          $a0, -0xEEC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XEEC);
    // 0x8008DECC: sw          $zero, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = 0;
    // 0x8008DED0: lw          $v1, 0x8($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X8);
    // 0x8008DED4: blez        $v1, L_8008DF00
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8008DED8: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_8008DF00;
    }
    // 0x8008DED8: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8008DEDC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_8008DEE0:
    // 0x8008DEE0: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
    // 0x8008DEE4: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x8008DEE8: sw          $v1, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r3;
    // 0x8008DEEC: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
    // 0x8008DEF0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8008DEF4: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8008DEF8: bne         $v0, $zero, L_8008DEE0
    if (ctx->r2 != 0) {
        // 0x8008DEFC: addiu       $v1, $v1, 0x1C
        ctx->r3 = ADD32(ctx->r3, 0X1C);
            goto L_8008DEE0;
    }
    // 0x8008DEFC: addiu       $v1, $v1, 0x1C
    ctx->r3 = ADD32(ctx->r3, 0X1C);
L_8008DF00:
    // 0x8008DF00: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x8008DF04: lw          $v0, -0xEEC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XEEC);
    // 0x8008DF08: sw          $s3, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->r19;
    // 0x8008DF0C: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x8008DF10: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x8008DF14: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8008DF18: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8008DF1C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8008DF20: jr          $ra
    // 0x8008DF24: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8008DF24: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8003E2F0_196F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003E2F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8003E2F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8003E2F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8003E2FC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8003E300: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8003E304: lbu         $v0, 0x82($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X82);
    // 0x8003E308: addiu       $a0, $s0, 0x4
    ctx->r4 = ADD32(ctx->r16, 0X4);
    // 0x8003E30C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x8003E310: jal         0x8009A2B0
    // 0x8003E314: andi        $s1, $v0, 0x1
    ctx->r17 = ctx->r2 & 0X1;
    bzero_recomp(rdram, ctx);
        goto after_0;
    // 0x8003E314: andi        $s1, $v0, 0x1
    ctx->r17 = ctx->r2 & 0X1;
    after_0:
    // 0x8003E318: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8003E31C: sh          $v0, 0x6C($s0)
    MEM_H(0X6C, ctx->r16) = ctx->r2;
    // 0x8003E320: sh          $v0, 0x6A($s0)
    MEM_H(0X6A, ctx->r16) = ctx->r2;
    // 0x8003E324: sh          $v0, 0x68($s0)
    MEM_H(0X68, ctx->r16) = ctx->r2;
    // 0x8003E328: sb          $zero, 0x83($s0)
    MEM_B(0X83, ctx->r16) = 0;
    // 0x8003E32C: sb          $zero, 0x81($s0)
    MEM_B(0X81, ctx->r16) = 0;
    // 0x8003E330: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003E334: sb          $zero, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = 0;
    // 0x8003E338: jal         0x8004C500
    // 0x8003E33C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8004C500_27900(rdram, ctx);
        goto after_1;
    // 0x8003E33C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x8003E340: bne         $s1, $zero, L_8003E358
    if (ctx->r17 != 0) {
        // 0x8003E344: nop
    
            goto L_8003E358;
    }
    // 0x8003E344: nop

    // 0x8003E348: jal         0x80075484
    // 0x8003E34C: nop

    func_80075484_50884(rdram, ctx);
        goto after_2;
    // 0x8003E34C: nop

    after_2:
    // 0x8003E350: j           L_8003E360
    // 0x8003E354: nop

        goto L_8003E360;
    // 0x8003E354: nop

L_8003E358:
    // 0x8003E358: jal         0x80074A9C
    // 0x8003E35C: nop

    func_80074A9C_4FE9C(rdram, ctx);
        goto after_3;
    // 0x8003E35C: nop

    after_3:
L_8003E360:
    // 0x8003E360: jal         0x80069A40
    // 0x8003E364: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80069A40_44E40(rdram, ctx);
        goto after_4;
    // 0x8003E364: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x8003E368: jal         0x800601D0
    // 0x8003E36C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_800601D0_3B5D0(rdram, ctx);
        goto after_5;
    // 0x8003E36C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
    // 0x8003E370: jal         0x80072110
    // 0x8003E374: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80072110_4D510(rdram, ctx);
        goto after_6;
    // 0x8003E374: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
    // 0x8003E378: jal         0x8004A5BC
    // 0x8003E37C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004A5BC_259BC(rdram, ctx);
        goto after_7;
    // 0x8003E37C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_7:
    // 0x8003E380: jal         0x8004BE1C
    // 0x8003E384: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004BE1C_2721C(rdram, ctx);
        goto after_8;
    // 0x8003E384: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_8:
    // 0x8003E388: jal         0x80061090
    // 0x8003E38C: nop

    func_80061090_3C490(rdram, ctx);
        goto after_9;
    // 0x8003E38C: nop

    after_9:
    // 0x8003E390: jal         0x8002A2AC
    // 0x8003E394: nop

    func_8002A2AC_56AC(rdram, ctx);
        goto after_10;
    // 0x8003E394: nop

    after_10:
    // 0x8003E398: addiu       $a0, $s0, 0x174
    ctx->r4 = ADD32(ctx->r16, 0X174);
    // 0x8003E39C: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8003E3A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8003E3A4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8003E3A8: jal         0x8009A2B0
    // 0x8003E3AC: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
    bzero_recomp(rdram, ctx);
        goto after_11;
    // 0x8003E3AC: sb          $zero, 0x1($s0)
    MEM_B(0X1, ctx->r16) = 0;
    after_11:
    // 0x8003E3B0: jal         0x80073EE0
    // 0x8003E3B4: nop

    func_80073EE0_4F2E0(rdram, ctx);
        goto after_12;
    // 0x8003E3B4: nop

    after_12:
    // 0x8003E3B8: jal         0x8006036C
    // 0x8003E3BC: addiu       $a0, $zero, 0x1FE
    ctx->r4 = ADD32(0, 0X1FE);
    func_8006036C_3B76C(rdram, ctx);
        goto after_13;
    // 0x8003E3BC: addiu       $a0, $zero, 0x1FE
    ctx->r4 = ADD32(0, 0X1FE);
    after_13:
    // 0x8003E3C0: jal         0x8006036C
    // 0x8003E3C4: addiu       $a0, $zero, 0x38A
    ctx->r4 = ADD32(0, 0X38A);
    func_8006036C_3B76C(rdram, ctx);
        goto after_14;
    // 0x8003E3C4: addiu       $a0, $zero, 0x38A
    ctx->r4 = ADD32(0, 0X38A);
    after_14:
    // 0x8003E3C8: jal         0x8006036C
    // 0x8003E3CC: addiu       $a0, $zero, 0x3C7
    ctx->r4 = ADD32(0, 0X3C7);
    func_8006036C_3B76C(rdram, ctx);
        goto after_15;
    // 0x8003E3CC: addiu       $a0, $zero, 0x3C7
    ctx->r4 = ADD32(0, 0X3C7);
    after_15:
    // 0x8003E3D0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8003E3D4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8003E3D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8003E3DC: jr          $ra
    // 0x8003E3E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8003E3E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8007FB70_5AF70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007FB70: jr          $ra
    // 0x8007FB74: nop

    TRACE_RETURN()
    return;
    // 0x8007FB74: nop

;}
RECOMP_FUNC void func_8005A3E8_357E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8005A3E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005A3EC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8005A3F0: jal         0x8005AAA8
    // 0x8005A3F4: nop

    func_8005AAA8_35EA8(rdram, ctx);
        goto after_0;
    // 0x8005A3F4: nop

    after_0:
    // 0x8005A3F8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8005A3FC: jr          $ra
    // 0x8005A400: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8005A400: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80063C04_3F004(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80063C04: lw          $v1, 0x14($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X14);
    // 0x80063C08: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x80063C0C: lbu         $v1, 0x1($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X1);
    // 0x80063C10: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80063C14: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x80063C18: jr          $ra
    // 0x80063C1C: sb          $v1, 0x78($a0)
    MEM_B(0X78, ctx->r4) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x80063C1C: sb          $v1, 0x78($a0)
    MEM_B(0X78, ctx->r4) = ctx->r3;
;}
RECOMP_FUNC void func_800353E8_107E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800353E8: jr          $ra
    // 0x800353EC: nop

    TRACE_RETURN()
    return;
    // 0x800353EC: nop

;}
RECOMP_FUNC void func_8008E90C_69D0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008E90C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008E910: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8008E914: jal         0x8008EDBC
    // 0x8008E918: addiu       $a0, $zero, 0x58
    ctx->r4 = ADD32(0, 0X58);
    func_8008EDBC_6A1BC(rdram, ctx);
        goto after_0;
    // 0x8008E918: addiu       $a0, $zero, 0x58
    ctx->r4 = ADD32(0, 0X58);
    after_0:
    // 0x8008E91C: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
    // 0x8008E920: addiu       $a1, $v0, 0x20
    ctx->r5 = ADD32(ctx->r2, 0X20);
    // 0x8008E924: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008E928: sw          $v0, 0x5024($at)
    MEM_W(0X5024, ctx->r1) = ctx->r2;
    // 0x8008E92C: jal         0x8009A470
    // 0x8008E930: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_1;
    // 0x8008E930: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_1:
    // 0x8008E934: lui         $a1, 0x8018
    ctx->r5 = S32(0X8018 << 16);
    // 0x8008E938: lw          $a1, 0x5024($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5024);
    // 0x8008E93C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x8008E940: addiu       $a0, $a1, 0x30
    ctx->r4 = ADD32(ctx->r5, 0X30);
    // 0x8008E944: jal         0x8009A470
    // 0x8008E948: addiu       $a1, $a1, 0x48
    ctx->r5 = ADD32(ctx->r5, 0X48);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_2;
    // 0x8008E948: addiu       $a1, $a1, 0x48
    ctx->r5 = ADD32(ctx->r5, 0X48);
    after_2:
    // 0x8008E94C: lui         $a1, 0x8018
    ctx->r5 = S32(0X8018 << 16);
    // 0x8008E950: lw          $a1, 0x5024($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5024);
    // 0x8008E954: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x8008E958: lw          $a0, 0x5020($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5020);
    // 0x8008E95C: jal         0x8009ACE8
    // 0x8008E960: addiu       $a2, $a1, 0x8
    ctx->r6 = ADD32(ctx->r5, 0X8);
    osScAddClient(rdram, ctx);
        goto after_3;
    // 0x8008E960: addiu       $a2, $a1, 0x8
    ctx->r6 = ADD32(ctx->r5, 0X8);
    after_3:
    // 0x8008E964: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8008E968: jr          $ra
    // 0x8008E96C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8008E96C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800710B8_4C4B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800710B8: sll         $v1, $a1, 2
    ctx->r3 = S32(ctx->r5 << 2);
    // 0x800710BC: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x800710C0: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x800710C4: lb          $v0, 0x4F6($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X4F6);
    // 0x800710C8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800710CC: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x800710D0: lw          $v1, 0x351C($at)
    ctx->r3 = MEM_W(ctx->r1, 0X351C);
    // 0x800710D4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x800710D8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800710DC: jr          $ra
    // 0x800710E0: lh          $v0, 0x4($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X4);
    TRACE_RETURN()
    return;
    // 0x800710E0: lh          $v0, 0x4($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X4);
;}
RECOMP_FUNC void func_8002FA3C_AE3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002FA3C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8002FA40: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x8002FA44: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8002FA48: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x8002FA4C: addiu       $s1, $sp, 0x10
    ctx->r17 = ADD32(ctx->r29, 0X10);
    // 0x8002FA50: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8002FA54: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8002FA58: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x8002FA5C: jal         0x8009A3B4
    // 0x8002FA60: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8002FA60: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8002FA64: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8002FA68: sb          $v0, 0x14($sp)
    MEM_B(0X14, ctx->r29) = ctx->r2;
    // 0x8002FA6C: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8002FA70: sb          $v0, 0x15($sp)
    MEM_B(0X15, ctx->r29) = ctx->r2;
    // 0x8002FA74: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x8002FA78: sb          $v0, 0x16($sp)
    MEM_B(0X16, ctx->r29) = ctx->r2;
    // 0x8002FA7C: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8002FA80: sb          $v0, 0x1C($sp)
    MEM_B(0X1C, ctx->r29) = ctx->r2;
    // 0x8002FA84: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8002FA88: sb          $v0, 0x1D($sp)
    MEM_B(0X1D, ctx->r29) = ctx->r2;
    // 0x8002FA8C: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x8002FA90: sb          $v0, 0x1E($sp)
    MEM_B(0X1E, ctx->r29) = ctx->r2;
    // 0x8002FA94: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8002FA98: sb          $v0, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r2;
    // 0x8002FA9C: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8002FAA0: sb          $v0, 0x25($sp)
    MEM_B(0X25, ctx->r29) = ctx->r2;
    // 0x8002FAA4: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x8002FAA8: sb          $v0, 0x26($sp)
    MEM_B(0X26, ctx->r29) = ctx->r2;
    // 0x8002FAAC: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8002FAB0: sb          $v0, 0x2C($sp)
    MEM_B(0X2C, ctx->r29) = ctx->r2;
    // 0x8002FAB4: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8002FAB8: sb          $v0, 0x2D($sp)
    MEM_B(0X2D, ctx->r29) = ctx->r2;
    // 0x8002FABC: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x8002FAC0: sb          $v0, 0x2E($sp)
    MEM_B(0X2E, ctx->r29) = ctx->r2;
    // 0x8002FAC4: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x8002FAC8: sh          $v0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r2;
    // 0x8002FACC: lhu         $v0, 0xA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XA);
    // 0x8002FAD0: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    // 0x8002FAD4: lhu         $v0, 0xC($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XC);
    // 0x8002FAD8: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    // 0x8002FADC: lhu         $v0, 0xE($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XE);
    // 0x8002FAE0: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x8002FAE4: lhu         $v0, 0x10($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X10);
    // 0x8002FAE8: sh          $v0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r2;
    // 0x8002FAEC: lhu         $v0, 0x12($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X12);
    // 0x8002FAF0: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x8002FAF4: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x8002FAF8: sh          $v0, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r2;
    // 0x8002FAFC: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x8002FB00: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8002FB04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8002FB08: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8002FB0C: sb          $v0, -0x77B8($at)
    MEM_B(-0X77B8, ctx->r1) = ctx->r2;
    // 0x8002FB10: jal         0x8002ED90
    // 0x8002FB14: sh          $v1, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r3;
    func_8002ED90_A190(rdram, ctx);
        goto after_1;
    // 0x8002FB14: sh          $v1, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r3;
    after_1:
    // 0x8002FB18: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x8002FB1C: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x8002FB20: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8002FB24: jr          $ra
    // 0x8002FB28: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x8002FB28: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8002BE98_7298(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002BE98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002BE9C: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x8002BEA0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8002BEA4: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002BEA8: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x8002BEAC: lw          $a0, 0x2270($at)
    ctx->r4 = MEM_W(ctx->r1, 0X2270);
    // 0x8002BEB0: jal         0x8008AD34
    // 0x8002BEB4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008AD34_66134(rdram, ctx);
        goto after_0;
    // 0x8002BEB4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x8002BEB8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8002BEBC: jr          $ra
    // 0x8002BEC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8002BEC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8007B490_56890(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007B490: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007B494: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8007B498: jal         0x8004F5C4
    // 0x8007B49C: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x8007B49C: nop

    after_0:
    // 0x8007B4A0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8007B4A4: jr          $ra
    // 0x8007B4A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8007B4A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007B4AC: nop

;}
RECOMP_FUNC void func_80048B40_23F40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80048B40: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80048B44: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80048B48: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80048B4C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80048B50: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x80048B54: bgez        $a3, L_80048B84
    if (SIGNED(ctx->r7) >= 0) {
        // 0x80048B58: sw          $ra, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r31;
            goto L_80048B84;
    }
    // 0x80048B58: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80048B5C: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x80048B60: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80048B64: jal         0x8009A3B4
    // 0x80048B68: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80048B68: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_0:
    // 0x80048B6C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80048B70: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x80048B74: jal         0x8009A3B4
    // 0x80048B78: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80048B78: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80048B7C: j           L_80048BF8
    // 0x80048B80: nop

        goto L_80048BF8;
    // 0x80048B80: nop

L_80048B84:
    // 0x80048B84: sll         $v1, $a3, 3
    ctx->r3 = S32(ctx->r7 << 3);
    // 0x80048B88: addu        $v1, $s0, $v1
    ctx->r3 = ADD32(ctx->r16, ctx->r3);
    // 0x80048B8C: lh          $v0, 0x180($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X180);
    // 0x80048B90: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80048B94: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x80048B98: lh          $v0, 0x182($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X182);
    // 0x80048B9C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80048BA0: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x80048BA4: lh          $v0, 0x184($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X184);
    // 0x80048BA8: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80048BAC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80048BB0: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
    // 0x80048BB4: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x80048BB8: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
    // 0x80048BBC: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x80048BC0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80048BC4: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x80048BC8: lw          $v1, 0x4($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X4);
    // 0x80048BCC: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    // 0x80048BD0: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
    // 0x80048BD4: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x80048BD8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80048BDC: sw          $v0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r2;
    // 0x80048BE0: lw          $v1, 0x8($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X8);
    // 0x80048BE4: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    // 0x80048BE8: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x80048BEC: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x80048BF0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80048BF4: sw          $v0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r2;
L_80048BF8:
    // 0x80048BF8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80048BFC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80048C00: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80048C04: jr          $ra
    // 0x80048C08: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80048C08: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80048C0C: nop

;}
RECOMP_FUNC void func_80072E10_4E210(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80072E10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80072E14: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80072E18: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80072E1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80072E20: lbu         $v0, 0x50($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X50);
    // 0x80072E24: lb          $v1, 0x51($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X51);
    // 0x80072E28: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80072E2C: sb          $v0, -0x35A8($at)
    MEM_B(-0X35A8, ctx->r1) = ctx->r2;
    // 0x80072E30: lb          $v0, 0x50($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X50);
    // 0x80072E34: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80072E38: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80072E3C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80072E40: lw          $v0, 0x37FC($at)
    ctx->r2 = MEM_W(ctx->r1, 0X37FC);
    // 0x80072E44: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80072E48: lbu         $v0, 0x1($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X1);
    // 0x80072E4C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80072E50: sb          $v0, -0x35A7($at)
    MEM_B(-0X35A7, ctx->r1) = ctx->r2;
    // 0x80072E54: lbu         $v1, 0x50($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X50);
    // 0x80072E58: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80072E5C: lb          $v0, -0x3BC8($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC8);
    // 0x80072E60: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80072E64: sb          $zero, -0x35A5($at)
    MEM_B(-0X35A5, ctx->r1) = 0;
    // 0x80072E68: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80072E6C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80072E70: sb          $v1, -0x35A6($at)
    MEM_B(-0X35A6, ctx->r1) = ctx->r3;
    // 0x80072E74: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80072E78: addu        $at, $at, $v0
    gpr jr_addend_80072E80 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80072E7C: lw          $v0, 0x3780($at)
    ctx->r2 = ADD32(ctx->r1, 0X3780);
    // 0x80072E80: jr          $v0
    // 0x80072E84: nop

    switch (jr_addend_80072E80 >> 2) {
        case 0: goto L_80072E88; break;
        case 1: goto L_80072E88; break;
        case 2: goto L_80072E88; break;
        case 3: goto L_80072E90; break;
        case 4: goto L_80072F2C; break;
        case 5: goto L_80072F68; break;
        case 6: goto L_8007307C; break;
        case 7: goto L_8007315C; break;
        case 8: goto L_80073190; break;
        case 9: goto L_80072E88; break;
        case 10: goto L_800731CC; break;
        case 11: goto L_80073208; break;
        case 12: goto L_800732EC; break;
        case 13: goto L_80073324; break;
        case 14: goto L_80072E88; break;
        case 15: goto L_80073370; break;
        case 16: goto L_800733E0; break;
        case 17: goto L_80073434; break;
        case 18: goto L_80072E88; break;
        case 19: goto L_8007347C; break;
        case 20: goto L_80072E88; break;
        case 21: goto L_80072E88; break;
        case 22: goto L_8007349C; break;
        case 23: goto L_80072E88; break;
        case 24: goto L_80072E88; break;
        case 25: goto L_80072E88; break;
        case 26: goto L_80072E88; break;
        case 27: goto L_800734A4; break;
        case 28: goto L_80072E88; break;
        case 29: goto L_80072E88; break;
        case 30: goto L_80072E88; break;
        default: switch_error(__func__, 0x80072E80, 0x800B3780);
    }
    // 0x80072E84: nop

L_80072E88:
    // 0x80072E88: j           L_80073500
    // 0x80072E8C: nop

        goto L_80073500;
    // 0x80072E8C: nop

L_80072E90:
    // 0x80072E90: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80072E94: lb          $v1, -0x3BC6($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC6);
    // 0x80072E98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80072E9C: beq         $v1, $v0, L_80072ECC
    if (ctx->r3 == ctx->r2) {
        // 0x80072EA0: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80072ECC;
    }
    // 0x80072EA0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80072EA4: beql        $v0, $zero, L_80072EBC
    if (ctx->r2 == 0) {
        // 0x80072EA8: slti        $v0, $v1, 0x6
        ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
            goto L_80072EBC;
    }
    goto skip_0;
    // 0x80072EA8: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    skip_0:
    // 0x80072EAC: beq         $v1, $zero, L_80072F14
    if (ctx->r3 == 0) {
        // 0x80072EB0: nop
    
            goto L_80072F14;
    }
    // 0x80072EB0: nop

    // 0x80072EB4: j           L_80072EFC
    // 0x80072EB8: nop

        goto L_80072EFC;
    // 0x80072EB8: nop

L_80072EBC:
    // 0x80072EBC: beq         $v0, $zero, L_80072EFC
    if (ctx->r2 == 0) {
        // 0x80072EC0: nop
    
            goto L_80072EFC;
    }
    // 0x80072EC0: nop

    // 0x80072EC4: j           L_80072EE4
    // 0x80072EC8: nop

        goto L_80072EE4;
    // 0x80072EC8: nop

L_80072ECC:
    // 0x80072ECC: lb          $v0, 0x51($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X51);
    // 0x80072ED0: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x80072ED4: beq         $v0, $zero, L_80073500
    if (ctx->r2 == 0) {
        // 0x80072ED8: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_80073500;
    }
    // 0x80072ED8: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80072EDC: j           L_80072F0C
    // 0x80072EE0: nop

        goto L_80072F0C;
    // 0x80072EE0: nop

L_80072EE4:
    // 0x80072EE4: lb          $v0, 0x51($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X51);
    // 0x80072EE8: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x80072EEC: beq         $v0, $zero, L_80073500
    if (ctx->r2 == 0) {
        // 0x80072EF0: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_80073500;
    }
    // 0x80072EF0: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80072EF4: j           L_80072F0C
    // 0x80072EF8: nop

        goto L_80072F0C;
    // 0x80072EF8: nop

L_80072EFC:
    // 0x80072EFC: lb          $v0, 0x51($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X51);
    // 0x80072F00: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x80072F04: beq         $v0, $zero, L_80073500
    if (ctx->r2 == 0) {
        // 0x80072F08: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_80073500;
    }
    // 0x80072F08: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80072F0C:
    // 0x80072F0C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80072F10: sb          $v0, -0x35A7($at)
    MEM_B(-0X35A7, ctx->r1) = ctx->r2;
L_80072F14:
    // 0x80072F14: lb          $v0, 0x51($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X51);
    // 0x80072F18: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x80072F1C: beq         $v0, $zero, L_80073500
    if (ctx->r2 == 0) {
        // 0x80072F20: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80073500;
    }
    // 0x80072F20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80072F24: j           L_800734F8
    // 0x80072F28: nop

        goto L_800734F8;
    // 0x80072F28: nop

L_80072F2C:
    // 0x80072F2C: lb          $v0, 0x51($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X51);
    // 0x80072F30: bne         $v0, $zero, L_80073500
    if (ctx->r2 != 0) {
        // 0x80072F34: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80073500;
    }
    // 0x80072F34: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80072F38: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80072F3C: lb          $v1, -0x3BC6($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC6);
    // 0x80072F40: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80072F44: sb          $v0, -0x35A5($at)
    MEM_B(-0X35A5, ctx->r1) = ctx->r2;
    // 0x80072F48: sltiu       $v0, $v1, 0xC
    ctx->r2 = ctx->r3 < 0XC ? 1 : 0;
    // 0x80072F4C: beq         $v0, $zero, L_80073108
    if (ctx->r2 == 0) {
        // 0x80072F50: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80073108;
    }
    // 0x80072F50: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80072F54: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80072F58: addu        $at, $at, $v0
    gpr jr_addend_80072F60 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80072F5C: lw          $v0, 0x29E0($at)
    ctx->r2 = ADD32(ctx->r1, 0X29E0);
    // 0x80072F60: jr          $v0
    // 0x80072F64: nop

    switch (jr_addend_80072F60 >> 2) {
        case 0: goto L_80073500; break;
        case 1: goto L_80073414; break;
        case 2: goto L_80073424; break;
        case 3: goto L_80073424; break;
        case 4: goto L_80072FCC; break;
        case 5: goto L_80072FCC; break;
        case 6: goto L_80073108; break;
        case 7: goto L_80073108; break;
        case 8: goto L_80073108; break;
        case 9: goto L_80073108; break;
        case 10: goto L_80073108; break;
        case 11: goto L_8007303C; break;
        default: switch_error(__func__, 0x80072F60, 0x800D29E0);
    }
    // 0x80072F64: nop

L_80072F68:
    // 0x80072F68: lb          $v0, 0x51($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X51);
    // 0x80072F6C: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x80072F70: beq         $v0, $zero, L_80072F80
    if (ctx->r2 == 0) {
        // 0x80072F74: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80072F80;
    }
    // 0x80072F74: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80072F78: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80072F7C: sb          $v0, -0x35A5($at)
    MEM_B(-0X35A5, ctx->r1) = ctx->r2;
L_80072F80:
    // 0x80072F80: lb          $v0, 0x51($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X51);
    // 0x80072F84: bne         $v0, $zero, L_80073500
    if (ctx->r2 != 0) {
        // 0x80072F88: nop
    
            goto L_80073500;
    }
    // 0x80072F88: nop

    // 0x80072F8C: jal         0x8006033C
    // 0x80072F90: addiu       $a0, $zero, 0x204
    ctx->r4 = ADD32(0, 0X204);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80072F90: addiu       $a0, $zero, 0x204
    ctx->r4 = ADD32(0, 0X204);
    after_0:
    // 0x80072F94: beq         $v0, $zero, L_80072FAC
    if (ctx->r2 == 0) {
        // 0x80072F98: nop
    
            goto L_80072FAC;
    }
    // 0x80072F98: nop

    // 0x80072F9C: jal         0x8006033C
    // 0x80072FA0: addiu       $a0, $zero, 0x206
    ctx->r4 = ADD32(0, 0X206);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80072FA0: addiu       $a0, $zero, 0x206
    ctx->r4 = ADD32(0, 0X206);
    after_1:
    // 0x80072FA4: beq         $v0, $zero, L_8007310C
    if (ctx->r2 == 0) {
        // 0x80072FA8: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_8007310C;
    }
    // 0x80072FA8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_80072FAC:
    // 0x80072FAC: jal         0x8006033C
    // 0x80072FB0: addiu       $a0, $zero, 0x212
    ctx->r4 = ADD32(0, 0X212);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x80072FB0: addiu       $a0, $zero, 0x212
    ctx->r4 = ADD32(0, 0X212);
    after_2:
    // 0x80072FB4: beq         $v0, $zero, L_80072FDC
    if (ctx->r2 == 0) {
        // 0x80072FB8: nop
    
            goto L_80072FDC;
    }
    // 0x80072FB8: nop

    // 0x80072FBC: jal         0x8006033C
    // 0x80072FC0: addiu       $a0, $zero, 0x213
    ctx->r4 = ADD32(0, 0X213);
    func_8006033C_3B73C(rdram, ctx);
        goto after_3;
    // 0x80072FC0: addiu       $a0, $zero, 0x213
    ctx->r4 = ADD32(0, 0X213);
    after_3:
    // 0x80072FC4: bne         $v0, $zero, L_80072FDC
    if (ctx->r2 != 0) {
        // 0x80072FC8: nop
    
            goto L_80072FDC;
    }
    // 0x80072FC8: nop

L_80072FCC:
    // 0x80072FCC: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80072FD0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80072FD4: j           L_80073500
    // 0x80072FD8: sb          $v0, -0x35A7($at)
    MEM_B(-0X35A7, ctx->r1) = ctx->r2;
        goto L_80073500;
    // 0x80072FD8: sb          $v0, -0x35A7($at)
    MEM_B(-0X35A7, ctx->r1) = ctx->r2;
L_80072FDC:
    // 0x80072FDC: jal         0x8006033C
    // 0x80072FE0: addiu       $a0, $zero, 0x200
    ctx->r4 = ADD32(0, 0X200);
    func_8006033C_3B73C(rdram, ctx);
        goto after_4;
    // 0x80072FE0: addiu       $a0, $zero, 0x200
    ctx->r4 = ADD32(0, 0X200);
    after_4:
    // 0x80072FE4: bne         $v0, $zero, L_80073418
    if (ctx->r2 != 0) {
        // 0x80072FE8: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_80073418;
    }
    // 0x80072FE8: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80072FEC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80072FF0: lb          $v1, -0x3BC6($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC6);
    // 0x80072FF4: sltiu       $v0, $v1, 0xC
    ctx->r2 = ctx->r3 < 0XC ? 1 : 0;
    // 0x80072FF8: beq         $v0, $zero, L_8007306C
    if (ctx->r2 == 0) {
        // 0x80072FFC: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8007306C;
    }
    // 0x80072FFC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80073000: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80073004: addu        $at, $at, $v0
    gpr jr_addend_8007300C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80073008: lw          $v0, 0x2A10($at)
    ctx->r2 = ADD32(ctx->r1, 0X2A10);
    // 0x8007300C: jr          $v0
    // 0x80073010: nop

    switch (jr_addend_8007300C >> 2) {
        case 0: goto L_80073014; break;
        case 1: goto L_80073424; break;
        case 2: goto L_8007303C; break;
        case 3: goto L_8007303C; break;
        case 4: goto L_8007303C; break;
        case 5: goto L_8007303C; break;
        case 6: goto L_8007304C; break;
        case 7: goto L_8007304C; break;
        case 8: goto L_8007306C; break;
        case 9: goto L_8007306C; break;
        case 10: goto L_8007306C; break;
        case 11: goto L_8007305C; break;
        default: switch_error(__func__, 0x8007300C, 0x800D2A10);
    }
    // 0x80073010: nop

L_80073014:
    // 0x80073014: jal         0x8006033C
    // 0x80073018: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8006033C_3B73C(rdram, ctx);
        goto after_5;
    // 0x80073018: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_5:
    // 0x8007301C: beq         $v0, $zero, L_80073500
    if (ctx->r2 == 0) {
        // 0x80073020: nop
    
            goto L_80073500;
    }
    // 0x80073020: nop

    // 0x80073024: jal         0x8006033C
    // 0x80073028: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8006033C_3B73C(rdram, ctx);
        goto after_6;
    // 0x80073028: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_6:
    // 0x8007302C: bne         $v0, $zero, L_80073500
    if (ctx->r2 != 0) {
        // 0x80073030: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80073500;
    }
    // 0x80073030: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80073034: j           L_800733D4
    // 0x80073038: nop

        goto L_800733D4;
    // 0x80073038: nop

L_8007303C:
    // 0x8007303C: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80073040: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80073044: j           L_80073500
    // 0x80073048: sb          $v0, -0x35A7($at)
    MEM_B(-0X35A7, ctx->r1) = ctx->r2;
        goto L_80073500;
    // 0x80073048: sb          $v0, -0x35A7($at)
    MEM_B(-0X35A7, ctx->r1) = ctx->r2;
L_8007304C:
    // 0x8007304C: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80073050: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80073054: j           L_80073500
    // 0x80073058: sb          $v0, -0x35A7($at)
    MEM_B(-0X35A7, ctx->r1) = ctx->r2;
        goto L_80073500;
    // 0x80073058: sb          $v0, -0x35A7($at)
    MEM_B(-0X35A7, ctx->r1) = ctx->r2;
L_8007305C:
    // 0x8007305C: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x80073060: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80073064: j           L_80073500
    // 0x80073068: sb          $v0, -0x35A7($at)
    MEM_B(-0X35A7, ctx->r1) = ctx->r2;
        goto L_80073500;
    // 0x80073068: sb          $v0, -0x35A7($at)
    MEM_B(-0X35A7, ctx->r1) = ctx->r2;
L_8007306C:
    // 0x8007306C: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x80073070: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80073074: j           L_80073500
    // 0x80073078: sb          $v0, -0x35A7($at)
    MEM_B(-0X35A7, ctx->r1) = ctx->r2;
        goto L_80073500;
    // 0x80073078: sb          $v0, -0x35A7($at)
    MEM_B(-0X35A7, ctx->r1) = ctx->r2;
L_8007307C:
    // 0x8007307C: lb          $v1, 0x51($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X51);
    // 0x80073080: bne         $v1, $zero, L_80073090
    if (ctx->r3 != 0) {
        // 0x80073084: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80073090;
    }
    // 0x80073084: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80073088: j           L_800730A8
    // 0x8007308C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_800730A8;
    // 0x8007308C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80073090:
    // 0x80073090: bne         $v1, $v0, L_800730A0
    if (ctx->r3 != ctx->r2) {
        // 0x80073094: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_800730A0;
    }
    // 0x80073094: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80073098: j           L_800730A8
    // 0x8007309C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_800730A8;
    // 0x8007309C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_800730A0:
    // 0x800730A0: bne         $v1, $v0, L_800730B0
    if (ctx->r3 != ctx->r2) {
        // 0x800730A4: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_800730B0;
    }
    // 0x800730A4: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_800730A8:
    // 0x800730A8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800730AC: sb          $v0, -0x35A5($at)
    MEM_B(-0X35A5, ctx->r1) = ctx->r2;
L_800730B0:
    // 0x800730B0: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x800730B4: lb          $v1, -0x3BC6($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC6);
    // 0x800730B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800730BC: beq         $v1, $v0, L_80073118
    if (ctx->r3 == ctx->r2) {
        // 0x800730C0: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80073118;
    }
    // 0x800730C0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x800730C4: beql        $v0, $zero, L_800730DC
    if (ctx->r2 == 0) {
        // 0x800730C8: slti        $v0, $v1, 0x6
        ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
            goto L_800730DC;
    }
    goto skip_1;
    // 0x800730C8: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    skip_1:
    // 0x800730CC: beq         $v1, $zero, L_800730EC
    if (ctx->r3 == 0) {
        // 0x800730D0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_800730EC;
    }
    // 0x800730D0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x800730D4: j           L_80073148
    // 0x800730D8: nop

        goto L_80073148;
    // 0x800730D8: nop

L_800730DC:
    // 0x800730DC: beq         $v0, $zero, L_80073148
    if (ctx->r2 == 0) {
        // 0x800730E0: nop
    
            goto L_80073148;
    }
    // 0x800730E0: nop

    // 0x800730E4: j           L_80073134
    // 0x800730E8: nop

        goto L_80073134;
    // 0x800730E8: nop

L_800730EC:
    // 0x800730EC: lb          $v1, 0x51($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X51);
    // 0x800730F0: bne         $v1, $v0, L_80073500
    if (ctx->r3 != ctx->r2) {
        // 0x800730F4: nop
    
            goto L_80073500;
    }
    // 0x800730F4: nop

    // 0x800730F8: jal         0x8006033C
    // 0x800730FC: addiu       $a0, $zero, 0x630
    ctx->r4 = ADD32(0, 0X630);
    func_8006033C_3B73C(rdram, ctx);
        goto after_7;
    // 0x800730FC: addiu       $a0, $zero, 0x630
    ctx->r4 = ADD32(0, 0X630);
    after_7:
    // 0x80073100: beq         $v0, $zero, L_80073500
    if (ctx->r2 == 0) {
        // 0x80073104: nop
    
            goto L_80073500;
    }
    // 0x80073104: nop

L_80073108:
    // 0x80073108: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_8007310C:
    // 0x8007310C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80073110: j           L_80073500
    // 0x80073114: sb          $v0, -0x35A7($at)
    MEM_B(-0X35A7, ctx->r1) = ctx->r2;
        goto L_80073500;
    // 0x80073114: sb          $v0, -0x35A7($at)
    MEM_B(-0X35A7, ctx->r1) = ctx->r2;
L_80073118:
    // 0x80073118: jal         0x800354D0
    // 0x8007311C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800354D0_108D0(rdram, ctx);
        goto after_8;
    // 0x8007311C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_8:
    // 0x80073120: lb          $v0, 0x51($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X51);
    // 0x80073124: bne         $v0, $zero, L_80073500
    if (ctx->r2 != 0) {
        // 0x80073128: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80073500;
    }
    // 0x80073128: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8007312C: j           L_800733C4
    // 0x80073130: nop

        goto L_800733C4;
    // 0x80073130: nop

L_80073134:
    // 0x80073134: lb          $v0, 0x51($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X51);
    // 0x80073138: bne         $v0, $zero, L_80073500
    if (ctx->r2 != 0) {
        // 0x8007313C: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80073500;
    }
    // 0x8007313C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80073140: j           L_800733D4
    // 0x80073144: nop

        goto L_800733D4;
    // 0x80073144: nop

L_80073148:
    // 0x80073148: lb          $v0, 0x51($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X51);
    // 0x8007314C: bne         $v0, $zero, L_80073500
    if (ctx->r2 != 0) {
        // 0x80073150: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_80073500;
    }
    // 0x80073150: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80073154: j           L_80073418
    // 0x80073158: nop

        goto L_80073418;
    // 0x80073158: nop

L_8007315C:
    // 0x8007315C: lb          $v1, 0x51($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X51);
    // 0x80073160: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80073164: bne         $v1, $v0, L_80073174
    if (ctx->r3 != ctx->r2) {
        // 0x80073168: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_80073174;
    }
    // 0x80073168: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8007316C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80073170: sb          $v0, -0x35A5($at)
    MEM_B(-0X35A5, ctx->r1) = ctx->r2;
L_80073174:
    // 0x80073174: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80073178: lb          $v1, -0x3BC6($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC6);
    // 0x8007317C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80073180: bne         $v1, $v0, L_80073500
    if (ctx->r3 != ctx->r2) {
        // 0x80073184: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80073500;
    }
    // 0x80073184: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80073188: j           L_80073470
    // 0x8007318C: nop

        goto L_80073470;
    // 0x8007318C: nop

L_80073190:
    // 0x80073190: lb          $v0, 0x51($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X51);
    // 0x80073194: bne         $v0, $zero, L_80073500
    if (ctx->r2 != 0) {
        // 0x80073198: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_80073500;
    }
    // 0x80073198: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8007319C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x800731A0: lb          $v1, -0x3BC6($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC6);
    // 0x800731A4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800731A8: sb          $v0, -0x35A5($at)
    MEM_B(-0X35A5, ctx->r1) = ctx->r2;
    // 0x800731AC: bltz        $v1, L_80073414
    if (SIGNED(ctx->r3) < 0) {
        // 0x800731B0: slti        $v0, $v1, 0x6
        ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
            goto L_80073414;
    }
    // 0x800731B0: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x800731B4: bne         $v0, $zero, L_80073500
    if (ctx->r2 != 0) {
        // 0x800731B8: slti        $v0, $v1, 0x8
        ctx->r2 = SIGNED(ctx->r3) < 0X8 ? 1 : 0;
            goto L_80073500;
    }
    // 0x800731B8: slti        $v0, $v1, 0x8
    ctx->r2 = SIGNED(ctx->r3) < 0X8 ? 1 : 0;
    // 0x800731BC: bne         $v0, $zero, L_800733D4
    if (ctx->r2 != 0) {
        // 0x800731C0: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_800733D4;
    }
    // 0x800731C0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x800731C4: j           L_80073418
    // 0x800731C8: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
        goto L_80073418;
    // 0x800731C8: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_800731CC:
    // 0x800731CC: lb          $v0, 0x51($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X51);
    // 0x800731D0: bne         $v0, $zero, L_80073500
    if (ctx->r2 != 0) {
        // 0x800731D4: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_80073500;
    }
    // 0x800731D4: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x800731D8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x800731DC: lb          $v1, -0x3BC6($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC6);
    // 0x800731E0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800731E4: sb          $v0, -0x35A5($at)
    MEM_B(-0X35A5, ctx->r1) = ctx->r2;
    // 0x800731E8: bltz        $v1, L_8007346C
    if (SIGNED(ctx->r3) < 0) {
        // 0x800731EC: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8007346C;
    }
    // 0x800731EC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x800731F0: bne         $v0, $zero, L_80073500
    if (ctx->r2 != 0) {
        // 0x800731F4: slti        $v0, $v1, 0x6
        ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
            goto L_80073500;
    }
    // 0x800731F4: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x800731F8: bne         $v0, $zero, L_80073460
    if (ctx->r2 != 0) {
        // 0x800731FC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80073460;
    }
    // 0x800731FC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80073200: j           L_80073470
    // 0x80073204: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_80073470;
    // 0x80073204: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80073208:
    // 0x80073208: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8007320C: lb          $v1, -0x3BC6($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC6);
    // 0x80073210: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80073214: bne         $v1, $v0, L_80073274
    if (ctx->r3 != ctx->r2) {
        // 0x80073218: nop
    
            goto L_80073274;
    }
    // 0x80073218: nop

    // 0x8007321C: jal         0x8006033C
    // 0x80073220: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    func_8006033C_3B73C(rdram, ctx);
        goto after_9;
    // 0x80073220: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    after_9:
    // 0x80073224: beq         $v0, $zero, L_8007325C
    if (ctx->r2 == 0) {
        // 0x80073228: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8007325C;
    }
    // 0x80073228: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8007322C: lb          $v1, 0x51($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X51);
    // 0x80073230: bne         $v1, $v0, L_8007324C
    if (ctx->r3 != ctx->r2) {
        // 0x80073234: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8007324C;
    }
    // 0x80073234: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80073238: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8007323C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80073240: sb          $v0, -0x35A7($at)
    MEM_B(-0X35A7, ctx->r1) = ctx->r2;
    // 0x80073244: lb          $v1, 0x51($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X51);
    // 0x80073248: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8007324C:
    // 0x8007324C: bne         $v1, $v0, L_80073290
    if (ctx->r3 != ctx->r2) {
        // 0x80073250: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_80073290;
    }
    // 0x80073250: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80073254: j           L_80073288
    // 0x80073258: nop

        goto L_80073288;
    // 0x80073258: nop

L_8007325C:
    // 0x8007325C: jal         0x8006033C
    // 0x80073260: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
    func_8006033C_3B73C(rdram, ctx);
        goto after_10;
    // 0x80073260: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
    after_10:
    // 0x80073264: beq         $v0, $zero, L_80073290
    if (ctx->r2 == 0) {
        // 0x80073268: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_80073290;
    }
    // 0x80073268: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8007326C: j           L_80073288
    // 0x80073270: nop

        goto L_80073288;
    // 0x80073270: nop

L_80073274:
    // 0x80073274: lbu         $v0, 0x51($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X51);
    // 0x80073278: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x8007327C: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x80073280: beq         $v0, $zero, L_80073290
    if (ctx->r2 == 0) {
        // 0x80073284: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80073290;
    }
    // 0x80073284: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80073288:
    // 0x80073288: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007328C: sb          $v0, -0x35A7($at)
    MEM_B(-0X35A7, ctx->r1) = ctx->r2;
L_80073290:
    // 0x80073290: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80073294: lbu         $a0, -0x35A7($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X35A7);
    // 0x80073298: xori        $v1, $a0, 0x1
    ctx->r3 = ctx->r4 ^ 0X1;
    // 0x8007329C: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x800732A0: xori        $v0, $a0, 0x3
    ctx->r2 = ctx->r4 ^ 0X3;
    // 0x800732A4: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x800732A8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x800732AC: bne         $v1, $zero, L_800734F8
    if (ctx->r3 != 0) {
        // 0x800732B0: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_800734F8;
    }
    // 0x800732B0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x800732B4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x800732B8: beql        $a0, $v0, L_800734F8
    if (ctx->r4 == ctx->r2) {
        // 0x800732BC: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_800734F8;
    }
    goto skip_2;
    // 0x800732BC: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    skip_2:
    // 0x800732C0: lb          $v1, 0x51($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X51);
    // 0x800732C4: bne         $v1, $zero, L_800732D4
    if (ctx->r3 != 0) {
        // 0x800732C8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_800732D4;
    }
    // 0x800732C8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x800732CC: j           L_800734F8
    // 0x800732D0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
        goto L_800734F8;
    // 0x800732D0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_800732D4:
    // 0x800732D4: beq         $a0, $v0, L_800732E4
    if (ctx->r4 == ctx->r2) {
        // 0x800732D8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_800732E4;
    }
    // 0x800732D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800732DC: bne         $v1, $v0, L_80073500
    if (ctx->r3 != ctx->r2) {
        // 0x800732E0: nop
    
            goto L_80073500;
    }
    // 0x800732E0: nop

L_800732E4:
    // 0x800732E4: j           L_800734F8
    // 0x800732E8: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
        goto L_800734F8;
    // 0x800732E8: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_800732EC:
    // 0x800732EC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x800732F0: lb          $v1, -0x3BC6($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC6);
    // 0x800732F4: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x800732F8: beq         $v0, $zero, L_80073500
    if (ctx->r2 == 0) {
        // 0x800732FC: nop
    
            goto L_80073500;
    }
    // 0x800732FC: nop

    // 0x80073300: blez        $v1, L_80073500
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80073304: nop
    
            goto L_80073500;
    }
    // 0x80073304: nop

    // 0x80073308: jal         0x8006033C
    // 0x8007330C: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    func_8006033C_3B73C(rdram, ctx);
        goto after_11;
    // 0x8007330C: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    after_11:
    // 0x80073310: bne         $v0, $zero, L_80073500
    if (ctx->r2 != 0) {
        // 0x80073314: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80073500;
    }
    // 0x80073314: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80073318: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007331C: j           L_80073500
    // 0x80073320: sb          $v0, -0x35A6($at)
    MEM_B(-0X35A6, ctx->r1) = ctx->r2;
        goto L_80073500;
    // 0x80073320: sb          $v0, -0x35A6($at)
    MEM_B(-0X35A6, ctx->r1) = ctx->r2;
L_80073324:
    // 0x80073324: lb          $v0, 0x51($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X51);
    // 0x80073328: sltu        $v1, $zero, $v0
    ctx->r3 = 0 < ctx->r2 ? 1 : 0;
    // 0x8007332C: xori        $v0, $v0, 0x5
    ctx->r2 = ctx->r2 ^ 0X5;
    // 0x80073330: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x80073334: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80073338: bne         $v1, $zero, L_80073500
    if (ctx->r3 != 0) {
        // 0x8007333C: addiu       $v0, $zero, 0xC
        ctx->r2 = ADD32(0, 0XC);
            goto L_80073500;
    }
    // 0x8007333C: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80073340: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80073344: lb          $v1, -0x3BC6($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC6);
    // 0x80073348: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007334C: sb          $v0, -0x35A5($at)
    MEM_B(-0X35A5, ctx->r1) = ctx->r2;
    // 0x80073350: bltz        $v1, L_800733D0
    if (SIGNED(ctx->r3) < 0) {
        // 0x80073354: slti        $v0, $v1, 0x5
        ctx->r2 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
            goto L_800733D0;
    }
    // 0x80073354: slti        $v0, $v1, 0x5
    ctx->r2 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
    // 0x80073358: bne         $v0, $zero, L_80073500
    if (ctx->r2 != 0) {
        // 0x8007335C: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80073500;
    }
    // 0x8007335C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80073360: beq         $v1, $v0, L_800733C4
    if (ctx->r3 == ctx->r2) {
        // 0x80073364: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_800733C4;
    }
    // 0x80073364: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80073368: j           L_800733D4
    // 0x8007336C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_800733D4;
    // 0x8007336C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_80073370:
    // 0x80073370: lb          $v1, 0x51($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X51);
    // 0x80073374: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80073378: bne         $v1, $v0, L_80073500
    if (ctx->r3 != ctx->r2) {
        // 0x8007337C: addiu       $v0, $zero, 0xD
        ctx->r2 = ADD32(0, 0XD);
            goto L_80073500;
    }
    // 0x8007337C: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x80073380: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80073384: lb          $v1, -0x3BC6($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC6);
    // 0x80073388: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007338C: sb          $v0, -0x35A5($at)
    MEM_B(-0X35A5, ctx->r1) = ctx->r2;
    // 0x80073390: sltiu       $v0, $v1, 0x8
    ctx->r2 = ctx->r3 < 0X8 ? 1 : 0;
    // 0x80073394: beq         $v0, $zero, L_800733D0
    if (ctx->r2 == 0) {
        // 0x80073398: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_800733D0;
    }
    // 0x80073398: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8007339C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800733A0: addu        $at, $at, $v0
    gpr jr_addend_800733A8 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800733A4: lw          $v0, 0x2A40($at)
    ctx->r2 = ADD32(ctx->r1, 0X2A40);
    // 0x800733A8: jr          $v0
    // 0x800733AC: nop

    switch (jr_addend_800733A8 >> 2) {
        case 0: goto L_80073500; break;
        case 1: goto L_800733B0; break;
        case 2: goto L_800733B0; break;
        case 3: goto L_800733B0; break;
        case 4: goto L_800733B0; break;
        case 5: goto L_800733B0; break;
        case 6: goto L_800733C0; break;
        case 7: goto L_800733C0; break;
        default: switch_error(__func__, 0x800733A8, 0x800D2A40);
    }
    // 0x800733AC: nop

L_800733B0:
    // 0x800733B0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x800733B4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800733B8: j           L_80073500
    // 0x800733BC: sb          $v0, -0x35A7($at)
    MEM_B(-0X35A7, ctx->r1) = ctx->r2;
        goto L_80073500;
    // 0x800733BC: sb          $v0, -0x35A7($at)
    MEM_B(-0X35A7, ctx->r1) = ctx->r2;
L_800733C0:
    // 0x800733C0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_800733C4:
    // 0x800733C4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800733C8: j           L_80073500
    // 0x800733CC: sb          $v0, -0x35A7($at)
    MEM_B(-0X35A7, ctx->r1) = ctx->r2;
        goto L_80073500;
    // 0x800733CC: sb          $v0, -0x35A7($at)
    MEM_B(-0X35A7, ctx->r1) = ctx->r2;
L_800733D0:
    // 0x800733D0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_800733D4:
    // 0x800733D4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800733D8: j           L_80073500
    // 0x800733DC: sb          $v0, -0x35A7($at)
    MEM_B(-0X35A7, ctx->r1) = ctx->r2;
        goto L_80073500;
    // 0x800733DC: sb          $v0, -0x35A7($at)
    MEM_B(-0X35A7, ctx->r1) = ctx->r2;
L_800733E0:
    // 0x800733E0: lb          $v0, 0x51($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X51);
    // 0x800733E4: bne         $v0, $zero, L_80073500
    if (ctx->r2 != 0) {
        // 0x800733E8: addiu       $v0, $zero, 0xE
        ctx->r2 = ADD32(0, 0XE);
            goto L_80073500;
    }
    // 0x800733E8: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x800733EC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x800733F0: lb          $v1, -0x3BC6($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC6);
    // 0x800733F4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800733F8: sb          $v0, -0x35A5($at)
    MEM_B(-0X35A5, ctx->r1) = ctx->r2;
    // 0x800733FC: bltz        $v1, L_80073424
    if (SIGNED(ctx->r3) < 0) {
        // 0x80073400: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80073424;
    }
    // 0x80073400: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80073404: bne         $v0, $zero, L_80073500
    if (ctx->r2 != 0) {
        // 0x80073408: slti        $v0, $v1, 0x5
        ctx->r2 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
            goto L_80073500;
    }
    // 0x80073408: slti        $v0, $v1, 0x5
    ctx->r2 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
    // 0x8007340C: beq         $v0, $zero, L_80073428
    if (ctx->r2 == 0) {
        // 0x80073410: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_80073428;
    }
    // 0x80073410: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80073414:
    // 0x80073414: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_80073418:
    // 0x80073418: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007341C: j           L_80073500
    // 0x80073420: sb          $v0, -0x35A7($at)
    MEM_B(-0X35A7, ctx->r1) = ctx->r2;
        goto L_80073500;
    // 0x80073420: sb          $v0, -0x35A7($at)
    MEM_B(-0X35A7, ctx->r1) = ctx->r2;
L_80073424:
    // 0x80073424: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80073428:
    // 0x80073428: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007342C: j           L_80073500
    // 0x80073430: sb          $v0, -0x35A7($at)
    MEM_B(-0X35A7, ctx->r1) = ctx->r2;
        goto L_80073500;
    // 0x80073430: sb          $v0, -0x35A7($at)
    MEM_B(-0X35A7, ctx->r1) = ctx->r2;
L_80073434:
    // 0x80073434: lb          $v0, 0x51($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X51);
    // 0x80073438: bne         $v0, $zero, L_80073500
    if (ctx->r2 != 0) {
        // 0x8007343C: nop
    
            goto L_80073500;
    }
    // 0x8007343C: nop

    // 0x80073440: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80073444: lb          $v1, -0x3BC6($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC6);
    // 0x80073448: bltz        $v1, L_8007346C
    if (SIGNED(ctx->r3) < 0) {
        // 0x8007344C: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8007346C;
    }
    // 0x8007344C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80073450: bne         $v0, $zero, L_80073500
    if (ctx->r2 != 0) {
        // 0x80073454: slti        $v0, $v1, 0x5
        ctx->r2 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
            goto L_80073500;
    }
    // 0x80073454: slti        $v0, $v1, 0x5
    ctx->r2 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
    // 0x80073458: beq         $v0, $zero, L_8007346C
    if (ctx->r2 == 0) {
        // 0x8007345C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8007346C;
    }
    // 0x8007345C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80073460:
    // 0x80073460: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80073464: j           L_80073500
    // 0x80073468: sb          $v0, -0x35A7($at)
    MEM_B(-0X35A7, ctx->r1) = ctx->r2;
        goto L_80073500;
    // 0x80073468: sb          $v0, -0x35A7($at)
    MEM_B(-0X35A7, ctx->r1) = ctx->r2;
L_8007346C:
    // 0x8007346C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80073470:
    // 0x80073470: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80073474: j           L_80073500
    // 0x80073478: sb          $v0, -0x35A7($at)
    MEM_B(-0X35A7, ctx->r1) = ctx->r2;
        goto L_80073500;
    // 0x80073478: sb          $v0, -0x35A7($at)
    MEM_B(-0X35A7, ctx->r1) = ctx->r2;
L_8007347C:
    // 0x8007347C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80073480: lbu         $v0, -0x35A7($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X35A7);
    // 0x80073484: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80073488: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x8007348C: beq         $v0, $zero, L_80073500
    if (ctx->r2 == 0) {
        // 0x80073490: addiu       $v0, $zero, 0x12
        ctx->r2 = ADD32(0, 0X12);
            goto L_80073500;
    }
    // 0x80073490: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x80073494: j           L_800734F8
    // 0x80073498: nop

        goto L_800734F8;
    // 0x80073498: nop

L_8007349C:
    // 0x8007349C: j           L_800734F8
    // 0x800734A0: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
        goto L_800734F8;
    // 0x800734A0: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
L_800734A4:
    // 0x800734A4: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x800734A8: lb          $v1, -0x3BC6($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC6);
    // 0x800734AC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x800734B0: beq         $v1, $v0, L_800734C8
    if (ctx->r3 == ctx->r2) {
        // 0x800734B4: slti        $v0, $v1, 0x5
        ctx->r2 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
            goto L_800734C8;
    }
    // 0x800734B4: slti        $v0, $v1, 0x5
    ctx->r2 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
    // 0x800734B8: bne         $v0, $zero, L_800734D4
    if (ctx->r2 != 0) {
        // 0x800734BC: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_800734D4;
    }
    // 0x800734BC: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x800734C0: bne         $v1, $v0, L_800734D4
    if (ctx->r3 != ctx->r2) {
        // 0x800734C4: nop
    
            goto L_800734D4;
    }
    // 0x800734C4: nop

L_800734C8:
    // 0x800734C8: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x800734CC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800734D0: sb          $v0, -0x35A7($at)
    MEM_B(-0X35A7, ctx->r1) = ctx->r2;
L_800734D4:
    // 0x800734D4: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x800734D8: lbu         $v0, -0x35A7($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X35A7);
    // 0x800734DC: xori        $v1, $v0, 0x1
    ctx->r3 = ctx->r2 ^ 0X1;
    // 0x800734E0: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x800734E4: xori        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 ^ 0X7;
    // 0x800734E8: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x800734EC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x800734F0: beq         $v1, $zero, L_80073500
    if (ctx->r3 == 0) {
        // 0x800734F4: addiu       $v0, $zero, 0x11
        ctx->r2 = ADD32(0, 0X11);
            goto L_80073500;
    }
    // 0x800734F4: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
L_800734F8:
    // 0x800734F8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800734FC: sb          $v0, -0x35A5($at)
    MEM_B(-0X35A5, ctx->r1) = ctx->r2;
L_80073500:
    // 0x80073500: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80073504: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80073508: jr          $ra
    // 0x8007350C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8007350C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80070110_4B510(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80070110: lbu         $v1, 0x9($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X9);
    // 0x80070114: sltiu       $v0, $v1, 0xB
    ctx->r2 = ctx->r3 < 0XB ? 1 : 0;
    // 0x80070118: beq         $v0, $zero, L_80070174
    if (ctx->r2 == 0) {
        // 0x8007011C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80070174;
    }
    // 0x8007011C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80070120: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80070124: addu        $at, $at, $v0
    gpr jr_addend_8007012C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80070128: lw          $v0, 0x2938($at)
    ctx->r2 = ADD32(ctx->r1, 0X2938);
    // 0x8007012C: jr          $v0
    // 0x80070130: nop

    switch (jr_addend_8007012C >> 2) {
        case 0: goto L_80070174; break;
        case 1: goto L_80070174; break;
        case 2: goto L_80070134; break;
        case 3: goto L_80070174; break;
        case 4: goto L_80070174; break;
        case 5: goto L_80070174; break;
        case 6: goto L_80070174; break;
        case 7: goto L_80070174; break;
        case 8: goto L_80070134; break;
        case 9: goto L_80070174; break;
        case 10: goto L_80070174; break;
        default: switch_error(__func__, 0x8007012C, 0x800D2938);
    }
    // 0x80070130: nop

L_80070134:
    // 0x80070134: lb          $a0, 0x112($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X112);
    // 0x80070138: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8007013C: beq         $a0, $v0, L_8007016C
    if (ctx->r4 == ctx->r2) {
        // 0x80070140: slti        $v0, $a0, 0x2
        ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
            goto L_8007016C;
    }
    // 0x80070140: slti        $v0, $a0, 0x2
    ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x80070144: beql        $v0, $zero, L_8007015C
    if (ctx->r2 == 0) {
        // 0x80070148: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8007015C;
    }
    goto skip_0;
    // 0x80070148: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    skip_0:
    // 0x8007014C: beq         $a0, $zero, L_80070178
    if (ctx->r4 == 0) {
        // 0x80070150: addiu       $v0, $zero, 0x61
        ctx->r2 = ADD32(0, 0X61);
            goto L_80070178;
    }
    // 0x80070150: addiu       $v0, $zero, 0x61
    ctx->r2 = ADD32(0, 0X61);
    // 0x80070154: j           L_80070178
    // 0x80070158: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
        goto L_80070178;
    // 0x80070158: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
L_8007015C:
    // 0x8007015C: beq         $a0, $v0, L_80070178
    if (ctx->r4 == ctx->r2) {
        // 0x80070160: addiu       $v0, $zero, 0x62
        ctx->r2 = ADD32(0, 0X62);
            goto L_80070178;
    }
    // 0x80070160: addiu       $v0, $zero, 0x62
    ctx->r2 = ADD32(0, 0X62);
    // 0x80070164: j           L_80070178
    // 0x80070168: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
        goto L_80070178;
    // 0x80070168: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
L_8007016C:
    // 0x8007016C: j           L_80070178
    // 0x80070170: addiu       $v0, $zero, 0x63
    ctx->r2 = ADD32(0, 0X63);
        goto L_80070178;
    // 0x80070170: addiu       $v0, $zero, 0x63
    ctx->r2 = ADD32(0, 0X63);
L_80070174:
    // 0x80070174: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
L_80070178:
    // 0x80070178: jr          $ra
    // 0x8007017C: nop

    TRACE_RETURN()
    return;
    // 0x8007017C: nop

;}
RECOMP_FUNC void func_8003E540_19940(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003E540: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003E544: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8003E548: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8003E54C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003E550: lb          $v1, 0x1($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X1);
    // 0x8003E554: beq         $v1, $zero, L_8003E570
    if (ctx->r3 == 0) {
        // 0x8003E558: nop
    
            goto L_8003E570;
    }
    // 0x8003E558: nop

    // 0x8003E55C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8003E560: beq         $v1, $v0, L_8003E5CC
    if (ctx->r3 == ctx->r2) {
        // 0x8003E564: nop
    
            goto L_8003E5CC;
    }
    // 0x8003E564: nop

    // 0x8003E568: j           L_8003E62C
    // 0x8003E56C: nop

        goto L_8003E62C;
    // 0x8003E56C: nop

L_8003E570:
    // 0x8003E570: jal         0x8004A944
    // 0x8003E574: nop

    func_8004A944_25D44(rdram, ctx);
        goto after_0;
    // 0x8003E574: nop

    after_0:
    // 0x8003E578: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8003E57C: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x8003E580: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x8003E584: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003E588: jal         0x80061724
    // 0x8003E58C: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
    func_80061724_3CB24(rdram, ctx);
        goto after_1;
    // 0x8003E58C: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
    after_1:
    // 0x8003E590: jal         0x8004B5B0
    // 0x8003E594: nop

    func_8004B5B0_269B0(rdram, ctx);
        goto after_2;
    // 0x8003E594: nop

    after_2:
    // 0x8003E598: jal         0x80036E48
    // 0x8003E59C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80036E48_12248(rdram, ctx);
        goto after_3;
    // 0x8003E59C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_3:
    // 0x8003E5A0: jal         0x8002A46C
    // 0x8003E5A4: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_8002A46C_586C(rdram, ctx);
        goto after_4;
    // 0x8003E5A4: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_4:
    // 0x8003E5A8: jal         0x8002A46C
    // 0x8003E5AC: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    func_8002A46C_586C(rdram, ctx);
        goto after_5;
    // 0x8003E5AC: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    after_5:
    // 0x8003E5B0: jal         0x8002A46C
    // 0x8003E5B4: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    func_8002A46C_586C(rdram, ctx);
        goto after_6;
    // 0x8003E5B4: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    after_6:
    // 0x8003E5B8: jal         0x80089EA0
    // 0x8003E5BC: nop

    func_80089EA0_652A0(rdram, ctx);
        goto after_7;
    // 0x8003E5BC: nop

    after_7:
    // 0x8003E5C0: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x8003E5C4: j           L_8003E628
    // 0x8003E5C8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8003E628;
    // 0x8003E5C8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8003E5CC:
    // 0x8003E5CC: jal         0x8004A958
    // 0x8003E5D0: nop

    func_8004A958_25D58(rdram, ctx);
        goto after_8;
    // 0x8003E5D0: nop

    after_8:
    // 0x8003E5D4: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8003E5D8: lhu         $v1, -0x783A($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X783A);
    // 0x8003E5DC: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x8003E5E0: bne         $v0, $zero, L_8003E5F0
    if (ctx->r2 != 0) {
        // 0x8003E5E4: andi        $v0, $v1, 0x8000
        ctx->r2 = ctx->r3 & 0X8000;
            goto L_8003E5F0;
    }
    // 0x8003E5E4: andi        $v0, $v1, 0x8000
    ctx->r2 = ctx->r3 & 0X8000;
    // 0x8003E5E8: beq         $v0, $zero, L_8003E62C
    if (ctx->r2 == 0) {
        // 0x8003E5EC: nop
    
            goto L_8003E62C;
    }
    // 0x8003E5EC: nop

L_8003E5F0:
    // 0x8003E5F0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8003E5F4: jal         0x800571E4
    // 0x8003E5F8: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_800571E4_325E4(rdram, ctx);
        goto after_9;
    // 0x8003E5F8: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_9:
    // 0x8003E5FC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8003E600: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x8003E604: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x8003E608: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003E60C: jal         0x80061724
    // 0x8003E610: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
    func_80061724_3CB24(rdram, ctx);
        goto after_10;
    // 0x8003E610: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
    after_10:
    // 0x8003E614: jal         0x8004B5E8
    // 0x8003E618: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    func_8004B5E8_269E8(rdram, ctx);
        goto after_11;
    // 0x8003E618: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    after_11:
    // 0x8003E61C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8003E620: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8003E624: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8003E628:
    // 0x8003E628: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
L_8003E62C:
    // 0x8003E62C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003E630: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8003E634: jr          $ra
    // 0x8003E638: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8003E638: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003E63C: nop

;}
RECOMP_FUNC void func_8004FA7C_2AE7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004FA7C: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    // 0x8004FA80: subu        $a0, $a0, $a1
    ctx->r4 = SUB32(ctx->r4, ctx->r5);
    // 0x8004FA84: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x8004FA88: bgez        $v0, L_8004FA94
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8004FA8C: addu        $a1, $a0, $zero
        ctx->r5 = ADD32(ctx->r4, 0);
            goto L_8004FA94;
    }
    // 0x8004FA8C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8004FA90: addiu       $a1, $a0, 0x1000
    ctx->r5 = ADD32(ctx->r4, 0X1000);
L_8004FA94:
    // 0x8004FA94: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x8004FA98: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8004FA9C: slti        $v0, $a0, 0x800
    ctx->r2 = SIGNED(ctx->r4) < 0X800 ? 1 : 0;
    // 0x8004FAA0: beq         $v0, $zero, L_8004FAC0
    if (ctx->r2 == 0) {
        // 0x8004FAA4: sll         $v0, $a2, 16
        ctx->r2 = S32(ctx->r6 << 16);
            goto L_8004FAC0;
    }
    // 0x8004FAA4: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x8004FAA8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8004FAAC: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8004FAB0: bnel        $v0, $zero, L_8004FAE0
    if (ctx->r2 != 0) {
        // 0x8004FAB4: addu        $v1, $a1, $zero
        ctx->r3 = ADD32(ctx->r5, 0);
            goto L_8004FAE0;
    }
    goto skip_0;
    // 0x8004FAB4: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    skip_0:
    // 0x8004FAB8: j           L_8004FAE4
    // 0x8004FABC: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
        goto L_8004FAE4;
    // 0x8004FABC: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
L_8004FAC0:
    // 0x8004FAC0: sll         $v1, $a2, 16
    ctx->r3 = S32(ctx->r6 << 16);
    // 0x8004FAC4: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8004FAC8: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x8004FACC: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8004FAD0: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8004FAD4: bne         $v0, $zero, L_8004FAE0
    if (ctx->r2 != 0) {
        // 0x8004FAD8: addiu       $v1, $a1, -0x1000
        ctx->r3 = ADD32(ctx->r5, -0X1000);
            goto L_8004FAE0;
    }
    // 0x8004FAD8: addiu       $v1, $a1, -0x1000
    ctx->r3 = ADD32(ctx->r5, -0X1000);
    // 0x8004FADC: negu        $v1, $a2
    ctx->r3 = SUB32(0, ctx->r6);
L_8004FAE0:
    // 0x8004FAE0: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
L_8004FAE4:
    // 0x8004FAE4: jr          $ra
    // 0x8004FAE8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    TRACE_RETURN()
    return;
    // 0x8004FAE8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
;}
RECOMP_FUNC void func_8008EDBC_6A1BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008EDBC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008EDC0: sw          $a0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r4;
    // 0x8008EDC4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8008EDC8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8008EDCC: lui         $a2, 0x8018
    ctx->r6 = S32(0X8018 << 16);
    // 0x8008EDD0: addiu       $a2, $a2, 0x51F0
    ctx->r6 = ADD32(ctx->r6, 0X51F0);
    // 0x8008EDD4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8008EDD8: jal         0x80098CC0
    // 0x8008EDDC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    alHeapDBAlloc(rdram, ctx);
        goto after_0;
    // 0x8008EDDC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x8008EDE0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8008EDE4: jr          $ra
    // 0x8008EDE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8008EDE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80064ABC_3FEBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80064ABC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80064AC0: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80064AC4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80064AC8: lw          $v0, 0x6C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X6C);
    // 0x80064ACC: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80064AD0: lbu         $v1, 0x3FF3($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X3FF3);
    // 0x80064AD4: lbu         $a3, 0x2($v0)
    ctx->r7 = MEM_BU(ctx->r2, 0X2);
    // 0x80064AD8: lbu         $a2, 0x3($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X3);
    // 0x80064ADC: lbu         $a0, 0x1($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X1);
    // 0x80064AE0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80064AE4: bne         $v1, $a0, L_80064B20
    if (ctx->r3 != ctx->r4) {
        // 0x80064AE8: sw          $v0, 0x6C($a1)
        MEM_W(0X6C, ctx->r5) = ctx->r2;
            goto L_80064B20;
    }
    // 0x80064AE8: sw          $v0, 0x6C($a1)
    MEM_W(0X6C, ctx->r5) = ctx->r2;
    // 0x80064AEC: lw          $a1, 0x44($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X44);
    // 0x80064AF0: beq         $a1, $zero, L_80064B00
    if (ctx->r5 == 0) {
        // 0x80064AF4: sll         $a0, $a3, 24
        ctx->r4 = S32(ctx->r7 << 24);
            goto L_80064B00;
    }
    // 0x80064AF4: sll         $a0, $a3, 24
    ctx->r4 = S32(ctx->r7 << 24);
    // 0x80064AF8: j           L_80064B18
    // 0x80064AFC: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
        goto L_80064B18;
    // 0x80064AFC: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
L_80064B00:
    // 0x80064B00: sll         $v0, $a2, 2
    ctx->r2 = S32(ctx->r6 << 2);
    // 0x80064B04: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80064B08: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80064B0C: lw          $a1, 0x27EC($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X27EC);
    // 0x80064B10: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80064B14: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
L_80064B18:
    // 0x80064B18: jal         0x80061510
    // 0x80064B1C: nop

    func_80061510_3C910(rdram, ctx);
        goto after_0;
    // 0x80064B1C: nop

    after_0:
L_80064B20:
    // 0x80064B20: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80064B24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80064B28: jr          $ra
    // 0x80064B2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80064B2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800354B8_108B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800354B8: jr          $ra
    // 0x800354BC: nop

    TRACE_RETURN()
    return;
    // 0x800354BC: nop

;}
RECOMP_FUNC void func_80054A90_2FE90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80054A90: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80054A94: lbu         $v0, -0x4980($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X4980);
    // 0x80054A98: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x80054A9C: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80054AA0: lbu         $v0, -0x497F($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X497F);
    // 0x80054AA4: sh          $v0, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r2;
    // 0x80054AA8: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80054AAC: lbu         $v0, -0x497E($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X497E);
    // 0x80054AB0: sh          $v0, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r2;
    // 0x80054AB4: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80054AB8: lhu         $v0, -0x497C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X497C);
    // 0x80054ABC: jr          $ra
    // 0x80054AC0: sh          $v0, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80054AC0: sh          $v0, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_800291B8_45B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800291B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800291BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x800291C0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x800291C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800291C8: jal         0x8009B900
    // 0x800291CC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    osGetThreadPri_recomp(rdram, ctx);
        goto after_0;
    // 0x800291CC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
    // 0x800291D0: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x800291D4: addiu       $v1, $v0, 0x36
    ctx->r3 = ADD32(ctx->r2, 0X36);
    // 0x800291D8: sltiu       $v0, $v1, 0x4
    ctx->r2 = ctx->r3 < 0X4 ? 1 : 0;
    // 0x800291DC: beq         $v0, $zero, L_80029200
    if (ctx->r2 == 0) {
        // 0x800291E0: sll         $v0, $v1, 3
        ctx->r2 = S32(ctx->r3 << 3);
            goto L_80029200;
    }
    // 0x800291E0: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x800291E4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x800291E8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x800291EC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800291F0: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x800291F4: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x800291F8: addiu       $v1, $v1, -0x46D0
    ctx->r3 = ADD32(ctx->r3, -0X46D0);
    // 0x800291FC: addu        $s0, $v0, $v1
    ctx->r16 = ADD32(ctx->r2, ctx->r3);
L_80029200:
    // 0x80029200: beq         $s0, $zero, L_80029238
    if (ctx->r16 == 0) {
        // 0x80029204: nop
    
            goto L_80029238;
    }
    // 0x80029204: nop

    // 0x80029208: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x8002920C: beq         $v0, $zero, L_80029230
    if (ctx->r2 == 0) {
        // 0x80029210: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80029230;
    }
    // 0x80029210: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80029214: jal         0x80029114
    // 0x80029218: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_80029114_4514(rdram, ctx);
        goto after_1;
    // 0x80029218: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_1:
    // 0x8002921C: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x80029220: jalr        $v0
    // 0x80029224: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x80029224: nop

    after_2:
    // 0x80029228: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x8002922C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80029230:
    // 0x80029230: sh          $zero, 0x2($s0)
    MEM_H(0X2, ctx->r16) = 0;
    // 0x80029234: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
L_80029238:
    // 0x80029238: jal         0x8009B820
    // 0x8002923C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    osDestroyThread_recomp(rdram, ctx);
        goto after_3;
    // 0x8002923C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_3:
    // 0x80029240: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80029244: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80029248: jr          $ra
    // 0x8002924C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8002924C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80058DAC_341AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80058DAC: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x80058DB0: lh          $a0, 0x0($a1)
    ctx->r4 = MEM_H(ctx->r5, 0X0);
    // 0x80058DB4: lh          $v0, 0x14($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X14);
    // 0x80058DB8: lh          $v1, 0x8($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X8);
    // 0x80058DBC: subu        $a2, $v0, $a0
    ctx->r6 = SUB32(ctx->r2, ctx->r4);
    // 0x80058DC0: subu        $t1, $v1, $a0
    ctx->r9 = SUB32(ctx->r3, ctx->r4);
    // 0x80058DC4: sltu        $v0, $a2, $t1
    ctx->r2 = ctx->r6 < ctx->r9 ? 1 : 0;
    // 0x80058DC8: beq         $v0, $zero, L_80059010
    if (ctx->r2 == 0) {
        // 0x80058DCC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80059010;
    }
    // 0x80058DCC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80058DD0: lh          $a0, 0x4($a1)
    ctx->r4 = MEM_H(ctx->r5, 0X4);
    // 0x80058DD4: lh          $v0, 0x18($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X18);
    // 0x80058DD8: lh          $v1, 0xC($a1)
    ctx->r3 = MEM_H(ctx->r5, 0XC);
    // 0x80058DDC: subu        $a1, $v0, $a0
    ctx->r5 = SUB32(ctx->r2, ctx->r4);
    // 0x80058DE0: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x80058DE4: sltu        $v0, $a1, $v1
    ctx->r2 = ctx->r5 < ctx->r3 ? 1 : 0;
    // 0x80058DE8: beq         $v0, $zero, L_8005900C
    if (ctx->r2 == 0) {
        // 0x80058DEC: sra         $a0, $t1, 1
        ctx->r4 = S32(SIGNED(ctx->r9) >> 1);
            goto L_8005900C;
    }
    // 0x80058DEC: sra         $a0, $t1, 1
    ctx->r4 = S32(SIGNED(ctx->r9) >> 1);
    // 0x80058DF0: sra         $a3, $v1, 1
    ctx->r7 = S32(SIGNED(ctx->r3) >> 1);
    // 0x80058DF4: slt         $v0, $a2, $a0
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80058DF8: bne         $v0, $zero, L_80058E0C
    if (ctx->r2 != 0) {
        // 0x80058DFC: addu        $t0, $zero, $zero
        ctx->r8 = ADD32(0, 0);
            goto L_80058E0C;
    }
    // 0x80058DFC: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x80058E00: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80058E04: subu        $a2, $a2, $a0
    ctx->r6 = SUB32(ctx->r6, ctx->r4);
    // 0x80058E08: subu        $a0, $t1, $a0
    ctx->r4 = SUB32(ctx->r9, ctx->r4);
L_80058E0C:
    // 0x80058E0C: slt         $v0, $a1, $a3
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x80058E10: bne         $v0, $zero, L_80058E24
    if (ctx->r2 != 0) {
        // 0x80058E14: nop
    
            goto L_80058E24;
    }
    // 0x80058E14: nop

    // 0x80058E18: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x80058E1C: subu        $a1, $a1, $a3
    ctx->r5 = SUB32(ctx->r5, ctx->r7);
    // 0x80058E20: subu        $a3, $v1, $a3
    ctx->r7 = SUB32(ctx->r3, ctx->r7);
L_80058E24:
    // 0x80058E24: beq         $a2, $zero, L_80058FCC
    if (ctx->r6 == 0) {
        // 0x80058E28: sll         $v0, $t0, 24
        ctx->r2 = S32(ctx->r8 << 24);
            goto L_80058FCC;
    }
    // 0x80058E28: sll         $v0, $t0, 24
    ctx->r2 = S32(ctx->r8 << 24);
    // 0x80058E2C: sra         $v1, $v0, 24
    ctx->r3 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80058E30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80058E34: beq         $v1, $v0, L_80058EC4
    if (ctx->r3 == ctx->r2) {
        // 0x80058E38: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80058EC4;
    }
    // 0x80058E38: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80058E3C: beql        $v0, $zero, L_80058E54
    if (ctx->r2 == 0) {
        // 0x80058E40: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80058E54;
    }
    goto skip_0;
    // 0x80058E40: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80058E44: beq         $v1, $zero, L_80058E6C
    if (ctx->r3 == 0) {
        // 0x80058E48: subu        $a1, $a3, $a1
        ctx->r5 = SUB32(ctx->r7, ctx->r5);
            goto L_80058E6C;
    }
    // 0x80058E48: subu        $a1, $a3, $a1
    ctx->r5 = SUB32(ctx->r7, ctx->r5);
    // 0x80058E4C: j           L_80059010
    // 0x80058E50: addiu       $v0, $zero, -0x7C
    ctx->r2 = ADD32(0, -0X7C);
        goto L_80059010;
    // 0x80058E50: addiu       $v0, $zero, -0x7C
    ctx->r2 = ADD32(0, -0X7C);
L_80058E54:
    // 0x80058E54: beq         $v1, $v0, L_80058F1C
    if (ctx->r3 == ctx->r2) {
        // 0x80058E58: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80058F1C;
    }
    // 0x80058E58: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80058E5C: beq         $v1, $v0, L_80058F74
    if (ctx->r3 == ctx->r2) {
        // 0x80058E60: subu        $a1, $a3, $a1
        ctx->r5 = SUB32(ctx->r7, ctx->r5);
            goto L_80058F74;
    }
    // 0x80058E60: subu        $a1, $a3, $a1
    ctx->r5 = SUB32(ctx->r7, ctx->r5);
    // 0x80058E64: j           L_80059010
    // 0x80058E68: addiu       $v0, $zero, -0x7C
    ctx->r2 = ADD32(0, -0X7C);
        goto L_80059010;
    // 0x80058E68: addiu       $v0, $zero, -0x7C
    ctx->r2 = ADD32(0, -0X7C);
L_80058E6C:
    // 0x80058E6C: nop

    // 0x80058E70: mult        $a1, $a0
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80058E74: mflo        $v0
    ctx->r2 = lo;
    // 0x80058E78: nop

    // 0x80058E7C: nop

    // 0x80058E80: div         $zero, $v0, $a2
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r6)));
    // 0x80058E84: bne         $a2, $zero, L_80058E90
    if (ctx->r6 != 0) {
        // 0x80058E88: nop
    
            goto L_80058E90;
    }
    // 0x80058E88: nop

    // 0x80058E8C: break       7
    do_break(2147847820);
L_80058E90:
    // 0x80058E90: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80058E94: bne         $a2, $at, L_80058EA8
    if (ctx->r6 != ctx->r1) {
        // 0x80058E98: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80058EA8;
    }
    // 0x80058E98: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80058E9C: bne         $v0, $at, L_80058EA8
    if (ctx->r2 != ctx->r1) {
        // 0x80058EA0: nop
    
            goto L_80058EA8;
    }
    // 0x80058EA0: nop

    // 0x80058EA4: break       6
    do_break(2147847844);
L_80058EA8:
    // 0x80058EA8: mflo        $v0
    ctx->r2 = lo;
    // 0x80058EAC: slt         $v0, $v0, $a3
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x80058EB0: nop

    // 0x80058EB4: bne         $v0, $zero, L_80059010
    if (ctx->r2 != 0) {
        // 0x80058EB8: addiu       $v0, $zero, -0x7C
        ctx->r2 = ADD32(0, -0X7C);
            goto L_80059010;
    }
    // 0x80058EB8: addiu       $v0, $zero, -0x7C
    ctx->r2 = ADD32(0, -0X7C);
    // 0x80058EBC: j           L_80059010
    // 0x80058EC0: addiu       $v0, $zero, -0x80
    ctx->r2 = ADD32(0, -0X80);
        goto L_80059010;
    // 0x80058EC0: addiu       $v0, $zero, -0x80
    ctx->r2 = ADD32(0, -0X80);
L_80058EC4:
    // 0x80058EC4: nop

    // 0x80058EC8: mult        $a1, $a0
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80058ECC: mflo        $v0
    ctx->r2 = lo;
    // 0x80058ED0: nop

    // 0x80058ED4: nop

    // 0x80058ED8: div         $zero, $v0, $a2
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r6)));
    // 0x80058EDC: bne         $a2, $zero, L_80058EE8
    if (ctx->r6 != 0) {
        // 0x80058EE0: nop
    
            goto L_80058EE8;
    }
    // 0x80058EE0: nop

    // 0x80058EE4: break       7
    do_break(2147847908);
L_80058EE8:
    // 0x80058EE8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80058EEC: bne         $a2, $at, L_80058F00
    if (ctx->r6 != ctx->r1) {
        // 0x80058EF0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80058F00;
    }
    // 0x80058EF0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80058EF4: bne         $v0, $at, L_80058F00
    if (ctx->r2 != ctx->r1) {
        // 0x80058EF8: nop
    
            goto L_80058F00;
    }
    // 0x80058EF8: nop

    // 0x80058EFC: break       6
    do_break(2147847932);
L_80058F00:
    // 0x80058F00: mflo        $v0
    ctx->r2 = lo;
    // 0x80058F04: slt         $v0, $a3, $v0
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80058F08: nop

    // 0x80058F0C: bne         $v0, $zero, L_80059010
    if (ctx->r2 != 0) {
        // 0x80058F10: addiu       $v0, $zero, -0x7C
        ctx->r2 = ADD32(0, -0X7C);
            goto L_80059010;
    }
    // 0x80058F10: addiu       $v0, $zero, -0x7C
    ctx->r2 = ADD32(0, -0X7C);
    // 0x80058F14: j           L_80059010
    // 0x80058F18: addiu       $v0, $zero, -0x7F
    ctx->r2 = ADD32(0, -0X7F);
        goto L_80059010;
    // 0x80058F18: addiu       $v0, $zero, -0x7F
    ctx->r2 = ADD32(0, -0X7F);
L_80058F1C:
    // 0x80058F1C: nop

    // 0x80058F20: mult        $a1, $a0
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80058F24: mflo        $v0
    ctx->r2 = lo;
    // 0x80058F28: nop

    // 0x80058F2C: nop

    // 0x80058F30: div         $zero, $v0, $a2
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r6)));
    // 0x80058F34: bne         $a2, $zero, L_80058F40
    if (ctx->r6 != 0) {
        // 0x80058F38: nop
    
            goto L_80058F40;
    }
    // 0x80058F38: nop

    // 0x80058F3C: break       7
    do_break(2147847996);
L_80058F40:
    // 0x80058F40: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80058F44: bne         $a2, $at, L_80058F58
    if (ctx->r6 != ctx->r1) {
        // 0x80058F48: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80058F58;
    }
    // 0x80058F48: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80058F4C: bne         $v0, $at, L_80058F58
    if (ctx->r2 != ctx->r1) {
        // 0x80058F50: nop
    
            goto L_80058F58;
    }
    // 0x80058F50: nop

    // 0x80058F54: break       6
    do_break(2147848020);
L_80058F58:
    // 0x80058F58: mflo        $v0
    ctx->r2 = lo;
    // 0x80058F5C: slt         $v0, $v0, $a3
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x80058F60: nop

    // 0x80058F64: bne         $v0, $zero, L_80059010
    if (ctx->r2 != 0) {
        // 0x80058F68: addiu       $v0, $zero, -0x7C
        ctx->r2 = ADD32(0, -0X7C);
            goto L_80059010;
    }
    // 0x80058F68: addiu       $v0, $zero, -0x7C
    ctx->r2 = ADD32(0, -0X7C);
L_80058F6C:
    // 0x80058F6C: j           L_80059010
    // 0x80058F70: addiu       $v0, $zero, -0x7E
    ctx->r2 = ADD32(0, -0X7E);
        goto L_80059010;
    // 0x80058F70: addiu       $v0, $zero, -0x7E
    ctx->r2 = ADD32(0, -0X7E);
L_80058F74:
    // 0x80058F74: nop

    // 0x80058F78: mult        $a1, $a0
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80058F7C: mflo        $v0
    ctx->r2 = lo;
    // 0x80058F80: nop

    // 0x80058F84: nop

    // 0x80058F88: div         $zero, $v0, $a2
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r6)));
    // 0x80058F8C: bne         $a2, $zero, L_80058F98
    if (ctx->r6 != 0) {
        // 0x80058F90: nop
    
            goto L_80058F98;
    }
    // 0x80058F90: nop

    // 0x80058F94: break       7
    do_break(2147848084);
L_80058F98:
    // 0x80058F98: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80058F9C: bne         $a2, $at, L_80058FB0
    if (ctx->r6 != ctx->r1) {
        // 0x80058FA0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80058FB0;
    }
    // 0x80058FA0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80058FA4: bne         $v0, $at, L_80058FB0
    if (ctx->r2 != ctx->r1) {
        // 0x80058FA8: nop
    
            goto L_80058FB0;
    }
    // 0x80058FA8: nop

    // 0x80058FAC: break       6
    do_break(2147848108);
L_80058FB0:
    // 0x80058FB0: mflo        $v0
    ctx->r2 = lo;
    // 0x80058FB4: slt         $v0, $a3, $v0
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80058FB8: nop

    // 0x80058FBC: bne         $v0, $zero, L_80059010
    if (ctx->r2 != 0) {
        // 0x80058FC0: addiu       $v0, $zero, -0x7C
        ctx->r2 = ADD32(0, -0X7C);
            goto L_80059010;
    }
    // 0x80058FC0: addiu       $v0, $zero, -0x7C
    ctx->r2 = ADD32(0, -0X7C);
    // 0x80058FC4: j           L_80059010
    // 0x80058FC8: addiu       $v0, $zero, -0x7D
    ctx->r2 = ADD32(0, -0X7D);
        goto L_80059010;
    // 0x80058FC8: addiu       $v0, $zero, -0x7D
    ctx->r2 = ADD32(0, -0X7D);
L_80058FCC:
    // 0x80058FCC: sra         $v1, $v0, 24
    ctx->r3 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80058FD0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80058FD4: beq         $v1, $v0, L_80059004
    if (ctx->r3 == ctx->r2) {
        // 0x80058FD8: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80059004;
    }
    // 0x80058FD8: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80058FDC: beql        $v0, $zero, L_80058FF4
    if (ctx->r2 == 0) {
        // 0x80058FE0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80058FF4;
    }
    goto skip_1;
    // 0x80058FE0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_1:
    // 0x80058FE4: beq         $v1, $zero, L_80059010
    if (ctx->r3 == 0) {
        // 0x80058FE8: addiu       $v0, $zero, -0x80
        ctx->r2 = ADD32(0, -0X80);
            goto L_80059010;
    }
    // 0x80058FE8: addiu       $v0, $zero, -0x80
    ctx->r2 = ADD32(0, -0X80);
    // 0x80058FEC: j           L_80059010
    // 0x80058FF0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_80059010;
    // 0x80058FF0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80058FF4:
    // 0x80058FF4: beq         $v1, $v0, L_80058F6C
    if (ctx->r3 == ctx->r2) {
        // 0x80058FF8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80058F6C;
    }
    // 0x80058FF8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80058FFC: bne         $v1, $v0, L_80059010
    if (ctx->r3 != ctx->r2) {
        // 0x80059000: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80059010;
    }
    // 0x80059000: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80059004:
    // 0x80059004: j           L_80059010
    // 0x80059008: addiu       $v0, $zero, -0x7C
    ctx->r2 = ADD32(0, -0X7C);
        goto L_80059010;
    // 0x80059008: addiu       $v0, $zero, -0x7C
    ctx->r2 = ADD32(0, -0X7C);
L_8005900C:
    // 0x8005900C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80059010:
    // 0x80059010: jr          $ra
    // 0x80059014: nop

    TRACE_RETURN()
    return;
    // 0x80059014: nop

;}
RECOMP_FUNC void func_80028660_3A60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80028660: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x80028664: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80028668: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x8002866C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80028670: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80028674: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80028678: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8002867C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80028680: addiu       $v1, $v1, 0x47F0
    ctx->r3 = ADD32(ctx->r3, 0X47F0);
    // 0x80028684: addu        $v1, $v0, $v1
    ctx->r3 = ADD32(ctx->r2, ctx->r3);
    // 0x80028688: lb          $v0, 0xAA($v1)
    ctx->r2 = MEM_B(ctx->r3, 0XAA);
    // 0x8002868C: beq         $v0, $zero, L_8002869C
    if (ctx->r2 == 0) {
        // 0x80028690: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8002869C;
    }
    // 0x80028690: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80028694: j           L_800286A0
    // 0x80028698: sb          $zero, 0xAA($v1)
    MEM_B(0XAA, ctx->r3) = 0;
        goto L_800286A0;
    // 0x80028698: sb          $zero, 0xAA($v1)
    MEM_B(0XAA, ctx->r3) = 0;
L_8002869C:
    // 0x8002869C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_800286A0:
    // 0x800286A0: jr          $ra
    // 0x800286A4: nop

    TRACE_RETURN()
    return;
    // 0x800286A4: nop

;}
RECOMP_FUNC void func_80073C34_4F034(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80073C34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80073C38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80073C3C: jal         0x80073A18
    // 0x80073C40: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80073A18_4EE18(rdram, ctx);
        goto after_0;
    // 0x80073C40: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x80073C44: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80073C48: lb          $v0, 0x4B1A($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4B1A);
    // 0x80073C4C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80073C50: addiu       $v1, $v1, -0x3BA8
    ctx->r3 = ADD32(ctx->r3, -0X3BA8);
    // 0x80073C54: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x80073C58: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x80073C5C: lbu         $s0, 0x3984($s0)
    ctx->r16 = MEM_BU(ctx->r16, 0X3984);
    // 0x80073C60: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    // 0x80073C64: beq         $v0, $s0, L_80073CA0
    if (ctx->r2 == ctx->r16) {
        // 0x80073C68: nop
    
            goto L_80073CA0;
    }
    // 0x80073C68: nop

    // 0x80073C6C: jal         0x80092EB0
    // 0x80073C70: sh          $s0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r16;
    func_80092EB0_6E2B0(rdram, ctx);
        goto after_1;
    // 0x80073C70: sh          $s0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r16;
    after_1:
    // 0x80073C74: jal         0x80087570
    // 0x80073C78: nop

    Graph_ThreadStop(rdram, ctx);
        goto after_2;
    // 0x80073C78: nop

    after_2:
    // 0x80073C7C: jal         0x80083E30
    // 0x80073C80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80083E30_5F230(rdram, ctx);
        goto after_3;
    // 0x80073C80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80073C84: jal         0x80087590
    // 0x80073C88: nop

    func_80087590_62990(rdram, ctx);
        goto after_4;
    // 0x80073C88: nop

    after_4:
    // 0x80073C8C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80073C90: jal         0x80036D34
    // 0x80073C94: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80036D34_12134(rdram, ctx);
        goto after_5;
    // 0x80073C94: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x80073C98: jal         0x80036BCC
    // 0x80073C9C: nop

    func_80036BCC_11FCC(rdram, ctx);
        goto after_6;
    // 0x80073C9C: nop

    after_6:
L_80073CA0:
    // 0x80073CA0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80073CA4: lbu         $v0, 0x4B1B($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4B1B);
    // 0x80073CA8: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80073CAC: sra         $v0, $v0, 25
    ctx->r2 = S32(SIGNED(ctx->r2) >> 25);
    // 0x80073CB0: lui         $s0, 0x800B
    ctx->r16 = S32(0X800B << 16);
    // 0x80073CB4: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x80073CB8: lbu         $s0, 0x3988($s0)
    ctx->r16 = MEM_BU(ctx->r16, 0X3988);
    // 0x80073CBC: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80073CC0: lh          $v0, -0x3BA6($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X3BA6);
    // 0x80073CC4: beq         $v0, $s0, L_80073D10
    if (ctx->r2 == ctx->r16) {
        // 0x80073CC8: nop
    
            goto L_80073D10;
    }
    // 0x80073CC8: nop

    // 0x80073CCC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80073CD0: jal         0x80092EB0
    // 0x80073CD4: sh          $s0, -0x3BA6($at)
    MEM_H(-0X3BA6, ctx->r1) = ctx->r16;
    func_80092EB0_6E2B0(rdram, ctx);
        goto after_7;
    // 0x80073CD4: sh          $s0, -0x3BA6($at)
    MEM_H(-0X3BA6, ctx->r1) = ctx->r16;
    after_7:
    // 0x80073CD8: jal         0x80087570
    // 0x80073CDC: nop

    Graph_ThreadStop(rdram, ctx);
        goto after_8;
    // 0x80073CDC: nop

    after_8:
    // 0x80073CE0: jal         0x80083E30
    // 0x80073CE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80083E30_5F230(rdram, ctx);
        goto after_9;
    // 0x80073CE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x80073CE8: jal         0x80087590
    // 0x80073CEC: nop

    func_80087590_62990(rdram, ctx);
        goto after_10;
    // 0x80073CEC: nop

    after_10:
    // 0x80073CF0: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x80073CF4: jal         0x80036D34
    // 0x80073CF8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80036D34_12134(rdram, ctx);
        goto after_11;
    // 0x80073CF8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_11:
    // 0x80073CFC: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x80073D00: jal         0x80036D34
    // 0x80073D04: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80036D34_12134(rdram, ctx);
        goto after_12;
    // 0x80073D04: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_12:
    // 0x80073D08: jal         0x80036BCC
    // 0x80073D0C: nop

    func_80036BCC_11FCC(rdram, ctx);
        goto after_13;
    // 0x80073D0C: nop

    after_13:
L_80073D10:
    // 0x80073D10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80073D14: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80073D18: jr          $ra
    // 0x80073D1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80073D1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80065E50_41250(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80065E50: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x80065E54: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80065E58: lbu         $a1, -0x11D0($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X11D0);
    // 0x80065E5C: lw          $v0, 0x6C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X6C);
    // 0x80065E60: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80065E64: addiu       $v1, $v1, -0x196C
    ctx->r3 = ADD32(ctx->r3, -0X196C);
    // 0x80065E68: sll         $a0, $a1, 2
    ctx->r4 = S32(ctx->r5 << 2);
    // 0x80065E6C: lbu         $a2, 0x1($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X1);
    // 0x80065E70: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x80065E74: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x80065E78: sll         $v0, $a2, 3
    ctx->r2 = S32(ctx->r6 << 3);
    // 0x80065E7C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80065E80: beq         $a1, $zero, L_80065EA0
    if (ctx->r5 == 0) {
        // 0x80065E84: addu        $a0, $a0, $v0
        ctx->r4 = ADD32(ctx->r4, ctx->r2);
            goto L_80065EA0;
    }
    // 0x80065E84: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80065E88: sll         $v1, $a1, 3
    ctx->r3 = S32(ctx->r5 << 3);
    // 0x80065E8C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80065E90: addiu       $v0, $v0, 0x4EAC
    ctx->r2 = ADD32(ctx->r2, 0X4EAC);
    // 0x80065E94: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
    // 0x80065E98: j           L_80065EAC
    // 0x80065E9C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
        goto L_80065EAC;
    // 0x80065E9C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
L_80065EA0:
    // 0x80065EA0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80065EA4: addiu       $v0, $v0, 0x4EA4
    ctx->r2 = ADD32(ctx->r2, 0X4EA4);
    // 0x80065EA8: addu        $v1, $a2, $v0
    ctx->r3 = ADD32(ctx->r6, ctx->r2);
L_80065EAC:
    // 0x80065EAC: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x80065EB0: bne         $v0, $zero, L_80065EC8
    if (ctx->r2 != 0) {
        // 0x80065EB4: nop
    
            goto L_80065EC8;
    }
    // 0x80065EB4: nop

    // 0x80065EB8: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80065EBC: addiu       $v1, $v1, 0x2E54
    ctx->r3 = ADD32(ctx->r3, 0X2E54);
    // 0x80065EC0: j           L_80065F08
    // 0x80065EC4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
        goto L_80065F08;
    // 0x80065EC4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_80065EC8:
    // 0x80065EC8: lb          $v1, 0x0($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X0);
    // 0x80065ECC: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80065ED0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80065ED4: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80065ED8: bne         $v0, $zero, L_80065EEC
    if (ctx->r2 != 0) {
        // 0x80065EDC: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80065EEC;
    }
    // 0x80065EDC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80065EE0: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80065EE4: j           L_80065F08
    // 0x80065EE8: addiu       $v1, $v1, 0x2E4C
    ctx->r3 = ADD32(ctx->r3, 0X2E4C);
        goto L_80065F08;
    // 0x80065EE8: addiu       $v1, $v1, 0x2E4C
    ctx->r3 = ADD32(ctx->r3, 0X2E4C);
L_80065EEC:
    // 0x80065EEC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80065EF0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80065EF4: lbu         $v0, 0x2D99($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2D99);
    // 0x80065EF8: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80065EFC: addiu       $v1, $v1, 0x2E44
    ctx->r3 = ADD32(ctx->r3, 0X2E44);
    // 0x80065F00: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80065F04: sb          $v0, 0x2E4A($at)
    MEM_B(0X2E4A, ctx->r1) = ctx->r2;
L_80065F08:
    // 0x80065F08: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
L_80065F0C:
    // 0x80065F0C: lw          $v0, 0x6C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X6C);
    // 0x80065F10: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x80065F14: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x80065F18: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80065F1C: sb          $v1, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r3;
    // 0x80065F20: slti        $v0, $a0, 0x8
    ctx->r2 = SIGNED(ctx->r4) < 0X8 ? 1 : 0;
    // 0x80065F24: bne         $v0, $zero, L_80065F0C
    if (ctx->r2 != 0) {
        // 0x80065F28: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_80065F0C;
    }
    // 0x80065F28: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80065F2C: lw          $v0, 0x6C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X6C);
    // 0x80065F30: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80065F34: sw          $v0, 0x6C($a3)
    MEM_W(0X6C, ctx->r7) = ctx->r2;
    // 0x80065F38: jr          $ra
    // 0x80065F3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x80065F3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_80081688_5CA88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80081688: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8008168C: lhu         $v0, -0x72FC($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X72FC);
    // 0x80081690: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80081694: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80081698: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x8008169C: andi        $v1, $s3, 0xFFFF
    ctx->r3 = ctx->r19 & 0XFFFF;
    // 0x800816A0: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x800816A4: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x800816A8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800816AC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800816B0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800816B4: bne         $v0, $v1, L_800816C4
    if (ctx->r2 != ctx->r3) {
        // 0x800816B8: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_800816C4;
    }
    // 0x800816B8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800816BC: j           L_80081754
    // 0x800816C0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_80081754;
    // 0x800816C0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_800816C4:
    // 0x800816C4: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x800816C8: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x800816CC: addiu       $v0, $v0, 0x2DF4
    ctx->r2 = ADD32(ctx->r2, 0X2DF4);
    // 0x800816D0: addu        $s2, $v1, $v0
    ctx->r18 = ADD32(ctx->r3, ctx->r2);
    // 0x800816D4: lh          $a0, 0x4($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X4);
    // 0x800816D8: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x800816DC: addiu       $v1, $zero, -0x8
    ctx->r3 = ADD32(0, -0X8);
    // 0x800816E0: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x800816E4: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x800816E8: blez        $a0, L_80081748
    if (SIGNED(ctx->r4) <= 0) {
        // 0x800816EC: and         $s0, $v0, $v1
        ctx->r16 = ctx->r2 & ctx->r3;
            goto L_80081748;
    }
    // 0x800816EC: and         $s0, $v0, $v1
    ctx->r16 = ctx->r2 & ctx->r3;
    // 0x800816F0: addiu       $s5, $zero, -0x1
    ctx->r21 = ADD32(0, -0X1);
    // 0x800816F4: addiu       $s4, $zero, -0x8
    ctx->r20 = ADD32(0, -0X8);
L_800816F8:
    // 0x800816F8: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x800816FC: sll         $v0, $s1, 1
    ctx->r2 = S32(ctx->r17 << 1);
    // 0x80081700: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80081704: lh          $a0, 0x0($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X0);
    // 0x80081708: beq         $a0, $s5, L_80081734
    if (ctx->r4 == ctx->r21) {
        // 0x8008170C: nop
    
            goto L_80081734;
    }
    // 0x8008170C: nop

    // 0x80081710: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x80081714: addiu       $a1, $a1, -0x2090
    ctx->r5 = ADD32(ctx->r5, -0X2090);
    // 0x80081718: lui         $a2, 0x2D
    ctx->r6 = S32(0X2D << 16);
    // 0x8008171C: addiu       $a2, $a2, -0x53A0
    ctx->r6 = ADD32(ctx->r6, -0X53A0);
    // 0x80081720: jal         0x80028DE0
    // 0x80081724: addiu       $s0, $s0, 0x28
    ctx->r16 = ADD32(ctx->r16, 0X28);
    func_80028DE0_41E0(rdram, ctx);
        goto after_0;
    // 0x80081724: addiu       $s0, $s0, 0x28
    ctx->r16 = ADD32(ctx->r16, 0X28);
    after_0:
    // 0x80081728: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x8008172C: and         $v0, $v0, $s4
    ctx->r2 = ctx->r2 & ctx->r20;
    // 0x80081730: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
L_80081734:
    // 0x80081734: lh          $v0, 0x4($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X4);
    // 0x80081738: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8008173C: slt         $v0, $s1, $v0
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80081740: bne         $v0, $zero, L_800816F8
    if (ctx->r2 != 0) {
        // 0x80081744: nop
    
            goto L_800816F8;
    }
    // 0x80081744: nop

L_80081748:
    // 0x80081748: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x8008174C: sh          $s3, -0x72FC($at)
    MEM_H(-0X72FC, ctx->r1) = ctx->r19;
    // 0x80081750: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_80081754:
    // 0x80081754: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80081758: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8008175C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80081760: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80081764: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80081768: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8008176C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80081770: jr          $ra
    // 0x80081774: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80081774: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800874D0_628D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800874D0: sltiu       $v0, $a0, 0x2000
    ctx->r2 = ctx->r4 < 0X2000 ? 1 : 0;
    // 0x800874D4: beql        $v0, $zero, L_800874DC
    if (ctx->r2 == 0) {
        // 0x800874D8: addiu       $a0, $a0, -0x2000
        ctx->r4 = ADD32(ctx->r4, -0X2000);
            goto L_800874DC;
    }
    goto skip_0;
    // 0x800874D8: addiu       $a0, $a0, -0x2000
    ctx->r4 = ADD32(ctx->r4, -0X2000);
    skip_0:
L_800874DC:
    // 0x800874DC: sltiu       $v0, $a0, 0x1000
    ctx->r2 = ctx->r4 < 0X1000 ? 1 : 0;
    // 0x800874E0: bne         $v0, $zero, L_800874F0
    if (ctx->r2 != 0) {
        // 0x800874E4: addiu       $a3, $zero, 0xF0
        ctx->r7 = ADD32(0, 0XF0);
            goto L_800874F0;
    }
    // 0x800874E4: addiu       $a3, $zero, 0xF0
    ctx->r7 = ADD32(0, 0XF0);
    // 0x800874E8: addiu       $a3, $zero, 0x1F0
    ctx->r7 = ADD32(0, 0X1F0);
    // 0x800874EC: addiu       $a0, $a0, -0x1000
    ctx->r4 = ADD32(ctx->r4, -0X1000);
L_800874F0:
    // 0x800874F0: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x800874F4: srl         $v0, $a0, 8
    ctx->r2 = S32(U32(ctx->r4) >> 8);
    // 0x800874F8: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x800874FC: sh          $v1, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r3;
    // 0x80087500: jr          $ra
    // 0x80087504: sh          $a3, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r7;
    TRACE_RETURN()
    return;
    // 0x80087504: sh          $a3, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r7;
;}
RECOMP_FUNC void _Ldunscale(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800A2B3C: lhu         $v1, 0x0($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X0);
    // 0x800A2B40: andi        $v0, $v1, 0x7FF0
    ctx->r2 = ctx->r3 & 0X7FF0;
    // 0x800A2B44: srl         $a3, $v0, 4
    ctx->r7 = S32(U32(ctx->r2) >> 4);
    // 0x800A2B48: addu        $a2, $a3, $zero
    ctx->r6 = ADD32(ctx->r7, 0);
    // 0x800A2B4C: addiu       $v0, $zero, 0x7FF
    ctx->r2 = ADD32(0, 0X7FF);
    // 0x800A2B50: bne         $a2, $v0, L_800A2B98
    if (ctx->r6 != ctx->r2) {
        // 0x800A2B54: addu        $t0, $a1, $zero
        ctx->r8 = ADD32(ctx->r5, 0);
            goto L_800A2B98;
    }
    // 0x800A2B54: addu        $t0, $a1, $zero
    ctx->r8 = ADD32(ctx->r5, 0);
    // 0x800A2B58: sh          $zero, 0x0($a0)
    MEM_H(0X0, ctx->r4) = 0;
    // 0x800A2B5C: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x800A2B60: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x800A2B64: bne         $v0, $zero, L_800A2BCC
    if (ctx->r2 != 0) {
        // 0x800A2B68: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_800A2BCC;
    }
    // 0x800A2B68: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x800A2B6C: lhu         $v0, 0x2($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2);
    // 0x800A2B70: bne         $v0, $zero, L_800A2BCC
    if (ctx->r2 != 0) {
        // 0x800A2B74: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_800A2BCC;
    }
    // 0x800A2B74: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x800A2B78: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x800A2B7C: bne         $v0, $zero, L_800A2BCC
    if (ctx->r2 != 0) {
        // 0x800A2B80: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_800A2BCC;
    }
    // 0x800A2B80: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x800A2B84: lhu         $v0, 0x6($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X6);
    // 0x800A2B88: bne         $v0, $zero, L_800A2BCC
    if (ctx->r2 != 0) {
        // 0x800A2B8C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_800A2BCC;
    }
    // 0x800A2B8C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x800A2B90: j           L_800A2BCC
    // 0x800A2B94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800A2BCC;
    // 0x800A2B94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800A2B98:
    // 0x800A2B98: blez        $a2, L_800A2BB8
    if (SIGNED(ctx->r6) <= 0) {
        // 0x800A2B9C: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_800A2BB8;
    }
    // 0x800A2B9C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x800A2BA0: andi        $v1, $v1, 0x800F
    ctx->r3 = ctx->r3 & 0X800F;
    // 0x800A2BA4: ori         $v1, $v1, 0x3FF0
    ctx->r3 = ctx->r3 | 0X3FF0;
    // 0x800A2BA8: sh          $v1, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r3;
    // 0x800A2BAC: addiu       $v1, $a3, -0x3FE
    ctx->r3 = ADD32(ctx->r7, -0X3FE);
    // 0x800A2BB0: j           L_800A2BCC
    // 0x800A2BB4: sh          $v1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r3;
        goto L_800A2BCC;
    // 0x800A2BB4: sh          $v1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r3;
L_800A2BB8:
    // 0x800A2BB8: bltz        $a2, L_800A2BC8
    if (SIGNED(ctx->r6) < 0) {
        // 0x800A2BBC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_800A2BC8;
    }
    // 0x800A2BBC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x800A2BC0: j           L_800A2BCC
    // 0x800A2BC4: sh          $zero, 0x0($a0)
    MEM_H(0X0, ctx->r4) = 0;
        goto L_800A2BCC;
    // 0x800A2BC4: sh          $zero, 0x0($a0)
    MEM_H(0X0, ctx->r4) = 0;
L_800A2BC8:
    // 0x800A2BC8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_800A2BCC:
    // 0x800A2BCC: jr          $ra
    // 0x800A2BD0: nop

    TRACE_RETURN()
    return;
    // 0x800A2BD0: nop

;}
RECOMP_FUNC void func_800923A0_6D7A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800923A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800923A4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x800923A8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x800923AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800923B0: jal         0x80094460
    // 0x800923B4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osSetIntMask_recomp(rdram, ctx);
        goto after_0;
    // 0x800923B4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x800923B8: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x800923BC: addiu       $a2, $a2, 0x5718
    ctx->r6 = ADD32(ctx->r6, 0X5718);
    // 0x800923C0: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x800923C4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x800923C8: beq         $v1, $zero, L_80092404
    if (ctx->r3 == 0) {
        // 0x800923CC: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_80092404;
    }
    // 0x800923CC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
L_800923D0:
    // 0x800923D0: bnel        $v1, $s0, L_800923F8
    if (ctx->r3 != ctx->r16) {
        // 0x800923D4: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_800923F8;
    }
    goto skip_0;
    // 0x800923D4: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    skip_0:
    // 0x800923D8: beq         $a1, $zero, L_800923EC
    if (ctx->r5 == 0) {
        // 0x800923DC: nop
    
            goto L_800923EC;
    }
    // 0x800923DC: nop

    // 0x800923E0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800923E4: j           L_80092404
    // 0x800923E8: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
        goto L_80092404;
    // 0x800923E8: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
L_800923EC:
    // 0x800923EC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800923F0: j           L_80092404
    // 0x800923F4: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
        goto L_80092404;
    // 0x800923F4: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
L_800923F8:
    // 0x800923F8: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x800923FC: bne         $v1, $zero, L_800923D0
    if (ctx->r3 != 0) {
        // 0x80092400: nop
    
            goto L_800923D0;
    }
    // 0x80092400: nop

L_80092404:
    // 0x80092404: jal         0x80094460
    // 0x80092408: nop

    osSetIntMask_recomp(rdram, ctx);
        goto after_1;
    // 0x80092408: nop

    after_1:
    // 0x8009240C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80092410: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80092414: jr          $ra
    // 0x80092418: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80092418: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8006ABE0_45FE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006ABE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006ABE4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8006ABE8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8006ABEC: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x8006ABF0: sra         $v0, $v0, 13
    ctx->r2 = S32(SIGNED(ctx->r2) >> 13);
    // 0x8006ABF4: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x8006ABF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006ABFC: lhu         $a0, 0x144($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X144);
    // 0x8006AC00: lhu         $a3, 0x11C($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X11C);
    // 0x8006AC04: lhu         $a2, 0x146($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0X146);
    // 0x8006AC08: andi        $v0, $a3, 0xFFFF
    ctx->r2 = ctx->r7 & 0XFFFF;
    // 0x8006AC0C: and         $v1, $v0, $a0
    ctx->r3 = ctx->r2 & ctx->r4;
    // 0x8006AC10: beql        $v1, $zero, L_8006AC78
    if (ctx->r3 == 0) {
        // 0x8006AC14: sll         $v0, $a1, 16
        ctx->r2 = S32(ctx->r5 << 16);
            goto L_8006AC78;
    }
    goto skip_0;
    // 0x8006AC14: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    skip_0:
    // 0x8006AC18: beq         $v1, $a0, L_8006AC74
    if (ctx->r3 == ctx->r4) {
        // 0x8006AC1C: and         $v0, $v0, $a2
        ctx->r2 = ctx->r2 & ctx->r6;
            goto L_8006AC74;
    }
    // 0x8006AC1C: and         $v0, $v0, $a2
    ctx->r2 = ctx->r2 & ctx->r6;
    // 0x8006AC20: beq         $v0, $zero, L_8006AC50
    if (ctx->r2 == 0) {
        // 0x8006AC24: nop
    
            goto L_8006AC50;
    }
    // 0x8006AC24: nop

    // 0x8006AC28: lhu         $v0, 0x44($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X44);
    // 0x8006AC2C: addiu       $v0, $v0, 0x28
    ctx->r2 = ADD32(ctx->r2, 0X28);
    // 0x8006AC30: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8006AC34: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8006AC38: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8006AC3C: slti        $v0, $v0, 0x281
    ctx->r2 = SIGNED(ctx->r2) < 0X281 ? 1 : 0;
    // 0x8006AC40: bne         $v0, $zero, L_8006AC78
    if (ctx->r2 != 0) {
        // 0x8006AC44: sll         $v0, $a1, 16
        ctx->r2 = S32(ctx->r5 << 16);
            goto L_8006AC78;
    }
    // 0x8006AC44: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x8006AC48: j           L_8006AC70
    // 0x8006AC4C: addiu       $v0, $zero, 0x280
    ctx->r2 = ADD32(0, 0X280);
        goto L_8006AC70;
    // 0x8006AC4C: addiu       $v0, $zero, 0x280
    ctx->r2 = ADD32(0, 0X280);
L_8006AC50:
    // 0x8006AC50: lhu         $v0, 0x44($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X44);
    // 0x8006AC54: addiu       $v0, $v0, -0x28
    ctx->r2 = ADD32(ctx->r2, -0X28);
    // 0x8006AC58: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8006AC5C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8006AC60: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8006AC64: slti        $v0, $v0, -0x280
    ctx->r2 = SIGNED(ctx->r2) < -0X280 ? 1 : 0;
    // 0x8006AC68: beq         $v0, $zero, L_8006AC74
    if (ctx->r2 == 0) {
        // 0x8006AC6C: addiu       $v0, $zero, -0x280
        ctx->r2 = ADD32(0, -0X280);
            goto L_8006AC74;
    }
    // 0x8006AC6C: addiu       $v0, $zero, -0x280
    ctx->r2 = ADD32(0, -0X280);
L_8006AC70:
    // 0x8006AC70: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
L_8006AC74:
    // 0x8006AC74: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
L_8006AC78:
    // 0x8006AC78: sra         $v0, $v0, 13
    ctx->r2 = S32(SIGNED(ctx->r2) >> 13);
    // 0x8006AC7C: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8006AC80: lhu         $a0, 0x148($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X148);
    // 0x8006AC84: lhu         $a2, 0x14A($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0X14A);
    // 0x8006AC88: andi        $v0, $a3, 0xFFFF
    ctx->r2 = ctx->r7 & 0XFFFF;
    // 0x8006AC8C: and         $v1, $v0, $a0
    ctx->r3 = ctx->r2 & ctx->r4;
    // 0x8006AC90: beql        $v1, $zero, L_8006AD04
    if (ctx->r3 == 0) {
        // 0x8006AC94: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8006AD04;
    }
    goto skip_1;
    // 0x8006AC94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_1:
    // 0x8006AC98: beq         $v1, $a0, L_8006ACFC
    if (ctx->r3 == ctx->r4) {
        // 0x8006AC9C: and         $v0, $v0, $a2
        ctx->r2 = ctx->r2 & ctx->r6;
            goto L_8006ACFC;
    }
    // 0x8006AC9C: and         $v0, $v0, $a2
    ctx->r2 = ctx->r2 & ctx->r6;
    // 0x8006ACA0: beq         $v0, $zero, L_8006ACD0
    if (ctx->r2 == 0) {
        // 0x8006ACA4: nop
    
            goto L_8006ACD0;
    }
    // 0x8006ACA4: nop

    // 0x8006ACA8: lhu         $v0, 0x48($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X48);
    // 0x8006ACAC: addiu       $v0, $v0, -0x20
    ctx->r2 = ADD32(ctx->r2, -0X20);
    // 0x8006ACB0: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
    // 0x8006ACB4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8006ACB8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8006ACBC: slti        $v0, $v0, -0x100
    ctx->r2 = SIGNED(ctx->r2) < -0X100 ? 1 : 0;
    // 0x8006ACC0: beq         $v0, $zero, L_8006AD00
    if (ctx->r2 == 0) {
        // 0x8006ACC4: addiu       $v0, $zero, -0x100
        ctx->r2 = ADD32(0, -0X100);
            goto L_8006AD00;
    }
    // 0x8006ACC4: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
    // 0x8006ACC8: j           L_8006AD00
    // 0x8006ACCC: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
        goto L_8006AD00;
    // 0x8006ACCC: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
L_8006ACD0:
    // 0x8006ACD0: lhu         $v0, 0x48($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X48);
    // 0x8006ACD4: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x8006ACD8: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
    // 0x8006ACDC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8006ACE0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8006ACE4: slti        $v0, $v0, 0x101
    ctx->r2 = SIGNED(ctx->r2) < 0X101 ? 1 : 0;
    // 0x8006ACE8: bnel        $v0, $zero, L_8006AD04
    if (ctx->r2 != 0) {
        // 0x8006ACEC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8006AD04;
    }
    goto skip_2;
    // 0x8006ACEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_2:
    // 0x8006ACF0: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x8006ACF4: j           L_8006AD00
    // 0x8006ACF8: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
        goto L_8006AD00;
    // 0x8006ACF8: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
L_8006ACFC:
    // 0x8006ACFC: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
L_8006AD00:
    // 0x8006AD00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8006AD04:
    // 0x8006AD04: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8006AD08: jal         0x8006FDAC
    // 0x8006AD0C: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    func_8006FDAC_4B1AC(rdram, ctx);
        goto after_0;
    // 0x8006AD0C: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_0:
    // 0x8006AD10: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8006AD14: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8006AD18: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x8006AD1C: jal         0x8006FC34
    // 0x8006AD20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8006FC34_4B034(rdram, ctx);
        goto after_1;
    // 0x8006AD20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8006AD24: lb          $v0, 0x74($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X74);
    // 0x8006AD28: bne         $v0, $zero, L_8006AD74
    if (ctx->r2 != 0) {
        // 0x8006AD2C: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_8006AD74;
    }
    // 0x8006AD2C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8006AD30: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8006AD34: bne         $v1, $v0, L_8006AD44
    if (ctx->r3 != ctx->r2) {
        // 0x8006AD38: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8006AD44;
    }
    // 0x8006AD38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006AD3C: j           L_8006AD48
    // 0x8006AD40: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
        goto L_8006AD48;
    // 0x8006AD40: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
L_8006AD44:
    // 0x8006AD44: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
L_8006AD48:
    // 0x8006AD48: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8006AD4C: jal         0x8006FB90
    // 0x8006AD50: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8006FB90_4AF90(rdram, ctx);
        goto after_2;
    // 0x8006AD50: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x8006AD54: addiu       $a0, $zero, 0x93
    ctx->r4 = ADD32(0, 0X93);
    // 0x8006AD58: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8006AD5C: jal         0x8002A2F8
    // 0x8006AD60: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_3;
    // 0x8006AD60: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x8006AD64: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8006AD68: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8006AD6C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8006AD70: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8006AD74:
    // 0x8006AD74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006AD78: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8006AD7C: jr          $ra
    // 0x8006AD80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8006AD80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80050FFC_2C3FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80050FFC: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x80051000: sw          $s2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r18;
    // 0x80051004: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80051008: sw          $ra, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r31;
    // 0x8005100C: sw          $s3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r19;
    // 0x80051010: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    // 0x80051014: sw          $s0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r16;
    // 0x80051018: lh          $v0, 0x0($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X0);
    // 0x8005101C: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80051020: lbu         $v1, 0xB61($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0XB61);
    // 0x80051024: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x80051028: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x8005102C: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x80051030: sh          $v0, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r2;
    // 0x80051034: lh          $v0, 0x2($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X2);
    // 0x80051038: lui         $s3, 0x8021
    ctx->r19 = S32(0X8021 << 16);
    // 0x8005103C: addiu       $s3, $s3, 0x990
    ctx->r19 = ADD32(ctx->r19, 0X990);
    // 0x80051040: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80051044: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x80051048: sh          $v0, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = ctx->r2;
    // 0x8005104C: lh          $v0, 0x4($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X4);
    // 0x80051050: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x80051054: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    // 0x80051058: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x8005105C: jal         0x800308E8
    // 0x80051060: sh          $v0, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = ctx->r2;
    func_800308E8_BCE8(rdram, ctx);
        goto after_0;
    // 0x80051060: sh          $v0, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = ctx->r2;
    after_0:
    // 0x80051064: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80051068: addiu       $s0, $sp, 0x40
    ctx->r16 = ADD32(ctx->r29, 0X40);
    // 0x8005106C: jal         0x80031428
    // 0x80051070: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031428_C828(rdram, ctx);
        goto after_1;
    // 0x80051070: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80051074: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80051078: jal         0x8003077C
    // 0x8005107C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8003077C_BB7C(rdram, ctx);
        goto after_2;
    // 0x8005107C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80051080: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x80051084: lw          $a1, 0x9A4($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X9A4);
    // 0x80051088: lw          $a0, 0x10($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X10);
    // 0x8005108C: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80051090: lw          $v0, 0x9A8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9A8);
    // 0x80051094: lw          $a2, 0x14($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X14);
    // 0x80051098: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8005109C: lw          $v1, 0x9AC($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X9AC);
    // 0x800510A0: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x800510A4: sll         $s0, $s1, 5
    ctx->r16 = S32(ctx->r17 << 5);
    // 0x800510A8: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x800510AC: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x800510B0: addu        $v1, $v1, $a3
    ctx->r3 = ADD32(ctx->r3, ctx->r7);
    // 0x800510B4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x800510B8: sw          $a1, 0x9A4($at)
    MEM_W(0X9A4, ctx->r1) = ctx->r5;
    // 0x800510BC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x800510C0: sw          $v0, 0x9A8($at)
    MEM_W(0X9A8, ctx->r1) = ctx->r2;
    // 0x800510C4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x800510C8: sw          $v1, 0x9AC($at)
    MEM_W(0X9AC, ctx->r1) = ctx->r3;
    // 0x800510CC: lh          $v1, 0x14($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X14);
    // 0x800510D0: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x800510D4: lbu         $a2, 0xB61($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0XB61);
    // 0x800510D8: sll         $s1, $s1, 3
    ctx->r17 = S32(ctx->r17 << 3);
    // 0x800510DC: addu        $s1, $s2, $s1
    ctx->r17 = ADD32(ctx->r18, ctx->r17);
    // 0x800510E0: sllv        $v1, $v1, $a2
    ctx->r3 = S32(ctx->r3 << (ctx->r6 & 31));
    // 0x800510E4: sh          $v1, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r3;
    // 0x800510E8: lh          $v0, 0x16($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X16);
    // 0x800510EC: addu        $a0, $s0, $s2
    ctx->r4 = ADD32(ctx->r16, ctx->r18);
    // 0x800510F0: addiu       $a0, $a0, 0x1C8
    ctx->r4 = ADD32(ctx->r4, 0X1C8);
    // 0x800510F4: sllv        $v0, $v0, $a2
    ctx->r2 = S32(ctx->r2 << (ctx->r6 & 31));
    // 0x800510F8: sh          $v0, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = ctx->r2;
    // 0x800510FC: lh          $v0, 0x18($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X18);
    // 0x80051100: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80051104: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80051108: sllv        $v0, $v0, $a2
    ctx->r2 = S32(ctx->r2 << (ctx->r6 & 31));
    // 0x8005110C: sh          $v0, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = ctx->r2;
    // 0x80051110: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x80051114: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80051118: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8005111C: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x80051120: sra         $a1, $a1, 3
    ctx->r5 = S32(SIGNED(ctx->r5) >> 3);
    // 0x80051124: sh          $a1, 0x3A8($s1)
    MEM_H(0X3A8, ctx->r17) = ctx->r5;
    // 0x80051128: lh          $a2, 0x3A($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X3A);
    // 0x8005112C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80051130: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80051134: lw          $v0, 0x9A8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9A8);
    // 0x80051138: sll         $v1, $a2, 3
    ctx->r3 = S32(ctx->r6 << 3);
    // 0x8005113C: subu        $v1, $v1, $a2
    ctx->r3 = SUB32(ctx->r3, ctx->r6);
    // 0x80051140: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80051144: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80051148: sra         $v0, $v0, 3
    ctx->r2 = S32(SIGNED(ctx->r2) >> 3);
    // 0x8005114C: sh          $v0, 0x3AA($s1)
    MEM_H(0X3AA, ctx->r17) = ctx->r2;
    // 0x80051150: lh          $a3, 0x3C($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X3C);
    // 0x80051154: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x80051158: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x8005115C: lw          $v0, 0x9AC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X9AC);
    // 0x80051160: sll         $v1, $a3, 3
    ctx->r3 = S32(ctx->r7 << 3);
    // 0x80051164: subu        $v1, $v1, $a3
    ctx->r3 = SUB32(ctx->r3, ctx->r7);
    // 0x80051168: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005116C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80051170: sra         $v0, $v0, 3
    ctx->r2 = S32(SIGNED(ctx->r2) >> 3);
    // 0x80051174: jal         0x8009A3B4
    // 0x80051178: sh          $v0, 0x3AC($s1)
    MEM_H(0X3AC, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80051178: sh          $v0, 0x3AC($s1)
    MEM_H(0X3AC, ctx->r17) = ctx->r2;
    after_3:
    // 0x8005117C: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80051180: lbu         $v1, 0xB61($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0XB61);
    // 0x80051184: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80051188: lw          $v0, -0x1B80($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1B80);
    // 0x8005118C: addiu       $s0, $s0, 0x1C8
    ctx->r16 = ADD32(ctx->r16, 0X1C8);
    // 0x80051190: addu        $a0, $s2, $s0
    ctx->r4 = ADD32(ctx->r18, ctx->r16);
    // 0x80051194: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80051198: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x8005119C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x800511A0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800511A4: jal         0x80031DA8
    // 0x800511A8: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_4;
    // 0x800511A8: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    after_4:
    // 0x800511AC: lw          $ra, 0x70($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X70);
    // 0x800511B0: lw          $s3, 0x6C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X6C);
    // 0x800511B4: lw          $s2, 0x68($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X68);
    // 0x800511B8: lw          $s1, 0x64($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X64);
    // 0x800511BC: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x800511C0: jr          $ra
    // 0x800511C4: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    TRACE_RETURN()
    return;
    // 0x800511C4: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_8006027C_3B67C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006027C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80060280: addiu       $v1, $v1, -0x3BC5
    ctx->r3 = ADD32(ctx->r3, -0X3BC5);
    // 0x80060284: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80060288: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8006028C: jr          $ra
    // 0x80060290: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80060290: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
;}
RECOMP_FUNC void func_8002E8FC_9CFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002E8FC: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8002E900: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8002E904: lui         $s2, 0x8022
    ctx->r18 = S32(0X8022 << 16);
    // 0x8002E908: lw          $s2, -0x26F0($s2)
    ctx->r18 = MEM_W(ctx->r18, -0X26F0);
    // 0x8002E90C: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x8002E910: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x8002E914: sw          $ra, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r31;
    // 0x8002E918: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x8002E91C: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x8002E920: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8002E924: beq         $s2, $zero, L_8002ED60
    if (ctx->r18 == 0) {
        // 0x8002E928: sw          $s0, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r16;
            goto L_8002ED60;
    }
    // 0x8002E928: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8002E92C: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x8002E930: beq         $a0, $zero, L_8002ED60
    if (ctx->r4 == 0) {
        // 0x8002E934: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_8002ED60;
    }
    // 0x8002E934: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8002E938: lh          $a1, 0xA($s4)
    ctx->r5 = MEM_H(ctx->r20, 0XA);
    // 0x8002E93C: addu        $v1, $s2, $zero
    ctx->r3 = ADD32(ctx->r18, 0);
L_8002E940:
    // 0x8002E940: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x8002E944: addu        $s5, $s2, $v0
    ctx->r21 = ADD32(ctx->r18, ctx->r2);
    // 0x8002E948: lw          $v0, 0x4($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X4);
    // 0x8002E94C: beq         $v0, $a1, L_8002E96C
    if (ctx->r2 == ctx->r5) {
        // 0x8002E950: nop
    
            goto L_8002E96C;
    }
    // 0x8002E950: nop

    // 0x8002E954: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8002E958: sltu        $v0, $s1, $a0
    ctx->r2 = ctx->r17 < ctx->r4 ? 1 : 0;
    // 0x8002E95C: bne         $v0, $zero, L_8002E940
    if (ctx->r2 != 0) {
        // 0x8002E960: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_8002E940;
    }
    // 0x8002E960: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8002E964: j           L_8002ED60
    // 0x8002E968: nop

        goto L_8002ED60;
    // 0x8002E968: nop

L_8002E96C:
    // 0x8002E96C: lw          $s0, 0xC($s4)
    ctx->r16 = MEM_W(ctx->r20, 0XC);
    // 0x8002E970: lh          $a1, 0x8($s4)
    ctx->r5 = MEM_H(ctx->r20, 0X8);
    // 0x8002E974: jal         0x8002E6B4
    // 0x8002E978: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002E6B4_9AB4(rdram, ctx);
        goto after_0;
    // 0x8002E978: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8002E97C: jal         0x8002CD50
    // 0x8002E980: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002CD50_8150(rdram, ctx);
        goto after_1;
    // 0x8002E980: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8002E984: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8002E988: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8002E98C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8002E990: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8002E994: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8002E998: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8002E99C: sw          $zero, -0xC94($at)
    MEM_W(-0XC94, ctx->r1) = 0;
    // 0x8002E9A0: jal         0x8002D08C
    // 0x8002E9A4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8002D08C_848C(rdram, ctx);
        goto after_2;
    // 0x8002E9A4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_2:
    // 0x8002E9A8: lh          $v0, 0x8($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X8);
    // 0x8002E9AC: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x8002E9B0: beq         $v0, $zero, L_8002ED60
    if (ctx->r2 == 0) {
        // 0x8002E9B4: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_8002ED60;
    }
    // 0x8002E9B4: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8002E9B8: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
L_8002E9BC:
    // 0x8002E9BC: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8002E9C0: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x8002E9C4: lw          $s0, -0x1390($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X1390);
    // 0x8002E9C8: lui         $v1, 0x8016
    ctx->r3 = S32(0X8016 << 16);
    // 0x8002E9CC: lhu         $v1, 0x2710($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X2710);
    // 0x8002E9D0: lhu         $v0, 0xE($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XE);
    // 0x8002E9D4: beq         $v1, $v0, L_8002EA00
    if (ctx->r3 == ctx->r2) {
        // 0x8002E9D8: nop
    
            goto L_8002EA00;
    }
    // 0x8002E9D8: nop

    // 0x8002E9DC: jal         0x8002CD50
    // 0x8002E9E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002CD50_8150(rdram, ctx);
        goto after_3;
    // 0x8002E9E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8002E9E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8002E9E8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8002E9EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8002E9F0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8002E9F4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8002E9F8: jal         0x8002D08C
    // 0x8002E9FC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8002D08C_848C(rdram, ctx);
        goto after_4;
    // 0x8002E9FC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
L_8002EA00:
    // 0x8002EA00: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8002EA04: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8002EA08: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x8002EA0C: addu        $t0, $s5, $v0
    ctx->r8 = ADD32(ctx->r21, ctx->r2);
    // 0x8002EA10: lw          $v0, 0x4($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X4);
    // 0x8002EA14: addu        $t1, $s2, $v0
    ctx->r9 = ADD32(ctx->r18, ctx->r2);
    // 0x8002EA18: beq         $t1, $s3, L_8002EBD8
    if (ctx->r9 == ctx->r19) {
        // 0x8002EA1C: lui         $a0, 0x708
        ctx->r4 = S32(0X708 << 16);
            goto L_8002EBD8;
    }
    // 0x8002EA1C: lui         $a0, 0x708
    ctx->r4 = S32(0X708 << 16);
    // 0x8002EA20: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8002EA24: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x8002EA28: ori         $a0, $a0, 0x200
    ctx->r4 = ctx->r4 | 0X200;
    // 0x8002EA2C: lui         $v0, 0xFD50
    ctx->r2 = S32(0XFD50 << 16);
    // 0x8002EA30: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x8002EA34: lui         $v0, 0xF550
    ctx->r2 = S32(0XF550 << 16);
    // 0x8002EA38: sw          $v0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r2;
    // 0x8002EA3C: lui         $v0, 0xE600
    ctx->r2 = S32(0XE600 << 16);
    // 0x8002EA40: sw          $v0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r2;
    // 0x8002EA44: lui         $v0, 0xF300
    ctx->r2 = S32(0XF300 << 16);
    // 0x8002EA48: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x8002EA4C: sw          $a0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r4;
    // 0x8002EA50: sw          $zero, 0x14($v1)
    MEM_W(0X14, ctx->r3) = 0;
    // 0x8002EA54: sw          $v0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r2;
    // 0x8002EA58: lh          $a0, 0xC($t0)
    ctx->r4 = MEM_H(ctx->r8, 0XC);
    // 0x8002EA5C: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x8002EA60: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002EA64: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002EA68: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
    // 0x8002EA6C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002EA70: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002EA74: addiu       $v0, $v1, 0x18
    ctx->r2 = ADD32(ctx->r3, 0X18);
    // 0x8002EA78: addiu       $v1, $v1, 0x20
    ctx->r3 = ADD32(ctx->r3, 0X20);
    // 0x8002EA7C: addu        $t2, $v0, $zero
    ctx->r10 = ADD32(ctx->r2, 0);
    // 0x8002EA80: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002EA84: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002EA88: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002EA8C: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x8002EA90: bgez        $a0, L_8002EA9C
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8002EA94: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_8002EA9C;
    }
    // 0x8002EA94: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x8002EA98: addiu       $v1, $a0, 0xF
    ctx->r3 = ADD32(ctx->r4, 0XF);
L_8002EA9C:
    // 0x8002EA9C: sra         $v0, $v1, 4
    ctx->r2 = S32(SIGNED(ctx->r3) >> 4);
    // 0x8002EAA0: blez        $v0, L_8002EAAC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8002EAA4: addiu       $a2, $zero, 0x800
        ctx->r6 = ADD32(0, 0X800);
            goto L_8002EAAC;
    }
    // 0x8002EAA4: addiu       $a2, $zero, 0x800
    ctx->r6 = ADD32(0, 0X800);
    // 0x8002EAA8: addiu       $a2, $v0, 0x7FF
    ctx->r6 = ADD32(ctx->r2, 0X7FF);
L_8002EAAC:
    // 0x8002EAAC: lh          $a0, 0xC($t0)
    ctx->r4 = MEM_H(ctx->r8, 0XC);
    // 0x8002EAB0: lh          $v0, 0xE($t0)
    ctx->r2 = MEM_H(ctx->r8, 0XE);
    // 0x8002EAB4: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002EAB8: mflo        $v0
    ctx->r2 = lo;
    // 0x8002EABC: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x8002EAC0: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
    // 0x8002EAC4: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x8002EAC8: slti        $v0, $v1, 0x800
    ctx->r2 = SIGNED(ctx->r3) < 0X800 ? 1 : 0;
    // 0x8002EACC: beql        $v0, $zero, L_8002EAD4
    if (ctx->r2 == 0) {
        // 0x8002EAD0: addiu       $v1, $zero, 0x7FF
        ctx->r3 = ADD32(0, 0X7FF);
            goto L_8002EAD4;
    }
    goto skip_0;
    // 0x8002EAD0: addiu       $v1, $zero, 0x7FF
    ctx->r3 = ADD32(0, 0X7FF);
    skip_0:
L_8002EAD4:
    // 0x8002EAD4: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8002EAD8: andi        $v0, $v1, 0xFFF
    ctx->r2 = ctx->r3 & 0XFFF;
    // 0x8002EADC: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x8002EAE0: lui         $v1, 0x700
    ctx->r3 = S32(0X700 << 16);
    // 0x8002EAE4: bgez        $a0, L_8002EAF0
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8002EAE8: or          $a3, $v0, $v1
        ctx->r7 = ctx->r2 | ctx->r3;
            goto L_8002EAF0;
    }
    // 0x8002EAE8: or          $a3, $v0, $v1
    ctx->r7 = ctx->r2 | ctx->r3;
    // 0x8002EAEC: addiu       $a1, $a0, 0xF
    ctx->r5 = ADD32(ctx->r4, 0XF);
L_8002EAF0:
    // 0x8002EAF0: sra         $v0, $a1, 4
    ctx->r2 = S32(SIGNED(ctx->r5) >> 4);
    // 0x8002EAF4: blezl       $v0, L_8002EB2C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8002EAF8: andi        $v0, $a2, 0xFFF
        ctx->r2 = ctx->r6 & 0XFFF;
            goto L_8002EB2C;
    }
    goto skip_1;
    // 0x8002EAF8: andi        $v0, $a2, 0xFFF
    ctx->r2 = ctx->r6 & 0XFFF;
    skip_1:
    // 0x8002EAFC: div         $zero, $a2, $v0
    lo = S32(S64(S32(ctx->r6)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r6)) % S64(S32(ctx->r2)));
    // 0x8002EB00: bne         $v0, $zero, L_8002EB0C
    if (ctx->r2 != 0) {
        // 0x8002EB04: nop
    
            goto L_8002EB0C;
    }
    // 0x8002EB04: nop

    // 0x8002EB08: break       7
    do_break(2147674888);
L_8002EB0C:
    // 0x8002EB0C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8002EB10: bne         $v0, $at, L_8002EB24
    if (ctx->r2 != ctx->r1) {
        // 0x8002EB14: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8002EB24;
    }
    // 0x8002EB14: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8002EB18: bne         $a2, $at, L_8002EB24
    if (ctx->r6 != ctx->r1) {
        // 0x8002EB1C: nop
    
            goto L_8002EB24;
    }
    // 0x8002EB1C: nop

    // 0x8002EB20: break       6
    do_break(2147674912);
L_8002EB24:
    // 0x8002EB24: mflo        $v0
    ctx->r2 = lo;
    // 0x8002EB28: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
L_8002EB2C:
    // 0x8002EB2C: or          $v0, $a3, $v0
    ctx->r2 = ctx->r7 | ctx->r2;
    // 0x8002EB30: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8002EB34: lw          $a0, -0x6F10($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X6F10);
    // 0x8002EB38: sw          $v0, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r2;
    // 0x8002EB3C: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x8002EB40: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x8002EB44: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x8002EB48: lhu         $v0, 0xC($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0XC);
    // 0x8002EB4C: lui         $v1, 0x8
    ctx->r3 = S32(0X8 << 16);
    // 0x8002EB50: ori         $v1, $v1, 0x200
    ctx->r3 = ctx->r3 | 0X200;
    // 0x8002EB54: sw          $v1, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r3;
    // 0x8002EB58: lui         $v1, 0xF200
    ctx->r3 = S32(0XF200 << 16);
    // 0x8002EB5C: sw          $v1, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r3;
    // 0x8002EB60: lui         $v1, 0xF540
    ctx->r3 = S32(0XF540 << 16);
    // 0x8002EB64: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8002EB68: sra         $v0, $v0, 17
    ctx->r2 = S32(SIGNED(ctx->r2) >> 17);
    // 0x8002EB6C: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x8002EB70: sra         $v0, $v0, 3
    ctx->r2 = S32(SIGNED(ctx->r2) >> 3);
    // 0x8002EB74: andi        $v0, $v0, 0x1FF
    ctx->r2 = ctx->r2 & 0X1FF;
    // 0x8002EB78: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x8002EB7C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8002EB80: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x8002EB84: lh          $v1, 0xC($t0)
    ctx->r3 = MEM_H(ctx->r8, 0XC);
    // 0x8002EB88: addu        $s3, $t1, $zero
    ctx->r19 = ADD32(ctx->r9, 0);
    // 0x8002EB8C: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    // 0x8002EB90: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002EB94: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002EB98: addiu       $v0, $a0, 0x10
    ctx->r2 = ADD32(ctx->r4, 0X10);
    // 0x8002EB9C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002EBA0: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002EBA4: addiu       $v0, $a0, 0x18
    ctx->r2 = ADD32(ctx->r4, 0X18);
    // 0x8002EBA8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002EBAC: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8002EBB0: lh          $v0, 0xE($t0)
    ctx->r2 = MEM_H(ctx->r8, 0XE);
    // 0x8002EBB4: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8002EBB8: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8002EBBC: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8002EBC0: sll         $v1, $v1, 12
    ctx->r3 = S32(ctx->r3 << 12);
    // 0x8002EBC4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8002EBC8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8002EBCC: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8002EBD0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8002EBD4: sw          $v1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r3;
L_8002EBD8:
    // 0x8002EBD8: lhu         $a0, 0x8($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X8);
    // 0x8002EBDC: lhu         $v0, 0xC($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0XC);
    // 0x8002EBE0: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x8002EBE4: lw          $a1, -0x6F10($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X6F10);
    // 0x8002EBE8: lhu         $v1, 0xA($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XA);
    // 0x8002EBEC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8002EBF0: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x8002EBF4: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x8002EBF8: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x8002EBFC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8002EC00: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
    // 0x8002EC04: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x8002EC08: and         $a0, $a0, $v0
    ctx->r4 = ctx->r4 & ctx->r2;
    // 0x8002EC0C: lhu         $v0, 0xE($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0XE);
    // 0x8002EC10: andi        $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 & 0XFFF;
    // 0x8002EC14: sll         $a0, $a0, 12
    ctx->r4 = S32(ctx->r4 << 12);
    // 0x8002EC18: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8002EC1C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8002EC20: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8002EC24: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8002EC28: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8002EC2C: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
    // 0x8002EC30: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x8002EC34: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8002EC38: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8002EC3C: lui         $v0, 0xE400
    ctx->r2 = S32(0XE400 << 16);
    // 0x8002EC40: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8002EC44: or          $a0, $a0, $v1
    ctx->r4 = ctx->r4 | ctx->r3;
    // 0x8002EC48: sw          $a0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r4;
    // 0x8002EC4C: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x8002EC50: lhu         $a0, 0xA($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XA);
    // 0x8002EC54: lui         $v1, 0xE100
    ctx->r3 = S32(0XE100 << 16);
    // 0x8002EC58: sw          $v1, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r3;
    // 0x8002EC5C: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x8002EC60: sll         $v0, $v0, 18
    ctx->r2 = S32(ctx->r2 << 18);
    // 0x8002EC64: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8002EC68: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
    // 0x8002EC6C: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x8002EC70: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8002EC74: andi        $v1, $v1, 0xFFC
    ctx->r3 = ctx->r3 & 0XFFC;
    // 0x8002EC78: sll         $v1, $v1, 12
    ctx->r3 = S32(ctx->r3 << 12);
    // 0x8002EC7C: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x8002EC80: sll         $a0, $a0, 18
    ctx->r4 = S32(ctx->r4 << 18);
    // 0x8002EC84: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8002EC88: nor         $a0, $zero, $a0
    ctx->r4 = ~(0 | ctx->r4);
    // 0x8002EC8C: sra         $a0, $a0, 31
    ctx->r4 = S32(SIGNED(ctx->r4) >> 31);
    // 0x8002EC90: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x8002EC94: andi        $v0, $v0, 0xFFC
    ctx->r2 = ctx->r2 & 0XFFC;
    // 0x8002EC98: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8002EC9C: sw          $v1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r3;
    // 0x8002ECA0: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x8002ECA4: addiu       $v1, $a1, 0x8
    ctx->r3 = ADD32(ctx->r5, 0X8);
    // 0x8002ECA8: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x8002ECAC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002ECB0: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x8002ECB4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002ECB8: sw          $a1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r5;
    // 0x8002ECBC: sll         $v0, $v0, 18
    ctx->r2 = S32(ctx->r2 << 18);
    // 0x8002ECC0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8002ECC4: bgez        $v0, L_8002ECE8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8002ECC8: addu        $a2, $v1, $zero
        ctx->r6 = ADD32(ctx->r3, 0);
            goto L_8002ECE8;
    }
    // 0x8002ECC8: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x8002ECCC: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x8002ECD0: slti        $v0, $v1, 0x1
    ctx->r2 = SIGNED(ctx->r3) < 0X1 ? 1 : 0;
    // 0x8002ECD4: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8002ECD8: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8002ECDC: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    // 0x8002ECE0: j           L_8002ECEC
    // 0x8002ECE4: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
        goto L_8002ECEC;
    // 0x8002ECE4: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
L_8002ECE8:
    // 0x8002ECE8: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_8002ECEC:
    // 0x8002ECEC: lh          $v0, 0xA($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XA);
    // 0x8002ECF0: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x8002ECF4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8002ECF8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8002ECFC: bgez        $v0, L_8002ED20
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8002ED00: sll         $v0, $v1, 18
        ctx->r2 = S32(ctx->r3 << 18);
            goto L_8002ED20;
    }
    // 0x8002ED00: sll         $v0, $v1, 18
    ctx->r2 = S32(ctx->r3 << 18);
    // 0x8002ED04: sra         $v0, $v0, 13
    ctx->r2 = S32(SIGNED(ctx->r2) >> 13);
    // 0x8002ED08: slti        $v1, $v0, 0x1
    ctx->r3 = SIGNED(ctx->r2) < 0X1 ? 1 : 0;
    // 0x8002ED0C: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    // 0x8002ED10: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8002ED14: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8002ED18: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8002ED1C: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
L_8002ED20:
    // 0x8002ED20: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8002ED24: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x8002ED28: lui         $a0, 0x400
    ctx->r4 = S32(0X400 << 16);
    // 0x8002ED2C: ori         $a0, $a0, 0x400
    ctx->r4 = ctx->r4 | 0X400;
    // 0x8002ED30: lui         $v0, 0xF100
    ctx->r2 = S32(0XF100 << 16);
    // 0x8002ED34: sw          $a1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r5;
    // 0x8002ED38: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x8002ED3C: sw          $a0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r4;
    // 0x8002ED40: lh          $v0, 0x8($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X8);
    // 0x8002ED44: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8002ED48: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x8002ED4C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002ED50: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x8002ED54: sltu        $v0, $s1, $v0
    ctx->r2 = ctx->r17 < ctx->r2 ? 1 : 0;
    // 0x8002ED58: bne         $v0, $zero, L_8002E9BC
    if (ctx->r2 != 0) {
        // 0x8002ED5C: sll         $v0, $s1, 2
        ctx->r2 = S32(ctx->r17 << 2);
            goto L_8002E9BC;
    }
    // 0x8002ED5C: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
L_8002ED60:
    // 0x8002ED60: lw          $ra, 0x48($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X48);
    // 0x8002ED64: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x8002ED68: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x8002ED6C: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x8002ED70: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x8002ED74: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8002ED78: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8002ED7C: jr          $ra
    // 0x8002ED80: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x8002ED80: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x8002ED84: nop

    // 0x8002ED88: nop

    // 0x8002ED8C: nop

;}
RECOMP_FUNC void func_80026680_1A80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80026680: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80026684: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80026688: lbu         $s6, 0x4B($sp)
    ctx->r22 = MEM_BU(ctx->r29, 0X4B);
    // 0x8002668C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80026690: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x80026694: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80026698: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x8002669C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x800266A0: addu        $s5, $a2, $zero
    ctx->r21 = ADD32(ctx->r6, 0);
    // 0x800266A4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800266A8: addu        $s0, $a3, $zero
    ctx->r16 = ADD32(ctx->r7, 0);
    // 0x800266AC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800266B0: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x800266B4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800266B8: addiu       $s1, $s0, 0x38
    ctx->r17 = ADD32(ctx->r16, 0X38);
    // 0x800266BC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800266C0: jal         0x80025E1C
    // 0x800266C4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80025E1C_121C(rdram, ctx);
        goto after_0;
    // 0x800266C4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x800266C8: beq         $s0, $zero, L_800266D4
    if (ctx->r16 == 0) {
        // 0x800266CC: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_800266D4;
    }
    // 0x800266CC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x800266D0: addiu       $s2, $a0, 0x38
    ctx->r18 = ADD32(ctx->r4, 0X38);
L_800266D4:
    // 0x800266D4: beq         $a0, $zero, L_80026768
    if (ctx->r4 == 0) {
        // 0x800266D8: nop
    
            goto L_80026768;
    }
    // 0x800266D8: nop

    // 0x800266DC: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x800266E0: lw          $v0, -0x46DC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X46DC);
    // 0x800266E4: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x800266E8: sw          $v0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r2;
    // 0x800266EC: sw          $s3, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r19;
    // 0x800266F0: sw          $s4, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r20;
    // 0x800266F4: sw          $s5, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r21;
    // 0x800266F8: sw          $s2, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r18;
    // 0x800266FC: sw          $zero, 0x24($a0)
    MEM_W(0X24, ctx->r4) = 0;
    // 0x80026700: sw          $s1, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r17;
    // 0x80026704: sw          $v1, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r3;
    // 0x80026708: lhu         $v0, 0x2C($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X2C);
    // 0x8002670C: sb          $s6, 0x34($a0)
    MEM_B(0X34, ctx->r4) = ctx->r22;
    // 0x80026710: sb          $zero, 0x35($a0)
    MEM_B(0X35, ctx->r4) = 0;
    // 0x80026714: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80026718: lw          $v1, -0x46DC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X46DC);
    // 0x8002671C: sh          $zero, 0x30($a0)
    MEM_H(0X30, ctx->r4) = 0;
    // 0x80026720: sh          $zero, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = 0;
    // 0x80026724: sh          $zero, 0x32($a0)
    MEM_H(0X32, ctx->r4) = 0;
    // 0x80026728: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8002672C: sh          $v0, 0x2C($a0)
    MEM_H(0X2C, ctx->r4) = ctx->r2;
    // 0x80026730: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80026734: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
    // 0x80026738: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x8002673C: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x80026740: bnel        $v1, $zero, L_80026748
    if (ctx->r3 != 0) {
        // 0x80026744: sw          $a0, 0x4($v1)
        MEM_W(0X4, ctx->r3) = ctx->r4;
            goto L_80026748;
    }
    goto skip_0;
    // 0x80026744: sw          $a0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r4;
    skip_0:
L_80026748:
    // 0x80026748: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x8002674C: lw          $v0, 0x3570($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3570);
    // 0x80026750: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80026754: lw          $v1, -0x46DC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X46DC);
    // 0x80026758: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8002675C: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    // 0x80026760: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80026764: sw          $v0, 0x3570($at)
    MEM_W(0X3570, ctx->r1) = ctx->r2;
L_80026768:
    // 0x80026768: lb          $v0, 0x34($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X34);
    // 0x8002676C: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x80026770: addiu       $v1, $v1, 0x34F0
    ctx->r3 = ADD32(ctx->r3, 0X34F0);
    // 0x80026774: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    // 0x80026778: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8002677C: addu        $v1, $v0, $v1
    ctx->r3 = ADD32(ctx->r2, ctx->r3);
    // 0x80026780: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80026784: beql        $v0, $zero, L_8002678C
    if (ctx->r2 == 0) {
        // 0x80026788: sw          $a0, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r4;
            goto L_8002678C;
    }
    goto skip_1;
    // 0x80026788: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    skip_1:
L_8002678C:
    // 0x8002678C: lb          $v0, 0x34($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X34);
    // 0x80026790: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80026794: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80026798: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8002679C: lw          $v0, 0x3530($at)
    ctx->r2 = MEM_W(ctx->r1, 0X3530);
    // 0x800267A0: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x800267A4: addiu       $a1, $a1, 0x3530
    ctx->r5 = ADD32(ctx->r5, 0X3530);
    // 0x800267A8: bnel        $v0, $zero, L_800267B0
    if (ctx->r2 != 0) {
        // 0x800267AC: sw          $a0, 0x8($v0)
        MEM_W(0X8, ctx->r2) = ctx->r4;
            goto L_800267B0;
    }
    goto skip_2;
    // 0x800267AC: sw          $a0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r4;
    skip_2:
L_800267B0:
    // 0x800267B0: lb          $v0, 0x34($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X34);
    // 0x800267B4: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x800267B8: lw          $v1, -0x46DC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X46DC);
    // 0x800267BC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800267C0: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x800267C4: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    // 0x800267C8: lhu         $v0, 0x32($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X32);
    // 0x800267CC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800267D0: beq         $a0, $zero, L_800267E4
    if (ctx->r4 == 0) {
        // 0x800267D4: sh          $v0, 0x32($v1)
        MEM_H(0X32, ctx->r3) = ctx->r2;
            goto L_800267E4;
    }
    // 0x800267D4: sh          $v0, 0x32($v1)
    MEM_H(0X32, ctx->r3) = ctx->r2;
    // 0x800267D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800267DC: sw          $a0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r4;
    // 0x800267E0: sb          $v0, 0x35($a0)
    MEM_B(0X35, ctx->r4) = ctx->r2;
L_800267E4:
    // 0x800267E4: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x800267E8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x800267EC: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x800267F0: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x800267F4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800267F8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800267FC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80026800: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80026804: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80026808: jr          $ra
    // 0x8002680C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8002680C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80031ECC_D2CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80031ECC: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x80031ED0: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80031ED4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80031ED8: sh          $v0, 0x469C($at)
    MEM_H(0X469C, ctx->r1) = ctx->r2;
    // 0x80031EDC: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x80031EE0: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x80031EE4: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80031EE8: sh          $v0, -0x5854($at)
    MEM_H(-0X5854, ctx->r1) = ctx->r2;
    // 0x80031EEC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80031EF0: sw          $a0, 0x4698($at)
    MEM_W(0X4698, ctx->r1) = ctx->r4;
    // 0x80031EF4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80031EF8: jr          $ra
    // 0x80031EFC: sw          $a1, -0x2328($at)
    MEM_W(-0X2328, ctx->r1) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x80031EFC: sw          $a1, -0x2328($at)
    MEM_W(-0X2328, ctx->r1) = ctx->r5;
;}
RECOMP_FUNC void func_80036B90_11F90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80036B90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80036B94: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80036B98: jal         0x80036BAC
    // 0x80036B9C: nop

    func_80036BAC_11FAC(rdram, ctx);
        goto after_0;
    // 0x80036B9C: nop

    after_0:
    // 0x80036BA0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80036BA4: jr          $ra
    // 0x80036BA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80036BA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8003FC30_1B030(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003FC30: addu        $t6, $a0, $zero
    ctx->r14 = ADD32(ctx->r4, 0);
    // 0x8003FC34: addu        $t7, $zero, $zero
    ctx->r15 = ADD32(0, 0);
    // 0x8003FC38: lh          $a2, 0x8($t6)
    ctx->r6 = MEM_H(ctx->r14, 0X8);
    // 0x8003FC3C: addu        $t2, $zero, $zero
    ctx->r10 = ADD32(0, 0);
    // 0x8003FC40: lh          $t0, 0x0($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X0);
    // 0x8003FC44: lh          $t3, 0x2($t6)
    ctx->r11 = MEM_H(ctx->r14, 0X2);
    // 0x8003FC48: lh          $t4, 0x4($t6)
    ctx->r12 = MEM_H(ctx->r14, 0X4);
    // 0x8003FC4C: lh          $t5, 0x6($t6)
    ctx->r13 = MEM_H(ctx->r14, 0X6);
    // 0x8003FC50: lh          $a3, 0xA($t6)
    ctx->r7 = MEM_H(ctx->r14, 0XA);
    // 0x8003FC54: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x8003FC58: addu        $t9, $a1, $zero
    ctx->r25 = ADD32(ctx->r5, 0);
    // 0x8003FC5C: addiu       $a1, $a1, -0x8
    ctx->r5 = ADD32(ctx->r5, -0X8);
    // 0x8003FC60: sltiu       $v0, $a1, 0x4E
    ctx->r2 = ctx->r5 < 0X4E ? 1 : 0;
    // 0x8003FC64: beq         $v0, $zero, L_800407E0
    if (ctx->r2 == 0) {
        // 0x8003FC68: addu        $t1, $a2, $zero
        ctx->r9 = ADD32(ctx->r6, 0);
            goto L_800407E0;
    }
    // 0x8003FC68: addu        $t1, $a2, $zero
    ctx->r9 = ADD32(ctx->r6, 0);
    // 0x8003FC6C: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x8003FC70: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8003FC74: addu        $at, $at, $v0
    gpr jr_addend_8003FC7C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8003FC78: lw          $v0, 0x1E98($at)
    ctx->r2 = ADD32(ctx->r1, 0X1E98);
    // 0x8003FC7C: jr          $v0
    // 0x8003FC80: nop

    switch (jr_addend_8003FC7C >> 2) {
        case 0: goto L_8003FC84; break;
        case 1: goto L_8003FD40; break;
        case 2: goto L_8003FDFC; break;
        case 3: goto L_8003FEB8; break;
        case 4: goto L_8003FF74; break;
        case 5: goto L_800400C0; break;
        case 6: goto L_8004020C; break;
        case 7: goto L_800407E0; break;
        case 8: goto L_8003FC84; break;
        case 9: goto L_8003FD40; break;
        case 10: goto L_8003FDFC; break;
        case 11: goto L_8003FEB8; break;
        case 12: goto L_800407E0; break;
        case 13: goto L_800407E0; break;
        case 14: goto L_800407E0; break;
        case 15: goto L_800407E0; break;
        case 16: goto L_80040484; break;
        case 17: goto L_8004055C; break;
        case 18: goto L_80040634; break;
        case 19: goto L_8004070C; break;
        case 20: goto L_800407E0; break;
        case 21: goto L_800407E0; break;
        case 22: goto L_800407E0; break;
        case 23: goto L_800407E0; break;
        case 24: goto L_800407E0; break;
        case 25: goto L_800407E0; break;
        case 26: goto L_800407E0; break;
        case 27: goto L_800407E0; break;
        case 28: goto L_80040484; break;
        case 29: goto L_800404F0; break;
        case 30: goto L_800407E0; break;
        case 31: goto L_800407E0; break;
        case 32: goto L_800407E0; break;
        case 33: goto L_800407E0; break;
        case 34: goto L_800407E0; break;
        case 35: goto L_800407E0; break;
        case 36: goto L_800407E0; break;
        case 37: goto L_800407E0; break;
        case 38: goto L_800407E0; break;
        case 39: goto L_800407E0; break;
        case 40: goto L_800407E0; break;
        case 41: goto L_800407E0; break;
        case 42: goto L_800407E0; break;
        case 43: goto L_800407E0; break;
        case 44: goto L_8004055C; break;
        case 45: goto L_800405C8; break;
        case 46: goto L_800407E0; break;
        case 47: goto L_800407E0; break;
        case 48: goto L_800407E0; break;
        case 49: goto L_800407E0; break;
        case 50: goto L_800407E0; break;
        case 51: goto L_800407E0; break;
        case 52: goto L_800407E0; break;
        case 53: goto L_800407E0; break;
        case 54: goto L_800407E0; break;
        case 55: goto L_800407E0; break;
        case 56: goto L_800407E0; break;
        case 57: goto L_800407E0; break;
        case 58: goto L_800407E0; break;
        case 59: goto L_800407E0; break;
        case 60: goto L_80040634; break;
        case 61: goto L_800406A0; break;
        case 62: goto L_800407E0; break;
        case 63: goto L_800407E0; break;
        case 64: goto L_800407E0; break;
        case 65: goto L_800407E0; break;
        case 66: goto L_800407E0; break;
        case 67: goto L_800407E0; break;
        case 68: goto L_800407E0; break;
        case 69: goto L_800407E0; break;
        case 70: goto L_800407E0; break;
        case 71: goto L_800407E0; break;
        case 72: goto L_800407E0; break;
        case 73: goto L_800407E0; break;
        case 74: goto L_800407E0; break;
        case 75: goto L_800407E0; break;
        case 76: goto L_8004070C; break;
        case 77: goto L_80040778; break;
        default: switch_error(__func__, 0x8003FC7C, 0x800D1E98);
    }
    // 0x8003FC80: nop

L_8003FC84:
    // 0x8003FC84: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x8003FC88: lh          $v0, -0x26B0($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X26B0);
    // 0x8003FC8C: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8003FC90: lh          $a0, -0x26B2($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X26B2);
    // 0x8003FC94: subu        $v1, $a3, $a2
    ctx->r3 = SUB32(ctx->r7, ctx->r6);
    // 0x8003FC98: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8003FC9C: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003FCA0: mflo        $v1
    ctx->r3 = lo;
    // 0x8003FCA4: subu        $a0, $t5, $t4
    ctx->r4 = SUB32(ctx->r13, ctx->r12);
    // 0x8003FCA8: nop

    // 0x8003FCAC: div         $zero, $v1, $a0
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r4)));
    // 0x8003FCB0: bne         $a0, $zero, L_8003FCBC
    if (ctx->r4 != 0) {
        // 0x8003FCB4: nop
    
            goto L_8003FCBC;
    }
    // 0x8003FCB4: nop

    // 0x8003FCB8: break       7
    do_break(2147744952);
L_8003FCBC:
    // 0x8003FCBC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8003FCC0: bne         $a0, $at, L_8003FCD4
    if (ctx->r4 != ctx->r1) {
        // 0x8003FCC4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8003FCD4;
    }
    // 0x8003FCC4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8003FCC8: bne         $v1, $at, L_8003FCD4
    if (ctx->r3 != ctx->r1) {
        // 0x8003FCCC: nop
    
            goto L_8003FCD4;
    }
    // 0x8003FCCC: nop

    // 0x8003FCD0: break       6
    do_break(2147744976);
L_8003FCD4:
    // 0x8003FCD4: mflo        $v1
    ctx->r3 = lo;
    // 0x8003FCD8: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8003FCDC: lh          $v0, -0x7154($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7154);
    // 0x8003FCE0: subu        $v0, $t5, $v0
    ctx->r2 = SUB32(ctx->r13, ctx->r2);
    // 0x8003FCE4: subu        $a2, $a2, $v1
    ctx->r6 = SUB32(ctx->r6, ctx->r3);
    // 0x8003FCE8: subu        $a1, $a3, $a2
    ctx->r5 = SUB32(ctx->r7, ctx->r6);
    // 0x8003FCEC: mult        $a1, $v0
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003FCF0: mflo        $v0
    ctx->r2 = lo;
    // 0x8003FCF4: nop

    // 0x8003FCF8: nop

    // 0x8003FCFC: div         $zero, $v0, $a0
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r4)));
    // 0x8003FD00: bne         $a0, $zero, L_8003FD0C
    if (ctx->r4 != 0) {
        // 0x8003FD04: nop
    
            goto L_8003FD0C;
    }
    // 0x8003FD04: nop

    // 0x8003FD08: break       7
    do_break(2147745032);
L_8003FD0C:
    // 0x8003FD0C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8003FD10: bne         $a0, $at, L_8003FD24
    if (ctx->r4 != ctx->r1) {
        // 0x8003FD14: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8003FD24;
    }
    // 0x8003FD14: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8003FD18: bne         $v0, $at, L_8003FD24
    if (ctx->r2 != ctx->r1) {
        // 0x8003FD1C: nop
    
            goto L_8003FD24;
    }
    // 0x8003FD1C: nop

    // 0x8003FD20: break       6
    do_break(2147745056);
L_8003FD24:
    // 0x8003FD24: mflo        $v0
    ctx->r2 = lo;
    // 0x8003FD28: addu        $t2, $a2, $v0
    ctx->r10 = ADD32(ctx->r6, ctx->r2);
    // 0x8003FD2C: slt         $v0, $t2, $t1
    ctx->r2 = SIGNED(ctx->r10) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8003FD30: bnel        $v0, $zero, L_8003FD38
    if (ctx->r2 != 0) {
        // 0x8003FD34: addu        $t2, $t1, $zero
        ctx->r10 = ADD32(ctx->r9, 0);
            goto L_8003FD38;
    }
    goto skip_0;
    // 0x8003FD34: addu        $t2, $t1, $zero
    ctx->r10 = ADD32(ctx->r9, 0);
    skip_0:
L_8003FD38:
    // 0x8003FD38: j           L_800403B4
    // 0x8003FD3C: slt         $v0, $a0, $a1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
        goto L_800403B4;
    // 0x8003FD3C: slt         $v0, $a0, $a1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
L_8003FD40:
    // 0x8003FD40: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x8003FD44: lh          $v0, -0x26B0($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X26B0);
    // 0x8003FD48: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8003FD4C: lh          $a0, -0x26B2($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X26B2);
    // 0x8003FD50: subu        $v1, $a3, $a2
    ctx->r3 = SUB32(ctx->r7, ctx->r6);
    // 0x8003FD54: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8003FD58: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003FD5C: mflo        $v1
    ctx->r3 = lo;
    // 0x8003FD60: subu        $a0, $t5, $t4
    ctx->r4 = SUB32(ctx->r13, ctx->r12);
    // 0x8003FD64: nop

    // 0x8003FD68: div         $zero, $v1, $a0
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r4)));
    // 0x8003FD6C: bne         $a0, $zero, L_8003FD78
    if (ctx->r4 != 0) {
        // 0x8003FD70: nop
    
            goto L_8003FD78;
    }
    // 0x8003FD70: nop

    // 0x8003FD74: break       7
    do_break(2147745140);
L_8003FD78:
    // 0x8003FD78: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8003FD7C: bne         $a0, $at, L_8003FD90
    if (ctx->r4 != ctx->r1) {
        // 0x8003FD80: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8003FD90;
    }
    // 0x8003FD80: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8003FD84: bne         $v1, $at, L_8003FD90
    if (ctx->r3 != ctx->r1) {
        // 0x8003FD88: nop
    
            goto L_8003FD90;
    }
    // 0x8003FD88: nop

    // 0x8003FD8C: break       6
    do_break(2147745164);
L_8003FD90:
    // 0x8003FD90: mflo        $v1
    ctx->r3 = lo;
    // 0x8003FD94: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8003FD98: lh          $v0, -0x7154($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7154);
    // 0x8003FD9C: subu        $v0, $v0, $t4
    ctx->r2 = SUB32(ctx->r2, ctx->r12);
    // 0x8003FDA0: subu        $a2, $a2, $v1
    ctx->r6 = SUB32(ctx->r6, ctx->r3);
    // 0x8003FDA4: subu        $a1, $a3, $a2
    ctx->r5 = SUB32(ctx->r7, ctx->r6);
    // 0x8003FDA8: mult        $a1, $v0
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003FDAC: mflo        $v0
    ctx->r2 = lo;
    // 0x8003FDB0: nop

    // 0x8003FDB4: nop

    // 0x8003FDB8: div         $zero, $v0, $a0
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r4)));
    // 0x8003FDBC: bne         $a0, $zero, L_8003FDC8
    if (ctx->r4 != 0) {
        // 0x8003FDC0: nop
    
            goto L_8003FDC8;
    }
    // 0x8003FDC0: nop

    // 0x8003FDC4: break       7
    do_break(2147745220);
L_8003FDC8:
    // 0x8003FDC8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8003FDCC: bne         $a0, $at, L_8003FDE0
    if (ctx->r4 != ctx->r1) {
        // 0x8003FDD0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8003FDE0;
    }
    // 0x8003FDD0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8003FDD4: bne         $v0, $at, L_8003FDE0
    if (ctx->r2 != ctx->r1) {
        // 0x8003FDD8: nop
    
            goto L_8003FDE0;
    }
    // 0x8003FDD8: nop

    // 0x8003FDDC: break       6
    do_break(2147745244);
L_8003FDE0:
    // 0x8003FDE0: mflo        $v0
    ctx->r2 = lo;
    // 0x8003FDE4: addu        $t2, $a2, $v0
    ctx->r10 = ADD32(ctx->r6, ctx->r2);
    // 0x8003FDE8: slt         $v0, $t2, $t1
    ctx->r2 = SIGNED(ctx->r10) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8003FDEC: bnel        $v0, $zero, L_8003FDF4
    if (ctx->r2 != 0) {
        // 0x8003FDF0: addu        $t2, $t1, $zero
        ctx->r10 = ADD32(ctx->r9, 0);
            goto L_8003FDF4;
    }
    goto skip_1;
    // 0x8003FDF0: addu        $t2, $t1, $zero
    ctx->r10 = ADD32(ctx->r9, 0);
    skip_1:
L_8003FDF4:
    // 0x8003FDF4: j           L_80040414
    // 0x8003FDF8: slt         $v0, $a0, $a1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
        goto L_80040414;
    // 0x8003FDF8: slt         $v0, $a0, $a1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
L_8003FDFC:
    // 0x8003FDFC: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x8003FE00: lh          $v0, -0x26B4($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X26B4);
    // 0x8003FE04: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8003FE08: lh          $a0, -0x26B6($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X26B6);
    // 0x8003FE0C: subu        $v1, $a3, $a2
    ctx->r3 = SUB32(ctx->r7, ctx->r6);
    // 0x8003FE10: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8003FE14: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003FE18: mflo        $v1
    ctx->r3 = lo;
    // 0x8003FE1C: subu        $a0, $t3, $t0
    ctx->r4 = SUB32(ctx->r11, ctx->r8);
    // 0x8003FE20: nop

    // 0x8003FE24: div         $zero, $v1, $a0
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r4)));
    // 0x8003FE28: bne         $a0, $zero, L_8003FE34
    if (ctx->r4 != 0) {
        // 0x8003FE2C: nop
    
            goto L_8003FE34;
    }
    // 0x8003FE2C: nop

    // 0x8003FE30: break       7
    do_break(2147745328);
L_8003FE34:
    // 0x8003FE34: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8003FE38: bne         $a0, $at, L_8003FE4C
    if (ctx->r4 != ctx->r1) {
        // 0x8003FE3C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8003FE4C;
    }
    // 0x8003FE3C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8003FE40: bne         $v1, $at, L_8003FE4C
    if (ctx->r3 != ctx->r1) {
        // 0x8003FE44: nop
    
            goto L_8003FE4C;
    }
    // 0x8003FE44: nop

    // 0x8003FE48: break       6
    do_break(2147745352);
L_8003FE4C:
    // 0x8003FE4C: mflo        $v1
    ctx->r3 = lo;
    // 0x8003FE50: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8003FE54: lh          $v0, -0x7158($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7158);
    // 0x8003FE58: subu        $v0, $v0, $t0
    ctx->r2 = SUB32(ctx->r2, ctx->r8);
    // 0x8003FE5C: subu        $a2, $a2, $v1
    ctx->r6 = SUB32(ctx->r6, ctx->r3);
    // 0x8003FE60: subu        $a1, $a3, $a2
    ctx->r5 = SUB32(ctx->r7, ctx->r6);
    // 0x8003FE64: mult        $a1, $v0
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003FE68: mflo        $v0
    ctx->r2 = lo;
    // 0x8003FE6C: nop

    // 0x8003FE70: nop

    // 0x8003FE74: div         $zero, $v0, $a0
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r4)));
    // 0x8003FE78: bne         $a0, $zero, L_8003FE84
    if (ctx->r4 != 0) {
        // 0x8003FE7C: nop
    
            goto L_8003FE84;
    }
    // 0x8003FE7C: nop

    // 0x8003FE80: break       7
    do_break(2147745408);
L_8003FE84:
    // 0x8003FE84: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8003FE88: bne         $a0, $at, L_8003FE9C
    if (ctx->r4 != ctx->r1) {
        // 0x8003FE8C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8003FE9C;
    }
    // 0x8003FE8C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8003FE90: bne         $v0, $at, L_8003FE9C
    if (ctx->r2 != ctx->r1) {
        // 0x8003FE94: nop
    
            goto L_8003FE9C;
    }
    // 0x8003FE94: nop

    // 0x8003FE98: break       6
    do_break(2147745432);
L_8003FE9C:
    // 0x8003FE9C: mflo        $v0
    ctx->r2 = lo;
    // 0x8003FEA0: addu        $t2, $a2, $v0
    ctx->r10 = ADD32(ctx->r6, ctx->r2);
    // 0x8003FEA4: slt         $v0, $t2, $t1
    ctx->r2 = SIGNED(ctx->r10) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8003FEA8: bnel        $v0, $zero, L_8003FEB0
    if (ctx->r2 != 0) {
        // 0x8003FEAC: addu        $t2, $t1, $zero
        ctx->r10 = ADD32(ctx->r9, 0);
            goto L_8003FEB0;
    }
    goto skip_2;
    // 0x8003FEAC: addu        $t2, $t1, $zero
    ctx->r10 = ADD32(ctx->r9, 0);
    skip_2:
L_8003FEB0:
    // 0x8003FEB0: j           L_80040354
    // 0x8003FEB4: slt         $v0, $a0, $a1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
        goto L_80040354;
    // 0x8003FEB4: slt         $v0, $a0, $a1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
L_8003FEB8:
    // 0x8003FEB8: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x8003FEBC: lh          $v0, -0x26B4($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X26B4);
    // 0x8003FEC0: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8003FEC4: lh          $a0, -0x26B6($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X26B6);
    // 0x8003FEC8: subu        $v1, $a3, $a2
    ctx->r3 = SUB32(ctx->r7, ctx->r6);
    // 0x8003FECC: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8003FED0: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003FED4: mflo        $v1
    ctx->r3 = lo;
    // 0x8003FED8: subu        $a0, $t3, $t0
    ctx->r4 = SUB32(ctx->r11, ctx->r8);
    // 0x8003FEDC: nop

    // 0x8003FEE0: div         $zero, $v1, $a0
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r4)));
    // 0x8003FEE4: bne         $a0, $zero, L_8003FEF0
    if (ctx->r4 != 0) {
        // 0x8003FEE8: nop
    
            goto L_8003FEF0;
    }
    // 0x8003FEE8: nop

    // 0x8003FEEC: break       7
    do_break(2147745516);
L_8003FEF0:
    // 0x8003FEF0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8003FEF4: bne         $a0, $at, L_8003FF08
    if (ctx->r4 != ctx->r1) {
        // 0x8003FEF8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8003FF08;
    }
    // 0x8003FEF8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8003FEFC: bne         $v1, $at, L_8003FF08
    if (ctx->r3 != ctx->r1) {
        // 0x8003FF00: nop
    
            goto L_8003FF08;
    }
    // 0x8003FF00: nop

    // 0x8003FF04: break       6
    do_break(2147745540);
L_8003FF08:
    // 0x8003FF08: mflo        $v1
    ctx->r3 = lo;
    // 0x8003FF0C: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8003FF10: lh          $v0, -0x7158($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7158);
    // 0x8003FF14: subu        $v0, $t3, $v0
    ctx->r2 = SUB32(ctx->r11, ctx->r2);
    // 0x8003FF18: subu        $a2, $a2, $v1
    ctx->r6 = SUB32(ctx->r6, ctx->r3);
    // 0x8003FF1C: subu        $a1, $a3, $a2
    ctx->r5 = SUB32(ctx->r7, ctx->r6);
    // 0x8003FF20: mult        $a1, $v0
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003FF24: mflo        $v0
    ctx->r2 = lo;
    // 0x8003FF28: nop

    // 0x8003FF2C: nop

    // 0x8003FF30: div         $zero, $v0, $a0
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r4)));
    // 0x8003FF34: bne         $a0, $zero, L_8003FF40
    if (ctx->r4 != 0) {
        // 0x8003FF38: nop
    
            goto L_8003FF40;
    }
    // 0x8003FF38: nop

    // 0x8003FF3C: break       7
    do_break(2147745596);
L_8003FF40:
    // 0x8003FF40: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8003FF44: bne         $a0, $at, L_8003FF58
    if (ctx->r4 != ctx->r1) {
        // 0x8003FF48: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8003FF58;
    }
    // 0x8003FF48: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8003FF4C: bne         $v0, $at, L_8003FF58
    if (ctx->r2 != ctx->r1) {
        // 0x8003FF50: nop
    
            goto L_8003FF58;
    }
    // 0x8003FF50: nop

    // 0x8003FF54: break       6
    do_break(2147745620);
L_8003FF58:
    // 0x8003FF58: mflo        $v0
    ctx->r2 = lo;
    // 0x8003FF5C: addu        $t2, $a2, $v0
    ctx->r10 = ADD32(ctx->r6, ctx->r2);
    // 0x8003FF60: slt         $v0, $t2, $t1
    ctx->r2 = SIGNED(ctx->r10) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8003FF64: bnel        $v0, $zero, L_8003FF6C
    if (ctx->r2 != 0) {
        // 0x8003FF68: addu        $t2, $t1, $zero
        ctx->r10 = ADD32(ctx->r9, 0);
            goto L_8003FF6C;
    }
    goto skip_3;
    // 0x8003FF68: addu        $t2, $t1, $zero
    ctx->r10 = ADD32(ctx->r9, 0);
    skip_3:
L_8003FF6C:
    // 0x8003FF6C: j           L_80040474
    // 0x8003FF70: slt         $v0, $a0, $a1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
        goto L_80040474;
    // 0x8003FF70: slt         $v0, $a0, $a1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
L_8003FF74:
    // 0x8003FF74: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x8003FF78: lh          $v0, -0x26B0($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X26B0);
    // 0x8003FF7C: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8003FF80: lh          $a0, -0x26B2($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X26B2);
    // 0x8003FF84: subu        $v1, $a3, $a2
    ctx->r3 = SUB32(ctx->r7, ctx->r6);
    // 0x8003FF88: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8003FF8C: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003FF90: mflo        $v1
    ctx->r3 = lo;
    // 0x8003FF94: subu        $a0, $t5, $t4
    ctx->r4 = SUB32(ctx->r13, ctx->r12);
    // 0x8003FF98: nop

    // 0x8003FF9C: div         $zero, $v1, $a0
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r4)));
    // 0x8003FFA0: bne         $a0, $zero, L_8003FFAC
    if (ctx->r4 != 0) {
        // 0x8003FFA4: nop
    
            goto L_8003FFAC;
    }
    // 0x8003FFA4: nop

    // 0x8003FFA8: break       7
    do_break(2147745704);
L_8003FFAC:
    // 0x8003FFAC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8003FFB0: bne         $a0, $at, L_8003FFC4
    if (ctx->r4 != ctx->r1) {
        // 0x8003FFB4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8003FFC4;
    }
    // 0x8003FFB4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8003FFB8: bne         $v1, $at, L_8003FFC4
    if (ctx->r3 != ctx->r1) {
        // 0x8003FFBC: nop
    
            goto L_8003FFC4;
    }
    // 0x8003FFBC: nop

    // 0x8003FFC0: break       6
    do_break(2147745728);
L_8003FFC4:
    // 0x8003FFC4: mflo        $v1
    ctx->r3 = lo;
    // 0x8003FFC8: subu        $v0, $a2, $a3
    ctx->r2 = SUB32(ctx->r6, ctx->r7);
    // 0x8003FFCC: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
    // 0x8003FFD0: subu        $t2, $v0, $v1
    ctx->r10 = SUB32(ctx->r2, ctx->r3);
    // 0x8003FFD4: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8003FFD8: lh          $v1, -0x7154($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X7154);
    // 0x8003FFDC: srl         $v0, $a0, 31
    ctx->r2 = S32(U32(ctx->r4) >> 31);
    // 0x8003FFE0: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x8003FFE4: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x8003FFE8: addu        $v0, $t4, $v0
    ctx->r2 = ADD32(ctx->r12, ctx->r2);
    // 0x8003FFEC: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8003FFF0: beq         $v0, $zero, L_8004005C
    if (ctx->r2 == 0) {
        // 0x8003FFF4: subu        $v0, $a3, $t2
        ctx->r2 = SUB32(ctx->r7, ctx->r10);
            goto L_8004005C;
    }
    // 0x8003FFF4: subu        $v0, $a3, $t2
    ctx->r2 = SUB32(ctx->r7, ctx->r10);
    // 0x8003FFF8: subu        $v1, $v1, $t4
    ctx->r3 = SUB32(ctx->r3, ctx->r12);
    // 0x8003FFFC: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80040000: mflo        $v0
    ctx->r2 = lo;
    // 0x80040004: nop

    // 0x80040008: nop

    // 0x8004000C: div         $zero, $v0, $a0
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r4)));
    // 0x80040010: bne         $a0, $zero, L_8004001C
    if (ctx->r4 != 0) {
        // 0x80040014: nop
    
            goto L_8004001C;
    }
    // 0x80040014: nop

    // 0x80040018: break       7
    do_break(2147745816);
L_8004001C:
    // 0x8004001C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80040020: bne         $a0, $at, L_80040034
    if (ctx->r4 != ctx->r1) {
        // 0x80040024: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80040034;
    }
    // 0x80040024: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80040028: bne         $v0, $at, L_80040034
    if (ctx->r2 != ctx->r1) {
        // 0x8004002C: nop
    
            goto L_80040034;
    }
    // 0x8004002C: nop

    // 0x80040030: break       6
    do_break(2147745840);
L_80040034:
    // 0x80040034: mflo        $v0
    ctx->r2 = lo;
    // 0x80040038: addu        $v0, $t2, $v0
    ctx->r2 = ADD32(ctx->r10, ctx->r2);
    // 0x8004003C: sh          $v0, 0x8($t6)
    MEM_H(0X8, ctx->r14) = ctx->r2;
    // 0x80040040: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80040044: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80040048: slt         $v0, $v0, $a2
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8004004C: bnel        $v0, $zero, L_8004041C
    if (ctx->r2 != 0) {
        // 0x80040050: sh          $a2, 0x8($t6)
        MEM_H(0X8, ctx->r14) = ctx->r6;
            goto L_8004041C;
    }
    goto skip_4;
    // 0x80040050: sh          $a2, 0x8($t6)
    MEM_H(0X8, ctx->r14) = ctx->r6;
    skip_4:
    // 0x80040054: j           L_800407E0
    // 0x80040058: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
        goto L_800407E0;
    // 0x80040058: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
L_8004005C:
    // 0x8004005C: subu        $v1, $t5, $v1
    ctx->r3 = SUB32(ctx->r13, ctx->r3);
    // 0x80040060: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80040064: mflo        $v0
    ctx->r2 = lo;
    // 0x80040068: nop

    // 0x8004006C: nop

    // 0x80040070: div         $zero, $v0, $a0
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r4)));
    // 0x80040074: bne         $a0, $zero, L_80040080
    if (ctx->r4 != 0) {
        // 0x80040078: nop
    
            goto L_80040080;
    }
    // 0x80040078: nop

    // 0x8004007C: break       7
    do_break(2147745916);
L_80040080:
    // 0x80040080: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80040084: bne         $a0, $at, L_80040098
    if (ctx->r4 != ctx->r1) {
        // 0x80040088: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80040098;
    }
    // 0x80040088: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8004008C: bne         $v0, $at, L_80040098
    if (ctx->r2 != ctx->r1) {
        // 0x80040090: nop
    
            goto L_80040098;
    }
    // 0x80040090: nop

    // 0x80040094: break       6
    do_break(2147745940);
L_80040098:
    // 0x80040098: mflo        $v0
    ctx->r2 = lo;
    // 0x8004009C: addu        $v0, $t2, $v0
    ctx->r2 = ADD32(ctx->r10, ctx->r2);
    // 0x800400A0: sh          $v0, 0x8($t6)
    MEM_H(0X8, ctx->r14) = ctx->r2;
    // 0x800400A4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x800400A8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x800400AC: slt         $v0, $v0, $a2
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x800400B0: bnel        $v0, $zero, L_800403BC
    if (ctx->r2 != 0) {
        // 0x800400B4: sh          $a2, 0x8($t6)
        MEM_H(0X8, ctx->r14) = ctx->r6;
            goto L_800403BC;
    }
    goto skip_5;
    // 0x800400B4: sh          $a2, 0x8($t6)
    MEM_H(0X8, ctx->r14) = ctx->r6;
    skip_5:
    // 0x800400B8: j           L_800407E0
    // 0x800400BC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
        goto L_800407E0;
    // 0x800400BC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
L_800400C0:
    // 0x800400C0: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x800400C4: lh          $v0, -0x26B4($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X26B4);
    // 0x800400C8: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x800400CC: lh          $a0, -0x26B6($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X26B6);
    // 0x800400D0: subu        $v1, $a3, $a2
    ctx->r3 = SUB32(ctx->r7, ctx->r6);
    // 0x800400D4: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x800400D8: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800400DC: mflo        $v1
    ctx->r3 = lo;
    // 0x800400E0: subu        $a0, $t3, $t0
    ctx->r4 = SUB32(ctx->r11, ctx->r8);
    // 0x800400E4: nop

    // 0x800400E8: div         $zero, $v1, $a0
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r4)));
    // 0x800400EC: bne         $a0, $zero, L_800400F8
    if (ctx->r4 != 0) {
        // 0x800400F0: nop
    
            goto L_800400F8;
    }
    // 0x800400F0: nop

    // 0x800400F4: break       7
    do_break(2147746036);
L_800400F8:
    // 0x800400F8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800400FC: bne         $a0, $at, L_80040110
    if (ctx->r4 != ctx->r1) {
        // 0x80040100: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80040110;
    }
    // 0x80040100: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80040104: bne         $v1, $at, L_80040110
    if (ctx->r3 != ctx->r1) {
        // 0x80040108: nop
    
            goto L_80040110;
    }
    // 0x80040108: nop

    // 0x8004010C: break       6
    do_break(2147746060);
L_80040110:
    // 0x80040110: mflo        $v1
    ctx->r3 = lo;
    // 0x80040114: subu        $v0, $a2, $a3
    ctx->r2 = SUB32(ctx->r6, ctx->r7);
    // 0x80040118: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
    // 0x8004011C: subu        $t2, $v0, $v1
    ctx->r10 = SUB32(ctx->r2, ctx->r3);
    // 0x80040120: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80040124: lh          $v1, -0x7158($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X7158);
    // 0x80040128: srl         $v0, $a0, 31
    ctx->r2 = S32(U32(ctx->r4) >> 31);
    // 0x8004012C: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x80040130: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x80040134: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x80040138: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8004013C: beq         $v0, $zero, L_800401A8
    if (ctx->r2 == 0) {
        // 0x80040140: subu        $v0, $a3, $t2
        ctx->r2 = SUB32(ctx->r7, ctx->r10);
            goto L_800401A8;
    }
    // 0x80040140: subu        $v0, $a3, $t2
    ctx->r2 = SUB32(ctx->r7, ctx->r10);
    // 0x80040144: subu        $v1, $v1, $t0
    ctx->r3 = SUB32(ctx->r3, ctx->r8);
    // 0x80040148: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004014C: mflo        $v0
    ctx->r2 = lo;
    // 0x80040150: nop

    // 0x80040154: nop

    // 0x80040158: div         $zero, $v0, $a0
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r4)));
    // 0x8004015C: bne         $a0, $zero, L_80040168
    if (ctx->r4 != 0) {
        // 0x80040160: nop
    
            goto L_80040168;
    }
    // 0x80040160: nop

    // 0x80040164: break       7
    do_break(2147746148);
L_80040168:
    // 0x80040168: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8004016C: bne         $a0, $at, L_80040180
    if (ctx->r4 != ctx->r1) {
        // 0x80040170: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80040180;
    }
    // 0x80040170: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80040174: bne         $v0, $at, L_80040180
    if (ctx->r2 != ctx->r1) {
        // 0x80040178: nop
    
            goto L_80040180;
    }
    // 0x80040178: nop

    // 0x8004017C: break       6
    do_break(2147746172);
L_80040180:
    // 0x80040180: mflo        $v0
    ctx->r2 = lo;
    // 0x80040184: addu        $v0, $t2, $v0
    ctx->r2 = ADD32(ctx->r10, ctx->r2);
    // 0x80040188: sh          $v0, 0x8($t6)
    MEM_H(0X8, ctx->r14) = ctx->r2;
    // 0x8004018C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80040190: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80040194: slt         $v0, $v0, $a2
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80040198: bnel        $v0, $zero, L_8004035C
    if (ctx->r2 != 0) {
        // 0x8004019C: sh          $a2, 0x8($t6)
        MEM_H(0X8, ctx->r14) = ctx->r6;
            goto L_8004035C;
    }
    goto skip_6;
    // 0x8004019C: sh          $a2, 0x8($t6)
    MEM_H(0X8, ctx->r14) = ctx->r6;
    skip_6:
    // 0x800401A0: j           L_800407E0
    // 0x800401A4: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
        goto L_800407E0;
    // 0x800401A4: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
L_800401A8:
    // 0x800401A8: subu        $v1, $t3, $v1
    ctx->r3 = SUB32(ctx->r11, ctx->r3);
    // 0x800401AC: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800401B0: mflo        $v0
    ctx->r2 = lo;
    // 0x800401B4: nop

    // 0x800401B8: nop

    // 0x800401BC: div         $zero, $v0, $a0
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r4)));
    // 0x800401C0: bne         $a0, $zero, L_800401CC
    if (ctx->r4 != 0) {
        // 0x800401C4: nop
    
            goto L_800401CC;
    }
    // 0x800401C4: nop

    // 0x800401C8: break       7
    do_break(2147746248);
L_800401CC:
    // 0x800401CC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800401D0: bne         $a0, $at, L_800401E4
    if (ctx->r4 != ctx->r1) {
        // 0x800401D4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800401E4;
    }
    // 0x800401D4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800401D8: bne         $v0, $at, L_800401E4
    if (ctx->r2 != ctx->r1) {
        // 0x800401DC: nop
    
            goto L_800401E4;
    }
    // 0x800401DC: nop

    // 0x800401E0: break       6
    do_break(2147746272);
L_800401E4:
    // 0x800401E4: mflo        $v0
    ctx->r2 = lo;
    // 0x800401E8: addu        $v0, $t2, $v0
    ctx->r2 = ADD32(ctx->r10, ctx->r2);
    // 0x800401EC: sh          $v0, 0x8($t6)
    MEM_H(0X8, ctx->r14) = ctx->r2;
    // 0x800401F0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x800401F4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x800401F8: slt         $v0, $v0, $a2
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x800401FC: bnel        $v0, $zero, L_8004047C
    if (ctx->r2 != 0) {
        // 0x80040200: sh          $a2, 0x8($t6)
        MEM_H(0X8, ctx->r14) = ctx->r6;
            goto L_8004047C;
    }
    goto skip_7;
    // 0x80040200: sh          $a2, 0x8($t6)
    MEM_H(0X8, ctx->r14) = ctx->r6;
    skip_7:
    // 0x80040204: j           L_800407E0
    // 0x80040208: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
        goto L_800407E0;
    // 0x80040208: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
L_8004020C:
    // 0x8004020C: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80040210: lh          $v0, -0x7154($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7154);
    // 0x80040214: subu        $t1, $t3, $t0
    ctx->r9 = SUB32(ctx->r11, ctx->r8);
    // 0x80040218: subu        $t8, $v0, $t4
    ctx->r24 = SUB32(ctx->r2, ctx->r12);
    // 0x8004021C: mult        $t8, $t1
    result = S64(S32(ctx->r24)) * S64(S32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80040220: mflo        $v1
    ctx->r3 = lo;
    // 0x80040224: subu        $a1, $t5, $t4
    ctx->r5 = SUB32(ctx->r13, ctx->r12);
    // 0x80040228: nop

    // 0x8004022C: div         $zero, $v1, $a1
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r5)));
    // 0x80040230: bne         $a1, $zero, L_8004023C
    if (ctx->r5 != 0) {
        // 0x80040234: nop
    
            goto L_8004023C;
    }
    // 0x80040234: nop

    // 0x80040238: break       7
    do_break(2147746360);
L_8004023C:
    // 0x8004023C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80040240: bne         $a1, $at, L_80040254
    if (ctx->r5 != ctx->r1) {
        // 0x80040244: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80040254;
    }
    // 0x80040244: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80040248: bne         $v1, $at, L_80040254
    if (ctx->r3 != ctx->r1) {
        // 0x8004024C: nop
    
            goto L_80040254;
    }
    // 0x8004024C: nop

    // 0x80040250: break       6
    do_break(2147746384);
L_80040254:
    // 0x80040254: mflo        $v1
    ctx->r3 = lo;
    // 0x80040258: subu        $t5, $t5, $v0
    ctx->r13 = SUB32(ctx->r13, ctx->r2);
    // 0x8004025C: nop

    // 0x80040260: mult        $t5, $t1
    result = S64(S32(ctx->r13)) * S64(S32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80040264: mflo        $v0
    ctx->r2 = lo;
    // 0x80040268: nop

    // 0x8004026C: nop

    // 0x80040270: div         $zero, $v0, $a1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r5)));
    // 0x80040274: bne         $a1, $zero, L_80040280
    if (ctx->r5 != 0) {
        // 0x80040278: nop
    
            goto L_80040280;
    }
    // 0x80040278: nop

    // 0x8004027C: break       7
    do_break(2147746428);
L_80040280:
    // 0x80040280: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80040284: bne         $a1, $at, L_80040298
    if (ctx->r5 != ctx->r1) {
        // 0x80040288: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80040298;
    }
    // 0x80040288: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8004028C: bne         $v0, $at, L_80040298
    if (ctx->r2 != ctx->r1) {
        // 0x80040290: nop
    
            goto L_80040298;
    }
    // 0x80040290: nop

    // 0x80040294: break       6
    do_break(2147746452);
L_80040298:
    // 0x80040298: mflo        $v0
    ctx->r2 = lo;
    // 0x8004029C: lui         $t4, 0x801E
    ctx->r12 = S32(0X801E << 16);
    // 0x800402A0: lh          $t4, -0x7158($t4)
    ctx->r12 = MEM_H(ctx->r12, -0X7158);
    // 0x800402A4: subu        $a0, $a2, $a3
    ctx->r4 = SUB32(ctx->r6, ctx->r7);
    // 0x800402A8: addu        $t2, $a2, $a0
    ctx->r10 = ADD32(ctx->r6, ctx->r4);
    // 0x800402AC: addu        $v1, $t0, $v1
    ctx->r3 = ADD32(ctx->r8, ctx->r3);
    // 0x800402B0: slt         $v1, $t4, $v1
    ctx->r3 = SIGNED(ctx->r12) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800402B4: addu        $v0, $t0, $v0
    ctx->r2 = ADD32(ctx->r8, ctx->r2);
    // 0x800402B8: slt         $v0, $t4, $v0
    ctx->r2 = SIGNED(ctx->r12) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800402BC: beq         $v0, $zero, L_800402C8
    if (ctx->r2 == 0) {
        // 0x800402C0: sll         $v1, $v1, 1
        ctx->r3 = S32(ctx->r3 << 1);
            goto L_800402C8;
    }
    // 0x800402C0: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x800402C4: ori         $v1, $v1, 0x1
    ctx->r3 = ctx->r3 | 0X1;
L_800402C8:
    // 0x800402C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800402CC: beq         $v1, $v0, L_80040364
    if (ctx->r3 == ctx->r2) {
        // 0x800402D0: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80040364;
    }
    // 0x800402D0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x800402D4: beql        $v0, $zero, L_800402EC
    if (ctx->r2 == 0) {
        // 0x800402D8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_800402EC;
    }
    goto skip_8;
    // 0x800402D8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_8:
    // 0x800402DC: beq         $v1, $zero, L_80040304
    if (ctx->r3 == 0) {
        // 0x800402E0: subu        $v0, $a3, $t2
        ctx->r2 = SUB32(ctx->r7, ctx->r10);
            goto L_80040304;
    }
    // 0x800402E0: subu        $v0, $a3, $t2
    ctx->r2 = SUB32(ctx->r7, ctx->r10);
    // 0x800402E4: j           L_800407E4
    // 0x800402E8: addiu       $v0, $t9, -0x8
    ctx->r2 = ADD32(ctx->r25, -0X8);
        goto L_800407E4;
    // 0x800402E8: addiu       $v0, $t9, -0x8
    ctx->r2 = ADD32(ctx->r25, -0X8);
L_800402EC:
    // 0x800402EC: beq         $v1, $v0, L_800403C4
    if (ctx->r3 == ctx->r2) {
        // 0x800402F0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_800403C4;
    }
    // 0x800402F0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x800402F4: beq         $v1, $v0, L_80040424
    if (ctx->r3 == ctx->r2) {
        // 0x800402F8: subu        $v0, $a3, $t2
        ctx->r2 = SUB32(ctx->r7, ctx->r10);
            goto L_80040424;
    }
    // 0x800402F8: subu        $v0, $a3, $t2
    ctx->r2 = SUB32(ctx->r7, ctx->r10);
    // 0x800402FC: j           L_800407E4
    // 0x80040300: addiu       $v0, $t9, -0x8
    ctx->r2 = ADD32(ctx->r25, -0X8);
        goto L_800407E4;
    // 0x80040300: addiu       $v0, $t9, -0x8
    ctx->r2 = ADD32(ctx->r25, -0X8);
L_80040304:
    // 0x80040304: subu        $v1, $t4, $t0
    ctx->r3 = SUB32(ctx->r12, ctx->r8);
    // 0x80040308: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004030C: mflo        $v0
    ctx->r2 = lo;
    // 0x80040310: nop

    // 0x80040314: nop

    // 0x80040318: div         $zero, $v0, $t1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r9))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r9)));
    // 0x8004031C: bne         $t1, $zero, L_80040328
    if (ctx->r9 != 0) {
        // 0x80040320: nop
    
            goto L_80040328;
    }
    // 0x80040320: nop

    // 0x80040324: break       7
    do_break(2147746596);
L_80040328:
    // 0x80040328: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8004032C: bne         $t1, $at, L_80040340
    if (ctx->r9 != ctx->r1) {
        // 0x80040330: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80040340;
    }
    // 0x80040330: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80040334: bne         $v0, $at, L_80040340
    if (ctx->r2 != ctx->r1) {
        // 0x80040338: nop
    
            goto L_80040340;
    }
    // 0x80040338: nop

    // 0x8004033C: break       6
    do_break(2147746620);
L_80040340:
    // 0x80040340: mflo        $v0
    ctx->r2 = lo;
    // 0x80040344: addu        $v0, $t2, $v0
    ctx->r2 = ADD32(ctx->r10, ctx->r2);
    // 0x80040348: sh          $v0, 0x8($t6)
    MEM_H(0X8, ctx->r14) = ctx->r2;
    // 0x8004034C: subu        $v0, $a3, $a2
    ctx->r2 = SUB32(ctx->r7, ctx->r6);
    // 0x80040350: slt         $v0, $t1, $v0
    ctx->r2 = SIGNED(ctx->r9) < SIGNED(ctx->r2) ? 1 : 0;
L_80040354:
    // 0x80040354: beq         $v0, $zero, L_800407E4
    if (ctx->r2 == 0) {
        // 0x80040358: addiu       $v0, $t9, -0x8
        ctx->r2 = ADD32(ctx->r25, -0X8);
            goto L_800407E4;
    }
    // 0x80040358: addiu       $v0, $t9, -0x8
    ctx->r2 = ADD32(ctx->r25, -0X8);
L_8004035C:
    // 0x8004035C: j           L_800407E0
    // 0x80040360: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
        goto L_800407E0;
    // 0x80040360: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
L_80040364:
    // 0x80040364: subu        $v0, $a3, $t2
    ctx->r2 = SUB32(ctx->r7, ctx->r10);
    // 0x80040368: mult        $v0, $t5
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004036C: mflo        $v0
    ctx->r2 = lo;
    // 0x80040370: nop

    // 0x80040374: nop

    // 0x80040378: div         $zero, $v0, $a1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r5)));
    // 0x8004037C: bne         $a1, $zero, L_80040388
    if (ctx->r5 != 0) {
        // 0x80040380: nop
    
            goto L_80040388;
    }
    // 0x80040380: nop

    // 0x80040384: break       7
    do_break(2147746692);
L_80040388:
    // 0x80040388: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8004038C: bne         $a1, $at, L_800403A0
    if (ctx->r5 != ctx->r1) {
        // 0x80040390: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800403A0;
    }
    // 0x80040390: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80040394: bne         $v0, $at, L_800403A0
    if (ctx->r2 != ctx->r1) {
        // 0x80040398: nop
    
            goto L_800403A0;
    }
    // 0x80040398: nop

    // 0x8004039C: break       6
    do_break(2147746716);
L_800403A0:
    // 0x800403A0: mflo        $v0
    ctx->r2 = lo;
    // 0x800403A4: addu        $v0, $t2, $v0
    ctx->r2 = ADD32(ctx->r10, ctx->r2);
    // 0x800403A8: sh          $v0, 0x8($t6)
    MEM_H(0X8, ctx->r14) = ctx->r2;
    // 0x800403AC: subu        $v0, $a3, $a2
    ctx->r2 = SUB32(ctx->r7, ctx->r6);
    // 0x800403B0: slt         $v0, $a1, $v0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
L_800403B4:
    // 0x800403B4: beq         $v0, $zero, L_800407E4
    if (ctx->r2 == 0) {
        // 0x800403B8: addiu       $v0, $t9, -0x8
        ctx->r2 = ADD32(ctx->r25, -0X8);
            goto L_800407E4;
    }
    // 0x800403B8: addiu       $v0, $t9, -0x8
    ctx->r2 = ADD32(ctx->r25, -0X8);
L_800403BC:
    // 0x800403BC: j           L_800407E0
    // 0x800403C0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
        goto L_800407E0;
    // 0x800403C0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
L_800403C4:
    // 0x800403C4: subu        $v0, $a3, $t2
    ctx->r2 = SUB32(ctx->r7, ctx->r10);
    // 0x800403C8: mult        $v0, $t8
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800403CC: mflo        $v0
    ctx->r2 = lo;
    // 0x800403D0: nop

    // 0x800403D4: nop

    // 0x800403D8: div         $zero, $v0, $a1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r5)));
    // 0x800403DC: bne         $a1, $zero, L_800403E8
    if (ctx->r5 != 0) {
        // 0x800403E0: nop
    
            goto L_800403E8;
    }
    // 0x800403E0: nop

    // 0x800403E4: break       7
    do_break(2147746788);
L_800403E8:
    // 0x800403E8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800403EC: bne         $a1, $at, L_80040400
    if (ctx->r5 != ctx->r1) {
        // 0x800403F0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80040400;
    }
    // 0x800403F0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800403F4: bne         $v0, $at, L_80040400
    if (ctx->r2 != ctx->r1) {
        // 0x800403F8: nop
    
            goto L_80040400;
    }
    // 0x800403F8: nop

    // 0x800403FC: break       6
    do_break(2147746812);
L_80040400:
    // 0x80040400: mflo        $v0
    ctx->r2 = lo;
    // 0x80040404: addu        $v0, $t2, $v0
    ctx->r2 = ADD32(ctx->r10, ctx->r2);
    // 0x80040408: sh          $v0, 0x8($t6)
    MEM_H(0X8, ctx->r14) = ctx->r2;
    // 0x8004040C: subu        $v0, $a3, $a2
    ctx->r2 = SUB32(ctx->r7, ctx->r6);
    // 0x80040410: slt         $v0, $a1, $v0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
L_80040414:
    // 0x80040414: beq         $v0, $zero, L_800407E4
    if (ctx->r2 == 0) {
        // 0x80040418: addiu       $v0, $t9, -0x8
        ctx->r2 = ADD32(ctx->r25, -0X8);
            goto L_800407E4;
    }
    // 0x80040418: addiu       $v0, $t9, -0x8
    ctx->r2 = ADD32(ctx->r25, -0X8);
L_8004041C:
    // 0x8004041C: j           L_800407E0
    // 0x80040420: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
        goto L_800407E0;
    // 0x80040420: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
L_80040424:
    // 0x80040424: subu        $v1, $t3, $t4
    ctx->r3 = SUB32(ctx->r11, ctx->r12);
    // 0x80040428: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004042C: mflo        $v0
    ctx->r2 = lo;
    // 0x80040430: nop

    // 0x80040434: nop

    // 0x80040438: div         $zero, $v0, $t1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r9))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r9)));
    // 0x8004043C: bne         $t1, $zero, L_80040448
    if (ctx->r9 != 0) {
        // 0x80040440: nop
    
            goto L_80040448;
    }
    // 0x80040440: nop

    // 0x80040444: break       7
    do_break(2147746884);
L_80040448:
    // 0x80040448: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8004044C: bne         $t1, $at, L_80040460
    if (ctx->r9 != ctx->r1) {
        // 0x80040450: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80040460;
    }
    // 0x80040450: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80040454: bne         $v0, $at, L_80040460
    if (ctx->r2 != ctx->r1) {
        // 0x80040458: nop
    
            goto L_80040460;
    }
    // 0x80040458: nop

    // 0x8004045C: break       6
    do_break(2147746908);
L_80040460:
    // 0x80040460: mflo        $v0
    ctx->r2 = lo;
    // 0x80040464: addu        $v0, $t2, $v0
    ctx->r2 = ADD32(ctx->r10, ctx->r2);
    // 0x80040468: sh          $v0, 0x8($t6)
    MEM_H(0X8, ctx->r14) = ctx->r2;
    // 0x8004046C: subu        $v0, $a3, $a2
    ctx->r2 = SUB32(ctx->r7, ctx->r6);
    // 0x80040470: slt         $v0, $t1, $v0
    ctx->r2 = SIGNED(ctx->r9) < SIGNED(ctx->r2) ? 1 : 0;
L_80040474:
    // 0x80040474: beq         $v0, $zero, L_800407E4
    if (ctx->r2 == 0) {
        // 0x80040478: addiu       $v0, $t9, -0x8
        ctx->r2 = ADD32(ctx->r25, -0X8);
            goto L_800407E4;
    }
    // 0x80040478: addiu       $v0, $t9, -0x8
    ctx->r2 = ADD32(ctx->r25, -0X8);
L_8004047C:
    // 0x8004047C: j           L_800407E0
    // 0x80040480: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
        goto L_800407E0;
    // 0x80040480: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
L_80040484:
    // 0x80040484: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80040488: lh          $v1, -0x7158($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X7158);
    // 0x8004048C: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x80040490: lh          $a0, -0x7154($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X7154);
    // 0x80040494: subu        $v0, $a3, $a2
    ctx->r2 = SUB32(ctx->r7, ctx->r6);
    // 0x80040498: subu        $v1, $v1, $t0
    ctx->r3 = SUB32(ctx->r3, ctx->r8);
    // 0x8004049C: subu        $a0, $t5, $a0
    ctx->r4 = SUB32(ctx->r13, ctx->r4);
    // 0x800404A0: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x800404A4: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800404A8: mflo        $v0
    ctx->r2 = lo;
    // 0x800404AC: subu        $v1, $t3, $t0
    ctx->r3 = SUB32(ctx->r11, ctx->r8);
    // 0x800404B0: nop

    // 0x800404B4: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x800404B8: bne         $v1, $zero, L_800404C4
    if (ctx->r3 != 0) {
        // 0x800404BC: nop
    
            goto L_800404C4;
    }
    // 0x800404BC: nop

    // 0x800404C0: break       7
    do_break(2147747008);
L_800404C4:
    // 0x800404C4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800404C8: bne         $v1, $at, L_800404DC
    if (ctx->r3 != ctx->r1) {
        // 0x800404CC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800404DC;
    }
    // 0x800404CC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800404D0: bne         $v0, $at, L_800404DC
    if (ctx->r2 != ctx->r1) {
        // 0x800404D4: nop
    
            goto L_800404DC;
    }
    // 0x800404D4: nop

    // 0x800404D8: break       6
    do_break(2147747032);
L_800404DC:
    // 0x800404DC: mflo        $v0
    ctx->r2 = lo;
    // 0x800404E0: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
    // 0x800404E4: nop

    // 0x800404E8: j           L_800407DC
    // 0x800404EC: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
        goto L_800407DC;
    // 0x800404EC: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
L_800404F0:
    // 0x800404F0: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x800404F4: lh          $v1, -0x7158($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X7158);
    // 0x800404F8: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x800404FC: lh          $a0, -0x7154($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X7154);
    // 0x80040500: subu        $v0, $a3, $a2
    ctx->r2 = SUB32(ctx->r7, ctx->r6);
    // 0x80040504: subu        $v1, $v1, $t0
    ctx->r3 = SUB32(ctx->r3, ctx->r8);
    // 0x80040508: subu        $a0, $t5, $a0
    ctx->r4 = SUB32(ctx->r13, ctx->r4);
    // 0x8004050C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80040510: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80040514: mflo        $v0
    ctx->r2 = lo;
    // 0x80040518: subu        $v1, $t3, $t0
    ctx->r3 = SUB32(ctx->r11, ctx->r8);
    // 0x8004051C: nop

    // 0x80040520: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x80040524: bne         $v1, $zero, L_80040530
    if (ctx->r3 != 0) {
        // 0x80040528: nop
    
            goto L_80040530;
    }
    // 0x80040528: nop

    // 0x8004052C: break       7
    do_break(2147747116);
L_80040530:
    // 0x80040530: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80040534: bne         $v1, $at, L_80040548
    if (ctx->r3 != ctx->r1) {
        // 0x80040538: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80040548;
    }
    // 0x80040538: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8004053C: bne         $v0, $at, L_80040548
    if (ctx->r2 != ctx->r1) {
        // 0x80040540: nop
    
            goto L_80040548;
    }
    // 0x80040540: nop

    // 0x80040544: break       6
    do_break(2147747140);
L_80040548:
    // 0x80040548: mflo        $v0
    ctx->r2 = lo;
    // 0x8004054C: nop

    // 0x80040550: nop

    // 0x80040554: j           L_800407D8
    // 0x80040558: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
        goto L_800407D8;
    // 0x80040558: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
L_8004055C:
    // 0x8004055C: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80040560: lh          $v1, -0x7158($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X7158);
    // 0x80040564: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x80040568: lh          $a0, -0x7154($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X7154);
    // 0x8004056C: subu        $v0, $a3, $a2
    ctx->r2 = SUB32(ctx->r7, ctx->r6);
    // 0x80040570: subu        $v1, $t3, $v1
    ctx->r3 = SUB32(ctx->r11, ctx->r3);
    // 0x80040574: subu        $a0, $t5, $a0
    ctx->r4 = SUB32(ctx->r13, ctx->r4);
    // 0x80040578: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8004057C: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80040580: mflo        $v0
    ctx->r2 = lo;
    // 0x80040584: subu        $v1, $t3, $t0
    ctx->r3 = SUB32(ctx->r11, ctx->r8);
    // 0x80040588: nop

    // 0x8004058C: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x80040590: bne         $v1, $zero, L_8004059C
    if (ctx->r3 != 0) {
        // 0x80040594: nop
    
            goto L_8004059C;
    }
    // 0x80040594: nop

    // 0x80040598: break       7
    do_break(2147747224);
L_8004059C:
    // 0x8004059C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800405A0: bne         $v1, $at, L_800405B4
    if (ctx->r3 != ctx->r1) {
        // 0x800405A4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800405B4;
    }
    // 0x800405A4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800405A8: bne         $v0, $at, L_800405B4
    if (ctx->r2 != ctx->r1) {
        // 0x800405AC: nop
    
            goto L_800405B4;
    }
    // 0x800405AC: nop

    // 0x800405B0: break       6
    do_break(2147747248);
L_800405B4:
    // 0x800405B4: mflo        $v0
    ctx->r2 = lo;
    // 0x800405B8: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
    // 0x800405BC: nop

    // 0x800405C0: j           L_800407DC
    // 0x800405C4: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
        goto L_800407DC;
    // 0x800405C4: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
L_800405C8:
    // 0x800405C8: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x800405CC: lh          $v1, -0x7158($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X7158);
    // 0x800405D0: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x800405D4: lh          $a0, -0x7154($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X7154);
    // 0x800405D8: subu        $v0, $a3, $a2
    ctx->r2 = SUB32(ctx->r7, ctx->r6);
    // 0x800405DC: subu        $v1, $t3, $v1
    ctx->r3 = SUB32(ctx->r11, ctx->r3);
    // 0x800405E0: subu        $a0, $t5, $a0
    ctx->r4 = SUB32(ctx->r13, ctx->r4);
    // 0x800405E4: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x800405E8: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800405EC: mflo        $v0
    ctx->r2 = lo;
    // 0x800405F0: subu        $v1, $t3, $t0
    ctx->r3 = SUB32(ctx->r11, ctx->r8);
    // 0x800405F4: nop

    // 0x800405F8: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x800405FC: bne         $v1, $zero, L_80040608
    if (ctx->r3 != 0) {
        // 0x80040600: nop
    
            goto L_80040608;
    }
    // 0x80040600: nop

    // 0x80040604: break       7
    do_break(2147747332);
L_80040608:
    // 0x80040608: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8004060C: bne         $v1, $at, L_80040620
    if (ctx->r3 != ctx->r1) {
        // 0x80040610: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80040620;
    }
    // 0x80040610: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80040614: bne         $v0, $at, L_80040620
    if (ctx->r2 != ctx->r1) {
        // 0x80040618: nop
    
            goto L_80040620;
    }
    // 0x80040618: nop

    // 0x8004061C: break       6
    do_break(2147747356);
L_80040620:
    // 0x80040620: mflo        $v0
    ctx->r2 = lo;
    // 0x80040624: nop

    // 0x80040628: nop

    // 0x8004062C: j           L_800407D8
    // 0x80040630: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
        goto L_800407D8;
    // 0x80040630: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
L_80040634:
    // 0x80040634: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80040638: lh          $v1, -0x7158($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X7158);
    // 0x8004063C: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x80040640: lh          $a0, -0x7154($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X7154);
    // 0x80040644: subu        $v0, $a3, $a2
    ctx->r2 = SUB32(ctx->r7, ctx->r6);
    // 0x80040648: subu        $v1, $v1, $t0
    ctx->r3 = SUB32(ctx->r3, ctx->r8);
    // 0x8004064C: subu        $a0, $a0, $t4
    ctx->r4 = SUB32(ctx->r4, ctx->r12);
    // 0x80040650: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80040654: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80040658: mflo        $v0
    ctx->r2 = lo;
    // 0x8004065C: subu        $v1, $t3, $t0
    ctx->r3 = SUB32(ctx->r11, ctx->r8);
    // 0x80040660: nop

    // 0x80040664: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x80040668: bne         $v1, $zero, L_80040674
    if (ctx->r3 != 0) {
        // 0x8004066C: nop
    
            goto L_80040674;
    }
    // 0x8004066C: nop

    // 0x80040670: break       7
    do_break(2147747440);
L_80040674:
    // 0x80040674: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80040678: bne         $v1, $at, L_8004068C
    if (ctx->r3 != ctx->r1) {
        // 0x8004067C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8004068C;
    }
    // 0x8004067C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80040680: bne         $v0, $at, L_8004068C
    if (ctx->r2 != ctx->r1) {
        // 0x80040684: nop
    
            goto L_8004068C;
    }
    // 0x80040684: nop

    // 0x80040688: break       6
    do_break(2147747464);
L_8004068C:
    // 0x8004068C: mflo        $v0
    ctx->r2 = lo;
    // 0x80040690: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x80040694: nop

    // 0x80040698: j           L_800407DC
    // 0x8004069C: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
        goto L_800407DC;
    // 0x8004069C: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
L_800406A0:
    // 0x800406A0: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x800406A4: lh          $v1, -0x7158($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X7158);
    // 0x800406A8: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x800406AC: lh          $a0, -0x7154($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X7154);
    // 0x800406B0: subu        $v0, $a3, $a2
    ctx->r2 = SUB32(ctx->r7, ctx->r6);
    // 0x800406B4: subu        $v1, $v1, $t0
    ctx->r3 = SUB32(ctx->r3, ctx->r8);
    // 0x800406B8: subu        $a0, $a0, $t4
    ctx->r4 = SUB32(ctx->r4, ctx->r12);
    // 0x800406BC: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x800406C0: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800406C4: mflo        $v0
    ctx->r2 = lo;
    // 0x800406C8: subu        $v1, $t3, $t0
    ctx->r3 = SUB32(ctx->r11, ctx->r8);
    // 0x800406CC: nop

    // 0x800406D0: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x800406D4: bne         $v1, $zero, L_800406E0
    if (ctx->r3 != 0) {
        // 0x800406D8: nop
    
            goto L_800406E0;
    }
    // 0x800406D8: nop

    // 0x800406DC: break       7
    do_break(2147747548);
L_800406E0:
    // 0x800406E0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800406E4: bne         $v1, $at, L_800406F8
    if (ctx->r3 != ctx->r1) {
        // 0x800406E8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800406F8;
    }
    // 0x800406E8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800406EC: bne         $v0, $at, L_800406F8
    if (ctx->r2 != ctx->r1) {
        // 0x800406F0: nop
    
            goto L_800406F8;
    }
    // 0x800406F0: nop

    // 0x800406F4: break       6
    do_break(2147747572);
L_800406F8:
    // 0x800406F8: mflo        $v0
    ctx->r2 = lo;
    // 0x800406FC: nop

    // 0x80040700: nop

    // 0x80040704: j           L_800407D8
    // 0x80040708: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
        goto L_800407D8;
    // 0x80040708: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
L_8004070C:
    // 0x8004070C: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80040710: lh          $v1, -0x7158($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X7158);
    // 0x80040714: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x80040718: lh          $a0, -0x7154($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X7154);
    // 0x8004071C: subu        $v0, $a3, $a2
    ctx->r2 = SUB32(ctx->r7, ctx->r6);
    // 0x80040720: subu        $v1, $t3, $v1
    ctx->r3 = SUB32(ctx->r11, ctx->r3);
    // 0x80040724: subu        $a0, $a0, $t4
    ctx->r4 = SUB32(ctx->r4, ctx->r12);
    // 0x80040728: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8004072C: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80040730: mflo        $v0
    ctx->r2 = lo;
    // 0x80040734: subu        $v1, $t3, $t0
    ctx->r3 = SUB32(ctx->r11, ctx->r8);
    // 0x80040738: nop

    // 0x8004073C: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x80040740: bne         $v1, $zero, L_8004074C
    if (ctx->r3 != 0) {
        // 0x80040744: nop
    
            goto L_8004074C;
    }
    // 0x80040744: nop

    // 0x80040748: break       7
    do_break(2147747656);
L_8004074C:
    // 0x8004074C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80040750: bne         $v1, $at, L_80040764
    if (ctx->r3 != ctx->r1) {
        // 0x80040754: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80040764;
    }
    // 0x80040754: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80040758: bne         $v0, $at, L_80040764
    if (ctx->r2 != ctx->r1) {
        // 0x8004075C: nop
    
            goto L_80040764;
    }
    // 0x8004075C: nop

    // 0x80040760: break       6
    do_break(2147747680);
L_80040764:
    // 0x80040764: mflo        $v0
    ctx->r2 = lo;
    // 0x80040768: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x8004076C: nop

    // 0x80040770: j           L_800407DC
    // 0x80040774: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
        goto L_800407DC;
    // 0x80040774: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
L_80040778:
    // 0x80040778: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8004077C: lh          $v1, -0x7158($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X7158);
    // 0x80040780: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x80040784: lh          $a0, -0x7154($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X7154);
    // 0x80040788: subu        $v0, $a3, $a2
    ctx->r2 = SUB32(ctx->r7, ctx->r6);
    // 0x8004078C: subu        $v1, $t3, $v1
    ctx->r3 = SUB32(ctx->r11, ctx->r3);
    // 0x80040790: subu        $a0, $a0, $t4
    ctx->r4 = SUB32(ctx->r4, ctx->r12);
    // 0x80040794: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80040798: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004079C: mflo        $v0
    ctx->r2 = lo;
    // 0x800407A0: subu        $v1, $t3, $t0
    ctx->r3 = SUB32(ctx->r11, ctx->r8);
    // 0x800407A4: nop

    // 0x800407A8: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x800407AC: bne         $v1, $zero, L_800407B8
    if (ctx->r3 != 0) {
        // 0x800407B0: nop
    
            goto L_800407B8;
    }
    // 0x800407B0: nop

    // 0x800407B4: break       7
    do_break(2147747764);
L_800407B8:
    // 0x800407B8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800407BC: bne         $v1, $at, L_800407D0
    if (ctx->r3 != ctx->r1) {
        // 0x800407C0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800407D0;
    }
    // 0x800407C0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800407C4: bne         $v0, $at, L_800407D0
    if (ctx->r2 != ctx->r1) {
        // 0x800407C8: nop
    
            goto L_800407D0;
    }
    // 0x800407C8: nop

    // 0x800407CC: break       6
    do_break(2147747788);
L_800407D0:
    // 0x800407D0: mflo        $v0
    ctx->r2 = lo;
    // 0x800407D4: addiu       $t7, $zero, 0x5
    ctx->r15 = ADD32(0, 0X5);
L_800407D8:
    // 0x800407D8: subu        $v0, $a3, $v0
    ctx->r2 = SUB32(ctx->r7, ctx->r2);
L_800407DC:
    // 0x800407DC: sh          $v0, 0x8($t6)
    MEM_H(0X8, ctx->r14) = ctx->r2;
L_800407E0:
    // 0x800407E0: addiu       $v0, $t9, -0x8
    ctx->r2 = ADD32(ctx->r25, -0X8);
L_800407E4:
    // 0x800407E4: sltiu       $v0, $v0, 0x4
    ctx->r2 = ctx->r2 < 0X4 ? 1 : 0;
    // 0x800407E8: bnel        $v0, $zero, L_800407F0
    if (ctx->r2 != 0) {
        // 0x800407EC: sh          $t2, 0x8($t6)
        MEM_H(0X8, ctx->r14) = ctx->r10;
            goto L_800407F0;
    }
    goto skip_9;
    // 0x800407EC: sh          $t2, 0x8($t6)
    MEM_H(0X8, ctx->r14) = ctx->r10;
    skip_9:
L_800407F0:
    // 0x800407F0: addiu       $v0, $t9, -0x10
    ctx->r2 = ADD32(ctx->r25, -0X10);
    // 0x800407F4: sltiu       $v0, $v0, 0x4
    ctx->r2 = ctx->r2 < 0X4 ? 1 : 0;
    // 0x800407F8: bnel        $v0, $zero, L_80040800
    if (ctx->r2 != 0) {
        // 0x800407FC: sh          $t2, 0xA($t6)
        MEM_H(0XA, ctx->r14) = ctx->r10;
            goto L_80040800;
    }
    goto skip_10;
    // 0x800407FC: sh          $t2, 0xA($t6)
    MEM_H(0XA, ctx->r14) = ctx->r10;
    skip_10:
L_80040800:
    // 0x80040800: lhu         $v0, 0x8($t6)
    ctx->r2 = MEM_HU(ctx->r14, 0X8);
    // 0x80040804: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x80040808: lhu         $v1, -0x26AC($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X26AC);
    // 0x8004080C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80040810: sh          $v0, 0x8($t6)
    MEM_H(0X8, ctx->r14) = ctx->r2;
    // 0x80040814: lhu         $v0, 0xA($t6)
    ctx->r2 = MEM_HU(ctx->r14, 0XA);
    // 0x80040818: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x8004081C: lhu         $v1, -0x26AE($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X26AE);
    // 0x80040820: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80040824: sb          $t7, 0xB60($at)
    MEM_B(0XB60, ctx->r1) = ctx->r15;
    // 0x80040828: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8004082C: jr          $ra
    // 0x80040830: sh          $v0, 0xA($t6)
    MEM_H(0XA, ctx->r14) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80040830: sh          $v0, 0xA($t6)
    MEM_H(0XA, ctx->r14) = ctx->r2;
;}
RECOMP_FUNC void func_8004E458_29858(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004E458: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8004E45C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8004E460: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8004E464: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    // 0x8004E468: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8004E46C: lw          $s1, 0x40($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X40);
    // 0x8004E470: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8004E474: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8004E478: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x8004E47C: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    // 0x8004E480: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8004E484: addiu       $a1, $v1, 0xC4
    ctx->r5 = ADD32(ctx->r3, 0XC4);
    // 0x8004E488: sw          $a2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r6;
    // 0x8004E48C: addiu       $a2, $s0, 0x44
    ctx->r6 = ADD32(ctx->r16, 0X44);
    // 0x8004E490: sw          $a3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r7;
    // 0x8004E494: addiu       $a3, $v1, 0xCA
    ctx->r7 = ADD32(ctx->r3, 0XCA);
    // 0x8004E498: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8004E49C: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x8004E4A0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8004E4A4: jal         0x8004E4CC
    // 0x8004E4A8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_8004E4CC_298CC(rdram, ctx);
        goto after_0;
    // 0x8004E4A8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_0:
    // 0x8004E4AC: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    // 0x8004E4B0: sh          $zero, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = 0;
    // 0x8004E4B4: sh          $s1, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r17;
    // 0x8004E4B8: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8004E4BC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8004E4C0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8004E4C4: jr          $ra
    // 0x8004E4C8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8004E4C8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8004C3C0_277C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004C3C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004C3C4: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x8004C3C8: addiu       $v0, $v0, -0x3050
    ctx->r2 = ADD32(ctx->r2, -0X3050);
    // 0x8004C3CC: addiu       $v1, $v0, 0x240
    ctx->r3 = ADD32(ctx->r2, 0X240);
    // 0x8004C3D0: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x8004C3D4: sw          $v0, -0x7150($at)
    MEM_W(-0X7150, ctx->r1) = ctx->r2;
    // 0x8004C3D8: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8004C3DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004C3E0: beq         $v0, $zero, L_8004C44C
    if (ctx->r2 == 0) {
        // 0x8004C3E4: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_8004C44C;
    }
    // 0x8004C3E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8004C3E8: addu        $s0, $v1, $zero
    ctx->r16 = ADD32(ctx->r3, 0);
L_8004C3EC:
    // 0x8004C3EC: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x8004C3F0: lw          $a0, -0x7150($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7150);
    // 0x8004C3F4: lb          $v0, 0x0($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X0);
    // 0x8004C3F8: lbu         $v1, 0x6($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X6);
    // 0x8004C3FC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8004C400: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8004C404: beq         $v0, $zero, L_8004C42C
    if (ctx->r2 == 0) {
        // 0x8004C408: nop
    
            goto L_8004C42C;
    }
    // 0x8004C408: nop

    // 0x8004C40C: lbu         $v0, 0x2($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X2);
    // 0x8004C410: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8004C414: lw          $v1, 0xC68($v1)
    ctx->r3 = MEM_W(ctx->r3, 0XC68);
    // 0x8004C418: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8004C41C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8004C420: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8004C424: jalr        $v0
    // 0x8004C428: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8004C428: nop

    after_0:
L_8004C42C:
    // 0x8004C42C: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8004C430: lw          $v0, -0x7150($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7150);
    // 0x8004C434: addiu       $v0, $v0, 0x24
    ctx->r2 = ADD32(ctx->r2, 0X24);
    // 0x8004C438: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x8004C43C: sw          $v0, -0x7150($at)
    MEM_W(-0X7150, ctx->r1) = ctx->r2;
    // 0x8004C440: sltu        $v0, $v0, $s0
    ctx->r2 = ctx->r2 < ctx->r16 ? 1 : 0;
    // 0x8004C444: bne         $v0, $zero, L_8004C3EC
    if (ctx->r2 != 0) {
        // 0x8004C448: nop
    
            goto L_8004C3EC;
    }
    // 0x8004C448: nop

L_8004C44C:
    // 0x8004C44C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004C450: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8004C454: jr          $ra
    // 0x8004C458: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8004C458: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8004A344_25744(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004A344: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8004A348: jr          $ra
    // 0x8004A34C: lbu         $v0, -0x3991($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3991);
    TRACE_RETURN()
    return;
    // 0x8004A34C: lbu         $v0, -0x3991($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3991);
;}
RECOMP_FUNC void func_8002B138_6538(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002B138: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8002B13C: lw          $a0, 0x22D0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X22D0);
    // 0x8002B140: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002B144: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002B148: jal         0x8008ADE8
    // 0x8002B14C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8008ADE8_661E8(rdram, ctx);
        goto after_0;
    // 0x8002B14C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x8002B150: bne         $v0, $zero, L_8002B1C4
    if (ctx->r2 != 0) {
        // 0x8002B154: nop
    
            goto L_8002B1C4;
    }
    // 0x8002B154: nop

    // 0x8002B158: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8002B15C: jal         0x8008ADE8
    // 0x8002B160: lw          $a0, 0x22D4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X22D4);
    func_8008ADE8_661E8(rdram, ctx);
        goto after_1;
    // 0x8002B160: lw          $a0, 0x22D4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X22D4);
    after_1:
    // 0x8002B164: bne         $v0, $zero, L_8002B1C4
    if (ctx->r2 != 0) {
        // 0x8002B168: nop
    
            goto L_8002B1C4;
    }
    // 0x8002B168: nop

    // 0x8002B16C: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8002B170: lh          $a0, 0x22DA($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X22DA);
    // 0x8002B174: lui         $s0, 0x8014
    ctx->r16 = S32(0X8014 << 16);
    // 0x8002B178: addiu       $s0, $s0, 0x2250
    ctx->r16 = ADD32(ctx->r16, 0X2250);
    // 0x8002B17C: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x8002B180: addiu       $a1, $a1, 0x7DA8
    ctx->r5 = ADD32(ctx->r5, 0X7DA8);
    // 0x8002B184: lui         $a2, 0x86
    ctx->r6 = S32(0X86 << 16);
    // 0x8002B188: addiu       $a2, $a2, 0x7EB0
    ctx->r6 = ADD32(ctx->r6, 0X7EB0);
    // 0x8002B18C: jal         0x80028D30
    // 0x8002B190: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_80028D30_4130(rdram, ctx);
        goto after_2;
    // 0x8002B190: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8002B194: jal         0x8008A7D0
    // 0x8002B198: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8008A7D0_65BD0(rdram, ctx);
        goto after_3;
    // 0x8002B198: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8002B19C: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8002B1A0: addiu       $a0, $a0, -0x3F88
    ctx->r4 = ADD32(ctx->r4, -0X3F88);
    // 0x8002B1A4: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002B1A8: sw          $v0, 0x22D0($at)
    MEM_W(0X22D0, ctx->r1) = ctx->r2;
    // 0x8002B1AC: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x8002B1B0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8002B1B4: jal         0x8002BBBC
    // 0x8002B1B8: sh          $v0, -0x3F76($at)
    MEM_H(-0X3F76, ctx->r1) = ctx->r2;
    func_8002BBBC_6FBC(rdram, ctx);
        goto after_4;
    // 0x8002B1B8: sh          $v0, -0x3F76($at)
    MEM_H(-0X3F76, ctx->r1) = ctx->r2;
    after_4:
    // 0x8002B1BC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002B1C0: sb          $zero, 0x22D8($at)
    MEM_B(0X22D8, ctx->r1) = 0;
L_8002B1C4:
    // 0x8002B1C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002B1C8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8002B1CC: jr          $ra
    // 0x8002B1D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8002B1D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80083E30_5F230(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80083E30: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80083E34: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80083E38: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x80083E3C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80083E40: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x80083E44: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80083E48: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80083E4C: addiu       $a1, $a1, 0x4988
    ctx->r5 = ADD32(ctx->r5, 0X4988);
    // 0x80083E50: andi        $v0, $s5, 0xFFFF
    ctx->r2 = ctx->r21 & 0XFFFF;
    // 0x80083E54: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80083E58: addiu       $a0, $a0, -0x1A64
    ctx->r4 = ADD32(ctx->r4, -0X1A64);
    // 0x80083E5C: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x80083E60: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80083E64: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80083E68: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80083E6C: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x80083E70: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x80083E74: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80083E78: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80083E7C: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80083E80: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80083E84: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
L_80083E88:
    // 0x80083E88: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    // 0x80083E8C: bnel        $v0, $a2, L_80083E94
    if (ctx->r2 != ctx->r6) {
        // 0x80083E90: sh          $s5, 0x0($a1)
        MEM_H(0X0, ctx->r5) = ctx->r21;
            goto L_80083E94;
    }
    goto skip_0;
    // 0x80083E90: sh          $s5, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r21;
    skip_0:
L_80083E94:
    // 0x80083E94: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x80083E98: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80083E9C: slti        $v0, $s1, 0x12
    ctx->r2 = SIGNED(ctx->r17) < 0X12 ? 1 : 0;
    // 0x80083EA0: bne         $v0, $zero, L_80083E88
    if (ctx->r2 != 0) {
        // 0x80083EA4: addiu       $v1, $v1, 0x2
        ctx->r3 = ADD32(ctx->r3, 0X2);
            goto L_80083E88;
    }
    // 0x80083EA4: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x80083EA8: andi        $v1, $s5, 0xFFFF
    ctx->r3 = ctx->r21 & 0XFFFF;
    // 0x80083EAC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80083EB0: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80083EB4: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80083EB8: lw          $a1, -0x1AB0($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1AB0);
    // 0x80083EBC: beq         $a1, $zero, L_80083F78
    if (ctx->r5 == 0) {
        // 0x80083EC0: sll         $v1, $v1, 3
        ctx->r3 = S32(ctx->r3 << 3);
            goto L_80083F78;
    }
    // 0x80083EC0: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80083EC4: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80083EC8: addiu       $v0, $v0, -0x4F0C
    ctx->r2 = ADD32(ctx->r2, -0X4F0C);
    // 0x80083ECC: addu        $s4, $v1, $v0
    ctx->r20 = ADD32(ctx->r3, ctx->r2);
    // 0x80083ED0: lh          $a0, 0x4($s4)
    ctx->r4 = MEM_H(ctx->r20, 0X4);
    // 0x80083ED4: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x80083ED8: addiu       $v1, $zero, -0x8
    ctx->r3 = ADD32(0, -0X8);
    // 0x80083EDC: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x80083EE0: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x80083EE4: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x80083EE8: blez        $a0, L_80083F78
    if (SIGNED(ctx->r4) <= 0) {
        // 0x80083EEC: and         $s0, $v0, $v1
        ctx->r16 = ctx->r2 & ctx->r3;
            goto L_80083F78;
    }
    // 0x80083EEC: and         $s0, $v0, $v1
    ctx->r16 = ctx->r2 & ctx->r3;
    // 0x80083EF0: addiu       $s7, $zero, -0x1
    ctx->r23 = ADD32(0, -0X1);
    // 0x80083EF4: addiu       $s6, $zero, -0x8
    ctx->r22 = ADD32(0, -0X8);
    // 0x80083EF8: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
L_80083EFC:
    // 0x80083EFC: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x80083F00: sll         $s3, $s1, 1
    ctx->r19 = S32(ctx->r17 << 1);
    // 0x80083F04: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x80083F08: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    // 0x80083F0C: beq         $v0, $s7, L_80083F60
    if (ctx->r2 == ctx->r23) {
        // 0x80083F10: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80083F60;
    }
    // 0x80083F10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80083F14: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80083F18: andi        $a2, $s5, 0xFFFF
    ctx->r6 = ctx->r21 & 0XFFFF;
    // 0x80083F1C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80083F20: jal         0x8007FB78
    // 0x80083F24: sw          $a0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r4;
    func_8007FB78_5AF78(rdram, ctx);
        goto after_0;
    // 0x80083F24: sw          $a0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r4;
    after_0:
    // 0x80083F28: lw          $v1, 0x0($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X0);
    // 0x80083F2C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80083F30: lui         $a1, 0x800C
    ctx->r5 = S32(0X800C << 16);
    // 0x80083F34: addiu       $a1, $a1, 0x6270
    ctx->r5 = ADD32(ctx->r5, 0X6270);
    // 0x80083F38: addu        $v1, $s3, $v1
    ctx->r3 = ADD32(ctx->r19, ctx->r3);
    // 0x80083F3C: lh          $a0, 0x0($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X0);
    // 0x80083F40: lui         $a2, 0x4A
    ctx->r6 = S32(0X4A << 16);
    // 0x80083F44: addiu       $a2, $a2, 0x3A30
    ctx->r6 = ADD32(ctx->r6, 0X3A30);
    // 0x80083F48: jal         0x80028D30
    // 0x80083F4C: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_80028D30_4130(rdram, ctx);
        goto after_1;
    // 0x80083F4C: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80083F50: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x80083F54: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x80083F58: j           L_80083F64
    // 0x80083F5C: and         $s0, $v0, $s6
    ctx->r16 = ctx->r2 & ctx->r22;
        goto L_80083F64;
    // 0x80083F5C: and         $s0, $v0, $s6
    ctx->r16 = ctx->r2 & ctx->r22;
L_80083F60:
    // 0x80083F60: sw          $zero, 0x0($s2)
    MEM_W(0X0, ctx->r18) = 0;
L_80083F64:
    // 0x80083F64: lh          $v0, 0x4($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X4);
    // 0x80083F68: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80083F6C: slt         $v0, $s1, $v0
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80083F70: bne         $v0, $zero, L_80083EFC
    if (ctx->r2 != 0) {
        // 0x80083F74: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_80083EFC;
    }
    // 0x80083F74: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
L_80083F78:
    // 0x80083F78: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x80083F7C: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x80083F80: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80083F84: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80083F88: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80083F8C: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80083F90: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80083F94: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80083F98: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80083F9C: jr          $ra
    // 0x80083FA0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x80083FA0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80073EE0_4F2E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80073EE0: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80073EE4: lb          $v1, -0x3BBD($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BBD);
    // 0x80073EE8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80073EEC: bne         $v1, $v0, L_80073F30
    if (ctx->r3 != ctx->r2) {
        // 0x80073EF0: nop
    
            goto L_80073F30;
    }
    // 0x80073EF0: nop

    // 0x80073EF4: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80073EF8: addiu       $v0, $v0, 0x3C7C
    ctx->r2 = ADD32(ctx->r2, 0X3C7C);
    // 0x80073EFC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80073F00: sw          $v0, 0x298($at)
    MEM_W(0X298, ctx->r1) = ctx->r2;
    // 0x80073F04: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80073F08: addiu       $v0, $v0, 0x3E1C
    ctx->r2 = ADD32(ctx->r2, 0X3E1C);
    // 0x80073F0C: lui         $at, 0x8019
    ctx->r1 = S32(0X8019 << 16);
    // 0x80073F10: sw          $v0, 0x3C60($at)
    MEM_W(0X3C60, ctx->r1) = ctx->r2;
    // 0x80073F14: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80073F18: addiu       $v0, $v0, 0x3E7C
    ctx->r2 = ADD32(ctx->r2, 0X3E7C);
    // 0x80073F1C: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80073F20: sw          $v0, -0x14F0($at)
    MEM_W(-0X14F0, ctx->r1) = ctx->r2;
    // 0x80073F24: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80073F28: j           L_80073F68
    // 0x80073F2C: addiu       $v0, $v0, 0x3F00
    ctx->r2 = ADD32(ctx->r2, 0X3F00);
        goto L_80073F68;
    // 0x80073F2C: addiu       $v0, $v0, 0x3F00
    ctx->r2 = ADD32(ctx->r2, 0X3F00);
L_80073F30:
    // 0x80073F30: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80073F34: addiu       $v0, $v0, 0x39E0
    ctx->r2 = ADD32(ctx->r2, 0X39E0);
    // 0x80073F38: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80073F3C: sw          $v0, 0x298($at)
    MEM_W(0X298, ctx->r1) = ctx->r2;
    // 0x80073F40: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80073F44: addiu       $v0, $v0, 0x3B80
    ctx->r2 = ADD32(ctx->r2, 0X3B80);
    // 0x80073F48: lui         $at, 0x8019
    ctx->r1 = S32(0X8019 << 16);
    // 0x80073F4C: sw          $v0, 0x3C60($at)
    MEM_W(0X3C60, ctx->r1) = ctx->r2;
    // 0x80073F50: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80073F54: addiu       $v0, $v0, 0x3BE0
    ctx->r2 = ADD32(ctx->r2, 0X3BE0);
    // 0x80073F58: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80073F5C: sw          $v0, -0x14F0($at)
    MEM_W(-0X14F0, ctx->r1) = ctx->r2;
    // 0x80073F60: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80073F64: addiu       $v0, $v0, 0x3C64
    ctx->r2 = ADD32(ctx->r2, 0X3C64);
L_80073F68:
    // 0x80073F68: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80073F6C: jr          $ra
    // 0x80073F70: sw          $v0, 0x6B3C($at)
    MEM_W(0X6B3C, ctx->r1) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80073F70: sw          $v0, 0x6B3C($at)
    MEM_W(0X6B3C, ctx->r1) = ctx->r2;
    // 0x80073F74: nop

    // 0x80073F78: nop

    // 0x80073F7C: nop

;}
RECOMP_FUNC void func_80071B5C_4CF5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80071B5C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80071B60: lw          $v0, -0x3BB4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3BB4);
    // 0x80071B64: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x80071B68: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x80071B6C: sw          $ra, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r31;
    // 0x80071B70: sw          $fp, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r30;
    // 0x80071B74: sw          $s7, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r23;
    // 0x80071B78: sw          $s6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r22;
    // 0x80071B7C: sw          $s5, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r21;
    // 0x80071B80: sw          $s4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r20;
    // 0x80071B84: sw          $s3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r19;
    // 0x80071B88: sw          $s2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r18;
    // 0x80071B8C: sw          $s1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r17;
    // 0x80071B90: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80071B94: beq         $v0, $zero, L_80071BA4
    if (ctx->r2 == 0) {
        // 0x80071B98: sw          $s0, 0x58($sp)
        MEM_W(0X58, ctx->r29) = ctx->r16;
            goto L_80071BA4;
    }
    // 0x80071B98: sw          $s0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r16;
    // 0x80071B9C: jal         0x80072430
    // 0x80071BA0: nop

    func_80072430_4D830(rdram, ctx);
        goto after_0;
    // 0x80071BA0: nop

    after_0:
L_80071BA4:
    // 0x80071BA4: lui         $s6, 0x801C
    ctx->r22 = S32(0X801C << 16);
    // 0x80071BA8: lb          $s6, -0x3BC8($s6)
    ctx->r22 = MEM_B(ctx->r22, -0X3BC8);
    // 0x80071BAC: lui         $s3, 0x800B
    ctx->r19 = S32(0X800B << 16);
    // 0x80071BB0: addu        $s3, $s3, $s6
    ctx->r19 = ADD32(ctx->r19, ctx->r22);
    // 0x80071BB4: lb          $s3, 0x3580($s3)
    ctx->r19 = MEM_B(ctx->r19, 0X3580);
    // 0x80071BB8: bltz        $s3, L_80071F6C
    if (SIGNED(ctx->r19) < 0) {
        // 0x80071BBC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80071F6C;
    }
    // 0x80071BBC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80071BC0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80071BC4: sw          $v0, 0x5088($at)
    MEM_W(0X5088, ctx->r1) = ctx->r2;
    // 0x80071BC8: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80071BCC: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x80071BD0: addiu       $t7, $sp, 0x10
    ctx->r15 = ADD32(ctx->r29, 0X10);
    // 0x80071BD4: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x80071BD8: addiu       $t6, $t6, 0x35A0
    ctx->r14 = ADD32(ctx->r14, 0X35A0);
L_80071BDC:
    // 0x80071BDC: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x80071BE0: addu        $t3, $t7, $zero
    ctx->r11 = ADD32(ctx->r15, 0);
    // 0x80071BE4: addu        $t4, $t6, $zero
    ctx->r12 = ADD32(ctx->r14, 0);
L_80071BE8:
    // 0x80071BE8: addu        $a3, $t3, $zero
    ctx->r7 = ADD32(ctx->r11, 0);
    // 0x80071BEC: addu        $t2, $t4, $zero
    ctx->r10 = ADD32(ctx->r12, 0);
    // 0x80071BF0: addiu       $t5, $t3, 0x10
    ctx->r13 = ADD32(ctx->r11, 0X10);
L_80071BF4:
    // 0x80071BF4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80071BF8: lw          $a0, 0x55A0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X55A0);
    // 0x80071BFC: lw          $a2, 0x4($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X4);
    // 0x80071C00: lw          $t1, 0x0($t2)
    ctx->r9 = MEM_W(ctx->r10, 0X0);
    // 0x80071C04: sltu        $v0, $s1, $a2
    ctx->r2 = ctx->r17 < ctx->r6 ? 1 : 0;
    // 0x80071C08: beq         $v0, $zero, L_80071C54
    if (ctx->r2 == 0) {
        // 0x80071C0C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80071C54;
    }
    // 0x80071C0C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80071C10: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
    // 0x80071C14: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
L_80071C18:
    // 0x80071C18: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80071C1C: bnel        $v0, $t1, L_80071C2C
    if (ctx->r2 != ctx->r9) {
        // 0x80071C20: addiu       $a1, $a1, 0x30
        ctx->r5 = ADD32(ctx->r5, 0X30);
            goto L_80071C2C;
    }
    goto skip_0;
    // 0x80071C20: addiu       $a1, $a1, 0x30
    ctx->r5 = ADD32(ctx->r5, 0X30);
    skip_0:
    // 0x80071C24: j           L_80071C54
    // 0x80071C28: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
        goto L_80071C54;
    // 0x80071C28: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
L_80071C2C:
    // 0x80071C2C: lw          $v1, 0x4($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X4);
    // 0x80071C30: beq         $v1, $zero, L_80071C44
    if (ctx->r3 == 0) {
        // 0x80071C34: addiu       $a0, $a0, 0x30
        ctx->r4 = ADD32(ctx->r4, 0X30);
            goto L_80071C44;
    }
    // 0x80071C34: addiu       $a0, $a0, 0x30
    ctx->r4 = ADD32(ctx->r4, 0X30);
    // 0x80071C38: sltu        $v0, $v1, $a2
    ctx->r2 = ctx->r3 < ctx->r6 ? 1 : 0;
    // 0x80071C3C: bnel        $v0, $zero, L_80071C44
    if (ctx->r2 != 0) {
        // 0x80071C40: addu        $a2, $v1, $zero
        ctx->r6 = ADD32(ctx->r3, 0);
            goto L_80071C44;
    }
    goto skip_1;
    // 0x80071C40: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    skip_1:
L_80071C44:
    // 0x80071C44: subu        $v0, $a0, $t0
    ctx->r2 = SUB32(ctx->r4, ctx->r8);
    // 0x80071C48: sltu        $v0, $v0, $a2
    ctx->r2 = ctx->r2 < ctx->r6 ? 1 : 0;
    // 0x80071C4C: bne         $v0, $zero, L_80071C18
    if (ctx->r2 != 0) {
        // 0x80071C50: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80071C18;
    }
    // 0x80071C50: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80071C54:
    // 0x80071C54: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x80071C58: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x80071C5C: slt         $v0, $a3, $t5
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x80071C60: bne         $v0, $zero, L_80071BF4
    if (ctx->r2 != 0) {
        // 0x80071C64: addiu       $t2, $t2, 0x4
        ctx->r10 = ADD32(ctx->r10, 0X4);
            goto L_80071BF4;
    }
    // 0x80071C64: addiu       $t2, $t2, 0x4
    ctx->r10 = ADD32(ctx->r10, 0X4);
    // 0x80071C68: addiu       $t3, $t3, 0x10
    ctx->r11 = ADD32(ctx->r11, 0X10);
    // 0x80071C6C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80071C70: slti        $v0, $s2, 0x2
    ctx->r2 = SIGNED(ctx->r18) < 0X2 ? 1 : 0;
    // 0x80071C74: bne         $v0, $zero, L_80071BE8
    if (ctx->r2 != 0) {
        // 0x80071C78: addiu       $t4, $t4, 0x10
        ctx->r12 = ADD32(ctx->r12, 0X10);
            goto L_80071BE8;
    }
    // 0x80071C78: addiu       $t4, $t4, 0x10
    ctx->r12 = ADD32(ctx->r12, 0X10);
    // 0x80071C7C: addiu       $t7, $t7, 0x20
    ctx->r15 = ADD32(ctx->r15, 0X20);
    // 0x80071C80: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80071C84: slti        $v0, $s0, 0x2
    ctx->r2 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x80071C88: bne         $v0, $zero, L_80071BDC
    if (ctx->r2 != 0) {
        // 0x80071C8C: addiu       $t6, $t6, 0x20
        ctx->r14 = ADD32(ctx->r14, 0X20);
            goto L_80071BDC;
    }
    // 0x80071C8C: addiu       $t6, $t6, 0x20
    ctx->r14 = ADD32(ctx->r14, 0X20);
    // 0x80071C90: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80071C94: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x80071C98: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80071C9C: bne         $v1, $v0, L_80071D9C
    if (ctx->r3 != ctx->r2) {
        // 0x80071CA0: sll         $v0, $s3, 9
        ctx->r2 = S32(ctx->r19 << 9);
            goto L_80071D9C;
    }
    // 0x80071CA0: sll         $v0, $s3, 9
    ctx->r2 = S32(ctx->r19 << 9);
    // 0x80071CA4: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x80071CA8: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x80071CAC: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x80071CB0: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x80071CB4: addiu       $a1, $zero, 0x1C7
    ctx->r5 = ADD32(0, 0X1C7);
    // 0x80071CB8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80071CBC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80071CC0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80071CC4: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80071CC8: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    // 0x80071CCC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80071CD0: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    // 0x80071CD4: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    // 0x80071CD8: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    // 0x80071CDC: sw          $v1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r3;
    // 0x80071CE0: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
    // 0x80071CE4: jal         0x80072168
    // 0x80071CE8: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    func_80072168_4D568(rdram, ctx);
        goto after_1;
    // 0x80071CE8: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    after_1:
    // 0x80071CEC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80071CF0: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x80071CF4: beq         $v0, $zero, L_80071D18
    if (ctx->r2 == 0) {
        // 0x80071CF8: addiu       $v0, $zero, -0x1200
        ctx->r2 = ADD32(0, -0X1200);
            goto L_80071D18;
    }
    // 0x80071CF8: addiu       $v0, $zero, -0x1200
    ctx->r2 = ADD32(0, -0X1200);
    // 0x80071CFC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80071D00: sh          $v0, 0x65D4($at)
    MEM_H(0X65D4, ctx->r1) = ctx->r2;
    // 0x80071D04: addiu       $v0, $zero, -0x300
    ctx->r2 = ADD32(0, -0X300);
    // 0x80071D08: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80071D0C: sh          $v0, 0x65D6($at)
    MEM_H(0X65D6, ctx->r1) = ctx->r2;
    // 0x80071D10: j           L_80071D34
    // 0x80071D14: addiu       $v0, $zero, 0xA00
    ctx->r2 = ADD32(0, 0XA00);
        goto L_80071D34;
    // 0x80071D14: addiu       $v0, $zero, 0xA00
    ctx->r2 = ADD32(0, 0XA00);
L_80071D18:
    // 0x80071D18: addiu       $v0, $zero, -0x11F0
    ctx->r2 = ADD32(0, -0X11F0);
    // 0x80071D1C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80071D20: sh          $v0, 0x65D4($at)
    MEM_H(0X65D4, ctx->r1) = ctx->r2;
    // 0x80071D24: addiu       $v0, $zero, -0x300
    ctx->r2 = ADD32(0, -0X300);
    // 0x80071D28: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80071D2C: sh          $v0, 0x65D6($at)
    MEM_H(0X65D6, ctx->r1) = ctx->r2;
    // 0x80071D30: addiu       $v0, $zero, 0xA10
    ctx->r2 = ADD32(0, 0XA10);
L_80071D34:
    // 0x80071D34: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80071D38: sh          $v0, 0x65D8($at)
    MEM_H(0X65D8, ctx->r1) = ctx->r2;
    // 0x80071D3C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x80071D40: jal         0x80072168
    // 0x80071D44: addiu       $a1, $zero, 0x1F8
    ctx->r5 = ADD32(0, 0X1F8);
    func_80072168_4D568(rdram, ctx);
        goto after_2;
    // 0x80071D44: addiu       $a1, $zero, 0x1F8
    ctx->r5 = ADD32(0, 0X1F8);
    after_2:
    // 0x80071D48: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80071D4C: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x80071D50: beq         $v0, $zero, L_80071D74
    if (ctx->r2 == 0) {
        // 0x80071D54: addiu       $v0, $zero, 0x2000
        ctx->r2 = ADD32(0, 0X2000);
            goto L_80071D74;
    }
    // 0x80071D54: addiu       $v0, $zero, 0x2000
    ctx->r2 = ADD32(0, 0X2000);
    // 0x80071D58: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80071D5C: sh          $v0, 0x6820($at)
    MEM_H(0X6820, ctx->r1) = ctx->r2;
    // 0x80071D60: addiu       $v0, $zero, -0x300
    ctx->r2 = ADD32(0, -0X300);
    // 0x80071D64: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80071D68: sh          $v0, 0x6822($at)
    MEM_H(0X6822, ctx->r1) = ctx->r2;
    // 0x80071D6C: j           L_80071D90
    // 0x80071D70: addiu       $v0, $zero, 0xE00
    ctx->r2 = ADD32(0, 0XE00);
        goto L_80071D90;
    // 0x80071D70: addiu       $v0, $zero, 0xE00
    ctx->r2 = ADD32(0, 0XE00);
L_80071D74:
    // 0x80071D74: addiu       $v0, $zero, 0x2010
    ctx->r2 = ADD32(0, 0X2010);
    // 0x80071D78: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80071D7C: sh          $v0, 0x6820($at)
    MEM_H(0X6820, ctx->r1) = ctx->r2;
    // 0x80071D80: addiu       $v0, $zero, -0x300
    ctx->r2 = ADD32(0, -0X300);
    // 0x80071D84: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80071D88: sh          $v0, 0x6822($at)
    MEM_H(0X6822, ctx->r1) = ctx->r2;
    // 0x80071D8C: addiu       $v0, $zero, 0xE10
    ctx->r2 = ADD32(0, 0XE10);
L_80071D90:
    // 0x80071D90: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80071D94: sh          $v0, 0x6824($at)
    MEM_H(0X6824, ctx->r1) = ctx->r2;
    // 0x80071D98: sll         $v0, $s3, 9
    ctx->r2 = S32(ctx->r19 << 9);
L_80071D9C:
    // 0x80071D9C: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80071DA0: addiu       $v1, $v1, -0x3590
    ctx->r3 = ADD32(ctx->r3, -0X3590);
    // 0x80071DA4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80071DA8: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    // 0x80071DAC: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x80071DB0: lui         $s5, 0x801B
    ctx->r21 = S32(0X801B << 16);
    // 0x80071DB4: addiu       $s5, $s5, 0x5086
    ctx->r21 = ADD32(ctx->r21, 0X5086);
    // 0x80071DB8: addiu       $v0, $s6, -0x5
    ctx->r2 = ADD32(ctx->r22, -0X5);
    // 0x80071DBC: sltiu       $s6, $v0, 0x2
    ctx->r22 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x80071DC0: lui         $fp, 0x8100
    ctx->r30 = S32(0X8100 << 16);
    // 0x80071DC4: sra         $v0, $s4, 4
    ctx->r2 = S32(SIGNED(ctx->r20) >> 4);
L_80071DC8:
    // 0x80071DC8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80071DCC: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x80071DD0: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x80071DD4: addiu       $s3, $sp, 0x10
    ctx->r19 = ADD32(ctx->r29, 0X10);
    // 0x80071DD8: addu        $s1, $s4, $zero
    ctx->r17 = ADD32(ctx->r20, 0);
    // 0x80071DDC: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x80071DE0: lw          $s7, 0x0($v0)
    ctx->r23 = MEM_W(ctx->r2, 0X0);
L_80071DE4:
    // 0x80071DE4: sll         $v0, $s1, 1
    ctx->r2 = S32(ctx->r17 << 1);
    // 0x80071DE8: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80071DEC: sll         $s0, $v0, 2
    ctx->r16 = S32(ctx->r2 << 2);
    // 0x80071DF0: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80071DF4: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x80071DF8: lw          $v0, 0x5088($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5088);
    // 0x80071DFC: beq         $v0, $zero, L_80071F6C
    if (ctx->r2 == 0) {
        // 0x80071E00: nop
    
            goto L_80071F6C;
    }
    // 0x80071E00: nop

    // 0x80071E04: beql        $s1, $zero, L_80071F44
    if (ctx->r17 == 0) {
        // 0x80071E08: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_80071F44;
    }
    goto skip_2;
    // 0x80071E08: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_2:
    // 0x80071E0C: sll         $v0, $s2, 1
    ctx->r2 = S32(ctx->r18 << 1);
    // 0x80071E10: srlv        $v0, $s7, $v0
    ctx->r2 = S32(U32(ctx->r23) >> (ctx->r2 & 31));
    // 0x80071E14: andi        $v1, $v0, 0x3
    ctx->r3 = ctx->r2 & 0X3;
    // 0x80071E18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80071E1C: beql        $v1, $v0, L_80071E48
    if (ctx->r3 == ctx->r2) {
        // 0x80071E20: addu        $v1, $s0, $s5
        ctx->r3 = ADD32(ctx->r16, ctx->r21);
            goto L_80071E48;
    }
    goto skip_3;
    // 0x80071E20: addu        $v1, $s0, $s5
    ctx->r3 = ADD32(ctx->r16, ctx->r21);
    skip_3:
    // 0x80071E24: beq         $v1, $zero, L_80071E3C
    if (ctx->r3 == 0) {
        // 0x80071E28: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80071E3C;
    }
    // 0x80071E28: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80071E2C: beq         $v1, $v0, L_80071EC0
    if (ctx->r3 == ctx->r2) {
        // 0x80071E30: addu        $v1, $s0, $s5
        ctx->r3 = ADD32(ctx->r16, ctx->r21);
            goto L_80071EC0;
    }
    // 0x80071E30: addu        $v1, $s0, $s5
    ctx->r3 = ADD32(ctx->r16, ctx->r21);
    // 0x80071E34: j           L_80071F44
    // 0x80071E38: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
        goto L_80071F44;
    // 0x80071E38: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_80071E3C:
    // 0x80071E3C: addu        $v0, $s0, $s5
    ctx->r2 = ADD32(ctx->r16, ctx->r21);
    // 0x80071E40: j           L_80071F40
    // 0x80071E44: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
        goto L_80071F40;
    // 0x80071E44: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
L_80071E48:
    // 0x80071E48: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x80071E4C: beq         $s6, $zero, L_80071E90
    if (ctx->r22 == 0) {
        // 0x80071E50: sh          $v0, 0x0($v1)
        MEM_H(0X0, ctx->r3) = ctx->r2;
            goto L_80071E90;
    }
    // 0x80071E50: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x80071E54: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80071E58: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    // 0x80071E5C: lw          $a0, 0x5088($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5088);
    // 0x80071E60: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80071E64: lui         $t8, 0xFFFF
    ctx->r24 = S32(0XFFFF << 16);
    // 0x80071E68: and         $v0, $v0, $t8
    ctx->r2 = ctx->r2 & ctx->r24;
    // 0x80071E6C: bnel        $v0, $fp, L_80071E94
    if (ctx->r2 != ctx->r30) {
        // 0x80071E70: sll         $s0, $s1, 1
        ctx->r16 = S32(ctx->r17 << 1);
            goto L_80071E94;
    }
    goto skip_4;
    // 0x80071E70: sll         $s0, $s1, 1
    ctx->r16 = S32(ctx->r17 << 1);
    skip_4:
    // 0x80071E74: jal         0x80039F68
    // 0x80071E78: nop

    func_80039F68_15368(rdram, ctx);
        goto after_3;
    // 0x80071E78: nop

    after_3:
    // 0x80071E7C: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80071E80: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80071E84: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x80071E88: j           L_80071F34
    // 0x80071E8C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
        goto L_80071F34;
    // 0x80071E8C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
L_80071E90:
    // 0x80071E90: sll         $s0, $s1, 1
    ctx->r16 = S32(ctx->r17 << 1);
L_80071E94:
    // 0x80071E94: addu        $s0, $s0, $s1
    ctx->r16 = ADD32(ctx->r16, ctx->r17);
    // 0x80071E98: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    // 0x80071E9C: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80071EA0: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    // 0x80071EA4: jal         0x80039F68
    // 0x80071EA8: lw          $a0, 0x5088($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5088);
    func_80039F68_15368(rdram, ctx);
        goto after_4;
    // 0x80071EA8: lw          $a0, 0x5088($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5088);
    after_4:
    // 0x80071EAC: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80071EB0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80071EB4: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x80071EB8: j           L_80071F34
    // 0x80071EBC: lw          $v0, 0x20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X20);
        goto L_80071F34;
    // 0x80071EBC: lw          $v0, 0x20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X20);
L_80071EC0:
    // 0x80071EC0: addiu       $v0, $zero, 0xC8
    ctx->r2 = ADD32(0, 0XC8);
    // 0x80071EC4: beq         $s6, $zero, L_80071F08
    if (ctx->r22 == 0) {
        // 0x80071EC8: sh          $v0, 0x0($v1)
        MEM_H(0X0, ctx->r3) = ctx->r2;
            goto L_80071F08;
    }
    // 0x80071EC8: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x80071ECC: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80071ED0: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    // 0x80071ED4: lw          $a0, 0x5088($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5088);
    // 0x80071ED8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80071EDC: lui         $t8, 0xFFFF
    ctx->r24 = S32(0XFFFF << 16);
    // 0x80071EE0: and         $v0, $v0, $t8
    ctx->r2 = ctx->r2 & ctx->r24;
    // 0x80071EE4: bnel        $v0, $fp, L_80071F0C
    if (ctx->r2 != ctx->r30) {
        // 0x80071EE8: sll         $s0, $s1, 1
        ctx->r16 = S32(ctx->r17 << 1);
            goto L_80071F0C;
    }
    goto skip_5;
    // 0x80071EE8: sll         $s0, $s1, 1
    ctx->r16 = S32(ctx->r17 << 1);
    skip_5:
    // 0x80071EEC: jal         0x80039F68
    // 0x80071EF0: nop

    func_80039F68_15368(rdram, ctx);
        goto after_5;
    // 0x80071EF0: nop

    after_5:
    // 0x80071EF4: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80071EF8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80071EFC: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x80071F00: j           L_80071F34
    // 0x80071F04: lw          $v0, 0x10($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X10);
        goto L_80071F34;
    // 0x80071F04: lw          $v0, 0x10($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X10);
L_80071F08:
    // 0x80071F08: sll         $s0, $s1, 1
    ctx->r16 = S32(ctx->r17 << 1);
L_80071F0C:
    // 0x80071F0C: addu        $s0, $s0, $s1
    ctx->r16 = ADD32(ctx->r16, ctx->r17);
    // 0x80071F10: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    // 0x80071F14: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80071F18: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    // 0x80071F1C: jal         0x80039F68
    // 0x80071F20: lw          $a0, 0x5088($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5088);
    func_80039F68_15368(rdram, ctx);
        goto after_6;
    // 0x80071F20: lw          $a0, 0x5088($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5088);
    after_6:
    // 0x80071F24: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80071F28: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80071F2C: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x80071F30: lw          $v0, 0x30($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X30);
L_80071F34:
    // 0x80071F34: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80071F38: addu        $at, $at, $s0
    ctx->r1 = ADD32(ctx->r1, ctx->r16);
    // 0x80071F3C: sw          $v0, 0x5088($at)
    MEM_W(0X5088, ctx->r1) = ctx->r2;
L_80071F40:
    // 0x80071F40: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_80071F44:
    // 0x80071F44: slti        $v0, $s2, 0x10
    ctx->r2 = SIGNED(ctx->r18) < 0X10 ? 1 : 0;
    // 0x80071F48: bne         $v0, $zero, L_80071DE4
    if (ctx->r2 != 0) {
        // 0x80071F4C: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80071DE4;
    }
    // 0x80071F4C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80071F50: addiu       $s4, $s4, 0x10
    ctx->r20 = ADD32(ctx->r20, 0X10);
    // 0x80071F54: slti        $v0, $s4, 0x6B0
    ctx->r2 = SIGNED(ctx->r20) < 0X6B0 ? 1 : 0;
    // 0x80071F58: bne         $v0, $zero, L_80071DC8
    if (ctx->r2 != 0) {
        // 0x80071F5C: sra         $v0, $s4, 4
        ctx->r2 = S32(SIGNED(ctx->r20) >> 4);
            goto L_80071DC8;
    }
    // 0x80071F5C: sra         $v0, $s4, 4
    ctx->r2 = S32(SIGNED(ctx->r20) >> 4);
    // 0x80071F60: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80071F64: jal         0x80038550
    // 0x80071F68: sw          $zero, 0x5088($at)
    MEM_W(0X5088, ctx->r1) = 0;
    func_80038550_13950(rdram, ctx);
        goto after_7;
    // 0x80071F68: sw          $zero, 0x5088($at)
    MEM_W(0X5088, ctx->r1) = 0;
    after_7:
L_80071F6C:
    // 0x80071F6C: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    // 0x80071F70: lw          $fp, 0x78($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X78);
    // 0x80071F74: lw          $s7, 0x74($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X74);
    // 0x80071F78: lw          $s6, 0x70($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X70);
    // 0x80071F7C: lw          $s5, 0x6C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X6C);
    // 0x80071F80: lw          $s4, 0x68($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X68);
    // 0x80071F84: lw          $s3, 0x64($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X64);
    // 0x80071F88: lw          $s2, 0x60($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X60);
    // 0x80071F8C: lw          $s1, 0x5C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X5C);
    // 0x80071F90: lw          $s0, 0x58($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X58);
    // 0x80071F94: jr          $ra
    // 0x80071F98: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    TRACE_RETURN()
    return;
    // 0x80071F98: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_80029E48_5248(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80029E48: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x80029E4C: sw          $s2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r18;
    // 0x80029E50: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x80029E54: addu        $a1, $a3, $zero
    ctx->r5 = ADD32(ctx->r7, 0);
    // 0x80029E58: lw          $v0, 0xC0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XC0);
    // 0x80029E5C: lw          $a3, 0xC4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XC4);
    // 0x80029E60: lw          $v1, 0xC8($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XC8);
    // 0x80029E64: sw          $s3, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r19;
    // 0x80029E68: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x80029E6C: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x80029E70: sw          $s1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r17;
    // 0x80029E74: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x80029E78: sw          $ra, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r31;
    // 0x80029E7C: sw          $s0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r16;
    // 0x80029E80: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x80029E84: jal         0x8009A3E0
    // 0x80029E88: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    sprintf_recomp(rdram, ctx);
        goto after_0;
    // 0x80029E88: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_0:
    // 0x80029E8C: jal         0x8009A390
    // 0x80029E90: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    strlen_recomp(rdram, ctx);
        goto after_1;
    // 0x80029E90: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x80029E94: jal         0x800281C8
    // 0x80029E98: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_800281C8_35C8(rdram, ctx);
        goto after_2;
    // 0x80029E98: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_2:
    // 0x80029E9C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80029EA0: beq         $s0, $zero, L_80029EE4
    if (ctx->r16 == 0) {
        // 0x80029EA4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80029EE4;
    }
    // 0x80029EA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80029EA8: jal         0x800A35A0
    // 0x80029EAC: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    func_800A35A0_7E9A0(rdram, ctx);
        goto after_3;
    // 0x80029EAC: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_3:
    // 0x80029EB0: jal         0x800281C8
    // 0x80029EB4: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    func_800281C8_35C8(rdram, ctx);
        goto after_4;
    // 0x80029EB4: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    after_4:
    // 0x80029EB8: beq         $v0, $zero, L_80029EE4
    if (ctx->r2 == 0) {
        // 0x80029EBC: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80029EE4;
    }
    // 0x80029EBC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80029EC0: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x80029EC4: lui         $a2, 0x8003
    ctx->r6 = S32(0X8003 << 16);
    // 0x80029EC8: addiu       $a2, $a2, -0x677C
    ctx->r6 = ADD32(ctx->r6, -0X677C);
    // 0x80029ECC: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x80029ED0: sh          $s3, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r19;
    // 0x80029ED4: sh          $s2, 0x2($a3)
    MEM_H(0X2, ctx->r7) = ctx->r18;
    // 0x80029ED8: sb          $s1, 0x8($a3)
    MEM_B(0X8, ctx->r7) = ctx->r17;
    // 0x80029EDC: jal         0x800283A8
    // 0x80029EE0: sw          $s0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r16;
    func_800283A8_37A8(rdram, ctx);
        goto after_5;
    // 0x80029EE0: sw          $s0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r16;
    after_5:
L_80029EE4:
    // 0x80029EE4: lw          $ra, 0xA8($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XA8);
    // 0x80029EE8: lw          $s3, 0xA4($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XA4);
    // 0x80029EEC: lw          $s2, 0xA0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XA0);
    // 0x80029EF0: lw          $s1, 0x9C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X9C);
    // 0x80029EF4: lw          $s0, 0x98($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X98);
    // 0x80029EF8: jr          $ra
    // 0x80029EFC: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    TRACE_RETURN()
    return;
    // 0x80029EFC: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_8005C9AC_37DAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8005C9AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005C9B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005C9B4: jal         0x800598DC
    // 0x8005C9B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_800598DC_34CDC(rdram, ctx);
        goto after_0;
    // 0x8005C9B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x8005C9BC: jal         0x800599D4
    // 0x8005C9C0: nop

    func_800599D4_34DD4(rdram, ctx);
        goto after_1;
    // 0x8005C9C0: nop

    after_1:
    // 0x8005C9C4: jal         0x80059710
    // 0x8005C9C8: nop

    func_80059710_34B10(rdram, ctx);
        goto after_2;
    // 0x8005C9C8: nop

    after_2:
    // 0x8005C9CC: jal         0x8005974C
    // 0x8005C9D0: nop

    func_8005974C_34B4C(rdram, ctx);
        goto after_3;
    // 0x8005C9D0: nop

    after_3:
    // 0x8005C9D4: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x8005C9D8: addiu       $s0, $s0, -0x3E3F
    ctx->r16 = ADD32(ctx->r16, -0X3E3F);
    // 0x8005C9DC: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x8005C9E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8005C9E4: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x8005C9E8: beq         $v1, $v0, L_8005CA40
    if (ctx->r3 == ctx->r2) {
        // 0x8005C9EC: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8005CA40;
    }
    // 0x8005C9EC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8005C9F0: beql        $v0, $zero, L_8005CA08
    if (ctx->r2 == 0) {
        // 0x8005C9F4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8005CA08;
    }
    goto skip_0;
    // 0x8005C9F4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8005C9F8: beq         $v1, $zero, L_8005CA20
    if (ctx->r3 == 0) {
        // 0x8005C9FC: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8005CA20;
    }
    // 0x8005C9FC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8005CA00: j           L_8005CBCC
    // 0x8005CA04: nop

        goto L_8005CBCC;
    // 0x8005CA04: nop

L_8005CA08:
    // 0x8005CA08: beq         $v1, $v0, L_8005CA50
    if (ctx->r3 == ctx->r2) {
        // 0x8005CA0C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8005CA50;
    }
    // 0x8005CA0C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8005CA10: beq         $v1, $v0, L_8005CA5C
    if (ctx->r3 == ctx->r2) {
        // 0x8005CA14: lui         $v0, 0xFFFF
        ctx->r2 = S32(0XFFFF << 16);
            goto L_8005CA5C;
    }
    // 0x8005CA14: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x8005CA18: j           L_8005CBCC
    // 0x8005CA1C: nop

        goto L_8005CBCC;
    // 0x8005CA1C: nop

L_8005CA20:
    // 0x8005CA20: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8005CA24: lw          $a1, 0x5998($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5998);
    // 0x8005CA28: jal         0x80061510
    // 0x8005CA2C: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    func_80061510_3C910(rdram, ctx);
        goto after_4;
    // 0x8005CA2C: addiu       $a2, $zero, 0x1E
    ctx->r6 = ADD32(0, 0X1E);
    after_4:
    // 0x8005CA30: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8005CA34: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8005CA38: j           L_8005CBCC
    // 0x8005CA3C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
        goto L_8005CBCC;
    // 0x8005CA3C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_8005CA40:
    // 0x8005CA40: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8005CA44: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8005CA48: bltz        $v0, L_8005CBCC
    if (SIGNED(ctx->r2) < 0) {
        // 0x8005CA4C: nop
    
            goto L_8005CBCC;
    }
    // 0x8005CA4C: nop

L_8005CA50:
    // 0x8005CA50: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8005CA54: j           L_8005CBCC
    // 0x8005CA58: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
        goto L_8005CBCC;
    // 0x8005CA58: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_8005CA5C:
    // 0x8005CA5C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8005CA60: lw          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3BC8);
    // 0x8005CA64: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8005CA68: lui         $v0, 0x130B
    ctx->r2 = S32(0X130B << 16);
    // 0x8005CA6C: xor         $v0, $v1, $v0
    ctx->r2 = ctx->r3 ^ ctx->r2;
    // 0x8005CA70: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8005CA74: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8005CA78: andi        $v0, $v0, 0x9
    ctx->r2 = ctx->r2 & 0X9;
    // 0x8005CA7C: ori         $a0, $v0, 0x8
    ctx->r4 = ctx->r2 | 0X8;
    // 0x8005CA80: lui         $v0, 0x1B06
    ctx->r2 = S32(0X1B06 << 16);
    // 0x8005CA84: beql        $v1, $v0, L_8005CA8C
    if (ctx->r3 == ctx->r2) {
        // 0x8005CA88: addiu       $a0, $zero, 0x9
        ctx->r4 = ADD32(0, 0X9);
            goto L_8005CA8C;
    }
    goto skip_1;
    // 0x8005CA88: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    skip_1:
L_8005CA8C:
    // 0x8005CA8C: sll         $v1, $a0, 3
    ctx->r3 = S32(ctx->r4 << 3);
    // 0x8005CA90: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8005CA94: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005CA98: lhu         $v0, -0x14A0($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X14A0);
    // 0x8005CA9C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8005CAA0: sh          $v0, 0x49DC($at)
    MEM_H(0X49DC, ctx->r1) = ctx->r2;
    // 0x8005CAA4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8005CAA8: sh          $v0, 0x49C4($at)
    MEM_H(0X49C4, ctx->r1) = ctx->r2;
    // 0x8005CAAC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8005CAB0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8005CAB4: sw          $v0, 0x49E4($at)
    MEM_W(0X49E4, ctx->r1) = ctx->r2;
    // 0x8005CAB8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8005CABC: sw          $v0, 0x49CC($at)
    MEM_W(0X49CC, ctx->r1) = ctx->r2;
    // 0x8005CAC0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8005CAC4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005CAC8: lhu         $v0, -0x149E($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X149E);
    // 0x8005CACC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8005CAD0: sh          $v0, 0x49DE($at)
    MEM_H(0X49DE, ctx->r1) = ctx->r2;
    // 0x8005CAD4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8005CAD8: sh          $v0, 0x49C6($at)
    MEM_H(0X49C6, ctx->r1) = ctx->r2;
    // 0x8005CADC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8005CAE0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8005CAE4: sw          $v0, 0x49E8($at)
    MEM_W(0X49E8, ctx->r1) = ctx->r2;
    // 0x8005CAE8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8005CAEC: sw          $v0, 0x49D0($at)
    MEM_W(0X49D0, ctx->r1) = ctx->r2;
    // 0x8005CAF0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8005CAF4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005CAF8: lhu         $v0, -0x149C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X149C);
    // 0x8005CAFC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8005CB00: sh          $zero, 0x4A0C($at)
    MEM_H(0X4A0C, ctx->r1) = 0;
    // 0x8005CB04: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8005CB08: sh          $zero, 0x4A04($at)
    MEM_H(0X4A04, ctx->r1) = 0;
    // 0x8005CB0C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8005CB10: sh          $v0, 0x49E0($at)
    MEM_H(0X49E0, ctx->r1) = ctx->r2;
    // 0x8005CB14: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8005CB18: sh          $v0, 0x49C8($at)
    MEM_H(0X49C8, ctx->r1) = ctx->r2;
    // 0x8005CB1C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8005CB20: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8005CB24: sw          $v0, 0x49EC($at)
    MEM_W(0X49EC, ctx->r1) = ctx->r2;
    // 0x8005CB28: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8005CB2C: sw          $v0, 0x49D4($at)
    MEM_W(0X49D4, ctx->r1) = ctx->r2;
    // 0x8005CB30: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8005CB34: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8005CB38: lhu         $v1, -0x149A($at)
    ctx->r3 = MEM_HU(ctx->r1, -0X149A);
    // 0x8005CB3C: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8005CB40: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8005CB44: sb          $v0, 0x4B22($at)
    MEM_B(0X4B22, ctx->r1) = ctx->r2;
    // 0x8005CB48: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8005CB4C: sb          $v0, 0x4B20($at)
    MEM_B(0X4B20, ctx->r1) = ctx->r2;
    // 0x8005CB50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8005CB54: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8005CB58: sh          $zero, 0x4A10($at)
    MEM_H(0X4A10, ctx->r1) = 0;
    // 0x8005CB5C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8005CB60: sh          $zero, 0x4A08($at)
    MEM_H(0X4A08, ctx->r1) = 0;
    // 0x8005CB64: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8005CB68: sb          $zero, 0x4A25($at)
    MEM_B(0X4A25, ctx->r1) = 0;
    // 0x8005CB6C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8005CB70: sb          $zero, 0x4A24($at)
    MEM_B(0X4A24, ctx->r1) = 0;
    // 0x8005CB74: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8005CB78: sb          $zero, 0x4A27($at)
    MEM_B(0X4A27, ctx->r1) = 0;
    // 0x8005CB7C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8005CB80: sb          $zero, 0x4A26($at)
    MEM_B(0X4A26, ctx->r1) = 0;
    // 0x8005CB84: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8005CB88: sb          $v0, 0x4B23($at)
    MEM_B(0X4B23, ctx->r1) = ctx->r2;
    // 0x8005CB8C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8005CB90: sb          $v0, 0x4B21($at)
    MEM_B(0X4B21, ctx->r1) = ctx->r2;
    // 0x8005CB94: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8005CB98: sb          $v0, 0x4DFE($at)
    MEM_B(0X4DFE, ctx->r1) = ctx->r2;
    // 0x8005CB9C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8005CBA0: sb          $v0, 0x4DFF($at)
    MEM_B(0X4DFF, ctx->r1) = ctx->r2;
    // 0x8005CBA4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8005CBA8: sh          $v1, 0x4A0E($at)
    MEM_H(0X4A0E, ctx->r1) = ctx->r3;
    // 0x8005CBAC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8005CBB0: jal         0x80073D20
    // 0x8005CBB4: sh          $v1, 0x4A06($at)
    MEM_H(0X4A06, ctx->r1) = ctx->r3;
    func_80073D20_4F120(rdram, ctx);
        goto after_5;
    // 0x8005CBB4: sh          $v1, 0x4A06($at)
    MEM_H(0X4A06, ctx->r1) = ctx->r3;
    after_5:
    // 0x8005CBB8: jal         0x80071020
    // 0x8005CBBC: nop

    func_80071020_4C420(rdram, ctx);
        goto after_6;
    // 0x8005CBBC: nop

    after_6:
    // 0x8005CBC0: lui         $v0, 0x200
    ctx->r2 = S32(0X200 << 16);
    // 0x8005CBC4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005CBC8: sw          $v0, -0x3E40($at)
    MEM_W(-0X3E40, ctx->r1) = ctx->r2;
L_8005CBCC:
    // 0x8005CBCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005CBD0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8005CBD4: jr          $ra
    // 0x8005CBD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8005CBD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80061EC4_3D2C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80061EC4: lw          $v0, 0x6C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X6C);
    // 0x80061EC8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80061ECC: sw          $v0, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r2;
    // 0x80061ED0: jr          $ra
    // 0x80061ED4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x80061ED4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
