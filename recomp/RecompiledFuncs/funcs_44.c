#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8022650C_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022650C: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80226510: bne         $v0, $zero, L_80226528
    if (ctx->r2 != 0) {
        // 0x80226514: addiu       $v1, $zero, 0x4
        ctx->r3 = ADD32(0, 0X4);
            goto L_80226528;
    }
    // 0x80226514: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x80226518: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x8022651C: sb          $v1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r3;
    // 0x80226520: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
    // 0x80226524: sb          $zero, 0xD($v0)
    MEM_B(0XD, ctx->r2) = 0;
L_80226528:
    // 0x80226528: jr          $ra
    // 0x8022652C: nop

    TRACE_RETURN()
    return;
    // 0x8022652C: nop

;}
RECOMP_FUNC void func_8022A658_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A658: lbu         $v0, 0x434($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X434);
    // 0x8022A65C: sh          $zero, 0x438($a0)
    MEM_H(0X438, ctx->r4) = 0;
    // 0x8022A660: sh          $zero, 0x43A($a0)
    MEM_H(0X43A, ctx->r4) = 0;
    // 0x8022A664: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A668: jr          $ra
    // 0x8022A66C: sb          $v0, 0x434($a0)
    MEM_B(0X434, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x8022A66C: sb          $v0, 0x434($a0)
    MEM_B(0X434, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_80237B70_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237B70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80237B74: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80237B78: jal         0x8004F5C4
    // 0x80237B7C: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x80237B7C: nop

    after_0:
    // 0x80237B80: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80237B84: jr          $ra
    // 0x80237B88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80237B88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023BAC4_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023BAC4: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x8023BAC8: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8023BACC: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x8023BAD0: bne         $v0, $zero, L_8023BB9C
    if (ctx->r2 != 0) {
        // 0x8023BAD4: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_8023BB9C;
    }
    // 0x8023BAD4: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8023BAD8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8023BADC: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x8023BAE0: bne         $v1, $v0, L_8023BB34
    if (ctx->r3 != ctx->r2) {
        // 0x8023BAE4: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8023BB34;
    }
    // 0x8023BAE4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023BAE8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8023BAEC: lbu         $v1, -0x3BC8($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3BC8);
    // 0x8023BAF0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023BAF4: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x8023BAF8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023BAFC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023BB00: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x8023BB04: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8023BB08: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023BB0C: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x8023BB10: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023BB14: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x8023BB18: lui         $v0, 0xFE00
    ctx->r2 = S32(0XFE00 << 16);
    // 0x8023BB1C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023BB20: sw          $v0, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = ctx->r2;
    // 0x8023BB24: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023BB28: sw          $v0, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = ctx->r2;
    // 0x8023BB2C: j           L_8023BB7C
    // 0x8023BB30: lui         $v0, 0xFEFF
    ctx->r2 = S32(0XFEFF << 16);
        goto L_8023BB7C;
    // 0x8023BB30: lui         $v0, 0xFEFF
    ctx->r2 = S32(0XFEFF << 16);
L_8023BB34:
    // 0x8023BB34: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8023BB38: lbu         $v1, -0x3BC8($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3BC8);
    // 0x8023BB3C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023BB40: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x8023BB44: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8023BB48: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023BB4C: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x8023BB50: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023BB54: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x8023BB58: lui         $v0, 0xC00
    ctx->r2 = S32(0XC00 << 16);
    // 0x8023BB5C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023BB60: sw          $v0, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = ctx->r2;
    // 0x8023BB64: lui         $v0, 0x1400
    ctx->r2 = S32(0X1400 << 16);
    // 0x8023BB68: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023BB6C: sw          $v0, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = ctx->r2;
    // 0x8023BB70: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x8023BB74: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023BB78: sb          $zero, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = 0;
L_8023BB7C:
    // 0x8023BB7C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023BB80: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x8023BB84: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023BB88: sw          $v0, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r2;
    // 0x8023BB8C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023BB90: sb          $v1, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r3;
    // 0x8023BB94: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8023BB98: sh          $v0, 0x442($a1)
    MEM_H(0X442, ctx->r5) = ctx->r2;
L_8023BB9C:
    // 0x8023BB9C: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x8023BBA0: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8023BBA4: bne         $v1, $v0, L_8023BBB4
    if (ctx->r3 != ctx->r2) {
        // 0x8023BBA8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023BBB4;
    }
    // 0x8023BBA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023BBAC: sb          $v0, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r2;
    // 0x8023BBB0: sb          $zero, 0xD($a1)
    MEM_B(0XD, ctx->r5) = 0;
L_8023BBB4:
    // 0x8023BBB4: jr          $ra
    // 0x8023BBB8: nop

    TRACE_RETURN()
    return;
    // 0x8023BBB8: nop

;}
RECOMP_FUNC void func_80227A48_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227A48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227A4C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227A50: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227A54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227A58: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80227A5C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80227A60: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80227A64: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80227A68: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80227A6C: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80227A70: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80227A74: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80227A78: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80227A7C: jal         0x8004D5D4
    // 0x80227A80: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80227A80: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x80227A84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227A88: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80227A8C: jal         0x80050294
    // 0x80227A90: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80227A90: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80227A94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227A98: addiu       $a1, $s0, 0x4E0
    ctx->r5 = ADD32(ctx->r16, 0X4E0);
    // 0x80227A9C: jal         0x80227D3C
    // 0x80227AA0: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    func_80227D3C_ovl3(rdram, ctx);
        goto after_2;
    // 0x80227AA0: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    after_2:
    // 0x80227AA4: lbu         $v1, 0xD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XD);
    // 0x80227AA8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80227AAC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80227AB0: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80227AB4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80227AB8: sb          $v1, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r3;
    // 0x80227ABC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227AC0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227AC4: jr          $ra
    // 0x80227AC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227AC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80234460_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234460: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80234464: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80234468: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023446C: lui         $a3, 0x3D48
    ctx->r7 = S32(0X3D48 << 16);
    // 0x80234470: ori         $a3, $a3, 0xE
    ctx->r7 = ctx->r7 | 0XE;
    // 0x80234474: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80234478: lhu         $a0, 0x1C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X1C);
    // 0x8023447C: lhu         $a1, 0x20($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X20);
    // 0x80234480: lhu         $a2, 0x24($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X24);
    // 0x80234484: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80234488: lui         $v1, 0x2C80
    ctx->r3 = S32(0X2C80 << 16);
    // 0x8023448C: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x80234490: sw          $a3, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r7;
    // 0x80234494: sw          $v1, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r3;
    // 0x80234498: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8023449C: sh          $a0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r4;
    // 0x802344A0: sh          $a0, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r4;
    // 0x802344A4: sh          $a1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r5;
    // 0x802344A8: sh          $a1, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r5;
    // 0x802344AC: sh          $a2, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r6;
    // 0x802344B0: beq         $v0, $zero, L_802344EC
    if (ctx->r2 == 0) {
        // 0x802344B4: sh          $a2, 0x94($s0)
        MEM_H(0X94, ctx->r16) = ctx->r6;
            goto L_802344EC;
    }
    // 0x802344B4: sh          $a2, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r6;
    // 0x802344B8: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x802344BC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802344C0: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802344C4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802344C8: lhu         $v1, -0x1CB8($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X1CB8);
    // 0x802344CC: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x802344D0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802344D4: sb          $v1, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r3;
    // 0x802344D8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802344DC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802344E0: lhu         $v0, -0x1CB6($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X1CB6);
    // 0x802344E4: j           L_8023451C
    // 0x802344E8: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
        goto L_8023451C;
    // 0x802344E8: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_802344EC:
    // 0x802344EC: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x802344F0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802344F4: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802344F8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802344FC: lhu         $v1, -0x1CD0($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X1CD0);
    // 0x80234500: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x80234504: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80234508: sb          $v1, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r3;
    // 0x8023450C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234510: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80234514: lhu         $v0, -0x1CCE($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X1CCE);
    // 0x80234518: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_8023451C:
    // 0x8023451C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80234520: jal         0x8004F144
    // 0x80234524: sh          $v0, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r2;
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80234524: sh          $v0, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r2;
    after_0:
    // 0x80234528: beq         $v0, $zero, L_80234538
    if (ctx->r2 == 0) {
        // 0x8023452C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80234538;
    }
    // 0x8023452C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234530: jal         0x80234B80
    // 0x80234534: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_80234B80_ovl3(rdram, ctx);
        goto after_1;
    // 0x80234534: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_1:
L_80234538:
    // 0x80234538: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    // 0x8023453C: jal         0x8004F4F8
    // 0x80234540: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_2;
    // 0x80234540: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80234544: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80234548: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8023454C: jr          $ra
    // 0x80234550: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80234550: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8023AADC_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023AADC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023AAE0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8023AAE4: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x8023AAE8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8023AAEC: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x8023AAF0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023AAF4: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x8023AAF8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023AAFC: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8023AB00: jal         0x8004EEAC
    // 0x8023AB04: addu        $s0, $a3, $zero
    ctx->r16 = ADD32(ctx->r7, 0);
    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_0;
    // 0x8023AB04: addu        $s0, $a3, $zero
    ctx->r16 = ADD32(ctx->r7, 0);
    after_0:
    // 0x8023AB08: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8023AB0C: beq         $a1, $zero, L_8023AC1C
    if (ctx->r5 == 0) {
        // 0x8023AB10: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023AC1C;
    }
    // 0x8023AB10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023AB14: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x8023AB18: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8023AB1C: sh          $v0, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r2;
    // 0x8023AB20: lhu         $v0, 0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2);
    // 0x8023AB24: sh          $v0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r2;
    // 0x8023AB28: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x8023AB2C: lh          $v1, 0x16($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X16);
    // 0x8023AB30: sh          $v0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r2;
    // 0x8023AB34: lh          $v0, 0x14($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X14);
    // 0x8023AB38: lh          $a0, 0x18($a1)
    ctx->r4 = MEM_H(ctx->r5, 0X18);
    // 0x8023AB3C: sh          $zero, 0x58($a1)
    MEM_H(0X58, ctx->r5) = 0;
    // 0x8023AB40: sh          $zero, 0x54($a1)
    MEM_H(0X54, ctx->r5) = 0;
    // 0x8023AB44: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023AB48: sw          $v1, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->r3;
    // 0x8023AB4C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023AB50: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8023AB54: sw          $v0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r2;
    // 0x8023AB58: sw          $a0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r4;
    // 0x8023AB5C: lhu         $v0, 0x6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6);
    // 0x8023AB60: sh          $v0, 0x56($a1)
    MEM_H(0X56, ctx->r5) = ctx->r2;
    // 0x8023AB64: addiu       $v0, $zero, 0x2C
    ctx->r2 = ADD32(0, 0X2C);
    // 0x8023AB68: bne         $s2, $v0, L_8023ABC8
    if (ctx->r18 != ctx->r2) {
        // 0x8023AB6C: sll         $v1, $s1, 2
        ctx->r3 = S32(ctx->r17 << 2);
            goto L_8023ABC8;
    }
    // 0x8023AB6C: sll         $v1, $s1, 2
    ctx->r3 = S32(ctx->r17 << 2);
    // 0x8023AB70: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
    // 0x8023AB74: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023AB78: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023AB7C: sw          $a1, 0x1708($at)
    MEM_W(0X1708, ctx->r1) = ctx->r5;
    // 0x8023AB80: addiu       $v0, $zero, 0x2C
    ctx->r2 = ADD32(0, 0X2C);
    // 0x8023AB84: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x8023AB88: sll         $v0, $s1, 3
    ctx->r2 = S32(ctx->r17 << 3);
    // 0x8023AB8C: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023AB90: addiu       $v1, $v1, -0x1058
    ctx->r3 = ADD32(ctx->r3, -0X1058);
    // 0x8023AB94: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023AB98: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
    // 0x8023AB9C: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x8023ABA0: sb          $v1, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r3;
    // 0x8023ABA4: lbu         $v1, 0x4($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X4);
    // 0x8023ABA8: sb          $v1, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r3;
    // 0x8023ABAC: lbu         $v1, 0x5($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X5);
    // 0x8023ABB0: sb          $v1, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r3;
    // 0x8023ABB4: lbu         $v1, 0x6($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X6);
    // 0x8023ABB8: sb          $v1, 0xE($a1)
    MEM_B(0XE, ctx->r5) = ctx->r3;
    // 0x8023ABBC: lbu         $v0, 0x7($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X7);
    // 0x8023ABC0: j           L_8023AC18
    // 0x8023ABC4: sb          $v0, 0xF($a1)
    MEM_B(0XF, ctx->r5) = ctx->r2;
        goto L_8023AC18;
    // 0x8023ABC4: sb          $v0, 0xF($a1)
    MEM_B(0XF, ctx->r5) = ctx->r2;
L_8023ABC8:
    // 0x8023ABC8: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x8023ABCC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023ABD0: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8023ABD4: sw          $a1, 0x1770($at)
    MEM_W(0X1770, ctx->r1) = ctx->r5;
    // 0x8023ABD8: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x8023ABDC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023ABE0: sb          $zero, 0x3($a1)
    MEM_B(0X3, ctx->r5) = 0;
    // 0x8023ABE4: sb          $v0, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r2;
    // 0x8023ABE8: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023ABEC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023ABF0: lbu         $v0, -0x1078($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X1078);
    // 0x8023ABF4: sb          $v0, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r2;
    // 0x8023ABF8: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023ABFC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023AC00: lbu         $v0, -0x1077($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X1077);
    // 0x8023AC04: sb          $v0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r2;
    // 0x8023AC08: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023AC0C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023AC10: lbu         $v0, -0x1076($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X1076);
    // 0x8023AC14: sb          $v0, 0xE($a1)
    MEM_B(0XE, ctx->r5) = ctx->r2;
L_8023AC18:
    // 0x8023AC18: sw          $s3, 0x308($a1)
    MEM_W(0X308, ctx->r5) = ctx->r19;
L_8023AC1C:
    // 0x8023AC1C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8023AC20: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8023AC24: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8023AC28: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023AC2C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023AC30: jr          $ra
    // 0x8023AC34: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8023AC34: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80227EC0_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227EC0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227EC4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227EC8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227ECC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80227ED0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227ED4: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80227ED8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227EDC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80227EE0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227EE4: lw          $v0, -0x2D00($at)
    ctx->r2 = MEM_W(ctx->r1, -0X2D00);
    // 0x80227EE8: jalr        $v0
    // 0x80227EEC: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80227EEC: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    after_0:
    // 0x80227EF0: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x80227EF4: bne         $v0, $zero, L_80227F08
    if (ctx->r2 != 0) {
        // 0x80227EF8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227F08;
    }
    // 0x80227EF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227EFC: jal         0x8005044C
    // 0x80227F00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x80227F00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80227F04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80227F08:
    // 0x80227F08: jal         0x80228504
    // 0x80227F0C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_80228504_ovl3(rdram, ctx);
        goto after_2;
    // 0x80227F0C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x80227F10: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227F14: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227F18: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227F1C: jr          $ra
    // 0x80227F20: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227F20: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80236810_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236810: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236814: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80236818: lbu         $v1, 0x3($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X3);
    // 0x8023681C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236820: bne         $v1, $v0, L_80236838
    if (ctx->r3 != ctx->r2) {
        // 0x80236824: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80236838;
    }
    // 0x80236824: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80236828: jal         0x80236600
    // 0x8023682C: nop

    func_80236600_ovl3(rdram, ctx);
        goto after_0;
    // 0x8023682C: nop

    after_0:
    // 0x80236830: j           L_8023685C
    // 0x80236834: nop

        goto L_8023685C;
    // 0x80236834: nop

L_80236838:
    // 0x80236838: lbu         $v1, 0x8($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X8);
    // 0x8023683C: beq         $v1, $v0, L_80236854
    if (ctx->r3 == ctx->r2) {
        // 0x80236840: nop
    
            goto L_80236854;
    }
    // 0x80236840: nop

    // 0x80236844: jal         0x802366D8
    // 0x80236848: nop

    func_802366D8_ovl3(rdram, ctx);
        goto after_1;
    // 0x80236848: nop

    after_1:
    // 0x8023684C: j           L_8023685C
    // 0x80236850: nop

        goto L_8023685C;
    // 0x80236850: nop

L_80236854:
    // 0x80236854: jal         0x8004F5C4
    // 0x80236858: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_2;
    // 0x80236858: nop

    after_2:
L_8023685C:
    // 0x8023685C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80236860: jr          $ra
    // 0x80236864: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80236864: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80239740_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239740: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80239744: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80239748: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023974C: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    // 0x80239750: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80239754: jal         0x8006033C
    // 0x80239758: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80239758: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x8023975C: bne         $v0, $zero, L_80239778
    if (ctx->r2 != 0) {
        // 0x80239760: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80239778;
    }
    // 0x80239760: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80239764: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80239768: lb          $v1, -0x3BC6($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC6);
    // 0x8023976C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80239770: beq         $v1, $v0, L_80239780
    if (ctx->r3 == ctx->r2) {
        // 0x80239774: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80239780;
    }
    // 0x80239774: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80239778:
    // 0x80239778: j           L_802399D8
    // 0x8023977C: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
        goto L_802399D8;
    // 0x8023977C: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_80239780:
    // 0x80239780: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80239784: lbu         $v0, -0x3A50($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3A50);
    // 0x80239788: bne         $v0, $zero, L_802399D8
    if (ctx->r2 != 0) {
        // 0x8023978C: addiu       $a0, $zero, 0x1B
        ctx->r4 = ADD32(0, 0X1B);
            goto L_802399D8;
    }
    // 0x8023978C: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
    // 0x80239790: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80239794: lw          $v0, -0x14F0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X14F0);
    // 0x80239798: lw          $v0, 0x48($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X48);
    // 0x8023979C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x802397A0: sh          $zero, -0x3AA4($at)
    MEM_H(-0X3AA4, ctx->r1) = 0;
    // 0x802397A4: lbu         $v0, 0x8($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X8);
    // 0x802397A8: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x802397AC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x802397B0: sh          $v0, -0x3BBA($at)
    MEM_H(-0X3BBA, ctx->r1) = ctx->r2;
    // 0x802397B4: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x802397B8: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x802397BC: jal         0x8006033C
    // 0x802397C0: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x802397C0: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    after_1:
    // 0x802397C4: bne         $v0, $zero, L_802397E4
    if (ctx->r2 != 0) {
        // 0x802397C8: nop
    
            goto L_802397E4;
    }
    // 0x802397C8: nop

    // 0x802397CC: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802397D0: lhu         $v0, -0x3BBA($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3BBA);
    // 0x802397D4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x802397D8: sh          $v0, -0x3BBC($at)
    MEM_H(-0X3BBC, ctx->r1) = ctx->r2;
    // 0x802397DC: j           L_80239838
    // 0x802397E0: sb          $zero, 0x3($s1)
    MEM_B(0X3, ctx->r17) = 0;
        goto L_80239838;
    // 0x802397E0: sb          $zero, 0x3($s1)
    MEM_B(0X3, ctx->r17) = 0;
L_802397E4:
    // 0x802397E4: jal         0x8006033C
    // 0x802397E8: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x802397E8: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    after_2:
    // 0x802397EC: bne         $v0, $zero, L_80239814
    if (ctx->r2 != 0) {
        // 0x802397F0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80239814;
    }
    // 0x802397F0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802397F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802397F8: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    // 0x802397FC: jal         0x8006036C
    // 0x80239800: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    func_8006036C_3B76C(rdram, ctx);
        goto after_3;
    // 0x80239800: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    after_3:
    // 0x80239804: jal         0x80036E48
    // 0x80239808: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80036E48_12248(rdram, ctx);
        goto after_4;
    // 0x80239808: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_4:
    // 0x8023980C: j           L_8023982C
    // 0x80239810: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
        goto L_8023982C;
    // 0x80239810: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
L_80239814:
    // 0x80239814: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    // 0x80239818: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8023981C: lhu         $v0, -0x3BBA($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3BBA);
    // 0x80239820: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80239824: sh          $v0, -0x3BBC($at)
    MEM_H(-0X3BBC, ctx->r1) = ctx->r2;
    // 0x80239828: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
L_8023982C:
    // 0x8023982C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80239830: jal         0x8002A2F8
    // 0x80239834: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_5;
    // 0x80239834: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
L_80239838:
    // 0x80239838: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    // 0x8023983C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80239840: jal         0x8002A2F8
    // 0x80239844: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_6;
    // 0x80239844: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_6:
    // 0x80239848: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8023984C: lw          $v0, -0x14F0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X14F0);
    // 0x80239850: lw          $v0, 0x48($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X48);
    // 0x80239854: lbu         $a2, 0xA($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0XA);
    // 0x80239858: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8023985C: jal         0x8004A234
    // 0x80239860: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004A234_25634(rdram, ctx);
        goto after_7;
    // 0x80239860: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_7:
    // 0x80239864: jal         0x8023A814
    // 0x80239868: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8023A814_ovl3(rdram, ctx);
        goto after_8;
    // 0x80239868: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_8:
    // 0x8023986C: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80239870: beq         $v0, $zero, L_80239880
    if (ctx->r2 == 0) {
        // 0x80239874: nop
    
            goto L_80239880;
    }
    // 0x80239874: nop

    // 0x80239878: jal         0x8023A920
    // 0x8023987C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8023A920_ovl3(rdram, ctx);
        goto after_9;
    // 0x8023987C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_9:
L_80239880:
    // 0x80239880: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80239884: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x80239888: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8023988C: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x80239890: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80239894: sb          $v1, 0x4DF9($at)
    MEM_B(0X4DF9, ctx->r1) = ctx->r3;
    // 0x80239898: ori         $v0, $v0, 0x3
    ctx->r2 = ctx->r2 | 0X3;
    // 0x8023989C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x802398A0: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x802398A4: bne         $v0, $zero, L_802398D4
    if (ctx->r2 != 0) {
        // 0x802398A8: addiu       $v0, $zero, 0xA00
        ctx->r2 = ADD32(0, 0XA00);
            goto L_802398D4;
    }
    // 0x802398A8: addiu       $v0, $zero, 0xA00
    ctx->r2 = ADD32(0, 0XA00);
    // 0x802398AC: addiu       $v0, $zero, 0x3200
    ctx->r2 = ADD32(0, 0X3200);
    // 0x802398B0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802398B4: sh          $v0, 0x49C4($at)
    MEM_H(0X49C4, ctx->r1) = ctx->r2;
    // 0x802398B8: addiu       $v0, $zero, -0x262
    ctx->r2 = ADD32(0, -0X262);
    // 0x802398BC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802398C0: sh          $v0, 0x49C6($at)
    MEM_H(0X49C6, ctx->r1) = ctx->r2;
    // 0x802398C4: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x802398C8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802398CC: j           L_802398F8
    // 0x802398D0: sh          $v0, 0x49C8($at)
    MEM_H(0X49C8, ctx->r1) = ctx->r2;
        goto L_802398F8;
    // 0x802398D0: sh          $v0, 0x49C8($at)
    MEM_H(0X49C8, ctx->r1) = ctx->r2;
L_802398D4:
    // 0x802398D4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802398D8: sh          $v0, 0x49C4($at)
    MEM_H(0X49C4, ctx->r1) = ctx->r2;
    // 0x802398DC: addiu       $v0, $zero, -0x262
    ctx->r2 = ADD32(0, -0X262);
    // 0x802398E0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802398E4: sh          $v0, 0x49C6($at)
    MEM_H(0X49C6, ctx->r1) = ctx->r2;
    // 0x802398E8: addiu       $v0, $zero, -0x2000
    ctx->r2 = ADD32(0, -0X2000);
    // 0x802398EC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802398F0: sh          $v0, 0x49C8($at)
    MEM_H(0X49C8, ctx->r1) = ctx->r2;
    // 0x802398F4: addiu       $v0, $zero, 0x600
    ctx->r2 = ADD32(0, 0X600);
L_802398F8:
    // 0x802398F8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802398FC: sh          $v0, 0x4A06($at)
    MEM_H(0X4A06, ctx->r1) = ctx->r2;
    // 0x80239900: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80239904: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80239908: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8023990C: lh          $a3, 0x18($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X18);
    // 0x80239910: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80239914: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80239918: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8023991C: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80239920: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80239924: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80239928: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x8023992C: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80239930: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80239934: jal         0x8009A3B4
    // 0x80239938: sw          $a3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r7;
    memcpy_recomp(rdram, ctx);
        goto after_10;
    // 0x80239938: sw          $a3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r7;
    after_10:
    // 0x8023993C: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80239940: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80239944: jal         0x8009A3B4
    // 0x80239948: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_11;
    // 0x80239948: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_11:
    // 0x8023994C: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80239950: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80239954: jal         0x8009A3B4
    // 0x80239958: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_12;
    // 0x80239958: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_12:
    // 0x8023995C: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80239960: lw          $v1, 0x1700($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1700);
    // 0x80239964: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80239968: sb          $v0, 0x76($s0)
    MEM_B(0X76, ctx->r16) = ctx->r2;
    // 0x8023996C: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
    // 0x80239970: sw          $v1, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = ctx->r3;
    // 0x80239974: sw          $zero, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = 0;
    // 0x80239978: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023997C: sb          $v0, 0x434E($at)
    MEM_B(0X434E, ctx->r1) = ctx->r2;
    // 0x80239980: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80239984: sb          $v0, -0x3B95($at)
    MEM_B(-0X3B95, ctx->r1) = ctx->r2;
    // 0x80239988: lbu         $v1, 0x3($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X3);
    // 0x8023998C: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x80239990: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80239994: beq         $v1, $v0, L_802399C8
    if (ctx->r3 == ctx->r2) {
        // 0x80239998: sb          $zero, 0xC($s1)
        MEM_B(0XC, ctx->r17) = 0;
            goto L_802399C8;
    }
    // 0x80239998: sb          $zero, 0xC($s1)
    MEM_B(0XC, ctx->r17) = 0;
    // 0x8023999C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802399A0: beql        $v0, $zero, L_802399B8
    if (ctx->r2 == 0) {
        // 0x802399A4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802399B8;
    }
    goto skip_0;
    // 0x802399A4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802399A8: beql        $v1, $zero, L_802399D0
    if (ctx->r3 == 0) {
        // 0x802399AC: sb          $zero, 0x9($s1)
        MEM_B(0X9, ctx->r17) = 0;
            goto L_802399D0;
    }
    goto skip_1;
    // 0x802399AC: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    skip_1:
    // 0x802399B0: j           L_802399D4
    // 0x802399B4: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
        goto L_802399D4;
    // 0x802399B4: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
L_802399B8:
    // 0x802399B8: beq         $v1, $v0, L_802399CC
    if (ctx->r3 == ctx->r2) {
        // 0x802399BC: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_802399CC;
    }
    // 0x802399BC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802399C0: j           L_802399D4
    // 0x802399C4: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
        goto L_802399D4;
    // 0x802399C4: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
L_802399C8:
    // 0x802399C8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_802399CC:
    // 0x802399CC: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_802399D0:
    // 0x802399D0: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
L_802399D4:
    // 0x802399D4: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
L_802399D8:
    // 0x802399D8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802399DC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802399E0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802399E4: jr          $ra
    // 0x802399E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802399E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80232B00_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232B00: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80232B04: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80232B08: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80232B0C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80232B10: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80232B14: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80232B18: lh          $s2, 0x44($s1)
    ctx->r18 = MEM_H(ctx->r17, 0X44);
    // 0x80232B1C: mult        $s2, $s2
    result = S64(S32(ctx->r18)) * S64(S32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80232B20: mflo        $v0
    ctx->r2 = lo;
    // 0x80232B24: lh          $s0, 0x48($s1)
    ctx->r16 = MEM_H(ctx->r17, 0X48);
    // 0x80232B28: nop

    // 0x80232B2C: mult        $s0, $s0
    result = S64(S32(ctx->r16)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80232B30: mflo        $a0
    ctx->r4 = lo;
    // 0x80232B34: nop

    // 0x80232B38: nop

    // 0x80232B3C: jal         0x80032424
    // 0x80232B40: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_80032424_D824(rdram, ctx);
        goto after_0;
    // 0x80232B40: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_0:
    // 0x80232B44: lh          $a0, 0x46($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X46);
    // 0x80232B48: jal         0x80032664
    // 0x80232B4C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_80032664_DA64(rdram, ctx);
        goto after_1;
    // 0x80232B4C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_1:
    // 0x80232B50: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80232B54: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80232B58: jal         0x80032664
    // 0x80232B5C: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    func_80032664_DA64(rdram, ctx);
        goto after_2;
    // 0x80232B5C: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    after_2:
    // 0x80232B60: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80232B64: addiu       $s1, $s1, 0x8C
    ctx->r17 = ADD32(ctx->r17, 0X8C);
    // 0x80232B68: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80232B6C: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80232B70: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x80232B74: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80232B78: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    // 0x80232B7C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80232B80: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80232B84: jal         0x80031600
    // 0x80232B88: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031600_CA00(rdram, ctx);
        goto after_3;
    // 0x80232B88: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_3:
    // 0x80232B8C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80232B90: jal         0x80031DA8
    // 0x80232B94: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    func_80031DA8_D1A8(rdram, ctx);
        goto after_4;
    // 0x80232B94: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_4:
    // 0x80232B98: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80232B9C: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80232BA0: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80232BA4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80232BA8: jr          $ra
    // 0x80232BAC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80232BAC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022D8F0_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D8F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D8F4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022D8F8: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x8022D8FC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D900: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022D904: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D908: lw          $v0, -0x20A8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X20A8);
    // 0x8022D90C: jalr        $v0
    // 0x8022D910: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022D910: nop

    after_0:
    // 0x8022D914: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022D918: jr          $ra
    // 0x8022D91C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D91C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023617C_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023617C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80236180: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80236184: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80236188: addiu       $a0, $s1, 0xF0
    ctx->r4 = ADD32(ctx->r17, 0XF0);
    // 0x8023618C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236190: addiu       $s0, $s1, 0xE8
    ctx->r16 = ADD32(ctx->r17, 0XE8);
    // 0x80236194: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80236198: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023619C: jal         0x8009A3B4
    // 0x802361A0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802361A0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x802361A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802361A8: addiu       $s0, $s1, 0xE0
    ctx->r16 = ADD32(ctx->r17, 0XE0);
    // 0x802361AC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802361B0: jal         0x8009A3B4
    // 0x802361B4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802361B4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x802361B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802361BC: addiu       $s0, $s1, 0xD8
    ctx->r16 = ADD32(ctx->r17, 0XD8);
    // 0x802361C0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802361C4: jal         0x8009A3B4
    // 0x802361C8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x802361C8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x802361CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802361D0: addiu       $s0, $s1, 0xD0
    ctx->r16 = ADD32(ctx->r17, 0XD0);
    // 0x802361D4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802361D8: jal         0x8009A3B4
    // 0x802361DC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x802361DC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x802361E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802361E4: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x802361E8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802361EC: jal         0x8009A3B4
    // 0x802361F0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x802361F0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x802361F4: lh          $v0, 0x44($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X44);
    // 0x802361F8: lw          $v1, 0x1C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X1C);
    // 0x802361FC: lh          $a1, 0x48($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X48);
    // 0x80236200: lw          $a2, 0x24($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X24);
    // 0x80236204: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80236208: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023620C: lh          $v0, 0x46($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X46);
    // 0x80236210: sw          $v1, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r3;
    // 0x80236214: lw          $v1, 0x20($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X20);
    // 0x80236218: sll         $a1, $a1, 8
    ctx->r5 = S32(ctx->r5 << 8);
    // 0x8023621C: addu        $a2, $a2, $a1
    ctx->r6 = ADD32(ctx->r6, ctx->r5);
    // 0x80236220: sw          $a2, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r6;
    // 0x80236224: lhu         $a2, 0x56($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X56);
    // 0x80236228: lhu         $a3, 0x24($s1)
    ctx->r7 = MEM_HU(ctx->r17, 0X24);
    // 0x8023622C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80236230: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80236234: lhu         $v0, 0x1C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1C);
    // 0x80236238: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023623C: sw          $v1, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r3;
    // 0x80236240: lhu         $v1, 0x20($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X20);
    // 0x80236244: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80236248: addiu       $a1, $a1, 0x4D58
    ctx->r5 = ADD32(ctx->r5, 0X4D58);
    // 0x8023624C: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    // 0x80236250: sh          $a3, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r7;
    // 0x80236254: sh          $a3, 0x94($s1)
    MEM_H(0X94, ctx->r17) = ctx->r7;
    // 0x80236258: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    // 0x8023625C: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
    // 0x80236260: sh          $v0, 0x90($s1)
    MEM_H(0X90, ctx->r17) = ctx->r2;
    // 0x80236264: sh          $v1, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r3;
    // 0x80236268: jal         0x8004F820
    // 0x8023626C: sh          $v1, 0x92($s1)
    MEM_H(0X92, ctx->r17) = ctx->r3;
    func_8004F820_2AC20(rdram, ctx);
        goto after_5;
    // 0x8023626C: sh          $v1, 0x92($s1)
    MEM_H(0X92, ctx->r17) = ctx->r3;
    after_5:
    // 0x80236270: lhu         $v1, 0x56($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X56);
    // 0x80236274: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80236278: sll         $a0, $v1, 16
    ctx->r4 = S32(ctx->r3 << 16);
    // 0x8023627C: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80236280: jal         0x800324B4
    // 0x80236284: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
    func_800324B4_D8B4(rdram, ctx);
        goto after_6;
    // 0x80236284: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
    after_6:
    // 0x80236288: lh          $a0, 0x56($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X56);
    // 0x8023628C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80236290: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x80236294: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80236298: srl         $v1, $v1, 1
    ctx->r3 = S32(U32(ctx->r3) >> 1);
    // 0x8023629C: sh          $v1, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r3;
    // 0x802362A0: jal         0x80032498
    // 0x802362A4: sh          $zero, 0x46($s1)
    MEM_H(0X46, ctx->r17) = 0;
    func_80032498_D898(rdram, ctx);
        goto after_7;
    // 0x802362A4: sh          $zero, 0x46($s1)
    MEM_H(0X46, ctx->r17) = 0;
    after_7:
    // 0x802362A8: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x802362AC: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x802362B0: lbu         $a0, 0xB($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XB);
    // 0x802362B4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802362B8: srl         $v1, $v1, 1
    ctx->r3 = S32(U32(ctx->r3) >> 1);
    // 0x802362BC: sh          $v1, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r3;
    // 0x802362C0: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x802362C4: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x802362C8: bne         $v0, $zero, L_802362E8
    if (ctx->r2 != 0) {
        // 0x802362CC: sb          $a0, 0xB($s1)
        MEM_B(0XB, ctx->r17) = ctx->r4;
            goto L_802362E8;
    }
    // 0x802362CC: sb          $a0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r4;
    // 0x802362D0: jal         0x8023644C
    // 0x802362D4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8023644C_ovl3(rdram, ctx);
        goto after_8;
    // 0x802362D4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_8:
    // 0x802362D8: jal         0x8004F4F8
    // 0x802362DC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_9;
    // 0x802362DC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_9:
    // 0x802362E0: j           L_80236324
    // 0x802362E4: nop

        goto L_80236324;
    // 0x802362E4: nop

L_802362E8:
    // 0x802362E8: sltiu       $v0, $v0, 0x9D
    ctx->r2 = ctx->r2 < 0X9D ? 1 : 0;
    // 0x802362EC: beq         $v0, $zero, L_8023631C
    if (ctx->r2 == 0) {
        // 0x802362F0: nop
    
            goto L_8023631C;
    }
    // 0x802362F0: nop

    // 0x802362F4: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x802362F8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802362FC: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x80236300: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80236304: sltiu       $v0, $v0, 0xA
    ctx->r2 = ctx->r2 < 0XA ? 1 : 0;
    // 0x80236308: bne         $v0, $zero, L_8023631C
    if (ctx->r2 != 0) {
        // 0x8023630C: addiu       $a0, $zero, 0x14B
        ctx->r4 = ADD32(0, 0X14B);
            goto L_8023631C;
    }
    // 0x8023630C: addiu       $a0, $zero, 0x14B
    ctx->r4 = ADD32(0, 0X14B);
    // 0x80236310: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    // 0x80236314: jal         0x8002A33C
    // 0x80236318: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_10;
    // 0x80236318: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_10:
L_8023631C:
    // 0x8023631C: jal         0x802364F0
    // 0x80236320: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_802364F0_ovl3(rdram, ctx);
        goto after_11;
    // 0x80236320: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_11:
L_80236324:
    // 0x80236324: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80236328: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023632C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80236330: jr          $ra
    // 0x80236334: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80236334: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022CCE4_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CCE4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022CCE8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022CCEC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022CCF0: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022CCF4: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022CCF8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022CCFC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022CD00: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022CD04: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022CD08: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022CD0C: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022CD10: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022CD14: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
    // 0x8022CD18: sh          $v1, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r3;
    // 0x8022CD1C: jal         0x8022DC08
    // 0x8022CD20: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    func_8022DC08_ovl3(rdram, ctx);
        goto after_0;
    // 0x8022CD20: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    after_0:
    // 0x8022CD24: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x8022CD28: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022CD2C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022CD30: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022CD34: addiu       $s2, $s2, 0x49C4
    ctx->r18 = ADD32(ctx->r18, 0X49C4);
    // 0x8022CD38: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022CD3C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022CD40: jal         0x8004F820
    // 0x8022CD44: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022CD44: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022CD48: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CD4C: bgez        $v0, L_8022CD7C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022CD50: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_8022CD7C;
    }
    // 0x8022CD50: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x8022CD54: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022CD58: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022CD5C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022CD60: jal         0x8004F820
    // 0x8022CD64: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8022CD64: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x8022CD68: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CD6C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022CD70: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022CD74: j           L_8022CD98
    // 0x8022CD78: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_8022CD98;
    // 0x8022CD78: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_8022CD7C:
    // 0x8022CD7C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022CD80: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022CD84: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022CD88: jal         0x8004F820
    // 0x8022CD8C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x8022CD8C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_3:
    // 0x8022CD90: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CD94: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_8022CD98:
    // 0x8022CD98: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022CD9C: sh          $v0, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r2;
    // 0x8022CDA0: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x8022CDA4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022CDA8: jal         0x800610AC
    // 0x8022CDAC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_4;
    // 0x8022CDAC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x8022CDB0: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022CDB4: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022CDB8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022CDBC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022CDC0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022CDC4: jr          $ra
    // 0x8022CDC8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022CDC8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80230980_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230980: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230984: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80230988: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8023098C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80230990: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80230994: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80230998: lw          $v0, -0x1FF0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1FF0);
    // 0x8023099C: jalr        $v0
    // 0x802309A0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802309A0: nop

    after_0:
    // 0x802309A4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802309A8: jr          $ra
    // 0x802309AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802309AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232A24_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232A24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232A28: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80232A2C: jal         0x80232BB0
    // 0x80232A30: nop

    func_80232BB0_ovl3(rdram, ctx);
        goto after_0;
    // 0x80232A30: nop

    after_0:
    // 0x80232A34: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80232A38: jr          $ra
    // 0x80232A3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232A3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D208_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D208: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022D20C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D210: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D214: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022D218: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022D21C: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x8022D220: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022D224: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    // 0x8022D228: jal         0x8004FA7C
    // 0x8022D22C: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022D22C: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    after_0:
    // 0x8022D230: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022D234: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x8022D238: beq         $v0, $zero, L_8022D2CC
    if (ctx->r2 == 0) {
        // 0x8022D23C: nop
    
            goto L_8022D2CC;
    }
    // 0x8022D23C: nop

    // 0x8022D240: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022D244: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8022D248: bne         $v0, $zero, L_8022D2CC
    if (ctx->r2 != 0) {
        // 0x8022D24C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022D2CC;
    }
    // 0x8022D24C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D250: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x8022D254: beq         $v1, $v0, L_8022D26C
    if (ctx->r3 == ctx->r2) {
        // 0x8022D258: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022D26C;
    }
    // 0x8022D258: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022D25C: beq         $v1, $v0, L_8022D29C
    if (ctx->r3 == ctx->r2) {
        // 0x8022D260: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022D29C;
    }
    // 0x8022D260: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022D264: j           L_8022D2C0
    // 0x8022D268: nop

        goto L_8022D2C0;
    // 0x8022D268: nop

L_8022D26C:
    // 0x8022D26C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022D270: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x8022D274: bne         $v0, $zero, L_8022D2C0
    if (ctx->r2 != 0) {
        // 0x8022D278: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022D2C0;
    }
    // 0x8022D278: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022D27C: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x8022D280: bne         $v0, $zero, L_8022D2C0
    if (ctx->r2 != 0) {
        // 0x8022D284: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022D2C0;
    }
    // 0x8022D284: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D288: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022D28C: bne         $v1, $v0, L_8022D2C0
    if (ctx->r3 != ctx->r2) {
        // 0x8022D290: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022D2C0;
    }
    // 0x8022D290: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022D294: j           L_8022D2C0
    // 0x8022D298: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022D2C0;
    // 0x8022D298: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022D29C:
    // 0x8022D29C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022D2A0: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x8022D2A4: beq         $v0, $zero, L_8022D2BC
    if (ctx->r2 == 0) {
        // 0x8022D2A8: slti        $v0, $v1, 0x4
        ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
            goto L_8022D2BC;
    }
    // 0x8022D2A8: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x8022D2AC: bne         $v0, $zero, L_8022D2C0
    if (ctx->r2 != 0) {
        // 0x8022D2B0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022D2C0;
    }
    // 0x8022D2B0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022D2B4: j           L_8022D2C0
    // 0x8022D2B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022D2C0;
    // 0x8022D2B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022D2BC:
    // 0x8022D2BC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022D2C0:
    // 0x8022D2C0: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022D2C4: beq         $v0, $zero, L_8022D2F0
    if (ctx->r2 == 0) {
        // 0x8022D2C8: nop
    
            goto L_8022D2F0;
    }
    // 0x8022D2C8: nop

L_8022D2CC:
    // 0x8022D2CC: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x8022D2D0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022D2D4: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022D2D8: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022D2DC: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8022D2E0: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022D2E4: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022D2E8: j           L_8022D300
    // 0x8022D2EC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022D300;
    // 0x8022D2EC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022D2F0:
    // 0x8022D2F0: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022D2F4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022D2F8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022D2FC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022D300:
    // 0x8022D300: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022D304: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022D308: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D30C: jr          $ra
    // 0x8022D310: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022D310: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80226D00_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226D00: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226D04: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226D08: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226D0C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80226D10: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226D14: lbu         $v1, 0x5($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X5);
    // 0x80226D18: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80226D1C: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80226D20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226D24: beq         $v1, $v0, L_80226DA4
    if (ctx->r3 == ctx->r2) {
        // 0x80226D28: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80226DA4;
    }
    // 0x80226D28: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80226D2C: beql        $v0, $zero, L_80226D44
    if (ctx->r2 == 0) {
        // 0x80226D30: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80226D44;
    }
    goto skip_0;
    // 0x80226D30: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80226D34: beq         $v1, $zero, L_80226D5C
    if (ctx->r3 == 0) {
        // 0x80226D38: nop
    
            goto L_80226D5C;
    }
    // 0x80226D38: nop

    // 0x80226D3C: j           L_80226E8C
    // 0x80226D40: nop

        goto L_80226E8C;
    // 0x80226D40: nop

L_80226D44:
    // 0x80226D44: beq         $v1, $v0, L_80226DE4
    if (ctx->r3 == ctx->r2) {
        // 0x80226D48: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80226DE4;
    }
    // 0x80226D48: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80226D4C: beq         $v1, $v0, L_80226E38
    if (ctx->r3 == ctx->r2) {
        // 0x80226D50: nop
    
            goto L_80226E38;
    }
    // 0x80226D50: nop

    // 0x80226D54: j           L_80226E8C
    // 0x80226D58: nop

        goto L_80226E8C;
    // 0x80226D58: nop

L_80226D5C:
    // 0x80226D5C: jal         0x8006FF84
    // 0x80226D60: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x80226D60: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x80226D64: beq         $v0, $zero, L_80226E8C
    if (ctx->r2 == 0) {
        // 0x80226D68: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80226E8C;
    }
    // 0x80226D68: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80226D6C: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x80226D70: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226D74: sb          $v0, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r2;
    // 0x80226D78: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226D7C: sb          $zero, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = 0;
    // 0x80226D80: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x80226D84: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
    // 0x80226D88: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80226D8C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226D90: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
    // 0x80226D94: addiu       $v0, $zero, 0x190
    ctx->r2 = ADD32(0, 0X190);
    // 0x80226D98: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80226D9C: j           L_80226E8C
    // 0x80226DA0: sh          $v0, -0x930($at)
    MEM_H(-0X930, ctx->r1) = ctx->r2;
        goto L_80226E8C;
    // 0x80226DA0: sh          $v0, -0x930($at)
    MEM_H(-0X930, ctx->r1) = ctx->r2;
L_80226DA4:
    // 0x80226DA4: addiu       $a0, $zero, 0x56
    ctx->r4 = ADD32(0, 0X56);
    // 0x80226DA8: jal         0x8004CB2C
    // 0x80226DAC: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_1;
    // 0x80226DAC: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_1:
    // 0x80226DB0: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80226DB4: jal         0x8005FA7C
    // 0x80226DB8: addiu       $a0, $a0, -0x3170
    ctx->r4 = ADD32(ctx->r4, -0X3170);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_2;
    // 0x80226DB8: addiu       $a0, $a0, -0x3170
    ctx->r4 = ADD32(ctx->r4, -0X3170);
    after_2:
    // 0x80226DBC: lbu         $v1, 0x6($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X6);
    // 0x80226DC0: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x80226DC4: ori         $a0, $a0, 0x4E00
    ctx->r4 = ctx->r4 | 0X4E00;
    // 0x80226DC8: andi        $v1, $v1, 0xDF
    ctx->r3 = ctx->r3 & 0XDF;
    // 0x80226DCC: jal         0x80036B1C
    // 0x80226DD0: sb          $v1, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r3;
    func_80036B1C_11F1C(rdram, ctx);
        goto after_3;
    // 0x80226DD0: sb          $v1, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r3;
    after_3:
    // 0x80226DD4: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80226DD8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226DDC: j           L_80226E8C
    // 0x80226DE0: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
        goto L_80226E8C;
    // 0x80226DE0: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_80226DE4:
    // 0x80226DE4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80226DE8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80226DEC: jal         0x8005F6B4
    // 0x80226DF0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_4;
    // 0x80226DF0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x80226DF4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80226DF8: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80226DFC: addiu       $v0, $v0, -0x30A4
    ctx->r2 = ADD32(ctx->r2, -0X30A4);
    // 0x80226E00: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x80226E04: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80226E08: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x80226E0C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80226E10: addiu       $v0, $v0, -0x3058
    ctx->r2 = ADD32(ctx->r2, -0X3058);
    // 0x80226E14: jal         0x80036E48
    // 0x80226E18: sw          $v0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r2;
    func_80036E48_12248(rdram, ctx);
        goto after_5;
    // 0x80226E18: sw          $v0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r2;
    after_5:
    // 0x80226E1C: jal         0x8005FB90
    // 0x80226E20: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_6;
    // 0x80226E20: nop

    after_6:
    // 0x80226E24: jal         0x80060018
    // 0x80226E28: nop

    func_80060018_3B418(rdram, ctx);
        goto after_7;
    // 0x80226E28: nop

    after_7:
    // 0x80226E2C: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80226E30: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226E34: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_80226E38:
    // 0x80226E38: jal         0x8005FB90
    // 0x80226E3C: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_8;
    // 0x80226E3C: nop

    after_8:
    // 0x80226E40: jal         0x80060018
    // 0x80226E44: nop

    func_80060018_3B418(rdram, ctx);
        goto after_9;
    // 0x80226E44: nop

    after_9:
    // 0x80226E48: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80226E4C: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80226E50: bne         $v0, $zero, L_80226E8C
    if (ctx->r2 != 0) {
        // 0x80226E54: nop
    
            goto L_80226E8C;
    }
    // 0x80226E54: nop

    // 0x80226E58: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80226E5C: addiu       $v0, $v0, -0x315C
    ctx->r2 = ADD32(ctx->r2, -0X315C);
    // 0x80226E60: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80226E64: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x80226E68: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x80226E6C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80226E70: addiu       $v0, $v0, -0x30D4
    ctx->r2 = ADD32(ctx->r2, -0X30D4);
    // 0x80226E74: sw          $v0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r2;
    // 0x80226E78: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x80226E7C: sb          $zero, 0x6($s0)
    MEM_B(0X6, ctx->r16) = 0;
    // 0x80226E80: sb          $zero, 0x7($s0)
    MEM_B(0X7, ctx->r16) = 0;
    // 0x80226E84: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80226E88: sb          $v1, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r3;
L_80226E8C:
    // 0x80226E8C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80226E90: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226E94: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226E98: jr          $ra
    // 0x80226E9C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226E9C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80237DBC_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237DBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80237DC0: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80237DC4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80237DC8: lbu         $v0, 0x9($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X9);
    // 0x80237DCC: lbu         $v1, 0xA($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0XA);
    // 0x80237DD0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80237DD4: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80237DD8: andi        $a0, $v1, 0xFF
    ctx->r4 = ctx->r3 & 0XFF;
    // 0x80237DDC: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x80237DE0: bne         $a0, $zero, L_80237DF8
    if (ctx->r4 != 0) {
        // 0x80237DE4: sb          $v1, 0xA($a1)
        MEM_B(0XA, ctx->r5) = ctx->r3;
            goto L_80237DF8;
    }
    // 0x80237DE4: sb          $v1, 0xA($a1)
    MEM_B(0XA, ctx->r5) = ctx->r3;
    // 0x80237DE8: jal         0x8004F5C4
    // 0x80237DEC: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x80237DEC: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    after_0:
    // 0x80237DF0: j           L_80237E38
    // 0x80237DF4: nop

        goto L_80237E38;
    // 0x80237DF4: nop

L_80237DF8:
    // 0x80237DF8: lbu         $v1, 0x3($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X3);
    // 0x80237DFC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80237E00: bne         $v1, $v0, L_80237E1C
    if (ctx->r3 != ctx->r2) {
        // 0x80237E04: sll         $a2, $a0, 3
        ctx->r6 = S32(ctx->r4 << 3);
            goto L_80237E1C;
    }
    // 0x80237E04: sll         $a2, $a0, 3
    ctx->r6 = S32(ctx->r4 << 3);
    // 0x80237E08: lbu         $v0, 0x9($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X9);
    // 0x80237E0C: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x80237E10: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x80237E14: sh          $v0, 0x28($a1)
    MEM_H(0X28, ctx->r5) = ctx->r2;
    // 0x80237E18: sh          $v0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r2;
L_80237E1C:
    // 0x80237E1C: sll         $v0, $a0, 19
    ctx->r2 = S32(ctx->r4 << 19);
    // 0x80237E20: sll         $v1, $a0, 11
    ctx->r3 = S32(ctx->r4 << 11);
    // 0x80237E24: lui         $a0, 0x200
    ctx->r4 = S32(0X200 << 16);
    // 0x80237E28: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x80237E2C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80237E30: or          $v0, $v0, $a2
    ctx->r2 = ctx->r2 | ctx->r6;
    // 0x80237E34: sw          $v0, 0x40($a1)
    MEM_W(0X40, ctx->r5) = ctx->r2;
L_80237E38:
    // 0x80237E38: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80237E3C: jr          $ra
    // 0x80237E40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80237E40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D490_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D490: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022D494: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x8022D498: bne         $v0, $zero, L_8022D4D0
    if (ctx->r2 != 0) {
        // 0x8022D49C: addiu       $a1, $a0, 0x348
        ctx->r5 = ADD32(ctx->r4, 0X348);
            goto L_8022D4D0;
    }
    // 0x8022D49C: addiu       $a1, $a0, 0x348
    ctx->r5 = ADD32(ctx->r4, 0X348);
    // 0x8022D4A0: lhu         $v0, 0x348($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X348);
    // 0x8022D4A4: lh          $v1, 0x34E($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X34E);
    // 0x8022D4A8: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x8022D4AC: beq         $v1, $zero, L_8022D4BC
    if (ctx->r3 == 0) {
        // 0x8022D4B0: sh          $v0, 0x348($a0)
        MEM_H(0X348, ctx->r4) = ctx->r2;
            goto L_8022D4BC;
    }
    // 0x8022D4B0: sh          $v0, 0x348($a0)
    MEM_H(0X348, ctx->r4) = ctx->r2;
    // 0x8022D4B4: j           L_8022D4C0
    // 0x8022D4B8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_8022D4C0;
    // 0x8022D4B8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_8022D4BC:
    // 0x8022D4BC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_8022D4C0:
    // 0x8022D4C0: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x8022D4C4: lbu         $v0, 0x3($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X3);
    // 0x8022D4C8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D4CC: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
L_8022D4D0:
    // 0x8022D4D0: jr          $ra
    // 0x8022D4D4: nop

    TRACE_RETURN()
    return;
    // 0x8022D4D4: nop

;}
RECOMP_FUNC void func_80239A1C_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239A1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80239A20: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80239A24: jal         0x8004F62C
    // 0x80239A28: nop

    func_8004F62C_2AA2C(rdram, ctx);
        goto after_0;
    // 0x80239A28: nop

    after_0:
    // 0x80239A2C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80239A30: jr          $ra
    // 0x80239A34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80239A34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022681C_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022681C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226820: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226824: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226828: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022682C: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x80226830: bne         $v0, $zero, L_80226870
    if (ctx->r2 != 0) {
        // 0x80226834: nop
    
            goto L_80226870;
    }
    // 0x80226834: nop

    // 0x80226838: jal         0x8004F488
    // 0x8022683C: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    func_8004F488_2A888(rdram, ctx);
        goto after_0;
    // 0x8022683C: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    after_0:
    // 0x80226840: jal         0x8004F488
    // 0x80226844: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    func_8004F488_2A888(rdram, ctx);
        goto after_1;
    // 0x80226844: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    after_1:
    // 0x80226848: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x8022684C: addiu       $s0, $s0, -0x3714
    ctx->r16 = ADD32(ctx->r16, -0X3714);
    // 0x80226850: jal         0x8005FA7C
    // 0x80226854: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_2;
    // 0x80226854: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80226858: jal         0x8005FA7C
    // 0x8022685C: addiu       $a0, $s0, -0x28
    ctx->r4 = ADD32(ctx->r16, -0X28);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_3;
    // 0x8022685C: addiu       $a0, $s0, -0x28
    ctx->r4 = ADD32(ctx->r16, -0X28);
    after_3:
    // 0x80226860: jal         0x8005FA7C
    // 0x80226864: addiu       $a0, $s0, 0x64
    ctx->r4 = ADD32(ctx->r16, 0X64);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_4;
    // 0x80226864: addiu       $a0, $s0, 0x64
    ctx->r4 = ADD32(ctx->r16, 0X64);
    after_4:
    // 0x80226868: jal         0x802269B4
    // 0x8022686C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_802269B4_ovl3(rdram, ctx);
        goto after_5;
    // 0x8022686C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_5:
L_80226870:
    // 0x80226870: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226874: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226878: jr          $ra
    // 0x8022687C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022687C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023AC58_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023AC58: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8023AC5C: lh          $v0, -0x3BBC($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X3BBC);
    // 0x8023AC60: bgtz        $v0, L_8023AC70
    if (SIGNED(ctx->r2) > 0) {
        // 0x8023AC64: ori         $v0, $zero, 0xFFFF
        ctx->r2 = 0 | 0XFFFF;
            goto L_8023AC70;
    }
    // 0x8023AC64: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x8023AC68: j           L_8023AC7C
    // 0x8023AC6C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8023AC7C;
    // 0x8023AC6C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8023AC70:
    // 0x8023AC70: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8023AC74: sh          $v0, -0x3AA4($at)
    MEM_H(-0X3AA4, ctx->r1) = ctx->r2;
    // 0x8023AC78: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8023AC7C:
    // 0x8023AC7C: jr          $ra
    // 0x8023AC80: nop

    TRACE_RETURN()
    return;
    // 0x8023AC80: nop

;}
RECOMP_FUNC void func_8022D6B4_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D6B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022D6B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D6BC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022D6C0: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8022D6C4: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8022D6C8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022D6CC: jal         0x8003516C
    // 0x8022D6D0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8003516C_1056C(rdram, ctx);
        goto after_0;
    // 0x8022D6D0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8022D6D4: bne         $v0, $zero, L_8022D6F8
    if (ctx->r2 != 0) {
        // 0x8022D6D8: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022D6F8;
    }
    // 0x8022D6D8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022D6DC: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x8022D6E0: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x8022D6E4: jal         0x800610AC
    // 0x8022D6E8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_1;
    // 0x8022D6E8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x8022D6EC: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022D6F0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D6F4: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
