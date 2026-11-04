#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8022C1F4_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C1F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C1F8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022C1FC: jal         0x8004F4F8
    // 0x8022C200: nop

    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_0;
    // 0x8022C200: nop

    after_0:
    // 0x8022C204: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022C208: jr          $ra
    // 0x8022C20C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C20C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C5B0_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C5B0: jr          $ra
    // 0x8022C5B4: nop

    TRACE_RETURN()
    return;
    // 0x8022C5B4: nop

;}
RECOMP_FUNC void func_8022C38C_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C38C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8022C390: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x8022C394: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x8022C398: addiu       $a0, $zero, 0x60F
    ctx->r4 = ADD32(0, 0X60F);
    // 0x8022C39C: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x8022C3A0: addiu       $s5, $s4, 0xD0
    ctx->r21 = ADD32(ctx->r20, 0XD0);
    // 0x8022C3A4: sw          $ra, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r31;
    // 0x8022C3A8: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x8022C3AC: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x8022C3B0: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x8022C3B4: jal         0x8006033C
    // 0x8022C3B8: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8022C3B8: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    after_0:
    // 0x8022C3BC: beq         $v0, $zero, L_8022C3D4
    if (ctx->r2 == 0) {
        // 0x8022C3C0: addiu       $a0, $s4, 0x54
        ctx->r4 = ADD32(ctx->r20, 0X54);
            goto L_8022C3D4;
    }
    // 0x8022C3C0: addiu       $a0, $s4, 0x54
    ctx->r4 = ADD32(ctx->r20, 0X54);
    // 0x8022C3C4: lhu         $v0, 0x54($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X54);
    // 0x8022C3C8: addiu       $v0, $v0, 0x1E
    ctx->r2 = ADD32(ctx->r2, 0X1E);
    // 0x8022C3CC: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022C3D0: sh          $v0, 0x54($s4)
    MEM_H(0X54, ctx->r20) = ctx->r2;
L_8022C3D4:
    // 0x8022C3D4: addiu       $s0, $s4, 0x8C
    ctx->r16 = ADD32(ctx->r20, 0X8C);
    // 0x8022C3D8: jal         0x80031600
    // 0x8022C3DC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031600_CA00(rdram, ctx);
        goto after_1;
    // 0x8022C3DC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022C3E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C3E4: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x8022C3E8: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x8022C3EC: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x8022C3F0: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x8022C3F4: jal         0x80031DA8
    // 0x8022C3F8: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_2;
    // 0x8022C3F8: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    after_2:
    // 0x8022C3FC: addiu       $a0, $s4, 0xAC
    ctx->r4 = ADD32(ctx->r20, 0XAC);
    // 0x8022C400: addiu       $s0, $s4, 0x14
    ctx->r16 = ADD32(ctx->r20, 0X14);
    // 0x8022C404: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022C408: jal         0x8009A3B4
    // 0x8022C40C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022C40C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x8022C410: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x8022C414: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022C418: jal         0x8009A3B4
    // 0x8022C41C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022C41C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x8022C420: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x8022C424: lbu         $v0, 0x1($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X1);
    // 0x8022C428: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    // 0x8022C42C: addiu       $s3, $s4, 0xD8
    ctx->r19 = ADD32(ctx->r20, 0XD8);
    // 0x8022C430: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022C434: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022C438: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x8022C43C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022C440: lb          $v0, 0x73($s4)
    ctx->r2 = MEM_B(ctx->r20, 0X73);
    // 0x8022C444: addiu       $s2, $zero, 0x80
    ctx->r18 = ADD32(0, 0X80);
    // 0x8022C448: lui         $s1, 0x500
    ctx->r17 = S32(0X500 << 16);
    // 0x8022C44C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8022C450: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022C454: or          $v0, $v0, $s1
    ctx->r2 = ctx->r2 | ctx->r17;
    // 0x8022C458: jal         0x80051E18
    // 0x8022C45C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80051E18_2D218(rdram, ctx);
        goto after_5;
    // 0x8022C45C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_5:
    // 0x8022C460: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x8022C464: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022C468: jal         0x8009A3B4
    // 0x8022C46C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8022C46C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x8022C470: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x8022C474: lhu         $v0, 0xD4($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0XD4);
    // 0x8022C478: lbu         $v1, 0x1($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X1);
    // 0x8022C47C: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    // 0x8022C480: addiu       $v0, $v0, 0xB4
    ctx->r2 = ADD32(ctx->r2, 0XB4);
    // 0x8022C484: sh          $v0, 0xD4($s4)
    MEM_H(0XD4, ctx->r20) = ctx->r2;
    // 0x8022C488: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8022C48C: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x8022C490: lb          $v0, 0x73($s4)
    ctx->r2 = MEM_B(ctx->r20, 0X73);
    // 0x8022C494: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022C498: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022C49C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8022C4A0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022C4A4: or          $v0, $v0, $s1
    ctx->r2 = ctx->r2 | ctx->r17;
    // 0x8022C4A8: jal         0x80051E18
    // 0x8022C4AC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80051E18_2D218(rdram, ctx);
        goto after_7;
    // 0x8022C4AC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_7:
    // 0x8022C4B0: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x8022C4B4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022C4B8: jal         0x8009A3B4
    // 0x8022C4BC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x8022C4BC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
    // 0x8022C4C0: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x8022C4C4: lhu         $v0, 0xD4($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0XD4);
    // 0x8022C4C8: lbu         $v1, 0x1($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X1);
    // 0x8022C4CC: addiu       $a1, $zero, 0x78
    ctx->r5 = ADD32(0, 0X78);
    // 0x8022C4D0: addiu       $v0, $v0, -0xB4
    ctx->r2 = ADD32(ctx->r2, -0XB4);
    // 0x8022C4D4: sh          $v0, 0xD4($s4)
    MEM_H(0XD4, ctx->r20) = ctx->r2;
    // 0x8022C4D8: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8022C4DC: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x8022C4E0: lb          $v0, 0x73($s4)
    ctx->r2 = MEM_B(ctx->r20, 0X73);
    // 0x8022C4E4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022C4E8: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022C4EC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8022C4F0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022C4F4: or          $v0, $v0, $s1
    ctx->r2 = ctx->r2 | ctx->r17;
    // 0x8022C4F8: jal         0x80051E18
    // 0x8022C4FC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80051E18_2D218(rdram, ctx);
        goto after_9;
    // 0x8022C4FC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_9:
    // 0x8022C500: sw          $zero, 0xD8($s4)
    MEM_W(0XD8, ctx->r20) = 0;
    // 0x8022C504: lw          $ra, 0x50($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X50);
    // 0x8022C508: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x8022C50C: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x8022C510: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x8022C514: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x8022C518: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x8022C51C: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8022C520: jr          $ra
    // 0x8022C524: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x8022C524: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_802320D8_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802320D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802320DC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802320E0: jal         0x8004F5C4
    // 0x802320E4: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x802320E4: nop

    after_0:
    // 0x802320E8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802320EC: jr          $ra
    // 0x802320F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802320F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226F7C_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226F7C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226F80: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226F84: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80226F88: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80226F8C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226F90: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x80226F94: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80226F98: blez        $v0, L_80227068
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80226F9C: addiu       $s0, $s0, 0x49B0
        ctx->r16 = ADD32(ctx->r16, 0X49B0);
            goto L_80227068;
    }
    // 0x80226F9C: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x80226FA0: jal         0x8004F144
    // 0x80226FA4: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80226FA4: nop

    after_0:
    // 0x80226FA8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80226FAC: beq         $v1, $zero, L_80226FD8
    if (ctx->r3 == 0) {
        // 0x80226FB0: addiu       $a0, $v1, 0x38
        ctx->r4 = ADD32(ctx->r3, 0X38);
            goto L_80226FD8;
    }
    // 0x80226FB0: addiu       $a0, $v1, 0x38
    ctx->r4 = ADD32(ctx->r3, 0X38);
    // 0x80226FB4: addiu       $a1, $s1, 0x188
    ctx->r5 = ADD32(ctx->r17, 0X188);
    // 0x80226FB8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80226FBC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80226FC0: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80226FC4: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80226FC8: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80226FCC: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80226FD0: jal         0x8009A3B4
    // 0x80226FD4: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80226FD4: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    after_1:
L_80226FD8:
    // 0x80226FD8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80226FDC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80226FE0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80226FE4: addiu       $s0, $s1, 0x188
    ctx->r16 = ADD32(ctx->r17, 0X188);
    // 0x80226FE8: jal         0x80231878
    // 0x80226FEC: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_80231878_ovl16(rdram, ctx);
        goto after_2;
    // 0x80226FEC: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80226FF0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80226FF4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80226FF8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80226FFC: jal         0x80231878
    // 0x80227000: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_80231878_ovl16(rdram, ctx);
        goto after_3;
    // 0x80227000: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80227004: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80227008: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8022700C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80227010: jal         0x80231878
    // 0x80227014: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_80231878_ovl16(rdram, ctx);
        goto after_4;
    // 0x80227014: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80227018: jal         0x8004EFE4
    // 0x8022701C: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_5;
    // 0x8022701C: nop

    after_5:
    // 0x80227020: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80227024: beq         $s0, $zero, L_80227054
    if (ctx->r16 == 0) {
        // 0x80227028: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80227054;
    }
    // 0x80227028: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022702C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80227030: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80227034: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227038: addiu       $v1, $zero, 0x2A
    ctx->r3 = ADD32(0, 0X2A);
    // 0x8022703C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80227040: sb          $v1, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r3;
    // 0x80227044: jal         0x8009A3B4
    // 0x80227048: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x80227048: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    after_6:
    // 0x8022704C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80227050: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
L_80227054:
    // 0x80227054: jal         0x80047B3C
    // 0x80227058: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80047B3C_22F3C(rdram, ctx);
        goto after_7;
    // 0x80227058: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_7:
    // 0x8022705C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80227060: j           L_80227254
    // 0x80227064: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
        goto L_80227254;
    // 0x80227064: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_80227068:
    // 0x80227068: jal         0x8006033C
    // 0x8022706C: addiu       $a0, $zero, 0x60C
    ctx->r4 = ADD32(0, 0X60C);
    func_8006033C_3B73C(rdram, ctx);
        goto after_8;
    // 0x8022706C: addiu       $a0, $zero, 0x60C
    ctx->r4 = ADD32(0, 0X60C);
    after_8:
    // 0x80227070: beq         $v0, $zero, L_80227108
    if (ctx->r2 == 0) {
        // 0x80227074: nop
    
            goto L_80227108;
    }
    // 0x80227074: nop

    // 0x80227078: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x8022707C: bne         $v0, $zero, L_802270F0
    if (ctx->r2 != 0) {
        // 0x80227080: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802270F0;
    }
    // 0x80227080: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80227084: lh          $a1, 0x44($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X44);
    // 0x80227088: lh          $a2, 0x46($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X46);
    // 0x8022708C: jal         0x8004DA90
    // 0x80227090: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_9;
    // 0x80227090: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_9:
    // 0x80227094: lhu         $v0, 0x46($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X46);
    // 0x80227098: lhu         $v1, 0x4E($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X4E);
    // 0x8022709C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802270A0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802270A4: jal         0x80040F30
    // 0x802270A8: sh          $v0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r2;
    func_80040F30_1C330(rdram, ctx);
        goto after_10;
    // 0x802270A8: sh          $v0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r2;
    after_10:
    // 0x802270AC: jal         0x8003E934
    // 0x802270B0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_11;
    // 0x802270B0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_11:
    // 0x802270B4: lh          $v1, 0x2E($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X2E);
    // 0x802270B8: subu        $v1, $v0, $v1
    ctx->r3 = SUB32(ctx->r2, ctx->r3);
    // 0x802270BC: slti        $v1, $v1, 0x10
    ctx->r3 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x802270C0: beq         $v1, $zero, L_80227108
    if (ctx->r3 == 0) {
        // 0x802270C4: addiu       $a0, $zero, 0x187
        ctx->r4 = ADD32(0, 0X187);
            goto L_80227108;
    }
    // 0x802270C4: addiu       $a0, $zero, 0x187
    ctx->r4 = ADD32(0, 0X187);
    // 0x802270C8: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x802270CC: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x802270D0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802270D4: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x802270D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802270DC: sb          $zero, 0x74($s1)
    MEM_B(0X74, ctx->r17) = 0;
    // 0x802270E0: jal         0x8002A33C
    // 0x802270E4: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_12;
    // 0x802270E4: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    after_12:
    // 0x802270E8: j           L_80227108
    // 0x802270EC: nop

        goto L_80227108;
    // 0x802270EC: nop

L_802270F0:
    // 0x802270F0: lh          $a1, 0x44($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X44);
    // 0x802270F4: lh          $a2, 0x46($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X46);
    // 0x802270F8: jal         0x8004DA90
    // 0x802270FC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_13;
    // 0x802270FC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_13:
    // 0x80227100: jal         0x80040F30
    // 0x80227104: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_14;
    // 0x80227104: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_14:
L_80227108:
    // 0x80227108: jal         0x8005044C
    // 0x8022710C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_15;
    // 0x8022710C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_15:
    // 0x80227110: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80227114: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80227118: addiu       $v0, $v0, 0x409C
    ctx->r2 = ADD32(ctx->r2, 0X409C);
    // 0x8022711C: jal         0x80046470
    // 0x80227120: sw          $v0, 0x78($s1)
    MEM_W(0X78, ctx->r17) = ctx->r2;
    func_80046470_21870(rdram, ctx);
        goto after_16;
    // 0x80227120: sw          $v0, 0x78($s1)
    MEM_W(0X78, ctx->r17) = ctx->r2;
    after_16:
    // 0x80227124: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80227128: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022712C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227130: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80227134: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80227138: addiu       $v0, $v0, 0x4090
    ctx->r2 = ADD32(ctx->r2, 0X4090);
    // 0x8022713C: jal         0x80047284
    // 0x80227140: sw          $v0, 0x78($s1)
    MEM_W(0X78, ctx->r17) = ctx->r2;
    func_80047284_22684(rdram, ctx);
        goto after_17;
    // 0x80227140: sw          $v0, 0x78($s1)
    MEM_W(0X78, ctx->r17) = ctx->r2;
    after_17:
    // 0x80227144: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x80227148: beq         $v0, $zero, L_8022718C
    if (ctx->r2 == 0) {
        // 0x8022714C: nop
    
            goto L_8022718C;
    }
    // 0x8022714C: nop

    // 0x80227150: jal         0x8003E934
    // 0x80227154: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_18;
    // 0x80227154: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_18:
    // 0x80227158: lh          $v1, 0x2E($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X2E);
    // 0x8022715C: beq         $v0, $v1, L_80227174
    if (ctx->r2 == ctx->r3) {
        // 0x80227160: nop
    
            goto L_80227174;
    }
    // 0x80227160: nop

    // 0x80227164: lhu         $v0, 0x46($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X46);
    // 0x80227168: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x8022716C: j           L_8022718C
    // 0x80227170: sh          $v0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r2;
        goto L_8022718C;
    // 0x80227170: sh          $v0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r2;
L_80227174:
    // 0x80227174: lh          $v0, 0x46($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X46);
    // 0x80227178: beq         $v0, $zero, L_8022718C
    if (ctx->r2 == 0) {
        // 0x8022717C: addiu       $a0, $zero, 0x187
        ctx->r4 = ADD32(0, 0X187);
            goto L_8022718C;
    }
    // 0x8022717C: addiu       $a0, $zero, 0x187
    ctx->r4 = ADD32(0, 0X187);
    // 0x80227180: jal         0x8002A33C
    // 0x80227184: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_19;
    // 0x80227184: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_19:
    // 0x80227188: sh          $zero, 0x46($s1)
    MEM_H(0X46, ctx->r17) = 0;
L_8022718C:
    // 0x8022718C: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x80227190: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227194: beq         $v1, $v0, L_802271E4
    if (ctx->r3 == ctx->r2) {
        // 0x80227198: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_802271E4;
    }
    // 0x80227198: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022719C: beql        $v0, $zero, L_802271B4
    if (ctx->r2 == 0) {
        // 0x802271A0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802271B4;
    }
    goto skip_0;
    // 0x802271A0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802271A4: beq         $v1, $zero, L_802271CC
    if (ctx->r3 == 0) {
        // 0x802271A8: nop
    
            goto L_802271CC;
    }
    // 0x802271A8: nop

    // 0x802271AC: j           L_80227254
    // 0x802271B0: nop

        goto L_80227254;
    // 0x802271B0: nop

L_802271B4:
    // 0x802271B4: beq         $v1, $v0, L_8022720C
    if (ctx->r3 == ctx->r2) {
        // 0x802271B8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022720C;
    }
    // 0x802271B8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802271BC: beq         $v1, $v0, L_80227238
    if (ctx->r3 == ctx->r2) {
        // 0x802271C0: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_80227238;
    }
    // 0x802271C0: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x802271C4: j           L_80227254
    // 0x802271C8: nop

        goto L_80227254;
    // 0x802271C8: nop

L_802271CC:
    // 0x802271CC: lw          $v0, 0x184($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X184);
    // 0x802271D0: bne         $v0, $s1, L_80227254
    if (ctx->r2 != ctx->r17) {
        // 0x802271D4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80227254;
    }
    // 0x802271D4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802271D8: sw          $zero, 0x184($s0)
    MEM_W(0X184, ctx->r16) = 0;
    // 0x802271DC: j           L_80227254
    // 0x802271E0: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_80227254;
    // 0x802271E0: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_802271E4:
    // 0x802271E4: jal         0x8006FF84
    // 0x802271E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_20;
    // 0x802271E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_20:
    // 0x802271EC: beq         $v0, $zero, L_80227254
    if (ctx->r2 == 0) {
        // 0x802271F0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80227254;
    }
    // 0x802271F0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802271F4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802271F8: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x802271FC: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80227200: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227204: j           L_80227254
    // 0x80227208: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_80227254;
    // 0x80227208: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_8022720C:
    // 0x8022720C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80227210: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80227214: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80227218: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022721C: bne         $v0, $zero, L_80227254
    if (ctx->r2 != 0) {
        // 0x80227220: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80227254;
    }
    // 0x80227220: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80227224: jal         0x800616FC
    // 0x80227228: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_21;
    // 0x80227228: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    after_21:
    // 0x8022722C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80227230: j           L_80227254
    // 0x80227234: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_80227254;
    // 0x80227234: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_80227238:
    // 0x80227238: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022723C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80227240: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80227244: bne         $v0, $zero, L_80227254
    if (ctx->r2 != 0) {
        // 0x80227248: nop
    
            goto L_80227254;
    }
    // 0x80227248: nop

    // 0x8022724C: sw          $zero, 0x184($s0)
    MEM_W(0X184, ctx->r16) = 0;
    // 0x80227250: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
L_80227254:
    // 0x80227254: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227258: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022725C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227260: jr          $ra
    // 0x80227264: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227264: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022C5F8_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C5F8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022C5FC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022C600: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C604: addiu       $a0, $s0, 0xAC
    ctx->r4 = ADD32(ctx->r16, 0XAC);
    // 0x8022C608: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022C60C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022C610: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8022C614: jal         0x8009A3B4
    // 0x8022C618: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022C618: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    after_0:
    // 0x8022C61C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022C620: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C624: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x8022C628: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022C62C: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022C630: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x8022C634: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x8022C638: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x8022C63C: sw          $zero, 0x70($s0)
    MEM_W(0X70, ctx->r16) = 0;
    // 0x8022C640: sw          $zero, 0x74($s0)
    MEM_W(0X74, ctx->r16) = 0;
    // 0x8022C644: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x8022C648: jal         0x8004D5D4
    // 0x8022C64C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x8022C64C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022C650: addiu       $a0, $s0, 0x54
    ctx->r4 = ADD32(ctx->r16, 0X54);
    // 0x8022C654: addiu       $s1, $s0, 0x8C
    ctx->r17 = ADD32(ctx->r16, 0X8C);
    // 0x8022C658: jal         0x80031600
    // 0x8022C65C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_80031600_CA00(rdram, ctx);
        goto after_2;
    // 0x8022C65C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x8022C660: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022C664: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8022C668: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x8022C66C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022C670: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022C674: jal         0x80031DA8
    // 0x8022C678: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_3;
    // 0x8022C678: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_3:
    // 0x8022C67C: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8022C680: lh          $a0, 0x56($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X56);
    // 0x8022C684: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x8022C688: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022C68C: sw          $v0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r2;
    // 0x8022C690: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C694: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x8022C698: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x8022C69C: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    // 0x8022C6A0: sb          $v1, 0xFF($s0)
    MEM_B(0XFF, ctx->r16) = ctx->r3;
    // 0x8022C6A4: bne         $a0, $zero, L_8022C6E0
    if (ctx->r4 != 0) {
        // 0x8022C6A8: addiu       $s0, $s0, 0xD0
        ctx->r16 = ADD32(ctx->r16, 0XD0);
            goto L_8022C6E0;
    }
    // 0x8022C6A8: addiu       $s0, $s0, 0xD0
    ctx->r16 = ADD32(ctx->r16, 0XD0);
    // 0x8022C6AC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8022C6B0: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8022C6B4: addiu       $v0, $zero, -0xB00
    ctx->r2 = ADD32(0, -0XB00);
    // 0x8022C6B8: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    // 0x8022C6BC: addiu       $v0, $zero, -0x181
    ctx->r2 = ADD32(0, -0X181);
    // 0x8022C6C0: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x8022C6C4: addiu       $v0, $zero, -0xD00
    ctx->r2 = ADD32(0, -0XD00);
    // 0x8022C6C8: jal         0x8003E768
    // 0x8022C6CC: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    func_8003E768_19B68(rdram, ctx);
        goto after_4;
    // 0x8022C6CC: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    after_4:
    // 0x8022C6D0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022C6D4: lui         $a1, 0x3
    ctx->r5 = S32(0X3 << 16);
    // 0x8022C6D8: j           L_8022C710
    // 0x8022C6DC: ori         $a1, $a1, 0x1802
    ctx->r5 = ctx->r5 | 0X1802;
        goto L_8022C710;
    // 0x8022C6DC: ori         $a1, $a1, 0x1802
    ctx->r5 = ctx->r5 | 0X1802;
