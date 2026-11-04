#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8022A868_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A868: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022A86C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022A870: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022A874: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022A878: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A87C: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022A880: sh          $zero, 0x54($s1)
    MEM_H(0X54, ctx->r17) = 0;
    // 0x8022A884: sh          $zero, 0x58($s1)
    MEM_H(0X58, ctx->r17) = 0;
    // 0x8022A888: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022A88C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8022A890: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022A894: lw          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3BC8);
    // 0x8022A898: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x8022A89C: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8022A8A0: lui         $v0, 0xA00
    ctx->r2 = S32(0XA00 << 16);
    // 0x8022A8A4: bne         $v1, $v0, L_8022A8BC
    if (ctx->r3 != ctx->r2) {
        // 0x8022A8A8: addiu       $s0, $s1, 0x2E8
        ctx->r16 = ADD32(ctx->r17, 0X2E8);
            goto L_8022A8BC;
    }
    // 0x8022A8A8: addiu       $s0, $s1, 0x2E8
    ctx->r16 = ADD32(ctx->r17, 0X2E8);
    // 0x8022A8AC: jal         0x8004D5FC
    // 0x8022A8B0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5FC_289FC(rdram, ctx);
        goto after_0;
    // 0x8022A8B0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x8022A8B4: j           L_8022A8CC
    // 0x8022A8B8: addiu       $v0, $zero, 0x300
    ctx->r2 = ADD32(0, 0X300);
        goto L_8022A8CC;
    // 0x8022A8B8: addiu       $v0, $zero, 0x300
    ctx->r2 = ADD32(0, 0X300);
L_8022A8BC:
    // 0x8022A8BC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022A8C0: jal         0x8004D5D4
    // 0x8022A8C4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x8022A8C4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
    // 0x8022A8C8: addiu       $v0, $zero, 0x300
    ctx->r2 = ADD32(0, 0X300);
L_8022A8CC:
    // 0x8022A8CC: sh          $v0, 0x15C($s1)
    MEM_H(0X15C, ctx->r17) = ctx->r2;
    // 0x8022A8D0: sh          $v0, 0x15A($s1)
    MEM_H(0X15A, ctx->r17) = ctx->r2;
    // 0x8022A8D4: sh          $v0, 0x158($s1)
    MEM_H(0X158, ctx->r17) = ctx->r2;
    // 0x8022A8D8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022A8DC: sb          $v0, 0x4A($s0)
    MEM_B(0X4A, ctx->r16) = ctx->r2;
    // 0x8022A8E0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022A8E4: sh          $v0, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r2;
    // 0x8022A8E8: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8022A8EC: sh          $v0, 0x2A($s0)
    MEM_H(0X2A, ctx->r16) = ctx->r2;
    // 0x8022A8F0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022A8F4: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x8022A8F8: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x8022A8FC: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x8022A900: sh          $v0, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r2;
    // 0x8022A904: sb          $zero, 0x50($s0)
    MEM_B(0X50, ctx->r16) = 0;
    // 0x8022A908: sb          $zero, 0x53($s0)
    MEM_B(0X53, ctx->r16) = 0;
    // 0x8022A90C: sb          $zero, 0x54($s0)
    MEM_B(0X54, ctx->r16) = 0;
    // 0x8022A910: sb          $zero, 0x4E($s0)
    MEM_B(0X4E, ctx->r16) = 0;
    // 0x8022A914: sb          $zero, 0x48($s0)
    MEM_B(0X48, ctx->r16) = 0;
    // 0x8022A918: sb          $zero, 0x49($s0)
    MEM_B(0X49, ctx->r16) = 0;
    // 0x8022A91C: sh          $zero, 0x40($s0)
    MEM_H(0X40, ctx->r16) = 0;
    // 0x8022A920: lbu         $v1, 0x3($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X3);
    // 0x8022A924: beq         $v1, $zero, L_8022A93C
    if (ctx->r3 == 0) {
        // 0x8022A928: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022A93C;
    }
    // 0x8022A928: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A92C: bnel        $v1, $v0, L_8022A940
    if (ctx->r3 != ctx->r2) {
        // 0x8022A930: addiu       $a0, $s0, 0x18
        ctx->r4 = ADD32(ctx->r16, 0X18);
            goto L_8022A940;
    }
    goto skip_0;
    // 0x8022A930: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
    skip_0:
    // 0x8022A934: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x8022A938: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
L_8022A93C:
    // 0x8022A93C: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
L_8022A940:
    // 0x8022A940: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x8022A944: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    // 0x8022A948: jal         0x800540BC
    // 0x8022A94C: sh          $zero, 0x42($s0)
    MEM_H(0X42, ctx->r16) = 0;
    func_800540BC_2F4BC(rdram, ctx);
        goto after_2;
    // 0x8022A94C: sh          $zero, 0x42($s0)
    MEM_H(0X42, ctx->r16) = 0;
    after_2:
    // 0x8022A950: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x8022A954: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8022A958: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x8022A95C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022A960: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022A964: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022A968: lbu         $v1, 0x8($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X8);
    // 0x8022A96C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022A970: sb          $zero, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = 0;
    // 0x8022A974: lbu         $a1, 0xAC($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XAC);
    // 0x8022A978: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022A97C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A980: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x8022A984: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022A988: sh          $v0, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r2;
    // 0x8022A98C: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022A990: addiu       $v0, $v0, 0x4150
    ctx->r2 = ADD32(ctx->r2, 0X4150);
    // 0x8022A994: sb          $zero, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = 0;
    // 0x8022A998: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x8022A99C: sb          $zero, 0x74($s1)
    MEM_B(0X74, ctx->r17) = 0;
    // 0x8022A9A0: sw          $v0, 0x78($s1)
    MEM_W(0X78, ctx->r17) = ctx->r2;
    // 0x8022A9A4: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8022A9A8: sh          $v1, 0x6E($s1)
    MEM_H(0X6E, ctx->r17) = ctx->r3;
    // 0x8022A9AC: sh          $v1, 0xB0($s1)
    MEM_H(0XB0, ctx->r17) = ctx->r3;
    // 0x8022A9B0: jal         0x800502EC
    // 0x8022A9B4: sh          $v1, 0xB2($s1)
    MEM_H(0XB2, ctx->r17) = ctx->r3;
    func_800502EC_2B6EC(rdram, ctx);
        goto after_3;
    // 0x8022A9B4: sh          $v1, 0xB2($s1)
    MEM_H(0XB2, ctx->r17) = ctx->r3;
    after_3:
    // 0x8022A9B8: jal         0x80051248
    // 0x8022A9BC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80051248_2C648(rdram, ctx);
        goto after_4;
    // 0x8022A9BC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x8022A9C0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022A9C4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022A9C8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A9CC: jr          $ra
    // 0x8022A9D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022A9D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023086C_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023086C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80230870: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80230874: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80230878: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023087C: jal         0x8004F144
    // 0x80230880: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80230880: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x80230884: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80230888: beq         $s0, $zero, L_802308C8
    if (ctx->r16 == 0) {
        // 0x8023088C: addiu       $a0, $s0, 0x38
        ctx->r4 = ADD32(ctx->r16, 0X38);
            goto L_802308C8;
    }
    // 0x8023088C: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x80230890: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80230894: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80230898: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8023089C: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x802308A0: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x802308A4: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    // 0x802308A8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802308AC: jal         0x8009A3B4
    // 0x802308B0: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802308B0: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    after_1:
    // 0x802308B4: lhu         $v0, 0x3A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3A);
    // 0x802308B8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802308BC: addiu       $v0, $v0, -0x28
    ctx->r2 = ADD32(ctx->r2, -0X28);
    // 0x802308C0: jal         0x8004F684
    // 0x802308C4: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    func_8004F684_2AA84(rdram, ctx);
        goto after_2;
    // 0x802308C4: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    after_2:
L_802308C8:
    // 0x802308C8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802308CC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802308D0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802308D4: jr          $ra
    // 0x802308D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802308D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80229174_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229174: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229178: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022917C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229180: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229184: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80229188: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x8022918C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80229190: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80229194: jal         0x8004F820
    // 0x80229198: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80229198: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x8022919C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802291A0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802291A4: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802291A8: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x802291AC: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x802291B0: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x802291B4: bne         $v0, $zero, L_802291D8
    if (ctx->r2 != 0) {
        // 0x802291B8: addiu       $v1, $zero, 0x9
        ctx->r3 = ADD32(0, 0X9);
            goto L_802291D8;
    }
    // 0x802291B8: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
    // 0x802291BC: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x802291C0: lbu         $a0, 0x34B($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X34B);
    // 0x802291C4: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x802291C8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x802291CC: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x802291D0: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x802291D4: sb          $a0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r4;
L_802291D8:
    // 0x802291D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802291DC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802291E0: jr          $ra
    // 0x802291E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802291E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022927C_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022927C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80229280: lw          $a1, 0x4B34($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4B34);
    // 0x80229284: bne         $a1, $a0, L_802292D8
    if (ctx->r5 != ctx->r4) {
        // 0x80229288: addiu       $a2, $a0, 0x348
        ctx->r6 = ADD32(ctx->r4, 0X348);
            goto L_802292D8;
    }
    // 0x80229288: addiu       $a2, $a0, 0x348
    ctx->r6 = ADD32(ctx->r4, 0X348);
    // 0x8022928C: lbu         $v1, 0x2($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X2);
    // 0x80229290: addiu       $v0, $zero, 0x34
    ctx->r2 = ADD32(0, 0X34);
    // 0x80229294: bne         $v1, $v0, L_802292A4
    if (ctx->r3 != ctx->r2) {
        // 0x80229298: addiu       $v0, $zero, 0x11
        ctx->r2 = ADD32(0, 0X11);
            goto L_802292A4;
    }
    // 0x80229298: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x8022929C: j           L_802292C0
    // 0x802292A0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_802292C0;
    // 0x802292A0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_802292A4:
    // 0x802292A4: bne         $v1, $v0, L_802292B4
    if (ctx->r3 != ctx->r2) {
        // 0x802292A8: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_802292B4;
    }
    // 0x802292A8: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x802292AC: j           L_802292C0
    // 0x802292B0: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
        goto L_802292C0;
    // 0x802292B0: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_802292B4:
    // 0x802292B4: bne         $v1, $v0, L_802292C0
    if (ctx->r3 != ctx->r2) {
        // 0x802292B8: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_802292C0;
    }
    // 0x802292B8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802292BC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_802292C0:
    // 0x802292C0: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x802292C4: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x802292C8: sb          $zero, 0x3($a2)
    MEM_B(0X3, ctx->r6) = 0;
    // 0x802292CC: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x802292D0: andi        $v0, $v0, 0xFFFD
    ctx->r2 = ctx->r2 & 0XFFFD;
    // 0x802292D4: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
L_802292D8:
    // 0x802292D8: jr          $ra
    // 0x802292DC: nop

    TRACE_RETURN()
    return;
    // 0x802292DC: nop

;}
RECOMP_FUNC void func_802278FC_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802278FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227900: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80227904: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80227908: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022790C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227910: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227914: lw          $v0, 0x3FE8($at)
    ctx->r2 = MEM_W(ctx->r1, 0X3FE8);
    // 0x80227918: jalr        $v0
    // 0x8022791C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022791C: nop

    after_0:
    // 0x80227920: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80227924: jr          $ra
    // 0x80227928: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227928: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022EC40_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EC40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022EC44: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022EC48: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022EC4C: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022EC50: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022EC54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022EC58: jal         0x8009A3B4
    // 0x8022EC5C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022EC5C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_0:
    // 0x8022EC60: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022EC64: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022EC68: jal         0x8009A3B4
    // 0x8022EC6C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022EC6C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8022EC70: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022EC74: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022EC78: jal         0x8009A3B4
    // 0x8022EC7C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022EC7C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022EC80: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022EC84: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022EC88: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022EC8C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022EC90: lw          $v0, 0x43A0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X43A0);
    // 0x8022EC94: jalr        $v0
    // 0x8022EC98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8022EC98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022EC9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022ECA0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022ECA4: jr          $ra
    // 0x8022ECA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022ECA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802288B8_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802288B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802288BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802288C0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802288C4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802288C8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802288CC: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x802288D0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802288D4: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x802288D8: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x802288DC: bne         $v0, $zero, L_80228938
    if (ctx->r2 != 0) {
        // 0x802288E0: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_80228938;
    }
    // 0x802288E0: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x802288E4: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802288E8: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x802288EC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802288F0: jal         0x8004F820
    // 0x802288F4: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x802288F4: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_0:
    // 0x802288F8: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802288FC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80228900: lw          $a0, 0x3FF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3FF0);
    // 0x80228904: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80228908: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022890C: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x80228910: and         $a0, $a0, $v0
    ctx->r4 = ctx->r4 & ctx->r2;
    // 0x80228914: beq         $a0, $zero, L_80228938
    if (ctx->r4 == 0) {
        // 0x80228918: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80228938;
    }
    // 0x80228918: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022891C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80228920: jal         0x802292E0
    // 0x80228924: nop

    func_802292E0_ovl18(rdram, ctx);
        goto after_1;
    // 0x80228924: nop

    after_1:
    // 0x80228928: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022892C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80228930: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80228934: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
L_80228938:
    // 0x80228938: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022893C: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x80228940: bne         $v0, $zero, L_80228964
    if (ctx->r2 != 0) {
        // 0x80228944: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_80228964;
    }
    // 0x80228944: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80228948: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022894C: sb          $v1, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r3;
    // 0x80228950: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x80228954: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x80228958: jal         0x80229378
    // 0x8022895C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_80229378_ovl18(rdram, ctx);
        goto after_2;
    // 0x8022895C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_2:
    // 0x80228960: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80228964:
    // 0x80228964: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80228968: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022896C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228970: jr          $ra
    // 0x80228974: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80228974: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802278C0_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802278C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802278C4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802278C8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802278CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802278D0: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x802278D4: bgez        $v0, L_802278EC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802278D8: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_802278EC;
    }
    // 0x802278D8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802278DC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x802278E0: jal         0x80229388
    // 0x802278E4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    func_80229388_ovl18(rdram, ctx);
        goto after_0;
    // 0x802278E4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    after_0:
    // 0x802278E8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_802278EC:
    // 0x802278EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802278F0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802278F4: jr          $ra
    // 0x802278F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802278F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80230590_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230590: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80230594: lw          $v0, 0x4B34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4B34);
    // 0x80230598: bne         $v0, $a0, L_802305E4
    if (ctx->r2 != ctx->r4) {
        // 0x8023059C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_802305E4;
    }
    // 0x8023059C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x802305A0: lbu         $v1, 0xC($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XC);
    // 0x802305A4: andi        $v0, $v1, 0x2
    ctx->r2 = ctx->r3 & 0X2;
    // 0x802305A8: beq         $v0, $zero, L_802305B8
    if (ctx->r2 == 0) {
        // 0x802305AC: addiu       $v0, $zero, 0xCB
        ctx->r2 = ADD32(0, 0XCB);
            goto L_802305B8;
    }
    // 0x802305AC: addiu       $v0, $zero, 0xCB
    ctx->r2 = ADD32(0, 0XCB);
    // 0x802305B0: j           L_802305DC
    // 0x802305B4: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
        goto L_802305DC;
    // 0x802305B4: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
L_802305B8:
    // 0x802305B8: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x802305BC: beql        $v0, $zero, L_802305D4
    if (ctx->r2 == 0) {
        // 0x802305C0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802305D4;
    }
    goto skip_0;
    // 0x802305C0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802305C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802305C8: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x802305CC: j           L_802305DC
    // 0x802305D0: addiu       $v0, $zero, 0xCA
    ctx->r2 = ADD32(0, 0XCA);
        goto L_802305DC;
    // 0x802305D0: addiu       $v0, $zero, 0xCA
    ctx->r2 = ADD32(0, 0XCA);
L_802305D4:
    // 0x802305D4: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x802305D8: addiu       $v0, $zero, 0xCC
    ctx->r2 = ADD32(0, 0XCC);
L_802305DC:
    // 0x802305DC: sb          $v0, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r2;
    // 0x802305E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802305E4:
    // 0x802305E4: jr          $ra
    // 0x802305E8: nop

    TRACE_RETURN()
    return;
    // 0x802305E8: nop

;}
RECOMP_FUNC void func_80229090_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229090: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80229094: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229098: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022909C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802290A0: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x802290A4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802290A8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802290AC: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x802290B0: addiu       $s2, $s2, 0x49C4
    ctx->r18 = ADD32(ctx->r18, 0X49C4);
    // 0x802290B4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802290B8: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x802290BC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x802290C0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802290C4: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x802290C8: lhu         $t0, 0x56($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X56);
    // 0x802290CC: lbu         $t1, 0xAC($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XAC);
    // 0x802290D0: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x802290D4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802290D8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802290DC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802290E0: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
    // 0x802290E4: sh          $t0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r8;
    // 0x802290E8: jal         0x8004F820
    // 0x802290EC: sb          $t1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r9;
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x802290EC: sb          $t1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r9;
    after_0:
    // 0x802290F0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802290F4: bgez        $v0, L_80229124
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802290F8: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_80229124;
    }
    // 0x802290F8: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x802290FC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80229100: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80229104: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80229108: jal         0x8004F820
    // 0x8022910C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022910C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_1:
    // 0x80229110: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229114: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80229118: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022911C: j           L_80229140
    // 0x80229120: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_80229140;
    // 0x80229120: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_80229124:
    // 0x80229124: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80229128: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022912C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80229130: jal         0x8004F820
    // 0x80229134: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80229134: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x80229138: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022913C: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_80229140:
    // 0x80229140: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80229144: sh          $v0, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r2;
    // 0x80229148: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x8022914C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80229150: jal         0x800610AC
    // 0x80229154: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_3;
    // 0x80229154: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x80229158: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022915C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80229160: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80229164: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229168: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022916C: jr          $ra
    // 0x80229170: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80229170: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802272B8_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802272B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802272BC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802272C0: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x802272C4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802272C8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802272CC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802272D0: lw          $v0, 0x3F4C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X3F4C);
    // 0x802272D4: jalr        $v0
    // 0x802272D8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802272D8: nop

    after_0:
    // 0x802272DC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802272E0: jr          $ra
    // 0x802272E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802272E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022ECAC_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022ECAC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022ECB0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022ECB4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022ECB8: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8022ECBC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022ECC0: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022ECC4: addiu       $a0, $s0, 0xAC
    ctx->r4 = ADD32(ctx->r16, 0XAC);
    // 0x8022ECC8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022ECCC: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022ECD0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022ECD4: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022ECD8: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022ECDC: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8022ECE0: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022ECE4: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x8022ECE8: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022ECEC: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x8022ECF0: ori         $v1, $v1, 0x6
    ctx->r3 = ctx->r3 | 0X6;
    // 0x8022ECF4: jal         0x8009A3B4
    // 0x8022ECF8: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022ECF8: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022ECFC: addiu       $a0, $s0, 0x54
    ctx->r4 = ADD32(ctx->r16, 0X54);
    // 0x8022ED00: addiu       $s1, $s0, 0x8C
    ctx->r17 = ADD32(ctx->r16, 0X8C);
    // 0x8022ED04: jal         0x80031428
    // 0x8022ED08: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_80031428_C828(rdram, ctx);
        goto after_1;
    // 0x8022ED08: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x8022ED0C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022ED10: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8022ED14: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022ED18: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022ED1C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022ED20: jal         0x80031DA8
    // 0x8022ED24: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_2;
    // 0x8022ED24: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_2:
    // 0x8022ED28: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8022ED2C: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x8022ED30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022ED34: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x8022ED38: jal         0x8004D5D4
    // 0x8022ED3C: sw          $v0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_3;
    // 0x8022ED3C: sw          $v0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r2;
    after_3:
    // 0x8022ED40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022ED44: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022ED48: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022ED4C: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022ED50: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8022ED54: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8022ED58: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022ED5C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022ED60: jr          $ra
    // 0x8022ED64: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022ED64: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022578C_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022578C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225790: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225794: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225798: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022579C: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802257A0: bne         $v0, $zero, L_802257BC
    if (ctx->r2 != 0) {
        // 0x802257A4: nop
    
            goto L_802257BC;
    }
    // 0x802257A4: nop

    // 0x802257A8: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802257AC: jal         0x800607C4
    // 0x802257B0: addiu       $a0, $a0, 0x37A8
    ctx->r4 = ADD32(ctx->r4, 0X37A8);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x802257B0: addiu       $a0, $a0, 0x37A8
    ctx->r4 = ADD32(ctx->r4, 0X37A8);
    after_0:
    // 0x802257B4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802257B8: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802257BC:
    // 0x802257BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802257C0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802257C4: jr          $ra
    // 0x802257C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802257C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022587C_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022587C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225880: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225884: jal         0x8006036C
    // 0x80225888: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    func_8006036C_3B76C(rdram, ctx);
        goto after_0;
    // 0x80225888: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    after_0:
    // 0x8022588C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225890: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80225894: jr          $ra
    // 0x80225898: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225898: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80230710_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230710: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80230714: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80230718: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023071C: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80230720: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80230724: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80230728: lbu         $v1, 0x3($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X3);
    // 0x8023072C: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x80230730: bne         $v1, $zero, L_80230744
    if (ctx->r3 != 0) {
        // 0x80230734: sb          $v0, 0x0($s1)
        MEM_B(0X0, ctx->r17) = ctx->r2;
            goto L_80230744;
    }
    // 0x80230734: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80230738: lh          $v0, 0x3E($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X3E);
    // 0x8023073C: sh          $zero, 0x3E($s1)
    MEM_H(0X3E, ctx->r17) = 0;
    // 0x80230740: sw          $v0, 0x44($s1)
    MEM_W(0X44, ctx->r17) = ctx->r2;
