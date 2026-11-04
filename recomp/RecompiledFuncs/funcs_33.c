#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8008D2DC_686DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008D2DC: sb          $zero, 0xB8($a0)
    MEM_B(0XB8, ctx->r4) = 0;
    // 0x8008D2E0: jr          $ra
    // 0x8008D2E4: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    TRACE_RETURN()
    return;
    // 0x8008D2E4: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
;}
RECOMP_FUNC void func_800545C0_2F9C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800545C0: lui         $a3, 0x801B
    ctx->r7 = S32(0X801B << 16);
    // 0x800545C4: lhu         $a3, -0x2334($a3)
    ctx->r7 = MEM_HU(ctx->r7, -0X2334);
    // 0x800545C8: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x800545CC: lbu         $a0, -0x2338($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X2338);
    // 0x800545D0: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x800545D4: lbu         $a1, -0x2337($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X2337);
    // 0x800545D8: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x800545DC: lbu         $a2, -0x2336($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X2336);
    // 0x800545E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800545E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800545E8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x800545EC: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x800545F0: sb          $v0, -0x72EC($at)
    MEM_B(-0X72EC, ctx->r1) = ctx->r2;
    // 0x800545F4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x800545F8: sb          $v0, 0xB61($at)
    MEM_B(0XB61, ctx->r1) = ctx->r2;
    // 0x800545FC: jal         0x80054984
    // 0x80054600: sll         $a3, $a3, 1
    ctx->r7 = S32(ctx->r7 << 1);
    func_80054984_2FD84(rdram, ctx);
        goto after_0;
    // 0x80054600: sll         $a3, $a3, 1
    ctx->r7 = S32(ctx->r7 << 1);
    after_0:
    // 0x80054604: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80054608: jr          $ra
    // 0x8005460C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8005460C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80091650_6CA50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80091650: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80091654: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80091658: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8009165C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80091660: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x80091664: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x80091668: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x8009166C: beq         $v0, $zero, L_800916C0
    if (ctx->r2 == 0) {
        // 0x80091670: nop
    
            goto L_800916C0;
    }
    // 0x80091670: nop

    // 0x80091674: jal         0x80091C78
    // 0x80091678: nop

    func_80091C78_6D078(rdram, ctx);
        goto after_0;
    // 0x80091678: nop

    after_0:
    // 0x8009167C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x80091680: beq         $a2, $zero, L_800916C0
    if (ctx->r6 == 0) {
        // 0x80091684: nop
    
            goto L_800916C0;
    }
    // 0x80091684: nop

    // 0x80091688: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x8009168C: lw          $v0, -0xEEC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XEEC);
    // 0x80091690: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x80091694: lw          $v1, 0x1C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1C);
    // 0x80091698: lw          $a0, 0x88($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X88);
    // 0x8009169C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x800916A0: sh          $v0, 0x8($a2)
    MEM_H(0X8, ctx->r6) = ctx->r2;
    // 0x800916A4: swc1        $f20, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f20.u32l;
    // 0x800916A8: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x800916AC: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x800916B0: sw          $v1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r3;
    // 0x800916B4: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x800916B8: jal         0x8008FB18
    // 0x800916BC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8008FB18_6AF18(rdram, ctx);
        goto after_1;
    // 0x800916BC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
L_800916C0:
    // 0x800916C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800916C4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x800916C8: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x800916CC: jr          $ra
    // 0x800916D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x800916D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800916D4: nop

    // 0x800916D8: nop

    // 0x800916DC: nop

;}
RECOMP_FUNC void func_8008D77C_68B7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008D77C: lbu         $v0, 0xDB($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XDB);
    // 0x8008D780: addiu       $a2, $v0, -0x1
    ctx->r6 = ADD32(ctx->r2, -0X1);
    // 0x8008D784: addu        $t0, $a0, $a2
    ctx->r8 = ADD32(ctx->r4, ctx->r6);
    // 0x8008D788: lbu         $a3, 0x120($t0)
    ctx->r7 = MEM_BU(ctx->r8, 0X120);
    // 0x8008D78C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8008D790: andi        $v1, $a3, 0xFF
    ctx->r3 = ctx->r7 & 0XFF;
    // 0x8008D794: beq         $v1, $v0, L_8008D7B4
    if (ctx->r3 == ctx->r2) {
        // 0x8008D798: addiu       $v0, $a3, -0x1
        ctx->r2 = ADD32(ctx->r7, -0X1);
            goto L_8008D7B4;
    }
    // 0x8008D798: addiu       $v0, $a3, -0x1
    ctx->r2 = ADD32(ctx->r7, -0X1);
    // 0x8008D79C: sb          $v0, 0x120($t0)
    MEM_B(0X120, ctx->r8) = ctx->r2;
    // 0x8008D7A0: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8008D7A4: bne         $v0, $zero, L_8008D7B4
    if (ctx->r2 != 0) {
        // 0x8008D7A8: nop
    
            goto L_8008D7B4;
    }
    // 0x8008D7A8: nop

    // 0x8008D7AC: sb          $a2, 0xDB($a0)
    MEM_B(0XDB, ctx->r4) = ctx->r6;
    // 0x8008D7B0: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
L_8008D7B4:
    // 0x8008D7B4: bltz        $a2, L_8008D810
    if (SIGNED(ctx->r6) < 0) {
        // 0x8008D7B8: sll         $v1, $a2, 2
        ctx->r3 = S32(ctx->r6 << 2);
            goto L_8008D810;
    }
    // 0x8008D7B8: sll         $v1, $a2, 2
    ctx->r3 = S32(ctx->r6 << 2);
    // 0x8008D7BC: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8008D7C0: lw          $v0, 0xF0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XF0);
    // 0x8008D7C4: lw          $a1, 0xE0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0XE0);
    // 0x8008D7C8: lwc1        $f2, 0x6C($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X6C);
    // 0x8008D7CC: sw          $v0, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->r2;
    // 0x8008D7D0: lw          $v0, 0x100($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X100);
    // 0x8008D7D4: sw          $v0, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->r2;
    // 0x8008D7D8: addu        $v0, $a0, $a2
    ctx->r2 = ADD32(ctx->r4, ctx->r6);
    // 0x8008D7DC: lbu         $v0, 0x124($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X124);
    // 0x8008D7E0: sb          $v0, 0xBC($a0)
    MEM_B(0XBC, ctx->r4) = ctx->r2;
    // 0x8008D7E4: lwc1        $f0, 0x128($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X128);
    // 0x8008D7E8: sll         $v0, $a2, 1
    ctx->r2 = S32(ctx->r6 << 1);
    // 0x8008D7EC: swc1        $f0, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f0.u32l;
    // 0x8008D7F0: lwc1        $f0, 0x70($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X70);
    // 0x8008D7F4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8008D7F8: lhu         $v1, 0x110($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X110);
    // 0x8008D7FC: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x8008D800: sh          $v1, 0xA2($a0)
    MEM_H(0XA2, ctx->r4) = ctx->r3;
    // 0x8008D804: lhu         $v0, 0x118($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X118);
    // 0x8008D808: sh          $v0, 0xA4($a0)
    MEM_H(0XA4, ctx->r4) = ctx->r2;
    // 0x8008D80C: swc1        $f0, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f0.u32l;
L_8008D810:
    // 0x8008D810: jr          $ra
    // 0x8008D814: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    TRACE_RETURN()
    return;
    // 0x8008D814: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
;}
RECOMP_FUNC void func_8004F684_2AA84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004F684: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8004F688: addiu       $v0, $v0, 0x6B70
    ctx->r2 = ADD32(ctx->r2, 0X6B70);
    // 0x8004F68C: subu        $v0, $a0, $v0
    ctx->r2 = SUB32(ctx->r4, ctx->r2);
    // 0x8004F690: lui         $v1, 0xB216
    ctx->r3 = S32(0XB216 << 16);
    // 0x8004F694: ori         $v1, $v1, 0x42C9
    ctx->r3 = ctx->r3 | 0X42C9;
    // 0x8004F698: multu       $v0, $v1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004F69C: lui         $v1, 0x8000
    ctx->r3 = S32(0X8000 << 16);
    // 0x8004F6A0: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x8004F6A4: lw          $v0, 0xB1C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XB1C);
    // 0x8004F6A8: lui         $a2, 0x801E
    ctx->r6 = S32(0X801E << 16);
    // 0x8004F6AC: lw          $a2, -0x72C8($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X72C8);
    // 0x8004F6B0: mfhi        $a3
    ctx->r7 = hi;
    // 0x8004F6B4: srl         $a1, $a3, 6
    ctx->r5 = S32(U32(ctx->r7) >> 6);
    // 0x8004F6B8: srlv        $v1, $v1, $a1
    ctx->r3 = S32(U32(ctx->r3) >> (ctx->r5 & 31));
    // 0x8004F6BC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8004F6C0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8004F6C4: sw          $v0, 0xB1C($at)
    MEM_W(0XB1C, ctx->r1) = ctx->r2;
    // 0x8004F6C8: and         $v0, $v0, $a2
    ctx->r2 = ctx->r2 & ctx->r6;
    // 0x8004F6CC: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8004F6D0: sw          $v0, 0xB1C($at)
    MEM_W(0XB1C, ctx->r1) = ctx->r2;
    // 0x8004F6D4: jr          $ra
    // 0x8004F6D8: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    TRACE_RETURN()
    return;
    // 0x8004F6D8: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
;}
RECOMP_FUNC void func_8006C9DC_47DDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006C9DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006C9E0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8006C9E4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8006C9E8: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8006C9EC: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8006C9F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006C9F4: beq         $a2, $v0, L_8006CA8C
    if (ctx->r6 == ctx->r2) {
        // 0x8006C9F8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8006CA8C;
    }
    // 0x8006C9F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006C9FC: slti        $v0, $a2, 0x2
    ctx->r2 = SIGNED(ctx->r6) < 0X2 ? 1 : 0;
    // 0x8006CA00: beql        $v0, $zero, L_8006CA18
    if (ctx->r2 == 0) {
        // 0x8006CA04: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8006CA18;
    }
    goto skip_0;
    // 0x8006CA04: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8006CA08: beq         $a2, $zero, L_8006CA28
    if (ctx->r6 == 0) {
        // 0x8006CA0C: addiu       $v0, $a1, 0x1
        ctx->r2 = ADD32(ctx->r5, 0X1);
            goto L_8006CA28;
    }
    // 0x8006CA0C: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x8006CA10: j           L_8006CC04
    // 0x8006CA14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8006CC04;
    // 0x8006CA14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8006CA18:
    // 0x8006CA18: beq         $a2, $v0, L_8006CB08
    if (ctx->r6 == ctx->r2) {
        // 0x8006CA1C: sll         $v0, $a3, 16
        ctx->r2 = S32(ctx->r7 << 16);
            goto L_8006CB08;
    }
    // 0x8006CA1C: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x8006CA20: j           L_8006CC04
    // 0x8006CA24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8006CC04;
    // 0x8006CA24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8006CA28:
    // 0x8006CA28: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8006CA2C: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8006CA30: sltiu       $v0, $v1, 0x8
    ctx->r2 = ctx->r3 < 0X8 ? 1 : 0;
    // 0x8006CA34: beq         $v0, $zero, L_8006CBB4
    if (ctx->r2 == 0) {
        // 0x8006CA38: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8006CBB4;
    }
    // 0x8006CA38: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8006CA3C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8006CA40: addu        $at, $at, $v0
    gpr jr_addend_8006CA48 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8006CA44: lw          $v0, 0x28D8($at)
    ctx->r2 = ADD32(ctx->r1, 0X28D8);
    // 0x8006CA48: jr          $v0
    // 0x8006CA4C: nop

    switch (jr_addend_8006CA48 >> 2) {
        case 0: goto L_8006CB34; break;
        case 1: goto L_8006CB40; break;
        case 2: goto L_8006CB4C; break;
        case 3: goto L_8006CB58; break;
        case 4: goto L_8006CA50; break;
        case 5: goto L_8006CA68; break;
        case 6: goto L_8006CA80; break;
        case 7: goto L_8006CBA0; break;
        default: switch_error(__func__, 0x8006CA48, 0x800D28D8);
    }
    // 0x8006CA4C: nop

L_8006CA50:
    // 0x8006CA50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006CA54: addiu       $v0, $zero, -0x7A
    ctx->r2 = ADD32(0, -0X7A);
    // 0x8006CA58: jal         0x80070110
    // 0x8006CA5C: sb          $v0, 0x174($s0)
    MEM_B(0X174, ctx->r16) = ctx->r2;
    func_80070110_4B510(rdram, ctx);
        goto after_0;
    // 0x8006CA5C: sb          $v0, 0x174($s0)
    MEM_B(0X174, ctx->r16) = ctx->r2;
    after_0:
    // 0x8006CA60: j           L_8006CBB4
    // 0x8006CA64: sb          $v0, 0x104($s0)
    MEM_B(0X104, ctx->r16) = ctx->r2;
        goto L_8006CBB4;
    // 0x8006CA64: sb          $v0, 0x104($s0)
    MEM_B(0X104, ctx->r16) = ctx->r2;
L_8006CA68:
    // 0x8006CA68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006CA6C: addiu       $v0, $zero, -0x7E
    ctx->r2 = ADD32(0, -0X7E);
    // 0x8006CA70: jal         0x80070110
    // 0x8006CA74: sb          $v0, 0x174($s0)
    MEM_B(0X174, ctx->r16) = ctx->r2;
    func_80070110_4B510(rdram, ctx);
        goto after_1;
    // 0x8006CA74: sb          $v0, 0x174($s0)
    MEM_B(0X174, ctx->r16) = ctx->r2;
    after_1:
    // 0x8006CA78: j           L_8006CBB4
    // 0x8006CA7C: sb          $v0, 0x104($s0)
    MEM_B(0X104, ctx->r16) = ctx->r2;
        goto L_8006CBB4;
    // 0x8006CA7C: sb          $v0, 0x104($s0)
    MEM_B(0X104, ctx->r16) = ctx->r2;
L_8006CA80:
    // 0x8006CA80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006CA84: j           L_8006CBA8
    // 0x8006CA88: addiu       $v0, $zero, 0x45
    ctx->r2 = ADD32(0, 0X45);
        goto L_8006CBA8;
    // 0x8006CA88: addiu       $v0, $zero, 0x45
    ctx->r2 = ADD32(0, 0X45);
L_8006CA8C:
    // 0x8006CA8C: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x8006CA90: beq         $v0, $zero, L_8006CAF8
    if (ctx->r2 == 0) {
        // 0x8006CA94: sll         $v0, $a1, 16
        ctx->r2 = S32(ctx->r5 << 16);
            goto L_8006CAF8;
    }
    // 0x8006CA94: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x8006CA98: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8006CA9C: sltiu       $v0, $v1, 0x8
    ctx->r2 = ctx->r3 < 0X8 ? 1 : 0;
    // 0x8006CAA0: beq         $v0, $zero, L_8006CBB4
    if (ctx->r2 == 0) {
        // 0x8006CAA4: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8006CBB4;
    }
    // 0x8006CAA4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8006CAA8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8006CAAC: addu        $at, $at, $v0
    gpr jr_addend_8006CAB4 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8006CAB0: lw          $v0, 0x28F8($at)
    ctx->r2 = ADD32(ctx->r1, 0X28F8);
    // 0x8006CAB4: jr          $v0
    // 0x8006CAB8: nop

    switch (jr_addend_8006CAB4 >> 2) {
        case 0: goto L_8006CB34; break;
        case 1: goto L_8006CB40; break;
        case 2: goto L_8006CB4C; break;
        case 3: goto L_8006CB58; break;
        case 4: goto L_8006CABC; break;
        case 5: goto L_8006CAD4; break;
        case 6: goto L_8006CAEC; break;
        case 7: goto L_8006CBA0; break;
        default: switch_error(__func__, 0x8006CAB4, 0x800D28F8);
    }
    // 0x8006CAB8: nop

L_8006CABC:
    // 0x8006CABC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006CAC0: addiu       $v0, $zero, -0x7A
    ctx->r2 = ADD32(0, -0X7A);
    // 0x8006CAC4: jal         0x80070110
    // 0x8006CAC8: sb          $v0, 0x174($s0)
    MEM_B(0X174, ctx->r16) = ctx->r2;
    func_80070110_4B510(rdram, ctx);
        goto after_2;
    // 0x8006CAC8: sb          $v0, 0x174($s0)
    MEM_B(0X174, ctx->r16) = ctx->r2;
    after_2:
    // 0x8006CACC: j           L_8006CBB4
    // 0x8006CAD0: sb          $v0, 0x104($s0)
    MEM_B(0X104, ctx->r16) = ctx->r2;
        goto L_8006CBB4;
    // 0x8006CAD0: sb          $v0, 0x104($s0)
    MEM_B(0X104, ctx->r16) = ctx->r2;
L_8006CAD4:
    // 0x8006CAD4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006CAD8: addiu       $v0, $zero, -0x7E
    ctx->r2 = ADD32(0, -0X7E);
    // 0x8006CADC: jal         0x80070110
    // 0x8006CAE0: sb          $v0, 0x174($s0)
    MEM_B(0X174, ctx->r16) = ctx->r2;
    func_80070110_4B510(rdram, ctx);
        goto after_3;
    // 0x8006CAE0: sb          $v0, 0x174($s0)
    MEM_B(0X174, ctx->r16) = ctx->r2;
    after_3:
    // 0x8006CAE4: j           L_8006CBB4
    // 0x8006CAE8: sb          $v0, 0x104($s0)
    MEM_B(0X104, ctx->r16) = ctx->r2;
        goto L_8006CBB4;
    // 0x8006CAE8: sb          $v0, 0x104($s0)
    MEM_B(0X104, ctx->r16) = ctx->r2;
L_8006CAEC:
    // 0x8006CAEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006CAF0: j           L_8006CBA8
    // 0x8006CAF4: addiu       $v0, $zero, 0x45
    ctx->r2 = ADD32(0, 0X45);
        goto L_8006CBA8;
    // 0x8006CAF4: addiu       $v0, $zero, 0x45
    ctx->r2 = ADD32(0, 0X45);
L_8006CAF8:
    // 0x8006CAF8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8006CAFC: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8006CB00: j           L_8006CC04
    // 0x8006CB04: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_8006CC04;
    // 0x8006CB04: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8006CB08:
    // 0x8006CB08: beq         $v0, $zero, L_8006CBF8
    if (ctx->r2 == 0) {
        // 0x8006CB0C: sll         $v0, $a1, 16
        ctx->r2 = S32(ctx->r5 << 16);
            goto L_8006CBF8;
    }
    // 0x8006CB0C: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x8006CB10: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8006CB14: sltiu       $v0, $v1, 0x8
    ctx->r2 = ctx->r3 < 0X8 ? 1 : 0;
    // 0x8006CB18: beq         $v0, $zero, L_8006CBB4
    if (ctx->r2 == 0) {
        // 0x8006CB1C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8006CBB4;
    }
    // 0x8006CB1C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8006CB20: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8006CB24: addu        $at, $at, $v0
    gpr jr_addend_8006CB2C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8006CB28: lw          $v0, 0x2918($at)
    ctx->r2 = ADD32(ctx->r1, 0X2918);
    // 0x8006CB2C: jr          $v0
    // 0x8006CB30: nop

    switch (jr_addend_8006CB2C >> 2) {
        case 0: goto L_8006CB34; break;
        case 1: goto L_8006CB40; break;
        case 2: goto L_8006CB4C; break;
        case 3: goto L_8006CB58; break;
        case 4: goto L_8006CB64; break;
        case 5: goto L_8006CB7C; break;
        case 6: goto L_8006CB94; break;
        case 7: goto L_8006CBA0; break;
        default: switch_error(__func__, 0x8006CB2C, 0x800D2918);
    }
    // 0x8006CB30: nop

L_8006CB34:
    // 0x8006CB34: addiu       $v0, $zero, -0x7A
    ctx->r2 = ADD32(0, -0X7A);
    // 0x8006CB38: j           L_8006CC00
    // 0x8006CB3C: sb          $v0, 0x174($s0)
    MEM_B(0X174, ctx->r16) = ctx->r2;
        goto L_8006CC00;
    // 0x8006CB3C: sb          $v0, 0x174($s0)
    MEM_B(0X174, ctx->r16) = ctx->r2;
L_8006CB40:
    // 0x8006CB40: addiu       $v0, $zero, -0x7E
    ctx->r2 = ADD32(0, -0X7E);
    // 0x8006CB44: j           L_8006CC00
    // 0x8006CB48: sb          $v0, 0x174($s0)
    MEM_B(0X174, ctx->r16) = ctx->r2;
        goto L_8006CC00;
    // 0x8006CB48: sb          $v0, 0x174($s0)
    MEM_B(0X174, ctx->r16) = ctx->r2;
L_8006CB4C:
    // 0x8006CB4C: addiu       $v0, $zero, 0x45
    ctx->r2 = ADD32(0, 0X45);
    // 0x8006CB50: j           L_8006CC00
    // 0x8006CB54: sb          $v0, 0x174($s0)
    MEM_B(0X174, ctx->r16) = ctx->r2;
        goto L_8006CC00;
    // 0x8006CB54: sb          $v0, 0x174($s0)
    MEM_B(0X174, ctx->r16) = ctx->r2;
L_8006CB58:
    // 0x8006CB58: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x8006CB5C: j           L_8006CC00
    // 0x8006CB60: sb          $v0, 0x174($s0)
    MEM_B(0X174, ctx->r16) = ctx->r2;
        goto L_8006CC00;
    // 0x8006CB60: sb          $v0, 0x174($s0)
    MEM_B(0X174, ctx->r16) = ctx->r2;
L_8006CB64:
    // 0x8006CB64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006CB68: addiu       $v0, $zero, -0x7A
    ctx->r2 = ADD32(0, -0X7A);
    // 0x8006CB6C: jal         0x80070110
    // 0x8006CB70: sb          $v0, 0x174($s0)
    MEM_B(0X174, ctx->r16) = ctx->r2;
    func_80070110_4B510(rdram, ctx);
        goto after_4;
    // 0x8006CB70: sb          $v0, 0x174($s0)
    MEM_B(0X174, ctx->r16) = ctx->r2;
    after_4:
    // 0x8006CB74: j           L_8006CBB4
    // 0x8006CB78: sb          $v0, 0x104($s0)
    MEM_B(0X104, ctx->r16) = ctx->r2;
        goto L_8006CBB4;
    // 0x8006CB78: sb          $v0, 0x104($s0)
    MEM_B(0X104, ctx->r16) = ctx->r2;
L_8006CB7C:
    // 0x8006CB7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006CB80: addiu       $v0, $zero, -0x7E
    ctx->r2 = ADD32(0, -0X7E);
    // 0x8006CB84: jal         0x80070110
    // 0x8006CB88: sb          $v0, 0x174($s0)
    MEM_B(0X174, ctx->r16) = ctx->r2;
    func_80070110_4B510(rdram, ctx);
        goto after_5;
    // 0x8006CB88: sb          $v0, 0x174($s0)
    MEM_B(0X174, ctx->r16) = ctx->r2;
    after_5:
    // 0x8006CB8C: j           L_8006CBB4
    // 0x8006CB90: sb          $v0, 0x104($s0)
    MEM_B(0X104, ctx->r16) = ctx->r2;
        goto L_8006CBB4;
    // 0x8006CB90: sb          $v0, 0x104($s0)
    MEM_B(0X104, ctx->r16) = ctx->r2;
L_8006CB94:
    // 0x8006CB94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006CB98: j           L_8006CBA8
    // 0x8006CB9C: addiu       $v0, $zero, 0x45
    ctx->r2 = ADD32(0, 0X45);
        goto L_8006CBA8;
    // 0x8006CB9C: addiu       $v0, $zero, 0x45
    ctx->r2 = ADD32(0, 0X45);
L_8006CBA0:
    // 0x8006CBA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006CBA4: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
L_8006CBA8:
    // 0x8006CBA8: jal         0x80070180
    // 0x8006CBAC: sb          $v0, 0x174($s0)
    MEM_B(0X174, ctx->r16) = ctx->r2;
    func_80070180_4B580(rdram, ctx);
        goto after_6;
    // 0x8006CBAC: sb          $v0, 0x174($s0)
    MEM_B(0X174, ctx->r16) = ctx->r2;
    after_6:
    // 0x8006CBB0: sb          $v0, 0x104($s0)
    MEM_B(0X104, ctx->r16) = ctx->r2;
L_8006CBB4:
    // 0x8006CBB4: lbu         $v0, 0x174($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X174);
    // 0x8006CBB8: sh          $zero, 0x178($s0)
    MEM_H(0X178, ctx->r16) = 0;
    // 0x8006CBBC: sb          $zero, 0x105($s0)
    MEM_B(0X105, ctx->r16) = 0;
    // 0x8006CBC0: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x8006CBC4: bne         $v0, $zero, L_8006CC00
    if (ctx->r2 != 0) {
        // 0x8006CBC8: sb          $zero, 0x100($s0)
        MEM_B(0X100, ctx->r16) = 0;
            goto L_8006CC00;
    }
    // 0x8006CBC8: sb          $zero, 0x100($s0)
    MEM_B(0X100, ctx->r16) = 0;
    // 0x8006CBCC: lbu         $v1, 0xAC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAC);
    // 0x8006CBD0: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x8006CBD4: bne         $v1, $v0, L_8006CC04
    if (ctx->r3 != ctx->r2) {
        // 0x8006CBD8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8006CC04;
    }
    // 0x8006CBD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006CBDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006CBE0: lbu         $a1, 0x104($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X104);
    // 0x8006CBE4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8006CBE8: jal         0x8006FB90
    // 0x8006CBEC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8006FB90_4AF90(rdram, ctx);
        goto after_7;
    // 0x8006CBEC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_7:
    // 0x8006CBF0: j           L_8006CC04
    // 0x8006CBF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8006CC04;
    // 0x8006CBF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8006CBF8:
    // 0x8006CBF8: j           L_8006CC04
    // 0x8006CBFC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8006CC04;
    // 0x8006CBFC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8006CC00:
    // 0x8006CC00: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8006CC04:
    // 0x8006CC04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006CC08: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8006CC0C: jr          $ra
    // 0x8006CC10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8006CC10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8007A290_55690(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007A290: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8007A294: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8007A298: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8007A29C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8007A2A0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8007A2A4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8007A2A8: lbu         $a0, 0x1($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X1);
    // 0x8007A2AC: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x8007A2B0: jal         0x8004DA68
    // 0x8007A2B4: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    func_8004DA68_28E68(rdram, ctx);
        goto after_0;
    // 0x8007A2B4: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    after_0:
    // 0x8007A2B8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8007A2BC: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8007A2C0: beq         $v1, $v0, L_8007A2FC
    if (ctx->r3 == ctx->r2) {
        // 0x8007A2C4: sltiu       $v0, $v1, 0x41
        ctx->r2 = ctx->r3 < 0X41 ? 1 : 0;
            goto L_8007A2FC;
    }
    // 0x8007A2C4: sltiu       $v0, $v1, 0x41
    ctx->r2 = ctx->r3 < 0X41 ? 1 : 0;
    // 0x8007A2C8: beq         $v0, $zero, L_8007A2E0
    if (ctx->r2 == 0) {
        // 0x8007A2CC: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_8007A2E0;
    }
    // 0x8007A2CC: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8007A2D0: beq         $v1, $v0, L_8007A310
    if (ctx->r3 == ctx->r2) {
        // 0x8007A2D4: nop
    
            goto L_8007A310;
    }
    // 0x8007A2D4: nop

    // 0x8007A2D8: j           L_8007A364
    // 0x8007A2DC: nop

        goto L_8007A364;
    // 0x8007A2DC: nop