L_8022D6F8:
    // 0x8022D6F8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022D6FC: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x8022D700: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022D704: jal         0x8004F820
    // 0x8022D708: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8022D708: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_2:
    // 0x8022D70C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022D710: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8022D714: sb          $a0, 0x11B($s0)
    MEM_B(0X11B, ctx->r16) = ctx->r4;
    // 0x8022D718: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022D71C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022D720: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022D724: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022D728: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022D72C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D730: jr          $ra
    // 0x8022D734: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022D734: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80226A14_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226A14: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80226A18: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80226A1C: lui         $s0, 0x801A
    ctx->r16 = S32(0X801A << 16);
    // 0x80226A20: lw          $s0, -0x5858($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X5858);
    // 0x80226A24: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x80226A28: andi        $a3, $a3, 0xFFFF
    ctx->r7 = ctx->r7 & 0XFFFF;
    // 0x80226A2C: sll         $a3, $a3, 5
    ctx->r7 = S32(ctx->r7 << 5);
    // 0x80226A30: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80226A34: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80226A38: sb          $v0, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r2;
    // 0x80226A3C: lbu         $v1, 0x7($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X7);
    // 0x80226A40: ori         $a3, $a3, 0xF
    ctx->r7 = ctx->r7 | 0XF;
    // 0x80226A44: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80226A48: sb          $a1, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r5;
    // 0x80226A4C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80226A50: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x80226A54: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
    // 0x80226A58: sb          $a0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r4;
    // 0x80226A5C: sb          $a2, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r6;
    // 0x80226A60: sh          $v0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r2;
    // 0x80226A64: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80226A68: sb          $v1, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r3;
    // 0x80226A6C: lui         $s1, 0x801A
    ctx->r17 = S32(0X801A << 16);
    // 0x80226A70: lw          $s1, -0x5858($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X5858);
    // 0x80226A74: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
    // 0x80226A78: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226A7C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80226A80: sh          $zero, 0x8($s0)
    MEM_H(0X8, ctx->r16) = 0;
    // 0x80226A84: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
    // 0x80226A88: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80226A8C: addiu       $s1, $s1, 0x28
    ctx->r17 = ADD32(ctx->r17, 0X28);
    // 0x80226A90: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80226A94: sw          $s1, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r17;
    // 0x80226A98: jal         0x8003055C
    // 0x80226A9C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8003055C_B95C(rdram, ctx);
        goto after_0;
    // 0x80226A9C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x80226AA0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80226AA4: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x80226AA8: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80226AAC: lw          $v0, -0x5858($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5858);
    // 0x80226AB0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80226AB4: addiu       $v0, $v0, 0x28
    ctx->r2 = ADD32(ctx->r2, 0X28);
    // 0x80226AB8: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80226ABC: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x80226AC0: jal         0x8002FD30
    // 0x80226AC4: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    func_8002FD30_B130(rdram, ctx);
        goto after_1;
    // 0x80226AC4: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    after_1:
    // 0x80226AC8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80226ACC: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x80226AD0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80226AD4: jal         0x8002FD30
    // 0x80226AD8: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    func_8002FD30_B130(rdram, ctx);
        goto after_2;
    // 0x80226AD8: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    after_2:
    // 0x80226ADC: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80226AE0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80226AE4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80226AE8: jr          $ra
    // 0x80226AEC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80226AEC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022D560_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D560: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022D564: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8022D568: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022D56C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022D570: addiu       $s1, $sp, 0x20
    ctx->r17 = ADD32(ctx->r29, 0X20);
    // 0x8022D574: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022D578: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x8022D57C: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x8022D580: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022D584: lhu         $v0, 0x56($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X56);
    // 0x8022D588: lbu         $v1, 0xAC($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XAC);
    // 0x8022D58C: addiu       $s3, $s2, 0x14
    ctx->r19 = ADD32(ctx->r18, 0X14);
    // 0x8022D590: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8022D594: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8022D598: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x8022D59C: sh          $v0, 0x34C($s2)
    MEM_H(0X34C, ctx->r18) = ctx->r2;
    // 0x8022D5A0: sb          $v1, 0x34A($s2)
    MEM_B(0X34A, ctx->r18) = ctx->r3;
    // 0x8022D5A4: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022D5A8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022D5AC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022D5B0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022D5B4: sb          $v0, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = ctx->r2;
    // 0x8022D5B8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022D5BC: sb          $zero, 0x49BA($at)
    MEM_B(0X49BA, ctx->r1) = 0;
    // 0x8022D5C0: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x8022D5C4: jal         0x8009A3B4
    // 0x8022D5C8: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022D5C8: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022D5CC: lh          $v0, 0x14($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X14);
    // 0x8022D5D0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022D5D4: lh          $v0, 0x16($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X16);
    // 0x8022D5D8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022D5DC: addiu       $v0, $v0, -0x30
    ctx->r2 = ADD32(ctx->r2, -0X30);
    // 0x8022D5E0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022D5E4: lh          $v0, 0x18($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X18);
    // 0x8022D5E8: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x8022D5EC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022D5F0: jal         0x8004EC38
    // 0x8022D5F4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_8004EC38_2A038(rdram, ctx);
        goto after_1;
    // 0x8022D5F4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x8022D5F8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022D5FC: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x8022D600: lw          $a3, 0x435C($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X435C);
    // 0x8022D604: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x8022D608: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x8022D60C: jal         0x80034FCC
    // 0x8022D610: addiu       $a3, $a3, 0x6C
    ctx->r7 = ADD32(ctx->r7, 0X6C);
    func_80034FCC_103CC(rdram, ctx);
        goto after_2;
    // 0x8022D610: addiu       $a3, $a3, 0x6C
    ctx->r7 = ADD32(ctx->r7, 0X6C);
    after_2:
    // 0x8022D614: lbu         $a0, 0x2($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X2);
    // 0x8022D618: jal         0x8022DC08
    // 0x8022D61C: addiu       $s1, $s2, 0x348
    ctx->r17 = ADD32(ctx->r18, 0X348);
    func_8022DC08_ovl3(rdram, ctx);
        goto after_3;
    // 0x8022D61C: addiu       $s1, $s2, 0x348
    ctx->r17 = ADD32(ctx->r18, 0X348);
    after_3:
    // 0x8022D620: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8022D624: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x8022D628: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022D62C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022D630: jal         0x8004F820
    // 0x8022D634: sb          $v0, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_4;
    // 0x8022D634: sb          $v0, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r2;
    after_4:
    // 0x8022D638: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D63C: bgez        $v0, L_8022D668
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022D640: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_8022D668;
    }
    // 0x8022D640: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8022D644: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x8022D648: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022D64C: jal         0x8004F820
    // 0x8022D650: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_5;
    // 0x8022D650: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_5:
    // 0x8022D654: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D658: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022D65C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022D660: j           L_8022D680
    // 0x8022D664: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
        goto L_8022D680;
    // 0x8022D664: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