L_80230744:
    // 0x80230744: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80230748: jal         0x8004D5D4
    // 0x8023074C: addiu       $a1, $s1, 0x3
    ctx->r5 = ADD32(ctx->r17, 0X3);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8023074C: addiu       $a1, $s1, 0x3
    ctx->r5 = ADD32(ctx->r17, 0X3);
    after_0:
    // 0x80230750: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x80230754: jal         0x8002C654
    // 0x80230758: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_1;
    // 0x80230758: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8023075C: lb          $a0, 0xF($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XF);
    // 0x80230760: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80230764: jal         0x800319B4
    // 0x80230768: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    func_800319B4_CDB4(rdram, ctx);
        goto after_2;
    // 0x80230768: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    after_2:
    // 0x8023076C: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x80230770: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80230774: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x80230778: sw          $v0, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r2;
    // 0x8023077C: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80230780: addiu       $v0, $v0, 0x4464
    ctx->r2 = ADD32(ctx->r2, 0X4464);
    // 0x80230784: sw          $v0, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r2;
    // 0x80230788: sw          $zero, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = 0;
    // 0x8023078C: sw          $zero, 0x50($s1)
    MEM_W(0X50, ctx->r17) = 0;
    // 0x80230790: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80230794: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
    // 0x80230798: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8023079C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x802307A0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802307A4: jr          $ra
    // 0x802307A8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x802307A8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80231520_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231520: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231524: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231528: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023152C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80231530: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80231534: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80231538: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8023153C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80231540: lw          $v0, 0x44A0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X44A0);
    // 0x80231544: jalr        $v0
    // 0x80231548: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80231548: nop

    after_0:
    // 0x8023154C: sw          $zero, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = 0;
    // 0x80231550: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80231554: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231558: jr          $ra
    // 0x8023155C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023155C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228CA0_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228CA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228CA4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80228CA8: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x80228CAC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80228CB0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228CB4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228CB8: lw          $v0, 0x40E4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X40E4);
    // 0x80228CBC: jalr        $v0
    // 0x80228CC0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80228CC0: nop

    after_0:
    // 0x80228CC4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80228CC8: jr          $ra
    // 0x80228CCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228CCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80231240_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231240: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80231244: lw          $v0, 0x4B34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4B34);
    // 0x80231248: bne         $v0, $a0, L_8023125C
    if (ctx->r2 != ctx->r4) {
        // 0x8023124C: nop
    
            goto L_8023125C;
    }
    // 0x8023124C: nop

    // 0x80231250: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80231254: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231258: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
L_8023125C:
    // 0x8023125C: lw          $v0, 0x4C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4C);
    // 0x80231260: bgez        $v0, L_8023126C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80231264: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023126C;
    }
    // 0x80231264: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80231268: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
L_8023126C:
    // 0x8023126C: jr          $ra
    // 0x80231270: nop

    TRACE_RETURN()
    return;
    // 0x80231270: nop

;}
RECOMP_FUNC void func_8022C650_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C650: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022C654: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022C658: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022C65C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8022C660: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x8022C664: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x8022C668: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8022C66C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022C670: lw          $v1, 0x348($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X348);
    // 0x8022C674: lw          $v0, 0x80($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X80);
    // 0x8022C678: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022C67C: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x8022C680: bne         $v1, $v0, L_8022C71C
    if (ctx->r3 != ctx->r2) {
        // 0x8022C684: addiu       $s4, $s1, 0x308
        ctx->r20 = ADD32(ctx->r17, 0X308);
            goto L_8022C71C;
    }
    // 0x8022C684: addiu       $s4, $s1, 0x308
    ctx->r20 = ADD32(ctx->r17, 0X308);
    // 0x8022C688: lh          $v1, 0x368($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X368);
    // 0x8022C68C: lh          $v0, 0x328($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X328);
    // 0x8022C690: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x8022C694: beq         $v1, $v0, L_8022C7D4
    if (ctx->r3 == ctx->r2) {
        // 0x8022C698: addu        $a2, $v0, $zero
        ctx->r6 = ADD32(ctx->r2, 0);
            goto L_8022C7D4;
    }
    // 0x8022C698: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x8022C69C: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    // 0x8022C6A0: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x8022C6A4: andi        $a1, $a1, 0xFFF
    ctx->r5 = ctx->r5 & 0XFFF;
    // 0x8022C6A8: sltiu       $v0, $a1, 0x800
    ctx->r2 = ctx->r5 < 0X800 ? 1 : 0;
    // 0x8022C6AC: beq         $v0, $zero, L_8022C6DC
    if (ctx->r2 == 0) {
        // 0x8022C6B0: addu        $s3, $a1, $zero
        ctx->r19 = ADD32(ctx->r5, 0);
            goto L_8022C6DC;
    }
    // 0x8022C6B0: addu        $s3, $a1, $zero
    ctx->r19 = ADD32(ctx->r5, 0);
    // 0x8022C6B4: addiu       $v0, $a2, -0x800
    ctx->r2 = ADD32(ctx->r6, -0X800);
    // 0x8022C6B8: sltiu       $v0, $v0, 0x7FF
    ctx->r2 = ctx->r2 < 0X7FF ? 1 : 0;
    // 0x8022C6BC: beq         $v0, $zero, L_8022C6D4
    if (ctx->r2 == 0) {
        // 0x8022C6C0: nop
    
            goto L_8022C6D4;
    }
    // 0x8022C6C0: nop

    // 0x8022C6C4: jal         0x8022C7FC
    // 0x8022C6C8: nop

    func_8022C7FC_ovl18(rdram, ctx);
        goto after_0;
    // 0x8022C6C8: nop

    after_0:
    // 0x8022C6CC: j           L_8022C6E0
    // 0x8022C6D0: addiu       $v0, $s3, -0x800
    ctx->r2 = ADD32(ctx->r19, -0X800);
        goto L_8022C6E0;
    // 0x8022C6D0: addiu       $v0, $s3, -0x800
    ctx->r2 = ADD32(ctx->r19, -0X800);
L_8022C6D4:
    // 0x8022C6D4: jal         0x8022C84C
    // 0x8022C6D8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8022C84C_ovl18(rdram, ctx);
        goto after_1;
    // 0x8022C6D8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
L_8022C6DC:
    // 0x8022C6DC: addiu       $v0, $s3, -0x800
    ctx->r2 = ADD32(ctx->r19, -0X800);
L_8022C6E0:
    // 0x8022C6E0: sltiu       $v0, $v0, 0x7FF
    ctx->r2 = ctx->r2 < 0X7FF ? 1 : 0;
    // 0x8022C6E4: beq         $v0, $zero, L_8022C7D4
    if (ctx->r2 == 0) {
        // 0x8022C6E8: sltiu       $v0, $s0, 0x800
        ctx->r2 = ctx->r16 < 0X800 ? 1 : 0;
            goto L_8022C7D4;
    }
    // 0x8022C6E8: sltiu       $v0, $s0, 0x800
    ctx->r2 = ctx->r16 < 0X800 ? 1 : 0;
    // 0x8022C6EC: beq         $v0, $zero, L_8022C708
    if (ctx->r2 == 0) {
        // 0x8022C6F0: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022C708;
    }
    // 0x8022C6F0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022C6F4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8022C6F8: jal         0x8022C7FC
    // 0x8022C6FC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_8022C7FC_ovl18(rdram, ctx);
        goto after_2;
    // 0x8022C6FC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022C700: j           L_8022C7D4
    // 0x8022C704: nop

        goto L_8022C7D4;
    // 0x8022C704: nop

L_8022C708:
    // 0x8022C708: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8022C70C: jal         0x8022C84C
    // 0x8022C710: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_8022C84C_ovl18(rdram, ctx);
        goto after_3;
    // 0x8022C710: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022C714: j           L_8022C7D4
    // 0x8022C718: nop

        goto L_8022C7D4;
    // 0x8022C718: nop

L_8022C71C:
    // 0x8022C71C: addiu       $s0, $a1, 0xC4
    ctx->r16 = ADD32(ctx->r5, 0XC4);
    // 0x8022C720: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C724: lhu         $v0, 0x328($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X328);
    // 0x8022C728: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    // 0x8022C72C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022C730: andi        $s2, $v0, 0xFFF
    ctx->r18 = ctx->r2 & 0XFFF;
    // 0x8022C734: jal         0x8009A3B4
    // 0x8022C738: addu        $s3, $s2, $zero
    ctx->r19 = ADD32(ctx->r18, 0);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022C738: addu        $s3, $s2, $zero
    ctx->r19 = ADD32(ctx->r18, 0);
    after_4:
    // 0x8022C73C: addiu       $a0, $s1, 0x198
    ctx->r4 = ADD32(ctx->r17, 0X198);
    // 0x8022C740: lh          $a2, 0x366($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X366);
    // 0x8022C744: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022C748: addiu       $v0, $zero, 0xAC
    ctx->r2 = ADD32(0, 0XAC);
    // 0x8022C74C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022C750: jal         0x8004E800
    // 0x8022C754: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8004E800_29C00(rdram, ctx);
        goto after_5;
    // 0x8022C754: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_5:
    // 0x8022C758: andi        $a2, $v0, 0xFFF
    ctx->r6 = ctx->r2 & 0XFFF;
    // 0x8022C75C: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    // 0x8022C760: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022C764: sltiu       $v0, $s2, 0x800
    ctx->r2 = ctx->r18 < 0X800 ? 1 : 0;
    // 0x8022C768: sh          $s0, 0x368($s1)
    MEM_H(0X368, ctx->r17) = ctx->r16;
    // 0x8022C76C: beq         $v0, $zero, L_8022C79C
    if (ctx->r2 == 0) {
        // 0x8022C770: sh          $s0, 0x328($s1)
        MEM_H(0X328, ctx->r17) = ctx->r16;
            goto L_8022C79C;
    }
    // 0x8022C770: sh          $s0, 0x328($s1)
    MEM_H(0X328, ctx->r17) = ctx->r16;
    // 0x8022C774: addiu       $v0, $a2, -0x800
    ctx->r2 = ADD32(ctx->r6, -0X800);
    // 0x8022C778: sltiu       $v0, $v0, 0x7FF
    ctx->r2 = ctx->r2 < 0X7FF ? 1 : 0;
    // 0x8022C77C: beq         $v0, $zero, L_8022C794
    if (ctx->r2 == 0) {
        // 0x8022C780: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022C794;
    }
    // 0x8022C780: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022C784: jal         0x8022C89C
    // 0x8022C788: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_8022C89C_ovl18(rdram, ctx);
        goto after_6;
    // 0x8022C788: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_6:
    // 0x8022C78C: j           L_8022C7A0
    // 0x8022C790: addiu       $v0, $s3, -0x800
    ctx->r2 = ADD32(ctx->r19, -0X800);
        goto L_8022C7A0;
    // 0x8022C790: addiu       $v0, $s3, -0x800
    ctx->r2 = ADD32(ctx->r19, -0X800);
L_8022C794:
    // 0x8022C794: jal         0x8022C8DC
    // 0x8022C798: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_8022C8DC_ovl18(rdram, ctx);
        goto after_7;
    // 0x8022C798: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_7:
L_8022C79C:
    // 0x8022C79C: addiu       $v0, $s3, -0x800
    ctx->r2 = ADD32(ctx->r19, -0X800);
L_8022C7A0:
    // 0x8022C7A0: sltiu       $v0, $v0, 0x7FF
    ctx->r2 = ctx->r2 < 0X7FF ? 1 : 0;
    // 0x8022C7A4: beq         $v0, $zero, L_8022C7D4
    if (ctx->r2 == 0) {
        // 0x8022C7A8: sltiu       $v0, $s0, 0x800
        ctx->r2 = ctx->r16 < 0X800 ? 1 : 0;
            goto L_8022C7D4;
    }
    // 0x8022C7A8: sltiu       $v0, $s0, 0x800
    ctx->r2 = ctx->r16 < 0X800 ? 1 : 0;
    // 0x8022C7AC: beq         $v0, $zero, L_8022C7C8
    if (ctx->r2 == 0) {
        // 0x8022C7B0: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022C7C8;
    }
    // 0x8022C7B0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022C7B4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8022C7B8: jal         0x8022C89C
    // 0x8022C7BC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_8022C89C_ovl18(rdram, ctx);
        goto after_8;
    // 0x8022C7BC: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_8:
    // 0x8022C7C0: j           L_8022C7D4
    // 0x8022C7C4: nop

        goto L_8022C7D4;
    // 0x8022C7C4: nop

L_8022C7C8:
    // 0x8022C7C8: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8022C7CC: jal         0x8022C8DC
    // 0x8022C7D0: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    func_8022C8DC_ovl18(rdram, ctx);
        goto after_9;
    // 0x8022C7D0: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    after_9:
L_8022C7D4:
    // 0x8022C7D4: lw          $v0, 0x80($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X80);
    // 0x8022C7D8: sw          $v0, 0x40($s4)
    MEM_W(0X40, ctx->r20) = ctx->r2;
    // 0x8022C7DC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8022C7E0: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x8022C7E4: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x8022C7E8: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8022C7EC: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022C7F0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022C7F4: jr          $ra
    // 0x8022C7F8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8022C7F8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_802275E8_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802275E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802275EC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802275F0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802275F4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802275F8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802275FC: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x80227600: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80227604: jal         0x8004FA7C
    // 0x80227608: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80227608: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x8022760C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80227610: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x80227614: bne         $v0, $zero, L_80227638
    if (ctx->r2 != 0) {
        // 0x80227618: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_80227638;
    }
    // 0x80227618: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8022761C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80227620: jal         0x80229378
    // 0x80227624: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    func_80229378_ovl18(rdram, ctx);
        goto after_1;
    // 0x80227624: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    after_1:
    // 0x80227628: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022762C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227630: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80227634: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_80227638:
    // 0x80227638: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022763C: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80227640: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80227644: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80227648: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022764C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227650: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227654: jr          $ra
    // 0x80227658: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227658: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80227AB4_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227AB4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227AB8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227ABC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227AC0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80227AC4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227AC8: lh          $v0, 0x362($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X362);
    // 0x80227ACC: bne         $v0, $zero, L_80227B0C
    if (ctx->r2 != 0) {
        // 0x80227AD0: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_80227B0C;
    }
    // 0x80227AD0: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80227AD4: lh          $v0, 0x35C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35C);
    // 0x80227AD8: bne         $v0, $zero, L_80227B00
    if (ctx->r2 != 0) {
        // 0x80227ADC: nop
    
            goto L_80227B00;
    }
    // 0x80227ADC: nop

    // 0x80227AE0: lh          $v1, 0x360($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X360);
    // 0x80227AE4: lh          $v0, 0x366($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X366);
    // 0x80227AE8: bne         $v1, $v0, L_80227B00
    if (ctx->r3 != ctx->r2) {
        // 0x80227AEC: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80227B00;
    }
    // 0x80227AEC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80227AF0: lhu         $v0, 0x352($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X352);
    // 0x80227AF4: addiu       $a1, $s0, 0x354
    ctx->r5 = ADD32(ctx->r16, 0X354);
    // 0x80227AF8: j           L_80227B3C
    // 0x80227AFC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
        goto L_80227B3C;
    // 0x80227AFC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
L_80227B00:
    // 0x80227B00: lh          $v0, 0x1A($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X1A);
    // 0x80227B04: beq         $v0, $zero, L_80227B6C
    if (ctx->r2 == 0) {
        // 0x80227B08: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227B6C;
    }
    // 0x80227B08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80227B0C:
    // 0x80227B0C: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x80227B10: bne         $v0, $zero, L_80227B6C
    if (ctx->r2 != 0) {
        // 0x80227B14: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227B6C;
    }
    // 0x80227B14: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227B18: lh          $v1, 0x18($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X18);
    // 0x80227B1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227B20: bne         $v1, $v0, L_80227B6C
    if (ctx->r3 != ctx->r2) {
        // 0x80227B24: addiu       $a1, $s1, 0xC
        ctx->r5 = ADD32(ctx->r17, 0XC);
            goto L_80227B6C;
    }
    // 0x80227B24: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    // 0x80227B28: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80227B2C: lhu         $v0, 0xA($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA);
    // 0x80227B30: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80227B34: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80227B38: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
L_80227B3C:
    // 0x80227B3C: jal         0x8009A3B4
    // 0x80227B40: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80227B40: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_0:
    // 0x80227B44: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80227B48: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x80227B4C: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x80227B50: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227B54: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80227B58: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80227B5C: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80227B60: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80227B64: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x80227B68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80227B6C:
    // 0x80227B6C: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80227B70: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227B74: jal         0x8004DA90
    // 0x80227B78: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x80227B78: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x80227B7C: lhu         $v0, 0x18($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18);
    // 0x80227B80: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227B84: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    // 0x80227B88: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227B8C: bne         $v0, $zero, L_80227BBC
    if (ctx->r2 != 0) {
        // 0x80227B90: nop
    
            goto L_80227BBC;
    }
    // 0x80227B90: nop

    // 0x80227B94: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80227B98: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80227B9C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80227BA0: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80227BA4: lhu         $v1, 0x16($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X16);
    // 0x80227BA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227BAC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80227BB0: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x80227BB4: j           L_80227C0C
    // 0x80227BB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80227C0C;
    // 0x80227BB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80227BBC:
    // 0x80227BBC: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x80227BC0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227BC4: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x80227BC8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227BCC: bne         $v0, $zero, L_80227BDC
    if (ctx->r2 != 0) {
        // 0x80227BD0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227BDC;
    }
    // 0x80227BD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227BD4: j           L_80227C0C
    // 0x80227BD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80227C0C;
    // 0x80227BD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80227BDC:
    // 0x80227BDC: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80227BE0: jal         0x80229414
    // 0x80227BE4: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_80229414_ovl18(rdram, ctx);
        goto after_2;
    // 0x80227BE4: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_2:
    // 0x80227BE8: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80227BEC: beq         $v0, $zero, L_80227C10
    if (ctx->r2 == 0) {
        // 0x80227BF0: nop
    
            goto L_80227C10;
    }
    // 0x80227BF0: nop

    // 0x80227BF4: jal         0x80229378
    // 0x80227BF8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_80229378_ovl18(rdram, ctx);
        goto after_3;
    // 0x80227BF8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_3:
    // 0x80227BFC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227C00: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80227C04: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x80227C08: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_80227C0C:
    // 0x80227C0C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227C10:
    // 0x80227C10: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227C14: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227C18: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227C1C: jr          $ra
    // 0x80227C20: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227C20: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802309AC_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802309AC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802309B0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802309B4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802309B8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802309BC: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x802309C0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x802309C4: lbu         $s1, 0xA($s0)
    ctx->r17 = MEM_BU(ctx->r16, 0XA);
    // 0x802309C8: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x802309CC: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x802309D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802309D4: beq         $s1, $v0, L_80230A3C
    if (ctx->r17 == ctx->r2) {
        // 0x802309D8: slti        $v0, $s1, 0x2
        ctx->r2 = SIGNED(ctx->r17) < 0X2 ? 1 : 0;
            goto L_80230A3C;
    }
    // 0x802309D8: slti        $v0, $s1, 0x2
    ctx->r2 = SIGNED(ctx->r17) < 0X2 ? 1 : 0;
    // 0x802309DC: beql        $v0, $zero, L_802309F4
    if (ctx->r2 == 0) {
        // 0x802309E0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802309F4;
    }
    goto skip_0;
    // 0x802309E0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802309E4: beq         $s1, $zero, L_80230A04
    if (ctx->r17 == 0) {
        // 0x802309E8: nop
    
            goto L_80230A04;
    }
    // 0x802309E8: nop

    // 0x802309EC: j           L_80230B64
    // 0x802309F0: nop

        goto L_80230B64;
    // 0x802309F0: nop

L_802309F4:
    // 0x802309F4: beq         $s1, $v0, L_80230B2C
    if (ctx->r17 == ctx->r2) {
        // 0x802309F8: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_80230B2C;
    }
    // 0x802309F8: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x802309FC: j           L_80230B64
    // 0x80230A00: nop

        goto L_80230B64;
    // 0x80230A00: nop

L_80230A04:
    // 0x80230A04: jal         0x8006FF84
    // 0x80230A08: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x80230A08: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_0:
    // 0x80230A0C: beq         $v0, $zero, L_80230B64
    if (ctx->r2 == 0) {
        // 0x80230A10: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80230B64;
    }
    // 0x80230A10: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80230A14: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80230A18: sb          $v0, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r2;
    // 0x80230A1C: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80230A20: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80230A24: sb          $zero, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = 0;
    // 0x80230A28: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80230A2C: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x80230A30: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80230A34: j           L_80230B1C
    // 0x80230A38: sw          $zero, 0x49BC($at)
    MEM_W(0X49BC, ctx->r1) = 0;
        goto L_80230B1C;
    // 0x80230A38: sw          $zero, 0x49BC($at)
    MEM_W(0X49BC, ctx->r1) = 0;