L_8022C6E0:
    // 0x8022C6E0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8022C6E4: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8022C6E8: addiu       $v0, $zero, -0x1B00
    ctx->r2 = ADD32(0, -0X1B00);
    // 0x8022C6EC: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    // 0x8022C6F0: addiu       $v0, $zero, -0x181
    ctx->r2 = ADD32(0, -0X181);
    // 0x8022C6F4: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x8022C6F8: addiu       $v0, $zero, -0x1100
    ctx->r2 = ADD32(0, -0X1100);
    // 0x8022C6FC: jal         0x8003E768
    // 0x8022C700: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    func_8003E768_19B68(rdram, ctx);
        goto after_5;
    // 0x8022C700: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    after_5:
    // 0x8022C704: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022C708: lui         $a1, 0x3
    ctx->r5 = S32(0X3 << 16);
    // 0x8022C70C: ori         $a1, $a1, 0x1702
    ctx->r5 = ctx->r5 | 0X1702;
L_8022C710:
    // 0x8022C710: jal         0x80071ACC
    // 0x8022C714: nop

    func_80071ACC_4CECC(rdram, ctx);
        goto after_6;
    // 0x8022C714: nop

    after_6:
    // 0x8022C718: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x8022C71C: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8022C720: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022C724: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022C728: jr          $ra
    // 0x8022C72C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022C72C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022CDF4_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CDF4: lhu         $v0, 0x58($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X58);
    // 0x8022CDF8: addiu       $v0, $v0, -0x50
    ctx->r2 = ADD32(ctx->r2, -0X50);
    // 0x8022CDFC: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022CE00: sh          $v0, 0x58($a0)
    MEM_H(0X58, ctx->r4) = ctx->r2;
    // 0x8022CE04: slti        $v0, $v0, 0xC01
    ctx->r2 = SIGNED(ctx->r2) < 0XC01 ? 1 : 0;
    // 0x8022CE08: beq         $v0, $zero, L_8022CE1C
    if (ctx->r2 == 0) {
        // 0x8022CE0C: addiu       $v0, $zero, 0xC00
        ctx->r2 = ADD32(0, 0XC00);
            goto L_8022CE1C;
    }
    // 0x8022CE0C: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
    // 0x8022CE10: sh          $v0, 0x58($a0)
    MEM_H(0X58, ctx->r4) = ctx->r2;
    // 0x8022CE14: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022CE18: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_8022CE1C:
    // 0x8022CE1C: jr          $ra
    // 0x8022CE20: nop

    TRACE_RETURN()
    return;
    // 0x8022CE20: nop

;}
RECOMP_FUNC void func_802275A4_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802275A4: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x802275A8: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x802275AC: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x802275B0: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x802275B4: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x802275B8: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x802275BC: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x802275C0: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x802275C4: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x802275C8: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x802275CC: lbu         $v0, 0xCA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XCA);
    // 0x802275D0: addiu       $a0, $s4, 0x368
    ctx->r4 = ADD32(ctx->r20, 0X368);
    // 0x802275D4: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x802275D8: addiu       $s5, $s4, 0x348
    ctx->r21 = ADD32(ctx->r20, 0X348);
    // 0x802275DC: addiu       $s6, $s4, 0xC4
    ctx->r22 = ADD32(ctx->r20, 0XC4);
    // 0x802275E0: addiu       $s1, $s4, 0x1D8
    ctx->r17 = ADD32(ctx->r20, 0X1D8);
    // 0x802275E4: addiu       $s3, $s4, 0x64
    ctx->r19 = ADD32(ctx->r20, 0X64);
    // 0x802275E8: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x802275EC: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x802275F0: andi        $v0, $v0, 0xF7
    ctx->r2 = ctx->r2 & 0XF7;
    // 0x802275F4: jal         0x800540D0
    // 0x802275F8: sb          $v0, 0xCA($s4)
    MEM_B(0XCA, ctx->r20) = ctx->r2;
    func_800540D0_2F4D0(rdram, ctx);
        goto after_0;
    // 0x802275F8: sb          $v0, 0xCA($s4)
    MEM_B(0XCA, ctx->r20) = ctx->r2;
    after_0:
    // 0x802275FC: beq         $v0, $zero, L_80227610
    if (ctx->r2 == 0) {
        // 0x80227600: nop
    
            goto L_80227610;
    }
    // 0x80227600: nop

    // 0x80227604: lbu         $v0, 0xCA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XCA);
    // 0x80227608: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
    // 0x8022760C: sb          $v0, 0xCA($s4)
    MEM_B(0XCA, ctx->r20) = ctx->r2;
L_80227610:
    // 0x80227610: lbu         $v0, 0x1DD($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X1DD);
    // 0x80227614: beq         $v0, $zero, L_80227620
    if (ctx->r2 == 0) {
        // 0x80227618: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_80227620;
    }
    // 0x80227618: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022761C: sb          $v0, 0x1DD($s4)
    MEM_B(0X1DD, ctx->r20) = ctx->r2;
L_80227620:
    // 0x80227620: lhu         $v0, 0x1D8($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X1D8);
    // 0x80227624: beq         $v0, $zero, L_80227630
    if (ctx->r2 == 0) {
        // 0x80227628: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_80227630;
    }
    // 0x80227628: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022762C: sh          $v0, 0x1D8($s4)
    MEM_H(0X1D8, ctx->r20) = ctx->r2;
L_80227630:
    // 0x80227630: lw          $v1, 0x350($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X350);
    // 0x80227634: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x80227638: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8022763C: and         $a1, $v1, $v0
    ctx->r5 = ctx->r3 & ctx->r2;
    // 0x80227640: beq         $a1, $zero, L_80227890
    if (ctx->r5 == 0) {
        // 0x80227644: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227890;
    }
    // 0x80227644: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227648: lbu         $v1, 0x9($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X9);
    // 0x8022764C: bne         $v1, $v0, L_80227660
    if (ctx->r3 != ctx->r2) {
        // 0x80227650: nop
    
            goto L_80227660;
    }
    // 0x80227650: nop

    // 0x80227654: lbu         $v0, 0x1DC($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X1DC);
    // 0x80227658: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022765C: sb          $v0, 0x1DC($s4)
    MEM_B(0X1DC, ctx->r20) = ctx->r2;
L_80227660:
    // 0x80227660: lhu         $v0, 0x6E($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X6E);
    // 0x80227664: lhu         $a0, 0x6E($s4)
    ctx->r4 = MEM_HU(ctx->r20, 0X6E);
    // 0x80227668: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x8022766C: sh          $v0, 0x6E($s4)
    MEM_H(0X6E, ctx->r20) = ctx->r2;
    // 0x80227670: lhu         $v0, 0x1D8($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X1D8);
    // 0x80227674: lh          $v1, 0x6E($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X6E);
    // 0x80227678: sh          $a0, 0xB2($s4)
    MEM_H(0XB2, ctx->r20) = ctx->r4;
    // 0x8022767C: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80227680: bgtz        $v1, L_8022769C
    if (SIGNED(ctx->r3) > 0) {
        // 0x80227684: sh          $v0, 0x1D8($s4)
        MEM_H(0X1D8, ctx->r20) = ctx->r2;
            goto L_8022769C;
    }
    // 0x80227684: sh          $v0, 0x1D8($s4)
    MEM_H(0X1D8, ctx->r20) = ctx->r2;
    // 0x80227688: lbu         $v0, 0xCA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XCA);
    // 0x8022768C: addiu       $v1, $zero, 0x7
    ctx->r3 = ADD32(0, 0X7);
    // 0x80227690: sb          $v1, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r3;
    // 0x80227694: j           L_80227B34
    // 0x80227698: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
        goto L_80227B34;
    // 0x80227698: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
L_8022769C:
    // 0x8022769C: lbu         $v0, 0xCA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XCA);
    // 0x802276A0: addiu       $v1, $zero, 0x7FFF
    ctx->r3 = ADD32(0, 0X7FFF);
    // 0x802276A4: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x802276A8: bne         $v0, $zero, L_802276DC
    if (ctx->r2 != 0) {
        // 0x802276AC: sh          $v1, 0x15E($s4)
        MEM_H(0X15E, ctx->r20) = ctx->r3;
            goto L_802276DC;
    }
    // 0x802276AC: sh          $v1, 0x15E($s4)
    MEM_H(0X15E, ctx->r20) = ctx->r3;
    // 0x802276B0: lbu         $v0, 0x2($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X2);
    // 0x802276B4: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x802276B8: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x802276BC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802276C0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802276C4: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x802276C8: lhu         $v0, 0x1D8($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X1D8);
    // 0x802276CC: lbu         $v1, 0x9($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X9);
    // 0x802276D0: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x802276D4: beq         $v0, $zero, L_802276F0
    if (ctx->r2 == 0) {
        // 0x802276D8: nop
    
            goto L_802276F0;
    }
    // 0x802276D8: nop

L_802276DC:
    // 0x802276DC: lw          $v0, 0x350($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X350);
    // 0x802276E0: lui         $v1, 0x2000
    ctx->r3 = S32(0X2000 << 16);
    // 0x802276E4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802276E8: beq         $v0, $zero, L_802277AC
    if (ctx->r2 == 0) {
        // 0x802276EC: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_802277AC;
    }
    // 0x802276EC: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
L_802276F0:
    // 0x802276F0: lbu         $v1, 0x9($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X9);
    // 0x802276F4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802276F8: beq         $v1, $v0, L_80227B38
    if (ctx->r3 == ctx->r2) {
        // 0x802276FC: addiu       $a0, $zero, 0xA2
        ctx->r4 = ADD32(0, 0XA2);
            goto L_80227B38;
    }
    // 0x802276FC: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
    // 0x80227700: addiu       $s0, $s4, 0x14
    ctx->r16 = ADD32(ctx->r20, 0X14);
    // 0x80227704: jal         0x8002A33C
    // 0x80227708: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x80227708: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022770C: lbu         $v0, 0x6($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X6);
    // 0x80227710: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227714: addiu       $a1, $s5, 0x10
    ctx->r5 = ADD32(ctx->r21, 0X10);
    // 0x80227718: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x8022771C: andi        $v0, $v0, 0xDF
    ctx->r2 = ctx->r2 & 0XDF;
    // 0x80227720: sb          $v0, 0x6($s6)
    MEM_B(0X6, ctx->r22) = ctx->r2;
    // 0x80227724: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80227728: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
    // 0x8022772C: sb          $zero, 0x4($s1)
    MEM_B(0X4, ctx->r17) = 0;
    // 0x80227730: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
    // 0x80227734: lh          $a2, 0x56($s4)
    ctx->r6 = MEM_H(ctx->r20, 0X56);
    // 0x80227738: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022773C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80227740: jal         0x8004FEA0
    // 0x80227744: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    func_8004FEA0_2B2A0(rdram, ctx);
        goto after_2;
    // 0x80227744: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    after_2:
    // 0x80227748: addiu       $v1, $zero, 0xC0
    ctx->r3 = ADD32(0, 0XC0);
    // 0x8022774C: sh          $v1, 0x44($s4)
    MEM_H(0X44, ctx->r20) = ctx->r3;
    // 0x80227750: addiu       $v1, $zero, -0xC0
    ctx->r3 = ADD32(0, -0XC0);
    // 0x80227754: sh          $v1, 0x46($s4)
    MEM_H(0X46, ctx->r20) = ctx->r3;
    // 0x80227758: lbu         $v1, 0x6($s6)
    ctx->r3 = MEM_BU(ctx->r22, 0X6);
    // 0x8022775C: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x80227760: sb          $v1, 0x6($s6)
    MEM_B(0X6, ctx->r22) = ctx->r3;
    // 0x80227764: addiu       $v1, $v0, 0x800
    ctx->r3 = ADD32(ctx->r2, 0X800);
    // 0x80227768: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022776C: sh          $v1, 0x56($s4)
    MEM_H(0X56, ctx->r20) = ctx->r3;
    // 0x80227770: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x80227774: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80227778: bne         $v0, $zero, L_80227794
    if (ctx->r2 != 0) {
        // 0x8022777C: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_80227794;
    }
    // 0x8022777C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x80227780: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80227784: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227788: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022778C: j           L_80227880
    // 0x80227790: sb          $zero, 0xA($s4)
    MEM_B(0XA, ctx->r20) = 0;
        goto L_80227880;
    // 0x80227790: sb          $zero, 0xA($s4)
    MEM_B(0XA, ctx->r20) = 0;
L_80227794:
    // 0x80227794: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x80227798: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022779C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802277A0: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    // 0x802277A4: j           L_80227880
    // 0x802277A8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
        goto L_80227880;
    // 0x802277A8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_802277AC:
    // 0x802277AC: addiu       $s0, $s4, 0x14
    ctx->r16 = ADD32(ctx->r20, 0X14);
    // 0x802277B0: jal         0x8002A33C
    // 0x802277B4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x802277B4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x802277B8: lbu         $v0, 0x1DD($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X1DD);
    // 0x802277BC: beq         $v0, $zero, L_80227808
    if (ctx->r2 == 0) {
        // 0x802277C0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80227808;
    }
    // 0x802277C0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802277C4: lbu         $v1, 0x1DC($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X1DC);
    // 0x802277C8: bne         $v1, $v0, L_80227B38
    if (ctx->r3 != ctx->r2) {
        // 0x802277CC: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80227B38;
    }
    // 0x802277CC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802277D0: lbu         $v1, 0x9($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X9);
    // 0x802277D4: beq         $v1, $v0, L_80227B38
    if (ctx->r3 == ctx->r2) {
        // 0x802277D8: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_80227B38;
    }
    // 0x802277D8: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x802277DC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x802277E0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802277E4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802277E8: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    // 0x802277EC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802277F0: sb          $zero, 0xA($s4)
    MEM_B(0XA, ctx->r20) = 0;
    // 0x802277F4: jal         0x80050294
    // 0x802277F8: sb          $v0, 0xAC($s4)
    MEM_B(0XAC, ctx->r20) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x802277F8: sb          $v0, 0xAC($s4)
    MEM_B(0XAC, ctx->r20) = ctx->r2;
    after_4:
    // 0x802277FC: lbu         $v0, 0xCA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XCA);
    // 0x80227800: j           L_80227B34
    // 0x80227804: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
        goto L_80227B34;
    // 0x80227804: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
L_80227808:
    // 0x80227808: addiu       $a0, $s4, 0x1C
    ctx->r4 = ADD32(ctx->r20, 0X1C);
    // 0x8022780C: lh          $a1, 0x56($s4)
    ctx->r5 = MEM_H(ctx->r20, 0X56);
    // 0x80227810: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x80227814: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80227818: sb          $v0, 0x1DD($s4)
    MEM_B(0X1DD, ctx->r20) = ctx->r2;
    // 0x8022781C: sb          $zero, 0x1DC($s4)
    MEM_B(0X1DC, ctx->r20) = 0;
    // 0x80227820: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80227824: lh          $v1, 0x4A06($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X4A06);
    // 0x80227828: addiu       $a3, $s2, 0x1C
    ctx->r7 = ADD32(ctx->r18, 0X1C);
    // 0x8022782C: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x80227830: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80227834: jal         0x8004FAEC
    // 0x80227838: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FAEC_2AEEC(rdram, ctx);
        goto after_5;
    // 0x80227838: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_5:
    // 0x8022783C: bne         $v0, $zero, L_80227B38
    if (ctx->r2 != 0) {
        // 0x80227840: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_80227B38;
    }
    // 0x80227840: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80227844: lbu         $v1, 0x9($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X9);
    // 0x80227848: beq         $v1, $v0, L_80227B38
    if (ctx->r3 == ctx->r2) {
        // 0x8022784C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227B38;
    }
    // 0x8022784C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227850: lh          $a2, 0x56($s4)
    ctx->r6 = MEM_H(ctx->r20, 0X56);
    // 0x80227854: lh          $a3, 0x382($s4)
    ctx->r7 = MEM_H(ctx->r20, 0X382);
    // 0x80227858: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x8022785C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80227860: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    // 0x80227864: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80227868: jal         0x8004F820
    // 0x8022786C: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_6;
    // 0x8022786C: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    after_6:
    // 0x80227870: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x80227874: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x80227878: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022787C: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
L_80227880:
    // 0x80227880: jal         0x80050294
    // 0x80227884: sb          $v0, 0xAC($s4)
    MEM_B(0XAC, ctx->r20) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_7;
    // 0x80227884: sb          $v0, 0xAC($s4)
    MEM_B(0XAC, ctx->r20) = ctx->r2;
    after_7:
    // 0x80227888: j           L_80227B38
    // 0x8022788C: nop

        goto L_80227B38;
    // 0x8022788C: nop

L_80227890:
    // 0x80227890: lbu         $v1, 0x9($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X9);
    // 0x80227894: addiu       $v0, $v1, -0x2
    ctx->r2 = ADD32(ctx->r3, -0X2);
    // 0x80227898: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x8022789C: bne         $v0, $zero, L_80227B38
    if (ctx->r2 != 0) {
        // 0x802278A0: addiu       $v0, $v1, -0x4
        ctx->r2 = ADD32(ctx->r3, -0X4);
            goto L_80227B38;
    }
    // 0x802278A0: addiu       $v0, $v1, -0x4
    ctx->r2 = ADD32(ctx->r3, -0X4);
    // 0x802278A4: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x802278A8: bne         $v0, $zero, L_80227B38
    if (ctx->r2 != 0) {
        // 0x802278AC: nop
    
            goto L_80227B38;
    }
    // 0x802278AC: nop

    // 0x802278B0: lbu         $v0, 0xCA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XCA);
    // 0x802278B4: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x802278B8: bne         $v0, $zero, L_80227B38
    if (ctx->r2 != 0) {
        // 0x802278BC: andi        $v1, $v1, 0xFF
        ctx->r3 = ctx->r3 & 0XFF;
            goto L_80227B38;
    }
    // 0x802278BC: andi        $v1, $v1, 0xFF
    ctx->r3 = ctx->r3 & 0XFF;
    // 0x802278C0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802278C4: beq         $v1, $v0, L_80227B38
    if (ctx->r3 == ctx->r2) {
        // 0x802278C8: nop
    
            goto L_80227B38;
    }
    // 0x802278C8: nop

    // 0x802278CC: lb          $v0, 0x386($s4)
    ctx->r2 = MEM_B(ctx->r20, 0X386);
    // 0x802278D0: beq         $v0, $zero, L_802278E0
    if (ctx->r2 == 0) {
        // 0x802278D4: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_802278E0;
    }
    // 0x802278D4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802278D8: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x802278DC: sb          $v0, 0x386($s4)
    MEM_B(0X386, ctx->r20) = ctx->r2;