L_8022D668:
    // 0x8022D668: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x8022D66C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022D670: jal         0x8004F820
    // 0x8022D674: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_6;
    // 0x8022D674: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_6:
    // 0x8022D678: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D67C: sra         $v1, $v0, 19
    ctx->r3 = S32(SIGNED(ctx->r2) >> 19);
L_8022D680:
    // 0x8022D680: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8022D684: sh          $v1, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r3;
    // 0x8022D688: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D68C: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    // 0x8022D690: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022D694: sb          $v0, 0x11B($s2)
    MEM_B(0X11B, ctx->r18) = ctx->r2;
    // 0x8022D698: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x8022D69C: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x8022D6A0: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8022D6A4: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022D6A8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022D6AC: jr          $ra
    // 0x8022D6B0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8022D6B0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_802268E4_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802268E4: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x802268E8: bne         $v0, $zero, L_80226908
    if (ctx->r2 != 0) {
        // 0x802268EC: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_80226908;
    }
    // 0x802268EC: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x802268F0: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x802268F4: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x802268F8: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x802268FC: lbu         $v0, 0xD($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XD);
    // 0x80226900: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226904: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
L_80226908:
    // 0x80226908: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x8022690C: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80226910: bne         $v1, $v0, L_80226920
    if (ctx->r3 != ctx->r2) {
        // 0x80226914: nop
    
            goto L_80226920;
    }
    // 0x80226914: nop

    // 0x80226918: lw          $v0, 0x28($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X28);
    // 0x8022691C: sb          $zero, 0xD($v0)
    MEM_B(0XD, ctx->r2) = 0;