L_80230A3C:
    // 0x80230A3C: jal         0x80230FB4
    // 0x80230A40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80230FB4_ovl18(rdram, ctx);
        goto after_1;
    // 0x80230A40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80230A44: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80230A48: beql        $v0, $zero, L_80230B0C
    if (ctx->r2 == 0) {
        // 0x80230A4C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80230B0C;
    }
    goto skip_1;
    // 0x80230A4C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    skip_1:
    // 0x80230A50: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x80230A54: bne         $v0, $zero, L_80230A78
    if (ctx->r2 != 0) {
        // 0x80230A58: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_80230A78;
    }
    // 0x80230A58: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80230A5C: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x80230A60: lb          $a3, 0xE($s0)
    ctx->r7 = MEM_B(ctx->r16, 0XE);
    // 0x80230A64: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80230A68: jal         0x800610AC
    // 0x80230A6C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_2;
    // 0x80230A6C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x80230A70: j           L_80230B1C
    // 0x80230A74: nop

        goto L_80230B1C;
    // 0x80230A74: nop

L_80230A78:
    // 0x80230A78: beq         $v0, $s1, L_80230B1C
    if (ctx->r2 == ctx->r17) {
        // 0x80230A7C: andi        $v0, $v0, 0x80
        ctx->r2 = ctx->r2 & 0X80;
            goto L_80230B1C;
    }
    // 0x80230A7C: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80230A80: beq         $v0, $zero, L_80230ACC
    if (ctx->r2 == 0) {
        // 0x80230A84: andi        $v0, $a0, 0x7F
        ctx->r2 = ctx->r4 & 0X7F;
            goto L_80230ACC;
    }
    // 0x80230A84: andi        $v0, $a0, 0x7F
    ctx->r2 = ctx->r4 & 0X7F;
    // 0x80230A88: lbu         $v1, 0xE($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XE);
    // 0x80230A8C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80230A90: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80230A94: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x80230A98: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80230A9C: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80230AA0: lui         $v0, 0xCCCC
    ctx->r2 = S32(0XCCCC << 16);
    // 0x80230AA4: ori         $v0, $v0, 0xCCCD
    ctx->r2 = ctx->r2 | 0XCCCD;
    // 0x80230AA8: multu       $v1, $v0
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80230AAC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80230AB0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80230AB4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80230AB8: mfhi        $t0
    ctx->r8 = hi;
    // 0x80230ABC: nop

    // 0x80230AC0: nop

    // 0x80230AC4: j           L_80230AEC
    // 0x80230AC8: srl         $a2, $t0, 3
    ctx->r6 = S32(U32(ctx->r8) >> 3);
        goto L_80230AEC;
    // 0x80230AC8: srl         $a2, $t0, 3
    ctx->r6 = S32(U32(ctx->r8) >> 3);
L_80230ACC:
    // 0x80230ACC: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x80230AD0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80230AD4: beq         $v1, $v0, L_80230B08
    if (ctx->r3 == ctx->r2) {
        // 0x80230AD8: addu        $a2, $v1, $zero
        ctx->r6 = ADD32(ctx->r3, 0);
            goto L_80230B08;
    }
    // 0x80230AD8: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x80230ADC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80230AE0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80230AE4: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
    // 0x80230AE8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
L_80230AEC:
    // 0x80230AEC: jal         0x80069754
    // 0x80230AF0: nop

    func_80069754_44B54(rdram, ctx);
        goto after_3;
    // 0x80230AF0: nop

    after_3:
    // 0x80230AF4: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    // 0x80230AF8: jal         0x8006036C
    // 0x80230AFC: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x80230AFC: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    after_4:
    // 0x80230B00: j           L_80230B1C
    // 0x80230B04: nop

        goto L_80230B1C;
    // 0x80230B04: nop

L_80230B08:
    // 0x80230B08: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_80230B0C:
    // 0x80230B0C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80230B10: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80230B14: jal         0x80069754
    // 0x80230B18: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80069754_44B54(rdram, ctx);
        goto after_5;
    // 0x80230B18: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_5:
L_80230B1C:
    // 0x80230B1C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80230B20: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230B24: j           L_80230B64
    // 0x80230B28: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80230B64;
    // 0x80230B28: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80230B2C:
    // 0x80230B2C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80230B30: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80230B34: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80230B38: bne         $v0, $zero, L_80230B64
    if (ctx->r2 != 0) {
        // 0x80230B3C: nop
    
            goto L_80230B64;
    }
    // 0x80230B3C: nop

    // 0x80230B40: jal         0x80070050
    // 0x80230B44: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_6;
    // 0x80230B44: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_6:
    // 0x80230B48: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x80230B4C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80230B50: sw          $zero, 0x4B34($at)
    MEM_W(0X4B34, ctx->r1) = 0;
    // 0x80230B54: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80230B58: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x80230B5C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80230B60: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_80230B64:
    // 0x80230B64: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80230B68: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80230B6C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80230B70: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80230B74: jr          $ra
    // 0x80230B78: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80230B78: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_802305EC_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802305EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802305F0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802305F4: jal         0x8006033C
    // 0x802305F8: addiu       $a0, $zero, 0x220
    ctx->r4 = ADD32(0, 0X220);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x802305F8: addiu       $a0, $zero, 0x220
    ctx->r4 = ADD32(0, 0X220);
    after_0:
    // 0x802305FC: beq         $v0, $zero, L_80230634
    if (ctx->r2 == 0) {
        // 0x80230600: nop
    
            goto L_80230634;
    }
    // 0x80230600: nop

    // 0x80230604: jal         0x8006033C
    // 0x80230608: addiu       $a0, $zero, 0x221
    ctx->r4 = ADD32(0, 0X221);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80230608: addiu       $a0, $zero, 0x221
    ctx->r4 = ADD32(0, 0X221);
    after_1:
    // 0x8023060C: beq         $v0, $zero, L_80230634
    if (ctx->r2 == 0) {
        // 0x80230610: nop
    
            goto L_80230634;
    }
    // 0x80230610: nop

    // 0x80230614: jal         0x80060590
    // 0x80230618: addiu       $a0, $zero, 0x220
    ctx->r4 = ADD32(0, 0X220);
    func_80060590_3B990(rdram, ctx);
        goto after_2;
    // 0x80230618: addiu       $a0, $zero, 0x220
    ctx->r4 = ADD32(0, 0X220);
    after_2:
    // 0x8023061C: jal         0x80060590
    // 0x80230620: addiu       $a0, $zero, 0x221
    ctx->r4 = ADD32(0, 0X221);
    func_80060590_3B990(rdram, ctx);
        goto after_3;
    // 0x80230620: addiu       $a0, $zero, 0x221
    ctx->r4 = ADD32(0, 0X221);
    after_3:
    // 0x80230624: jal         0x80060C1C
    // 0x80230628: addiu       $a0, $zero, 0x2E0
    ctx->r4 = ADD32(0, 0X2E0);
    func_80060C1C_3C01C(rdram, ctx);
        goto after_4;
    // 0x80230628: addiu       $a0, $zero, 0x2E0
    ctx->r4 = ADD32(0, 0X2E0);
    after_4:
    // 0x8023062C: j           L_80230688
    // 0x80230630: nop

        goto L_80230688;
    // 0x80230630: nop

L_80230634:
    // 0x80230634: jal         0x8006033C
    // 0x80230638: addiu       $a0, $zero, 0x220
    ctx->r4 = ADD32(0, 0X220);
    func_8006033C_3B73C(rdram, ctx);
        goto after_5;
    // 0x80230638: addiu       $a0, $zero, 0x220
    ctx->r4 = ADD32(0, 0X220);
    after_5:
    // 0x8023063C: bne         $v0, $zero, L_80230654
    if (ctx->r2 != 0) {
        // 0x80230640: nop
    
            goto L_80230654;
    }
    // 0x80230640: nop

    // 0x80230644: jal         0x8006033C
    // 0x80230648: addiu       $a0, $zero, 0x221
    ctx->r4 = ADD32(0, 0X221);
    func_8006033C_3B73C(rdram, ctx);
        goto after_6;
    // 0x80230648: addiu       $a0, $zero, 0x221
    ctx->r4 = ADD32(0, 0X221);
    after_6:
    // 0x8023064C: bne         $v0, $zero, L_80230680
    if (ctx->r2 != 0) {
        // 0x80230650: addiu       $a0, $zero, 0x220
        ctx->r4 = ADD32(0, 0X220);
            goto L_80230680;
    }
    // 0x80230650: addiu       $a0, $zero, 0x220
    ctx->r4 = ADD32(0, 0X220);
L_80230654:
    // 0x80230654: jal         0x8006033C
    // 0x80230658: addiu       $a0, $zero, 0x220
    ctx->r4 = ADD32(0, 0X220);
    func_8006033C_3B73C(rdram, ctx);
        goto after_7;
    // 0x80230658: addiu       $a0, $zero, 0x220
    ctx->r4 = ADD32(0, 0X220);
    after_7:
    // 0x8023065C: beq         $v0, $zero, L_80230680
    if (ctx->r2 == 0) {
        // 0x80230660: addiu       $a0, $zero, 0x220
        ctx->r4 = ADD32(0, 0X220);
            goto L_80230680;
    }
    // 0x80230660: addiu       $a0, $zero, 0x220
    ctx->r4 = ADD32(0, 0X220);
    // 0x80230664: jal         0x8006033C
    // 0x80230668: addiu       $a0, $zero, 0x221
    ctx->r4 = ADD32(0, 0X221);
    func_8006033C_3B73C(rdram, ctx);
        goto after_8;
    // 0x80230668: addiu       $a0, $zero, 0x221
    ctx->r4 = ADD32(0, 0X221);
    after_8:
    // 0x8023066C: bne         $v0, $zero, L_80230680
    if (ctx->r2 != 0) {
        // 0x80230670: addiu       $a0, $zero, 0x220
        ctx->r4 = ADD32(0, 0X220);
            goto L_80230680;
    }
    // 0x80230670: addiu       $a0, $zero, 0x220
    ctx->r4 = ADD32(0, 0X220);
    // 0x80230674: jal         0x80060590
    // 0x80230678: addiu       $a0, $zero, 0x220
    ctx->r4 = ADD32(0, 0X220);
    func_80060590_3B990(rdram, ctx);
        goto after_9;
    // 0x80230678: addiu       $a0, $zero, 0x220
    ctx->r4 = ADD32(0, 0X220);
    after_9:
    // 0x8023067C: addiu       $a0, $zero, 0x221
    ctx->r4 = ADD32(0, 0X221);
L_80230680:
    // 0x80230680: jal         0x8006036C
    // 0x80230684: nop

    func_8006036C_3B76C(rdram, ctx);
        goto after_10;
    // 0x80230684: nop

    after_10:
L_80230688:
    // 0x80230688: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023068C: jr          $ra
    // 0x80230690: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230690: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A7F0_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A7F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A7F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A7F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A7FC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022A800: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022A804: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A808: jal         0x8009A3B4
    // 0x8022A80C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022A80C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022A810: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022A814: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022A818: jal         0x8009A3B4
    // 0x8022A81C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022A81C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022A820: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022A824: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022A828: jal         0x8009A3B4
    // 0x8022A82C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022A82C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022A830: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022A834: addiu       $v1, $zero, 0x4210
    ctx->r3 = ADD32(0, 0X4210);
    // 0x8022A838: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x8022A83C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022A840: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022A844: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022A848: lw          $v0, 0x415C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X415C);
    // 0x8022A84C: jalr        $v0
    // 0x8022A850: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8022A850: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022A854: sw          $zero, 0x2F0($s0)
    MEM_W(0X2F0, ctx->r16) = 0;
    // 0x8022A858: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A85C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A860: jr          $ra
    // 0x8022A864: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A864: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226FC4_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226FC4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226FC8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226FCC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226FD0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80226FD4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80226FD8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226FDC: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80226FE0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80226FE4: lhu         $a2, 0x368($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X368);
    // 0x80226FE8: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80226FEC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80226FF0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226FF4: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x80226FF8: addiu       $v1, $v1, 0x3970
    ctx->r3 = ADD32(ctx->r3, 0X3970);
    // 0x80226FFC: jal         0x80229414
    // 0x80227000: addu        $s1, $v0, $v1
    ctx->r17 = ADD32(ctx->r2, ctx->r3);
    func_80229414_ovl18(rdram, ctx);
        goto after_0;
    // 0x80227000: addu        $s1, $v0, $v1
    ctx->r17 = ADD32(ctx->r2, ctx->r3);
    after_0:
    // 0x80227004: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80227008: beq         $v0, $zero, L_80227118
    if (ctx->r2 == 0) {
        // 0x8022700C: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_80227118;
    }
    // 0x8022700C: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x80227010: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80227014: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x80227018: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022701C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80227020: jal         0x8009A3B4
    // 0x80227024: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80227024: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_1:
    // 0x80227028: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022702C: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80227030: jal         0x8009A3B4
    // 0x80227034: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80227034: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x80227038: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022703C: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80227040: jal         0x8009A3B4
    // 0x80227044: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80227044: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x80227048: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022704C: addiu       $v1, $zero, 0x4210
    ctx->r3 = ADD32(0, 0X4210);
    // 0x80227050: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80227054: beq         $v0, $zero, L_80227064
    if (ctx->r2 == 0) {
        // 0x80227058: sh          $v1, 0x15E($s0)
        MEM_H(0X15E, ctx->r16) = ctx->r3;
            goto L_80227064;
    }
    // 0x80227058: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x8022705C: jal         0x8022927C
    // 0x80227060: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022927C_ovl18(rdram, ctx);
        goto after_4;
    // 0x80227060: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_80227064:
    // 0x80227064: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80227068: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022706C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227070: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227074: lw          $v0, 0x3ED8($at)
    ctx->r2 = MEM_W(ctx->r1, 0X3ED8);
    // 0x80227078: jalr        $v0
    // 0x8022707C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x8022707C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80227080: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80227084: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x80227088: bne         $v0, $zero, L_802270A4
    if (ctx->r2 != 0) {
        // 0x8022708C: nop
    
            goto L_802270A4;
    }
    // 0x8022708C: nop

    // 0x80227090: jal         0x8003E934
    // 0x80227094: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_6;
    // 0x80227094: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x80227098: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022709C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802270A0: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_802270A4:
    // 0x802270A4: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x802270A8: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x802270AC: beq         $v0, $a1, L_802270C4
    if (ctx->r2 == ctx->r5) {
        // 0x802270B0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802270C4;
    }
    // 0x802270B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802270B4: jal         0x80050294
    // 0x802270B8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_7;
    // 0x802270B8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x802270BC: j           L_802270CC
    // 0x802270C0: nop

        goto L_802270CC;
    // 0x802270C0: nop

L_802270C4:
    // 0x802270C4: jal         0x8005044C
    // 0x802270C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_8;
    // 0x802270C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
L_802270CC:
    // 0x802270CC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802270D0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x802270D4: beq         $v0, $zero, L_802270F0
    if (ctx->r2 == 0) {
        // 0x802270D8: nop
    
            goto L_802270F0;
    }
    // 0x802270D8: nop

    // 0x802270DC: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x802270E0: lw          $a2, 0x4($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X4);
    // 0x802270E4: lw          $a3, 0x8($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X8);
    // 0x802270E8: jal         0x8003B564
    // 0x802270EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_9;
    // 0x802270EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
L_802270F0:
    // 0x802270F0: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x802270F4: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x802270F8: beq         $v0, $zero, L_80227108
    if (ctx->r2 == 0) {
        // 0x802270FC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227108;
    }
    // 0x802270FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227100: j           L_8022710C
    // 0x80227104: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_8022710C;
    // 0x80227104: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_80227108:
    // 0x80227108: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
L_8022710C:
    // 0x8022710C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80227110: jal         0x80047284
    // 0x80227114: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_10;
    // 0x80227114: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_10:
L_80227118:
    // 0x80227118: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022711C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80227120: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227124: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227128: jr          $ra
    // 0x8022712C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022712C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80232724_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232724: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80232728: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8023272C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80232730: lh          $v0, 0x24($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X24);
    // 0x80232734: bgtz        $v0, L_8023274C
    if (SIGNED(ctx->r2) > 0) {
        // 0x80232738: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_8023274C;
    }
    // 0x80232738: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8023273C: jal         0x8004F5C4
    // 0x80232740: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x80232740: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    after_0:
    // 0x80232744: j           L_80232764
    // 0x80232748: nop

        goto L_80232764;
    // 0x80232748: nop

L_8023274C:
    // 0x8023274C: lhu         $v0, 0x26($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X26);
    // 0x80232750: lw          $v1, 0x18($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X18);
    // 0x80232754: addiu       $a0, $a0, -0x8
    ctx->r4 = ADD32(ctx->r4, -0X8);
    // 0x80232758: sh          $a0, 0x24($a1)
    MEM_H(0X24, ctx->r5) = ctx->r4;
    // 0x8023275C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80232760: sw          $v1, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r3;
L_80232764:
    // 0x80232764: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80232768: jr          $ra
    // 0x8023276C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023276C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023090C_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023090C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80230910: lw          $v0, 0x4B34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4B34);
    // 0x80230914: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230918: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023091C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230920: bne         $v0, $s0, L_80230938
    if (ctx->r2 != ctx->r16) {
        // 0x80230924: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80230938;
    }
    // 0x80230924: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80230928: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023092C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80230930: j           L_8023099C
    // 0x80230934: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
        goto L_8023099C;
    // 0x80230934: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_80230938:
    // 0x80230938: lw          $v1, 0x4C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4C);
    // 0x8023093C: lui         $v0, 0x2000
    ctx->r2 = S32(0X2000 << 16);
    // 0x80230940: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80230944: beq         $v0, $zero, L_80230984
    if (ctx->r2 == 0) {
        // 0x80230948: nop
    
            goto L_80230984;
    }
    // 0x80230948: nop

    // 0x8023094C: jal         0x80230FB4
    // 0x80230950: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80230FB4_ovl18(rdram, ctx);
        goto after_0;
    // 0x80230950: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80230954: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80230958: beq         $v0, $zero, L_80230968
    if (ctx->r2 == 0) {
        // 0x8023095C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80230968;
    }
    // 0x8023095C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80230960: j           L_8023099C
    // 0x80230964: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8023099C;
    // 0x80230964: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80230968:
    // 0x80230968: jal         0x80230CE4
    // 0x8023096C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80230CE4_ovl18(rdram, ctx);
        goto after_1;
    // 0x8023096C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80230970: addiu       $a0, $zero, 0x13D
    ctx->r4 = ADD32(0, 0X13D);
    // 0x80230974: jal         0x8002A33C
    // 0x80230978: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x80230978: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    after_2:
    // 0x8023097C: j           L_8023099C
    // 0x80230980: nop

        goto L_8023099C;
    // 0x80230980: nop

L_80230984:
    // 0x80230984: bgez        $v1, L_8023099C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80230988: nop
    
            goto L_8023099C;
    }
    // 0x80230988: nop

    // 0x8023098C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80230990: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80230994: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230998: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8023099C:
    // 0x8023099C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802309A0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802309A4: jr          $ra
    // 0x802309A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802309A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D37C_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D37C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022D380: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D384: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D388: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022D38C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022D390: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022D394: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022D398: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8022D39C: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8022D3A0: sltiu       $v0, $v1, 0x17
    ctx->r2 = ctx->r3 < 0X17 ? 1 : 0;
    // 0x8022D3A4: beq         $v0, $zero, L_8022D520
    if (ctx->r2 == 0) {
        // 0x8022D3A8: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_8022D520;
    }
    // 0x8022D3A8: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8022D3AC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022D3B0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022D3B4: addu        $at, $at, $v0
    gpr jr_addend_8022D3BC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D3B8: lw          $v0, 0x46C0($at)
    ctx->r2 = ADD32(ctx->r1, 0X46C0);
    // 0x8022D3BC: jr          $v0
    // 0x8022D3C0: nop

    switch (jr_addend_8022D3BC >> 2) {
        case 0: goto L_8022D3C4; break;
        case 1: goto L_8022D3F0; break;
        case 2: goto L_8022D430; break;
        case 3: goto L_8022D4D4; break;
        case 4: goto L_8022D474; break;
        case 5: goto L_8022D520; break;
        case 6: goto L_8022D520; break;
        case 7: goto L_8022D520; break;
        case 8: goto L_8022D520; break;
        case 9: goto L_8022D520; break;
        case 10: goto L_8022D520; break;
        case 11: goto L_8022D520; break;
        case 12: goto L_8022D520; break;
        case 13: goto L_8022D520; break;
        case 14: goto L_8022D520; break;
        case 15: goto L_8022D520; break;
        case 16: goto L_8022D520; break;
        case 17: goto L_8022D520; break;
        case 18: goto L_8022D520; break;
        case 19: goto L_8022D520; break;
        case 20: goto L_8022D4B8; break;
        case 21: goto L_8022D4D4; break;
        case 22: goto L_8022D4EC; break;
        default: switch_error(__func__, 0x8022D3BC, 0x802346C0);
    }
    // 0x8022D3C0: nop