L_8007A2E0:
    // 0x8007A2E0: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x8007A2E4: beq         $v1, $v0, L_8007A324
    if (ctx->r3 == ctx->r2) {
        // 0x8007A2E8: addiu       $v0, $zero, 0xE0
        ctx->r2 = ADD32(0, 0XE0);
            goto L_8007A324;
    }
    // 0x8007A2E8: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x8007A2EC: beq         $v1, $v0, L_8007A338
    if (ctx->r3 == ctx->r2) {
        // 0x8007A2F0: nop
    
            goto L_8007A338;
    }
    // 0x8007A2F0: nop

    // 0x8007A2F4: j           L_8007A364
    // 0x8007A2F8: nop

        goto L_8007A364;
    // 0x8007A2F8: nop

L_8007A2FC:
    // 0x8007A2FC: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8007A300: lui         $v1, 0x8019
    ctx->r3 = S32(0X8019 << 16);
    // 0x8007A304: lw          $v1, 0x3C60($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3C60);
    // 0x8007A308: j           L_8007A348
    // 0x8007A30C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
        goto L_8007A348;
    // 0x8007A30C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_8007A310:
    // 0x8007A310: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8007A314: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8007A318: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x8007A31C: j           L_8007A348
    // 0x8007A320: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
        goto L_8007A348;
    // 0x8007A320: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_8007A324:
    // 0x8007A324: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8007A328: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8007A32C: lw          $v1, -0x14F0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X14F0);
    // 0x8007A330: j           L_8007A348
    // 0x8007A334: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
        goto L_8007A348;
    // 0x8007A334: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_8007A338:
    // 0x8007A338: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8007A33C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8007A340: lw          $v1, 0x6B3C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6B3C);
    // 0x8007A344: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_8007A348:
    // 0x8007A348: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8007A34C: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x8007A350: sll         $v0, $s1, 4
    ctx->r2 = S32(ctx->r17 << 4);
    // 0x8007A354: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8007A358: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x8007A35C: jal         0x80079BE0
    // 0x8007A360: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_80079BE0_54FE0(rdram, ctx);
        goto after_1;
    // 0x8007A360: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
L_8007A364:
    // 0x8007A364: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8007A368: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8007A36C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8007A370: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8007A374: jr          $ra
    // 0x8007A378: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8007A378: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8007A37C: nop

;}
RECOMP_FUNC void func_80053218_2E618(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80053218: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x8005321C: sw          $s2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r18;
    // 0x80053220: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80053224: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80053228: negu        $a2, $a2
    ctx->r6 = SUB32(0, ctx->r6);
    // 0x8005322C: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    // 0x80053230: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x80053234: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80053238: sw          $s0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r16;
    // 0x8005323C: sll         $s0, $v0, 7
    ctx->r16 = S32(ctx->r2 << 7);
    // 0x80053240: subu        $s0, $s0, $v0
    ctx->r16 = SUB32(ctx->r16, ctx->r2);
    // 0x80053244: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    // 0x80053248: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x8005324C: sw          $s1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r17;
    // 0x80053250: sh          $a2, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r6;
    // 0x80053254: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80053258: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x8005325C: lhu         $v0, 0x4A06($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4A06);
    // 0x80053260: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80053264: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    // 0x80053268: lhu         $v1, 0x4AC6($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X4AC6);
    // 0x8005326C: addiu       $s1, $sp, 0x28
    ctx->r17 = ADD32(ctx->r29, 0X28);
    // 0x80053270: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80053274: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    // 0x80053278: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005327C: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80053280: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80053284: jal         0x80031600
    // 0x80053288: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    func_80031600_CA00(rdram, ctx);
        goto after_0;
    // 0x80053288: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    after_0:
    // 0x8005328C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80053290: addiu       $s1, $sp, 0x48
    ctx->r17 = ADD32(ctx->r29, 0X48);
    // 0x80053294: jal         0x80031E10
    // 0x80053298: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_80031E10_D210(rdram, ctx);
        goto after_1;
    // 0x80053298: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x8005329C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x800532A0: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x800532A4: lh          $v0, 0x49C4($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X49C4);
    // 0x800532A8: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x800532AC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x800532B0: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x800532B4: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    // 0x800532B8: lh          $v1, 0x49C6($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X49C6);
    // 0x800532BC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x800532C0: addiu       $v0, $zero, 0x96
    ctx->r2 = ADD32(0, 0X96);
    // 0x800532C4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x800532C8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x800532CC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x800532D0: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x800532D4: lh          $v0, 0x49C8($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X49C8);
    // 0x800532D8: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x800532DC: addiu       $a2, $sp, 0x5C
    ctx->r6 = ADD32(ctx->r29, 0X5C);
    // 0x800532E0: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x800532E4: jal         0x80030AA0
    // 0x800532E8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    func_80030AA0_BEA0(rdram, ctx);
        goto after_2;
    // 0x800532E8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_2:
    // 0x800532EC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x800532F0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x800532F4: jal         0x8009A3B4
    // 0x800532F8: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x800532F8: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_3:
    // 0x800532FC: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x80053300: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    // 0x80053304: lw          $s2, 0x70($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X70);
    // 0x80053308: lw          $s1, 0x6C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X6C);
    // 0x8005330C: lw          $s0, 0x68($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X68);
    // 0x80053310: jr          $ra
    // 0x80053314: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    TRACE_RETURN()
    return;
    // 0x80053314: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void bootproc(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80089FD0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80089FD4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80089FD8: jal         0x8009F688
    // 0x80089FDC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    __osInitialize_common_recomp(rdram, ctx);
        goto after_0;
    // 0x80089FDC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x80089FE0: lui         $s0, 0x8018
    ctx->r16 = S32(0X8018 << 16);
    // 0x80089FE4: addiu       $s0, $s0, 0x2BF0
    ctx->r16 = ADD32(ctx->r16, 0X2BF0);
    // 0x80089FE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80089FEC: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80089FF0: addiu       $v0, $v0, 0x4F50
    ctx->r2 = ADD32(ctx->r2, 0X4F50);
    // 0x80089FF4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80089FF8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80089FFC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8008A000: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x8008A004: addiu       $a2, $a2, -0x5FD4
    ctx->r6 = ADD32(ctx->r6, -0X5FD4);
    // 0x8008A008: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8008A00C: jal         0x8009B750
    // 0x8008A010: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    osCreateThread_recomp(rdram, ctx);
        goto after_1;
    // 0x8008A010: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_1:
    // 0x8008A014: jal         0x8009B9F0
    // 0x8008A018: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    osStartThread_recomp(rdram, ctx);
        goto after_2;
    // 0x8008A018: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8008A01C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8008A020: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8008A024: jr          $ra
    // 0x8008A028: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8008A028: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8002A1C4_55C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002A1C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002A1C8: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x8002A1CC: addiu       $v0, $v0, 0x2A0
    ctx->r2 = ADD32(ctx->r2, 0X2A0);
    // 0x8002A1D0: addiu       $v1, $zero, 0x7F
    ctx->r3 = ADD32(0, 0X7F);
    // 0x8002A1D4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002A1D8: sw          $v0, -0x2374($at)
    MEM_W(-0X2374, ctx->r1) = ctx->r2;
    // 0x8002A1DC: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8002A1E0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8002A1E4: sh          $v0, -0x3F80($at)
    MEM_H(-0X3F80, ctx->r1) = ctx->r2;
    // 0x8002A1E8: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x8002A1EC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8002A1F0: sh          $v0, -0x3F7E($at)
    MEM_H(-0X3F7E, ctx->r1) = ctx->r2;
    // 0x8002A1F4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8002A1F8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8002A1FC: sb          $v0, 0x6B38($at)
    MEM_B(0X6B38, ctx->r1) = ctx->r2;
    // 0x8002A200: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x8002A204: addiu       $v0, $v0, 0x6F40
    ctx->r2 = ADD32(ctx->r2, 0X6F40);
    // 0x8002A208: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8002A20C: sw          $v0, -0x3F6C($at)
    MEM_W(-0X3F6C, ctx->r1) = ctx->r2;
    // 0x8002A210: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8002A214: addiu       $v0, $v0, 0x49B0
    ctx->r2 = ADD32(ctx->r2, 0X49B0);
    // 0x8002A218: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8002A21C: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x8002A220: sb          $zero, -0x7388($at)
    MEM_B(-0X7388, ctx->r1) = 0;
    // 0x8002A224: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x8002A228: sw          $zero, -0x7814($at)
    MEM_W(-0X7814, ctx->r1) = 0;
    // 0x8002A22C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8002A230: sh          $v1, -0x3F84($at)
    MEM_H(-0X3F84, ctx->r1) = ctx->r3;
    // 0x8002A234: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8002A238: sh          $v1, -0x3F82($at)
    MEM_H(-0X3F82, ctx->r1) = ctx->r3;
    // 0x8002A23C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8002A240: sh          $v1, -0x3F76($at)
    MEM_H(-0X3F76, ctx->r1) = ctx->r3;
    // 0x8002A244: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8002A248: sh          $v1, -0x3F78($at)
    MEM_H(-0X3F78, ctx->r1) = ctx->r3;
    // 0x8002A24C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8002A250: sh          $v1, -0x3F7A($at)
    MEM_H(-0X3F7A, ctx->r1) = ctx->r3;
    // 0x8002A254: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8002A258: sh          $v1, -0x3F7C($at)
    MEM_H(-0X3F7C, ctx->r1) = ctx->r3;
    // 0x8002A25C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8002A260: sw          $zero, -0x3F68($at)
    MEM_W(-0X3F68, ctx->r1) = 0;
    // 0x8002A264: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8002A268: jal         0x8002A7AC
    // 0x8002A26C: sw          $v0, 0x290($at)
    MEM_W(0X290, ctx->r1) = ctx->r2;
    func_8002A7AC_5BAC(rdram, ctx);
        goto after_0;
    // 0x8002A26C: sw          $v0, 0x290($at)
    MEM_W(0X290, ctx->r1) = ctx->r2;
    after_0:
    // 0x8002A270: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8002A274: lw          $v0, -0x7814($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7814);
    // 0x8002A278: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8002A27C: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x8002A280: sw          $v0, -0x7814($at)
    MEM_W(-0X7814, ctx->r1) = ctx->r2;
    // 0x8002A284: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8002A288: jr          $ra
    // 0x8002A28C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8002A28C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80034338_F738(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80034338: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8003433C: lh          $a0, 0x49C4($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X49C4);
    // 0x80034340: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80034344: lh          $v0, 0x49C6($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X49C6);
    // 0x80034348: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8003434C: lh          $a1, 0x49C8($a1)
    ctx->r5 = MEM_H(ctx->r5, 0X49C8);
    // 0x80034350: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80034354: lh          $v1, 0x4A06($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X4A06);
    // 0x80034358: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x8003435C: lw          $a2, -0x723C($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X723C);
    // 0x80034360: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80034364: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80034368: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8003436C: addiu       $s0, $s0, 0x4348
    ctx->r16 = ADD32(ctx->r16, 0X4348);
    // 0x80034370: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80034374: addiu       $v0, $v0, -0xD2
    ctx->r2 = ADD32(ctx->r2, -0XD2);
    // 0x80034378: addiu       $v1, $v1, 0x800
    ctx->r3 = ADD32(ctx->r3, 0X800);
    // 0x8003437C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034380: sw          $a0, 0x4390($at)
    MEM_W(0X4390, ctx->r1) = ctx->r4;
    // 0x80034384: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034388: sw          $v0, 0x4394($at)
    MEM_W(0X4394, ctx->r1) = ctx->r2;
    // 0x8003438C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034390: sw          $a1, 0x4398($at)
    MEM_W(0X4398, ctx->r1) = ctx->r5;
    // 0x80034394: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034398: beq         $a2, $zero, L_800343FC
    if (ctx->r6 == 0) {
        // 0x8003439C: sw          $v1, 0x4358($at)
        MEM_W(0X4358, ctx->r1) = ctx->r3;
            goto L_800343FC;
    }
    // 0x8003439C: sw          $v1, 0x4358($at)
    MEM_W(0X4358, ctx->r1) = ctx->r3;
    // 0x800343A0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x800343A4: lw          $v0, -0x7238($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7238);
    // 0x800343A8: addiu       $a1, $v0, -0x1
    ctx->r5 = ADD32(ctx->r2, -0X1);
    // 0x800343AC: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800343B0: bne         $a1, $zero, L_800343C0
    if (ctx->r5 != 0) {
        // 0x800343B4: sw          $a1, -0x7238($at)
        MEM_W(-0X7238, ctx->r1) = ctx->r5;
            goto L_800343C0;
    }
    // 0x800343B4: sw          $a1, -0x7238($at)
    MEM_W(-0X7238, ctx->r1) = ctx->r5;
    // 0x800343B8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800343BC: sw          $zero, -0x723C($at)
    MEM_W(-0X723C, ctx->r1) = 0;
L_800343C0:
    // 0x800343C0: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x800343C4: lw          $v1, 0x4354($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4354);
    // 0x800343C8: mult        $v1, $a1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800343CC: mflo        $v1
    ctx->r3 = lo;
    // 0x800343D0: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x800343D4: lw          $a0, -0x7234($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7234);
    // 0x800343D8: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x800343DC: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x800343E0: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800343E4: mflo        $a0
    ctx->r4 = lo;
    // 0x800343E8: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x800343EC: sra         $v1, $v1, 4
    ctx->r3 = S32(SIGNED(ctx->r3) >> 4);
    // 0x800343F0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800343F4: j           L_800344A4
    // 0x800343F8: sw          $v1, 0x4354($at)
    MEM_W(0X4354, ctx->r1) = ctx->r3;
        goto L_800344A4;
    // 0x800343F8: sw          $v1, 0x4354($at)
    MEM_W(0X4354, ctx->r1) = ctx->r3;
L_800343FC:
    // 0x800343FC: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80034400: lhu         $v0, -0x783A($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X783A);
    // 0x80034404: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80034408: beq         $v0, $zero, L_800344A4
    if (ctx->r2 == 0) {
        // 0x8003440C: nop
    
            goto L_800344A4;
    }
    // 0x8003440C: nop

    // 0x80034410: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80034414: lbu         $v0, 0x434E($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X434E);
    // 0x80034418: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8003441C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034420: sb          $v0, 0x434E($at)
    MEM_B(0X434E, ctx->r1) = ctx->r2;
    // 0x80034424: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80034428: sltiu       $v0, $v0, 0x3
    ctx->r2 = ctx->r2 < 0X3 ? 1 : 0;
    // 0x8003442C: bne         $v0, $zero, L_8003443C
    if (ctx->r2 != 0) {
        // 0x80034430: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8003443C;
    }
    // 0x80034430: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80034434: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034438: sb          $v0, 0x434E($at)
    MEM_B(0X434E, ctx->r1) = ctx->r2;
L_8003443C:
    // 0x8003443C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80034440: lbu         $v0, 0x434E($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X434E);
    // 0x80034444: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x80034448: beq         $v1, $zero, L_80034460
    if (ctx->r3 == 0) {
        // 0x8003444C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80034460;
    }
    // 0x8003444C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80034450: beq         $v1, $v0, L_80034488
    if (ctx->r3 == ctx->r2) {
        // 0x80034454: addiu       $v0, $zero, 0x190
        ctx->r2 = ADD32(0, 0X190);
            goto L_80034488;
    }
    // 0x80034454: addiu       $v0, $zero, 0x190
    ctx->r2 = ADD32(0, 0X190);
    // 0x80034458: j           L_800344A4
    // 0x8003445C: nop

        goto L_800344A4;
    // 0x8003445C: nop

L_80034460:
    // 0x80034460: addiu       $v0, $zero, 0x4B0
    ctx->r2 = ADD32(0, 0X4B0);
    // 0x80034464: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80034468: sw          $v0, -0x7234($at)
    MEM_W(-0X7234, ctx->r1) = ctx->r2;
    // 0x8003446C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80034470: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80034474: sw          $v0, -0x7238($at)
    MEM_W(-0X7238, ctx->r1) = ctx->r2;
    // 0x80034478: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8003447C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80034480: j           L_800344A4
    // 0x80034484: sw          $v0, -0x723C($at)
    MEM_W(-0X723C, ctx->r1) = ctx->r2;
        goto L_800344A4;
    // 0x80034484: sw          $v0, -0x723C($at)
    MEM_W(-0X723C, ctx->r1) = ctx->r2;
L_80034488:
    // 0x80034488: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8003448C: sw          $v0, -0x7234($at)
    MEM_W(-0X7234, ctx->r1) = ctx->r2;
    // 0x80034490: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80034494: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80034498: sw          $v0, -0x7238($at)
    MEM_W(-0X7238, ctx->r1) = ctx->r2;
    // 0x8003449C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800344A0: sw          $v1, -0x723C($at)
    MEM_W(-0X723C, ctx->r1) = ctx->r3;
L_800344A4:
    // 0x800344A4: lbu         $a0, 0x7($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X7);
    // 0x800344A8: lw          $v1, 0x4C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4C);
    // 0x800344AC: lw          $a1, 0xC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC);
    // 0x800344B0: lw          $a2, 0x10($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X10);
    // 0x800344B4: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    // 0x800344B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800344BC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800344C0: sb          $v0, 0x4350($at)
    MEM_B(0X4350, ctx->r1) = ctx->r2;
    // 0x800344C4: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x800344C8: addiu       $a0, $s0, 0x48
    ctx->r4 = ADD32(ctx->r16, 0X48);
    // 0x800344CC: jal         0x80032FC0
    // 0x800344D0: sw          $v1, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r3;
    func_80032FC0_E3C0(rdram, ctx);
        goto after_0;
    // 0x800344D0: sw          $v1, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r3;
    after_0:
    // 0x800344D4: lbu         $v1, 0x7($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X7);
    // 0x800344D8: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x800344DC: beq         $v0, $zero, L_800344F8
    if (ctx->r2 == 0) {
        // 0x800344E0: sltiu       $v0, $v0, 0xA
        ctx->r2 = ctx->r2 < 0XA ? 1 : 0;
            goto L_800344F8;
    }
    // 0x800344E0: sltiu       $v0, $v0, 0xA
    ctx->r2 = ctx->r2 < 0XA ? 1 : 0;
    // 0x800344E4: beq         $v0, $zero, L_800344F4
    if (ctx->r2 == 0) {
        // 0x800344E8: addiu       $v0, $v1, -0xA
        ctx->r2 = ADD32(ctx->r3, -0XA);
            goto L_800344F4;
    }
    // 0x800344E8: addiu       $v0, $v1, -0xA
    ctx->r2 = ADD32(ctx->r3, -0XA);
    // 0x800344EC: j           L_800344F8
    // 0x800344F0: sb          $zero, 0x7($s0)
    MEM_B(0X7, ctx->r16) = 0;
        goto L_800344F8;
    // 0x800344F0: sb          $zero, 0x7($s0)
    MEM_B(0X7, ctx->r16) = 0;
L_800344F4:
    // 0x800344F4: sb          $v0, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r2;
L_800344F8:
    // 0x800344F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800344FC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80034500: jr          $ra
    // 0x80034504: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80034504: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8003020C_B60C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003020C: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x80030210: blez        $a1, L_80030248
    if (SIGNED(ctx->r5) <= 0) {
        // 0x80030214: sll         $v0, $a1, 2
        ctx->r2 = S32(ctx->r5 << 2);
            goto L_80030248;
    }
    // 0x80030214: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x80030218: addu        $a2, $v0, $a0
    ctx->r6 = ADD32(ctx->r2, ctx->r4);
    // 0x8003021C: addiu       $a3, $v0, -0x4
    ctx->r7 = ADD32(ctx->r2, -0X4);
L_80030220:
    // 0x80030220: lbu         $v1, 0x3($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X3);
    // 0x80030224: addu        $v0, $a0, $a3
    ctx->r2 = ADD32(ctx->r4, ctx->r7);
    // 0x80030228: addiu       $a3, $a3, -0x4
    ctx->r7 = ADD32(ctx->r7, -0X4);
    // 0x8003022C: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x80030230: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80030234: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80030238: sw          $v1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r3;
    // 0x8003023C: bgtz        $a1, L_80030220
    if (SIGNED(ctx->r5) > 0) {
        // 0x80030240: addiu       $a2, $a2, -0x4
        ctx->r6 = ADD32(ctx->r6, -0X4);
            goto L_80030220;
    }
    // 0x80030240: addiu       $a2, $a2, -0x4
    ctx->r6 = ADD32(ctx->r6, -0X4);
    // 0x80030244: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
L_80030248:
    // 0x80030248: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8003024C: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x80030250: addiu       $a0, $zero, -0x100
    ctx->r4 = ADD32(0, -0X100);
    // 0x80030254: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x80030258: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x8003025C: jr          $ra
    // 0x80030260: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    TRACE_RETURN()
    return;
    // 0x80030260: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
;}
RECOMP_FUNC void func_8003B85C_16C5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003B85C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B860: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8003B864: jal         0x80082F9C
    // 0x8003B868: nop

    func_80082F9C_5E39C(rdram, ctx);
        goto after_0;
    // 0x8003B868: nop

    after_0:
    // 0x8003B86C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8003B870: jr          $ra
    // 0x8003B874: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8003B874: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800372BC_126BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800372BC: jr          $ra
    // 0x800372C0: nop

    TRACE_RETURN()
    return;
    // 0x800372C0: nop

;}
RECOMP_FUNC void func_8003CF9C_1839C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003CF9C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8003CFA0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8003CFA4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8003CFA8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8003CFAC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8003CFB0: lb          $v1, 0x1($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X1);
    // 0x8003CFB4: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8003CFB8: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8003CFBC: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8003CFC0: beq         $v0, $zero, L_8003D114
    if (ctx->r2 == 0) {
        // 0x8003CFC4: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8003D114;
    }
    // 0x8003CFC4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8003CFC8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8003CFCC: addu        $at, $at, $v0
    gpr jr_addend_8003CFD4 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8003CFD0: lw          $v0, 0x1E30($at)
    ctx->r2 = ADD32(ctx->r1, 0X1E30);
    // 0x8003CFD4: jr          $v0
    // 0x8003CFD8: nop

    switch (jr_addend_8003CFD4 >> 2) {
        case 0: goto L_8003CFDC; break;
        case 1: goto L_8003D030; break;
        case 2: goto L_8003D08C; break;
        case 3: goto L_8003D0A4; break;
        case 4: goto L_8003D0BC; break;
        default: switch_error(__func__, 0x8003CFD4, 0x800D1E30);
    }
    // 0x8003CFD8: nop

L_8003CFDC:
    // 0x8003CFDC: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8003CFE0: lbu         $v0, -0x2348($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X2348);
    // 0x8003CFE4: beq         $v0, $zero, L_8003D114
    if (ctx->r2 == 0) {
        // 0x8003CFE8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8003D114;
    }
    // 0x8003CFE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8003CFEC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003CFF0: jal         0x8004B5B0
    // 0x8003CFF4: sh          $v0, -0x38AC($at)
    MEM_H(-0X38AC, ctx->r1) = ctx->r2;
    func_8004B5B0_269B0(rdram, ctx);
        goto after_0;
    // 0x8003CFF4: sh          $v0, -0x38AC($at)
    MEM_H(-0X38AC, ctx->r1) = ctx->r2;
    after_0:
    // 0x8003CFF8: jal         0x8002A46C
    // 0x8003CFFC: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_8002A46C_586C(rdram, ctx);
        goto after_1;
    // 0x8003CFFC: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_1:
    // 0x8003D000: jal         0x8002A46C
    // 0x8003D004: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    func_8002A46C_586C(rdram, ctx);
        goto after_2;
    // 0x8003D004: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    after_2:
    // 0x8003D008: jal         0x8002A46C
    // 0x8003D00C: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    func_8002A46C_586C(rdram, ctx);
        goto after_3;
    // 0x8003D00C: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    after_3:
    // 0x8003D010: jal         0x80036E48
    // 0x8003D014: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80036E48_12248(rdram, ctx);
        goto after_4;
    // 0x8003D014: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_4:
    // 0x8003D018: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x8003D01C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8003D020: jal         0x80089EA0
    // 0x8003D024: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
    func_80089EA0_652A0(rdram, ctx);
        goto after_5;
    // 0x8003D024: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
    after_5:
    // 0x8003D028: j           L_8003D114
    // 0x8003D02C: nop

        goto L_8003D114;
    // 0x8003D02C: nop

L_8003D030:
    // 0x8003D030: addiu       $a0, $zero, 0x300
    ctx->r4 = ADD32(0, 0X300);
    // 0x8003D034: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8003D038: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x8003D03C: jal         0x8002C764
    // 0x8003D040: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    func_8002C764_7B64(rdram, ctx);
        goto after_6;
    // 0x8003D040: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    after_6:
    // 0x8003D044: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    // 0x8003D048: jal         0x80036340
    // 0x8003D04C: addiu       $a1, $zero, -0x2
    ctx->r5 = ADD32(0, -0X2);
    func_80036340_11740(rdram, ctx);
        goto after_7;
    // 0x8003D04C: addiu       $a1, $zero, -0x2
    ctx->r5 = ADD32(0, -0X2);
    after_7:
    // 0x8003D050: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003D054: jal         0x80057400
    // 0x8003D058: sh          $zero, -0x38AC($at)
    MEM_H(-0X38AC, ctx->r1) = 0;
    func_80057400_32800(rdram, ctx);
        goto after_8;
    // 0x8003D058: sh          $zero, -0x38AC($at)
    MEM_H(-0X38AC, ctx->r1) = 0;
    after_8:
    // 0x8003D05C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8003D060: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8003D064: jal         0x80036B00
    // 0x8003D068: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_9;
    // 0x8003D068: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_9:
    // 0x8003D06C: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x8003D070: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8003D074: jal         0x80061724
    // 0x8003D078: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
    func_80061724_3CB24(rdram, ctx);
        goto after_10;
    // 0x8003D078: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
    after_10:
    // 0x8003D07C: jal         0x8004B5E8
    // 0x8003D080: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    func_8004B5E8_269E8(rdram, ctx);
        goto after_11;
    // 0x8003D080: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    after_11:
    // 0x8003D084: j           L_8003D114
    // 0x8003D088: nop

        goto L_8003D114;
    // 0x8003D088: nop

L_8003D08C:
    // 0x8003D08C: jal         0x80057464
    // 0x8003D090: nop

    func_80057464_32864(rdram, ctx);
        goto after_12;
    // 0x8003D090: nop

    after_12:
    // 0x8003D094: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x8003D098: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8003D09C: j           L_8003D114
    // 0x8003D0A0: sb          $v1, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r3;
        goto L_8003D114;
    // 0x8003D0A0: sb          $v1, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r3;
