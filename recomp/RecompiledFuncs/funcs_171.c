#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80230D20_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230D20: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80230D24: lw          $v0, 0x4B34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4B34);
    // 0x80230D28: bne         $v0, $a0, L_80230D3C
    if (ctx->r2 != ctx->r4) {
        // 0x80230D2C: nop
    
            goto L_80230D3C;
    }
    // 0x80230D2C: nop

    // 0x80230D30: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80230D34: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230D38: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
L_80230D3C:
    // 0x80230D3C: lw          $v0, 0x4C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4C);
    // 0x80230D40: bgez        $v0, L_80230D4C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80230D44: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80230D4C;
    }
    // 0x80230D44: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80230D48: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
L_80230D4C:
    // 0x80230D4C: jr          $ra
    // 0x80230D50: nop

    TRACE_RETURN()
    return;
    // 0x80230D50: nop

;}
RECOMP_FUNC void func_802291A4_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802291A4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802291A8: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x802291AC: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x802291B0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802291B4: addiu       $s2, $s5, 0x2C8
    ctx->r18 = ADD32(ctx->r21, 0X2C8);
    // 0x802291B8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x802291BC: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x802291C0: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x802291C4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x802291C8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802291CC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802291D0: andi        $s1, $s4, 0xFF
    ctx->r17 = ctx->r20 & 0XFF;
L_802291D4:
    // 0x802291D4: sll         $s3, $s1, 3
    ctx->r19 = S32(ctx->r17 << 3);
    // 0x802291D8: addu        $v0, $s2, $s3
    ctx->r2 = ADD32(ctx->r18, ctx->r19);
    // 0x802291DC: lw          $v1, 0x20($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X20);
    // 0x802291E0: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x802291E4: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x802291E8: and         $s0, $v1, $v0
    ctx->r16 = ctx->r3 & ctx->r2;
    // 0x802291EC: beq         $s0, $zero, L_8022922C
    if (ctx->r16 == 0) {
        // 0x802291F0: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_8022922C;
    }
    // 0x802291F0: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x802291F4: sll         $a1, $s1, 4
    ctx->r5 = S32(ctx->r17 << 4);
    // 0x802291F8: addiu       $a1, $a1, 0x178
    ctx->r5 = ADD32(ctx->r5, 0X178);
    // 0x802291FC: jal         0x8002A33C
    // 0x80229200: addu        $a1, $s5, $a1
    ctx->r5 = ADD32(ctx->r21, ctx->r5);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80229200: addu        $a1, $s5, $a1
    ctx->r5 = ADD32(ctx->r21, ctx->r5);
    after_0:
    // 0x80229204: sll         $v1, $s1, 1
    ctx->r3 = S32(ctx->r17 << 1);
    // 0x80229208: addu        $a0, $s2, $v1
    ctx->r4 = ADD32(ctx->r18, ctx->r3);
    // 0x8022920C: lhu         $v0, 0x62($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X62);
    // 0x80229210: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80229214: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80229218: addu        $v1, $s5, $v1
    ctx->r3 = ADD32(ctx->r21, ctx->r3);
    // 0x8022921C: subu        $v0, $v0, $s0
    ctx->r2 = SUB32(ctx->r2, ctx->r16);
    // 0x80229220: sh          $v0, 0x62($a0)
    MEM_H(0X62, ctx->r4) = ctx->r2;
    // 0x80229224: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x80229228: sh          $v0, 0x186($v1)
    MEM_H(0X186, ctx->r3) = ctx->r2;
L_8022922C:
    // 0x8022922C: sll         $v0, $s1, 1
    ctx->r2 = S32(ctx->r17 << 1);
    // 0x80229230: addu        $v0, $s2, $v0
    ctx->r2 = ADD32(ctx->r18, ctx->r2);
    // 0x80229234: lh          $v0, 0x62($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X62);
    // 0x80229238: bgezl       $v0, L_8022930C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022923C: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_8022930C;
    }
    goto skip_0;
    // 0x8022923C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_0:
    // 0x80229240: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
    // 0x80229244: addu        $s0, $v0, $s2
    ctx->r16 = ADD32(ctx->r2, ctx->r18);
    // 0x80229248: lw          $a0, -0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, -0X4);
    // 0x8022924C: bne         $a0, $zero, L_802292E0
    if (ctx->r4 != 0) {
        // 0x80229250: addiu       $v1, $s1, -0x1
        ctx->r3 = ADD32(ctx->r17, -0X1);
            goto L_802292E0;
    }
    // 0x80229250: addiu       $v1, $s1, -0x1
    ctx->r3 = ADD32(ctx->r17, -0X1);
    // 0x80229254: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x80229258: lbu         $a1, -0x6670($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X6670);
    // 0x8022925C: lui         $a2, 0x8024
    ctx->r6 = S32(0X8024 << 16);
    // 0x80229260: lbu         $a2, -0x666F($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X666F);
    // 0x80229264: lui         $a3, 0x8024
    ctx->r7 = S32(0X8024 << 16);
    // 0x80229268: lh          $a3, -0x666E($a3)
    ctx->r7 = MEM_H(ctx->r7, -0X666E);
    // 0x8022926C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80229270: lw          $v0, -0x666C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X666C);
    // 0x80229274: addiu       $a0, $s3, 0x8
    ctx->r4 = ADD32(ctx->r19, 0X8);
    // 0x80229278: addu        $a0, $s2, $a0
    ctx->r4 = ADD32(ctx->r18, ctx->r4);
    // 0x8022927C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80229280: jal         0x80231268
    // 0x80229284: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80231268_ovl27(rdram, ctx);
        goto after_1;
    // 0x80229284: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_1:
    // 0x80229288: jal         0x8004F144
    // 0x8022928C: sw          $v0, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = ctx->r2;
    func_8004F144_2A544(rdram, ctx);
        goto after_2;
    // 0x8022928C: sw          $v0, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = ctx->r2;
    after_2:
    // 0x80229290: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80229294: beq         $a0, $zero, L_80229308
    if (ctx->r4 == 0) {
        // 0x80229298: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80229308;
    }
    // 0x80229298: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022929C: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x802292A0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802292A4: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x802292A8: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x802292AC: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
    // 0x802292B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802292B4: sb          $v0, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r2;
    // 0x802292B8: addiu       $v0, $s1, -0x1
    ctx->r2 = ADD32(ctx->r17, -0X1);
    // 0x802292BC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x802292C0: addu        $v0, $s2, $v0
    ctx->r2 = ADD32(ctx->r18, ctx->r2);
    // 0x802292C4: lhu         $v1, 0x10($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X10);
    // 0x802292C8: sh          $v1, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r3;
    // 0x802292CC: lhu         $v1, 0x12($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X12);
    // 0x802292D0: sh          $v1, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r3;
    // 0x802292D4: lhu         $v0, 0x14($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X14);
    // 0x802292D8: j           L_80229308
    // 0x802292DC: sh          $v0, 0x3C($a0)
    MEM_H(0X3C, ctx->r4) = ctx->r2;
        goto L_80229308;
    // 0x802292DC: sh          $v0, 0x3C($a0)
    MEM_H(0X3C, ctx->r4) = ctx->r2;
L_802292E0:
    // 0x802292E0: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x802292E4: addu        $v1, $s2, $v1
    ctx->r3 = ADD32(ctx->r18, ctx->r3);
    // 0x802292E8: lhu         $v0, 0x10($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X10);
    // 0x802292EC: sh          $v0, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r2;
    // 0x802292F0: lw          $a0, -0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, -0X4);
    // 0x802292F4: lhu         $v0, 0x12($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X12);
    // 0x802292F8: sh          $v0, 0x1E($a0)
    MEM_H(0X1E, ctx->r4) = ctx->r2;
    // 0x802292FC: lw          $a0, -0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, -0X4);
    // 0x80229300: lhu         $v0, 0x14($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X14);
    // 0x80229304: sh          $v0, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r2;
L_80229308:
    // 0x80229308: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_8022930C:
    // 0x8022930C: andi        $v0, $s4, 0xFF
    ctx->r2 = ctx->r20 & 0XFF;
    // 0x80229310: sltiu       $v0, $v0, 0x3
    ctx->r2 = ctx->r2 < 0X3 ? 1 : 0;
    // 0x80229314: bne         $v0, $zero, L_802291D4
    if (ctx->r2 != 0) {
        // 0x80229318: andi        $s1, $s4, 0xFF
        ctx->r17 = ctx->r20 & 0XFF;
            goto L_802291D4;
    }
    // 0x80229318: andi        $s1, $s4, 0xFF
    ctx->r17 = ctx->r20 & 0XFF;
    // 0x8022931C: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80229320: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80229324: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80229328: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8022932C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80229330: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80229334: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80229338: jr          $ra
    // 0x8022933C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022933C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022C178_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C178: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C17C: jr          $ra
    // 0x8022C180: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x8022C180: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_802264DC_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802264DC: lbu         $v0, 0xE($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XE);
    // 0x802264E0: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x802264E4: sh          $zero, 0x35C($a0)
    MEM_H(0X35C, ctx->r4) = 0;
    // 0x802264E8: sh          $zero, 0x35E($a0)
    MEM_H(0X35E, ctx->r4) = 0;
    // 0x802264EC: sh          $zero, 0x362($a0)
    MEM_H(0X362, ctx->r4) = 0;
    // 0x802264F0: sh          $zero, 0x46($a0)
    MEM_H(0X46, ctx->r4) = 0;
    // 0x802264F4: sh          $zero, 0x48($a0)
    MEM_H(0X48, ctx->r4) = 0;
    // 0x802264F8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802264FC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80226500: sh          $v0, 0x366($a0)
    MEM_H(0X366, ctx->r4) = ctx->r2;
    // 0x80226504: sh          $v0, 0x360($a0)
    MEM_H(0X360, ctx->r4) = ctx->r2;
    // 0x80226508: jr          $ra
    // 0x8022650C: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x8022650C: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
;}
RECOMP_FUNC void func_802352F8_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802352F8: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x802352FC: bne         $v0, $zero, L_80235310
    if (ctx->r2 != 0) {
        // 0x80235300: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_80235310;
    }
    // 0x80235300: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80235304: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x80235308: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x8023530C: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_80235310:
    // 0x80235310: jr          $ra
    // 0x80235314: nop

    TRACE_RETURN()
    return;
    // 0x80235314: nop

;}
RECOMP_FUNC void func_8022B438_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B438: lbu         $v0, 0xA6($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA6);
    // 0x8022B43C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022B440: beq         $v0, $zero, L_8022B458
    if (ctx->r2 == 0) {
        // 0x8022B444: addiu       $v1, $zero, 0x4C
        ctx->r3 = ADD32(0, 0X4C);
            goto L_8022B458;
    }
    // 0x8022B444: addiu       $v1, $zero, 0x4C
    ctx->r3 = ADD32(0, 0X4C);
    // 0x8022B448: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x8022B44C: sh          $v1, 0x44($a0)
    MEM_H(0X44, ctx->r4) = ctx->r3;
    // 0x8022B450: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B454: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_8022B458:
    // 0x8022B458: jr          $ra
    // 0x8022B45C: nop

    TRACE_RETURN()
    return;
    // 0x8022B45C: nop