L_8022D3C4:
    // 0x8022D3C4: lbu         $v1, 0xAC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022D3C8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022D3CC: beq         $v1, $v0, L_8022D3F0
    if (ctx->r3 == ctx->r2) {
        // 0x8022D3D0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022D3F0;
    }
    // 0x8022D3D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D3D4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022D3D8: jal         0x80050294
    // 0x8022D3DC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022D3DC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022D3E0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022D3E4: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8022D3E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D3EC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022D3F0:
    // 0x8022D3F0: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022D3F4: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x8022D3F8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022D3FC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022D400: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
    // 0x8022D404: bne         $v0, $zero, L_8022D520
    if (ctx->r2 != 0) {
        // 0x8022D408: nop
    
            goto L_8022D520;
    }
    // 0x8022D408: nop

    // 0x8022D40C: jal         0x8003516C
    // 0x8022D410: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_1;
    // 0x8022D410: nop

    after_1:
    // 0x8022D414: bne         $v0, $zero, L_8022D520
    if (ctx->r2 != 0) {
        // 0x8022D418: nop
    
            goto L_8022D520;
    }
    // 0x8022D418: nop

    // 0x8022D41C: lbu         $a1, 0xC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XC);
    // 0x8022D420: jal         0x800616FC
    // 0x8022D424: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_2;
    // 0x8022D424: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_2:
    // 0x8022D428: j           L_8022D4DC
    // 0x8022D42C: nop

        goto L_8022D4DC;
    // 0x8022D42C: nop

L_8022D430:
    // 0x8022D430: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022D434: lw          $a0, 0x3FF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3FF0);
    // 0x8022D438: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x8022D43C: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x8022D440: bne         $v0, $zero, L_8022D520
    if (ctx->r2 != 0) {
        // 0x8022D444: addiu       $v0, $zero, 0x12
        ctx->r2 = ADD32(0, 0X12);
            goto L_8022D520;
    }
    // 0x8022D444: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x8022D448: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022D44C: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x8022D450: bne         $v1, $v0, L_8022D4DC
    if (ctx->r3 != ctx->r2) {
        // 0x8022D454: nop
    
            goto L_8022D4DC;
    }
    // 0x8022D454: nop

    // 0x8022D458: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x8022D45C: bne         $v0, $zero, L_8022D4DC
    if (ctx->r2 != 0) {
        // 0x8022D460: andi        $v0, $a0, 0xFF
        ctx->r2 = ctx->r4 & 0XFF;
            goto L_8022D4DC;
    }
    // 0x8022D460: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x8022D464: bne         $v0, $zero, L_8022D4DC
    if (ctx->r2 != 0) {
        // 0x8022D468: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_8022D4DC;
    }
    // 0x8022D468: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8022D46C: j           L_8022D520
    // 0x8022D470: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022D520;
    // 0x8022D470: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022D474:
    // 0x8022D474: jal         0x8003516C
    // 0x8022D478: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_3;
    // 0x8022D478: nop

    after_3:
    // 0x8022D47C: bne         $v0, $zero, L_8022D520
    if (ctx->r2 != 0) {
        // 0x8022D480: nop
    
            goto L_8022D520;
    }
    // 0x8022D480: nop

    // 0x8022D484: lbu         $v0, 0xBD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XBD);
    // 0x8022D488: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x8022D48C: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x8022D490: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022D494: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
    // 0x8022D498: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
    // 0x8022D49C: lbu         $v1, 0xAC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022D4A0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022D4A4: beq         $v1, $v0, L_8022D520
    if (ctx->r3 == ctx->r2) {
        // 0x8022D4A8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022D520;
    }
    // 0x8022D4A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D4AC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022D4B0: j           L_8022D520
    // 0x8022D4B4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
        goto L_8022D520;
    // 0x8022D4B4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_8022D4B8:
    // 0x8022D4B8: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022D4BC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022D4C0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022D4C4: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8022D4C8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022D4CC: j           L_8022D520
    // 0x8022D4D0: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
        goto L_8022D520;
    // 0x8022D4D0: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
L_8022D4D4:
    // 0x8022D4D4: jal         0x80034E3C
    // 0x8022D4D8: nop

    func_80034E3C_1023C(rdram, ctx);
        goto after_4;
    // 0x8022D4D8: nop

    after_4:
L_8022D4DC:
    // 0x8022D4DC: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022D4E0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D4E4: j           L_8022D520
    // 0x8022D4E8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022D520;
    // 0x8022D4E8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022D4EC:
    // 0x8022D4EC: jal         0x8003516C
    // 0x8022D4F0: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_5;
    // 0x8022D4F0: nop

    after_5:
    // 0x8022D4F4: bne         $v0, $zero, L_8022D520
    if (ctx->r2 != 0) {
        // 0x8022D4F8: addiu       $a0, $zero, 0x238
        ctx->r4 = ADD32(0, 0X238);
            goto L_8022D520;
    }
    // 0x8022D4F8: addiu       $a0, $zero, 0x238
    ctx->r4 = ADD32(0, 0X238);
    // 0x8022D4FC: lbu         $v0, 0xBD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XBD);
    // 0x8022D500: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x8022D504: jal         0x8006036C
    // 0x8022D508: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_6;
    // 0x8022D508: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
    after_6:
    // 0x8022D50C: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022D510: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D514: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022D518: jal         0x8004F418
    // 0x8022D51C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_8004F418_2A818(rdram, ctx);
        goto after_7;
    // 0x8022D51C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_7:
L_8022D520:
    // 0x8022D520: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022D524: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022D528: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022D52C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D530: jr          $ra
    // 0x8022D534: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022D534: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022CD20_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CD20: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022CD24: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022CD28: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022CD2C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022CD30: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022CD34: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022CD38: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022CD3C: jal         0x8009A3B4
    // 0x8022CD40: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022CD40: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x8022CD44: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022CD48: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022CD4C: jal         0x8009A3B4
    // 0x8022CD50: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022CD50: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022CD54: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022CD58: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022CD5C: jal         0x8009A3B4
    // 0x8022CD60: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022CD60: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022CD64: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022CD68: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022CD6C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022CD70: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x8022CD74: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022CD78: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022CD7C: lw          $v0, 0x41D0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X41D0);
    // 0x8022CD80: jalr        $v0
    // 0x8022CD84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8022CD84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022CD88: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8022CD8C: beq         $v0, $zero, L_8022CDA4
    if (ctx->r2 == 0) {
        // 0x8022CD90: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022CDA4;
    }
    // 0x8022CD90: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022CD94: jal         0x8005044C
    // 0x8022CD98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_4;
    // 0x8022CD98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022CD9C: j           L_8022CDAC
    // 0x8022CDA0: nop

        goto L_8022CDAC;
    // 0x8022CDA0: nop

L_8022CDA4:
    // 0x8022CDA4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022CDA8: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_8022CDAC:
    // 0x8022CDAC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022CDB0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022CDB4: beq         $v0, $zero, L_8022CDCC
    if (ctx->r2 == 0) {
        // 0x8022CDB8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022CDCC;
    }
    // 0x8022CDB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CDBC: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x8022CDC0: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022CDC4: jal         0x8003B564
    // 0x8022CDC8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_5;
    // 0x8022CDC8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_5:
L_8022CDCC:
    // 0x8022CDCC: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022CDD0: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022CDD4: beq         $v1, $v0, L_8022CDF0
    if (ctx->r3 == ctx->r2) {
        // 0x8022CDD8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022CDF0;
    }
    // 0x8022CDD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CDDC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022CDE0: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8022CDE4: jal         0x80047284
    // 0x8022CDE8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_6;
    // 0x8022CDE8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_6:
    // 0x8022CDEC: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
L_8022CDF0:
    // 0x8022CDF0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CDF4: bnel        $v1, $v0, L_8022CE1C
    if (ctx->r3 != ctx->r2) {
        // 0x8022CDF8: sw          $zero, 0xC($s1)
        MEM_W(0XC, ctx->r17) = 0;
            goto L_8022CE1C;
    }
    goto skip_0;
    // 0x8022CDF8: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
    skip_0:
    // 0x8022CDFC: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8022CE00: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022CE04: jal         0x8009A3B4
    // 0x8022CE08: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x8022CE08: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_7:
    // 0x8022CE0C: lhu         $v0, 0x16($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X16);
    // 0x8022CE10: addiu       $v0, $v0, -0x1E
    ctx->r2 = ADD32(ctx->r2, -0X1E);
    // 0x8022CE14: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x8022CE18: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
L_8022CE1C:
    // 0x8022CE1C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022CE20: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022CE24: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022CE28: jr          $ra
    // 0x8022CE2C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022CE2C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022BD00_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BD00: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022BD04: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8022BD08: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022BD0C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022BD10: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8022BD14: addiu       $s2, $s0, 0x14
    ctx->r18 = ADD32(ctx->r16, 0X14);
    // 0x8022BD18: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022BD1C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022BD20: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8022BD24: jal         0x8009A3B4
    // 0x8022BD28: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022BD28: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    after_0:
    // 0x8022BD2C: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022BD30: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022BD34: jal         0x8009A3B4
    // 0x8022BD38: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022BD38: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022BD3C: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022BD40: addiu       $a1, $s0, 0x320
    ctx->r5 = ADD32(ctx->r16, 0X320);
    // 0x8022BD44: jal         0x8009A3B4
    // 0x8022BD48: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022BD48: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022BD4C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022BD50: addiu       $v1, $zero, 0x4210
    ctx->r3 = ADD32(0, 0X4210);
    // 0x8022BD54: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x8022BD58: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022BD5C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022BD60: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022BD64: lw          $v0, 0x4190($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4190);
    // 0x8022BD68: jalr        $v0
    // 0x8022BD6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8022BD6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022BD70: addiu       $a0, $s0, 0x310
    ctx->r4 = ADD32(ctx->r16, 0X310);
    // 0x8022BD74: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8022BD78: addiu       $a1, $a1, -0x3D98
    ctx->r5 = ADD32(ctx->r5, -0X3D98);
    // 0x8022BD7C: jal         0x8003BD00
    // 0x8022BD80: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_8003BD00_17100(rdram, ctx);
        goto after_4;
    // 0x8022BD80: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x8022BD84: jal         0x80051248
    // 0x8022BD88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051248_2C648(rdram, ctx);
        goto after_5;
    // 0x8022BD88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8022BD8C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022BD90: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022BD94: beq         $v0, $zero, L_8022BDB0
    if (ctx->r2 == 0) {
        // 0x8022BD98: addiu       $s1, $s0, 0x308
        ctx->r17 = ADD32(ctx->r16, 0X308);
            goto L_8022BDB0;
    }
    // 0x8022BD98: addiu       $s1, $s0, 0x308
    ctx->r17 = ADD32(ctx->r16, 0X308);
    // 0x8022BD9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BDA0: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x8022BDA4: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022BDA8: jal         0x8003B564
    // 0x8022BDAC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_6;
    // 0x8022BDAC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_6:
L_8022BDB0:
    // 0x8022BDB0: lbu         $v0, 0x36A($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X36A);
    // 0x8022BDB4: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8022BDB8: beql        $v0, $zero, L_8022BE4C
    if (ctx->r2 == 0) {
        // 0x8022BDBC: sw          $zero, 0x28($s1)
        MEM_W(0X28, ctx->r17) = 0;
            goto L_8022BE4C;
    }
    goto skip_0;
    // 0x8022BDBC: sw          $zero, 0x28($s1)
    MEM_W(0X28, ctx->r17) = 0;
    skip_0:
    // 0x8022BDC0: lw          $v1, 0x5C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X5C);
    // 0x8022BDC4: lw          $v0, 0x320($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X320);
    // 0x8022BDC8: beql        $v1, $v0, L_8022BDFC
    if (ctx->r3 == ctx->r2) {
        // 0x8022BDCC: sb          $zero, 0x370($s0)
        MEM_B(0X370, ctx->r16) = 0;
            goto L_8022BDFC;
    }
    goto skip_1;
    // 0x8022BDCC: sb          $zero, 0x370($s0)
    MEM_B(0X370, ctx->r16) = 0;
    skip_1:
    // 0x8022BDD0: lb          $v0, 0x370($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X370);
    // 0x8022BDD4: bne         $v0, $zero, L_8022BDF4
    if (ctx->r2 != 0) {
        // 0x8022BDD8: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022BDF4;
    }
    // 0x8022BDD8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022BDDC: addiu       $a0, $zero, 0x147
    ctx->r4 = ADD32(0, 0X147);
    // 0x8022BDE0: jal         0x8002A33C
    // 0x8022BDE4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_7;
    // 0x8022BDE4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_7:
    // 0x8022BDE8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022BDEC: j           L_8022BDFC
    // 0x8022BDF0: sb          $v0, 0x370($s0)
    MEM_B(0X370, ctx->r16) = ctx->r2;
        goto L_8022BDFC;
    // 0x8022BDF0: sb          $v0, 0x370($s0)
    MEM_B(0X370, ctx->r16) = ctx->r2;
L_8022BDF4:
    // 0x8022BDF4: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022BDF8: sb          $v0, 0x370($s0)
    MEM_B(0X370, ctx->r16) = ctx->r2;
L_8022BDFC:
    // 0x8022BDFC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022BE00: addiu       $a1, $s0, 0x190
    ctx->r5 = ADD32(ctx->r16, 0X190);
    // 0x8022BE04: jal         0x8009A3B4
    // 0x8022BE08: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x8022BE08: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
    // 0x8022BE0C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022BE10: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x8022BE14: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x8022BE18: addiu       $v0, $s1, 0x28
    ctx->r2 = ADD32(ctx->r17, 0X28);
    // 0x8022BE1C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022BE20: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022BE24: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8022BE28: lhu         $v1, 0x5C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X5C);
    // 0x8022BE2C: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022BE30: lui         $v0, 0x408
    ctx->r2 = S32(0X408 << 16);
    // 0x8022BE34: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8022BE38: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8022BE3C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022BE40: jal         0x80051E18
    // 0x8022BE44: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_9;
    // 0x8022BE44: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_9:
    // 0x8022BE48: sw          $zero, 0x28($s1)
    MEM_W(0X28, ctx->r17) = 0;
L_8022BE4C:
    // 0x8022BE4C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8022BE50: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x8022BE54: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8022BE58: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8022BE5C: jr          $ra
    // 0x8022BE60: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8022BE60: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80229378_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229378: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x8022937C: xori        $v0, $v0, 0x11
    ctx->r2 = ctx->r2 ^ 0X11;
    // 0x80229380: jr          $ra
    // 0x80229384: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    TRACE_RETURN()
    return;
    // 0x80229384: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
;}
RECOMP_FUNC void func_8022F89C_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F89C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022F8A0: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022F8A4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022F8A8: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8022F8AC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022F8B0: lbu         $v1, 0xB($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XB);
    // 0x8022F8B4: sltiu       $v0, $v1, 0x18
    ctx->r2 = ctx->r3 < 0X18 ? 1 : 0;
    // 0x8022F8B8: beq         $v0, $zero, L_8022F90C
    if (ctx->r2 == 0) {
        // 0x8022F8BC: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8022F90C;
    }
    // 0x8022F8BC: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022F8C0: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x8022F8C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F8C8: jal         0x8002C678
    // 0x8022F8CC: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    func_8002C678_7A78(rdram, ctx);
        goto after_0;
    // 0x8022F8CC: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    after_0:
    // 0x8022F8D0: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x8022F8D4: lui         $v1, 0x2AAA
    ctx->r3 = S32(0X2AAA << 16);
    // 0x8022F8D8: ori         $v1, $v1, 0xAAAB
    ctx->r3 = ctx->r3 | 0XAAAB;
    // 0x8022F8DC: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x8022F8E0: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022F8E4: lb          $a0, 0xC($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XC);
    // 0x8022F8E8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022F8EC: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    // 0x8022F8F0: mfhi        $a2
    ctx->r6 = hi;
    // 0x8022F8F4: sra         $v0, $a2, 2
    ctx->r2 = S32(SIGNED(ctx->r6) >> 2);
    // 0x8022F8F8: nop

    // 0x8022F8FC: jal         0x800319B4
    // 0x8022F900: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    func_800319B4_CDB4(rdram, ctx);
        goto after_1;
    // 0x8022F900: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    after_1:
    // 0x8022F904: j           L_8022F914
    // 0x8022F908: nop

        goto L_8022F914;
    // 0x8022F908: nop

L_8022F90C:
    // 0x8022F90C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F910: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_8022F914:
    // 0x8022F914: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8022F918: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022F91C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022F920: jr          $ra
    // 0x8022F924: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022F924: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022E424_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E424: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E428: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022E42C: jal         0x8022E5B0
    // 0x8022E430: nop

    func_8022E5B0_ovl18(rdram, ctx);
        goto after_0;
    // 0x8022E430: nop

    after_0:
    // 0x8022E434: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022E438: jr          $ra
    // 0x8022E43C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E43C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228F9C_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228F9C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80228FA0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228FA4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228FA8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80228FAC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80228FB0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228FB4: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x80228FB8: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80228FBC: jal         0x8004FA7C
    // 0x80228FC0: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80228FC0: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    after_0:
    // 0x80228FC4: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x80228FC8: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x80228FCC: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80228FD0: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x80228FD4: beq         $v0, $zero, L_80228FEC
    if (ctx->r2 == 0) {
        // 0x80228FD8: nop
    
            goto L_80228FEC;
    }
    // 0x80228FD8: nop

    // 0x80228FDC: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80228FE0: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80228FE4: beq         $v0, $zero, L_80229038
    if (ctx->r2 == 0) {
        // 0x80228FE8: nop
    
            goto L_80229038;
    }
    // 0x80228FE8: nop

L_80228FEC:
    // 0x80228FEC: jal         0x8003516C
    // 0x80228FF0: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_1;
    // 0x80228FF0: nop

    after_1:
    // 0x80228FF4: bne         $v0, $zero, L_80229038
    if (ctx->r2 != 0) {
        // 0x80228FF8: nop
    
            goto L_80229038;
    }
    // 0x80228FF8: nop

    // 0x80228FFC: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x80229000: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80229004: sb          $zero, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = 0;
    // 0x80229008: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022900C: sb          $zero, 0x49BA($at)
    MEM_B(0X49BA, ctx->r1) = 0;
    // 0x80229010: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80229014: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x80229018: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022901C: lbu         $v1, 0xD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XD);
    // 0x80229020: lbu         $a0, 0x34A($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X34A);
    // 0x80229024: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80229028: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x8022902C: sb          $a0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r4;
    // 0x80229030: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x80229034: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
L_80229038:
    // 0x80229038: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022903C: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80229040: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80229044: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80229048: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022904C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80229050: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229054: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229058: jr          $ra
    // 0x8022905C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022905C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225484_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225484: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225488: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022548C: jal         0x8006033C
    // 0x80225490: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80225490: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    after_0:
    // 0x80225494: bne         $v0, $zero, L_802254C0
    if (ctx->r2 != 0) {
        // 0x80225498: nop
    
            goto L_802254C0;
    }
    // 0x80225498: nop

    // 0x8022549C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802254A0: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x802254A4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802254A8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802254AC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802254B0: lw          $v0, 0x3170($at)
    ctx->r2 = MEM_W(ctx->r1, 0X3170);
    // 0x802254B4: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x802254B8: jalr        $v0
    // 0x802254BC: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x802254BC: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    after_1:
L_802254C0:
    // 0x802254C0: jal         0x8006033C
    // 0x802254C4: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x802254C4: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    after_2:
    // 0x802254C8: beq         $v0, $zero, L_80225508
    if (ctx->r2 == 0) {
        // 0x802254CC: nop
    
            goto L_80225508;
    }
    // 0x802254CC: nop

    // 0x802254D0: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802254D4: lb          $v1, -0x3BC6($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC6);
    // 0x802254D8: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802254DC: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x802254E0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802254E4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802254E8: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x802254EC: lw          $v1, 0x3130($at)
    ctx->r3 = MEM_W(ctx->r1, 0X3130);
    // 0x802254F0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802254F4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802254F8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x802254FC: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80225500: jalr        $v0
    // 0x80225504: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x80225504: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    after_3:
L_80225508:
    // 0x80225508: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022550C: jr          $ra
    // 0x80225510: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225510: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D72C_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D72C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022D730: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022D734: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022D738: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022D73C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8022D740: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022D744: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022D748: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D74C: lbu         $v1, 0x9($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X9);
    // 0x8022D750: lui         $s4, 0x8020
    ctx->r20 = S32(0X8020 << 16);
    // 0x8022D754: addiu       $s4, $s4, 0x49B0
    ctx->r20 = ADD32(ctx->r20, 0X49B0);
    // 0x8022D758: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8022D75C: beq         $v0, $zero, L_8022D8FC
    if (ctx->r2 == 0) {
        // 0x8022D760: addiu       $s3, $s2, 0x348
        ctx->r19 = ADD32(ctx->r18, 0X348);
            goto L_8022D8FC;
    }
    // 0x8022D760: addiu       $s3, $s2, 0x348
    ctx->r19 = ADD32(ctx->r18, 0X348);
    // 0x8022D764: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022D768: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022D76C: addu        $at, $at, $v0
    gpr jr_addend_8022D774 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D770: lw          $v0, 0x4720($at)
    ctx->r2 = ADD32(ctx->r1, 0X4720);
    // 0x8022D774: jr          $v0
    // 0x8022D778: nop

    switch (jr_addend_8022D774 >> 2) {
        case 0: goto L_8022D77C; break;
        case 1: goto L_8022D7A8; break;
        case 2: goto L_8022D7BC; break;
        case 3: goto L_8022D878; break;
        case 4: goto L_8022D89C; break;
        default: switch_error(__func__, 0x8022D774, 0x80234720);
    }
    // 0x8022D778: nop