L_80226920:
    // 0x80226920: jr          $ra
    // 0x80226924: nop

    TRACE_RETURN()
    return;
    // 0x80226924: nop

;}
RECOMP_FUNC void func_80232290_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232290: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x80232294: sw          $s0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r16;
    // 0x80232298: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023229C: addiu       $a0, $s0, 0x8C
    ctx->r4 = ADD32(ctx->r16, 0X8C);
    // 0x802322A0: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x802322A4: sw          $ra, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r31;
    // 0x802322A8: sw          $s3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r19;
    // 0x802322AC: sw          $s2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r18;
    // 0x802322B0: sw          $s1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r17;
    // 0x802322B4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802322B8: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x802322BC: addiu       $s1, $sp, 0x28
    ctx->r17 = ADD32(ctx->r29, 0X28);
    // 0x802322C0: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x802322C4: lui         $s2, 0x8024
    ctx->r18 = S32(0X8024 << 16);
    // 0x802322C8: addiu       $s2, $s2, -0x1F40
    ctx->r18 = ADD32(ctx->r18, -0X1F40);
    // 0x802322CC: sw          $zero, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = 0;
    // 0x802322D0: sw          $zero, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = 0;
    // 0x802322D4: sw          $zero, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = 0;
    // 0x802322D8: sw          $zero, 0xCC($s0)
    MEM_W(0XCC, ctx->r16) = 0;
    // 0x802322DC: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x802322E0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x802322E4: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x802322E8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802322EC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802322F0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x802322F4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802322F8: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x802322FC: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x80232300: addiu       $v0, $zero, -0x1000
    ctx->r2 = ADD32(0, -0X1000);
    // 0x80232304: sh          $zero, 0x10($sp)
    MEM_H(0X10, ctx->r29) = 0;
    // 0x80232308: sh          $zero, 0x12($sp)
    MEM_H(0X12, ctx->r29) = 0;
    // 0x8023230C: jal         0x800308E8
    // 0x80232310: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_800308E8_BCE8(rdram, ctx);
        goto after_0;
    // 0x80232310: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_0:
    // 0x80232314: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80232318: jal         0x800321EC
    // 0x8023231C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    func_800321EC_D5EC(rdram, ctx);
        goto after_1;
    // 0x8023231C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x80232320: addiu       $a0, $s0, 0xD0
    ctx->r4 = ADD32(ctx->r16, 0XD0);
    // 0x80232324: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x80232328: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8023232C: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x80232330: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80232334: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80232338: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x8023233C: sh          $v1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r3;
    // 0x80232340: jal         0x8009A3B4
    // 0x80232344: sh          $a3, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r7;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80232344: sh          $a3, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r7;
    after_2:
    // 0x80232348: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8023234C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80232350: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80232354: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232358: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8023235C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232360: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80232364: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80232368: lhu         $v0, -0x1F4E($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X1F4E);
    // 0x8023236C: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    // 0x80232370: lh          $v1, 0x10($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X10);
    // 0x80232374: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80232378: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023237C: mult        $v1, $a0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80232380: mflo        $v1
    ctx->r3 = lo;
    // 0x80232384: sra         $v1, $v1, 4
    ctx->r3 = S32(SIGNED(ctx->r3) >> 4);
    // 0x80232388: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x8023238C: lh          $v0, 0x12($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X12);
    // 0x80232390: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80232394: mflo        $v0
    ctx->r2 = lo;
    // 0x80232398: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8023239C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x802323A0: lh          $v0, 0x14($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X14);
    // 0x802323A4: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802323A8: mflo        $v0
    ctx->r2 = lo;
    // 0x802323AC: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x802323B0: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x802323B4: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
    // 0x802323B8: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x802323BC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802323C0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802323C4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x802323C8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802323CC: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x802323D0: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x802323D4: lh          $a0, -0x1F4C($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X1F4C);
    // 0x802323D8: lh          $v0, 0x10($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X10);
    // 0x802323DC: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802323E0: mflo        $v0
    ctx->r2 = lo;
    // 0x802323E4: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x802323E8: sh          $v0, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = ctx->r2;
    // 0x802323EC: lh          $v0, 0x12($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X12);
    // 0x802323F0: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802323F4: mflo        $v0
    ctx->r2 = lo;
    // 0x802323F8: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x802323FC: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    // 0x80232400: lh          $v0, 0x14($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X14);
    // 0x80232404: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80232408: mflo        $v0
    ctx->r2 = lo;
    // 0x8023240C: addiu       $s2, $s2, -0xF
    ctx->r18 = ADD32(ctx->r18, -0XF);
    // 0x80232410: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80232414: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232418: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8023241C: sh          $v0, 0x50($s0)
    MEM_H(0X50, ctx->r16) = ctx->r2;
    // 0x80232420: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80232424: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80232428: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023242C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80232430: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80232434: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232438: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023243C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80232440: lbu         $v0, -0x1F50($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X1F50);
    // 0x80232444: sll         $a1, $v1, 1
    ctx->r5 = S32(ctx->r3 << 1);
    // 0x80232448: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x8023244C: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x80232450: subu        $a1, $a1, $v1
    ctx->r5 = SUB32(ctx->r5, ctx->r3);
    // 0x80232454: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x80232458: addu        $a1, $a1, $s2
    ctx->r5 = ADD32(ctx->r5, ctx->r18);
    // 0x8023245C: jal         0x8004D5D4
    // 0x80232460: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_3;
    // 0x80232460: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    after_3:
    // 0x80232464: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80232468: lhu         $t0, 0x14($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X14);
    // 0x8023246C: lhu         $t1, 0x16($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X16);
    // 0x80232470: lhu         $t2, 0x18($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X18);
    // 0x80232474: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80232478: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8023247C: lh          $a3, 0x18($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X18);
    // 0x80232480: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80232484: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80232488: sb          $zero, 0x2($s0)
    MEM_B(0X2, ctx->r16) = 0;
    // 0x8023248C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80232490: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80232494: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x80232498: sh          $t0, 0xAC($s0)
    MEM_H(0XAC, ctx->r16) = ctx->r8;
    // 0x8023249C: sh          $t1, 0xAE($s0)
    MEM_H(0XAE, ctx->r16) = ctx->r9;
    // 0x802324A0: sh          $t2, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r10;
    // 0x802324A4: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x802324A8: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x802324AC: jal         0x8009A3B4
    // 0x802324B0: sw          $a3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r7;
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x802324B0: sw          $a3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r7;
    after_4:
    // 0x802324B4: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x802324B8: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x802324BC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802324C0: jal         0x8009A3B4
    // 0x802324C4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x802324C4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x802324C8: addiu       $s2, $s0, 0xD8
    ctx->r18 = ADD32(ctx->r16, 0XD8);
    // 0x802324CC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x802324D0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802324D4: jal         0x8009A3B4
    // 0x802324D8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x802324D8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x802324DC: addiu       $s3, $s0, 0xE0
    ctx->r19 = ADD32(ctx->r16, 0XE0);
    // 0x802324E0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x802324E4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802324E8: jal         0x8009A3B4
    // 0x802324EC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x802324EC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_7:
    // 0x802324F0: addiu       $s1, $s0, 0xE8
    ctx->r17 = ADD32(ctx->r16, 0XE8);
    // 0x802324F4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802324F8: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x802324FC: jal         0x8009A3B4
    // 0x80232500: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x80232500: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
    // 0x80232504: addiu       $a0, $s0, 0xF0
    ctx->r4 = ADD32(ctx->r16, 0XF0);
    // 0x80232508: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023250C: jal         0x8009A3B4
    // 0x80232510: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x80232510: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_9:
    // 0x80232514: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80232518: lbu         $a0, 0x3($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X3);
    // 0x8023251C: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x80232520: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x80232524: sw          $v1, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r3;
    // 0x80232528: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023252C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80232530: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80232534: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80232538: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023253C: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80232540: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232544: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80232548: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023254C: lbu         $v0, -0x1F30($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X1F30);
    // 0x80232550: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232554: jal         0x80232A5C
    // 0x80232558: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    func_80232A5C_ovl3(rdram, ctx);
        goto after_10;
    // 0x80232558: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    after_10:
    // 0x8023255C: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80232560: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80232564: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80232568: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023256C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80232570: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232574: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80232578: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023257C: lbu         $v0, -0x1F34($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X1F34);
    // 0x80232580: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232584: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80232588: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023258C: lw          $v0, -0x1E1C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1E1C);
    // 0x80232590: jalr        $v0
    // 0x80232594: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_11;
    // 0x80232594: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_11:
    // 0x80232598: lw          $ra, 0x68($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X68);
    // 0x8023259C: lw          $s3, 0x64($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X64);
    // 0x802325A0: lw          $s2, 0x60($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X60);
    // 0x802325A4: lw          $s1, 0x5C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X5C);
    // 0x802325A8: lw          $s0, 0x58($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X58);
    // 0x802325AC: jr          $ra
    // 0x802325B0: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    TRACE_RETURN()
    return;
    // 0x802325B0: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_8022B58C_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B58C: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8022B590: bne         $v0, $zero, L_8022B5B0
    if (ctx->r2 != 0) {
        // 0x8022B594: nop
    
            goto L_8022B5B0;
    }
    // 0x8022B594: nop

    // 0x8022B598: lhu         $v0, 0x14($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X14);
    // 0x8022B59C: lhu         $v1, 0x16($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X16);
    // 0x8022B5A0: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8022B5A4: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8022B5A8: sh          $v0, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r2;
    // 0x8022B5AC: sh          $v1, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r3;
L_8022B5B0:
    // 0x8022B5B0: jr          $ra
    // 0x8022B5B4: nop

    TRACE_RETURN()
    return;
    // 0x8022B5B4: nop

;}
RECOMP_FUNC void func_8022CDCC_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CDCC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022CDD0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022CDD4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022CDD8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022CDDC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022CDE0: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022CDE4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022CDE8: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x8022CDEC: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8022CDF0: bne         $v0, $zero, L_8022CE4C
    if (ctx->r2 != 0) {
        // 0x8022CDF4: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022CE4C;
    }
    // 0x8022CDF4: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022CDF8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022CDFC: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x8022CE00: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022CE04: jal         0x8004F820
    // 0x8022CE08: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022CE08: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_0:
    // 0x8022CE0C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022CE10: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022CE14: lw          $a0, 0x3FF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3FF0);
    // 0x8022CE18: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022CE1C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022CE20: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x8022CE24: and         $a0, $a0, $v0
    ctx->r4 = ctx->r4 & ctx->r2;
    // 0x8022CE28: beq         $a0, $zero, L_8022CE4C
    if (ctx->r4 == 0) {
        // 0x8022CE2C: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022CE4C;
    }
    // 0x8022CE2C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022CE30: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022CE34: jal         0x8022DB70
    // 0x8022CE38: nop

    func_8022DB70_ovl3(rdram, ctx);
        goto after_1;
    // 0x8022CE38: nop

    after_1:
    // 0x8022CE3C: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022CE40: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022CE44: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022CE48: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
L_8022CE4C:
    // 0x8022CE4C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022CE50: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x8022CE54: bne         $v0, $zero, L_8022CE78
    if (ctx->r2 != 0) {
        // 0x8022CE58: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_8022CE78;
    }
    // 0x8022CE58: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8022CE5C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022CE60: sb          $v1, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r3;
    // 0x8022CE64: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x8022CE68: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8022CE6C: jal         0x8022DC08
    // 0x8022CE70: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_8022DC08_ovl3(rdram, ctx);
        goto after_2;
    // 0x8022CE70: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_2:
    // 0x8022CE74: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022CE78:
    // 0x8022CE78: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022CE7C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022CE80: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022CE84: jr          $ra
    // 0x8022CE88: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022CE88: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802331D0_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802331D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802331D4: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x802331D8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802331DC: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x802331E0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802331E4: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x802331E8: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
    // 0x802331EC: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
    // 0x802331F0: addiu       $v0, $a0, 0x14
    ctx->r2 = ADD32(ctx->r4, 0X14);
    // 0x802331F4: addiu       $a0, $a1, 0x38
    ctx->r4 = ADD32(ctx->r5, 0X38);
    // 0x802331F8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x802331FC: jal         0x8009A3B4
    // 0x80233200: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80233200: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80233204: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80233208: jr          $ra
    // 0x8023320C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023320C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022BBCC_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BBCC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022BBD0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022BBD4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022BBD8: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022BBDC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022BBE0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022BBE4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022BBE8: lbu         $s0, 0xD($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0XD);
    // 0x8022BBEC: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022BBF0: addiu       $v0, $v0, -0x2228
    ctx->r2 = ADD32(ctx->r2, -0X2228);
    // 0x8022BBF4: andi        $s0, $s0, 0x30
    ctx->r16 = ctx->r16 & 0X30;
    // 0x8022BBF8: jal         0x800A3450
    // 0x8022BBFC: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022BBFC: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    after_0:
    // 0x8022BC00: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022BC04: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x8022BC08: lbu         $s3, 0x0($s0)
    ctx->r19 = MEM_BU(ctx->r16, 0X0);
    // 0x8022BC0C: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x8022BC10: addiu       $s0, $s0, -0x21E8
    ctx->r16 = ADD32(ctx->r16, -0X21E8);
    // 0x8022BC14: andi        $v1, $s3, 0xFF
    ctx->r3 = ctx->r19 & 0XFF;
    // 0x8022BC18: beq         $v1, $zero, L_8022BC34
    if (ctx->r3 == 0) {
        // 0x8022BC1C: addiu       $s2, $s1, 0x348
        ctx->r18 = ADD32(ctx->r17, 0X348);
            goto L_8022BC34;
    }
    // 0x8022BC1C: addiu       $s2, $s1, 0x348
    ctx->r18 = ADD32(ctx->r17, 0X348);
    // 0x8022BC20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022BC24: beq         $v1, $v0, L_8022BC54
    if (ctx->r3 == ctx->r2) {
        // 0x8022BC28: nop
    
            goto L_8022BC54;
    }
    // 0x8022BC28: nop

    // 0x8022BC2C: j           L_8022BC68
    // 0x8022BC30: nop

        goto L_8022BC68;
    // 0x8022BC30: nop