L_8003D0A4:
    // 0x8003D0A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8003D0A8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003D0AC: sh          $v0, -0x38AC($at)
    MEM_H(-0X38AC, ctx->r1) = ctx->r2;
    // 0x8003D0B0: lbu         $v0, 0x1($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1);
    // 0x8003D0B4: j           L_8003D110
    // 0x8003D0B8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8003D110;
    // 0x8003D0B8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8003D0BC:
    // 0x8003D0BC: jal         0x80035698
    // 0x8003D0C0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80035698_10A98(rdram, ctx);
        goto after_13;
    // 0x8003D0C0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_13:
    // 0x8003D0C4: jal         0x80073D20
    // 0x8003D0C8: nop

    func_80073D20_4F120(rdram, ctx);
        goto after_14;
    // 0x8003D0C8: nop

    after_14:
    // 0x8003D0CC: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003D0D0: jal         0x800357E4
    // 0x8003D0D4: lb          $a0, -0x3BC8($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X3BC8);
    func_800357E4_10BE4(rdram, ctx);
        goto after_15;
    // 0x8003D0D4: lb          $a0, -0x3BC8($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X3BC8);
    after_15:
    // 0x8003D0D8: jal         0x80036888
    // 0x8003D0DC: nop

    func_80036888_11C88(rdram, ctx);
        goto after_16;
    // 0x8003D0DC: nop

    after_16:
    // 0x8003D0E0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8003D0E4: sh          $zero, -0x38AC($at)
    MEM_H(-0X38AC, ctx->r1) = 0;
    // 0x8003D0E8: jal         0x800571E4
    // 0x8003D0EC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_800571E4_325E4(rdram, ctx);
        goto after_17;
    // 0x8003D0EC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_17:
    // 0x8003D0F0: lbu         $v0, 0xBD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XBD);
    // 0x8003D0F4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x8003D0F8: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x8003D0FC: jal         0x80029114
    // 0x8003D100: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
    func_80029114_4514(rdram, ctx);
        goto after_18;
    // 0x8003D100: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
    after_18:
    // 0x8003D104: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8003D108: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8003D10C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8003D110:
    // 0x8003D110: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
L_8003D114:
    // 0x8003D114: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8003D118: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8003D11C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8003D120: jr          $ra
    // 0x8003D124: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8003D124: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80093BF0_6EFF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80093BF0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80093BF4: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80093BF8: lui         $s0, 0x8021
    ctx->r16 = S32(0X8021 << 16);
    // 0x80093BFC: addiu       $s0, $s0, 0x58F8
    ctx->r16 = ADD32(ctx->r16, 0X58F8);
    // 0x80093C00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80093C04: lui         $a1, 0x8019
    ctx->r5 = S32(0X8019 << 16);
    // 0x80093C08: addiu       $a1, $a1, -0xB10
    ctx->r5 = ADD32(ctx->r5, -0XB10);
    // 0x80093C0C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80093C10: jal         0x8009A470
    // 0x80093C14: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x80093C14: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80093C18: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x80093C1C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80093C20: jal         0x8009A840
    // 0x80093C24: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    osSetEventMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x80093C24: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80093C28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80093C2C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80093C30: jal         0x800998A0
    // 0x80093C34: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    osContInit_recomp(rdram, ctx);
        goto after_2;
    // 0x80093C34: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_2:
    // 0x80093C38: lui         $s0, 0x8019
    ctx->r16 = S32(0X8019 << 16);
    // 0x80093C3C: addiu       $s0, $s0, -0xAF0
    ctx->r16 = ADD32(ctx->r16, -0XAF0);
    // 0x80093C40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80093C44: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80093C48: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x80093C4C: addiu       $a2, $a2, 0x3D70
    ctx->r6 = ADD32(ctx->r6, 0X3D70);
    // 0x80093C50: lui         $v0, 0x8019
    ctx->r2 = S32(0X8019 << 16);
    // 0x80093C54: addiu       $v0, $v0, 0x16C0
    ctx->r2 = ADD32(ctx->r2, 0X16C0);
    // 0x80093C58: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80093C5C: addiu       $v0, $zero, 0x73
    ctx->r2 = ADD32(0, 0X73);
    // 0x80093C60: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80093C64: jal         0x8009B750
    // 0x80093C68: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    osCreateThread_recomp(rdram, ctx);
        goto after_3;
    // 0x80093C68: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_3:
    // 0x80093C6C: jal         0x8009B9F0
    // 0x80093C70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    osStartThread_recomp(rdram, ctx);
        goto after_4;
    // 0x80093C70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80093C74: lbu         $v0, 0x28($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X28);
    // 0x80093C78: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80093C7C: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80093C80: jr          $ra
    // 0x80093C84: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80093C84: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80028B28_3F28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80028B28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80028B2C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80028B30: jal         0x80092EB0
    // 0x80028B34: nop

    func_80092EB0_6E2B0(rdram, ctx);
        goto after_0;
    // 0x80028B34: nop

    after_0:
    // 0x80028B38: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80028B3C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80028B40: jal         0x8009C830
    // 0x80028B44: nop

    osViSetYScale_recomp(rdram, ctx);
        goto after_1;
    // 0x80028B44: nop

    after_1:
    // 0x80028B48: lui         $v1, 0x8000
    ctx->r3 = S32(0X8000 << 16);
    // 0x80028B4C: lw          $v1, 0x300($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X300);
    // 0x80028B50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80028B54: beq         $v1, $v0, L_80028B64
    if (ctx->r3 == ctx->r2) {
        // 0x80028B58: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80028B64;
    }
    // 0x80028B58: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80028B5C: beq         $v1, $v0, L_80028B70
    if (ctx->r3 == ctx->r2) {
        // 0x80028B60: nop
    
            goto L_80028B70;
    }
    // 0x80028B60: nop

L_80028B64:
    // 0x80028B64: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80028B68: j           L_80028B78
    // 0x80028B6C: addiu       $a0, $a0, -0x190
    ctx->r4 = ADD32(ctx->r4, -0X190);
        goto L_80028B78;
    // 0x80028B6C: addiu       $a0, $a0, -0x190
    ctx->r4 = ADD32(ctx->r4, -0X190);
L_80028B70:
    // 0x80028B70: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80028B74: addiu       $a0, $a0, 0x730
    ctx->r4 = ADD32(ctx->r4, 0X730);
L_80028B78:
    // 0x80028B78: jal         0x8009C670
    // 0x80028B7C: nop

    osViSetMode_recomp(rdram, ctx);
        goto after_2;
    // 0x80028B7C: nop

    after_2:
    // 0x80028B80: jal         0x80093060
    // 0x80028B84: nop

    func_80093060_6E460(rdram, ctx);
        goto after_3;
    // 0x80028B84: nop

    after_3:
    // 0x80028B88: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x80028B8C: ori         $a0, $a0, 0x5000
    ctx->r4 = ctx->r4 | 0X5000;
    // 0x80028B90: lui         $a1, 0x4
    ctx->r5 = S32(0X4 << 16);
    // 0x80028B94: jal         0x8009A2B0
    // 0x80028B98: ori         $a1, $a1, 0xB000
    ctx->r5 = ctx->r5 | 0XB000;
    bzero_recomp(rdram, ctx);
        goto after_4;
    // 0x80028B98: ori         $a1, $a1, 0xB000
    ctx->r5 = ctx->r5 | 0XB000;
    after_4:
    // 0x80028B9C: jal         0x80025C60
    // 0x80028BA0: nop

    func_80025C60_1060(rdram, ctx);
        goto after_5;
    // 0x80028BA0: nop

    after_5:
    // 0x80028BA4: jal         0x8009C6C0
    // 0x80028BA8: addiu       $a0, $zero, 0x5A
    ctx->r4 = ADD32(0, 0X5A);
    osViSetSpecialFeatures_recomp(rdram, ctx);
        goto after_6;
    // 0x80028BA8: addiu       $a0, $zero, 0x5A
    ctx->r4 = ADD32(0, 0X5A);
    after_6:
    // 0x80028BAC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80028BB0: jal         0x80092E10
    // 0x80028BB4: lw          $a0, 0x4FC0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4FC0);
    func_80092E10_6E210(rdram, ctx);
        goto after_7;
    // 0x80028BB4: lw          $a0, 0x4FC0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4FC0);
    after_7:
    // 0x80028BB8: jal         0x80093090
    // 0x80028BBC: nop

    func_80093090_6E490(rdram, ctx);
        goto after_8;
    // 0x80028BBC: nop

    after_8:
    // 0x80028BC0: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
    // 0x80028BC4: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80028BC8: sh          $v0, 0x6C9A($at)
    MEM_H(0X6C9A, ctx->r1) = ctx->r2;
    // 0x80028BCC: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
    // 0x80028BD0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80028BD4: sw          $zero, 0x6CA0($at)
    MEM_W(0X6CA0, ctx->r1) = 0;
    // 0x80028BD8: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80028BDC: sh          $v0, 0x6C9C($at)
    MEM_H(0X6C9C, ctx->r1) = ctx->r2;
    // 0x80028BE0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80028BE4: jr          $ra
    // 0x80028BE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80028BE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80028BEC: nop

;}
RECOMP_FUNC void func_8008D650_68A50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008D650: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8008D654: sb          $v0, 0xB7($a0)
    MEM_B(0XB7, ctx->r4) = ctx->r2;
    // 0x8008D658: jr          $ra
    // 0x8008D65C: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    TRACE_RETURN()
    return;
    // 0x8008D65C: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
;}
RECOMP_FUNC void func_80062538_3D938(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80062538: lhu         $v0, 0xBE($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XBE);
    // 0x8006253C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80062540: sh          $v0, 0xBE($a0)
    MEM_H(0XBE, ctx->r4) = ctx->r2;
    // 0x80062544: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80062548: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8006254C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80062550: lw          $v0, 0x18($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X18);
    // 0x80062554: jr          $ra
    // 0x80062558: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80062558: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_8003BD6C_1716C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003BD6C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8003BD70: sll         $a2, $a2, 5
    ctx->r6 = S32(ctx->r6 << 5);
    // 0x8003BD74: blez        $a2, L_8003BD98
    if (SIGNED(ctx->r6) <= 0) {
        // 0x8003BD78: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_8003BD98;
    }
    // 0x8003BD78: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_8003BD7C:
    // 0x8003BD7C: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x8003BD80: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8003BD84: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8003BD88: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x8003BD8C: slt         $v0, $v1, $a2
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8003BD90: bne         $v0, $zero, L_8003BD7C
    if (ctx->r2 != 0) {
        // 0x8003BD94: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_8003BD7C;
    }
    // 0x8003BD94: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
L_8003BD98:
    // 0x8003BD98: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x8003BD9C: jr          $ra
    // 0x8003BDA0: nop

    TRACE_RETURN()
    return;
    // 0x8003BDA0: nop

;}
RECOMP_FUNC void func_800599D4_34DD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800599D4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800599D8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x800599DC: lui         $s0, 0x8018
    ctx->r16 = S32(0X8018 << 16);
    // 0x800599E0: lw          $s0, -0x484C($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X484C);
    // 0x800599E4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x800599E8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x800599EC: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x800599F0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800599F4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800599F8: addu        $at, $at, $v0
    gpr jr_addend_80059A00 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800599FC: lw          $v0, -0x13E0($at)
    ctx->r2 = ADD32(ctx->r1, -0X13E0);
    // 0x80059A00: jr          $v0
    // 0x80059A04: nop

    switch (jr_addend_80059A00 >> 2) {
        case 0: goto L_80059A08; break;
        case 1: goto L_80059AB0; break;
        case 2: goto L_80059ADC; break;
        default: switch_error(__func__, 0x80059A00, 0x800AEC20);
    }
    // 0x80059A04: nop

L_80059A08:
    // 0x80059A08: addiu       $t0, $zero, 0x40
    ctx->r8 = ADD32(0, 0X40);
    // 0x80059A0C: sh          $t0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r8;
    // 0x80059A10: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80059A14: sh          $zero, 0x16($s0)
    MEM_H(0X16, ctx->r16) = 0;
    // 0x80059A18: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x80059A1C: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    // 0x80059A20: sh          $a3, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r7;
    // 0x80059A24: lh          $a2, 0x18($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X18);
    // 0x80059A28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80059A2C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80059A30: sh          $t0, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r8;
    // 0x80059A34: sh          $zero, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = 0;
    // 0x80059A38: sh          $a3, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r7;
    // 0x80059A3C: sh          $zero, 0x56($s0)
    MEM_H(0X56, ctx->r16) = 0;
    // 0x80059A40: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80059A44: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80059A48: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80059A4C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80059A50: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x80059A54: sw          $v0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r2;
    // 0x80059A58: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80059A5C: sw          $v1, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r3;
    // 0x80059A60: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80059A64: sw          $a2, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r6;
    // 0x80059A68: jal         0x8004D5D4
    // 0x80059A6C: sw          $a2, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r6;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80059A6C: sw          $a2, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r6;
    after_0:
    // 0x80059A70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80059A74: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80059A78: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80059A7C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80059A80: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80059A84: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80059A88: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80059A8C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80059A90: jal         0x80050294
    // 0x80059A94: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80059A94: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_1:
    // 0x80059A98: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80059A9C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80059AA0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80059AA4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80059AA8: j           L_80059ADC
    // 0x80059AAC: sh          $zero, -0x3DAC($at)
    MEM_H(-0X3DAC, ctx->r1) = 0;
        goto L_80059ADC;
    // 0x80059AAC: sh          $zero, -0x3DAC($at)
    MEM_H(-0X3DAC, ctx->r1) = 0;
L_80059AB0:
    // 0x80059AB0: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x80059AB4: addiu       $s1, $s1, -0x3DAC
    ctx->r17 = ADD32(ctx->r17, -0X3DAC);
    // 0x80059AB8: lh          $a1, 0x0($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X0);
    // 0x80059ABC: beq         $a1, $zero, L_80059AD4
    if (ctx->r5 == 0) {
        // 0x80059AC0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80059AD4;
    }
    // 0x80059AC0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80059AC4: jal         0x80050294
    // 0x80059AC8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x80059AC8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x80059ACC: j           L_80059ADC
    // 0x80059AD0: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
        goto L_80059ADC;
    // 0x80059AD0: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