;}
RECOMP_FUNC void func_80226264_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226264: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226268: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022626C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226270: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80226274: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226278: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8022627C: bgez        $v0, L_802262A0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80226280: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_802262A0;
    }
    // 0x80226280: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80226284: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80226288: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x8022628C: beq         $a0, $v0, L_802262A0
    if (ctx->r4 == ctx->r2) {
        // 0x80226290: nop
    
            goto L_802262A0;
    }
    // 0x80226290: nop

    // 0x80226294: jal         0x80227F28
    // 0x80226298: nop

    func_80227F28_ovl27(rdram, ctx);
        goto after_0;
    // 0x80226298: nop

    after_0:
    // 0x8022629C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_802262A0:
    // 0x802262A0: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x802262A4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802262A8: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x802262AC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802262B0: bne         $v0, $zero, L_8022631C
    if (ctx->r2 != 0) {
        // 0x802262B4: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_8022631C;
    }
    // 0x802262B4: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x802262B8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x802262BC: bne         $a0, $v0, L_802262D4
    if (ctx->r4 != ctx->r2) {
        // 0x802262C0: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_802262D4;
    }
    // 0x802262C0: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x802262C4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802262C8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x802262CC: j           L_802262EC
    // 0x802262D0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_802262EC;
    // 0x802262D0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802262D4:
    // 0x802262D4: jal         0x80227F38
    // 0x802262D8: nop

    func_80227F38_ovl27(rdram, ctx);
        goto after_1;
    // 0x802262D8: nop

    after_1:
    // 0x802262DC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802262E0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802262E4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802262E8: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_802262EC:
    // 0x802262EC: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x802262F0: beq         $v0, $zero, L_80226304
    if (ctx->r2 == 0) {
        // 0x802262F4: nop
    
            goto L_80226304;
    }
    // 0x802262F4: nop

    // 0x802262F8: lhu         $v0, 0xA($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA);
    // 0x802262FC: j           L_80226314
    // 0x80226300: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
        goto L_80226314;
    // 0x80226300: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
L_80226304:
    // 0x80226304: lhu         $v0, 0xA($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA);
    // 0x80226308: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022630C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80226310: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
L_80226314:
    // 0x80226314: lhu         $v0, 0x1E($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1E);
    // 0x80226318: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
L_8022631C:
    // 0x8022631C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80226320: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226324: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226328: jr          $ra
    // 0x8022632C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022632C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80236B94_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236B94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236B98: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236B9C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80236BA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80236BA4: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80236BA8: beq         $v1, $zero, L_80236BC0
    if (ctx->r3 == 0) {
        // 0x80236BAC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80236BC0;
    }
    // 0x80236BAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236BB0: beq         $v1, $v0, L_80236BFC
    if (ctx->r3 == ctx->r2) {
        // 0x80236BB4: nop
    
            goto L_80236BFC;
    }
    // 0x80236BB4: nop

    // 0x80236BB8: j           L_80236C10
    // 0x80236BBC: nop

        goto L_80236C10;
    // 0x80236BBC: nop

L_80236BC0:
    // 0x80236BC0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236BC4: addiu       $v0, $zero, -0x50
    ctx->r2 = ADD32(0, -0X50);
    // 0x80236BC8: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80236BCC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80236BD0: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80236BD4: addiu       $v0, $zero, 0x258
    ctx->r2 = ADD32(0, 0X258);
    // 0x80236BD8: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x80236BDC: addiu       $v0, $zero, 0x480
    ctx->r2 = ADD32(0, 0X480);
    // 0x80236BE0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80236BE4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80236BE8: jal         0x80050294
    // 0x80236BEC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80236BEC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_0:
    // 0x80236BF0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80236BF4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236BF8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80236BFC:
    // 0x80236BFC: jal         0x8005044C
    // 0x80236C00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x80236C00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80236C04: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x80236C08: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x80236C0C: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
L_80236C10:
    // 0x80236C10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80236C14: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80236C18: jr          $ra
    // 0x80236C1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80236C1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80235810_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235810: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80235814: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80235818: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x8023581C: addiu       $a1, $a0, 0x4E0
    ctx->r5 = ADD32(ctx->r4, 0X4E0);
    // 0x80235820: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80235824: beq         $v1, $v0, L_8023585C
    if (ctx->r3 == ctx->r2) {
        // 0x80235828: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_8023585C;
    }
    // 0x80235828: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023582C: slti        $v0, $v1, 0x1F
    ctx->r2 = SIGNED(ctx->r3) < 0X1F ? 1 : 0;
    // 0x80235830: beq         $v0, $zero, L_80235848
    if (ctx->r2 == 0) {
        // 0x80235834: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80235848;
    }
    // 0x80235834: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235838: beq         $v1, $v0, L_8023585C
    if (ctx->r3 == ctx->r2) {
        // 0x8023583C: nop
    
            goto L_8023585C;
    }
    // 0x8023583C: nop

    // 0x80235840: j           L_80235864
    // 0x80235844: nop

        goto L_80235864;
    // 0x80235844: nop

L_80235848:
    // 0x80235848: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x8023584C: beq         $v1, $v0, L_8023585C
    if (ctx->r3 == ctx->r2) {
        // 0x80235850: addiu       $v0, $zero, 0x50
        ctx->r2 = ADD32(0, 0X50);
            goto L_8023585C;
    }
    // 0x80235850: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x80235854: bne         $v1, $v0, L_80235864
    if (ctx->r3 != ctx->r2) {
        // 0x80235858: nop
    
            goto L_80235864;
    }
    // 0x80235858: nop

L_8023585C:
    // 0x8023585C: jal         0x80235CD8
    // 0x80235860: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    func_80235CD8_ovl27(rdram, ctx);
        goto after_0;
    // 0x80235860: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    after_0:
L_80235864:
    // 0x80235864: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80235868: jr          $ra
    // 0x8023586C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023586C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227004_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227004: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80227008: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022700C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227010: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80227014: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80227018: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022701C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227020: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80227024: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x80227028: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022702C: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80227030: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227034: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
    // 0x80227038: sh          $v1, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r3;
    // 0x8022703C: jal         0x80227F28
    // 0x80227040: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    func_80227F28_ovl27(rdram, ctx);
        goto after_0;
    // 0x80227040: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    after_0:
    // 0x80227044: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x80227048: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022704C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80227050: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x80227054: addiu       $s2, $s2, 0x49C4
    ctx->r18 = ADD32(ctx->r18, 0X49C4);
    // 0x80227058: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022705C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x80227060: jal         0x8004F820
    // 0x80227064: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x80227064: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_1:
    // 0x80227068: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022706C: bgez        $v0, L_8022709C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80227070: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_8022709C;
    }
    // 0x80227070: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x80227074: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80227078: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022707C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80227080: jal         0x8004F820
    // 0x80227084: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80227084: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x80227088: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022708C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80227090: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80227094: j           L_802270B8
    // 0x80227098: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_802270B8;
    // 0x80227098: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_8022709C:
    // 0x8022709C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802270A0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802270A4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802270A8: jal         0x8004F820
    // 0x802270AC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x802270AC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_3:
    // 0x802270B0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802270B4: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_802270B8:
    // 0x802270B8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802270BC: sh          $v0, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r2;
    // 0x802270C0: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x802270C4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802270C8: jal         0x800610AC
    // 0x802270CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_4;
    // 0x802270CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x802270D0: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x802270D4: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x802270D8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802270DC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802270E0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802270E4: jr          $ra
    // 0x802270E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802270E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802270EC_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802270EC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802270F0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802270F4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802270F8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802270FC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227100: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80227104: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80227108: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x8022710C: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x80227110: bne         $v0, $zero, L_8022716C
    if (ctx->r2 != 0) {
        // 0x80227114: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022716C;
    }
    // 0x80227114: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80227118: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022711C: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x80227120: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80227124: jal         0x8004F820
    // 0x80227128: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80227128: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_0:
    // 0x8022712C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80227130: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80227134: lw          $a0, 0x3FF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3FF0);
    // 0x80227138: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022713C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80227140: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x80227144: and         $a0, $a0, $v0
    ctx->r4 = ctx->r4 & ctx->r2;
    // 0x80227148: beq         $a0, $zero, L_8022716C
    if (ctx->r4 == 0) {
        // 0x8022714C: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022716C;
    }
    // 0x8022714C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80227150: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80227154: jal         0x80227E90
    // 0x80227158: nop

    func_80227E90_ovl27(rdram, ctx);
        goto after_1;
    // 0x80227158: nop

    after_1:
    // 0x8022715C: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x80227160: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227164: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80227168: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
L_8022716C:
    // 0x8022716C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80227170: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x80227174: bne         $v0, $zero, L_80227198
    if (ctx->r2 != 0) {
        // 0x80227178: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_80227198;
    }
    // 0x80227178: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8022717C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80227180: sb          $v1, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r3;
    // 0x80227184: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x80227188: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8022718C: jal         0x80227F28
    // 0x80227190: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_80227F28_ovl27(rdram, ctx);
        goto after_2;
    // 0x80227190: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_2:
    // 0x80227194: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80227198:
    // 0x80227198: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022719C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802271A0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802271A4: jr          $ra
    // 0x802271A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802271A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80232AEC_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232AEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232AF0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80232AF4: jal         0x8004F5C4
    // 0x80232AF8: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x80232AF8: nop

    after_0:
    // 0x80232AFC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80232B00: jr          $ra
    // 0x80232B04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232B04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80232B08: nop

    // 0x80232B0C: nop

;}
RECOMP_FUNC void func_8022B660_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B660: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B664: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B668: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B66C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B670: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022B674: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022B678: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022B67C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022B680: lw          $v0, -0x64E0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X64E0);
    // 0x8022B684: jalr        $v0
    // 0x8022B688: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022B688: nop

    after_0:
    // 0x8022B68C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022B690: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022B694: jal         0x8009A3B4
    // 0x8022B698: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022B698: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8022B69C: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022B6A0: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022B6A4: jal         0x8009A3B4
    // 0x8022B6A8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022B6A8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x8022B6AC: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022B6B0: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022B6B4: jal         0x8009A3B4
    // 0x8022B6B8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022B6B8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x8022B6BC: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x8022B6C0: bne         $v0, $zero, L_8022B6D8
    if (ctx->r2 != 0) {
        // 0x8022B6C4: nop
    
            goto L_8022B6D8;
    }
    // 0x8022B6C4: nop

    // 0x8022B6C8: jal         0x8005044C
    // 0x8022B6CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_4;
    // 0x8022B6CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022B6D0: j           L_8022B6E8
    // 0x8022B6D4: nop

        goto L_8022B6E8;
    // 0x8022B6D4: nop

L_8022B6D8:
    // 0x8022B6D8: jal         0x80051770
    // 0x8022B6DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051770_2CB70(rdram, ctx);
        goto after_5;
    // 0x8022B6DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8022B6E0: jal         0x80051248
    // 0x8022B6E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051248_2C648(rdram, ctx);
        goto after_6;
    // 0x8022B6E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_8022B6E8:
    // 0x8022B6E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B6EC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B6F0: jr          $ra
    // 0x8022B6F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B6F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228164_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228164: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80228168: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022816C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228170: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80228174: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228178: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022817C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80228180: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80228184: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80228188: ori         $v0, $v0, 0x42
    ctx->r2 = ctx->r2 | 0X42;
    // 0x8022818C: jal         0x8004D5D4
    // 0x80228190: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80228190: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80228194: addiu       $a0, $s0, 0x300
    ctx->r4 = ADD32(ctx->r16, 0X300);
    // 0x80228198: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022819C: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    // 0x802281A0: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802281A4: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x802281A8: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x802281AC: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x802281B0: sh          $zero, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = 0;
    // 0x802281B4: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x802281B8: sw          $zero, 0x70($s0)
    MEM_W(0X70, ctx->r16) = 0;
    // 0x802281BC: jal         0x800540BC
    // 0x802281C0: sw          $zero, 0x74($s0)
    MEM_W(0X74, ctx->r16) = 0;
    func_800540BC_2F4BC(rdram, ctx);
        goto after_1;
    // 0x802281C0: sw          $zero, 0x74($s0)
    MEM_W(0X74, ctx->r16) = 0;
    after_1:
    // 0x802281C4: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x802281C8: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x802281CC: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802281D0: addiu       $v0, $v0, -0x6700
    ctx->r2 = ADD32(ctx->r2, -0X6700);
    // 0x802281D4: sh          $zero, 0x330($s0)
    MEM_H(0X330, ctx->r16) = 0;
    // 0x802281D8: sh          $zero, 0x332($s0)
    MEM_H(0X332, ctx->r16) = 0;
    // 0x802281DC: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x802281E0: lw          $v0, 0x104($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X104);
    // 0x802281E4: lbu         $v0, 0xA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XA);
    // 0x802281E8: sb          $v0, 0x73($s0)
    MEM_B(0X73, ctx->r16) = ctx->r2;
    // 0x802281EC: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x802281F0: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x802281F4: lw          $v0, 0x104($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X104);
    // 0x802281F8: lbu         $v0, 0xC($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XC);
    // 0x802281FC: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80228200: sh          $v0, 0x32C($s0)
    MEM_H(0X32C, ctx->r16) = ctx->r2;
    // 0x80228204: lw          $v0, 0x104($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X104);
    // 0x80228208: addiu       $s1, $s0, 0x2C8
    ctx->r17 = ADD32(ctx->r16, 0X2C8);
    // 0x8022820C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80228210: lbu         $v1, 0xC($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XC);
    // 0x80228214: addiu       $a1, $zero, 0x4210
    ctx->r5 = ADD32(0, 0X4210);
    // 0x80228218: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022821C: sb          $zero, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = 0;
    // 0x80228220: sb          $zero, 0x34C($s0)
    MEM_B(0X34C, ctx->r16) = 0;
    // 0x80228224: sw          $zero, 0x2C8($s0)
    MEM_W(0X2C8, ctx->r16) = 0;
    // 0x80228228: sw          $zero, 0x2CC($s0)
    MEM_W(0X2CC, ctx->r16) = 0;
    // 0x8022822C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80228230: sh          $zero, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = 0;
    // 0x80228234: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x80228238: sh          $v1, 0x32E($s0)
    MEM_H(0X32E, ctx->r16) = ctx->r3;
    // 0x8022823C: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