L_8022D77C:
    // 0x8022D77C: jal         0x8006FF84
    // 0x8022D780: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x8022D780: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_0:
    // 0x8022D784: beq         $v0, $zero, L_8022D8FC
    if (ctx->r2 == 0) {
        // 0x8022D788: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022D8FC;
    }
    // 0x8022D788: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022D78C: sb          $v0, 0x8($s4)
    MEM_B(0X8, ctx->r20) = ctx->r2;
    // 0x8022D790: sb          $zero, 0x9($s4)
    MEM_B(0X9, ctx->r20) = 0;
    // 0x8022D794: sw          $zero, 0xC($s4)
    MEM_W(0XC, ctx->r20) = 0;
    // 0x8022D798: lbu         $v0, 0x9($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X9);
    // 0x8022D79C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D7A0: j           L_8022D8FC
    // 0x8022D7A4: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
        goto L_8022D8FC;
    // 0x8022D7A4: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
L_8022D7A8:
    // 0x8022D7A8: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8022D7AC: sb          $v0, 0x448($s4)
    MEM_B(0X448, ctx->r20) = ctx->r2;
    // 0x8022D7B0: lbu         $v0, 0x9($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X9);
    // 0x8022D7B4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D7B8: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
L_8022D7BC:
    // 0x8022D7BC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022D7C0: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8022D7C4: bne         $v0, $zero, L_8022D8FC
    if (ctx->r2 != 0) {
        // 0x8022D7C8: addiu       $s1, $s2, 0x14
        ctx->r17 = ADD32(ctx->r18, 0X14);
            goto L_8022D8FC;
    }
    // 0x8022D7C8: addiu       $s1, $s2, 0x14
    ctx->r17 = ADD32(ctx->r18, 0X14);
    // 0x8022D7CC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022D7D0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022D7D4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022D7D8: jal         0x800610AC
    // 0x8022D7DC: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_1;
    // 0x8022D7DC: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_1:
    // 0x8022D7E0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022D7E4: addiu       $a1, $s4, 0x14
    ctx->r5 = ADD32(ctx->r20, 0X14);
    // 0x8022D7E8: lbu         $v1, 0x0($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X0);
    // 0x8022D7EC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022D7F0: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022D7F4: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    // 0x8022D7F8: addiu       $v0, $zero, 0xA8C
    ctx->r2 = ADD32(0, 0XA8C);
    // 0x8022D7FC: sh          $v0, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r2;
    // 0x8022D800: addiu       $v0, $zero, 0xB4
    ctx->r2 = ADD32(0, 0XB4);
    // 0x8022D804: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022D808: sb          $v1, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r3;
    // 0x8022D80C: jal         0x8009A3B4
    // 0x8022D810: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022D810: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
    after_2:
    // 0x8022D814: addiu       $s0, $s2, 0x2C
    ctx->r16 = ADD32(ctx->r18, 0X2C);
    // 0x8022D818: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D81C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022D820: jal         0x8009A3B4
    // 0x8022D824: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022D824: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x8022D828: addiu       $a0, $s3, 0x24
    ctx->r4 = ADD32(ctx->r19, 0X24);
    // 0x8022D82C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022D830: jal         0x8009A3B4
    // 0x8022D834: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022D834: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x8022D838: addiu       $s0, $s2, 0x1C
    ctx->r16 = ADD32(ctx->r18, 0X1C);
    // 0x8022D83C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D840: addiu       $a1, $s4, 0x1C
    ctx->r5 = ADD32(ctx->r20, 0X1C);
    // 0x8022D844: jal         0x8009A3B4
    // 0x8022D848: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8022D848: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_5:
    // 0x8022D84C: addiu       $a0, $s2, 0x34
    ctx->r4 = ADD32(ctx->r18, 0X34);
    // 0x8022D850: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022D854: jal         0x8009A3B4
    // 0x8022D858: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8022D858: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_6:
    // 0x8022D85C: lbu         $v1, 0x9($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X9);
    // 0x8022D860: lhu         $v0, 0x16($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X16);
    // 0x8022D864: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022D868: addiu       $v0, $v0, -0x32
    ctx->r2 = ADD32(ctx->r2, -0X32);
    // 0x8022D86C: sh          $v0, 0x16($s2)
    MEM_H(0X16, ctx->r18) = ctx->r2;
    // 0x8022D870: j           L_8022D8FC
    // 0x8022D874: sb          $v1, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r3;
        goto L_8022D8FC;
    // 0x8022D874: sb          $v1, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r3;
L_8022D878:
    // 0x8022D878: lhu         $v0, 0x4($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X4);
    // 0x8022D87C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D880: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
    // 0x8022D884: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D888: bnel        $v0, $zero, L_8022D8A0
    if (ctx->r2 != 0) {
        // 0x8022D88C: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_8022D8A0;
    }
    goto skip_0;
    // 0x8022D88C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    skip_0:
    // 0x8022D890: lbu         $v0, 0x9($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X9);
    // 0x8022D894: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D898: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
L_8022D89C:
    // 0x8022D89C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_8022D8A0:
    // 0x8022D8A0: lh          $a1, 0x44($s2)
    ctx->r5 = MEM_H(ctx->r18, 0X44);
    // 0x8022D8A4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022D8A8: jal         0x8004DA90
    // 0x8022D8AC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_7;
    // 0x8022D8AC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_7:
    // 0x8022D8B0: jal         0x80040F30
    // 0x8022D8B4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_8;
    // 0x8022D8B4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_8:
    // 0x8022D8B8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022D8BC: jal         0x8022DA44
    // 0x8022D8C0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_8022DA44_ovl18(rdram, ctx);
        goto after_9;
    // 0x8022D8C0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_9:
    // 0x8022D8C4: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022D8C8: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x8022D8CC: bne         $v0, $zero, L_8022D8FC
    if (ctx->r2 != 0) {
        // 0x8022D8D0: nop
    
            goto L_8022D8FC;
    }
    // 0x8022D8D0: nop

    // 0x8022D8D4: jal         0x80070050
    // 0x8022D8D8: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_10;
    // 0x8022D8D8: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_10:
    // 0x8022D8DC: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x8022D8E0: addiu       $a0, $zero, 0x239
    ctx->r4 = ADD32(0, 0X239);
    // 0x8022D8E4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022D8E8: jal         0x8006036C
    // 0x8022D8EC: sb          $v0, 0x0($s4)
    MEM_B(0X0, ctx->r20) = ctx->r2;
    func_8006036C_3B76C(rdram, ctx);
        goto after_11;
    // 0x8022D8EC: sb          $v0, 0x0($s4)
    MEM_B(0X0, ctx->r20) = ctx->r2;
    after_11:
    // 0x8022D8F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D8F4: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x8022D8F8: sb          $zero, 0x9($s2)
    MEM_B(0X9, ctx->r18) = 0;
L_8022D8FC:
    // 0x8022D8FC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022D900: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8022D904: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022D908: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022D90C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022D910: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D914: jr          $ra
    // 0x8022D918: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022D918: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80231F9C_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231F9C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80231FA0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80231FA4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80231FA8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80231FAC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231FB0: lb          $v1, 0xF($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XF);
    // 0x80231FB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231FB8: bne         $v1, $v0, L_802320A0
    if (ctx->r3 != ctx->r2) {
        // 0x80231FBC: nop
    
            goto L_802320A0;
    }
    // 0x80231FBC: nop

    // 0x80231FC0: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x80231FC4: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80231FC8: bne         $v0, $zero, L_80232088
    if (ctx->r2 != 0) {
        // 0x80231FCC: nop
    
            goto L_80232088;
    }
    // 0x80231FCC: nop

    // 0x80231FD0: jal         0x8004F144
    // 0x80231FD4: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80231FD4: nop

    after_0:
    // 0x80231FD8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80231FDC: beq         $s0, $zero, L_80232088
    if (ctx->r16 == 0) {
        // 0x80231FE0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80232088;
    }
    // 0x80231FE0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80231FE4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80231FE8: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x80231FEC: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80231FF0: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80231FF4: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x80231FF8: lbu         $v1, 0xC($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XC);
    // 0x80231FFC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232000: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80232004: jal         0x800A3450
    // 0x80232008: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80232008: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
    after_1:
    // 0x8023200C: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80232010: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
    // 0x80232014: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80232018: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
    // 0x8023201C: lbu         $v0, 0xF($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XF);
    // 0x80232020: jal         0x800A3450
    // 0x80232024: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x80232024: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    after_2:
    // 0x80232028: lhu         $v1, 0x1C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1C);
    // 0x8023202C: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x80232030: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80232034: jal         0x800A3450
    // 0x80232038: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80232038: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    after_3:
    // 0x8023203C: lui         $a0, 0x3D48
    ctx->r4 = S32(0X3D48 << 16);
    // 0x80232040: lhu         $v1, 0x20($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X20);
    // 0x80232044: ori         $a0, $a0, 0x4E
    ctx->r4 = ctx->r4 | 0X4E;
    // 0x80232048: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x8023204C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80232050: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    // 0x80232054: lhu         $v1, 0x1E($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1E);
    // 0x80232058: lui         $v0, 0x2E40
    ctx->r2 = S32(0X2E40 << 16);
    // 0x8023205C: ori         $v0, $v0, 0x4040
    ctx->r2 = ctx->r2 | 0X4040;
    // 0x80232060: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x80232064: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80232068: sw          $a0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r4;
    // 0x8023206C: sb          $v0, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r2;
    // 0x80232070: sb          $zero, 0x23($s0)
    MEM_B(0X23, ctx->r16) = 0;
    // 0x80232074: jal         0x800A3450
    // 0x80232078: sh          $v1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x80232078: sh          $v1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r3;
    after_4:
    // 0x8023207C: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80232080: addiu       $v0, $v0, 0xDC
    ctx->r2 = ADD32(ctx->r2, 0XDC);
    // 0x80232084: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
L_80232088:
    // 0x80232088: jal         0x800A3450
    // 0x8023208C: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_5;
    // 0x8023208C: nop

    after_5:
    // 0x80232090: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80232094: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80232098: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023209C: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
L_802320A0:
    // 0x802320A0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802320A4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802320A8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802320AC: jr          $ra
    // 0x802320B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802320B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80227484_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227484: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227488: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022748C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227490: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227494: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80227498: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022749C: jal         0x8004DA90
    // 0x802274A0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x802274A0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x802274A4: lhu         $v0, 0x35E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X35E);
    // 0x802274A8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802274AC: sh          $v0, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r2;
    // 0x802274B0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802274B4: bne         $v0, $zero, L_802274EC
    if (ctx->r2 != 0) {
        // 0x802274B8: nop
    
            goto L_802274EC;
    }
    // 0x802274B8: nop

    // 0x802274BC: lh          $v0, 0x35C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35C);
    // 0x802274C0: beq         $v0, $zero, L_802274D4
    if (ctx->r2 == 0) {
        // 0x802274C4: nop
    
            goto L_802274D4;
    }
    // 0x802274C4: nop

    // 0x802274C8: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x802274CC: j           L_802274DC
    // 0x802274D0: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
        goto L_802274DC;
    // 0x802274D0: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
L_802274D4:
    // 0x802274D4: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x802274D8: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
L_802274DC:
    // 0x802274DC: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x802274E0: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x802274E4: j           L_8022753C
    // 0x802274E8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_8022753C;
    // 0x802274E8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_802274EC:
    // 0x802274EC: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x802274F0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802274F4: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x802274F8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802274FC: bne         $v0, $zero, L_8022750C
    if (ctx->r2 != 0) {
        // 0x80227500: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022750C;
    }
    // 0x80227500: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227504: j           L_8022753C
    // 0x80227508: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022753C;
    // 0x80227508: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022750C:
    // 0x8022750C: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80227510: jal         0x80229414
    // 0x80227514: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_80229414_ovl18(rdram, ctx);
        goto after_1;
    // 0x80227514: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_1:
    // 0x80227518: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022751C: beq         $v0, $zero, L_80227540
    if (ctx->r2 == 0) {
        // 0x80227520: nop
    
            goto L_80227540;
    }
    // 0x80227520: nop

    // 0x80227524: jal         0x80229378
    // 0x80227528: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_80229378_ovl18(rdram, ctx);
        goto after_2;
    // 0x80227528: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_2:
    // 0x8022752C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227530: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80227534: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80227538: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_8022753C:
    // 0x8022753C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227540:
    // 0x80227540: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227544: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227548: jr          $ra
    // 0x8022754C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022754C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802306E0_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802306E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802306E4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802306E8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x802306EC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802306F0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802306F4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802306F8: lw          $v0, 0x4440($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4440);
    // 0x802306FC: jalr        $v0
    // 0x80230700: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80230700: nop

    after_0:
    // 0x80230704: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80230708: jr          $ra
    // 0x8023070C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023070C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F5B4_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F5B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022F5B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F5BC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F5C0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022F5C4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022F5C8: jal         0x8004F144
    // 0x8022F5CC: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8022F5CC: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8022F5D0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022F5D4: beq         $a0, $zero, L_8022F680
    if (ctx->r4 == 0) {
        // 0x8022F5D8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022F680;
    }
    // 0x8022F5D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F5DC: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x8022F5E0: addiu       $v0, $zero, 0x85
    ctx->r2 = ADD32(0, 0X85);
    // 0x8022F5E4: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x8022F5E8: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x8022F5EC: sh          $v0, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r2;
    // 0x8022F5F0: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x8022F5F4: sh          $v0, 0x1E($a0)
    MEM_H(0X1E, ctx->r4) = ctx->r2;
    // 0x8022F5F8: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x8022F5FC: sh          $v0, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r2;
    // 0x8022F600: lhu         $v0, 0x44($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X44);
    // 0x8022F604: sh          $v0, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r2;
    // 0x8022F608: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x8022F60C: sh          $v0, 0x32($a0)
    MEM_H(0X32, ctx->r4) = ctx->r2;
    // 0x8022F610: lhu         $v0, 0x48($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X48);
    // 0x8022F614: sh          $v0, 0x34($a0)
    MEM_H(0X34, ctx->r4) = ctx->r2;
    // 0x8022F618: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022F61C: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022F620: bne         $v1, $v0, L_8022F638
    if (ctx->r3 != ctx->r2) {
        // 0x8022F624: addiu       $v0, $zero, 0x41
        ctx->r2 = ADD32(0, 0X41);
            goto L_8022F638;
    }
    // 0x8022F624: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x8022F628: lh          $v0, 0x64($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X64);
    // 0x8022F62C: addiu       $v1, $s1, 0x10
    ctx->r3 = ADD32(ctx->r17, 0X10);
    // 0x8022F630: j           L_8022F674
    // 0x8022F634: sb          $v1, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r3;
        goto L_8022F674;
    // 0x8022F634: sb          $v1, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r3;
L_8022F638:
    // 0x8022F638: bnel        $v1, $v0, L_8022F654
    if (ctx->r3 != ctx->r2) {
        // 0x8022F63C: addiu       $v0, $zero, 0x42
        ctx->r2 = ADD32(0, 0X42);
            goto L_8022F654;
    }
    goto skip_0;
    // 0x8022F63C: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
    skip_0:
    // 0x8022F640: lh          $v0, 0x64($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X64);
    // 0x8022F644: addiu       $v1, $s1, 0x10
    ctx->r3 = ADD32(ctx->r17, 0X10);
    // 0x8022F648: sb          $v1, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r3;
    // 0x8022F64C: j           L_8022F678
    // 0x8022F650: addiu       $v0, $v0, -0x400
    ctx->r2 = ADD32(ctx->r2, -0X400);
        goto L_8022F678;
    // 0x8022F650: addiu       $v0, $v0, -0x400
    ctx->r2 = ADD32(ctx->r2, -0X400);
L_8022F654:
    // 0x8022F654: bne         $v1, $v0, L_8022F66C
    if (ctx->r3 != ctx->r2) {
        // 0x8022F658: ori         $v0, $zero, 0xFFFF
        ctx->r2 = 0 | 0XFFFF;
            goto L_8022F66C;
    }
    // 0x8022F658: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x8022F65C: sw          $v0, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->r2;
    // 0x8022F660: addiu       $v0, $s1, 0x10
    ctx->r2 = ADD32(ctx->r17, 0X10);
    // 0x8022F664: j           L_8022F680
    // 0x8022F668: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
        goto L_8022F680;
    // 0x8022F668: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
L_8022F66C:
    // 0x8022F66C: lh          $v0, 0x64($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X64);
    // 0x8022F670: sb          $s1, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r17;
L_8022F674:
    // 0x8022F674: addiu       $v0, $v0, 0x400
    ctx->r2 = ADD32(ctx->r2, 0X400);
L_8022F678:
    // 0x8022F678: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022F67C: sw          $v0, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->r2;
L_8022F680:
    // 0x8022F680: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022F684: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022F688: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F68C: jr          $ra
    // 0x8022F690: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022F690: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8022F694: nop

    // 0x8022F698: nop

    // 0x8022F69C: nop

;}
RECOMP_FUNC void func_8022CBF8_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CBF8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022CBFC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022CC00: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022CC04: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022CC08: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022CC0C: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8022CC10: jal         0x8004DA90
    // 0x8022CC14: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022CC14: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x8022CC18: jal         0x8003E810
    // 0x8022CC1C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8003E810_19C10(rdram, ctx);
        goto after_1;
    // 0x8022CC1C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x8022CC20: beq         $v0, $zero, L_8022CC38
    if (ctx->r2 == 0) {
        // 0x8022CC24: nop
    
            goto L_8022CC38;
    }
    // 0x8022CC24: nop

    // 0x8022CC28: jal         0x8004F418
    // 0x8022CC2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_2;
    // 0x8022CC2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022CC30: j           L_8022CCC0
    // 0x8022CC34: nop

        goto L_8022CCC0;
    // 0x8022CC34: nop

L_8022CC38:
    // 0x8022CC38: jal         0x8003E934
    // 0x8022CC3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_3;
    // 0x8022CC3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022CC40: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8022CC44: lhu         $v1, -0x730C($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X730C);
    // 0x8022CC48: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8022CC4C: lh          $a3, 0x16($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X16);
    // 0x8022CC50: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x8022CC54: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022CC58: addiu       $v0, $a0, -0x64
    ctx->r2 = ADD32(ctx->r4, -0X64);
    // 0x8022CC5C: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x8022CC60: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8022CC64: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022CC68: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8022CC6C: lhu         $v1, 0x41C0($at)
    ctx->r3 = MEM_HU(ctx->r1, 0X41C0);
    // 0x8022CC70: slt         $v0, $v0, $a3
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x8022CC74: beq         $v0, $zero, L_8022CC94
    if (ctx->r2 == 0) {
        // 0x8022CC78: addu        $a2, $a3, $zero
        ctx->r6 = ADD32(ctx->r7, 0);
            goto L_8022CC94;
    }
    // 0x8022CC78: addu        $a2, $a3, $zero
    ctx->r6 = ADD32(ctx->r7, 0);
    // 0x8022CC7C: addiu       $v0, $v1, -0x64
    ctx->r2 = ADD32(ctx->r3, -0X64);
    // 0x8022CC80: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x8022CC84: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022CC88: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
    // 0x8022CC8C: j           L_8022CCC0
    // 0x8022CC90: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
        goto L_8022CCC0;
    // 0x8022CC90: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_8022CC94:
    // 0x8022CC94: addiu       $v0, $a0, -0x190
    ctx->r2 = ADD32(ctx->r4, -0X190);
    // 0x8022CC98: slt         $v0, $a3, $v0
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022CC9C: beq         $v0, $zero, L_8022CCB8
    if (ctx->r2 == 0) {
        // 0x8022CCA0: addiu       $v0, $v1, -0x190
        ctx->r2 = ADD32(ctx->r3, -0X190);
            goto L_8022CCB8;
    }
    // 0x8022CCA0: addiu       $v0, $v1, -0x190
    ctx->r2 = ADD32(ctx->r3, -0X190);
    // 0x8022CCA4: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x8022CCA8: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022CCAC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022CCB0: j           L_8022CCC0
    // 0x8022CCB4: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
        goto L_8022CCC0;
    // 0x8022CCB4: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_8022CCB8:
    // 0x8022CCB8: addu        $v0, $a2, $v1
    ctx->r2 = ADD32(ctx->r6, ctx->r3);
    // 0x8022CCBC: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