L_802278E0:
    // 0x802278E0: lbu         $v0, 0xCA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XCA);
    // 0x802278E4: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x802278E8: beq         $v0, $zero, L_80227AF8
    if (ctx->r2 == 0) {
        // 0x802278EC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227AF8;
    }
    // 0x802278EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802278F0: lbu         $v1, 0x9($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X9);
    // 0x802278F4: beq         $v1, $v0, L_80227AB4
    if (ctx->r3 == ctx->r2) {
        // 0x802278F8: addiu       $a0, $s4, 0x1C
        ctx->r4 = ADD32(ctx->r20, 0X1C);
            goto L_80227AB4;
    }
    // 0x802278F8: addiu       $a0, $s4, 0x1C
    ctx->r4 = ADD32(ctx->r20, 0X1C);
    // 0x802278FC: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x80227900: lh          $a1, 0x56($s4)
    ctx->r5 = MEM_H(ctx->r20, 0X56);
    // 0x80227904: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80227908: lh          $v1, 0x4A06($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X4A06);
    // 0x8022790C: addiu       $a3, $s2, 0x1C
    ctx->r7 = ADD32(ctx->r18, 0X1C);
    // 0x80227910: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x80227914: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80227918: jal         0x8004FAEC
    // 0x8022791C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FAEC_2AEEC(rdram, ctx);
        goto after_8;
    // 0x8022791C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_8:
    // 0x80227920: beq         $v0, $zero, L_80227A20
    if (ctx->r2 == 0) {
        // 0x80227924: lui         $v0, 0x8
        ctx->r2 = S32(0X8 << 16);
            goto L_80227A20;
    }
    // 0x80227924: lui         $v0, 0x8
    ctx->r2 = S32(0X8 << 16);
    // 0x80227928: lw          $v1, 0x80($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X80);
    // 0x8022792C: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80227930: beq         $v0, $zero, L_80227944
    if (ctx->r2 == 0) {
        // 0x80227934: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227944;
    }
    // 0x80227934: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227938: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    // 0x8022793C: j           L_80227AB4
    // 0x80227940: sb          $zero, 0xA($s4)
    MEM_B(0XA, ctx->r20) = 0;
        goto L_80227AB4;
    // 0x80227940: sb          $zero, 0xA($s4)
    MEM_B(0XA, ctx->r20) = 0;
L_80227944:
    // 0x80227944: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x80227948: ori         $v0, $v0, 0xE847
    ctx->r2 = ctx->r2 | 0XE847;
    // 0x8022794C: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80227950: bne         $v0, $zero, L_8022799C
    if (ctx->r2 != 0) {
        // 0x80227954: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_8022799C;
    }
    // 0x80227954: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80227958: lb          $v0, 0x386($s4)
    ctx->r2 = MEM_B(ctx->r20, 0X386);
    // 0x8022795C: bne         $v0, $zero, L_8022799C
    if (ctx->r2 != 0) {
        // 0x80227960: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_8022799C;
    }
    // 0x80227960: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80227964: lbu         $v1, 0x3($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X3);
    // 0x80227968: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022796C: beq         $v1, $v0, L_80227980
    if (ctx->r3 == ctx->r2) {
        // 0x80227970: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80227980;
    }
    // 0x80227970: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80227974: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    // 0x80227978: j           L_80227AAC
    // 0x8022797C: sb          $zero, 0xA($s4)
    MEM_B(0XA, ctx->r20) = 0;
        goto L_80227AAC;
    // 0x8022797C: sb          $zero, 0xA($s4)
    MEM_B(0XA, ctx->r20) = 0;
L_80227980:
    // 0x80227980: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    // 0x80227984: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80227988: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    // 0x8022798C: sb          $zero, 0x66($s4)
    MEM_B(0X66, ctx->r20) = 0;
    // 0x80227990: sb          $zero, 0x65($s4)
    MEM_B(0X65, ctx->r20) = 0;
    // 0x80227994: j           L_80227AAC
    // 0x80227998: sb          $zero, 0x64($s4)
    MEM_B(0X64, ctx->r20) = 0;
        goto L_80227AAC;
    // 0x80227998: sb          $zero, 0x64($s4)
    MEM_B(0X64, ctx->r20) = 0;
L_8022799C:
    // 0x8022799C: sb          $zero, 0x9($s4)
    MEM_B(0X9, ctx->r20) = 0;
    // 0x802279A0: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    // 0x802279A4: lbu         $v0, 0x6($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X6);
    // 0x802279A8: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x802279AC: bne         $v0, $zero, L_802279C8
    if (ctx->r2 != 0) {
        // 0x802279B0: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_802279C8;
    }
    // 0x802279B0: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x802279B4: lbu         $v0, 0x6($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X6);
    // 0x802279B8: sb          $zero, 0x7($s6)
    MEM_B(0X7, ctx->r22) = 0;
    // 0x802279BC: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x802279C0: sb          $v0, 0x6($s6)
    MEM_B(0X6, ctx->r22) = ctx->r2;
    // 0x802279C4: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_802279C8:
    // 0x802279C8: sh          $v0, 0x3A($s5)
    MEM_H(0X3A, ctx->r21) = ctx->r2;
    // 0x802279CC: lbu         $v1, 0x3($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X3);
    // 0x802279D0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802279D4: beq         $v1, $v0, L_80227AB4
    if (ctx->r3 == ctx->r2) {
        // 0x802279D8: nop
    
            goto L_80227AB4;
    }
    // 0x802279D8: nop

    // 0x802279DC: lbu         $v0, 0x6($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X6);
    // 0x802279E0: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802279E4: bne         $v0, $zero, L_80227AB4
    if (ctx->r2 != 0) {
        // 0x802279E8: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80227AB4;
    }
    // 0x802279E8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802279EC: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    // 0x802279F0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802279F4: sb          $v0, 0xAC($s4)
    MEM_B(0XAC, ctx->r20) = ctx->r2;
    // 0x802279F8: lbu         $v0, 0x6($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X6);
    // 0x802279FC: ori         $v0, $v0, 0x3
    ctx->r2 = ctx->r2 | 0X3;
    // 0x80227A00: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x80227A04: sb          $v0, 0x6($s6)
    MEM_B(0X6, ctx->r22) = ctx->r2;
    // 0x80227A08: lbu         $a1, 0xAC($s4)
    ctx->r5 = MEM_BU(ctx->r20, 0XAC);
    // 0x80227A0C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x80227A10: jal         0x80050294
    // 0x80227A14: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_9;
    // 0x80227A14: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_9:
    // 0x80227A18: j           L_80227AB4
    // 0x80227A1C: nop

        goto L_80227AB4;
    // 0x80227A1C: nop

L_80227A20:
    // 0x80227A20: lbu         $v1, 0xCA($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0XCA);
    // 0x80227A24: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80227A28: sb          $zero, 0x9($s4)
    MEM_B(0X9, ctx->r20) = 0;
    // 0x80227A2C: andi        $v1, $v1, 0x80
    ctx->r3 = ctx->r3 & 0X80;
    // 0x80227A30: bne         $v1, $zero, L_80227A48
    if (ctx->r3 != 0) {
        // 0x80227A34: sb          $v0, 0xA($s4)
        MEM_B(0XA, ctx->r20) = ctx->r2;
            goto L_80227A48;
    }
    // 0x80227A34: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    // 0x80227A38: lbu         $v0, 0xCA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XCA);
    // 0x80227A3C: sb          $zero, 0xCB($s4)
    MEM_B(0XCB, ctx->r20) = 0;
    // 0x80227A40: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x80227A44: sb          $v0, 0xCA($s4)
    MEM_B(0XCA, ctx->r20) = ctx->r2;
L_80227A48:
    // 0x80227A48: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x80227A4C: lw          $a0, 0x80($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X80);
    // 0x80227A50: ori         $v0, $v0, 0xE847
    ctx->r2 = ctx->r2 | 0XE847;
    // 0x80227A54: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x80227A58: sltu        $v0, $v0, $a0
    ctx->r2 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x80227A5C: bne         $v0, $zero, L_80227AB4
    if (ctx->r2 != 0) {
        // 0x80227A60: sh          $v1, 0x382($s4)
        MEM_H(0X382, ctx->r20) = ctx->r3;
            goto L_80227AB4;
    }
    // 0x80227A60: sh          $v1, 0x382($s4)
    MEM_H(0X382, ctx->r20) = ctx->r3;
    // 0x80227A64: lb          $v0, 0x386($s4)
    ctx->r2 = MEM_B(ctx->r20, 0X386);
    // 0x80227A68: bne         $v0, $zero, L_80227AB4
    if (ctx->r2 != 0) {
        // 0x80227A6C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80227AB4;
    }
    // 0x80227A6C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80227A70: lbu         $v1, 0x3($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X3);
    // 0x80227A74: beq         $v1, $v0, L_80227A88
    if (ctx->r3 == ctx->r2) {
        // 0x80227A78: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80227A88;
    }
    // 0x80227A78: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80227A7C: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    // 0x80227A80: j           L_80227AA0
    // 0x80227A84: sb          $zero, 0xA($s4)
    MEM_B(0XA, ctx->r20) = 0;
        goto L_80227AA0;
    // 0x80227A84: sb          $zero, 0xA($s4)
    MEM_B(0XA, ctx->r20) = 0;
L_80227A88:
    // 0x80227A88: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    // 0x80227A8C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80227A90: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    // 0x80227A94: sb          $zero, 0x66($s4)
    MEM_B(0X66, ctx->r20) = 0;
    // 0x80227A98: sb          $zero, 0x65($s4)
    MEM_B(0X65, ctx->r20) = 0;
    // 0x80227A9C: sb          $zero, 0x64($s4)
    MEM_B(0X64, ctx->r20) = 0;
L_80227AA0:
    // 0x80227AA0: lbu         $v0, 0x6($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X6);
    // 0x80227AA4: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x80227AA8: sb          $v0, 0x6($s6)
    MEM_B(0X6, ctx->r22) = ctx->r2;
L_80227AAC:
    // 0x80227AAC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80227AB0: sh          $v0, 0x3A($s5)
    MEM_H(0X3A, ctx->r21) = ctx->r2;
L_80227AB4:
    // 0x80227AB4: lw          $v0, 0x8($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X8);
    // 0x80227AB8: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x80227ABC: ori         $v1, $v1, 0xFF00
    ctx->r3 = ctx->r3 | 0XFF00;
    // 0x80227AC0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80227AC4: addiu       $v1, $zero, 0x600
    ctx->r3 = ADD32(0, 0X600);
    // 0x80227AC8: bne         $v0, $v1, L_80227B38
    if (ctx->r2 != ctx->r3) {
        // 0x80227ACC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227B38;
    }
    // 0x80227ACC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227AD0: lbu         $v1, 0xAC($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0XAC);
    // 0x80227AD4: beq         $v1, $v0, L_80227B38
    if (ctx->r3 == ctx->r2) {
        // 0x80227AD8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227B38;
    }
    // 0x80227AD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227ADC: sb          $v0, 0xAC($s4)
    MEM_B(0XAC, ctx->r20) = ctx->r2;
    // 0x80227AE0: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x80227AE4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80227AE8: jal         0x80050294
    // 0x80227AEC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_10;
    // 0x80227AEC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_10:
    // 0x80227AF0: j           L_80227B38
    // 0x80227AF4: nop

        goto L_80227B38;
    // 0x80227AF4: nop

L_80227AF8:
    // 0x80227AF8: lbu         $v0, 0x9($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X9);
    // 0x80227AFC: bne         $v0, $zero, L_80227B40
    if (ctx->r2 != 0) {
        // 0x80227B00: sll         $v0, $v0, 2
        ctx->r2 = S32(ctx->r2 << 2);
            goto L_80227B40;
    }
    // 0x80227B00: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227B04: lbu         $v1, 0xA($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0XA);
    // 0x80227B08: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80227B0C: bne         $v1, $v0, L_80227B38
    if (ctx->r3 != ctx->r2) {
        // 0x80227B10: addiu       $v1, $zero, 0x50
        ctx->r3 = ADD32(0, 0X50);
            goto L_80227B38;
    }
    // 0x80227B10: addiu       $v1, $zero, 0x50
    ctx->r3 = ADD32(0, 0X50);
    // 0x80227B14: lbu         $v0, 0xCA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XCA);
    // 0x80227B18: sh          $v1, 0x44($s4)
    MEM_H(0X44, ctx->r20) = ctx->r3;
    // 0x80227B1C: addiu       $v1, $zero, 0x78
    ctx->r3 = ADD32(0, 0X78);
    // 0x80227B20: sb          $zero, 0xA($s4)
    MEM_B(0XA, ctx->r20) = 0;
    // 0x80227B24: sb          $zero, 0xF($s4)
    MEM_B(0XF, ctx->r20) = 0;
    // 0x80227B28: sb          $v1, 0x385($s4)
    MEM_B(0X385, ctx->r20) = ctx->r3;
    // 0x80227B2C: sb          $zero, 0x384($s4)
    MEM_B(0X384, ctx->r20) = 0;
    // 0x80227B30: andi        $v0, $v0, 0x7E
    ctx->r2 = ctx->r2 & 0X7E;
L_80227B34:
    // 0x80227B34: sb          $v0, 0xCA($s4)
    MEM_B(0XCA, ctx->r20) = ctx->r2;
L_80227B38:
    // 0x80227B38: lbu         $v0, 0x9($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X9);
    // 0x80227B3C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_80227B40:
    // 0x80227B40: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227B44: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227B48: lw          $v0, 0x40DC($at)
    ctx->r2 = MEM_W(ctx->r1, 0X40DC);
    // 0x80227B4C: jalr        $v0
    // 0x80227B50: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_11;
    // 0x80227B50: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_11:
    // 0x80227B54: lbu         $v1, 0xA6($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0XA6);
    // 0x80227B58: andi        $v0, $v1, 0x4
    ctx->r2 = ctx->r3 & 0X4;
    // 0x80227B5C: bne         $v0, $zero, L_80227B70
    if (ctx->r2 != 0) {
        // 0x80227B60: addiu       $a0, $zero, 0x159
        ctx->r4 = ADD32(0, 0X159);
            goto L_80227B70;
    }
    // 0x80227B60: addiu       $a0, $zero, 0x159
    ctx->r4 = ADD32(0, 0X159);
    // 0x80227B64: andi        $v0, $v1, 0x8
    ctx->r2 = ctx->r3 & 0X8;
    // 0x80227B68: beq         $v0, $zero, L_80227B78
    if (ctx->r2 == 0) {
        // 0x80227B6C: addiu       $a0, $zero, 0x15A
        ctx->r4 = ADD32(0, 0X15A);
            goto L_80227B78;
    }
    // 0x80227B6C: addiu       $a0, $zero, 0x15A
    ctx->r4 = ADD32(0, 0X15A);