L_80228240:
    // 0x80228240: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80228244: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x80228248: sh          $a1, 0x186($v0)
    MEM_H(0X186, ctx->r2) = ctx->r5;
    // 0x8022824C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80228250: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x80228254: sltiu       $v0, $v0, 0x5
    ctx->r2 = ctx->r2 < 0X5 ? 1 : 0;
    // 0x80228258: bne         $v0, $zero, L_80228240
    if (ctx->r2 != 0) {
        // 0x8022825C: andi        $v0, $a0, 0xFF
        ctx->r2 = ctx->r4 & 0XFF;
            goto L_80228240;
    }
    // 0x8022825C: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x80228260: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228264: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80228268: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022826C: jal         0x80050294
    // 0x80228270: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x80228270: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
    after_2:
    // 0x80228274: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80228278: addiu       $v0, $zero, 0x960
    ctx->r2 = ADD32(0, 0X960);
    // 0x8022827C: sh          $v0, 0x6C($s1)
    MEM_H(0X6C, ctx->r17) = ctx->r2;
    // 0x80228280: addiu       $v0, $zero, 0xB4
    ctx->r2 = ADD32(0, 0XB4);
    // 0x80228284: sh          $v0, 0x7C($s1)
    MEM_H(0X7C, ctx->r17) = ctx->r2;
    // 0x80228288: sb          $zero, 0x81($s1)
    MEM_B(0X81, ctx->r17) = 0;
    // 0x8022828C: sb          $zero, 0x82($s1)
    MEM_B(0X82, ctx->r17) = 0;
    // 0x80228290: sh          $zero, 0x6E($s1)
    MEM_H(0X6E, ctx->r17) = 0;
    // 0x80228294: sh          $zero, 0x70($s1)
    MEM_H(0X70, ctx->r17) = 0;
    // 0x80228298: sh          $zero, 0x72($s1)
    MEM_H(0X72, ctx->r17) = 0;
    // 0x8022829C: sb          $zero, 0x85($s1)
    MEM_B(0X85, ctx->r17) = 0;
    // 0x802282A0: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
L_802282A4:
    // 0x802282A4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x802282A8: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x802282AC: sw          $zero, 0x20($v0)
    MEM_W(0X20, ctx->r2) = 0;
    // 0x802282B0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x802282B4: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x802282B8: sltiu       $v0, $v0, 0x3
    ctx->r2 = ctx->r2 < 0X3 ? 1 : 0;
    // 0x802282BC: bne         $v0, $zero, L_802282A4
    if (ctx->r2 != 0) {
        // 0x802282C0: andi        $v0, $a0, 0xFF
        ctx->r2 = ctx->r4 & 0XFF;
            goto L_802282A4;
    }
    // 0x802282C0: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x802282C4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802282C8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802282CC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802282D0: jr          $ra
    // 0x802282D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802282D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802271AC_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802271AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802271B0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802271B4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802271B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802271BC: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802271C0: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x802271C4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802271C8: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x802271CC: jal         0x8004F820
    // 0x802271D0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x802271D0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x802271D4: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802271D8: lb          $a0, 0xA7($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XA7);
    // 0x802271DC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802271E0: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802271E4: bgez        $a0, L_80227208
    if (SIGNED(ctx->r4) >= 0) {
        // 0x802271E8: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80227208;
    }
    // 0x802271E8: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x802271EC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x802271F0: jal         0x80227F28
    // 0x802271F4: nop

    func_80227F28_ovl27(rdram, ctx);
        goto after_1;
    // 0x802271F4: nop

    after_1:
    // 0x802271F8: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x802271FC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227200: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80227204: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
L_80227208:
    // 0x80227208: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022720C: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x80227210: bne         $v0, $zero, L_80227234
    if (ctx->r2 != 0) {
        // 0x80227214: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_80227234;
    }
    // 0x80227214: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80227218: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022721C: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80227220: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
    // 0x80227224: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x80227228: jal         0x80227F28
    // 0x8022722C: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    func_80227F28_ovl27(rdram, ctx);
        goto after_2;
    // 0x8022722C: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    after_2:
    // 0x80227230: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80227234:
    // 0x80227234: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227238: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022723C: jr          $ra
    // 0x80227240: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227240: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B340_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B340: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022B344: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B348: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B34C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022B350: jal         0x8003F754
    // 0x8022B354: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_8003F754_1AB54(rdram, ctx);
        goto after_0;
    // 0x8022B354: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x8022B358: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022B35C: beq         $s1, $zero, L_8022B378
    if (ctx->r17 == 0) {
        // 0x8022B360: nop
    
            goto L_8022B378;
    }
    // 0x8022B360: nop

    // 0x8022B364: jal         0x800715F8
    // 0x8022B368: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800715F8_4C9F8(rdram, ctx);
        goto after_1;
    // 0x8022B368: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022B36C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022B370: jal         0x800711A8
    // 0x8022B374: ori         $a1, $zero, 0x8000
    ctx->r5 = 0 | 0X8000;
    func_800711A8_4C5A8(rdram, ctx);
        goto after_2;
    // 0x8022B374: ori         $a1, $zero, 0x8000
    ctx->r5 = 0 | 0X8000;
    after_2:
L_8022B378:
    // 0x8022B378: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022B37C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022B380: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B384: jr          $ra
    // 0x8022B388: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022B388: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80234214_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234214: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80234218: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023421C: jal         0x8004EEAC
    // 0x80234220: nop

    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_0;
    // 0x80234220: nop

    after_0:
    // 0x80234224: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x80234228: beq         $a2, $zero, L_80234298
    if (ctx->r6 == 0) {
        // 0x8023422C: addiu       $v0, $zero, -0x3E8
        ctx->r2 = ADD32(0, -0X3E8);
            goto L_80234298;
    }
    // 0x8023422C: addiu       $v0, $zero, -0x3E8
    ctx->r2 = ADD32(0, -0X3E8);
    // 0x80234230: sh          $v0, 0x14($a2)
    MEM_H(0X14, ctx->r6) = ctx->r2;
    // 0x80234234: lh          $v1, 0x14($a2)
    ctx->r3 = MEM_H(ctx->r6, 0X14);
    // 0x80234238: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023423C: sh          $v0, 0x16($a2)
    MEM_H(0X16, ctx->r6) = ctx->r2;
    // 0x80234240: lh          $a0, 0x16($a2)
    ctx->r4 = MEM_H(ctx->r6, 0X16);
    // 0x80234244: addiu       $v0, $zero, -0x99C
    ctx->r2 = ADD32(0, -0X99C);
    // 0x80234248: sh          $v0, 0x18($a2)
    MEM_H(0X18, ctx->r6) = ctx->r2;
    // 0x8023424C: lh          $a1, 0x18($a2)
    ctx->r5 = MEM_H(ctx->r6, 0X18);
    // 0x80234250: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234254: sb          $v0, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r2;
    // 0x80234258: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x8023425C: sb          $v0, 0x2($a2)
    MEM_B(0X2, ctx->r6) = ctx->r2;
    // 0x80234260: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x80234264: sb          $zero, 0x4($a2)
    MEM_B(0X4, ctx->r6) = 0;
    // 0x80234268: sb          $zero, 0x3($a2)
    MEM_B(0X3, ctx->r6) = 0;
    // 0x8023426C: sh          $v0, 0x56($a2)
    MEM_H(0X56, ctx->r6) = ctx->r2;
    // 0x80234270: sb          $zero, 0xC($a2)
    MEM_B(0XC, ctx->r6) = 0;
    // 0x80234274: sb          $zero, 0xD($a2)
    MEM_B(0XD, ctx->r6) = 0;
    // 0x80234278: sb          $zero, 0xE($a2)
    MEM_B(0XE, ctx->r6) = 0;
    // 0x8023427C: sb          $zero, 0xF($a2)
    MEM_B(0XF, ctx->r6) = 0;
    // 0x80234280: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80234284: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80234288: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8023428C: sw          $v1, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->r3;
    // 0x80234290: sw          $a0, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->r4;
    // 0x80234294: sw          $a1, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->r5;
L_80234298:
    // 0x80234298: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023429C: jr          $ra
    // 0x802342A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802342A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F37C_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F37C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022F380: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022F384: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022F388: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8022F38C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022F390: lbu         $v1, 0xB($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XB);
    // 0x8022F394: sltiu       $v0, $v1, 0x18
    ctx->r2 = ctx->r3 < 0X18 ? 1 : 0;
    // 0x8022F398: beq         $v0, $zero, L_8022F3EC
    if (ctx->r2 == 0) {
        // 0x8022F39C: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8022F3EC;
    }
    // 0x8022F39C: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022F3A0: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x8022F3A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F3A8: jal         0x8002C678
    // 0x8022F3AC: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    func_8002C678_7A78(rdram, ctx);
        goto after_0;
    // 0x8022F3AC: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    after_0:
    // 0x8022F3B0: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x8022F3B4: lui         $v1, 0x2AAA
    ctx->r3 = S32(0X2AAA << 16);
    // 0x8022F3B8: ori         $v1, $v1, 0xAAAB
    ctx->r3 = ctx->r3 | 0XAAAB;
    // 0x8022F3BC: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x8022F3C0: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022F3C4: lb          $a0, 0xC($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XC);
    // 0x8022F3C8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022F3CC: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    // 0x8022F3D0: mfhi        $a2
    ctx->r6 = hi;
    // 0x8022F3D4: sra         $v0, $a2, 2
    ctx->r2 = S32(SIGNED(ctx->r6) >> 2);
    // 0x8022F3D8: nop

    // 0x8022F3DC: jal         0x800319B4
    // 0x8022F3E0: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    func_800319B4_CDB4(rdram, ctx);
        goto after_1;
    // 0x8022F3E0: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    after_1:
    // 0x8022F3E4: j           L_8022F3F4
    // 0x8022F3E8: nop

        goto L_8022F3F4;
    // 0x8022F3E8: nop

L_8022F3EC:
    // 0x8022F3EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F3F0: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_8022F3F4:
    // 0x8022F3F4: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8022F3F8: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022F3FC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022F400: jr          $ra
    // 0x8022F404: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022F404: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_802296F0_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802296F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802296F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802296F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802296FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229700: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80229704: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80229708: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022970C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229710: lw          $v0, -0x6610($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6610);
    // 0x80229714: jalr        $v0
    // 0x80229718: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80229718: nop

    after_0:
    // 0x8022971C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80229720: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80229724: jal         0x8009A3B4
    // 0x80229728: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80229728: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8022972C: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80229730: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80229734: jal         0x8009A3B4
    // 0x80229738: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80229738: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x8022973C: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80229740: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80229744: jal         0x8009A3B4
    // 0x80229748: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80229748: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x8022974C: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x80229750: bne         $v0, $zero, L_80229768
    if (ctx->r2 != 0) {
        // 0x80229754: nop
    
            goto L_80229768;
    }
    // 0x80229754: nop

    // 0x80229758: jal         0x8005044C
    // 0x8022975C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_4;
    // 0x8022975C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80229760: j           L_80229778
    // 0x80229764: nop

        goto L_80229778;
    // 0x80229764: nop