L_8022BC34:
    // 0x8022BC34: jal         0x8022DC18
    // 0x8022BC38: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    func_8022DC18_ovl3(rdram, ctx);
        goto after_1;
    // 0x8022BC38: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    after_1:
    // 0x8022BC3C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022BC40: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022BC44: jal         0x8022DC58
    // 0x8022BC48: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    func_8022DC58_ovl3(rdram, ctx);
        goto after_2;
    // 0x8022BC48: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    after_2:
    // 0x8022BC4C: j           L_8022BCC0
    // 0x8022BC50: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
        goto L_8022BCC0;
    // 0x8022BC50: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
L_8022BC54:
    // 0x8022BC54: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x8022BC58: jal         0x8022DC08
    // 0x8022BC5C: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    func_8022DC08_ovl3(rdram, ctx);
        goto after_3;
    // 0x8022BC5C: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    after_3:
    // 0x8022BC60: j           L_8022BCC0
    // 0x8022BC64: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
        goto L_8022BCC0;
    // 0x8022BC64: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
L_8022BC68:
    // 0x8022BC68: lh          $v1, 0x16($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X16);
    // 0x8022BC6C: lh          $v0, 0x1E($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X1E);
    // 0x8022BC70: bne         $v1, $v0, L_8022BC80
    if (ctx->r3 != ctx->r2) {
        // 0x8022BC74: nop
    
            goto L_8022BC80;
    }
    // 0x8022BC74: nop

    // 0x8022BC78: j           L_8022BCC0
    // 0x8022BC7C: addiu       $s3, $zero, 0xFF
    ctx->r19 = ADD32(0, 0XFF);
        goto L_8022BCC0;
    // 0x8022BC7C: addiu       $s3, $zero, 0xFF
    ctx->r19 = ADD32(0, 0XFF);
L_8022BC80:
    // 0x8022BC80: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x8022BC84: jal         0x8022DC18
    // 0x8022BC88: nop

    func_8022DC18_ovl3(rdram, ctx);
        goto after_4;
    // 0x8022BC88: nop

    after_4:
    // 0x8022BC8C: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x8022BC90: lh          $v0, 0x14($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X14);
    // 0x8022BC94: beq         $v0, $zero, L_8022BCA8
    if (ctx->r2 == 0) {
        // 0x8022BC98: nop
    
            goto L_8022BCA8;
    }
    // 0x8022BC98: nop

    // 0x8022BC9C: lhu         $v0, 0xA($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XA);
    // 0x8022BCA0: j           L_8022BCB8
    // 0x8022BCA4: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
        goto L_8022BCB8;
    // 0x8022BCA4: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
L_8022BCA8:
    // 0x8022BCA8: lhu         $v0, 0xA($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XA);
    // 0x8022BCAC: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022BCB0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022BCB4: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
L_8022BCB8:
    // 0x8022BCB8: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x8022BCBC: addiu       $s0, $s0, -0x21C8
    ctx->r16 = ADD32(ctx->r16, -0X21C8);
L_8022BCC0:
    // 0x8022BCC0: jal         0x800A3450
    // 0x8022BCC4: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_5;
    // 0x8022BCC4: nop

    after_5:
    // 0x8022BCC8: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022BCCC: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8022BCD0: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8022BCD4: andi        $v1, $s3, 0xFF
    ctx->r3 = ctx->r19 & 0XFF;
    // 0x8022BCD8: sh          $v0, 0x8($s2)
    MEM_H(0X8, ctx->r18) = ctx->r2;
    // 0x8022BCDC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022BCE0: beq         $v1, $v0, L_8022BCF8
    if (ctx->r3 == ctx->r2) {
        // 0x8022BCE4: nop
    
            goto L_8022BCF8;
    }
    // 0x8022BCE4: nop

    // 0x8022BCE8: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8022BCEC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022BCF0: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x8022BCF4: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_8022BCF8:
    // 0x8022BCF8: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022BCFC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022BD00: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022BD04: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022BD08: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022BD0C: jr          $ra
    // 0x8022BD10: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022BD10: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8023AD50_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023AD50: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8023AD54: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x8023AD58: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x8023AD5C: sb          $zero, 0xB($a0)
    MEM_B(0XB, ctx->r4) = 0;
    // 0x8023AD60: sb          $zero, 0xC($a0)
    MEM_B(0XC, ctx->r4) = 0;
    // 0x8023AD64: sb          $zero, 0xD($a0)
    MEM_B(0XD, ctx->r4) = 0;
    // 0x8023AD68: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023AD6C: jr          $ra
    // 0x8023AD70: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x8023AD70: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_8022AA6C_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AA6C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8022AA70: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8022AA74: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022AA78: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x8022AA7C: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x8022AA80: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x8022AA84: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x8022AA88: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x8022AA8C: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8022AA90: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8022AA94: addiu       $s0, $s1, 0x380
    ctx->r16 = ADD32(ctx->r17, 0X380);
    // 0x8022AA98: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x8022AA9C: addiu       $s6, $zero, 0x7FFF
    ctx->r22 = ADD32(0, 0X7FFF);
    // 0x8022AAA0: lui         $s5, 0x8024
    ctx->r21 = S32(0X8024 << 16);
    // 0x8022AAA4: addiu       $s5, $s5, -0x2874
    ctx->r21 = ADD32(ctx->r21, -0X2874);
    // 0x8022AAA8: addiu       $v0, $s1, 0x410
    ctx->r2 = ADD32(ctx->r17, 0X410);
    // 0x8022AAAC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022AAB0: addiu       $v0, $s1, 0x390
    ctx->r2 = ADD32(ctx->r17, 0X390);
    // 0x8022AAB4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022AAB8: addiu       $v0, $s1, 0x3A4
    ctx->r2 = ADD32(ctx->r17, 0X3A4);
    // 0x8022AABC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8022AAC0: addiu       $v0, $s1, 0x3E8
    ctx->r2 = ADD32(ctx->r17, 0X3E8);
    // 0x8022AAC4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8022AAC8: addiu       $v0, $s1, 0x3FC
    ctx->r2 = ADD32(ctx->r17, 0X3FC);
    // 0x8022AACC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
L_8022AAD0:
    // 0x8022AAD0: sll         $a1, $s4, 2
    ctx->r5 = S32(ctx->r20 << 2);
    // 0x8022AAD4: addu        $v0, $sp, $a1
    ctx->r2 = ADD32(ctx->r29, ctx->r5);
    // 0x8022AAD8: lw          $s3, 0x10($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X10);
    // 0x8022AADC: lh          $v0, 0x10($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X10);
    // 0x8022AAE0: blez        $v0, L_8022ACD8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8022AAE4: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_8022ACD8;
    }
    // 0x8022AAE4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022AAE8: lw          $v1, 0x8($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X8);
    // 0x8022AAEC: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x8022AAF0: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8022AAF4: and         $s2, $v1, $v0
    ctx->r18 = ctx->r3 & ctx->r2;
    // 0x8022AAF8: beq         $s2, $zero, L_8022ACD8
    if (ctx->r18 == 0) {
        // 0x8022AAFC: lui         $v0, 0x3800
        ctx->r2 = S32(0X3800 << 16);
            goto L_8022ACD8;
    }
    // 0x8022AAFC: lui         $v0, 0x3800
    ctx->r2 = S32(0X3800 << 16);
    // 0x8022AB00: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8022AB04: beq         $v0, $zero, L_8022ACCC
    if (ctx->r2 == 0) {
        // 0x8022AB08: subu        $v0, $a0, $s2
        ctx->r2 = SUB32(ctx->r4, ctx->r18);
            goto L_8022ACCC;
    }
    // 0x8022AB08: subu        $v0, $a0, $s2
    ctx->r2 = SUB32(ctx->r4, ctx->r18);
    // 0x8022AB0C: sh          $v0, 0x10($s3)
    MEM_H(0X10, ctx->r19) = ctx->r2;
    // 0x8022AB10: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022AB14: bgtz        $v0, L_8022AB88
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022AB18: nop
    
            goto L_8022AB88;
    }
    // 0x8022AB18: nop

    // 0x8022AB1C: sh          $zero, 0x10($s3)
    MEM_H(0X10, ctx->r19) = 0;
    // 0x8022AB20: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x8022AB24: lui         $v1, 0x8019
    ctx->r3 = S32(0X8019 << 16);
    // 0x8022AB28: lw          $v1, 0x3C60($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3C60);
    // 0x8022AB2C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022AB30: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022AB34: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022AB38: lhu         $v1, 0x0($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X0);
    // 0x8022AB3C: lbu         $s2, 0x9($v0)
    ctx->r18 = MEM_BU(ctx->r2, 0X9);
    // 0x8022AB40: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022AB44: sllv        $v0, $v0, $s4
    ctx->r2 = S32(ctx->r2 << (ctx->r20 & 31));
    // 0x8022AB48: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
    // 0x8022AB4C: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8022AB50: sh          $v1, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r3;
    // 0x8022AB54: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022AB58: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8022AB5C: lw          $v0, -0x2934($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2934);
    // 0x8022AB60: jalr        $v0
    // 0x8022AB64: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022AB64: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x8022AB68: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x8022AB6C: lui         $v1, 0x8019
    ctx->r3 = S32(0X8019 << 16);
    // 0x8022AB70: lw          $v1, 0x3C60($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3C60);
    // 0x8022AB74: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022AB78: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022AB7C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022AB80: lbu         $v0, 0xC($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XC);
    // 0x8022AB84: sh          $v0, 0xDE($s0)
    MEM_H(0XDE, ctx->r16) = ctx->r2;
L_8022AB88:
    // 0x8022AB88: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8022AB8C: andi        $v0, $v0, 0x800
    ctx->r2 = ctx->r2 & 0X800;
    // 0x8022AB90: beq         $v0, $zero, L_8022ABE8
    if (ctx->r2 == 0) {
        // 0x8022AB94: nop
    
            goto L_8022ABE8;
    }
    // 0x8022AB94: nop

    // 0x8022AB98: lhu         $v1, 0xDE($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XDE);
    // 0x8022AB9C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022ABA0: sh          $v1, 0xDE($s0)
    MEM_H(0XDE, ctx->r16) = ctx->r3;
    // 0x8022ABA4: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x8022ABA8: lui         $a0, 0x8019
    ctx->r4 = S32(0X8019 << 16);
    // 0x8022ABAC: lw          $a0, 0x3C60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3C60);
    // 0x8022ABB0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022ABB4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022ABB8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022ABBC: lbu         $v0, 0xC($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XC);
    // 0x8022ABC0: andi        $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 & 0XFFFF;
    // 0x8022ABC4: sltu        $v1, $v1, $v0
    ctx->r3 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x8022ABC8: bne         $v1, $zero, L_8022ABE8
    if (ctx->r3 != 0) {
        // 0x8022ABCC: nop
    
            goto L_8022ABE8;
    }
    // 0x8022ABCC: nop

    // 0x8022ABD0: lw          $a0, 0x60($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X60);
    // 0x8022ABD4: jal         0x8004F4F8
    // 0x8022ABD8: sh          $zero, 0xDE($s0)
    MEM_H(0XDE, ctx->r16) = 0;
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_1;
    // 0x8022ABD8: sh          $zero, 0xDE($s0)
    MEM_H(0XDE, ctx->r16) = 0;
    after_1:
    // 0x8022ABDC: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8022ABE0: andi        $v0, $v0, 0xF7FF
    ctx->r2 = ctx->r2 & 0XF7FF;
    // 0x8022ABE4: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
L_8022ABE8:
    // 0x8022ABE8: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8022ABEC: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8022ABF0: beq         $v0, $zero, L_8022AC58
    if (ctx->r2 == 0) {
        // 0x8022ABF4: lui         $v1, 0x2000
        ctx->r3 = S32(0X2000 << 16);
            goto L_8022AC58;
    }
    // 0x8022ABF4: lui         $v1, 0x2000
    ctx->r3 = S32(0X2000 << 16);
    // 0x8022ABF8: lhu         $v0, 0xA($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XA);
    // 0x8022ABFC: addu        $a0, $v0, $s2
    ctx->r4 = ADD32(ctx->r2, ctx->r18);
    // 0x8022AC00: sh          $a0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r4;
    // 0x8022AC04: lw          $v0, 0x8($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X8);
    // 0x8022AC08: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022AC0C: bnel        $v0, $zero, L_8022AC48
    if (ctx->r2 != 0) {
        // 0x8022AC10: addiu       $a0, $zero, 0xA2
        ctx->r4 = ADD32(0, 0XA2);
            goto L_8022AC48;
    }
    goto skip_0;
    // 0x8022AC10: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
    skip_0:
    // 0x8022AC14: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x8022AC18: lui         $v1, 0x8019
    ctx->r3 = S32(0X8019 << 16);
    // 0x8022AC1C: lw          $v1, 0x3C60($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3C60);
    // 0x8022AC20: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022AC24: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022AC28: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022AC2C: lbu         $v1, 0x9($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X9);
    // 0x8022AC30: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x8022AC34: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022AC38: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022AC3C: bne         $v0, $zero, L_8022AC5C
    if (ctx->r2 != 0) {
        // 0x8022AC40: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_8022AC5C;
    }
    // 0x8022AC40: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x8022AC44: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
L_8022AC48:
    // 0x8022AC48: jal         0x8002A33C
    // 0x8022AC4C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x8022AC4C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_2:
    // 0x8022AC50: j           L_8022AC64
    // 0x8022AC54: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_8022AC64;
    // 0x8022AC54: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8022AC58:
    // 0x8022AC58: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
L_8022AC5C:
    // 0x8022AC5C: jal         0x8002A33C
    // 0x8022AC60: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x8022AC60: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_3:
L_8022AC64:
    // 0x8022AC64: beq         $s4, $zero, L_8022ACB4
    if (ctx->r20 == 0) {
        // 0x8022AC68: nop
    
            goto L_8022ACB4;
    }
    // 0x8022AC68: nop

    // 0x8022AC6C: lhu         $v1, 0x0($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X0);
    // 0x8022AC70: andi        $v0, $v1, 0x3C
    ctx->r2 = ctx->r3 & 0X3C;
    // 0x8022AC74: bne         $v0, $zero, L_8022AC80
    if (ctx->r2 != 0) {
        // 0x8022AC78: ori         $v0, $v1, 0x1000
        ctx->r2 = ctx->r3 | 0X1000;
            goto L_8022AC80;
    }
    // 0x8022AC78: ori         $v0, $v1, 0x1000
    ctx->r2 = ctx->r3 | 0X1000;
    // 0x8022AC7C: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
L_8022AC80:
    // 0x8022AC80: lbu         $v0, 0x0($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0X0);
    // 0x8022AC84: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022AC88: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x8022AC8C: sh          $s6, 0x186($v0)
    MEM_H(0X186, ctx->r2) = ctx->r22;
    // 0x8022AC90: slti        $v0, $s4, 0x3
    ctx->r2 = SIGNED(ctx->r20) < 0X3 ? 1 : 0;
    // 0x8022AC94: beql        $v0, $zero, L_8022ACDC
    if (ctx->r2 == 0) {
        // 0x8022AC98: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_8022ACDC;
    }
    goto skip_1;
    // 0x8022AC98: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_1:
    // 0x8022AC9C: lbu         $v0, 0x0($s5)
    ctx->r2 = MEM_BU(ctx->r21, 0X0);
    // 0x8022ACA0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022ACA4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022ACA8: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x8022ACAC: j           L_8022ACD8
    // 0x8022ACB0: sh          $s6, 0x186($v0)
    MEM_H(0X186, ctx->r2) = ctx->r22;
        goto L_8022ACD8;
    // 0x8022ACB0: sh          $s6, 0x186($v0)
    MEM_H(0X186, ctx->r2) = ctx->r22;
L_8022ACB4:
    // 0x8022ACB4: lw          $v0, 0xD0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD0);
    // 0x8022ACB8: sh          $s6, 0x15E($v0)
    MEM_H(0X15E, ctx->r2) = ctx->r22;
    // 0x8022ACBC: sh          $s6, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r22;
    // 0x8022ACC0: lhu         $v0, 0xA0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XA0);
    // 0x8022ACC4: j           L_8022ACD8
    // 0x8022ACC8: sh          $v0, 0x6E($s1)
    MEM_H(0X6E, ctx->r17) = ctx->r2;
        goto L_8022ACD8;
    // 0x8022ACC8: sh          $v0, 0x6E($s1)
    MEM_H(0X6E, ctx->r17) = ctx->r2;
L_8022ACCC:
    // 0x8022ACCC: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    // 0x8022ACD0: jal         0x8002A33C
    // 0x8022ACD4: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x8022ACD4: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_4:
L_8022ACD8:
    // 0x8022ACD8: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_8022ACDC:
    // 0x8022ACDC: slti        $v0, $s4, 0x5
    ctx->r2 = SIGNED(ctx->r20) < 0X5 ? 1 : 0;
    // 0x8022ACE0: bne         $v0, $zero, L_8022AAD0
    if (ctx->r2 != 0) {
        // 0x8022ACE4: addiu       $s5, $s5, 0x1
        ctx->r21 = ADD32(ctx->r21, 0X1);
            goto L_8022AAD0;
    }
    // 0x8022ACE4: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    // 0x8022ACE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022ACEC: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x8022ACF0: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x8022ACF4: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x8022ACF8: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x8022ACFC: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x8022AD00: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x8022AD04: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8022AD08: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8022AD0C: jr          $ra
    // 0x8022AD10: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x8022AD10: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80238FF0_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238FF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80238FF4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80238FF8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80238FFC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80239000: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80239004: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80239008: lw          $v0, -0x1524($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1524);
    // 0x8023900C: jalr        $v0
    // 0x80239010: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80239010: nop

    after_0:
    // 0x80239014: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80239018: jr          $ra
    // 0x8023901C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023901C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80235784_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235784: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x80235788: lw          $v1, 0x2C($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X2C);
    // 0x8023578C: lhu         $v0, 0x8($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X8);
    // 0x80235790: sh          $v0, 0x4($a2)
    MEM_H(0X4, ctx->r6) = ctx->r2;
    // 0x80235794: lhu         $v0, 0x2($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X2);
    // 0x80235798: sh          $v0, 0x6($a2)
    MEM_H(0X6, ctx->r6) = ctx->r2;
    // 0x8023579C: lhu         $v0, 0x4($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X4);
    // 0x802357A0: sh          $v0, 0x8($a2)
    MEM_H(0X8, ctx->r6) = ctx->r2;
    // 0x802357A4: lhu         $v0, 0x6($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X6);
    // 0x802357A8: sh          $v0, 0xA($a2)
    MEM_H(0XA, ctx->r6) = ctx->r2;
    // 0x802357AC: lhu         $v0, 0xA($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0XA);
    // 0x802357B0: sh          $v0, 0xC($a2)
    MEM_H(0XC, ctx->r6) = ctx->r2;
    // 0x802357B4: lh          $v0, 0x6($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X6);
    // 0x802357B8: lh          $v1, 0x44($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X44);
    // 0x802357BC: lh          $a1, 0x4($a2)
    ctx->r5 = MEM_H(ctx->r6, 0X4);
    // 0x802357C0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x802357C4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802357C8: div         $zero, $v0, $a1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r5)));
    // 0x802357CC: bne         $a1, $zero, L_802357D8
    if (ctx->r5 != 0) {
        // 0x802357D0: nop
    
            goto L_802357D8;
    }
    // 0x802357D0: nop

    // 0x802357D4: break       7
    do_break(2149799892);