L_80227B70:
    // 0x80227B70: jal         0x8002A33C
    // 0x80227B74: addiu       $a1, $s4, 0x14
    ctx->r5 = ADD32(ctx->r20, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_12;
    // 0x80227B74: addiu       $a1, $s4, 0x14
    ctx->r5 = ADD32(ctx->r20, 0X14);
    after_12:
L_80227B78:
    // 0x80227B78: lbu         $v1, 0x9($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X9);
    // 0x80227B7C: addiu       $v0, $v1, -0x5
    ctx->r2 = ADD32(ctx->r3, -0X5);
    // 0x80227B80: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x80227B84: bne         $v0, $zero, L_80227BA0
    if (ctx->r2 != 0) {
        // 0x80227B88: andi        $v1, $v1, 0xFF
        ctx->r3 = ctx->r3 & 0XFF;
            goto L_80227BA0;
    }
    // 0x80227B88: andi        $v1, $v1, 0xFF
    ctx->r3 = ctx->r3 & 0XFF;
    // 0x80227B8C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80227B90: beq         $v1, $v0, L_80227BA0
    if (ctx->r3 == ctx->r2) {
        // 0x80227B94: nop
    
            goto L_80227BA0;
    }
    // 0x80227B94: nop

    // 0x80227B98: jal         0x8022983C
    // 0x80227B9C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_8022983C_ovl16(rdram, ctx);
        goto after_13;
    // 0x80227B9C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_13:
L_80227BA0:
    // 0x80227BA0: lbu         $v1, 0x3($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X3);
    // 0x80227BA4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80227BA8: bnel        $v1, $v0, L_80227C30
    if (ctx->r3 != ctx->r2) {
        // 0x80227BAC: addu        $a0, $s5, $zero
        ctx->r4 = ADD32(ctx->r21, 0);
            goto L_80227C30;
    }
    goto skip_0;
    // 0x80227BAC: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    skip_0:
    // 0x80227BB0: lh          $v0, 0x15E($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X15E);
    // 0x80227BB4: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x80227BB8: beq         $v0, $zero, L_80227BD8
    if (ctx->r2 == 0) {
        // 0x80227BBC: nop
    
            goto L_80227BD8;
    }
    // 0x80227BBC: nop

    // 0x80227BC0: lb          $v0, 0x2($s3)
    ctx->r2 = MEM_B(ctx->r19, 0X2);
    // 0x80227BC4: bne         $v0, $zero, L_80227BD8
    if (ctx->r2 != 0) {
        // 0x80227BC8: nop
    
            goto L_80227BD8;
    }
    // 0x80227BC8: nop

    // 0x80227BCC: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x80227BD0: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80227BD4: sb          $v0, 0x0($s4)
    MEM_B(0X0, ctx->r20) = ctx->r2;
L_80227BD8:
    // 0x80227BD8: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x80227BDC: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80227BE0: bne         $v0, $zero, L_80227C30
    if (ctx->r2 != 0) {
        // 0x80227BE4: addu        $a0, $s5, $zero
        ctx->r4 = ADD32(ctx->r21, 0);
            goto L_80227C30;
    }
    // 0x80227BE4: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x80227BE8: addiu       $a1, $s4, 0x180
    ctx->r5 = ADD32(ctx->r20, 0X180);
    // 0x80227BEC: jal         0x8009A3B4
    // 0x80227BF0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_14;
    // 0x80227BF0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_14:
    // 0x80227BF4: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x80227BF8: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x80227BFC: lbu         $v1, 0x1($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X1);
    // 0x80227C00: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227C04: addiu       $v0, $s5, 0x8
    ctx->r2 = ADD32(ctx->r21, 0X8);
    // 0x80227C08: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80227C0C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80227C10: lb          $v1, 0x73($s4)
    ctx->r3 = MEM_B(ctx->r20, 0X73);
    // 0x80227C14: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80227C18: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80227C1C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80227C20: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80227C24: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80227C28: j           L_80227C70
    // 0x80227C2C: lui         $v0, 0x408
    ctx->r2 = S32(0X408 << 16);
        goto L_80227C70;
    // 0x80227C2C: lui         $v0, 0x408
    ctx->r2 = S32(0X408 << 16);
L_80227C30:
    // 0x80227C30: addiu       $a1, $s4, 0x180
    ctx->r5 = ADD32(ctx->r20, 0X180);
    // 0x80227C34: jal         0x8009A3B4
    // 0x80227C38: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_15;
    // 0x80227C38: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_15:
    // 0x80227C3C: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x80227C40: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x80227C44: lbu         $v1, 0x1($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X1);
    // 0x80227C48: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227C4C: addiu       $v0, $s5, 0x8
    ctx->r2 = ADD32(ctx->r21, 0X8);
    // 0x80227C50: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80227C54: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80227C58: lb          $v1, 0x73($s4)
    ctx->r3 = MEM_B(ctx->r20, 0X73);
    // 0x80227C5C: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80227C60: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80227C64: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80227C68: lui         $v0, 0x408
    ctx->r2 = S32(0X408 << 16);
    // 0x80227C6C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
L_80227C70:
    // 0x80227C70: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80227C74: jal         0x80051E18
    // 0x80227C78: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_16;
    // 0x80227C78: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_16:
    // 0x80227C7C: lbu         $v0, 0x6($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X6);
    // 0x80227C80: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80227C84: beq         $v0, $zero, L_80227D94
    if (ctx->r2 == 0) {
        // 0x80227C88: addiu       $a0, $s4, 0x228
        ctx->r4 = ADD32(ctx->r20, 0X228);
            goto L_80227D94;
    }
    // 0x80227C88: addiu       $a0, $s4, 0x228
    ctx->r4 = ADD32(ctx->r20, 0X228);
    // 0x80227C8C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80227C90: addiu       $s3, $sp, 0x30
    ctx->r19 = ADD32(ctx->r29, 0X30);
    // 0x80227C94: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x80227C98: addiu       $v0, $zero, 0x4D0
    ctx->r2 = ADD32(0, 0X4D0);
    // 0x80227C9C: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x80227CA0: addiu       $v0, $zero, -0x20
    ctx->r2 = ADD32(0, -0X20);
    // 0x80227CA4: sh          $zero, 0x28($sp)
    MEM_H(0X28, ctx->r29) = 0;
    // 0x80227CA8: jal         0x800308E8
    // 0x80227CAC: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
    func_800308E8_BCE8(rdram, ctx);
        goto after_17;
    // 0x80227CAC: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
    after_17:
    // 0x80227CB0: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x80227CB4: lhu         $v0, 0x190($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X190);
    // 0x80227CB8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227CBC: sh          $v0, 0x0($s5)
    MEM_H(0X0, ctx->r21) = ctx->r2;
    // 0x80227CC0: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x80227CC4: lhu         $v0, 0x192($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X192);
    // 0x80227CC8: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x80227CCC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227CD0: sh          $v0, 0x2($s5)
    MEM_H(0X2, ctx->r21) = ctx->r2;
    // 0x80227CD4: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x80227CD8: lhu         $v0, 0x194($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X194);
    // 0x80227CDC: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x80227CE0: addiu       $s2, $s5, 0x18
    ctx->r18 = ADD32(ctx->r21, 0X18);
    // 0x80227CE4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227CE8: sh          $v0, 0x4($s5)
    MEM_H(0X4, ctx->r21) = ctx->r2;
    // 0x80227CEC: lbu         $v0, 0x1($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X1);
    // 0x80227CF0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227CF4: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80227CF8: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    // 0x80227CFC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80227D00: lhu         $v0, 0x4($s6)
    ctx->r2 = MEM_HU(ctx->r22, 0X4);
    // 0x80227D04: addiu       $s1, $zero, 0x80
    ctx->r17 = ADD32(0, 0X80);
    // 0x80227D08: lui         $s0, 0x508
    ctx->r16 = S32(0X508 << 16);
    // 0x80227D0C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80227D10: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80227D14: or          $v0, $v0, $s0
    ctx->r2 = ctx->r2 | ctx->r16;
    // 0x80227D18: jal         0x80051E18
    // 0x80227D1C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80051E18_2D218(rdram, ctx);
        goto after_18;
    // 0x80227D1C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_18:
    // 0x80227D20: addiu       $a0, $s4, 0x268
    ctx->r4 = ADD32(ctx->r20, 0X268);
    // 0x80227D24: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80227D28: jal         0x800308E8
    // 0x80227D2C: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    func_800308E8_BCE8(rdram, ctx);
        goto after_19;
    // 0x80227D2C: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_19:
    // 0x80227D30: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x80227D34: lhu         $v0, 0x1A0($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X1A0);
    // 0x80227D38: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227D3C: sh          $v0, 0x0($s5)
    MEM_H(0X0, ctx->r21) = ctx->r2;
    // 0x80227D40: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x80227D44: lhu         $v0, 0x1A2($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X1A2);
    // 0x80227D48: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227D4C: sh          $v0, 0x2($s5)
    MEM_H(0X2, ctx->r21) = ctx->r2;
    // 0x80227D50: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x80227D54: lhu         $v0, 0x1A4($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X1A4);
    // 0x80227D58: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227D5C: sh          $v0, 0x4($s5)
    MEM_H(0X4, ctx->r21) = ctx->r2;
    // 0x80227D60: lbu         $v0, 0x1($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X1);
    // 0x80227D64: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x80227D68: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x80227D6C: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    // 0x80227D70: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80227D74: lhu         $v0, 0x4($s6)
    ctx->r2 = MEM_HU(ctx->r22, 0X4);
    // 0x80227D78: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227D7C: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80227D80: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80227D84: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80227D88: or          $v0, $v0, $s0
    ctx->r2 = ctx->r2 | ctx->r16;
    // 0x80227D8C: jal         0x80051E18
    // 0x80227D90: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80051E18_2D218(rdram, ctx);
        goto after_20;
    // 0x80227D90: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_20:
L_80227D94:
    // 0x80227D94: lbu         $v1, 0x3($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X3);
    // 0x80227D98: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80227D9C: beq         $v1, $v0, L_80227DC4
    if (ctx->r3 == ctx->r2) {
        // 0x80227DA0: nop
    
            goto L_80227DC4;
    }
    // 0x80227DA0: nop

    // 0x80227DA4: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x80227DA8: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80227DAC: beq         $v0, $zero, L_80227DC4
    if (ctx->r2 == 0) {
        // 0x80227DB0: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_80227DC4;
    }
    // 0x80227DB0: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x80227DB4: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x80227DB8: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80227DBC: jal         0x8003B564
    // 0x80227DC0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_21;
    // 0x80227DC0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_21:
L_80227DC4:
    // 0x80227DC4: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x80227DC8: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x80227DCC: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x80227DD0: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x80227DD4: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x80227DD8: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x80227DDC: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x80227DE0: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x80227DE4: jr          $ra
    // 0x80227DE8: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    TRACE_RETURN()
    return;
    // 0x80227DE8: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_802301A8_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802301A8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802301AC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802301B0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802301B4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802301B8: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802301BC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802301C0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802301C4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802301C8: lw          $v0, 0x44EC($at)
    ctx->r2 = MEM_W(ctx->r1, 0X44EC);
    // 0x802301CC: jalr        $v0
    // 0x802301D0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802301D0: nop

    after_0:
    // 0x802301D4: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x802301D8: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
    // 0x802301DC: jal         0x80031600
    // 0x802301E0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031600_CA00(rdram, ctx);
        goto after_1;
    // 0x802301E0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802301E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802301E8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x802301EC: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802301F0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x802301F4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x802301F8: jal         0x80031DA8
    // 0x802301FC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_2;
    // 0x802301FC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_2:
    // 0x80230200: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80230204: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80230208: jr          $ra
    // 0x8023020C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8023020C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802298C0_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802298C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802298C4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802298C8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x802298CC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802298D0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802298D4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802298D8: lw          $v0, 0x4170($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4170);
    // 0x802298DC: jalr        $v0
    // 0x802298E0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802298E0: nop

    after_0:
    // 0x802298E4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802298E8: jr          $ra
    // 0x802298EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802298EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D4B0_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D4B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D4B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D4B8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D4BC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022D4C0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022D4C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022D4C8: jal         0x8009A3B4
    // 0x8022D4CC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022D4CC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022D4D0: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022D4D4: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022D4D8: jal         0x8009A3B4
    // 0x8022D4DC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022D4DC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022D4E0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022D4E4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D4E8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022D4EC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D4F0: lw          $v0, 0x4350($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4350);
    // 0x8022D4F4: jalr        $v0
    // 0x8022D4F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x8022D4F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022D4FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022D500: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D504: jr          $ra
    // 0x8022D508: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D508: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228500_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228500: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80228504: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80228508: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022850C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80228510: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80228514: lb          $v1, 0x385($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X385);
    // 0x80228518: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022851C: sb          $v0, 0x387($s0)
    MEM_B(0X387, ctx->r16) = ctx->r2;
    // 0x80228520: beq         $v1, $zero, L_8022855C
    if (ctx->r3 == 0) {
        // 0x80228524: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_8022855C;
    }
    // 0x80228524: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x80228528: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022852C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80228530: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80228534: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80228538: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022853C: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    // 0x80228540: jal         0x8004F820
    // 0x80228544: sb          $v0, 0x385($s0)
    MEM_B(0X385, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80228544: sb          $v0, 0x385($s0)
    MEM_B(0X385, ctx->r16) = ctx->r2;
    after_0:
    // 0x80228548: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022854C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80228550: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80228554: j           L_802285AC
    // 0x80228558: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
        goto L_802285AC;
    // 0x80228558: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_8022855C:
    // 0x8022855C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228560: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80228564: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80228568: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    // 0x8022856C: jal         0x80050294
    // 0x80228570: sb          $s1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r17;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80228570: sb          $s1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r17;
    after_1:
    // 0x80228574: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80228578: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022857C: bne         $v1, $v0, L_8022859C
    if (ctx->r3 != ctx->r2) {
        // 0x80228580: addiu       $v0, $zero, 0x1E0
        ctx->r2 = ADD32(0, 0X1E0);
            goto L_8022859C;
    }
    // 0x80228580: addiu       $v0, $zero, 0x1E0
    ctx->r2 = ADD32(0, 0X1E0);
    // 0x80228584: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80228588: sb          $v0, 0x387($s0)
    MEM_B(0X387, ctx->r16) = ctx->r2;
    // 0x8022858C: sb          $zero, 0x64($s0)
    MEM_B(0X64, ctx->r16) = 0;
    // 0x80228590: sb          $zero, 0x65($s0)
    MEM_B(0X65, ctx->r16) = 0;
    // 0x80228594: sb          $zero, 0x66($s0)
    MEM_B(0X66, ctx->r16) = 0;
    // 0x80228598: addiu       $v0, $zero, 0x1E0
    ctx->r2 = ADD32(0, 0X1E0);
L_8022859C:
    // 0x8022859C: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x802285A0: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x802285A4: sb          $s1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r17;
    // 0x802285A8: sh          $v0, 0x382($s0)
    MEM_H(0X382, ctx->r16) = ctx->r2;
L_802285AC:
    // 0x802285AC: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x802285B0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802285B4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802285B8: jr          $ra
    // 0x802285BC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802285BC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80232A30_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232A30: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80232A34: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80232A38: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80232A3C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232A40: addiu       $s0, $zero, 0x1F
    ctx->r16 = ADD32(0, 0X1F);
    // 0x80232A44: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80232A48: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x80232A4C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
L_80232A50:
    // 0x80232A50: jal         0x8004F374
    // 0x80232A54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F374_2A774(rdram, ctx);
        goto after_0;
    // 0x80232A54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80232A58: beql        $v0, $zero, L_80232A6C
    if (ctx->r2 == 0) {
        // 0x80232A5C: addiu       $s0, $s0, -0x1
        ctx->r16 = ADD32(ctx->r16, -0X1);
            goto L_80232A6C;
    }
    goto skip_0;
    // 0x80232A5C: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    skip_0:
    // 0x80232A60: sb          $s1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r17;
    // 0x80232A64: j           L_80232A74
    // 0x80232A68: sb          $zero, 0x2($v0)
    MEM_B(0X2, ctx->r2) = 0;
        goto L_80232A74;
    // 0x80232A68: sb          $zero, 0x2($v0)
    MEM_B(0X2, ctx->r2) = 0;
L_80232A6C:
    // 0x80232A6C: bgez        $s0, L_80232A50
    if (SIGNED(ctx->r16) >= 0) {
        // 0x80232A70: nop
    
            goto L_80232A50;
    }
    // 0x80232A70: nop

L_80232A74:
    // 0x80232A74: jal         0x8004F62C
    // 0x80232A78: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8004F62C_2AA2C(rdram, ctx);
        goto after_1;
    // 0x80232A78: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x80232A7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80232A80: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80232A84: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80232A88: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232A8C: jr          $ra
    // 0x80232A90: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80232A90: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80232A94: nop

    // 0x80232A98: nop

    // 0x80232A9C: nop

;}
RECOMP_FUNC void func_8022CE2C_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CE2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022CE30: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022CE34: jal         0x8004F684
    // 0x8022CE38: nop

    func_8004F684_2AA84(rdram, ctx);
        goto after_0;
    // 0x8022CE38: nop

    after_0:
    // 0x8022CE3C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022CE40: jr          $ra
    // 0x8022CE44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022CE44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A2C0_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A2C0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022A2C4: lhu         $v0, 0x4320($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4320);
    // 0x8022A2C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A2CC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022A2D0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022A2D4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022A2D8: jal         0x8004F418
    // 0x8022A2DC: sh          $v0, 0x4320($at)
    MEM_H(0X4320, ctx->r1) = ctx->r2;
    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8022A2DC: sh          $v0, 0x4320($at)
    MEM_H(0X4320, ctx->r1) = ctx->r2;
    after_0:
    // 0x8022A2E0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022A2E4: jr          $ra
    // 0x8022A2E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A2E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022A2EC: nop

;}
RECOMP_FUNC void func_8022FE54_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FE54: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8022FE58: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8022FE5C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022FE60: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8022FE64: addiu       $s0, $sp, 0x28
    ctx->r16 = ADD32(ctx->r29, 0X28);
    // 0x8022FE68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FE6C: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    // 0x8022FE70: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022FE74: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8022FE78: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x8022FE7C: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x8022FE80: jal         0x8009A3B4
    // 0x8022FE84: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022FE84: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    after_0:
    // 0x8022FE88: lui         $a3, 0x400
    ctx->r7 = S32(0X400 << 16);
    // 0x8022FE8C: ori         $a3, $a3, 0x1
    ctx->r7 = ctx->r7 | 0X1;
    // 0x8022FE90: lhu         $v0, 0x2A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X2A);
    // 0x8022FE94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FE98: addiu       $a1, $zero, 0x96
    ctx->r5 = ADD32(0, 0X96);
    // 0x8022FE9C: addiu       $v0, $v0, -0x96
    ctx->r2 = ADD32(ctx->r2, -0X96);
    // 0x8022FEA0: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x8022FEA4: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x8022FEA8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022FEAC: addiu       $v0, $s1, 0x30
    ctx->r2 = ADD32(ctx->r17, 0X30);
    // 0x8022FEB0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022FEB4: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022FEB8: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x8022FEBC: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022FEC0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8022FEC4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8022FEC8: jal         0x80051E18
    // 0x8022FECC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_1;
    // 0x8022FECC: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_1:
    // 0x8022FED0: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8022FED4: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022FED8: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x8022FEDC: bne         $v0, $zero, L_8022FF3C
    if (ctx->r2 != 0) {
        // 0x8022FEE0: addiu       $s4, $s1, 0x2C
        ctx->r20 = ADD32(ctx->r17, 0X2C);
            goto L_8022FF3C;
    }
    // 0x8022FEE0: addiu       $s4, $s1, 0x2C
    ctx->r20 = ADD32(ctx->r17, 0X2C);
    // 0x8022FEE4: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022FEE8: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x8022FEEC: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x8022FEF0: bne         $v1, $v0, L_8022FEFC
    if (ctx->r3 != ctx->r2) {
        // 0x8022FEF4: addiu       $a0, $zero, 0x605
        ctx->r4 = ADD32(0, 0X605);
            goto L_8022FEFC;
    }
    // 0x8022FEF4: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
    // 0x8022FEF8: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
L_8022FEFC:
    // 0x8022FEFC: jal         0x8006033C
    // 0x8022FF00: nop

    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x8022FF00: nop

    after_2:
    // 0x8022FF04: beq         $v0, $zero, L_8022FF3C
    if (ctx->r2 == 0) {
        // 0x8022FF08: nop
    
            goto L_8022FF3C;
    }
    // 0x8022FF08: nop

    // 0x8022FF0C: jal         0x80061724
    // 0x8022FF10: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_3;
    // 0x8022FF10: nop

    after_3:
    // 0x8022FF14: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022FF18: jal         0x800616FC
    // 0x8022FF1C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_4;
    // 0x8022FF1C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_4:
    // 0x8022FF20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022FF24: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8022FF28: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022FF2C: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x8022FF30: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x8022FF34: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022FF38: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
L_8022FF3C:
    // 0x8022FF3C: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x8022FF40: addiu       $s0, $s0, -0x3BC8
    ctx->r16 = ADD32(ctx->r16, -0X3BC8);
    // 0x8022FF44: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x8022FF48: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x8022FF4C: xori        $v0, $v0, 0xE
    ctx->r2 = ctx->r2 ^ 0XE;
    // 0x8022FF50: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8022FF54: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022FF58: andi        $v0, $v0, 0x60B
    ctx->r2 = ctx->r2 & 0X60B;
    // 0x8022FF5C: ori         $a0, $v0, 0x608
    ctx->r4 = ctx->r2 | 0X608;
    // 0x8022FF60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022FF64: bne         $v1, $v0, L_80230070
    if (ctx->r3 != ctx->r2) {
        // 0x8022FF68: addiu       $s3, $zero, 0xE
        ctx->r19 = ADD32(0, 0XE);
            goto L_80230070;
    }
    // 0x8022FF68: addiu       $s3, $zero, 0xE
    ctx->r19 = ADD32(0, 0XE);
    // 0x8022FF6C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022FF70: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022FF74: bltz        $v0, L_80230070
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022FF78: nop
    
            goto L_80230070;
    }
    // 0x8022FF78: nop

    // 0x8022FF7C: jal         0x8006033C
    // 0x8022FF80: nop

    func_8006033C_3B73C(rdram, ctx);
        goto after_5;
    // 0x8022FF80: nop

    after_5:
    // 0x8022FF84: beq         $v0, $zero, L_8023003C
    if (ctx->r2 == 0) {
        // 0x8022FF88: nop
    
            goto L_8023003C;
    }
    // 0x8022FF88: nop

    // 0x8022FF8C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022FF90: lbu         $v0, 0x3FF3($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3FF3);
    // 0x8022FF94: bne         $v0, $zero, L_80230018
    if (ctx->r2 != 0) {
        // 0x8022FF98: nop
    
            goto L_80230018;
    }
    // 0x8022FF98: nop

    // 0x8022FF9C: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x8022FFA0: bne         $v0, $zero, L_8022FFBC
    if (ctx->r2 != 0) {
        // 0x8022FFA4: addiu       $a0, $zero, 0x17A
        ctx->r4 = ADD32(0, 0X17A);
            goto L_8022FFBC;
    }
    // 0x8022FFA4: addiu       $a0, $zero, 0x17A
    ctx->r4 = ADD32(0, 0X17A);
    // 0x8022FFA8: jal         0x8002A33C
    // 0x8022FFAC: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_6;
    // 0x8022FFAC: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    after_6:
    // 0x8022FFB0: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x8022FFB4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022FFB8: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
L_8022FFBC:
    // 0x8022FFBC: lw          $v0, 0x0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X0);
    // 0x8022FFC0: beq         $v0, $zero, L_8022FFD0
    if (ctx->r2 == 0) {
        // 0x8022FFC4: addiu       $v0, $v0, -0x40
        ctx->r2 = ADD32(ctx->r2, -0X40);
            goto L_8022FFD0;
    }
    // 0x8022FFC4: addiu       $v0, $v0, -0x40
    ctx->r2 = ADD32(ctx->r2, -0X40);
    // 0x8022FFC8: j           L_80230070
    // 0x8022FFCC: sw          $v0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r2;
        goto L_80230070;
    // 0x8022FFCC: sw          $v0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r2;
L_8022FFD0:
    // 0x8022FFD0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022FFD4: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x8022FFD8: lbu         $v0, 0xBD($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XBD);
    // 0x8022FFDC: lb          $v1, 0x0($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X0);
    // 0x8022FFE0: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x8022FFE4: sb          $v0, 0xBD($s2)
    MEM_B(0XBD, ctx->r18) = ctx->r2;
    // 0x8022FFE8: bne         $v1, $s3, L_8022FFF4
    if (ctx->r3 != ctx->r19) {
        // 0x8022FFEC: addiu       $a0, $zero, 0x27
        ctx->r4 = ADD32(0, 0X27);
            goto L_8022FFF4;
    }
    // 0x8022FFEC: addiu       $a0, $zero, 0x27
    ctx->r4 = ADD32(0, 0X27);
    // 0x8022FFF0: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
L_8022FFF4:
    // 0x8022FFF4: jal         0x8006036C
    // 0x8022FFF8: nop

    func_8006036C_3B76C(rdram, ctx);
        goto after_7;
    // 0x8022FFF8: nop

    after_7:
    // 0x8022FFFC: lw          $v1, 0x4C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4C);
    // 0x80230000: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x80230004: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80230008: jal         0x80036E48
    // 0x8023000C: sb          $v0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r2;
    func_80036E48_12248(rdram, ctx);
        goto after_8;
    // 0x8023000C: sb          $v0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r2;
    after_8:
    // 0x80230010: j           L_80230070
    // 0x80230014: nop

        goto L_80230070;
    // 0x80230014: nop

L_80230018:
    // 0x80230018: lbu         $v0, 0xBD($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XBD);
    // 0x8023001C: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x80230020: sb          $v0, 0xBD($s2)
    MEM_B(0XBD, ctx->r18) = ctx->r2;
    // 0x80230024: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    // 0x80230028: lb          $v1, 0x0($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X0);
    // 0x8023002C: bne         $v1, $s3, L_80230060
    if (ctx->r3 != ctx->r19) {
        // 0x80230030: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_80230060;
    }
    // 0x80230030: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80230034: j           L_80230068
    // 0x80230038: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
        goto L_80230068;
    // 0x80230038: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
L_8023003C:
    // 0x8023003C: lbu         $v0, 0xBD($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XBD);
    // 0x80230040: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x80230044: sb          $v0, 0xBD($s2)
    MEM_B(0XBD, ctx->r18) = ctx->r2;
    // 0x80230048: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    // 0x8023004C: lb          $v1, 0x0($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X0);
    // 0x80230050: bne         $v1, $s3, L_80230060
    if (ctx->r3 != ctx->r19) {
        // 0x80230054: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_80230060;
    }
    // 0x80230054: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80230058: j           L_80230068
    // 0x8023005C: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
        goto L_80230068;
    // 0x8023005C: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