L_80229768:
    // 0x80229768: jal         0x80051770
    // 0x8022976C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051770_2CB70(rdram, ctx);
        goto after_5;
    // 0x8022976C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80229770: jal         0x80051248
    // 0x80229774: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051248_2C648(rdram, ctx);
        goto after_6;
    // 0x80229774: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_80229778:
    // 0x80229778: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022977C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229780: jr          $ra
    // 0x80229784: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229784: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022CAA4_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CAA4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022CAA8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022CAAC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022CAB0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022CAB4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022CAB8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022CABC: lw          $v0, 0x388($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X388);
    // 0x8022CAC0: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022CAC4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022CAC8: beq         $v0, $zero, L_8022CB0C
    if (ctx->r2 == 0) {
        // 0x8022CACC: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_8022CB0C;
    }
    // 0x8022CACC: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x8022CAD0: lbu         $v0, 0x35D($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X35D);
    // 0x8022CAD4: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8022CAD8: addiu       $v1, $v1, -0x6438
    ctx->r3 = ADD32(ctx->r3, -0X6438);
    // 0x8022CADC: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x8022CAE0: beq         $v0, $zero, L_8022CD40
    if (ctx->r2 == 0) {
        // 0x8022CAE4: sw          $v1, 0x358($s0)
        MEM_W(0X358, ctx->r16) = ctx->r3;
            goto L_8022CD40;
    }
    // 0x8022CAE4: sw          $v1, 0x358($s0)
    MEM_W(0X358, ctx->r16) = ctx->r3;
    // 0x8022CAE8: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022CAEC: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x8022CAF0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022CAF4: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8022CAF8: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022CAFC: addiu       $v0, $v0, -0x63F8
    ctx->r2 = ADD32(ctx->r2, -0X63F8);
    // 0x8022CB00: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022CB04: j           L_8022CD40
    // 0x8022CB08: sw          $v1, 0x354($s0)
    MEM_W(0X354, ctx->r16) = ctx->r3;
        goto L_8022CD40;
    // 0x8022CB08: sw          $v1, 0x354($s0)
    MEM_W(0X354, ctx->r16) = ctx->r3;
L_8022CB0C:
    // 0x8022CB0C: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022CB10: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022CB14: beq         $v1, $v0, L_8022CE3C
    if (ctx->r3 == ctx->r2) {
        // 0x8022CB18: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_8022CE3C;
    }
    // 0x8022CB18: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022CB1C: beq         $v1, $v0, L_8022CE3C
    if (ctx->r3 == ctx->r2) {
        // 0x8022CB20: nop
    
            goto L_8022CE3C;
    }
    // 0x8022CB20: nop

    // 0x8022CB24: lbu         $v0, 0x35C($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X35C);
    // 0x8022CB28: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022CB2C: bne         $v0, $zero, L_8022CD4C
    if (ctx->r2 != 0) {
        // 0x8022CB30: andi        $a1, $a1, 0xFFFF
        ctx->r5 = ctx->r5 & 0XFFFF;
            goto L_8022CD4C;
    }
    // 0x8022CB30: andi        $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 & 0XFFFF;
    // 0x8022CB34: andi        $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 & 0XFFFF;
    // 0x8022CB38: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022CB3C: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    // 0x8022CB40: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x8022CB44: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022CB48: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022CB4C: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8022CB50: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8022CB54: lh          $a0, -0x63E8($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X63E8);
    // 0x8022CB58: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022CB5C: lhu         $v1, 0x49C4($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X49C4);
    // 0x8022CB60: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022CB64: lhu         $v0, 0x49C8($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X49C8);
    // 0x8022CB68: andi        $a3, $a3, 0xFFFF
    ctx->r7 = ctx->r7 & 0XFFFF;
    // 0x8022CB6C: sll         $t0, $v1, 16
    ctx->r8 = S32(ctx->r3 << 16);
    // 0x8022CB70: sw          $a0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r4;
    // 0x8022CB74: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022CB78: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CB7C: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
    // 0x8022CB80: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022CB84: lhu         $a0, 0x49C6($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X49C6);
    // 0x8022CB88: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x8022CB8C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022CB90: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022CB94: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022CB98: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022CB9C: lh          $v0, -0x63E6($at)
    ctx->r2 = MEM_H(ctx->r1, -0X63E6);
    // 0x8022CBA0: lui         $s1, 0xFFFF
    ctx->r17 = S32(0XFFFF << 16);
    // 0x8022CBA4: and         $a1, $a1, $s1
    ctx->r5 = ctx->r5 & ctx->r17;
    // 0x8022CBA8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022CBAC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022CBB0: lhu         $v0, 0x49CA($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X49CA);
    // 0x8022CBB4: lhu         $v1, 0x348($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X348);
    // 0x8022CBB8: or          $a0, $t0, $a0
    ctx->r4 = ctx->r8 | ctx->r4;
    // 0x8022CBBC: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
    // 0x8022CBC0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022CBC4: lhu         $v0, 0x34C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X34C);
    // 0x8022CBC8: or          $a2, $a2, $v1
    ctx->r6 = ctx->r6 | ctx->r3;
    // 0x8022CBCC: and         $a2, $a2, $s1
    ctx->r6 = ctx->r6 & ctx->r17;
    // 0x8022CBD0: lhu         $v1, 0x34E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X34E);
    // 0x8022CBD4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CBD8: or          $a3, $a3, $v0
    ctx->r7 = ctx->r7 | ctx->r2;
    // 0x8022CBDC: lhu         $v0, 0x34A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X34A);
    // 0x8022CBE0: and         $a3, $a3, $s1
    ctx->r7 = ctx->r7 & ctx->r17;
    // 0x8022CBE4: or          $a3, $a3, $v1
    ctx->r7 = ctx->r7 | ctx->r3;
    // 0x8022CBE8: jal         0x8022CE54
    // 0x8022CBEC: or          $a2, $a2, $v0
    ctx->r6 = ctx->r6 | ctx->r2;
    func_8022CE54_ovl27(rdram, ctx);
        goto after_0;
    // 0x8022CBEC: or          $a2, $a2, $v0
    ctx->r6 = ctx->r6 | ctx->r2;
    after_0:
    // 0x8022CBF0: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022CBF4: beq         $v0, $zero, L_8022CE3C
    if (ctx->r2 == 0) {
        // 0x8022CBF8: andi        $a0, $a0, 0xFFFF
        ctx->r4 = ctx->r4 & 0XFFFF;
            goto L_8022CE3C;
    }
    // 0x8022CBF8: andi        $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 & 0XFFFF;
    // 0x8022CBFC: andi        $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 & 0XFFFF;
    // 0x8022CC00: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022CC04: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    // 0x8022CC08: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x8022CC0C: lhu         $t0, 0x49CA($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0X49CA);
    // 0x8022CC10: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x8022CC14: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022CC18: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022CC1C: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8022CC20: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022CC24: lh          $v1, -0x63E4($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X63E4);
    // 0x8022CC28: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022CC2C: lhu         $v0, 0x49C4($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X49C4);
    // 0x8022CC30: andi        $a3, $a3, 0xFFFF
    ctx->r7 = ctx->r7 & 0XFFFF;
    // 0x8022CC34: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8022CC38: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022CC3C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CC40: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x8022CC44: and         $a0, $a0, $s1
    ctx->r4 = ctx->r4 & ctx->r17;
    // 0x8022CC48: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x8022CC4C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022CC50: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022CC54: lhu         $v1, 0x49C8($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X49C8);
    // 0x8022CC58: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022CC5C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022CC60: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022CC64: lh          $v0, -0x63E2($at)
    ctx->r2 = MEM_H(ctx->r1, -0X63E2);
    // 0x8022CC68: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022CC6C: or          $a1, $a1, $v1
    ctx->r5 = ctx->r5 | ctx->r3;
    // 0x8022CC70: and         $a1, $a1, $s1
    ctx->r5 = ctx->r5 & ctx->r17;
    // 0x8022CC74: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022CC78: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022CC7C: lhu         $v0, 0x49C6($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X49C6);
    // 0x8022CC80: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x8022CC84: or          $a1, $a1, $t0
    ctx->r5 = ctx->r5 | ctx->r8;
    // 0x8022CC88: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x8022CC8C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022CC90: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x8022CC94: or          $a2, $a2, $v1
    ctx->r6 = ctx->r6 | ctx->r3;
    // 0x8022CC98: and         $a2, $a2, $s1
    ctx->r6 = ctx->r6 & ctx->r17;
    // 0x8022CC9C: lhu         $v1, 0x1A($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1A);
    // 0x8022CCA0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CCA4: or          $a3, $a3, $v0
    ctx->r7 = ctx->r7 | ctx->r2;
    // 0x8022CCA8: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x8022CCAC: and         $a3, $a3, $s1
    ctx->r7 = ctx->r7 & ctx->r17;
    // 0x8022CCB0: or          $a3, $a3, $v1
    ctx->r7 = ctx->r7 | ctx->r3;
    // 0x8022CCB4: jal         0x8022CE54
    // 0x8022CCB8: or          $a2, $a2, $v0
    ctx->r6 = ctx->r6 | ctx->r2;
    func_8022CE54_ovl27(rdram, ctx);
        goto after_1;
    // 0x8022CCB8: or          $a2, $a2, $v0
    ctx->r6 = ctx->r6 | ctx->r2;
    after_1:
    // 0x8022CCBC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022CCC0: beq         $v0, $zero, L_8022CE3C
    if (ctx->r2 == 0) {
        // 0x8022CCC4: nop
    
            goto L_8022CE3C;
    }
    // 0x8022CCC4: nop

    // 0x8022CCC8: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022CCCC: bne         $v0, $zero, L_8022CD00
    if (ctx->r2 != 0) {
        // 0x8022CCD0: nop
    
            goto L_8022CD00;
    }
    // 0x8022CCD0: nop

    // 0x8022CCD4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022CCD8: lbu         $a0, 0x49B9($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X49B9);
    // 0x8022CCDC: sltiu       $v1, $a0, 0x7
    ctx->r3 = ctx->r4 < 0X7 ? 1 : 0;
    // 0x8022CCE0: xori        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 ^ 0X1;
    // 0x8022CCE4: xori        $v0, $a0, 0x2
    ctx->r2 = ctx->r4 ^ 0X2;
    // 0x8022CCE8: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8022CCEC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022CCF0: bne         $v1, $zero, L_8022CD00
    if (ctx->r3 != 0) {
        // 0x8022CCF4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022CD00;
    }
    // 0x8022CCF4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022CCF8: bne         $a0, $v0, L_8022CE3C
    if (ctx->r4 != ctx->r2) {
        // 0x8022CCFC: nop
    
            goto L_8022CE3C;
    }
    // 0x8022CCFC: nop

L_8022CD00:
    // 0x8022CD00: lbu         $v0, 0x14($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X14);
    // 0x8022CD04: lbu         $v1, 0x15($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X15);
    // 0x8022CD08: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022CD0C: beq         $v1, $zero, L_8022CE3C
    if (ctx->r3 == 0) {
        // 0x8022CD10: sb          $v0, 0x14($s2)
        MEM_B(0X14, ctx->r18) = ctx->r2;
            goto L_8022CE3C;
    }
    // 0x8022CD10: sb          $v0, 0x14($s2)
    MEM_B(0X14, ctx->r18) = ctx->r2;
    // 0x8022CD14: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022CD18: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022CD1C: addiu       $v0, $v0, -0x6458
    ctx->r2 = ADD32(ctx->r2, -0X6458);
    // 0x8022CD20: sw          $v0, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r2;
    // 0x8022CD24: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x8022CD28: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022CD2C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022CD30: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8022CD34: addiu       $v1, $v1, -0x6408
    ctx->r3 = ADD32(ctx->r3, -0X6408);
    // 0x8022CD38: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022CD3C: sw          $v0, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r2;