L_8022CCC0:
    // 0x8022CCC0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022CCC4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022CCC8: jr          $ra
    // 0x8022CCCC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022CCCC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80228454_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228454: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80228458: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022845C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228460: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80228464: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80228468: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022846C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228470: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80228474: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x80228478: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022847C: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80228480: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228484: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
    // 0x80228488: sh          $v1, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r3;
    // 0x8022848C: jal         0x80229378
    // 0x80228490: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    func_80229378_ovl18(rdram, ctx);
        goto after_0;
    // 0x80228490: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    after_0:
    // 0x80228494: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x80228498: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022849C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802284A0: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x802284A4: addiu       $s2, $s2, 0x49C4
    ctx->r18 = ADD32(ctx->r18, 0X49C4);
    // 0x802284A8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802284AC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x802284B0: jal         0x8004F820
    // 0x802284B4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x802284B4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_1:
    // 0x802284B8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802284BC: bgez        $v0, L_802284EC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802284C0: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_802284EC;
    }
    // 0x802284C0: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x802284C4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802284C8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802284CC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802284D0: jal         0x8004F820
    // 0x802284D4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x802284D4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x802284D8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802284DC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802284E0: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x802284E4: j           L_80228508
    // 0x802284E8: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_80228508;
    // 0x802284E8: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_802284EC:
    // 0x802284EC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802284F0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802284F4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802284F8: jal         0x8004F820
    // 0x802284FC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x802284FC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_3:
    // 0x80228500: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228504: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_80228508:
    // 0x80228508: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022850C: sh          $v0, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r2;
    // 0x80228510: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x80228514: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80228518: jal         0x800610AC
    // 0x8022851C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_4;
    // 0x8022851C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x80228520: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80228524: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80228528: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022852C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228530: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228534: jr          $ra
    // 0x80228538: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80228538: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022E928_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E928: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022E92C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022E930: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E934: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8022E938: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8022E93C: lbu         $a1, 0xF($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XF);
    // 0x8022E940: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x8022E944: andi        $v0, $a1, 0x1
    ctx->r2 = ctx->r5 & 0X1;
    // 0x8022E948: bne         $v0, $zero, L_8022E964
    if (ctx->r2 != 0) {
        // 0x8022E94C: sb          $v1, 0xB($s0)
        MEM_B(0XB, ctx->r16) = ctx->r3;
            goto L_8022E964;
    }
    // 0x8022E94C: sb          $v1, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r3;
    // 0x8022E950: lhu         $v0, 0x9A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X9A);
    // 0x8022E954: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8022E958: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8022E95C: j           L_8022EA08
    // 0x8022E960: sh          $v0, 0x9A($s0)
    MEM_H(0X9A, ctx->r16) = ctx->r2;
        goto L_8022EA08;
    // 0x8022E960: sh          $v0, 0x9A($s0)
    MEM_H(0X9A, ctx->r16) = ctx->r2;
L_8022E964:
    // 0x8022E964: lui         $a0, 0x2AAA
    ctx->r4 = S32(0X2AAA << 16);
    // 0x8022E968: ori         $a0, $a0, 0xAAAB
    ctx->r4 = ctx->r4 | 0XAAAB;
    // 0x8022E96C: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x8022E970: addiu       $v1, $zero, 0xF0
    ctx->r3 = ADD32(0, 0XF0);
    // 0x8022E974: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022E978: mult        $v1, $a0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022E97C: sra         $v0, $v1, 31
    ctx->r2 = S32(SIGNED(ctx->r3) >> 31);
    // 0x8022E980: mfhi        $t2
    ctx->r10 = hi;
    // 0x8022E984: subu        $a0, $t2, $v0
    ctx->r4 = SUB32(ctx->r10, ctx->r2);
    // 0x8022E988: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x8022E98C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022E990: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022E994: subu        $a0, $v1, $v0
    ctx->r4 = SUB32(ctx->r3, ctx->r2);
    // 0x8022E998: andi        $v0, $a1, 0x8
    ctx->r2 = ctx->r5 & 0X8;
    // 0x8022E99C: bne         $v0, $zero, L_8022E9C8
    if (ctx->r2 != 0) {
        // 0x8022E9A0: sll         $v0, $a0, 1
        ctx->r2 = S32(ctx->r4 << 1);
            goto L_8022E9C8;
    }
    // 0x8022E9A0: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x8022E9A4: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022E9A8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022E9AC: lbu         $v1, 0x4370($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4370);
    // 0x8022E9B0: sb          $v1, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r3;
    // 0x8022E9B4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022E9B8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E9BC: lbu         $v0, 0x4371($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X4371);
    // 0x8022E9C0: j           L_8022E9E8
    // 0x8022E9C4: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
        goto L_8022E9E8;
    // 0x8022E9C4: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_8022E9C8:
    // 0x8022E9C8: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022E9CC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022E9D0: lbu         $v1, 0x437C($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X437C);
    // 0x8022E9D4: sb          $v1, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r3;
    // 0x8022E9D8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022E9DC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E9E0: lbu         $v0, 0x437D($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X437D);
    // 0x8022E9E4: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_8022E9E8:
    // 0x8022E9E8: lui         $v0, 0x2C80
    ctx->r2 = S32(0X2C80 << 16);
    // 0x8022E9EC: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x8022E9F0: sw          $v0, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r2;
    // 0x8022E9F4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022E9F8: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x8022E9FC: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022EA00: jal         0x8003B6B8
    // 0x8022EA04: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B6B8_16AB8(rdram, ctx);
        goto after_0;
    // 0x8022EA04: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
L_8022EA08:
    // 0x8022EA08: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8022EA0C: beql        $v0, $zero, L_8022EAB4
    if (ctx->r2 == 0) {
        // 0x8022EA10: sb          $zero, 0x0($s0)
        MEM_B(0X0, ctx->r16) = 0;
            goto L_8022EAB4;
    }
    goto skip_0;
    // 0x8022EA10: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    skip_0:
    // 0x8022EA14: lh          $v0, 0x16($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X16);
    // 0x8022EA18: bgezl       $v0, L_8022EAB4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022EA1C: sb          $zero, 0x0($s0)
        MEM_B(0X0, ctx->r16) = 0;
            goto L_8022EAB4;
    }
    goto skip_1;
    // 0x8022EA1C: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    skip_1:
    // 0x8022EA20: lhu         $v0, 0x44($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X44);
    // 0x8022EA24: lhu         $v1, 0x4C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4C);
    // 0x8022EA28: lhu         $t0, 0x4E($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X4E);
    // 0x8022EA2C: lhu         $t1, 0x50($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X50);
    // 0x8022EA30: lw          $a3, 0x1C($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X1C);
    // 0x8022EA34: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022EA38: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022EA3C: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x8022EA40: lhu         $v1, 0x48($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X48);
    // 0x8022EA44: lh          $a2, 0x44($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X44);
    // 0x8022EA48: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x8022EA4C: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
    // 0x8022EA50: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8022EA54: lh          $v0, 0x46($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X46);
    // 0x8022EA58: sll         $a2, $a2, 8
    ctx->r6 = S32(ctx->r6 << 8);
    // 0x8022EA5C: addu        $a3, $a3, $a2
    ctx->r7 = ADD32(ctx->r7, ctx->r6);
    // 0x8022EA60: sh          $v1, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r3;
    // 0x8022EA64: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x8022EA68: lh          $a2, 0x48($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X48);
    // 0x8022EA6C: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022EA70: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022EA74: sw          $a3, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r7;
    // 0x8022EA78: lw          $a3, 0x24($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X24);
    // 0x8022EA7C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8022EA80: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022EA84: sll         $a2, $a2, 8
    ctx->r6 = S32(ctx->r6 << 8);
    // 0x8022EA88: addu        $a3, $a3, $a2
    ctx->r7 = ADD32(ctx->r7, ctx->r6);
    // 0x8022EA8C: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x8022EA90: jal         0x8004DD04
    // 0x8022EA94: sw          $a3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r7;
    func_8004DD04_29104(rdram, ctx);
        goto after_1;
    // 0x8022EA94: sw          $a3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r7;
    after_1:
    // 0x8022EA98: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x8022EA9C: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x8022EAA0: lhu         $a0, 0x18($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X18);
    // 0x8022EAA4: sh          $v0, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r2;
    // 0x8022EAA8: sh          $v1, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r3;
    // 0x8022EAAC: j           L_8022EABC
    // 0x8022EAB0: sh          $a0, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r4;
        goto L_8022EABC;
    // 0x8022EAB0: sh          $a0, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r4;
L_8022EAB4:
    // 0x8022EAB4: jal         0x8004F4F8
    // 0x8022EAB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_2;
    // 0x8022EAB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_8022EABC:
    // 0x8022EABC: lw          $v0, 0xC0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC0);
    // 0x8022EAC0: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x8022EAC4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022EAC8: beq         $v0, $zero, L_8022EAE4
    if (ctx->r2 == 0) {
        // 0x8022EACC: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022EAE4;
    }
    // 0x8022EACC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022EAD0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022EAD4: sw          $zero, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = 0;
    // 0x8022EAD8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022EADC: j           L_8022EB5C
    // 0x8022EAE0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8022EB5C;
    // 0x8022EAE0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022EAE4:
    // 0x8022EAE4: lhu         $a1, 0x98($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X98);
    // 0x8022EAE8: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x8022EAEC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022EAF0: addiu       $v0, $s0, 0xC0
    ctx->r2 = ADD32(ctx->r16, 0XC0);
    // 0x8022EAF4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022EAF8: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8022EAFC: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x8022EB00: ori         $a3, $zero, 0xA000
    ctx->r7 = 0 | 0XA000;
    // 0x8022EB04: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022EB08: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8022EB0C: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x8022EB10: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8022EB14: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022EB18: jal         0x80051E18
    // 0x8022EB1C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_3;
    // 0x8022EB1C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_3:
    // 0x8022EB20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022EB24: jal         0x8003F754
    // 0x8022EB28: sw          $zero, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = 0;
    func_8003F754_1AB54(rdram, ctx);
        goto after_4;
    // 0x8022EB28: sw          $zero, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = 0;
    after_4:
    // 0x8022EB2C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022EB30: beq         $a0, $zero, L_8022EB44
    if (ctx->r4 == 0) {
        // 0x8022EB34: nop
    
            goto L_8022EB44;
    }
    // 0x8022EB34: nop

    // 0x8022EB38: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022EB3C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022EB40: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022EB44:
    // 0x8022EB44: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8022EB48: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x8022EB4C: bne         $v0, $zero, L_8022EB5C
    if (ctx->r2 != 0) {
        // 0x8022EB50: nop
    
            goto L_8022EB5C;
    }
    // 0x8022EB50: nop

    // 0x8022EB54: jal         0x800711A8
    // 0x8022EB58: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    func_800711A8_4C5A8(rdram, ctx);
        goto after_5;
    // 0x8022EB58: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    after_5:
L_8022EB5C:
    // 0x8022EB5C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8022EB60: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022EB64: jr          $ra
    // 0x8022EB68: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022EB68: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8023002C_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023002C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80230030: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80230034: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80230038: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8023003C: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80230040: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80230044: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x80230048: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8023004C: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x80230050: sltiu       $v0, $v1, 0x2A
    ctx->r2 = ctx->r3 < 0X2A ? 1 : 0;
    // 0x80230054: beq         $v0, $zero, L_802304DC
    if (ctx->r2 == 0) {
        // 0x80230058: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_802304DC;
    }
    // 0x80230058: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8023005C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80230060: addu        $at, $at, $v0
    gpr jr_addend_80230068 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80230064: lw          $v0, 0x4790($at)
    ctx->r2 = ADD32(ctx->r1, 0X4790);
    // 0x80230068: jr          $v0
    // 0x8023006C: nop

    switch (jr_addend_80230068 >> 2) {
        case 0: goto L_80230070; break;
        case 1: goto L_80230098; break;
        case 2: goto L_802304DC; break;
        case 3: goto L_802304DC; break;
        case 4: goto L_802304DC; break;
        case 5: goto L_802304DC; break;
        case 6: goto L_802304DC; break;
        case 7: goto L_802304DC; break;
        case 8: goto L_802304DC; break;
        case 9: goto L_802304DC; break;
        case 10: goto L_802300F8; break;
        case 11: goto L_80230120; break;
        case 12: goto L_80230148; break;
        case 13: goto L_8023019C; break;
        case 14: goto L_802301B0; break;
        case 15: goto L_802301D8; break;
        case 16: goto L_8023020C; break;
        case 17: goto L_80230238; break;
        case 18: goto L_802304DC; break;
        case 19: goto L_802304DC; break;
        case 20: goto L_80230264; break;
        case 21: goto L_802302C0; break;
        case 22: goto L_80230350; break;
        case 23: goto L_802303A0; break;
        case 24: goto L_802303B0; break;
        case 25: goto L_802304DC; break;
        case 26: goto L_802304DC; break;
        case 27: goto L_802304DC; break;
        case 28: goto L_802304DC; break;
        case 29: goto L_802304DC; break;
        case 30: goto L_802303C4; break;
        case 31: goto L_80230454; break;
        case 32: goto L_802304DC; break;
        case 33: goto L_802304DC; break;
        case 34: goto L_802304DC; break;
        case 35: goto L_802304DC; break;
        case 36: goto L_802304DC; break;
        case 37: goto L_802304DC; break;
        case 38: goto L_802304DC; break;
        case 39: goto L_802304DC; break;
        case 40: goto L_8023046C; break;
        case 41: goto L_802304B8; break;
        default: switch_error(__func__, 0x80230068, 0x80234790);
    }
    // 0x8023006C: nop

L_80230070:
    // 0x80230070: lbu         $v0, 0xBD($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XBD);
    // 0x80230074: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80230078: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x8023007C: jal         0x80070E54
    // 0x80230080: sb          $v0, 0xBD($s2)
    MEM_B(0XBD, ctx->r18) = ctx->r2;
    func_80070E54_4C254(rdram, ctx);
        goto after_0;
    // 0x80230080: sb          $v0, 0xBD($s2)
    MEM_B(0XBD, ctx->r18) = ctx->r2;
    after_0:
    // 0x80230084: bne         $v0, $zero, L_802304DC
    if (ctx->r2 != 0) {
        // 0x80230088: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_802304DC;
    }
    // 0x80230088: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_8023008C:
    // 0x8023008C: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x80230090: j           L_802304A8
    // 0x80230094: sb          $zero, 0xA($s2)
    MEM_B(0XA, ctx->r18) = 0;
        goto L_802304A8;
    // 0x80230094: sb          $zero, 0xA($s2)
    MEM_B(0XA, ctx->r18) = 0;
L_80230098:
    // 0x80230098: lbu         $v0, 0xC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC);
    // 0x8023009C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x802300A0: beq         $v0, $zero, L_802300B0
    if (ctx->r2 == 0) {
        // 0x802300A4: addiu       $v0, $zero, 0x1E
        ctx->r2 = ADD32(0, 0X1E);
            goto L_802300B0;
    }
    // 0x802300A4: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x802300A8: j           L_802304DC
    // 0x802300AC: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_802304DC;
    // 0x802300AC: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_802300B0:
    // 0x802300B0: jal         0x800A3450
    // 0x802300B4: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x802300B4: nop

    after_1:
    // 0x802300B8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802300BC: beq         $v0, $zero, L_802300E8
    if (ctx->r2 == 0) {
        // 0x802300C0: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_802300E8;
    }
    // 0x802300C0: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x802300C4: lbu         $a0, 0xD($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XD);
    // 0x802300C8: jal         0x80230694
    // 0x802300CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80230694_ovl18(rdram, ctx);
        goto after_2;
    // 0x802300CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x802300D0: lbu         $v0, 0xC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC);
    // 0x802300D4: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
    // 0x802300D8: sb          $v1, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r3;
    // 0x802300DC: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802300E0: j           L_802304DC
    // 0x802300E4: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
        goto L_802304DC;
    // 0x802300E4: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
L_802300E8:
    // 0x802300E8: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
    // 0x802300EC: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x802300F0: j           L_802304DC
    // 0x802300F4: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_802304DC;
    // 0x802300F4: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_802300F8:
    // 0x802300F8: lb          $v0, 0xE($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XE);
    // 0x802300FC: bne         $v0, $zero, L_8023035C
    if (ctx->r2 != 0) {
        // 0x80230100: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8023035C;
    }
    // 0x80230100: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80230104: addiu       $a0, $zero, 0x13E
    ctx->r4 = ADD32(0, 0X13E);
    // 0x80230108: jal         0x8002A33C
    // 0x8023010C: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x8023010C: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    after_3:
    // 0x80230110: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80230114: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x80230118: j           L_802304AC
    // 0x8023011C: sb          $v1, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r3;
        goto L_802304AC;
    // 0x8023011C: sb          $v1, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r3;
L_80230120:
    // 0x80230120: lb          $v0, 0xE($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XE);
    // 0x80230124: bne         $v0, $zero, L_8023035C
    if (ctx->r2 != 0) {
        // 0x80230128: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8023035C;
    }
    // 0x80230128: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023012C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80230130: lw          $a1, 0x2B20($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2B20);
    // 0x80230134: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_80230138:
    // 0x80230138: jal         0x80061510
    // 0x8023013C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_4;
    // 0x8023013C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_4:
    // 0x80230140: j           L_802304A8
    // 0x80230144: nop

        goto L_802304A8;
    // 0x80230144: nop

L_80230148:
    // 0x80230148: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023014C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80230150: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80230154: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80230158: bne         $v0, $zero, L_802304DC
    if (ctx->r2 != 0) {
        // 0x8023015C: addiu       $a2, $zero, 0xFF
        ctx->r6 = ADD32(0, 0XFF);
            goto L_802304DC;
    }
    // 0x8023015C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x80230160: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80230164: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80230168: lw          $a1, 0x2B24($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2B24);
    // 0x8023016C: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80230170: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x80230174: jal         0x80061510
    // 0x80230178: sb          $zero, 0xA($s2)
    MEM_B(0XA, ctx->r18) = 0;
    func_80061510_3C910(rdram, ctx);
        goto after_5;
    // 0x80230178: sb          $zero, 0xA($s2)
    MEM_B(0XA, ctx->r18) = 0;
    after_5:
    // 0x8023017C: addiu       $a0, $zero, 0x13F
    ctx->r4 = ADD32(0, 0X13F);
    // 0x80230180: jal         0x8002A33C
    // 0x80230184: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_6;
    // 0x80230184: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    after_6:
    // 0x80230188: lh          $a0, 0xB0($s2)
    ctx->r4 = MEM_H(ctx->r18, 0XB0);
    // 0x8023018C: jal         0x80070F38
    // 0x80230190: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80070F38_4C338(rdram, ctx);
        goto after_7;
    // 0x80230190: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_7:
    // 0x80230194: j           L_802304A8
    // 0x80230198: nop

        goto L_802304A8;
    // 0x80230198: nop

L_8023019C:
    // 0x8023019C: lb          $v0, 0xA7($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XA7);
    // 0x802301A0: bltz        $v0, L_802304A8
    if (SIGNED(ctx->r2) < 0) {
        // 0x802301A4: nop
    
            goto L_802304A8;
    }
    // 0x802301A4: nop

    // 0x802301A8: j           L_802304DC
    // 0x802301AC: nop

        goto L_802304DC;
    // 0x802301AC: nop

L_802301B0:
    // 0x802301B0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802301B4: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x802301B8: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x802301BC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802301C0: bne         $v0, $zero, L_802304DC
    if (ctx->r2 != 0) {
        // 0x802301C4: nop
    
            goto L_802304DC;
    }
    // 0x802301C4: nop

    // 0x802301C8: jal         0x80060D38
    // 0x802301CC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80060D38_3C138(rdram, ctx);
        goto after_8;
    // 0x802301CC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_8:
    // 0x802301D0: j           L_802304A8
    // 0x802301D4: nop

        goto L_802304A8;
    // 0x802301D4: nop

L_802301D8:
    // 0x802301D8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802301DC: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x802301E0: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x802301E4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802301E8: bne         $v0, $zero, L_802304DC
    if (ctx->r2 != 0) {
        // 0x802301EC: nop
    
            goto L_802304DC;
    }
    // 0x802301EC: nop

    // 0x802301F0: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x802301F4: lw          $a1, 0x2B5C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2B5C);
    // 0x802301F8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802301FC: jal         0x80061510
    // 0x80230200: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_9;
    // 0x80230200: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_9:
    // 0x80230204: j           L_8023008C
    // 0x80230208: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
        goto L_8023008C;
    // 0x80230208: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
L_8023020C:
    // 0x8023020C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80230210: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80230214: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80230218: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8023021C: bne         $v0, $zero, L_802304DC
    if (ctx->r2 != 0) {
        // 0x80230220: nop
    
            goto L_802304DC;
    }
    // 0x80230220: nop

    // 0x80230224: lb          $v0, 0xA7($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XA7);
    // 0x80230228: bgez        $v0, L_802304DC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023022C: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_802304DC;
    }
    // 0x8023022C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80230230: j           L_8023008C
    // 0x80230234: nop

        goto L_8023008C;
    // 0x80230234: nop

L_80230238:
    // 0x80230238: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023023C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80230240: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80230244: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80230248: bne         $v0, $zero, L_802304DC
    if (ctx->r2 != 0) {
        // 0x8023024C: nop
    
            goto L_802304DC;
    }
    // 0x8023024C: nop

    // 0x80230250: lb          $v0, 0xA7($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XA7);
    // 0x80230254: bgez        $v0, L_802304DC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80230258: addiu       $v0, $zero, 0x28
        ctx->r2 = ADD32(0, 0X28);
            goto L_802304DC;
    }
    // 0x80230258: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x8023025C: j           L_80230464
    // 0x80230260: nop

        goto L_80230464;
    // 0x80230260: nop

L_80230264:
    // 0x80230264: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80230268: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023026C: addiu       $a1, $s1, 0x3
    ctx->r5 = ADD32(ctx->r17, 0X3);
    // 0x80230270: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80230274: jal         0x8004D5D4
    // 0x80230278: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_10;
    // 0x80230278: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    after_10:
    // 0x8023027C: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x80230280: jal         0x8002C654
    // 0x80230284: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_11;
    // 0x80230284: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_11:
    // 0x80230288: lbu         $a0, 0x3($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X3);
    // 0x8023028C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80230290: andi        $a0, $a0, 0x3
    ctx->r4 = ctx->r4 & 0X3;
    // 0x80230294: jal         0x800319B4
    // 0x80230298: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_12;
    // 0x80230298: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    after_12:
    // 0x8023029C: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x802302A0: addiu       $a0, $zero, 0xA4
    ctx->r4 = ADD32(0, 0XA4);
    // 0x802302A4: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    // 0x802302A8: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
    // 0x802302AC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802302B0: jal         0x8002A33C
    // 0x802302B4: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_13;
    // 0x802302B4: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    after_13:
    // 0x802302B8: j           L_802304DC
    // 0x802302BC: nop

        goto L_802304DC;
    // 0x802302BC: nop