L_802357D8:
    // 0x802357D8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802357DC: bne         $a1, $at, L_802357F0
    if (ctx->r5 != ctx->r1) {
        // 0x802357E0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_802357F0;
    }
    // 0x802357E0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802357E4: bne         $v0, $at, L_802357F0
    if (ctx->r2 != ctx->r1) {
        // 0x802357E8: nop
    
            goto L_802357F0;
    }
    // 0x802357E8: nop

    // 0x802357EC: break       6
    do_break(2149799916);
L_802357F0:
    // 0x802357F0: mflo        $v0
    ctx->r2 = lo;
    // 0x802357F4: sw          $v0, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->r2;
    // 0x802357F8: lh          $v0, 0x8($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X8);
    // 0x802357FC: lh          $v1, 0x48($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X48);
    // 0x80235800: lh          $a1, 0x4($a2)
    ctx->r5 = MEM_H(ctx->r6, 0X4);
    // 0x80235804: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80235808: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023580C: div         $zero, $v0, $a1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r5)));
    // 0x80235810: bne         $a1, $zero, L_8023581C
    if (ctx->r5 != 0) {
        // 0x80235814: nop
    
            goto L_8023581C;
    }
    // 0x80235814: nop

    // 0x80235818: break       7
    do_break(2149799960);
L_8023581C:
    // 0x8023581C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80235820: bne         $a1, $at, L_80235834
    if (ctx->r5 != ctx->r1) {
        // 0x80235824: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80235834;
    }
    // 0x80235824: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80235828: bne         $v0, $at, L_80235834
    if (ctx->r2 != ctx->r1) {
        // 0x8023582C: nop
    
            goto L_80235834;
    }
    // 0x8023582C: nop

    // 0x80235830: break       6
    do_break(2149799984);
L_80235834:
    // 0x80235834: mflo        $v0
    ctx->r2 = lo;
    // 0x80235838: sw          $v0, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->r2;
    // 0x8023583C: lh          $v0, 0xA($a2)
    ctx->r2 = MEM_H(ctx->r6, 0XA);
    // 0x80235840: lh          $v1, 0x56($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X56);
    // 0x80235844: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80235848: andi        $a0, $v0, 0xFFF
    ctx->r4 = ctx->r2 & 0XFFF;
    // 0x8023584C: slti        $v0, $a0, 0x801
    ctx->r2 = SIGNED(ctx->r4) < 0X801 ? 1 : 0;
    // 0x80235850: beql        $v0, $zero, L_80235858
    if (ctx->r2 == 0) {
        // 0x80235854: addiu       $a0, $a0, -0x1000
        ctx->r4 = ADD32(ctx->r4, -0X1000);
            goto L_80235858;
    }
    goto skip_0;
    // 0x80235854: addiu       $a0, $a0, -0x1000
    ctx->r4 = ADD32(ctx->r4, -0X1000);
    skip_0:
L_80235858:
    // 0x80235858: slti        $v0, $a0, -0x800
    ctx->r2 = SIGNED(ctx->r4) < -0X800 ? 1 : 0;
    // 0x8023585C: beq         $v0, $zero, L_80235868
    if (ctx->r2 == 0) {
        // 0x80235860: addiu       $v0, $zero, 0x1000
        ctx->r2 = ADD32(0, 0X1000);
            goto L_80235868;
    }
    // 0x80235860: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x80235864: subu        $a0, $v0, $a0
    ctx->r4 = SUB32(ctx->r2, ctx->r4);
L_80235868:
    // 0x80235868: lh          $v1, 0x4($a2)
    ctx->r3 = MEM_H(ctx->r6, 0X4);
    // 0x8023586C: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x80235870: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x80235874: bne         $v1, $zero, L_80235880
    if (ctx->r3 != 0) {
        // 0x80235878: nop
    
            goto L_80235880;
    }
    // 0x80235878: nop

    // 0x8023587C: break       7
    do_break(2149800060);
L_80235880:
    // 0x80235880: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80235884: bne         $v1, $at, L_80235898
    if (ctx->r3 != ctx->r1) {
        // 0x80235888: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80235898;
    }
    // 0x80235888: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8023588C: bne         $v0, $at, L_80235898
    if (ctx->r2 != ctx->r1) {
        // 0x80235890: nop
    
            goto L_80235898;
    }
    // 0x80235890: nop

    // 0x80235894: break       6
    do_break(2149800084);
L_80235898:
    // 0x80235898: mflo        $v0
    ctx->r2 = lo;
    // 0x8023589C: nop

    // 0x802358A0: nop

    // 0x802358A4: jr          $ra
    // 0x802358A8: sw          $v0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x802358A8: sw          $v0, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->r2;
;}
RECOMP_FUNC void func_802352A8_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802352A8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802352AC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802352B0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802352B4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802352B8: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x802352BC: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x802352C0: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802352C4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802352C8: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x802352CC: jal         0x8004D5D4
    // 0x802352D0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x802352D0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x802352D4: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x802352D8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x802352DC: lh          $v0, 0x44($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X44);
    // 0x802352E0: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x802352E4: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x802352E8: sw          $v1, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r3;
    // 0x802352EC: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x802352F0: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x802352F4: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x802352F8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802352FC: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
    // 0x80235300: lh          $v0, 0x48($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X48);
    // 0x80235304: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80235308: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
    // 0x8023530C: lh          $v0, 0x56($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X56);
    // 0x80235310: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80235314: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x80235318: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8023531C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235320: bne         $v1, $v0, L_80235338
    if (ctx->r3 != ctx->r2) {
        // 0x80235324: nop
    
            goto L_80235338;
    }
    // 0x80235324: nop

    // 0x80235328: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023532C: addiu       $v0, $v0, -0x1C60
    ctx->r2 = ADD32(ctx->r2, -0X1C60);
    // 0x80235330: j           L_80235344
    // 0x80235334: sw          $v0, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r2;
        goto L_80235344;
    // 0x80235334: sw          $v0, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r2;
L_80235338:
    // 0x80235338: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023533C: addiu       $v0, $v0, -0x19FC
    ctx->r2 = ADD32(ctx->r2, -0X19FC);
    // 0x80235340: sw          $v0, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r2;
L_80235344:
    // 0x80235344: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235348: jal         0x80235784
    // 0x8023534C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_80235784_ovl3(rdram, ctx);
        goto after_1;
    // 0x8023534C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x80235350: sw          $zero, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = 0;
    // 0x80235354: sw          $zero, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = 0;
    // 0x80235358: sw          $zero, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = 0;
    // 0x8023535C: jal         0x8004F144
    // 0x80235360: sw          $zero, 0xCC($s0)
    MEM_W(0XCC, ctx->r16) = 0;
    func_8004F144_2A544(rdram, ctx);
        goto after_2;
    // 0x80235360: sw          $zero, 0xCC($s0)
    MEM_W(0XCC, ctx->r16) = 0;
    after_2:
    // 0x80235364: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80235368: beq         $a0, $zero, L_80235398
    if (ctx->r4 == 0) {
        // 0x8023536C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80235398;
    }
    // 0x8023536C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235370: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x80235374: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x80235378: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x8023537C: sb          $zero, 0x3($a0)
    MEM_B(0X3, ctx->r4) = 0;
    // 0x80235380: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80235384: lbu         $v0, 0x6($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X6);
    // 0x80235388: sb          $zero, 0xD($a0)
    MEM_B(0XD, ctx->r4) = 0;
    // 0x8023538C: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x80235390: sb          $v1, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r3;
    // 0x80235394: sb          $v0, 0x6($a0)
    MEM_B(0X6, ctx->r4) = ctx->r2;
L_80235398:
    // 0x80235398: jal         0x8004F144
    // 0x8023539C: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_3;
    // 0x8023539C: nop

    after_3:
    // 0x802353A0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x802353A4: beq         $a0, $zero, L_802353D0
    if (ctx->r4 == 0) {
        // 0x802353A8: addiu       $v0, $zero, 0x15
        ctx->r2 = ADD32(0, 0X15);
            goto L_802353D0;
    }
    // 0x802353A8: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x802353AC: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x802353B0: lbu         $v0, 0x6($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X6);
    // 0x802353B4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802353B8: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
    // 0x802353BC: sb          $v1, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r3;
    // 0x802353C0: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x802353C4: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x802353C8: sb          $v1, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r3;
    // 0x802353CC: sb          $v0, 0x6($a0)
    MEM_B(0X6, ctx->r4) = ctx->r2;
L_802353D0:
    // 0x802353D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802353D4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802353D8: addiu       $a2, $s0, 0x14
    ctx->r6 = ADD32(ctx->r16, 0X14);
    // 0x802353DC: sw          $a2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r6;
    // 0x802353E0: jal         0x8022DD50
    // 0x802353E4: sw          $a2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r6;
    func_8022DD50_ovl3(rdram, ctx);
        goto after_4;
    // 0x802353E4: sw          $a2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r6;
    after_4:
    // 0x802353E8: sw          $v0, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->r2;
    // 0x802353EC: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802353F0: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x802353F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802353F8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802353FC: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80235400: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80235404: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80235408: jr          $ra
    // 0x8023540C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8023540C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022CC10_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CC10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022CC14: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022CC18: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022CC1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022CC20: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x8022CC24: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022CC28: jal         0x8004FA7C
    // 0x8022CC2C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022CC2C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x8022CC30: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022CC34: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8022CC38: bne         $v0, $zero, L_8022CC48
    if (ctx->r2 != 0) {
        // 0x8022CC3C: nop
    
            goto L_8022CC48;
    }
    // 0x8022CC3C: nop

    // 0x8022CC40: lhu         $v0, 0x366($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X366);
    // 0x8022CC44: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022CC48:
    // 0x8022CC48: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022CC4C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022CC50: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022CC54: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022CC58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022CC5C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022CC60: jr          $ra
    // 0x8022CC64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022CC64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226AF0_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226AF0: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80226AF4: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x80226AF8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80226AFC: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80226B00: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x80226B04: addiu       $a1, $a1, -0xC08
    ctx->r5 = ADD32(ctx->r5, -0XC08);
    // 0x80226B08: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x80226B0C: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x80226B10: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x80226B14: jal         0x8009A3B4
    // 0x80226B18: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80226B18: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    after_0:
    // 0x80226B1C: lw          $v0, 0x10($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X10);
    // 0x80226B20: addiu       $v1, $v0, -0xA
    ctx->r3 = ADD32(ctx->r2, -0XA);
    // 0x80226B24: sltiu       $v0, $v1, 0x4F
    ctx->r2 = ctx->r3 < 0X4F ? 1 : 0;
    // 0x80226B28: beq         $v0, $zero, L_80226CB0
    if (ctx->r2 == 0) {
        // 0x80226B2C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80226CB0;
    }
    // 0x80226B2C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80226B30: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80226B34: addu        $at, $at, $v0
    gpr jr_addend_80226B3C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226B38: lw          $v0, -0xBC8($at)
    ctx->r2 = ADD32(ctx->r1, -0XBC8);
    // 0x80226B3C: jr          $v0
    // 0x80226B40: nop

    switch (jr_addend_80226B3C >> 2) {
        case 0: goto L_80226C30; break;
        case 1: goto L_80226CB0; break;
        case 2: goto L_80226CB0; break;
        case 3: goto L_80226CB0; break;
        case 4: goto L_80226CB0; break;
        case 5: goto L_80226CB0; break;
        case 6: goto L_80226CB0; break;
        case 7: goto L_80226CB0; break;
        case 8: goto L_80226CB0; break;
        case 9: goto L_80226CB0; break;
        case 10: goto L_80226B44; break;
        case 11: goto L_80226CB0; break;
        case 12: goto L_80226CB0; break;
        case 13: goto L_80226CB0; break;
        case 14: goto L_80226CB0; break;
        case 15: goto L_80226CB0; break;
        case 16: goto L_80226CB0; break;
        case 17: goto L_80226CB0; break;
        case 18: goto L_80226B44; break;
        case 19: goto L_80226CB0; break;
        case 20: goto L_80226C30; break;
        case 21: goto L_80226CB0; break;
        case 22: goto L_80226CB0; break;
        case 23: goto L_80226CB0; break;
        case 24: goto L_80226CB0; break;
        case 25: goto L_80226CB0; break;
        case 26: goto L_80226B44; break;
        case 27: goto L_80226CB0; break;
        case 28: goto L_80226CB0; break;
        case 29: goto L_80226CB0; break;
        case 30: goto L_80226B44; break;
        case 31: goto L_80226CB0; break;
        case 32: goto L_80226CB0; break;
        case 33: goto L_80226CB0; break;
        case 34: goto L_80226CB0; break;
        case 35: goto L_80226CB0; break;
        case 36: goto L_80226CB0; break;
        case 37: goto L_80226CB0; break;
        case 38: goto L_80226B44; break;
        case 39: goto L_80226CB0; break;
        case 40: goto L_80226CB0; break;
        case 41: goto L_80226CB0; break;
        case 42: goto L_80226C30; break;
        case 43: goto L_80226CB0; break;
        case 44: goto L_80226CB0; break;
        case 45: goto L_80226CB0; break;
        case 46: goto L_80226B44; break;
        case 47: goto L_80226CB0; break;
        case 48: goto L_80226CB0; break;
        case 49: goto L_80226CB0; break;
        case 50: goto L_80226B44; break;
        case 51: goto L_80226CB0; break;
        case 52: goto L_80226CB0; break;
        case 53: goto L_80226CB0; break;
        case 54: goto L_80226CB0; break;
        case 55: goto L_80226CB0; break;
        case 56: goto L_80226CB0; break;
        case 57: goto L_80226CB0; break;
        case 58: goto L_80226B44; break;
        case 59: goto L_80226CB0; break;
        case 60: goto L_80226C30; break;
        case 61: goto L_80226CB0; break;
        case 62: goto L_80226CB0; break;
        case 63: goto L_80226CB0; break;
        case 64: goto L_80226CB0; break;
        case 65: goto L_80226CB0; break;
        case 66: goto L_80226B44; break;
        case 67: goto L_80226CB0; break;
        case 68: goto L_80226CB0; break;
        case 69: goto L_80226CB0; break;
        case 70: goto L_80226C30; break;
        case 71: goto L_80226CB0; break;
        case 72: goto L_80226CB0; break;
        case 73: goto L_80226CB0; break;
        case 74: goto L_80226CB0; break;
        case 75: goto L_80226CB0; break;
        case 76: goto L_80226CB0; break;
        case 77: goto L_80226CB0; break;
        case 78: goto L_80226C30; break;
        default: switch_error(__func__, 0x80226B3C, 0x8023F438);
    }
    // 0x80226B40: nop

L_80226B44:
    // 0x80226B44: jal         0x8004F144
    // 0x80226B48: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_1;
    // 0x80226B48: nop

    after_1:
    // 0x80226B4C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80226B50: beq         $s1, $zero, L_80226C30
    if (ctx->r17 == 0) {
        // 0x80226B54: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80226C30;
    }
    // 0x80226B54: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80226B58: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80226B5C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80226B60: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x80226B64: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x80226B68: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    // 0x80226B6C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80226B70: sb          $zero, 0x4($s1)
    MEM_B(0X4, ctx->r17) = 0;
    // 0x80226B74: sb          $zero, 0xC($s1)
    MEM_B(0XC, ctx->r17) = 0;
    // 0x80226B78: jal         0x800A3450
    // 0x80226B7C: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x80226B7C: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    after_2:
    // 0x80226B80: lw          $a0, 0x10($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X10);
    // 0x80226B84: lui         $s0, 0x6666
    ctx->r16 = S32(0X6666 << 16);
    // 0x80226B88: ori         $s0, $s0, 0x6667
    ctx->r16 = ctx->r16 | 0X6667;
    // 0x80226B8C: mult        $a0, $s0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80226B90: sra         $a0, $a0, 31
    ctx->r4 = S32(SIGNED(ctx->r4) >> 31);
    // 0x80226B94: mfhi        $a3
    ctx->r7 = hi;
    // 0x80226B98: sra         $v1, $a3, 3
    ctx->r3 = S32(SIGNED(ctx->r7) >> 3);
    // 0x80226B9C: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x80226BA0: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80226BA4: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80226BA8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80226BAC: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80226BB0: lhu         $v1, -0x31A0($at)
    ctx->r3 = MEM_HU(ctx->r1, -0X31A0);
    // 0x80226BB4: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x80226BB8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80226BBC: jal         0x800A3450
    // 0x80226BC0: sh          $v1, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80226BC0: sh          $v1, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r3;
    after_3:
    // 0x80226BC4: lw          $a0, 0x10($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X10);
    // 0x80226BC8: mult        $a0, $s0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80226BCC: sra         $a0, $a0, 31
    ctx->r4 = S32(SIGNED(ctx->r4) >> 31);
    // 0x80226BD0: mfhi        $a3
    ctx->r7 = hi;
    // 0x80226BD4: sra         $v1, $a3, 3
    ctx->r3 = S32(SIGNED(ctx->r7) >> 3);
    // 0x80226BD8: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x80226BDC: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80226BE0: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80226BE4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80226BE8: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80226BEC: lhu         $v1, -0x319E($at)
    ctx->r3 = MEM_HU(ctx->r1, -0X319E);
    // 0x80226BF0: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x80226BF4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80226BF8: sh          $v1, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r3;
    // 0x80226BFC: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x80226C00: mult        $v1, $s0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80226C04: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x80226C08: mfhi        $a3
    ctx->r7 = hi;
    // 0x80226C0C: sra         $v0, $a3, 3
    ctx->r2 = S32(SIGNED(ctx->r7) >> 3);
    // 0x80226C10: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80226C14: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226C18: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80226C1C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80226C20: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226C24: lhu         $v0, -0x319C($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X319C);
    // 0x80226C28: addiu       $v0, $v0, -0x1F
    ctx->r2 = ADD32(ctx->r2, -0X1F);
    // 0x80226C2C: sh          $v0, 0x3C($s1)
    MEM_H(0X3C, ctx->r17) = ctx->r2;
L_80226C30:
    // 0x80226C30: jal         0x8004F144
    // 0x80226C34: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_4;
    // 0x80226C34: nop

    after_4:
    // 0x80226C38: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80226C3C: beq         $s1, $zero, L_80226CB0
    if (ctx->r17 == 0) {
        // 0x80226C40: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80226CB0;
    }
    // 0x80226C40: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80226C44: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80226C48: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80226C4C: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x80226C50: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80226C54: sb          $zero, 0x4($s1)
    MEM_B(0X4, ctx->r17) = 0;
    // 0x80226C58: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    // 0x80226C5C: sb          $zero, 0xC($s1)
    MEM_B(0XC, ctx->r17) = 0;
    // 0x80226C60: jal         0x800A3450
    // 0x80226C64: sb          $zero, 0xD($s1)
    MEM_B(0XD, ctx->r17) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_5;
    // 0x80226C64: sb          $zero, 0xD($s1)
    MEM_B(0XD, ctx->r17) = 0;
    after_5:
    // 0x80226C68: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80226C6C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80226C70: addiu       $s0, $sp, 0x10
    ctx->r16 = ADD32(ctx->r29, 0X10);
    // 0x80226C74: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x80226C78: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80226C7C: jal         0x800A3450
    // 0x80226C80: sh          $v0, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_6;
    // 0x80226C80: sh          $v0, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r2;
    after_6:
    // 0x80226C84: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80226C88: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80226C8C: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x80226C90: lhu         $v0, 0x2($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X2);
    // 0x80226C94: jal         0x800A3450
    // 0x80226C98: sh          $v0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_7;
    // 0x80226C98: sh          $v0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r2;
    after_7:
    // 0x80226C9C: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80226CA0: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80226CA4: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x80226CA8: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x80226CAC: sh          $v0, 0x3C($s1)
    MEM_H(0X3C, ctx->r17) = ctx->r2;