L_8022CD40:
    // 0x8022CD40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CD44: j           L_8022CE3C
    // 0x8022CD48: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8022CE3C;
    // 0x8022CD48: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022CD4C:
    // 0x8022CD4C: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022CD50: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    // 0x8022CD54: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x8022CD58: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022CD5C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022CD60: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8022CD64: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8022CD68: lh          $a0, -0x63E8($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X63E8);
    // 0x8022CD6C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022CD70: lhu         $v1, 0x49C4($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X49C4);
    // 0x8022CD74: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022CD78: lhu         $v0, 0x49C8($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X49C8);
    // 0x8022CD7C: andi        $a3, $a3, 0xFFFF
    ctx->r7 = ctx->r7 & 0XFFFF;
    // 0x8022CD80: sll         $t1, $v1, 16
    ctx->r9 = S32(ctx->r3 << 16);
    // 0x8022CD84: sw          $a0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r4;
    // 0x8022CD88: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022CD8C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CD90: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
    // 0x8022CD94: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022CD98: lhu         $a0, 0x49C6($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X49C6);
    // 0x8022CD9C: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x8022CDA0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022CDA4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022CDA8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022CDAC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022CDB0: lh          $v0, -0x63E6($at)
    ctx->r2 = MEM_H(ctx->r1, -0X63E6);
    // 0x8022CDB4: lui         $t0, 0xFFFF
    ctx->r8 = S32(0XFFFF << 16);
    // 0x8022CDB8: and         $a1, $a1, $t0
    ctx->r5 = ctx->r5 & ctx->r8;
    // 0x8022CDBC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022CDC0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022CDC4: lhu         $v0, 0x49CA($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X49CA);
    // 0x8022CDC8: lhu         $v1, 0x348($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X348);
    // 0x8022CDCC: or          $a0, $t1, $a0
    ctx->r4 = ctx->r9 | ctx->r4;
    // 0x8022CDD0: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
    // 0x8022CDD4: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022CDD8: lhu         $v0, 0x34C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X34C);
    // 0x8022CDDC: or          $a2, $a2, $v1
    ctx->r6 = ctx->r6 | ctx->r3;
    // 0x8022CDE0: and         $a2, $a2, $t0
    ctx->r6 = ctx->r6 & ctx->r8;
    // 0x8022CDE4: lhu         $v1, 0x34E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X34E);
    // 0x8022CDE8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CDEC: or          $a3, $a3, $v0
    ctx->r7 = ctx->r7 | ctx->r2;
    // 0x8022CDF0: lhu         $v0, 0x34A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X34A);
    // 0x8022CDF4: and         $a3, $a3, $t0
    ctx->r7 = ctx->r7 & ctx->r8;
    // 0x8022CDF8: or          $a3, $a3, $v1
    ctx->r7 = ctx->r7 | ctx->r3;
    // 0x8022CDFC: jal         0x8022CE54
    // 0x8022CE00: or          $a2, $a2, $v0
    ctx->r6 = ctx->r6 | ctx->r2;
    func_8022CE54_ovl27(rdram, ctx);
        goto after_2;
    // 0x8022CE00: or          $a2, $a2, $v0
    ctx->r6 = ctx->r6 | ctx->r2;
    after_2:
    // 0x8022CE04: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022CE08: bne         $v0, $zero, L_8022CE3C
    if (ctx->r2 != 0) {
        // 0x8022CE0C: nop
    
            goto L_8022CE3C;
    }
    // 0x8022CE0C: nop

    // 0x8022CE10: lbu         $v0, 0x35C($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X35C);
    // 0x8022CE14: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022CE18: andi        $v0, $v0, 0xFE
    ctx->r2 = ctx->r2 & 0XFE;
    // 0x8022CE1C: sb          $v0, 0x35C($s0)
    MEM_B(0X35C, ctx->r16) = ctx->r2;
    // 0x8022CE20: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x8022CE24: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022CE28: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022CE2C: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8022CE30: addiu       $v1, $v1, -0x6418
    ctx->r3 = ADD32(ctx->r3, -0X6418);
    // 0x8022CE34: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022CE38: sw          $v0, 0x354($s0)
    MEM_W(0X354, ctx->r16) = ctx->r2;
L_8022CE3C:
    // 0x8022CE3C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022CE40: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022CE44: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022CE48: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022CE4C: jr          $ra
    // 0x8022CE50: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022CE50: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802352B0_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802352B0: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x802352B4: bne         $v0, $zero, L_802352D8
    if (ctx->r2 != 0) {
        // 0x802352B8: addiu       $v0, $zero, 0x11
        ctx->r2 = ADD32(0, 0X11);
            goto L_802352D8;
    }
    // 0x802352B8: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x802352BC: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x802352C0: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x802352C4: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x802352C8: lw          $v1, 0x30($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X30);
    // 0x802352CC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802352D0: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x802352D4: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_802352D8:
    // 0x802352D8: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x802352DC: addiu       $v0, $zero, 0x6E
    ctx->r2 = ADD32(0, 0X6E);
    // 0x802352E0: bne         $v1, $v0, L_802352F0
    if (ctx->r3 != ctx->r2) {
        // 0x802352E4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802352F0;
    }
    // 0x802352E4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802352E8: lw          $v1, 0x30($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X30);
    // 0x802352EC: sb          $v0, 0xA($v1)
    MEM_B(0XA, ctx->r3) = ctx->r2;
L_802352F0:
    // 0x802352F0: jr          $ra
    // 0x802352F4: nop

    TRACE_RETURN()
    return;
    // 0x802352F4: nop

;}
RECOMP_FUNC void func_8023363C_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023363C: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80233640: bne         $v0, $zero, L_80233670
    if (ctx->r2 != 0) {
        // 0x80233644: addiu       $v0, $zero, -0x12C
        ctx->r2 = ADD32(0, -0X12C);
            goto L_80233670;
    }
    // 0x80233644: addiu       $v0, $zero, -0x12C
    ctx->r2 = ADD32(0, -0X12C);
    // 0x80233648: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023364C: sh          $v0, 0x4DE8($at)
    MEM_H(0X4DE8, ctx->r1) = ctx->r2;
    // 0x80233650: lui         $v0, 0xFED4
    ctx->r2 = S32(0XFED4 << 16);
    // 0x80233654: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80233658: sw          $v0, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = ctx->r2;
    // 0x8023365C: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x80233660: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80233664: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80233668: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x8023366C: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
L_80233670:
    // 0x80233670: jr          $ra
    // 0x80233674: nop

    TRACE_RETURN()
    return;
    // 0x80233674: nop

;}
RECOMP_FUNC void func_8022F410_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F410: jr          $ra
    // 0x8022F414: nop

    TRACE_RETURN()
    return;
    // 0x8022F414: nop

    // 0x8022F418: nop

    // 0x8022F41C: nop

;}
RECOMP_FUNC void func_80225520_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225520: jr          $ra
    // 0x80225524: nop

    TRACE_RETURN()
    return;
    // 0x80225524: nop

;}
RECOMP_FUNC void func_8023629C_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023629C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802362A0: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x802362A4: sb          $zero, 0xE($a1)
    MEM_B(0XE, ctx->r5) = 0;
    // 0x802362A8: sb          $zero, 0xC($a1)
    MEM_B(0XC, ctx->r5) = 0;
    // 0x802362AC: sb          $v0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r2;
    // 0x802362B0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802362B4: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x802362B8: lw          $v0, -0x4414($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4414);
    // 0x802362BC: jr          $ra
    // 0x802362C0: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x802362C0: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_80226E94_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226E94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226E98: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226E9C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226EA0: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80226EA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226EA8: jal         0x80227FC4
    // 0x80226EAC: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_80227FC4_ovl27(rdram, ctx);
        goto after_0;
    // 0x80226EAC: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_0:
    // 0x80226EB0: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80226EB4: beq         $v0, $zero, L_80226EE0
    if (ctx->r2 == 0) {
        // 0x80226EB8: addiu       $v1, $zero, 0x6
        ctx->r3 = ADD32(0, 0X6);
            goto L_80226EE0;
    }
    // 0x80226EB8: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x80226EBC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80226EC0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226EC4: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80226EC8: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x80226ECC: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    // 0x80226ED0: jal         0x80227F28
    // 0x80226ED4: sh          $a1, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r5;
    func_80227F28_ovl27(rdram, ctx);
        goto after_1;
    // 0x80226ED4: sh          $a1, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r5;
    after_1:
    // 0x80226ED8: j           L_80226F20
    // 0x80226EDC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_80226F20;
    // 0x80226EDC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80226EE0:
    // 0x80226EE0: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x80226EE4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226EE8: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80226EEC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226EF0: bne         $v0, $zero, L_80226F00
    if (ctx->r2 != 0) {
        // 0x80226EF4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80226F00;
    }
    // 0x80226EF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226EF8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226EFC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80226F00:
    // 0x80226F00: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80226F04: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226F08: jal         0x8004DA90
    // 0x80226F0C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x80226F0C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x80226F10: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80226F14: addiu       $v0, $v0, 0x80
    ctx->r2 = ADD32(ctx->r2, 0X80);
    // 0x80226F18: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80226F1C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_80226F20:
    // 0x80226F20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226F24: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226F28: jr          $ra
    // 0x80226F2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226F2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80235CD8_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235CD8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80235CDC: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x80235CE0: sh          $zero, 0x4($a1)
    MEM_H(0X4, ctx->r5) = 0;
    // 0x80235CE4: sh          $zero, 0x0($a1)
    MEM_H(0X0, ctx->r5) = 0;
    // 0x80235CE8: sh          $zero, 0xA($a1)
    MEM_H(0XA, ctx->r5) = 0;
    // 0x80235CEC: sh          $zero, 0x6($a1)
    MEM_H(0X6, ctx->r5) = 0;
    // 0x80235CF0: sh          $v0, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r2;
    // 0x80235CF4: sh          $v0, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r2;
    // 0x80235CF8: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80235CFC: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80235D00: lw          $v0, -0x4608($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4608);
    // 0x80235D04: sw          $v0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r2;
    // 0x80235D08: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80235D0C: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80235D10: lw          $v0, -0x4588($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4588);
    // 0x80235D14: jr          $ra
    // 0x80235D18: sw          $v0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80235D18: sw          $v0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_80237C64_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237C64: jr          $ra
    // 0x80237C68: nop

    TRACE_RETURN()
    return;
    // 0x80237C68: nop

;}
RECOMP_FUNC void func_80237F44_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237F44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80237F48: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80237F4C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80237F50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80237F54: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80237F58: beq         $v1, $zero, L_80237F70
    if (ctx->r3 == 0) {
        // 0x80237F5C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80237F70;
    }
    // 0x80237F5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237F60: beq         $v1, $v0, L_80237F94
    if (ctx->r3 == ctx->r2) {
        // 0x80237F64: nop
    
            goto L_80237F94;
    }
    // 0x80237F64: nop

    // 0x80237F68: j           L_80237FA8
    // 0x80237F6C: nop

        goto L_80237FA8;
    // 0x80237F6C: nop

L_80237F70:
    // 0x80237F70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237F74: addiu       $v0, $zero, 0x480
    ctx->r2 = ADD32(0, 0X480);
    // 0x80237F78: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x80237F7C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80237F80: jal         0x80050294
    // 0x80237F84: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80237F84: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_0:
    // 0x80237F88: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80237F8C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80237F90: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80237F94:
    // 0x80237F94: jal         0x8005044C
    // 0x80237F98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x80237F98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80237F9C: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x80237FA0: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x80237FA4: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
L_80237FA8:
    // 0x80237FA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80237FAC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80237FB0: jr          $ra
    // 0x80237FB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80237FB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225E54_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225E54: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x80225E58: bltzl       $v0, L_80225E60
    if (SIGNED(ctx->r2) < 0) {
        // 0x80225E5C: sb          $zero, 0xA($a0)
        MEM_B(0XA, ctx->r4) = 0;
            goto L_80225E60;
    }
    goto skip_0;
    // 0x80225E5C: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    skip_0:
L_80225E60:
    // 0x80225E60: jr          $ra
    // 0x80225E64: nop

    TRACE_RETURN()
    return;
    // 0x80225E64: nop

;}
RECOMP_FUNC void func_8022D7E8_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D7E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D7EC: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8022D7F0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022D7F4: addiu       $a0, $zero, 0x141
    ctx->r4 = ADD32(0, 0X141);
    // 0x8022D7F8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022D7FC: sb          $v0, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r2;
    // 0x8022D800: jal         0x8002A33C
    // 0x8022D804: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8022D804: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_0:
    // 0x8022D808: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022D80C: jr          $ra
    // 0x8022D810: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D810: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80230174_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230174: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80230178: lw          $v0, -0x3BC8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3BC8);
    // 0x8023017C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230180: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x80230184: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80230188: lui         $v1, 0x501
    ctx->r3 = S32(0X501 << 16);
    // 0x8023018C: bne         $v0, $v1, L_802301AC
    if (ctx->r2 != ctx->r3) {
        // 0x80230190: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_802301AC;
    }
    // 0x80230190: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80230194: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x80230198: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x8023019C: addiu       $a0, $a0, 0x681
    ctx->r4 = ADD32(ctx->r4, 0X681);
    // 0x802301A0: andi        $v0, $a1, 0xFF
    ctx->r2 = ctx->r5 & 0XFF;
    // 0x802301A4: jal         0x8006036C
    // 0x802301A8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    func_8006036C_3B76C(rdram, ctx);
        goto after_0;
    // 0x802301A8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_0:
L_802301AC:
    // 0x802301AC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802301B0: jr          $ra
    // 0x802301B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802301B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802301B8: nop

    // 0x802301BC: nop

;}
RECOMP_FUNC void func_8022DFAC_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DFAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022DFB0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022DFB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022DFB8: jal         0x8004F144
    // 0x8022DFBC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8022DFBC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8022DFC0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8022DFC4: beql        $a1, $zero, L_8022DFF8
    if (ctx->r5 == 0) {
        // 0x8022DFC8: sb          $zero, 0x0($s0)
        MEM_B(0X0, ctx->r16) = 0;
            goto L_8022DFF8;
    }
    goto skip_0;
    // 0x8022DFC8: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    skip_0:
    // 0x8022DFCC: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8022DFD0: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022DFD4: beq         $v0, $zero, L_8022DFEC
    if (ctx->r2 == 0) {
        // 0x8022DFD8: nop
    
            goto L_8022DFEC;
    }
    // 0x8022DFD8: nop

    // 0x8022DFDC: jal         0x8022E010
    // 0x8022DFE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022E010_ovl27(rdram, ctx);
        goto after_1;
    // 0x8022DFE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022DFE4: j           L_8022DFF8
    // 0x8022DFE8: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
        goto L_8022DFF8;
    // 0x8022DFE8: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_8022DFEC:
    // 0x8022DFEC: jal         0x8022E050
    // 0x8022DFF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022E050_ovl27(rdram, ctx);
        goto after_2;
    // 0x8022DFF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022DFF4: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_8022DFF8:
    // 0x8022DFF8: jal         0x8004F4F8
    // 0x8022DFFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_3;
    // 0x8022DFFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022E000: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022E004: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E008: jr          $ra
    // 0x8022E00C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E00C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023245C_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023245C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80232460: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80232464: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x80232468: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8023246C: addiu       $s6, $s5, 0x28
    ctx->r22 = ADD32(ctx->r21, 0X28);
    // 0x80232470: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80232474: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x80232478: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8023247C: lui         $fp, 0x3D48
    ctx->r30 = S32(0X3D48 << 16);
    // 0x80232480: ori         $fp, $fp, 0x40
    ctx->r30 = ctx->r30 | 0X40;
    // 0x80232484: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80232488: lui         $s7, 0x2E
    ctx->r23 = S32(0X2E << 16);
    // 0x8023248C: ori         $s7, $s7, 0x5F
    ctx->r23 = ctx->r23 | 0X5F;
    // 0x80232490: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80232494: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80232498: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8023249C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802324A0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802324A4: andi        $v0, $s4, 0xFF
    ctx->r2 = ctx->r20 & 0XFF;
L_802324A8:
    // 0x802324A8: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802324AC: addu        $v1, $v0, $s6
    ctx->r3 = ADD32(ctx->r2, ctx->r22);
    // 0x802324B0: lbu         $a0, 0x0($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X0);
    // 0x802324B4: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x802324B8: sltiu       $v0, $v0, 0x80
    ctx->r2 = ctx->r2 < 0X80 ? 1 : 0;
    // 0x802324BC: beq         $v0, $zero, L_802324CC
    if (ctx->r2 == 0) {
        // 0x802324C0: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_802324CC;
    }
    // 0x802324C0: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x802324C4: j           L_802324D0
    // 0x802324C8: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
        goto L_802324D0;
    // 0x802324C8: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
L_802324CC:
    // 0x802324CC: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
L_802324D0:
    // 0x802324D0: andi        $s1, $s4, 0xFF
    ctx->r17 = ctx->r20 & 0XFF;
    // 0x802324D4: sll         $s1, $s1, 1
    ctx->r17 = S32(ctx->r17 << 1);
    // 0x802324D8: addu        $s1, $s1, $s6
    ctx->r17 = ADD32(ctx->r17, ctx->r22);
    // 0x802324DC: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x802324E0: lbu         $a0, 0xE($s5)
    ctx->r4 = MEM_BU(ctx->r21, 0XE);
    // 0x802324E4: addiu       $s2, $zero, 0x40
    ctx->r18 = ADD32(0, 0X40);
    // 0x802324E8: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
    // 0x802324EC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802324F0: subu        $s2, $s2, $v0
    ctx->r18 = SUB32(ctx->r18, ctx->r2);
    // 0x802324F4: andi        $a0, $a0, 0x7F
    ctx->r4 = ctx->r4 & 0X7F;
    // 0x802324F8: jal         0x800324B4
    // 0x802324FC: sll         $a0, $a0, 5
    ctx->r4 = S32(ctx->r4 << 5);
    func_800324B4_D8B4(rdram, ctx);
        goto after_0;
    // 0x802324FC: sll         $a0, $a0, 5
    ctx->r4 = S32(ctx->r4 << 5);
    after_0:
    // 0x80232500: sll         $s0, $v0, 4
    ctx->r16 = S32(ctx->r2 << 4);
    // 0x80232504: subu        $s0, $s0, $v0
    ctx->r16 = SUB32(ctx->r16, ctx->r2);
    // 0x80232508: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    // 0x8023250C: lbu         $a0, 0x0($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X0);
    // 0x80232510: sra         $s0, $s0, 12
    ctx->r16 = S32(SIGNED(ctx->r16) >> 12);
    // 0x80232514: addiu       $s0, $s0, 0x50
    ctx->r16 = ADD32(ctx->r16, 0X50);
    // 0x80232518: srl         $v0, $a0, 1
    ctx->r2 = S32(U32(ctx->r4) >> 1);
    // 0x8023251C: addiu       $s3, $v0, 0x14
    ctx->r19 = ADD32(ctx->r2, 0X14);
    // 0x80232520: jal         0x800324B4
    // 0x80232524: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    func_800324B4_D8B4(rdram, ctx);
        goto after_1;
    // 0x80232524: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    after_1:
    // 0x80232528: andi        $s0, $s0, 0xFFFF
    ctx->r16 = ctx->r16 & 0XFFFF;
    // 0x8023252C: mult        $v0, $s0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80232530: mflo        $v0
    ctx->r2 = lo;
    // 0x80232534: lhu         $v1, 0x1C($s5)
    ctx->r3 = MEM_HU(ctx->r21, 0X1C);
    // 0x80232538: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x8023253C: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x80232540: lbu         $a2, 0xB61($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0XB61);
    // 0x80232544: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80232548: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023254C: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    // 0x80232550: lhu         $a0, 0x20($s5)
    ctx->r4 = MEM_HU(ctx->r21, 0X20);
    // 0x80232554: andi        $v0, $s3, 0xFFFF
    ctx->r2 = ctx->r19 & 0XFFFF;
    // 0x80232558: srav        $s3, $v0, $a2
    ctx->r19 = S32(SIGNED(ctx->r2) >> (ctx->r6 & 31));
    // 0x8023255C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80232560: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80232564: srav        $v1, $v1, $a2
    ctx->r3 = S32(SIGNED(ctx->r3) >> (ctx->r6 & 31));
    // 0x80232568: sh          $a0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r4;
    // 0x8023256C: lbu         $a1, 0x0($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X0);
    // 0x80232570: lhu         $v0, 0x1E($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X1E);
    // 0x80232574: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80232578: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8023257C: srav        $a0, $a0, $a2
    ctx->r4 = S32(SIGNED(ctx->r4) >> (ctx->r6 & 31));
    // 0x80232580: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    // 0x80232584: sh          $a0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r4;
    // 0x80232588: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x8023258C: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x80232590: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x80232594: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80232598: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023259C: srav        $v0, $v0, $a2
    ctx->r2 = S32(SIGNED(ctx->r2) >> (ctx->r6 & 31));
    // 0x802325A0: jal         0x8003B878
    // 0x802325A4: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    func_8003B878_16C78(rdram, ctx);
        goto after_2;
    // 0x802325A4: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    after_2:
    // 0x802325A8: andi        $s2, $s2, 0xFF
    ctx->r18 = ctx->r18 & 0XFF;
    // 0x802325AC: sll         $a1, $s2, 16
    ctx->r5 = S32(ctx->r18 << 16);
    // 0x802325B0: sll         $a0, $s2, 8
    ctx->r4 = S32(ctx->r18 << 8);
    // 0x802325B4: lui         $v1, 0x2E00
    ctx->r3 = S32(0X2E00 << 16);
    // 0x802325B8: or          $a0, $a0, $v1
    ctx->r4 = ctx->r4 | ctx->r3;
    // 0x802325BC: lw          $a2, 0x10($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X10);
    // 0x802325C0: lw          $a3, 0x14($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X14);
    // 0x802325C4: or          $a1, $a1, $a0
    ctx->r5 = ctx->r5 | ctx->r4;
    // 0x802325C8: or          $a1, $a1, $s2
    ctx->r5 = ctx->r5 | ctx->r18;
    // 0x802325CC: addiu       $t0, $zero, 0x1F40
    ctx->r8 = ADD32(0, 0X1F40);
    // 0x802325D0: sw          $t0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r8;
    // 0x802325D4: addiu       $t0, $zero, 0x1F5F
    ctx->r8 = ADD32(0, 0X1F5F);
    // 0x802325D8: andi        $v1, $s3, 0xFFFF
    ctx->r3 = ctx->r19 & 0XFFFF;
    // 0x802325DC: sw          $a1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r5;
    // 0x802325E0: sw          $fp, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r30;
    // 0x802325E4: sw          $s7, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r23;
    // 0x802325E8: sw          $t0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r8;
    // 0x802325EC: sw          $v1, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r3;
    // 0x802325F0: sw          $zero, 0x20($v0)
    MEM_W(0X20, ctx->r2) = 0;
    // 0x802325F4: sw          $a2, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r6;
    // 0x802325F8: sw          $a3, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r7;
    // 0x802325FC: andi        $v0, $s4, 0xFF
    ctx->r2 = ctx->r20 & 0XFF;
    // 0x80232600: sltiu       $v0, $v0, 0x10
    ctx->r2 = ctx->r2 < 0X10 ? 1 : 0;
    // 0x80232604: bne         $v0, $zero, L_802324A8
    if (ctx->r2 != 0) {
        // 0x80232608: andi        $v0, $s4, 0xFF
        ctx->r2 = ctx->r20 & 0XFF;
            goto L_802324A8;
    }
    // 0x80232608: andi        $v0, $s4, 0xFF
    ctx->r2 = ctx->r20 & 0XFF;
    // 0x8023260C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80232610: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80232614: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80232618: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8023261C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80232620: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80232624: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80232628: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8023262C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80232630: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80232634: jr          $ra
    // 0x80232638: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80232638: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80226470_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226470: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226474: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226478: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022647C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226480: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x80226484: bgez        $v0, L_8022649C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80226488: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_8022649C;
    }
    // 0x80226488: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022648C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80226490: jal         0x80227F38
    // 0x80226494: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    func_80227F38_ovl27(rdram, ctx);
        goto after_0;
    // 0x80226494: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    after_0:
    // 0x80226498: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022649C:
    // 0x8022649C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802264A0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802264A4: jr          $ra
    // 0x802264A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802264A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802264AC_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802264AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802264B0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802264B4: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x802264B8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802264BC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802264C0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802264C4: lw          $v0, -0x6828($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6828);
    // 0x802264C8: jalr        $v0
    // 0x802264CC: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802264CC: nop

    after_0:
    // 0x802264D0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802264D4: jr          $ra
    // 0x802264D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802264D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80238394_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238394: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80238398: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x8023839C: sb          $zero, 0xE($a1)
    MEM_B(0XE, ctx->r5) = 0;
    // 0x802383A0: sb          $zero, 0xC($a1)
    MEM_B(0XC, ctx->r5) = 0;
    // 0x802383A4: sb          $v0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r2;
    // 0x802383A8: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802383AC: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x802383B0: lw          $v0, 0x414C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X414C);
    // 0x802383B4: jr          $ra
    // 0x802383B8: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x802383B8: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_8022B884_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B884: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022B888: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022B88C: lui         $s0, 0x801A
    ctx->r16 = S32(0X801A << 16);
    // 0x8022B890: lw          $s0, -0x5858($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X5858);
    // 0x8022B894: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x8022B898: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022B89C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022B8A0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022B8A4: sb          $v0, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r2;
    // 0x8022B8A8: lbu         $v1, 0x7($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X7);
    // 0x8022B8AC: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8022B8B0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022B8B4: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x8022B8B8: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
    // 0x8022B8BC: sh          $v0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r2;
    // 0x8022B8C0: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
    // 0x8022B8C4: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
    // 0x8022B8C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B8CC: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8022B8D0: sh          $zero, 0x8($s0)
    MEM_H(0X8, ctx->r16) = 0;
    // 0x8022B8D4: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022B8D8: beq         $a0, $v0, L_8022B934
    if (ctx->r4 == ctx->r2) {
        // 0x8022B8DC: sb          $v1, 0x7($s0)
        MEM_B(0X7, ctx->r16) = ctx->r3;
            goto L_8022B934;
    }
    // 0x8022B8DC: sb          $v1, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r3;
    // 0x8022B8E0: slti        $v0, $a0, 0x2
    ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x8022B8E4: beql        $v0, $zero, L_8022B8FC
    if (ctx->r2 == 0) {
        // 0x8022B8E8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022B8FC;
    }
    goto skip_0;
    // 0x8022B8E8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022B8EC: beq         $a0, $zero, L_8022B914
    if (ctx->r4 == 0) {
        // 0x8022B8F0: nop
    
            goto L_8022B914;
    }
    // 0x8022B8F0: nop

    // 0x8022B8F4: j           L_8022B9A4
    // 0x8022B8F8: nop

        goto L_8022B9A4;
    // 0x8022B8F8: nop