L_80059AD4:
    // 0x80059AD4: jal         0x8005044C
    // 0x80059AD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_3;
    // 0x80059AD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_80059ADC:
    // 0x80059ADC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80059AE0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80059AE4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80059AE8: jr          $ra
    // 0x80059AEC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80059AEC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800700D8_4B4D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800700D8: lbu         $v0, 0x175($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X175);
    // 0x800700DC: lbu         $v1, 0xAC($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XAC);
    // 0x800700E0: lbu         $a1, 0xA4($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XA4);
    // 0x800700E4: sb          $zero, 0x174($a0)
    MEM_B(0X174, ctx->r4) = 0;
    // 0x800700E8: sb          $zero, 0x177($a0)
    MEM_B(0X177, ctx->r4) = 0;
    // 0x800700EC: andi        $v0, $v0, 0xFE
    ctx->r2 = ctx->r2 & 0XFE;
    // 0x800700F0: sb          $v0, 0x175($a0)
    MEM_B(0X175, ctx->r4) = ctx->r2;
    // 0x800700F4: sb          $v1, 0x104($a0)
    MEM_B(0X104, ctx->r4) = ctx->r3;
    // 0x800700F8: jr          $ra
    // 0x800700FC: sb          $a1, 0x100($a0)
    MEM_B(0X100, ctx->r4) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x800700FC: sb          $a1, 0x100($a0)
    MEM_B(0X100, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void loadSaveData(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80087814: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80087818: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8008781C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80087820: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80087824: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x80087828: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8008782C: addu        $s4, $a2, $zero
    ctx->r20 = ADD32(ctx->r6, 0);
    // 0x80087830: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80087834: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80087838: jal         0x80092EB0
    // 0x8008783C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_80092EB0_6E2B0(rdram, ctx);
        goto after_0;
    // 0x8008783C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x80087840: jal         0x80025E1C
    // 0x80087844: addiu       $a0, $zero, 0x2000
    ctx->r4 = ADD32(0, 0X2000);
    func_80025E1C_121C(rdram, ctx);
        goto after_1;
    // 0x80087844: addiu       $a0, $zero, 0x2000
    ctx->r4 = ADD32(0, 0X2000);
    after_1:
    // 0x80087848: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x8008784C: beq         $s2, $zero, L_80087988
    if (ctx->r18 == 0) {
        // 0x80087850: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80087988;
    }
    // 0x80087850: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80087854: jal         0x80087570
    // 0x80087858: nop

    Graph_ThreadStop(rdram, ctx);
        goto after_2;
    // 0x80087858: nop

    after_2:
    // 0x8008785C: lui         $s0, 0x8018
    ctx->r16 = S32(0X8018 << 16);
    // 0x80087860: addiu       $s0, $s0, -0x29D8
    ctx->r16 = ADD32(ctx->r16, -0X29D8);
    // 0x80087864: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80087868: lui         $a1, 0x8018
    ctx->r5 = S32(0X8018 << 16);
    // 0x8008786C: addiu       $a1, $a1, -0x29C0
    ctx->r5 = ADD32(ctx->r5, -0X29C0);
    // 0x80087870: jal         0x8009A470
    // 0x80087874: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_3;
    // 0x80087874: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x80087878: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8008787C: lbu         $a2, 0x5($s1)
    ctx->r6 = MEM_BU(ctx->r17, 0X5);
    // 0x80087880: lbu         $v1, 0x4($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X4);
    // 0x80087884: addiu       $a1, $zero, 0x2000
    ctx->r5 = ADD32(0, 0X2000);
    // 0x80087888: addiu       $a2, $a2, -0x30
    ctx->r6 = ADD32(ctx->r6, -0X30);
    // 0x8008788C: addiu       $v1, $v1, -0x30
    ctx->r3 = ADD32(ctx->r3, -0X30);
    // 0x80087890: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80087894: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80087898: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8008789C: jal         0x80099440
    // 0x800878A0: addu        $s1, $a2, $v0
    ctx->r17 = ADD32(ctx->r6, ctx->r2);
    osInvalDCache_recomp(rdram, ctx);
        goto after_4;
    // 0x800878A0: addu        $s1, $a2, $v0
    ctx->r17 = ADD32(ctx->r6, ctx->r2);
    after_4:
    // 0x800878A4: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x800878A8: addiu       $a0, $a0, -0x29F0
    ctx->r4 = ADD32(ctx->r4, -0X29F0);
    // 0x800878AC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x800878B0: sll         $a2, $s1, 6
    ctx->r6 = S32(ctx->r17 << 6);
    // 0x800878B4: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x800878B8: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    // 0x800878BC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x800878C0: jal         0x80095690
    // 0x800878C4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    osFlashReadArray_recomp(rdram, ctx);
        goto after_5;
    // 0x800878C4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_5:
    // 0x800878C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x800878CC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x800878D0: jal         0x8009A5E0
    // 0x800878D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_6;
    // 0x800878D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x800878D8: slti        $v0, $s1, 0xA
    ctx->r2 = SIGNED(ctx->r17) < 0XA ? 1 : 0;
    // 0x800878DC: beq         $v0, $zero, L_800878F4
    if (ctx->r2 == 0) {
        // 0x800878E0: addiu       $v0, $s1, 0x30
        ctx->r2 = ADD32(ctx->r17, 0X30);
            goto L_800878F4;
    }
    // 0x800878E0: addiu       $v0, $s1, 0x30
    ctx->r2 = ADD32(ctx->r17, 0X30);
    // 0x800878E4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800878E8: sb          $v0, -0x1600($at)
    MEM_B(-0X1600, ctx->r1) = ctx->r2;
    // 0x800878EC: j           L_80087930
    // 0x800878F0: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
        goto L_80087930;
    // 0x800878F0: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
L_800878F4:
    // 0x800878F4: lui         $v0, 0x6666
    ctx->r2 = S32(0X6666 << 16);
    // 0x800878F8: ori         $v0, $v0, 0x6667
    ctx->r2 = ctx->r2 | 0X6667;
    // 0x800878FC: mult        $s1, $v0
    result = S64(S32(ctx->r17)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80087900: sra         $v0, $s1, 31
    ctx->r2 = S32(SIGNED(ctx->r17) >> 31);
    // 0x80087904: mfhi        $t0
    ctx->r8 = hi;
    // 0x80087908: sra         $v1, $t0, 2
    ctx->r3 = S32(SIGNED(ctx->r8) >> 2);
    // 0x8008790C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80087910: addiu       $v0, $v1, 0x30
    ctx->r2 = ADD32(ctx->r3, 0X30);
    // 0x80087914: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80087918: sb          $v0, -0x1600($at)
    MEM_B(-0X1600, ctx->r1) = ctx->r2;
    // 0x8008791C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80087920: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80087924: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80087928: subu        $v0, $s1, $v0
    ctx->r2 = SUB32(ctx->r17, ctx->r2);
    // 0x8008792C: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
L_80087930:
    // 0x80087930: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80087934: sb          $v0, -0x15FF($at)
    MEM_B(-0X15FF, ctx->r1) = ctx->r2;
    // 0x80087938: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8008793C: addiu       $a0, $a0, -0x1600
    ctx->r4 = ADD32(ctx->r4, -0X1600);
    // 0x80087940: jal         0x800A3490
    // 0x80087944: addiu       $a1, $s2, 0x1900
    ctx->r5 = ADD32(ctx->r18, 0X1900);
    func_800A3490_7E890(rdram, ctx);
        goto after_7;
    // 0x80087944: addiu       $a1, $s2, 0x1900
    ctx->r5 = ADD32(ctx->r18, 0X1900);
    after_7:
    // 0x80087948: bne         $v0, $zero, L_80087974
    if (ctx->r2 != 0) {
        // 0x8008794C: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_80087974;
    }
    // 0x8008794C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80087950: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80087954: jal         0x80099F90
    // 0x80087958: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    bcopy_recomp(rdram, ctx);
        goto after_8;
    // 0x80087958: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    after_8:
    // 0x8008795C: jal         0x80087590
    // 0x80087960: nop

    func_80087590_62990(rdram, ctx);
        goto after_9;
    // 0x80087960: nop

    after_9:
    // 0x80087964: jal         0x80025FF8
    // 0x80087968: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_80025FF8_13F8(rdram, ctx);
        goto after_10;
    // 0x80087968: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_10:
    // 0x8008796C: j           L_80087988
    // 0x80087970: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80087988;
    // 0x80087970: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80087974:
    // 0x80087974: jal         0x80087590
    // 0x80087978: nop

    func_80087590_62990(rdram, ctx);
        goto after_11;
    // 0x80087978: nop

    after_11:
    // 0x8008797C: jal         0x80025FF8
    // 0x80087980: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_80025FF8_13F8(rdram, ctx);
        goto after_12;
    // 0x80087980: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_12:
    // 0x80087984: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80087988:
    // 0x80087988: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8008798C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80087990: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80087994: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80087998: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8008799C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800879A0: jr          $ra
    // 0x800879A4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x800879A4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8008B410_66810(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008B410: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008B414: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8008B418: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8008B41C: slti        $v0, $s0, 0x40
    ctx->r2 = SIGNED(ctx->r16) < 0X40 ? 1 : 0;
    // 0x8008B420: beq         $v0, $zero, L_8008B430
    if (ctx->r2 == 0) {
        // 0x8008B424: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8008B430;
    }
    // 0x8008B424: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008B428: j           L_8008B43C
    // 0x8008B42C: addiu       $s0, $zero, 0x40
    ctx->r16 = ADD32(0, 0X40);
        goto L_8008B43C;
    // 0x8008B42C: addiu       $s0, $zero, 0x40
    ctx->r16 = ADD32(0, 0X40);
L_8008B430:
    // 0x8008B430: slti        $v0, $s0, 0x401
    ctx->r2 = SIGNED(ctx->r16) < 0X401 ? 1 : 0;
    // 0x8008B434: beql        $v0, $zero, L_8008B43C
    if (ctx->r2 == 0) {
        // 0x8008B438: addiu       $s0, $zero, 0x400
        ctx->r16 = ADD32(0, 0X400);
            goto L_8008B43C;
    }
    goto skip_0;
    // 0x8008B438: addiu       $s0, $zero, 0x400
    ctx->r16 = ADD32(0, 0X400);
    skip_0:
L_8008B43C:
    // 0x8008B43C: jal         0x8008EDBC
    // 0x8008B440: sll         $a0, $s0, 3
    ctx->r4 = S32(ctx->r16 << 3);
    func_8008EDBC_6A1BC(rdram, ctx);
        goto after_0;
    // 0x8008B440: sll         $a0, $s0, 3
    ctx->r4 = S32(ctx->r16 << 3);
    after_0:
    // 0x8008B444: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008B448: sw          $v0, 0x4FD0($at)
    MEM_W(0X4FD0, ctx->r1) = ctx->r2;
    // 0x8008B44C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008B450: sw          $s0, 0x4FCC($at)
    MEM_W(0X4FCC, ctx->r1) = ctx->r16;
    // 0x8008B454: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008B458: sw          $zero, 0x4FC8($at)
    MEM_W(0X4FC8, ctx->r1) = 0;
    // 0x8008B45C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008B460: sw          $zero, 0x4FC4($at)
    MEM_W(0X4FC4, ctx->r1) = 0;
    // 0x8008B464: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008B468: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8008B46C: jr          $ra
    // 0x8008B470: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8008B470: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800286A8_3AA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800286A8: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x800286AC: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x800286B0: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x800286B4: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x800286B8: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x800286BC: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x800286C0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x800286C4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x800286C8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x800286CC: addiu       $a0, $a0, 0x47F0
    ctx->r4 = ADD32(ctx->r4, 0X47F0);
    // 0x800286D0: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x800286D4: lhu         $v1, 0x6C9A($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X6C9A);
    // 0x800286D8: addu        $t2, $v0, $a0
    ctx->r10 = ADD32(ctx->r2, ctx->r4);
    // 0x800286DC: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x800286E0: lhu         $v0, 0x6C9C($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X6C9C);
    // 0x800286E4: srl         $v1, $v1, 1
    ctx->r3 = S32(U32(ctx->r3) >> 1);
    // 0x800286E8: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x800286EC: sh          $a1, 0x80($t2)
    MEM_H(0X80, ctx->r10) = ctx->r5;
    // 0x800286F0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800286F4: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x800286F8: lhu         $a0, 0x80($t2)
    ctx->r4 = MEM_HU(ctx->r10, 0X80);
    // 0x800286FC: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x80028700: addu        $v0, $a3, $a1
    ctx->r2 = ADD32(ctx->r7, ctx->r5);
    // 0x80028704: sh          $v0, 0x8C($t2)
    MEM_H(0X8C, ctx->r10) = ctx->r2;
    // 0x80028708: lh          $t3, 0x8C($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X8C);
    // 0x8002870C: sh          $a2, 0x82($t2)
    MEM_H(0X82, ctx->r10) = ctx->r6;
    // 0x80028710: addu        $a1, $t1, $a1
    ctx->r5 = ADD32(ctx->r9, ctx->r5);
    // 0x80028714: sh          $a1, 0x90($t2)
    MEM_H(0X90, ctx->r10) = ctx->r5;
    // 0x80028718: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x8002871C: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x80028720: lhu         $a1, 0x82($t2)
    ctx->r5 = MEM_HU(ctx->r10, 0X82);
    // 0x80028724: lh          $t0, 0x90($t2)
    ctx->r8 = MEM_H(ctx->r10, 0X90);
    // 0x80028728: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x8002872C: sh          $a3, 0x84($t2)
    MEM_H(0X84, ctx->r10) = ctx->r7;
    // 0x80028730: sh          $t1, 0x88($t2)
    MEM_H(0X88, ctx->r10) = ctx->r9;
    // 0x80028734: sh          $a0, 0xB8($t2)
    MEM_H(0XB8, ctx->r10) = ctx->r4;
    // 0x80028738: sh          $v0, 0x86($t2)
    MEM_H(0X86, ctx->r10) = ctx->r2;
    // 0x8002873C: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80028740: sh          $v1, 0x8A($t2)
    MEM_H(0X8A, ctx->r10) = ctx->r3;
    // 0x80028744: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x80028748: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x8002874C: sh          $v0, 0x8E($t2)
    MEM_H(0X8E, ctx->r10) = ctx->r2;
    // 0x80028750: addu        $v0, $t0, $zero
    ctx->r2 = ADD32(ctx->r8, 0);
    // 0x80028754: slt         $t0, $t0, $t3
    ctx->r8 = SIGNED(ctx->r8) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80028758: sh          $v1, 0x92($t2)
    MEM_H(0X92, ctx->r10) = ctx->r3;
    // 0x8002875C: beq         $t0, $zero, L_8002876C
    if (ctx->r8 == 0) {
        // 0x80028760: sh          $a1, 0xBA($t2)
        MEM_H(0XBA, ctx->r10) = ctx->r5;
            goto L_8002876C;
    }
    // 0x80028760: sh          $a1, 0xBA($t2)
    MEM_H(0XBA, ctx->r10) = ctx->r5;
    // 0x80028764: sh          $v0, 0x8C($t2)
    MEM_H(0X8C, ctx->r10) = ctx->r2;
    // 0x80028768: sh          $t3, 0x90($t2)
    MEM_H(0X90, ctx->r10) = ctx->r11;
L_8002876C:
    // 0x8002876C: lh          $v0, 0x92($t2)
    ctx->r2 = MEM_H(ctx->r10, 0X92);
    // 0x80028770: lh          $a0, 0x8E($t2)
    ctx->r4 = MEM_H(ctx->r10, 0X8E);
    // 0x80028774: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80028778: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8002877C: beq         $v0, $zero, L_8002878C
    if (ctx->r2 == 0) {
        // 0x80028780: nop
    
            goto L_8002878C;
    }
    // 0x80028780: nop

    // 0x80028784: sh          $v1, 0x8E($t2)
    MEM_H(0X8E, ctx->r10) = ctx->r3;
    // 0x80028788: sh          $a0, 0x92($t2)
    MEM_H(0X92, ctx->r10) = ctx->r4;
L_8002878C:
    // 0x8002878C: jr          $ra
    // 0x80028790: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    TRACE_RETURN()
    return;
    // 0x80028790: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_80051364_2C764(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80051364: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x80051368: sw          $s3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r19;
    // 0x8005136C: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x80051370: sw          $ra, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r31;
    // 0x80051374: sw          $fp, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r30;
    // 0x80051378: sw          $s7, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r23;
    // 0x8005137C: sw          $s6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r22;
    // 0x80051380: sw          $s5, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r21;
    // 0x80051384: sw          $s4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r20;
    // 0x80051388: sw          $s2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r18;
    // 0x8005138C: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    // 0x80051390: sw          $s0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r16;
    // 0x80051394: lbu         $a0, 0x1($s3)
    ctx->r4 = MEM_BU(ctx->r19, 0X1);
    // 0x80051398: jal         0x8004DA68
    // 0x8005139C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    func_8004DA68_28E68(rdram, ctx);
        goto after_0;
    // 0x8005139C: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    after_0:
    // 0x800513A0: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
    // 0x800513A4: bne         $v0, $v1, L_800513B0
    if (ctx->r2 != ctx->r3) {
        // 0x800513A8: addiu       $s7, $s3, 0x1E8
        ctx->r23 = ADD32(ctx->r19, 0X1E8);
            goto L_800513B0;
    }
    // 0x800513A8: addiu       $s7, $s3, 0x1E8
    ctx->r23 = ADD32(ctx->r19, 0X1E8);
    // 0x800513AC: addiu       $s7, $s3, 0x240
    ctx->r23 = ADD32(ctx->r19, 0X240);
L_800513B0:
    // 0x800513B0: addiu       $a0, $s3, 0x160
    ctx->r4 = ADD32(ctx->r19, 0X160);
    // 0x800513B4: lw          $t0, 0x9C($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X9C);
    // 0x800513B8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x800513BC: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x800513C0: jal         0x8009A3B4
    // 0x800513C4: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x800513C4: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
    after_1:
    // 0x800513C8: lh          $v0, 0x158($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X158);
    // 0x800513CC: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x800513D0: lbu         $v1, 0xB61($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0XB61);
    // 0x800513D4: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x800513D8: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x800513DC: lh          $v0, 0x15A($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X15A);
    // 0x800513E0: lui         $fp, 0x801C
    ctx->r30 = S32(0X801C << 16);
    // 0x800513E4: addiu       $fp, $fp, -0x3D98
    ctx->r30 = ADD32(ctx->r30, -0X3D98);
    // 0x800513E8: addiu       $a0, $fp, 0x8
    ctx->r4 = ADD32(ctx->r30, 0X8);
    // 0x800513EC: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x800513F0: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x800513F4: lh          $v0, 0x15C($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X15C);
    // 0x800513F8: addiu       $s0, $sp, 0x18
    ctx->r16 = ADD32(ctx->r29, 0X18);
    // 0x800513FC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80051400: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x80051404: jal         0x80031428
    // 0x80051408: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_80031428_C828(rdram, ctx);
        goto after_2;
    // 0x80051408: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_2:
    // 0x8005140C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80051410: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80051414: jal         0x800306F0
    // 0x80051418: addu        $a2, $s7, $zero
    ctx->r6 = ADD32(ctx->r23, 0);
    func_800306F0_BAF0(rdram, ctx);
        goto after_3;
    // 0x80051418: addu        $a2, $s7, $zero
    ctx->r6 = ADD32(ctx->r23, 0);
    after_3:
    // 0x8005141C: lb          $s6, 0xF9($s3)
    ctx->r22 = MEM_B(ctx->r19, 0XF9);
    // 0x80051420: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x80051424: sltu        $v0, $s2, $s6
    ctx->r2 = ctx->r18 < ctx->r22 ? 1 : 0;
    // 0x80051428: beq         $v0, $zero, L_800514A8
    if (ctx->r2 == 0) {
        // 0x8005142C: nop
    
            goto L_800514A8;
    }
    // 0x8005142C: nop

    // 0x80051430: addu        $s5, $s0, $zero
    ctx->r21 = ADD32(ctx->r16, 0);
    // 0x80051434: addiu       $s1, $s7, 0x20
    ctx->r17 = ADD32(ctx->r23, 0X20);
    // 0x80051438: addiu       $s4, $zero, 0xFC
    ctx->r20 = ADD32(0, 0XFC);
L_8005143C:
    // 0x8005143C: addu        $a0, $s3, $s4
    ctx->r4 = ADD32(ctx->r19, ctx->r20);
    // 0x80051440: lb          $s0, 0x1($a0)
    ctx->r16 = MEM_B(ctx->r4, 0X1);
    // 0x80051444: lbu         $a1, 0x2($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X2);
    // 0x80051448: bltzl       $s0, L_80051498
    if (SIGNED(ctx->r16) < 0) {
        // 0x8005144C: addiu       $s1, $s1, 0x20
        ctx->r17 = ADD32(ctx->r17, 0X20);
            goto L_80051498;
    }
    goto skip_0;
    // 0x8005144C: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    skip_0:
    // 0x80051450: beq         $a1, $zero, L_80051484
    if (ctx->r5 == 0) {
        // 0x80051454: sll         $a0, $a1, 3
        ctx->r4 = S32(ctx->r5 << 3);
            goto L_80051484;
    }
    // 0x80051454: sll         $a0, $a1, 3
    ctx->r4 = S32(ctx->r5 << 3);
    // 0x80051458: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8005145C: addu        $a0, $fp, $a0
    ctx->r4 = ADD32(ctx->r30, ctx->r4);
    // 0x80051460: jal         0x80031428
    // 0x80051464: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    func_80031428_C828(rdram, ctx);
        goto after_4;
    // 0x80051464: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    after_4:
    // 0x80051468: sll         $a0, $s0, 5
    ctx->r4 = S32(ctx->r16 << 5);
    // 0x8005146C: addu        $a0, $s7, $a0
    ctx->r4 = ADD32(ctx->r23, ctx->r4);
    // 0x80051470: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x80051474: jal         0x800306F0
    // 0x80051478: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    func_800306F0_BAF0(rdram, ctx);
        goto after_5;
    // 0x80051478: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    after_5:
    // 0x8005147C: j           L_80051498
    // 0x80051480: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
        goto L_80051498;
    // 0x80051480: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
L_80051484:
    // 0x80051484: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80051488: addu        $a1, $s7, $zero
    ctx->r5 = ADD32(ctx->r23, 0);
    // 0x8005148C: jal         0x8009A3B4
    // 0x80051490: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x80051490: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    after_6:
    // 0x80051494: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
L_80051498:
    // 0x80051498: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8005149C: sltu        $v0, $s2, $s6
    ctx->r2 = ctx->r18 < ctx->r22 ? 1 : 0;
    // 0x800514A0: bne         $v0, $zero, L_8005143C
    if (ctx->r2 != 0) {
        // 0x800514A4: addiu       $s4, $s4, 0x4
        ctx->r20 = ADD32(ctx->r20, 0X4);
            goto L_8005143C;
    }
    // 0x800514A4: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
L_800514A8:
    // 0x800514A8: lbu         $v0, 0x6($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X6);
    // 0x800514AC: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x800514B0: beq         $v0, $zero, L_800515D0
    if (ctx->r2 == 0) {
        // 0x800514B4: addiu       $a0, $s3, 0x160
        ctx->r4 = ADD32(ctx->r19, 0X160);
            goto L_800515D0;
    }
    // 0x800514B4: addiu       $a0, $s3, 0x160
    ctx->r4 = ADD32(ctx->r19, 0X160);
    // 0x800514B8: lbu         $a0, 0x1($s3)
    ctx->r4 = MEM_BU(ctx->r19, 0X1);
    // 0x800514BC: jal         0x8004DA68
    // 0x800514C0: nop

    func_8004DA68_28E68(rdram, ctx);
        goto after_7;
    // 0x800514C0: nop

    after_7:
    // 0x800514C4: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
    // 0x800514C8: bne         $v0, $v1, L_800514D4
    if (ctx->r2 != ctx->r3) {
        // 0x800514CC: addiu       $s0, $s3, 0x388
        ctx->r16 = ADD32(ctx->r19, 0X388);
            goto L_800514D4;
    }
    // 0x800514CC: addiu       $s0, $s3, 0x388
    ctx->r16 = ADD32(ctx->r19, 0X388);
    // 0x800514D0: addiu       $s0, $s3, 0x540
    ctx->r16 = ADD32(ctx->r19, 0X540);
L_800514D4:
    // 0x800514D4: lh          $v0, 0x158($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X158);
    // 0x800514D8: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x800514DC: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800514E0: mflo        $v0
    ctx->r2 = lo;
    // 0x800514E4: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x800514E8: lbu         $a2, 0xB61($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0XB61);
    // 0x800514EC: sllv        $v0, $v0, $a2
    ctx->r2 = S32(ctx->r2 << (ctx->r6 & 31));
    // 0x800514F0: sra         $v0, $v0, 5
    ctx->r2 = S32(SIGNED(ctx->r2) >> 5);
    // 0x800514F4: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x800514F8: lh          $v0, 0x15A($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X15A);
    // 0x800514FC: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80051500: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80051504: mflo        $v0
    ctx->r2 = lo;
    // 0x80051508: sllv        $v0, $v0, $a2
    ctx->r2 = S32(ctx->r2 << (ctx->r6 & 31));
    // 0x8005150C: sra         $v0, $v0, 5
    ctx->r2 = S32(SIGNED(ctx->r2) >> 5);
    // 0x80051510: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x80051514: lh          $v0, 0x15C($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X15C);
    // 0x80051518: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8005151C: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80051520: mflo        $v0
    ctx->r2 = lo;
    // 0x80051524: addiu       $a0, $s3, 0x160
    ctx->r4 = ADD32(ctx->r19, 0X160);
    // 0x80051528: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x8005152C: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x80051530: sllv        $v0, $v0, $a2
    ctx->r2 = S32(ctx->r2 << (ctx->r6 & 31));
    // 0x80051534: sra         $v0, $v0, 5
    ctx->r2 = S32(SIGNED(ctx->r2) >> 5);
    // 0x80051538: jal         0x80031DA8
    // 0x8005153C: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_8;
    // 0x8005153C: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    after_8:
    // 0x80051540: beq         $s6, $zero, L_8005161C
    if (ctx->r22 == 0) {
        // 0x80051544: addu        $s1, $s7, $zero
        ctx->r17 = ADD32(ctx->r23, 0);
            goto L_8005161C;
    }
    // 0x80051544: addu        $s1, $s7, $zero
    ctx->r17 = ADD32(ctx->r23, 0);
L_80051548:
    // 0x80051548: lh          $v0, 0x158($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X158);
    // 0x8005154C: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x80051550: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80051554: mflo        $v0
    ctx->r2 = lo;
    // 0x80051558: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x8005155C: lbu         $a2, 0xB61($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0XB61);
    // 0x80051560: sllv        $v0, $v0, $a2
    ctx->r2 = S32(ctx->r2 << (ctx->r6 & 31));
    // 0x80051564: sra         $v0, $v0, 5
    ctx->r2 = S32(SIGNED(ctx->r2) >> 5);
    // 0x80051568: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x8005156C: lh          $v0, 0x15A($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X15A);
    // 0x80051570: lbu         $v1, 0x5($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X5);
    // 0x80051574: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80051578: mflo        $v0
    ctx->r2 = lo;
    // 0x8005157C: sllv        $v0, $v0, $a2
    ctx->r2 = S32(ctx->r2 << (ctx->r6 & 31));
    // 0x80051580: sra         $v0, $v0, 5
    ctx->r2 = S32(SIGNED(ctx->r2) >> 5);
    // 0x80051584: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x80051588: lh          $v1, 0x15C($s3)
    ctx->r3 = MEM_H(ctx->r19, 0X15C);
    // 0x8005158C: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x80051590: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80051594: mflo        $v1
    ctx->r3 = lo;
    // 0x80051598: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8005159C: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x800515A0: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    // 0x800515A4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x800515A8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x800515AC: sllv        $v1, $v1, $a2
    ctx->r3 = S32(ctx->r3 << (ctx->r6 & 31));
    // 0x800515B0: sra         $v1, $v1, 5
    ctx->r3 = S32(SIGNED(ctx->r3) >> 5);
    // 0x800515B4: jal         0x80031DA8
    // 0x800515B8: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_9;
    // 0x800515B8: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    after_9:
    // 0x800515BC: sltu        $v0, $s2, $s6
    ctx->r2 = ctx->r18 < ctx->r22 ? 1 : 0;
    // 0x800515C0: bne         $v0, $zero, L_80051548
    if (ctx->r2 != 0) {
        // 0x800515C4: addiu       $a0, $s3, 0x160
        ctx->r4 = ADD32(ctx->r19, 0X160);
            goto L_80051548;
    }
    // 0x800515C4: addiu       $a0, $s3, 0x160
    ctx->r4 = ADD32(ctx->r19, 0X160);
    // 0x800515C8: j           L_80051620
    // 0x800515CC: nop

        goto L_80051620;
    // 0x800515CC: nop

L_800515D0:
    // 0x800515D0: lh          $v0, 0x10($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X10);
    // 0x800515D4: lh          $v1, 0x12($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X12);
    // 0x800515D8: lh          $a2, 0x14($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X14);
    // 0x800515DC: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x800515E0: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x800515E4: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x800515E8: sw          $v1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r3;
    // 0x800515EC: jal         0x80031DA8
    // 0x800515F0: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_10;
    // 0x800515F0: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    after_10:
    // 0x800515F4: beq         $s6, $zero, L_80051620
    if (ctx->r22 == 0) {
        // 0x800515F8: addiu       $a0, $s3, 0x160
        ctx->r4 = ADD32(ctx->r19, 0X160);
            goto L_80051620;
    }
    // 0x800515F8: addiu       $a0, $s3, 0x160
    ctx->r4 = ADD32(ctx->r19, 0X160);
    // 0x800515FC: addu        $s0, $s7, $zero
    ctx->r16 = ADD32(ctx->r23, 0);
L_80051600:
    // 0x80051600: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80051604: jal         0x80031DA8
    // 0x80051608: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_80031DA8_D1A8(rdram, ctx);
        goto after_11;
    // 0x80051608: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_11:
    // 0x8005160C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80051610: sltu        $v0, $s2, $s6
    ctx->r2 = ctx->r18 < ctx->r22 ? 1 : 0;
    // 0x80051614: bne         $v0, $zero, L_80051600
    if (ctx->r2 != 0) {
        // 0x80051618: addiu       $s0, $s0, 0x20
        ctx->r16 = ADD32(ctx->r16, 0X20);
            goto L_80051600;
    }
    // 0x80051618: addiu       $s0, $s0, 0x20
    ctx->r16 = ADD32(ctx->r16, 0X20);
L_8005161C:
    // 0x8005161C: addiu       $a0, $s3, 0x160
    ctx->r4 = ADD32(ctx->r19, 0X160);
L_80051620:
    // 0x80051620: addu        $a1, $fp, $zero
    ctx->r5 = ADD32(ctx->r30, 0);
    // 0x80051624: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x80051628: lhu         $v1, 0x2($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X2);
    // 0x8005162C: lhu         $a3, 0x4($a1)
    ctx->r7 = MEM_HU(ctx->r5, 0X4);
    // 0x80051630: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x80051634: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80051638: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8005163C: sll         $a3, $a3, 3
    ctx->r7 = S32(ctx->r7 << 3);
    // 0x80051640: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x80051644: sh          $v1, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r3;
    // 0x80051648: jal         0x800308E8
    // 0x8005164C: sh          $a3, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r7;
    func_800308E8_BCE8(rdram, ctx);
        goto after_12;
    // 0x8005164C: sh          $a3, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r7;
    after_12:
    // 0x80051650: lh          $v1, 0x14($s3)
    ctx->r3 = MEM_H(ctx->r19, 0X14);
    // 0x80051654: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80051658: lbu         $a0, 0xB61($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0XB61);
    // 0x8005165C: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x80051660: sllv        $v1, $v1, $a0
    ctx->r3 = S32(ctx->r3 << (ctx->r4 & 31));
    // 0x80051664: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80051668: sh          $v0, 0x180($s3)
    MEM_H(0X180, ctx->r19) = ctx->r2;
    // 0x8005166C: lh          $v0, 0x16($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X16);
    // 0x80051670: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x80051674: sllv        $v0, $v0, $a0
    ctx->r2 = S32(ctx->r2 << (ctx->r4 & 31));
    // 0x80051678: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8005167C: lh          $v0, 0x18($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X18);
    // 0x80051680: sh          $v1, 0x182($s3)
    MEM_H(0X182, ctx->r19) = ctx->r3;
    // 0x80051684: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x80051688: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x8005168C: sllv        $v0, $v0, $a0
    ctx->r2 = S32(ctx->r2 << (ctx->r4 & 31));
    // 0x80051690: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80051694: sltu        $v0, $s2, $s6
    ctx->r2 = ctx->r18 < ctx->r22 ? 1 : 0;
    // 0x80051698: beq         $v0, $zero, L_80051740
    if (ctx->r2 == 0) {
        // 0x8005169C: sh          $v1, 0x184($s3)
        MEM_H(0X184, ctx->r19) = ctx->r3;
            goto L_80051740;
    }
    // 0x8005169C: sh          $v1, 0x184($s3)
    MEM_H(0X184, ctx->r19) = ctx->r3;
    // 0x800516A0: addiu       $s1, $s3, 0x8
    ctx->r17 = ADD32(ctx->r19, 0X8);
    // 0x800516A4: addiu       $s4, $zero, 0xFC
    ctx->r20 = ADD32(0, 0XFC);
L_800516A8:
    // 0x800516A8: addu        $a0, $s3, $s4
    ctx->r4 = ADD32(ctx->r19, ctx->r20);
    // 0x800516AC: lb          $s0, 0x1($a0)
    ctx->r16 = MEM_B(ctx->r4, 0X1);
    // 0x800516B0: lbu         $a1, 0x2($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X2);
    // 0x800516B4: bltzl       $s0, L_80051730
    if (SIGNED(ctx->r16) < 0) {
        // 0x800516B8: addiu       $s1, $s1, 0x8
        ctx->r17 = ADD32(ctx->r17, 0X8);
            goto L_80051730;
    }
    goto skip_1;
    // 0x800516B8: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    skip_1:
    // 0x800516BC: beq         $a1, $zero, L_80051714
    if (ctx->r5 == 0) {
        // 0x800516C0: sll         $a0, $s0, 5
        ctx->r4 = S32(ctx->r16 << 5);
            goto L_80051714;
    }
    // 0x800516C0: sll         $a0, $s0, 5
    ctx->r4 = S32(ctx->r16 << 5);
    // 0x800516C4: addu        $a0, $s7, $a0
    ctx->r4 = ADD32(ctx->r23, ctx->r4);
    // 0x800516C8: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x800516CC: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x800516D0: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x800516D4: jal         0x800308E8
    // 0x800516D8: addu        $a1, $t0, $a1
    ctx->r5 = ADD32(ctx->r8, ctx->r5);
    func_800308E8_BCE8(rdram, ctx);
        goto after_13;
    // 0x800516D8: addu        $a1, $t0, $a1
    ctx->r5 = ADD32(ctx->r8, ctx->r5);
    after_13:
    // 0x800516DC: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x800516E0: sll         $a0, $s0, 3
    ctx->r4 = S32(ctx->r16 << 3);
    // 0x800516E4: addu        $a0, $s3, $a0
    ctx->r4 = ADD32(ctx->r19, ctx->r4);
    // 0x800516E8: lhu         $v0, 0x180($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X180);
    // 0x800516EC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800516F0: sh          $v0, 0x180($s1)
    MEM_H(0X180, ctx->r17) = ctx->r2;
    // 0x800516F4: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x800516F8: lhu         $v0, 0x182($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X182);
    // 0x800516FC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80051700: sh          $v0, 0x182($s1)
    MEM_H(0X182, ctx->r17) = ctx->r2;
    // 0x80051704: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x80051708: lhu         $v0, 0x184($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X184);
    // 0x8005170C: j           L_80051728
    // 0x80051710: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
        goto L_80051728;
    // 0x80051710: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
L_80051714:
    // 0x80051714: lhu         $v0, 0x180($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X180);
    // 0x80051718: sh          $v0, 0x180($s1)
    MEM_H(0X180, ctx->r17) = ctx->r2;
    // 0x8005171C: lhu         $v0, 0x182($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X182);
    // 0x80051720: sh          $v0, 0x182($s1)
    MEM_H(0X182, ctx->r17) = ctx->r2;
    // 0x80051724: lhu         $v0, 0x184($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X184);
L_80051728:
    // 0x80051728: sh          $v0, 0x184($s1)
    MEM_H(0X184, ctx->r17) = ctx->r2;
    // 0x8005172C: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
L_80051730:
    // 0x80051730: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80051734: sltu        $v0, $s2, $s6
    ctx->r2 = ctx->r18 < ctx->r22 ? 1 : 0;
    // 0x80051738: bne         $v0, $zero, L_800516A8
    if (ctx->r2 != 0) {
        // 0x8005173C: addiu       $s4, $s4, 0x4
        ctx->r20 = ADD32(ctx->r20, 0X4);
            goto L_800516A8;
    }
    // 0x8005173C: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
L_80051740:
    // 0x80051740: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
    // 0x80051744: lw          $fp, 0x80($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X80);
    // 0x80051748: lw          $s7, 0x7C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X7C);
    // 0x8005174C: lw          $s6, 0x78($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X78);
    // 0x80051750: lw          $s5, 0x74($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X74);
    // 0x80051754: lw          $s4, 0x70($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X70);
    // 0x80051758: lw          $s3, 0x6C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X6C);
    // 0x8005175C: lw          $s2, 0x68($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X68);
    // 0x80051760: lw          $s1, 0x64($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X64);
    // 0x80051764: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x80051768: jr          $ra
    // 0x8005176C: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    TRACE_RETURN()
    return;
    // 0x8005176C: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_80035180_10580(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80035180: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80035184: lw          $v0, 0x4358($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4358);
    // 0x80035188: andi        $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 & 0XFFF;
    // 0x8003518C: andi        $a3, $v0, 0xFFF
    ctx->r7 = ctx->r2 & 0XFFF;
    // 0x80035190: slt         $v0, $a0, $a3
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x80035194: beq         $v0, $zero, L_800351E0
    if (ctx->r2 == 0) {
        // 0x80035198: subu        $t0, $a3, $a0
        ctx->r8 = SUB32(ctx->r7, ctx->r4);
            goto L_800351E0;
    }
    // 0x80035198: subu        $t0, $a3, $a0
    ctx->r8 = SUB32(ctx->r7, ctx->r4);
    // 0x8003519C: addiu       $v0, $a3, -0x1000
    ctx->r2 = ADD32(ctx->r7, -0X1000);
    // 0x800351A0: subu        $v1, $a0, $v0
    ctx->r3 = SUB32(ctx->r4, ctx->r2);
    // 0x800351A4: slt         $v0, $v1, $t0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x800351A8: beq         $v0, $zero, L_800351C8
    if (ctx->r2 == 0) {
        // 0x800351AC: slt         $v0, $a2, $v1
        ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_800351C8;
    }
    // 0x800351AC: slt         $v0, $a2, $v1
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800351B0: bne         $v0, $zero, L_80035238
    if (ctx->r2 != 0) {
        // 0x800351B4: subu        $v0, $a0, $a2
        ctx->r2 = SUB32(ctx->r4, ctx->r6);
            goto L_80035238;
    }
    // 0x800351B4: subu        $v0, $a0, $a2
    ctx->r2 = SUB32(ctx->r4, ctx->r6);
    // 0x800351B8: addu        $v0, $a3, $a1
    ctx->r2 = ADD32(ctx->r7, ctx->r5);
    // 0x800351BC: addiu       $v1, $a0, 0x1000
    ctx->r3 = ADD32(ctx->r4, 0X1000);
    // 0x800351C0: j           L_80035208
    // 0x800351C4: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
        goto L_80035208;
    // 0x800351C4: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
L_800351C8:
    // 0x800351C8: slt         $v0, $a2, $t0
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x800351CC: bne         $v0, $zero, L_80035238
    if (ctx->r2 != 0) {
        // 0x800351D0: addu        $v0, $a0, $a2
        ctx->r2 = ADD32(ctx->r4, ctx->r6);
            goto L_80035238;
    }
    // 0x800351D0: addu        $v0, $a0, $a2
    ctx->r2 = ADD32(ctx->r4, ctx->r6);
    // 0x800351D4: subu        $v0, $a3, $a1
    ctx->r2 = SUB32(ctx->r7, ctx->r5);
    // 0x800351D8: j           L_80035208
    // 0x800351DC: slt         $v1, $v0, $a0
    ctx->r3 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
        goto L_80035208;
    // 0x800351DC: slt         $v1, $v0, $a0
    ctx->r3 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
L_800351E0:
    // 0x800351E0: subu        $t0, $a0, $a3
    ctx->r8 = SUB32(ctx->r4, ctx->r7);
    // 0x800351E4: addiu       $t1, $a0, -0x1000
    ctx->r9 = ADD32(ctx->r4, -0X1000);
    // 0x800351E8: subu        $v1, $a3, $t1
    ctx->r3 = SUB32(ctx->r7, ctx->r9);
    // 0x800351EC: slt         $v0, $v1, $t0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x800351F0: beq         $v0, $zero, L_80035218
    if (ctx->r2 == 0) {
        // 0x800351F4: slt         $v0, $a2, $v1
        ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_80035218;
    }
    // 0x800351F4: slt         $v0, $a2, $v1
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800351F8: bne         $v0, $zero, L_80035238
    if (ctx->r2 != 0) {
        // 0x800351FC: addu        $v0, $a0, $a2
        ctx->r2 = ADD32(ctx->r4, ctx->r6);
            goto L_80035238;
    }
    // 0x800351FC: addu        $v0, $a0, $a2
    ctx->r2 = ADD32(ctx->r4, ctx->r6);
    // 0x80035200: subu        $v0, $a3, $a1
    ctx->r2 = SUB32(ctx->r7, ctx->r5);
    // 0x80035204: slt         $v1, $v0, $t1
    ctx->r3 = SIGNED(ctx->r2) < SIGNED(ctx->r9) ? 1 : 0;
L_80035208:
    // 0x80035208: bnel        $v1, $zero, L_80035238
    if (ctx->r3 != 0) {
        // 0x8003520C: addu        $v0, $a0, $zero
        ctx->r2 = ADD32(ctx->r4, 0);
            goto L_80035238;
    }
    goto skip_0;
    // 0x8003520C: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    skip_0:
    // 0x80035210: j           L_80035238
    // 0x80035214: nop

        goto L_80035238;
    // 0x80035214: nop

L_80035218:
    // 0x80035218: slt         $v0, $a2, $t0
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8003521C: bne         $v0, $zero, L_80035238
    if (ctx->r2 != 0) {
        // 0x80035220: subu        $v0, $a0, $a2
        ctx->r2 = SUB32(ctx->r4, ctx->r6);
            goto L_80035238;
    }
    // 0x80035220: subu        $v0, $a0, $a2
    ctx->r2 = SUB32(ctx->r4, ctx->r6);
    // 0x80035224: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x80035228: addu        $a1, $a3, $a1
    ctx->r5 = ADD32(ctx->r7, ctx->r5);
    // 0x8003522C: slt         $v1, $v0, $a1
    ctx->r3 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80035230: beql        $v1, $zero, L_80035238
    if (ctx->r3 == 0) {
        // 0x80035234: addu        $v0, $a1, $zero
        ctx->r2 = ADD32(ctx->r5, 0);
            goto L_80035238;
    }
    goto skip_1;
    // 0x80035234: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    skip_1:
L_80035238:
    // 0x80035238: jr          $ra
    // 0x8003523C: nop

    TRACE_RETURN()
    return;
    // 0x8003523C: nop

;}
RECOMP_FUNC void func_8008E75C_69B5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008E75C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008E760: lui         $v1, 0xFF00
    ctx->r3 = S32(0XFF00 << 16);
    // 0x8008E764: and         $v0, $a0, $v1
    ctx->r2 = ctx->r4 & ctx->r3;
    // 0x8008E768: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008E76C: bne         $v0, $v1, L_8008E794
    if (ctx->r2 != ctx->r3) {
        // 0x8008E770: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_8008E794;
    }
    // 0x8008E770: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8008E774: lui         $t1, 0x801B
    ctx->r9 = S32(0X801B << 16);
    // 0x8008E778: lw          $t1, -0x232C($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X232C);
    // 0x8008E77C: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x8008E780: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8008E784: and         $a0, $a0, $v0
    ctx->r4 = ctx->r4 & ctx->r2;
    // 0x8008E788: lui         $v0, 0x14
    ctx->r2 = S32(0X14 << 16);
    // 0x8008E78C: j           L_8008E7B0
    // 0x8008E790: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
        goto L_8008E7B0;
    // 0x8008E790: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
L_8008E794:
    // 0x8008E794: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8008E798: lw          $v0, 0x47E8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X47E8);
    // 0x8008E79C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8008E7A0: bne         $v0, $zero, L_8008E8E8
    if (ctx->r2 != 0) {
        // 0x8008E7A4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8008E8E8;
    }
    // 0x8008E7A4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8008E7A8: lui         $t1, 0x8018
    ctx->r9 = S32(0X8018 << 16);
    // 0x8008E7AC: lw          $t1, 0x5018($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X5018);
L_8008E7B0:
    // 0x8008E7B0: lui         $a2, 0x8018
    ctx->r6 = S32(0X8018 << 16);
    // 0x8008E7B4: lw          $a2, 0x4FE0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X4FE0);
    // 0x8008E7B8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8008E7BC: beq         $a2, $zero, L_8008E7F4
    if (ctx->r6 == 0) {
        // 0x8008E7C0: addu        $a1, $a0, $a1
        ctx->r5 = ADD32(ctx->r4, ctx->r5);
            goto L_8008E7F4;
    }
    // 0x8008E7C0: addu        $a1, $a0, $a1
    ctx->r5 = ADD32(ctx->r4, ctx->r5);
    // 0x8008E7C4: lui         $t0, 0x8018
    ctx->r8 = S32(0X8018 << 16);
    // 0x8008E7C8: lw          $t0, 0x4FF4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X4FF4);
L_8008E7CC:
    // 0x8008E7CC: lw          $v1, 0xC($a2)
    ctx->r3 = MEM_W(ctx->r6, 0XC);
    // 0x8008E7D0: sltu        $v0, $a0, $v1
    ctx->r2 = ctx->r4 < ctx->r3 ? 1 : 0;
    // 0x8008E7D4: bne         $v0, $zero, L_8008E7F4
    if (ctx->r2 != 0) {
        // 0x8008E7D8: addu        $v0, $v1, $t0
        ctx->r2 = ADD32(ctx->r3, ctx->r8);
            goto L_8008E7F4;
    }
    // 0x8008E7D8: addu        $v0, $v1, $t0
    ctx->r2 = ADD32(ctx->r3, ctx->r8);
    // 0x8008E7DC: sltu        $v0, $v0, $a1
    ctx->r2 = ctx->r2 < ctx->r5 ? 1 : 0;
    // 0x8008E7E0: beq         $v0, $zero, L_8008E83C
    if (ctx->r2 == 0) {
        // 0x8008E7E4: addu        $a3, $a2, $zero
        ctx->r7 = ADD32(ctx->r6, 0);
            goto L_8008E83C;
    }
    // 0x8008E7E4: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    // 0x8008E7E8: lw          $a2, 0x4($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X4);
    // 0x8008E7EC: bne         $a2, $zero, L_8008E7CC
    if (ctx->r6 != 0) {
        // 0x8008E7F0: nop
    
            goto L_8008E7CC;
    }
    // 0x8008E7F0: nop

L_8008E7F4:
    // 0x8008E7F4: lui         $s0, 0x8018
    ctx->r16 = S32(0X8018 << 16);
    // 0x8008E7F8: lw          $s0, 0x4FE4($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X4FE4);
    // 0x8008E7FC: bne         $s0, $zero, L_8008E810
    if (ctx->r16 != 0) {
        // 0x8008E800: nop
    
            goto L_8008E810;
    }
    // 0x8008E800: nop

    // 0x8008E804: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008E808: j           L_8008E8E8
    // 0x8008E80C: lw          $v0, 0x4FE0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4FE0);
        goto L_8008E8E8;
    // 0x8008E80C: lw          $v0, 0x4FE0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4FE0);
L_8008E810:
    // 0x8008E810: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x8008E814: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008E818: beq         $a3, $zero, L_8008E84C
    if (ctx->r7 == 0) {
        // 0x8008E81C: sw          $v0, 0x4FE4($at)
        MEM_W(0X4FE4, ctx->r1) = ctx->r2;
            goto L_8008E84C;
    }
    // 0x8008E81C: sw          $v0, 0x4FE4($at)
    MEM_W(0X4FE4, ctx->r1) = ctx->r2;
    // 0x8008E820: lw          $v0, 0x4($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X4);
    // 0x8008E824: beq         $v0, $zero, L_8008E830
    if (ctx->r2 == 0) {
        // 0x8008E828: sw          $v0, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r2;
            goto L_8008E830;
    }
    // 0x8008E828: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x8008E82C: sw          $s0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r16;
L_8008E830:
    // 0x8008E830: sw          $a3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r7;
    // 0x8008E834: j           L_8008E86C
    // 0x8008E838: sw          $s0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r16;
        goto L_8008E86C;
    // 0x8008E838: sw          $s0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r16;
L_8008E83C:
    // 0x8008E83C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8008E840: sw          $v0, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r2;
    // 0x8008E844: j           L_8008E8E8
    // 0x8008E848: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
        goto L_8008E8E8;
    // 0x8008E848: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
L_8008E84C:
    // 0x8008E84C: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008E850: lw          $v0, 0x4FE0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4FE0);
    // 0x8008E854: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x8008E858: beq         $v0, $zero, L_8008E864
    if (ctx->r2 == 0) {
        // 0x8008E85C: sw          $v0, 0x4($s0)
        MEM_W(0X4, ctx->r16) = ctx->r2;
            goto L_8008E864;
    }
    // 0x8008E85C: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x8008E860: sw          $s0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r16;
L_8008E864:
    // 0x8008E864: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008E868: sw          $s0, 0x4FE0($at)
    MEM_W(0X4FE0, ctx->r1) = ctx->r16;
L_8008E86C:
    // 0x8008E86C: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x8008E870: lw          $v1, 0x4FF8($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4FF8);
    // 0x8008E874: lui         $a1, 0x8018
    ctx->r5 = S32(0X8018 << 16);
    // 0x8008E878: lw          $a1, 0x4FEC($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4FEC);
    // 0x8008E87C: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    // 0x8008E880: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x8008E884: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x8008E888: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8008E88C: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x8008E890: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8008E894: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008E898: sw          $v0, 0x4FF8($at)
    MEM_W(0X4FF8, ctx->r1) = ctx->r2;
    // 0x8008E89C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8008E8A0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8008E8A4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8008E8A8: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8008E8AC: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008E8B0: addiu       $v0, $v0, 0x5000
    ctx->r2 = ADD32(ctx->r2, 0X5000);
    // 0x8008E8B4: sb          $zero, 0x2($a1)
    MEM_B(0X2, ctx->r5) = 0;
    // 0x8008E8B8: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x8008E8BC: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x8008E8C0: sw          $v0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r2;
    // 0x8008E8C4: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008E8C8: lw          $v0, 0x4FF4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4FF4);
    // 0x8008E8CC: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x8008E8D0: addu        $a0, $t1, $zero
    ctx->r4 = ADD32(ctx->r9, 0);
    // 0x8008E8D4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8008E8D8: sw          $v0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r2;
    // 0x8008E8DC: jal         0x80094880
    // 0x8008E8E0: sw          $v1, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r3;
    osEPiStartDma_recomp(rdram, ctx);
        goto after_0;
    // 0x8008E8E0: sw          $v1, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r3;
    after_0:
    // 0x8008E8E4: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_8008E8E8:
    // 0x8008E8E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008E8EC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8008E8F0: jr          $ra
    // 0x8008E8F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8008E8F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008E8F8: nop

    // 0x8008E8FC: nop

;}
RECOMP_FUNC void func_80045B5C_20F5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80045B5C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80045B60: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80045B64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80045B68: beq         $a1, $v0, L_80045BBC
    if (ctx->r5 == ctx->r2) {
        // 0x80045B6C: addu        $a3, $a0, $zero
        ctx->r7 = ADD32(ctx->r4, 0);
            goto L_80045BBC;
    }
    // 0x80045B6C: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x80045B70: slti        $v0, $a1, 0x2
    ctx->r2 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x80045B74: beql        $v0, $zero, L_80045B8C
    if (ctx->r2 == 0) {
        // 0x80045B78: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80045B8C;
    }
    goto skip_0;
    // 0x80045B78: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80045B7C: beq         $a1, $zero, L_80045BA4
    if (ctx->r5 == 0) {
        // 0x80045B80: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80045BA4;
    }
    // 0x80045B80: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80045B84: j           L_80045D3C
    // 0x80045B88: nop

        goto L_80045D3C;
    // 0x80045B88: nop

L_80045B8C:
    // 0x80045B8C: beq         $a1, $v0, L_80045BD4
    if (ctx->r5 == ctx->r2) {
        // 0x80045B90: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80045BD4;
    }
    // 0x80045B90: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80045B94: beq         $a1, $v0, L_80045BE0
    if (ctx->r5 == ctx->r2) {
        // 0x80045B98: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80045BE0;
    }
    // 0x80045B98: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80045B9C: j           L_80045D3C
    // 0x80045BA0: nop

        goto L_80045D3C;
    // 0x80045BA0: nop

L_80045BA4:
    // 0x80045BA4: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x80045BA8: lh          $a1, -0x72D0($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X72D0);
    // 0x80045BAC: lh          $v1, 0x0($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X0);
    // 0x80045BB0: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80045BB4: j           L_80045BF4
    // 0x80045BB8: lh          $a0, -0x3FA8($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X3FA8);
        goto L_80045BF4;
    // 0x80045BB8: lh          $a0, -0x3FA8($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X3FA8);
L_80045BBC:
    // 0x80045BBC: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x80045BC0: lh          $a1, -0x3FAC($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X3FAC);
    // 0x80045BC4: lh          $v1, 0x0($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X0);
    // 0x80045BC8: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80045BCC: j           L_80045BF4
    // 0x80045BD0: lh          $a0, -0x3FA8($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X3FA8);
        goto L_80045BF4;
    // 0x80045BD0: lh          $a0, -0x3FA8($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X3FA8);
L_80045BD4:
    // 0x80045BD4: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x80045BD8: j           L_80045BE8
    // 0x80045BDC: lh          $a1, -0x72D0($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X72D0);
        goto L_80045BE8;
    // 0x80045BDC: lh          $a1, -0x72D0($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X72D0);
L_80045BE0:
    // 0x80045BE0: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x80045BE4: lh          $a1, -0x3FAC($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X3FAC);
L_80045BE8:
    // 0x80045BE8: lh          $v1, 0x0($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X0);
    // 0x80045BEC: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x80045BF0: lh          $a0, -0x72CC($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X72CC);
L_80045BF4:
    // 0x80045BF4: lh          $v0, 0x4($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X4);
    // 0x80045BF8: subu        $a1, $a1, $v1
    ctx->r5 = SUB32(ctx->r5, ctx->r3);
    // 0x80045BFC: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x80045C00: bgez        $a2, L_80045C0C
    if (SIGNED(ctx->r6) >= 0) {
        // 0x80045C04: subu        $a0, $a0, $v0
        ctx->r4 = SUB32(ctx->r4, ctx->r2);
            goto L_80045C0C;
    }
    // 0x80045C04: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x80045C08: negu        $a2, $a2
    ctx->r6 = SUB32(0, ctx->r6);
L_80045C0C:
    // 0x80045C0C: bgez        $a0, L_80045C18
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80045C10: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_80045C18;
    }
    // 0x80045C10: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x80045C14: negu        $v1, $a0
    ctx->r3 = SUB32(0, ctx->r4);