L_80230060:
    // 0x80230060: bne         $v1, $v0, L_80230070
    if (ctx->r3 != ctx->r2) {
        // 0x80230064: addiu       $a0, $zero, 0x605
        ctx->r4 = ADD32(0, 0X605);
            goto L_80230070;
    }
    // 0x80230064: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
L_80230068:
    // 0x80230068: jal         0x80060590
    // 0x8023006C: nop

    func_80060590_3B990(rdram, ctx);
        goto after_9;
    // 0x8023006C: nop

    after_9:
L_80230070:
    // 0x80230070: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80230074: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x80230078: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x8023007C: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80230080: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80230084: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80230088: jr          $ra
    // 0x8023008C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x8023008C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8022D7F0_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D7F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D7F4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022D7F8: jal         0x8004F4F8
    // 0x8022D7FC: nop

    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_0;
    // 0x8022D7FC: nop

    after_0:
    // 0x8022D800: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022D804: jr          $ra
    // 0x8022D808: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D808: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022D80C: nop

;}
RECOMP_FUNC void func_80229144_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229144: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80229148: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022914C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229150: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80229154: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x80229158: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8022915C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80229160: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80229164: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80229168: bne         $v1, $v0, L_802291F8
    if (ctx->r3 != ctx->r2) {
        // 0x8022916C: addiu       $s1, $s0, 0xC4
        ctx->r17 = ADD32(ctx->r16, 0XC4);
            goto L_802291F8;
    }
    // 0x8022916C: addiu       $s1, $s0, 0xC4
    ctx->r17 = ADD32(ctx->r16, 0XC4);
    // 0x80229170: lbu         $v0, 0x64($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X64);
    // 0x80229174: lbu         $v1, 0x65($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X65);
    // 0x80229178: lbu         $a0, 0x66($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X66);
    // 0x8022917C: lbu         $a1, 0x66($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X66);
    // 0x80229180: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x80229184: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x80229188: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x8022918C: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x80229190: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80229194: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    // 0x80229198: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x8022919C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x802291A0: lhu         $a0, 0x15E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X15E);
    // 0x802291A4: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x802291A8: sb          $a1, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r5;
    // 0x802291AC: lb          $v1, 0x66($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X66);
    // 0x802291B0: addiu       $v0, $zero, -0x8000
    ctx->r2 = ADD32(0, -0X8000);
    // 0x802291B4: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x802291B8: slti        $v1, $v1, 0x10
    ctx->r3 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x802291BC: bne         $v1, $zero, L_802291F8
    if (ctx->r3 != 0) {
        // 0x802291C0: sh          $v0, 0x15E($s0)
        MEM_H(0X15E, ctx->r16) = ctx->r2;
            goto L_802291F8;
    }
    // 0x802291C0: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x802291C4: lb          $v1, 0x64($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X64);
    // 0x802291C8: andi        $v0, $v0, 0x7FFF
    ctx->r2 = ctx->r2 & 0X7FFF;
    // 0x802291CC: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x802291D0: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x802291D4: sb          $v0, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r2;
    // 0x802291D8: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x802291DC: beq         $v1, $v0, L_802291F8
    if (ctx->r3 == ctx->r2) {
        // 0x802291E0: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_802291F8;
    }
    // 0x802291E0: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x802291E4: lbu         $v0, 0x65($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X65);
    // 0x802291E8: addiu       $v1, $a0, 0x4
    ctx->r3 = ADD32(ctx->r4, 0X4);
    // 0x802291EC: sb          $v1, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r3;
    // 0x802291F0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x802291F4: sb          $v0, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r2;
L_802291F8:
    // 0x802291F8: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802291FC: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80229200: beq         $v0, $zero, L_8022934C
    if (ctx->r2 == 0) {
        // 0x80229204: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022934C;
    }
    // 0x80229204: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80229208: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022920C: addu        $at, $at, $v0
    gpr jr_addend_80229214 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229210: lw          $v0, 0x4BC0($at)
    ctx->r2 = ADD32(ctx->r1, 0X4BC0);
    // 0x80229214: jr          $v0
    // 0x80229218: nop

    switch (jr_addend_80229214 >> 2) {
        case 0: goto L_8022921C; break;
        case 1: goto L_8022923C; break;
        case 2: goto L_80229274; break;
        case 3: goto L_802292A4; break;
        case 4: goto L_802292A4; break;
        default: switch_error(__func__, 0x80229214, 0x80234BC0);
    }
    // 0x80229218: nop

L_8022921C:
    // 0x8022921C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80229220: lh          $a3, 0x44($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X44);
    // 0x80229224: lh          $v0, 0x46($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X46);
    // 0x80229228: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022922C: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80229230: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80229234: j           L_80229254
    // 0x80229238: addiu       $a2, $a2, 0x800
    ctx->r6 = ADD32(ctx->r6, 0X800);
        goto L_80229254;
    // 0x80229238: addiu       $a2, $a2, 0x800
    ctx->r6 = ADD32(ctx->r6, 0X800);
L_8022923C:
    // 0x8022923C: lhu         $a2, 0x56($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X56);
    // 0x80229240: lh          $a3, 0x44($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X44);
    // 0x80229244: lh          $v0, 0x46($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X46);
    // 0x80229248: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022924C: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80229250: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
L_80229254:
    // 0x80229254: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    // 0x80229258: jal         0x8004DBA0
    // 0x8022925C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_0;
    // 0x8022925C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x80229260: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x80229264: lhu         $v1, 0x4E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4E);
    // 0x80229268: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022926C: j           L_8022934C
    // 0x80229270: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
        goto L_8022934C;
    // 0x80229270: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_80229274:
    // 0x80229274: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x80229278: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022927C: bne         $v1, $v0, L_8022934C
    if (ctx->r3 != ctx->r2) {
        // 0x80229280: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022934C;
    }
    // 0x80229280: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229284: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x80229288: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022928C: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80229290: jal         0x80050294
    // 0x80229294: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80229294: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_1:
    // 0x80229298: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022929C: j           L_8022934C
    // 0x802292A0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8022934C;
    // 0x802292A0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802292A4:
    // 0x802292A4: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x802292A8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802292AC: bne         $v1, $v0, L_80229318
    if (ctx->r3 != ctx->r2) {
        // 0x802292B0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80229318;
    }
    // 0x802292B0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802292B4: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x802292B8: bne         $v1, $v0, L_802292D8
    if (ctx->r3 != ctx->r2) {
        // 0x802292BC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802292D8;
    }
    // 0x802292BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802292C0: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x802292C4: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x802292C8: beq         $v0, $zero, L_802292D8
    if (ctx->r2 == 0) {
        // 0x802292CC: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_802292D8;
    }
    // 0x802292CC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802292D0: j           L_802292F0
    // 0x802292D4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_802292F0;
    // 0x802292D4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_802292D8:
    // 0x802292D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802292DC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802292E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802292E4: jal         0x80050294
    // 0x802292E8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x802292E8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_2:
    // 0x802292EC: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_802292F0:
    // 0x802292F0: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x802292F4: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x802292F8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x802292FC: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x80229300: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x80229304: sb          $v0, 0x3D($s2)
    MEM_B(0X3D, ctx->r18) = ctx->r2;
    // 0x80229308: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8022930C: sb          $zero, 0x3C($s2)
    MEM_B(0X3C, ctx->r18) = 0;
    // 0x80229310: sb          $zero, 0x6($s1)
    MEM_B(0X6, ctx->r17) = 0;
    // 0x80229314: sb          $v0, 0x395($s0)
    MEM_B(0X395, ctx->r16) = ctx->r2;
L_80229318:
    // 0x80229318: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022931C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80229320: bne         $v1, $v0, L_8022934C
    if (ctx->r3 != ctx->r2) {
        // 0x80229324: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022934C;
    }
    // 0x80229324: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80229328: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022932C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80229330: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80229334: jal         0x8004F820
    // 0x80229338: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x80229338: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    after_3:
    // 0x8022933C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80229340: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80229344: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80229348: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_8022934C:
    // 0x8022934C: jal         0x8005044C
    // 0x80229350: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_4;
    // 0x80229350: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80229354: jal         0x80040F30
    // 0x80229358: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_5;
    // 0x80229358: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8022935C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229360: jal         0x8003E934
    // 0x80229364: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_6;
    // 0x80229364: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    after_6:
    // 0x80229368: lw          $v1, 0x4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4);
    // 0x8022936C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80229370: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x80229374: andi        $v1, $v1, 0x3000
    ctx->r3 = ctx->r3 & 0X3000;
    // 0x80229378: bne         $v1, $v0, L_802293D4
    if (ctx->r3 != ctx->r2) {
        // 0x8022937C: nop
    
            goto L_802293D4;
    }
    // 0x8022937C: nop

    // 0x80229380: lh          $v0, 0x16($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X16);
    // 0x80229384: bne         $a0, $v0, L_802293D4
    if (ctx->r4 != ctx->r2) {
        // 0x80229388: nop
    
            goto L_802293D4;
    }
    // 0x80229388: nop

    // 0x8022938C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80229390: bne         $v0, $zero, L_802293AC
    if (ctx->r2 != 0) {
        // 0x80229394: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_802293AC;
    }
    // 0x80229394: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80229398: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8022939C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802293A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802293A4: j           L_802293B8
    // 0x802293A8: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
        goto L_802293B8;
    // 0x802293A8: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
L_802293AC:
    // 0x802293AC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802293B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802293B4: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
L_802293B8:
    // 0x802293B8: jal         0x80050294
    // 0x802293BC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_7;
    // 0x802293BC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x802293C0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802293C4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802293C8: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x802293CC: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x802293D0: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
L_802293D4:
    // 0x802293D4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802293D8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x802293DC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x802293E0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802293E4: jr          $ra
    // 0x802293E8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x802293E8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_802296F8_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802296F8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802296FC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229700: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229704: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80229708: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022970C: lw          $v0, 0xC4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC4);
    // 0x80229710: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x80229714: bne         $v0, $zero, L_80229730
    if (ctx->r2 != 0) {
        // 0x80229718: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_80229730;
    }
    // 0x80229718: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022971C: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x80229720: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x80229724: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80229728: beq         $v0, $zero, L_80229784
    if (ctx->r2 == 0) {
        // 0x8022972C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80229784;
    }
    // 0x8022972C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80229730:
    // 0x80229730: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80229734: lh          $v1, 0x56($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X56);
    // 0x80229738: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022973C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80229740: sh          $v0, 0x380($s0)
    MEM_H(0X380, ctx->r16) = ctx->r2;
    // 0x80229744: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80229748: bne         $v0, $zero, L_80229754
    if (ctx->r2 != 0) {
        // 0x8022974C: addiu       $v0, $zero, 0xE
        ctx->r2 = ADD32(0, 0XE);
            goto L_80229754;
    }
    // 0x8022974C: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x80229750: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
L_80229754:
    // 0x80229754: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80229758: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022975C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229760: jal         0x80050294
    // 0x80229764: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80229764: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80229768: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022976C: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x80229770: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x80229774: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80229778: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022977C: j           L_80229794
    // 0x80229780: sh          $v0, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r2;
        goto L_80229794;
    // 0x80229780: sh          $v0, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r2;
L_80229784:
    // 0x80229784: lh          $a1, 0x44($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X44);
    // 0x80229788: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022978C: jal         0x8004DA90
    // 0x80229790: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x80229790: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
L_80229794:
    // 0x80229794: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80229798: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022979C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802297A0: jr          $ra
    // 0x802297A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802297A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80229600_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229600: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x80229604: lb          $v0, 0xE($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XE);
    // 0x80229608: addiu       $a3, $a0, 0x348
    ctx->r7 = ADD32(ctx->r4, 0X348);
    // 0x8022960C: bne         $v0, $zero, L_80229634
    if (ctx->r2 != 0) {
        // 0x80229610: addiu       $a2, $a0, 0x64
        ctx->r6 = ADD32(ctx->r4, 0X64);
            goto L_80229634;
    }
    // 0x80229610: addiu       $a2, $a0, 0x64
    ctx->r6 = ADD32(ctx->r4, 0X64);
    // 0x80229614: lh          $v1, 0x56($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X56);
    // 0x80229618: lh          $v0, 0x380($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X380);
    // 0x8022961C: addiu       $v0, $v0, -0x400
    ctx->r2 = ADD32(ctx->r2, -0X400);
    // 0x80229620: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80229624: beq         $v1, $v0, L_8022964C
    if (ctx->r3 == ctx->r2) {
        // 0x80229628: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_8022964C;
    }
    // 0x80229628: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x8022962C: j           L_80229664
    // 0x80229630: addiu       $v0, $a1, -0x40
    ctx->r2 = ADD32(ctx->r5, -0X40);
        goto L_80229664;
    // 0x80229630: addiu       $v0, $a1, -0x40
    ctx->r2 = ADD32(ctx->r5, -0X40);
L_80229634:
    // 0x80229634: lh          $v1, 0x56($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X56);
    // 0x80229638: lh          $v0, 0x380($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X380);
    // 0x8022963C: addiu       $v0, $v0, 0x400
    ctx->r2 = ADD32(ctx->r2, 0X400);
    // 0x80229640: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80229644: bne         $v1, $v0, L_80229660
    if (ctx->r3 != ctx->r2) {
        // 0x80229648: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_80229660;
    }
    // 0x80229648: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
L_8022964C:
    // 0x8022964C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80229650: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x80229654: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80229658: j           L_80229668
    // 0x8022965C: sb          $v0, 0x385($a0)
    MEM_B(0X385, ctx->r4) = ctx->r2;
        goto L_80229668;
    // 0x8022965C: sb          $v0, 0x385($a0)
    MEM_B(0X385, ctx->r4) = ctx->r2;
L_80229660:
    // 0x80229660: addiu       $v0, $a1, 0x40
    ctx->r2 = ADD32(ctx->r5, 0X40);
L_80229664:
    // 0x80229664: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
L_80229668:
    // 0x80229668: lhu         $v0, 0x56($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X56);
    // 0x8022966C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80229670: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    // 0x80229674: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229678: sb          $v0, 0x3F($a3)
    MEM_B(0X3F, ctx->r7) = ctx->r2;
    // 0x8022967C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80229680: sb          $v0, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r2;
    // 0x80229684: sb          $v0, 0x1($a2)
    MEM_B(0X1, ctx->r6) = ctx->r2;
    // 0x80229688: sb          $v0, 0x2($a2)
    MEM_B(0X2, ctx->r6) = ctx->r2;
    // 0x8022968C: jr          $ra
    // 0x80229690: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    TRACE_RETURN()
    return;
    // 0x80229690: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_80228AF0_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228AF0: lbu         $v0, 0x395($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X395);
    // 0x80228AF4: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x80228AF8: sb          $v0, 0x395($a0)
    MEM_B(0X395, ctx->r4) = ctx->r2;
    // 0x80228AFC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80228B00: sltiu       $v0, $v0, 0x21
    ctx->r2 = ctx->r2 < 0X21 ? 1 : 0;
    // 0x80228B04: beq         $v0, $zero, L_80228B1C
    if (ctx->r2 == 0) {
        // 0x80228B08: addiu       $v1, $zero, 0x4
        ctx->r3 = ADD32(0, 0X4);
            goto L_80228B1C;
    }
    // 0x80228B08: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x80228B0C: lbu         $v0, 0xCA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XCA);
    // 0x80228B10: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
    // 0x80228B14: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80228B18: sb          $v0, 0xCA($a0)
    MEM_B(0XCA, ctx->r4) = ctx->r2;
L_80228B1C:
    // 0x80228B1C: jr          $ra
    // 0x80228B20: nop

    TRACE_RETURN()
    return;
    // 0x80228B20: nop

;}
RECOMP_FUNC void func_80229E04_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229E04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229E08: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229E0C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229E10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229E14: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80229E18: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x80229E1C: jal         0x8004DA90
    // 0x80229E20: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80229E20: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    after_0:
    // 0x80229E24: jal         0x8022A298
    // 0x80229E28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022A298_ovl16(rdram, ctx);
        goto after_1;
    // 0x80229E28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80229E2C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80229E30: bne         $v0, $zero, L_80229E48
    if (ctx->r2 != 0) {
        // 0x80229E34: nop
    
            goto L_80229E48;
    }
    // 0x80229E34: nop

    // 0x80229E38: jal         0x80229E60
    // 0x80229E3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80229E60_ovl16(rdram, ctx);
        goto after_2;
    // 0x80229E3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80229E40: j           L_80229E50
    // 0x80229E44: nop

        goto L_80229E50;
    // 0x80229E44: nop

L_80229E48:
    // 0x80229E48: jal         0x80229ED0
    // 0x80229E4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80229ED0_ovl16(rdram, ctx);
        goto after_3;
    // 0x80229E4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_80229E50:
    // 0x80229E50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80229E54: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229E58: jr          $ra
    // 0x80229E5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229E5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229A04_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229A04: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80229A08: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229A0C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229A10: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80229A14: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80229A18: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80229A1C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80229A20: jal         0x8009A3B4
    // 0x80229A24: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80229A24: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x80229A28: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80229A2C: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80229A30: jal         0x8009A3B4
    // 0x80229A34: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80229A34: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80229A38: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80229A3C: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80229A40: jal         0x8009A3B4
    // 0x80229A44: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80229A44: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80229A48: lui         $v1, 0x5F
    ctx->r3 = S32(0X5F << 16);
    // 0x80229A4C: lbu         $a0, 0xAC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XAC);
    // 0x80229A50: lw          $a1, 0x80($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X80);
    // 0x80229A54: ori         $v1, $v1, 0x5E0F
    ctx->r3 = ctx->r3 | 0X5E0F;
    // 0x80229A58: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80229A5C: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80229A60: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80229A64: sltu        $v1, $v1, $a1
    ctx->r3 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x80229A68: beq         $v1, $zero, L_80229A8C
    if (ctx->r3 == 0) {
        // 0x80229A6C: sb          $a0, 0xAD($s0)
        MEM_B(0XAD, ctx->r16) = ctx->r4;
            goto L_80229A8C;
    }
    // 0x80229A6C: sb          $a0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r4;
    // 0x80229A70: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x80229A74: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80229A78: bne         $v0, $zero, L_80229A8C
    if (ctx->r2 != 0) {
        // 0x80229A7C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80229A8C;
    }
    // 0x80229A7C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80229A80: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80229A84: j           L_80229B34
    // 0x80229A88: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
        goto L_80229B34;
    // 0x80229A88: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_80229A8C:
    // 0x80229A8C: jal         0x80229B48
    // 0x80229A90: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80229B48_ovl16(rdram, ctx);
        goto after_3;
    // 0x80229A90: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80229A94: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80229A98: jal         0x800540D0
    // 0x80229A9C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_800540D0_2F4D0(rdram, ctx);
        goto after_4;
    // 0x80229A9C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80229AA0: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
    // 0x80229AA4: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80229AA8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80229AAC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80229AB0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229AB4: lw          $v0, 0x4188($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4188);
    // 0x80229AB8: jalr        $v0
    // 0x80229ABC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x80229ABC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80229AC0: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80229AC4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80229AC8: beq         $v1, $v0, L_80229B34
    if (ctx->r3 == ctx->r2) {
        // 0x80229ACC: nop
    
            goto L_80229B34;
    }
    // 0x80229ACC: nop

    // 0x80229AD0: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80229AD4: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x80229AD8: beq         $a1, $v0, L_80229AF0
    if (ctx->r5 == ctx->r2) {
        // 0x80229ADC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80229AF0;
    }
    // 0x80229ADC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229AE0: jal         0x80050294
    // 0x80229AE4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_6;
    // 0x80229AE4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_6:
    // 0x80229AE8: j           L_80229AF8
    // 0x80229AEC: nop

        goto L_80229AF8;
    // 0x80229AEC: nop

L_80229AF0:
    // 0x80229AF0: jal         0x8005044C
    // 0x80229AF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_7;
    // 0x80229AF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
L_80229AF8:
    // 0x80229AF8: jal         0x80229BE8
    // 0x80229AFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80229BE8_ovl16(rdram, ctx);
        goto after_8;
    // 0x80229AFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x80229B00: lh          $v0, 0x6E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6E);
    // 0x80229B04: beq         $v0, $zero, L_80229B14
    if (ctx->r2 == 0) {
        // 0x80229B08: nop
    
            goto L_80229B14;
    }
    // 0x80229B08: nop

    // 0x80229B0C: jal         0x80229C40
    // 0x80229B10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80229C40_ovl16(rdram, ctx);
        goto after_9;
    // 0x80229B10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