L_8022B8FC:
    // 0x8022B8FC: beq         $a0, $v0, L_8022B93C
    if (ctx->r4 == ctx->r2) {
        // 0x8022B900: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022B93C;
    }
    // 0x8022B900: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022B904: beq         $a0, $v0, L_8022B998
    if (ctx->r4 == ctx->r2) {
        // 0x8022B908: addiu       $v0, $zero, 0x30
        ctx->r2 = ADD32(0, 0X30);
            goto L_8022B998;
    }
    // 0x8022B908: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8022B90C: j           L_8022B9A4
    // 0x8022B910: nop

        goto L_8022B9A4;
    // 0x8022B910: nop

L_8022B914:
    // 0x8022B914: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x8022B918: lbu         $v1, 0x63F0($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X63F0);
    // 0x8022B91C: sltiu       $v0, $v1, 0x19
    ctx->r2 = ctx->r3 < 0X19 ? 1 : 0;
    // 0x8022B920: bne         $v0, $zero, L_8022B958
    if (ctx->r2 != 0) {
        // 0x8022B924: sll         $v0, $v1, 1
        ctx->r2 = S32(ctx->r3 << 1);
            goto L_8022B958;
    }
    // 0x8022B924: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8022B928: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x8022B92C: j           L_8022B958
    // 0x8022B930: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
        goto L_8022B958;
    // 0x8022B930: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
L_8022B934:
    // 0x8022B934: j           L_8022B998
    // 0x8022B938: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
        goto L_8022B998;
    // 0x8022B938: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
L_8022B93C:
    // 0x8022B93C: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x8022B940: lbu         $v1, 0x63F0($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X63F0);
    // 0x8022B944: sltiu       $v0, $v1, 0x19
    ctx->r2 = ctx->r3 < 0X19 ? 1 : 0;
    // 0x8022B948: beq         $v0, $zero, L_8022B968
    if (ctx->r2 == 0) {
        // 0x8022B94C: sll         $v1, $v1, 1
        ctx->r3 = S32(ctx->r3 << 1);
            goto L_8022B968;
    }
    // 0x8022B94C: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8022B950: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x8022B954: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
L_8022B958:
    // 0x8022B958: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
    // 0x8022B95C: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
    // 0x8022B960: j           L_8022B978
    // 0x8022B964: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
        goto L_8022B978;
    // 0x8022B964: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022B968:
    // 0x8022B968: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x8022B96C: sb          $zero, 0x6($s0)
    MEM_B(0X6, ctx->r16) = 0;
    // 0x8022B970: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x8022B974: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_8022B978:
    // 0x8022B978: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x8022B97C: lbu         $v1, 0x63F0($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X63F0);
    // 0x8022B980: sltiu       $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 < 0XFF ? 1 : 0;
    // 0x8022B984: beq         $v0, $zero, L_8022B9A4
    if (ctx->r2 == 0) {
        // 0x8022B988: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8022B9A4;
    }
    // 0x8022B988: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022B98C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022B990: j           L_8022B9A4
    // 0x8022B994: sb          $v0, 0x63F0($at)
    MEM_B(0X63F0, ctx->r1) = ctx->r2;
        goto L_8022B9A4;
    // 0x8022B994: sb          $v0, 0x63F0($at)
    MEM_B(0X63F0, ctx->r1) = ctx->r2;
L_8022B998:
    // 0x8022B998: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
    // 0x8022B99C: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
    // 0x8022B9A0: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022B9A4:
    // 0x8022B9A4: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x8022B9A8: lw          $v0, -0x5858($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5858);
    // 0x8022B9AC: addiu       $v0, $v0, 0x28
    ctx->r2 = ADD32(ctx->r2, 0X28);
    // 0x8022B9B0: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022B9B4: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8022B9B8: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x8022B9BC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022B9C0: beq         $a0, $v0, L_8022B9DC
    if (ctx->r4 == ctx->r2) {
        // 0x8022B9C4: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_8022B9DC;
    }
    // 0x8022B9C4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022B9C8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8022B9CC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022B9D0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022B9D4: j           L_8022B9EC
    // 0x8022B9D8: addiu       $a3, $zero, 0x4F
    ctx->r7 = ADD32(0, 0X4F);
        goto L_8022B9EC;
    // 0x8022B9D8: addiu       $a3, $zero, 0x4F
    ctx->r7 = ADD32(0, 0X4F);
L_8022B9DC:
    // 0x8022B9DC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8022B9E0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022B9E4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022B9E8: addiu       $a3, $zero, 0x2F
    ctx->r7 = ADD32(0, 0X2F);
L_8022B9EC:
    // 0x8022B9EC: jal         0x8003055C
    // 0x8022B9F0: nop

    func_8003055C_B95C(rdram, ctx);
        goto after_0;
    // 0x8022B9F0: nop

    after_0:
    // 0x8022B9F4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022B9F8: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x8022B9FC: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x8022BA00: lw          $v0, -0x5858($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5858);
    // 0x8022BA04: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022BA08: addiu       $v0, $v0, 0x28
    ctx->r2 = ADD32(ctx->r2, 0X28);
    // 0x8022BA0C: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8022BA10: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x8022BA14: jal         0x8002FD30
    // 0x8022BA18: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    func_8002FD30_B130(rdram, ctx);
        goto after_1;
    // 0x8022BA18: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    after_1:
    // 0x8022BA1C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022BA20: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x8022BA24: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022BA28: jal         0x8002FD30
    // 0x8022BA2C: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    func_8002FD30_B130(rdram, ctx);
        goto after_2;
    // 0x8022BA2C: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    after_2:
    // 0x8022BA30: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x8022BA34: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022BA38: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022BA3C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022BA40: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022BA44: jr          $ra
    // 0x8022BA48: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022BA48: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8022BA4C: nop

;}
RECOMP_FUNC void func_8022F7D0_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F7D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F7D4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022F7D8: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x8022F7DC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022F7E0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022F7E4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022F7E8: lw          $v0, 0x37F4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X37F4);
    // 0x8022F7EC: jalr        $v0
    // 0x8022F7F0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022F7F0: nop

    after_0:
    // 0x8022F7F4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022F7F8: jr          $ra
    // 0x8022F7FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F7FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226180_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226180: jr          $ra
    // 0x80226184: nop

    TRACE_RETURN()
    return;
    // 0x80226184: nop

;}
RECOMP_FUNC void func_8024B7BC_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024B7BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8024B7C0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8024B7C4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024B7C8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8024B7CC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8024B7D0: jal         0x80053ED8
    // 0x8024B7D4: lbu         $a0, 0xC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XC);
    func_80053ED8_2F2D8(rdram, ctx);
        goto after_0;
    // 0x8024B7D4: lbu         $a0, 0xC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XC);
    after_0:
    // 0x8024B7D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8024B7DC: jal         0x8024B890
    // 0x8024B7E0: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    func_8024B890_ovl28(rdram, ctx);
        goto after_1;
    // 0x8024B7E0: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    after_1:
    // 0x8024B7E4: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8024B7E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024B7EC: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    // 0x8024B7F0: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8024B7F4: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8024B7F8: slti        $v0, $v0, 0x8
    ctx->r2 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x8024B7FC: beql        $v0, $zero, L_8024B804
    if (ctx->r2 == 0) {
        // 0x8024B800: sb          $zero, 0xF($s0)
        MEM_B(0XF, ctx->r16) = 0;
            goto L_8024B804;
    }
    goto skip_0;
    // 0x8024B800: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    skip_0:
L_8024B804:
    // 0x8024B804: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8024B808: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8024B80C: bne         $v0, $zero, L_8024B81C
    if (ctx->r2 != 0) {
        // 0x8024B810: nop
    
            goto L_8024B81C;
    }
    // 0x8024B810: nop

    // 0x8024B814: jal         0x8004F5C4
    // 0x8024B818: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_2;
    // 0x8024B818: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_8024B81C:
    // 0x8024B81C: lh          $v0, 0x3A($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X3A);
    // 0x8024B820: beq         $v0, $zero, L_8024B82C
    if (ctx->r2 == 0) {
        // 0x8024B824: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8024B82C;
    }
    // 0x8024B824: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8024B828: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8024B82C:
    // 0x8024B82C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8024B830: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8024B834: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8024B838: jr          $ra
    // 0x8024B83C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8024B83C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802293A4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802293A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802293A8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802293AC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802293B0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802293B4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802293B8: lbu         $v1, 0x5($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X5);
    // 0x802293BC: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x802293C0: beq         $v1, $s1, L_8022945C
    if (ctx->r3 == ctx->r17) {
        // 0x802293C4: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8022945C;
    }
    // 0x802293C4: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802293C8: beql        $v0, $zero, L_802293E0
    if (ctx->r2 == 0) {
        // 0x802293CC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802293E0;
    }
    goto skip_0;
    // 0x802293CC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802293D0: beq         $v1, $zero, L_802293F8
    if (ctx->r3 == 0) {
        // 0x802293D4: nop
    
            goto L_802293F8;
    }
    // 0x802293D4: nop

    // 0x802293D8: j           L_8022950C
    // 0x802293DC: nop

        goto L_8022950C;
    // 0x802293DC: nop