L_802302C0:
    // 0x802302C0: jal         0x8004F144
    // 0x802302C4: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_14;
    // 0x802302C4: nop

    after_14:
    // 0x802302C8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x802302CC: beq         $s0, $zero, L_802304DC
    if (ctx->r16 == 0) {
        // 0x802302D0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802304DC;
    }
    // 0x802302D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802302D4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x802302D8: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x802302DC: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x802302E0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802302E4: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x802302E8: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x802302EC: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x802302F0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802302F4: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x802302F8: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x802302FC: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    // 0x80230300: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80230304: lhu         $v1, 0x38($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X38);
    // 0x80230308: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8023030C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80230310: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80230314: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80230318: lhu         $v0, 0x4428($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X4428);
    // 0x8023031C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80230320: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    // 0x80230324: lhu         $v0, 0x3A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3A);
    // 0x80230328: addiu       $v0, $v0, -0xC8
    ctx->r2 = ADD32(ctx->r2, -0XC8);
    // 0x8023032C: sh          $v0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r2;
    // 0x80230330: lhu         $v1, 0x3C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X3C);
    // 0x80230334: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80230338: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8023033C: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    // 0x80230340: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80230344: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80230348: j           L_802304AC
    // 0x8023034C: sb          $v1, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r3;
        goto L_802304AC;
    // 0x8023034C: sb          $v1, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r3;
L_80230350:
    // 0x80230350: lb          $v0, 0xE($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XE);
    // 0x80230354: beq         $v0, $zero, L_80230368
    if (ctx->r2 == 0) {
        // 0x80230358: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80230368;
    }
    // 0x80230358: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
L_8023035C:
    // 0x8023035C: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80230360: j           L_802304DC
    // 0x80230364: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
        goto L_802304DC;
    // 0x80230364: sb          $v0, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r2;
L_80230368:
    // 0x80230368: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x8023036C: sltiu       $v0, $v0, 0x8
    ctx->r2 = ctx->r2 < 0X8 ? 1 : 0;
    // 0x80230370: beq         $v0, $zero, L_80230394
    if (ctx->r2 == 0) {
        // 0x80230374: nop
    
            goto L_80230394;
    }
    // 0x80230374: nop

    // 0x80230378: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8023037C: lbu         $v1, 0xB($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XB);
    // 0x80230380: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80230384: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80230388: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8023038C: j           L_802304DC
    // 0x80230390: sb          $v1, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r3;
        goto L_802304DC;
    // 0x80230390: sb          $v1, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r3;
L_80230394:
    // 0x80230394: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80230398: j           L_802304AC
    // 0x8023039C: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
        goto L_802304AC;
    // 0x8023039C: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
L_802303A0:
    // 0x802303A0: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x802303A4: lw          $a1, 0x2B2C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2B2C);
    // 0x802303A8: j           L_80230138
    // 0x802303AC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
        goto L_80230138;
    // 0x802303AC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_802303B0:
    // 0x802303B0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802303B4: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x802303B8: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x802303BC: j           L_8023045C
    // 0x802303C0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
        goto L_8023045C;
    // 0x802303C0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
L_802303C4:
    // 0x802303C4: jal         0x8004F144
    // 0x802303C8: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_15;
    // 0x802303C8: nop

    after_15:
    // 0x802303CC: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x802303D0: beq         $s0, $zero, L_802304DC
    if (ctx->r16 == 0) {
        // 0x802303D4: addiu       $a1, $s1, 0x38
        ctx->r5 = ADD32(ctx->r17, 0X38);
            goto L_802304DC;
    }
    // 0x802303D4: addiu       $a1, $s1, 0x38
    ctx->r5 = ADD32(ctx->r17, 0X38);
    // 0x802303D8: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x802303DC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802303E0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802303E4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x802303E8: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802303EC: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x802303F0: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x802303F4: jal         0x8009A3B4
    // 0x802303F8: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_16;
    // 0x802303F8: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    after_16:
    // 0x802303FC: lhu         $v0, 0x3A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3A);
    // 0x80230400: addiu       $v0, $v0, -0x64
    ctx->r2 = ADD32(ctx->r2, -0X64);
    // 0x80230404: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    // 0x80230408: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8023040C: lbu         $v1, 0xC($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XC);
    // 0x80230410: sw          $s0, 0x44($s1)
    MEM_W(0X44, ctx->r17) = ctx->r16;
    // 0x80230414: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80230418: andi        $v1, $v1, 0x8
    ctx->r3 = ctx->r3 & 0X8;
    // 0x8023041C: bne         $v1, $zero, L_8023042C
    if (ctx->r3 != 0) {
        // 0x80230420: sb          $v0, 0x0($s1)
        MEM_B(0X0, ctx->r17) = ctx->r2;
            goto L_8023042C;
    }
    // 0x80230420: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80230424: jal         0x802305EC
    // 0x80230428: nop

    func_802305EC_ovl18(rdram, ctx);
        goto after_17;
    // 0x80230428: nop

    after_17:
L_8023042C:
    // 0x8023042C: jal         0x80060D38
    // 0x80230430: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80060D38_3C138(rdram, ctx);
        goto after_18;
    // 0x80230430: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_18:
    // 0x80230434: lbu         $v0, 0xC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC);
    // 0x80230438: lbu         $a0, 0xD($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XD);
    // 0x8023043C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80230440: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x80230444: jal         0x80230694
    // 0x80230448: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
    func_80230694_ovl18(rdram, ctx);
        goto after_19;
    // 0x80230448: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
    after_19:
    // 0x8023044C: j           L_802304A8
    // 0x80230450: nop

        goto L_802304A8;
    // 0x80230450: nop

L_80230454:
    // 0x80230454: lw          $s0, 0x44($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X44);
    // 0x80230458: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
L_8023045C:
    // 0x8023045C: bne         $v0, $zero, L_802304DC
    if (ctx->r2 != 0) {
        // 0x80230460: addiu       $v0, $zero, 0x28
        ctx->r2 = ADD32(0, 0X28);
            goto L_802304DC;
    }
    // 0x80230460: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
L_80230464:
    // 0x80230464: j           L_802304DC
    // 0x80230468: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_802304DC;
    // 0x80230468: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_8023046C:
    // 0x8023046C: jal         0x8003516C
    // 0x80230470: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_20;
    // 0x80230470: nop

    after_20:
    // 0x80230474: bne         $v0, $zero, L_802304DC
    if (ctx->r2 != 0) {
        // 0x80230478: nop
    
            goto L_802304DC;
    }
    // 0x80230478: nop

    // 0x8023047C: lbu         $v0, 0xC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC);
    // 0x80230480: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x80230484: bne         $v0, $zero, L_802304A8
    if (ctx->r2 != 0) {
        // 0x80230488: addiu       $v1, $zero, 0x10
        ctx->r3 = ADD32(0, 0X10);
            goto L_802304A8;
    }
    // 0x80230488: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x8023048C: lbu         $v0, 0xBD($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XBD);
    // 0x80230490: sb          $v1, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r3;
    // 0x80230494: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80230498: sb          $v1, 0xA($s2)
    MEM_B(0XA, ctx->r18) = ctx->r3;
    // 0x8023049C: sw          $zero, 0x184($s2)
    MEM_W(0X184, ctx->r18) = 0;
    // 0x802304A0: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x802304A4: sb          $v0, 0xBD($s2)
    MEM_B(0XBD, ctx->r18) = ctx->r2;
L_802304A8:
    // 0x802304A8: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
L_802304AC:
    // 0x802304AC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802304B0: j           L_802304DC
    // 0x802304B4: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_802304DC;
    // 0x802304B4: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_802304B8:
    // 0x802304B8: lbu         $v1, 0xC($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XC);
    // 0x802304BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802304C0: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x802304C4: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x802304C8: andi        $v1, $v1, 0x4
    ctx->r3 = ctx->r3 & 0X4;
    // 0x802304CC: beq         $v1, $zero, L_802304DC
    if (ctx->r3 == 0) {
        // 0x802304D0: sb          $zero, 0xA($s1)
        MEM_B(0XA, ctx->r17) = 0;
            goto L_802304DC;
    }
    // 0x802304D0: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    // 0x802304D4: jal         0x8004F684
    // 0x802304D8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F684_2AA84(rdram, ctx);
        goto after_21;
    // 0x802304D8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_21:
L_802304DC:
    // 0x802304DC: lbu         $v0, 0x9($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X9);
    // 0x802304E0: addiu       $v0, $v0, -0xB
    ctx->r2 = ADD32(ctx->r2, -0XB);
    // 0x802304E4: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x802304E8: beq         $v0, $zero, L_8023052C
    if (ctx->r2 == 0) {
        // 0x802304EC: nop
    
            goto L_8023052C;
    }
    // 0x802304EC: nop

    // 0x802304F0: jal         0x80061724
    // 0x802304F4: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_22;
    // 0x802304F4: nop

    after_22:
    // 0x802304F8: lbu         $v0, 0xBD($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XBD);
    // 0x802304FC: sw          $zero, 0x184($s2)
    MEM_W(0X184, ctx->r18) = 0;
    // 0x80230500: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x80230504: sb          $v0, 0xBD($s2)
    MEM_B(0XBD, ctx->r18) = ctx->r2;
    // 0x80230508: lbu         $v1, 0xC($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XC);
    // 0x8023050C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230510: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x80230514: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x80230518: andi        $v1, $v1, 0x4
    ctx->r3 = ctx->r3 & 0X4;
    // 0x8023051C: beq         $v1, $zero, L_8023052C
    if (ctx->r3 == 0) {
        // 0x80230520: sb          $zero, 0xA($s1)
        MEM_B(0XA, ctx->r17) = 0;
            goto L_8023052C;
    }
    // 0x80230520: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    // 0x80230524: jal         0x8004F684
    // 0x80230528: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F684_2AA84(rdram, ctx);
        goto after_23;
    // 0x80230528: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_23:
L_8023052C:
    // 0x8023052C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80230530: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80230534: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80230538: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8023053C: jr          $ra
    // 0x80230540: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80230540: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022E3D4_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E3D4: jr          $ra
    // 0x8022E3D8: nop

    TRACE_RETURN()
    return;
    // 0x8022E3D8: nop

;}
RECOMP_FUNC void func_8022AC94_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AC94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022AC98: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022AC9C: jal         0x8004F418
    // 0x8022ACA0: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8022ACA0: nop

    after_0:
    // 0x8022ACA4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022ACA8: jr          $ra
    // 0x8022ACAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022ACAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022EF74_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EF74: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022EF78: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8022EF7C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022EF80: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8022EF84: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022EF88: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022EF8C: lbu         $v1, 0x0($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X0);
    // 0x8022EF90: lbu         $a0, 0x6($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X6);
    // 0x8022EF94: lbu         $a1, 0x3($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X3);
    // 0x8022EF98: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022EF9C: addiu       $v0, $v0, 0x43B0
    ctx->r2 = ADD32(ctx->r2, 0X43B0);
    // 0x8022EFA0: sw          $zero, 0xC8($s2)
    MEM_W(0XC8, ctx->r18) = 0;
    // 0x8022EFA4: sw          $zero, 0xCC($s2)
    MEM_W(0XCC, ctx->r18) = 0;
    // 0x8022EFA8: sw          $v0, 0x78($s2)
    MEM_W(0X78, ctx->r18) = ctx->r2;
    // 0x8022EFAC: ori         $v1, $v1, 0x6
    ctx->r3 = ctx->r3 | 0X6;
    // 0x8022EFB0: ori         $a0, $a0, 0x20
    ctx->r4 = ctx->r4 | 0X20;
    // 0x8022EFB4: andi        $a1, $a1, 0x40
    ctx->r5 = ctx->r5 & 0X40;
    // 0x8022EFB8: sb          $v1, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r3;
    // 0x8022EFBC: beq         $a1, $zero, L_8022EFD0
    if (ctx->r5 == 0) {
        // 0x8022EFC0: sb          $a0, 0x6($s2)
        MEM_B(0X6, ctx->r18) = ctx->r4;
            goto L_8022EFD0;
    }
    // 0x8022EFC0: sb          $a0, 0x6($s2)
    MEM_B(0X6, ctx->r18) = ctx->r4;
    // 0x8022EFC4: lhu         $v0, 0x66($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X66);
    // 0x8022EFC8: j           L_8022EFE8
    // 0x8022EFCC: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
        goto L_8022EFE8;
    // 0x8022EFCC: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
L_8022EFD0:
    // 0x8022EFD0: lb          $a0, 0xD($s2)
    ctx->r4 = MEM_B(ctx->r18, 0XD);
    // 0x8022EFD4: jal         0x800530E8
    // 0x8022EFD8: nop

    func_800530E8_2E4E8(rdram, ctx);
        goto after_0;
    // 0x8022EFD8: nop

    after_0:
    // 0x8022EFDC: jal         0x80034B34
    // 0x8022EFE0: nop

    func_80034B34_FF34(rdram, ctx);
        goto after_1;
    // 0x8022EFE0: nop

    after_1:
    // 0x8022EFE4: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
L_8022EFE8:
    // 0x8022EFE8: lhu         $v0, 0x64($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X64);
    // 0x8022EFEC: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    // 0x8022EFF0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022EFF4: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x8022EFF8: lbu         $v0, 0x3($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X3);
    // 0x8022EFFC: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8022F000: beql        $v0, $zero, L_8022F03C
    if (ctx->r2 == 0) {
        // 0x8022F004: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022F03C;
    }
    goto skip_0;
    // 0x8022F004: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x8022F008: jal         0x800A3450
    // 0x8022F00C: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x8022F00C: nop

    after_2:
    // 0x8022F010: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022F014: lhu         $v1, 0x10($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X10);
    // 0x8022F018: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x8022F01C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022F020: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022F024: jal         0x800A3450
    // 0x8022F028: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x8022F028: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    after_3:
    // 0x8022F02C: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022F030: lhu         $v1, 0x12($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X12);
    // 0x8022F034: j           L_8022F0F8
    // 0x8022F038: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
        goto L_8022F0F8;
    // 0x8022F038: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
L_8022F03C:
    // 0x8022F03C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022F040: lb          $v1, 0x4EB8($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X4EB8);
    // 0x8022F044: beq         $v1, $v0, L_8022F094
    if (ctx->r3 == ctx->r2) {
        // 0x8022F048: nop
    
            goto L_8022F094;
    }
    // 0x8022F048: nop

    // 0x8022F04C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022F050: beq         $v0, $zero, L_8022F0C8
    if (ctx->r2 == 0) {
        // 0x8022F054: nop
    
            goto L_8022F0C8;
    }
    // 0x8022F054: nop

    // 0x8022F058: bne         $v1, $zero, L_8022F0C8
    if (ctx->r3 != 0) {
        // 0x8022F05C: nop
    
            goto L_8022F0C8;
    }
    // 0x8022F05C: nop

    // 0x8022F060: jal         0x800A3450
    // 0x8022F064: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x8022F064: nop

    after_4:
    // 0x8022F068: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8022F06C: lhu         $v1, 0x10($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X10);
    // 0x8022F070: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x8022F074: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022F078: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022F07C: jal         0x800A3450
    // 0x8022F080: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_5;
    // 0x8022F080: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    after_5:
    // 0x8022F084: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8022F088: lhu         $v1, 0x12($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X12);
    // 0x8022F08C: j           L_8022F0F8
    // 0x8022F090: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
        goto L_8022F0F8;
    // 0x8022F090: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
L_8022F094:
    // 0x8022F094: jal         0x800A3450
    // 0x8022F098: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_6;
    // 0x8022F098: nop

    after_6:
    // 0x8022F09C: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022F0A0: lhu         $v1, 0x10($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X10);
    // 0x8022F0A4: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x8022F0A8: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022F0AC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022F0B0: jal         0x800A3450
    // 0x8022F0B4: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_7;
    // 0x8022F0B4: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    after_7:
    // 0x8022F0B8: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022F0BC: lhu         $v1, 0x12($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X12);
    // 0x8022F0C0: j           L_8022F0F8
    // 0x8022F0C4: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
        goto L_8022F0F8;
    // 0x8022F0C4: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
L_8022F0C8:
    // 0x8022F0C8: jal         0x800A3450
    // 0x8022F0CC: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_8;
    // 0x8022F0CC: nop

    after_8:
    // 0x8022F0D0: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022F0D4: lhu         $v1, 0x10($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X10);
    // 0x8022F0D8: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x8022F0DC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022F0E0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022F0E4: jal         0x800A3450
    // 0x8022F0E8: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_9;
    // 0x8022F0E8: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    after_9:
    // 0x8022F0EC: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022F0F0: lhu         $v1, 0x12($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X12);
    // 0x8022F0F4: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
L_8022F0F8:
    // 0x8022F0F8: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022F0FC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022F100: sh          $v1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r3;
    // 0x8022F104: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022F108: addiu       $s0, $s2, 0x8C
    ctx->r16 = ADD32(ctx->r18, 0X8C);
    // 0x8022F10C: jal         0x80031600
    // 0x8022F110: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031600_CA00(rdram, ctx);
        goto after_10;
    // 0x8022F110: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_10:
    // 0x8022F114: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F118: addiu       $s1, $sp, 0x18
    ctx->r17 = ADD32(ctx->r29, 0X18);
    // 0x8022F11C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022F120: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x8022F124: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8022F128: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8022F12C: jal         0x80031DA8
    // 0x8022F130: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_11;
    // 0x8022F130: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_11:
    // 0x8022F134: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F138: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8022F13C: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x8022F140: addiu       $v0, $zero, -0x1000
    ctx->r2 = ADD32(0, -0X1000);
    // 0x8022F144: sh          $zero, 0x10($sp)
    MEM_H(0X10, ctx->r29) = 0;
    // 0x8022F148: sh          $zero, 0x12($sp)
    MEM_H(0X12, ctx->r29) = 0;
    // 0x8022F14C: jal         0x800308E8
    // 0x8022F150: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_800308E8_BCE8(rdram, ctx);
        goto after_12;
    // 0x8022F150: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_12:
    // 0x8022F154: lbu         $v0, 0x3($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X3);
    // 0x8022F158: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8022F15C: bne         $v0, $zero, L_8022F1B4
    if (ctx->r2 != 0) {
        // 0x8022F160: nop
    
            goto L_8022F1B4;
    }
    // 0x8022F160: nop

    // 0x8022F164: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022F168: lb          $v0, 0x4EB7($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4EB7);
    // 0x8022F16C: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x8022F170: bne         $v0, $zero, L_8022F1B4
    if (ctx->r2 != 0) {
        // 0x8022F174: nop
    
            goto L_8022F1B4;
    }
    // 0x8022F174: nop

    // 0x8022F178: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x8022F17C: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x8022F180: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022F184: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x8022F188: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    // 0x8022F18C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8022F190: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x8022F194: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022F198: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x8022F19C: sh          $v0, 0x46($s2)
    MEM_H(0X46, ctx->r18) = ctx->r2;
    // 0x8022F1A0: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x8022F1A4: sll         $v0, $v1, 4
    ctx->r2 = S32(ctx->r3 << 4);
    // 0x8022F1A8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022F1AC: j           L_8022F204
    // 0x8022F1B0: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
        goto L_8022F204;
    // 0x8022F1B0: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
L_8022F1B4:
    // 0x8022F1B4: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x8022F1B8: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8022F1BC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022F1C0: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022F1C4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022F1C8: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
    // 0x8022F1CC: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    // 0x8022F1D0: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8022F1D4: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8022F1D8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022F1DC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022F1E0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022F1E4: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
    // 0x8022F1E8: sh          $v0, 0x46($s2)
    MEM_H(0X46, ctx->r18) = ctx->r2;
    // 0x8022F1EC: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x8022F1F0: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8022F1F4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022F1F8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022F1FC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022F200: srl         $v0, $v0, 2
    ctx->r2 = S32(U32(ctx->r2) >> 2);
L_8022F204:
    // 0x8022F204: sh          $v0, 0x48($s2)
    MEM_H(0X48, ctx->r18) = ctx->r2;
    // 0x8022F208: lbu         $v0, 0x3($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X3);
    // 0x8022F20C: sh          $zero, 0x4C($s2)
    MEM_H(0X4C, ctx->r18) = 0;
    // 0x8022F210: sh          $zero, 0x4E($s2)
    MEM_H(0X4E, ctx->r18) = 0;
    // 0x8022F214: sh          $zero, 0x50($s2)
    MEM_H(0X50, ctx->r18) = 0;
    // 0x8022F218: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8022F21C: beq         $v0, $zero, L_8022F278
    if (ctx->r2 == 0) {
        // 0x8022F220: sh          $zero, 0x7C($s2)
        MEM_H(0X7C, ctx->r18) = 0;
            goto L_8022F278;
    }
    // 0x8022F220: sh          $zero, 0x7C($s2)
    MEM_H(0X7C, ctx->r18) = 0;
    // 0x8022F224: lh          $v1, 0x44($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X44);
    // 0x8022F228: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x8022F22C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022F230: lw          $v1, 0x1C($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X1C);
    // 0x8022F234: lh          $a0, 0x46($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X46);
    // 0x8022F238: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x8022F23C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022F240: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    // 0x8022F244: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022F248: sw          $v1, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r3;
    // 0x8022F24C: lw          $v1, 0x20($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X20);
    // 0x8022F250: lh          $a0, 0x48($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X48);
    // 0x8022F254: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x8022F258: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022F25C: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    // 0x8022F260: sw          $v1, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r3;
    // 0x8022F264: lw          $v1, 0x24($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X24);
    // 0x8022F268: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022F26C: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x8022F270: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022F274: sw          $v1, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r3;