L_80229B14:
    // 0x80229B14: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80229B18: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80229B1C: beq         $v0, $zero, L_80229B34
    if (ctx->r2 == 0) {
        // 0x80229B20: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80229B34;
    }
    // 0x80229B20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229B24: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80229B28: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80229B2C: jal         0x8003B564
    // 0x80229B30: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_10;
    // 0x80229B30: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_10:
L_80229B34:
    // 0x80229B34: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80229B38: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229B3C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229B40: jr          $ra
    // 0x80229B44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80229B44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022B1E0_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B1E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B1E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B1E8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B1EC: addiu       $a0, $zero, 0x15C
    ctx->r4 = ADD32(0, 0X15C);
    // 0x8022B1F0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022B1F4: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
    // 0x8022B1F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B1FC: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022B200: addiu       $v0, $zero, -0x200
    ctx->r2 = ADD32(0, -0X200);
    // 0x8022B204: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8022B208: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x8022B20C: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    // 0x8022B210: addiu       $v0, $zero, 0xE80
    ctx->r2 = ADD32(0, 0XE80);
    // 0x8022B214: jal         0x8002A33C
    // 0x8022B218: sh          $v0, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8022B218: sh          $v0, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022B21C: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022B220: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8022B224: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x8022B228: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B22C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B230: jal         0x8004DA90
    // 0x8022B234: sb          $v0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x8022B234: sb          $v0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022B238: lhu         $v1, 0x46($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X46);
    // 0x8022B23C: lhu         $a0, 0x4E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X4E);
    // 0x8022B240: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8022B244: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x8022B248: lw          $a1, -0x14F0($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X14F0);
    // 0x8022B24C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022B250: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022B254: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8022B258: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    // 0x8022B25C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022B260: lbu         $v1, 0xA($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XA);
    // 0x8022B264: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022B268: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022B26C: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022B270: sh          $v1, 0x10C($s0)
    MEM_H(0X10C, ctx->r16) = ctx->r3;
    // 0x8022B274: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B278: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B27C: jr          $ra
    // 0x8022B280: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B280: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232700_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232700: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80232704: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232708: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023270C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80232710: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80232714: lbu         $s1, 0xA($s0)
    ctx->r17 = MEM_BU(ctx->r16, 0XA);
    // 0x80232718: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023271C: beq         $s1, $v0, L_802327B0
    if (ctx->r17 == ctx->r2) {
        // 0x80232720: slti        $v0, $s1, 0x2
        ctx->r2 = SIGNED(ctx->r17) < 0X2 ? 1 : 0;
            goto L_802327B0;
    }
    // 0x80232720: slti        $v0, $s1, 0x2
    ctx->r2 = SIGNED(ctx->r17) < 0X2 ? 1 : 0;
    // 0x80232724: beql        $v0, $zero, L_8023273C
    if (ctx->r2 == 0) {
        // 0x80232728: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023273C;
    }
    goto skip_0;
    // 0x80232728: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8023272C: beq         $s1, $zero, L_8023274C
    if (ctx->r17 == 0) {
        // 0x80232730: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_8023274C;
    }
    // 0x80232730: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80232734: j           L_80232838
    // 0x80232738: nop

        goto L_80232838;
    // 0x80232738: nop

L_8023273C:
    // 0x8023273C: beq         $s1, $v0, L_80232808
    if (ctx->r17 == ctx->r2) {
        // 0x80232740: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_80232808;
    }
    // 0x80232740: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80232744: j           L_80232838
    // 0x80232748: nop

        goto L_80232838;
    // 0x80232748: nop

L_8023274C:
    // 0x8023274C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80232750: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80232754: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80232758: bne         $v0, $zero, L_80232838
    if (ctx->r2 != 0) {
        // 0x8023275C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80232838;
    }
    // 0x8023275C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232760: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80232764: lhu         $v0, 0x49C4($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X49C4);
    // 0x80232768: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x8023276C: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x80232770: addiu       $a1, $a1, 0x4B00
    ctx->r5 = ADD32(ctx->r5, 0X4B00);
    // 0x80232774: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80232778: sra         $v0, $v0, 25
    ctx->r2 = S32(SIGNED(ctx->r2) >> 25);
    // 0x8023277C: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80232780: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80232784: lhu         $v0, 0x49C8($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X49C8);
    // 0x80232788: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8023278C: addu        $a1, $v1, $a1
    ctx->r5 = ADD32(ctx->r3, ctx->r5);
    // 0x80232790: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80232794: sra         $v0, $v0, 25
    ctx->r2 = S32(SIGNED(ctx->r2) >> 25);
    // 0x80232798: jal         0x80232970
    // 0x8023279C: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    func_80232970_ovl16(rdram, ctx);
        goto after_0;
    // 0x8023279C: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    after_0:
    // 0x802327A0: bne         $v0, $zero, L_802327F8
    if (ctx->r2 != 0) {
        // 0x802327A4: nop
    
            goto L_802327F8;
    }
    // 0x802327A4: nop

    // 0x802327A8: j           L_80232834
    // 0x802327AC: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
        goto L_80232834;
    // 0x802327AC: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_802327B0:
    // 0x802327B0: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x802327B4: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x802327B8: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x802327BC: lbu         $a1, 0x4B30($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X4B30);
    // 0x802327C0: jal         0x800616FC
    // 0x802327C4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_1;
    // 0x802327C4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_1:
    // 0x802327C8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802327CC: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x802327D0: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x802327D4: addiu       $a0, $a0, -0x3AA4
    ctx->r4 = ADD32(ctx->r4, -0X3AA4);
    // 0x802327D8: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x802327DC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802327E0: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
    // 0x802327E4: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x802327E8: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    // 0x802327EC: sllv        $v0, $s1, $v0
    ctx->r2 = S32(ctx->r17 << (ctx->r2 & 31));
    // 0x802327F0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x802327F4: sh          $v1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r3;
L_802327F8:
    // 0x802327F8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802327FC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232800: j           L_80232838
    // 0x80232804: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80232838;
    // 0x80232804: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80232808:
    // 0x80232808: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023280C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80232810: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80232814: bne         $v0, $zero, L_80232838
    if (ctx->r2 != 0) {
        // 0x80232818: nop
    
            goto L_80232838;
    }
    // 0x80232818: nop

    // 0x8023281C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80232820: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x80232824: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x80232828: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023282C: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
    // 0x80232830: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_80232834:
    // 0x80232834: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_80232838:
    // 0x80232838: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023283C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80232840: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232844: jr          $ra
    // 0x80232848: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80232848: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022D50C_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D50C: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x8022D510: lui         $v1, 0x2C80
    ctx->r3 = S32(0X2C80 << 16);
    // 0x8022D514: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x8022D518: sw          $v1, 0x8C($a3)
    MEM_W(0X8C, ctx->r7) = ctx->r3;
    // 0x8022D51C: lbu         $v1, 0x8($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X8);
    // 0x8022D520: lui         $v0, 0x3DC8
    ctx->r2 = S32(0X3DC8 << 16);
    // 0x8022D524: ori         $v0, $v0, 0xB
    ctx->r2 = ctx->r2 | 0XB;
    // 0x8022D528: sw          $v0, 0x88($a3)
    MEM_W(0X88, ctx->r7) = ctx->r2;
    // 0x8022D52C: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x8022D530: sb          $v0, 0x96($a3)
    MEM_B(0X96, ctx->r7) = ctx->r2;
    // 0x8022D534: addiu       $v0, $zero, 0xC0
    ctx->r2 = ADD32(0, 0XC0);
    // 0x8022D538: sb          $v0, 0x97($a3)
    MEM_B(0X97, ctx->r7) = ctx->r2;
    // 0x8022D53C: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x8022D540: sh          $v0, 0x98($a3)
    MEM_H(0X98, ctx->r7) = ctx->r2;
    // 0x8022D544: lbu         $v0, 0x0($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X0);
    // 0x8022D548: lbu         $a0, 0x3($a3)
    ctx->r4 = MEM_BU(ctx->r7, 0X3);
    // 0x8022D54C: addiu       $t0, $a3, 0xD0
    ctx->r8 = ADD32(ctx->r7, 0XD0);
    // 0x8022D550: sh          $zero, 0x54($a3)
    MEM_H(0X54, ctx->r7) = 0;
    // 0x8022D554: sh          $zero, 0x56($a3)
    MEM_H(0X56, ctx->r7) = 0;
    // 0x8022D558: sh          $zero, 0x58($a3)
    MEM_H(0X58, ctx->r7) = 0;
    // 0x8022D55C: sw          $zero, 0x44($a3)
    MEM_W(0X44, ctx->r7) = 0;
    // 0x8022D560: sw          $zero, 0x48($a3)
    MEM_W(0X48, ctx->r7) = 0;
    // 0x8022D564: sw          $zero, 0x64($a3)
    MEM_W(0X64, ctx->r7) = 0;
    // 0x8022D568: sw          $zero, 0x70($a3)
    MEM_W(0X70, ctx->r7) = 0;
    // 0x8022D56C: sw          $zero, 0x74($a3)
    MEM_W(0X74, ctx->r7) = 0;
    // 0x8022D570: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022D574: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022D578: sb          $v0, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r2;
    // 0x8022D57C: beq         $a0, $zero, L_8022D58C
    if (ctx->r4 == 0) {
        // 0x8022D580: sb          $v1, 0x8($a3)
        MEM_B(0X8, ctx->r7) = ctx->r3;
            goto L_8022D58C;
    }
    // 0x8022D580: sb          $v1, 0x8($a3)
    MEM_B(0X8, ctx->r7) = ctx->r3;
    // 0x8022D584: j           L_8022D594
    // 0x8022D588: sb          $zero, 0x9($a3)
    MEM_B(0X9, ctx->r7) = 0;
        goto L_8022D594;
    // 0x8022D588: sb          $zero, 0x9($a3)
    MEM_B(0X9, ctx->r7) = 0;
L_8022D58C:
    // 0x8022D58C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D590: sb          $v0, 0x9($a3)
    MEM_B(0X9, ctx->r7) = ctx->r2;
L_8022D594:
    // 0x8022D594: lhu         $a0, 0x14($a3)
    ctx->r4 = MEM_HU(ctx->r7, 0X14);
    // 0x8022D598: lhu         $a1, 0x16($a3)
    ctx->r5 = MEM_HU(ctx->r7, 0X16);
    // 0x8022D59C: lhu         $a2, 0x18($a3)
    ctx->r6 = MEM_HU(ctx->r7, 0X18);
    // 0x8022D5A0: addiu       $v1, $zero, -0x28
    ctx->r3 = ADD32(0, -0X28);
    // 0x8022D5A4: addiu       $v0, $zero, -0x50
    ctx->r2 = ADD32(0, -0X50);
    // 0x8022D5A8: sh          $v0, 0x46($a3)
    MEM_H(0X46, ctx->r7) = ctx->r2;
    // 0x8022D5AC: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8022D5B0: sh          $v0, 0x4E($a3)
    MEM_H(0X4E, ctx->r7) = ctx->r2;
    // 0x8022D5B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D5B8: sh          $v1, 0x44($a3)
    MEM_H(0X44, ctx->r7) = ctx->r3;
    // 0x8022D5BC: sh          $v1, 0x48($a3)
    MEM_H(0X48, ctx->r7) = ctx->r3;
    // 0x8022D5C0: sh          $v0, 0x6E($a3)
    MEM_H(0X6E, ctx->r7) = ctx->r2;
    // 0x8022D5C4: sw          $zero, 0x78($a3)
    MEM_W(0X78, ctx->r7) = 0;
    // 0x8022D5C8: sh          $a0, 0x90($a3)
    MEM_H(0X90, ctx->r7) = ctx->r4;
    // 0x8022D5CC: sh          $a1, 0x92($a3)
    MEM_H(0X92, ctx->r7) = ctx->r5;
    // 0x8022D5D0: sh          $a2, 0x94($a3)
    MEM_H(0X94, ctx->r7) = ctx->r6;
    // 0x8022D5D4: jr          $ra
    // 0x8022D5D8: sw          $zero, 0x8($t0)
    MEM_W(0X8, ctx->r8) = 0;
    TRACE_RETURN()
    return;
    // 0x8022D5D8: sw          $zero, 0x8($t0)
    MEM_W(0X8, ctx->r8) = 0;
;}
RECOMP_FUNC void func_802280D4_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802280D4: lb          $v0, 0xE($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XE);
    // 0x802280D8: bne         $v0, $zero, L_80228100
    if (ctx->r2 != 0) {
        // 0x802280DC: addiu       $sp, $sp, -0x10
        ctx->r29 = ADD32(ctx->r29, -0X10);
            goto L_80228100;
    }
    // 0x802280DC: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x802280E0: lh          $v1, 0x56($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X56);
    // 0x802280E4: lh          $v0, 0x380($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X380);
    // 0x802280E8: addiu       $v0, $v0, -0x400
    ctx->r2 = ADD32(ctx->r2, -0X400);
    // 0x802280EC: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802280F0: beq         $v1, $v0, L_80228118
    if (ctx->r3 == ctx->r2) {
        // 0x802280F4: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_80228118;
    }
    // 0x802280F4: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x802280F8: j           L_80228130
    // 0x802280FC: addiu       $v0, $a1, -0x40
    ctx->r2 = ADD32(ctx->r5, -0X40);
        goto L_80228130;
    // 0x802280FC: addiu       $v0, $a1, -0x40
    ctx->r2 = ADD32(ctx->r5, -0X40);
L_80228100:
    // 0x80228100: lh          $v1, 0x56($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X56);
    // 0x80228104: lh          $v0, 0x380($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X380);
    // 0x80228108: addiu       $v0, $v0, 0x400
    ctx->r2 = ADD32(ctx->r2, 0X400);
    // 0x8022810C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80228110: bne         $v1, $v0, L_8022812C
    if (ctx->r3 != ctx->r2) {
        // 0x80228114: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_8022812C;
    }
    // 0x80228114: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
L_80228118:
    // 0x80228118: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022811C: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x80228120: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80228124: j           L_80228134
    // 0x80228128: sb          $v0, 0x385($a0)
    MEM_B(0X385, ctx->r4) = ctx->r2;
        goto L_80228134;
    // 0x80228128: sb          $v0, 0x385($a0)
    MEM_B(0X385, ctx->r4) = ctx->r2;
L_8022812C:
    // 0x8022812C: addiu       $v0, $a1, 0x40
    ctx->r2 = ADD32(ctx->r5, 0X40);
L_80228130:
    // 0x80228130: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
L_80228134:
    // 0x80228134: lhu         $v0, 0x56($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X56);
    // 0x80228138: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022813C: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    // 0x80228140: jr          $ra
    // 0x80228144: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    TRACE_RETURN()
    return;
    // 0x80228144: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_8022CE90_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CE90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022CE94: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022CE98: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022CE9C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022CEA0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022CEA4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022CEA8: lw          $v0, 0x4324($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4324);
    // 0x8022CEAC: jalr        $v0
    // 0x8022CEB0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022CEB0: nop

    after_0:
    // 0x8022CEB4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022CEB8: jr          $ra
    // 0x8022CEBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022CEBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A7E4_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A7E4: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x8022A7E8: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022A7EC: jr          $ra
    // 0x8022A7F0: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x8022A7F0: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_80226B98_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226B98: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80226B9C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80226BA0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80226BA4: addiu       $a0, $s1, 0xC4
    ctx->r4 = ADD32(ctx->r17, 0XC4);
    // 0x80226BA8: addiu       $a1, $s1, 0x180
    ctx->r5 = ADD32(ctx->r17, 0X180);
    // 0x80226BAC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80226BB0: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x80226BB4: jal         0x8009A3B4
    // 0x80226BB8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80226BB8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    after_0:
    // 0x80226BBC: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80226BC0: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x80226BC4: addiu       $a0, $s0, 0xC4
    ctx->r4 = ADD32(ctx->r16, 0XC4);
    // 0x80226BC8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80226BCC: jal         0x8009A3B4
    // 0x80226BD0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80226BD0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80226BD4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80226BD8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80226BDC: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x80226BE0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80226BE4: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    // 0x80226BE8: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80226BEC: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x80226BF0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80226BF4: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    // 0x80226BF8: jal         0x8004DF78
    // 0x80226BFC: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    func_8004DF78_29378(rdram, ctx);
        goto after_2;
    // 0x80226BFC: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    after_2:
    // 0x80226C00: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x80226C04: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80226C08: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80226C0C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80226C10: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80226C14: jr          $ra
    // 0x80226C18: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80226C18: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80229E60_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229E60: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x80229E64: beq         $v0, $zero, L_80229EB4
    if (ctx->r2 == 0) {
        // 0x80229E68: addiu       $v1, $zero, 0x2
        ctx->r3 = ADD32(0, 0X2);
            goto L_80229EB4;
    }
    // 0x80229E68: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80229E6C: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x80229E70: sb          $v1, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r3;
    // 0x80229E74: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80229E78: bne         $v0, $v1, L_80229EA0
    if (ctx->r2 != ctx->r3) {
        // 0x80229E7C: nop
    
            goto L_80229EA0;
    }
    // 0x80229E7C: nop

    // 0x80229E80: lbu         $v0, 0x2($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X2);
    // 0x80229E84: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80229E88: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x80229E8C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80229E90: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229E94: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80229E98: lbu         $v0, 0xA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XA);
    // 0x80229E9C: sw          $v0, 0x370($a0)
    MEM_W(0X370, ctx->r4) = ctx->r2;
L_80229EA0:
    // 0x80229EA0: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80229EA4: sh          $zero, 0x46($a0)
    MEM_H(0X46, ctx->r4) = 0;
    // 0x80229EA8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229EAC: j           L_80229EC8
    // 0x80229EB0: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
        goto L_80229EC8;
    // 0x80229EB0: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_80229EB4:
    // 0x80229EB4: lbu         $v1, 0xA4($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA4);
    // 0x80229EB8: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80229EBC: bne         $v1, $v0, L_80229EC8
    if (ctx->r3 != ctx->r2) {
        // 0x80229EC0: addiu       $v0, $zero, 0xF0
        ctx->r2 = ADD32(0, 0XF0);
            goto L_80229EC8;
    }
    // 0x80229EC0: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
    // 0x80229EC4: sh          $v0, 0x46($a0)
    MEM_H(0X46, ctx->r4) = ctx->r2;
L_80229EC8:
    // 0x80229EC8: jr          $ra
    // 0x80229ECC: nop

    TRACE_RETURN()
    return;
    // 0x80229ECC: nop

;}
RECOMP_FUNC void func_8022CCB0_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CCB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022CCB4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022CCB8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022CCBC: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022CCC0: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022CCC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022CCC8: jal         0x8009A3B4
    // 0x8022CCCC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022CCCC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022CCD0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022CCD4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022CCD8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022CCDC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022CCE0: lw          $v0, 0x4308($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4308);
    // 0x8022CCE4: jalr        $v0
    // 0x8022CCE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x8022CCE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022CCEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022CCF0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022CCF4: jr          $ra
    // 0x8022CCF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022CCF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225C9C_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225C9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225CA0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225CA4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225CA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225CAC: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225CB0: bne         $v0, $zero, L_80225CCC
    if (ctx->r2 != 0) {
        // 0x80225CB4: nop
    
            goto L_80225CCC;
    }
    // 0x80225CB4: nop

    // 0x80225CB8: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225CBC: jal         0x800607C4
    // 0x80225CC0: addiu       $a0, $a0, -0x5C9C
    ctx->r4 = ADD32(ctx->r4, -0X5C9C);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x80225CC0: addiu       $a0, $a0, -0x5C9C
    ctx->r4 = ADD32(ctx->r4, -0X5C9C);
    after_0:
    // 0x80225CC4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225CC8: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225CCC:
    // 0x80225CCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225CD0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225CD4: jr          $ra
    // 0x80225CD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225CD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227B34_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227B34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227B38: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80227B3C: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x80227B40: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227B44: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227B48: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227B4C: lw          $v0, -0x54B4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X54B4);
    // 0x80227B50: jalr        $v0
    // 0x80227B54: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80227B54: nop

    after_0:
    // 0x80227B58: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80227B5C: jr          $ra
    // 0x80227B60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227B60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226EC0_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226EC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226EC4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226EC8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226ECC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226ED0: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x80226ED4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226ED8: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80226EDC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226EE0: bne         $v0, $zero, L_80226F34
    if (ctx->r2 != 0) {
        // 0x80226EE4: addiu       $a1, $zero, 0x40
        ctx->r5 = ADD32(0, 0X40);
            goto L_80226F34;
    }
    // 0x80226EE4: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80226EE8: jal         0x802284C4
    // 0x80226EEC: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_802284C4_ovl17(rdram, ctx);
        goto after_0;
    // 0x80226EEC: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_0:
    // 0x80226EF0: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80226EF4: beq         $v0, $zero, L_80226F30
    if (ctx->r2 == 0) {
        // 0x80226EF8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226F30;
    }
    // 0x80226EF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226EFC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80226F00: jal         0x80228438
    // 0x80226F04: nop

    func_80228438_ovl17(rdram, ctx);
        goto after_1;
    // 0x80226F04: nop

    after_1:
    // 0x80226F08: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80226F0C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80226F10: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x80226F14: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80226F18: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80226F1C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80226F20: addiu       $v1, $v1, 0x800
    ctx->r3 = ADD32(ctx->r3, 0X800);
    // 0x80226F24: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80226F28: j           L_80226F34
    // 0x80226F2C: sh          $v1, 0x364($s0)
    MEM_H(0X364, ctx->r16) = ctx->r3;
        goto L_80226F34;
    // 0x80226F2C: sh          $v1, 0x364($s0)
    MEM_H(0X364, ctx->r16) = ctx->r3;