L_802293E0:
    // 0x802293E0: beq         $v1, $v0, L_80229498
    if (ctx->r3 == ctx->r2) {
        // 0x802293E4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80229498;
    }
    // 0x802293E4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802293E8: beq         $v1, $v0, L_802294B0
    if (ctx->r3 == ctx->r2) {
        // 0x802293EC: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_802294B0;
    }
    // 0x802293EC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802293F0: j           L_8022950C
    // 0x802293F4: nop

        goto L_8022950C;
    // 0x802293F4: nop

L_802293F8:
    // 0x802293F8: jal         0x8005FB90
    // 0x802293FC: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_0;
    // 0x802293FC: nop

    after_0:
    // 0x80229400: jal         0x80036B7C
    // 0x80229404: nop

    func_80036B7C_11F7C(rdram, ctx);
        goto after_1;
    // 0x80229404: nop

    after_1:
    // 0x80229408: beq         $v0, $zero, L_8022950C
    if (ctx->r2 == 0) {
        // 0x8022940C: nop
    
            goto L_8022950C;
    }
    // 0x8022940C: nop

    // 0x80229410: jal         0x80060170
    // 0x80229414: nop

    func_80060170_3B570(rdram, ctx);
        goto after_2;
    // 0x80229414: nop

    after_2:
    // 0x80229418: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x8022941C: lw          $v1, 0x63C0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X63C0);
    // 0x80229420: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80229424: addiu       $v0, $v0, 0x1A4C
    ctx->r2 = ADD32(ctx->r2, 0X1A4C);
    // 0x80229428: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8022942C: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x80229430: addiu       $v0, $zero, -0x81
    ctx->r2 = ADD32(0, -0X81);
    // 0x80229434: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80229438: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022943C: sw          $v1, 0x63C0($at)
    MEM_W(0X63C0, ctx->r1) = ctx->r3;
    // 0x80229440: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80229444: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80229448: addiu       $v1, $v1, 0x1ED4
    ctx->r3 = ADD32(ctx->r3, 0X1ED4);
    // 0x8022944C: sw          $v1, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r3;
    // 0x80229450: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229454: j           L_8022950C
    // 0x80229458: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
        goto L_8022950C;
    // 0x80229458: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_8022945C:
    // 0x8022945C: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x80229460: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80229464: jalr        $v0
    // 0x80229468: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x80229468: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022946C: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80229470: lw          $v0, 0x63C0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X63C0);
    // 0x80229474: andi        $v0, $v0, 0x81
    ctx->r2 = ctx->r2 & 0X81;
    // 0x80229478: bne         $v0, $s1, L_80229504
    if (ctx->r2 != ctx->r17) {
        // 0x8022947C: addiu       $a0, $zero, 0x8
        ctx->r4 = ADD32(0, 0X8);
            goto L_80229504;
    }
    // 0x8022947C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x80229480: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80229484: lw          $v0, 0x63C0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X63C0);
    // 0x80229488: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022948C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80229490: j           L_802294E0
    // 0x80229494: sw          $v0, 0x63C0($at)
    MEM_W(0X63C0, ctx->r1) = ctx->r2;
        goto L_802294E0;
    // 0x80229494: sw          $v0, 0x63C0($at)
    MEM_W(0X63C0, ctx->r1) = ctx->r2;
L_80229498:
    // 0x80229498: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x8022949C: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x802294A0: jalr        $v0
    // 0x802294A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x802294A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x802294A8: j           L_80229504
    // 0x802294AC: nop

        goto L_80229504;
    // 0x802294AC: nop

L_802294B0:
    // 0x802294B0: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x802294B4: beq         $v1, $v0, L_802294F4
    if (ctx->r3 == ctx->r2) {
        // 0x802294B8: nop
    
            goto L_802294F4;
    }
    // 0x802294B8: nop

    // 0x802294BC: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x802294C0: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x802294C4: jalr        $v0
    // 0x802294C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x802294C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x802294CC: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x802294D0: lw          $v0, 0x63C0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X63C0);
    // 0x802294D4: andi        $v0, $v0, 0x81
    ctx->r2 = ctx->r2 & 0X81;
    // 0x802294D8: bne         $v0, $s1, L_80229504
    if (ctx->r2 != ctx->r17) {
        // 0x802294DC: addiu       $a0, $zero, 0x8
        ctx->r4 = ADD32(0, 0X8);
            goto L_80229504;
    }
    // 0x802294DC: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
L_802294E0:
    // 0x802294E0: jal         0x80036E48
    // 0x802294E4: nop

    func_80036E48_12248(rdram, ctx);
        goto after_6;
    // 0x802294E4: nop

    after_6:
    // 0x802294E8: addiu       $a0, $zero, 0x17E
    ctx->r4 = ADD32(0, 0X17E);
    // 0x802294EC: jal         0x8004CB2C
    // 0x802294F0: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_7;
    // 0x802294F0: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_7:
L_802294F4:
    // 0x802294F4: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802294F8: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x802294FC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229500: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80229504:
    // 0x80229504: jal         0x8005FB90
    // 0x80229508: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_8;
    // 0x80229508: nop

    after_8:
L_8022950C:
    // 0x8022950C: jal         0x8006072C
    // 0x80229510: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_9;
    // 0x80229510: nop

    after_9:
    // 0x80229514: beq         $v0, $zero, L_80229530
    if (ctx->r2 == 0) {
        // 0x80229518: nop
    
            goto L_80229530;
    }
    // 0x80229518: nop

    // 0x8022951C: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80229520: lw          $v0, 0x63C0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X63C0);
    // 0x80229524: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80229528: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022952C: sw          $v0, 0x63C0($at)
    MEM_W(0X63C0, ctx->r1) = ctx->r2;
L_80229530:
    // 0x80229530: jal         0x80060018
    // 0x80229534: nop

    func_80060018_3B418(rdram, ctx);
        goto after_10;
    // 0x80229534: nop

    after_10:
    // 0x80229538: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022953C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229540: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229544: jr          $ra
    // 0x80229548: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80229548: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80249260_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80249260: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80249264: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80249268: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024926C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80249270: addiu       $s1, $s0, 0x18
    ctx->r17 = ADD32(ctx->r16, 0X18);
    // 0x80249274: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80249278: jal         0x8002C654
    // 0x8024927C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_0;
    // 0x8024927C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x80249280: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80249284: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x80249288: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8024928C: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x80249290: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80249294: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80249298: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8024929C: sll         $v1, $v1, 7
    ctx->r3 = S32(ctx->r3 << 7);
    // 0x802492A0: jal         0x80031DA8
    // 0x802492A4: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_1;
    // 0x802492A4: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_1:
    // 0x802492A8: lb          $a0, 0xD($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XD);
    // 0x802492AC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802492B0: sltu        $a0, $zero, $a0
    ctx->r4 = 0 < ctx->r4 ? 1 : 0;
    // 0x802492B4: jal         0x800319B4
    // 0x802492B8: sll         $a0, $a0, 11
    ctx->r4 = S32(ctx->r4 << 11);
    func_800319B4_CDB4(rdram, ctx);
        goto after_2;
    // 0x802492B8: sll         $a0, $a0, 11
    ctx->r4 = S32(ctx->r4 << 11);
    after_2:
    // 0x802492BC: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x802492C0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x802492C4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802492C8: jr          $ra
    // 0x802492CC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x802492CC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022F778_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F778: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F77C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F780: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F784: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022F788: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8022F78C: bgez        $v0, L_8022F7C0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022F790: nop
    
            goto L_8022F7C0;
    }
    // 0x8022F790: nop

    // 0x8022F794: jal         0x8022FEA8
    // 0x8022F798: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_8022FEA8_ovl28(rdram, ctx);
        goto after_0;
    // 0x8022F798: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_0:
    // 0x8022F79C: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x8022F7A0: lhu         $a0, 0x348($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X348);
    // 0x8022F7A4: lbu         $a1, 0xD($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XD);
    // 0x8022F7A8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022F7AC: ori         $a0, $a0, 0x2
    ctx->r4 = ctx->r4 | 0X2;
    // 0x8022F7B0: andi        $a1, $a1, 0x7
    ctx->r5 = ctx->r5 & 0X7;
    // 0x8022F7B4: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8022F7B8: sh          $a0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r4;
    // 0x8022F7BC: sb          $a1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r5;
L_8022F7C0:
    // 0x8022F7C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022F7C4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F7C8: jr          $ra
    // 0x8022F7CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F7CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80244BF8_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80244BF8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80244BFC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80244C00: jr          $ra
    // 0x80244C04: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80244C04: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_8022570C_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022570C: jr          $ra
    // 0x80225710: nop

    TRACE_RETURN()
    return;
    // 0x80225710: nop

;}
RECOMP_FUNC void func_80225420_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225420: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225424: jr          $ra
    // 0x80225428: sw          $zero, -0x359C($at)
    MEM_W(-0X359C, ctx->r1) = 0;
    TRACE_RETURN()
    return;
    // 0x80225428: sw          $zero, -0x359C($at)
    MEM_W(-0X359C, ctx->r1) = 0;
;}
RECOMP_FUNC void func_8024A0F4_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024A0F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024A0F8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8024A0FC: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x8024A100: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8024A104: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024A108: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8024A10C: lw          $v0, 0x51F8($at)
    ctx->r2 = MEM_W(ctx->r1, 0X51F8);
    // 0x8024A110: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8024A114: jalr        $v0
    // 0x8024A118: addiu       $a1, $a1, -0x3A50
    ctx->r5 = ADD32(ctx->r5, -0X3A50);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8024A118: addiu       $a1, $a1, -0x3A50
    ctx->r5 = ADD32(ctx->r5, -0X3A50);
    after_0:
    // 0x8024A11C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8024A120: jr          $ra
    // 0x8024A124: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024A124: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80248480_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80248480: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80248484: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80248488: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024848C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80248490: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80248494: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80248498: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8024849C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802484A0: lw          $v0, 0x5100($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5100);
    // 0x802484A4: jalr        $v0
    // 0x802484A8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802484A8: nop

    after_0:
    // 0x802484AC: jal         0x80249260
    // 0x802484B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80249260_ovl28(rdram, ctx);
        goto after_1;
    // 0x802484B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802484B4: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x802484B8: beq         $v0, $zero, L_802484C8
    if (ctx->r2 == 0) {
        // 0x802484BC: nop
    
            goto L_802484C8;
    }
    // 0x802484BC: nop

    // 0x802484C0: jal         0x802493B0
    // 0x802484C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802493B0_ovl28(rdram, ctx);
        goto after_2;
    // 0x802484C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_802484C8:
    // 0x802484C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802484CC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802484D0: jr          $ra
    // 0x802484D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802484D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023ABBC_ovl28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023ABBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023ABC0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023ABC4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023ABC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023ABCC: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8023ABD0: beq         $v0, $zero, L_8023ABF0
    if (ctx->r2 == 0) {
        // 0x8023ABD4: addiu       $a1, $zero, 0xD
        ctx->r5 = ADD32(0, 0XD);
            goto L_8023ABF0;
    }
    // 0x8023ABD4: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x8023ABD8: jal         0x80050294
    // 0x8023ABDC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8023ABDC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8023ABE0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023ABE4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023ABE8: j           L_8023ABF8
    // 0x8023ABEC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8023ABF8;
    // 0x8023ABEC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8023ABF0:
    // 0x8023ABF0: jal         0x8005044C
    // 0x8023ABF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x8023ABF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_8023ABF8:
    // 0x8023ABF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023ABFC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023AC00: jr          $ra
    // 0x8023AC04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023AC04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