L_80045C18:
    // 0x80045C18: slt         $v0, $v1, $a2
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80045C1C: beq         $v0, $zero, L_80045C3C
    if (ctx->r2 == 0) {
        // 0x80045C20: nop
    
            goto L_80045C3C;
    }
    // 0x80045C20: nop

    // 0x80045C24: bgtzl       $a1, L_80045C34
    if (SIGNED(ctx->r5) > 0) {
        // 0x80045C28: sh          $v1, 0x10($sp)
        MEM_H(0X10, ctx->r29) = ctx->r3;
            goto L_80045C34;
    }
    goto skip_1;
    // 0x80045C28: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    skip_1:
    // 0x80045C2C: negu        $v0, $v1
    ctx->r2 = SUB32(0, ctx->r3);
    // 0x80045C30: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
L_80045C34:
    // 0x80045C34: j           L_80045C54
    // 0x80045C38: sh          $a0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r4;
        goto L_80045C54;
    // 0x80045C38: sh          $a0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r4;
L_80045C3C:
    // 0x80045C3C: bgtz        $a0, L_80045C50
    if (SIGNED(ctx->r4) > 0) {
        // 0x80045C40: sh          $a1, 0x10($sp)
        MEM_H(0X10, ctx->r29) = ctx->r5;
            goto L_80045C50;
    }
    // 0x80045C40: sh          $a1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r5;
    // 0x80045C44: negu        $v0, $a2
    ctx->r2 = SUB32(0, ctx->r6);
    // 0x80045C48: j           L_80045C54
    // 0x80045C4C: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
        goto L_80045C54;
    // 0x80045C4C: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
L_80045C50:
    // 0x80045C50: sh          $a2, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r6;
L_80045C54:
    // 0x80045C54: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80045C58: lh          $v0, -0x35B8($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X35B8);
    // 0x80045C5C: blez        $v0, L_80045C70
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80045C60: nop
    
            goto L_80045C70;
    }
    // 0x80045C60: nop

    // 0x80045C64: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80045C68: j           L_80045C78
    // 0x80045C6C: lhu         $v0, -0x3FAA($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3FAA);
        goto L_80045C78;
    // 0x80045C6C: lhu         $v0, -0x3FAA($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3FAA);
L_80045C70:
    // 0x80045C70: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80045C74: lhu         $v0, -0x72CE($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X72CE);
L_80045C78:
    // 0x80045C78: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80045C7C: lhu         $v1, -0x7156($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X7156);
    // 0x80045C80: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80045C84: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x80045C88: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80045C8C: lh          $v0, -0x35B8($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X35B8);
    // 0x80045C90: beq         $v0, $zero, L_80045CD4
    if (ctx->r2 == 0) {
        // 0x80045C94: nop
    
            goto L_80045CD4;
    }
    // 0x80045C94: nop

    // 0x80045C98: lh          $v0, 0x10($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X10);
    // 0x80045C9C: lh          $v1, 0x12($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X12);
    // 0x80045CA0: bgez        $v0, L_80045CAC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80045CA4: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_80045CAC;
    }
    // 0x80045CA4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80045CA8: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
L_80045CAC:
    // 0x80045CAC: bltz        $v1, L_80045CC4
    if (SIGNED(ctx->r3) < 0) {
        // 0x80045CB0: slt         $v0, $a0, $v1
        ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_80045CC4;
    }
    // 0x80045CB0: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80045CB4: beq         $v0, $zero, L_80045D0C
    if (ctx->r2 == 0) {
        // 0x80045CB8: nop
    
            goto L_80045D0C;
    }
    // 0x80045CB8: nop

    // 0x80045CBC: j           L_80045CD4
    // 0x80045CC0: nop

        goto L_80045CD4;
    // 0x80045CC0: nop

L_80045CC4:
    // 0x80045CC4: negu        $v0, $v1
    ctx->r2 = SUB32(0, ctx->r3);
    // 0x80045CC8: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80045CCC: beq         $v0, $zero, L_80045D0C
    if (ctx->r2 == 0) {
        // 0x80045CD0: nop
    
            goto L_80045D0C;
    }
    // 0x80045CD0: nop

L_80045CD4:
    // 0x80045CD4: lhu         $v0, 0x0($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X0);
    // 0x80045CD8: lhu         $v1, 0x10($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X10);
    // 0x80045CDC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80045CE0: sh          $v0, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r2;
    // 0x80045CE4: lhu         $v0, 0x4($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X4);
    // 0x80045CE8: lhu         $v1, 0x14($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X14);
    // 0x80045CEC: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80045CF0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80045CF4: jal         0x800463CC
    // 0x80045CF8: sh          $v0, 0x4($a3)
    MEM_H(0X4, ctx->r7) = ctx->r2;
    func_800463CC_217CC(rdram, ctx);
        goto after_0;
    // 0x80045CF8: sh          $v0, 0x4($a3)
    MEM_H(0X4, ctx->r7) = ctx->r2;
    after_0:
    // 0x80045CFC: jal         0x80046404
    // 0x80045D00: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_80046404_21804(rdram, ctx);
        goto after_1;
    // 0x80045D00: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_1:
    // 0x80045D04: j           L_80045D3C
    // 0x80045D08: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_80045D3C;
    // 0x80045D08: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80045D0C:
    // 0x80045D0C: lhu         $v0, 0x2($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X2);
    // 0x80045D10: lhu         $v1, 0x12($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X12);
    // 0x80045D14: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80045D18: sh          $v0, 0x2($a3)
    MEM_H(0X2, ctx->r7) = ctx->r2;
    // 0x80045D1C: lhu         $a0, 0x12($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X12);
    // 0x80045D20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80045D24: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x80045D28: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80045D2C: sb          $v1, -0x7818($at)
    MEM_B(-0X7818, ctx->r1) = ctx->r3;
    // 0x80045D30: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
    // 0x80045D34: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80045D38: sh          $a0, -0x26B8($at)
    MEM_H(-0X26B8, ctx->r1) = ctx->r4;
L_80045D3C:
    // 0x80045D3C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80045D40: jr          $ra
    // 0x80045D44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80045D44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80078854_53C54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80078854: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80078858: lbu         $v1, 0x8($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X8);
    // 0x8007885C: addiu       $v0, $v0, -0x5
    ctx->r2 = ADD32(ctx->r2, -0X5);
    // 0x80078860: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80078864: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80078868: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8007886C: lbu         $v0, -0x32D8($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X32D8);
    // 0x80078870: addiu       $v1, $v1, -0x5
    ctx->r3 = ADD32(ctx->r3, -0X5);
    // 0x80078874: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80078878: sb          $v0, 0x22($a0)
    MEM_B(0X22, ctx->r4) = ctx->r2;
    // 0x8007887C: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80078880: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x80078884: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80078888: lbu         $v1, -0x32D7($at)
    ctx->r3 = MEM_BU(ctx->r1, -0X32D7);
    // 0x8007888C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80078890: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    // 0x80078894: jr          $ra
    // 0x80078898: sb          $v1, 0x23($a0)
    MEM_B(0X23, ctx->r4) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x80078898: sb          $v1, 0x23($a0)
    MEM_B(0X23, ctx->r4) = ctx->r3;
;}
RECOMP_FUNC void func_80039F68_15368(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80039F68: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80039F6C: lw          $v1, 0x55A0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X55A0);
    // 0x80039F70: sltu        $v0, $a0, $v1
    ctx->r2 = ctx->r4 < ctx->r3 ? 1 : 0;
    // 0x80039F74: bnel        $v0, $zero, L_80039FB4
    if (ctx->r2 != 0) {
        // 0x80039F78: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80039FB4;
    }
    goto skip_0;
    // 0x80039F78: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
    // 0x80039F7C: subu        $v1, $a0, $v1
    ctx->r3 = SUB32(ctx->r4, ctx->r3);
    // 0x80039F80: lui         $v0, 0xAAAA
    ctx->r2 = S32(0XAAAA << 16);
    // 0x80039F84: ori         $v0, $v0, 0xAAAB
    ctx->r2 = ctx->r2 | 0XAAAB;
    // 0x80039F88: multu       $v1, $v0
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80039F8C: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x80039F90: lw          $v1, -0x2660($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X2660);
    // 0x80039F94: mfhi        $a1
    ctx->r5 = hi;
    // 0x80039F98: srl         $a0, $a1, 5
    ctx->r4 = S32(U32(ctx->r5) >> 5);
    // 0x80039F9C: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x80039FA0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80039FA4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80039FA8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80039FAC: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x80039FB0: srl         $v0, $v0, 14
    ctx->r2 = S32(U32(ctx->r2) >> 14);
L_80039FB4:
    // 0x80039FB4: jr          $ra
    // 0x80039FB8: nop

    TRACE_RETURN()
    return;
    // 0x80039FB8: nop

;}
RECOMP_FUNC void func_800625F0_3D9F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800625F0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800625F4: lw          $a1, 0x6C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X6C);
    // 0x800625F8: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x800625FC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80062600: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80062604: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x80062608: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006260C: jr          $ra
    // 0x80062610: sw          $a1, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x80062610: sw          $a1, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_80085404_60804(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80085404: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x80085408: lw          $a2, -0x6F10($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X6F10);
    // 0x8008540C: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x80085410: sw          $s1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r17;
    // 0x80085414: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80085418: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x8008541C: sw          $ra, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r31;
    // 0x80085420: sw          $s2, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r18;
    // 0x80085424: sw          $s0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r16;
    // 0x80085428: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x8008542C: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x80085430: lw          $a0, 0x40($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X40);
    // 0x80085434: lw          $a1, 0x44($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X44);
    // 0x80085438: addiu       $v0, $a2, 0x8
    ctx->r2 = ADD32(ctx->r6, 0X8);
    // 0x8008543C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80085440: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80085444: srl         $v1, $a0, 16
    ctx->r3 = S32(U32(ctx->r4) >> 16);
    // 0x80085448: andi        $v0, $v1, 0x3F
    ctx->r2 = ctx->r3 & 0X3F;
    // 0x8008544C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80085450: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80085454: sra         $v1, $v1, 22
    ctx->r3 = S32(SIGNED(ctx->r3) >> 22);
    // 0x80085458: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    // 0x8008545C: sll         $v0, $a0, 6
    ctx->r2 = S32(ctx->r4 << 6);
    // 0x80085460: andi        $v0, $v0, 0x7C0
    ctx->r2 = ctx->r2 & 0X7C0;
    // 0x80085464: sh          $v1, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r3;
    // 0x80085468: sll         $v1, $a0, 4
    ctx->r3 = S32(ctx->r4 << 4);
    // 0x8008546C: andi        $v1, $v1, 0x100
    ctx->r3 = ctx->r3 & 0X100;
    // 0x80085470: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80085474: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    // 0x80085478: sra         $v0, $a0, 18
    ctx->r2 = S32(SIGNED(ctx->r4) >> 18);
    // 0x8008547C: andi        $v0, $v0, 0x200
    ctx->r2 = ctx->r2 & 0X200;
    // 0x80085480: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80085484: sra         $v0, $a0, 23
    ctx->r2 = S32(SIGNED(ctx->r4) >> 23);
    // 0x80085488: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8008548C: sra         $a0, $a0, 21
    ctx->r4 = S32(SIGNED(ctx->r4) >> 21);
    // 0x80085490: andi        $a0, $a0, 0x3
    ctx->r4 = ctx->r4 & 0X3;
    // 0x80085494: sb          $v0, 0x28($sp)
    MEM_B(0X28, ctx->r29) = ctx->r2;
    // 0x80085498: srl         $v0, $a1, 8
    ctx->r2 = S32(U32(ctx->r5) >> 8);
    // 0x8008549C: sb          $v0, 0x2C($sp)
    MEM_B(0X2C, ctx->r29) = ctx->r2;
    // 0x800854A0: srl         $v0, $a1, 16
    ctx->r2 = S32(U32(ctx->r5) >> 16);
    // 0x800854A4: sb          $a1, 0x2B($sp)
    MEM_B(0X2B, ctx->r29) = ctx->r5;
    // 0x800854A8: srl         $a1, $a1, 25
    ctx->r5 = S32(U32(ctx->r5) >> 25);
    // 0x800854AC: andi        $a1, $a1, 0x1
    ctx->r5 = ctx->r5 & 0X1;
    // 0x800854B0: sh          $v1, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r3;
    // 0x800854B4: sb          $a0, 0x2A($sp)
    MEM_B(0X2A, ctx->r29) = ctx->r4;
    // 0x800854B8: sb          $v0, 0x2D($sp)
    MEM_B(0X2D, ctx->r29) = ctx->r2;
    // 0x800854BC: beq         $a1, $zero, L_800854D8
    if (ctx->r5 == 0) {
        // 0x800854C0: sb          $a1, 0x29($sp)
        MEM_B(0X29, ctx->r29) = ctx->r5;
            goto L_800854D8;
    }
    // 0x800854C0: sb          $a1, 0x29($sp)
    MEM_B(0X29, ctx->r29) = ctx->r5;
    // 0x800854C4: lui         $a0, 0xE200
    ctx->r4 = S32(0XE200 << 16);
    // 0x800854C8: ori         $a0, $a0, 0x1C
    ctx->r4 = ctx->r4 | 0X1C;
    // 0x800854CC: lui         $v1, 0xC810
    ctx->r3 = S32(0XC810 << 16);
    // 0x800854D0: j           L_800854E8
    // 0x800854D4: ori         $v1, $v1, 0x4B50
    ctx->r3 = ctx->r3 | 0X4B50;
        goto L_800854E8;
    // 0x800854D4: ori         $v1, $v1, 0x4B50
    ctx->r3 = ctx->r3 | 0X4B50;