L_80226F30:
    // 0x80226F30: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80226F34:
    // 0x80226F34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226F38: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226F3C: jr          $ra
    // 0x80226F40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226F40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228A9C_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228A9C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80228AA0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228AA4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228AA8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80228AAC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80228AB0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228AB4: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80228AB8: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80228ABC: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80228AC0: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80228AC4: beq         $v0, $zero, L_80228BE0
    if (ctx->r2 == 0) {
        // 0x80228AC8: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80228BE0;
    }
    // 0x80228AC8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80228ACC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228AD0: addu        $at, $at, $v0
    gpr jr_addend_80228AD8 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228AD4: lw          $v0, -0x5398($at)
    ctx->r2 = ADD32(ctx->r1, -0X5398);
    // 0x80228AD8: jr          $v0
    // 0x80228ADC: nop

    switch (jr_addend_80228AD8 >> 2) {
        case 0: goto L_80228AE0; break;
        case 1: goto L_80228AF4; break;
        case 2: goto L_80228B10; break;
        case 3: goto L_80228B8C; break;
        case 4: goto L_80228BB0; break;
        default: switch_error(__func__, 0x80228AD8, 0x8022AC68);
    }
    // 0x80228ADC: nop

L_80228AE0:
    // 0x80228AE0: jal         0x80228EDC
    // 0x80228AE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80228EDC_ovl17(rdram, ctx);
        goto after_0;
    // 0x80228AE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80228AE8: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80228AEC: j           L_80228BDC
    // 0x80228AF0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80228BDC;
    // 0x80228AF0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80228AF4:
    // 0x80228AF4: jal         0x80228F98
    // 0x80228AF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80228F98_ovl17(rdram, ctx);
        goto after_1;
    // 0x80228AF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80228AFC: beq         $v0, $zero, L_80228BE4
    if (ctx->r2 == 0) {
        // 0x80228B00: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80228BE4;
    }
    // 0x80228B00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228B04: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80228B08: j           L_80228BDC
    // 0x80228B0C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80228BDC;
    // 0x80228B0C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80228B10:
    // 0x80228B10: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80228B14: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x80228B18: addiu       $s2, $s0, 0x14
    ctx->r18 = ADD32(ctx->r16, 0X14);
    // 0x80228B1C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80228B20: jal         0x8004F820
    // 0x80228B24: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80228B24: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_2:
    // 0x80228B28: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80228B2C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80228B30: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80228B34: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228B38: bne         $v0, $zero, L_80228BE0
    if (ctx->r2 != 0) {
        // 0x80228B3C: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80228BE0;
    }
    // 0x80228B3C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80228B40: jal         0x8003516C
    // 0x80228B44: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_3;
    // 0x80228B44: nop

    after_3:
    // 0x80228B48: bne         $v0, $zero, L_80228BE4
    if (ctx->r2 != 0) {
        // 0x80228B4C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80228BE4;
    }
    // 0x80228B4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228B50: jal         0x802290C4
    // 0x80228B54: nop

    func_802290C4_ovl17(rdram, ctx);
        goto after_4;
    // 0x80228B54: nop

    after_4:
    // 0x80228B58: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80228B5C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80228B60: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80228B64: jal         0x800610AC
    // 0x80228B68: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_5;
    // 0x80228B68: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    after_5:
    // 0x80228B6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228B70: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80228B74: jal         0x80050294
    // 0x80228B78: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_6;
    // 0x80228B78: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_6:
    // 0x80228B7C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80228B80: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80228B84: j           L_80228BDC
    // 0x80228B88: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80228BDC;
    // 0x80228B88: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80228B8C:
    // 0x80228B8C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80228B90: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x80228B94: bne         $v0, $zero, L_80228BE4
    if (ctx->r2 != 0) {
        // 0x80228B98: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80228BE4;
    }
    // 0x80228B98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228B9C: jal         0x80034E3C
    // 0x80228BA0: nop

    func_80034E3C_1023C(rdram, ctx);
        goto after_7;
    // 0x80228BA0: nop

    after_7:
    // 0x80228BA4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80228BA8: j           L_80228BDC
    // 0x80228BAC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80228BDC;
    // 0x80228BAC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80228BB0:
    // 0x80228BB0: jal         0x8003516C
    // 0x80228BB4: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_8;
    // 0x80228BB4: nop

    after_8:
    // 0x80228BB8: bne         $v0, $zero, L_80228BE4
    if (ctx->r2 != 0) {
        // 0x80228BBC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80228BE4;
    }
    // 0x80228BBC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228BC0: lbu         $v0, 0xBD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XBD);
    // 0x80228BC4: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x80228BC8: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x80228BCC: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80228BD0: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
    // 0x80228BD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228BD8: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
L_80228BDC:
    // 0x80228BDC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80228BE0:
    // 0x80228BE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80228BE4:
    // 0x80228BE4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80228BE8: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80228BEC: jal         0x80047284
    // 0x80228BF0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_9;
    // 0x80228BF0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_9:
    // 0x80228BF4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80228BF8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80228BFC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228C00: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228C04: jr          $ra
    // 0x80228C08: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80228C08: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80226CD4_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226CD4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226CD8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226CDC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80226CE0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80226CE4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80226CE8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226CEC: lh          $a0, 0x64($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X64);
    // 0x80226CF0: lh          $a1, 0x56($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X56);
    // 0x80226CF4: lb          $a2, 0xF($s1)
    ctx->r6 = MEM_B(ctx->r17, 0XF);
    // 0x80226CF8: jal         0x8004FA7C
    // 0x80226CFC: addiu       $s0, $s1, 0x348
    ctx->r16 = ADD32(ctx->r17, 0X348);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80226CFC: addiu       $s0, $s1, 0x348
    ctx->r16 = ADD32(ctx->r17, 0X348);
    after_0:
    // 0x80226D00: lh          $a1, 0x362($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X362);
    // 0x80226D04: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80226D08: sll         $v1, $s2, 16
    ctx->r3 = S32(ctx->r18 << 16);
    // 0x80226D0C: sra         $a0, $v1, 16
    ctx->r4 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80226D10: srl         $v1, $a0, 31
    ctx->r3 = S32(U32(ctx->r4) >> 31);
    // 0x80226D14: sltiu       $v0, $a1, 0x1
    ctx->r2 = ctx->r5 < 0X1 ? 1 : 0;
    // 0x80226D18: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80226D1C: bnel        $v0, $zero, L_80226D3C
    if (ctx->r2 != 0) {
        // 0x80226D20: negu        $s2, $s2
        ctx->r18 = SUB32(0, ctx->r18);
            goto L_80226D3C;
    }
    goto skip_0;
    // 0x80226D20: negu        $s2, $s2
    ctx->r18 = SUB32(0, ctx->r18);
    skip_0:
    // 0x80226D24: sltu        $v0, $zero, $a1
    ctx->r2 = 0 < ctx->r5 ? 1 : 0;
    // 0x80226D28: slt         $v1, $zero, $a0
    ctx->r3 = SIGNED(0) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80226D2C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80226D30: beq         $v0, $zero, L_80226D40
    if (ctx->r2 == 0) {
        // 0x80226D34: sll         $v0, $s2, 16
        ctx->r2 = S32(ctx->r18 << 16);
            goto L_80226D40;
    }
    // 0x80226D34: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
    // 0x80226D38: negu        $s2, $s2
    ctx->r18 = SUB32(0, ctx->r18);
L_80226D3C:
    // 0x80226D3C: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
L_80226D40:
    // 0x80226D40: bne         $v0, $zero, L_80226D70
    if (ctx->r2 != 0) {
        // 0x80226D44: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226D70;
    }
    // 0x80226D44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226D48: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x80226D4C: lhu         $a0, 0x1E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X1E);
    // 0x80226D50: lhu         $a1, 0x16($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X16);
    // 0x80226D54: subu        $v1, $v0, $v1
    ctx->r3 = SUB32(ctx->r2, ctx->r3);
    // 0x80226D58: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x80226D5C: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80226D60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226D64: sh          $v1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r3;
    // 0x80226D68: j           L_80226DC8
    // 0x80226D6C: sh          $a0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r4;
        goto L_80226DC8;
    // 0x80226D6C: sh          $a0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r4;
L_80226D70:
    // 0x80226D70: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x80226D74: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226D78: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x80226D7C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226D80: beq         $v0, $zero, L_80226DC4
    if (ctx->r2 == 0) {
        // 0x80226D84: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80226DC4;
    }
    // 0x80226D84: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80226D88: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80226D8C: jal         0x802284C4
    // 0x80226D90: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_802284C4_ovl17(rdram, ctx);
        goto after_1;
    // 0x80226D90: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_1:
    // 0x80226D94: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80226D98: beq         $v0, $zero, L_80226DD0
    if (ctx->r2 == 0) {
        // 0x80226D9C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80226DD0;
    }
    // 0x80226D9C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80226DA0: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x80226DA4: jal         0x80228428
    // 0x80226DA8: nop

    func_80228428_ovl17(rdram, ctx);
        goto after_2;
    // 0x80226DA8: nop

    after_2:
    // 0x80226DAC: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x80226DB0: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80226DB4: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x80226DB8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80226DBC: j           L_80226DF0
    // 0x80226DC0: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_80226DF0;
    // 0x80226DC0: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_80226DC4:
    // 0x80226DC4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80226DC8:
    // 0x80226DC8: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x80226DCC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_80226DD0:
    // 0x80226DD0: lhu         $v0, 0x56($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X56);
    // 0x80226DD4: lh          $a1, 0x44($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X44);
    // 0x80226DD8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226DDC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80226DE0: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80226DE4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80226DE8: jal         0x8004DA90
    // 0x80226DEC: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x80226DEC: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    after_3:
L_80226DF0:
    // 0x80226DF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80226DF4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80226DF8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226DFC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226E00: jr          $ra
    // 0x80226E04: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226E04: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80226830_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226830: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226834: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226838: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022683C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226840: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x80226844: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80226848: jal         0x8004FA7C
    // 0x8022684C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022684C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x80226850: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80226854: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80226858: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022685C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226860: bne         $v0, $zero, L_802268C4
    if (ctx->r2 != 0) {
        // 0x80226864: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_802268C4;
    }
    // 0x80226864: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80226868: lh          $v1, 0x35C($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X35C);
    // 0x8022686C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226870: beq         $v1, $zero, L_802268B4
    if (ctx->r3 == 0) {
        // 0x80226874: sb          $v0, 0xA($s0)
        MEM_B(0XA, ctx->r16) = ctx->r2;
            goto L_802268B4;
    }
    // 0x80226874: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80226878: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022687C: addiu       $a1, $s0, 0x354
    ctx->r5 = ADD32(ctx->r16, 0X354);
    // 0x80226880: jal         0x8009A3B4
    // 0x80226884: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80226884: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80226888: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x8022688C: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x80226890: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x80226894: lhu         $a1, 0x352($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X352);
    // 0x80226898: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022689C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802268A0: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x802268A4: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x802268A8: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x802268AC: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x802268B0: sh          $a1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r5;
L_802268B4:
    // 0x802268B4: lhu         $v1, 0x35C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X35C);
    // 0x802268B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802268BC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x802268C0: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
L_802268C4:
    // 0x802268C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802268C8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802268CC: jr          $ra
    // 0x802268D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802268D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225864_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225864: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225868: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022586C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225870: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225874: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225878: bne         $v0, $zero, L_80225894
    if (ctx->r2 != 0) {
        // 0x8022587C: nop
    
            goto L_80225894;
    }
    // 0x8022587C: nop

    // 0x80225880: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225884: jal         0x800607C4
    // 0x80225888: addiu       $a0, $a0, -0x5CE4
    ctx->r4 = ADD32(ctx->r4, -0X5CE4);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x80225888: addiu       $a0, $a0, -0x5CE4
    ctx->r4 = ADD32(ctx->r4, -0X5CE4);
    after_0:
    // 0x8022588C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225890: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225894:
    // 0x80225894: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225898: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022589C: jr          $ra
    // 0x802258A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802258A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226298_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226298: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022629C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802262A0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802262A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802262A8: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x802262AC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802262B0: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x802262B4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802262B8: bne         $v0, $zero, L_802262EC
    if (ctx->r2 != 0) {
        // 0x802262BC: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_802262EC;
    }
    // 0x802262BC: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x802262C0: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x802262C4: bne         $v1, $v0, L_802262D0
    if (ctx->r3 != ctx->r2) {
        // 0x802262C8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802262D0;
    }
    // 0x802262C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802262CC: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
L_802262D0:
    // 0x802262D0: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x802262D4: jal         0x80228390
    // 0x802262D8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_80228390_ovl17(rdram, ctx);
        goto after_0;
    // 0x802262D8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_0:
    // 0x802262DC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802262E0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802262E4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802262E8: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_802262EC:
    // 0x802262EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802262F0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802262F4: jr          $ra
    // 0x802262F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802262F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226970_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226970: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226974: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226978: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022697C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226980: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x80226984: bgez        $v0, L_8022699C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80226988: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_8022699C;
    }
    // 0x80226988: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022698C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80226990: jal         0x80228438
    // 0x80226994: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    func_80228438_ovl17(rdram, ctx);
        goto after_0;
    // 0x80226994: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    after_0:
    // 0x80226998: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022699C:
    // 0x8022699C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802269A0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802269A4: jr          $ra
    // 0x802269A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802269A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802251BC_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802251BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802251C0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802251C4: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x802251C8: addiu       $s0, $s0, -0x3BC7
    ctx->r16 = ADD32(ctx->r16, -0X3BC7);
    // 0x802251CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802251D0: lb          $t0, 0x0($s0)
    ctx->r8 = MEM_B(ctx->r16, 0X0);
    // 0x802251D4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802251D8: lb          $a1, 0x47CD($a1)
    ctx->r5 = MEM_B(ctx->r5, 0X47CD);
    // 0x802251DC: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x802251E0: addiu       $a2, $a2, 0xCB4
    ctx->r6 = ADD32(ctx->r6, 0XCB4);
    // 0x802251E4: sll         $v0, $t0, 3
    ctx->r2 = S32(ctx->r8 << 3);
    // 0x802251E8: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x802251EC: lbu         $v1, 0x2($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X2);
    // 0x802251F0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802251F4: sh          $v1, 0x49AE($at)
    MEM_H(0X49AE, ctx->r1) = ctx->r3;
    // 0x802251F8: lbu         $a3, 0x3($v0)
    ctx->r7 = MEM_BU(ctx->r2, 0X3);
    // 0x802251FC: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80225200: sh          $a3, -0x7386($at)
    MEM_H(-0X7386, ctx->r1) = ctx->r7;
    // 0x80225204: lbu         $t1, 0x0($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X0);
    // 0x80225208: lui         $t2, 0x7FE9
    ctx->r10 = S32(0X7FE9 << 16);
    // 0x8022520C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225210: sb          $t1, 0x6B40($at)
    MEM_B(0X6B40, ctx->r1) = ctx->r9;
    // 0x80225214: lbu         $t3, 0x1($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X1);
    // 0x80225218: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x8022521C: ori         $t2, $t2, 0xC000
    ctx->r10 = ctx->r10 | 0XC000;
    // 0x80225220: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80225224: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225228: sb          $zero, 0x4DFE($at)
    MEM_B(0X4DFE, ctx->r1) = 0;
    // 0x8022522C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225230: addu        $a0, $a0, $t0
    ctx->r4 = ADD32(ctx->r4, ctx->r8);
    // 0x80225234: lw          $a0, -0x69E4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X69E4);
    // 0x80225238: addiu       $a2, $a2, -0x4
    ctx->r6 = ADD32(ctx->r6, -0X4);
    // 0x8022523C: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
    // 0x80225240: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225244: sb          $v1, -0x35BC($at)
    MEM_B(-0X35BC, ctx->r1) = ctx->r3;
    // 0x80225248: addu        $v0, $v0, $t2
    ctx->r2 = ADD32(ctx->r2, ctx->r10);
    // 0x8022524C: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x80225250: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80225254: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80225258: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022525C: sw          $v0, -0x35C0($at)
    MEM_W(-0X35C0, ctx->r1) = ctx->r2;
    // 0x80225260: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80225264: addiu       $v0, $v0, 0x5080
    ctx->r2 = ADD32(ctx->r2, 0X5080);
    // 0x80225268: addu        $a3, $a3, $t3
    ctx->r7 = ADD32(ctx->r7, ctx->r11);
    // 0x8022526C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80225270: sw          $v0, 0xB5C($at)
    MEM_W(0XB5C, ctx->r1) = ctx->r2;
    // 0x80225274: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80225278: sb          $t3, -0x39A6($at)
    MEM_B(-0X39A6, ctx->r1) = ctx->r11;
    // 0x8022527C: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80225280: sb          $a3, 0x53D4($at)
    MEM_B(0X53D4, ctx->r1) = ctx->r7;
    // 0x80225284: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225288: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x8022528C: lw          $v0, -0x68B4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X68B4);
    // 0x80225290: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225294: jal         0x8004C790
    // 0x80225298: sw          $v0, 0x6B44($at)
    MEM_W(0X6B44, ctx->r1) = ctx->r2;
    func_8004C790_27B90(rdram, ctx);
        goto after_0;
    // 0x80225298: sw          $v0, 0x6B44($at)
    MEM_W(0X6B44, ctx->r1) = ctx->r2;
    after_0:
    // 0x8022529C: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x802252A0: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802252A4: addiu       $a0, $a0, -0x6874
    ctx->r4 = ADD32(ctx->r4, -0X6874);
    // 0x802252A8: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x802252AC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802252B0: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x802252B4: lw          $v1, -0x6864($at)
    ctx->r3 = MEM_W(ctx->r1, -0X6864);
    // 0x802252B8: sll         $a1, $v0, 1
    ctx->r5 = S32(ctx->r2 << 1);
    // 0x802252BC: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x802252C0: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x802252C4: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802252C8: addiu       $v0, $v0, -0x68A4
    ctx->r2 = ADD32(ctx->r2, -0X68A4);
    // 0x802252CC: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x802252D0: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x802252D4: jal         0x80054FB8
    // 0x802252D8: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    func_80054FB8_303B8(rdram, ctx);
        goto after_1;
    // 0x802252D8: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    after_1:
    // 0x802252DC: jal         0x8004A614
    // 0x802252E0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8004A614_25A14(rdram, ctx);
        goto after_2;
    // 0x802252E0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_2:
    // 0x802252E4: jal         0x80225300
    // 0x802252E8: nop

    func_80225300_ovl17(rdram, ctx);
        goto after_3;
    // 0x802252E8: nop

    after_3:
    // 0x802252EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802252F0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802252F4: jr          $ra
    // 0x802252F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802252F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802252FC: nop