L_80226CB0:
    // 0x80226CB0: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x80226CB4: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x80226CB8: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x80226CBC: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x80226CC0: jr          $ra
    // 0x80226CC4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x80226CC4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x80226CC8: nop

    // 0x80226CCC: nop

;}
RECOMP_FUNC void func_802399EC_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802399EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802399F0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802399F4: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x802399F8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802399FC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80239A00: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80239A04: lw          $v0, -0x1214($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1214);
    // 0x80239A08: jalr        $v0
    // 0x80239A0C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80239A0C: nop

    after_0:
    // 0x80239A10: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80239A14: jr          $ra
    // 0x80239A18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80239A18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802267AC_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802267AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802267B0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802267B4: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x802267B8: addiu       $v0, $zero, 0x96
    ctx->r2 = ADD32(0, 0X96);
    // 0x802267BC: beq         $v1, $v0, L_802267D4
    if (ctx->r3 == ctx->r2) {
        // 0x802267C0: addiu       $v0, $zero, 0xB4
        ctx->r2 = ADD32(0, 0XB4);
            goto L_802267D4;
    }
    // 0x802267C0: addiu       $v0, $zero, 0xB4
    ctx->r2 = ADD32(0, 0XB4);
    // 0x802267C4: beq         $v1, $v0, L_802267E0
    if (ctx->r3 == ctx->r2) {
        // 0x802267C8: nop
    
            goto L_802267E0;
    }
    // 0x802267C8: nop

    // 0x802267CC: j           L_802267EC
    // 0x802267D0: nop

        goto L_802267EC;
    // 0x802267D0: nop

L_802267D4:
    // 0x802267D4: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x802267D8: j           L_802267EC
    // 0x802267DC: sb          $zero, 0xD($v0)
    MEM_B(0XD, ctx->r2) = 0;
        goto L_802267EC;
    // 0x802267DC: sb          $zero, 0xD($v0)
    MEM_B(0XD, ctx->r2) = 0;
L_802267E0:
    // 0x802267E0: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x802267E4: jal         0x8005FA7C
    // 0x802267E8: addiu       $a0, $a0, -0x3750
    ctx->r4 = ADD32(ctx->r4, -0X3750);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_0;
    // 0x802267E8: addiu       $a0, $a0, -0x3750
    ctx->r4 = ADD32(ctx->r4, -0X3750);
    after_0:
L_802267EC:
    // 0x802267EC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802267F0: jr          $ra
    // 0x802267F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802267F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80234F34_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234F34: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80234F38: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80234F3C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80234F40: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80234F44: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80234F48: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80234F4C: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x80234F50: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80234F54: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80234F58: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x80234F5C: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x80234F60: bne         $v1, $v0, L_80234F78
    if (ctx->r3 != ctx->r2) {
        // 0x80234F64: addu        $s1, $a1, $zero
        ctx->r17 = ADD32(ctx->r5, 0);
            goto L_80234F78;
    }
    // 0x80234F64: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x80234F68: jal         0x8004D5FC
    // 0x80234F6C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5FC_289FC(rdram, ctx);
        goto after_0;
    // 0x80234F6C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x80234F70: j           L_80234F88
    // 0x80234F74: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
        goto L_80234F88;
    // 0x80234F74: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
L_80234F78:
    // 0x80234F78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234F7C: jal         0x8004D5D4
    // 0x80234F80: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x80234F80: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
    // 0x80234F84: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
L_80234F88:
    // 0x80234F88: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x80234F8C: sw          $v0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r2;
    // 0x80234F90: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x80234F94: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
    // 0x80234F98: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x80234F9C: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
    // 0x80234FA0: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x80234FA4: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80234FA8: jal         0x8004F144
    // 0x80234FAC: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    func_8004F144_2A544(rdram, ctx);
        goto after_2;
    // 0x80234FAC: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    after_2:
    // 0x80234FB0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80234FB4: beq         $a0, $zero, L_80234FE4
    if (ctx->r4 == 0) {
        // 0x80234FB8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80234FE4;
    }
    // 0x80234FB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234FBC: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x80234FC0: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x80234FC4: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x80234FC8: sb          $zero, 0x3($a0)
    MEM_B(0X3, ctx->r4) = 0;
    // 0x80234FCC: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80234FD0: lbu         $v0, 0x6($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X6);
    // 0x80234FD4: sb          $zero, 0xD($a0)
    MEM_B(0XD, ctx->r4) = 0;
    // 0x80234FD8: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x80234FDC: sb          $v1, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r3;
    // 0x80234FE0: sb          $v0, 0x6($a0)
    MEM_B(0X6, ctx->r4) = ctx->r2;
L_80234FE4:
    // 0x80234FE4: jal         0x8004F144
    // 0x80234FE8: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_3;
    // 0x80234FE8: nop

    after_3:
    // 0x80234FEC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80234FF0: beq         $a0, $zero, L_8023501C
    if (ctx->r4 == 0) {
        // 0x80234FF4: addiu       $v0, $zero, 0x15
        ctx->r2 = ADD32(0, 0X15);
            goto L_8023501C;
    }
    // 0x80234FF4: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x80234FF8: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x80234FFC: lbu         $v0, 0x6($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X6);
    // 0x80235000: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80235004: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
    // 0x80235008: sb          $v1, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r3;
    // 0x8023500C: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80235010: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x80235014: sb          $v1, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r3;
    // 0x80235018: sb          $v0, 0x6($a0)
    MEM_B(0X6, ctx->r4) = ctx->r2;
L_8023501C:
    // 0x8023501C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80235020: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80235024: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80235028: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023502C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80235030: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80235034: jr          $ra
    // 0x80235038: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80235038: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022CE8C_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CE8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022CE90: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022CE94: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022CE98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022CE9C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022CEA0: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x8022CEA4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022CEA8: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022CEAC: jal         0x8004F820
    // 0x8022CEB0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022CEB0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x8022CEB4: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022CEB8: lb          $a0, 0xA7($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XA7);
    // 0x8022CEBC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022CEC0: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022CEC4: bgez        $a0, L_8022CEE8
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8022CEC8: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022CEE8;
    }
    // 0x8022CEC8: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022CECC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022CED0: jal         0x8022DC08
    // 0x8022CED4: nop

    func_8022DC08_ovl3(rdram, ctx);
        goto after_1;
    // 0x8022CED4: nop

    after_1:
    // 0x8022CED8: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022CEDC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022CEE0: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8022CEE4: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
L_8022CEE8:
    // 0x8022CEE8: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022CEEC: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x8022CEF0: bne         $v0, $zero, L_8022CF14
    if (ctx->r2 != 0) {
        // 0x8022CEF4: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_8022CF14;
    }
    // 0x8022CEF4: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8022CEF8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022CEFC: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022CF00: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
    // 0x8022CF04: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x8022CF08: jal         0x8022DC08
    // 0x8022CF0C: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    func_8022DC08_ovl3(rdram, ctx);
        goto after_2;
    // 0x8022CF0C: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    after_2:
    // 0x8022CF10: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022CF14:
    // 0x8022CF14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022CF18: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022CF1C: jr          $ra
    // 0x8022CF20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022CF20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80231E00_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231E00: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80231E04: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80231E08: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231E0C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80231E10: addiu       $s1, $sp, 0x10
    ctx->r17 = ADD32(ctx->r29, 0X10);
    // 0x80231E14: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80231E18: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x80231E1C: addiu       $a1, $a1, -0xA40
    ctx->r5 = ADD32(ctx->r5, -0XA40);
    // 0x80231E20: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80231E24: jal         0x8009A3B4
    // 0x80231E28: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80231E28: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_0:
    // 0x80231E2C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80231E30: bne         $v0, $zero, L_80231E40
    if (ctx->r2 != 0) {
        // 0x80231E34: nop
    
            goto L_80231E40;
    }
    // 0x80231E34: nop

    // 0x80231E38: jal         0x80231FA0
    // 0x80231E3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80231FA0_ovl3(rdram, ctx);
        goto after_1;
    // 0x80231E3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_80231E40:
    // 0x80231E40: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x80231E44: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80231E48: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80231E4C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80231E50: lw          $v0, -0x1F70($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1F70);
    // 0x80231E54: jalr        $v0
    // 0x80231E58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x80231E58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80231E5C: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x80231E60: beq         $v0, $zero, L_80231EE0
    if (ctx->r2 == 0) {
        // 0x80231E64: nop
    
            goto L_80231EE0;
    }
    // 0x80231E64: nop

    // 0x80231E68: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x80231E6C: beq         $v0, $zero, L_80231EA4
    if (ctx->r2 == 0) {
        // 0x80231E70: nop
    
            goto L_80231EA4;
    }
    // 0x80231E70: nop

    // 0x80231E74: lbu         $a0, 0xE($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XE);
    // 0x80231E78: lbu         $a1, 0xF($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XF);
    // 0x80231E7C: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x80231E80: lhu         $v1, 0x18($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X18);
    // 0x80231E84: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x80231E88: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80231E8C: sll         $a1, $a1, 24
    ctx->r5 = S32(ctx->r5 << 24);
    // 0x80231E90: sra         $a1, $a1, 24
    ctx->r5 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80231E94: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80231E98: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x80231E9C: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80231EA0: sh          $v1, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r3;
L_80231EA4:
    // 0x80231EA4: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    // 0x80231EA8: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80231EAC: sll         $a1, $a0, 1
    ctx->r5 = S32(ctx->r4 << 1);
    // 0x80231EB0: addu        $a1, $a1, $s1
    ctx->r5 = ADD32(ctx->r5, ctx->r17);
    // 0x80231EB4: sll         $v1, $a0, 3
    ctx->r3 = S32(ctx->r4 << 3);
    // 0x80231EB8: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x80231EBC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80231EC0: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80231EC4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80231EC8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80231ECC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80231ED0: lh          $v0, -0x2400($at)
    ctx->r2 = MEM_H(ctx->r1, -0X2400);
    // 0x80231ED4: lhu         $v1, 0x0($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X0);
    // 0x80231ED8: j           L_80231F40
    // 0x80231EDC: sra         $v0, $v0, 8
    ctx->r2 = S32(SIGNED(ctx->r2) >> 8);
        goto L_80231F40;
    // 0x80231EDC: sra         $v0, $v0, 8
    ctx->r2 = S32(SIGNED(ctx->r2) >> 8);
L_80231EE0:
    // 0x80231EE0: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x80231EE4: beq         $v0, $zero, L_80231F20
    if (ctx->r2 == 0) {
        // 0x80231EE8: nop
    
            goto L_80231F20;
    }
    // 0x80231EE8: nop

    // 0x80231EEC: lbu         $a0, 0xE($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XE);
    // 0x80231EF0: lbu         $a1, 0xF($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XF);
    // 0x80231EF4: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x80231EF8: lhu         $v1, 0x18($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X18);
    // 0x80231EFC: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x80231F00: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80231F04: sll         $a1, $a1, 24
    ctx->r5 = S32(ctx->r5 << 24);
    // 0x80231F08: sra         $a1, $a1, 24
    ctx->r5 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80231F0C: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80231F10: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x80231F14: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80231F18: j           L_80231F48
    // 0x80231F1C: sh          $v1, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r3;
        goto L_80231F48;
    // 0x80231F1C: sh          $v1, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r3;
L_80231F20:
    // 0x80231F20: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80231F24: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80231F28: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80231F2C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80231F30: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80231F34: lh          $v0, -0x2400($at)
    ctx->r2 = MEM_H(ctx->r1, -0X2400);
    // 0x80231F38: lhu         $v1, 0x10($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X10);
    // 0x80231F3C: sra         $v0, $v0, 8
    ctx->r2 = S32(SIGNED(ctx->r2) >> 8);
L_80231F40:
    // 0x80231F40: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80231F44: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
L_80231F48:
    // 0x80231F48: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80231F4C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80231F50: jal         0x8009A3B4
    // 0x80231F54: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80231F54: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x80231F58: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80231F5C: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80231F60: jal         0x8009A3B4
    // 0x80231F64: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80231F64: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_4:
    // 0x80231F68: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80231F6C: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80231F70: jal         0x8009A3B4
    // 0x80231F74: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80231F74: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x80231F78: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80231F7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231F80: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231F84: jal         0x8005044C
    // 0x80231F88: sb          $v0, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r2;
    func_8005044C_2B84C(rdram, ctx);
        goto after_6;
    // 0x80231F88: sb          $v0, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r2;
    after_6:
    // 0x80231F8C: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80231F90: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80231F94: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80231F98: jr          $ra
    // 0x80231F9C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80231F9C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022F98C_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F98C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F990: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F994: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F998: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022F99C: lw          $v1, 0x34($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X34);
    // 0x8022F9A0: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x8022F9A4: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8022F9A8: and         $a0, $v1, $v0
    ctx->r4 = ctx->r3 & ctx->r2;
    // 0x8022F9AC: beq         $a0, $zero, L_8022FA3C
    if (ctx->r4 == 0) {
        // 0x8022F9B0: lui         $v0, 0x1800
        ctx->r2 = S32(0X1800 << 16);
            goto L_8022FA3C;
    }
    // 0x8022F9B0: lui         $v0, 0x1800
    ctx->r2 = S32(0X1800 << 16);
    // 0x8022F9B4: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8022F9B8: beql        $v0, $zero, L_8022FA34
    if (ctx->r2 == 0) {
        // 0x8022F9BC: addiu       $a0, $zero, 0xA3
        ctx->r4 = ADD32(0, 0XA3);
            goto L_8022FA34;
    }
    goto skip_0;
    // 0x8022F9BC: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    skip_0:
    // 0x8022F9C0: lhu         $v0, 0x6E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6E);
    // 0x8022F9C4: lhu         $v1, 0x6E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X6E);
    // 0x8022F9C8: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022F9CC: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    // 0x8022F9D0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F9D4: bgtz        $v0, L_8022F9EC
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022F9D8: sh          $v1, 0xB2($s0)
        MEM_H(0XB2, ctx->r16) = ctx->r3;
            goto L_8022F9EC;
    }
    // 0x8022F9D8: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    // 0x8022F9DC: lhu         $v0, 0x14($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X14);
    // 0x8022F9E0: andi        $v0, $v0, 0xFFC9
    ctx->r2 = ctx->r2 & 0XFFC9;
    // 0x8022F9E4: ori         $v0, $v0, 0x801
    ctx->r2 = ctx->r2 | 0X801;
    // 0x8022F9E8: sh          $v0, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r2;
L_8022F9EC:
    // 0x8022F9EC: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x8022F9F0: jal         0x8002A33C
    // 0x8022F9F4: addiu       $a1, $a1, 0x2C
    ctx->r5 = ADD32(ctx->r5, 0X2C);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8022F9F4: addiu       $a1, $a1, 0x2C
    ctx->r5 = ADD32(ctx->r5, 0X2C);
    after_0:
    // 0x8022F9F8: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022F9FC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022FA00: bne         $v0, $zero, L_8022FA10
    if (ctx->r2 != 0) {
        // 0x8022FA04: addiu       $a1, $zero, 0x7FFF
        ctx->r5 = ADD32(0, 0X7FFF);
            goto L_8022FA10;
    }
    // 0x8022FA04: addiu       $a1, $zero, 0x7FFF
    ctx->r5 = ADD32(0, 0X7FFF);
    // 0x8022FA08: j           L_8022FA3C
    // 0x8022FA0C: sh          $a1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r5;
        goto L_8022FA3C;
    // 0x8022FA0C: sh          $a1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r5;
L_8022FA10:
    // 0x8022FA10: sh          $zero, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = 0;
    // 0x8022FA14: addu        $v1, $s0, $zero
    ctx->r3 = ADD32(ctx->r16, 0);
L_8022FA18:
    // 0x8022FA18: sh          $a1, 0x186($v1)
    MEM_H(0X186, ctx->r3) = ctx->r5;
    // 0x8022FA1C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8022FA20: slti        $v0, $a0, 0x3
    ctx->r2 = SIGNED(ctx->r4) < 0X3 ? 1 : 0;
    // 0x8022FA24: bne         $v0, $zero, L_8022FA18
    if (ctx->r2 != 0) {
        // 0x8022FA28: addiu       $v1, $v1, 0x8
        ctx->r3 = ADD32(ctx->r3, 0X8);
            goto L_8022FA18;
    }
    // 0x8022FA28: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x8022FA2C: j           L_8022FA3C
    // 0x8022FA30: sh          $zero, 0x19E($s0)
    MEM_H(0X19E, ctx->r16) = 0;
        goto L_8022FA3C;
    // 0x8022FA30: sh          $zero, 0x19E($s0)
    MEM_H(0X19E, ctx->r16) = 0;
L_8022FA34:
    // 0x8022FA34: jal         0x8002A33C
    // 0x8022FA38: addiu       $a1, $a1, 0x2C
    ctx->r5 = ADD32(ctx->r5, 0X2C);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x8022FA38: addiu       $a1, $a1, 0x2C
    ctx->r5 = ADD32(ctx->r5, 0X2C);
    after_1:
L_8022FA3C:
    // 0x8022FA3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022FA40: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022FA44: jr          $ra
    // 0x8022FA48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022FA48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B6C0_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B6C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022B6C4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B6C8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B6CC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022B6D0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022B6D4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022B6D8: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022B6DC: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022B6E0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022B6E4: beq         $v1, $zero, L_8022B6F4
    if (ctx->r3 == 0) {
        // 0x8022B6E8: sb          $v0, 0x0($s0)
        MEM_B(0X0, ctx->r16) = ctx->r2;
            goto L_8022B6F4;
    }
    // 0x8022B6E8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022B6EC: j           L_8022B6FC
    // 0x8022B6F0: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
        goto L_8022B6FC;
    // 0x8022B6F0: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
L_8022B6F4:
    // 0x8022B6F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B6F8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_8022B6FC:
    // 0x8022B6FC: jal         0x8004D5D4
    // 0x8022B700: nop

    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022B700: nop

    after_0:
    // 0x8022B704: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022B708: addiu       $v0, $zero, 0x26
    ctx->r2 = ADD32(0, 0X26);
    // 0x8022B70C: bne         $a0, $v0, L_8022B71C
    if (ctx->r4 != ctx->r2) {
        // 0x8022B710: xori        $v1, $a0, 0x24
        ctx->r3 = ctx->r4 ^ 0X24;
            goto L_8022B71C;
    }
    // 0x8022B710: xori        $v1, $a0, 0x24
    ctx->r3 = ctx->r4 ^ 0X24;
    // 0x8022B714: j           L_8022B790
    // 0x8022B718: addiu       $v0, $zero, 0x1D7
    ctx->r2 = ADD32(0, 0X1D7);
        goto L_8022B790;
    // 0x8022B718: addiu       $v0, $zero, 0x1D7
    ctx->r2 = ADD32(0, 0X1D7);