L_8022F278:
    // 0x8022F278: addiu       $a0, $s2, 0x34
    ctx->r4 = ADD32(ctx->r18, 0X34);
    // 0x8022F27C: lhu         $v0, 0x1C($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X1C);
    // 0x8022F280: lhu         $v1, 0x20($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X20);
    // 0x8022F284: lhu         $a3, 0x24($s2)
    ctx->r7 = MEM_HU(ctx->r18, 0X24);
    // 0x8022F288: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    // 0x8022F28C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x8022F290: sh          $v0, 0x14($s2)
    MEM_H(0X14, ctx->r18) = ctx->r2;
    // 0x8022F294: sh          $v0, 0xAC($s2)
    MEM_H(0XAC, ctx->r18) = ctx->r2;
    // 0x8022F298: sh          $v1, 0x16($s2)
    MEM_H(0X16, ctx->r18) = ctx->r3;
    // 0x8022F29C: sh          $v1, 0xAE($s2)
    MEM_H(0XAE, ctx->r18) = ctx->r3;
    // 0x8022F2A0: sh          $a3, 0x18($s2)
    MEM_H(0X18, ctx->r18) = ctx->r7;
    // 0x8022F2A4: jal         0x8009A3B4
    // 0x8022F2A8: sh          $a3, 0xB0($s2)
    MEM_H(0XB0, ctx->r18) = ctx->r7;
    memcpy_recomp(rdram, ctx);
        goto after_13;
    // 0x8022F2A8: sh          $a3, 0xB0($s2)
    MEM_H(0XB0, ctx->r18) = ctx->r7;
    after_13:
    // 0x8022F2AC: addiu       $a0, $s2, 0x2C
    ctx->r4 = ADD32(ctx->r18, 0X2C);
    // 0x8022F2B0: addiu       $s0, $s2, 0x14
    ctx->r16 = ADD32(ctx->r18, 0X14);
    // 0x8022F2B4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022F2B8: jal         0x8009A3B4
    // 0x8022F2BC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_14;
    // 0x8022F2BC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_14:
    // 0x8022F2C0: lui         $v0, 0x280
    ctx->r2 = S32(0X280 << 16);
    // 0x8022F2C4: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x8022F2C8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022F2CC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022F2D0: sw          $v0, 0xB4($s2)
    MEM_W(0XB4, ctx->r18) = ctx->r2;
    // 0x8022F2D4: addiu       $v0, $zero, 0x82
    ctx->r2 = ADD32(0, 0X82);
    // 0x8022F2D8: jal         0x8004D5D4
    // 0x8022F2DC: sb          $v0, 0x2($s2)
    MEM_B(0X2, ctx->r18) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_15;
    // 0x8022F2DC: sb          $v0, 0x2($s2)
    MEM_B(0X2, ctx->r18) = ctx->r2;
    after_15:
    // 0x8022F2E0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022F2E4: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x8022F2E8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8022F2EC: addiu       $v0, $zero, 0x2E
    ctx->r2 = ADD32(0, 0X2E);
    // 0x8022F2F0: jal         0x800710B8
    // 0x8022F2F4: sb          $v0, 0x2($s2)
    MEM_B(0X2, ctx->r18) = ctx->r2;
    func_800710B8_4C4B8(rdram, ctx);
        goto after_16;
    // 0x8022F2F4: sb          $v0, 0x2($s2)
    MEM_B(0X2, ctx->r18) = ctx->r2;
    after_16:
    // 0x8022F2F8: lbu         $v1, 0x8($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X8);
    // 0x8022F2FC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022F300: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022F304: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
    // 0x8022F308: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022F30C: jal         0x8022F5B4
    // 0x8022F310: sb          $v1, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r3;
    func_8022F5B4_ovl18(rdram, ctx);
        goto after_17;
    // 0x8022F310: sb          $v1, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r3;
    after_17:
    // 0x8022F314: jal         0x8022F480
    // 0x8022F318: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8022F480_ovl18(rdram, ctx);
        goto after_18;
    // 0x8022F318: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_18:
    // 0x8022F31C: addiu       $a0, $zero, 0x120
    ctx->r4 = ADD32(0, 0X120);
    // 0x8022F320: jal         0x8002A33C
    // 0x8022F324: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_19;
    // 0x8022F324: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_19:
    // 0x8022F328: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8022F32C: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8022F330: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022F334: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022F338: jr          $ra
    // 0x8022F33C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022F33C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_802318A0_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802318A0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802318A4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x802318A8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802318AC: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x802318B0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802318B4: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x802318B8: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x802318BC: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x802318C0: sltiu       $v0, $v1, 0xB
    ctx->r2 = ctx->r3 < 0XB ? 1 : 0;
    // 0x802318C4: beq         $v0, $zero, L_80231AB8
    if (ctx->r2 == 0) {
        // 0x802318C8: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80231AB8;
    }
    // 0x802318C8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802318CC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802318D0: addu        $at, $at, $v0
    gpr jr_addend_802318D8 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802318D4: lw          $v0, 0x4850($at)
    ctx->r2 = ADD32(ctx->r1, 0X4850);
    // 0x802318D8: jr          $v0
    // 0x802318DC: nop

    switch (jr_addend_802318D8 >> 2) {
        case 0: goto L_802318E0; break;
        case 1: goto L_80231900; break;
        case 2: goto L_80231914; break;
        case 3: goto L_8023194C; break;
        case 4: goto L_802319BC; break;
        case 5: goto L_80231A6C; break;
        case 6: goto L_80231AB8; break;
        case 7: goto L_80231AB8; break;
        case 8: goto L_80231AB8; break;
        case 9: goto L_80231AB8; break;
        case 10: goto L_80231A80; break;
        default: switch_error(__func__, 0x802318D8, 0x80234850);
    }
    // 0x802318DC: nop

L_802318E0:
    // 0x802318E0: jal         0x8006FF84
    // 0x802318E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x802318E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x802318E8: beq         $v0, $zero, L_80231AB8
    if (ctx->r2 == 0) {
        // 0x802318EC: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80231AB8;
    }
    // 0x802318EC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802318F0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802318F4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x802318F8: j           L_802319AC
    // 0x802318FC: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
        goto L_802319AC;
    // 0x802318FC: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
L_80231900:
    // 0x80231900: addiu       $v0, $zero, 0x34
    ctx->r2 = ADD32(0, 0X34);
    // 0x80231904: sb          $v0, 0x448($s0)
    MEM_B(0X448, ctx->r16) = ctx->r2;
    // 0x80231908: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x8023190C: j           L_802319B0
    // 0x80231910: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
        goto L_802319B0;
    // 0x80231910: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
L_80231914:
    // 0x80231914: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x80231918: sltiu       $v0, $v1, 0x11
    ctx->r2 = ctx->r3 < 0X11 ? 1 : 0;
    // 0x8023191C: bne         $v0, $zero, L_80231944
    if (ctx->r2 != 0) {
        // 0x80231920: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80231944;
    }
    // 0x80231920: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80231924: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80231928: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x8023192C: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    // 0x80231930: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80231934: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80231938: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8023193C: j           L_80231AB8
    // 0x80231940: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
        goto L_80231AB8;
    // 0x80231940: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
L_80231944:
    // 0x80231944: j           L_80231AB8
    // 0x80231948: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_80231AB8;
    // 0x80231948: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_8023194C:
    // 0x8023194C: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x80231950: bgez        $v0, L_80231AB8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80231954: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_80231AB8;
    }
    // 0x80231954: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80231958: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8023195C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80231960: lui         $a2, 0x8023
    ctx->r6 = S32(0X8023 << 16);
    // 0x80231964: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x80231968: lw          $a2, 0x4548($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X4548);
    // 0x8023196C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80231970: jal         0x80069754
    // 0x80231974: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80069754_44B54(rdram, ctx);
        goto after_1;
    // 0x80231974: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x80231978: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8023197C: bne         $v0, $zero, L_802319AC
    if (ctx->r2 != 0) {
        // 0x80231980: nop
    
            goto L_802319AC;
    }
    // 0x80231980: nop

    // 0x80231984: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80231988: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8023198C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80231990: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x80231994: sh          $v0, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r2;
    // 0x80231998: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x8023199C: addiu       $v0, $v0, -0xC8
    ctx->r2 = ADD32(ctx->r2, -0XC8);
    // 0x802319A0: sh          $v0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r2;
    // 0x802319A4: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x802319A8: sh          $v0, 0x3C($s1)
    MEM_H(0X3C, ctx->r17) = ctx->r2;
L_802319AC:
    // 0x802319AC: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
L_802319B0:
    // 0x802319B0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802319B4: j           L_80231AB8
    // 0x802319B8: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
        goto L_80231AB8;
    // 0x802319B8: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_802319BC:
    // 0x802319BC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802319C0: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x802319C4: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x802319C8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802319CC: beq         $v0, $zero, L_80231A3C
    if (ctx->r2 == 0) {
        // 0x802319D0: nop
    
            goto L_80231A3C;
    }
    // 0x802319D0: nop

    // 0x802319D4: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x802319D8: bne         $v0, $zero, L_80231A2C
    if (ctx->r2 != 0) {
        // 0x802319DC: addiu       $s0, $s1, 0x18
        ctx->r16 = ADD32(ctx->r17, 0X18);
            goto L_80231A2C;
    }
    // 0x802319DC: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x802319E0: jal         0x8002C654
    // 0x802319E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_2;
    // 0x802319E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x802319E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802319EC: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x802319F0: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x802319F4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x802319F8: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x802319FC: jal         0x80031DA8
    // 0x80231A00: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_3;
    // 0x80231A00: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_3:
    // 0x80231A04: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80231A08: jal         0x80031BB4
    // 0x80231A0C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031BB4_CFB4(rdram, ctx);
        goto after_4;
    // 0x80231A0C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80231A10: lbu         $a0, 0xA($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XA);
    // 0x80231A14: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80231A18: jal         0x800319B4
    // 0x80231A1C: sll         $a0, $a0, 4
    ctx->r4 = S32(ctx->r4 << 4);
    func_800319B4_CDB4(rdram, ctx);
        goto after_5;
    // 0x80231A1C: sll         $a0, $a0, 4
    ctx->r4 = S32(ctx->r4 << 4);
    after_5:
    // 0x80231A20: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80231A24: jal         0x800317C0
    // 0x80231A28: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_800317C0_CBC0(rdram, ctx);
        goto after_6;
    // 0x80231A28: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_6:
L_80231A2C:
    // 0x80231A2C: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80231A30: addiu       $v0, $v0, 0xA
    ctx->r2 = ADD32(ctx->r2, 0XA);
    // 0x80231A34: j           L_80231AB8
    // 0x80231A38: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_80231AB8;
    // 0x80231A38: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_80231A3C:
    // 0x80231A3C: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80231A40: bnel        $v0, $zero, L_80231A58
    if (ctx->r2 != 0) {
        // 0x80231A44: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_80231A58;
    }
    goto skip_0;
    // 0x80231A44: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    skip_0:
    // 0x80231A48: addiu       $v0, $zero, 0x35
    ctx->r2 = ADD32(0, 0X35);
    // 0x80231A4C: sb          $v0, 0x448($s0)
    MEM_B(0X448, ctx->r16) = ctx->r2;
    // 0x80231A50: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x80231A54: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80231A58:
    // 0x80231A58: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x80231A5C: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80231A60: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80231A64: j           L_80231AB8
    // 0x80231A68: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
        goto L_80231AB8;
    // 0x80231A68: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
L_80231A6C:
    // 0x80231A6C: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x80231A70: bgez        $v0, L_80231AB8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80231A74: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_80231AB8;
    }
    // 0x80231A74: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80231A78: j           L_80231AB8
    // 0x80231A7C: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
        goto L_80231AB8;
    // 0x80231A7C: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_80231A80:
    // 0x80231A80: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80231A84: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80231A88: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80231A8C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80231A90: jal         0x8006036C
    // 0x80231A94: lw          $a0, 0x4508($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4508);
    func_8006036C_3B76C(rdram, ctx);
        goto after_7;
    // 0x80231A94: lw          $a0, 0x4508($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4508);
    after_7:
    // 0x80231A98: jal         0x80070050
    // 0x80231A9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_8;
    // 0x80231A9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x80231AA0: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80231AA4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80231AA8: sw          $zero, 0x184($s0)
    MEM_W(0X184, ctx->r16) = 0;
    // 0x80231AAC: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80231AB0: jal         0x8004F684
    // 0x80231AB4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004F684_2AA84(rdram, ctx);
        goto after_9;
    // 0x80231AB4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_9:
L_80231AB8:
    // 0x80231AB8: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80231ABC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80231AC0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80231AC4: jr          $ra
    // 0x80231AC8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80231AC8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_802291E8_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802291E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802291EC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802291F0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802291F4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802291F8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802291FC: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x80229200: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80229204: jal         0x8004FA7C
    // 0x80229208: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80229208: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    after_0:
    // 0x8022920C: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x80229210: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80229214: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x80229218: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8022921C: srl         $v1, $v1, 31
    ctx->r3 = S32(U32(ctx->r3) >> 31);
    // 0x80229220: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80229224: beq         $v1, $zero, L_80229258
    if (ctx->r3 == 0) {
        // 0x80229228: nop
    
            goto L_80229258;
    }
    // 0x80229228: nop

    // 0x8022922C: jal         0x80229378
    // 0x80229230: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_80229378_ovl18(rdram, ctx);
        goto after_1;
    // 0x80229230: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_1:
    // 0x80229234: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x80229238: lhu         $a0, 0x348($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X348);
    // 0x8022923C: lbu         $a1, 0xD($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XD);
    // 0x80229240: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80229244: ori         $a0, $a0, 0x2
    ctx->r4 = ctx->r4 | 0X2;
    // 0x80229248: andi        $a1, $a1, 0x7
    ctx->r5 = ctx->r5 & 0X7;
    // 0x8022924C: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80229250: sh          $a0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r4;
    // 0x80229254: sb          $a1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r5;
L_80229258:
    // 0x80229258: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022925C: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80229260: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80229264: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80229268: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022926C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229270: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229274: jr          $ra
    // 0x80229278: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80229278: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022B710_ovl18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B710: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022B714: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022B718: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B71C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022B720: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022B724: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B728: beq         $v1, $v0, L_8022B78C
    if (ctx->r3 == ctx->r2) {
        // 0x8022B72C: sb          $zero, 0x330($s0)
        MEM_B(0X330, ctx->r16) = 0;
            goto L_8022B78C;
    }
    // 0x8022B72C: sb          $zero, 0x330($s0)
    MEM_B(0X330, ctx->r16) = 0;
    // 0x8022B730: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022B734: beql        $v0, $zero, L_8022B74C
    if (ctx->r2 == 0) {
        // 0x8022B738: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022B74C;
    }
    goto skip_0;
    // 0x8022B738: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022B73C: beq         $v1, $zero, L_8022B75C
    if (ctx->r3 == 0) {
        // 0x8022B740: nop
    
            goto L_8022B75C;
    }
    // 0x8022B740: nop

    // 0x8022B744: j           L_8022B848
    // 0x8022B748: nop

        goto L_8022B848;
    // 0x8022B748: nop

L_8022B74C:
    // 0x8022B74C: beq         $v1, $v0, L_8022B7EC
    if (ctx->r3 == ctx->r2) {
        // 0x8022B750: nop
    
            goto L_8022B7EC;
    }
    // 0x8022B750: nop

    // 0x8022B754: j           L_8022B848
    // 0x8022B758: nop

        goto L_8022B848;
    // 0x8022B758: nop

L_8022B75C:
    // 0x8022B75C: lbu         $v0, 0x333($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X333);
    // 0x8022B760: beq         $v0, $zero, L_8022B7CC
    if (ctx->r2 == 0) {
        // 0x8022B764: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8022B7CC;
    }
    // 0x8022B764: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022B768: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022B76C: lh          $a3, 0x44($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X44);
    // 0x8022B770: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022B774: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022B778: sb          $v0, 0x333($s0)
    MEM_B(0X333, ctx->r16) = ctx->r2;
    // 0x8022B77C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8022B780: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8022B784: j           L_8022B7B4
    // 0x8022B788: addiu       $a2, $a2, 0x800
    ctx->r6 = ADD32(ctx->r6, 0X800);
        goto L_8022B7B4;
    // 0x8022B788: addiu       $a2, $a2, 0x800
    ctx->r6 = ADD32(ctx->r6, 0X800);
L_8022B78C:
    // 0x8022B78C: lbu         $v0, 0x333($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X333);
    // 0x8022B790: beq         $v0, $zero, L_8022B7CC
    if (ctx->r2 == 0) {
        // 0x8022B794: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8022B7CC;
    }
    // 0x8022B794: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022B798: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022B79C: lh          $a3, 0x44($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X44);
    // 0x8022B7A0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022B7A4: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022B7A8: sb          $v0, 0x333($s0)
    MEM_B(0X333, ctx->r16) = ctx->r2;
    // 0x8022B7AC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8022B7B0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
L_8022B7B4:
    // 0x8022B7B4: jal         0x8004DBA0
    // 0x8022B7B8: nop

    func_8004DBA0_28FA0(rdram, ctx);
        goto after_0;
    // 0x8022B7B8: nop

    after_0:
    // 0x8022B7BC: lhu         $v0, 0x44($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X44);
    // 0x8022B7C0: addiu       $v0, $v0, -0xA
    ctx->r2 = ADD32(ctx->r2, -0XA);
    // 0x8022B7C4: j           L_8022B848
    // 0x8022B7C8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
        goto L_8022B848;
    // 0x8022B7C8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
L_8022B7CC:
    // 0x8022B7CC: lbu         $v1, 0x332($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X332);
    // 0x8022B7D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B7D4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022B7D8: sb          $zero, 0x336($s0)
    MEM_B(0X336, ctx->r16) = 0;
    // 0x8022B7DC: sb          $zero, 0x33B($s0)
    MEM_B(0X33B, ctx->r16) = 0;
    // 0x8022B7E0: andi        $v1, $v1, 0xFB
    ctx->r3 = ctx->r3 & 0XFB;
    // 0x8022B7E4: j           L_8022B848
    // 0x8022B7E8: sb          $v1, 0x332($s0)
    MEM_B(0X332, ctx->r16) = ctx->r3;
        goto L_8022B848;
    // 0x8022B7E8: sb          $v1, 0x332($s0)
    MEM_B(0X332, ctx->r16) = ctx->r3;
L_8022B7EC:
    // 0x8022B7EC: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x8022B7F0: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022B7F4: beq         $v0, $a1, L_8022B804
    if (ctx->r2 == ctx->r5) {
        // 0x8022B7F8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022B804;
    }
    // 0x8022B7F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B7FC: j           L_8022B838
    // 0x8022B800: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
        goto L_8022B838;
    // 0x8022B800: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_8022B804:
    // 0x8022B804: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x8022B808: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022B80C: bne         $v1, $v0, L_8022B848
    if (ctx->r3 != ctx->r2) {
        // 0x8022B810: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_8022B848;
    }
    // 0x8022B810: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022B814: lbu         $v0, 0x332($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X332);
    // 0x8022B818: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022B81C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022B820: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x8022B824: sb          $zero, 0x336($s0)
    MEM_B(0X336, ctx->r16) = 0;
    // 0x8022B828: sb          $zero, 0x33B($s0)
    MEM_B(0X33B, ctx->r16) = 0;
    // 0x8022B82C: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x8022B830: andi        $v0, $v0, 0xFB
    ctx->r2 = ctx->r2 & 0XFB;
    // 0x8022B834: sb          $v0, 0x332($s0)
    MEM_B(0X332, ctx->r16) = ctx->r2;
L_8022B838:
    // 0x8022B838: jal         0x800502EC
    // 0x8022B83C: nop

    func_800502EC_2B6EC(rdram, ctx);
        goto after_1;
    // 0x8022B83C: nop

    after_1:
    // 0x8022B840: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022B844: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
L_8022B848:
    // 0x8022B848: jal         0x80040F30
    // 0x8022B84C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_2;
    // 0x8022B84C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022B850: andi        $v0, $v0, 0x3000
    ctx->r2 = ctx->r2 & 0X3000;
    // 0x8022B854: bne         $v0, $zero, L_8022B870
    if (ctx->r2 != 0) {
        // 0x8022B858: nop
    
            goto L_8022B870;
    }
    // 0x8022B858: nop

    // 0x8022B85C: jal         0x8003E934
    // 0x8022B860: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_3;
    // 0x8022B860: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022B864: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022B868: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B86C: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_8022B870:
    // 0x8022B870: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022B874: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022B878: jr          $ra
    // 0x8022B87C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022B87C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