;}
RECOMP_FUNC void func_80225B78_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225B78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225B7C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225B80: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225B84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225B88: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x80225B8C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80225B90: beq         $v0, $zero, L_80225BB4
    if (ctx->r2 == 0) {
        // 0x80225B94: nop
    
            goto L_80225BB4;
    }
    // 0x80225B94: nop

    // 0x80225B98: bltz        $v1, L_80225BB4
    if (SIGNED(ctx->r3) < 0) {
        // 0x80225B9C: nop
    
            goto L_80225BB4;
    }
    // 0x80225B9C: nop

    // 0x80225BA0: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225BA4: jal         0x800607C4
    // 0x80225BA8: addiu       $a0, $a0, -0x5CBC
    ctx->r4 = ADD32(ctx->r4, -0X5CBC);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x80225BA8: addiu       $a0, $a0, -0x5CBC
    ctx->r4 = ADD32(ctx->r4, -0X5CBC);
    after_0:
    // 0x80225BAC: addiu       $v0, $zero, 0xE1
    ctx->r2 = ADD32(0, 0XE1);
    // 0x80225BB0: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225BB4:
    // 0x80225BB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225BB8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225BBC: jr          $ra
    // 0x80225BC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225BC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226764_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226764: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226768: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022676C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226770: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80226774: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226778: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8022677C: bgez        $v0, L_802267A0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80226780: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_802267A0;
    }
    // 0x80226780: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80226784: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80226788: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x8022678C: beq         $a0, $v0, L_802267A0
    if (ctx->r4 == ctx->r2) {
        // 0x80226790: nop
    
            goto L_802267A0;
    }
    // 0x80226790: nop

    // 0x80226794: jal         0x80228428
    // 0x80226798: nop

    func_80228428_ovl17(rdram, ctx);
        goto after_0;
    // 0x80226798: nop

    after_0:
    // 0x8022679C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_802267A0:
    // 0x802267A0: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x802267A4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802267A8: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x802267AC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802267B0: bne         $v0, $zero, L_8022681C
    if (ctx->r2 != 0) {
        // 0x802267B4: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_8022681C;
    }
    // 0x802267B4: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x802267B8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x802267BC: bne         $a0, $v0, L_802267D4
    if (ctx->r4 != ctx->r2) {
        // 0x802267C0: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_802267D4;
    }
    // 0x802267C0: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x802267C4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802267C8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x802267CC: j           L_802267EC
    // 0x802267D0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_802267EC;
    // 0x802267D0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802267D4:
    // 0x802267D4: jal         0x80228438
    // 0x802267D8: nop

    func_80228438_ovl17(rdram, ctx);
        goto after_1;
    // 0x802267D8: nop

    after_1:
    // 0x802267DC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802267E0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802267E4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802267E8: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_802267EC:
    // 0x802267EC: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x802267F0: beq         $v0, $zero, L_80226804
    if (ctx->r2 == 0) {
        // 0x802267F4: nop
    
            goto L_80226804;
    }
    // 0x802267F4: nop

    // 0x802267F8: lhu         $v0, 0xA($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA);
    // 0x802267FC: j           L_80226814
    // 0x80226800: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
        goto L_80226814;
    // 0x80226800: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
L_80226804:
    // 0x80226804: lhu         $v0, 0xA($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA);
    // 0x80226808: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022680C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80226810: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
L_80226814:
    // 0x80226814: lhu         $v0, 0x1E($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1E);
    // 0x80226818: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
L_8022681C:
    // 0x8022681C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80226820: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226824: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226828: jr          $ra
    // 0x8022682C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022682C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80226368_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226368: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022636C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80226370: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80226374: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226378: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022637C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226380: lw          $v0, -0x5634($at)
    ctx->r2 = MEM_W(ctx->r1, -0X5634);
    // 0x80226384: jalr        $v0
    // 0x80226388: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80226388: nop

    after_0:
    // 0x8022638C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80226390: jr          $ra
    // 0x80226394: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226394: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022622C_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022622C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226230: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226234: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80226238: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022623C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226240: lbu         $s0, 0xE($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0XE);
    // 0x80226244: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x80226248: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022624C: addiu       $v0, $v0, -0x5674
    ctx->r2 = ADD32(ctx->r2, -0X5674);
    // 0x80226250: andi        $s0, $s0, 0x3
    ctx->r16 = ctx->r16 & 0X3;
    // 0x80226254: sll         $s0, $s0, 4
    ctx->r16 = S32(ctx->r16 << 4);
    // 0x80226258: jal         0x80228428
    // 0x8022625C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    func_80228428_ovl17(rdram, ctx);
        goto after_0;
    // 0x8022625C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    after_0:
    // 0x80226260: jal         0x800A3450
    // 0x80226264: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80226264: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    after_1:
    // 0x80226268: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022626C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x80226270: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80226274: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80226278: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022627C: sh          $v1, 0x350($s1)
    MEM_H(0X350, ctx->r17) = ctx->r3;
    // 0x80226280: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x80226284: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80226288: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022628C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226290: jr          $ra
    // 0x80226294: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226294: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80228D80_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228D80: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80228D84: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228D88: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80228D8C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80228D90: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228D94: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x80228D98: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80228D9C: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x80228DA0: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80228DA4: beq         $v0, $zero, L_80228EB4
    if (ctx->r2 == 0) {
        // 0x80228DA8: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80228EB4;
    }
    // 0x80228DA8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80228DAC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228DB0: addu        $at, $at, $v0
    gpr jr_addend_80228DB8 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228DB4: lw          $v0, -0x5368($at)
    ctx->r2 = ADD32(ctx->r1, -0X5368);
    // 0x80228DB8: jr          $v0
    // 0x80228DBC: nop

    switch (jr_addend_80228DB8 >> 2) {
        case 0: goto L_80228DC0; break;
        case 1: goto L_80228DD0; break;
        case 2: goto L_80228DE8; break;
        case 3: goto L_80228E20; break;
        case 4: goto L_80228E50; break;
        default: switch_error(__func__, 0x80228DB8, 0x8022AC98);
    }
    // 0x80228DBC: nop

L_80228DC0:
    // 0x80228DC0: jal         0x80228EDC
    // 0x80228DC4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80228EDC_ovl17(rdram, ctx);
        goto after_0;
    // 0x80228DC4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x80228DC8: j           L_80228E40
    // 0x80228DCC: nop

        goto L_80228E40;
    // 0x80228DCC: nop

L_80228DD0:
    // 0x80228DD0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80228DD4: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80228DD8: bne         $v0, $zero, L_80228EB8
    if (ctx->r2 != 0) {
        // 0x80228DDC: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80228EB8;
    }
    // 0x80228DDC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80228DE0: j           L_80228E40
    // 0x80228DE4: nop

        goto L_80228E40;
    // 0x80228DE4: nop

L_80228DE8:
    // 0x80228DE8: jal         0x8006982C
    // 0x80228DEC: addiu       $a0, $zero, 0x7D0
    ctx->r4 = ADD32(0, 0X7D0);
    func_8006982C_44C2C(rdram, ctx);
        goto after_1;
    // 0x80228DEC: addiu       $a0, $zero, 0x7D0
    ctx->r4 = ADD32(0, 0X7D0);
    after_1:
    // 0x80228DF0: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x80228DF4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80228DF8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80228DFC: jal         0x800610AC
    // 0x80228E00: addiu       $a3, $zero, 0x21
    ctx->r7 = ADD32(0, 0X21);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_2;
    // 0x80228E00: addiu       $a3, $zero, 0x21
    ctx->r7 = ADD32(0, 0X21);
    after_2:
    // 0x80228E04: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80228E08: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80228E0C: jal         0x80050294
    // 0x80228E10: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x80228E10: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x80228E14: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x80228E18: j           L_80228E44
    // 0x80228E1C: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
        goto L_80228E44;
    // 0x80228E1C: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
L_80228E20:
    // 0x80228E20: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80228E24: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80228E28: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80228E2C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80228E30: bne         $v0, $zero, L_80228EB8
    if (ctx->r2 != 0) {
        // 0x80228E34: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80228EB8;
    }
    // 0x80228E34: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80228E38: jal         0x80034E3C
    // 0x80228E3C: nop

    func_80034E3C_1023C(rdram, ctx);
        goto after_4;
    // 0x80228E3C: nop

    after_4:
L_80228E40:
    // 0x80228E40: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
L_80228E44:
    // 0x80228E44: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228E48: j           L_80228EB4
    // 0x80228E4C: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
        goto L_80228EB4;
    // 0x80228E4C: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_80228E50:
    // 0x80228E50: jal         0x8003516C
    // 0x80228E54: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_5;
    // 0x80228E54: nop

    after_5:
    // 0x80228E58: bnel        $v0, $zero, L_80228EB8
    if (ctx->r2 != 0) {
        // 0x80228E5C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80228EB8;
    }
    goto skip_0;
    // 0x80228E5C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    skip_0:
    // 0x80228E60: lbu         $v0, 0xBD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XBD);
    // 0x80228E64: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80228E68: addiu       $a0, $zero, 0x223
    ctx->r4 = ADD32(0, 0X223);
    // 0x80228E6C: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x80228E70: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80228E74: sb          $v0, 0xBD($s0)
    MEM_B(0XBD, ctx->r16) = ctx->r2;
    // 0x80228E78: jal         0x8006036C
    // 0x80228E7C: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8006036C_3B76C(rdram, ctx);
        goto after_6;
    // 0x80228E7C: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_6:
    // 0x80228E80: jal         0x8006036C
    // 0x80228E84: addiu       $a0, $zero, 0x214
    ctx->r4 = ADD32(0, 0X214);
    func_8006036C_3B76C(rdram, ctx);
        goto after_7;
    // 0x80228E84: addiu       $a0, $zero, 0x214
    ctx->r4 = ADD32(0, 0X214);
    after_7:
    // 0x80228E88: jal         0x8006036C
    // 0x80228E8C: addiu       $a0, $zero, 0x24C
    ctx->r4 = ADD32(0, 0X24C);
    func_8006036C_3B76C(rdram, ctx);
        goto after_8;
    // 0x80228E8C: addiu       $a0, $zero, 0x24C
    ctx->r4 = ADD32(0, 0X24C);
    after_8:
    // 0x80228E90: jal         0x80060C1C
    // 0x80228E94: addiu       $a0, $zero, 0x2E3
    ctx->r4 = ADD32(0, 0X2E3);
    func_80060C1C_3C01C(rdram, ctx);
        goto after_9;
    // 0x80228E94: addiu       $a0, $zero, 0x2E3
    ctx->r4 = ADD32(0, 0X2E3);
    after_9:
    // 0x80228E98: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80228E9C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80228EA0: sb          $s0, -0x3BA0($at)
    MEM_B(-0X3BA0, ctx->r1) = ctx->r16;
    // 0x80228EA4: jal         0x80060D38
    // 0x80228EA8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80060D38_3C138(rdram, ctx);
        goto after_10;
    // 0x80228EA8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_10:
    // 0x80228EAC: sb          $s0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r16;
    // 0x80228EB0: sb          $zero, 0x3($s1)
    MEM_B(0X3, ctx->r17) = 0;
L_80228EB4:
    // 0x80228EB4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_80228EB8:
    // 0x80228EB8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80228EBC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80228EC0: jal         0x80047284
    // 0x80228EC4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_11;
    // 0x80228EC4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_11:
    // 0x80228EC8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80228ECC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228ED0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228ED4: jr          $ra
    // 0x80228ED8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80228ED8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80226FCC_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226FCC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80226FD0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226FD4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226FD8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80226FDC: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80226FE0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80226FE4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80226FE8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226FEC: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80226FF0: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x80226FF4: bne         $v1, $v0, L_80227010
    if (ctx->r3 != ctx->r2) {
        // 0x80226FF8: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_80227010;
    }
    // 0x80226FF8: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x80226FFC: lui         $s1, 0x8023
    ctx->r17 = S32(0X8023 << 16);
    // 0x80227000: addiu       $s1, $s1, -0x5510
    ctx->r17 = ADD32(ctx->r17, -0X5510);
    // 0x80227004: lui         $s3, 0x8023
    ctx->r19 = S32(0X8023 << 16);
    // 0x80227008: j           L_80227020
    // 0x8022700C: addiu       $s3, $s3, -0x54F0
    ctx->r19 = ADD32(ctx->r19, -0X54F0);
        goto L_80227020;
    // 0x8022700C: addiu       $s3, $s3, -0x54F0
    ctx->r19 = ADD32(ctx->r19, -0X54F0);
L_80227010:
    // 0x80227010: lui         $s1, 0x8023
    ctx->r17 = S32(0X8023 << 16);
    // 0x80227014: addiu       $s1, $s1, -0x5520
    ctx->r17 = ADD32(ctx->r17, -0X5520);
    // 0x80227018: lui         $s3, 0x8023
    ctx->r19 = S32(0X8023 << 16);
    // 0x8022701C: addiu       $s3, $s3, -0x5500
    ctx->r19 = ADD32(ctx->r19, -0X5500);
L_80227020:
    // 0x80227020: lui         $s4, 0x8023
    ctx->r20 = S32(0X8023 << 16);
    // 0x80227024: jal         0x800A3450
    // 0x80227028: addiu       $s4, $s4, -0x54E0
    ctx->r20 = ADD32(ctx->r20, -0X54E0);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80227028: addiu       $s4, $s4, -0x54E0
    ctx->r20 = ADD32(ctx->r20, -0X54E0);
    after_0:
    // 0x8022702C: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80227030: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x80227034: lbu         $s1, 0x0($v0)
    ctx->r17 = MEM_BU(ctx->r2, 0X0);
    // 0x80227038: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022703C: andi        $v1, $s1, 0xFF
    ctx->r3 = ctx->r17 & 0XFF;
    // 0x80227040: beq         $v1, $v0, L_802270CC
    if (ctx->r3 == ctx->r2) {
        // 0x80227044: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_802270CC;
    }
    // 0x80227044: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80227048: beql        $v0, $zero, L_80227060
    if (ctx->r2 == 0) {
        // 0x8022704C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80227060;
    }
    goto skip_0;
    // 0x8022704C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80227050: beq         $v1, $zero, L_80227070
    if (ctx->r3 == 0) {
        // 0x80227054: nop
    
            goto L_80227070;
    }
    // 0x80227054: nop

    // 0x80227058: j           L_8022715C
    // 0x8022705C: nop

        goto L_8022715C;
    // 0x8022705C: nop

L_80227060:
    // 0x80227060: beq         $v1, $v0, L_802270E0
    if (ctx->r3 == ctx->r2) {
        // 0x80227064: nop
    
            goto L_802270E0;
    }
    // 0x80227064: nop

    // 0x80227068: j           L_8022715C
    // 0x8022706C: nop

        goto L_8022715C;
    // 0x8022706C: nop

L_80227070:
    // 0x80227070: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80227074: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x80227078: bne         $v0, $zero, L_8022709C
    if (ctx->r2 != 0) {
        // 0x8022707C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022709C;
    }
    // 0x8022707C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227080: jal         0x800A3450
    // 0x80227084: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80227084: nop

    after_1:
    // 0x80227088: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022708C: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x80227090: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80227094: beq         $v0, $zero, L_802270A8
    if (ctx->r2 == 0) {
        // 0x80227098: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802270A8;
    }
    // 0x80227098: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022709C:
    // 0x8022709C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802270A0: j           L_802270BC
    // 0x802270A4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_802270BC;
    // 0x802270A4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_802270A8:
    // 0x802270A8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x802270AC: jal         0x80228438
    // 0x802270B0: nop

    func_80228438_ovl17(rdram, ctx);
        goto after_2;
    // 0x802270B0: nop

    after_2:
    // 0x802270B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802270B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_802270BC:
    // 0x802270BC: jal         0x80228478
    // 0x802270C0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80228478_ovl17(rdram, ctx);
        goto after_3;
    // 0x802270C0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_3:
    // 0x802270C4: j           L_80227180
    // 0x802270C8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
        goto L_80227180;
    // 0x802270C8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
L_802270CC:
    // 0x802270CC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x802270D0: jal         0x80228428
    // 0x802270D4: nop

    func_80228428_ovl17(rdram, ctx);
        goto after_4;
    // 0x802270D4: nop

    after_4:
    // 0x802270D8: j           L_80227180
    // 0x802270DC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_80227180;
    // 0x802270DC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_802270E0:
    // 0x802270E0: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x802270E4: lhu         $v0, 0xC($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XC);
    // 0x802270E8: lhu         $a2, 0x14($s2)
    ctx->r6 = MEM_HU(ctx->r18, 0X14);
    // 0x802270EC: lhu         $a1, 0x18($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X18);
    // 0x802270F0: lhu         $a0, 0x16($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X16);
    // 0x802270F4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x802270F8: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x802270FC: sra         $a3, $a2, 17
    ctx->r7 = S32(SIGNED(ctx->r6) >> 17);
    // 0x80227100: lhu         $v0, 0x10($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X10);
    // 0x80227104: addu        $v1, $v1, $a3
    ctx->r3 = ADD32(ctx->r3, ctx->r7);
    // 0x80227108: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022710C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80227110: andi        $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 & 0XFFFF;
    // 0x80227114: slt         $v1, $v1, $a2
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80227118: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x8022711C: sra         $v0, $a0, 17
    ctx->r2 = S32(SIGNED(ctx->r4) >> 17);
    // 0x80227120: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x80227124: beq         $v1, $zero, L_80227154
    if (ctx->r3 == 0) {
        // 0x80227128: sra         $a0, $a0, 16
        ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
            goto L_80227154;
    }
    // 0x80227128: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8022712C: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80227130: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80227134: beq         $v0, $zero, L_80227154
    if (ctx->r2 == 0) {
        // 0x80227138: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227154;
    }
    // 0x80227138: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022713C: jal         0x80228478
    // 0x80227140: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80228478_ovl17(rdram, ctx);
        goto after_5;
    // 0x80227140: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x80227144: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80227148: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022714C: j           L_80227180
    // 0x80227150: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_80227180;
    // 0x80227150: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80227154:
    // 0x80227154: j           L_80227180
    // 0x80227158: addiu       $s1, $zero, 0xFF
    ctx->r17 = ADD32(0, 0XFF);
        goto L_80227180;
    // 0x80227158: addiu       $s1, $zero, 0xFF
    ctx->r17 = ADD32(0, 0XFF);
L_8022715C:
    // 0x8022715C: jal         0x800A3450
    // 0x80227160: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_6;
    // 0x80227160: nop

    after_6:
    // 0x80227164: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80227168: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022716C: jal         0x80228438
    // 0x80227170: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    func_80228438_ovl17(rdram, ctx);
        goto after_7;
    // 0x80227170: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    after_7:
    // 0x80227174: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227178: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022717C: sh          $v0, 0x1E($s2)
    MEM_H(0X1E, ctx->r18) = ctx->r2;
L_80227180:
    // 0x80227180: jal         0x800A3450
    // 0x80227184: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_8;
    // 0x80227184: nop

    after_8:
    // 0x80227188: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022718C: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x80227190: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80227194: andi        $v1, $s1, 0xFF
    ctx->r3 = ctx->r17 & 0XFF;
    // 0x80227198: sh          $v0, 0x8($s2)
    MEM_H(0X8, ctx->r18) = ctx->r2;
    // 0x8022719C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802271A0: beq         $v1, $v0, L_802271B8
    if (ctx->r3 == ctx->r2) {
        // 0x802271A4: nop
    
            goto L_802271B8;
    }
    // 0x802271A4: nop

    // 0x802271A8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802271AC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802271B0: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x802271B4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802271B8:
    // 0x802271B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802271BC: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x802271C0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x802271C4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802271C8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802271CC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802271D0: jr          $ra
    // 0x802271D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802271D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80226354_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226354: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x80226358: bltzl       $v0, L_80226360
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022635C: sb          $zero, 0xA($a0)
        MEM_B(0XA, ctx->r4) = 0;
            goto L_80226360;
    }
    goto skip_0;
    // 0x8022635C: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    skip_0:
L_80226360:
    // 0x80226360: jr          $ra
    // 0x80226364: nop

    TRACE_RETURN()
    return;
    // 0x80226364: nop

;}
RECOMP_FUNC void func_80227F58_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227F58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227F5C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227F60: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227F64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227F68: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80227F6C: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x80227F70: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80227F74: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80227F78: jal         0x8004F820
    // 0x80227F7C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80227F7C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x80227F80: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80227F84: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80227F88: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80227F8C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80227F90: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80227F94: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x80227F98: bne         $v0, $zero, L_80227FD0
    if (ctx->r2 != 0) {
        // 0x80227F9C: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80227FD0;
    }
    // 0x80227F9C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80227FA0: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80227FA4: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x80227FA8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80227FAC: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x80227FB0: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x80227FB4: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x80227FB8: jal         0x80228428
    // 0x80227FBC: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
    func_80228428_ovl17(rdram, ctx);
        goto after_1;
    // 0x80227FBC: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
    after_1:
    // 0x80227FC0: jal         0x80034E3C
    // 0x80227FC4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80034E3C_1023C(rdram, ctx);
        goto after_2;
    // 0x80227FC4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_2:
    // 0x80227FC8: j           L_80227FEC
    // 0x80227FCC: nop

        goto L_80227FEC;
    // 0x80227FCC: nop

L_80227FD0:
    // 0x80227FD0: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80227FD4: lb          $v1, -0x3C18($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3C18);
    // 0x80227FD8: bne         $v1, $v0, L_80227FEC
    if (ctx->r3 != ctx->r2) {
        // 0x80227FDC: nop
    
            goto L_80227FEC;
    }
    // 0x80227FDC: nop

    // 0x80227FE0: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x80227FE4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227FE8: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
L_80227FEC:
    // 0x80227FEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227FF0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227FF4: jr          $ra
    // 0x80227FF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227FF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