L_800854D8:
    // 0x800854D8: lui         $a0, 0xE200
    ctx->r4 = S32(0XE200 << 16);
    // 0x800854DC: ori         $a0, $a0, 0x1C
    ctx->r4 = ctx->r4 | 0X1C;
    // 0x800854E0: lui         $v1, 0xC811
    ctx->r3 = S32(0XC811 << 16);
    // 0x800854E4: ori         $v1, $v1, 0x3078
    ctx->r3 = ctx->r3 | 0X3078;
L_800854E8:
    // 0x800854E8: addiu       $v0, $a2, 0x10
    ctx->r2 = ADD32(ctx->r6, 0X10);
    // 0x800854EC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800854F0: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x800854F4: sw          $a0, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->r4;
    // 0x800854F8: sw          $v1, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r3;
    // 0x800854FC: lbu         $v0, 0x29($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X29);
    // 0x80085500: beq         $v0, $zero, L_80085544
    if (ctx->r2 == 0) {
        // 0x80085504: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80085544;
    }
    // 0x80085504: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80085508: lbu         $v1, 0x2A($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X2A);
    // 0x8008550C: beq         $v1, $v0, L_8008553C
    if (ctx->r3 == ctx->r2) {
        // 0x80085510: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8008553C;
    }
    // 0x80085510: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80085514: beql        $v0, $zero, L_8008552C
    if (ctx->r2 == 0) {
        // 0x80085518: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8008552C;
    }
    goto skip_0;
    // 0x80085518: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8008551C: beq         $v1, $zero, L_80085548
    if (ctx->r3 == 0) {
        // 0x80085520: addiu       $s0, $zero, 0x80
        ctx->r16 = ADD32(0, 0X80);
            goto L_80085548;
    }
    // 0x80085520: addiu       $s0, $zero, 0x80
    ctx->r16 = ADD32(0, 0X80);
    // 0x80085524: j           L_80085548
    // 0x80085528: addiu       $s0, $zero, 0xFF
    ctx->r16 = ADD32(0, 0XFF);
        goto L_80085548;
    // 0x80085528: addiu       $s0, $zero, 0xFF
    ctx->r16 = ADD32(0, 0XFF);
L_8008552C:
    // 0x8008552C: beq         $v1, $v0, L_80085548
    if (ctx->r3 == ctx->r2) {
        // 0x80085530: addiu       $s0, $zero, 0xC0
        ctx->r16 = ADD32(0, 0XC0);
            goto L_80085548;
    }
    // 0x80085530: addiu       $s0, $zero, 0xC0
    ctx->r16 = ADD32(0, 0XC0);
    // 0x80085534: j           L_80085548
    // 0x80085538: addiu       $s0, $zero, 0xFF
    ctx->r16 = ADD32(0, 0XFF);
        goto L_80085548;
    // 0x80085538: addiu       $s0, $zero, 0xFF
    ctx->r16 = ADD32(0, 0XFF);
L_8008553C:
    // 0x8008553C: j           L_80085548
    // 0x80085540: addiu       $s0, $zero, 0xC0
    ctx->r16 = ADD32(0, 0XC0);
        goto L_80085548;
    // 0x80085540: addiu       $s0, $zero, 0xC0
    ctx->r16 = ADD32(0, 0XC0);
L_80085544:
    // 0x80085544: addiu       $s0, $zero, 0xFF
    ctx->r16 = ADD32(0, 0XFF);
L_80085548:
    // 0x80085548: lui         $v1, 0x5555
    ctx->r3 = S32(0X5555 << 16);
    // 0x8008554C: lbu         $a1, 0x2B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2B);
    // 0x80085550: lbu         $a2, 0x2C($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X2C);
    // 0x80085554: lbu         $a3, 0x2D($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X2D);
    // 0x80085558: ori         $v1, $v1, 0x5556
    ctx->r3 = ctx->r3 | 0X5556;
    // 0x8008555C: addu        $a0, $a1, $a2
    ctx->r4 = ADD32(ctx->r5, ctx->r6);
    // 0x80085560: addu        $a0, $a0, $a3
    ctx->r4 = ADD32(ctx->r4, ctx->r7);
    // 0x80085564: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80085568: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8008556C: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x80085570: mfhi        $t2
    ctx->r10 = hi;
    // 0x80085574: subu        $a0, $t2, $v0
    ctx->r4 = SUB32(ctx->r10, ctx->r2);
    // 0x80085578: slti        $v0, $a0, 0x100
    ctx->r2 = SIGNED(ctx->r4) < 0X100 ? 1 : 0;
    // 0x8008557C: beql        $v0, $zero, L_80085584
    if (ctx->r2 == 0) {
        // 0x80085580: addiu       $a0, $zero, 0xFF
        ctx->r4 = ADD32(0, 0XFF);
            goto L_80085584;
    }
    goto skip_1;
    // 0x80085580: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    skip_1:
L_80085584:
    // 0x80085584: lbu         $v0, 0x29($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X29);
    // 0x80085588: beq         $v0, $zero, L_80085628
    if (ctx->r2 == 0) {
        // 0x8008558C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80085628;
    }
    // 0x8008558C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80085590: lbu         $v1, 0x2A($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X2A);
    // 0x80085594: bne         $v1, $v0, L_800855C4
    if (ctx->r3 != ctx->r2) {
        // 0x80085598: andi        $a1, $a1, 0xFF
        ctx->r5 = ctx->r5 & 0XFF;
            goto L_800855C4;
    }
    // 0x80085598: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x8008559C: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x800855A0: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x800855A4: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x800855A8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800855AC: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x800855B0: lui         $v0, 0xFA00
    ctx->r2 = S32(0XFA00 << 16);
    // 0x800855B4: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x800855B8: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x800855BC: j           L_800856B8
    // 0x800855C0: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
        goto L_800856B8;
    // 0x800855C0: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
L_800855C4:
    // 0x800855C4: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x800855C8: bne         $a1, $v0, L_800855DC
    if (ctx->r5 != ctx->r2) {
        // 0x800855CC: ori         $v0, $zero, 0x8080
        ctx->r2 = 0 | 0X8080;
            goto L_800855DC;
    }
    // 0x800855CC: ori         $v0, $zero, 0x8080
    ctx->r2 = 0 | 0X8080;
    // 0x800855D0: lhu         $v1, 0x2C($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X2C);
    // 0x800855D4: beq         $v1, $v0, L_80085628
    if (ctx->r3 == ctx->r2) {
        // 0x800855D8: nop
    
            goto L_80085628;
    }
    // 0x800855D8: nop

L_800855DC:
    // 0x800855DC: bne         $a1, $a2, L_80085628
    if (ctx->r5 != ctx->r6) {
        // 0x800855E0: nop
    
            goto L_80085628;
    }
    // 0x800855E0: nop

    // 0x800855E4: bne         $a1, $a3, L_80085628
    if (ctx->r5 != ctx->r7) {
        // 0x800855E8: nop
    
            goto L_80085628;
    }
    // 0x800855E8: nop

    // 0x800855EC: lw          $v0, 0x44($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X44);
    // 0x800855F0: bgez        $v0, L_800855FC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x800855F4: addu        $s0, $a0, $zero
        ctx->r16 = ADD32(ctx->r4, 0);
            goto L_800855FC;
    }
    // 0x800855F4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x800855F8: lbu         $s0, 0x4C($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0X4C);
L_800855FC:
    // 0x800855FC: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80085600: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x80085604: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x80085608: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8008560C: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80085610: lui         $v0, 0xFA00
    ctx->r2 = S32(0XFA00 << 16);
    // 0x80085614: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80085618: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
    // 0x8008561C: or          $v0, $s0, $v0
    ctx->r2 = ctx->r16 | ctx->r2;
    // 0x80085620: j           L_800856B8
    // 0x80085624: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
        goto L_800856B8;
    // 0x80085624: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
L_80085628:
    // 0x80085628: lw          $v0, 0x44($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X44);
    // 0x8008562C: bgez        $v0, L_80085638
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80085630: nop
    
            goto L_80085638;
    }
    // 0x80085630: nop

    // 0x80085634: lbu         $s0, 0x4C($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0X4C);
L_80085638:
    // 0x80085638: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x8008563C: lw          $a2, -0x6F10($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X6F10);
    // 0x80085640: lui         $v0, 0xFA00
    ctx->r2 = S32(0XFA00 << 16);
    // 0x80085644: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x80085648: lbu         $v1, 0x2B($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X2B);
    // 0x8008564C: addiu       $v0, $a2, 0x8
    ctx->r2 = ADD32(ctx->r6, 0X8);
    // 0x80085650: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80085654: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80085658: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8008565C: sltiu       $v0, $v1, 0x100
    ctx->r2 = ctx->r3 < 0X100 ? 1 : 0;
    // 0x80085660: beql        $v0, $zero, L_80085668
    if (ctx->r2 == 0) {
        // 0x80085664: addiu       $v1, $zero, 0xFF
        ctx->r3 = ADD32(0, 0XFF);
            goto L_80085668;
    }
    goto skip_2;
    // 0x80085664: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    skip_2:
L_80085668:
    // 0x80085668: lbu         $a0, 0x2C($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X2C);
    // 0x8008566C: sll         $a0, $a0, 1
    ctx->r4 = S32(ctx->r4 << 1);
    // 0x80085670: sltiu       $v0, $a0, 0x100
    ctx->r2 = ctx->r4 < 0X100 ? 1 : 0;
    // 0x80085674: beql        $v0, $zero, L_8008567C
    if (ctx->r2 == 0) {
        // 0x80085678: addiu       $a0, $zero, 0xFF
        ctx->r4 = ADD32(0, 0XFF);
            goto L_8008567C;
    }
    goto skip_3;
    // 0x80085678: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    skip_3:
L_8008567C:
    // 0x8008567C: lbu         $a1, 0x2D($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2D);
    // 0x80085680: sll         $a1, $a1, 1
    ctx->r5 = S32(ctx->r5 << 1);
    // 0x80085684: sltiu       $v0, $a1, 0x100
    ctx->r2 = ctx->r5 < 0X100 ? 1 : 0;
    // 0x80085688: beql        $v0, $zero, L_80085690
    if (ctx->r2 == 0) {
        // 0x8008568C: addiu       $a1, $zero, 0xFF
        ctx->r5 = ADD32(0, 0XFF);
            goto L_80085690;
    }
    goto skip_4;
    // 0x8008568C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    skip_4:
L_80085690:
    // 0x80085690: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x80085694: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x80085698: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8008569C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x800856A0: andi        $v0, $a1, 0xFF
    ctx->r2 = ctx->r5 & 0XFF;
    // 0x800856A4: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x800856A8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x800856AC: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x800856B0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x800856B4: sw          $v1, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r3;
L_800856B8:
    // 0x800856B8: lui         $v1, 0xDA38
    ctx->r3 = S32(0XDA38 << 16);
    // 0x800856BC: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x800856C0: lw          $v0, -0x6F10($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6F10);
    // 0x800856C4: ori         $v1, $v1, 0x3
    ctx->r3 = ctx->r3 | 0X3;
    // 0x800856C8: lui         $a1, 0xFF
    ctx->r5 = S32(0XFF << 16);
    // 0x800856CC: ori         $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 | 0XFFFF;
    // 0x800856D0: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x800856D4: lui         $v1, 0xE700
    ctx->r3 = S32(0XE700 << 16);
    // 0x800856D8: sw          $s1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r17;
    // 0x800856DC: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x800856E0: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x800856E4: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x800856E8: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x800856EC: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x800856F0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800856F4: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x800856F8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800856FC: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80085700: lh          $v0, 0x22($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X22);
    // 0x80085704: lw          $v1, 0x44($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X44);
    // 0x80085708: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8008570C: or          $s0, $a0, $v0
    ctx->r16 = ctx->r4 | ctx->r2;
    // 0x80085710: lui         $a0, 0x8019
    ctx->r4 = S32(0X8019 << 16);
    // 0x80085714: lw          $a0, 0x3C30($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3C30);
    // 0x80085718: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8008571C: bne         $a0, $v0, L_80085744
    if (ctx->r4 != ctx->r2) {
        // 0x80085720: and         $s2, $v1, $a1
        ctx->r18 = ctx->r3 & ctx->r5;
            goto L_80085744;
    }
    // 0x80085720: and         $s2, $v1, $a1
    ctx->r18 = ctx->r3 & ctx->r5;
    // 0x80085724: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80085728: lw          $v0, -0x3C70($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3C70);
    // 0x8008572C: bne         $v0, $s0, L_80085744
    if (ctx->r2 != ctx->r16) {
        // 0x80085730: nop
    
            goto L_80085744;
    }
    // 0x80085730: nop

    // 0x80085734: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80085738: lw          $v0, -0x3C6C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3C6C);
    // 0x8008573C: beq         $v0, $s2, L_80085770
    if (ctx->r2 == ctx->r18) {
        // 0x80085740: nop
    
            goto L_80085770;
    }
    // 0x80085740: nop

L_80085744:
    // 0x80085744: lbu         $v0, 0x2D($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X2D);
    // 0x80085748: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x8008574C: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    // 0x80085750: lbu         $a2, 0x2B($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X2B);
    // 0x80085754: lbu         $a3, 0x2C($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X2C);
    // 0x80085758: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8008575C: lbu         $v0, 0x29($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X29);
    // 0x80085760: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80085764: lbu         $v0, 0x2A($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X2A);
    // 0x80085768: jal         0x80084EF8
    // 0x8008576C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80084EF8_602F8(rdram, ctx);
        goto after_0;
    // 0x8008576C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_0:
L_80085770:
    // 0x80085770: lui         $v1, 0x8019
    ctx->r3 = S32(0X8019 << 16);
    // 0x80085774: lw          $v1, 0x3C30($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3C30);
    // 0x80085778: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8008577C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80085780: sw          $s0, -0x3C70($at)
    MEM_W(-0X3C70, ctx->r1) = ctx->r16;
    // 0x80085784: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80085788: beq         $v1, $v0, L_800857B8
    if (ctx->r3 == ctx->r2) {
        // 0x8008578C: sw          $s2, -0x3C6C($at)
        MEM_W(-0X3C6C, ctx->r1) = ctx->r18;
            goto L_800857B8;
    }
    // 0x8008578C: sw          $s2, -0x3C6C($at)
    MEM_W(-0X3C6C, ctx->r1) = ctx->r18;
    // 0x80085790: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80085794: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x80085798: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x8008579C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800857A0: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x800857A4: lui         $v0, 0xDE00
    ctx->r2 = S32(0XDE00 << 16);
    // 0x800857A8: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x800857AC: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x800857B0: addiu       $v0, $v0, -0x1770
    ctx->r2 = ADD32(ctx->r2, -0X1770);
    // 0x800857B4: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
L_800857B8:
    // 0x800857B8: lhu         $v1, 0x4A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X4A);
    // 0x800857BC: addiu       $v0, $zero, 0x2020
    ctx->r2 = ADD32(0, 0X2020);
    // 0x800857C0: bne         $v1, $v0, L_800857F4
    if (ctx->r3 != ctx->r2) {
        // 0x800857C4: lui         $a0, 0x100
        ctx->r4 = S32(0X100 << 16);
            goto L_800857F4;
    }
    // 0x800857C4: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x800857C8: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x800857CC: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x800857D0: ori         $a0, $a0, 0x4008
    ctx->r4 = ctx->r4 | 0X4008;
    // 0x800857D4: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x800857D8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800857DC: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x800857E0: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x800857E4: addiu       $v0, $v0, -0x17B0
    ctx->r2 = ADD32(ctx->r2, -0X17B0);
    // 0x800857E8: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    // 0x800857EC: j           L_800858F0
    // 0x800857F0: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
        goto L_800858F0;
    // 0x800857F0: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
L_800857F4:
    // 0x800857F4: jal         0x800281C8
    // 0x800857F8: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    func_800281C8_35C8(rdram, ctx);
        goto after_1;
    // 0x800857F8: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    after_1:
    // 0x800857FC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80085800: beq         $s0, $zero, L_80085990
    if (ctx->r16 == 0) {
        // 0x80085804: addiu       $a0, $sp, 0x30
        ctx->r4 = ADD32(ctx->r29, 0X30);
            goto L_80085990;
    }
    // 0x80085804: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x80085808: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8008580C: addiu       $a1, $a1, 0x2CB8
    ctx->r5 = ADD32(ctx->r5, 0X2CB8);
    // 0x80085810: jal         0x8009A3B4
    // 0x80085814: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80085814: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_2:
    // 0x80085818: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x8008581C: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80085820: addiu       $a1, $a1, 0x2CD8
    ctx->r5 = ADD32(ctx->r5, 0X2CD8);
    // 0x80085824: jal         0x8009A3B4
    // 0x80085828: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80085828: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_3:
    // 0x8008582C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80085830: jal         0x8009A2B0
    // 0x80085834: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    bzero_recomp(rdram, ctx);
        goto after_4;
    // 0x80085834: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_4:
    // 0x80085838: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x8008583C: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x80085840: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x80085844: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x80085848: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8008584C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
L_80085850:
    // 0x80085850: lbu         $v1, 0x4A($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X4A);
    // 0x80085854: lw          $v0, 0x10($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10);
    // 0x80085858: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8008585C: mflo        $v0
    ctx->r2 = lo;
    // 0x80085860: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x80085864: lbu         $v1, 0x4B($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X4B);
    // 0x80085868: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x8008586C: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80085870: mflo        $v0
    ctx->r2 = lo;
    // 0x80085874: sh          $v0, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r2;
    // 0x80085878: lbu         $v1, 0x4A($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X4A);
    // 0x8008587C: lw          $v0, 0x30($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X30);
    // 0x80085880: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80085884: mflo        $v0
    ctx->r2 = lo;
    // 0x80085888: sh          $v0, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r2;
    // 0x8008588C: lbu         $v0, 0x4B($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4B);
    // 0x80085890: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x80085894: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80085898: mflo        $v1
    ctx->r3 = lo;
    // 0x8008589C: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x800858A0: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x800858A4: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x800858A8: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    // 0x800858AC: sb          $t1, 0xF($a0)
    MEM_B(0XF, ctx->r4) = ctx->r9;
    // 0x800858B0: sb          $t1, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r9;
    // 0x800858B4: sb          $t1, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r9;
    // 0x800858B8: sb          $t1, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r9;
    // 0x800858BC: slti        $v0, $t0, 0x4
    ctx->r2 = SIGNED(ctx->r8) < 0X4 ? 1 : 0;
    // 0x800858C0: sh          $v1, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r3;
    // 0x800858C4: bne         $v0, $zero, L_80085850
    if (ctx->r2 != 0) {
        // 0x800858C8: addiu       $a0, $a0, 0x10
        ctx->r4 = ADD32(ctx->r4, 0X10);
            goto L_80085850;
    }
    // 0x800858C8: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x800858CC: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x800858D0: lw          $v0, -0x6F10($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6F10);
    // 0x800858D4: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x800858D8: ori         $a0, $a0, 0x4008
    ctx->r4 = ctx->r4 | 0X4008;
    // 0x800858DC: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x800858E0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800858E4: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x800858E8: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    // 0x800858EC: sw          $s0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r16;
L_800858F0:
    // 0x800858F0: lw          $v1, 0x40($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X40);
    // 0x800858F4: lbu         $v0, 0x48($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X48);
    // 0x800858F8: lbu         $a0, 0x49($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X49);
    // 0x800858FC: lui         $a1, 0x8019
    ctx->r5 = S32(0X8019 << 16);
    // 0x80085900: lw          $a1, 0x3C30($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X3C30);
    // 0x80085904: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80085908: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8008590C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80085910: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80085914: bne         $a1, $v0, L_8008592C
    if (ctx->r5 != ctx->r2) {
        // 0x80085918: or          $s0, $v1, $a0
        ctx->r16 = ctx->r3 | ctx->r4;
            goto L_8008592C;
    }
    // 0x80085918: or          $s0, $v1, $a0
    ctx->r16 = ctx->r3 | ctx->r4;
    // 0x8008591C: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80085920: lw          $v0, -0x3C68($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3C68);
    // 0x80085924: beq         $v0, $s0, L_8008593C
    if (ctx->r2 == ctx->r16) {
        // 0x80085928: lui         $a1, 0x600
        ctx->r5 = S32(0X600 << 16);
            goto L_8008593C;
    }
    // 0x80085928: lui         $a1, 0x600
    ctx->r5 = S32(0X600 << 16);
L_8008592C:
    // 0x8008592C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80085930: jal         0x80085210
    // 0x80085934: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    func_80085210_60610(rdram, ctx);
        goto after_5;
    // 0x80085934: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_5:
    // 0x80085938: lui         $a1, 0x600
    ctx->r5 = S32(0X600 << 16);
L_8008593C:
    // 0x8008593C: ori         $a1, $a1, 0x204
    ctx->r5 = ctx->r5 | 0X204;
    // 0x80085940: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80085944: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x80085948: lui         $a0, 0x4
    ctx->r4 = S32(0X4 << 16);
    // 0x8008594C: ori         $a0, $a0, 0x600
    ctx->r4 = ctx->r4 | 0X600;
    // 0x80085950: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80085954: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80085958: sw          $s0, -0x3C68($at)
    MEM_W(-0X3C68, ctx->r1) = ctx->r16;
    // 0x8008595C: lui         $at, 0x8019
    ctx->r1 = S32(0X8019 << 16);
    // 0x80085960: sw          $v0, 0x3C30($at)
    MEM_W(0X3C30, ctx->r1) = ctx->r2;
    // 0x80085964: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x80085968: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8008596C: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80085970: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
    // 0x80085974: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80085978: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8008597C: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x80085980: sw          $a1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r5;
    // 0x80085984: sw          $a0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r4;
    // 0x80085988: sw          $v0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r2;
    // 0x8008598C: sw          $zero, 0xC($v1)
    MEM_W(0XC, ctx->r3) = 0;
L_80085990:
    // 0x80085990: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    // 0x80085994: lw          $s2, 0x78($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X78);
    // 0x80085998: lw          $s1, 0x74($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X74);
    // 0x8008599C: lw          $s0, 0x70($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X70);
    // 0x800859A0: jr          $ra
    // 0x800859A4: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    TRACE_RETURN()
    return;
    // 0x800859A4: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    // 0x800859A8: nop

    // 0x800859AC: nop

;}
RECOMP_FUNC void func_8021DB90_ovl1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021DB90: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8021DB94: lhu         $v0, -0x72FA($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X72FA);
    // 0x8021DB98: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8021DB9C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8021DBA0: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x8021DBA4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8021DBA8: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x8021DBAC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8021DBB0: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8021DBB4: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8021DBB8: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8021DBBC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8021DBC0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8021DBC4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8021DBC8: bne         $v0, $s5, L_8021DBF0
    if (ctx->r2 != ctx->r21) {
        // 0x8021DBCC: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_8021DBF0;
    }
    // 0x8021DBCC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8021DBD0: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8021DBD4: lw          $v0, -0x72F8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X72F8);
    // 0x8021DBD8: sw          $v0, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r2;
    // 0x8021DBDC: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8021DBE0: lw          $v1, -0x72F4($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X72F4);
    // 0x8021DBE4: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    // 0x8021DBE8: j           L_8021DD34
    // 0x8021DBEC: sw          $v1, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->r3;
        goto L_8021DD34;
    // 0x8021DBEC: sw          $v1, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->r3;
L_8021DBF0:
    // 0x8021DBF0: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x8021DBF4: sll         $v0, $s5, 3
    ctx->r2 = S32(ctx->r21 << 3);
    // 0x8021DBF8: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x8021DBFC: addiu       $v1, $v1, 0x4720
    ctx->r3 = ADD32(ctx->r3, 0X4720);
    // 0x8021DC00: addu        $s3, $v0, $v1
    ctx->r19 = ADD32(ctx->r2, ctx->r3);
    // 0x8021DC04: lbu         $a0, 0x5($s3)
    ctx->r4 = MEM_BU(ctx->r19, 0X5);
    // 0x8021DC08: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8021DC0C: beq         $a0, $v0, L_8021DC2C
    if (ctx->r4 == ctx->r2) {
        // 0x8021DC10: addu        $fp, $s1, $zero
        ctx->r30 = ADD32(ctx->r17, 0);
            goto L_8021DC2C;
    }
    // 0x8021DC10: addu        $fp, $s1, $zero
    ctx->r30 = ADD32(ctx->r17, 0);
    // 0x8021DC14: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x8021DC18: addiu       $a1, $a1, 0x2990
    ctx->r5 = ADD32(ctx->r5, 0X2990);
    // 0x8021DC1C: lui         $a2, 0x71
    ctx->r6 = S32(0X71 << 16);
    // 0x8021DC20: addiu       $a2, $a2, 0x5430
    ctx->r6 = ADD32(ctx->r6, 0X5430);
    // 0x8021DC24: jal         0x80028D30
    // 0x8021DC28: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    func_80028D30_4130(rdram, ctx);
        goto after_0;
    // 0x8021DC28: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    after_0:
L_8021DC2C:
    // 0x8021DC2C: addiu       $s1, $s1, 0x60
    ctx->r17 = ADD32(ctx->r17, 0X60);
    // 0x8021DC30: lbu         $v0, 0x4($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X4);
    // 0x8021DC34: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8021DC38: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8021DC3C: addiu       $a0, $zero, -0x8
    ctx->r4 = ADD32(0, -0X8);
    // 0x8021DC40: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x8021DC44: addu        $v1, $a1, $v1
    ctx->r3 = ADD32(ctx->r5, ctx->r3);
    // 0x8021DC48: addiu       $v1, $v1, 0x7
    ctx->r3 = ADD32(ctx->r3, 0X7);
    // 0x8021DC4C: beq         $v0, $zero, L_8021DCB4
    if (ctx->r2 == 0) {
        // 0x8021DC50: and         $s1, $v1, $a0
        ctx->r17 = ctx->r3 & ctx->r4;
            goto L_8021DCB4;
    }
    // 0x8021DC50: and         $s1, $v1, $a0
    ctx->r17 = ctx->r3 & ctx->r4;
    // 0x8021DC54: addiu       $s7, $zero, -0x1
    ctx->r23 = ADD32(0, -0X1);
    // 0x8021DC58: addiu       $s6, $zero, -0x8
    ctx->r22 = ADD32(0, -0X8);
    // 0x8021DC5C: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
L_8021DC60:
    // 0x8021DC60: lw          $v1, 0x0($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X0);
    // 0x8021DC64: sll         $v0, $s0, 1
    ctx->r2 = S32(ctx->r16 << 1);
    // 0x8021DC68: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8021DC6C: lh          $a0, 0x0($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X0);
    // 0x8021DC70: beql        $a0, $s7, L_8021DCA0
    if (ctx->r4 == ctx->r23) {
        // 0x8021DC74: sw          $zero, 0x0($s2)
        MEM_W(0X0, ctx->r18) = 0;
            goto L_8021DCA0;
    }
    goto skip_0;
    // 0x8021DC74: sw          $zero, 0x0($s2)
    MEM_W(0X0, ctx->r18) = 0;
    skip_0:
    // 0x8021DC78: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x8021DC7C: addiu       $a1, $a1, -0xD20
    ctx->r5 = ADD32(ctx->r5, -0XD20);
    // 0x8021DC80: lui         $a2, 0x5A
    ctx->r6 = S32(0X5A << 16);
    // 0x8021DC84: addiu       $a2, $a2, -0x2100
    ctx->r6 = ADD32(ctx->r6, -0X2100);
    // 0x8021DC88: jal         0x80028D30
    // 0x8021DC8C: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    func_80028D30_4130(rdram, ctx);
        goto after_1;
    // 0x8021DC8C: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    after_1:
    // 0x8021DC90: sw          $s1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r17;
    // 0x8021DC94: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x8021DC98: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x8021DC9C: and         $s1, $v0, $s6
    ctx->r17 = ctx->r2 & ctx->r22;
L_8021DCA0:
    // 0x8021DCA0: lbu         $v0, 0x4($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X4);
    // 0x8021DCA4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8021DCA8: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8021DCAC: bne         $v0, $zero, L_8021DC60
    if (ctx->r2 != 0) {
        // 0x8021DCB0: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_8021DC60;
    }
    // 0x8021DCB0: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
L_8021DCB4:
    // 0x8021DCB4: addu        $s2, $s1, $zero
    ctx->r18 = ADD32(ctx->r17, 0);
    // 0x8021DCB8: lbu         $a0, 0x6($s3)
    ctx->r4 = MEM_BU(ctx->r19, 0X6);
    // 0x8021DCBC: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x8021DCC0: addiu       $a1, $a1, 0x2200
    ctx->r5 = ADD32(ctx->r5, 0X2200);
    // 0x8021DCC4: lui         $a2, 0x70
    ctx->r6 = S32(0X70 << 16);
    // 0x8021DCC8: addiu       $a2, $a2, 0xAD0
    ctx->r6 = ADD32(ctx->r6, 0XAD0);
    // 0x8021DCCC: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    // 0x8021DCD0: jal         0x80028D30
    // 0x8021DCD4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    func_80028D30_4130(rdram, ctx);
        goto after_2;
    // 0x8021DCD4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    after_2:
    // 0x8021DCD8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8021DCDC: addu        $v1, $s1, $zero
    ctx->r3 = ADD32(ctx->r17, 0);
L_8021DCE0:
    // 0x8021DCE0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021DCE4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8021DCE8: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x8021DCEC: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x8021DCF0: slti        $v0, $s0, 0x80
    ctx->r2 = SIGNED(ctx->r16) < 0X80 ? 1 : 0;
    // 0x8021DCF4: bne         $v0, $zero, L_8021DCE0
    if (ctx->r2 != 0) {
        // 0x8021DCF8: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_8021DCE0;
    }
    // 0x8021DCF8: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8021DCFC: sw          $fp, 0x8($s4)
    MEM_W(0X8, ctx->r20) = ctx->r30;
    // 0x8021DD00: lw          $v0, 0x8($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X8);
    // 0x8021DD04: addiu       $v1, $zero, -0x8
    ctx->r3 = ADD32(0, -0X8);
    // 0x8021DD08: sw          $s2, 0xC($s4)
    MEM_W(0XC, ctx->r20) = ctx->r18;
    // 0x8021DD0C: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x8021DD10: sw          $v0, -0x72F8($at)
    MEM_W(-0X72F8, ctx->r1) = ctx->r2;
    // 0x8021DD14: lw          $a0, 0xC($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XC);
    // 0x8021DD18: addu        $v0, $s1, $a1
    ctx->r2 = ADD32(ctx->r17, ctx->r5);
    // 0x8021DD1C: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x8021DD20: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8021DD24: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x8021DD28: sh          $s5, -0x72FA($at)
    MEM_H(-0X72FA, ctx->r1) = ctx->r21;
    // 0x8021DD2C: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x8021DD30: sw          $a0, -0x72F4($at)
    MEM_W(-0X72F4, ctx->r1) = ctx->r4;
L_8021DD34:
    // 0x8021DD34: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8021DD38: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8021DD3C: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8021DD40: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8021DD44: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8021DD48: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8021DD4C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8021DD50: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8021DD54: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8021DD58: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8021DD5C: jr          $ra
    // 0x8021DD60: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8021DD60: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8021DD64_ovl1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021DD64: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8021DD68: lhu         $v0, -0x72FA($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X72FA);
    // 0x8021DD6C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8021DD70: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8021DD74: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x8021DD78: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8021DD7C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8021DD80: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8021DD84: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8021DD88: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8021DD8C: bne         $v0, $s3, L_8021DD9C
    if (ctx->r2 != ctx->r19) {
        // 0x8021DD90: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_8021DD9C;
    }
    // 0x8021DD90: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8021DD94: j           L_8021DE4C
    // 0x8021DD98: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8021DE4C;
    // 0x8021DD98: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8021DD9C:
    // 0x8021DD9C: sll         $v1, $s3, 3
    ctx->r3 = S32(ctx->r19 << 3);
    // 0x8021DDA0: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x8021DDA4: addiu       $v0, $v0, 0x4720
    ctx->r2 = ADD32(ctx->r2, 0X4720);
    // 0x8021DDA8: addu        $s2, $v1, $v0
    ctx->r18 = ADD32(ctx->r3, ctx->r2);
    // 0x8021DDAC: lbu         $v1, 0x4($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X4);
    // 0x8021DDB0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8021DDB4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8021DDB8: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x8021DDBC: andi        $v0, $v0, 0x7F8
    ctx->r2 = ctx->r2 & 0X7F8;
    // 0x8021DDC0: beq         $v1, $zero, L_8021DE1C
    if (ctx->r3 == 0) {
        // 0x8021DDC4: addiu       $s1, $v0, 0x60
        ctx->r17 = ADD32(ctx->r2, 0X60);
            goto L_8021DE1C;
    }
    // 0x8021DDC4: addiu       $s1, $v0, 0x60
    ctx->r17 = ADD32(ctx->r2, 0X60);
    // 0x8021DDC8: addiu       $s5, $zero, -0x1
    ctx->r21 = ADD32(0, -0X1);
    // 0x8021DDCC: addiu       $s4, $zero, -0x8
    ctx->r20 = ADD32(0, -0X8);
L_8021DDD0:
    // 0x8021DDD0: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x8021DDD4: sll         $v0, $s0, 1
    ctx->r2 = S32(ctx->r16 << 1);
    // 0x8021DDD8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8021DDDC: lh          $a0, 0x0($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X0);
    // 0x8021DDE0: beq         $a0, $s5, L_8021DE08
    if (ctx->r4 == ctx->r21) {
        // 0x8021DDE4: nop
    
            goto L_8021DE08;
    }
    // 0x8021DDE4: nop

    // 0x8021DDE8: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x8021DDEC: addiu       $a1, $a1, -0xD20
    ctx->r5 = ADD32(ctx->r5, -0XD20);
    // 0x8021DDF0: lui         $a2, 0x5A
    ctx->r6 = S32(0X5A << 16);
    // 0x8021DDF4: jal         0x80028DE0
    // 0x8021DDF8: addiu       $a2, $a2, -0x2100
    ctx->r6 = ADD32(ctx->r6, -0X2100);
    func_80028DE0_41E0(rdram, ctx);
        goto after_0;
    // 0x8021DDF8: addiu       $a2, $a2, -0x2100
    ctx->r6 = ADD32(ctx->r6, -0X2100);
    after_0:
    // 0x8021DDFC: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x8021DE00: and         $v0, $v0, $s4
    ctx->r2 = ctx->r2 & ctx->r20;
    // 0x8021DE04: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
L_8021DE08:
    // 0x8021DE08: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
    // 0x8021DE0C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8021DE10: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8021DE14: bne         $v0, $zero, L_8021DDD0
    if (ctx->r2 != 0) {
        // 0x8021DE18: nop
    
            goto L_8021DDD0;
    }
    // 0x8021DE18: nop

L_8021DE1C:
    // 0x8021DE1C: lbu         $a0, 0x6($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X6);
    // 0x8021DE20: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x8021DE24: addiu       $a1, $a1, 0x2200
    ctx->r5 = ADD32(ctx->r5, 0X2200);
    // 0x8021DE28: lui         $a2, 0x70
    ctx->r6 = S32(0X70 << 16);
    // 0x8021DE2C: jal         0x80028DE0
    // 0x8021DE30: addiu       $a2, $a2, 0xAD0
    ctx->r6 = ADD32(ctx->r6, 0XAD0);
    func_80028DE0_41E0(rdram, ctx);
        goto after_1;
    // 0x8021DE30: addiu       $a2, $a2, 0xAD0
    ctx->r6 = ADD32(ctx->r6, 0XAD0);
    after_1:
    // 0x8021DE34: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x8021DE38: addiu       $v1, $zero, -0x8
    ctx->r3 = ADD32(0, -0X8);
    // 0x8021DE3C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8021DE40: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x8021DE44: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x8021DE48: sh          $s3, -0x72FA($at)
    MEM_H(-0X72FA, ctx->r1) = ctx->r19;
L_8021DE4C:
    // 0x8021DE4C: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8021DE50: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8021DE54: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8021DE58: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8021DE5C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8021DE60: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8021DE64: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8021DE68: jr          $ra
    // 0x8021DE6C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8021DE6C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8021D9D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8021D9D0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8021D9D4: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8021D9D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8021D9DC: sw          $ra, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r31;
    // 0x8021D9E0: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x8021D9E4: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x8021D9E8: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x8021D9EC: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x8021D9F0: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x8021D9F4: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8021D9F8: jal         0x80092EB0
    // 0x8021D9FC: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    func_80092EB0_6E2B0(rdram, ctx);
        goto after_0;
    // 0x8021D9FC: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    after_0:
    // 0x8021DA00: jal         0x80087570
    // 0x8021DA04: nop

    Graph_ThreadStop(rdram, ctx);
        goto after_1;
    // 0x8021DA04: nop

    after_1:
    // 0x8021DA08: sll         $v1, $s0, 3
    ctx->r3 = S32(ctx->r16 << 3);
    // 0x8021DA0C: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x8021DA10: addiu       $v0, $v0, -0x1A90
    ctx->r2 = ADD32(ctx->r2, -0X1A90);
    // 0x8021DA14: addu        $s3, $v1, $v0
    ctx->r19 = ADD32(ctx->r3, ctx->r2);
    // 0x8021DA18: lw          $v1, 0x4($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X4);
    // 0x8021DA1C: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x8021DA20: addiu       $v0, $v0, 0x5140
    ctx->r2 = ADD32(ctx->r2, 0X5140);
    // 0x8021DA24: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8021DA28: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8021DA2C: beq         $v0, $s0, L_8021DB5C
    if (ctx->r2 == ctx->r16) {
        // 0x8021DA30: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8021DB5C;
    }
    // 0x8021DA30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8021DA34: sb          $s0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r16;
    // 0x8021DA38: lw          $v0, 0x4($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X4);
    // 0x8021DA3C: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x8021DA40: addiu       $a1, $a1, -0xE60
    ctx->r5 = ADD32(ctx->r5, -0XE60);
    // 0x8021DA44: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8021DA48: lui         $s1, 0x8022
    ctx->r17 = S32(0X8022 << 16);
    // 0x8021DA4C: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x8021DA50: lw          $s1, -0xD48($s1)
    ctx->r17 = MEM_W(ctx->r17, -0XD48);
    // 0x8021DA54: lui         $a2, 0x5A
    ctx->r6 = S32(0X5A << 16);
    // 0x8021DA58: addiu       $a2, $a2, -0x40E0
    ctx->r6 = ADD32(ctx->r6, -0X40E0);
    // 0x8021DA5C: lui         $s4, 0x8022
    ctx->r20 = S32(0X8022 << 16);
    // 0x8021DA60: addu        $s4, $s4, $v0
    ctx->r20 = ADD32(ctx->r20, ctx->r2);
    // 0x8021DA64: lw          $s4, -0xD60($s4)
    ctx->r20 = MEM_W(ctx->r20, -0XD60);
    // 0x8021DA68: jal         0x80028D30
    // 0x8021DA6C: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    func_80028D30_4130(rdram, ctx);
        goto after_2;
    // 0x8021DA6C: addu        $a3, $s1, $zero
    ctx->r7 = ADD32(ctx->r17, 0);
    after_2:
    // 0x8021DA70: lw          $v0, 0x4($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X4);
    // 0x8021DA74: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x8021DA78: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8021DA7C: lbu         $v0, -0xD28($at)
    ctx->r2 = MEM_BU(ctx->r1, -0XD28);
    // 0x8021DA80: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8021DA84: addiu       $a0, $a0, -0xD28
    ctx->r4 = ADD32(ctx->r4, -0XD28);
    // 0x8021DA88: blez        $v0, L_8021DABC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8021DA8C: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_8021DABC;
    }
    // 0x8021DA8C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8021DA90: addu        $v1, $s1, $zero
    ctx->r3 = ADD32(ctx->r17, 0);
L_8021DA94:
    // 0x8021DA94: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8021DA98: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8021DA9C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x8021DAA0: lw          $v0, 0x4($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X4);
    // 0x8021DAA4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8021DAA8: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8021DAAC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8021DAB0: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8021DAB4: bne         $v0, $zero, L_8021DA94
    if (ctx->r2 != 0) {
        // 0x8021DAB8: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_8021DA94;
    }
    // 0x8021DAB8: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_8021DABC:
    // 0x8021DABC: lw          $v0, 0x4($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X4);
    // 0x8021DAC0: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8021DAC4: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8021DAC8: lbu         $a0, -0xD30($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0XD30);
    // 0x8021DACC: addiu       $v1, $zero, -0x8
    ctx->r3 = ADD32(0, -0X8);
    // 0x8021DAD0: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x8021DAD4: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x8021DAD8: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x8021DADC: and         $s2, $v0, $v1
    ctx->r18 = ctx->r2 & ctx->r3;
    // 0x8021DAE0: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x8021DAE4: addiu       $v0, $v0, -0xD30
    ctx->r2 = ADD32(ctx->r2, -0XD30);
    // 0x8021DAE8: beq         $a0, $zero, L_8021DB5C
    if (ctx->r4 == 0) {
        // 0x8021DAEC: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_8021DB5C;
    }
    // 0x8021DAEC: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8021DAF0: addiu       $s7, $zero, -0x1
    ctx->r23 = ADD32(0, -0X1);
    // 0x8021DAF4: addiu       $s6, $zero, -0x8
    ctx->r22 = ADD32(0, -0X8);
    // 0x8021DAF8: addu        $s5, $v0, $zero
    ctx->r21 = ADD32(ctx->r2, 0);
    // 0x8021DAFC: addu        $s1, $s4, $zero
    ctx->r17 = ADD32(ctx->r20, 0);
L_8021DB00:
    // 0x8021DB00: lw          $v1, 0x0($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X0);
    // 0x8021DB04: sll         $v0, $s0, 1
    ctx->r2 = S32(ctx->r16 << 1);
    // 0x8021DB08: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8021DB0C: lh          $a0, 0x0($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X0);
    // 0x8021DB10: beql        $a0, $s7, L_8021DB40
    if (ctx->r4 == ctx->r23) {
        // 0x8021DB14: sw          $zero, 0x0($s1)
        MEM_W(0X0, ctx->r17) = 0;
            goto L_8021DB40;
    }
    goto skip_0;
    // 0x8021DB14: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    skip_0:
    // 0x8021DB18: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x8021DB1C: addiu       $a1, $a1, -0x1990
    ctx->r5 = ADD32(ctx->r5, -0X1990);
    // 0x8021DB20: lui         $a2, 0x54
    ctx->r6 = S32(0X54 << 16);
    // 0x8021DB24: addiu       $a2, $a2, 0x4E60
    ctx->r6 = ADD32(ctx->r6, 0X4E60);
    // 0x8021DB28: jal         0x80028D30
    // 0x8021DB2C: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    func_80028D30_4130(rdram, ctx);
        goto after_3;
    // 0x8021DB2C: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    after_3:
    // 0x8021DB30: sw          $s2, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r18;
    // 0x8021DB34: addu        $v0, $s2, $v0
    ctx->r2 = ADD32(ctx->r18, ctx->r2);
    // 0x8021DB38: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x8021DB3C: and         $s2, $v0, $s6
    ctx->r18 = ctx->r2 & ctx->r22;
L_8021DB40:
    // 0x8021DB40: lw          $v0, 0x4($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X4);
    // 0x8021DB44: addu        $v0, $v0, $s5
    ctx->r2 = ADD32(ctx->r2, ctx->r21);
    // 0x8021DB48: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8021DB4C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8021DB50: slt         $v0, $s0, $v0
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8021DB54: bne         $v0, $zero, L_8021DB00
    if (ctx->r2 != 0) {
        // 0x8021DB58: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_8021DB00;
    }
    // 0x8021DB58: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_8021DB5C:
    // 0x8021DB5C: jal         0x80087590
    // 0x8021DB60: nop

    func_80087590_62990(rdram, ctx);
        goto after_4;
    // 0x8021DB60: nop

    after_4:
    // 0x8021DB64: lw          $ra, 0x50($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X50);
    // 0x8021DB68: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x8021DB6C: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x8021DB70: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x8021DB74: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x8021DB78: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x8021DB7C: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x8021DB80: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8021DB84: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8021DB88: jr          $ra
    // 0x8021DB8C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x8021DB8C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8023078C_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023078C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80230790: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
    // 0x80230794: lw          $v0, 0x24($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X24);
    // 0x80230798: lw          $a0, 0x98($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X98);
    // 0x8023079C: ori         $v1, $v1, 0x5D17
    ctx->r3 = ctx->r3 | 0X5D17;
    // 0x802307A0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802307A4: sw          $v0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r2;
    // 0x802307A8: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x802307AC: addiu       $v0, $zero, 0x2C
    ctx->r2 = ADD32(0, 0X2C);
    // 0x802307B0: bne         $v1, $v0, L_802307C4
    if (ctx->r3 != ctx->r2) {
        // 0x802307B4: nop
    
            goto L_802307C4;
    }
    // 0x802307B4: nop

    // 0x802307B8: lbu         $v0, 0xA($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XA);
    // 0x802307BC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802307C0: sb          $v0, 0xA($a1)
    MEM_B(0XA, ctx->r5) = ctx->r2;
L_802307C4:
    // 0x802307C4: jr          $ra
    // 0x802307C8: nop

    TRACE_RETURN()
    return;
    // 0x802307C8: nop

;}
RECOMP_FUNC void func_802379E4_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802379E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802379E8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802379EC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802379F0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802379F4: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x802379F8: addiu       $a0, $zero, 0x622
    ctx->r4 = ADD32(0, 0X622);
    // 0x802379FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80237A00: jal         0x8006033C
    // 0x80237A04: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80237A04: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    after_0:
    // 0x80237A08: bne         $v0, $zero, L_80237B10
    if (ctx->r2 != 0) {
        // 0x80237A0C: nop
    
            goto L_80237B10;
    }
    // 0x80237A0C: nop

    // 0x80237A10: jal         0x8006033C
    // 0x80237A14: addiu       $a0, $zero, 0x61C
    ctx->r4 = ADD32(0, 0X61C);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80237A14: addiu       $a0, $zero, 0x61C
    ctx->r4 = ADD32(0, 0X61C);
    after_1:
    // 0x80237A18: bne         $v0, $zero, L_80237B10
    if (ctx->r2 != 0) {
        // 0x80237A1C: nop
    
            goto L_80237B10;
    }
    // 0x80237A1C: nop

    // 0x80237A20: lb          $v1, 0x8($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X8);
    // 0x80237A24: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x80237A28: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x80237A2C: beq         $v1, $zero, L_80237A44
    if (ctx->r3 == 0) {
        // 0x80237A30: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80237A44;
    }
    // 0x80237A30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237A34: beq         $v1, $v0, L_80237AC4
    if (ctx->r3 == ctx->r2) {
        // 0x80237A38: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_80237AC4;
    }
    // 0x80237A38: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80237A3C: j           L_80237B10
    // 0x80237A40: nop

        goto L_80237B10;
    // 0x80237A40: nop

L_80237A44:
    // 0x80237A44: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80237A48: jal         0x80238028
    // 0x80237A4C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80238028_ovl2(rdram, ctx);
        goto after_2;
    // 0x80237A4C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80237A50: beq         $v0, $zero, L_80237B10
    if (ctx->r2 == 0) {
        // 0x80237A54: nop
    
            goto L_80237B10;
    }
    // 0x80237A54: nop

    // 0x80237A58: jal         0x8006033C
    // 0x80237A5C: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
    func_8006033C_3B73C(rdram, ctx);
        goto after_3;
    // 0x80237A5C: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
    after_3:
    // 0x80237A60: beq         $v0, $zero, L_80237A78
    if (ctx->r2 == 0) {
        // 0x80237A64: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80237A78;
    }
    // 0x80237A64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237A68: jal         0x8006033C
    // 0x80237A6C: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    func_8006033C_3B73C(rdram, ctx);
        goto after_4;
    // 0x80237A6C: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    after_4:
    // 0x80237A70: bne         $v0, $zero, L_80237B10
    if (ctx->r2 != 0) {
        // 0x80237A74: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80237B10;
    }
    // 0x80237A74: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80237A78:
    // 0x80237A78: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80237A7C: jal         0x8006033C
    // 0x80237A80: addiu       $a0, $zero, 0x61B
    ctx->r4 = ADD32(0, 0X61B);
    func_8006033C_3B73C(rdram, ctx);
        goto after_5;
    // 0x80237A80: addiu       $a0, $zero, 0x61B
    ctx->r4 = ADD32(0, 0X61B);
    after_5:
    // 0x80237A84: beq         $v0, $zero, L_80237A98
    if (ctx->r2 == 0) {
        // 0x80237A88: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80237A98;
    }
    // 0x80237A88: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80237A8C: lbu         $a1, 0x1($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X1);
    // 0x80237A90: j           L_80237AA4
    // 0x80237A94: nop

        goto L_80237AA4;
    // 0x80237A94: nop

L_80237A98:
    // 0x80237A98: lbu         $a1, 0x1($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X1);
    // 0x80237A9C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80237AA0: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
L_80237AA4:
    // 0x80237AA4: jal         0x800616FC
    // 0x80237AA8: nop

    func_800616FC_3CAFC(rdram, ctx);
        goto after_6;
    // 0x80237AA8: nop

    after_6:
    // 0x80237AAC: lbu         $v0, 0xBD($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XBD);
    // 0x80237AB0: addiu       $a0, $zero, 0x27E
    ctx->r4 = ADD32(0, 0X27E);
    // 0x80237AB4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80237AB8: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x80237ABC: j           L_80237AFC
    // 0x80237AC0: sb          $v0, 0xBD($s2)
    MEM_B(0XBD, ctx->r18) = ctx->r2;
        goto L_80237AFC;
    // 0x80237AC0: sb          $v0, 0xBD($s2)
    MEM_B(0XBD, ctx->r18) = ctx->r2;
L_80237AC4:
    // 0x80237AC4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80237AC8: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80237ACC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80237AD0: bne         $v0, $zero, L_80237B10
    if (ctx->r2 != 0) {
        // 0x80237AD4: nop
    
            goto L_80237B10;
    }
    // 0x80237AD4: nop

    // 0x80237AD8: jal         0x8006036C
    // 0x80237ADC: addiu       $a0, $zero, 0x61C
    ctx->r4 = ADD32(0, 0X61C);
    func_8006036C_3B76C(rdram, ctx);
        goto after_7;
    // 0x80237ADC: addiu       $a0, $zero, 0x61C
    ctx->r4 = ADD32(0, 0X61C);
    after_7:
    // 0x80237AE0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80237AE4: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x80237AE8: addiu       $a0, $zero, 0x27E
    ctx->r4 = ADD32(0, 0X27E);
    // 0x80237AEC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80237AF0: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x80237AF4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80237AF8: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
L_80237AFC:
    // 0x80237AFC: jal         0x8004CB2C
    // 0x80237B00: nop

    func_8004CB2C_27F2C(rdram, ctx);
        goto after_8;
    // 0x80237B00: nop

    after_8:
    // 0x80237B04: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80237B08: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80237B0C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