L_8022B71C:
    // 0x8022B71C: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8022B720: xori        $v0, $a0, 0x30
    ctx->r2 = ctx->r4 ^ 0X30;
    // 0x8022B724: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8022B728: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022B72C: bne         $v1, $zero, L_8022B790
    if (ctx->r3 != 0) {
        // 0x8022B730: addiu       $v0, $zero, 0x21A
        ctx->r2 = ADD32(0, 0X21A);
            goto L_8022B790;
    }
    // 0x8022B730: addiu       $v0, $zero, 0x21A
    ctx->r2 = ADD32(0, 0X21A);
    // 0x8022B734: xori        $v1, $a0, 0x42
    ctx->r3 = ctx->r4 ^ 0X42;
    // 0x8022B738: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8022B73C: xori        $v0, $a0, 0x53
    ctx->r2 = ctx->r4 ^ 0X53;
    // 0x8022B740: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8022B744: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022B748: bne         $v1, $zero, L_8022B790
    if (ctx->r3 != 0) {
        // 0x8022B74C: addiu       $v0, $zero, 0x21A
        ctx->r2 = ADD32(0, 0X21A);
            goto L_8022B790;
    }
    // 0x8022B74C: addiu       $v0, $zero, 0x21A
    ctx->r2 = ADD32(0, 0X21A);
    // 0x8022B750: xori        $v1, $a0, 0x5C
    ctx->r3 = ctx->r4 ^ 0X5C;
    // 0x8022B754: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8022B758: xori        $v0, $a0, 0x44
    ctx->r2 = ctx->r4 ^ 0X44;
    // 0x8022B75C: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8022B760: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022B764: bne         $v1, $zero, L_8022B790
    if (ctx->r3 != 0) {
        // 0x8022B768: addiu       $v0, $zero, 0x21A
        ctx->r2 = ADD32(0, 0X21A);
            goto L_8022B790;
    }
    // 0x8022B768: addiu       $v0, $zero, 0x21A
    ctx->r2 = ADD32(0, 0X21A);
    // 0x8022B76C: addiu       $v0, $zero, 0x5E
    ctx->r2 = ADD32(0, 0X5E);
    // 0x8022B770: bnel        $a0, $v0, L_8022B790
    if (ctx->r4 != ctx->r2) {
        // 0x8022B774: addiu       $v0, $zero, 0x200
        ctx->r2 = ADD32(0, 0X200);
            goto L_8022B790;
    }
    goto skip_0;
    // 0x8022B774: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    skip_0:
    // 0x8022B778: addiu       $v0, $zero, 0x1C0
    ctx->r2 = ADD32(0, 0X1C0);
    // 0x8022B77C: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022B780: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022B784: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022B788: j           L_8022B798
    // 0x8022B78C: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
        goto L_8022B798;
    // 0x8022B78C: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
L_8022B790:
    // 0x8022B790: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022B794: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
L_8022B798:
    // 0x8022B798: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022B79C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022B7A0: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022B7A4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022B7A8: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8022B7AC: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    // 0x8022B7B0: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022B7B4: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022B7B8: bne         $v0, $zero, L_8022B7C4
    if (ctx->r2 != 0) {
        // 0x8022B7BC: addiu       $v0, $zero, 0x2710
        ctx->r2 = ADD32(0, 0X2710);
            goto L_8022B7C4;
    }
    // 0x8022B7BC: addiu       $v0, $zero, 0x2710
    ctx->r2 = ADD32(0, 0X2710);
    // 0x8022B7C0: addiu       $v0, $zero, 0x1388
    ctx->r2 = ADD32(0, 0X1388);
L_8022B7C4:
    // 0x8022B7C4: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    // 0x8022B7C8: addiu       $a0, $s1, 0xC
    ctx->r4 = ADD32(ctx->r17, 0XC);
    // 0x8022B7CC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022B7D0: jal         0x8009A3B4
    // 0x8022B7D4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022B7D4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8022B7D8: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B7DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B7E0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022B7E4: sh          $v0, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r2;
    // 0x8022B7E8: lbu         $v1, 0xD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XD);
    // 0x8022B7EC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022B7F0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022B7F4: addiu       $v0, $v0, -0x22E0
    ctx->r2 = ADD32(ctx->r2, -0X22E0);
    // 0x8022B7F8: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x8022B7FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B800: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022B804: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022B808: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x8022B80C: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8022B810: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x8022B814: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x8022B818: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x8022B81C: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x8022B820: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022B824: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022B828: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8022B82C: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x8022B830: jal         0x80050294
    // 0x8022B834: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x8022B834: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    after_2:
    // 0x8022B838: jal         0x8022B854
    // 0x8022B83C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022B854_ovl3(rdram, ctx);
        goto after_3;
    // 0x8022B83C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022B840: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022B844: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022B848: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B84C: jr          $ra
    // 0x8022B850: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022B850: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802265B4_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802265B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802265B8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802265BC: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x802265C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802265C4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802265C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802265CC: lbu         $v1, 0x5($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X5);
    // 0x802265D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802265D4: beq         $v1, $v0, L_80226674
    if (ctx->r3 == ctx->r2) {
        // 0x802265D8: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80226674;
    }
    // 0x802265D8: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802265DC: beql        $v0, $zero, L_802265F4
    if (ctx->r2 == 0) {
        // 0x802265E0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802265F4;
    }
    goto skip_0;
    // 0x802265E0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802265E4: beq         $v1, $zero, L_8022660C
    if (ctx->r3 == 0) {
        // 0x802265E8: nop
    
            goto L_8022660C;
    }
    // 0x802265E8: nop

    // 0x802265EC: j           L_80226778
    // 0x802265F0: nop

        goto L_80226778;
    // 0x802265F0: nop

L_802265F4:
    // 0x802265F4: beq         $v1, $v0, L_802266A0
    if (ctx->r3 == ctx->r2) {
        // 0x802265F8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802266A0;
    }
    // 0x802265F8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802265FC: beq         $v1, $v0, L_8022671C
    if (ctx->r3 == ctx->r2) {
        // 0x80226600: addiu       $v0, $zero, 0x1F4
        ctx->r2 = ADD32(0, 0X1F4);
            goto L_8022671C;
    }
    // 0x80226600: addiu       $v0, $zero, 0x1F4
    ctx->r2 = ADD32(0, 0X1F4);
    // 0x80226604: j           L_80226778
    // 0x80226608: nop

        goto L_80226778;
    // 0x80226608: nop

L_8022660C:
    // 0x8022660C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80226610: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80226614: bne         $v0, $zero, L_80226778
    if (ctx->r2 != 0) {
        // 0x80226618: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80226778;
    }
    // 0x80226618: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022661C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80226620: jal         0x80036B00
    // 0x80226624: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_0;
    // 0x80226624: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80226628: lw          $a0, 0x24($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X24);
    // 0x8022662C: jal         0x8004F488
    // 0x80226630: nop

    func_8004F488_2A888(rdram, ctx);
        goto after_1;
    // 0x80226630: nop

    after_1:
    // 0x80226634: addiu       $a0, $zero, 0x7E
    ctx->r4 = ADD32(0, 0X7E);
    // 0x80226638: jal         0x8004CB2C
    // 0x8022663C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_2;
    // 0x8022663C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_2:
    // 0x80226640: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x80226644: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80226648: jal         0x80036E48
    // 0x8022664C: sb          $v0, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r2;
    func_80036E48_12248(rdram, ctx);
        goto after_3;
    // 0x8022664C: sb          $v0, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r2;
    after_3:
    // 0x80226650: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x80226654: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80226658: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022665C: sb          $v0, -0x35A5($at)
    MEM_B(-0X35A5, ctx->r1) = ctx->r2;
    // 0x80226660: jal         0x80036340
    // 0x80226664: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_80036340_11740(rdram, ctx);
        goto after_4;
    // 0x80226664: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_4:
    // 0x80226668: lbu         $v0, 0x5($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X5);
    // 0x8022666C: j           L_80226698
    // 0x80226670: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80226698;
    // 0x80226670: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80226674:
    // 0x80226674: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80226678: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8022667C: bne         $v0, $zero, L_80226778
    if (ctx->r2 != 0) {
        // 0x80226680: lui         $a0, 0x100
        ctx->r4 = S32(0X100 << 16);
            goto L_80226778;
    }
    // 0x80226680: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x80226684: jal         0x80036B1C
    // 0x80226688: ori         $a0, $a0, 0x3400
    ctx->r4 = ctx->r4 | 0X3400;
    func_80036B1C_11F1C(rdram, ctx);
        goto after_5;
    // 0x80226688: ori         $a0, $a0, 0x3400
    ctx->r4 = ctx->r4 | 0X3400;
    after_5:
    // 0x8022668C: lbu         $v0, 0x5($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X5);
    // 0x80226690: sw          $zero, 0x10($s2)
    MEM_W(0X10, ctx->r18) = 0;
    // 0x80226694: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80226698:
    // 0x80226698: j           L_80226778
    // 0x8022669C: sb          $v0, 0x5($s2)
    MEM_B(0X5, ctx->r18) = ctx->r2;
        goto L_80226778;
    // 0x8022669C: sb          $v0, 0x5($s2)
    MEM_B(0X5, ctx->r18) = ctx->r2;
L_802266A0:
    // 0x802266A0: jal         0x80036B7C
    // 0x802266A4: nop

    func_80036B7C_11F7C(rdram, ctx);
        goto after_6;
    // 0x802266A4: nop

    after_6:
    // 0x802266A8: beq         $v0, $zero, L_80226714
    if (ctx->r2 == 0) {
        // 0x802266AC: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_80226714;
    }
    // 0x802266AC: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x802266B0: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x802266B4: bne         $v1, $v0, L_80226778
    if (ctx->r3 != ctx->r2) {
        // 0x802266B8: nop
    
            goto L_80226778;
    }
    // 0x802266B8: nop

    // 0x802266BC: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x802266C0: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x802266C4: addiu       $s1, $s1, -0x3714
    ctx->r17 = ADD32(ctx->r17, -0X3714);
L_802266C8:
    // 0x802266C8: jal         0x8005FA7C
    // 0x802266CC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_7;
    // 0x802266CC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_7:
    // 0x802266D0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x802266D4: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x802266D8: bne         $v0, $zero, L_802266C8
    if (ctx->r2 != 0) {
        // 0x802266DC: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_802266C8;
    }
    // 0x802266DC: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    // 0x802266E0: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x802266E4: addiu       $s0, $s0, -0x373C
    ctx->r16 = ADD32(ctx->r16, -0X373C);
    // 0x802266E8: jal         0x8005FA7C
    // 0x802266EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_8;
    // 0x802266EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x802266F0: jal         0x8005FA7C
    // 0x802266F4: addiu       $a0, $s0, 0x8C
    ctx->r4 = ADD32(ctx->r16, 0X8C);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_9;
    // 0x802266F4: addiu       $a0, $s0, 0x8C
    ctx->r4 = ADD32(ctx->r16, 0X8C);
    after_9:
    // 0x802266F8: lbu         $v1, 0x5($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X5);
    // 0x802266FC: lbu         $v0, 0xA($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XA);
    // 0x80226700: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80226704: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80226708: sb          $v0, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r2;
    // 0x8022670C: j           L_80226778
    // 0x80226710: sb          $v1, 0x5($s2)
    MEM_B(0X5, ctx->r18) = ctx->r3;
        goto L_80226778;
    // 0x80226710: sb          $v1, 0x5($s2)
    MEM_B(0X5, ctx->r18) = ctx->r3;
L_80226714:
    // 0x80226714: j           L_80226778
    // 0x80226718: sw          $zero, 0x10($s2)
    MEM_W(0X10, ctx->r18) = 0;
        goto L_80226778;
    // 0x80226718: sw          $zero, 0x10($s2)
    MEM_W(0X10, ctx->r18) = 0;
L_8022671C:
    // 0x8022671C: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x80226720: bne         $v1, $v0, L_80226778
    if (ctx->r3 != ctx->r2) {
        // 0x80226724: nop
    
            goto L_80226778;
    }
    // 0x80226724: nop

    // 0x80226728: jal         0x800600F8
    // 0x8022672C: sb          $zero, 0x5($s2)
    MEM_B(0X5, ctx->r18) = 0;
    func_800600F8_3B4F8(rdram, ctx);
        goto after_10;
    // 0x8022672C: sb          $zero, 0x5($s2)
    MEM_B(0X5, ctx->r18) = 0;
    after_10:
    // 0x80226730: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80226734: addu        $s1, $s2, $zero
    ctx->r17 = ADD32(ctx->r18, 0);
L_80226738:
    // 0x80226738: lw          $a0, 0x24($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X24);
    // 0x8022673C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80226740: jal         0x8004F418
    // 0x80226744: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    func_8004F418_2A818(rdram, ctx);
        goto after_11;
    // 0x80226744: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    after_11:
    // 0x80226748: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x8022674C: bne         $v0, $zero, L_80226738
    if (ctx->r2 != 0) {
        // 0x80226750: nop
    
            goto L_80226738;
    }
    // 0x80226750: nop

    // 0x80226754: jal         0x8004F418
    // 0x80226758: lw          $a0, 0x3C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X3C);
    func_8004F418_2A818(rdram, ctx);
        goto after_12;
    // 0x80226758: lw          $a0, 0x3C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X3C);
    after_12:
    // 0x8022675C: jal         0x8004F4F8
    // 0x80226760: lw          $a0, 0x38($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X38);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_13;
    // 0x80226760: lw          $a0, 0x38($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X38);
    after_13:
    // 0x80226764: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80226768: jal         0x8005FA7C
    // 0x8022676C: addiu       $a0, $a0, -0x3764
    ctx->r4 = ADD32(ctx->r4, -0X3764);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_14;
    // 0x8022676C: addiu       $a0, $a0, -0x3764
    ctx->r4 = ADD32(ctx->r4, -0X3764);
    after_14:
    // 0x80226770: jal         0x802269B4
    // 0x80226774: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_802269B4_ovl3(rdram, ctx);
        goto after_15;
    // 0x80226774: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_15:
L_80226778:
    // 0x80226778: jal         0x8006072C
    // 0x8022677C: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_16;
    // 0x8022677C: nop

    after_16:
    // 0x80226780: beq         $v0, $zero, L_80226794
    if (ctx->r2 == 0) {
        // 0x80226784: nop
    
            goto L_80226794;
    }
    // 0x80226784: nop

    // 0x80226788: lbu         $v0, 0xA($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XA);
    // 0x8022678C: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80226790: sb          $v0, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r2;
L_80226794:
    // 0x80226794: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80226798: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022679C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802267A0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802267A4: jr          $ra
    // 0x802267A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802267A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80227680_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227680: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227684: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227688: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022768C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80227690: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227694: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227698: bne         $v0, $zero, L_802276C8
    if (ctx->r2 != 0) {
        // 0x8022769C: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_802276C8;
    }
    // 0x8022769C: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x802276A0: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x802276A4: jal         0x80050294
    // 0x802276A8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802276A8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802276AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802276B0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802276B4: jal         0x8022774C
    // 0x802276B8: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    func_8022774C_ovl3(rdram, ctx);
        goto after_1;
    // 0x802276B8: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_1:
    // 0x802276BC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802276C0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802276C4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802276C8:
    // 0x802276C8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802276CC: lbu         $v1, -0x3A47($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A47);
    // 0x802276D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802276D4: bne         $v1, $v0, L_80227738
    if (ctx->r3 != ctx->r2) {
        // 0x802276D8: addiu       $v0, $zero, 0x12C
        ctx->r2 = ADD32(0, 0X12C);
            goto L_80227738;
    }
    // 0x802276D8: addiu       $v0, $zero, 0x12C
    ctx->r2 = ADD32(0, 0X12C);
    // 0x802276DC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802276E0: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x802276E4: beq         $v1, $v0, L_80227724
    if (ctx->r3 == ctx->r2) {
        // 0x802276E8: slti        $v0, $v1, 0x12D
        ctx->r2 = SIGNED(ctx->r3) < 0X12D ? 1 : 0;
            goto L_80227724;
    }
    // 0x802276E8: slti        $v0, $v1, 0x12D
    ctx->r2 = SIGNED(ctx->r3) < 0X12D ? 1 : 0;
    // 0x802276EC: beq         $v0, $zero, L_80227704
    if (ctx->r2 == 0) {
        // 0x802276F0: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_80227704;
    }
    // 0x802276F0: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x802276F4: beq         $v1, $v0, L_80227718
    if (ctx->r3 == ctx->r2) {
        // 0x802276F8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227718;
    }
    // 0x802276F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802276FC: j           L_80227738
    // 0x80227700: nop

        goto L_80227738;
    // 0x80227700: nop

L_80227704:
    // 0x80227704: addiu       $v0, $zero, 0x15E
    ctx->r2 = ADD32(0, 0X15E);
    // 0x80227708: beq         $v1, $v0, L_80227728
    if (ctx->r3 == ctx->r2) {
        // 0x8022770C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227728;
    }
    // 0x8022770C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227710: j           L_80227738
    // 0x80227714: nop

        goto L_80227738;
    // 0x80227714: nop

L_80227718:
    // 0x80227718: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022771C: j           L_80227730
    // 0x80227720: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
        goto L_80227730;
    // 0x80227720: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
L_80227724:
    // 0x80227724: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80227728:
    // 0x80227728: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022772C: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
L_80227730:
    // 0x80227730: jal         0x8022774C
    // 0x80227734: nop

    func_8022774C_ovl3(rdram, ctx);
        goto after_2;
    // 0x80227734: nop

    after_2:
L_80227738:
    // 0x80227738: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022773C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227740: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227744: jr          $ra
    // 0x80227748: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227748: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80228E20_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228E20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228E24: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228E28: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228E2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228E30: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80228E34: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80228E38: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80228E3C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228E40: lw          $v0, -0x2958($at)
    ctx->r2 = MEM_W(ctx->r1, -0X2958);
    // 0x80228E44: jalr        $v0
    // 0x80228E48: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80228E48: nop

    after_0:
    // 0x80228E4C: sw          $zero, 0x464($s0)
    MEM_W(0X464, ctx->r16) = 0;
    // 0x80228E50: sw          $zero, 0x418($s0)
    MEM_W(0X418, ctx->r16) = 0;
    // 0x80228E54: sw          $zero, 0x398($s0)
    MEM_W(0X398, ctx->r16) = 0;
    // 0x80228E58: sw          $zero, 0x3AC($s0)
    MEM_W(0X3AC, ctx->r16) = 0;
    // 0x80228E5C: sw          $zero, 0x3F0($s0)
    MEM_W(0X3F0, ctx->r16) = 0;
    // 0x80228E60: sw          $zero, 0x404($s0)
    MEM_W(0X404, ctx->r16) = 0;
    // 0x80228E64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228E68: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228E6C: jr          $ra
    // 0x80228E70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228E70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022612C_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022612C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226130: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226134: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226138: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022613C: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80226140: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226144: beq         $v1, $v0, L_8022618C
    if (ctx->r3 == ctx->r2) {
        // 0x80226148: addiu       $a0, $zero, 0xA
        ctx->r4 = ADD32(0, 0XA);
            goto L_8022618C;
    }
    // 0x80226148: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x8022614C: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x80226150: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80226154: jalr        $v0
    // 0x80226158: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80226158: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8022615C: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80226160: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80226164: beq         $v1, $v0, L_8022617C
    if (ctx->r3 == ctx->r2) {
        // 0x80226168: nop
    
            goto L_8022617C;
    }
    // 0x80226168: nop

    // 0x8022616C: jal         0x8006072C
    // 0x80226170: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_1;
    // 0x80226170: nop

    after_1:
    // 0x80226174: bne         $v0, $zero, L_8022618C
    if (ctx->r2 != 0) {
        // 0x80226178: addiu       $a0, $zero, 0x8
        ctx->r4 = ADD32(0, 0X8);
            goto L_8022618C;
    }
    // 0x80226178: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
L_8022617C:
    // 0x8022617C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80226180: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226184: bne         $v1, $v0, L_802261A4
    if (ctx->r3 != ctx->r2) {
        // 0x80226188: addiu       $a0, $zero, 0x8
        ctx->r4 = ADD32(0, 0X8);
            goto L_802261A4;
    }
    // 0x80226188: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
L_8022618C:
    // 0x8022618C: jal         0x80036E48
    // 0x80226190: nop

    func_80036E48_12248(rdram, ctx);
        goto after_2;
    // 0x80226190: nop

    after_2:
    // 0x80226194: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80226198: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x8022619C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802261A0: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802261A4:
    // 0x802261A4: jal         0x8005FB90
    // 0x802261A8: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_3;
    // 0x802261A8: nop

    after_3:
    // 0x802261AC: jal         0x80060018
    // 0x802261B0: nop

    func_80060018_3B418(rdram, ctx);
        goto after_4;
    // 0x802261B0: nop

    after_4:
    // 0x802261B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802261B8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802261BC: jr          $ra
    // 0x802261C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802261C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