L_80237B10:
    // 0x80237B10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80237B14: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80237B18: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80237B1C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80237B20: jr          $ra
    // 0x80237B24: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80237B24: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022A884_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A884: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A888: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A88C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A890: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A894: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022A898: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022A89C: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022A8A0: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022A8A4: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x8022A8A8: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022A8AC: jal         0x8004D5D4
    // 0x8022A8B0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022A8B0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022A8B4: addiu       $a0, $s0, 0x36C
    ctx->r4 = ADD32(ctx->r16, 0X36C);
    // 0x8022A8B8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022A8BC: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    // 0x8022A8C0: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022A8C4: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022A8C8: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022A8CC: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022A8D0: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x8022A8D4: sw          $v0, 0x37C($s0)
    MEM_W(0X37C, ctx->r16) = ctx->r2;
    // 0x8022A8D8: sw          $v0, 0x380($s0)
    MEM_W(0X380, ctx->r16) = ctx->r2;
    // 0x8022A8DC: addiu       $v0, $zero, 0x2C
    ctx->r2 = ADD32(0, 0X2C);
    // 0x8022A8E0: sw          $zero, 0x384($s0)
    MEM_W(0X384, ctx->r16) = 0;
    // 0x8022A8E4: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x8022A8E8: sw          $zero, 0x34C($s0)
    MEM_W(0X34C, ctx->r16) = 0;
    // 0x8022A8EC: sw          $zero, 0x350($s0)
    MEM_W(0X350, ctx->r16) = 0;
    // 0x8022A8F0: sw          $zero, 0x35C($s0)
    MEM_W(0X35C, ctx->r16) = 0;
    // 0x8022A8F4: jal         0x800540BC
    // 0x8022A8F8: sw          $zero, 0x360($s0)
    MEM_W(0X360, ctx->r16) = 0;
    func_800540BC_2F4BC(rdram, ctx);
        goto after_1;
    // 0x8022A8F8: sw          $zero, 0x360($s0)
    MEM_W(0X360, ctx->r16) = 0;
    after_1:
    // 0x8022A8FC: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8022A900: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8022A904: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x8022A908: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022A90C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022A910: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022A914: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A918: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022A91C: lbu         $v1, 0x8($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X8);
    // 0x8022A920: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022A924: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022A928: addiu       $v0, $v0, -0x160C
    ctx->r2 = ADD32(ctx->r2, -0X160C);
    // 0x8022A92C: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x8022A930: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A934: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x8022A938: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022A93C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022A940: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8022A944: sh          $v1, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r3;
    // 0x8022A948: sh          $v1, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r3;
    // 0x8022A94C: jal         0x80050294
    // 0x8022A950: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x8022A950: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    after_2:
    // 0x8022A954: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022A958: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022A95C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022A960: sb          $v0, 0xFF($s0)
    MEM_B(0XFF, ctx->r16) = ctx->r2;
    // 0x8022A964: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A968: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A96C: jr          $ra
    // 0x8022A970: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A970: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80231574_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231574: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231578: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023157C: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x80231580: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80231584: jal         0x8004DA90
    // 0x80231588: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80231588: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x8023158C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80231590: jr          $ra
    // 0x80231594: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231594: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226350_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226350: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80226354: lw          $v0, 0x10($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10);
    // 0x80226358: bne         $v0, $zero, L_80226384
    if (ctx->r2 != 0) {
        // 0x8022635C: nop
    
            goto L_80226384;
    }
    // 0x8022635C: nop

    // 0x80226360: lw          $v1, 0x28($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X28);
    // 0x80226364: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80226368: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022636C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80226370: lw          $v1, 0x24($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X24);
    // 0x80226374: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80226378: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x8022637C: lw          $v0, 0x24($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X24);
    // 0x80226380: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
L_80226384:
    // 0x80226384: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80226388: addiu       $v0, $zero, 0x82
    ctx->r2 = ADD32(0, 0X82);
    // 0x8022638C: bne         $v1, $v0, L_802263A4
    if (ctx->r3 != ctx->r2) {
        // 0x80226390: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802263A4;
    }
    // 0x80226390: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226394: lw          $a0, 0x2C($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X2C);
    // 0x80226398: lw          $v1, 0x30($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X30);
    // 0x8022639C: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x802263A0: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
L_802263A4:
    // 0x802263A4: jr          $ra
    // 0x802263A8: nop

    TRACE_RETURN()
    return;
    // 0x802263A8: nop

;}
RECOMP_FUNC void func_8023B0B0_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B0B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023B0B4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023B0B8: jal         0x8004F5C4
    // 0x8023B0BC: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x8023B0BC: nop

    after_0:
    // 0x8023B0C0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023B0C4: jr          $ra
    // 0x8023B0C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023B0C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228EEC_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228EEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228EF0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80228EF4: lhu         $v0, 0x56($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X56);
    // 0x80228EF8: addiu       $a1, $zero, 0x900
    ctx->r5 = ADD32(0, 0X900);
    // 0x80228EFC: addiu       $a2, $zero, -0xFA
    ctx->r6 = ADD32(0, -0XFA);
    // 0x80228F00: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80228F04: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x80228F08: jal         0x8004DA90
    // 0x80228F0C: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80228F0C: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    after_0:
    // 0x80228F10: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80228F14: jr          $ra
    // 0x80228F18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228F18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802292E4_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802292E4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802292E8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802292EC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802292F0: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x802292F4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802292F8: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x802292FC: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x80229300: beq         $v0, $zero, L_80229334
    if (ctx->r2 == 0) {
        // 0x80229304: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_80229334;
    }
    // 0x80229304: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80229308: addiu       $a0, $s0, 0x36C
    ctx->r4 = ADD32(ctx->r16, 0X36C);
    // 0x8022930C: jal         0x800540D0
    // 0x80229310: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_800540D0_2F4D0(rdram, ctx);
        goto after_0;
    // 0x80229310: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80229314: beq         $v0, $zero, L_80229328
    if (ctx->r2 == 0) {
        // 0x80229318: nop
    
            goto L_80229328;
    }
    // 0x80229318: nop

    // 0x8022931C: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80229320: j           L_80229330
    // 0x80229324: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
        goto L_80229330;
    // 0x80229324: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
L_80229328:
    // 0x80229328: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022932C: andi        $v0, $v0, 0xFFEF
    ctx->r2 = ctx->r2 & 0XFFEF;
L_80229330:
    // 0x80229330: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
L_80229334:
    // 0x80229334: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80229338: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022933C: beq         $v0, $zero, L_8022934C
    if (ctx->r2 == 0) {
        // 0x80229340: nop
    
            goto L_8022934C;
    }
    // 0x80229340: nop

    // 0x80229344: jal         0x8022A27C
    // 0x80229348: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022A27C_ovl2(rdram, ctx);
        goto after_1;
    // 0x80229348: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_8022934C:
    // 0x8022934C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80229350: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80229354: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80229358: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022935C: lw          $v0, -0x16F4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X16F4);
    // 0x80229360: jalr        $v0
    // 0x80229364: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x80229364: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80229368: lhu         $a0, 0x0($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X0);
    // 0x8022936C: andi        $v0, $a0, 0x1
    ctx->r2 = ctx->r4 & 0X1;
    // 0x80229370: beq         $v0, $zero, L_802293DC
    if (ctx->r2 == 0) {
        // 0x80229374: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_802293DC;
    }
    // 0x80229374: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80229378: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022937C: beq         $v1, $v0, L_802293A8
    if (ctx->r3 == ctx->r2) {
        // 0x80229380: slti        $v0, $v1, 0x5
        ctx->r2 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
            goto L_802293A8;
    }
    // 0x80229380: slti        $v0, $v1, 0x5
    ctx->r2 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
    // 0x80229384: beq         $v0, $zero, L_8022939C
    if (ctx->r2 == 0) {
        // 0x80229388: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022939C;
    }
    // 0x80229388: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022938C: beq         $v1, $v0, L_802293B4
    if (ctx->r3 == ctx->r2) {
        // 0x80229390: andi        $v0, $a0, 0x10
        ctx->r2 = ctx->r4 & 0X10;
            goto L_802293B4;
    }
    // 0x80229390: andi        $v0, $a0, 0x10
    ctx->r2 = ctx->r4 & 0X10;
    // 0x80229394: j           L_802293C4
    // 0x80229398: nop

        goto L_802293C4;
    // 0x80229398: nop

L_8022939C:
    // 0x8022939C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802293A0: bne         $v1, $v0, L_802293C4
    if (ctx->r3 != ctx->r2) {
        // 0x802293A4: nop
    
            goto L_802293C4;
    }
    // 0x802293A4: nop

L_802293A8:
    // 0x802293A8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802293AC: j           L_802293CC
    // 0x802293B0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_802293CC;
    // 0x802293B0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_802293B4:
    // 0x802293B4: beq         $v0, $zero, L_802293C4
    if (ctx->r2 == 0) {
        // 0x802293B8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802293C4;
    }
    // 0x802293B8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802293BC: j           L_802293CC
    // 0x802293C0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_802293CC;
    // 0x802293C0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_802293C4:
    // 0x802293C4: jal         0x8022A1B8
    // 0x802293C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022A1B8_ovl2(rdram, ctx);
        goto after_3;
    // 0x802293C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_802293CC:
    // 0x802293CC: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x802293D0: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x802293D4: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x802293D8: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_802293DC:
    // 0x802293DC: lh          $v0, 0xA($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XA);
    // 0x802293E0: beq         $v0, $zero, L_802293F0
    if (ctx->r2 == 0) {
        // 0x802293E4: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_802293F0;
    }
    // 0x802293E4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802293E8: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x802293EC: sh          $v0, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r2;
L_802293F0:
    // 0x802293F0: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x802293F4: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x802293F8: beq         $v0, $zero, L_80229474
    if (ctx->r2 == 0) {
        // 0x802293FC: nop
    
            goto L_80229474;
    }
    // 0x802293FC: nop

    // 0x80229400: lhu         $v0, 0x36($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X36);
    // 0x80229404: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80229408: sh          $v0, 0x36($s1)
    MEM_H(0X36, ctx->r17) = ctx->r2;
    // 0x8022940C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229410: bgez        $v0, L_80229474
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80229414: nop
    
            goto L_80229474;
    }
    // 0x80229414: nop

    // 0x80229418: jal         0x8004F144
    // 0x8022941C: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_4;
    // 0x8022941C: nop

    after_4:
    // 0x80229420: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80229424: beq         $v1, $zero, L_80229450
    if (ctx->r3 == 0) {
        // 0x80229428: addiu       $a0, $v1, 0x38
        ctx->r4 = ADD32(ctx->r3, 0X38);
            goto L_80229450;
    }
    // 0x80229428: addiu       $a0, $v1, 0x38
    ctx->r4 = ADD32(ctx->r3, 0X38);
    // 0x8022942C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80229430: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80229434: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80229438: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022943C: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80229440: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x80229444: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80229448: jal         0x8009A3B4
    // 0x8022944C: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8022944C: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    after_5:
L_80229450:
    // 0x80229450: jal         0x8004F418
    // 0x80229454: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_6;
    // 0x80229454: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x80229458: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022945C: addiu       $s0, $a0, 0x180
    ctx->r16 = ADD32(ctx->r4, 0X180);
    // 0x80229460: jal         0x8007A1B8
    // 0x80229464: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8007A1B8_555B8(rdram, ctx);
        goto after_7;
    // 0x80229464: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_7:
    // 0x80229468: addiu       $a0, $zero, 0xA1
    ctx->r4 = ADD32(0, 0XA1);
    // 0x8022946C: jal         0x8002A33C
    // 0x80229470: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_8;
    // 0x80229470: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_8:
L_80229474:
    // 0x80229474: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80229478: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022947C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80229480: jr          $ra
    // 0x80229484: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80229484: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80231654_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231654: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231658: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023165C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231660: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80231664: lw          $v0, 0x98($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X98);
    // 0x80231668: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8023166C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80231670: bnel        $v1, $v0, L_80231698
    if (ctx->r3 != ctx->r2) {
        // 0x80231674: addiu       $a0, $s0, 0x1C
        ctx->r4 = ADD32(ctx->r16, 0X1C);
            goto L_80231698;
    }
    goto skip_0;
    // 0x80231674: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    skip_0:
    // 0x80231678: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023167C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80231680: jal         0x80050294
    // 0x80231684: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80231684: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    after_0:
    // 0x80231688: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023168C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231690: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80231694: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
L_80231698:
    // 0x80231698: jal         0x8004DD04
    // 0x8023169C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_1;
    // 0x8023169C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x802316A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802316A4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802316A8: jr          $ra
    // 0x802316AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802316AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023B410_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B410: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023B414: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023B418: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023B41C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023B420: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8023B424: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023B428: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023B42C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023B430: lw          $v0, -0x640($at)
    ctx->r2 = MEM_W(ctx->r1, -0X640);
    // 0x8023B434: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8023B438: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x8023B43C: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8023B440: lbu         $v0, 0x2($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X2);
    // 0x8023B444: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x8023B448: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x8023B44C: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x8023B450: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8023B454: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x8023B458: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x8023B45C: lbu         $v0, 0x1($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X1);
    // 0x8023B460: jal         0x8023B95C
    // 0x8023B464: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
    func_8023B95C_ovl2(rdram, ctx);
        goto after_0;
    // 0x8023B464: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
    after_0:
    // 0x8023B468: beq         $v0, $zero, L_8023B478
    if (ctx->r2 == 0) {
        // 0x8023B46C: nop
    
            goto L_8023B478;
    }
    // 0x8023B46C: nop

    // 0x8023B470: jal         0x8004F5C4
    // 0x8023B474: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_1;
    // 0x8023B474: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_8023B478:
    // 0x8023B478: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8023B47C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8023B480: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x8023B484: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023B488: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023B48C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023B490: sw          $zero, 0x35C0($at)
    MEM_W(0X35C0, ctx->r1) = 0;
    // 0x8023B494: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023B498: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023B49C: jr          $ra
    // 0x8023B4A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023B4A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023B040_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B040: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023B044: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x8023B048: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023B04C: lbu         $v0, 0x9($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X9);
    // 0x8023B050: bne         $v0, $zero, L_8023B068
    if (ctx->r2 != 0) {
        // 0x8023B054: lui         $a2, 0xFFF5
        ctx->r6 = S32(0XFFF5 << 16);
            goto L_8023B068;
    }
    // 0x8023B054: lui         $a2, 0xFFF5
    ctx->r6 = S32(0XFFF5 << 16);
    // 0x8023B058: jal         0x8004F5C4
    // 0x8023B05C: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x8023B05C: nop

    after_0:
    // 0x8023B060: j           L_8023B09C
    // 0x8023B064: nop

        goto L_8023B09C;
    // 0x8023B064: nop

L_8023B068:
    // 0x8023B068: lbu         $a0, 0xC($a3)
    ctx->r4 = MEM_BU(ctx->r7, 0XC);
    // 0x8023B06C: ori         $a2, $a2, 0xF5F6
    ctx->r6 = ctx->r6 | 0XF5F6;
    // 0x8023B070: lbu         $a1, 0x9($a3)
    ctx->r5 = MEM_BU(ctx->r7, 0X9);
    // 0x8023B074: lw          $v0, 0x18($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X18);
    // 0x8023B078: lhu         $v1, 0x24($a3)
    ctx->r3 = MEM_HU(ctx->r7, 0X24);
    // 0x8023B07C: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x8023B080: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8023B084: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x8023B088: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8023B08C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8023B090: sw          $v0, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->r2;
    // 0x8023B094: sh          $v1, 0x24($a3)
    MEM_H(0X24, ctx->r7) = ctx->r3;
    // 0x8023B098: sb          $a1, 0x9($a3)
    MEM_B(0X9, ctx->r7) = ctx->r5;
L_8023B09C:
    // 0x8023B09C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023B0A0: jr          $ra
    // 0x8023B0A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023B0A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8023B0A8: nop

    // 0x8023B0AC: nop

;}
RECOMP_FUNC void func_802316E8_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802316E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802316EC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802316F0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802316F4: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x802316F8: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x802316FC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80231700: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80231704: jal         0x80050294
    // 0x80231708: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80231708: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x8023170C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80231710: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231714: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80231718: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023171C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231720: jr          $ra
    // 0x80231724: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231724: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80231AB0_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231AB0: lbu         $v0, 0xC($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XC);
    // 0x80231AB4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80231AB8: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
    // 0x80231ABC: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80231AC0: bne         $v0, $zero, L_80231AD4
    if (ctx->r2 != 0) {
        // 0x80231AC4: nop
    
            goto L_80231AD4;
    }
    // 0x80231AC4: nop

    // 0x80231AC8: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80231ACC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231AD0: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_80231AD4:
    // 0x80231AD4: jr          $ra
    // 0x80231AD8: nop

    TRACE_RETURN()
    return;
    // 0x80231AD8: nop

;}
RECOMP_FUNC void func_8023B1B8_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B1B8: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8023B1BC: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x8023B1C0: addu        $s5, $zero, $zero
    ctx->r21 = ADD32(0, 0);
    // 0x8023B1C4: sw          $ra, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r31;
    // 0x8023B1C8: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x8023B1CC: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x8023B1D0: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8023B1D4: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8023B1D8: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8023B1DC: lw          $v1, 0xC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC);
    // 0x8023B1E0: lui         $v0, 0x3
    ctx->r2 = S32(0X3 << 16);
    // 0x8023B1E4: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8023B1E8: addiu       $v1, $v1, 0x1000
    ctx->r3 = ADD32(ctx->r3, 0X1000);
    // 0x8023B1EC: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8023B1F0: beq         $v0, $zero, L_8023B208
    if (ctx->r2 == 0) {
        // 0x8023B1F4: sw          $v1, 0xC($a0)
        MEM_W(0XC, ctx->r4) = ctx->r3;
            goto L_8023B208;
    }
    // 0x8023B1F4: sw          $v1, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r3;
    // 0x8023B1F8: lui         $v0, 0xFFFC
    ctx->r2 = S32(0XFFFC << 16);
    // 0x8023B1FC: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x8023B200: sw          $v0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r2;
    // 0x8023B204: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
L_8023B208:
    // 0x8023B208: lw          $v1, 0xC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC);
    // 0x8023B20C: lbu         $v0, 0xB($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XB);
    // 0x8023B210: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x8023B214: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023B218: sb          $v0, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r2;
    // 0x8023B21C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8023B220: sll         $v0, $v0, 7
    ctx->r2 = S32(ctx->r2 << 7);
    // 0x8023B224: slti        $v0, $v0, 0x800
    ctx->r2 = SIGNED(ctx->r2) < 0X800 ? 1 : 0;
    // 0x8023B228: bne         $v0, $zero, L_8023B234
    if (ctx->r2 != 0) {
        // 0x8023B22C: andi        $s0, $v1, 0x3F
        ctx->r16 = ctx->r3 & 0X3F;
            goto L_8023B234;
    }
    // 0x8023B22C: andi        $s0, $v1, 0x3F
    ctx->r16 = ctx->r3 & 0X3F;
    // 0x8023B230: sb          $zero, 0xB($a0)
    MEM_B(0XB, ctx->r4) = 0;
L_8023B234:
    // 0x8023B234: sll         $s0, $s0, 5
    ctx->r16 = S32(ctx->r16 << 5);
    // 0x8023B238: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8023B23C: addu        $t2, $a0, $zero
    ctx->r10 = ADD32(ctx->r4, 0);
L_8023B240:
    // 0x8023B240: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023B244: addu        $t1, $t2, $zero
    ctx->r9 = ADD32(ctx->r10, 0);
    // 0x8023B248: sll         $t0, $s2, 8
    ctx->r8 = S32(ctx->r18 << 8);
    // 0x8023B24C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_8023B250:
    // 0x8023B250: sll         $a3, $a2, 2
    ctx->r7 = S32(ctx->r6 << 2);
    // 0x8023B254: addu        $v1, $a3, $a1
    ctx->r3 = ADD32(ctx->r7, ctx->r5);
L_8023B258:
    // 0x8023B258: lw          $a0, 0x24($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X24);
    // 0x8023B25C: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8023B260: addu        $v0, $v1, $t0
    ctx->r2 = ADD32(ctx->r3, ctx->r8);
    // 0x8023B264: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023B268: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023B26C: lhu         $v0, 0x2C8($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X2C8);
    // 0x8023B270: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8023B274: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8023B278: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x8023B27C: sh          $v0, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r2;
    // 0x8023B280: sltiu       $v0, $a1, 0x4
    ctx->r2 = ctx->r5 < 0X4 ? 1 : 0;
    // 0x8023B284: bnel        $v0, $zero, L_8023B258
    if (ctx->r2 != 0) {
        // 0x8023B288: addu        $v1, $a3, $a1
        ctx->r3 = ADD32(ctx->r7, ctx->r5);
            goto L_8023B258;
    }
    goto skip_0;
    // 0x8023B288: addu        $v1, $a3, $a1
    ctx->r3 = ADD32(ctx->r7, ctx->r5);
    skip_0:
    // 0x8023B28C: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8023B290: sltiu       $v0, $a2, 0x4
    ctx->r2 = ctx->r6 < 0X4 ? 1 : 0;
    // 0x8023B294: bnel        $v0, $zero, L_8023B250
    if (ctx->r2 != 0) {
        // 0x8023B298: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_8023B250;
    }
    goto skip_1;
    // 0x8023B298: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    skip_1:
    // 0x8023B29C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8023B2A0: sltiu       $v0, $s2, 0x3
    ctx->r2 = ctx->r18 < 0X3 ? 1 : 0;
    // 0x8023B2A4: bne         $v0, $zero, L_8023B240
    if (ctx->r2 != 0) {
        // 0x8023B2A8: addiu       $t2, $t2, 0x4
        ctx->r10 = ADD32(ctx->r10, 0X4);
            goto L_8023B240;
    }
    // 0x8023B2A8: addiu       $t2, $t2, 0x4
    ctx->r10 = ADD32(ctx->r10, 0X4);
    // 0x8023B2AC: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8023B2B0: addiu       $s4, $sp, 0x20
    ctx->r20 = ADD32(ctx->r29, 0X20);
    // 0x8023B2B4: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
L_8023B2B8:
    // 0x8023B2B8: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8023B2BC: addu        $a0, $a0, $s1
    ctx->r4 = ADD32(ctx->r4, ctx->r17);
    // 0x8023B2C0: lw          $a0, -0x6EC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X6EC);
    // 0x8023B2C4: jal         0x80071A70
    // 0x8023B2C8: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    func_80071A70_4CE70(rdram, ctx);
        goto after_0;
    // 0x8023B2C8: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    after_0:
    // 0x8023B2CC: lui         $a2, 0x8024
    ctx->r6 = S32(0X8024 << 16);
    // 0x8023B2D0: addu        $a2, $a2, $s1
    ctx->r6 = ADD32(ctx->r6, ctx->r17);
    // 0x8023B2D4: lw          $a2, -0x6E8($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X6E8);
    // 0x8023B2D8: lui         $a3, 0x8024
    ctx->r7 = S32(0X8024 << 16);
    // 0x8023B2DC: addu        $a3, $a3, $s1
    ctx->r7 = ADD32(ctx->r7, ctx->r17);
    // 0x8023B2E0: lw          $a3, -0x6E4($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X6E4);
    // 0x8023B2E4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8023B2E8: jal         0x8003BA58
    // 0x8023B2EC: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_8003BA58_16E58(rdram, ctx);
        goto after_1;
    // 0x8023B2EC: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_1:
    // 0x8023B2F0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023B2F4: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8023B2F8: lw          $v0, -0x6E0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6E0);
    // 0x8023B2FC: beql        $v0, $zero, L_8023B3A4
    if (ctx->r2 == 0) {
        // 0x8023B300: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_8023B3A4;
    }
    goto skip_2;
    // 0x8023B300: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_2:
    // 0x8023B304: addu        $s3, $s1, $zero
    ctx->r19 = ADD32(ctx->r17, 0);
    // 0x8023B308: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
L_8023B30C:
    // 0x8023B30C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8023B310: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x8023B314: jal         0x8003BB80
    // 0x8023B318: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    func_8003BB80_16F80(rdram, ctx);
        goto after_2;
    // 0x8023B318: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    after_2:
    // 0x8023B31C: lbu         $a2, 0x20($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X20);
    // 0x8023B320: lbu         $a3, 0x22($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X22);
    // 0x8023B324: lbu         $t0, 0x24($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X24);
    // 0x8023B328: lbu         $t1, 0x26($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X26);
    // 0x8023B32C: addiu       $a1, $a2, 0x1
    ctx->r5 = ADD32(ctx->r6, 0X1);
    // 0x8023B330: addiu       $v0, $a3, 0x1
    ctx->r2 = ADD32(ctx->r7, 0X1);
    // 0x8023B334: addiu       $v1, $t0, 0x1
    ctx->r3 = ADD32(ctx->r8, 0X1);
    // 0x8023B338: addiu       $a0, $t1, 0x1
    ctx->r4 = ADD32(ctx->r9, 0X1);
    // 0x8023B33C: sb          $a1, 0x20($sp)
    MEM_B(0X20, ctx->r29) = ctx->r5;
    // 0x8023B340: sb          $v0, 0x22($sp)
    MEM_B(0X22, ctx->r29) = ctx->r2;
    // 0x8023B344: sb          $v1, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r3;
    // 0x8023B348: beq         $s5, $zero, L_8023B370
    if (ctx->r21 == 0) {
        // 0x8023B34C: sb          $a0, 0x26($sp)
        MEM_B(0X26, ctx->r29) = ctx->r4;
            goto L_8023B370;
    }
    // 0x8023B34C: sb          $a0, 0x26($sp)
    MEM_B(0X26, ctx->r29) = ctx->r4;
    // 0x8023B350: addiu       $v0, $a2, -0x3F
    ctx->r2 = ADD32(ctx->r6, -0X3F);
    // 0x8023B354: sb          $v0, 0x20($sp)
    MEM_B(0X20, ctx->r29) = ctx->r2;
    // 0x8023B358: addiu       $v0, $a3, -0x3F
    ctx->r2 = ADD32(ctx->r7, -0X3F);
    // 0x8023B35C: sb          $v0, 0x22($sp)
    MEM_B(0X22, ctx->r29) = ctx->r2;
    // 0x8023B360: addiu       $v0, $t0, -0x3F
    ctx->r2 = ADD32(ctx->r8, -0X3F);
    // 0x8023B364: sb          $v0, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r2;
    // 0x8023B368: addiu       $v0, $t1, -0x3F
    ctx->r2 = ADD32(ctx->r9, -0X3F);
    // 0x8023B36C: sb          $v0, 0x26($sp)
    MEM_B(0X26, ctx->r29) = ctx->r2;
L_8023B370:
    // 0x8023B370: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8023B374: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8023B378: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    // 0x8023B37C: jal         0x8003BC68
    // 0x8023B380: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    func_8003BC68_17068(rdram, ctx);
        goto after_3;
    // 0x8023B380: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    after_3:
    // 0x8023B384: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023B388: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x8023B38C: lw          $v0, -0x6E0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6E0);
    // 0x8023B390: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8023B394: sltu        $v0, $s0, $v0
    ctx->r2 = ctx->r16 < ctx->r2 ? 1 : 0;
    // 0x8023B398: bne         $v0, $zero, L_8023B30C
    if (ctx->r2 != 0) {
        // 0x8023B39C: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_8023B30C;
    }
    // 0x8023B39C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8023B3A0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8023B3A4:
    // 0x8023B3A4: sltiu       $v0, $s2, 0x4
    ctx->r2 = ctx->r18 < 0X4 ? 1 : 0;
    // 0x8023B3A8: bne         $v0, $zero, L_8023B2B8
    if (ctx->r2 != 0) {
        // 0x8023B3AC: addiu       $s1, $s1, 0x10
        ctx->r17 = ADD32(ctx->r17, 0X10);
            goto L_8023B2B8;
    }
    // 0x8023B3AC: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    // 0x8023B3B0: lw          $ra, 0x48($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X48);
    // 0x8023B3B4: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x8023B3B8: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x8023B3BC: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x8023B3C0: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x8023B3C4: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8023B3C8: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8023B3CC: jr          $ra
    // 0x8023B3D0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x8023B3D0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x8023B3D4: nop

    // 0x8023B3D8: nop

    // 0x8023B3DC: nop

;}
